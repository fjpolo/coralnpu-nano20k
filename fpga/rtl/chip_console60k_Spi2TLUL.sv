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

import prim_mubi_pkg::*;

module chip_console60k_Spi2TLUL(
     // System
     input  logic sys_clk,     // 27 MHz
     input  logic s0,          // Used in global_en
     input  logic s1,          // Used in global_en
     input  logic s2,          // Used in global_en (System Reset Source / Write Enable)
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
  wire global_en_1 = (~s2)&(~s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_2 = (~s2)&(s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_3 = (~s2)&(s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_4 = (s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_5 = (s2)&(~s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_6 = (s2)&(s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_7 = (s2)&(s1)&(s0) /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- SPI2TLUL INTERFACE WIRES --------------------------------------------
  // =========================================================================

  // Inputs to Spi2TLUL (Driven by o_pmod0 and global_en)
  logic         Spi2TLUL_io_spi_clk /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_spi_csb /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_spi_mosi /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_d_ready /* synthesis syn_keep=1 */; // **This is driven by the instance, not assigned here.**
  logic [127:0] Spi2TLUL_io_tl_a_bits_data /* synthesis syn_keep=1 */; 
  
  logic [127:0] dummy_tl_a_bits_data /* synthesis syn_keep=1 */; 

  // Outputs from Spi2TLUL (Outputs consumed by the final XOR logic)
  logic         Spi2TLUL_io_spi_miso /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_ready /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_valid /* synthesis syn_keep=1 */;
  logic [2:0]   Spi2TLUL_io_tl_a_bits_opcode /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_bits_param /* synthesis syn_keep=1 */;
  logic [3:0]   Spi2TLUL_io_tl_a_bits_size /* synthesis syn_keep=1 */;
  logic [5:0]   Spi2TLUL_io_tl_a_bits_source /* synthesis syn_keep=1 */;
  logic [31:0]  Spi2TLUL_io_tl_a_bits_address /* synthesis syn_keep=1 */;
  logic [15:0]  Spi2TLUL_io_tl_a_bits_mask /* synthesis syn_keep=1 */;
  logic [4:0]   Spi2TLUL_io_tl_a_bits_user_rsvd /* synthesis syn_keep=1 */;
  logic [3:0]   Spi2TLUL_io_tl_a_bits_user_instr_type /* synthesis syn_keep=1 */;
  logic [6:0]   Spi2TLUL_io_tl_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_bits_user_data_intg /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_d_valid /* synthesis syn_keep=1 */;
  logic [2:0]   Spi2TLUL_io_tl_d_bits_opcode /* synthesis syn_keep=1 */;
  logic [127:0] Spi2TLUL_io_tl_d_bits_data /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_d_bits_error /* synthesis syn_keep=1 */;
  
  // Unused TileLink output wires (simply defined for instantiation completeness)
  logic Spi2TLUL_io_tl_d_bits_param;
  logic [3:0] Spi2TLUL_io_tl_d_bits_size /* synthesis syn_keep=1 */;
  logic [5:0] Spi2TLUL_io_tl_d_bits_source /* synthesis syn_keep=1 */;
  logic Spi2TLUL_io_tl_d_bits_sink /* synthesis syn_keep=1 */;
  logic [6:0] Spi2TLUL_io_tl_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
  logic Spi2TLUL_io_tl_d_bits_user_data_intg /* synthesis syn_keep=1 */;


  // =========================================================================
  // --- DRIVING SPI2TLUL INPUTS ---------------------------------------------
  // =========================================================================

  // Use o_pmod0 to drive critical SPI signals
  assign Spi2TLUL_io_spi_clk    = o_pmod0[0]; // SPI Clock from LSB
  assign Spi2TLUL_io_spi_mosi   = o_pmod0[1]; // SPI MOSI data
  
  // **REMOVED: assign Spi2TLUL_io_tl_d_ready = o_pmod0[2]; (Causes conflict)**

  // Use a global enable signal to drive the Chip Select (Active Low)
  assign Spi2TLUL_io_spi_csb    = ~global_en_0; 
  
  // Drive the wide TL data input with o_pmod0
  assign Spi2TLUL_io_tl_a_bits_data = {120'b0, o_pmod0[7:3], 3'b0};

  // =========================================================================
  // --- SPI2TLUL INSTANTIATION ----------------------------------------------
  // =========================================================================
  
  /* synthesis syn_keep=1 */ Spi2TLUL i_Spi2TLUL(
    .clock(sys_clk),
    .reset(sys_rst),
    .io_spi_clk(Spi2TLUL_io_spi_clk),
    .io_spi_csb(Spi2TLUL_io_spi_csb),
    .io_spi_mosi(Spi2TLUL_io_spi_mosi),
    .io_spi_miso(Spi2TLUL_io_spi_miso),
    .io_tl_a_ready(Spi2TLUL_io_tl_a_ready),
    .io_tl_a_valid(Spi2TLUL_io_tl_a_valid),
    .io_tl_a_bits_opcode(Spi2TLUL_io_tl_a_bits_opcode),
    .io_tl_a_bits_param(Spi2TLUL_io_tl_a_bits_param),
    .io_tl_a_bits_size(Spi2TLUL_io_tl_a_bits_size),
    .io_tl_a_bits_source(Spi2TLUL_io_tl_a_bits_source),
    .io_tl_a_bits_address(Spi2TLUL_io_tl_a_bits_address),
    .io_tl_a_bits_mask(Spi2TLUL_io_tl_a_bits_mask),
    .io_tl_a_bits_data(dummy_tl_a_bits_data),
    .io_tl_a_bits_user_rsvd(Spi2TLUL_io_tl_a_bits_user_rsvd),
    .io_tl_a_bits_user_instr_type(Spi2TLUL_io_tl_a_bits_user_instr_type),
    .io_tl_a_bits_user_cmd_intg(Spi2TLUL_io_tl_a_bits_user_cmd_intg),
    .io_tl_a_bits_user_data_intg(Spi2TLUL_io_tl_a_bits_user_data_intg),
    .io_tl_d_ready(Spi2TLUL_io_tl_d_ready),
    .io_tl_d_valid(Spi2TLUL_io_tl_d_valid),
    .io_tl_d_bits_opcode(Spi2TLUL_io_tl_d_bits_opcode),
    .io_tl_d_bits_param(Spi2TLUL_io_tl_d_bits_param),
    .io_tl_d_bits_size(Spi2TLUL_io_tl_d_bits_size),
    .io_tl_d_bits_source(Spi2TLUL_io_tl_d_bits_source),
    .io_tl_d_bits_sink(Spi2TLUL_io_tl_d_bits_sink),
    .io_tl_d_bits_data(Spi2TLUL_io_tl_d_bits_data),
    .io_tl_d_bits_user_rsp_intg(Spi2TLUL_io_tl_d_bits_user_rsp_intg),
    .io_tl_d_bits_user_data_intg(Spi2TLUL_io_tl_d_bits_user_data_intg),
    .io_tl_d_bits_error(Spi2TLUL_io_tl_d_bits_error)
  ) /* synthesis syn_keep=1 */;


  // =========================================================================
  // --- FINAL OUTPUT ASSIGNMENT (Forced Dependency) -------------------------
  // =========================================================================
  
  // NOTE: o_pmod1[7] is now used to ensure Spi2TLUL_io_tl_d_ready is kept.
  assign o_pmod1[0] = Spi2TLUL_io_spi_miso ^ Spi2TLUL_io_tl_d_bits_error ^ global_en_1;
  assign o_pmod1[1] = Spi2TLUL_io_tl_a_valid ^ Spi2TLUL_io_tl_a_ready ^ Spi2TLUL_io_tl_a_bits_param;
  assign o_pmod1[2] = Spi2TLUL_io_tl_a_bits_opcode[0] ^ Spi2TLUL_io_tl_d_bits_opcode[1] ^ Spi2TLUL_io_tl_a_bits_user_data_intg;
  assign o_pmod1[3] = Spi2TLUL_io_tl_a_bits_size[0] ^ Spi2TLUL_io_tl_d_bits_data[0] ^ Spi2TLUL_io_tl_a_bits_user_cmd_intg[0];
  assign o_pmod1[4] = Spi2TLUL_io_tl_a_bits_source[0] ^ Spi2TLUL_io_tl_d_bits_data[1] ^ Spi2TLUL_io_tl_a_bits_address[0];
  assign o_pmod1[5] = Spi2TLUL_io_tl_a_bits_mask[0] ^ Spi2TLUL_io_tl_d_bits_data[2] ^ Spi2TLUL_io_tl_a_bits_user_rsvd[0];
  assign o_pmod1[6] = Spi2TLUL_io_tl_a_bits_address[1] ^ Spi2TLUL_io_tl_d_bits_data[3] ^ global_en_3;
  
  // Use a signal that *should* be an output from the Spi2TLUL module
  // to ensure the internal logic is preserved.
  assign o_pmod1[7] = Spi2TLUL_io_tl_d_ready ^ Spi2TLUL_io_tl_d_bits_data[4] ^ global_en_7;
                                                                           
endmodule