// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOREMINIAXI_H_
#define VERILATED_VCOREMINIAXI_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

class VCoreMiniAxi__Syms;
class VCoreMiniAxi___024root;
class VerilatedFstSc;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCoreMiniAxi VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCoreMiniAxi__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &io_aclk;
    sc_core::sc_in<bool> &io_aresetn;
    sc_core::sc_out<bool> &io_axi_slave_write_addr_ready;
    sc_core::sc_in<bool> &io_axi_slave_write_addr_valid;
    sc_core::sc_in<bool> &io_axi_slave_write_addr_bits_lock;
    sc_core::sc_out<bool> &io_axi_slave_write_data_ready;
    sc_core::sc_in<bool> &io_axi_slave_write_data_valid;
    sc_core::sc_in<bool> &io_axi_slave_write_data_bits_last;
    sc_core::sc_in<bool> &io_axi_slave_write_resp_ready;
    sc_core::sc_out<bool> &io_axi_slave_write_resp_valid;
    sc_core::sc_out<bool> &io_axi_slave_read_addr_ready;
    sc_core::sc_in<bool> &io_axi_slave_read_addr_valid;
    sc_core::sc_in<bool> &io_axi_slave_read_addr_bits_lock;
    sc_core::sc_in<bool> &io_axi_slave_read_data_ready;
    sc_core::sc_out<bool> &io_axi_slave_read_data_valid;
    sc_core::sc_out<bool> &io_axi_slave_read_data_bits_last;
    sc_core::sc_in<bool> &io_axi_master_write_addr_ready;
    sc_core::sc_out<bool> &io_axi_master_write_addr_valid;
    sc_core::sc_out<bool> &io_axi_master_write_addr_bits_lock;
    sc_core::sc_in<bool> &io_axi_master_write_data_ready;
    sc_core::sc_out<bool> &io_axi_master_write_data_valid;
    sc_core::sc_out<bool> &io_axi_master_write_data_bits_last;
    sc_core::sc_out<bool> &io_axi_master_write_resp_ready;
    sc_core::sc_in<bool> &io_axi_master_write_resp_valid;
    sc_core::sc_in<bool> &io_axi_master_read_addr_ready;
    sc_core::sc_out<bool> &io_axi_master_read_addr_valid;
    sc_core::sc_out<bool> &io_axi_master_read_addr_bits_lock;
    sc_core::sc_out<bool> &io_axi_master_read_data_ready;
    sc_core::sc_in<bool> &io_axi_master_read_data_valid;
    sc_core::sc_in<bool> &io_axi_master_read_data_bits_last;
    sc_core::sc_out<bool> &io_halted;
    sc_core::sc_out<bool> &io_fault;
    sc_core::sc_out<bool> &io_wfi;
    sc_core::sc_in<bool> &io_irq;
    sc_core::sc_out<bool> &io_debug_dbus_valid;
    sc_core::sc_out<bool> &io_debug_dbus_bits_write;
    sc_core::sc_out<bool> &io_debug_dispatch_0_instFire;
    sc_core::sc_out<bool> &io_debug_dispatch_1_instFire;
    sc_core::sc_out<bool> &io_debug_dispatch_2_instFire;
    sc_core::sc_out<bool> &io_debug_dispatch_3_instFire;
    sc_core::sc_out<bool> &io_debug_regfile_writeAddr_0_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeAddr_1_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeAddr_2_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeAddr_3_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_0_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_1_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_2_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_3_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_4_valid;
    sc_core::sc_out<bool> &io_debug_regfile_writeData_5_valid;
    sc_core::sc_out<bool> &io_debug_float_writeAddr_valid;
    sc_core::sc_out<bool> &io_debug_float_writeData_0_valid;
    sc_core::sc_out<bool> &io_debug_float_writeData_1_valid;
    sc_core::sc_out<bool> &io_slog_valid;
    sc_core::sc_in<bool> &io_te;
    sc_core::sc_in<sc_dt::sc_bv<32> > &io_axi_slave_write_addr_bits_addr;
    sc_core::sc_in<sc_dt::sc_bv<3> > &io_axi_slave_write_addr_bits_prot;
    sc_core::sc_in<sc_dt::sc_bv<6> > &io_axi_slave_write_addr_bits_id;
    sc_core::sc_in<sc_dt::sc_bv<8> > &io_axi_slave_write_addr_bits_len;
    sc_core::sc_in<sc_dt::sc_bv<3> > &io_axi_slave_write_addr_bits_size;
    sc_core::sc_in<sc_dt::sc_bv<2> > &io_axi_slave_write_addr_bits_burst;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_write_addr_bits_cache;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_write_addr_bits_qos;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_write_addr_bits_region;
    sc_core::sc_in<sc_dt::sc_bv<128> > &io_axi_slave_write_data_bits_data;
    sc_core::sc_in<sc_dt::sc_bv<16> > &io_axi_slave_write_data_bits_strb;
    sc_core::sc_out<sc_dt::sc_bv<6> > &io_axi_slave_write_resp_bits_id;
    sc_core::sc_out<sc_dt::sc_bv<2> > &io_axi_slave_write_resp_bits_resp;
    sc_core::sc_in<sc_dt::sc_bv<32> > &io_axi_slave_read_addr_bits_addr;
    sc_core::sc_in<sc_dt::sc_bv<3> > &io_axi_slave_read_addr_bits_prot;
    sc_core::sc_in<sc_dt::sc_bv<6> > &io_axi_slave_read_addr_bits_id;
    sc_core::sc_in<sc_dt::sc_bv<8> > &io_axi_slave_read_addr_bits_len;
    sc_core::sc_in<sc_dt::sc_bv<3> > &io_axi_slave_read_addr_bits_size;
    sc_core::sc_in<sc_dt::sc_bv<2> > &io_axi_slave_read_addr_bits_burst;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_read_addr_bits_cache;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_read_addr_bits_qos;
    sc_core::sc_in<sc_dt::sc_bv<4> > &io_axi_slave_read_addr_bits_region;
    sc_core::sc_out<sc_dt::sc_bv<128> > &io_axi_slave_read_data_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<6> > &io_axi_slave_read_data_bits_id;
    sc_core::sc_out<sc_dt::sc_bv<2> > &io_axi_slave_read_data_bits_resp;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_axi_master_write_addr_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<3> > &io_axi_master_write_addr_bits_prot;
    sc_core::sc_out<sc_dt::sc_bv<6> > &io_axi_master_write_addr_bits_id;
    sc_core::sc_out<sc_dt::sc_bv<8> > &io_axi_master_write_addr_bits_len;
    sc_core::sc_out<sc_dt::sc_bv<3> > &io_axi_master_write_addr_bits_size;
    sc_core::sc_out<sc_dt::sc_bv<2> > &io_axi_master_write_addr_bits_burst;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_write_addr_bits_cache;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_write_addr_bits_qos;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_write_addr_bits_region;
    sc_core::sc_out<sc_dt::sc_bv<128> > &io_axi_master_write_data_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<16> > &io_axi_master_write_data_bits_strb;
    sc_core::sc_in<sc_dt::sc_bv<6> > &io_axi_master_write_resp_bits_id;
    sc_core::sc_in<sc_dt::sc_bv<2> > &io_axi_master_write_resp_bits_resp;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_axi_master_read_addr_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<3> > &io_axi_master_read_addr_bits_prot;
    sc_core::sc_out<sc_dt::sc_bv<6> > &io_axi_master_read_addr_bits_id;
    sc_core::sc_out<sc_dt::sc_bv<8> > &io_axi_master_read_addr_bits_len;
    sc_core::sc_out<sc_dt::sc_bv<3> > &io_axi_master_read_addr_bits_size;
    sc_core::sc_out<sc_dt::sc_bv<2> > &io_axi_master_read_addr_bits_burst;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_read_addr_bits_cache;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_read_addr_bits_qos;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_axi_master_read_addr_bits_region;
    sc_core::sc_in<sc_dt::sc_bv<128> > &io_axi_master_read_data_bits_data;
    sc_core::sc_in<sc_dt::sc_bv<6> > &io_axi_master_read_data_bits_id;
    sc_core::sc_in<sc_dt::sc_bv<2> > &io_axi_master_read_data_bits_resp;
    sc_core::sc_out<sc_dt::sc_bv<4> > &io_debug_en;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_addr_0;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_addr_1;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_addr_2;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_addr_3;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_inst_0;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_inst_1;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_inst_2;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_inst_3;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_cycles;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dbus_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<128> > &io_debug_dbus_bits_wdata;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_0_instAddr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_0_instInst;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_1_instAddr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_1_instInst;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_2_instAddr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_2_instInst;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_3_instAddr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_dispatch_3_instInst;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeAddr_0_bits;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeAddr_1_bits;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeAddr_2_bits;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeAddr_3_bits;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_0_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_0_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_1_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_1_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_2_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_2_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_3_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_3_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_4_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_4_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_regfile_writeData_5_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_regfile_writeData_5_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_debug_float_writeAddr_bits;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_float_writeData_0_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_float_writeData_0_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_float_writeData_1_bits_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_debug_float_writeData_1_bits_data;
    sc_core::sc_out<sc_dt::sc_bv<5> > &io_slog_addr;
    sc_core::sc_out<sc_dt::sc_bv<32> > &io_slog_data;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCoreMiniAxi___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(VCoreMiniAxi);
    virtual ~VCoreMiniAxi();
  private:
    VL_UNCOPYABLE(VCoreMiniAxi);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
