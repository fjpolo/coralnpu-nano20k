// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`define SYNTHESIS

// Assuming prim_mubi_pkg and Gowin_PLL are available globally or included elsewhere.
import prim_mubi_pkg::*;

module chip_console60k_CoreMini(
     // System
     input  logic sys_clk,      // 27 MHz
     input  logic s0,           // Used global_en
     input  logic s1,           // Used global_en
     input  logic s2,           // Used global_en (System Reset Source / Write Enable)
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i, // WARN (CV0016): This input is currently unused
     // PMODs (Used for Spi2TLUL Test Path)
     input [7:0] o_pmod0,       // Used as Address and Write Data / SPI Control
     output [7:0] o_pmod1       // Final Output: Driven by XOR chain from CoreMini outputs
     );

 parameter ClockFrequency_81MHz = 81 /* synthesis syn_keep=1 */;

 // sys_rst is high-active reset (s2 is the reset source)
 wire sys_rst = s2 /* synthesis syn_keep=1 */;

 logic clk_81MHz /* synthesis syn_keep=1 */;        // PLL output clock

 // PLL Instantiation (Clock generation - Gowin_PLL must be defined externally)
 Gowin_PLL gowinPLL81MHz(
     .clkout0(clk_81MHz), //output clkout
     .clkin(sys_clk),      //input clkin
     .mdclk(1'b0)         // Tied low to resolve undriven input warning
   ) /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- GLOBAL ENABLE SIGNALS -----------------------------------------------
 // =========================================================================
 // These signals are used to drive inputs and ensure complexity for synthesis
 wire global_en_0 = (~s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
 wire global_en_1 = (~s2)&(~s1)&(s0)  /* synthesis syn_keep=1 */;
 wire global_en_2 = (~s2)&(s1)&(~s0)  /* synthesis syn_keep=1 */;
 wire global_en_3 = (~s2)&(s1)&(s0)   /* synthesis syn_keep=1 */;
 wire global_en_4 = (s2)&(~s1)&(~s0)  /* synthesis syn_keep=1 */;
 wire global_en_5 = (s2)&(~s1)&(s0)   /* synthesis syn_keep=1 */;
 wire global_en_6 = (s2)&(s1)&(~s0)   /* synthesis syn_keep=1 */;
 wire global_en_7 = (s2)&(s1)&(s0)    /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- CoreMini INTERFACE WIRES - CORE MINI PORTS --------------------------
 // =========================================================================

 // Wires for tying off unused/debug inputs to constants (to resolve EX3820)
 logic tied_0_1b;
 logic [3:0] tied_0_4b;
 logic [4:0] tied_0_5b;
 logic [31:0] tied_0_32b;
 logic [127:0] tied_0_128b;

 // INPUT WIRES (Driven by top-level ports or tie-offs)
 logic [31:0] csr_in_value_0      /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic [127:0] ibus_rdata         /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic ibus_fault_valid           /* synthesis syn_keep=1 */; // Tied low
 logic [31:0] ibus_fault_bits_epc /* synthesis syn_keep=1 */; // Tied to constant
 logic [127:0] dbus_rdata         /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic ebus_dbus_ready            /* synthesis syn_keep=1 */; // Driven by global_en
 logic ebus_fault_valid           /* synthesis syn_keep=1 */; // Tied low
 logic ebus_fault_bits_write      /* synthesis syn_keep=1 */; // Tied low
 logic [31:0] ebus_fault_bits_addr /* synthesis syn_keep=1 */; // Tied to constant
 logic [31:0] ebus_fault_bits_epc  /* synthesis syn_keep=1 */; // Tied to constant
 logic core_irq                   /* synthesis syn_keep=1 */; // Driven by global_en

 // OUTPUT WIRES (Consumed by o_pmod1 or tied off)
 logic [31:0] csr_out_value_0     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_1     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_2     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_3     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_4     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_5     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_6     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_7     /* synthesis syn_keep=1 */;
 logic core_halted                /* synthesis syn_keep=1 */;
 logic core_fault                 /* synthesis syn_keep=1 */;
 logic core_wfi                   /* synthesis syn_keep=1 */;
 logic ibus_valid                 /* synthesis syn_keep=1 */;
 logic [31:0] ibus_addr           /* synthesis syn_keep=1 */;
 logic dbus_valid                 /* synthesis syn_keep=1 */;
 logic dbus_write                 /* synthesis syn_keep=1 */;
 logic [31:0] dbus_addr           /* synthesis syn_keep=1 */;
 logic [127:0] dbus_wdata         /* synthesis syn_keep=1 */;
 logic [15:0] dbus_wmask          /* synthesis syn_keep=1 */;
 logic ebus_dbus_valid            /* synthesis syn_keep=1 */;
 logic ebus_dbus_write            /* synthesis syn_keep=1 */;
 logic [31:0] ebus_dbus_pc        /* synthesis syn_keep=1 */;
 logic [31:0] ebus_dbus_addr      /* synthesis syn_keep=1 */;
 logic [4:0] ebus_dbus_size       /* synthesis syn_keep=1 */;
 logic [127:0] ebus_dbus_wdata    /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- CORE MINI INPUT LOGIC -----------------------------------------------
 // =========================================================================

 // Wires to resolve "Constant is not allowed here" (EX3820) for debug ports
 assign tied_0_1b = 1'b0;
 assign tied_0_4b = 4'h0;
 assign tied_0_5b = 5'h0;
 assign tied_0_32b = 32'h0;
 assign tied_0_128b = 128'h0;

 // Drive CSR input from o_pmod0
 assign csr_in_value_0 = {24'hA5A5A5, o_pmod0};

 // Drive IRQ from a global enable signal
 assign core_irq = global_en_0;

 // Drive bus read data from o_pmod0 for I-bus and D-bus
 // FIX: Replaced multiple assignments with single concatenations to resolve EX0344 (Multiple Drivers)
 // ibus_rdata: [127:8] = 0, [7:0] = o_pmod0
 assign ibus_rdata = {120'h0, o_pmod0};

 // dbus_rdata: [127:16] = 0, [15:8] = o_pmod0, [7:0] = 0
 assign dbus_rdata = {112'h0, o_pmod0, 8'h0};

 // E-bus ready driven by a global enable signal
 assign ebus_dbus_ready = global_en_1;

 // Tie off unused fault signals to constant values
 assign ibus_fault_valid = 1'b0;
 assign ibus_fault_bits_epc = 32'h0;
 assign ebus_fault_valid = 1'b0;
 assign ebus_fault_bits_write = 1'b0;
 assign ebus_fault_bits_addr = 32'h0;
 assign ebus_fault_bits_epc = 32'h0;

 // =========================================================================
 // --- CoreMini INSTANTIATION ----------------------------------------------
 // =========================================================================

`ifdef FULL_SCORE
//  /* synthesis syn_keep=1 */ CoreMini i_CoreMini(
 /* synthesis syn_keep=1 */ SCore i_CoreMini_SCore(
   .clock(sys_clk),
   .reset(sys_rst),
   .io_csr_in_value_0(csr_in_value_0),
   .io_csr_out_value_0(csr_out_value_0),
   .io_csr_out_value_1(csr_out_value_1),
   .io_csr_out_value_2(csr_out_value_2),
   .io_csr_out_value_3(csr_out_value_3),
   .io_csr_out_value_4(csr_out_value_4),
   .io_csr_out_value_5(csr_out_value_5),
   .io_csr_out_value_6(csr_out_value_6),
   .io_csr_out_value_7(csr_out_value_7),
   .io_halted(core_halted),
   .io_fault(core_fault),
   .io_wfi(core_wfi),
   .io_irq(core_irq),
   .io_ibus_valid(ibus_valid),
   .io_ibus_addr(ibus_addr),
   .io_ibus_rdata(ibus_rdata),
   .io_ibus_fault_valid(ibus_fault_valid),
   .io_ibus_fault_bits_epc(ibus_fault_bits_epc),
   .io_dbus_valid(dbus_valid),
   .io_dbus_write(dbus_write),
   .io_dbus_addr(dbus_addr),
   .io_dbus_wdata(dbus_wdata),
   .io_dbus_wmask(dbus_wmask),
   .io_dbus_rdata(dbus_rdata),
   .io_ebus_dbus_valid(ebus_dbus_valid),
   .io_ebus_dbus_ready(ebus_dbus_ready),
   .io_ebus_dbus_write(ebus_dbus_write),
   .io_ebus_dbus_pc(ebus_dbus_pc),
   .io_ebus_dbus_addr(ebus_dbus_addr),
   .io_ebus_dbus_size(ebus_dbus_size),
   .io_ebus_dbus_wdata(ebus_dbus_wdata),
   .io_ebus_dbus_rdata(tied_0_128b), // Use tie-off wire instead of constant
   .io_ebus_fault_valid(ebus_fault_valid),
   .io_ebus_fault_bits_write(ebus_fault_bits_write),
   .io_ebus_fault_bits_addr(ebus_fault_bits_addr),
   .io_ebus_fault_bits_epc(ebus_fault_bits_epc),

   // DEBUG PORTS (Tied low/off using new wires to resolve EX3820)
   .io_slog_valid(),
   .io_slog_addr(),
   .io_slog_data(),
   .io_debug_en(),
   .io_debug_addr_0(),
   .io_debug_addr_1(),
   .io_debug_addr_2(),
   .io_debug_addr_3(),
   .io_debug_inst_0(),
   .io_debug_inst_1(),
   .io_debug_inst_2(),
   .io_debug_inst_3(),
   .io_debug_cycles(),
   .io_debug_dbus_valid(),
   .io_debug_dbus_bits_addr(),
   .io_debug_dbus_bits_wdata(),
   .io_debug_dbus_bits_write(),
   .io_debug_dispatch_0_instFire(),
   .io_debug_dispatch_0_instAddr(),
   .io_debug_dispatch_0_instInst(),
   .io_debug_dispatch_1_instFire(),
   .io_debug_dispatch_1_instAddr(),
   .io_debug_dispatch_1_instInst(),
   .io_debug_dispatch_2_instFire(),
   .io_debug_dispatch_2_instAddr(),
   .io_debug_dispatch_2_instInst(),
   .io_debug_dispatch_3_instFire(),
   .io_debug_dispatch_3_instAddr(),
   .io_debug_dispatch_3_instInst(),
   .io_debug_regfile_writeAddr_0_valid(),
   .io_debug_regfile_writeAddr_0_bits(),
   .io_debug_regfile_writeAddr_1_valid(),
   .io_debug_regfile_writeAddr_1_bits(),
   .io_debug_regfile_writeAddr_2_valid(),
   .io_debug_regfile_writeAddr_2_bits(),
   .io_debug_regfile_writeAddr_3_valid(),
   .io_debug_regfile_writeAddr_3_bits(),
   .io_debug_regfile_writeData_0_valid(),
   .io_debug_regfile_writeData_0_bits_addr(),
   .io_debug_regfile_writeData_0_bits_data(),
   .io_debug_regfile_writeData_1_valid(),
   .io_debug_regfile_writeData_1_bits_addr(),
   .io_debug_regfile_writeData_1_bits_data(),
   .io_debug_regfile_writeData_2_valid(),
   .io_debug_regfile_writeData_2_bits_addr(),
   .io_debug_regfile_writeData_2_bits_data(),
   .io_debug_regfile_writeData_3_valid(),
   .io_debug_regfile_writeData_3_bits_addr(),
   .io_debug_regfile_writeData_3_bits_data(),
   .io_debug_regfile_writeData_4_valid(),
   .io_debug_regfile_writeData_4_bits_addr(),
   .io_debug_regfile_writeData_4_bits_data(),
   .io_debug_regfile_writeData_5_valid(),
   .io_debug_regfile_writeData_5_bits_addr(),
   .io_debug_regfile_writeData_5_bits_data(),
   .io_debug_float_writeAddr_valid(),
   .io_debug_float_writeAddr_bits(),
   .io_debug_float_writeData_0_valid(),
   .io_debug_float_writeData_0_bits_addr(),
   .io_debug_float_writeData_0_bits_data(),
   .io_debug_float_writeData_1_valid(),
   .io_debug_float_writeData_1_bits_addr(),
   .io_debug_float_writeData_1_bits_data()
 ) /* synthesis syn_keep=1 */;
 `endif // FULL_SCORE



 // =========================================================================
 // --- SCORE - INDIVIDUAL MODULES ----------------------------------------
 // =========================================================================
  wire         _arb_io_in_1_ready/* synthesis syn_keep=1 */;
  wire         _arb_io_in_2_ready/* synthesis syn_keep=1 */;
  wire         _arb_io_out_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _arb_io_out_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _arb_io_out_bits_data/* synthesis syn_keep=1 */;
  wire [22:0]  _fRegfile_io_read_ports_0_data_mantissa/* synthesis syn_keep=1 */;
  wire [7:0]   _fRegfile_io_read_ports_0_data_exponent/* synthesis syn_keep=1 */;
  wire         _fRegfile_io_read_ports_0_data_sign/* synthesis syn_keep=1 */;
  wire [22:0]  _fRegfile_io_read_ports_1_data_mantissa/* synthesis syn_keep=1 */;
  wire [7:0]   _fRegfile_io_read_ports_1_data_exponent/* synthesis syn_keep=1 */;
  wire         _fRegfile_io_read_ports_1_data_sign/* synthesis syn_keep=1 */;
  wire [22:0]  _fRegfile_io_read_ports_2_data_mantissa/* synthesis syn_keep=1 */;
  wire [7:0]   _fRegfile_io_read_ports_2_data_exponent/* synthesis syn_keep=1 */;
  wire         _fRegfile_io_read_ports_2_data_sign/* synthesis syn_keep=1 */;
  wire [31:0]  _fRegfile_io_scoreboard/* synthesis syn_keep=1 */;
  wire [31:0]  _fRegfile_io_busPort_data_0/* synthesis syn_keep=1 */;
  wire         _floatCore_io_inst_ready/* synthesis syn_keep=1 */;
  wire         _floatCore_io_read_ports_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_read_ports_0_addr/* synthesis syn_keep=1 */;
  wire         _floatCore_io_read_ports_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_read_ports_1_addr/* synthesis syn_keep=1 */;
  wire         _floatCore_io_read_ports_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_read_ports_2_addr/* synthesis syn_keep=1 */;
  wire         _floatCore_io_write_ports_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_write_ports_0_addr/* synthesis syn_keep=1 */;
  wire [22:0]  _floatCore_io_write_ports_0_data_mantissa/* synthesis syn_keep=1 */;
  wire [7:0]   _floatCore_io_write_ports_0_data_exponent/* synthesis syn_keep=1 */;
  wire         _floatCore_io_write_ports_0_data_sign/* synthesis syn_keep=1 */;
  wire         _floatCore_io_write_ports_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_write_ports_1_addr/* synthesis syn_keep=1 */;
  wire [22:0]  _floatCore_io_write_ports_1_data_mantissa/* synthesis syn_keep=1 */;
  wire [7:0]   _floatCore_io_write_ports_1_data_exponent/* synthesis syn_keep=1 */;
  wire         _floatCore_io_write_ports_1_data_sign/* synthesis syn_keep=1 */;
  wire         _floatCore_io_scalar_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_scalar_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _floatCore_io_scalar_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _floatCore_io_csr_in_fflags_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _floatCore_io_csr_in_fflags_bits/* synthesis syn_keep=1 */;
  wire         _fault_manager_io_out_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fault_manager_io_out_bits_mepc/* synthesis syn_keep=1 */;
  wire [31:0]  _fault_manager_io_out_bits_mtval/* synthesis syn_keep=1 */;
  wire [31:0]  _fault_manager_io_out_bits_mcause/* synthesis syn_keep=1 */;
  wire         _dvu_io_req_ready/* synthesis syn_keep=1 */;
  wire         _dvu_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dvu_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _dvu_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _mlu_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _mlu_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _mlu_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _lsu_io_req_0_ready/* synthesis syn_keep=1 */;
  wire         _lsu_io_req_1_ready/* synthesis syn_keep=1 */;
  wire         _lsu_io_req_2_ready/* synthesis syn_keep=1 */;
  wire         _lsu_io_req_3_ready/* synthesis syn_keep=1 */;
  wire         _lsu_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _lsu_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _lsu_io_rd_flt_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _lsu_io_rd_flt_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_rd_flt_bits_data/* synthesis syn_keep=1 */;
  wire         _lsu_io_ibus_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_ibus_addr/* synthesis syn_keep=1 */;
  wire         _lsu_io_dbus_valid/* synthesis syn_keep=1 */;
  wire         _lsu_io_dbus_write/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_dbus_addr/* synthesis syn_keep=1 */;
  wire [127:0] _lsu_io_dbus_wdata/* synthesis syn_keep=1 */;
  wire         _lsu_io_flush_valid/* synthesis syn_keep=1 */;
  wire         _lsu_io_flush_fencei/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_flush_pcNext/* synthesis syn_keep=1 */;
  wire         _lsu_io_fault_valid/* synthesis syn_keep=1 */;
  wire         _lsu_io_fault_bits_write/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_fault_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _lsu_io_fault_bits_epc/* synthesis syn_keep=1 */;
  wire [1:0]   _lsu_io_storeCount/* synthesis syn_keep=1 */;
  wire         _lsu_io_active/* synthesis syn_keep=1 */;
  wire         _bru_3_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _bru_3_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_3_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _bru_3_io_taken_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_3_io_taken_value/* synthesis syn_keep=1 */;
  wire         _bru_2_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _bru_2_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_2_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _bru_2_io_taken_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_2_io_taken_value/* synthesis syn_keep=1 */;
  wire         _bru_1_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _bru_1_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_1_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _bru_1_io_taken_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_1_io_taken_value/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_mode_valid/* synthesis syn_keep=1 */;
  wire [1:0]   _bru_0_io_csr_in_mode_bits/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_mcause_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_0_io_csr_in_mcause_bits/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_mepc_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_0_io_csr_in_mepc_bits/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_mtval_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_0_io_csr_in_mtval_bits/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_halt/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_fault/* synthesis syn_keep=1 */;
  wire         _bru_0_io_csr_in_wfi/* synthesis syn_keep=1 */;
  wire         _bru_0_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _bru_0_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_0_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _bru_0_io_taken_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _bru_0_io_taken_value/* synthesis syn_keep=1 */;
  wire         _bru_0_io_interlock/* synthesis syn_keep=1 */;
  wire         _alu_3_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _alu_3_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _alu_3_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _alu_2_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _alu_2_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _alu_2_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _alu_1_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _alu_1_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _alu_1_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _alu_0_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _alu_0_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _alu_0_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire         _dispatch_io_csrFault_0/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalFault_0/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalFault_1/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalFault_2/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalFault_3/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalrFault_0/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalrFault_1/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalrFault_2/* synthesis syn_keep=1 */;
  wire         _dispatch_io_jalrFault_3/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bxxFault_0/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bxxFault_1/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bxxFault_2/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bxxFault_3/* synthesis syn_keep=1 */;
  wire         _dispatch_io_undefFault_0/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bruTarget_0/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bruTarget_1/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bruTarget_2/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bruTarget_3/* synthesis syn_keep=1 */;
  wire         _dispatch_io_inst_0_ready/* synthesis syn_keep=1 */;
  wire         _dispatch_io_inst_1_ready/* synthesis syn_keep=1 */;
  wire         _dispatch_io_inst_2_ready/* synthesis syn_keep=1 */;
  wire         _dispatch_io_inst_3_ready/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Read_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs1Read_0_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Read_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs1Read_1_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Read_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs1Read_2_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Read_3_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs1Read_3_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Set_0_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs1Set_0_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Set_1_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs1Set_1_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Set_2_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs1Set_2_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs1Set_3_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs1Set_3_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Read_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs2Read_0_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Read_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs2Read_1_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Read_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs2Read_2_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Read_3_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rs2Read_3_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Set_0_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs2Set_0_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Set_1_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs2Set_1_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Set_2_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs2Set_2_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rs2Set_3_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_rs2Set_3_value/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rdMark_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rdMark_0_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rdMark_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rdMark_1_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rdMark_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rdMark_2_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rdMark_3_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rdMark_3_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_busRead_0_bypass/* synthesis syn_keep=1 */;
  wire         _dispatch_io_busRead_0_immen/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_busRead_0_immed/* synthesis syn_keep=1 */;
  wire         _dispatch_io_busRead_1_bypass/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_busRead_1_immed/* synthesis syn_keep=1 */;
  wire         _dispatch_io_busRead_2_bypass/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_busRead_2_immed/* synthesis syn_keep=1 */;
  wire         _dispatch_io_busRead_3_bypass/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_busRead_3_immed/* synthesis syn_keep=1 */;
  wire         _dispatch_io_rdMark_flt_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_rdMark_flt_addr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_alu_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_0_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_0_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_alu_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_1_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_1_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_alu_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_2_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_2_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_alu_3_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_3_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_alu_3_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_0_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_0_bits_fwd/* synthesis syn_keep=1 */;
  wire [3:0]   _dispatch_io_bru_0_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_0_bits_pc/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_0_bits_target/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_bru_0_bits_link/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_1_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_1_bits_fwd/* synthesis syn_keep=1 */;
  wire [3:0]   _dispatch_io_bru_1_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_1_bits_pc/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_1_bits_target/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_bru_1_bits_link/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_2_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_2_bits_fwd/* synthesis syn_keep=1 */;
  wire [3:0]   _dispatch_io_bru_2_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_2_bits_pc/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_2_bits_target/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_bru_2_bits_link/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_3_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_bru_3_bits_fwd/* synthesis syn_keep=1 */;
  wire [3:0]   _dispatch_io_bru_3_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_3_bits_pc/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_bru_3_bits_target/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_bru_3_bits_link/* synthesis syn_keep=1 */;
  wire         _dispatch_io_csr_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_csr_bits_addr/* synthesis syn_keep=1 */;
  wire [11:0]  _dispatch_io_csr_bits_index/* synthesis syn_keep=1 */;
  wire [1:0]   _dispatch_io_csr_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_0_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_0_bits_store/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_0_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_0_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_lsu_0_bits_pc/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_1_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_1_bits_store/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_1_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_1_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_lsu_1_bits_pc/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_2_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_2_bits_store/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_2_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_2_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_lsu_2_bits_pc/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_3_valid/* synthesis syn_keep=1 */;
  wire         _dispatch_io_lsu_3_bits_store/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_3_bits_addr/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_lsu_3_bits_op/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_lsu_3_bits_pc/* synthesis syn_keep=1 */;
  wire         _dispatch_io_mlu_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_mlu_0_bits_addr/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_mlu_0_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_mlu_1_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_mlu_1_bits_addr/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_mlu_1_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_mlu_2_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_mlu_2_bits_addr/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_mlu_2_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_mlu_3_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_mlu_3_bits_addr/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_mlu_3_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_dvu_0_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_dvu_0_bits_addr/* synthesis syn_keep=1 */;
  wire [1:0]   _dispatch_io_dvu_0_bits_op/* synthesis syn_keep=1 */;
  wire         _dispatch_io_float_valid/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_float_bits_opcode/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_float_bits_funct5/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_float_bits_rs3/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_float_bits_rs2/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_float_bits_rs1/* synthesis syn_keep=1 */;
  wire [2:0]   _dispatch_io_float_bits_rm/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_float_bits_inst/* synthesis syn_keep=1 */;
  wire [31:0]  _dispatch_io_float_bits_pc/* synthesis syn_keep=1 */;
  wire         _dispatch_io_float_bits_scalar_rd/* synthesis syn_keep=1 */;
  wire         _dispatch_io_float_bits_scalar_rs1/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_float_bits_rd/* synthesis syn_keep=1 */;
  wire         _dispatch_io_float_bits_uses_rs3/* synthesis syn_keep=1 */;
  wire         _dispatch_io_float_bits_uses_rs2/* synthesis syn_keep=1 */;
  wire [4:0]   _dispatch_io_fbusPortAddr/* synthesis syn_keep=1 */;
  wire         _dispatch_io_slog/* synthesis syn_keep=1 */;
  wire [31:0]  _csr_io_csr_out_value_4/* synthesis syn_keep=1 */;
  wire         _csr_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   _csr_io_rd_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _csr_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire [1:0]   _csr_io_bru_out_mode/* synthesis syn_keep=1 */;
  wire [31:0]  _csr_io_bru_out_mepc/* synthesis syn_keep=1 */;
  wire [31:0]  _csr_io_bru_out_mtvec/* synthesis syn_keep=1 */;
  wire [2:0]   _csr_io_float_out_frm/* synthesis syn_keep=1 */;
  wire         _csr_io_halted/* synthesis syn_keep=1 */;
  wire         _csr_io_wfi/* synthesis syn_keep=1 */;
  wire         _fetch_io_ibus_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_ibus_addr/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_0_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_0_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_0_bits_inst/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_0_bits_brchFwd/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_1_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_1_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_1_bits_inst/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_1_bits_brchFwd/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_2_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_2_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_2_bits_inst/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_2_bits_brchFwd/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_3_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_3_bits_addr/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_inst_lanes_3_bits_inst/* synthesis syn_keep=1 */;
  wire         _fetch_io_inst_lanes_3_bits_brchFwd/* synthesis syn_keep=1 */;
  wire [31:0]  _fetch_io_pc/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_target_0_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_target_1_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_target_2_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_target_3_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_addr_0/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_addr_1/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_addr_2/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_addr_3/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_data_0/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_data_1/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_data_2/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_busPort_data_3/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_0_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_0_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_1_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_1_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_2_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_2_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_3_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_3_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_4_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_4_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_5_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_5_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_6_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_6_data/* synthesis syn_keep=1 */;
  wire         _regfile_io_readData_7_valid/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_7_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_scoreboard_regd/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_scoreboard_comb/* synthesis syn_keep=1 */;
  wire [5:0]   _regfile_io_rfwriteCount/* synthesis syn_keep=1 */;
  wire         branchTaken =
    _bru_0_io_taken_valid | _bru_1_io_taken_valid | _bru_2_io_taken_valid
    | _bru_3_io_taken_valid/* synthesis syn_keep=1 */;
  wire         regfile_io_writeData_0_valid =
    _csr_io_rd_valid | _alu_0_io_rd_valid | _bru_0_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   regfile_io_writeData_0_bits_addr =
    (_csr_io_rd_valid ? _csr_io_rd_bits_addr : 5'h0)
    | (_alu_0_io_rd_valid ? _alu_0_io_rd_bits_addr : 5'h0)
    | (_bru_0_io_rd_valid ? _bru_0_io_rd_bits_addr : 5'h0)/* synthesis syn_keep=1 */;
  wire [31:0]  regfile_io_writeData_0_bits_data =
    (_csr_io_rd_valid ? _csr_io_rd_bits_data : 32'h0)
    | (_alu_0_io_rd_valid ? _alu_0_io_rd_bits_data : 32'h0)
    | (_bru_0_io_rd_valid ? _bru_0_io_rd_bits_data : 32'h0)/* synthesis syn_keep=1 */;
  wire         regfile_io_writeData_1_valid = _alu_1_io_rd_valid | _bru_1_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   regfile_io_writeData_1_bits_addr =
    (_alu_1_io_rd_valid ? _alu_1_io_rd_bits_addr : 5'h0)
    | (_bru_1_io_rd_valid ? _bru_1_io_rd_bits_addr : 5'h0)/* synthesis syn_keep=1 */;
  wire [31:0]  regfile_io_writeData_1_bits_data =
    (_alu_1_io_rd_valid ? _alu_1_io_rd_bits_data : 32'h0)
    | (_bru_1_io_rd_valid ? _bru_1_io_rd_bits_data : 32'h0)/* synthesis syn_keep=1 */;
  wire         regfile_io_writeData_2_valid = _alu_2_io_rd_valid | _bru_2_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   regfile_io_writeData_2_bits_addr =
    (_alu_2_io_rd_valid ? _alu_2_io_rd_bits_addr : 5'h0)
    | (_bru_2_io_rd_valid ? _bru_2_io_rd_bits_addr : 5'h0)/* synthesis syn_keep=1 */;
  wire [31:0]  regfile_io_writeData_2_bits_data =
    (_alu_2_io_rd_valid ? _alu_2_io_rd_bits_data : 32'h0)
    | (_bru_2_io_rd_valid ? _bru_2_io_rd_bits_data : 32'h0)/* synthesis syn_keep=1 */;
  wire         regfile_io_writeData_3_valid = _alu_3_io_rd_valid | _bru_3_io_rd_valid/* synthesis syn_keep=1 */;
  wire [4:0]   regfile_io_writeData_3_bits_addr =
    (_alu_3_io_rd_valid ? _alu_3_io_rd_bits_addr : 5'h0)
    | (_bru_3_io_rd_valid ? _bru_3_io_rd_bits_addr : 5'h0)/* synthesis syn_keep=1 */;
  wire [31:0]  regfile_io_writeData_3_bits_data =
    (_alu_3_io_rd_valid ? _alu_3_io_rd_bits_data : 32'h0)
    | (_bru_3_io_rd_valid ? _bru_3_io_rd_bits_data : 32'h0)/* synthesis syn_keep=1 */;
  wire         writeMask_2 = _bru_0_io_taken_valid | _bru_1_io_taken_valid/* synthesis syn_keep=1 */;
  reg          slogValid/* synthesis syn_keep=1 */;
  reg  [1:0]   slogAddr/* synthesis syn_keep=1 */;
  reg  [3:0]   debugEn/* synthesis syn_keep=1 */;
  reg  [31:0]  debugAddr_0/* synthesis syn_keep=1 */;
  reg  [31:0]  debugAddr_1/* synthesis syn_keep=1 */;
  reg  [31:0]  debugAddr_2/* synthesis syn_keep=1 */;
  reg  [31:0]  debugAddr_3/* synthesis syn_keep=1 */;
  reg  [31:0]  debugInst_0/* synthesis syn_keep=1 */;
  reg  [31:0]  debugInst_1/* synthesis syn_keep=1 */;
  reg  [31:0]  debugInst_2/* synthesis syn_keep=1 */;
  reg  [31:0]  debugInst_3/* synthesis syn_keep=1 */;
  wire         _debugBrch_T_1 = _bru_2_io_taken_valid | _bru_3_io_taken_valid/* synthesis syn_keep=1 */;

  // assign _regfile_io_target_0_data = {24'hDEADBE, o_pmod0};
  // assign _regfile_io_target_1_data = {24'h00C0DE, o_pmod0};
  // assign _regfile_io_target_2_data = {24'hFEEDFA, o_pmod0};
  // assign _regfile_io_target_3_data = {24'h1BADB0, o_pmod0};
  // assign _regfile_io_rfwriteCount = {24'hCAFE01, o_pmod0};

  /* synthesis syn_keep=1 */ Regfile regfile (
    .clock                    (sys_clk),
    .reset                    (sys_rst),
    .io_readAddr_0_valid      (_dispatch_io_rs1Read_0_valid),
    .io_readAddr_0_addr       (_dispatch_io_rs1Read_0_addr),
    .io_readAddr_1_valid      (_dispatch_io_rs2Read_0_valid),
    .io_readAddr_1_addr       (_dispatch_io_rs2Read_0_addr),
    .io_readAddr_2_valid      (_dispatch_io_rs1Read_1_valid),
    .io_readAddr_2_addr       (_dispatch_io_rs1Read_1_addr),
    .io_readAddr_3_valid      (_dispatch_io_rs2Read_1_valid),
    .io_readAddr_3_addr       (_dispatch_io_rs2Read_1_addr),
    .io_readAddr_4_valid      (_dispatch_io_rs1Read_2_valid),
    .io_readAddr_4_addr       (_dispatch_io_rs1Read_2_addr),
    .io_readAddr_5_valid      (_dispatch_io_rs2Read_2_valid),
    .io_readAddr_5_addr       (_dispatch_io_rs2Read_2_addr),
    .io_readAddr_6_valid      (_dispatch_io_rs1Read_3_valid),
    .io_readAddr_6_addr       (_dispatch_io_rs1Read_3_addr),
    .io_readAddr_7_valid      (_dispatch_io_rs2Read_3_valid),
    .io_readAddr_7_addr       (_dispatch_io_rs2Read_3_addr),
    .io_readSet_0_valid       (_dispatch_io_rs1Set_0_valid),
    .io_readSet_0_value       (_dispatch_io_rs1Set_0_value),
    .io_readSet_1_valid       (_dispatch_io_rs2Set_0_valid),
    .io_readSet_1_value       (_dispatch_io_rs2Set_0_value),
    .io_readSet_2_valid       (_dispatch_io_rs1Set_1_valid),
    .io_readSet_2_value       (_dispatch_io_rs1Set_1_value),
    .io_readSet_3_valid       (_dispatch_io_rs2Set_1_valid),
    .io_readSet_3_value       (_dispatch_io_rs2Set_1_value),
    .io_readSet_4_valid       (_dispatch_io_rs1Set_2_valid),
    .io_readSet_4_value       (_dispatch_io_rs1Set_2_value),
    .io_readSet_5_valid       (_dispatch_io_rs2Set_2_valid),
    .io_readSet_5_value       (_dispatch_io_rs2Set_2_value),
    .io_readSet_6_valid       (_dispatch_io_rs1Set_3_valid),
    .io_readSet_6_value       (_dispatch_io_rs1Set_3_value),
    .io_readSet_7_valid       (_dispatch_io_rs2Set_3_valid),
    .io_readSet_7_value       (_dispatch_io_rs2Set_3_value),
    .io_writeAddr_0_valid     (_dispatch_io_rdMark_0_valid),
    .io_writeAddr_0_addr      (_dispatch_io_rdMark_0_addr),
    .io_writeAddr_1_valid     (_dispatch_io_rdMark_1_valid),
    .io_writeAddr_1_addr      (_dispatch_io_rdMark_1_addr),
    .io_writeAddr_2_valid     (_dispatch_io_rdMark_2_valid),
    .io_writeAddr_2_addr      (_dispatch_io_rdMark_2_addr),
    .io_writeAddr_3_valid     (_dispatch_io_rdMark_3_valid),
    .io_writeAddr_3_addr      (_dispatch_io_rdMark_3_addr),
    .io_busAddr_0_bypass      (_dispatch_io_busRead_0_bypass),
    .io_busAddr_0_immen       (_dispatch_io_busRead_0_immen),
    .io_busAddr_0_immed       (_dispatch_io_busRead_0_immed),
    .io_busAddr_1_bypass      (_dispatch_io_busRead_1_bypass),
    .io_busAddr_1_immed       (_dispatch_io_busRead_1_immed),
    .io_busAddr_2_bypass      (_dispatch_io_busRead_2_bypass),
    .io_busAddr_2_immed       (_dispatch_io_busRead_2_immed),
    .io_busAddr_3_bypass      (_dispatch_io_busRead_3_bypass),
    .io_busAddr_3_immed       (_dispatch_io_busRead_3_immed),
    .io_target_0_data         (_regfile_io_target_0_data),
    .io_target_1_data         (_regfile_io_target_1_data),
    .io_target_2_data         (_regfile_io_target_2_data),
    .io_target_3_data         (_regfile_io_target_3_data),
    .io_busPort_addr_0        (_regfile_io_busPort_addr_0),
    .io_busPort_addr_1        (_regfile_io_busPort_addr_1),
    .io_busPort_addr_2        (_regfile_io_busPort_addr_2),
    .io_busPort_addr_3        (_regfile_io_busPort_addr_3),
    .io_busPort_data_0        (_regfile_io_busPort_data_0),
    .io_busPort_data_1        (_regfile_io_busPort_data_1),
    .io_busPort_data_2        (_regfile_io_busPort_data_2),
    .io_busPort_data_3        (_regfile_io_busPort_data_3),
    .io_readData_0_valid      (_regfile_io_readData_0_valid),
    .io_readData_0_data       (_regfile_io_readData_0_data),
    .io_readData_1_valid      (_regfile_io_readData_1_valid),
    .io_readData_1_data       (_regfile_io_readData_1_data),
    .io_readData_2_valid      (_regfile_io_readData_2_valid),
    .io_readData_2_data       (_regfile_io_readData_2_data),
    .io_readData_3_valid      (_regfile_io_readData_3_valid),
    .io_readData_3_data       (_regfile_io_readData_3_data),
    .io_readData_4_valid      (_regfile_io_readData_4_valid),
    .io_readData_4_data       (_regfile_io_readData_4_data),
    .io_readData_5_valid      (_regfile_io_readData_5_valid),
    .io_readData_5_data       (_regfile_io_readData_5_data),
    .io_readData_6_valid      (_regfile_io_readData_6_valid),
    .io_readData_6_data       (_regfile_io_readData_6_data),
    .io_readData_7_valid      (_regfile_io_readData_7_valid),
    .io_readData_7_data       (_regfile_io_readData_7_data),
    .io_writeData_0_valid     (regfile_io_writeData_0_valid),
    .io_writeData_0_bits_addr (regfile_io_writeData_0_bits_addr),
    .io_writeData_0_bits_data (regfile_io_writeData_0_bits_data),
    .io_writeData_1_valid     (regfile_io_writeData_1_valid),
    .io_writeData_1_bits_addr (regfile_io_writeData_1_bits_addr),
    .io_writeData_1_bits_data (regfile_io_writeData_1_bits_data),
    .io_writeData_2_valid     (regfile_io_writeData_2_valid),
    .io_writeData_2_bits_addr (regfile_io_writeData_2_bits_addr),
    .io_writeData_2_bits_data (regfile_io_writeData_2_bits_data),
    .io_writeData_3_valid     (regfile_io_writeData_3_valid),
    .io_writeData_3_bits_addr (regfile_io_writeData_3_bits_addr),
    .io_writeData_3_bits_data (regfile_io_writeData_3_bits_data),
    .io_writeData_4_valid     (_arb_io_out_valid),
    .io_writeData_4_bits_addr (_arb_io_out_bits_addr),
    .io_writeData_4_bits_data (_arb_io_out_bits_data),
    .io_writeData_5_valid     (_lsu_io_rd_valid),
    .io_writeData_5_bits_addr (_lsu_io_rd_bits_addr),
    .io_writeData_5_bits_data (_lsu_io_rd_bits_data),
    .io_writeMask_1_valid     (_bru_0_io_taken_valid),
    .io_writeMask_2_valid     (writeMask_2),
    .io_writeMask_3_valid     (writeMask_2 | _bru_2_io_taken_valid),
    .io_scoreboard_regd       (_regfile_io_scoreboard_regd),
    .io_scoreboard_comb       (_regfile_io_scoreboard_comb),
    .io_rfwriteCount          (_regfile_io_rfwriteCount)
  ) /* synthesis syn_keep=1 */;

  /* synthesis syn_keep=1 */ UncachedFetch fetch (
    .clock                        (sys_clk),
    .reset                        (sys_rst),
    .io_csr_value_0               (io_csr_in_value_0),
    .io_ibus_valid                (_fetch_io_ibus_valid),
    .io_ibus_ready                (~_lsu_io_ibus_valid),
    .io_ibus_addr                 (_fetch_io_ibus_addr),
    .io_ibus_rdata                (io_ibus_rdata),
    .io_inst_lanes_0_ready        (_dispatch_io_inst_0_ready),
    .io_inst_lanes_0_valid        (_fetch_io_inst_lanes_0_valid),
    .io_inst_lanes_0_bits_addr    (_fetch_io_inst_lanes_0_bits_addr),
    .io_inst_lanes_0_bits_inst    (_fetch_io_inst_lanes_0_bits_inst),
    .io_inst_lanes_0_bits_brchFwd (_fetch_io_inst_lanes_0_bits_brchFwd),
    .io_inst_lanes_1_ready        (_dispatch_io_inst_1_ready),
    .io_inst_lanes_1_valid        (_fetch_io_inst_lanes_1_valid),
    .io_inst_lanes_1_bits_addr    (_fetch_io_inst_lanes_1_bits_addr),
    .io_inst_lanes_1_bits_inst    (_fetch_io_inst_lanes_1_bits_inst),
    .io_inst_lanes_1_bits_brchFwd (_fetch_io_inst_lanes_1_bits_brchFwd),
    .io_inst_lanes_2_ready        (_dispatch_io_inst_2_ready),
    .io_inst_lanes_2_valid        (_fetch_io_inst_lanes_2_valid),
    .io_inst_lanes_2_bits_addr    (_fetch_io_inst_lanes_2_bits_addr),
    .io_inst_lanes_2_bits_inst    (_fetch_io_inst_lanes_2_bits_inst),
    .io_inst_lanes_2_bits_brchFwd (_fetch_io_inst_lanes_2_bits_brchFwd),
    .io_inst_lanes_3_ready        (_dispatch_io_inst_3_ready),
    .io_inst_lanes_3_valid        (_fetch_io_inst_lanes_3_valid),
    .io_inst_lanes_3_bits_addr    (_fetch_io_inst_lanes_3_bits_addr),
    .io_inst_lanes_3_bits_inst    (_fetch_io_inst_lanes_3_bits_inst),
    .io_inst_lanes_3_bits_brchFwd (_fetch_io_inst_lanes_3_bits_brchFwd),
    .io_branch_0_valid            (_bru_0_io_taken_valid),
    .io_branch_0_value            (_bru_0_io_taken_value),
    .io_branch_1_valid            (_bru_1_io_taken_valid),
    .io_branch_1_value            (_bru_1_io_taken_value),
    .io_branch_2_valid            (_bru_2_io_taken_valid),
    .io_branch_2_value            (_bru_2_io_taken_value),
    .io_branch_3_valid            (_bru_3_io_taken_valid),
    .io_branch_3_value            (_bru_3_io_taken_value),
    .io_iflush_valid              (_lsu_io_flush_valid & _lsu_io_flush_fencei),
    .io_iflush_pcNext             (_lsu_io_flush_pcNext),
    .io_pc                        (_fetch_io_pc)
  ) /* synthesis syn_keep=1 */;

  assign _dispatch_io_alu_0_valid = global_en_0;
  assign _dispatch_io_alu_0_bits_addr = o_pmod0[4:0];
  assign _dispatch_io_alu_0_bits_op = {s0, s0, s1, s1, s2};
  assign _dispatch_io_alu_0_bits_addr = ~o_pmod0[4:0];
  /* synthesis syn_keep=1 */ Alu alu_0 (
    .clock            (sys_clk),
    .reset            (sys_rst),
    .io_req_valid     (_dispatch_io_alu_0_valid),
    .io_req_bits_addr (_dispatch_io_alu_0_bits_addr),
    .io_req_bits_op   (_dispatch_io_alu_0_bits_op),
    .io_rs1_valid     (_regfile_io_readData_0_valid),
    .io_rs1_data      (_regfile_io_readData_0_data),
    .io_rs2_valid     (_regfile_io_readData_1_valid),
    .io_rs2_data      (_regfile_io_readData_1_data),
    .io_rd_valid      (_alu_0_io_rd_valid),
    .io_rd_bits_addr  (_alu_0_io_rd_bits_addr),
    .io_rd_bits_data  (_alu_0_io_rd_bits_data)
  ) /* synthesis syn_keep=1 */;
  assign _dispatch_io_alu_1_valid = global_en_0;
  assign _dispatch_io_alu_1_bits_addr = o_pmod0[4:0];
  assign _dispatch_io_alu_1_bits_op = {s0, s0, s1, s1, s2};
  /* synthesis syn_keep=1 */ Alu alu_1 (
    .clock            (sys_clk),
    .reset            (sys_rst),
    .io_req_valid     (_dispatch_io_alu_1_valid),
    .io_req_bits_addr (_dispatch_io_alu_1_bits_addr),
    .io_req_bits_op   (_dispatch_io_alu_1_bits_op),
    .io_rs1_valid     (_regfile_io_readData_2_valid),
    .io_rs1_data      (_regfile_io_readData_2_data),
    .io_rs2_valid     (_regfile_io_readData_3_valid),
    .io_rs2_data      (_regfile_io_readData_3_data),
    .io_rd_valid      (_alu_1_io_rd_valid),
    .io_rd_bits_addr  (_alu_1_io_rd_bits_addr),
    .io_rd_bits_data  (_alu_1_io_rd_bits_data)
  )/* synthesis syn_keep=1 */;
  assign _dispatch_io_alu_2_valid = global_en_0;
  assign _dispatch_io_alu_2_bits_addr = o_pmod0[4:0];
  assign _dispatch_io_alu_2_bits_op = {s0, s0, s1, s1, s2};
  /* synthesis syn_keep=1 */ Alu alu_2 (
    .clock            (sys_clk),
    .reset            (sys_rst),
    .io_req_valid     (_dispatch_io_alu_2_valid),
    .io_req_bits_addr (_dispatch_io_alu_2_bits_addr),
    .io_req_bits_op   (_dispatch_io_alu_2_bits_op),
    .io_rs1_valid     (_regfile_io_readData_4_valid),
    .io_rs1_data      (_regfile_io_readData_4_data),
    .io_rs2_valid     (_regfile_io_readData_5_valid),
    .io_rs2_data      (_regfile_io_readData_5_data),
    .io_rd_valid      (_alu_2_io_rd_valid),
    .io_rd_bits_addr  (_alu_2_io_rd_bits_addr),
    .io_rd_bits_data  (_alu_2_io_rd_bits_data)
  )/* synthesis syn_keep=1 */;
  assign _dispatch_io_alu_3_valid = global_en_0;
  assign _dispatch_io_alu_3_bits_addr = o_pmod0[4:0];
  assign _dispatch_io_alu_3_bits_op = {s0, s0, s1, s1, s2};
  /* synthesis syn_keep=1 */Alu alu_3 (
    .clock            (sys_clk),
    .reset            (sys_rst),
    .io_req_valid     (_dispatch_io_alu_3_valid),
    .io_req_bits_addr (_dispatch_io_alu_3_bits_addr),
    .io_req_bits_op   (_dispatch_io_alu_3_bits_op),
    .io_rs1_valid     (_regfile_io_readData_6_valid),
    .io_rs1_data      (_regfile_io_readData_6_data),
    .io_rs2_valid     (_regfile_io_readData_7_valid),
    .io_rs2_data      (_regfile_io_readData_7_data),
    .io_rd_valid      (_alu_3_io_rd_valid),
    .io_rd_bits_addr  (_alu_3_io_rd_bits_addr),
    .io_rd_bits_data  (_alu_3_io_rd_bits_data)
  )/* synthesis syn_keep=1 */;

  assign _dispatch_io_bru_0_valid = global_en_0;
  assign _dispatch_io_bru_0_bits_fwd = o_pmod0[7];
  assign _dispatch_io_bru_0_bits_op = o_pmod0[3:0];
  assign _dispatch_io_bru_0_bits_pc = o_pmod0[7:0];
  assign _dispatch_io_bru_0_bits_target = o_pmod0[7:0];
  assign _dispatch_io_bru_0_bits_link = o_pmod0[4:0];
  /* synthesis syn_keep=1 */Bru bru_0 (
    .clock                        (sys_clk),
    .reset                        (sys_rst),
    .io_req_valid                 (_dispatch_io_bru_0_valid),
    .io_req_bits_fwd              (_dispatch_io_bru_0_bits_fwd),
    .io_req_bits_op               (_dispatch_io_bru_0_bits_op),
    .io_req_bits_pc               (_dispatch_io_bru_0_bits_pc),
    .io_req_bits_target           (_dispatch_io_bru_0_bits_target),
    .io_req_bits_link             (_dispatch_io_bru_0_bits_link),
    .io_csr_in_mode_valid         (_bru_0_io_csr_in_mode_valid),
    .io_csr_in_mode_bits          (_bru_0_io_csr_in_mode_bits),
    .io_csr_in_mcause_valid       (_bru_0_io_csr_in_mcause_valid),
    .io_csr_in_mcause_bits        (_bru_0_io_csr_in_mcause_bits),
    .io_csr_in_mepc_valid         (_bru_0_io_csr_in_mepc_valid),
    .io_csr_in_mepc_bits          (_bru_0_io_csr_in_mepc_bits),
    .io_csr_in_mtval_valid        (_bru_0_io_csr_in_mtval_valid),
    .io_csr_in_mtval_bits         (_bru_0_io_csr_in_mtval_bits),
    .io_csr_in_halt               (_bru_0_io_csr_in_halt),
    .io_csr_in_fault              (_bru_0_io_csr_in_fault),
    .io_csr_in_wfi                (_bru_0_io_csr_in_wfi),
    .io_csr_out_mode              (_csr_io_bru_out_mode),
    .io_csr_out_mepc              (_csr_io_bru_out_mepc),
    .io_csr_out_mtvec             (_csr_io_bru_out_mtvec),
    .io_rs1_valid                 (_regfile_io_readData_0_valid),
    .io_rs1_data                  (_regfile_io_readData_0_data),
    .io_rs2_valid                 (_regfile_io_readData_1_valid),
    .io_rs2_data                  (_regfile_io_readData_1_data),
    .io_rd_valid                  (_bru_0_io_rd_valid),
    .io_rd_bits_addr              (_bru_0_io_rd_bits_addr),
    .io_rd_bits_data              (_bru_0_io_rd_bits_data),
    .io_taken_valid               (_bru_0_io_taken_valid),
    .io_taken_value               (_bru_0_io_taken_value),
    .io_target_data               (_regfile_io_target_0_data),
    .io_interlock                 (_bru_0_io_interlock),
    .io_fault_manager_valid       (_fault_manager_io_out_valid),
    .io_fault_manager_bits_mepc   (_fault_manager_io_out_bits_mepc),
    .io_fault_manager_bits_mtval  (_fault_manager_io_out_bits_mtval),
    .io_fault_manager_bits_mcause (_fault_manager_io_out_bits_mcause)
  )/* synthesis syn_keep=1 */;
  wire bru0_output = |_regfile_io_target_0_data/* synthesis syn_keep=1 */;
  
  assign _dispatch_io_bru_1_valid = global_en_0;
  assign _dispatch_io_bru_1_bits_fwd = o_pmod0[7];
  assign _dispatch_io_bru_1_bits_op = o_pmod0[3:0];
  assign _dispatch_io_bru_1_bits_pc = o_pmod0[7:0];
  assign _dispatch_io_bru_1_bits_target = o_pmod0[7:0];
  assign _dispatch_io_bru_1_bits_link = o_pmod0[4:0];
  /* synthesis syn_keep=1 */Bru_1 bru_1 (
    .clock              (sys_clk),
    .reset              (sys_rst),
    .io_req_valid       (_dispatch_io_bru_1_valid),
    .io_req_bits_fwd    (_dispatch_io_bru_1_bits_fwd),
    .io_req_bits_op     (_dispatch_io_bru_1_bits_op),
    .io_req_bits_pc     (_dispatch_io_bru_1_bits_pc),
    .io_req_bits_target (_dispatch_io_bru_1_bits_target),
    .io_req_bits_link   (_dispatch_io_bru_1_bits_link),
    .io_rs1_valid       (_regfile_io_readData_2_valid),
    .io_rs1_data        (_regfile_io_readData_2_data),
    .io_rs2_valid       (_regfile_io_readData_3_valid),
    .io_rs2_data        (_regfile_io_readData_3_data),
    .io_rd_valid        (_bru_1_io_rd_valid),
    .io_rd_bits_addr    (_bru_1_io_rd_bits_addr),
    .io_rd_bits_data    (_bru_1_io_rd_bits_data),
    .io_taken_valid     (_bru_1_io_taken_valid),
    .io_taken_value     (_bru_1_io_taken_value),
    .io_target_data     (_regfile_io_target_1_data)
  )/* synthesis syn_keep=1 */;
  wire bru1_output = |_regfile_io_target_2_data/* synthesis syn_keep=1 */;
  
  assign _dispatch_io_bru_2_valid = global_en_0;
  assign _dispatch_io_bru_2_bits_fwd = o_pmod0[7];
  assign _dispatch_io_bru_2_bits_op = o_pmod0[3:0];
  assign _dispatch_io_bru_2_bits_pc = o_pmod0[7:0];
  assign _dispatch_io_bru_2_bits_target = o_pmod0[7:0];
  assign _dispatch_io_bru_2_bits_link = o_pmod0[4:0];
  /* synthesis syn_keep=1 */Bru_1 bru_2 (
    .clock              (sys_clk),
    .reset              (sys_rst),
    .io_req_valid       (_dispatch_io_bru_2_valid),
    .io_req_bits_fwd    (_dispatch_io_bru_2_bits_fwd),
    .io_req_bits_op     (_dispatch_io_bru_2_bits_op),
    .io_req_bits_pc     (_dispatch_io_bru_2_bits_pc),
    .io_req_bits_target (_dispatch_io_bru_2_bits_target),
    .io_req_bits_link   (_dispatch_io_bru_2_bits_link),
    .io_rs1_valid       (_regfile_io_readData_4_valid),
    .io_rs1_data        (_regfile_io_readData_4_data),
    .io_rs2_valid       (_regfile_io_readData_5_valid),
    .io_rs2_data        (_regfile_io_readData_5_data),
    .io_rd_valid        (_bru_2_io_rd_valid),
    .io_rd_bits_addr    (_bru_2_io_rd_bits_addr),
    .io_rd_bits_data    (_bru_2_io_rd_bits_data),
    .io_taken_valid     (_bru_2_io_taken_valid),
    .io_taken_value     (_bru_2_io_taken_value),
    .io_target_data     (_regfile_io_target_2_data)
  )/* synthesis syn_keep=1 */;
  assign _dispatch_io_bru_3_valid = global_en_0;
  assign _dispatch_io_bru_3_bits_fwd = o_pmod0[7];
  assign _dispatch_io_bru_3_bits_op = o_pmod0[3:0];
  assign _dispatch_io_bru_3_bits_pc = o_pmod0[7:0];
  assign _dispatch_io_bru_3_bits_target = o_pmod0[7:0];
  assign _dispatch_io_bru_3_bits_link = o_pmod0[4:0];
  
  wire bru2_output = |_regfile_io_target_2_data/* synthesis syn_keep=1 */;
  /* synthesis syn_keep=1 */Bru_1 bru_3 (
    .clock              (sys_clk),
    .reset              (sys_rst),
    .io_req_valid       (_dispatch_io_bru_3_valid),
    .io_req_bits_fwd    (_dispatch_io_bru_3_bits_fwd),
    .io_req_bits_op     (_dispatch_io_bru_3_bits_op),
    .io_req_bits_pc     (_dispatch_io_bru_3_bits_pc),
    .io_req_bits_target (_dispatch_io_bru_3_bits_target),
    .io_req_bits_link   (_dispatch_io_bru_3_bits_link),
    .io_rs1_valid       (_regfile_io_readData_6_valid),
    .io_rs1_data        (_regfile_io_readData_6_data),
    .io_rs2_valid       (_regfile_io_readData_7_valid),
    .io_rs2_data        (_regfile_io_readData_7_data),
    .io_rd_valid        (_bru_3_io_rd_valid),
    .io_rd_bits_addr    (_bru_3_io_rd_bits_addr),
    .io_rd_bits_data    (_bru_3_io_rd_bits_data),
    .io_taken_valid     (_bru_3_io_taken_valid),
    .io_taken_value     (_bru_3_io_taken_value),
    .io_target_data     (_regfile_io_target_3_data)
  )/* synthesis syn_keep=1 */;
  wire bru3_output = |_regfile_io_target_3_data/* synthesis syn_keep=1 */;

 // =========================================================================
 // --- FINAL OUTPUT ASSIGNMENT ---------------------------------------------
 // =========================================================================

  wire [31:0]  _alu_io_rd_bits_data/* synthesis syn_keep=1 */;
  wire [31:0]  _regfile_io_readData_data/* synthesis syn_keep=1 */;
  wire bru_output = (bru0_output)&(bru1_output)&(bru1_output)&(bru2_output) /* synthesis syn_keep=1 */;
  assign _alu_io_rd_bits_data = 
                                (_alu_0_io_rd_bits_data)&
                                (_alu_1_io_rd_bits_data)&
                                (_alu_2_io_rd_bits_data)&
                                (_alu_3_io_rd_bits_data);
  assign _regfile_io_readData_data = 
                                      (_regfile_io_readData_0_data)&
                                      (_regfile_io_readData_1_data)&
                                      (_regfile_io_readData_2_data)&
                                      (_regfile_io_readData_3_data)&
                                      (_regfile_io_readData_4_data)&
                                      (_regfile_io_readData_5_data)&
                                      (_regfile_io_readData_6_data);

 // Use a combination of CoreMini outputs and global_en to drive o_pmod1
 // to ensure the CoreMini logic is preserved during synthesis.

 // o_pmod1[0]: Regfile Target 0 LSB
 assign o_pmod1[0] = ((|_regfile_io_target_0_data)&(|_fetch_io_ibus_valid)&(_alu_0_io_rd_bits_data)) ^ (global_en_1);
 // o_pmod1[1]: Regfile Target 1 LSB
 assign o_pmod1[1] = ((|_regfile_io_target_1_data)&(|_fetch_io_inst_lanes_0_valid)&(_regfile_io_readData_data)) ^ (global_en_2);
 // o_pmod1[2]: Regfile Target 2 LSB
 assign o_pmod1[2] = ((|_regfile_io_target_2_data)&(|_fetch_io_pc)&(bru_output)) ^ global_en_3;
 // o_pmod1[3]: Regfile Target 3 LSB
 assign o_pmod1[3] = ((|_regfile_io_target_3_data)&(|_fetch_io_inst_lanes_0_bits_brchFwd)) ^ (global_en_4);
 // o_pmod1[4]: Regfile Write Count LSB
 assign o_pmod1[4] = ((|_regfile_io_rfwriteCount )&(|_fetch_io_ibus_addr)) ^ (global_en_5);
 // o_pmod1[5]: Regfile Target 0 bits [2:1]
 assign o_pmod1[5] = ((|_regfile_io_target_0_data)&(|_fetch_io_inst_lanes_1_valid)) ^ (_regfile_io_target_0_data[2]) ^ (global_en_6);
 // o_pmod1[6]: Regfile Target 1 bits [2:1]
 assign o_pmod1[6] = ((|_regfile_io_target_1_data)&(|_fetch_io_inst_lanes_3_valid)) ^ (_regfile_io_target_1_data[2]) ^ (global_en_7);
 // o_pmod1[7]: Mix of Regfile Write Count and original input o_pmod0
 assign o_pmod1[7] = ((|_regfile_io_rfwriteCount )&(|_fetch_io_pc)) ^ (o_pmod0[7]) ^ (global_en_0);
 // UART outputs tied off as unused in this minimal test
 assign uart_tx_o = 2'b0;

endmodule