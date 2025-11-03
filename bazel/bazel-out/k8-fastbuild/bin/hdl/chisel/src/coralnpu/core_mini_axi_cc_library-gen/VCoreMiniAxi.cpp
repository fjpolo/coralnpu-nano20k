// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCoreMiniAxi__pch.h"
#include "verilated_fst_sc.h"

//============================================================
// Constructors

VCoreMiniAxi::VCoreMiniAxi(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VCoreMiniAxi__Syms(contextp(), name(), this)}
    , io_aclk{vlSymsp->TOP.io_aclk}
    , io_aresetn{vlSymsp->TOP.io_aresetn}
    , io_axi_slave_write_addr_ready{vlSymsp->TOP.io_axi_slave_write_addr_ready}
    , io_axi_slave_write_addr_valid{vlSymsp->TOP.io_axi_slave_write_addr_valid}
    , io_axi_slave_write_addr_bits_lock{vlSymsp->TOP.io_axi_slave_write_addr_bits_lock}
    , io_axi_slave_write_data_ready{vlSymsp->TOP.io_axi_slave_write_data_ready}
    , io_axi_slave_write_data_valid{vlSymsp->TOP.io_axi_slave_write_data_valid}
    , io_axi_slave_write_data_bits_last{vlSymsp->TOP.io_axi_slave_write_data_bits_last}
    , io_axi_slave_write_resp_ready{vlSymsp->TOP.io_axi_slave_write_resp_ready}
    , io_axi_slave_write_resp_valid{vlSymsp->TOP.io_axi_slave_write_resp_valid}
    , io_axi_slave_read_addr_ready{vlSymsp->TOP.io_axi_slave_read_addr_ready}
    , io_axi_slave_read_addr_valid{vlSymsp->TOP.io_axi_slave_read_addr_valid}
    , io_axi_slave_read_addr_bits_lock{vlSymsp->TOP.io_axi_slave_read_addr_bits_lock}
    , io_axi_slave_read_data_ready{vlSymsp->TOP.io_axi_slave_read_data_ready}
    , io_axi_slave_read_data_valid{vlSymsp->TOP.io_axi_slave_read_data_valid}
    , io_axi_slave_read_data_bits_last{vlSymsp->TOP.io_axi_slave_read_data_bits_last}
    , io_axi_master_write_addr_ready{vlSymsp->TOP.io_axi_master_write_addr_ready}
    , io_axi_master_write_addr_valid{vlSymsp->TOP.io_axi_master_write_addr_valid}
    , io_axi_master_write_addr_bits_lock{vlSymsp->TOP.io_axi_master_write_addr_bits_lock}
    , io_axi_master_write_data_ready{vlSymsp->TOP.io_axi_master_write_data_ready}
    , io_axi_master_write_data_valid{vlSymsp->TOP.io_axi_master_write_data_valid}
    , io_axi_master_write_data_bits_last{vlSymsp->TOP.io_axi_master_write_data_bits_last}
    , io_axi_master_write_resp_ready{vlSymsp->TOP.io_axi_master_write_resp_ready}
    , io_axi_master_write_resp_valid{vlSymsp->TOP.io_axi_master_write_resp_valid}
    , io_axi_master_read_addr_ready{vlSymsp->TOP.io_axi_master_read_addr_ready}
    , io_axi_master_read_addr_valid{vlSymsp->TOP.io_axi_master_read_addr_valid}
    , io_axi_master_read_addr_bits_lock{vlSymsp->TOP.io_axi_master_read_addr_bits_lock}
    , io_axi_master_read_data_ready{vlSymsp->TOP.io_axi_master_read_data_ready}
    , io_axi_master_read_data_valid{vlSymsp->TOP.io_axi_master_read_data_valid}
    , io_axi_master_read_data_bits_last{vlSymsp->TOP.io_axi_master_read_data_bits_last}
    , io_halted{vlSymsp->TOP.io_halted}
    , io_fault{vlSymsp->TOP.io_fault}
    , io_wfi{vlSymsp->TOP.io_wfi}
    , io_irq{vlSymsp->TOP.io_irq}
    , io_debug_dbus_valid{vlSymsp->TOP.io_debug_dbus_valid}
    , io_debug_dbus_bits_write{vlSymsp->TOP.io_debug_dbus_bits_write}
    , io_debug_dispatch_0_instFire{vlSymsp->TOP.io_debug_dispatch_0_instFire}
    , io_debug_dispatch_1_instFire{vlSymsp->TOP.io_debug_dispatch_1_instFire}
    , io_debug_dispatch_2_instFire{vlSymsp->TOP.io_debug_dispatch_2_instFire}
    , io_debug_dispatch_3_instFire{vlSymsp->TOP.io_debug_dispatch_3_instFire}
    , io_debug_regfile_writeAddr_0_valid{vlSymsp->TOP.io_debug_regfile_writeAddr_0_valid}
    , io_debug_regfile_writeAddr_1_valid{vlSymsp->TOP.io_debug_regfile_writeAddr_1_valid}
    , io_debug_regfile_writeAddr_2_valid{vlSymsp->TOP.io_debug_regfile_writeAddr_2_valid}
    , io_debug_regfile_writeAddr_3_valid{vlSymsp->TOP.io_debug_regfile_writeAddr_3_valid}
    , io_debug_regfile_writeData_0_valid{vlSymsp->TOP.io_debug_regfile_writeData_0_valid}
    , io_debug_regfile_writeData_1_valid{vlSymsp->TOP.io_debug_regfile_writeData_1_valid}
    , io_debug_regfile_writeData_2_valid{vlSymsp->TOP.io_debug_regfile_writeData_2_valid}
    , io_debug_regfile_writeData_3_valid{vlSymsp->TOP.io_debug_regfile_writeData_3_valid}
    , io_debug_regfile_writeData_4_valid{vlSymsp->TOP.io_debug_regfile_writeData_4_valid}
    , io_debug_regfile_writeData_5_valid{vlSymsp->TOP.io_debug_regfile_writeData_5_valid}
    , io_debug_float_writeAddr_valid{vlSymsp->TOP.io_debug_float_writeAddr_valid}
    , io_debug_float_writeData_0_valid{vlSymsp->TOP.io_debug_float_writeData_0_valid}
    , io_debug_float_writeData_1_valid{vlSymsp->TOP.io_debug_float_writeData_1_valid}
    , io_slog_valid{vlSymsp->TOP.io_slog_valid}
    , io_te{vlSymsp->TOP.io_te}
    , io_axi_slave_write_addr_bits_addr{vlSymsp->TOP.io_axi_slave_write_addr_bits_addr}
    , io_axi_slave_write_addr_bits_prot{vlSymsp->TOP.io_axi_slave_write_addr_bits_prot}
    , io_axi_slave_write_addr_bits_id{vlSymsp->TOP.io_axi_slave_write_addr_bits_id}
    , io_axi_slave_write_addr_bits_len{vlSymsp->TOP.io_axi_slave_write_addr_bits_len}
    , io_axi_slave_write_addr_bits_size{vlSymsp->TOP.io_axi_slave_write_addr_bits_size}
    , io_axi_slave_write_addr_bits_burst{vlSymsp->TOP.io_axi_slave_write_addr_bits_burst}
    , io_axi_slave_write_addr_bits_cache{vlSymsp->TOP.io_axi_slave_write_addr_bits_cache}
    , io_axi_slave_write_addr_bits_qos{vlSymsp->TOP.io_axi_slave_write_addr_bits_qos}
    , io_axi_slave_write_addr_bits_region{vlSymsp->TOP.io_axi_slave_write_addr_bits_region}
    , io_axi_slave_write_data_bits_data{vlSymsp->TOP.io_axi_slave_write_data_bits_data}
    , io_axi_slave_write_data_bits_strb{vlSymsp->TOP.io_axi_slave_write_data_bits_strb}
    , io_axi_slave_write_resp_bits_id{vlSymsp->TOP.io_axi_slave_write_resp_bits_id}
    , io_axi_slave_write_resp_bits_resp{vlSymsp->TOP.io_axi_slave_write_resp_bits_resp}
    , io_axi_slave_read_addr_bits_addr{vlSymsp->TOP.io_axi_slave_read_addr_bits_addr}
    , io_axi_slave_read_addr_bits_prot{vlSymsp->TOP.io_axi_slave_read_addr_bits_prot}
    , io_axi_slave_read_addr_bits_id{vlSymsp->TOP.io_axi_slave_read_addr_bits_id}
    , io_axi_slave_read_addr_bits_len{vlSymsp->TOP.io_axi_slave_read_addr_bits_len}
    , io_axi_slave_read_addr_bits_size{vlSymsp->TOP.io_axi_slave_read_addr_bits_size}
    , io_axi_slave_read_addr_bits_burst{vlSymsp->TOP.io_axi_slave_read_addr_bits_burst}
    , io_axi_slave_read_addr_bits_cache{vlSymsp->TOP.io_axi_slave_read_addr_bits_cache}
    , io_axi_slave_read_addr_bits_qos{vlSymsp->TOP.io_axi_slave_read_addr_bits_qos}
    , io_axi_slave_read_addr_bits_region{vlSymsp->TOP.io_axi_slave_read_addr_bits_region}
    , io_axi_slave_read_data_bits_data{vlSymsp->TOP.io_axi_slave_read_data_bits_data}
    , io_axi_slave_read_data_bits_id{vlSymsp->TOP.io_axi_slave_read_data_bits_id}
    , io_axi_slave_read_data_bits_resp{vlSymsp->TOP.io_axi_slave_read_data_bits_resp}
    , io_axi_master_write_addr_bits_addr{vlSymsp->TOP.io_axi_master_write_addr_bits_addr}
    , io_axi_master_write_addr_bits_prot{vlSymsp->TOP.io_axi_master_write_addr_bits_prot}
    , io_axi_master_write_addr_bits_id{vlSymsp->TOP.io_axi_master_write_addr_bits_id}
    , io_axi_master_write_addr_bits_len{vlSymsp->TOP.io_axi_master_write_addr_bits_len}
    , io_axi_master_write_addr_bits_size{vlSymsp->TOP.io_axi_master_write_addr_bits_size}
    , io_axi_master_write_addr_bits_burst{vlSymsp->TOP.io_axi_master_write_addr_bits_burst}
    , io_axi_master_write_addr_bits_cache{vlSymsp->TOP.io_axi_master_write_addr_bits_cache}
    , io_axi_master_write_addr_bits_qos{vlSymsp->TOP.io_axi_master_write_addr_bits_qos}
    , io_axi_master_write_addr_bits_region{vlSymsp->TOP.io_axi_master_write_addr_bits_region}
    , io_axi_master_write_data_bits_data{vlSymsp->TOP.io_axi_master_write_data_bits_data}
    , io_axi_master_write_data_bits_strb{vlSymsp->TOP.io_axi_master_write_data_bits_strb}
    , io_axi_master_write_resp_bits_id{vlSymsp->TOP.io_axi_master_write_resp_bits_id}
    , io_axi_master_write_resp_bits_resp{vlSymsp->TOP.io_axi_master_write_resp_bits_resp}
    , io_axi_master_read_addr_bits_addr{vlSymsp->TOP.io_axi_master_read_addr_bits_addr}
    , io_axi_master_read_addr_bits_prot{vlSymsp->TOP.io_axi_master_read_addr_bits_prot}
    , io_axi_master_read_addr_bits_id{vlSymsp->TOP.io_axi_master_read_addr_bits_id}
    , io_axi_master_read_addr_bits_len{vlSymsp->TOP.io_axi_master_read_addr_bits_len}
    , io_axi_master_read_addr_bits_size{vlSymsp->TOP.io_axi_master_read_addr_bits_size}
    , io_axi_master_read_addr_bits_burst{vlSymsp->TOP.io_axi_master_read_addr_bits_burst}
    , io_axi_master_read_addr_bits_cache{vlSymsp->TOP.io_axi_master_read_addr_bits_cache}
    , io_axi_master_read_addr_bits_qos{vlSymsp->TOP.io_axi_master_read_addr_bits_qos}
    , io_axi_master_read_addr_bits_region{vlSymsp->TOP.io_axi_master_read_addr_bits_region}
    , io_axi_master_read_data_bits_data{vlSymsp->TOP.io_axi_master_read_data_bits_data}
    , io_axi_master_read_data_bits_id{vlSymsp->TOP.io_axi_master_read_data_bits_id}
    , io_axi_master_read_data_bits_resp{vlSymsp->TOP.io_axi_master_read_data_bits_resp}
    , io_debug_en{vlSymsp->TOP.io_debug_en}
    , io_debug_addr_0{vlSymsp->TOP.io_debug_addr_0}
    , io_debug_addr_1{vlSymsp->TOP.io_debug_addr_1}
    , io_debug_addr_2{vlSymsp->TOP.io_debug_addr_2}
    , io_debug_addr_3{vlSymsp->TOP.io_debug_addr_3}
    , io_debug_inst_0{vlSymsp->TOP.io_debug_inst_0}
    , io_debug_inst_1{vlSymsp->TOP.io_debug_inst_1}
    , io_debug_inst_2{vlSymsp->TOP.io_debug_inst_2}
    , io_debug_inst_3{vlSymsp->TOP.io_debug_inst_3}
    , io_debug_cycles{vlSymsp->TOP.io_debug_cycles}
    , io_debug_dbus_bits_addr{vlSymsp->TOP.io_debug_dbus_bits_addr}
    , io_debug_dbus_bits_wdata{vlSymsp->TOP.io_debug_dbus_bits_wdata}
    , io_debug_dispatch_0_instAddr{vlSymsp->TOP.io_debug_dispatch_0_instAddr}
    , io_debug_dispatch_0_instInst{vlSymsp->TOP.io_debug_dispatch_0_instInst}
    , io_debug_dispatch_1_instAddr{vlSymsp->TOP.io_debug_dispatch_1_instAddr}
    , io_debug_dispatch_1_instInst{vlSymsp->TOP.io_debug_dispatch_1_instInst}
    , io_debug_dispatch_2_instAddr{vlSymsp->TOP.io_debug_dispatch_2_instAddr}
    , io_debug_dispatch_2_instInst{vlSymsp->TOP.io_debug_dispatch_2_instInst}
    , io_debug_dispatch_3_instAddr{vlSymsp->TOP.io_debug_dispatch_3_instAddr}
    , io_debug_dispatch_3_instInst{vlSymsp->TOP.io_debug_dispatch_3_instInst}
    , io_debug_regfile_writeAddr_0_bits{vlSymsp->TOP.io_debug_regfile_writeAddr_0_bits}
    , io_debug_regfile_writeAddr_1_bits{vlSymsp->TOP.io_debug_regfile_writeAddr_1_bits}
    , io_debug_regfile_writeAddr_2_bits{vlSymsp->TOP.io_debug_regfile_writeAddr_2_bits}
    , io_debug_regfile_writeAddr_3_bits{vlSymsp->TOP.io_debug_regfile_writeAddr_3_bits}
    , io_debug_regfile_writeData_0_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_0_bits_addr}
    , io_debug_regfile_writeData_0_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_0_bits_data}
    , io_debug_regfile_writeData_1_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_1_bits_addr}
    , io_debug_regfile_writeData_1_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_1_bits_data}
    , io_debug_regfile_writeData_2_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_2_bits_addr}
    , io_debug_regfile_writeData_2_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_2_bits_data}
    , io_debug_regfile_writeData_3_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_3_bits_addr}
    , io_debug_regfile_writeData_3_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_3_bits_data}
    , io_debug_regfile_writeData_4_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_4_bits_addr}
    , io_debug_regfile_writeData_4_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_4_bits_data}
    , io_debug_regfile_writeData_5_bits_addr{vlSymsp->TOP.io_debug_regfile_writeData_5_bits_addr}
    , io_debug_regfile_writeData_5_bits_data{vlSymsp->TOP.io_debug_regfile_writeData_5_bits_data}
    , io_debug_float_writeAddr_bits{vlSymsp->TOP.io_debug_float_writeAddr_bits}
    , io_debug_float_writeData_0_bits_addr{vlSymsp->TOP.io_debug_float_writeData_0_bits_addr}
    , io_debug_float_writeData_0_bits_data{vlSymsp->TOP.io_debug_float_writeData_0_bits_data}
    , io_debug_float_writeData_1_bits_addr{vlSymsp->TOP.io_debug_float_writeData_1_bits_addr}
    , io_debug_float_writeData_1_bits_data{vlSymsp->TOP.io_debug_float_writeData_1_bits_data}
    , io_slog_addr{vlSymsp->TOP.io_slog_addr}
    , io_slog_data{vlSymsp->TOP.io_slog_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << io_aclk;
    sensitive << io_aresetn;
    sensitive << io_axi_slave_write_addr_valid;
    sensitive << io_axi_slave_write_addr_bits_lock;
    sensitive << io_axi_slave_write_data_valid;
    sensitive << io_axi_slave_write_data_bits_last;
    sensitive << io_axi_slave_write_resp_ready;
    sensitive << io_axi_slave_read_addr_valid;
    sensitive << io_axi_slave_read_addr_bits_lock;
    sensitive << io_axi_slave_read_data_ready;
    sensitive << io_axi_master_write_addr_ready;
    sensitive << io_axi_master_write_data_ready;
    sensitive << io_axi_master_write_resp_valid;
    sensitive << io_axi_master_read_addr_ready;
    sensitive << io_axi_master_read_data_valid;
    sensitive << io_axi_master_read_data_bits_last;
    sensitive << io_irq;
    sensitive << io_te;
    sensitive << io_axi_slave_write_addr_bits_addr;
    sensitive << io_axi_slave_write_addr_bits_prot;
    sensitive << io_axi_slave_write_addr_bits_id;
    sensitive << io_axi_slave_write_addr_bits_len;
    sensitive << io_axi_slave_write_addr_bits_size;
    sensitive << io_axi_slave_write_addr_bits_burst;
    sensitive << io_axi_slave_write_addr_bits_cache;
    sensitive << io_axi_slave_write_addr_bits_qos;
    sensitive << io_axi_slave_write_addr_bits_region;
    sensitive << io_axi_slave_write_data_bits_data;
    sensitive << io_axi_slave_write_data_bits_strb;
    sensitive << io_axi_slave_read_addr_bits_addr;
    sensitive << io_axi_slave_read_addr_bits_prot;
    sensitive << io_axi_slave_read_addr_bits_id;
    sensitive << io_axi_slave_read_addr_bits_len;
    sensitive << io_axi_slave_read_addr_bits_size;
    sensitive << io_axi_slave_read_addr_bits_burst;
    sensitive << io_axi_slave_read_addr_bits_cache;
    sensitive << io_axi_slave_read_addr_bits_qos;
    sensitive << io_axi_slave_read_addr_bits_region;
    sensitive << io_axi_master_write_resp_bits_id;
    sensitive << io_axi_master_write_resp_bits_resp;
    sensitive << io_axi_master_read_data_bits_data;
    sensitive << io_axi_master_read_data_bits_id;
    sensitive << io_axi_master_read_data_bits_resp;

}

//============================================================
// Destructor

VCoreMiniAxi::~VCoreMiniAxi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCoreMiniAxi___024root___eval_debug_assertions(VCoreMiniAxi___024root* vlSelf);
#endif  // VL_DEBUG
void VCoreMiniAxi___024root___eval_static(VCoreMiniAxi___024root* vlSelf);
void VCoreMiniAxi___024root___eval_initial(VCoreMiniAxi___024root* vlSelf);
void VCoreMiniAxi___024root___eval_settle(VCoreMiniAxi___024root* vlSelf);
void VCoreMiniAxi___024root___eval(VCoreMiniAxi___024root* vlSelf);

void VCoreMiniAxi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCoreMiniAxi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCoreMiniAxi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCoreMiniAxi___024root___eval_static(&(vlSymsp->TOP));
        VCoreMiniAxi___024root___eval_initial(&(vlSymsp->TOP));
        VCoreMiniAxi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCoreMiniAxi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCoreMiniAxi::eventsPending() { return false; }

uint64_t VCoreMiniAxi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void VCoreMiniAxi___024root___eval_final(VCoreMiniAxi___024root* vlSelf);

VL_ATTR_COLD void VCoreMiniAxi::final() {
    VCoreMiniAxi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCoreMiniAxi::hierName() const { return vlSymsp->name(); }
const char* VCoreMiniAxi::modelName() const { return "VCoreMiniAxi"; }
unsigned VCoreMiniAxi::threads() const { return 1; }
void VCoreMiniAxi::prepareClone() const { contextp()->prepareClone(); }
void VCoreMiniAxi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCoreMiniAxi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCoreMiniAxi___024root__trace_decl_types(VerilatedFst* tracep);

void VCoreMiniAxi___024root__trace_init_top(VCoreMiniAxi___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCoreMiniAxi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreMiniAxi___024root*>(voidSelf);
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCoreMiniAxi___024root__trace_decl_types(tracep);
    VCoreMiniAxi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCoreMiniAxi___024root__trace_register(VCoreMiniAxi___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VCoreMiniAxi::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "VCoreMiniAxi::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCoreMiniAxi::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCoreMiniAxi___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
