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
     input  logic sys_clk,     // 27 MHz
     input  logic s0,          // Unused
     input  logic s1,          // Unused
     input  logic s2,          // System Reset Source / Write Enable
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i,
     // PMODs (Used for SRAM Test Path)
     input [7:0] o_pmod0,      // Used as Address and Write Data
     output [7:0] o_pmod1      // Shared Output for Data (Driven by XOR of all RAMs)
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


// ===========================================================================
// --- RAM INSTANTIATION WIRES (One instance of each) ------------------------
// ===========================================================================

  logic [3:0]   R0_data_2x4;        // ram_size_2x4 (4 bits)
  logic [127:0] R0_data_large;      // write_data_buffer_sram_256x128 (Type 1, 128 bits)
  logic [127:0] R1_data_large;      // write_data_buffer_sram_256x128 (Type 1, 128 bits)
  logic [127:0] R2_data_large;      // write_data_buffer_sram_256x128 (Type 1, 128 bits)
  logic [188:0] R0_data_189;        // ram_2x189 (189 bits)
  logic [159:0] R0_data_160;        // ram_2x160 (160 bits)
  logic [127:0] R0_data_large_256x128_2; // write_data_buffer_sram_256x128 (Type 2, 128 bits)

  // Vector to collect the LSB (Bit 0) from all 5 RAMs
  logic [7:0] all_lsb_wires;
  
  // Single bit result of the XOR reduction
  logic final_xor_bit; 

  // The LSB of the final output is the XOR reduction of the 5 LSBs.
  assign final_xor_bit = ^all_lsb_wires; 

  wire global_write_en  = s0;
  wire global_read_en_0 = (~s2)&(s1);
  wire global_read_en_1 = (s2)&(~s1);
  wire global_read_en_2 = (s2)&(s1);


// ===========================================================================
// --- RAM INSTANTIATION (5 TOTAL) -------------------------------------------
// ===========================================================================

// --- 1. ram_size_2x4 (Small RAM) ---
/* synthesis syn_keep=1 */ ram_size_2x4 i_ram_size_2x4 (
  .R0_addr({24'b0, o_pmod0}), 
  .R0_en(global_read_en_0), 
  .R0_clk(sys_clk),
  .R0_data(R0_data_2x4), 
  .W0_addr(({24'h0, o_pmod0} + 'h40)), 
  .W0_en(global_write_en), 
  .W0_clk(sys_clk),
  .W0_data({24'h0, o_pmod0})
);
assign all_lsb_wires[0] = ~|R0_data_2x4;

// --- 2. write_data_buffer_sram_256x128 (Large SRAM - Type 1) ---
/* synthesis syn_keep=1 */ write_data_buffer_sram_256x128 i_write_data_buffer_sram_256x128 (
  .R0_addr({24'h0, o_pmod0}),
  .R0_en(global_read_en_0),
  .R0_clk(clk_81MHz),
  .R0_data(R0_data_large),
  .R1_addr(({24'h0, o_pmod0} + 'h10)),
  .R1_en(global_read_en_1),
  .R1_clk(sys_clk),
  .R1_data(R1_data_large),
  .R2_addr({24'b0, o_pmod0}),
  .R2_en(global_read_en_2),
  .R2_clk(sys_clk),
  .R2_data(R2_data_large),
  .W0_addr(({24'h0, o_pmod0} + 'h40)),
  .W0_en(global_write_en), 
  .W0_clk(sys_clk),
  .W0_data({24'h0, o_pmod0})
);
assign all_lsb_wires[1] = (~|R0_data_large)|~|R1_data_large|~|R2_data_large;


// --- 3. ram_2x189 (189-bit RAM) ---
/* synthesis syn_keep=1 */ ram_2x189 i_ram_2x189 (
  .R0_addr({24'h0, o_pmod0}), 
  .R0_en(global_read_en_0),
  .R0_clk(sys_clk),
  .R0_data(R0_data_189),
  .W0_addr(({24'h0, o_pmod0} + 'h40)),
  .W0_en(global_write_en), 
  .W0_clk(sys_clk),
  .W0_data({24'h0, o_pmod0})
);
assign all_lsb_wires[2] = ~|R0_data_189;


// --- 4. ram_2x160 (160-bit RAM) ---
/* synthesis syn_keep=1 */ ram_2x160 i_ram_2x160 (
  .R0_addr({24'h0, o_pmod0}),
  .R0_en(global_read_en_0),
  .R0_clk(sys_clk),
  .R0_data(R0_data_160),
  .W0_addr(({24'h0, o_pmod0} + 'h40)),
  .W0_en(global_write_en),
  .W0_clk(sys_clk),
  .W0_data({24'h0, o_pmod0})
);
assign all_lsb_wires[3] = ~|R0_data_160;


// --- 5. write_data_buffer_sram_256x128 (Large SRAM - Type 2, Multi-port used) ---
/* synthesis syn_keep=1 */ write_data_buffer_sram_256x128 i_write_data_buffer_sram_256x128_2 (
  .R0_addr({24'h0, o_pmod0}),
  .R0_en(global_read_en_0),
  .R0_clk(clk_81MHz),
  .R0_data(R0_data_large_256x128_2),
  .R1_addr(({24'h0, o_pmod0} + 'h10)),
  .R1_en(global_read_en_1),
  .R1_clk(sys_clk),
  .R1_data(R1_data_large_256x128_2),
  .R2_addr(({24'h0, o_pmod0} + 'h20)),
  .R2_en(global_read_en_2),
  .R2_clk(sys_clk),
  .R2_data(R2_data_large_256x128_2),
  .W0_addr(({24'h0, o_pmod0} + 'h40)),
  .W0_en(global_write_en),
  .W0_clk(sys_clk),
  .W0_data({24'h0, o_pmod0})
);
assign all_lsb_wires[4] = ~|R0_data_large_256x128_2;


// --- FINAL OUTPUT ASSIGNMENT ------------------------------------------------
// assign all_lsb_wires = (R0_data_2x4)&(R0_data_large)&(R1_data_large)&(R2_data_large)&(R0_data_189)&(R0_data_160)&(R0_data_large_256x128_2);
assign o_pmod1 = all_lsb_wires[7:0];

endmodule