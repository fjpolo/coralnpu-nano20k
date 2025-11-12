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
// `define FULL_RVVCOREMINI
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
 // --- RVV CORE MINI INPUT LOGIC -----------------------------------------
 // =========================================================================
  wire io_irq = o_pmod0[0] /* synthesis syn_keep=1 */;
  wire io_ibus_fault_valid = o_pmod0[2] /* synthesis syn_keep=1 */;
  wire io_ebus_dbus_ready = o_pmod0[3] /* synthesis syn_keep=1 */;
  wire io_ebus_fault_valid = o_pmod0[4] /* synthesis syn_keep=1 */;
  wire io_ebus_fault_bits_write = o_pmod0[5] /* synthesis syn_keep=1 */;
  wire io_ebus_fault_bits_epc = o_pmod0[6] /* synthesis syn_keep=1 */;
  wire [31:0]  io_csr_in_value_0 = {{4{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;
  wire [31:0]  io_ibus_fault_bits_epc = {{4{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;
  wire [31:0]  io_ebus_fault_bits_addr = {{4{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;
  wire [127:0] io_ibus_rdata = {{16{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;
  wire [127:0] io_dbus_rdata = {{16{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;
  wire [127:0] io_ebus_dbus_rdata = {{16{o_pmod0[7:0]}}} /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- RVV CORE MINI OUTPUT LOGIC -----------------------------------------
 // =========================================================================
 wire [31:0]    io_csr_out_value_0 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_1 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_2 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_3 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_4 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_5 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_6 /* synthesis syn_keep=1 */;
 wire           io_csr_out_value_7 /* synthesis syn_keep=1 */;
 wire           io_halted /* synthesis syn_keep=1 */;
 wire           io_fault /* synthesis syn_keep=1 */;
 wire           io_wfi /* synthesis syn_keep=1 */;
 wire           io_ibus_valid /* synthesis syn_keep=1 */;
 wire [31:0]    io_ibus_addr /* synthesis syn_keep=1 */;
 wire           io_dbus_valid /* synthesis syn_keep=1 */;
 wire           io_dbus_write /* synthesis syn_keep=1 */;
 wire [31:0]    io_dbus_addr /* synthesis syn_keep=1 */;
 wire [127:0]   io_dbus_wdata /* synthesis syn_keep=1 */;
 wire [15:0]    io_dbus_wmask /* synthesis syn_keep=1 */;
 wire           io_ebus_dbus_valid /* synthesis syn_keep=1 */;
 wire           io_ebus_dbus_write /* synthesis syn_keep=1 */;
 wire [31:0]    io_ebus_dbus_pc /* synthesis syn_keep=1 */;
 wire           io_ebus_dbus_addr /* synthesis syn_keep=1 */;
 wire [4:0]     io_ebus_dbus_size /* synthesis syn_keep=1 */;
 wire [127:0]   io_ebus_dbus_wdata /* synthesis syn_keep=1 */;
 wire [15:0]    io_ebus_dbus_wmask /* synthesis syn_keep=1 */;


 // =========================================================================
 // --- RvvCoreMini INSTANTIATION -----------------------------------------
 // =========================================================================
`ifdef FULL_RVVCOREMINI
/* synthesis syn_keep=1 */RvvCoreMini i_RvvCoreMini(
                            .clock(sys_clk),
                            .reset(sys_rst),
                            .io_csr_in_value_0(io_csr_in_value_0),
                            .io_csr_out_value_0(io_csr_out_value_0),
                            .io_csr_out_value_1(io_csr_out_value_1),
                            .io_csr_out_value_2(io_csr_out_value_2),
                            .io_csr_out_value_3(io_csr_out_value_3),
                            .io_csr_out_value_4(io_csr_out_value_4),
                            .io_csr_out_value_5(io_csr_out_value_5),
                            .io_csr_out_value_6(io_csr_out_value_6),
                            .io_csr_out_value_7(io_csr_out_value_7),
                            .io_halted(io_halted),
                            .io_fault(io_fault),
                            .io_wfi(io_wfi),
                            .io_irq(io_irq),
                            .io_ibus_valid(io_ibus_valid),
                            .io_ibus_addr(io_ibus_addr),
                            .io_ibus_rdata(io_ibus_rdata),
                            .io_ibus_fault_valid(io_ibus_fault_valid),
                            .io_ibus_fault_bits_epc(io_ibus_fault_bits_epc),
                            .io_dbus_valid(io_dbus_valid),
                            .io_dbus_write(io_dbus_write),
                            .io_dbus_addr(io_dbus_addr),
                            .io_dbus_wdata(io_dbus_wdata),
                            .io_dbus_wmask(io_dbus_wmask),
                            .io_dbus_rdata(io_dbus_rdata),
                            .io_ebus_dbus_valid(io_ebus_dbus_valid),
                            .io_ebus_dbus_ready(io_ebus_dbus_ready),
                            .io_ebus_dbus_write(io_ebus_dbus_write),
                            .io_ebus_dbus_pc(io_ebus_dbus_pc),
                            .io_ebus_dbus_addr(io_ebus_dbus_addr),
                            .io_ebus_dbus_size(io_ebus_dbus_size),
                            .io_ebus_dbus_wdata(io_ebus_dbus_wdata),
                            .io_ebus_dbus_wmask(io_ebus_dbus_wmask),
                            .io_ebus_dbus_rdata(io_ebus_dbus_rdata),
                            .io_ebus_fault_valid(io_ebus_fault_valid),
                            .io_ebus_fault_bits_write(io_ebus_fault_bits_write),
                            .io_ebus_fault_bits_addr(io_ebus_fault_bits_addr),
                            .io_ebus_fault_bits_epc(io_ebus_fault_bits_epc),
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
) /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- FINAL OUTPUT ASSIGNMENT ------------------------------------------
 // =========================================================================
 assign o_pmod1[0] = 
                  (|io_csr_out_value_0)^
                  (|io_csr_out_value_1)^
                  (|io_csr_out_value_2);
 assign o_pmod1[1] = 
                    (|io_csr_out_value_3)^
                    (|io_csr_out_value_4);
 assign o_pmod1[2] = 
                    (|io_csr_out_value_5)^
                    (|io_csr_out_value_6)^
                    (|io_csr_out_value_7);
 assign o_pmod1[3] = 
                    (|io_halted)^
                    (|io_fault)^
                    (|io_wfi)^
                    (|io_ibus_valid);
 assign o_pmod1[4] = 
                    (|io_ibus_addr)^
                    (|io_dbus_valid)^
                    (|io_dbus_write)^
                    (|io_dbus_addr);
 assign o_pmod1[5] = 
                    (|io_dbus_wdata)^
                    (|io_dbus_wmask)^
                    (|io_ebus_dbus_valid);
 assign o_pmod1[6] = 
                    (|io_ebus_dbus_write)^
                    (|io_ebus_dbus_pc)^
                    (|io_ebus_dbus_addr);
 assign o_pmod1[7] = 
                    (|io_ebus_dbus_size)^
                    (|io_ebus_dbus_wdata)^
                    (|io_ebus_dbus_wmask);

`else
 // =========================================================================
 // --- INPUT LOGIC -----------------------------------------
 // =========================================================================
  wire          io_inst_0_valid = o_pmod0[0] /* synthesis syn_keep=1 */;
  wire          io_inst_1_valid = o_pmod0[1] /* synthesis syn_keep=1 */;
  wire          io_inst_2_valid = o_pmod0[2] /* synthesis syn_keep=1 */;
  wire          io_inst_3_valid = o_pmod0[3] /* synthesis syn_keep=1 */;
  wire          io_rs_0_valid = o_pmod0[4] /* synthesis syn_keep=1 */;
  wire          io_rs_1_valid = o_pmod0[5] /* synthesis syn_keep=1 */;
  wire          io_rs_2_valid = o_pmod0[6] /* synthesis syn_keep=1 */;
  wire          io_rs_3_valid = o_pmod0[7] /* synthesis syn_keep=1 */;
  wire          io_rs_4_valid = o_pmod0[6] /* synthesis syn_keep=1 */;
  wire          io_rs_5_valid = o_pmod0[5] /* synthesis syn_keep=1 */;
  wire          io_rs_6_valid = o_pmod0[4] /* synthesis syn_keep=1 */;
  wire          io_rs_7_valid = o_pmod0[3] /* synthesis syn_keep=1 */;
  wire          io_async_rd_ready = o_pmod0[2] /* synthesis syn_keep=1 */;
  wire          io_csr_vstart_write_valid = o_pmod0[1] /* synthesis syn_keep=1 */;
  wire          io_csr_vxrm_write_valid = o_pmod0[0] /* synthesis syn_keep=1 */;
  wire          io_csr_vxsat_write_valid = o_pmod0[1] /* synthesis syn_keep=1 */;
  wire          io_csr_vxsat_write_bits = o_pmod0[2] /* synthesis syn_keep=1 */;
  wire          io_rvv2lsu_0_ready = o_pmod0[3] /* synthesis syn_keep=1 */;
  wire          io_lsu2rvv_0_valid = o_pmod0[4] /* synthesis syn_keep=1 */;
  wire          io_lsu2rvv_0_bits_last = o_pmod0[5] /* synthesis syn_keep=1 */;
  wire  [1:0]   io_inst_0_bits_opcode = o_pmod0[1:0] /* synthesis syn_keep=1 */;
  wire  [1:0]   io_inst_1_bits_opcode = o_pmod0[1:0] /* synthesis syn_keep=1 */;
  wire  [1:0]   io_inst_2_bits_opcode = o_pmod0[1:0] /* synthesis syn_keep=1 */;
  wire  [1:0]   io_inst_3_bits_opcode = o_pmod0[1:0] /* synthesis syn_keep=1 */;
  wire  [1:0]   io_csr_vxrm_write_bits = o_pmod0[1:0] /* synthesis syn_keep=1 */;
  wire  [4:0]   io_lsu2rvv_0_bits_addr = o_pmod0[4:0] /* synthesis syn_keep=1 */;
  wire  [6:0]   io_csr_vstart_write_bits = o_pmod0[6:0] /* synthesis syn_keep=1 */;
  wire  [24:0]  io_inst_0_bits_bits = {17'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [24:0]  io_inst_1_bits_bits = {17'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [24:0]  io_inst_2_bits_bits = {17'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [24:0]  io_inst_3_bits_bits = {17'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_inst_0_bits_pc = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_inst_1_bits_pc = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_inst_2_bits_pc = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_inst_3_bits_pc = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_0_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_1_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_2_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_3_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_4_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_5_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_6_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [31:0]  io_rs_7_data = {24'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;
  wire  [127:0] io_lsu2rvv_0_bits_data = {120'h0, o_pmod0[7:0]} /* synthesis syn_keep=1 */;

  wire         io_inst_0_ready /* synthesis syn_keep=1 */;
  wire         io_inst_1_ready /* synthesis syn_keep=1 */;
  wire         io_inst_2_ready /* synthesis syn_keep=1 */;
  wire         io_inst_3_ready /* synthesis syn_keep=1 */;
  wire         io_rd_0_valid /* synthesis syn_keep=1 */;
  wire [4:0]   io_rd_0_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0]  io_rd_0_bits_data /* synthesis syn_keep=1 */;
  wire         io_rd_1_valid /* synthesis syn_keep=1 */;
  wire [4:0]   io_rd_1_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0]  io_rd_1_bits_data /* synthesis syn_keep=1 */;
  wire         io_rd_2_valid /* synthesis syn_keep=1 */;
  wire [4:0]   io_rd_2_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0]  io_rd_2_bits_data /* synthesis syn_keep=1 */;
  wire         io_rd_3_valid /* synthesis syn_keep=1 */;
  wire [4:0]   io_rd_3_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0]  io_rd_3_bits_data /* synthesis syn_keep=1 */;
  wire         io_rvv2lsu_0_valid /* synthesis syn_keep=1 */;
  wire         io_rvv2lsu_0_bits_idx_valid /* synthesis syn_keep=1 */;
  wire [127:0] io_rvv2lsu_0_bits_idx_bits_data /* synthesis syn_keep=1 */;
  wire         io_rvv2lsu_0_bits_vregfile_valid /* synthesis syn_keep=1 */;
  wire [127:0] io_rvv2lsu_0_bits_vregfile_bits_data /* synthesis syn_keep=1 */;
  wire         io_rvv2lsu_0_bits_mask_valid /* synthesis syn_keep=1 */;
  wire [15:0]  io_rvv2lsu_0_bits_mask_bits /* synthesis syn_keep=1 */;
  wire         io_lsu2rvv_0_ready /* synthesis syn_keep=1 */;
  wire         io_configState_valid /* synthesis syn_keep=1 */;
  wire [7:0]   io_configState_bits_vl /* synthesis syn_keep=1 */;
  wire [6:0]   io_configState_bits_vstart /* synthesis syn_keep=1 */;
  wire         io_configState_bits_ma /* synthesis syn_keep=1 */;
  wire         io_configState_bits_ta /* synthesis syn_keep=1 */;
  wire [2:0]   io_configState_bits_sew /* synthesis syn_keep=1 */;
  wire [2:0]   io_configState_bits_lmul /* synthesis syn_keep=1 */;
  wire         io_configState_bits_vill /* synthesis syn_keep=1 */;
  wire         io_async_rd_valid /* synthesis syn_keep=1 */;
  wire [4:0]   io_async_rd_bits_addr /* synthesis syn_keep=1 */;
  wire [31:0]  io_async_rd_bits_data /* synthesis syn_keep=1 */;
  wire [31:0]  io_trap_valid /* synthesis syn_keep=1 */;
  wire [31:0]  io_trap_bits_pc /* synthesis syn_keep=1 */;
  wire [1:0]   io_trap_bits_opcode /* synthesis syn_keep=1 */;
  wire [24:0]  io_trap_bits_bits /* synthesis syn_keep=1 */;
  wire [6:0]   io_csr_vstart /* synthesis syn_keep=1 */;
  wire [1:0]   io_csr_vxrm /* synthesis syn_keep=1 */;
  wire         io_csr_vxsat /* synthesis syn_keep=1 */;
  wire         io_rvv_idle /* synthesis syn_keep=1 */;
  wire [3:0]   io_queue_capacity /* synthesis syn_keep=1 */;
 // =========================================================================
 // --- OUTPUT LOGIC -----------------------------------------
 // =========================================================================

 // =========================================================================
 // --- INSTANTIATIONS -----------------------------------------
 // =========================================================================
 // Inside RvvCoreMini, score() and rvvCore() are instantiated
 // score has been optimized before, so we'll just check rvvCore() here

`ifdef FULL_RVVCOREMINI
  /* synthesis syn_keep=1 */ RvvCoreShim i_rvvCore (
    .clock                                (sys_clk),
    .reset                                (sys_rst),
    .io_inst_0_ready                      (io_inst_0_ready),
    .io_inst_0_valid                      (io_inst_0_valid),
    .io_inst_0_bits_pc                    (io_inst_0_bits_pc),
    .io_inst_0_bits_opcode                (io_inst_0_bits_opcode),
    .io_inst_0_bits_bits                  (io_inst_0_bits_bits),
    .io_inst_1_ready                      (_io_inst_1_ready),
    .io_inst_1_valid                      (io_inst_1_valid),
    .io_inst_1_bits_pc                    (io_inst_1_bits_pc),
    .io_inst_1_bits_opcode                (io_inst_1_bits_opcode),
    .io_inst_1_bits_bits                  (io_inst_1_bits_bits),
    .io_inst_2_ready                      (io_inst_2_ready),
    .io_inst_2_valid                      (io_inst_2_valid),
    .io_inst_2_bits_pc                    (io_inst_2_bits_pc),
    .io_inst_2_bits_opcode                (io_inst_2_bits_opcode),
    .io_inst_2_bits_bits                  (io_inst_2_bits_bits),
    .io_inst_3_ready                      (io_inst_3_ready),
    .io_inst_3_valid                      (io_inst_3_valid),
    .io_inst_3_bits_pc                    (io_inst_3_bits_pc),
    .io_inst_3_bits_opcode                (io_inst_3_bits_opcode),
    .io_inst_3_bits_bits                  (io_inst_3_bits_bits),
    .io_rs_0_valid                        (io_rs_0_valid),
    .io_rs_0_data                         (io_rs_0_data),
    .io_rs_1_valid                        (io_rs_1_valid),
    .io_rs_1_data                         (io_rs_1_data),
    .io_rs_2_valid                        (io_rs_2_valid),
    .io_rs_2_data                         (io_rs_2_data),
    .io_rs_3_valid                        (io_rs_3_valid),
    .io_rs_3_data                         (io_rs_3_data),
    .io_rs_4_valid                        (io_rs_4_valid),
    .io_rs_4_data                         (io_rs_4_data),
    .io_rs_5_valid                        (io_rs_5_valid),
    .io_rs_5_data                         (io_rs_5_data),
    .io_rs_6_valid                        (io_rs_6_valid),
    .io_rs_6_data                         (io_rs_6_data),
    .io_rs_7_valid                        (io_rs_7_valid),
    .io_rs_7_data                         (io_rs_7_data),
    .io_rd_0_valid                        (io_rd_0_valid),
    .io_rd_0_bits_addr                    (io_rd_0_bits_addr),
    .io_rd_0_bits_data                    (io_rd_0_bits_data),
    .io_rd_1_valid                        (io_rd_1_valid),
    .io_rd_1_bits_addr                    (io_rd_1_bits_addr),
    .io_rd_1_bits_data                    (io_rd_1_bits_data),
    .io_rd_2_valid                        (io_rd_2_valid),
    .io_rd_2_bits_addr                    (io_rd_2_bits_addr),
    .io_rd_2_bits_data                    (io_rd_2_bits_data),
    .io_rd_3_valid                        (io_rd_3_valid),
    .io_rd_3_bits_addr                    (io_rd_3_bits_addr),
    .io_rd_3_bits_data                    (io_rd_3_bits_data),
    .io_rvv2lsu_0_ready                   (io_rvv2lsu_0_ready),
    .io_rvv2lsu_0_valid                   (io_rvv2lsu_0_valid),
    .io_rvv2lsu_0_bits_idx_valid          (io_rvv2lsu_0_bits_idx_valid),
    .io_rvv2lsu_0_bits_idx_bits_data      (io_rvv2lsu_0_bits_idx_bits_data),
    .io_rvv2lsu_0_bits_vregfile_valid     (io_rvv2lsu_0_bits_vregfile_valid),
    .io_rvv2lsu_0_bits_vregfile_bits_data (io_rvv2lsu_0_bits_vregfile_bits_data),
    .io_rvv2lsu_0_bits_mask_valid         (io_rvv2lsu_0_bits_mask_valid),
    .io_rvv2lsu_0_bits_mask_bits          (io_rvv2lsu_0_bits_mask_bits),
    .io_lsu2rvv_0_ready                   (io_lsu2rvv_0_ready),
    .io_lsu2rvv_0_valid                   (io_lsu2rvv_0_valid),
    .io_lsu2rvv_0_bits_addr               (io_lsu2rvv_0_bits_addr),
    .io_lsu2rvv_0_bits_data               (io_lsu2rvv_0_bits_data),
    .io_lsu2rvv_0_bits_last               (io_lsu2rvv_0_bits_last),
    .io_configState_valid                 (io_configState_valid),
    .io_configState_bits_vl               (io_configState_bits_vl),
    .io_configState_bits_vstart           (io_configState_bits_vstart),
    .io_configState_bits_ma               (io_configState_bits_ma),
    .io_configState_bits_ta               (io_configState_bits_ta),
    .io_configState_bits_sew              (io_configState_bits_sew),
    .io_configState_bits_lmul             (io_configState_bits_lmul),
    .io_configState_bits_vill             (io_configState_bits_vill),
    .io_async_rd_ready                    (io_async_rd_ready),
    .io_async_rd_valid                    (io_async_rd_valid),
    .io_async_rd_bits_addr                (io_async_rd_bits_addr),
    .io_async_rd_bits_data                (io_async_rd_bits_data),
    .io_trap_valid                        (io_trap_valid),
    .io_trap_bits_pc                      (io_trap_bits_pc),
    .io_trap_bits_opcode                  (io_trap_bits_opcode),
    .io_trap_bits_bits                    (io_trap_bits_bits),
    .io_csr_vstart                        (io_csr_vstart),
    .io_csr_vxrm                          (io_csr_vxrm),
    .io_csr_vxsat                         (io_csr_vxsat),
    .io_csr_vstart_write_valid            (io_csr_vstart_write_valid),
    .io_csr_vstart_write_bits             (io_csr_vstart_write_bits),
    .io_csr_vxrm_write_valid              (io_csr_vxrm_write_valid),
    .io_csr_vxrm_write_bits               (io_csr_vxrm_write_bits),
    .io_csr_vxsat_write_valid             (io_csr_vxsat_write_valid),
    .io_csr_vxsat_write_bits              (io_csr_vxsat_write_bits),
    .io_rvv_idle                          (io_rvv_idle),
    .io_queue_capacity                    (io_queue_capacity)
  ) /* synthesis syn_keep=1 */;
 `else

 `endif

 // =========================================================================
 // --- FINAL OUTPUT ASSIGNMENT ------------------------------------------
 // =========================================================================

 assign o_pmod1[0] = 
  (|io_inst_0_ready)^
  (|io_inst_1_ready)^
  (|io_inst_2_ready)^
  (|io_inst_3_ready)^
  (|io_rd_0_valid);
  
 assign o_pmod1[1] = 
  (|io_rd_1_valid)^
  (|io_rd_2_valid)^
  (|io_rd_3_valid)^
  (|io_rvv2lsu_0_valid)^
  (|io_rvv2lsu_0_bits_idx_valid);
  
 assign o_pmod1[2] = 
  (|io_rvv2lsu_0_bits_vregfile_valid)^
  (|io_rvv2lsu_0_bits_mask_valid)^
  (|io_lsu2rvv_0_ready)^
  (|io_configState_valid)^
  (|io_configState_bits_ma);
  
 assign o_pmod1[3] = 
  (|io_configState_bits_ta)^
  (|io_configState_bits_vill)^
  (|io_async_rd_valid)^
  (|io_csr_vxsat)^
  (|io_trap_bits_bits)^
  (|io_rvv_idle);
  
 assign o_pmod1[4] = 
  (|io_rd_0_bits_addr)^
  (|io_rd_0_bits_data)^
  (|io_rd_1_bits_addr)^
  (|io_rd_1_bits_data)^
  (|io_csr_vstart)^
  (|io_rd_2_bits_addr);
  
 assign o_pmod1[5] = 
  (|io_rd_2_bits_data)^
  (|io_rd_3_bits_addr)^
  (|io_rd_3_bits_data)^
  (|io_rvv2lsu_0_bits_idx_bits_data)^
  (|io_csr_vxrm)^
  (|io_rvv2lsu_0_bits_vregfile_bits_data);
  
 assign o_pmod1[6] = 
  (|io_rvv2lsu_0_bits_mask_bits)^
  (|io_configState_bits_vl)^
  (|io_configState_bits_vstart)^
  (|io_configState_bits_sew)^
  (|io_queue_capacity)^
  (|io_configState_bits_lmul);
  
 assign o_pmod1[7] = 
  (|io_async_rd_bits_addr)^
  (|io_async_rd_bits_data)^
  (|io_trap_valid)^
  (|io_trap_bits_pc)^
  (|io_trap_bits_opcode);
  
`endif // FULL_RVVCOREMINI

endmodule