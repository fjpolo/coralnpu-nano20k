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

module chip_nano20k
    #(parameter MemInitFile = "",
      parameter int ClockFrequencyMhz = 27)
    (
     // PLL?
    //  input clk_p_i,
    //  input clk_n_i,
    //  input rst_ni,

     // System
     input  logic [0:0] clk,
     input  logic [0:0] rst_n,
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
     output logic [1:0] uart_tx_o,
     input  logic [1:0] uart_rx_i

     // DEBUG
    //  output io_halted,
    //  output io_fault,
    //  output io_halted_n,
    //  output io_fault_n,
    );

  parameter ClockFrequencyMhz_81MHz = 81;

  logic clk_81MHz;  // TODO: Need a PLL clk here
  // logic clk_48MHz;  // TODO: Need a PLL clk here
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
  Gowin_rPLL gowinPLL81MHz(
        .clkout(clk_81MHz), //output clkout
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

  // clkgen_wrapper #(.ClockFrequencyMhz(ClockFrequencyMhz))
  //     i_clkgen(.clk_p_i(clk_p_i),
  //              .clk_n_i(clk_n_i),
  //              .rst_ni(rst_ni),
  //              .srst_ni(rst_ni),
  //              .clk_main_o(clk),
  //              .clk_48MHz_o(clk_48MHz),
  //              .clk_aon_o(clk_aon),
  //              .rst_no(rst_n));

  coralnpu_soc #(
    .MemInitFile(""),   // TODO: Add .elf file
    .ClockFrequencyMhz(81)
)
i_coralnpu_soc (
    .clk_i(clk_81MHz),
    .rst_ni(rst_n),
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
