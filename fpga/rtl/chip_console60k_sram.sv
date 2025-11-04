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

module chip_console60k_sram(
     // System
     input  logic sys_clk,     // 120 MHz
     input  logic s0,          // **NEW USE: MUX Select (0=small RAM, 1=large SRAM)**
     input  logic s1,          // Used as Write Enable for large SRAM
     input  logic s2,          // System Reset Source
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i,
     // PMODs (Used for SRAM Test Path)
     input [7:0] o_pmod0,      // Used as Address and Write Data
     output [7:0] o_pmod1      // **FIXED: Shared Output for Data**
     );

  parameter ClockFrequency_81MHz = 81;

  wire sys_rst = s2;

  logic clk_81MHz;       // PLL output clock
  
  // Wires needed for RvvFrontEnd instantiation (left for context)
  logic io_halted;
  logic io_fault;
  logic io_halted_n;
  logic io_fault_n;
  logic spi_clk_i;
  logic spi_csb_i;
  logic spi_mosi_i;
  logic spi_miso_o;
  logic spi_clk_probe_o;
  logic spi_csb_probe_o;
  logic spi_mosi_probe_o;
  logic spi_miso_probe_o;

  // PLL Instantiation (Clock generation)
  /* synthesis syn_keep=1 */ Gowin_PLL gowinPLL81MHz(
      .clkout0(clk_81MHz), //output clkout
      .clkin(sys_clk)      //input clkin
    );


// --- Small RAM Instance (`ram_size_2x4`) ------------------------------------
  logic        R0_addr_2x4;
  logic        R0_en; 
  logic        R0_clk_2x4;
  logic [3:0]  R0_data_2x4; // <--- Source 0 for o_pmod1
  logic        W0_addr_2x4;
  logic        W0_en_2x4;
  logic        W0_clk_2x4;
  logic  [3:0] W0_data_2x4;

// Small RAM assignments
assign W0_en_2x4 = 1'h1;
assign R0_en = ~ W0_en_2x4; 

/* synthesis syn_keep=1 */ ram_size_2x4 i_ram_size_2x4(
.R0_addr(o_pmod0),
.R0_en(1'h1), 
.R0_clk(sys_clk),
.R0_data(R0_data_2x4), // Connect R0_data_2x4 to its local wire
.W0_addr(o_pmod0),
.W0_en(1'h0),
.W0_clk(sys_clk),
.W0_data(o_pmod0[3:0]) // Only 4 bits wide
) /* synthesis syn_keep=1 */;


// --- Large SRAM Instance (`write_data_buffer_sram_256x128`) -----------------
logic [7:0]   R0_addr;
logic         R0_en_large;    
logic         R0_clk_large;   
logic [127:0] R0_data; // <--- Source 1 (wider) for o_pmod1
logic [7:0]   R1_addr;
logic         R1_en;
logic         R1_clk;
logic [127:0] R1_data;
logic [7:0]   R2_addr;
logic         R2_en;
logic         R2_clk;
logic [127:0] R2_data;
logic [7:0]   W0_addr;
logic         W0_en;
logic         W0_clk;
logic [127:0] W0_data;

// Assignments to force the large SRAM to be KEPT by the synthesizer
assign R0_addr = o_pmod0;               
assign W0_addr = o_pmod0;               
assign W0_data = {120'h0, o_pmod0};     

assign R0_en_large = 1'b1;              
assign W0_en = s1;                      
assign R0_clk_large = clk_81MHz;        
assign W0_clk = sys_clk;                

/* synthesis syn_keep=1 */ write_data_buffer_sram_256x128 i_write_data_buffer_sram_256x128(
  .R0_addr(R0_addr),
  .R0_en(R0_en_large),    
  .R0_clk(R0_clk_large),  
  .R0_data(R0_data),
  .R1_addr(R1_addr),
  .R1_en(R1_en),
  .R1_clk(R1_clk),
  .R1_data(R1_data),
  .R2_addr(R2_addr),
  .R2_en(R2_en),
  .R2_clk(R2_clk),
  .R2_data(R2_data),
  .W0_addr(W0_addr),
  .W0_en(W0_en),
  .W0_clk(W0_clk),
  .W0_data(W0_data)
) /* synthesis syn_keep=1 */;


// --- FIX: Single Driver for o_pmod1 using MUX --------------------------------
// Use the s0 input as the MUX select signal to choose which SRAM drives the output.
// Small RAM data (R0_data_2x4) is padded with zeros to match the 8-bit output width.

assign o_pmod1 = s0 ? 
    R0_data[7:0] :           // If s0 is high, output data from large SRAM
    {4'b0, R0_data_2x4};     // If s0 is low, output zero-padded data from small RAM

endmodule