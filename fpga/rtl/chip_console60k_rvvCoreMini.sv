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

endmodule