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

module chip_console60k_vector_unit(
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



endmodule
