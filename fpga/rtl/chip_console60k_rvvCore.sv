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

module chip_console60k_rvvCore(
     // System
     input  logic sys_clk,     // 120 MHz
     input  logic s0,          // Unused
     input  logic s1,          // Unused
     input  logic s2,          // System Reset Source
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i
     );

  parameter ClockFrequency_81MHz = 81;

  wire sys_rst = s2;

  logic clk_81MHz;       // PLL output clock
  
  // Wires needed for RvvFrontEnd instantiation
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
  Gowin_PLL gowinPLL81MHz(
      .clkout0(clk_81MHz), //output clkout
      .clkin(sys_clk)      //input clkin
    );

//
RvvCore#(.N (4)) core(
      .clk(clk_81MHz),
      .rstn(~sys_rst),
      .vstart(),
      .vxrm(),
      .vxsat(),
      .inst_valid(),
      .inst_data(),
      .inst_ready(),
      .reg_read_valid(),
      .reg_read_data(),
      .reg_write_valid(),
      .reg_write_addr(),
      .reg_write_data(),
      .async_rd_valid(),
      .async_rd_addr(),
      .async_rd_data(),
      .async_rd_ready(),
      .uop_lsu_valid_rvv2lsu(),
      .uop_lsu_idx_valid_rvv2lsu(),
      .uop_lsu_idx_addr_rvv2lsu(),
      .uop_lsu_idx_data_rvv2lsu(),
      .uop_lsu_vregfile_valid_rvv2lsu(),
      .uop_lsu_vregfile_addr_rvv2lsu(),
      .uop_lsu_vregfile_data_rvv2lsu(),
      .uop_lsu_v0_valid_rvv2lsu(),
      .uop_lsu_v0_data_rvv2lsu(),
      .uop_lsu_ready_lsu2rvv(),
      .uop_lsu_valid_lsu2rvv(),
      .uop_lsu_addr_lsu2rvv(),
      .uop_lsu_wdata_lsu2rvv(),
      .uop_lsu_last_lsu2rvv(),
      .uop_lsu_ready_rvv2lsu(),
      .vcsr_valid(),
      .vector_csr(),
      .vcsr_ready(),
      .config_state_valid(),
      .config_state(),
      .rvv_idle(),
      .queue_capacity(),
      .rd_rob2rt_o(),
      .trap_valid_o(),
      .trap_data_o()
  );


endmodule
