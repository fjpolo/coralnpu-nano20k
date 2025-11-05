// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except compliance with the License.
// You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`define SYNTHESIS

import prim_mubi_pkg::*;

module chip_console60k_CoralNPU(
     // System
     input  logic sys_clk,     // 27 MHz
     input  logic s0,          // Used global_en
     input  logic s1,          // Used global_en
     input  logic s2,          // Used global_en (System Reset Source / Write Enable)
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i,
     // PMODs (Used for Spi2TLUL Test Path)
     input [7:0] o_pmod0,      // Used as Address and Write Data / SPI Control
     output [7:0] o_pmod1      // Final Output: Driven by XOR chain from Spi2TLUL outputs
     );

  parameter ClockFrequency_81MHz = 81;

  wire sys_rst = s2;

  logic clk_81MHz;       // PLL output clock
  logic io_halted; 

  // PLL Instantiation (Clock generation)
  /* synthesis syn_keep=1 */ Gowin_PLL gowinPLL81MHz(
      .clkout0(clk_81MHz), //output clkout
      .clkin(sys_clk)      //input clkin
    );
  
  // =========================================================================
  // --- GLOBAL ENABLE SIGNALS -----------------------------------------------
  // =========================================================================
  wire global_en_0 = (~s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_1 = (~s2)&(~s1)&(s0)  /* synthesis syn_keep=1 */;
  wire global_en_2 = (~s2)&(s1)&(~s0)  /* synthesis syn_keep=1 */;
  wire global_en_3 = (~s2)&(s1)&(s0)   /* synthesis syn_keep=1 */;
  wire global_en_4 = (s2)&(~s1)&(~s0)  /* synthesis syn_keep=1 */;
  wire global_en_5 = (s2)&(~s1)&(s0)   /* synthesis syn_keep=1 */;
  wire global_en_6 = (s2)&(s1)&(~s0)   /* synthesis syn_keep=1 */;
  wire global_en_7 = (s2)&(s1)&(s0)    /* synthesis syn_keep=1 */;


  // =========================================================================
  // --- CoralNPUChiselSubsystem INTERFACE WIRES -----------------------------
  // =========================================================================
logic         io_clk_i /* synthesis syn_keep=1 */;
logic        io_rst_ni /* synthesis syn_keep=1 */;
logic        io_async_ports_devices_clocks_0 /* synthesis syn_keep=1 */;
logic        io_async_ports_devices_resets_0 /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_3_a_ready /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_3_a_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_3_a_bits_opcode /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_3_a_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_3_a_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_3_a_bits_source /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_3_a_bits_address /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_3_a_bits_mask /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_3_a_bits_data /* synthesis syn_keep=1 */;
logic  [4:0]   io_external_devices_ports_3_a_bits_user_rsvd /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_3_a_bits_user_instr_type /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_3_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_3_a_bits_user_data_intg /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_3_d_ready /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_3_d_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_3_d_bits_opcode /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_3_d_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_3_d_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_3_d_bits_source /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_3_d_bits_sink /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_3_d_bits_data /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_3_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_3_d_bits_user_data_intg /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_3_d_bits_error /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_2_a_ready /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_2_a_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_2_a_bits_opcode /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_2_a_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_2_a_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_2_a_bits_source /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_2_a_bits_address /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_2_a_bits_mask /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_2_a_bits_data /* synthesis syn_keep=1 */;
logic  [4:0]   io_external_devices_ports_2_a_bits_user_rsvd /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_2_a_bits_user_instr_type /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_2_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_2_a_bits_user_data_intg /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_2_d_ready /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_2_d_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_2_d_bits_opcode /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_2_d_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_2_d_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_2_d_bits_source /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_2_d_bits_sink /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_2_d_bits_data /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_2_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_2_d_bits_user_data_intg /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_2_d_bits_error /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_1_a_ready /* synthesis syn_keep=1 */;
logic         io_external_devices_ports_1_a_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_1_a_bits_opcode /* synthesis syn_keep=1 */;
logic        io_external_devices_ports_1_a_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_1_a_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_1_a_bits_source /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_1_a_bits_address /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_1_a_bits_mask /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_1_a_bits_data /* synthesis syn_keep=1 */;
logic  [4:0]   io_external_devices_ports_1_a_bits_user_rsvd /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_1_a_bits_user_instr_type /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_1_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_a_bits_user_data_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_ready /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_1_d_bits_opcode /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_1_d_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_1_d_bits_source /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_bits_sink /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_1_d_bits_data /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_1_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_bits_user_data_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_1_d_bits_error /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_a_ready /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_a_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_0_a_bits_opcode /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_a_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_0_a_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_0_a_bits_source /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_0_a_bits_address /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_0_a_bits_mask /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_0_a_bits_data /* synthesis syn_keep=1 */;
logic  [4:0]   io_external_devices_ports_0_a_bits_user_rsvd /* synthesis syn_keep=1 */;
logic  [3:0]   io_external_devices_ports_0_a_bits_user_instr_type /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_0_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_a_bits_user_data_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_ready /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_valid /* synthesis syn_keep=1 */;
logic  [2:0]   io_external_devices_ports_0_d_bits_opcode /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_bits_param /* synthesis syn_keep=1 */;
logic  [1:0]   io_external_devices_ports_0_d_bits_size /* synthesis syn_keep=1 */;
logic  [5:0]   io_external_devices_ports_0_d_bits_source /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_bits_sink /* synthesis syn_keep=1 */;
logic  [31:0]  io_external_devices_ports_0_d_bits_data /* synthesis syn_keep=1 */;
logic  [6:0]   io_external_devices_ports_0_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_bits_user_data_intg /* synthesis syn_keep=1 */;
logic          io_external_devices_ports_0_d_bits_error /* synthesis syn_keep=1 */;
logic          io_external_ports_8 /* synthesis syn_keep=1 */;
logic          io_external_ports_7 /* synthesis syn_keep=1 */;
logic          io_external_ports_6 /* synthesis syn_keep=1 */;
logic          io_external_ports_5 /* synthesis syn_keep=1 */;
logic          io_external_ports_4 /* synthesis syn_keep=1 */;
logic          io_external_ports_3 /* synthesis syn_keep=1 */;
logic          io_external_ports_2 /* synthesis syn_keep=1 */;
logic          io_external_ports_1 /* synthesis syn_keep=1 */;
logic          io_external_ports_0 /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_addr_ready /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_addr_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_ctrl_axi_write_addr_bits_addr /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_ctrl_axi_write_addr_bits_prot /* synthesis syn_keep=1 */;
logic  [5:0]   io_ddr_ctrl_axi_write_addr_bits_id /* synthesis syn_keep=1 */;
logic  [7:0]   io_ddr_ctrl_axi_write_addr_bits_len /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_ctrl_axi_write_addr_bits_size /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_ctrl_axi_write_addr_bits_burst /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_addr_bits_lock /* synthesis syn_keep=1 */;
logic  [3:0]   io_ddr_ctrl_axi_write_addr_bits_cache /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_addr_bits_qos /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_addr_bits_region /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_data_ready /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_data_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_ctrl_axi_write_data_bits_data /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_data_bits_last /* synthesis syn_keep=1 */;
logic  [3:0]   io_ddr_ctrl_axi_write_data_bits_strb /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_resp_ready /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_write_resp_valid /* synthesis syn_keep=1 */;
logic  [5:0]   io_ddr_ctrl_axi_write_resp_bits_id /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_ctrl_axi_write_resp_bits_resp /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_addr_ready /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_addr_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_ctrl_axi_read_addr_bits_addr /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_ctrl_axi_read_addr_bits_prot /* synthesis syn_keep=1 */;
logic  [5:0]   io_ddr_ctrl_axi_read_addr_bits_id /* synthesis syn_keep=1 */;
logic  [7:0]   io_ddr_ctrl_axi_read_addr_bits_len /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_ctrl_axi_read_addr_bits_size /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_ctrl_axi_read_addr_bits_burst /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_addr_bits_lock /* synthesis syn_keep=1 */;
logic  [3:0]   io_ddr_ctrl_axi_read_addr_bits_cache /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_addr_bits_qos /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_addr_bits_region /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_data_ready /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_data_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_ctrl_axi_read_data_bits_data /* synthesis syn_keep=1 */;
logic  [5:0]   io_ddr_ctrl_axi_read_data_bits_id /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_ctrl_axi_read_data_bits_resp /* synthesis syn_keep=1 */;
logic          io_ddr_ctrl_axi_read_data_bits_last /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_ready /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_mem_axi_write_addr_bits_addr /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_mem_axi_write_addr_bits_prot /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_bits_id /* synthesis syn_keep=1 */;
logic  [7:0]   io_ddr_mem_axi_write_addr_bits_len /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_mem_axi_write_addr_bits_size /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_mem_axi_write_addr_bits_burst /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_bits_lock /* synthesis syn_keep=1 */;
logic  [3:0]   io_ddr_mem_axi_write_addr_bits_cache /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_bits_qos /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_addr_bits_region /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_data_ready /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_data_valid /* synthesis syn_keep=1 */;
logic  [255:0] io_ddr_mem_axi_write_data_bits_data /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_data_bits_last /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_mem_axi_write_data_bits_strb /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_resp_ready /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_resp_valid /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_write_resp_bits_id /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_mem_axi_write_resp_bits_resp /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_ready /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_valid /* synthesis syn_keep=1 */;
logic  [31:0]  io_ddr_mem_axi_read_addr_bits_addr /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_mem_axi_read_addr_bits_prot /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_bits_id /* synthesis syn_keep=1 */;
logic  [7:0]   io_ddr_mem_axi_read_addr_bits_len /* synthesis syn_keep=1 */;
logic  [2:0]   io_ddr_mem_axi_read_addr_bits_size /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_mem_axi_read_addr_bits_burst /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_bits_lock /* synthesis syn_keep=1 */;
logic  [3:0]   io_ddr_mem_axi_read_addr_bits_cache /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_bits_qos /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_addr_bits_region /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_data_ready /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_data_valid /* synthesis syn_keep=1 */;
logic  [255:0] io_ddr_mem_axi_read_data_bits_data /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_data_bits_id /* synthesis syn_keep=1 */;
logic  [1:0]   io_ddr_mem_axi_read_data_bits_resp /* synthesis syn_keep=1 */;
logic          io_ddr_mem_axi_read_data_bits_last /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- CoralNPUChiselSubsystem INSTANTIATION -------------------------------
  // =========================================================================
  CoralNPUChiselSubsystem i_CoralNPUChiselSubsystem(
    .io_clk_i(io_clk_i),
    .io_rst_ni(io_rst_ni),
    .io_async_ports_devices_clocks_0(io_async_ports_devices_clocks_0),
    .io_async_ports_devices_resets_0(io_async_ports_devices_resets_0),
    .io_external_devices_ports_3_a_ready(io_external_devices_ports_3_a_ready),
    .io_external_devices_ports_3_a_valid(io_external_devices_ports_3_a_valid),
    .io_external_devices_ports_3_a_bits_opcode(io_external_devices_ports_3_a_bits_opcode),
    .io_external_devices_ports_3_a_bits_param(io_external_devices_ports_3_a_bits_param),
    .io_external_devices_ports_3_a_bits_size(io_external_devices_ports_3_a_bits_size),
    .io_external_devices_ports_3_a_bits_source(io_external_devices_ports_3_a_bits_source),
    .io_external_devices_ports_3_a_bits_address(io_external_devices_ports_3_a_bits_address),
    .io_external_devices_ports_3_a_bits_mask(io_external_devices_ports_3_a_bits_mask),
    .io_external_devices_ports_3_a_bits_data(io_external_devices_ports_3_a_bits_data),
    .io_external_devices_ports_3_a_bits_user_rsvd(io_external_devices_ports_3_a_bits_user_rsvd),
    .io_external_devices_ports_3_a_bits_user_instr_type(io_external_devices_ports_3_a_bits_user_instr_type),
    .io_external_devices_ports_3_a_bits_user_cmd_intg(io_external_devices_ports_3_a_bits_user_cmd_intg),
    .io_external_devices_ports_3_a_bits_user_data_intg(io_external_devices_ports_3_a_bits_user_data_intg),
    .io_external_devices_ports_3_d_ready(io_external_devices_ports_3_d_ready),
    .io_external_devices_ports_3_d_valid(io_external_devices_ports_3_d_valid),
    .io_external_devices_ports_3_d_bits_opcode(io_external_devices_ports_3_d_bits_opcode),
    .io_external_devices_ports_3_d_bits_param(io_external_devices_ports_3_d_bits_param),
    .io_external_devices_ports_3_d_bits_size(io_external_devices_ports_3_d_bits_size),
    .io_external_devices_ports_3_d_bits_source(io_external_devices_ports_3_d_bits_source),
    .io_external_devices_ports_3_d_bits_sink(io_external_devices_ports_3_d_bits_sink),
    .io_external_devices_ports_3_d_bits_data(io_external_devices_ports_3_d_bits_data),
    .io_external_devices_ports_3_d_bits_user_rsp_intg(io_external_devices_ports_3_d_bits_user_rsp_intg),
    .io_external_devices_ports_3_d_bits_user_data_intg(io_external_devices_ports_3_d_bits_user_data_intg),
    .io_external_devices_ports_3_d_bits_error(io_external_devices_ports_3_d_bits_error),
    .io_external_devices_ports_2_a_ready(io_external_devices_ports_2_a_ready),
    .io_external_devices_ports_2_a_valid(io_external_devices_ports_2_a_valid),
    .io_external_devices_ports_2_a_bits_opcode(io_external_devices_ports_2_a_bits_opcode),
    .io_external_devices_ports_2_a_bits_param(io_external_devices_ports_2_a_bits_param),
    .io_external_devices_ports_2_a_bits_size(io_external_devices_ports_2_a_bits_size),
    .io_external_devices_ports_2_a_bits_source(io_external_devices_ports_2_a_bits_source),
    .io_external_devices_ports_2_a_bits_address(io_external_devices_ports_2_a_bits_address),
    .io_external_devices_ports_2_a_bits_mask(io_external_devices_ports_2_a_bits_mask),
    .io_external_devices_ports_2_a_bits_data(io_external_devices_ports_2_a_bits_data),
    .io_external_devices_ports_2_a_bits_user_rsvd(io_external_devices_ports_2_a_bits_user_rsvd),
    .io_external_devices_ports_2_a_bits_user_instr_type(io_external_devices_ports_2_a_bits_user_instr_type),
    .io_external_devices_ports_2_a_bits_user_cmd_intg(io_external_devices_ports_2_a_bits_user_cmd_intg),
    .io_external_devices_ports_2_a_bits_user_data_intg(io_external_devices_ports_2_a_bits_user_data_intg),
    .io_external_devices_ports_2_d_ready(io_external_devices_ports_2_d_ready),
    .io_external_devices_ports_2_d_valid(io_external_devices_ports_2_d_valid),
    .io_external_devices_ports_2_d_bits_opcode(io_external_devices_ports_2_d_bits_opcode),
    .io_external_devices_ports_2_d_bits_param(io_external_devices_ports_2_d_bits_param),
    .io_external_devices_ports_2_d_bits_size(io_external_devices_ports_2_d_bits_size),
    .io_external_devices_ports_2_d_bits_source(io_external_devices_ports_2_d_bits_source),
    .io_external_devices_ports_2_d_bits_sink(io_external_devices_ports_2_d_bits_sink),
    .io_external_devices_ports_2_d_bits_data(io_external_devices_ports_2_d_bits_data),
    .io_external_devices_ports_2_d_bits_user_rsp_intg(io_external_devices_ports_2_d_bits_user_rsp_intg),
    .io_external_devices_ports_2_d_bits_user_data_intg(io_external_devices_ports_2_d_bits_user_data_intg),
    .io_external_devices_ports_2_d_bits_error(io_external_devices_ports_2_d_bits_error),
    .io_external_devices_ports_1_a_ready(io_external_devices_ports_1_a_ready),
    .io_external_devices_ports_1_a_valid(io_external_devices_ports_1_a_valid),
    .io_external_devices_ports_1_a_bits_opcode(io_external_devices_ports_1_a_bits_opcode),
    .io_external_devices_ports_1_a_bits_param(io_external_devices_ports_1_a_bits_param),
    .io_external_devices_ports_1_a_bits_size(io_external_devices_ports_1_a_bits_size),
    .io_external_devices_ports_1_a_bits_source(io_external_devices_ports_1_a_bits_source),
    .io_external_devices_ports_1_a_bits_address(io_external_devices_ports_1_a_bits_address),
    .io_external_devices_ports_1_a_bits_mask(io_external_devices_ports_1_a_bits_mask),
    .io_external_devices_ports_1_a_bits_data(io_external_devices_ports_1_a_bits_data),
    .io_external_devices_ports_1_a_bits_user_rsvd(io_external_devices_ports_1_a_bits_user_rsvd),
    .io_external_devices_ports_1_a_bits_user_instr_type(io_external_devices_ports_1_a_bits_user_instr_type),
    .io_external_devices_ports_1_a_bits_user_cmd_intg(io_external_devices_ports_1_a_bits_user_cmd_intg),
    .io_external_devices_ports_1_a_bits_user_data_intg(io_external_devices_ports_1_a_bits_user_data_intg),
    .io_external_devices_ports_1_d_ready(io_external_devices_ports_1_d_ready),
    .io_external_devices_ports_1_d_valid(io_external_devices_ports_1_d_valid),
    .io_external_devices_ports_1_d_bits_opcode(io_external_devices_ports_1_d_bits_opcode),
    .io_external_devices_ports_1_d_bits_param(io_external_devices_ports_1_d_bits_param),
    .io_external_devices_ports_1_d_bits_size(io_external_devices_ports_1_d_bits_size),
    .io_external_devices_ports_1_d_bits_source(io_external_devices_ports_1_d_bits_source),
    .io_external_devices_ports_1_d_bits_sink(io_external_devices_ports_1_d_bits_sink),
    .io_external_devices_ports_1_d_bits_data(io_external_devices_ports_1_d_bits_data),
    .io_external_devices_ports_1_d_bits_user_rsp_intg(io_external_devices_ports_1_d_bits_user_rsp_intg),
    .io_external_devices_ports_1_d_bits_user_data_intg(io_external_devices_ports_1_d_bits_user_data_intg),
    .io_external_devices_ports_1_d_bits_error(io_external_devices_ports_1_d_bits_error),
    .io_external_devices_ports_0_a_ready(io_external_devices_ports_0_a_ready),
    .io_external_devices_ports_0_a_valid(io_external_devices_ports_0_a_valid),
    .io_external_devices_ports_0_a_bits_opcode(io_external_devices_ports_0_a_bits_opcode),
    .io_external_devices_ports_0_a_bits_param(io_external_devices_ports_0_a_bits_param),
    .io_external_devices_ports_0_a_bits_size(io_external_devices_ports_0_a_bits_size),
    .io_external_devices_ports_0_a_bits_source(io_external_devices_ports_0_a_bits_source),
    .io_external_devices_ports_0_a_bits_address(io_external_devices_ports_0_a_bits_address),
    .io_external_devices_ports_0_a_bits_mask(io_external_devices_ports_0_a_bits_mask),
    .io_external_devices_ports_0_a_bits_data(io_external_devices_ports_0_a_bits_data),
    .io_external_devices_ports_0_a_bits_user_rsvd(io_external_devices_ports_0_a_bits_user_rsvd),
    .io_external_devices_ports_0_a_bits_user_instr_type(io_external_devices_ports_0_a_bits_user_instr_type),
    .io_external_devices_ports_0_a_bits_user_cmd_intg(io_external_devices_ports_0_a_bits_user_cmd_intg),
    .io_external_devices_ports_0_a_bits_user_data_intg(io_external_devices_ports_0_a_bits_user_data_intg),
    .io_external_devices_ports_0_d_ready(io_external_devices_ports_0_d_ready),
    .io_external_devices_ports_0_d_valid(io_external_devices_ports_0_d_valid),
    .io_external_devices_ports_0_d_bits_opcode(io_external_devices_ports_0_d_bits_opcode),
    .io_external_devices_ports_0_d_bits_param(io_external_devices_ports_0_d_bits_param),
    .io_external_devices_ports_0_d_bits_size(io_external_devices_ports_0_d_bits_size),
    .io_external_devices_ports_0_d_bits_source(io_external_devices_ports_0_d_bits_source),
    .io_external_devices_ports_0_d_bits_sink(io_external_devices_ports_0_d_bits_sink),
    .io_external_devices_ports_0_d_bits_data(io_external_devices_ports_0_d_bits_data),
    .io_external_devices_ports_0_d_bits_user_rsp_intg(io_external_devices_ports_0_d_bits_user_rsp_intg),
    .io_external_devices_ports_0_d_bits_user_data_intg(io_external_devices_ports_0_d_bits_user_data_intg),
    .io_external_devices_ports_0_d_bits_error(io_external_devices_ports_0_d_bits_error),
    .io_external_ports_8(io_external_ports_8),
    .io_external_ports_7(io_external_ports_7),
    .io_external_ports_6(io_external_ports_6),
    .io_external_ports_5(io_external_ports_5),
    .io_external_ports_4(io_external_ports_4),
    .io_external_ports_3(io_external_ports_3),
    .io_external_ports_2(io_external_ports_2),
    .io_external_ports_1(io_external_ports_1),
    .io_external_ports_0(io_external_ports_0),
    .io_ddr_ctrl_axi_write_addr_ready(io_ddr_ctrl_axi_write_addr_ready),
    .io_ddr_ctrl_axi_write_addr_valid(io_ddr_ctrl_axi_write_addr_valid),
    .io_ddr_ctrl_axi_write_addr_bits_addr(io_ddr_ctrl_axi_write_addr_bits_addr),
    .io_ddr_ctrl_axi_write_addr_bits_prot(io_ddr_ctrl_axi_write_addr_bits_prot),
    .io_ddr_ctrl_axi_write_addr_bits_id(io_ddr_ctrl_axi_write_addr_bits_id),
    .io_ddr_ctrl_axi_write_addr_bits_len(io_ddr_ctrl_axi_write_addr_bits_len),
    .io_ddr_ctrl_axi_write_addr_bits_size(io_ddr_ctrl_axi_write_addr_bits_size),
    .io_ddr_ctrl_axi_write_addr_bits_burst(io_ddr_ctrl_axi_write_addr_bits_burst),
    .io_ddr_ctrl_axi_write_addr_bits_lock(io_ddr_ctrl_axi_write_addr_bits_lock),
    .io_ddr_ctrl_axi_write_addr_bits_cache(io_ddr_ctrl_axi_write_addr_bits_cache),
    .io_ddr_ctrl_axi_write_addr_bits_qos(io_ddr_ctrl_axi_write_addr_bits_qos),
    .io_ddr_ctrl_axi_write_addr_bits_region(io_ddr_ctrl_axi_write_addr_bits_region),
    .io_ddr_ctrl_axi_write_data_ready(io_ddr_ctrl_axi_write_data_ready),
    .io_ddr_ctrl_axi_write_data_valid(io_ddr_ctrl_axi_write_data_valid),
    .io_ddr_ctrl_axi_write_data_bits_data(io_ddr_ctrl_axi_write_data_bits_data),
    .io_ddr_ctrl_axi_write_data_bits_last(io_ddr_ctrl_axi_write_data_bits_last),
    .io_ddr_ctrl_axi_write_data_bits_strb(io_ddr_ctrl_axi_write_data_bits_strb),
    .io_ddr_ctrl_axi_write_resp_ready(io_ddr_ctrl_axi_write_resp_ready),
    .io_ddr_ctrl_axi_write_resp_valid(io_ddr_ctrl_axi_write_resp_valid),
    .io_ddr_ctrl_axi_write_resp_bits_id(io_ddr_ctrl_axi_write_resp_bits_id),
    .io_ddr_ctrl_axi_write_resp_bits_resp(io_ddr_ctrl_axi_write_resp_bits_resp),
    .io_ddr_ctrl_axi_read_addr_ready(io_ddr_ctrl_axi_read_addr_ready),
    .io_ddr_ctrl_axi_read_addr_valid(io_ddr_ctrl_axi_read_addr_valid),
    .io_ddr_ctrl_axi_read_addr_bits_addr(io_ddr_ctrl_axi_read_addr_bits_addr),
    .io_ddr_ctrl_axi_read_addr_bits_prot(io_ddr_ctrl_axi_read_addr_bits_prot),
    .io_ddr_ctrl_axi_read_addr_bits_id(io_ddr_ctrl_axi_read_addr_bits_id),
    .io_ddr_ctrl_axi_read_addr_bits_len(io_ddr_ctrl_axi_read_addr_bits_len),
    .io_ddr_ctrl_axi_read_addr_bits_size(io_ddr_ctrl_axi_read_addr_bits_size),
    .io_ddr_ctrl_axi_read_addr_bits_burst(io_ddr_ctrl_axi_read_addr_bits_burst),
    .io_ddr_ctrl_axi_read_addr_bits_lock(io_ddr_ctrl_axi_read_addr_bits_lock),
    .io_ddr_ctrl_axi_read_addr_bits_cache(io_ddr_ctrl_axi_read_addr_bits_cache),
    .io_ddr_ctrl_axi_read_addr_bits_qos(io_ddr_ctrl_axi_read_addr_bits_qos),
    .io_ddr_ctrl_axi_read_addr_bits_region(io_ddr_ctrl_axi_read_addr_bits_region),
    .io_ddr_ctrl_axi_read_data_ready(io_ddr_ctrl_axi_read_data_ready),
    .io_ddr_ctrl_axi_read_data_valid(io_ddr_ctrl_axi_read_data_valid),
    .io_ddr_ctrl_axi_read_data_bits_data(io_ddr_ctrl_axi_read_data_bits_data),
    .io_ddr_ctrl_axi_read_data_bits_id(io_ddr_ctrl_axi_read_data_bits_id),
    .io_ddr_ctrl_axi_read_data_bits_resp(io_ddr_ctrl_axi_read_data_bits_resp),
    .io_ddr_ctrl_axi_read_data_bits_last(io_ddr_ctrl_axi_read_data_bits_last),
    .io_ddr_mem_axi_write_addr_ready(io_ddr_mem_axi_write_addr_ready),
    .io_ddr_mem_axi_write_addr_valid(io_ddr_mem_axi_write_addr_valid),
    .io_ddr_mem_axi_write_addr_bits_addr(io_ddr_mem_axi_write_addr_bits_addr),
    .io_ddr_mem_axi_write_addr_bits_prot(io_ddr_mem_axi_write_addr_bits_prot),
    .io_ddr_mem_axi_write_addr_bits_id(io_ddr_mem_axi_write_addr_bits_id),
    .io_ddr_mem_axi_write_addr_bits_len(io_ddr_mem_axi_write_addr_bits_len),
    .io_ddr_mem_axi_write_addr_bits_size(io_ddr_mem_axi_write_addr_bits_size),
    .io_ddr_mem_axi_write_addr_bits_burst(io_ddr_mem_axi_write_addr_bits_burst),
    .io_ddr_mem_axi_write_addr_bits_lock(io_ddr_mem_axi_write_addr_bits_lock),
    .io_ddr_mem_axi_write_addr_bits_cache(io_ddr_mem_axi_write_addr_bits_cache),
    .io_ddr_mem_axi_write_addr_bits_qos(io_ddr_mem_axi_write_addr_bits_qos),
    .io_ddr_mem_axi_write_addr_bits_region(io_ddr_mem_axi_write_addr_bits_region),
    .io_ddr_mem_axi_write_data_ready(io_ddr_mem_axi_write_data_ready),
    .io_ddr_mem_axi_write_data_valid(io_ddr_mem_axi_write_data_valid),
    .io_ddr_mem_axi_write_data_bits_data(io_ddr_mem_axi_write_data_bits_data),
    .io_ddr_mem_axi_write_data_bits_last(io_ddr_mem_axi_write_data_bits_last),
    .io_ddr_mem_axi_write_data_bits_strb(io_ddr_mem_axi_write_data_bits_strb),
    .io_ddr_mem_axi_write_resp_ready(io_ddr_mem_axi_write_resp_ready),
    .io_ddr_mem_axi_write_resp_valid(io_ddr_mem_axi_write_resp_valid),
    .io_ddr_mem_axi_write_resp_bits_id(io_ddr_mem_axi_write_resp_bits_id),
    .io_ddr_mem_axi_write_resp_bits_resp(io_ddr_mem_axi_write_resp_bits_resp),
    .io_ddr_mem_axi_read_addr_ready(io_ddr_mem_axi_read_addr_ready),
    .io_ddr_mem_axi_read_addr_valid(io_ddr_mem_axi_read_addr_valid),
    .io_ddr_mem_axi_read_addr_bits_addr(io_ddr_mem_axi_read_addr_bits_addr),
    .io_ddr_mem_axi_read_addr_bits_prot(io_ddr_mem_axi_read_addr_bits_prot),
    .io_ddr_mem_axi_read_addr_bits_id(io_ddr_mem_axi_read_addr_bits_id),
    .io_ddr_mem_axi_read_addr_bits_len(io_ddr_mem_axi_read_addr_bits_len),
    .io_ddr_mem_axi_read_addr_bits_size(io_ddr_mem_axi_read_addr_bits_size),
    .io_ddr_mem_axi_read_addr_bits_burst(io_ddr_mem_axi_read_addr_bits_burst),
    .io_ddr_mem_axi_read_addr_bits_lock(io_ddr_mem_axi_read_addr_bits_lock),
    .io_ddr_mem_axi_read_addr_bits_cache(io_ddr_mem_axi_read_addr_bits_cache),
    .io_ddr_mem_axi_read_addr_bits_qos(io_ddr_mem_axi_read_addr_bits_qos),
    .io_ddr_mem_axi_read_addr_bits_region(io_ddr_mem_axi_read_addr_bits_region),
    .io_ddr_mem_axi_read_data_ready(io_ddr_mem_axi_read_data_ready),
    .io_ddr_mem_axi_read_data_valid(io_ddr_mem_axi_read_data_valid),
    .io_ddr_mem_axi_read_data_bits_data(io_ddr_mem_axi_read_data_bits_data),
    .io_ddr_mem_axi_read_data_bits_id(io_ddr_mem_axi_read_data_bits_id),
    .io_ddr_mem_axi_read_data_bits_resp(io_ddr_mem_axi_read_data_bits_resp),
    .io_ddr_mem_axi_read_data_bits_last(io_ddr_mem_axi_read_data_bits_last)
  );
  // =========================================================================
  // --- FINAL OUTPUT ASSIGNMENT (Forced Dependency) -------------------------
  // =========================================================================
                                                                           
endmodule