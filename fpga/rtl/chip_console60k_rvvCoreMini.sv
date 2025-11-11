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
`define FULL_RVVCOREMINI

// Assuming prim_mubi_pkg and Gowin_PLL are available globally or included elsewhere.
import prim_mubi_pkg::*;

module chip_console60k_rvvCoreMini(
     // System
     input  logic sys_clk,        // 27 MHz
     input  logic s0,             // Used global_en
     input  logic s1,             // Used global_en
     input  logic s2,             // Used global_en (System Reset Source / Write Enable)
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i,
     // PMODs (Used for Spi2TLUL Test Path)
     input [7:0] o_pmod0,         // Used as Address and Write Data / SPI Control
     output [7:0] o_pmod1         // Final Output: Driven by CoreMini outputs
     );

 parameter ClockFrequency_81MHz = 81 /* synthesis syn_keep=1 */;

 // sys_rst is high-active reset (s2 is the reset source)
 wire sys_rst = s2 /* synthesis syn_keep=1 */;

 logic clk_81MHz /* synthesis syn_keep=1 */;       // PLL output clock

 // PLL Instantiation (Clock generation - Gowin_PLL must be defined externally)
 Gowin_PLL gowinPLL81MHz(
     .clkout0(clk_81MHz), //output clkout
     .clkin(sys_clk),      //input clkin
     .mdclk(1'b0)          // Tied low to resolve undriven input warning
   ) /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- RvvCoreMini INTERFACE WIRES ---------------------------------------
 // =========================================================================
  input          clock,
                 reset,
  input  [31:0]  io_csr_in_value_0,
  output [31:0]  io_csr_out_value_0,
                 io_csr_out_value_1,
                 io_csr_out_value_2,
                 io_csr_out_value_3,
                 io_csr_out_value_4,
                 io_csr_out_value_5,
                 io_csr_out_value_6,
                 io_csr_out_value_7,
  output         io_halted,
                 io_fault,
                 io_wfi,
  input          io_irq,
  output         io_ibus_valid,
  output [31:0]  io_ibus_addr,
  input  [127:0] io_ibus_rdata,
  input          io_ibus_fault_valid,
  input  [31:0]  io_ibus_fault_bits_epc,
  output         io_dbus_valid,
                 io_dbus_write,
  output [31:0]  io_dbus_addr,
  output [127:0] io_dbus_wdata,
  output [15:0]  io_dbus_wmask,
  input  [127:0] io_dbus_rdata,
  output         io_ebus_dbus_valid,
  input          io_ebus_dbus_ready,
  output         io_ebus_dbus_write,
  output [31:0]  io_ebus_dbus_pc,
                 io_ebus_dbus_addr,
  output [4:0]   io_ebus_dbus_size,
  output [127:0] io_ebus_dbus_wdata,
  output [15:0]  io_ebus_dbus_wmask,
  input  [127:0] io_ebus_dbus_rdata,
  input          io_ebus_fault_valid,
                 io_ebus_fault_bits_write,
  input  [31:0]  io_ebus_fault_bits_addr,
                 io_ebus_fault_bits_epc,
  output         io_slog_valid,
  output [4:0]   io_slog_addr,
  output [31:0]  io_slog_data,
  output [3:0]   io_debug_en,
  output [31:0]  io_debug_addr_0,
                 io_debug_addr_1,
                 io_debug_addr_2,
                 io_debug_addr_3,
                 io_debug_inst_0,
                 io_debug_inst_1,
                 io_debug_inst_2,
                 io_debug_inst_3,
                 io_debug_cycles,
  output         io_debug_dbus_valid,
  output [31:0]  io_debug_dbus_bits_addr,
  output [127:0] io_debug_dbus_bits_wdata,
  output         io_debug_dbus_bits_write,
                 io_debug_dispatch_0_instFire,
  output [31:0]  io_debug_dispatch_0_instAddr,
                 io_debug_dispatch_0_instInst,
  output         io_debug_dispatch_1_instFire,
  output [31:0]  io_debug_dispatch_1_instAddr,
                 io_debug_dispatch_1_instInst,
  output         io_debug_dispatch_2_instFire,
  output [31:0]  io_debug_dispatch_2_instAddr,
                 io_debug_dispatch_2_instInst,
  output         io_debug_dispatch_3_instFire,
  output [31:0]  io_debug_dispatch_3_instAddr,
                 io_debug_dispatch_3_instInst,
  output         io_debug_regfile_writeAddr_0_valid,
  output [4:0]   io_debug_regfile_writeAddr_0_bits,
  output         io_debug_regfile_writeAddr_1_valid,
  output [4:0]   io_debug_regfile_writeAddr_1_bits,
  output         io_debug_regfile_writeAddr_2_valid,
  output [4:0]   io_debug_regfile_writeAddr_2_bits,
  output         io_debug_regfile_writeAddr_3_valid,
  output [4:0]   io_debug_regfile_writeAddr_3_bits,
  output         io_debug_regfile_writeData_0_valid,
  output [4:0]   io_debug_regfile_writeData_0_bits_addr,
  output [31:0]  io_debug_regfile_writeData_0_bits_data,
  output         io_debug_regfile_writeData_1_valid,
  output [4:0]   io_debug_regfile_writeData_1_bits_addr,
  output [31:0]  io_debug_regfile_writeData_1_bits_data,
  output         io_debug_regfile_writeData_2_valid,
  output [4:0]   io_debug_regfile_writeData_2_bits_addr,
  output [31:0]  io_debug_regfile_writeData_2_bits_data,
  output         io_debug_regfile_writeData_3_valid,
  output [4:0]   io_debug_regfile_writeData_3_bits_addr,
  output [31:0]  io_debug_regfile_writeData_3_bits_data,
  output         io_debug_regfile_writeData_4_valid,
  output [4:0]   io_debug_regfile_writeData_4_bits_addr,
  output [31:0]  io_debug_regfile_writeData_4_bits_data,
  output         io_debug_regfile_writeData_5_valid,
  output [4:0]   io_debug_regfile_writeData_5_bits_addr,
  output [31:0]  io_debug_regfile_writeData_5_bits_data,
  output         io_debug_float_writeAddr_valid,
  output [4:0]   io_debug_float_writeAddr_bits,
  output         io_debug_float_writeData_0_valid,
  output [31:0]  io_debug_float_writeData_0_bits_addr,
                 io_debug_float_writeData_0_bits_data,
  output         io_debug_float_writeData_1_valid,
  output [31:0]  io_debug_float_writeData_1_bits_addr,
                 io_debug_float_writeData_1_bits_data

 // =========================================================================
 // --- RVV CORE MINI INPUT LOGIC -----------------------------------------
 // =========================================================================

 // =========================================================================
 // --- RvvCoreMini INSTANTIATION -----------------------------------------
 // =========================================================================

 RvvCoreMini i_RvvCoreMini(
                            .clock(),
                            .reset(),
                            .io_csr_in_value_0(),
                            .io_csr_out_value_0(),
                            .io_csr_out_value_1(),
                            .io_csr_out_value_2(),
                            .io_csr_out_value_3(),
                            .io_csr_out_value_4(),
                            .io_csr_out_value_5(),
                            .io_csr_out_value_6(),
                            .io_csr_out_value_7(),
                            .io_halted(),
                            .io_fault(),
                            .io_wfi(),
                            .io_irq(),
                            .io_ibus_valid(),
                            .io_ibus_addr(),
                            .io_ibus_rdata(),
                            .io_ibus_fault_valid(),
                            .io_ibus_fault_bits_epc(),
                            .io_dbus_valid(),
                            .io_dbus_write(),
                            .io_dbus_addr(),
                            .io_dbus_wdata(),
                            .io_dbus_wmask(),
                            .io_dbus_rdata(),
                            .io_ebus_dbus_valid(),
                            .io_ebus_dbus_ready(),
                            .io_ebus_dbus_write(),
                            .io_ebus_dbus_pc(),
                            .io_ebus_dbus_addr(),
                            .io_ebus_dbus_size(),
                            .io_ebus_dbus_wdata(),
                            .io_ebus_dbus_wmask(),
                            .io_ebus_dbus_rdata(),
                            .io_ebus_fault_valid(),
                            .io_ebus_fault_bits_write(),
                            .io_ebus_fault_bits_addr(),
                            .io_ebus_fault_bits_epc(),
                            // DEBUG
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
);

 // =========================================================================
 // --- FINAL OUTPUT ASSIGNMENT ------------------------------------------
 // =========================================================================


endmodule