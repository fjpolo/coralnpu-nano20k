// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`define SYNTHESIS

// Assuming prim_mubi_pkg and Gowin_PLL are available globally or included elsewhere.
import prim_mubi_pkg::*;

module chip_console60k_CoreMiniAxi(
      // System
      input  logic sys_clk,     // 27 MHz
      input  logic s0,          // Used global_en
      input  logic s1,          // Used global_en
      input  logic s2,          // Used global_en (System Reset Source / Write Enable)
      // UART
      output wire [1:0] uart_tx_o,
      input  wire [1:0] uart_rx_i, // WARN (CV0016): This input is currently unused
      // PMODs (Used for Spi2TLUL Test Path)
      input [7:0] o_pmod0,     // Used as Address and Write Data / SPI Control
      output [7:0] o_pmod1      // Final Output: Driven by XOR chain from Spi2TLUL outputs
      );

  parameter ClockFrequency_81MHz = 81 /* synthesis syn_keep=1 */;

  // sys_rst is high-active reset
  wire sys_rst = s2 /* synthesis syn_keep=1 */;

  logic clk_81MHz /* synthesis syn_keep=1 */;       // PLL output clock
  
  // PLL Instantiation (Clock generation - Gowin_PLL must be defined externally)
  // FIX: Explicitly tie undriven input 'mdclk' low to clear WARN (EX2565).
  Gowin_PLL gowinPLL81MHz(
      .clkout0(clk_81MHz), //output clkout
      .clkin(sys_clk),       //input clkin
      .mdclk(1'b0)         // Tied low to resolve undriven input warning
    ) /* synthesis syn_keep=1 */;
  
  // =========================================================================
  // --- GLOBAL ENABLE SIGNALS -----------------------------------------------
  // =========================================================================
  // These signals are used to generate the AXI control strobes
  wire global_en_0 = (~s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_1 = (~s2)&(~s1)&(s0)  /* synthesis syn_keep=1 */;
  wire global_en_2 = (~s2)&(s1)&(~s0)  /* synthesis syn_keep=1 */;
  wire global_en_3 = (~s2)&(s1)&(s0)   /* synthesis syn_keep=1 */;
  wire global_en_4 = (s2)&(~s1)&(~s0)  /* synthesis syn_keep=1 */; // s2 high: potential write enable
  wire global_en_5 = (s2)&(~s1)&(s0)   /* synthesis syn_keep=1 */;
  wire global_en_6 = (s2)&(s1)&(~s0)   /* synthesis syn_keep=1 */;
  wire global_en_7 = (s2)&(s1)&(s0)    /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- CoreMiniAxi INTERFACE WIRES -----------------------------------------
  // =========================================================================
  
  // --- AXI Slave Channel Wires (o_pmod0 driven) ---
  wire axi_slave_write_addr_ready /* synthesis syn_keep=1 */;
  wire axi_slave_write_data_ready /* synthesis syn_keep=1 */;
  wire axi_slave_write_resp_valid /* synthesis syn_keep=1 */;
  wire [5:0] axi_slave_write_resp_bits_id /* synthesis syn_keep=1 */;
  wire [1:0] axi_slave_write_resp_bits_resp /* synthesis syn_keep=1 */;
  wire axi_slave_read_addr_ready /* synthesis syn_keep=1 */;
  wire axi_slave_read_data_valid /* synthesis syn_keep=1 */;
  wire [127:0] axi_slave_read_data_bits_data /* synthesis syn_keep=1 */;
  wire [5:0] axi_slave_read_data_bits_id /* synthesis syn_keep=1 */;
  wire [1:0] axi_slave_read_data_bits_resp /* synthesis syn_keep=1 */;
  wire axi_slave_read_data_bits_last /* synthesis syn_keep=1 */;

  // --- AXI Master Channel Wires (Outputs tied low, Inputs tied high/low) ---
  wire axi_master_write_addr_valid /* synthesis syn_keep=1 */;
  wire [31:0] axi_master_write_addr_bits_addr /* synthesis syn_keep=1 */;
  wire [2:0] axi_master_write_addr_bits_prot /* synthesis syn_keep=1 */;
  wire [5:0] axi_master_write_addr_bits_id /* synthesis syn_keep=1 */;
  wire [7:0] axi_master_write_addr_bits_len /* synthesis syn_keep=1 */;
  wire [2:0] axi_master_write_addr_bits_size /* synthesis syn_keep=1 */;
  wire [1:0] axi_master_write_addr_bits_burst /* synthesis syn_keep=1 */;
  wire axi_master_write_addr_bits_lock /* synthesis syn_keep=1 */;
  wire [3:0] axi_master_write_addr_bits_cache /* synthesis syn_keep=1 */;
  wire [0:0] axi_master_write_addr_bits_qos /* synthesis syn_keep=1 */;
  wire [3:0] axi_master_write_addr_bits_region /* synthesis syn_keep=1 */;
  wire axi_master_write_data_valid /* synthesis syn_keep=1 */;
  wire [127:0] axi_master_write_data_bits_data /* synthesis syn_keep=1 */;
  wire axi_master_write_data_bits_last /* synthesis syn_keep=1 */;
  wire [15:0] axi_master_write_data_bits_strb /* synthesis syn_keep=1 */;
  wire axi_master_write_resp_ready /* synthesis syn_keep=1 */;
  wire axi_master_read_addr_valid /* synthesis syn_keep=1 */;
  wire [31:0] axi_master_read_addr_bits_addr /* synthesis syn_keep=1 */;
  wire [2:0] axi_master_read_addr_bits_prot /* synthesis syn_keep=1 */;
  wire [5:0] axi_master_read_addr_bits_id /* synthesis syn_keep=1 */;
  wire [7:0] axi_master_read_addr_bits_len /* synthesis syn_keep=1 */;
  wire [2:0] axi_master_read_addr_bits_size /* synthesis syn_keep=1 */;
  wire [1:0] axi_master_read_addr_bits_burst /* synthesis syn_keep=1 */;
  wire axi_master_read_addr_bits_lock /* synthesis syn_keep=1 */;
  wire [3:0] axi_master_read_addr_bits_cache /* synthesis syn_keep=1 */;
  wire [0:0] axi_master_read_addr_bits_qos /* synthesis syn_keep=1 */;
  wire [3:0] axi_master_read_addr_bits_region /* synthesis syn_keep=1 */;
  wire axi_master_read_data_ready /* synthesis syn_keep=1 */;

  // --- Status/Control Wires ---
  wire core_halted /* synthesis syn_keep=1 */;
  wire core_fault /* synthesis syn_keep=1 */;
  wire core_wfi /* synthesis syn_keep=1 */;
  wire core_irq_in = 1'b0 /* synthesis syn_keep=1 */; // Tied low as input
  wire core_te_in = 1'b0 /* synthesis syn_keep=1 */; // Tied low as input

  // --- Debug Wires (Unused outputs, but must be declared) ---
  wire [3:0] debug_en /* synthesis syn_keep=1 */;
  wire [31:0] debug_addr_0 /* synthesis syn_keep=1 */;
  wire [31:0] debug_addr_1 /* synthesis syn_keep=1 */;
  wire [31:0] debug_addr_2 /* synthesis syn_keep=1 */;
  wire [31:0] debug_addr_3 /* synthesis syn_keep=1 */;
  wire [31:0] debug_inst_0 /* synthesis syn_keep=1 */;
  wire [31:0] debug_inst_1 /* synthesis syn_keep=1 */;
  wire [31:0] debug_inst_2 /* synthesis syn_keep=1 */;
  wire [31:0] debug_inst_3 /* synthesis syn_keep=1 */;
  wire [31:0] debug_cycles /* synthesis syn_keep=1 */;
  wire debug_dbus_valid /* synthesis syn_keep=1 */;
  wire [31:0] debug_dbus_bits_addr /* synthesis syn_keep=1 */;
  wire [127:0] debug_dbus_bits_wdata /* synthesis syn_keep=1 */;
  wire debug_dbus_bits_write /* synthesis syn_keep=1 */;
  wire debug_dispatch_0_instFire /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_0_instAddr /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_0_instInst /* synthesis syn_keep=1 */;
  wire debug_dispatch_1_instFire /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_1_instAddr /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_1_instInst /* synthesis syn_keep=1 */;
  wire debug_dispatch_2_instFire /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_2_instAddr /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_2_instInst /* synthesis syn_keep=1 */;
  wire debug_dispatch_3_instFire /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_3_instAddr /* synthesis syn_keep=1 */;
  wire [31:0] debug_dispatch_3_instInst /* synthesis syn_keep=1 */;
  wire debug_regfile_writeAddr_0_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeAddr_0_bits /* synthesis syn_keep=1 */;
  wire debug_regfile_writeAddr_1_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeAddr_1_bits /* synthesis syn_keep=1 */;
  wire debug_regfile_writeAddr_2_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeAddr_2_bits /* synthesis syn_keep=1 */;
  wire debug_regfile_writeAddr_3_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeAddr_3_bits /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_0_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_0_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_0_bits_data /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_1_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_1_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_1_bits_data /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_2_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_2_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_2_bits_data /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_3_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_3_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_3_bits_data /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_4_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_4_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_4_bits_data /* synthesis syn_keep=1 */;
  wire debug_regfile_writeData_5_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_regfile_writeData_5_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_regfile_writeData_5_bits_data /* synthesis syn_keep=1 */;
  wire debug_float_writeAddr_valid /* synthesis syn_keep=1 */;
  wire [4:0] debug_float_writeAddr_bits /* synthesis syn_keep=1 */;
  wire debug_float_writeData_0_valid /* synthesis syn_keep=1 */;
  wire [31:0] debug_float_writeData_0_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_float_writeData_0_bits_data /* synthesis syn_keep=1 */;
  wire debug_float_writeData_1_valid /* synthesis syn_keep=1 */;
  wire [31:0] debug_float_writeData_1_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0] debug_float_writeData_1_bits_data /* synthesis syn_keep=1 */;
  wire slog_valid /* synthesis syn_keep=1 */;
  wire [4:0] slog_addr /* synthesis syn_keep=1 */;
  wire [31:0] slog_data /* synthesis syn_keep=1 */;
  
  // =========================================================================
  // --- AXI SLAVE DRIVER LOGIC (PMOD Mapping) -------------------------------
  // =========================================================================
  
  // AXI Slave Write Address (AW) Channel Inputs
  assign io_axi_slave_write_addr_valid        = global_en_4; // s2 high for write request
  assign io_axi_slave_write_addr_bits_addr    = {24'h0, o_pmod0};
  assign io_axi_slave_write_addr_bits_prot    = 3'b000;
  assign io_axi_slave_write_addr_bits_id      = 6'h0;
  assign io_axi_slave_write_addr_bits_len     = 8'h0; // Single burst
  assign io_axi_slave_write_addr_bits_size    = 3'h4; // 128-bit beat (2^4=16 bytes, but AXI-4 uses size=3 for 8 bytes, size=4 for 16 bytes)
  assign io_axi_slave_write_addr_bits_burst   = 2'b01; // INCR
  assign io_axi_slave_write_addr_bits_lock    = 1'b0;
  assign io_axi_slave_write_addr_bits_cache   = 4'h0;
  assign io_axi_slave_write_addr_bits_qos     = 4'h0;
  assign io_axi_slave_write_addr_bits_region  = 4'h0;

  // AXI Slave Write Data (W) Channel Inputs
  assign io_axi_slave_write_data_valid        = global_en_4; // Same as AWVALID for single beat
  assign io_axi_slave_write_data_bits_data    = {120'h0, o_pmod0}; // Write data LSB 8 bits
  assign io_axi_slave_write_data_bits_last    = 1'b1; // Always last beat
  assign io_axi_slave_write_data_bits_strb    = 16'h00FF; // Only enable the LSB 8 bits (byte 0)

  // AXI Slave Write Response (B) Channel Inputs
  assign io_axi_slave_write_resp_ready        = 1'b1; // Always ready to receive response

  // AXI Slave Read Address (AR) Channel Inputs
  assign io_axi_slave_read_addr_valid         = global_en_0 | global_en_1 | global_en_2 | global_en_3; // s2 low for read request
  assign io_axi_slave_read_addr_bits_addr     = {24'h0, o_pmod0};
  assign io_axi_slave_read_addr_bits_prot     = 3'b000;
  assign io_axi_slave_read_addr_bits_id       = 6'h0;
  assign io_axi_slave_read_addr_bits_len      = 8'h0;
  assign io_axi_slave_read_addr_bits_size     = 3'h4;
  assign io_axi_slave_read_addr_bits_burst    = 2'b01;
  assign io_axi_slave_read_addr_bits_lock     = 1'b0;
  assign io_axi_slave_read_addr_bits_cache    = 4'h0;
  assign io_axi_slave_read_addr_bits_qos      = 4'h0;
  assign io_axi_slave_read_addr_bits_region   = 4'h0;

  // AXI Slave Read Data (R) Channel Inputs
  assign io_axi_slave_read_data_ready         = 1'b1; // Always ready to receive data

  // =========================================================================
  // --- AXI MASTER TIE-OFF LOGIC --------------------------------------------
  // =========================================================================

  // AXI Master Write Address (AW) Channel
  assign io_axi_master_write_addr_ready = 1'b1; // Assume memory always ready

  // AXI Master Write Data (W) Channel
  assign io_axi_master_write_data_ready = 1'b1;

  // AXI Master Write Response (B) Channel
  assign io_axi_master_write_resp_valid    = 1'b0; // No response valid
  assign io_axi_master_write_resp_bits_id  = 6'h0;
  assign io_axi_master_write_resp_bits_resp = 2'h0;

  // AXI Master Read Address (AR) Channel
  assign io_axi_master_read_addr_ready = 1'b1; // Assume memory always ready

  // AXI Master Read Data (R) Channel
  assign io_axi_master_read_data_valid    = 1'b0; // No data valid
  assign io_axi_master_read_data_bits_data = 128'h0;
  assign io_axi_master_read_data_bits_id  = 6'h0;
  assign io_axi_master_read_data_bits_resp = 2'h0;
  assign io_axi_master_read_data_bits_last = 1'b0;
  
  // =========================================================================
  // --- CoreMiniAxi INSTANTIATION -------------------------------------------
  // =========================================================================

  CoreMiniAxi i_CoreMiniAxi (
      .io_aclk(clk_81MHz),
      .io_aresetn(~sys_rst), // Active low reset
      
      // AXI Slave Write Address Channel
      .io_axi_slave_write_addr_ready(axi_slave_write_addr_ready),
      .io_axi_slave_write_addr_valid(io_axi_slave_write_addr_valid),
      .io_axi_slave_write_addr_bits_addr(io_axi_slave_write_addr_bits_addr),
      .io_axi_slave_write_addr_bits_prot(io_axi_slave_write_addr_bits_prot),
      .io_axi_slave_write_addr_bits_id(io_axi_slave_write_addr_bits_id),
      .io_axi_slave_write_addr_bits_len(io_axi_slave_write_addr_bits_len),
      .io_axi_slave_write_addr_bits_size(io_axi_slave_write_addr_bits_size),
      .io_axi_slave_write_addr_bits_burst(io_axi_slave_write_addr_bits_burst),
      .io_axi_slave_write_addr_bits_lock(io_axi_slave_write_addr_bits_lock),
      .io_axi_slave_write_addr_bits_cache(io_axi_slave_write_addr_bits_cache),
      .io_axi_slave_write_addr_bits_qos(io_axi_slave_write_addr_bits_qos),
      .io_axi_slave_write_addr_bits_region(io_axi_slave_write_addr_bits_region),

      // AXI Slave Write Data Channel
      .io_axi_slave_write_data_ready(axi_slave_write_data_ready),
      .io_axi_slave_write_data_valid(io_axi_slave_write_data_valid),
      .io_axi_slave_write_data_bits_data(io_axi_slave_write_data_bits_data),
      .io_axi_slave_write_data_bits_last(io_axi_slave_write_data_bits_last),
      .io_axi_slave_write_data_bits_strb(io_axi_slave_write_data_bits_strb),

      // AXI Slave Write Response Channel
      .io_axi_slave_write_resp_ready(io_axi_slave_write_resp_ready),
      .io_axi_slave_write_resp_valid(axi_slave_write_resp_valid),
      .io_axi_slave_write_resp_bits_id(axi_slave_write_resp_bits_id),
      .io_axi_slave_write_resp_bits_resp(axi_slave_write_resp_bits_resp),

      // AXI Slave Read Address Channel
      .io_axi_slave_read_addr_ready(axi_slave_read_addr_ready),
      .io_axi_slave_read_addr_valid(io_axi_slave_read_addr_valid),
      .io_axi_slave_read_addr_bits_addr(io_axi_slave_read_addr_bits_addr),
      .io_axi_slave_read_addr_bits_prot(io_axi_slave_read_addr_bits_prot),
      .io_axi_slave_read_addr_bits_id(io_axi_slave_read_addr_bits_id),
      .io_axi_slave_read_addr_bits_len(io_axi_slave_read_addr_bits_len),
      .io_axi_slave_read_addr_bits_size(io_axi_slave_read_addr_bits_size),
      .io_axi_slave_read_addr_bits_burst(io_axi_slave_read_addr_bits_burst),
      .io_axi_slave_read_addr_bits_lock(io_axi_slave_read_addr_bits_lock),
      .io_axi_slave_read_addr_bits_cache(io_axi_slave_read_addr_bits_cache),
      .io_axi_slave_read_addr_bits_qos(io_axi_slave_read_addr_bits_qos),
      .io_axi_slave_read_addr_bits_region(io_axi_slave_read_addr_bits_region),

      // AXI Slave Read Data Channel
      .io_axi_slave_read_data_ready(io_axi_slave_read_data_ready),
      .io_axi_slave_read_data_valid(axi_slave_read_data_valid),
      .io_axi_slave_read_data_bits_data(axi_slave_read_data_bits_data),
      .io_axi_slave_read_data_bits_id(axi_slave_read_data_bits_id),
      .io_axi_slave_read_data_bits_resp(axi_slave_read_data_bits_resp),
      .io_axi_slave_read_data_bits_last(axi_slave_read_data_bits_last),

      // AXI Master Write Address Channel (Tied Off)
      .io_axi_master_write_addr_ready(io_axi_master_write_addr_ready),
      .io_axi_master_write_addr_valid(axi_master_write_addr_valid),
      .io_axi_master_write_addr_bits_addr(axi_master_write_addr_bits_addr),
      .io_axi_master_write_addr_bits_prot(axi_master_write_addr_bits_prot),
      .io_axi_master_write_addr_bits_id(axi_master_write_addr_bits_id),
      .io_axi_master_write_addr_bits_len(axi_master_write_addr_bits_len),
      .io_axi_master_write_addr_bits_size(axi_master_write_addr_bits_size),
      .io_axi_master_write_addr_bits_burst(axi_master_write_addr_bits_burst),
      .io_axi_master_write_addr_bits_lock(axi_master_write_addr_bits_lock),
      .io_axi_master_write_addr_bits_cache(axi_master_write_addr_bits_cache),
      .io_axi_master_write_addr_bits_qos(axi_master_write_addr_bits_qos),
      .io_axi_master_write_addr_bits_region(axi_master_write_addr_bits_region),
      
      // AXI Master Write Data Channel (Tied Off)
      .io_axi_master_write_data_ready(io_axi_master_write_data_ready),
      .io_axi_master_write_data_valid(axi_master_write_data_valid),
      .io_axi_master_write_data_bits_data(axi_master_write_data_bits_data),
      .io_axi_master_write_data_bits_last(axi_master_write_data_bits_last),
      .io_axi_master_write_data_bits_strb(axi_master_write_data_bits_strb),
      
      // AXI Master Write Response Channel (Tied Off)
      .io_axi_master_write_resp_ready(axi_master_write_resp_ready),
      .io_axi_master_write_resp_valid(io_axi_master_write_resp_valid),
      .io_axi_master_write_resp_bits_id(io_axi_master_write_resp_bits_id),
      .io_axi_master_write_resp_bits_resp(io_axi_master_write_resp_bits_resp),
      
      // AXI Master Read Address Channel (Tied Off)
      .io_axi_master_read_addr_ready(io_axi_master_read_addr_ready),
      .io_axi_master_read_addr_valid(axi_master_read_addr_valid),
      .io_axi_master_read_addr_bits_addr(axi_master_read_addr_bits_addr),
      .io_axi_master_read_addr_bits_prot(axi_master_read_addr_bits_prot),
      .io_axi_master_read_addr_bits_id(axi_master_read_addr_bits_id),
      .io_axi_master_read_addr_bits_len(axi_master_read_addr_bits_len),
      .io_axi_master_read_addr_bits_size(axi_master_read_addr_bits_size),
      .io_axi_master_read_addr_bits_burst(axi_master_read_addr_bits_burst),
      .io_axi_master_read_addr_bits_lock(axi_master_read_addr_bits_lock),
      .io_axi_master_read_addr_bits_cache(axi_master_read_addr_bits_cache),
      .io_axi_master_read_addr_bits_qos(axi_master_read_addr_bits_qos),
      .io_axi_master_read_addr_bits_region(axi_master_read_addr_bits_region),

      // AXI Master Read Data Channel (Tied Off)
      .io_axi_master_read_data_ready(axi_master_read_data_ready),
      .io_axi_master_read_data_valid(io_axi_master_read_data_valid),
      .io_axi_master_read_data_bits_data(io_axi_master_read_data_bits_data),
      .io_axi_master_read_data_bits_id(io_axi_master_read_data_bits_id),
      .io_axi_master_read_data_bits_resp(io_axi_master_read_data_bits_resp),
      .io_axi_master_read_data_bits_last(io_axi_master_read_data_bits_last),
      
      // Status/Control (Outputs declared as wires)
      .io_halted(core_halted),
      .io_fault(core_fault),
      .io_wfi(core_wfi),
      .io_irq(core_irq_in), // Input tied low
      .io_te(core_te_in),   // Input tied low

      // Debug Outputs (DO NOT connect any debug signal yet - declared as wires)
      .io_debug_en(debug_en),
      .io_debug_addr_0(debug_addr_0),
      .io_debug_addr_1(debug_addr_1),
      .io_debug_addr_2(debug_addr_2),
      .io_debug_addr_3(debug_addr_3),
      .io_debug_inst_0(debug_inst_0),
      .io_debug_inst_1(debug_inst_1),
      .io_debug_inst_2(debug_inst_2),
      .io_debug_inst_3(debug_inst_3),
      .io_debug_cycles(debug_cycles),
      .io_debug_dbus_valid(debug_dbus_valid),
      .io_debug_dbus_bits_addr(debug_dbus_bits_addr),
      .io_debug_dbus_bits_wdata(debug_dbus_bits_wdata),
      .io_debug_dbus_bits_write(debug_dbus_bits_write),
      .io_debug_dispatch_0_instFire(debug_dispatch_0_instFire),
      .io_debug_dispatch_0_instAddr(debug_dispatch_0_instAddr),
      .io_debug_dispatch_0_instInst(debug_dispatch_0_instInst),
      .io_debug_dispatch_1_instFire(debug_dispatch_1_instFire),
      .io_debug_dispatch_1_instAddr(debug_dispatch_1_instAddr),
      .io_debug_dispatch_1_instInst(debug_dispatch_1_instInst),
      .io_debug_dispatch_2_instFire(debug_dispatch_2_instFire),
      .io_debug_dispatch_2_instAddr(debug_dispatch_2_instAddr),
      .io_debug_dispatch_2_instInst(debug_dispatch_2_instInst),
      .io_debug_dispatch_3_instFire(debug_dispatch_3_instFire),
      .io_debug_dispatch_3_instAddr(debug_dispatch_3_instAddr),
      .io_debug_dispatch_3_instInst(debug_dispatch_3_instInst),
      .io_debug_regfile_writeAddr_0_valid(debug_regfile_writeAddr_0_valid),
      .io_debug_regfile_writeAddr_0_bits(debug_regfile_writeAddr_0_bits),
      .io_debug_regfile_writeAddr_1_valid(debug_regfile_writeAddr_1_valid),
      .io_debug_regfile_writeAddr_1_bits(debug_regfile_writeAddr_1_bits),
      .io_debug_regfile_writeAddr_2_valid(debug_regfile_writeAddr_2_valid),
      .io_debug_regfile_writeAddr_2_bits(debug_regfile_writeAddr_2_bits),
      .io_debug_regfile_writeAddr_3_valid(debug_regfile_writeAddr_3_valid),
      .io_debug_regfile_writeAddr_3_bits(debug_regfile_writeAddr_3_bits),
      .io_debug_regfile_writeData_0_valid(debug_regfile_writeData_0_valid),
      .io_debug_regfile_writeData_0_bits_addr(debug_regfile_writeData_0_bits_addr),
      .io_debug_regfile_writeData_0_bits_data(debug_regfile_writeData_0_bits_data),
      .io_debug_regfile_writeData_1_valid(debug_regfile_writeData_1_valid),
      .io_debug_regfile_writeData_1_bits_addr(debug_regfile_writeData_1_bits_addr),
      .io_debug_regfile_writeData_1_bits_data(debug_regfile_writeData_1_bits_data),
      .io_debug_regfile_writeData_2_valid(debug_regfile_writeData_2_valid),
      .io_debug_regfile_writeData_2_bits_addr(debug_regfile_writeData_2_bits_addr),
      .io_debug_regfile_writeData_2_bits_data(debug_regfile_writeData_2_bits_data),
      .io_debug_regfile_writeData_3_valid(debug_regfile_writeData_3_valid),
      .io_debug_regfile_writeData_3_bits_addr(debug_regfile_writeData_3_bits_addr),
      .io_debug_regfile_writeData_3_bits_data(debug_regfile_writeData_3_bits_data),
      .io_debug_regfile_writeData_4_valid(debug_regfile_writeData_4_valid),
      .io_debug_regfile_writeData_4_bits_addr(debug_regfile_writeData_4_bits_addr),
      .io_debug_regfile_writeData_4_bits_data(debug_regfile_writeData_4_bits_data),
      .io_debug_regfile_writeData_5_valid(debug_regfile_writeData_5_valid),
      .io_debug_regfile_writeData_5_bits_addr(debug_regfile_writeData_5_bits_addr),
      .io_debug_regfile_writeData_5_bits_data(debug_regfile_writeData_5_bits_data),
      .io_debug_float_writeAddr_valid(debug_float_writeAddr_valid),
      .io_debug_float_writeAddr_bits(debug_float_writeAddr_bits),
      .io_debug_float_writeData_0_valid(debug_float_writeData_0_valid),
      .io_debug_float_writeData_0_bits_addr(debug_float_writeData_0_bits_addr),
      .io_debug_float_writeData_0_bits_data(debug_float_writeData_0_bits_data),
      .io_debug_float_writeData_1_valid(debug_float_writeData_1_valid),
      .io_debug_float_writeData_1_bits_addr(debug_float_writeData_1_bits_addr),
      .io_debug_float_writeData_1_bits_data(debug_float_writeData_1_bits_data),
      .io_slog_valid(slog_valid),
      .io_slog_addr(slog_addr),
      .io_slog_data(slog_data)
          ) /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- FINAL OUTPUT ASSIGNMENT (Forced Dependency) -------------------------
  // =========================================================================
  // o_pmod1 is the final 8-bit output, driven by the LSB of AXI Slave Read Data
  assign o_pmod1 = axi_slave_read_data_bits_data[7:0];
                                                                             
endmodule
