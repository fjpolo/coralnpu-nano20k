// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreMiniAxi.h for the primary calling header

#include "VCoreMiniAxi__pch.h"
#include "VCoreMiniAxi___024root.h"

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_sequent__TOP__1(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__rst_sync__DOT__rst_delay_reg 
        = ((IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_aresetn)
            ? (1U | (0xeU & ((IData)(vlSelf->CoreMiniAxi__DOT__rst_sync__DOT__rst_delay_reg) 
                             << 1U))) : 0U);
    if ((1U & (~ (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_aclk)))) {
        vlSelf->CoreMiniAxi__DOT__rst_sync__DOT__icg__DOT__en_latch 
            = (IData)((((IData)(vlSelf->CoreMiniAxi__DOT__rst_sync__DOT__rst_delay_reg) 
                        >> 3U) | (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_te)));
    }
    vlSelf->CoreMiniAxi__DOT___rst_sync_clk_o = ((IData)(vlSelf->CoreMiniAxi__DOT__rst_sync__DOT__icg__DOT__en_latch) 
                                                 & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_aclk));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_sequent__TOP__3(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive = 0;
    VlWide<4>/*127:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata;
    VL_ZERO_W(128, __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata);
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1 = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1 = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0 = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1 = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos = 0;
    VlWide<16>/*511:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    // Body
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap;
    vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap;
    vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U];
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U];
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U];
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U];
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full;
    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
        = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0 
        = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_4) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last)));
    __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_3) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last)));
    if (vlSelf->CoreMiniAxi__DOT___global_reset_T_2) {
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap = 0U;
        vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap_1 = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1 = 1U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap = 0U;
        vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap_1 = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readsIssued = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1 = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1 = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1 = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full = 0U;
        __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_lock = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_id = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_cache = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_qos = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_region = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_lock = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_id = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_cache = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_qos = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_region = 0U;
        vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_bits = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__maybe_full = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__maybe_full = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_last = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_burst = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[0U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[1U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[2U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[3U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_strb = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__maybe_full = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__maybe_full = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter__DOT__ctrl_validMask_grantMask_lastGrant = 0U;
        vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__maybe_full = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_burst = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__csr__DOT__resetReg = 3U;
        vlSelf->CoreMiniAxi__DOT__csr__DOT__statusReg = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_burst = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_burst = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0 = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1 = 1U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[0U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[1U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[2U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[3U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_strb = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[0U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[1U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[2U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[3U] = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_strb = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0 = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_burst = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_prot = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_len = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_size = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_burst = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0 = 0U;
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1 = 1U;
    } else {
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__dec) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos 
                = (3U & ((2U > (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos_c))
                          ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos_c)
                          : ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos) 
                             - (IData)(1U))));
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__dec) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos 
                = (3U & ((2U > (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos_c))
                          ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos_c)
                          : ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos) 
                             - (IData)(1U))));
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__dec) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos 
                = (3U & ((2U > (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos_c))
                          ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos_c)
                          : ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos) 
                             - (IData)(1U))));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_out_valid_0) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_out_ready))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice_io_in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_in_ready_0))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos) 
                         - (IData)(1U)));
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_lock = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_id = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_cache = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_qos = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_region = 0U;
            __Vtemp_14[0U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr;
            __Vtemp_14[1U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_addr;
            __Vtemp_14[2U] = (IData)(((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr)) 
                                      << 0x20U));
            __Vtemp_14[3U] = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr)) 
                                       << 0x20U) >> 0x20U));
            if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount))) {
                if ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos))))) {
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_prot 
                        = (7U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_prot) 
                                   << 9U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_prot) 
                                              << 3U) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_prot))) 
                                 >> (0xfU & ((IData)(3U) 
                                             * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos)))));
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_size 
                        = (7U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_size) 
                                   << 9U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_size) 
                                              << 3U) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_size))) 
                                 >> (0xfU & ((IData)(3U) 
                                             * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos)))));
                } else {
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_prot = 0U;
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_size 
                        = (7U & 0U);
                }
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_burst 
                    = (3U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_burst) 
                               << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_burst) 
                                          << 2U) | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_burst))) 
                             >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 1U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_len 
                    = (0xffU & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_len) 
                                  << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_len) 
                                                << 8U) 
                                               | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_len))) 
                                >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 3U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_addr 
                    = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 5U)))
                         ? 0U : (__Vtemp_14[(((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 5U))) 
                                             >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 5U))))) 
                       | (__Vtemp_14[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 5U) 
                                            >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos), 5U))));
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_prot = 2U;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_burst = 1U;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_len 
                    = (0xffU & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_len));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_size 
                    = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_addr 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr;
            }
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__do_deq) {
            vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1) 
                                        + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0) 
                                        + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__do_deq) {
            vlSelf->__Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_valid) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] 
                = ((vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] 
                    & (~ vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[0U])) 
                   | (vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_bits_data[0U] 
                      & vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[0U]));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] 
                = ((vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] 
                    & (~ vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[1U])) 
                   | (vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_bits_data[1U] 
                      & vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[1U]));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] 
                = ((vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] 
                    & (~ vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[2U])) 
                   | (vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_bits_data[2U] 
                      & vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[2U]));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] 
                = ((vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] 
                    & (~ vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[3U])) 
                   | (vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_bits_data[3U] 
                      & vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[3U]));
        } else if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__newTxn) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] = 0U;
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] = 0U;
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] = 0U;
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] = 0U;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice_io_in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_in_ready_0))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos) 
                         - (IData)(1U)));
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_last 
                = (1U & ((~ (IData)((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount)))) 
                         | ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last) 
                              << 3U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last) 
                                         << 1U) | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last))) 
                            >> (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos))));
            __Vtemp_8[0U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[0U];
            __Vtemp_8[1U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[1U];
            __Vtemp_8[2U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[2U];
            __Vtemp_8[3U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[3U];
            __Vtemp_8[4U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[0U];
            __Vtemp_8[5U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[1U];
            __Vtemp_8[6U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[2U];
            __Vtemp_8[7U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[3U];
            __Vtemp_8[8U] = 0U;
            __Vtemp_8[9U] = 0U;
            __Vtemp_8[0xaU] = 0U;
            __Vtemp_8[0xbU] = 0U;
            __Vtemp_8[0xcU] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[0U];
            __Vtemp_8[0xdU] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[1U];
            __Vtemp_8[0xeU] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[2U];
            __Vtemp_8[0xfU] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[3U];
            if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount))) {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[0U] 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U)))
                         ? 0U : (__Vtemp_8[((IData)(1U) 
                                            + (0xfU 
                                               & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                                  >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))))) 
                       | (__Vtemp_8[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                             >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[1U] 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U)))
                         ? 0U : (__Vtemp_8[((IData)(2U) 
                                            + (0xfU 
                                               & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                                  >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))))) 
                       | (__Vtemp_8[((IData)(1U) + 
                                     (0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                              >> 5U)))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[2U] 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U)))
                         ? 0U : (__Vtemp_8[((IData)(3U) 
                                            + (0xfU 
                                               & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                                  >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))))) 
                       | (__Vtemp_8[((IData)(2U) + 
                                     (0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                              >> 5U)))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[3U] 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U)))
                         ? 0U : (__Vtemp_8[((IData)(4U) 
                                            + (0xfU 
                                               & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                                  >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))))) 
                       | (__Vtemp_8[((IData)(3U) + 
                                     (0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U) 
                                              >> 5U)))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 7U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_strb 
                    = (0xffffU & (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_strb)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_strb)) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_strb)))) 
                                          >> (0x3fU 
                                              & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos), 4U)))));
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[0U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[0U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[1U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[1U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[2U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[2U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data[3U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[3U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_strb 
                    = (0xffffU & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask0));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice_io_in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_in_ready_0))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos) 
                         - (IData)(1U)));
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_lock = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_id = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_cache = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_qos = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_region = 0U;
            __Vtemp_12[0U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_addr;
            __Vtemp_12[1U] = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_addr;
            __Vtemp_12[2U] = (IData)(((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_addr)) 
                                      << 0x20U));
            __Vtemp_12[3U] = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_addr)) 
                                       << 0x20U) >> 0x20U));
            if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount))) {
                if ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos))))) {
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_prot 
                        = (7U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_prot) 
                                   << 9U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_prot) 
                                              << 3U) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_prot))) 
                                 >> (0xfU & ((IData)(3U) 
                                             * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos)))));
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_size 
                        = (7U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_size) 
                                   << 9U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_size) 
                                              << 3U) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_size))) 
                                 >> (0xfU & ((IData)(3U) 
                                             * (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos)))));
                } else {
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_prot = 0U;
                    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_size 
                        = (7U & 0U);
                }
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_len 
                    = (0xffU & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_len) 
                                  << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_len) 
                                                << 8U) 
                                               | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_len))) 
                                >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 3U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_burst 
                    = (3U & ((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_burst) 
                               << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_burst) 
                                          << 2U) | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_burst))) 
                             >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 1U))));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_addr 
                    = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 5U)))
                         ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 5U))) 
                                             >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 5U))))) 
                       | (__Vtemp_12[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 5U) 
                                            >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos), 5U))));
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_prot = 2U;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_len = 0U;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_burst = 1U;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_size 
                    = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_addr 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ_io_in_bits_0_bits_addr;
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_out_valid_0) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_out_ready))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_out_valid_0) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_out_ready))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__dec))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount 
                = (3U & (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount) 
                          + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid)
                              ? ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))
                              : 0U)) - (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__dec)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__dec))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount 
                = (3U & (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount) 
                          + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid)
                              ? ((IData)(1U) + (0x10U 
                                                < vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___crossLineBoundary_T_4))
                              : 0U)) - (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__dec)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__dec))) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount 
                = (3U & (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount) 
                          + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid)
                              ? ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))
                              : 0U)) - (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__dec)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__do_enq) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readsIssued = 0U;
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT___addrArbiter_io_out_bits_addr;
        } else {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readsIssued 
                = (0x1ffU & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readsIssued) 
                             + (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__issueRead)));
            if ((1U & (~ ((~ (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeWriteData) 
                               & (~ (IData)(vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy))) 
                              | ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeIssueRead) 
                                 & (~ (IData)(vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy))))) 
                          | ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__validBurst) 
                             & (0U == (0xc000U & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__ram[0U]))))))) {
                if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__validBurst) 
                     & (0x4000U == (0xc000U & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__ram[0U])))) {
                    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
                        = (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
                           + (0xffU & ((IData)(1U) 
                                       << (7U & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__ram[0U] 
                                                 >> 0x10U)))));
                } else if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__validBurst) 
                            & (0x8000U == (0xc000U 
                                           & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__ram[0U])))) {
                    __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
                        = ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT___addrNext_newAddr_T_1 
                            >= ((IData)(0x10U) + vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddrBase))
                            ? vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddrBase
                            : vlSelf->CoreMiniAxi__DOT__axiSlave__DOT___addrNext_newAddr_T_1);
                }
            }
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_deq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_deq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_deq) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__do_enq) 
             != (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeActive)
                   ? (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeResponse_valid)
                   : ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readActive) 
                      & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__full)) 
                         & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readIssued) 
                            & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue_io_enq_bits_last))))) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full)))) {
            __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__do_enq;
        }
        vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_bits 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_0_readDataAddr_valid_0)
                ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_1_readDataAddr_valid_0)
                         ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT___lastReadSelected_T_3_valid) 
                                 << 1U)));
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_enq;
        }
        if (((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full)) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter__DOT__io_out_valid_0))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter__DOT__ctrl_validMask_grantMask_lastGrant 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter__DOT__io_chosen_choice;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_enq;
        }
        __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive 
            = ((~ ((IData)(vlSelf->CoreMiniAxi__DOT___core_io_ebus_dbus_valid) 
                   & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__io_dbus_ready_0))) 
               & ((IData)(vlSelf->CoreMiniAxi__DOT___core_io_ebus_dbus_valid) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive)));
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__newTxn) {
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted = 0U;
        } else if (((((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive) 
                      & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write)) 
                     & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_write_resp_valid)) 
                    | (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive) 
                        & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write))) 
                       & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_valid)))) {
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted 
                = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___io_dbus_ready_T_11;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT___fabricMux_io_ports_2_writeDataAddr_valid) 
             & (0U == vlSelf->CoreMiniAxi__DOT___fabricMux_io_ports_2_readDataAddr_bits))) {
            vlSelf->CoreMiniAxi__DOT__csr__DOT__resetReg 
                = vlSelf->CoreMiniAxi__DOT___fabricMux_io_ports_2_writeDataBits[0U];
        }
        vlSelf->CoreMiniAxi__DOT__csr__DOT__statusReg 
            = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fault) 
                << 1U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__halted));
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid) 
             & (0U != (3U & ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0))) 
                             + (((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0)) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_7)) 
                                | ((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1)) 
                                   & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_20)))))))) {
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_addr 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0)
                    ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_bits_addr
                    : vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ_io_in_bits_0_bits_addr);
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_prot = 2U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_len = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_size 
                = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_0_burst = 1U;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid) 
             & (0U != (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0) 
                             + (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_7)) 
                                | ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1) 
                                   & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_20)))))))) {
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_addr 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0)
                    ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ_io_in_bits_0_bits_addr
                    : vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_bits_addr);
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_prot = 2U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_len = 0U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_size 
                = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mem_1_burst = 1U;
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0) 
                                        + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1) 
                                        + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))));
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_3) {
            if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0) {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[0U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[0U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[1U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[1U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[2U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[2U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[3U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[3U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_strb 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask1;
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[0U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[0U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[1U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[1U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[2U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[2U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_data[3U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[3U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_strb 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask0;
            }
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_4) {
            if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0) {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[0U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[0U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[1U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[1U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[2U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[2U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[3U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_0_bits_data[3U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_strb 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask0;
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[0U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[0U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[1U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[1U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[2U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[2U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_data[3U] 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_in_bits_1_bits_data[3U];
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_strb 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask1;
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid) 
             & (0U != (3U & ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0))) 
                             + (((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0)) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT___inxvalid_T_7)) 
                                | ((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1)) 
                                   & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT___inxvalid_T_20)))))))) {
            if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0) {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr 
                    = (0xfffffff0U & ((IData)(0x10U) 
                                      + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_len = 0U;
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_addr 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_len 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_len;
            }
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_prot = 2U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_size 
                = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_0_burst = 1U;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid) 
             & (0U != (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0) 
                             + (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT___inxvalid_T_7)) 
                                | ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1) 
                                   & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT___inxvalid_T_20)))))))) {
            if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0) {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_addr 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr;
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_len 
                    = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_len;
            } else {
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_addr 
                    = (0xfffffff0U & ((IData)(0x10U) 
                                      + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr));
                vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_len = 0U;
            }
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_prot = 2U;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_size 
                = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_in_bits_0_bits_size;
            vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mem_1_burst = 1U;
        }
        if (vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid) {
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0) 
                                        + (0x10U < vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___crossLineBoundary_T_4))));
            __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1 
                = (1U & ((IData)(1U) + ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1) 
                                        + (0x10U < vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___crossLineBoundary_T_4))));
        }
    }
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2))) 
           && (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_0_readDataAddr_valid_0) 
                | (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_1_readDataAddr_valid_0)) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT___lastReadSelected_T_3_valid)));
    vlSelf->CoreMiniAxi__DOT__axiSlaveEnable = (1U 
                                                & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2)));
    vlSelf->CoreMiniAxi__DOT__csr__DOT__readDataNext_pipe_v 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__csr__DOT__readDataValid));
    vlSelf->CoreMiniAxi__DOT__dtcmWrapper__DOT__readIssued 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_readDataAddr_valid) 
              & (~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid))));
    vlSelf->CoreMiniAxi__DOT__itcmWrapper__DOT__readIssued 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_readDataAddr_valid) 
              & (~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_0_q__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__addrArbiter_io_in_1_q__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U] 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U] 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U] 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U] 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_0_last;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mem_1_last;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount;
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full 
        = __Vdly__CoreMiniAxi__DOT__axiSlave__DOT__axiAddrCmd_q__DOT__full;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__txnActive;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_out_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos) 
           != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_out_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos) 
           != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_out_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos) 
           != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__ptr_match 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap) 
           == (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__wrap_1));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ptr_match 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap) 
           == (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__ptr_match 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap) 
           == (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__wrap_1));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readIssued 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___global_reset_T_2))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__issueRead));
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_write_addr_bits_lock, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_lock);
    VL_ASSIGN_SWI(6,vlSelf->io_axi_master_write_addr_bits_id, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_id);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_write_addr_bits_cache, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_cache);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_write_addr_bits_qos, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_qos);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_write_addr_bits_region, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_region);
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_read_addr_bits_lock, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_lock);
    VL_ASSIGN_SWI(6,vlSelf->io_axi_master_read_addr_bits_id, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_id);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_read_addr_bits_cache, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_cache);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_read_addr_bits_qos, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_qos);
    VL_ASSIGN_SWI(4,vlSelf->io_axi_master_read_addr_bits_region, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_region);
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT___io_source_readData_T_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_valid) 
           & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_bits)));
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT___io_source_readData_T_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_valid) 
           & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_bits)));
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT___io_source_readData_T_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_valid) 
           & (2U == (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__lastReadSelected_bits)));
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_write_data_bits_last, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_last);
    VL_ASSIGN_SWI(3,vlSelf->io_axi_master_write_addr_bits_prot, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_prot);
    VL_ASSIGN_SWI(8,vlSelf->io_axi_master_write_addr_bits_len, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_len);
    VL_ASSIGN_SWI(2,vlSelf->io_axi_master_write_addr_bits_burst, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_burst);
    VL_ASSIGN_SWW(128,vlSelf->io_axi_master_write_data_bits_data, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_data);
    VL_ASSIGN_SWI(3,vlSelf->io_axi_master_write_addr_bits_size, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_size);
    VL_ASSIGN_SWI(32,vlSelf->io_axi_master_write_addr_bits_addr, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__mem_0_addr);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos_c 
        = (7U & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__outpos)));
    VL_ASSIGN_SWI(16,vlSelf->io_axi_master_write_data_bits_strb, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__mem_0_strb);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos_c 
        = (7U & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__outpos)));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___io_dbus_ready_T_11 
        = (3U & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted)));
    VL_ASSIGN_SWI(3,vlSelf->io_axi_master_read_addr_bits_prot, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_prot);
    VL_ASSIGN_SWI(2,vlSelf->io_axi_master_read_addr_bits_burst, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_burst);
    VL_ASSIGN_SWI(8,vlSelf->io_axi_master_read_addr_bits_len, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_len);
    VL_ASSIGN_SWI(3,vlSelf->io_axi_master_read_addr_bits_size, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_size);
    VL_ASSIGN_SWI(32,vlSelf->io_axi_master_read_addr_bits_addr, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__mem_0_addr);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos_c 
        = (7U & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__outpos)));
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_read_addr_valid, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_out_valid_0);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_out_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_out_valid_0) 
           & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_addr_ready));
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_write_data_valid, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_out_valid_0);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_out_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_out_valid_0) 
           & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_write_data_ready));
    VL_ASSIGN_SII(1,vlSelf->io_axi_master_write_addr_valid, vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_out_valid_0);
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_out_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_out_valid_0) 
           & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_write_addr_ready));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__empty 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__maybe_full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__ptr_match));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__full 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__ptr_match) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__maybe_full));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__full 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ptr_match) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__maybe_full));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__empty 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__maybe_full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ptr_match));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__full 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__ptr_match) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__maybe_full));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__empty 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__maybe_full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__ptr_match));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_0;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__inxpos_1;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_0;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1 
        = __Vdly__CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__inxpos_1;
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_in_ready_0 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__ipos) 
            == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__opos)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_out_ready));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_in_ready_0 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__ipos) 
            == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__opos)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_out_ready));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_in_ready_0 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__ipos) 
            == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__opos)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_out_ready));
    VL_ASSIGN_SII(1,vlSelf->io_axi_slave_write_resp_valid, 
                  ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__empty)) 
                   & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable)));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_deq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__empty)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable) 
              & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_slave_write_resp_ready)));
    VL_ASSIGN_SII(1,vlSelf->io_axi_slave_write_data_ready, 
                  ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__full)) 
                   & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable)));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__full)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable) 
              & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_slave_write_data_valid)));
    VL_ASSIGN_SII(1,vlSelf->io_axi_slave_read_data_valid, 
                  ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__empty)) 
                   & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable)));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_deq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__empty)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlaveEnable) 
              & (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_slave_read_data_ready)));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__do_enq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readDataQueue__DOT__full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__readIssued));
}

extern const VlWide<17>/*543:0*/ VCoreMiniAxi__ConstPool__CONST_h00a54031_0;
extern const VlWide<17>/*543:0*/ VCoreMiniAxi__ConstPool__CONST_h00a54001_0;
extern const VlWide<16>/*511:0*/ VCoreMiniAxi__ConstPool__CONST_h882d9f06_0;
extern const VlWide<16>/*511:0*/ VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0;
extern const VlWide<15>/*479:0*/ VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0;
extern const VlWide<13>/*415:0*/ VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0;
extern const VlWide<9>/*287:0*/ VCoreMiniAxi__ConstPool__CONST_h52851867_0;

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_sequent__TOP__4(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_sequent__TOP__4\n"); );
    // Init
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47);
    VlWide<17>/*519:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51;
    VL_ZERO_W(520, CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51);
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 = 0;
    QData/*63:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7;
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_29;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_29 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_39;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_39 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_49;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_49 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_59;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_59 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_29;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_29 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_39;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_39 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_49;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_49 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_59;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_59 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_29;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_29 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_39;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_39 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_49;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_49 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_59;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_59 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_29;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_29 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_39;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_39 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_49;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_49 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_59;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_59 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349;
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_22;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_22 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_32;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_32 = 0;
    SData/*14:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42 = 0;
    CData/*7:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_63;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_63 = 0;
    CData/*7:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73 = 0;
    IData/*31:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard = 0;
    CData/*4:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags = 0;
    QData/*63:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle = 0;
    QData/*63:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos = 0;
    CData/*1:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute = 0;
    CData/*5:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count = 0;
    IData/*31:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide = 0;
    IData/*31:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1 = 0;
    IData/*31:0*/ __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard = 0;
    VlWide<16>/*511:0*/ __Vtemp_21;
    VlWide<16>/*511:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<16>/*511:0*/ __Vtemp_136;
    VlWide<9>/*287:0*/ __Vtemp_155;
    VlWide<10>/*319:0*/ __Vtemp_156;
    VlWide<11>/*351:0*/ __Vtemp_157;
    VlWide<9>/*287:0*/ __Vtemp_187;
    VlWide<10>/*319:0*/ __Vtemp_188;
    VlWide<11>/*351:0*/ __Vtemp_189;
    VlWide<9>/*287:0*/ __Vtemp_219;
    VlWide<10>/*319:0*/ __Vtemp_220;
    VlWide<11>/*351:0*/ __Vtemp_221;
    VlWide<9>/*287:0*/ __Vtemp_259;
    VlWide<10>/*319:0*/ __Vtemp_260;
    VlWide<11>/*351:0*/ __Vtemp_261;
    // Body
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_7 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_7;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__opos 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__opos;
    vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__ipos 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__ipos;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide;
    __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fault 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_fault) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_tag_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting))) 
               && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_tag_q)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_mask_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting) 
               || (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_mask_q)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fpuActive 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset)) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_csr_in_fflags_valid_T)) 
              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___instQueue_io_deq_ready_T) 
                 | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fpuActive))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wfi 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wfi)
                      ? (~ (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_irq))
                      : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
                         & (0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__halted 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
                 & ((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                    & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)))) 
                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_fault)) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__halted)));
    if (vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset) {
        vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_aux_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__enqPtr = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued = 0U;
        vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[0U] = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[1U] = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[2U] = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[3U] = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusCmd_bits = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_data = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushall = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushat = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__maybe_full = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_target = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_target = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_target = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_0 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_3 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_0 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_3 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_bits = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkData = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkData = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkData = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkData = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkAddr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_brchFwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_addr = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_inst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkValid = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkValid = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkValid = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkValid = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_mantissa = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_exponent = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_sign = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3 = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__addr2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed2d = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed2r = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide2 = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__denom = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_target = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_error = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_vldst = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_adrx = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_error = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__pc = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__addr1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mpc = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__msp = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcause = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtval = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext0 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext2 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext3 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext4 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext5 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext6 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext7 = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__frm = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mie = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtvec = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mscratch = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mepc = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mpp = 0U;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle = 0ULL;
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret = 0ULL;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_pcEx = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op = 0U;
    } else {
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__dec) {
            vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos 
                = (0xfU & ((8U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos_c))
                            ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos_c)
                            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos) 
                               - (IData)(7U))));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT___arb_io_out_valid) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT___arb_io_out_valid;
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_aux_q 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting)
                ? 0U : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__result_aux_q));
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__enqPtr = 0U;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued = 0U;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr = 0U;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__enqPtr 
                = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__enqPtr) 
                         + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___ctrl_io_bufferRequest_nValid)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued 
                = (0xfU & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued) 
                            + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___ctrl_io_bufferRequest_nValid)) 
                           - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT____Vcellinp__circularBuffer__io_deqReady)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr 
                = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr) 
                         + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT____Vcellinp__circularBuffer__io_deqReady)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__data__io_in_valid) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__io_out_valid_0))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count 
                = (3U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count) 
                          + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__data__io_in_valid)) 
                         - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__io_out_valid_0)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__ivalid) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__dec))) {
            vlSelf->__Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount 
                = (0xfU & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount) 
                            + ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__ivalid)
                                ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)
                                : 0U)) - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__dec)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_out_valid_0) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_out_ready))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__do_enq) 
             != ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue_io_deq_ready) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full)))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__do_enq;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_enq) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_deq) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[0U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[0U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[1U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[1U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[2U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[2U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[3U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[3U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_nxt_state;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusCmd_bits 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusFired)
                ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__blockNewFetch)
                    ? 0U : vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                : 0U);
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29;
        }
        if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_enq) 
             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_deq))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__maybe_full 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_enq;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_slog) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogAddr 
                = (3U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                         >> 0xdU));
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_target 
                = ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])
                    ? ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                                       << 0x1cU) | 
                                      (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                       >> 4U))) : (
                                                   (1U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
                                                    : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_3));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_valid) 
                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                      >> 3U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkData 
                = ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                                   << 0x1cU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                                >> 4U)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkAddr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                            >> 0xbU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkValid 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_valid) 
                    & (0U != (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                       >> 0xbU)))) 
                   & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                      | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op))));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_target 
                = ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])
                    ? ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                       << 0x1dU) | 
                                      (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                       >> 3U))) : (
                                                   (1U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
                                                    : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_2));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkData 
                = ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                   << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                                >> 3U)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkAddr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                            >> 0xaU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_valid) 
                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                      >> 2U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkValid 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_valid) 
                    & (0U != (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                       >> 0xaU)))) 
                   & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
                      | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op))));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_target 
                = ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])
                    ? ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                       >> 2U))) : (
                                                   (1U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
                                                    : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_1));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkData 
                = ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                   << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                                >> 2U)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkAddr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                            >> 9U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_valid) 
                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                      >> 1U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkValid 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_valid) 
                    & (0U != (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                       >> 9U)))) & 
                   ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
                    | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op))));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op;
        }
        if ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_0 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                 >> 1U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_0 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                 >> 1U));
        }
        if ((2U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_1 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                    << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                 >> 2U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_1 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                    << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                 >> 2U));
        }
        if ((4U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_2 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                    << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                 >> 3U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_2 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                    << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                 >> 3U));
        }
        if ((8U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_3 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                    << 0x1cU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                 >> 4U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_3 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                    << 0x1cU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                 >> 4U));
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_valid) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fetch__io_iflush_valid) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_bits 
                    = ((IData)(4U) + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc);
            } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__branch_valid) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_bits 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__ctrl__io_branch_bits;
            } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__writeToBuffer) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_bits 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__nextFetchPc;
            }
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_bits 
                = (0xfffffffcU & vlSelf->CoreMiniAxi__DOT__csr__DOT__pcStartReg);
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__addr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                            >> 8U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_0_bits_op;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__addr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                            >> 0xbU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_3_bits_op;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__addr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                            >> 0xaU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_2_bits_op;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__addr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                            >> 9U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_1_bits_op;
        }
        if ((0x80U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[8U])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[6U] 
                         >> 6U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[7U] 
                    << 0x19U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[6U] 
                                 >> 7U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[8U] 
                    << 0x19U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[7U] 
                                 >> 7U));
        }
        if ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[4U])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[2U] 
                         >> 2U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[3U] 
                    << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[2U] 
                                 >> 3U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[4U] 
                    << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[3U] 
                                 >> 3U));
        }
        if ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[2U])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_brchFwd 
                = (1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0U]);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[1U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0U] 
                                 >> 1U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[2U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[1U] 
                                 >> 1U));
        }
        if ((0x20U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[6U])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[4U] 
                         >> 4U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[5U] 
                    << 0x1bU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[4U] 
                                 >> 5U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[6U] 
                    << 0x1bU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[5U] 
                                 >> 5U));
        }
        if ((0x200U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xaU])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[8U] 
                         >> 8U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xaU] 
                    << 0x17U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[9U] 
                                 >> 9U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[9U] 
                    << 0x17U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[8U] 
                                 >> 9U));
        }
        if ((0x800U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xcU])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xaU] 
                         >> 0xaU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xcU] 
                    << 0x15U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xbU] 
                                 >> 0xbU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xbU] 
                    << 0x15U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xaU] 
                                 >> 0xbU));
        }
        if ((0x2000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xeU])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xcU] 
                         >> 0xcU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xeU] 
                    << 0x13U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xdU] 
                                 >> 0xdU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xdU] 
                    << 0x13U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xcU] 
                                 >> 0xdU));
        }
        if ((0x8000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0x10U])) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_brchFwd 
                = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xeU] 
                         >> 0xeU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_addr 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0x10U] 
                    << 0x11U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xfU] 
                                 >> 0xfU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_inst 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xfU] 
                    << 0x11U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__rotatedInput_rotated[0xeU] 
                                 >> 0xfU));
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                    << 0x1cU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                 >> 4U));
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_6;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_value;
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_3_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_7;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_19) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x13U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_19) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_18) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x12U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_18) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_17) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x11U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_17) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_16) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x10U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_16) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_15) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xfU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_15) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_14) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xeU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_14) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_13) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_13) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_12) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_12) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_11) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_11) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_10) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_10) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_3) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_3) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_2) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_2) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_1) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_1) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_4) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_4) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_5) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_5) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_6) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_6) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_28) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1cU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_28) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_7) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_7) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_8) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_8) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_9) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_9) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_20) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x14U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_20) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_21) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x15U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_21) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_22) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x16U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_22) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_23) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x17U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_23) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_24) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x18U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_24) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_25) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x19U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_25) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_26) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1aU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_26) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_27) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1bU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_27) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_29) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1dU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_29) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_30) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1eU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_30) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_31) 
             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v) 
                & (0x1fU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_31) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
                             >> 0x1fU));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_mantissa 
                    = (0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data);
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_exponent 
                    = (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                                >> 0x17U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_sign 
                    = (1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_data 
                             >> 0x1fU));
            }
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                    << 0x1dU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                 >> 3U));
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_4;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_value;
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_2_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_5;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                    << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                 >> 2U));
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_2;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_value;
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_1_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_3;
        }
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___divide1_T) 
               | ((0x1eU != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count)) 
                  & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active)));
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active;
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active) 
             & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__addr2 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__addr1;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed2d 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1) 
                    & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                        >> 0x1fU) != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1 
                                      >> 0x1fU))) & 
                   (0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed2r 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1) 
                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                      >> 0x1fU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide2 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide1;
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__clz;
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                = (IData)((0x7fffffffffffffffULL & 
                           ((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)) 
                            << (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__clz))));
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain = 0U;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__denom 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1) 
                    & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1 
                       >> 0x1fU)) ? ((IData)(1U) + 
                                     (~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1))
                    : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
        } else if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute) 
                    & (~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count) 
                          >> 5U)))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count)));
            if ((1U & (IData)((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__subtract 
                               >> 0x20U)))) {
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                    = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                       << 1U);
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain 
                    = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain 
                        << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                                  >> 0x1fU));
            } else {
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                    = (1U | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                             << 1U));
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain 
                    = (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__subtract);
            }
        } else if ((IData)((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count) 
                             >> 5U) & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full))))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count = 0U;
        }
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                & (~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_clr)) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_flt_valid)
                   ? ((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                               >> 8U)))
                   : 0U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_error 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_clr) 
               != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_clr);
        if (((0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_set) 
             | (0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_clr0))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
                = (0xfffffffeU & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
                                   & ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_clr0) 
                                      << 1U)) | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_set));
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_error 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_clr0 
                   << 1U)) != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_clr0 
                               << 1U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_next_state;
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__pc 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                 >> 1U));
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn 
            = (((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid) 
                  & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready)) 
                 & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken))) 
                << 3U) | (((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_1_valid) 
                             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready)) 
                            & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken))) 
                           << 2U) | (((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_2_valid) 
                                        & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_2_ready)) 
                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken))) 
                                      << 1U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_3_valid) 
                                                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_3_ready)) 
                                                & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken))))));
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___divide1_T) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide1 
                = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_dvu_0_bits_op)) 
                   | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_dvu_0_bits_op)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1 
                = ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_dvu_0_bits_op)) 
                   | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_dvu_0_bits_op)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__addr1 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                            >> 8U));
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)
                    ? (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                >> 0x10U)) : ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                               << 0x1fU) 
                                              | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                                 >> 1U)));
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_0;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_0_value;
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_0_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_1;
        }
        if (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fmv)) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_6))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags 
                = (0x1fU & (((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                              << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U)) 
                            | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags)));
        } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) {
            if ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))) {
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags 
                    = (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata);
            } else if ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))) {
                __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags 
                    = (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata);
            }
        }
        __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle 
            = (1ULL + ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v)
                        ? (((QData)((IData)(((0xb80U 
                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))
                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                              : (IData)(
                                                        (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle 
                                                         >> 0x20U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((0xb00U 
                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))
                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                                          : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle)))))
                        : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle));
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7e0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mpc 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7e1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__msp 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__usageFault) 
                 | ((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                    | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)) 
                       & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)))))) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcause 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid)
                    ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__load_fault)
                        ? 5U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__store_fault)
                                 ? 7U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__instr_access_fault)
                                          ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_2)
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_3) 
                                                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_4) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_5)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_6) 
                                                    << 1U))))))
                    : (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                        & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)))
                        ? 0xbU : (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                                   & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)))
                                   ? 8U : ((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                                            ? 3U : 
                                           ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__usageFault)
                                             ? 0x19U
                                             : 0U)))));
        } else if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
                    & (0x342U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcause 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__usageFault) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid))) {
            __Vtemp_85[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_0;
            __Vtemp_85[1U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_1;
            __Vtemp_85[2U] = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_3)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_2))));
            __Vtemp_85[3U] = (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_3)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_2))) 
                                      >> 0x20U));
            __Vtemp_87[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data;
            __Vtemp_87[1U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data;
            __Vtemp_87[2U] = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data))));
            __Vtemp_87[3U] = (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data))) 
                                      >> 0x20U));
            __Vtemp_89[0U] = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                               << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                            >> 1U));
            __Vtemp_89[1U] = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                               << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                            >> 2U));
            __Vtemp_89[2U] = (IData)((((QData)((IData)(
                                                       ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                           >> 4U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                                                     << 0x1dU) 
                                                                    | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                       >> 3U))))));
            __Vtemp_89[3U] = (IData)(((((QData)((IData)(
                                                        ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                                          << 0x1cU) 
                                                         | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                            >> 4U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                                                      << 0x1dU) 
                                                                     | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                        >> 3U))))) 
                                      >> 0x20U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtval 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid)
                    ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_1)
                        ? ((1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_fault_valid)) 
                                  | (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)))
                            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__imem_store_fault)
                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr
                                     : ((IData)(vlSelf->CoreMiniAxi__DOT___ebus2axi_io_fault_valid)
                                         ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr
                                         : 0U))) : 
                       (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__instr_access_fault) 
                         | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_2))
                         ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_3)
                                  ? (((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx), 5U)))
                                       ? 0U : (__Vtemp_85[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx), 5U))))) 
                                     | (__Vtemp_85[
                                        (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx), 5U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx), 5U))))
                                  : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_4)
                                      ? (0xfffffffeU 
                                         & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx), 5U)))
                                              ? 0U : 
                                             (__Vtemp_87[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx), 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx), 5U))))) 
                                            | (__Vtemp_87[
                                               (3U 
                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx), 5U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx), 5U)))))
                                      : ((1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_6)) 
                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_5)))
                                          ? 0U : ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                                                                       ? 0U
                                                                       : 3U), 5U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_89[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                                                                         ? 0U
                                                                         : 3U), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                                                                        ? 0U
                                                                        : 3U), 5U))))) 
                                                  | (__Vtemp_89[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,7,32, 
                                                                       ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                                                                         ? 0U
                                                                         : 3U), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                                                                        ? 0U
                                                                        : 3U), 5U)))))))))
                    : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_pcEx);
        } else if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
                    & (0x343U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtval 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext0 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext1 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext2 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext3 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext4 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext5 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext6 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x7c7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcontext7 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
                = (((QData)((IData)(((0xb82U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))
                                      ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                      : (IData)((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
                                                 >> 0x20U))))) 
                    << 0x20U) | (QData)((IData)(((0xb02U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                                  : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret)))));
            if ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__frm 
                    = (7U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata 
                             >> 5U));
            } else if ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__frm 
                    = (7U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata);
            }
        } else if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT___minstretThisCycle_T_2))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
                = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
                   + (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT___minstretThisCycle_T_2)));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x304U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mie 
                = (1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata);
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateRegValid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkData 
                = ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                   << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                                >> 1U)));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkAddr 
                = (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                            >> 8U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkValid 
                = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_valid) 
                    & (0U != (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                       >> 8U)))) & 
                   ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
                    | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op))));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_valid) 
                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U]);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_target 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid)
                    ? (0xfffffffcU & (((0x305U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)) 
                                       & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                       : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtvec))
                    : ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])
                        ? ((IData)(4U) + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                           << 0x1fU) 
                                          | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                             >> 1U)))
                        : ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op))
                            ? (0xfffffffeU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
                            : ((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op))
                                ? (0xfffffffcU & ((
                                                   (0x305U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)) 
                                                   & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v))
                                                   ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                                   : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtvec))
                                : ((((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
                                     & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))) 
                                    | (((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
                                        & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))) 
                                       | ((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
                                          | (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)))))
                                    ? (((0x341U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)) 
                                        & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v))
                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata
                                        : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mepc)
                                    : ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op))
                                        ? ((IData)(4U) 
                                           + ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                               << 0x1fU) 
                                              | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                                 >> 1U)))
                                        : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_0))))));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x305U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mtvec 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x340U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mscratch 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
              & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid))) {
            __Vtemp_91[0U] = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                               << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                            >> 1U));
            __Vtemp_91[1U] = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                               << 0x1eU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                            >> 2U));
            __Vtemp_91[2U] = (IData)((((QData)((IData)(
                                                       ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                                           >> 4U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                     << 0x1dU) 
                                                                    | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                                                       >> 3U))))));
            __Vtemp_91[3U] = (IData)(((((QData)((IData)(
                                                        ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[8U] 
                                                          << 0x1cU) 
                                                         | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                                            >> 4U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                      << 0x1dU) 
                                                                     | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                                                        >> 3U))))) 
                                      >> 0x20U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mepc 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid)
                    ? (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_1) 
                        | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__instr_access_fault))
                        ? ((IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)
                            ? vlSelf->CoreMiniAxi__DOT___core_io_ibus_addr
                            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_fault_valid)
                                ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__imem_store_fault)
                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc
                                    : ((IData)(vlSelf->CoreMiniAxi__DOT___ebus2axi_io_fault_valid)
                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc
                                        : 0U)) : 0U))
                        : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__fault)
                            ? (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault), 5U)))
                                 ? 0U : (__Vtemp_91[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault), 5U))))) 
                               | (__Vtemp_91[(3U & 
                                              (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault), 5U) 
                                               >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault), 5U))))
                            : 0U)) : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_pcEx);
        } else if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
                    & (0x341U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mepc 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata;
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice_io_in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_in_ready_0))) {
            __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos 
                = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos) 
                         - (IData)(1U)));
            __Vtemp_21[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[1U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_data;
            __Vtemp_21[2U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_data;
            __Vtemp_21[3U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_data;
            __Vtemp_21[4U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_data;
            __Vtemp_21[5U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_data;
            __Vtemp_21[6U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_data;
            __Vtemp_21[7U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_data;
            __Vtemp_21[8U] = 0U;
            __Vtemp_21[9U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xaU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xbU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xcU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xdU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xeU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_21[0xfU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_data;
            __Vtemp_31[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[1U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_adrx;
            __Vtemp_31[2U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_adrx;
            __Vtemp_31[3U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_adrx;
            __Vtemp_31[4U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_adrx;
            __Vtemp_31[5U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_adrx;
            __Vtemp_31[6U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_adrx;
            __Vtemp_31[7U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_adrx;
            __Vtemp_31[8U] = 0U;
            __Vtemp_31[9U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xaU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xbU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xcU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xdU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xeU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_31[0xfU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_adrx;
            __Vtemp_136[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[1U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_pc;
            __Vtemp_136[2U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_pc;
            __Vtemp_136[3U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_pc;
            __Vtemp_136[4U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_pc;
            __Vtemp_136[5U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_pc;
            __Vtemp_136[6U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_pc;
            __Vtemp_136[7U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_pc;
            __Vtemp_136[8U] = 0U;
            __Vtemp_136[9U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xaU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xbU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xcU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xdU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xeU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            __Vtemp_136[0xfU] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_pc;
            if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_data 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U)))
                         ? 0U : (__Vtemp_21[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))) 
                                             >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))))) 
                       | (__Vtemp_21[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U) 
                                              >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushall 
                    = (1U & (((0xfe00U & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_flushall))) 
                                          << 9U)) | 
                              (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_flushall) 
                                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_flushall) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_flushall) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_flushall) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_flushall) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_flushall) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_flushall) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_flushall))))))))) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushat 
                    = (1U & (((0xfe00U & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_flushat))) 
                                          << 9U)) | 
                              (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_flushat) 
                                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_flushat) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_flushat) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_flushat) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_flushat) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_flushat) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_flushat) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_flushat))))))))) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei 
                    = (1U & (((0xfe00U & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_fencei))) 
                                          << 9U)) | 
                              (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_fencei) 
                                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_fencei) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_fencei) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_fencei) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_fencei) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_fencei) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_fencei) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_fencei))))))))) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_vldst 
                    = (1U & (((0xfe00U & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_vldst))) 
                                          << 9U)) | 
                              (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_vldst) 
                                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_vldst) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_vldst) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_vldst) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_vldst) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_vldst) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_vldst) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_vldst))))))))) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_adrx 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U)))
                         ? 0U : (__Vtemp_31[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))) 
                                             >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))))) 
                       | (__Vtemp_31[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U) 
                                              >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write 
                    = (1U & (((0xfe00U & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_write))) 
                                          << 9U)) | 
                              (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_7_write) 
                                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_6_write) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_5_write) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_4_write) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_3_write) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_2_write) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_1_write) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mem_0_write))))))))) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc 
                    = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U)))
                         ? 0U : (__Vtemp_136[(((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))) 
                                              >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))))) 
                       | (__Vtemp_136[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U) 
                                               >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__outpos), 5U))));
            } else if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_26) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_data 
                    = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U)))
                         ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_11[
                                 (((IData)(0x1fU) + 
                                   (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))))) 
                       | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_11[
                          (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushall 
                    = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_20) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushat 
                    = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_19) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei 
                    = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_18) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_vldst 
                    = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_22) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_adrx 
                    = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U)))
                         ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[
                                 (((IData)(0x1fU) + 
                                   (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))))) 
                       | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[
                          (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write 
                    = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_15) 
                             >> (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc 
                    = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U)))
                         ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_8[
                                 (((IData)(0x1fU) + 
                                   (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))))) 
                       | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_8[
                          (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8), 5U))));
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_data 
                    = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_bits_data;
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushall 
                    = (1U & (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_bits_op)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushat 
                    = (1U & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_bits_op)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei 
                    = (1U & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_bits_op)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_vldst 
                    = (1U & (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_bits_op)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_adrx 
                    = ((IData)(0x10U) + (((IData)(1U) 
                                          + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                                             >> 4U)) 
                                         << 4U));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write 
                    = (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__opload)));
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_pc 
                    = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                        << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                     >> 1U));
            }
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateRegValid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_pcEx 
                = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                    << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                 >> 1U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid)
                    ? 0xdU : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op));
        }
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
             & (0x300U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_b_index)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mpp 
                = (3U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wdata 
                         >> 0xbU));
        }
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_mode_valid) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_mode_bits;
        }
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogValid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_slog));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex2_srt_first_round 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_iter_start));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusCmd_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusFired));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pastBranchOrFlush 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__ongoingBranchOrFlush) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__blockNewFetch)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q 
        = ((IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset) 
           || (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_d));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ex2_inst_wb_vld_q 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_6 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_3_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_7 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_3_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_4 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_2_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_5 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_2_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_2 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_1_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_3 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_1_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_0 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_0_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataReady_1 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_0_valid) 
               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_0_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_1_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_2_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_3_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_3 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_7 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_10 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_12 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_1 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_2 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_5 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_6 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_9 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_14 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_b_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_4 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_b_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_8 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_b_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_11 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_b_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__write_fail_13 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v)) 
                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr) 
                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_b_addr))) 
               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__count;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage2Input_q__DOT__full;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard;
    VL_ASSIGN_SII(1,vlSelf->io_fault, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fault);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_out_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos) 
           != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__ptr_match 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap) 
           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__wrap_1));
    VL_ASSIGN_SII(1,vlSelf->io_wfi, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wfi);
    VL_ASSIGN_SII(1,vlSelf->io_halted, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__halted);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_halted 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__halted) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__wfi));
    VL_ASSIGN_SII(1,vlSelf->io_slog_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogValid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_busy = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__data_is_held = 0U;
    if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_busy = 1U;
        } else if ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_busy = 1U;
        }
        if ((1U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__data_is_held = 1U;
            }
        }
    }
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogValid) {
        VL_ASSIGN_SWI(5,vlSelf->io_slog_addr, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__slogAddr);
        VL_ASSIGN_SWI(32,vlSelf->io_slog_data, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    } else {
        VL_ASSIGN_SWI(5,vlSelf->io_slog_addr, 0U);
        VL_ASSIGN_SWI(32,vlSelf->io_slog_data, 0U);
    }
    VL_ASSIGN_SWI(32,vlSelf->io_debug_addr_0, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_0);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_addr_1, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_1);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_addr_2, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_2);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_addr_3, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugAddr_3);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_inst_0, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_0);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_inst_1, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_1);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_inst_2, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_2);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_inst_3, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugInst_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pc_valid 
        = (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_addr)) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_inst)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_29 
        = (VL_SHIFTR_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6, 0x10U) 
           | VL_SHIFTL_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6, 0x10U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_19 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           ^ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    if ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                          >> 0x1fU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                             >> 1U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreater 
        = VL_LTS_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreaterU 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0U] 
        = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_mantissa)) 
                    << 0x17U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_mantissa))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[1U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_mantissa 
            << 0xeU) | (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_mantissa)) 
                                  << 0x17U) | (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_mantissa))) 
                                >> 0x20U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[2U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_mantissa 
            << 0x1cU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_mantissa 
                          << 5U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_mantissa 
                                    >> 0x12U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[3U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_mantissa 
            << 0x13U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_mantissa 
                         >> 4U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[4U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_mantissa 
            << 0xaU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_mantissa 
                        >> 0xdU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[5U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_mantissa 
            << 0x18U) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_mantissa 
                          << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_mantissa 
                                    >> 0x16U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[6U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_mantissa 
            << 0xfU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_mantissa 
                        >> 8U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[7U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_mantissa 
            << 0x1dU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_mantissa 
                          << 6U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_mantissa 
                                    >> 0x11U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[8U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_mantissa 
            << 0x14U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_mantissa 
                         >> 3U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[9U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_mantissa 
            << 0xbU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_mantissa 
                        >> 0xcU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xaU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_mantissa 
            << 0x19U) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_mantissa 
                          << 2U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_mantissa 
                                    >> 0x15U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xbU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_mantissa 
            << 0x10U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_mantissa 
                         >> 7U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xcU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_mantissa 
            << 0x1eU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_mantissa 
                          << 7U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_mantissa 
                                    >> 0x10U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xdU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_mantissa 
            << 0x15U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_mantissa 
                         >> 2U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xeU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_mantissa 
            << 0xcU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_mantissa 
                        >> 0xbU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0xfU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_mantissa 
            << 0x1aU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_mantissa 
                          << 3U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_mantissa 
                                    >> 0x14U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x10U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_mantissa 
            << 0x11U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_mantissa 
                         >> 6U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x11U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_mantissa 
            << 0x1fU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_mantissa 
                          << 8U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_mantissa 
                                    >> 0xfU)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x12U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_mantissa 
            << 0x16U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_mantissa 
                         >> 1U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x13U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_mantissa 
            << 0xdU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_mantissa 
                        >> 0xaU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x14U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_mantissa 
            << 0x1bU) | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_mantissa 
                          << 4U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_mantissa 
                                    >> 0x13U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x15U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_mantissa 
            << 0x12U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_mantissa 
                         >> 5U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN[0x16U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_mantissa 
            << 9U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_mantissa 
                      >> 0xeU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[0U] 
        = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_exponent)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_exponent)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_exponent)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_exponent)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_exponent) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_exponent) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_exponent) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_exponent)))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_exponent)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_exponent)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_exponent)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_exponent)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_exponent) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_exponent) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_exponent) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_exponent)))))))))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[3U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[4U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[5U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[6U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_0[7U] 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_exponent) 
            << 0x18U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_exponent) 
                          << 0x10U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_exponent) 
                                        << 8U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_exponent))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pre_pipe_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___GEN_1 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_31_sign) 
            << 0x1fU) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_30_sign) 
                          << 0x1eU) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_29_sign) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_28_sign) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_27_sign) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_26_sign) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_25_sign) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_24_sign) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_23_sign) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_22_sign) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_21_sign) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_20_sign) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_19_sign) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_18_sign) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_17_sign) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_16_sign) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_15_sign) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_14_sign) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_13_sign) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_12_sign) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_11_sign) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_10_sign) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_9_sign) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_8_sign) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_7_sign) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_6_sign) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_5_sign) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_4_sign) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_3_sign) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_2_sign) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_1_sign) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__fregfile_0_sign))))))))))))))))))))))))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_29 
        = (VL_SHIFTR_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4, 0x10U) 
           | VL_SHIFTL_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4, 0x10U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_19 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           ^ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    if ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                          >> 0x1fU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                             >> 1U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreater 
        = VL_LTS_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreaterU 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_29 
        = (VL_SHIFTR_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2, 0x10U) 
           | VL_SHIFTL_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2, 0x10U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_19 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           ^ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    if ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                          >> 0x1fU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                             >> 1U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreater 
        = VL_LTS_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreaterU 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__subtract 
        = (0x1ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__remain))) 
                               << 1U) | (QData)((IData)(
                                                        (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__divide 
                                                         >> 0x1fU)))) 
                             - (QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__denom))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dvu_io_req_ready 
        = (1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__active)) 
                 & (~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__compute) 
                       | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count) 
                          >> 5U)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__arb__DOT___io_out_valid_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT__stage3Input_q__DOT__full) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__count) 
              >> 5U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_rd_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkValid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_rd_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkValid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_rd_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkValid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pre_pipe_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_wb_grant 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)) 
            | (5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))) 
           & ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state)) 
              | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state))));
    VL_ASSIGN_SII(1,vlSelf->io_debug_dbus_bits_write, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_flush_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_out_valid_0) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushall) 
                 | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_flushat))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__full 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__ptr_match) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__maybe_full));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__empty 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__maybe_full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__ptr_match));
    if ((1U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0U] 
            = (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[1U] 
            = (IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7 
                       >> 0x20U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[2U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6) 
                << 1U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_brchFwd));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[3U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6) 
                >> 0x1fU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 
                                      >> 0x20U)) << 1U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[4U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5) 
                << 2U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_brchFwd) 
                           << 1U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 
                                              >> 0x20U)) 
                                     >> 0x1fU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[5U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5) 
                >> 0x1eU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 
                                      >> 0x20U)) << 2U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[6U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4) 
                << 3U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_brchFwd) 
                           << 2U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 
                                              >> 0x20U)) 
                                     >> 0x1eU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[7U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4) 
                >> 0x1dU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 
                                      >> 0x20U)) << 3U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[8U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3) 
                << 4U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_brchFwd) 
                           << 3U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 
                                              >> 0x20U)) 
                                     >> 0x1dU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[9U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3) 
                >> 0x1cU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 
                                      >> 0x20U)) << 4U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xaU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2) 
                << 5U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_brchFwd) 
                           << 4U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 
                                              >> 0x20U)) 
                                     >> 0x1cU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xbU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2) 
                >> 0x1bU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 
                                      >> 0x20U)) << 5U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xcU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1) 
                << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_brchFwd) 
                           << 5U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 
                                              >> 0x20U)) 
                                     >> 0x1bU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xdU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1) 
                >> 0x1aU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 
                                      >> 0x20U)) << 6U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xeU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0) 
                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_brchFwd) 
                           << 6U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 
                                              >> 0x20U)) 
                                     >> 0x1aU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xfU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0) 
                >> 0x19U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 
                                      >> 0x20U)) << 7U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0x10U] 
            = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_brchFwd) 
                << 7U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 
                                   >> 0x20U)) >> 0x19U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7) 
                << 1U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_0_brchFwd));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[1U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7) 
                >> 0x1fU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7 
                                      >> 0x20U)) << 1U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[2U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6) 
                << 2U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_1_brchFwd) 
                           << 1U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_7 
                                              >> 0x20U)) 
                                     >> 0x1fU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[3U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6) 
                >> 0x1eU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 
                                      >> 0x20U)) << 2U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[4U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5) 
                << 3U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_2_brchFwd) 
                           << 2U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_6 
                                              >> 0x20U)) 
                                     >> 0x1eU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[5U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5) 
                >> 0x1dU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 
                                      >> 0x20U)) << 3U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[6U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4) 
                << 4U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_3_brchFwd) 
                           << 3U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_5 
                                              >> 0x20U)) 
                                     >> 0x1dU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[7U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4) 
                >> 0x1cU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 
                                      >> 0x20U)) << 4U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[8U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3) 
                << 5U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_4_brchFwd) 
                           << 4U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_4 
                                              >> 0x20U)) 
                                     >> 0x1cU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[9U] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3) 
                >> 0x1bU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 
                                      >> 0x20U)) << 5U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xaU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2) 
                << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_5_brchFwd) 
                           << 5U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_3 
                                              >> 0x20U)) 
                                     >> 0x1bU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xbU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2) 
                >> 0x1aU) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 
                                      >> 0x20U)) << 6U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xcU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1) 
                << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_6_brchFwd) 
                           << 6U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_2 
                                              >> 0x20U)) 
                                     >> 0x1aU)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xdU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1) 
                >> 0x19U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 
                                      >> 0x20U)) << 7U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xeU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0) 
                << 8U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__buffer_7_brchFwd) 
                           << 7U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_1 
                                              >> 0x20U)) 
                                     >> 0x19U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xfU] 
            = (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0) 
                >> 0x18U) | ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 
                                      >> 0x20U)) << 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0x10U] 
            = ((IData)((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT____VdfgRegularize_h0861a02e_2_0 
                        >> 0x20U)) >> 0x18U);
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_39 
        = ((0xff00ffU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_29 
                         >> 8U)) | (0xff00ff00U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_29 
                                                   << 8U)));
    if ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312 
                << 2U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312 
                          >> 0x1eU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337 
                << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337 
                             >> 2U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_312;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_337;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_taken_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_valid) 
           & ((0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op)) 
              | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                      >= vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                  : ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                      ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreaterU) 
                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                      : ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                          ? (VL_GTES_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                          : ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                              ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreater) 
                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                              : ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                      != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
                                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                                  : ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))
                                      ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd))
                                      : ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_fwd)) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op)))) 
                                            | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_op))))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_39 
        = ((0xff00ffU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_29 
                         >> 8U)) | (0xff00ff00U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_29 
                                                   << 8U)));
    if ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312 
                << 2U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312 
                          >> 0x1eU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337 
                << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337 
                             >> 2U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_312;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_337;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_taken_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_valid) 
           & ((0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op)) 
              | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                      >= vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                  : ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                      ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreaterU) 
                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                      : ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                          ? (VL_GTES_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                          : ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                              ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreater) 
                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                              : ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                      != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
                                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                                  : ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))
                                      ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd))
                                      : ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_fwd)) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op)))) 
                                            | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_op))))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_39 
        = ((0xff00ffU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_29 
                         >> 8U)) | (0xff00ff00U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_29 
                                                   << 8U)));
    if ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312 
                << 2U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312 
                          >> 0x1eU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337 
                << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337 
                             >> 2U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_312;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_337;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_taken_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_valid) 
           & ((0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op)) 
              | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                      >= vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                  : ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                      ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreaterU) 
                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                      : ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                          ? (VL_GTES_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                          : ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                              ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreater) 
                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                              : ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                      != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
                                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                                  : ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))
                                      ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd))
                                      : ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_fwd)) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op)))) 
                                            | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_op))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__fflags;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__minstret;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle 
        = __Vdly__CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_rd_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__valid)
             ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__addr)
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_rd_valid)
                       ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkAddr)
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_rd_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__valid)
             ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__addr)
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_rd_valid)
                       ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkAddr)
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_rd_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__valid)
             ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__addr)
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_rd_valid)
                       ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkAddr)
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_wb_idle 
        = ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state)) 
           | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_wb_grant)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_srt_idle 
        = ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_wb_grant));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fetch__io_iflush_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_fencei) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_flush_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__empty)) 
                 & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__arb__DOT___io_out_valid_T))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid 
        = (1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__empty)) 
                 | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__arb__DOT___io_out_valid_T)));
    if ((2U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[1U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[1U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[2U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[1U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[2U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[3U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[2U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[3U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[4U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[3U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[4U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[5U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[4U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[5U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[6U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[5U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[6U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[7U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[6U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[7U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[8U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[7U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[8U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[9U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[8U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[9U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xaU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[9U] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xaU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xbU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xaU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xbU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xcU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xbU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xcU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xcU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xdU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xcU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xdU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xdU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xeU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xdU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xeU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xeU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xfU] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xeU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xfU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0xfU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0x10U] 
                   << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xfU] 
                                >> 2U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0x10U] 
            = ((0xc0U & (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0U] 
                         << 6U)) | (VCoreMiniAxi__ConstPool__CONST_h00a54031_0[0x10U] 
                                    & (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0x10U] 
                                       >> 2U)));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_23[0x10U];
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_49 
        = ((0xf0f0f0fU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_39 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_39 
                                      << 4U)));
    if ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316 
                << 4U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316 
                          >> 0x1cU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341 
                << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341 
                             >> 4U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_316;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_341;
    }
    VL_ASSIGN_SII(1,vlSelf->io_debug_float_writeData_1_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v);
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_49 
        = ((0xf0f0f0fU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_39 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_39 
                                      << 4U)));
    if ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316 
                << 4U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316 
                          >> 0x1cU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341 
                << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341 
                             >> 4U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_316;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_341;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___debugBrch_T_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_taken_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_taken_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_49 
        = ((0xf0f0f0fU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_39 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_39 
                                      << 4U)));
    if ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316 
                << 4U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316 
                          >> 0x1cU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341 
                << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341 
                             >> 4U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_316;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_341;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__signed1) 
            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
               >> 0x1fU)) ? ((IData)(1U) + (~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0))
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_29 
        = (VL_SHIFTR_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0, 0x10U) 
           | VL_SHIFTL_III(32,32,32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0, 0x10U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_19 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           ^ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    if ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                << 1U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                          >> 0x1fU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337 
            = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                             >> 1U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreater 
        = VL_LTS_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreaterU 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_cycles, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mcycle));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csr_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid 
        = ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset))) 
           && (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateRegValid));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_3_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid);
    VL_ASSIGN_SWI(5,vlSelf->io_debug_regfile_writeData_3_bits_addr, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr);
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_2_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid);
    VL_ASSIGN_SWI(5,vlSelf->io_debug_regfile_writeData_2_bits_addr, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr);
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_1_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid);
    VL_ASSIGN_SWI(5,vlSelf->io_debug_regfile_writeData_1_bits_addr, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr);
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_5_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_pipe_pipe_v);
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_4_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___arb_io_out_valid);
    if ((4U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[1U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[1U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[2U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[1U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[2U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[3U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[2U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[3U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[4U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[3U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[4U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[5U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[4U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[5U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[6U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[5U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[6U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[7U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[6U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[7U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[8U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[7U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[8U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[9U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[8U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[9U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xaU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[9U] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xaU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xbU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xaU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xbU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xcU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xbU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xcU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xcU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xdU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xcU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xdU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xdU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xeU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xdU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xeU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xeU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xfU] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xeU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xfU] 
            = (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0xfU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0x10U] 
                   << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xfU] 
                                >> 4U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0x10U] 
            = ((0xf0U & (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0U] 
                         << 4U)) | (VCoreMiniAxi__ConstPool__CONST_h00a54001_0[0x10U] 
                                    & (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0x10U] 
                                       >> 4U)));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_27[0x10U];
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_59 
        = ((0x33333333U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_49 
                           >> 2U)) | (0xccccccccU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_49 
                                       << 2U)));
    if ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320 
                << 8U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320 
                          >> 0x18U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345 
                             >> 8U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_320;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_345;
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_59 
        = ((0x33333333U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_49 
                           >> 2U)) | (0xccccccccU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_49 
                                       << 2U)));
    if ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320 
                << 8U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320 
                          >> 0x18U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345 
                             >> 8U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_320;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_345;
    }
    VL_ASSIGN_SWI(4,vlSelf->io_debug_en, ((1U | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_taken_valid) 
                                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___debugBrch_T_1))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___debugBrch_T_1)) 
                                                        << 2U)) 
                                                    | (2U 
                                                       & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_taken_valid)) 
                                                          << 1U))))) 
                                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__debugEn)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_59 
        = ((0x33333333U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_49 
                           >> 2U)) | (0xccccccccU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_49 
                                       << 2U)));
    if ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320 
                << 8U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320 
                          >> 0x18U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345 
                             >> 8U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_320;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_345;
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_63 
        = ((0x33U & ((0x3cU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                               >> 0xeU)) | (3U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                                  >> 0x16U)))) 
           | (0xccU & ((0xc0U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                 >> 0xaU)) | (0x3cU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                                 >> 0x12U)))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_22 
        = ((0xf0fU & ((0xff0U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                 << 4U)) | (0xfU & 
                                            (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                             >> 0xcU)))) 
           | (0xf0f0U & ((0xf000U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                     << 0xcU)) | (0xff0U 
                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp 
                                                     >> 4U)))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_39 
        = ((0xff00ffU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_29 
                         >> 8U)) | (0xff00ff00U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_29 
                                                   << 8U)));
    if ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312 
                << 2U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312 
                          >> 0x1eU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337 
                << 0x1eU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337 
                             >> 2U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_312;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_337;
    }
    if ((8U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[1U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[1U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[2U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[1U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[2U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[3U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[2U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[3U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[4U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[3U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[4U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[5U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[4U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[5U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[6U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[5U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[6U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[7U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[6U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[7U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[8U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[7U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[8U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[9U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[8U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[9U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xaU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[9U] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xaU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xbU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xaU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xbU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xcU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xbU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xcU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xdU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xcU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xdU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xeU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xdU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xeU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xfU] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xeU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xfU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0x10U] 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xfU] 
                             >> 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0x10U] 
            = (0xffU & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0U]);
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_31[0x10U];
    }
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69 
        = ((0x55555555U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_59 
                           >> 1U)) | (0xaaaaaaaaU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_59 
                                       << 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69 
        = ((0x55555555U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_59 
                           >> 1U)) | (0xaaaaaaaaU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_59 
                                       << 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69 
        = ((0x55555555U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_59 
                           >> 1U)) | (0xaaaaaaaaU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_59 
                                       << 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73 
        = ((0x55U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_63) 
                     >> 1U)) | (0xaaU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_63) 
                                         << 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_32 
        = ((0x3333U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_22) 
                                             << 2U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_49 
        = ((0xf0f0f0fU & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_39 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_39 
                                      << 4U)));
    if ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316 
                << 4U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316 
                          >> 0x1cU));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341 
                << 0x1cU) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341 
                             >> 4U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_316;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_341;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_mode_bits 
        = (1U & (~ ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                    & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT____VdfgRegularize_h773b8ade_0_0 
        = ((0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
           | ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
              | ((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                 | ((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                    | (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__usageFault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))
               ? ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                  | (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)))
               : (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_rd_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_linkValid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
           & ((0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
              | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                      >= vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                  : ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                      ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreaterU) 
                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                      : ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                          ? (VL_GTES_III(32, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                          : ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                              ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreater) 
                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                              : ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                      != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
                                     != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                                  : ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                                      ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                                      : ((1U & ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)))) 
                                                | (1U 
                                                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))))
                                          ? (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_fwd))
                                          : ((0xcU 
                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                                             | ((0xbU 
                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                                                 ? 
                                                (0U 
                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))
                                                  ? 
                                                 (1U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                                                  | ((8U 
                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op)) 
                                                     & (1U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))))))))))))))));
    if ((0x10U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[1U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[1U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[2U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[1U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[2U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[3U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[2U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[3U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[4U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[3U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[4U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[5U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[4U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[5U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[6U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[5U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[6U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[7U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[6U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[7U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[8U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[7U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[8U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[9U] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[8U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[9U] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xaU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[9U] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xaU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xbU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xaU] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xbU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xcU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xbU] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xcU] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xcU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xdU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xcU] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xdU] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xdU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xeU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xdU] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xeU] 
            = (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xeU] 
               & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xfU] 
                   << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xeU] 
                                >> 0x10U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xfU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U] 
                << 0x18U) | (VCoreMiniAxi__ConstPool__CONST_h882d9f06_0[0xfU] 
                             & ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0x10U] 
                                 << 0x10U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xfU] 
                                              >> 0x10U))));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0x10U] 
            = (0xffU & (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U] 
                        >> 8U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_35[0x10U];
    }
    __Vtemp_155[0U] = (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 1U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 2U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 3U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 4U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 5U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 6U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                               >> 7U)))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                        >> 8U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                        >> 9U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                          >> 0xaU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                          >> 0xbU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0xcU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0xdU)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0xeU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0xfU)))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                        >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                        >> 0x11U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                          >> 0x12U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                          >> 0x13U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0x14U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0x15U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0x16U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                            >> 0x17U)))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x18U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x19U)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x1aU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x1bU)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x1cU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x1dU)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                           >> 0x1fU)))))))))));
    __Vtemp_156[0U] = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                        ? 0U : ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                 ? 1U : ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                          ? 2U : ((8U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    __Vtemp_157[0U] = ((1U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                        ? 0U : ((2U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                 ? 1U : ((4U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                          ? 2U : ((8U 
                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_69 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[1U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           - vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[2U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreater;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[3U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreaterU;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[4U] 
        = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_19;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[5U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[6U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[7U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           << (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[8U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
           >> (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[9U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6, 
                         (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xaU] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xbU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xcU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7) 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xdU] 
        = (~ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_19);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xeU] 
        = __Vtemp_157[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0xfU] 
        = __Vtemp_156[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x10U] 
        = __Vtemp_155[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x11U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x12U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x13U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x14U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x15U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x16U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x17U] 
        = (IData)((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)
                                      ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
                                          << 0x10U) 
                                         | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
                                            >> 0x10U))
                                      : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)
                                                  ? 
                                                 ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
                                                   << 0x10U) 
                                                  | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
                                                     >> 0x10U))
                                                  : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x18U] 
        = (IData)(((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)
                                       ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
                                           << 0x10U) 
                                          | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349 
                                             >> 0x10U))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_349))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_7)
                                                   ? 
                                                  ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
                                                    << 0x10U) 
                                                   | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324 
                                                      >> 0x10U))
                                                   : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___io_rd_bits_data_T_324)))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x19U] 
        = ((((0U == (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                     >> 0x18U)) ? 0U : 0xffU) << 0x18U) 
           | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                 >> 0x10U))) ? 0U : 0xffU) 
               << 0x10U) | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                               >> 8U)))
                               ? 0U : 0xffU) << 8U) 
                            | ((0U == (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6))
                                ? 0U : 0xffU))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1aU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
            << 0x18U) | ((0xff0000U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                      >> 8U)) 
                                                  | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6 
                                                     >> 0x18U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1bU] 
        = (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_6);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1cU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1dU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1eU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[0x1fU] = 0U;
    __Vtemp_187[0U] = (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 1U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 2U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 3U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 4U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 5U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 6U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                               >> 7U)))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                        >> 8U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                        >> 9U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                          >> 0xaU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                          >> 0xbU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0xcU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0xdU)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0xeU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0xfU)))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                        >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                        >> 0x11U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                          >> 0x12U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                          >> 0x13U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0x14U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0x15U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0x16U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                            >> 0x17U)))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x18U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x19U)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x1aU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x1bU)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x1cU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x1dU)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                           >> 0x1fU)))))))))));
    __Vtemp_188[0U] = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                        ? 0U : ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                 ? 1U : ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                          ? 2U : ((8U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    __Vtemp_189[0U] = ((1U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                        ? 0U : ((2U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                 ? 1U : ((4U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                          ? 2U : ((8U 
                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_69 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[1U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           - vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[2U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreater;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[3U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreaterU;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[4U] 
        = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_19;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[5U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[6U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[7U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           << (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[8U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
           >> (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[9U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4, 
                         (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xaU] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xbU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xcU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5) 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xdU] 
        = (~ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_19);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xeU] 
        = __Vtemp_189[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0xfU] 
        = __Vtemp_188[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x10U] 
        = __Vtemp_187[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x11U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x12U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x13U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x14U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x15U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x16U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x17U] 
        = (IData)((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)
                                      ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
                                          << 0x10U) 
                                         | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
                                            >> 0x10U))
                                      : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)
                                                  ? 
                                                 ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
                                                   << 0x10U) 
                                                  | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
                                                     >> 0x10U))
                                                  : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x18U] 
        = (IData)(((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)
                                       ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
                                           << 0x10U) 
                                          | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349 
                                             >> 0x10U))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_349))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_5)
                                                   ? 
                                                  ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
                                                    << 0x10U) 
                                                   | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324 
                                                      >> 0x10U))
                                                   : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___io_rd_bits_data_T_324)))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x19U] 
        = ((((0U == (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                     >> 0x18U)) ? 0U : 0xffU) << 0x18U) 
           | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                 >> 0x10U))) ? 0U : 0xffU) 
               << 0x10U) | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                               >> 8U)))
                               ? 0U : 0xffU) << 8U) 
                            | ((0U == (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4))
                                ? 0U : 0xffU))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1aU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
            << 0x18U) | ((0xff0000U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                      >> 8U)) 
                                                  | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4 
                                                     >> 0x18U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1bU] 
        = (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_4);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1cU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1dU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1eU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[0x1fU] = 0U;
    __Vtemp_219[0U] = (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 1U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 2U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 3U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 4U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 5U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 6U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                               >> 7U)))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                        >> 8U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                        >> 9U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                          >> 0xaU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                          >> 0xbU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0xcU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0xdU)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0xeU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0xfU)))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                        >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                        >> 0x11U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                          >> 0x12U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                          >> 0x13U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0x14U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0x15U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0x16U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                            >> 0x17U)))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x18U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x19U)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x1aU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x1bU)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x1cU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x1dU)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                           >> 0x1fU)))))))))));
    __Vtemp_220[0U] = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                        ? 0U : ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                 ? 1U : ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                          ? 2U : ((8U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    __Vtemp_221[0U] = ((1U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                        ? 0U : ((2U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                 ? 1U : ((4U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                          ? 2U : ((8U 
                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_69 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[1U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           - vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[2U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreater;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[3U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreaterU;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[4U] 
        = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_19;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[5U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[6U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[7U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           << (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[8U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
           >> (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[9U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2, 
                         (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xaU] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xbU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xcU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3) 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xdU] 
        = (~ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_19);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xeU] 
        = __Vtemp_221[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0xfU] 
        = __Vtemp_220[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x10U] 
        = __Vtemp_219[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x11U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x12U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x13U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x14U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x15U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x16U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x17U] 
        = (IData)((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)
                                      ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
                                          << 0x10U) 
                                         | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
                                            >> 0x10U))
                                      : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)
                                                  ? 
                                                 ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
                                                   << 0x10U) 
                                                  | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
                                                     >> 0x10U))
                                                  : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x18U] 
        = (IData)(((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)
                                       ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
                                           << 0x10U) 
                                          | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349 
                                             >> 0x10U))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_349))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_3)
                                                   ? 
                                                  ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
                                                    << 0x10U) 
                                                   | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324 
                                                      >> 0x10U))
                                                   : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___io_rd_bits_data_T_324)))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x19U] 
        = ((((0U == (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                     >> 0x18U)) ? 0U : 0xffU) << 0x18U) 
           | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                 >> 0x10U))) ? 0U : 0xffU) 
               << 0x10U) | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                               >> 8U)))
                               ? 0U : 0xffU) << 8U) 
                            | ((0U == (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2))
                                ? 0U : 0xffU))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1aU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
            << 0x18U) | ((0xff0000U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                      >> 8U)) 
                                                  | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2 
                                                     >> 0x18U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1bU] 
        = (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1cU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1dU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1eU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[0x1fU] = 0U;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42 
        = ((0x5555U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_32) 
                       >> 1U)) | (0x2aaaU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_32) 
                                             << 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_59 
        = ((0x33333333U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_49 
                           >> 2U)) | (0xccccccccU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_49 
                                       << 2U)));
    if ((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320 
                << 8U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320 
                          >> 0x18U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345 
                << 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345 
                             >> 8U));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_320;
        CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_345;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_mode_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode))
               ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT____VdfgRegularize_h773b8ade_0_0)
               : (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_op))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_interlock 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_valid) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT____VdfgRegularize_h773b8ade_0_0)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_flush_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_csr_in_fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__usageFault) 
           & (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__mode)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT__req_pipe_v) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__valid) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_rd_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__ctrl__io_branch_bits 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateReg_bits_target
            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_taken_valid)
                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_target
                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_taken_valid)
                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_target
                    : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_taken_valid)
                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_target
                        : 0U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_7 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_8 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_9 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_10 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_11 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_12 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_13 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xeU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_14 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0xfU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_15 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x10U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_16 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x11U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_17 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x12U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_18 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x13U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_19 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x14U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_20 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x15U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_21 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x16U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_22 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x17U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_23 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x18U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_24 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x19U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_25 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1aU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1bU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_27 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1cU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_28 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1dU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_29 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1eU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_1_30 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid)) 
              & (0x1fU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_taken_valid));
    if ((0x20U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[1U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[1U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[2U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[2U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[3U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[3U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[4U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[4U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[5U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[5U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[6U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[6U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[7U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[7U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[8U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[8U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[9U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[9U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xaU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xaU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xbU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xbU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xcU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xcU] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xcU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xdU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xdU] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xdU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xeU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xeU] 
            = (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xeU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xfU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xfU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0U] 
                << 8U) | (VCoreMiniAxi__ConstPool__CONST_h8b2d9e06_0[0xfU] 
                          & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0x10U]));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0x10U] 
            = (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0U] 
               >> 0x18U);
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_39[0x10U];
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_data 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__valid)
             ? (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op), 5U)))
                  ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[
                          (((IData)(0x1fU) + (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op), 5U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op), 5U))))) 
                | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT___GEN_0[
                   (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_3__DOT__op), 5U))))
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_rd_valid)
                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_3__DOT__stateReg_bits_linkData
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_data 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__valid)
             ? (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op), 5U)))
                  ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[
                          (((IData)(0x1fU) + (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op), 5U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op), 5U))))) 
                | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT___GEN_0[
                   (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_2__DOT__op), 5U))))
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_rd_valid)
                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_2__DOT__stateReg_bits_linkData
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_data 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__valid)
             ? (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op), 5U)))
                  ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[
                          (((IData)(0x1fU) + (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op), 5U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op), 5U))))) 
                | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT___GEN_0[
                   (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_1__DOT__op), 5U))))
             : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_1_io_rd_valid)
                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_1__DOT__stateReg_bits_linkData
                       : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__clz 
        = ((1U & ((~ (IData)((0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1))) 
                  | (IData)((0U != (0xc0000000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)))))
            ? 0U : ((0x20000000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                     ? 1U : ((0x10000000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                              ? 2U : ((0x8000000U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                                       ? 3U : ((0x4000000U 
                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                                                ? 4U
                                                : (
                                                   (0x2000000U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                                                    ? 5U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT__inp)
                                                     ? 6U
                                                     : 
                                                    ((1U 
                                                      & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                      ? 7U
                                                      : 
                                                     ((2U 
                                                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                        ? 9U
                                                        : 
                                                       ((8U 
                                                         & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                         ? 0xaU
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                          ? 0xbU
                                                          : 
                                                         ((0x20U 
                                                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                           ? 0xcU
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                            ? 0xdU
                                                            : 
                                                           ((0x80U 
                                                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_73))
                                                             ? 0xeU
                                                             : 
                                                            ((1U 
                                                              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                              ? 0xfU
                                                              : 
                                                             ((2U 
                                                               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                               ? 0x10U
                                                               : 
                                                              ((4U 
                                                                & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                ? 0x11U
                                                                : 
                                                               ((8U 
                                                                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x10U 
                                                                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x20U 
                                                                   & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x40U 
                                                                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x80U 
                                                                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x100U 
                                                                      & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x200U 
                                                                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x400U 
                                                                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x800U 
                                                                         & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x1000U 
                                                                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x2000U 
                                                                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x4000U 
                                                                            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___clz_T_42))
                                                                            ? 0x1dU
                                                                            : 0x1eU))))))))))))))))))))))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69 
        = ((0x55555555U & (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_59 
                           >> 1U)) | (0xaaaaaaaaU & 
                                      (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_59 
                                       << 1U)));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeData_0_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_0_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__branch_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___debugBrch_T_1));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_7 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_8 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_9 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_10 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_11 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_12 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_13 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xeU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_14 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0xfU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_15 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x10U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_16 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x11U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_17 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x12U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_18 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x13U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_19 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x14U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_20 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x15U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_21 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x16U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_22 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x17U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_23 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x18U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_24 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x19U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_25 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1aU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1bU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_27 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1cU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_28 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1dU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_29 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1eU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_2_30 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2)) 
              & (0x1fU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__writeMask_2) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_2_io_taken_valid));
    if ((0x40U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[2U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[1U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[3U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[2U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[4U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[3U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[5U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[4U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[6U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[5U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[7U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[6U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[8U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[7U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[9U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[8U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xaU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[9U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xbU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0xaU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xcU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0xbU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xdU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xcU] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0xcU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xeU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xdU] 
            = (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0xdU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xfU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xeU] 
            = (((IData)((((QData)((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U])))) 
                << 8U) | (VCoreMiniAxi__ConstPool__CONST_h9eacdbe6_0[0xeU] 
                          & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0x10U]));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xfU] 
            = (((IData)((((QData)((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U])))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(
                                                        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U]))) 
                                      >> 0x20U)) << 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0x10U] 
            = ((IData)(((((QData)((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U]))) 
                        >> 0x20U)) >> 0x18U);
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_43[0x10U];
    }
    VL_ASSIGN_SWI(32,vlSelf->io_debug_regfile_writeData_3_bits_data, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_data);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_regfile_writeData_2_bits_data, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_2_bits_data);
    VL_ASSIGN_SWI(32,vlSelf->io_debug_regfile_writeData_1_bits_data, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_1_bits_data);
    __Vtemp_259[0U] = (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 1U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 2U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 3U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 4U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 5U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 6U)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                               >> 7U)))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                        >> 8U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                        >> 9U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                          >> 0xaU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                          >> 0xbU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0xcU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0xdU)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0xeU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0xfU)))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                        >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                        >> 0x11U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                          >> 0x12U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                          >> 0x13U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0x14U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0x15U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0x16U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                            >> 0x17U)))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x18U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x19U)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x1aU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x1bU)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x1cU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x1dU)))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                           >> 0x1fU)))))))))));
    __Vtemp_260[0U] = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                        ? 0U : ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                 ? 1U : ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                          ? 2U : ((8U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    __Vtemp_261[0U] = ((1U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                        ? 0U : ((2U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                 ? 1U : ((4U & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                          ? 2U : ((8U 
                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                              ? 0xeU
                                                              : 
                                                             ((0x8000U 
                                                               & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                               ? 0xfU
                                                               : 
                                                              ((0x10000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                ? 0x10U
                                                                : 
                                                               ((0x20000U 
                                                                 & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                 ? 0x11U
                                                                 : 
                                                                ((0x40000U 
                                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                            ? 0x1cU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                             ? 0x1dU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69)
                                                                              ? 0x1eU
                                                                              : 
                                                                             ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_69 
                                                                               >> 0x1fU)
                                                                               ? 0x1fU
                                                                               : 0x20U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[1U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           - vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[2U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreater;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[3U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreaterU;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[4U] 
        = CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_19;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[5U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[6U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[7U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           << (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[8U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
           >> (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[9U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0, 
                         (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xaU] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xbU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xcU] 
        = ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1) 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xdU] 
        = (~ CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_19);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xeU] 
        = __Vtemp_261[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0xfU] 
        = __Vtemp_260[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x10U] 
        = __Vtemp_259[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x11U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x12U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x13U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreater)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x14U] 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT__r2IsGreaterU)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x15U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x16U] 
        = (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x17U] 
        = (IData)((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)
                                      ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
                                          << 0x10U) 
                                         | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
                                            >> 0x10U))
                                      : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)
                                                  ? 
                                                 ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
                                                   << 0x10U) 
                                                  | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
                                                     >> 0x10U))
                                                  : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x18U] 
        = (IData)(((((QData)((IData)(((0x10U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)
                                       ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
                                           << 0x10U) 
                                          | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349 
                                             >> 0x10U))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_349))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_1)
                                                   ? 
                                                  ((CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
                                                    << 0x10U) 
                                                   | (CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324 
                                                      >> 0x10U))
                                                   : CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___io_rd_bits_data_T_324)))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x19U] 
        = ((((0U == (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                     >> 0x18U)) ? 0U : 0xffU) << 0x18U) 
           | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                 >> 0x10U))) ? 0U : 0xffU) 
               << 0x10U) | ((((0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                               >> 8U)))
                               ? 0U : 0xffU) << 8U) 
                            | ((0U == (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0))
                                ? 0U : 0xffU))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1aU] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
            << 0x18U) | ((0xff0000U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                      >> 8U)) 
                                                  | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0 
                                                     >> 0x18U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1bU] 
        = (0xffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1cU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1dU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1eU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__alu_0__DOT___GEN_0[0x1fU] = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__currentBranchOrFlush 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__branch_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fetch__io_iflush_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fetch__io_iflush_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__branch_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_3_io_taken_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_7 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_8 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_9 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_10 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_11 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_12 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xdU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_13 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xeU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_14 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0xfU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_15 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x10U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_16 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x11U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_17 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x12U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_18 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x13U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_19 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x14U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_20 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x15U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_21 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x16U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_22 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x17U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_23 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x18U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_24 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x19U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_25 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1aU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1bU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_27 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1cU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_28 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1dU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_29 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1eU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__valid_3_30 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__regfile__io_writeMask_3_valid)) 
              & (0x1fU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile_io_writeData_3_bits_addr))));
    if ((0x80U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[0U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[4U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[1U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[5U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[2U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[6U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[3U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[7U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[4U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[8U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[5U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[9U]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[6U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xaU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[7U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xbU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[8U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[8U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xcU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[9U] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[9U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xdU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xaU] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[0xaU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xeU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xbU] 
            = (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[0xbU] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xfU]);
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xcU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0U] 
                << 8U) | (VCoreMiniAxi__ConstPool__CONST_h1ab953d3_0[0xcU] 
                          & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0x10U]));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xdU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[1U] 
                             << 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xeU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[1U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[2U] 
                             << 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xfU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[2U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[3U] 
                             << 8U));
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0x10U] 
            = (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[3U] 
               >> 0x18U);
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[1U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[2U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[3U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[4U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[5U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[6U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[7U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[8U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[9U];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xaU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xbU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xcU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xdU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xeU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0xfU];
        CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_47[0x10U];
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__ongoingBranchOrFlush 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__pastBranchOrFlush) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__currentBranchOrFlush));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_3_valid 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush)) 
           & (0U != (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued) 
                           >> 2U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_2_valid 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush)) 
           & (2U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_1_valid 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush)) 
           & (0U != (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued) 
                           >> 1U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT____Vcellinp__instructionBuffer__io_flush)) 
           & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__nEnqueued)));
    if ((0x100U & ((IData)(0x41U) * (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__deqPtr)))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[0U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[8U]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[1U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[1U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[9U]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[2U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[2U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xaU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[3U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[3U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xbU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[4U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[4U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xcU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[5U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[5U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xdU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[6U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[6U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xeU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[7U] 
            = (VCoreMiniAxi__ConstPool__CONST_h52851867_0[7U] 
               & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xfU]);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[8U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0U] 
                << 8U) | (VCoreMiniAxi__ConstPool__CONST_h52851867_0[8U] 
                          & CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0x10U]));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[9U] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[1U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xaU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[1U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[2U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xbU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[2U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[3U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xcU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[3U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[4U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xdU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[4U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[5U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xeU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[5U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[6U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xfU] 
            = ((CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[6U] 
                >> 0x18U) | (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[7U] 
                             << 8U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0x10U] 
            = (CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[7U] 
               >> 0x18U);
    } else {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[1U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[1U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[2U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[2U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[3U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[3U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[4U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[4U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[5U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[5U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[6U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[6U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[7U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[7U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[8U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[8U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[9U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[9U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xaU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xaU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xbU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xbU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xcU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xcU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xdU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xdU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xeU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xeU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0xfU] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0xfU];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_55[0x10U] 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT___outputBufferView_rotated_T_51[0x10U];
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__writeToBuffer 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__ongoingBranchOrFlush)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusCmd_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_1 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid));
}
