// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreMiniAxi.h for the primary calling header

#include "VCoreMiniAxi__pch.h"
#include "VCoreMiniAxi___024root.h"

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_sequent__TOP__10(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT____Vcellinp__core__reset 
        = (1U & ((IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_te)
                  ? (~ (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_aresetn))
                  : vlSelf->CoreMiniAxi__DOT__csr__DOT__resetReg));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__49(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__49\n"); );
    // Init
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___dataFired_T_3;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___dataFired_T_3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__newTxn 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__txnActive)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT___core_io_ebus_dbus_valid));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____VdfgRegularize_h1f342f28_0_12 
        = ((3U & ((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted))) 
           == ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid)
                ? 2U : 1U));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask 
        = ((0x10U < vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___crossLineBoundary_T_4)
            ? ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted))
                ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask1)
                : ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__transactionsCompleted))
                    ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask0)
                    : 0U)) : ((1U & ((~ (IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_read_data_bits_last)) 
                                     | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask1))))
                               ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask0)
                               : (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__wmask1)));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid 
        = (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write)) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__newTxn)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount) 
              <= (3U & ((IData)(2U) - ((IData)(1U) 
                                       + (0x10U < vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT___crossLineBoundary_T_4))))));
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write) {
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ_io_in_valid 
            = vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__newTxn;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__io_dbus_ready_0 
            = ((IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_write_resp_valid) 
               & ((0U == (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount) 
                                + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_out_valid_0)))) 
                  & ((0U == (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount) 
                                   + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_out_valid_0)))) 
                     & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____VdfgRegularize_h1f342f28_0_12))));
    } else {
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ_io_in_valid = 0U;
        vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__io_dbus_ready_0 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____VdfgRegularize_h1f342f28_0_13) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____VdfgRegularize_h1f342f28_0_12));
    }
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                >> 7U))))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                              >> 6U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 5U))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 4U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask)))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                 >> 7U))))))) 
                               << 0x38U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                               >> 6U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 5U))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 4U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 3U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                                                >> 1U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask)))))))))))))) 
                             >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[0U] 
        = __Vtemp_1[0U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[1U] 
        = __Vtemp_1[1U];
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                              >> 0xbU)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                              >> 0xaU)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                             >> 9U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                              >> 8U))))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbytemask[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                              >> 0xfU)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                              >> 0xeU)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                             >> 0xdU)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__rbitmask) 
                                                              >> 0xcU))))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice_io_in_valid 
        = ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mcount))
            ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__readAddrQ__io_out_ready)
            : (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__ivalid));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ_io_in_valid) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount) 
              <= (3U & ((IData)(2U) - ((IData)(1U) 
                                       + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ_io_in_valid) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount) 
              <= (3U & ((IData)(2U) - ((IData)(1U) 
                                       + (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_in_bits_1_valid))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___dataFired_T_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT___core_io_ebus_dbus_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__io_dbus_ready_0));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__dec 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice_io_in_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__readAddrQ__DOT__mslice__DOT__io_in_ready_0));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice_io_in_valid 
        = ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mcount))
            ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeAddrQ__io_out_ready)
            : (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__ivalid));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid) 
           & (0U != (3U & ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0))) 
                           + (((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0)) 
                               & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_7)) 
                              | ((~ (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1)) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_20)))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT___GEN_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid) 
           & (0U != (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0) 
                           + (((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_0) 
                               & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_7)) 
                              | ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__inxpos_1) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT___inxvalid_T_20)))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice_io_in_valid 
        = ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mcount))
            ? (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT____Vcellinp__writeDataQ__io_out_ready)
            : (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__ivalid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__data__io_in_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__dtcmArbiter__io_source_0_readDataAddr_valid) 
           | (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___dataFired_T_3)) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_ibus_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_out_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_flush_valid) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__imem_store_fault) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_vldst) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_dbus_valid_0) 
                    | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___dataFired_T_3) 
                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_ibus_valid))))));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__dec 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice_io_in_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeAddrQ__DOT__mslice__DOT__io_in_ready_0));
    vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__dec 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice_io_in_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__writeDataQ__DOT__mslice__DOT__io_in_ready_0));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT___GEN 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__io_out_valid_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__data__io_in_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT___GEN_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__data__io_in_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__io_out_valid_0));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_in_ready_0 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__ipos) 
            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__opos)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_out_ready));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__60(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__60\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__out_ready_i)))))));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__62(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__62\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fmv_w_x)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__readDataBits_0
            : ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                << 0x1aU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                             >> 6U)));
    VL_ASSIGN_SWI(32,vlSelf->io_debug_float_writeData_0_bits_data, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_write_ports_0_data_T);
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__63(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__63\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__fault) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__bru_0__DOT__stateRegValid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fault_manager_io_out_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_valid));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__64(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__64\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice_io_in_valid 
        = ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount))
            ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_out_ready)
            : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_26));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__dec 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice_io_in_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__io_in_ready_0));
}

extern const VlUnpacked<CData/*0:0*/, 16> VCoreMiniAxi__ConstPool__TABLE_h4b832e18_0;
extern const VlUnpacked<CData/*2:0*/, 128> VCoreMiniAxi__ConstPool__TABLE_h3229ed01_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCoreMiniAxi__ConstPool__TABLE_h8d93b1df_0;

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__67(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__67\n"); );
    // Init
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3;
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_valid) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
              >> 3U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__hold_result = 0U;
    if ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) {
                if ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_ready)))) {
                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__hold_result = 1U;
                }
            }
        }
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 0U;
    if ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q;
    } else if ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) {
            if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_ready) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
                if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                     & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 1U;
                }
            } else {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 2U;
            }
        }
    } else if ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_ready) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
            if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 1U;
            }
        }
    } else {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
           & ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
           & ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op_q));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op_q));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_d 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))
            ? ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex2_special_sel)) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ex2_inst_wb_vld_q))
            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) 
               || (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting) 
           || (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting)
            ? 4U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q)
                     ? 4U : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_op1_id_nor) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_div_rst_zero) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_tt_zero) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_dz 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_tt_zero) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_norm)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_busy 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
           | ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)) 
              | (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_srt_idle));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2 
        = ((IData)((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__operands_i 
                    >> 0x20U)) & (- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel) 
                                                   >> 2U)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__operands_i) 
           & (- (IData)((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel) 
                               >> 2U)))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_result_sign 
        = (1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)
                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                      ^ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2) 
                     >> 0x1fU) : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                                  >> 0x1fU)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf 
        = ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf) 
             & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_inf)) 
                & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_qnan)) 
                   & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_snan))))) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | ((((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                    >> 0x1fU)) & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf)) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_dz)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
            >> 0x1fU) & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_norm) 
                         | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3));
    __Vtableidx1 = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_result_sign) 
                     << 3U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_of_result_lfn 
        = VCoreMiniAxi__ConstPool__TABLE_h4b832e18_0
        [__Vtableidx1];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
            ? ((QData)((IData)((0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2))) 
               << 0x1dU) : ((QData)((IData)((0x7fffffU 
                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1))) 
                            << 0x1dU));
    if (((((((((0x8000000000000ULL == (0x8000000000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
               | (0x4000000000000ULL == (0xc000000000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
              | (0x2000000000000ULL == (0xe000000000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
             | (0x1000000000000ULL == (0xf000000000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
            | (0x800000000000ULL == (0xf800000000000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
           | (0x400000000000ULL == (0xfc00000000000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
          | (0x200000000000ULL == (0xfe00000000000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
         | (0x100000000000ULL == (0xff00000000000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x8000000000000ULL == (0x8000000000000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0U;
        } else if ((0x4000000000000ULL == (0xc000000000000ULL 
                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffffeULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 1U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fffU;
        } else if ((0x2000000000000ULL == (0xe000000000000ULL 
                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffffcULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 2U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffeU;
        } else if ((0x1000000000000ULL == (0xf000000000000ULL 
                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffff8ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 3U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffdU;
        } else if ((0x800000000000ULL == (0xf800000000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffff0ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 4U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffcU;
        } else if ((0x400000000000ULL == (0xfc00000000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffffe0ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 5U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffbU;
        } else if ((0x200000000000ULL == (0xfe00000000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffffc0ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 6U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffaU;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffff80ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 7U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff9U;
        }
    } else if (((((((((0x80000000000ULL == (0xff80000000000ULL 
                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x40000000000ULL == (0xffc0000000000ULL 
                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x20000000000ULL == (0xffe0000000000ULL 
                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x10000000000ULL == (0xfff0000000000ULL 
                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x8000000000ULL == (0xfff8000000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x4000000000ULL == (0xfffc000000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x2000000000ULL == (0xfffe000000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x1000000000ULL == (0xffff000000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x80000000000ULL == (0xff80000000000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffff00ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 8U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff8U;
        } else if ((0x40000000000ULL == (0xffc0000000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffe00ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 9U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff7U;
        } else if ((0x20000000000ULL == (0xffe0000000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffc00ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xaU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff6U;
        } else if ((0x10000000000ULL == (0xfff0000000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffff800ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xbU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff5U;
        } else if ((0x8000000000ULL == (0xfff8000000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffff000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xcU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff4U;
        } else if ((0x4000000000ULL == (0xfffc000000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffe000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xdU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff3U;
        } else if ((0x2000000000ULL == (0xfffe000000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffc000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xeU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff2U;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffff8000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xfU));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff1U;
        }
    } else if (((((((((0x800000000ULL == (0xffff800000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x400000000ULL == (0xffffc00000000ULL 
                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x200000000ULL == (0xffffe00000000ULL 
                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x100000000ULL == (0xfffff00000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x80000000ULL == (0xfffff80000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x40000000ULL == (0xfffffc0000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x20000000ULL == (0xfffffe0000000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x10000000ULL == (0xffffff0000000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x800000000ULL == (0xffff800000000ULL 
                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffff0000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x10U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff0U;
        } else if ((0x400000000ULL == (0xffffc00000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffe0000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x11U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fefU;
        } else if ((0x200000000ULL == (0xffffe00000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffc0000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x12U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1feeU;
        } else if ((0x100000000ULL == (0xfffff00000000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffff80000ULL & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x13U));
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fedU;
        } else if ((0x80000000ULL == (0xfffff80000000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                   << 0x14U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fecU;
        } else if ((0x40000000ULL == (0xfffffc0000000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x15U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1febU;
        } else if ((0x20000000ULL == (0xfffffe0000000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x16U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1feaU;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x17U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe9U;
        }
    } else if (((((((((0x8000000ULL == (0xffffff8000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x4000000ULL == (0xffffffc000000ULL 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x2000000ULL == (0xffffffe000000ULL 
                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x1000000ULL == (0xfffffff000000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x800000ULL == (0xfffffff800000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x400000ULL == (0xfffffffc00000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x200000ULL == (0xfffffffe00000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x100000ULL == (0xffffffff00000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x8000000ULL == (0xffffff8000000ULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x18U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe8U;
        } else if ((0x4000000ULL == (0xffffffc000000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x19U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe7U;
        } else if ((0x2000000ULL == (0xffffffe000000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1aU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe6U;
        } else if ((0x1000000ULL == (0xfffffff000000ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1bU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe5U;
        } else if ((0x800000ULL == (0xfffffff800000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1cU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe4U;
        } else if ((0x400000ULL == (0xfffffffc00000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1dU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe3U;
        } else if ((0x200000ULL == (0xfffffffe00000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1eU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe2U;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1fU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe1U;
        }
    } else if (((((((((0x80000ULL == (0xffffffff80000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x40000ULL == (0xffffffffc0000ULL 
                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x20000ULL == (0xffffffffe0000ULL 
                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x10000ULL == (0xfffffffff0000ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x8000ULL == (0xfffffffff8000ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x4000ULL == (0xfffffffffc000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x2000ULL == (0xfffffffffe000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x1000ULL == (0xffffffffff000ULL 
                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x80000ULL == (0xffffffff80000ULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x20U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe0U;
        } else if ((0x40000ULL == (0xffffffffc0000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x21U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdfU;
        } else if ((0x20000ULL == (0xffffffffe0000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x22U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdeU;
        } else if ((0x10000ULL == (0xfffffffff0000ULL 
                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x23U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fddU;
        } else if ((0x8000ULL == (0xfffffffff8000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x24U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdcU;
        } else if ((0x4000ULL == (0xfffffffffc000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x25U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdbU;
        } else if ((0x2000ULL == (0xfffffffffe000ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x26U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdaU;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x27U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd9U;
        }
    } else if (((((((((0x800ULL == (0xffffffffff800ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x400ULL == (0xffffffffffc00ULL 
                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x200ULL == (0xffffffffffe00ULL 
                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x100ULL == (0xfffffffffff00ULL 
                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x80ULL == (0xfffffffffff80ULL 
                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x40ULL == (0xfffffffffffc0ULL 
                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x20ULL == (0xfffffffffffe0ULL 
                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x10ULL == (0xffffffffffff0ULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x800ULL == (0xffffffffff800ULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x28U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd8U;
        } else if ((0x400ULL == (0xffffffffffc00ULL 
                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x29U);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd7U;
        } else if ((0x200ULL == (0xffffffffffe00ULL 
                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2aU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd6U;
        } else if ((0x100ULL == (0xfffffffffff00ULL 
                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2bU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd5U;
        } else if ((0x80ULL == (0xfffffffffff80ULL 
                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2cU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd4U;
        } else if ((0x40ULL == (0xfffffffffffc0ULL 
                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2dU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd3U;
        } else if ((0x20ULL == (0xfffffffffffe0ULL 
                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2eU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd2U;
        } else {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2fU);
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd1U;
        }
    } else if ((8ULL == (0xffffffffffff8ULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((0xfU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x30U);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd0U;
    } else if ((4ULL == (0xffffffffffffcULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((7U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x31U);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fcfU;
    } else if ((2ULL == (0xffffffffffffeULL & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((3U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x32U);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fceU;
    } else if ((1ULL == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x33U);
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fcdU;
    } else {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac = 0ULL;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt 
            = ((0ULL == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)
                ? 0x1fccU : 0U);
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper0_id_expnt 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
            ? (0x400U | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_expnt_rst))
            : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_rst_default_qnan 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_0)) 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_1)) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt) 
                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_nv 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
            & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_snan) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_snan) 
                  | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_0) 
                     | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_1))))) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt) 
              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_snan) 
                 | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id)
            ? (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
                 ? ((QData)((IData)((0x7fffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_srt__DOT__srt_divisor))) 
                    << 0x1dU) : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac) 
               << 1U) : (0x10000000000000ULL | ((QData)((IData)(
                                                                (0x7fffffU 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1))) 
                                                << 0x1dU)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_expnt_adder_op1 
        = ((2U == (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
                    << 1U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)))
            ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_op1_id_nor)
                ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt)
                : (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2 
                            >> 0x17U))) : ((1U == (
                                                   ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)))
                                            ? 0x7fU
                                            : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan 
        = ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_qnan) 
             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_qnan)) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_qnan) 
               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_nv)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_remainder 
        = ((0x7fffffcU & ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div))) 
                          & ((IData)((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                                      >> 0x1cU)) << 2U))) 
           | ((- (IData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt))) 
              & (IData)((((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id)
                                  ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt)
                                  : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                                     >> 0x17U))) ? 
                          (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                           << 1U) : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                                     << 2U)) >> 0x1cU))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_cnan 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel 
        = ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel))
            ? (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan_op1) 
                << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan_op0) 
                           << 5U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_cnan) 
                                      << 4U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero) 
                                                   << 1U)))))
            : 0U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_data 
        = ((1U == (0xfU & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel) 
                           >> 5U))) ? (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__operands_i)
            : ((2U == (0xfU & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel) 
                               >> 5U))) ? (IData)((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__operands_i 
                                                   >> 0x20U))
                : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld));
    __Vtableidx4 = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__srt_last_round) 
                     << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall) 
                                << 5U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
                                           << 4U) | 
                                          (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_wb_grant) 
                                            << 3U) 
                                           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_next_state 
        = VCoreMiniAxi__ConstPool__TABLE_h3229ed01_0
        [__Vtableidx4];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en 
        = (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate)) 
           | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_iter_start 
        = (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start)) 
           | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall 
        = (((~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_srt_idle) 
                 | (1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))) 
                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_wb_idle))) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel)) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_srt__DOT__srt_div_clk_en 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate) 
              | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__expnt_rst_clk_en 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex2_pipe_clk_en) 
                 | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)))));
    __Vtableidx5 = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_iter_start) 
                     << 7U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_wb_grant) 
                                << 6U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall) 
                                           << 5U) | 
                                          ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
                                             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip)) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall) 
                                               << 3U) 
                                              | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_nxt_state 
        = VCoreMiniAxi__ConstPool__TABLE_h8d93b1df_0
        [__Vtableidx5];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q;
    if ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
             & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
                = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q) 
                   & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall)));
        }
    } else if ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q;
    }
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__69(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__69\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___floatCoreWrapper_in_ready_o 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___floatCoreWrapper_io_in_valid_i_T_3) 
           & (((0xfffffff8U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                << 3U) & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes))) 
               | ((0x7ffffffcU & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                   << 2U) & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 1U))) 
                  | ((((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                       & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready)) 
                      << 1U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                   >> 3U))))) >> ([&]() {
                    vlSelf->__Vfunc_get_opgroup__0__op 
                        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i;
                    {
                        if ((8U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                            if ((4U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                                if ((2U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                                        vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                        goto __Vlabel10;
                                    } else {
                                        vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                        goto __Vlabel10;
                                    }
                                } else {
                                    vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                    goto __Vlabel10;
                                }
                            } else if ((2U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                                vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                goto __Vlabel10;
                            } else {
                                vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                goto __Vlabel10;
                            }
                        } else if ((4U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_get_opgroup__0__op))) {
                                vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                goto __Vlabel10;
                            } else {
                                vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 1U;
                                goto __Vlabel10;
                            }
                        } else {
                            vlSelf->__Vfunc_get_opgroup__0__Vfuncout = 0U;
                            goto __Vlabel10;
                        }
                        __Vlabel10: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_get_opgroup__0__Vfuncout))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___instQueue_io_deq_ready_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___floatCoreWrapper_io_in_valid_i_T_3) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___floatCoreWrapper_in_ready_o));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___instQueue_io_deq_ready_T) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fpuActive));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__scalar_rd_pipe_q__DOT__full)) 
           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_3) 
               & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                  & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___floatCoreWrapper_io_out_ready_i_T_4) 
                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U] 
                        >> 8U)))) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fmv_x_w)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue_io_deq_ready 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_3) 
            & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_19)) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fmv));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_csr_in_fflags_valid_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue_io_deq_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT___io_csr_in_fflags_valid_T));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid 
        = ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full) 
               & (1U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[3U]))) 
           & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U] 
                   >> 8U)) & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT____VdfgRegularize_h76aa624f_2_6)) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__fmv_w_x)));
    VL_ASSIGN_SII(1,vlSelf->io_debug_float_writeData_0_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (4U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (8U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0xcU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x10U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x14U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x18U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_7 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x1cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_8 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x20U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_9 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x24U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_10 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x28U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_11 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x2cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_12 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x30U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_13 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x34U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_14 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x38U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_15 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x3cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_16 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x40U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_17 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x44U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_18 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x48U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_19 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x4cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_20 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x50U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_21 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x54U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_22 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x58U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_23 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x5cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_24 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x60U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_25 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x64U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x68U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_27 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x6cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_28 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x70U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_29 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x74U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_30 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x78U == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__valid_0_31 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & (0x7cU == (0x7cU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard_clr 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid)
             ? ((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U] 
                                         >> 2U))) : 0U) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_v)
               ? ((IData)(1U) << (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__io_rd_flt_pipe_pipe_b_addr))
               : 0U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT___io_busPort_data_0_T_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_write_ports_0_valid) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___floatCore_io_read_ports_1_addr) 
              == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__ram[0U] 
                           >> 2U))));
}

void VCoreMiniAxi___024root___eval_triggers__act(VCoreMiniAxi___024root* vlSelf);
void VCoreMiniAxi___024root___eval_act(VCoreMiniAxi___024root* vlSelf);

bool VCoreMiniAxi___024root___eval_phase__act(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<58> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCoreMiniAxi___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCoreMiniAxi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VCoreMiniAxi___024root___eval_nba(VCoreMiniAxi___024root* vlSelf);

bool VCoreMiniAxi___024root___eval_phase__nba(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCoreMiniAxi___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreMiniAxi___024root___dump_triggers__ico(VCoreMiniAxi___024root* vlSelf);
#endif  // VL_DEBUG
bool VCoreMiniAxi___024root___eval_phase__ico(VCoreMiniAxi___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreMiniAxi___024root___dump_triggers__nba(VCoreMiniAxi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreMiniAxi___024root___dump_triggers__act(VCoreMiniAxi___024root* vlSelf);
#endif  // VL_DEBUG

void VCoreMiniAxi___024root___eval(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VCoreMiniAxi___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("bazel-out/k8-fastbuild/bin/hdl/chisel/src/coralnpu/CoreMiniAxi.sv", 16991, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCoreMiniAxi___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCoreMiniAxi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bazel-out/k8-fastbuild/bin/hdl/chisel/src/coralnpu/CoreMiniAxi.sv", 16991, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCoreMiniAxi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bazel-out/k8-fastbuild/bin/hdl/chisel/src/coralnpu/CoreMiniAxi.sv", 16991, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCoreMiniAxi___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCoreMiniAxi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCoreMiniAxi___024root___eval_debug_assertions(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
