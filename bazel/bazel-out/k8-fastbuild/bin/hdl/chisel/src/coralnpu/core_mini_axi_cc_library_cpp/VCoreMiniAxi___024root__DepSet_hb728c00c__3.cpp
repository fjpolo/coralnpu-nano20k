// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreMiniAxi.h for the primary calling header

#include "VCoreMiniAxi__pch.h"
#include "VCoreMiniAxi___024root.h"

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__14(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_valid) 
                     << 1U)) | ((0x10U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_valid) 
                                           << 2U) | 
                                          ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_valid) 
                                           << 1U))) 
                                | ((8U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_valid) 
                                          << 3U)) | 
                                   (((IData)((0U != 
                                              (0x60U 
                                               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__17(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                     << 1U)) | ((0x10U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                           << 2U) | 
                                          ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                           << 1U))) 
                                | ((8U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                          << 3U)) | 
                                   (((IData)((0U != 
                                              (0x60U 
                                               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__18(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                     << 1U)) | ((0x10U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                           << 2U) | 
                                          ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                           << 1U))) 
                                | ((8U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                          << 3U)) | 
                                   (((IData)((0U != 
                                              (0x60U 
                                               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__19(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                     << 1U)) | ((0x10U & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                           << 2U) | 
                                          ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                           << 1U))) 
                                | ((8U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                          << 3U)) | 
                                   (((IData)((0U != 
                                              (0x60U 
                                               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__26(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__26\n"); );
    // Init
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h970ae9aa__0;
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h970ae9aa__0 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0;
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdc56f529__0;
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdc56f529__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0x1ffU & ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i))
                      ? ((IData)(0x1fU) - (0x1fU & 
                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                      : ((IData)(8U) + ((((0xffU & 
                                           (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U] 
                                            >> 0x17U)) 
                                          + VL_EXTENDS_II(9,2, 
                                                          (1U 
                                                           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                              >> 6U)))) 
                                         - (IData)(0x7fU)) 
                                        - (0x1fU & 
                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
           << (0x1fU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]));
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdc56f529__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,9, (0x1ffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))) 
           & VL_LTES_III(32, 0xffffffe9U, VL_EXTENDS_II(32,9, 
                                                        (0x1ffU 
                                                         & ((IData)(0x7fU) 
                                                            + 
                                                            VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0 
        = (VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,9, 
                                                (0x1ffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))) 
           | ((0xcU != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i)) 
              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                 >> 4U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h970ae9aa__0 
        = (VL_GTES_III(32, VL_EXTENDS_II(32,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)), 
                       ((([&]() {
                            vlSelf->__Vfunc_int_width__17__ifmt = 2U;
                            {
                                if ((2U & (IData)(vlSelf->__Vfunc_int_width__17__ifmt))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_int_width__17__ifmt))) {
                                        vlSelf->__Vfunc_int_width__17__Vfuncout = 0x40U;
                                        goto __Vlabel8;
                                    } else {
                                        vlSelf->__Vfunc_int_width__17__Vfuncout = 0x20U;
                                        goto __Vlabel8;
                                    }
                                } else if ((1U & (IData)(vlSelf->__Vfunc_int_width__17__ifmt))) {
                                    vlSelf->__Vfunc_int_width__17__Vfuncout = 0x10U;
                                    goto __Vlabel8;
                                } else {
                                    vlSelf->__Vfunc_int_width__17__Vfuncout = 8U;
                                    goto __Vlabel8;
                                }
                                __Vlabel8: ;
                            }
                        }(), vlSelf->__Vfunc_int_width__17__Vfuncout) 
                         - (IData)(1U)) + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__op_mod_q2))) 
           & (~ ((((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__op_mod_q2)) 
                   & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)) 
                  & (VL_EXTENDS_II(32,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                     == (([&]() {
                                    vlSelf->__Vfunc_int_width__18__ifmt = 2U;
                                    {
                                        if ((2U & (IData)(vlSelf->__Vfunc_int_width__18__ifmt))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->__Vfunc_int_width__18__ifmt))) {
                                                vlSelf->__Vfunc_int_width__18__Vfuncout = 0x40U;
                                                goto __Vlabel9;
                                            } else {
                                                vlSelf->__Vfunc_int_width__18__Vfuncout = 0x20U;
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_int_width__18__ifmt))) {
                                            vlSelf->__Vfunc_int_width__18__Vfuncout = 0x10U;
                                            goto __Vlabel9;
                                        } else {
                                            vlSelf->__Vfunc_int_width__18__Vfuncout = 8U;
                                            goto __Vlabel9;
                                        }
                                        __Vlabel9: ;
                                    }
                                }(), vlSelf->__Vfunc_int_width__18__Vfuncout) 
                         - (IData)(1U)))) & (0x80000000U 
                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0x1ffU & ((IData)(0x7fU) + VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))));
    __Vtemp_2[0U] = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(65,65,32, __Vtemp_3, __Vtemp_2, 0x21U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] 
        = __Vtemp_3[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] 
        = __Vtemp_3[1U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] 
        = (1U & __Vtemp_3[2U]);
    if ((0xbU != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i))) {
        if (CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0xfeU;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] = 0xffffffffU;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] = 0xffffffffU;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] = 1U;
        } else if (CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdc56f529__0) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (VL_GTS_III(32, 0xffffffe9U, VL_EXTENDS_II(32,9, 
                                                             (0x1ffU 
                                                              & ((IData)(0x7fU) 
                                                                 + 
                                                                 VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
    if ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i))) {
        if ((1U & (~ (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h970ae9aa__0)))) {
            if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
            }
        }
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x3fU & ((IData)(0x1fU) - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)));
        if (CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h970ae9aa__0) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x21U;
        }
    } else {
        if ((1U & (~ (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0)))) {
            if (CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdc56f529__0) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x3fU & (((IData)(1U) + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0x1ffU & ((IData)(0x7fU) 
                                             + VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))));
            } else if (VL_GTS_III(32, 0xffffffe9U, 
                                  VL_EXTENDS_II(32,9, 
                                                (0x1ffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    VL_EXTENDS_II(9,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))))) {
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x3fU & ((IData)(0x19U) + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)));
            }
        }
        if (CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_haee7f3e6__0) {
            vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
    }
    VL_SHIFTR_WWI(65,65,6, __Vtemp_7, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
        = __Vtemp_7[0U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
        = __Vtemp_7[1U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
        = (1U & __Vtemp_7[2U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = (- (IData)((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
            << 0x1fU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                         >> 1U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                  >> 7U)) | (0U != (0xffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U]))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                  << 1U)) | (0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U]));
    if ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U];
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = ((0x7f800000U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                               << 0x17U)) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                             >> 9U));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
           + ((4U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q))
               ? ((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q) 
                         >> 1U)) || (1U & ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q))
                                            ? ((~ vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                                               & (0U 
                                                  != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                               >> 1U))))
               : ((2U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q))
                   ? ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q))
                       ? ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                          & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)))
                       : ((0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                          & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)))
                   : ((1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rnd_mode_q))) 
                      && ((1U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                 >> 1U)) && ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                             || (1U 
                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1eU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | (0U == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                              >> 0x17U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1eU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | (0xffU == (0xffU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                 >> 0x17U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)
            ? (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xbU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)) 
         & (VL_EXTENDS_II(32,9, (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
            == ((IData)(0x1eU) + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__op_mod_q2))))) {
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xbU & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (4U & ((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                            >> (0x1fU & ((IData)(0x1eU) 
                                         + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__op_mod_q2))))) 
                        << 2U)));
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((0xbU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i))
                  ? ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                     >> 2U) : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o))) 
                   | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q) 
                    & ((0U != vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                       & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__op_mod_q2)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[2U]
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit 
        = (IData)(((0xbU != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__op_i)) 
                   | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
                      >> 0x1fU)));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__44(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__44\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[1U] = (((IData)((0x3fffffffffULL & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                         >> 6U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[0U])))))) 
                      << 6U) | (IData)(((0x3fffffffffULL 
                                         & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? (((QData)((IData)(
                                                                 vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                      >> 0xcU)))
                                             : (((QData)((IData)(
                                                                 vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                                      >> 6U))))) 
                                        >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((0x3fffffffffULL & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                         >> 6U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[0U])))))) 
                      >> 0x1aU) | ((IData)(((0x3fffffffffULL 
                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                     << 0x1aU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                       >> 6U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[0U]))))) 
                                            >> 0x20U)) 
                                   << 6U));
    __Vtemp_1[3U] = (((IData)((0x3fffffffffULL & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                                    << 0x2eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                                       << 0xeU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                         >> 0x12U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                         >> 0xcU)))))) 
                      >> 0x14U) | ((IData)(((0x3fffffffffULL 
                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                                     << 0xeU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                       >> 0x12U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                       >> 0xcU))))) 
                                            >> 0x20U)) 
                                   << 0xcU));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)((0x3fffffffffULL & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                       ? (((QData)((IData)(
                                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                >> 0xcU)))
                                       : (((QData)((IData)(
                                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                           << 0x3aU) 
                                          | (((QData)((IData)(
                                                              vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                                >> 6U))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = (((IData)((0x3fffffffffULL & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                             << 0x2eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[4U])) 
                                                << 0xeU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                  >> 0x12U)))
                                         : (((QData)((IData)(
                                                             vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                             << 0x34U) 
                                            | (((QData)((IData)(
                                                                vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[3U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT____Vcellinp__i_arbiter__data_i[2U])) 
                                                  >> 0xcU)))))) 
            << 0xcU) | __Vtemp_2[2U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__floatCoreWrapper__DOT__core__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__47(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__47\n"); );
    // Init
    VlWide<4>/*127:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T;
    VL_ZERO_W(128, CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T);
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_21;
    // Body
    __Vtemp_5[0U] = (IData)((((QData)((IData)((0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                >> 7U))))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                              >> 6U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 5U))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 4U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask)))))))))))))));
    __Vtemp_5[1U] = (IData)(((((QData)((IData)((0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                 >> 7U))))))) 
                               << 0x38U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                               >> 6U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 5U))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 4U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 3U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 1U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask)))))))))))))) 
                             >> 0x20U));
    __Vtemp_5[2U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                               >> 0xfU)))) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                     >> 0xeU)))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                        >> 0xdU)))) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                         >> 0xcU)))))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                           >> 0xbU)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 0xaU)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 9U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 8U))))))))))));
    __Vtemp_5[3U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                >> 0xfU)))) 
                                                 << 0x18U) 
                                                | ((0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                      >> 0xeU)))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                         >> 0xdU)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                          >> 0xcU)))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                            >> 0xbU)))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 0xaU)))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 9U)))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_mask) 
                                                                                >> 8U))))))))))) 
                             >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[0U] 
        = ((((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)) 
             | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)))
             ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[0U]
             : ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType))
                 ? vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_source_0_readData_bits[0U]
                 : vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_source_0_readData_bits[0U])) 
           & __Vtemp_5[0U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[1U] 
        = ((((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)) 
             | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)))
             ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[1U]
             : ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType))
                 ? vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_source_0_readData_bits[1U]
                 : vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_source_0_readData_bits[1U])) 
           & __Vtemp_5[1U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[2U] 
        = ((((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)) 
             | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)))
             ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[2U]
             : ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType))
                 ? vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_source_0_readData_bits[2U]
                 : vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_source_0_readData_bits[2U])) 
           & __Vtemp_5[2U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[3U] 
        = ((((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)) 
             | (3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType)))
             ? vlSelf->CoreMiniAxi__DOT__ebus2axi__DOT__sdata[3U]
             : ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_regionType))
                 ? vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_source_0_readData_bits[3U]
                 : vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_source_0_readData_bits[3U])) 
           & __Vtemp_5[3U]);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__fetcher__DOT__ibusFired 
        = (1U & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__blockNewFetch)) 
                 & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_ibus_valid))));
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_ibus_valid) {
        vlSelf->CoreMiniAxi__DOT___core_io_ibus_addr 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr;
        vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy 
            = (1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_ibus_valid));
    } else {
        vlSelf->CoreMiniAxi__DOT___core_io_ibus_addr 
            = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__blockNewFetch)
                 ? 0U : (vlSelf->__VdfgRegularize_hd87f99a1_1_4 
                         >> 4U)) << 4U);
        vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy 
            = (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__ctrl__DOT__blockNewFetch)));
    }
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_1 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_fabricBusy)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT____VdfgRegularize_hcf9f4d07_0_1));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[0U] 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize) 
               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_size))
               ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[0U]));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[1U] 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize) 
               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_size))
               ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[1U]));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[2U] 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize) 
               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_size))
               ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[2U]));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__srdataMasked[3U] 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize) 
               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_size))
               ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__prevSrdataReg[3U]));
    if (vlSelf->CoreMiniAxi__DOT__fabricMux__DOT____VdfgRegularize_hcf9f4d07_0_0) {
        vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy 
            = vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy;
        vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0 
            = (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)));
    } else {
        vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy 
            = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT____VdfgRegularize_hcf9f4d07_0_1) 
               & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_fabricBusy));
        vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0 = 0U;
    }
    vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy) 
           & (0U != (vlSelf->CoreMiniAxi__DOT___core_io_ibus_addr 
                     >> 0xdU)));
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_1_readDataAddr_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_1) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeIssueRead));
    if (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_fabricBusy) {
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_dbus_wdata[0U];
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_dbus_wdata[1U];
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_dbus_wdata[2U];
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] 
            = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_dbus_wdata[3U];
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb 
            = (0xffffU & (((0xffffU >> (0x1fU & ((IData)(0x10U) 
                                                 - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_size)))) 
                           << (0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr)) 
                          | ((0xffffU & (0xffffU >> 
                                         (0x1fU & ((IData)(0x10U) 
                                                   - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_size))))) 
                             >> (0x1fU & ((IData)(0x10U) 
                                          - (0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr))))));
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid 
            = vlSelf->CoreMiniAxi__DOT____Vcellinp__dtcmArbiter__io_source_0_writeDataAddr_valid;
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_readDataAddr_valid 
            = vlSelf->CoreMiniAxi__DOT____Vcellinp__dtcmArbiter__io_source_0_readDataAddr_valid;
    } else {
        if (vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_1) {
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                = vlSelf->CoreMiniAxi__DOT___axiSlave_io_fabric_writeDataBits[0U];
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                = vlSelf->CoreMiniAxi__DOT___axiSlave_io_fabric_writeDataBits[1U];
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] 
                = vlSelf->CoreMiniAxi__DOT___axiSlave_io_fabric_writeDataBits[2U];
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] 
                = vlSelf->CoreMiniAxi__DOT___axiSlave_io_fabric_writeDataBits[3U];
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb 
                = (0xffffU & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                   [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]);
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid 
                = vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeWriteData;
        } else {
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] = 0U;
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] = 0U;
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] = 0U;
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] = 0U;
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb 
                = (0xffffU & 0U);
            vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid = 0U;
        }
        vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_readDataAddr_valid 
            = vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_1_readDataAddr_valid_0;
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___GEN 
        = (((0U == (0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
             ? ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                    ? ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                        ? ((0x8000U & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                            ? 0xffff0000U : 0U) : (
                                                   (0x80U 
                                                    & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                                                    ? 0xffffff00U
                                                    : 0U))
                    : 0U)) : 0U) | (((1U == (0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                      ? ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                            << 0x18U) 
                                           | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                              >> 8U)) 
                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                             ? ((2U 
                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                 ? 
                                                ((0x800000U 
                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                                                  ? 0xffff0000U
                                                  : 0U)
                                                 : 
                                                ((0x8000U 
                                                  & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                                                  ? 0xffffff00U
                                                  : 0U))
                                             : 0U))
                                      : 0U) | (((2U 
                                                 == 
                                                 (0xfU 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                 ? 
                                                ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                    << 0x10U) 
                                                   | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                      >> 0x10U)) 
                                                  & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                      ? 
                                                     ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                       >> 0x1fU)
                                                       ? 0xffff0000U
                                                       : 0U)
                                                      : 
                                                     ((0x800000U 
                                                       & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                                                       ? 0xffffff00U
                                                       : 0U))
                                                     : 0U))
                                                 : 0U) 
                                               | (((3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                    ? 
                                                   ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                       << 8U) 
                                                      | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                         >> 0x18U)) 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                        ? 
                                                       ((2U 
                                                         == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                         ? 
                                                        ((0x80U 
                                                          & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                          ? 0xffff0000U
                                                          : 0U)
                                                         : 
                                                        ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                          >> 0x1fU)
                                                          ? 0xffffff00U
                                                          : 0U))
                                                        : 0U))
                                                    : 0U) 
                                                  | (((4U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                       ? 
                                                      ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                        & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                       | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                           ? 
                                                          ((2U 
                                                            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                            ? 
                                                           ((0x8000U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                             ? 0xffff0000U
                                                             : 0U)
                                                            : 
                                                           ((0x80U 
                                                             & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                             ? 0xffffff00U
                                                             : 0U))
                                                           : 0U))
                                                       : 0U) 
                                                     | (((5U 
                                                          == 
                                                          (0xfU 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                          ? 
                                                         ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                             << 0x18U) 
                                                            | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                               >> 8U)) 
                                                           & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                              ? 
                                                             ((2U 
                                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                               ? 
                                                              ((0x800000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                                ? 0xffff0000U
                                                                : 0U)
                                                               : 
                                                              ((0x8000U 
                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                                ? 0xffffff00U
                                                                : 0U))
                                                              : 0U))
                                                          : 0U) 
                                                        | (((6U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                             ? 
                                                            ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                << 0x10U) 
                                                               | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                                  >> 0x10U)) 
                                                              & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                 ? 
                                                                ((2U 
                                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                  ? 
                                                                 ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffff0000U
                                                                   : 0U)
                                                                  : 
                                                                 ((0x800000U 
                                                                   & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U])
                                                                   ? 0xffffff00U
                                                                   : 0U))
                                                                 : 0U))
                                                             : 0U) 
                                                           | (((7U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                ? 
                                                               ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                   << 8U) 
                                                                  | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                                     >> 0x18U)) 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                    ? 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                     ? 
                                                                    ((0x80U 
                                                                      & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                      ? 0xffff0000U
                                                                      : 0U)
                                                                     : 
                                                                    ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[1U] 
                                                                      >> 0x1fU)
                                                                      ? 0xffffff00U
                                                                      : 0U))
                                                                    : 0U))
                                                                : 0U) 
                                                              | (((8U 
                                                                   == 
                                                                   (0xfU 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                   ? 
                                                                  ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                       ? 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                        ? 
                                                                       ((0x8000U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                         ? 0xffff0000U
                                                                         : 0U)
                                                                        : 
                                                                       ((0x80U 
                                                                         & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                         ? 0xffffff00U
                                                                         : 0U))
                                                                       : 0U))
                                                                   : 0U) 
                                                                 | (((9U 
                                                                      == 
                                                                      (0xfU 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                      ? 
                                                                     ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                         << 0x18U) 
                                                                        | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                           >> 8U)) 
                                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                          ? 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                           ? 
                                                                          ((0x800000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                            ? 0xffff0000U
                                                                            : 0U)
                                                                           : 
                                                                          ((0x8000U 
                                                                            & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                            ? 0xffffff00U
                                                                            : 0U))
                                                                          : 0U))
                                                                      : 0U) 
                                                                    | (((0xaU 
                                                                         == 
                                                                         (0xfU 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                         ? 
                                                                        ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                            << 0x10U) 
                                                                           | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                              >> 0x10U)) 
                                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                             ? 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                              ? 
                                                                             ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                               >> 0x1fU)
                                                                               ? 0xffff0000U
                                                                               : 0U)
                                                                              : 
                                                                             ((0x800000U 
                                                                               & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U])
                                                                               ? 0xffffff00U
                                                                               : 0U))
                                                                             : 0U))
                                                                         : 0U) 
                                                                       | (((0xbU 
                                                                            == 
                                                                            (0xfU 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                            ? 
                                                                           ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                               << 8U) 
                                                                              | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                                >> 0x18U)) 
                                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                                ? 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffff0000U
                                                                                 : 0U)
                                                                                 : 
                                                                                ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[2U] 
                                                                                >> 0x1fU)
                                                                                 ? 0xffffff00U
                                                                                 : 0U))
                                                                                : 0U))
                                                                            : 0U) 
                                                                          | (((0xcU 
                                                                               == 
                                                                               (0xfU 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                               ? 
                                                                              ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                                 ? 
                                                                                ((0x8000U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffff0000U
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0x80U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffffff00U
                                                                                 : 0U))
                                                                                 : 0U))
                                                                               : 0U) 
                                                                             | (((0xdU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                                 ? 
                                                                                ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                                                << 0x18U) 
                                                                                | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                >> 8U)) 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                                 ? 
                                                                                ((0x800000U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffff0000U
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffffff00U
                                                                                 : 0U))
                                                                                 : 0U))
                                                                                 : 0U) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                                 ? 
                                                                                ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                                                << 0x10U) 
                                                                                | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                >> 0x10U)) 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                                 ? 
                                                                                ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                >> 0x1fU)
                                                                                 ? 0xffff0000U
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0x800000U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U])
                                                                                 ? 0xffffff00U
                                                                                 : 0U))
                                                                                 : 0U))
                                                                                 : 0U) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_addr))
                                                                                 ? 
                                                                                ((((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U] 
                                                                                << 8U) 
                                                                                | (CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                >> 0x18U)) 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_2_1) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_sext)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__data__DOT__mem_0_fullsize))
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[0U])
                                                                                 ? 0xffff0000U
                                                                                 : 0U)
                                                                                 : 
                                                                                ((CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___combinedSrdata_T[3U] 
                                                                                >> 0x1fU)
                                                                                 ? 0xffffff00U
                                                                                 : 0U))
                                                                                 : 0U))
                                                                                 : 0U))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__issueRead 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeIssueRead));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q_io_deq_ready 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___fabricMux_io_fabricBusy)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeWriteData));
    vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_0_readDataAddr_valid_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeIssueRead));
    vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__maybeWriteData)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_bits_write 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)) 
           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__imem_store_fault) 
               | ((IData)(vlSelf->__Vcellinp__CoreMiniAxi__io_axi_master_write_resp_valid) 
                  & (IData)(vlSelf->CoreMiniAxi__DOT___ebus2axi_io_fault_valid))) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_fault_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)
            ? (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)
            : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_fault_valid));
    __Vtemp_11[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                 ? 
                                                (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                 >> 0x18U)
                                                 : 0U))) 
                               << 0x38U) | (((QData)((IData)(
                                                             ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                               ? 
                                                              (0xffU 
                                                               & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                                  >> 0x10U))
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                                     >> 8U))
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                     ? 
                                                                    (0xffU 
                                                                     & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U])
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                        ? 
                                                                       (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                        >> 0x18U)
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                           ? 
                                                                          (0xffU 
                                                                           & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                              >> 0x10U))
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                              ? 
                                                                             (0xffU 
                                                                              & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                                >> 8U))
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                               ? 
                                                                              (0xffU 
                                                                               & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U])
                                                                               : 0U)))))))))));
    __Vtemp_11[1U] = (IData)(((((QData)((IData)(((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                  ? 
                                                 (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                  >> 0x18U)
                                                  : 0U))) 
                                << 0x38U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                                   >> 0x10U))
                                                                : 0U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                   ? 
                                                                  (0xffU 
                                                                   & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U] 
                                                                      >> 8U))
                                                                   : 0U))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                      ? 
                                                                     (0xffU 
                                                                      & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[1U])
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                         ? 
                                                                        (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                         >> 0x18U)
                                                                         : 0U) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                            ? 
                                                                           (0xffU 
                                                                            & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                               >> 0x10U))
                                                                            : 0U) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                               ? 
                                                                              (0xffU 
                                                                               & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U] 
                                                                                >> 8U))
                                                                               : 0U) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                                                ? 
                                                                               (0xffU 
                                                                                & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[0U])
                                                                                : 0U)))))))))) 
                              >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__dtcm__DOT____Vcellinp__sram__io_wdata[0U] 
        = __Vtemp_11[0U];
    vlSelf->CoreMiniAxi__DOT__dtcm__DOT____Vcellinp__sram__io_wdata[1U] 
        = __Vtemp_11[1U];
    vlSelf->CoreMiniAxi__DOT__dtcm__DOT____Vcellinp__sram__io_wdata[2U] 
        = ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
              ? (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] 
                 >> 0x18U) : 0U) << 0x18U) | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] 
                                                    >> 0x10U))
                                                 : 0U) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U] 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[2U])
                                                     : 0U))));
    vlSelf->CoreMiniAxi__DOT__dtcm__DOT____Vcellinp__sram__io_wdata[3U] 
        = ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
              ? (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] 
                 >> 0x18U) : 0U) << 0x18U) | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] 
                                                    >> 0x10U))
                                                 : 0U) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U] 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataBits[3U])
                                                     : 0U))));
    vlSelf->CoreMiniAxi__DOT__dtcm__DOT____Vcellinp__sram__io_wmask 
        = ((0x8000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                        << 0xfU) | (0xffff8000U & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
           | ((0x4000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                           << 0xeU) | (0xffffc000U 
                                       & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
              | ((0x2000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                              << 0xdU) | (0xffffe000U 
                                          & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                 | ((0x1000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                 << 0xcU) | (0xfffff000U 
                                             & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                    | ((0x800U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                   << 0xbU) | (0xfffff800U 
                                               & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                       | ((0x400U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                      << 0xaU) | (0xfffffc00U 
                                                  & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                          | ((0x200U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                         << 9U) | (0xfffffe00U 
                                                   & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                             | ((0x100U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                            << 8U) 
                                           | (0xffffff00U 
                                              & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                | ((0x80U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                   | ((0x40U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                      | ((0x20U & (
                                                   ((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                         | ((0x10U 
                                             & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                 << 4U) 
                                                | (0xfffffff0U 
                                                   & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                            | ((8U 
                                                & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                    << 3U) 
                                                   | (0xfffffff8U 
                                                      & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                               | ((4U 
                                                   & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                       << 2U) 
                                                      | (0xfffffffcU 
                                                         & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                                  | ((2U 
                                                      & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                          << 1U) 
                                                         | (0xfffffffeU 
                                                            & (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb)))) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)) 
                                                           | (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataStrb))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__do_deq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__empty)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q_io_deq_ready));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeResponse_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q_io_deq_ready) 
           & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
              [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U] 
              >> 0x10U));
    vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_readDataAddr_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
            ? (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
            : (IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__io_ports_0_readDataAddr_valid_0));
    __Vtemp_18[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                 ? 
                                                ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                      >> 9U))
                                                   : 0U))
                                                 : 0U))) 
                               << 0x38U) | (((QData)((IData)(
                                                             ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                               ? 
                                                              ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                 ? 
                                                                (0xffU 
                                                                 & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                    [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                                    >> 1U))
                                                                 : 0U))
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                  ? 
                                                                 ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                   ? 0U
                                                                   : 
                                                                  ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                    ? 
                                                                   (0xffU 
                                                                    & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                        [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                                        << 7U) 
                                                                       | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                          [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                          >> 0x19U)))
                                                                    : 0U))
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                      ? 0U
                                                                      : 
                                                                     ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                          [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                          >> 0x11U))
                                                                       : 0U))
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                        ? 
                                                                       ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                          ? 
                                                                         (0xffU 
                                                                          & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                             [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                             >> 9U))
                                                                          : 0U))
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                           ? 
                                                                          ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                             ? 
                                                                            (0xffU 
                                                                             & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                                >> 1U))
                                                                             : 0U))
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                              ? 
                                                                             ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                                ? 
                                                                               (0xffU 
                                                                                & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                                << 7U) 
                                                                                | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U] 
                                                                                >> 0x19U)))
                                                                                : 0U))
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                               ? 
                                                                              ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                                ? 0U
                                                                                : 
                                                                               ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U] 
                                                                                >> 0x11U))
                                                                                 : 0U))
                                                                               : 0U)))))))))));
    __Vtemp_18[1U] = (IData)(((((QData)((IData)(((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                  ? 
                                                 ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                       [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                       >> 9U))
                                                    : 0U))
                                                  : 0U))) 
                                << 0x38U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                ? 
                                                               ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                     [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                                     >> 1U))
                                                                  : 0U))
                                                                : 0U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                   ? 
                                                                  ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                         [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                                         << 7U) 
                                                                        | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                           [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                           >> 0x19U)))
                                                                     : 0U))
                                                                   : 0U))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                      ? 
                                                                     ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                       ? 0U
                                                                       : 
                                                                      ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                        ? 
                                                                       (0xffU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                           [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                           >> 0x11U))
                                                                        : 0U))
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                         ? 
                                                                        ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                           ? 
                                                                          (0xffU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                              [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                              >> 9U))
                                                                           : 0U))
                                                                         : 0U) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                            ? 
                                                                           ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                             ? 0U
                                                                             : 
                                                                            ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                              ? 
                                                                             (0xffU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                                >> 1U))
                                                                              : 0U))
                                                                            : 0U) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                               ? 
                                                                              ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                                ? 0U
                                                                                : 
                                                                               ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][1U] 
                                                                                << 7U) 
                                                                                | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U] 
                                                                                >> 0x19U)))
                                                                                 : 0U))
                                                                               : 0U) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                                                                ? 
                                                                               ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U] 
                                                                                >> 0x11U))
                                                                                 : 0U))
                                                                                : 0U)))))))))) 
                              >> 0x20U));
    __Vtemp_21[2U] = ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                         ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                             ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                      ? (0xffU & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                  [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][3U] 
                                                  >> 9U))
                                      : 0U)) : 0U) 
                       << 0x18U) | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                       ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                           ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                       [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][3U] 
                                                       >> 1U))
                                                    : 0U))
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                          ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                              ? 0U : 
                                             ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                               ? (0xffU 
                                                  & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][3U] 
                                                      << 7U) 
                                                     | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                        >> 0x19U)))
                                               : 0U))
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                           ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                               ? 0U
                                               : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][2U] 
                                                      >> 0x11U))
                                                   : 0U))
                                           : 0U))));
    vlSelf->CoreMiniAxi__DOT__itcm__DOT____Vcellinp__sram__io_wdata[0U] 
        = __Vtemp_18[0U];
    vlSelf->CoreMiniAxi__DOT__itcm__DOT____Vcellinp__sram__io_wdata[1U] 
        = __Vtemp_18[1U];
    vlSelf->CoreMiniAxi__DOT__itcm__DOT____Vcellinp__sram__io_wdata[2U] 
        = __Vtemp_21[2U];
    vlSelf->CoreMiniAxi__DOT__itcm__DOT____Vcellinp__sram__io_wdata[3U] 
        = ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
              ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                  ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                           ? (0xffU & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                       [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][4U] 
                                       >> 9U)) : 0U))
              : 0U) << 0x18U) | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                    ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                        ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                    [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][4U] 
                                                    >> 1U))
                                                 : 0U))
                                    : 0U) << 0x10U) 
                                 | ((((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                       ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                           ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                                    ? 
                                                   (0xffU 
                                                    & ((vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][4U] 
                                                        << 7U) 
                                                       | (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                          [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][3U] 
                                                          >> 0x19U)))
                                                    : 0U))
                                       : 0U) << 8U) 
                                    | ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                                        ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                                            ? 0U : 
                                           ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                             ? (0xffU 
                                                & (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                   [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][3U] 
                                                   >> 0x11U))
                                             : 0U))
                                        : 0U))));
    vlSelf->CoreMiniAxi__DOT__itcm__DOT____Vcellinp__sram__io_wmask 
        = ((0x8000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                        << 0xfU) | (0xffff8000U & (
                                                   ((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                    << 0xfU) 
                                                   & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                       << 0xfU) 
                                                      & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
           | ((0x4000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                           << 0xeU) | (0xffffc000U 
                                       & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                           << 0xeU) 
                                          & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                              << 0xeU) 
                                             & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                             [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
              | ((0x2000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                              << 0xdU) | (0xffffe000U 
                                          & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                              << 0xdU) 
                                             & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                 << 0xdU) 
                                                & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                 | ((0x1000U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                 << 0xcU) | (0xfffff000U 
                                             & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                 << 0xcU) 
                                                & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                    << 0xcU) 
                                                   & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                   [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                    | ((0x800U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                   << 0xbU) | (0xfffff800U 
                                               & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                   << 0xbU) 
                                                  & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                      << 0xbU) 
                                                     & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                     [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                       | ((0x400U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                      << 0xaU) | (0xfffffc00U 
                                                  & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                      << 0xaU) 
                                                     & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                         << 0xaU) 
                                                        & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                          | ((0x200U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                         << 9U) | (0xfffffe00U 
                                                   & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                       << 9U) 
                                                      & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                          << 9U) 
                                                         & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                         [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                             | ((0x100U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                            << 8U) 
                                           | (0xffffff00U 
                                              & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                  << 8U) 
                                                 & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                     << 8U) 
                                                    & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                    [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                | ((0x80U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                    << 7U) 
                                                   & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                       << 7U) 
                                                      & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                   | ((0x40U & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                       << 6U) 
                                                      & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                          << 6U) 
                                                         & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                         [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                      | ((0x20U & (
                                                   ((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                          << 5U) 
                                                         & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                             << 5U) 
                                                            & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                            [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                         | ((0x10U 
                                             & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                 << 4U) 
                                                | (0xfffffff0U 
                                                   & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                       << 4U) 
                                                      & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                          << 4U) 
                                                         & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                         [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                            | ((8U 
                                                & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                    << 3U) 
                                                   | (0xfffffff8U 
                                                      & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                          << 3U) 
                                                         & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                             << 3U) 
                                                            & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                            [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                               | ((4U 
                                                   & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                       << 2U) 
                                                      | (0xfffffffcU 
                                                         & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                             << 2U) 
                                                            & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                                << 2U) 
                                                               & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                               [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                                  | ((2U 
                                                      & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                          << 1U) 
                                                         | (0xfffffffeU 
                                                            & (((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                                << 1U) 
                                                               & (((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                                   << 1U) 
                                                                  & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                  [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U]))))) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)) 
                                                           | ((~ (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)) 
                                                              & ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0) 
                                                                 & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__ram_ext__DOT__Memory
                                                                 [vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeData_q__DOT__wrap_1][0U])))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__instr_access_fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__load_fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_bits_write)) 
              & (~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__store_fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__core__io_ibus_fault_valid)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__fault_manager__io_in_memory_fault_bits_write)));
    vlSelf->CoreMiniAxi__DOT___dtcmWrapper_io_sram_enable 
        = ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_readDataAddr_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid));
    vlSelf->CoreMiniAxi__DOT___dtcmWrapper_io_sram_address 
        = (0x7ffU & ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_writeDataAddr_valid)
                      ? (((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_fabricBusy)
                           ? (0x7fffffffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr)
                           : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_1)
                               ? (0xfffeffffU & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr)
                               : 0U)) >> 4U) : ((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_port_readDataAddr_valid)
                                                 ? 
                                                (((IData)(vlSelf->CoreMiniAxi__DOT___dtcmArbiter_io_fabricBusy)
                                                   ? 
                                                  (0x7fffffffU 
                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_addr)
                                                   : 
                                                  ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_1)
                                                    ? 
                                                   (0xfffeffffU 
                                                    & vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr)
                                                    : 0U)) 
                                                 >> 4U)
                                                 : 0U)));
    vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__io_axi_write_resp_q__DOT__full)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__writeResponse_valid));
    vlSelf->CoreMiniAxi__DOT___itcmWrapper_io_sram_enable 
        = ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_readDataAddr_valid) 
           | (IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid));
    vlSelf->CoreMiniAxi__DOT___itcmWrapper_io_sram_address 
        = (0x1ffU & ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_writeDataAddr_valid)
                      ? ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                          ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                   ? (vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr 
                                      >> 4U) : 0U))
                      : ((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_port_readDataAddr_valid)
                          ? (((IData)(vlSelf->CoreMiniAxi__DOT___itcmArbiter_io_fabricBusy)
                               ? vlSelf->CoreMiniAxi__DOT___core_io_ibus_addr
                               : ((IData)(vlSelf->CoreMiniAxi__DOT__fabricMux__DOT__portSelected_0)
                                   ? vlSelf->CoreMiniAxi__DOT__axiSlave__DOT__cmdAddr
                                   : 0U)) >> 4U) : 0U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__load_fault) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__store_fault));
}

VL_INLINE_OPT void VCoreMiniAxi___024root___nba_comb__TOP__48(VCoreMiniAxi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root___nba_comb__TOP__48\n"); );
    // Init
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_inst_ready_T_25;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_inst_ready_T_25 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___lsuEn_T_45;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___lsuEn_T_45 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___lsuEn_T_45;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___lsuEn_T_45 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_19;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_19 = 0;
    IData/*31:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___lsuEn_T_45;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___lsuEn_T_45 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_18;
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_18 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29 = 0;
    CData/*3:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147 = 0;
    SData/*15:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608 = 0;
    CData/*0:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2 = 0;
    CData/*1:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_5;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_5 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7 = 0;
    CData/*2:0*/ CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21;
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21 = 0;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_1 
        = (((0U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                             >> 0x15U))) | ((IData)(
                                                    ((0x200000U 
                                                      == 
                                                      (0x3e00000U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                     & (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T)))) 
                                            | ((IData)(
                                                       ((0x400000U 
                                                         == 
                                                         (0x3e00000U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                        & (0U 
                                                           != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T)))) 
                                               | ((IData)(
                                                          ((0x600000U 
                                                            == 
                                                            (0x3e00000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                           & (0U 
                                                              != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T)))) 
                                                  | ((IData)(
                                                             ((0x800000U 
                                                               == 
                                                               (0x3e00000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                              & (0U 
                                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T)))) 
                                                     | ((IData)(
                                                                ((0xa00000U 
                                                                  == 
                                                                  (0x3e00000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T)))) 
                                                        | ((IData)(
                                                                   ((0xc00000U 
                                                                     == 
                                                                     (0x3e00000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                    & (0U 
                                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T)))) 
                                                           | ((IData)(
                                                                      ((0xe00000U 
                                                                        == 
                                                                        (0x3e00000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                       & (0U 
                                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T)))) 
                                                              | ((IData)(
                                                                         ((0x1000000U 
                                                                           == 
                                                                           (0x3e00000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                          & (0U 
                                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T)))) 
                                                                 | ((IData)(
                                                                            ((0x1200000U 
                                                                              == 
                                                                              (0x3e00000U 
                                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                             & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T)))) 
                                                                    | ((IData)(
                                                                               ((0x1400000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T)))) 
                                                                       | ((IData)(
                                                                                ((0x1600000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T)))) 
                                                                          | ((IData)(
                                                                                ((0x1800000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T)))) 
                                                                             | ((IData)(
                                                                                ((0x1a00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1c00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1e00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2000000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2200000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2400000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2600000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2800000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2a00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2c00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T)))) 
                                                                                | ((IData)(
                                                                                ((0x2e00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3000000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3200000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3400000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3600000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3800000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3a00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3c00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T)))) 
                                                                                | (IData)(
                                                                                ((0x3e00000U 
                                                                                == 
                                                                                (0x3e00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T)))))))))))))))))))))))))))))))))))
            ? (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                 >> 0x15U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                            >> 0x15U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                 >> 0x15U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                      >> 0x15U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                         >> 0x15U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                            >> 0x15U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                               >> 0x15U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                  >> 0x15U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                     >> 0x15U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                        >> 0x15U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                           >> 0x15U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                              >> 0x15U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                 >> 0x15U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                            >> 0x15U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                 >> 0x15U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                      >> 0x15U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                         >> 0x15U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                            >> 0x15U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                               >> 0x15U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                  >> 0x15U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                     >> 0x15U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                        >> 0x15U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                           >> 0x15U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                              >> 0x15U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 0x15U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31
                                                                                 : 0U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_3 
        = (((0U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                             >> 0x16U))) | ((IData)(
                                                    ((0x400000U 
                                                      == 
                                                      (0x7c00000U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                     & (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T)))) 
                                            | ((IData)(
                                                       ((0x800000U 
                                                         == 
                                                         (0x7c00000U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                        & (0U 
                                                           != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T)))) 
                                               | ((IData)(
                                                          ((0xc00000U 
                                                            == 
                                                            (0x7c00000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                           & (0U 
                                                              != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T)))) 
                                                  | ((IData)(
                                                             ((0x1000000U 
                                                               == 
                                                               (0x7c00000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                              & (0U 
                                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T)))) 
                                                     | ((IData)(
                                                                ((0x1400000U 
                                                                  == 
                                                                  (0x7c00000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T)))) 
                                                        | ((IData)(
                                                                   ((0x1800000U 
                                                                     == 
                                                                     (0x7c00000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                    & (0U 
                                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T)))) 
                                                           | ((IData)(
                                                                      ((0x1c00000U 
                                                                        == 
                                                                        (0x7c00000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                       & (0U 
                                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T)))) 
                                                              | ((IData)(
                                                                         ((0x2000000U 
                                                                           == 
                                                                           (0x7c00000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                          & (0U 
                                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T)))) 
                                                                 | ((IData)(
                                                                            ((0x2400000U 
                                                                              == 
                                                                              (0x7c00000U 
                                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                             & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T)))) 
                                                                    | ((IData)(
                                                                               ((0x2800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T)))) 
                                                                       | ((IData)(
                                                                                ((0x2c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T)))) 
                                                                          | ((IData)(
                                                                                ((0x3000000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T)))) 
                                                                             | ((IData)(
                                                                                ((0x3400000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T)))) 
                                                                                | ((IData)(
                                                                                ((0x3c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T)))) 
                                                                                | ((IData)(
                                                                                ((0x4000000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T)))) 
                                                                                | ((IData)(
                                                                                ((0x4400000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T)))) 
                                                                                | ((IData)(
                                                                                ((0x4800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T)))) 
                                                                                | ((IData)(
                                                                                ((0x4c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T)))) 
                                                                                | ((IData)(
                                                                                ((0x5000000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T)))) 
                                                                                | ((IData)(
                                                                                ((0x5400000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T)))) 
                                                                                | ((IData)(
                                                                                ((0x5800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T)))) 
                                                                                | ((IData)(
                                                                                ((0x5c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T)))) 
                                                                                | ((IData)(
                                                                                ((0x6000000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T)))) 
                                                                                | ((IData)(
                                                                                ((0x6400000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T)))) 
                                                                                | ((IData)(
                                                                                ((0x6800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T)))) 
                                                                                | ((IData)(
                                                                                ((0x6c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T)))) 
                                                                                | ((IData)(
                                                                                ((0x7000000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T)))) 
                                                                                | ((IData)(
                                                                                ((0x7400000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T)))) 
                                                                                | ((IData)(
                                                                                ((0x7800000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T)))) 
                                                                                | (IData)(
                                                                                ((0x7c00000U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T)))))))))))))))))))))))))))))))))))
            ? (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                 >> 0x16U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                            >> 0x16U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                 >> 0x16U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                      >> 0x16U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                         >> 0x16U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                            >> 0x16U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                               >> 0x16U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                  >> 0x16U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                     >> 0x16U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                        >> 0x16U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                           >> 0x16U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                              >> 0x16U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                 >> 0x16U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                            >> 0x16U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                 >> 0x16U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                      >> 0x16U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                         >> 0x16U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                            >> 0x16U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                               >> 0x16U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                  >> 0x16U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                     >> 0x16U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                        >> 0x16U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                           >> 0x16U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                              >> 0x16U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 0x16U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31
                                                                                 : 0U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_5 
        = (((0U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                             >> 0x17U))) | ((IData)(
                                                    ((0x800000U 
                                                      == 
                                                      (0xf800000U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                     & (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T)))) 
                                            | ((IData)(
                                                       ((0x1000000U 
                                                         == 
                                                         (0xf800000U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                        & (0U 
                                                           != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T)))) 
                                               | ((IData)(
                                                          ((0x1800000U 
                                                            == 
                                                            (0xf800000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                           & (0U 
                                                              != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T)))) 
                                                  | ((IData)(
                                                             ((0x2000000U 
                                                               == 
                                                               (0xf800000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                              & (0U 
                                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T)))) 
                                                     | ((IData)(
                                                                ((0x2800000U 
                                                                  == 
                                                                  (0xf800000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T)))) 
                                                        | ((IData)(
                                                                   ((0x3000000U 
                                                                     == 
                                                                     (0xf800000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                    & (0U 
                                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T)))) 
                                                           | ((IData)(
                                                                      ((0x3800000U 
                                                                        == 
                                                                        (0xf800000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                       & (0U 
                                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T)))) 
                                                              | ((IData)(
                                                                         ((0x4000000U 
                                                                           == 
                                                                           (0xf800000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                          & (0U 
                                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T)))) 
                                                                 | ((IData)(
                                                                            ((0x4800000U 
                                                                              == 
                                                                              (0xf800000U 
                                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                             & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T)))) 
                                                                    | ((IData)(
                                                                               ((0x5000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T)))) 
                                                                       | ((IData)(
                                                                                ((0x5800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T)))) 
                                                                          | ((IData)(
                                                                                ((0x6000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T)))) 
                                                                             | ((IData)(
                                                                                ((0x6800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T)))) 
                                                                                | ((IData)(
                                                                                ((0x7000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T)))) 
                                                                                | ((IData)(
                                                                                ((0x7800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T)))) 
                                                                                | ((IData)(
                                                                                ((0x8000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T)))) 
                                                                                | ((IData)(
                                                                                ((0x8800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T)))) 
                                                                                | ((IData)(
                                                                                ((0x9000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T)))) 
                                                                                | ((IData)(
                                                                                ((0x9800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T)))) 
                                                                                | ((IData)(
                                                                                ((0xa000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T)))) 
                                                                                | ((IData)(
                                                                                ((0xa800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T)))) 
                                                                                | ((IData)(
                                                                                ((0xb000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T)))) 
                                                                                | ((IData)(
                                                                                ((0xb800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T)))) 
                                                                                | ((IData)(
                                                                                ((0xc000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T)))) 
                                                                                | ((IData)(
                                                                                ((0xc800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T)))) 
                                                                                | ((IData)(
                                                                                ((0xd000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T)))) 
                                                                                | ((IData)(
                                                                                ((0xd800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T)))) 
                                                                                | ((IData)(
                                                                                ((0xe000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T)))) 
                                                                                | ((IData)(
                                                                                ((0xe800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T)))) 
                                                                                | ((IData)(
                                                                                ((0xf000000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T)))) 
                                                                                | (IData)(
                                                                                ((0xf800000U 
                                                                                == 
                                                                                (0xf800000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T)))))))))))))))))))))))))))))))))))
            ? (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                 >> 0x17U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                            >> 0x17U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                 >> 0x17U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                      >> 0x17U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                         >> 0x17U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                            >> 0x17U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                               >> 0x17U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                  >> 0x17U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                     >> 0x17U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                        >> 0x17U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                           >> 0x17U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                              >> 0x17U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                 >> 0x17U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                            >> 0x17U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                 >> 0x17U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                      >> 0x17U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                         >> 0x17U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                            >> 0x17U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                               >> 0x17U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                  >> 0x17U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                     >> 0x17U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                        >> 0x17U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                           >> 0x17U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                              >> 0x17U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 0x17U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31
                                                                                 : 0U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_7 
        = (((0U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                             >> 0x18U))) | ((IData)(
                                                    ((0x1000000U 
                                                      == 
                                                      (0x1f000000U 
                                                       & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                     & (0U 
                                                        != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T)))) 
                                            | ((IData)(
                                                       ((0x2000000U 
                                                         == 
                                                         (0x1f000000U 
                                                          & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                        & (0U 
                                                           != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T)))) 
                                               | ((IData)(
                                                          ((0x3000000U 
                                                            == 
                                                            (0x1f000000U 
                                                             & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                           & (0U 
                                                              != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T)))) 
                                                  | ((IData)(
                                                             ((0x4000000U 
                                                               == 
                                                               (0x1f000000U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                              & (0U 
                                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T)))) 
                                                     | ((IData)(
                                                                ((0x5000000U 
                                                                  == 
                                                                  (0x1f000000U 
                                                                   & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T)))) 
                                                        | ((IData)(
                                                                   ((0x6000000U 
                                                                     == 
                                                                     (0x1f000000U 
                                                                      & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                    & (0U 
                                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T)))) 
                                                           | ((IData)(
                                                                      ((0x7000000U 
                                                                        == 
                                                                        (0x1f000000U 
                                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                       & (0U 
                                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T)))) 
                                                              | ((IData)(
                                                                         ((0x8000000U 
                                                                           == 
                                                                           (0x1f000000U 
                                                                            & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                          & (0U 
                                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T)))) 
                                                                 | ((IData)(
                                                                            ((0x9000000U 
                                                                              == 
                                                                              (0x1f000000U 
                                                                               & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                             & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T)))) 
                                                                    | ((IData)(
                                                                               ((0xa000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T)))) 
                                                                       | ((IData)(
                                                                                ((0xb000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T)))) 
                                                                          | ((IData)(
                                                                                ((0xc000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T)))) 
                                                                             | ((IData)(
                                                                                ((0xd000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T)))) 
                                                                                | ((IData)(
                                                                                ((0xe000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T)))) 
                                                                                | ((IData)(
                                                                                ((0xf000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T)))) 
                                                                                | ((IData)(
                                                                                ((0x10000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T)))) 
                                                                                | ((IData)(
                                                                                ((0x11000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T)))) 
                                                                                | ((IData)(
                                                                                ((0x12000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T)))) 
                                                                                | ((IData)(
                                                                                ((0x13000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T)))) 
                                                                                | ((IData)(
                                                                                ((0x14000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T)))) 
                                                                                | ((IData)(
                                                                                ((0x15000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T)))) 
                                                                                | ((IData)(
                                                                                ((0x16000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T)))) 
                                                                                | ((IData)(
                                                                                ((0x17000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T)))) 
                                                                                | ((IData)(
                                                                                ((0x18000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T)))) 
                                                                                | ((IData)(
                                                                                ((0x19000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1a000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1b000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1c000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1d000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T)))) 
                                                                                | ((IData)(
                                                                                ((0x1e000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T)))) 
                                                                                | (IData)(
                                                                                ((0x1f000000U 
                                                                                == 
                                                                                (0x1f000000U 
                                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T)))))))))))))))))))))))))))))))))))
            ? (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                 >> 0x18U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                            >> 0x18U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                 >> 0x18U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                      >> 0x18U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                         >> 0x18U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                            >> 0x18U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                               >> 0x18U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                  >> 0x18U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                     >> 0x18U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                        >> 0x18U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                           >> 0x18U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                              >> 0x18U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : (((1U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                 >> 0x18U))) ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_1
                 : 0U) | (((2U == (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                            >> 0x18U)))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_2
                            : 0U) | (((3U == (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                 >> 0x18U)))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_3
                                       : 0U) | (((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                      >> 0x18U)))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_4
                                                  : 0U) 
                                                | (((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                         >> 0x18U)))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_5
                                                     : 0U) 
                                                   | (((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                            >> 0x18U)))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_6
                                                        : 0U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                               >> 0x18U)))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_7
                                                           : 0U) 
                                                         | (((8U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                  >> 0x18U)))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_8
                                                              : 0U) 
                                                            | (((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                     >> 0x18U)))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_9
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                        >> 0x18U)))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_10
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                           >> 0x18U)))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_11
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                              >> 0x18U)))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_12
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_13
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_14
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_15
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_16
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_17
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_18
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_19
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_20
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_21
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_22
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_23
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_24
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_25
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_26
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_27
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_28
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_29
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_30
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 0x18U)))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__regfile_31
                                                                                 : 0U))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_6 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
            | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T))) 
               | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                   & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T))) 
                  | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                      & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T))) 
                     | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                         & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T))) 
                        | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                            & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T))) 
                           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T))) 
                              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                  & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T))) 
                                 | (((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                     & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T))) 
                                    | (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                        & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T))) 
                                       | (((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                           & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T))) 
                                          | (((0xbU 
                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T))) 
                                             | (((0xcU 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T))) 
                                                | (((0xdU 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T))) 
                                                   | (((0xeU 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T))) 
                                                      | (((0xfU 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                          & (0U 
                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T))) 
                                                         | (((0x10U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                             & (0U 
                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T))) 
                                                            | (((0x11U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                & (0U 
                                                                   != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T))) 
                                                               | (((0x12U 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T))) 
                                                                  | (((0x13U 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T))) 
                                                                     | (((0x14U 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                         & (0U 
                                                                            != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T))) 
                                                                        | (((0x15U 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T))) 
                                                                           | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T))) 
                                                                              | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T))) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T))) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T))) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T))) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T))) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T))) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T))) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T))))))))))))))))))))))))))))))))))
            ? (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_6_value_5_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_4 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
            | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T))) 
               | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                   & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T))) 
                  | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                      & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T))) 
                     | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                         & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T))) 
                        | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                            & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T))) 
                           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T))) 
                              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                  & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T))) 
                                 | (((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                     & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T))) 
                                    | (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                        & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T))) 
                                       | (((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                           & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T))) 
                                          | (((0xbU 
                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T))) 
                                             | (((0xcU 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T))) 
                                                | (((0xdU 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T))) 
                                                   | (((0xeU 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T))) 
                                                      | (((0xfU 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                          & (0U 
                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T))) 
                                                         | (((0x10U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                             & (0U 
                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T))) 
                                                            | (((0x11U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                & (0U 
                                                                   != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T))) 
                                                               | (((0x12U 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T))) 
                                                                  | (((0x13U 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T))) 
                                                                     | (((0x14U 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                         & (0U 
                                                                            != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T))) 
                                                                        | (((0x15U 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T))) 
                                                                           | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T))) 
                                                                              | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T))) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T))) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T))) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T))) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T))) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T))) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T))) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T))))))))))))))))))))))))))))))))))
            ? (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_4_value_5_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_2 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
            | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T))) 
               | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                   & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T))) 
                  | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                      & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T))) 
                     | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                         & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T))) 
                        | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                            & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T))) 
                           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T))) 
                              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                  & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T))) 
                                 | (((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                     & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T))) 
                                    | (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                        & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T))) 
                                       | (((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                           & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T))) 
                                          | (((0xbU 
                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T))) 
                                             | (((0xcU 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T))) 
                                                | (((0xdU 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T))) 
                                                   | (((0xeU 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T))) 
                                                      | (((0xfU 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                          & (0U 
                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T))) 
                                                         | (((0x10U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                             & (0U 
                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T))) 
                                                            | (((0x11U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                & (0U 
                                                                   != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T))) 
                                                               | (((0x12U 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T))) 
                                                                  | (((0x13U 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T))) 
                                                                     | (((0x14U 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                         & (0U 
                                                                            != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T))) 
                                                                        | (((0x15U 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T))) 
                                                                           | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T))) 
                                                                              | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T))) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T))) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T))) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T))) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T))) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T))) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T))) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T))))))))))))))))))))))))))))))))))
            ? (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_2_value_5_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_0 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
            | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_1_T))) 
               | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                   & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_2_T))) 
                  | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                      & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_3_T))) 
                     | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                         & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_4_T))) 
                        | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                            & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_5_T))) 
                           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                               & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_6_T))) 
                              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                  & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_7_T))) 
                                 | (((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                     & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_8_T))) 
                                    | (((9U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                        & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_9_T))) 
                                       | (((0xaU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                           & (0U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_10_T))) 
                                          | (((0xbU 
                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_11_T))) 
                                             | (((0xcU 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_12_T))) 
                                                | (((0xdU 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_13_T))) 
                                                   | (((0xeU 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_14_T))) 
                                                      | (((0xfU 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                          & (0U 
                                                             != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_15_T))) 
                                                         | (((0x10U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                             & (0U 
                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_16_T))) 
                                                            | (((0x11U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                & (0U 
                                                                   != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_17_T))) 
                                                               | (((0x12U 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_18_T))) 
                                                                  | (((0x13U 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_19_T))) 
                                                                     | (((0x14U 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                         & (0U 
                                                                            != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_20_T))) 
                                                                        | (((0x15U 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_21_T))) 
                                                                           | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_22_T))) 
                                                                              | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_23_T))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_24_T))) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_25_T))) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_26_T))) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_27_T))) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_28_T))) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_29_T))) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_30_T))) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT___writeValid_31_T))))))))))))))))))))))))))))))))))
            ? (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data
                 : 0U) | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_1
                            : 0U) | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_2
                                       : 0U) | (((4U 
                                                  == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                  ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_3
                                                  : 0U) 
                                                | (((5U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                     ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_4
                                                     : 0U) 
                                                   | (((6U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                        ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_5
                                                        : 0U) 
                                                      | (((7U 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                           ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_6
                                                           : 0U) 
                                                         | (((8U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                              ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_7
                                                              : 0U) 
                                                            | (((9U 
                                                                 == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_8
                                                                 : 0U) 
                                                               | (((0xaU 
                                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                    ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_9
                                                                    : 0U) 
                                                                  | (((0xbU 
                                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                       ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_10
                                                                       : 0U) 
                                                                     | (((0xcU 
                                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                          ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_11
                                                                          : 0U) 
                                                                        | (((0xdU 
                                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                             ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_12
                                                                             : 0U) 
                                                                           | (((0xeU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_13
                                                                                : 0U) 
                                                                              | (((0xfU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_14
                                                                                 : 0U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_15
                                                                                 : 0U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_16
                                                                                 : 0U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_17
                                                                                 : 0U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_18
                                                                                 : 0U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_19
                                                                                 : 0U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_20
                                                                                 : 0U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_21
                                                                                 : 0U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_22
                                                                                 : 0U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_23
                                                                                 : 0U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_24
                                                                                 : 0U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_25
                                                                                 : 0U) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_26
                                                                                 : 0U) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_27
                                                                                 : 0U) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_28
                                                                                 : 0U) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_29
                                                                                 : 0U) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_addr))
                                                                                 ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__data_30
                                                                                 : 0U)))))))))))))))))))))))))))))))
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_0_value_5_0);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__csr__DOT___minstretThisCycle_T_2 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_rfwriteCount) 
                 + ((3U & (((IData)(vlSelf->CoreMiniAxi__DOT___core_io_ebus_dbus_valid) 
                            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mslice__DOT__mem_0_write)) 
                           + (IData)(vlSelf->CoreMiniAxi__DOT____Vcellinp__dtcmArbiter__io_source_0_writeDataAddr_valid))) 
                    + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___bru_0_io_taken_valid))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_3_bypass)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_6
            : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_6_value_5_0 
               + (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                     >> 3U)))) << 0xcU) 
                  | ((0xfe0U & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                 << 8U) | (0xe0U & 
                                           (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                            >> 0x18U)))) 
                     | (0x1fU & ((IData)((0x230U == 
                                          (0x7b0U & 
                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                      << 0x15U) | (
                                                   vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                   >> 0xbU))
                                  : ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                      << 8U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                >> 0x18U))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_2_bypass)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_4
            : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_4_value_5_0 
               + (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                     >> 2U)))) << 0xcU) 
                  | ((0xfe0U & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                 << 9U) | (0x1e0U & 
                                           (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                            >> 0x17U)))) 
                     | (0x1fU & ((IData)((0x118U == 
                                          (0x3d8U & 
                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                      << 0x16U) | (
                                                   vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                   >> 0xaU))
                                  : ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                      << 9U) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                >> 0x17U))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_1_bypass)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_2
            : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_2_value_5_0 
               + (((- (IData)((1U & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                     >> 1U)))) << 0xcU) 
                  | ((0xfe0U & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                 << 0xaU) | (0x3e0U 
                                             & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                >> 0x16U)))) 
                     | (0x1fU & ((IData)((0x8cU == 
                                          (0x1ecU & 
                                           vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])))
                                  ? ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                      << 0x17U) | (
                                                   vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                   >> 9U))
                                  : ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                      << 0xaU) | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                  >> 0x16U))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_0_bypass)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_0
            : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_flushat)
                ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_0_value_5_0
                : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rdata_0_value_5_0 
                   + (((- (IData)((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U]))) 
                       << 0xcU) | ((0xfe0U & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                               << 0xbU) 
                                              | (0x7e0U 
                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                    >> 0x15U)))) 
                                   | (0x1fU & ((IData)(
                                                       (0x46U 
                                                        == 
                                                        (0xf6U 
                                                         & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U])))
                                                ? (
                                                   (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                    << 0x18U) 
                                                   | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                      >> 8U))
                                                : (
                                                   (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                    << 0xbU) 
                                                   | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                      >> 0x15U)))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_25) 
                 - (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_3 
        = ((0U != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                   >> 0x10U)) & (0x18000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_17) 
                 - (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_2 
        = ((0U != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
                   >> 0x10U)) & (0x18000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_9) 
                 - (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_1 
        = ((0U != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
                   >> 0x10U)) & (0x18000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[0U] 
        = (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                           >> 4U)) << 4U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[1U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[2U] 
        = (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
                           >> 4U)) << 4U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[3U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[4U] 
        = (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
                           >> 4U)) << 4U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[5U] 
        = vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data;
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[6U] 
        = (IData)((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)) 
                    << 0x20U) | (QData)((IData)((((IData)(1U) 
                                                  + 
                                                  (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                                                   >> 4U)) 
                                                 << 4U)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_9[7U] 
        = (IData)(((((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)) 
                     << 0x20U) | (QData)((IData)((((IData)(1U) 
                                                   + 
                                                   (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                                                    >> 4U)) 
                                                  << 4U)))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[0U] 
        = ((IData)(0x10U) + (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                                             >> 4U)) 
                             << 4U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[1U] 
        = ((IData)(0x10U) + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[2U] 
        = ((IData)(0x10U) + (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
                                             >> 4U)) 
                             << 4U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[3U] 
        = ((IData)(0x10U) + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[4U] 
        = ((IData)(0x10U) + (((IData)(1U) + (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
                                             >> 4U)) 
                             << 4U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[5U] 
        = ((IData)(0x10U) + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[6U] 
        = (IData)((((QData)((IData)(((IData)(0x10U) 
                                     + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data))) 
                    << 0x20U) | (QData)((IData)(((IData)(0x10U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   + 
                                                   (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                                                    >> 4U)) 
                                                  << 4U))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_10[7U] 
        = (IData)(((((QData)((IData)(((IData)(0x10U) 
                                      + vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data))) 
                     << 0x20U) | (QData)((IData)(((IData)(0x10U) 
                                                  + 
                                                  (((IData)(1U) 
                                                    + 
                                                    (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                                                     >> 4U)) 
                                                   << 4U))))) 
                   >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm 
        = ((0U != (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                   >> 0x10U)) & (0x18000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_jalrFault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___bxx_fault_T) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                 >> 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_1) 
                 - (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_3)
            ? 1U : ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
                     ? 0U : (2U | (1U & (~ ((0x2ffffU 
                                             < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data) 
                                            & (0x31000U 
                                               > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_3 
        = ((0x10U < (0x3fU & ((0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data) 
                              + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_25)))) 
           & ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_3)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_2)
            ? 1U : ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
                     ? 0U : (2U | (1U & (~ ((0x2ffffU 
                                             < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data) 
                                            & (0x31000U 
                                               > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_2 
        = ((0x10U < (0x3fU & ((0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data) 
                              + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_17)))) 
           & ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_2)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_1)
            ? 1U : ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
                     ? 0U : (2U | (1U & (~ ((0x2ffffU 
                                             < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data) 
                                            & (0x31000U 
                                               > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_1 
        = ((0x10U < (0x3fU & ((0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data) 
                              + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_9)))) 
           & ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm_1)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm)
            ? 1U : ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
                     ? 0U : (2U | (1U & (~ ((0x2ffffU 
                                             < vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data) 
                                            & (0x31000U 
                                               > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines 
        = ((0x10U < (0x3fU & ((0xfU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data) 
                              + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_1)))) 
           & ((0x2000U > vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__dtcm)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_jalrFault) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_1));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_inst_ready_T_25 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_jalrFault) 
           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_jalFault));
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_3) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34 
            = (7U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33 
            = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26) 
               >> 2U);
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31 
            = (0U != (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26) 
                            >> 1U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32 
            = (0U != (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_26;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0 
            = (7U & (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0 
            = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_25));
    }
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_2) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37 
            = (7U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36 
            = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18) 
               >> 2U);
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23 
            = (0U != (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18) 
                            >> 1U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35 
            = (0U != (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_18;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0 
            = (7U & (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0 
            = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_17));
    }
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_1) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40 
            = (7U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39 
            = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10) 
               >> 2U);
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15 
            = (0U != (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10) 
                            >> 1U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38 
            = (0U != (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_10;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0 
            = (7U & (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0 
            = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_9));
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_24 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_3) 
            << 0xeU) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_3) 
                         << 0xcU) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_2) 
                                      << 0xaU) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_2) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_1) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType_1) 
                                                         << 4U) 
                                                        | (0xfU 
                                                           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType) 
                                                               << 2U) 
                                                              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__regionType)))))))));
    if (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines) {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43 
            = (7U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42 
            = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2) 
               >> 2U);
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7 
            = (0U != (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2) 
                            >> 1U)));
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41 
            = (0U != (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2));
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1 
            = CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_2;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0 
            = (7U & (- vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data));
    } else {
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7 = 0U;
        CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1 = 0U;
        vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0 
            = (7U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_1));
    }
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_0 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csrFault_0) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_0) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_0) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_0) 
                    | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready 
        = (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                             >> 8U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_24) 
                                          | ((0x123U 
                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_brcond)))) 
           & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                   >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                >> 0x10U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_15) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_22) 
                                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_31) 
                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_32) 
                                                               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_25)))))))) 
              & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                      >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                   >> 0x15U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___rdMark_valid_T_5) 
                                                   | ((0x103U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                      | ((0x203U 
                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                         | ((0x283U 
                                                             == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_24) 
                                                               | ((0x123U 
                                                                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                                  | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_flushat) 
                                                                     | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_flushall) 
                                                                        | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_19) 
                                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_20) 
                                                                              | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 1U))) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                                >> 1U))) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_5) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_27) 
                                                                                | ((0x313U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                                                | ((0x93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((0x293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((0x8293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((0xc293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_15) 
                                                                                | ((0x180893U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | ((0x181093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | ((0xa1e93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | ((0x1a6293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_d_float_y))))))))))))))))))))))))))))) 
                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__bruEn) 
                    & (((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_33) 
                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_22) 
                               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_31) 
                                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_32))))) 
                        | ((~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_0_bypass)
                                 ? (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                                    >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                 >> 0x10U)))
                                 : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___lsuEn_T_45) 
                               | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                                   >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                >> 0x15U))) 
                                  & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_22)))) 
                           & (2U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)))) 
                       & (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__dvu_valid)) 
                           | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dvu_io_req_ready)) 
                          & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_fence) 
                                 & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_active))) 
                             & (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_d_float_y)) 
                                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_19) 
                                    | ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___lsu_io_active)) 
                                       & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full)) 
                                          & (~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___rdMark_valid_T_15) 
                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                                                    >> 
                                                    (0x1fU 
                                                     & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                        >> 8U)))) 
                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs1Read_valid_T_58) 
                                                    & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
                                                       >> 
                                                       (0x1fU 
                                                        & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                           >> 0x10U)))) 
                                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_d_float_y) 
                                                      & (((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                                                           >> 
                                                           (0x1fU 
                                                            & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                               >> 0x15U))) 
                                                          | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                                                             >> 
                                                             (0x1fU 
                                                              & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                                                  << 4U) 
                                                                 | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                    >> 0x1cU))))) 
                                                         | (((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_float_bits_scalar_rd)) 
                                                             & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                                                                >> 
                                                                (0x1fU 
                                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                    >> 8U)))) 
                                                            | ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_float_bits_scalar_rs1)) 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fRegfile__DOT__scoreboard 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                      >> 0x10U)))))))))))))) 
                                & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_interlock) 
                                       | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_inst_ready_T_25) 
                                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_5) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_bxxFault))))) 
                                   & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_halted)) 
                                      & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__csrEn)))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139 
        = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
            ? (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0))) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                                      << 5U) | ((0x10U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0) 
                                                    << 2U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0) 
                                                                    >> 1U)))) 
                                                       << 2U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0))) 
                                                         << 1U)))))))
            : (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0))) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                                      << 4U) | ((8U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0) 
                                                    << 1U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0) 
                                                                    >> 1U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137 
        = (0xfU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                   + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101 
        = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
            ? (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0))) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                                      << 5U) | ((0x10U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0) 
                                                    << 2U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0) 
                                                                    >> 1U)))) 
                                                       << 2U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0))) 
                                                         << 1U)))))))
            : (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0))) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                                      << 4U) | ((8U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0) 
                                                    << 1U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0) 
                                                                    >> 1U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97 
        = (0xfU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
                   + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63 
        = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
            ? (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0))) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                                      << 5U) | ((0x10U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0) 
                                                    << 2U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0) 
                                                                    >> 1U)))) 
                                                       << 2U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0))) 
                                                         << 1U)))))))
            : (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0))) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                                      << 4U) | ((8U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0) 
                                                    << 1U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0) 
                                                                    >> 1U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_57 
        = (0xfU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
                   + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_13 
        = (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0)) 
            << 0x23U) | (((QData)((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                          << 0x1eU) | (QData)((IData)(
                                                      (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1) 
                                                                 << 0xaU) 
                                                                | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0) 
                                                                    << 5U) 
                                                                   | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25 
        = ((1U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
            ? (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0))) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                                      << 5U) | ((0x10U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0) 
                                                    << 2U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0) 
                                                                    >> 1U)))) 
                                                       << 2U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0))) 
                                                         << 1U)))))))
            : (((IData)((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0))) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                                      << 4U) | ((8U 
                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0) 
                                                    << 1U)) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0) 
                                                                    >> 1U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17 
        = (0xfU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data 
                   + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_0)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1_io_inst_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_1_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT___instructionBuffer_io_out_0_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143 
        = ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_139));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137))
            ? (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                                      << 5U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33) 
                                                 << 4U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                                                    << 3U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31) 
                                                       << 2U) 
                                                      | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32) 
                                                         << 1U)))))))
            : (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_34) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                                      << 4U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_33) 
                                                 << 3U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_1)) 
                                                    << 2U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_31) 
                                                       << 1U) 
                                                      | (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_32))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105 
        = ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_101));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97))
            ? (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                                      << 5U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36) 
                                                 << 4U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                                                    << 3U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23) 
                                                       << 2U) 
                                                      | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35) 
                                                         << 1U)))))))
            : (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_37) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                                      << 4U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_36) 
                                                 << 3U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_1)) 
                                                    << 2U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_23) 
                                                       << 1U) 
                                                      | (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_35))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67 
        = ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_63));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_57))
            ? (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                                      << 5U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39) 
                                                 << 4U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                                                    << 3U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15) 
                                                       << 2U) 
                                                      | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38) 
                                                         << 1U)))))))
            : (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_40) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                                      << 4U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_39) 
                                                 << 3U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_1)) 
                                                    << 2U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_15) 
                                                       << 1U) 
                                                      | (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_38))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29 
        = ((2U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_25));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27 
        = ((1U & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17))
            ? (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43) 
                << 7U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                           << 6U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                                      << 5U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42) 
                                                 << 4U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                                                    << 3U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7) 
                                                       << 2U) 
                                                      | ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41) 
                                                         << 1U)))))))
            : (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_43) 
                << 6U) | (((5U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                           << 5U) | (((4U < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                                      << 4U) | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_42) 
                                                 << 3U) 
                                                | (((2U 
                                                     < (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1)) 
                                                    << 2U) 
                                                   | (((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_7) 
                                                       << 1U) 
                                                      | (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____VdfgRegularize_he1151549_0_41))))))));
    VL_ASSIGN_SII(1,vlSelf->io_debug_dispatch_0_instFire, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T);
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1_io_inst_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_slog 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_slog));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_24));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__alu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dvu__DOT___divide1_T 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
            & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__dvu_valid)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dvu_io_req_ready));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & ((~ ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_inst_ready_T_25) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_bxxFault))) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__bru_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_mul));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_30) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_18) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_29) 
                    | ((0xc0b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                       | ((0xc2b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_22) 
                             | (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                     >> 0xfU)) & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)) 
                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_33) 
                                   | ((0x533U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                      | ((0x5b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_16) 
                                            | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_28)))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_30) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_5) 
                 | ((0x193U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                    | ((0x213U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                       | ((0x313U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                          | ((0x393U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                             | ((0x93U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                | ((0x293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                   | ((0x8293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                      | ((0xc293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_15) 
                                            | ((0x180893U 
                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                               | ((0x181093U 
                                                   == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                  | ((0x181493U 
                                                      == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                     | ((0x20233U 
                                                         == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                        | ((0xa1e93U 
                                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                           | ((0x1a6293U 
                                                               == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_18) 
                                                                 | ((0x1733U 
                                                                     == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                    | ((0x17b3U 
                                                                        == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                       | ((0xc0b3U 
                                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                          | ((0xc2b3U 
                                                                              == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs1Set_value_T) 
                                                                                | ((0x1f3U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_0)) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Read_valid_T_33) 
                                                                                | ((0x533U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((0x5b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_16) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_28) 
                                                                                | ((0x67U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs1Read_valid_T_58))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__d_d_float_y));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_24) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_5) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_27) 
                    | ((0x313U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN)) 
                          | ((0x93U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                             | ((0x293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                | ((0x8293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                   | ((0xc293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_1) 
                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___io_rs2Set_valid_T_15) 
                                         | ((0x180893U 
                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                            | ((0x181093U 
                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                               | ((0x181493U 
                                                   == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                  | ((0x20233U 
                                                      == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                     | ((0xa1e93U 
                                                         == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                        | ((0x1a6293U 
                                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_2) 
                                                           | (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                                  >> 1U))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__lsu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csr_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___GEN_5)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_147 
        = ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_143));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151 
        = ((2U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137))
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_147));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109 
        = ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_105));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111 
        = ((2U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97))
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_107));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71 
        = ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_67));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71 
        = ((2U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_57))
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_67));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33 
        = ((4U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_29));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31 
        = ((2U & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17))
            ? ((0xfffcU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27) 
                           << 2U)) | (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27) 
                                            >> 0xeU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_27));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__do_enq 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__floatCore__DOT__instQueue__DOT__full)) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_19)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_26)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_flt_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_26) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_float_bits_scalar_rd)) 
              & (1U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_float_bits_opcode))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_valid) 
           & (2U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__rdMark_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__alu_valid) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csr_valid) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_mul) 
                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__dvu_valid) 
                     & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dvu_io_req_ready)) 
                    | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__lsu_valid) 
                        & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT____VdfgRegularize_h94ddb430_0_33)) 
                       | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT___rdMark_valid_T_15) 
                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__bru_valid) 
                             & (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op)) 
                                 | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_0_bits_op))) 
                                & (0U != (0x1fU & (
                                                   vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                                   >> 8U)))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155 
        = ((4U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137))
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_151));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115 
        = ((4U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97))
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_111));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_75 
        = ((4U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_57))
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_71));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35 
        = ((4U & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17))
            ? ((0xfff0U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31) 
                           << 4U)) | (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31) 
                                              >> 0xcU)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_31));
    VL_ASSIGN_SII(1,vlSelf->io_debug_float_writeAddr_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_flt_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_0_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__rdMark_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_scoreboard_spec 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_0__DOT__rdMark_valid)
             ? (((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                          >> 8U))) 
                >> 1U) : 0U) << 1U);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_bits_mask 
        = ((8U & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_17))
            ? ((0xff00U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35) 
                           << 8U)) | (0xffU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35) 
                                               >> 8U)))
            : (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_35));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_135 
        = ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_271 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_407 
        = ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_543 
        = ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_679 
        = ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_815 
        = ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_951 
        = ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1087 
        = ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0 
        = (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid) 
                 + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid)));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeAddr_0_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_0_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_scoreboard_spec 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_2 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_scoreboard_spec 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__rdMark_valid)
                ? (((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                             >> 9U))) 
                   >> 1U) : 0U) << 1U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___lsuEn_T_45 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_scoreboard_spec 
            | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard) 
           >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                        >> 0x11U)));
    __Vtemp_11[1U] = (IData)((((QData)((IData)(((((8U 
                                                   & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137))
                                                   ? 
                                                  ((0xff00U 
                                                    & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155) 
                                                         >> 8U)))
                                                   : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155)) 
                                                 << 0x10U) 
                                                | ((8U 
                                                    & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
                                                    ? 
                                                   ((0xff00U 
                                                     & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109) 
                                                          >> 8U)))
                                                    : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((8U 
                                                               & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97))
                                                               ? 
                                                              ((0xff00U 
                                                                & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115) 
                                                                     >> 8U)))
                                                               : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115)) 
                                                             << 0x10U) 
                                                            | ((8U 
                                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
                                                                ? 
                                                               ((0xff00U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71) 
                                                                      >> 8U)))
                                                                : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71)))))));
    __Vtemp_11[2U] = (IData)(((((QData)((IData)((((
                                                   (8U 
                                                    & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_137))
                                                    ? 
                                                   ((0xff00U 
                                                     & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155) 
                                                          >> 8U)))
                                                    : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_155)) 
                                                  << 0x10U) 
                                                 | ((8U 
                                                     & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data)
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109) 
                                                           >> 8U)))
                                                     : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_109))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((8U 
                                                                & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_97))
                                                                ? 
                                                               ((0xff00U 
                                                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115) 
                                                                      >> 8U)))
                                                                : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_115)) 
                                                              << 0x10U) 
                                                             | ((8U 
                                                                 & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data)
                                                                 ? 
                                                                ((0xff00U 
                                                                  & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71) 
                                                                       >> 8U)))
                                                                 : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_71)))))) 
                              >> 0x20U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_25[0U] 
        = ((((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
              ? ((0xff00U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33) 
                             << 8U)) | (0xffU & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33) 
                                                 >> 8U)))
              : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33)) 
            << 0x10U) | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_bits_mask));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_25[1U] 
        = (((0xffffU & ((8U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_57))
                         ? ((0xff00U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_75) 
                                        << 8U)) | (0xffU 
                                                   & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_75) 
                                                      >> 8U)))
                         : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask1_T_75))) 
            | (((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_0_data)
                 ? ((0xff00U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33) 
                                << 8U)) | (0xffU & 
                                           ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33) 
                                            >> 8U)))
                 : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_33)) 
               >> 0x10U)) | (__Vtemp_11[1U] << 0x10U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_25[2U] 
        = ((__Vtemp_11[1U] >> 0x10U) | (__Vtemp_11[2U] 
                                        << 0x10U));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_25[3U] 
        = ((((8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data)
              ? ((0xff00U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_147) 
                             << 8U)) | (0xffU & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_147) 
                                                 >> 8U)))
              : (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___mask0_T_147)) 
            << 0x10U) | (__Vtemp_11[2U] >> 0x10U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242 
        = ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_3 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_2 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__rdMark_valid)
                ? (((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                             >> 0xaU))) 
                   >> 1U) : 0U) << 1U));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___lsuEn_T_45 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
            | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_2) 
           >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                        >> 0x12U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__bruEn 
        = (1U & ((0x67U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                 | ((~ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___lsuEn_T_45) 
                    | ((0U == (0xfffU & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[3U] 
                                          << 0xaU) 
                                         | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                            >> 0x16U)))) 
                       & (IData)(((0x20000U == (0x3e0000U 
                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                    >> 9U)))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_132 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_268 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_404 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_540 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_676 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_812 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_948 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1084 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_118)) 
           | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
              & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_242)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
        = (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_scoreboard_comb 
           | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_3);
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___lsuEn_T_45 
        = ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard 
            | vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__scoreboard_spec_3) 
           >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                        >> 0x13U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__bruEn 
        = (1U & ((0x67U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                 | ((~ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___lsuEn_T_45) 
                    | ((0U == (0xfffU & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[5U] 
                                          << 9U) | 
                                         (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                          >> 0x17U)))) 
                       & (IData)(((0x40000U == (0x7c0000U 
                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                    >> 0xaU)))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__bruEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__bru_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bruEn 
        = (1U & ((0x67U != (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                 | ((~ CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___lsuEn_T_45) 
                    | ((0U == (0xfffU & ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[7U] 
                                          << 8U) | 
                                         (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                          >> 0x18U)))) 
                       & (IData)(((0x80000U == (0xf80000U 
                                                & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                    >> 0xbU)))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__bruEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__bru_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_bxxFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T) 
           & (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
               | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
                  | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
                     | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
                        | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
                           | (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op))))))) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_1))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T) 
           & ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_1))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalrFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___bxx_fault_T) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_bits_op)) 
              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_1_data 
                 >> 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bruEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bru_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_bxxFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T) 
           & (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
               | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
                  | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
                     | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
                        | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
                           | (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op))))))) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_2))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T) 
           & ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_2))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalrFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___bxx_fault_T) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_bits_op)) 
              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_2_data 
                 >> 1U)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_bxxFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalrFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_4));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_19 
        = (1U & (~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalrFault) 
                     | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_jalFault)) 
                    | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_bxxFault))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_bxxFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T) 
           & (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
               | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                  | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                     | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                        | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                           | (2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op))))))) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_3))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T) 
           & ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
              & (0U != (3U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bruTarget_3))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalrFault 
        = ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___bxx_fault_T) 
           & ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_target_3_data 
                 >> 1U)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_19 
        = (1U & (~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalrFault) 
                     | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalFault)) 
                    | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_bxxFault))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_1) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_1) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_1)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_inst_ready 
        = (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
                >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                             >> 9U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Read_valid_T_24) 
                                          | ((0x123U 
                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_27)))) 
           & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
                   >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                >> 0x11U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_12) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_18) 
                                                         | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_20)))))) 
              & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
                      >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                   >> 0x16U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_12) 
                                                   | ((0x203U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                      | ((0x283U 
                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_18) 
                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_20) 
                                                               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_5) 
                                                                  | ((0x193U 
                                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                                     | ((0x213U 
                                                                         == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                                        | ((0x313U 
                                                                            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                                           | ((0x393U 
                                                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                                              | ((0x93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                                | ((0x293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                                | ((0x8293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                                | ((0xc293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_15) 
                                                                                | ((0x180893U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | ((0x181093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_25))))))))))))))))))))) 
                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__bruEn) 
                    & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__mlu_valid) 
                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_mul))) 
                       & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_16) 
                           | ((4U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)) 
                              & ((~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_1_bypass)
                                       ? (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
                                          >> (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                 >> 0x11U)))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___lsuEn_T_45) 
                                     | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_1__io_scoreboard_comb 
                                         >> (0x1fU 
                                             & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                >> 0x16U))) 
                                        & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_18)))) 
                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_16) 
                                    | (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_brcond)))))) 
                          & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_brcond)) 
                             & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_fence)) 
                                & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_jump)) 
                                   & ((0x10500073U 
                                       != ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                            << 0x1fU) 
                                           | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                              >> 1U))) 
                                      & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_serializeOut_undef)) 
                                         & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)) 
                                            & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_halted)) 
                                               & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_interlock)) 
                                                  & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__d_undef)) 
                                                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_19))))))))))))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_18 
        = (1U & (~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalrFault) 
                     | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalFault)) 
                    | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_bxxFault))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_inst_ready 
        = (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
                >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                             >> 0xaU)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T_24) 
                                            | ((0x123U 
                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_27)))) 
           & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
                   >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                >> 0x12U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_12) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_18) 
                                                         | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_20)))))) 
              & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
                      >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                   >> 0x17U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_12) 
                                                   | ((0x203U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                      | ((0x283U 
                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_18) 
                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_20) 
                                                               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_5) 
                                                                  | ((0x193U 
                                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                                     | ((0x213U 
                                                                         == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                                        | ((0x313U 
                                                                            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                                           | ((0x393U 
                                                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                                              | ((0x93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                                | ((0x293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                                | ((0x8293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                                | ((0xc293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_15) 
                                                                                | ((0x180893U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | ((0x181093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_25))))))))))))))))))))) 
                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__bruEn) 
                    & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__mlu_valid) 
                           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_mul))) 
                       & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_16) 
                           | ((6U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)) 
                              & ((~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_2_bypass)
                                       ? (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
                                          >> (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                 >> 0x12U)))
                                       : CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___lsuEn_T_45) 
                                     | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_2__io_scoreboard_comb 
                                         >> (0x1fU 
                                             & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                >> 0x17U))) 
                                        & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_18)))) 
                                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_16) 
                                    | (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_brcond)))))) 
                          & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_brcond)) 
                             & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_fence)) 
                                & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_jump)) 
                                   & ((0x10500073U 
                                       != ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                            << 0x1fU) 
                                           | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                              >> 1U))) 
                                      & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_undef)) 
                                         & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)) 
                                            & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_halted)) 
                                               & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_interlock)) 
                                                  & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__d_undef)) 
                                                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_19))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1_io_inst_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_inst_ready)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_0_io_inst_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_inst_ready));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_inst_ready 
        = (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
                >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                             >> 0xbU)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Read_valid_T_24) 
                                            | ((0x123U 
                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                               | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_25)))) 
           & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
                   >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                >> 0x13U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_11) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_17) 
                                                         | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_19)))))) 
              & (((~ (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
                      >> (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                   >> 0x18U)))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_11) 
                                                   | ((0x203U 
                                                       == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                      | ((0x283U 
                                                          == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                         | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_17) 
                                                            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_19) 
                                                               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_5) 
                                                                  | ((0x193U 
                                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                     | ((0x213U 
                                                                         == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                        | ((0x313U 
                                                                            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                           | ((0x393U 
                                                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                              | ((0x93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x8293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0xc293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_15) 
                                                                                | ((0x180893U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x181093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_23))))))))))))))))))))) 
                 & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bruEn) 
                    & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__mlu_valid) 
                           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_mul) 
                              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__mlu_valid)))) 
                       & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_15) 
                           | ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count) 
                                  >> 3U)) & ((~ (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_busRead_3_bypass)
                                                   ? 
                                                  (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                       >> 0x13U)))
                                                   : CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___lsuEn_T_45) 
                                                 | ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____Vcellinp__decode_3__io_scoreboard_comb 
                                                     >> 
                                                     (0x1fU 
                                                      & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                         >> 0x18U))) 
                                                    & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_17)))) 
                                             & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_15) 
                                                | (~ 
                                                   ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_brcond) 
                                                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T) 
                                                       | ((0x263U 
                                                           == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                          | ((0x2e3U 
                                                              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_21)))))))))) 
                          & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_brcond) 
                                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T) 
                                    | ((0x263U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                       | ((0x2e3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                          | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_21)))))) 
                             & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_fence)) 
                                & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_jump) 
                                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_8))) 
                                   & ((0x10500073U 
                                       != ((vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[1U] 
                                            << 0x1fU) 
                                           | (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                              >> 1U))) 
                                      & ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_1_io_serializeOut_undef) 
                                             | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__d_undef))) 
                                         & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_serializeOut_csr)) 
                                            & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_halted)) 
                                               & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT____Vcellinp__dispatch__io_interlock)) 
                                                  & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_18) 
                                                     & ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                             >> 4U))) 
                                                        | ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                >> 4U))) 
                                                           | (((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                    >> 4U))) 
                                                               | ((0x67U 
                                                                   == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                  | ((0x63U 
                                                                      == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                     | ((0xe3U 
                                                                         == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                        | ((0x263U 
                                                                            == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                           | ((0x2e3U 
                                                                               == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                              | ((0x363U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x3e3U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((3U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x83U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x103U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x203U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x283U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x23U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0xa3U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x123U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x113U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x193U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x213U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x313U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                                                | ((0x33U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x133U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x1b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x333U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x3b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | (0x8233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0)))))))))))))))))))))))))))))) 
                                                              | ((0x8333U 
                                                                  == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                 | ((0x83b3U 
                                                                     == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                    | ((0x93U 
                                                                        == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                       | ((0x293U 
                                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                          | ((0x8293U 
                                                                              == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                             | ((0xb3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x433U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x4b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x533U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x5b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x180093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x180493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x180893U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x1633U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x16b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x1733U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x17b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0x181093U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0xc0b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0xc2b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | ((0xa1e93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x1a6293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | (0xc293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0)))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & (0x5cU == (0x1fcU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__alu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_19) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__bru_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_24) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Read_valid_T_18) 
                 | ((0x1733U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                    | ((0x17b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                       | ((0xc0b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                          | ((0xc2b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Read_valid_T_24) 
                                | ((0x123U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Read_valid_T_33) 
                                      | ((0x533U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                         | (0x5b3U 
                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__mlu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_24) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_5) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_22) 
                    | ((0x313U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                          | ((0x93U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                             | ((0x293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                | ((0x8293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                   | ((0xc293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_15) 
                                         | ((0x180893U 
                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                            | ((0x181093U 
                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                               | ((0x181493U 
                                                   == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                  | ((0x20233U 
                                                      == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                     | ((0xa1e93U 
                                                         == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                        | ((0x1a6293U 
                                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Read_valid_T_18) 
                                                              | ((0x1733U 
                                                                  == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                 | ((0x17b3U 
                                                                     == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                    | ((0xc0b3U 
                                                                        == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                       | ((0xc2b3U 
                                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_13) 
                                                                             | ((0x5b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                                | (0x67U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__rdMark_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & ((0x17U == (0x7fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                  >> 2U))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_5) 
                                              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT____VdfgRegularize_hf12699d0_0_22) 
                                                 | ((0x313U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                    | ((0x393U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN)) 
                                                       | ((0x93U 
                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                          | ((0x293U 
                                                              == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                             | ((0x8293U 
                                                                 == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                | ((0xc293U 
                                                                    == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_0) 
                                                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___io_rs2Set_valid_T_15) 
                                                                      | ((0x180893U 
                                                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                         | ((0x181093U 
                                                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                            | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                               | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | ((0xa1e93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | ((0x1a6293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT___GEN_1) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                                                                >> 2U))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_1__DOT__lsu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_1_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_2_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_inst_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__mask_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_inst_ready));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2_io_inst_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_2_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_1_ready));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeAddr_1_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_1_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_valid)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_1_value
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_valid) 
           & (4U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)));
    VL_ASSIGN_SII(1,vlSelf->io_debug_dispatch_1_instFire, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_2_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_2_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_3_ready 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_inst_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__mask_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3_io_inst_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_3_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__mask_3));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2_io_inst_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2_io_inst_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_inst_ready)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_bits_data 
        = ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_bits_op))
            ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_1);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_1));
    VL_ASSIGN_SII(1,vlSelf->io_debug_dispatch_2_instFire, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_inst_3_ready) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___fetch_io_inst_lanes_3_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2 
        = ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3_io_inst_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3_io_inst_valid) 
           & ((~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__branchTaken)) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_inst_ready)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_bxxFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_2_io_jalrFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & (0xb8U == (0x3f8U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__alu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_19) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__bru_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_24) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T_18) 
                 | ((0x1733U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                    | ((0x17b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                       | ((0xc0b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                          | ((0xc2b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T_24) 
                                | ((0x123U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T_33) 
                                      | ((0x533U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                         | (0x5b3U 
                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__mlu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_24) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_5) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_22) 
                    | ((0x313U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                          | ((0x93U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                             | ((0x293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                | ((0x8293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                   | ((0xc293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_15) 
                                         | ((0x180893U 
                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                            | ((0x181093U 
                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                               | ((0x181493U 
                                                   == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                  | ((0x20233U 
                                                      == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                     | ((0xa1e93U 
                                                         == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                        | ((0x1a6293U 
                                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Read_valid_T_18) 
                                                              | ((0x1733U 
                                                                  == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                 | ((0x17b3U 
                                                                     == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                    | ((0xc0b3U 
                                                                        == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                       | ((0xc2b3U 
                                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_13) 
                                                                             | ((0x5b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                                | (0x67U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__rdMark_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & ((0x17U == (0x7fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                  >> 3U))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_5) 
                                              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT____VdfgRegularize_h089cedf5_0_22) 
                                                 | ((0x313U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                    | ((0x393U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN)) 
                                                       | ((0x93U 
                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                          | ((0x293U 
                                                              == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                             | ((0x8293U 
                                                                 == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                | ((0xc293U 
                                                                    == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_0) 
                                                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___io_rs2Set_valid_T_15) 
                                                                      | ((0x180893U 
                                                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                         | ((0x181093U 
                                                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                            | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                               | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | ((0xa1e93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | ((0x1a6293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT___GEN_1) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                                                >> 3U))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_2__DOT__lsu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_in_bits_2_bits_data_T_24 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_1_0))
            ? ((((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_bits_op))
                  ? 0U : (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_1)) 
                << 0x18U) | ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_bits_op))
                              ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_1 
                                      >> 8U))) : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_bits_data);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_1 
        = (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid) 
                 + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4 
        = (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0) 
                 + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid)));
    VL_ASSIGN_SII(1,vlSelf->io_debug_dispatch_3_instFire, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT____Vcellinp__circularBuffer__io_deqReady 
        = (7U & ((3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T) 
                        + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_1))) 
                 + (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_2) 
                          + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT___nReady_T_3)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_bxxFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT___decode_3_io_jalrFault) 
           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT____VdfgRegularize_he9405760_1_2));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Set_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & (0x170U == (0x7f0U & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U])));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_alu_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__alu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_18) 
              & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bru_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Read_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_22) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Read_valid_T_18) 
                 | ((0x1733U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                    | ((0x17b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                       | ((0xc0b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                          | ((0xc2b3U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Read_valid_T_24) 
                                | ((0x123U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Read_valid_T_33) 
                                      | ((0x533U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                         | (0x5b3U 
                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs1Read_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_22) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_5) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_20) 
                    | ((0x313U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                          | ((0x93U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                             | ((0x293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                | ((0x8293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                   | ((0xc293U == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                      | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_15) 
                                         | ((0x180893U 
                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                            | ((0x181093U 
                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                               | ((0x181493U 
                                                   == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                  | ((0x20233U 
                                                      == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                     | ((0xa1e93U 
                                                         == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                        | ((0x1a6293U 
                                                            == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Read_valid_T_18) 
                                                              | ((0x1733U 
                                                                  == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                 | ((0x17b3U 
                                                                     == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                    | ((0xc0b3U 
                                                                        == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                       | ((0xc2b3U 
                                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_12) 
                                                                             | ((0x5b3U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                                | (0x67U 
                                                                                == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN))))))))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__alu_valid) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__mlu_valid) 
                 | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__lsu_valid) 
                     & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_24)) 
                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__bru_valid) 
                       & (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op)) 
                           | (0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bru_3_bits_op))) 
                          & (0U != (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                             >> 0xbU)))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & ((0x17U == (0x7fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                  >> 4U))) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_5) 
                                              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT____VdfgRegularize_h803b6811_0_20) 
                                                 | ((0x313U 
                                                     == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                    | ((0x393U 
                                                        == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN)) 
                                                       | ((0x93U 
                                                           == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                          | ((0x293U 
                                                              == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                             | ((0x8293U 
                                                                 == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                | ((0xc293U 
                                                                    == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_0) 
                                                                   | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___io_rs2Set_valid_T_15) 
                                                                      | ((0x180893U 
                                                                          == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                         | ((0x181093U 
                                                                             == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                            | ((0x181493U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                               | ((0x20233U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0xa1e93U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | ((0x1a6293U 
                                                                                == vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT___GEN_1) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                                                                >> 4U))))))))))))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__lsu_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_0)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_1)
                     ? 1U : (2U | (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_2))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_0)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_1)
                     ? 1U : (2U | (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_2))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_2) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_2) 
              | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_2)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__mlu__DOT___arb_io_out_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_0_valid) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_1_valid) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_mlu_2_valid) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__decodeEn) 
                    & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__dispatch__DOT__decode_3__DOT__mlu_valid)))));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeAddr_2_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_2_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_valid)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_2_value
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_5);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_valid) 
           & (6U > (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0) 
                 + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_1)));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234 
        = ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353 
        = ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid));
    VL_ASSIGN_SII(1,vlSelf->io_debug_regfile_writeAddr_3_valid, vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_3_valid);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__scoreboard_set 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_0_valid)
             ? ((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[0U] 
                                         >> 8U))) : 0U) 
           | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_1_valid)
                ? ((IData)(1U) << (0x1fU & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[2U] 
                                            >> 9U)))
                : 0U) | (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_2_valid)
                           ? ((IData)(1U) << (0x1fU 
                                              & (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[4U] 
                                                 >> 0xaU)))
                           : 0U) | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rdMark_3_valid)
                                     ? ((IData)(1U) 
                                        << (0x1fU & 
                                            (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fetch__DOT__instructionBuffer__DOT__circularBuffer__DOT__outputBufferView_rotated[6U] 
                                             >> 0xbU)))
                                     : 0U))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_valid)
            ? vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_rs2Set_3_value
            : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__regfile__DOT__rwdata_7);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid 
        = ((~ ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_count) 
               >> 3U)) & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_0) 
           | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_1) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_2) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_3) 
                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_3) 
                       | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_3))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_0)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_1)
                     ? 1U : (2U | (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__faults_2))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_bits_data 
        = ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_bits_op))
            ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_2);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_2));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99 
        = ((1U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223 
        = ((2U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342 
        = ((3U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453 
        = ((4U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_125 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_261 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_397 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_533 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_669 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_805 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_941 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1077 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_110)) 
           | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_234)) 
              | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                 & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_353))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_bits_data 
        = ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_bits_op))
            ? 0U : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_3);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__twoLines_3));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csrFault_0) 
           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_csrFault_0)
                ? 0U : 3U) == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0) 
           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_undefFault_0)
                ? 0U : 3U) == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_5 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_0) 
            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_1) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_2) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_3)))) 
           & (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_0)
                ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_1)
                         ? 1U : (2U | (1U & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_bxxFault_2)))))) 
              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_3 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_0) 
            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_1) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_2) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalFault_3)))) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jal_fault_idx) 
              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT____VdfgRegularize_h5981c050_0_4 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_0) 
            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_1) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_2) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_jalrFault_3)))) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__jalr_fault_idx) 
              == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__fault_manager__DOT__first_fault)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_in_bits_4_bits_data_T_24 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_2_0))
            ? ((((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_bits_op))
                  ? 0U : (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_2)) 
                << 0x18U) | ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_bits_op))
                              ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_2 
                                      >> 8U))) : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_bits_data);
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_0) 
                 + (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_1) 
                          + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid)))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_5 
        = (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid) 
                 + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid)));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_114 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_250 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_386 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_522 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_658 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_794 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_930 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1066 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_99)) 
           | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_223)) 
              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_342)) 
                 | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                    & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_453)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT___ctrl_io_in_bits_6_bits_data_T_24 
        = ((1U & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__txnSizes_3_0))
            ? ((((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_bits_op))
                  ? 0U : (0xffU & vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_3)) 
                << 0x18U) | ((0xcU == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_bits_op))
                              ? 0U : (vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___regfile_io_busPort_data_3 
                                      >> 8U))) : vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_bits_data);
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_8 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount 
        = (0xfU & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_2) 
                   + (7U & ((3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid) 
                                   + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid))) 
                            + (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid) 
                                     + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid)))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85 
        = ((1U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209 
        = ((2U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328 
        = ((3U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439 
        = ((4U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539 
        = ((5U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_7)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4) 
                 + (3U & ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_5) 
                          + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid)))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21 
        = (7U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_4) 
                 + ((IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_5) 
                    + (3U & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid) 
                             + (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_25 
        = ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_149 
        = ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_268 
        = ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_379 
        = ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_479 
        = ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_565 
        = ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_634 
        = ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_683 
        = ((8U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__ivalid 
        = (((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_0_valid) 
            | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_1_valid) 
               | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_2_valid) 
                  | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT___dispatch_io_lsu_3_valid)))) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__mcount) 
              <= (0xfU & ((IData)(8U) - (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__icount)))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_99 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_235 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_371 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_507 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_643 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_779 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_915 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1051 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_85)) 
           | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_209)) 
              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_328)) 
                 | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_439)) 
                    | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                       & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_539))))));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68 
        = ((1U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192 
        = ((2U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311 
        = ((3U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422 
        = ((4U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522 
        = ((5U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608 
        = ((6U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_6)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48 
        = ((1U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172 
        = ((2U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291 
        = ((3U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402 
        = ((4U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502 
        = ((5U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588 
        = ((6U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657 
        = ((7U == (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT____VdfgRegularize_hf1824a2f_0_21)) 
           & (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___GEN_26 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__ivalid) 
           & ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_7_valid) 
              | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_6_valid) 
                 | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_5_valid) 
                    | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_4_valid) 
                       | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_3_valid) 
                          | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_2_valid) 
                             | ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT____Vcellinp__ctrl__io_in_bits_0_valid) 
                                | (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl_io_in_bits_1_valid)))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_80 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_216 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_352 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_488 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_624 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_760 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_896 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1032 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_68)) 
           | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_192)) 
              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_311)) 
                 | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_422)) 
                    | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_522)) 
                       | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                          & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_608)))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_57 
        = (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((0U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_193 
        = (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((1U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_329 
        = (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((2U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_465 
        = (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((3U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_601 
        = (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((4U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_737 
        = (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((5U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_873 
        = (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((6U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1009 
        = (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_0)) 
            & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_48)) 
           | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_1)) 
               & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_172)) 
              | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_2)) 
                  & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_291)) 
                 | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_3)) 
                     & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_402)) 
                    | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_4)) 
                        & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_502)) 
                       | (((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_5)) 
                           & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_588)) 
                          | ((7U == (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__inxpos_6)) 
                             & (IData)(CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___inxvalid_T_657))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_135)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_132)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_125)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_114)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_99)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_80)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_57))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_1 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_271)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_268)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_261)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_250)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_235)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_216)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_193))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_2 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_407)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_404)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_397)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_386)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_371)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_352)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_329))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_3 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_543)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_540)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_533)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_522)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_507)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_488)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_465))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_4 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_679)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_676)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_669)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_658)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_643)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_624)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_601))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_5 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_815)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_812)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_805)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_794)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_779)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_760)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_737))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_6 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_951)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_948)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_941)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_930)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_915)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_896)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_873))))))))));
    vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT__idx_7 
        = ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1087)
            ? 0U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1084)
                     ? 1U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1077)
                              ? 2U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1066)
                                       ? 3U : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1051)
                                                ? 4U
                                                : ((IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1032)
                                                    ? 5U
                                                    : 
                                                   (6U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->CoreMiniAxi__DOT__core__DOT__score__DOT__lsu__DOT__ctrl__DOT___valid_T_1009))))))))));
}
