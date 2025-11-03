// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`define SYNTHESIS

import prim_mubi_pkg::*;

module chip_console60k(
     // PLL?
    //  input clk_p_i,
    //  input clk_n_i,
    //  input rst_ni,

     // System
     input  logic sys_clk,   // 120 MHz
     input  logic s0,        // Unused
     input  logic s1,        // Unused
     input  logic s2,        // Unused
     // SPI
    //  input spi_clk_i,
    //  input spi_csb_i,
    //  input spi_mosi_i,
    //  output logic spi_miso_o,
    //  output logic spi_clk_probe_o,
    //  output logic spi_csb_probe_o,
    //  output logic spi_mosi_probe_o,
    //  output logic spi_miso_probe_o
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i

     // DEBUG
    //  output io_halted,
    //  output io_fault,
    //  output io_halted_n,
    //  output io_fault_n,
    );

  parameter ClockFrequency_81MHz = 81;

wire sys_rst = s2;

  logic clk_81MHz;      // TODO: Need a PLL clk here
  // logic clk_48MHz;   // TODO: Need a PLL clk here
  // logic clk_aon;

  // DEBUG
  logic io_halted;
  logic io_fault;
  logic io_halted_n;
  logic io_fault_n;

  // SPI
  logic spi_clk_i;
  logic spi_csb_i;
  logic spi_mosi_i;
  logic spi_miso_o;
  logic spi_clk_probe_o;
  logic spi_csb_probe_o;
  logic spi_mosi_probe_o;
  logic spi_miso_probe_o;

  // PLL
  Gowin_PLL gowinPLL81MHz(
        .clkout0(clk_81MHz), //output clkout
        .clkin(sys_clk) //input clkin
    );

  assign spi_clk_probe_o = spi_clk_i;
  assign spi_csb_probe_o = spi_csb_i;
  assign spi_mosi_probe_o = spi_mosi_i;
  assign spi_miso_probe_o = spi_miso_o;

  top_pkg::uart_sideband_i_t[1 : 0] uart_sideband_i;
  top_pkg::uart_sideband_o_t[1 : 0] uart_sideband_o;

  assign uart_sideband_i[0].cio_rx = uart_rx_i[0];
  assign uart_sideband_i[1].cio_rx = uart_rx_i[1];
  assign uart_tx_o[0] = uart_sideband_o[0].cio_tx;
  assign uart_tx_o[1] = uart_sideband_o[1].cio_tx;

  assign io_halted_n = ~io_halted;
  assign io_fault_n = ~io_fault;

  coralnpu_soc #(
    .MemInitFile("coralnpu_v2_hello_world_add_floats.vmem"),
    .ClockFrequencyMhz(ClockFrequency_81MHz)
  )
  i_coralnpu_soc (
    .clk_i(clk_81MHz),
    .rst_ni(~sys_rst),
    .spi_clk_i(spi_clk_i),
    .spi_csb_i(spi_csb_i),
    .spi_mosi_i(spi_mosi_i),
    .spi_miso_o(spi_miso_o),
    .scanmode_i(prim_mubi_pkg::MuBi4False),
    .uart_sideband_i(uart_sideband_i),
    .uart_sideband_o(uart_sideband_o),
    .io_halted(io_halted),
    .io_fault(io_fault)
  );

endmodule
