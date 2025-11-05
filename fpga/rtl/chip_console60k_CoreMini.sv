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

// Assuming prim_mubi_pkg and Gowin_PLL are available globally or included elsewhere.
import prim_mubi_pkg::*;

module chip_console60k_CoreMini(
     // System
     input  logic sys_clk,      // 27 MHz
     input  logic s0,           // Used global_en
     input  logic s1,           // Used global_en
     input  logic s2,           // Used global_en (System Reset Source / Write Enable)
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i, // WARN (CV0016): This input is currently unused
     // PMODs (Used for Spi2TLUL Test Path)
     input [7:0] o_pmod0,       // Used as Address and Write Data / SPI Control
     output [7:0] o_pmod1       // Final Output: Driven by XOR chain from CoreMini outputs
     );

 parameter ClockFrequency_81MHz = 81 /* synthesis syn_keep=1 */;

 // sys_rst is high-active reset (s2 is the reset source)
 wire sys_rst = s2 /* synthesis syn_keep=1 */;

 logic clk_81MHz /* synthesis syn_keep=1 */;        // PLL output clock

 // PLL Instantiation (Clock generation - Gowin_PLL must be defined externally)
 Gowin_PLL gowinPLL81MHz(
     .clkout0(clk_81MHz), //output clkout
     .clkin(sys_clk),      //input clkin
     .mdclk(1'b0)         // Tied low to resolve undriven input warning
   ) /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- GLOBAL ENABLE SIGNALS -----------------------------------------------
 // =========================================================================
 // These signals are used to drive inputs and ensure complexity for synthesis
 wire global_en_0 = (~s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
 wire global_en_1 = (~s2)&(~s1)&(s0)  /* synthesis syn_keep=1 */;
 wire global_en_2 = (~s2)&(s1)&(~s0)  /* synthesis syn_keep=1 */;
 wire global_en_3 = (~s2)&(s1)&(s0)   /* synthesis syn_keep=1 */;
 wire global_en_4 = (s2)&(~s1)&(~s0)  /* synthesis syn_keep=1 */;
 wire global_en_5 = (s2)&(~s1)&(s0)   /* synthesis syn_keep=1 */;
 wire global_en_6 = (s2)&(s1)&(~s0)   /* synthesis syn_keep=1 */;
 wire global_en_7 = (s2)&(s1)&(s0)    /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- CoreMini INTERFACE WIRES - CORE MINI PORTS --------------------------
 // =========================================================================

 // Wires for tying off unused/debug inputs to constants (to resolve EX3820)
 logic tied_0_1b;
 logic [3:0] tied_0_4b;
 logic [4:0] tied_0_5b;
 logic [31:0] tied_0_32b;
 logic [127:0] tied_0_128b;

 // INPUT WIRES (Driven by top-level ports or tie-offs)
 logic [31:0] csr_in_value_0      /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic [127:0] ibus_rdata         /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic ibus_fault_valid           /* synthesis syn_keep=1 */; // Tied low
 logic [31:0] ibus_fault_bits_epc /* synthesis syn_keep=1 */; // Tied to constant
 logic [127:0] dbus_rdata         /* synthesis syn_keep=1 */; // Driven by o_pmod0
 logic ebus_dbus_ready            /* synthesis syn_keep=1 */; // Driven by global_en
 logic ebus_fault_valid           /* synthesis syn_keep=1 */; // Tied low
 logic ebus_fault_bits_write      /* synthesis syn_keep=1 */; // Tied low
 logic [31:0] ebus_fault_bits_addr /* synthesis syn_keep=1 */; // Tied to constant
 logic [31:0] ebus_fault_bits_epc  /* synthesis syn_keep=1 */; // Tied to constant
 logic core_irq                   /* synthesis syn_keep=1 */; // Driven by global_en

 // OUTPUT WIRES (Consumed by o_pmod1 or tied off)
 logic [31:0] csr_out_value_0     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_1     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_2     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_3     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_4     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_5     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_6     /* synthesis syn_keep=1 */;
 logic [31:0] csr_out_value_7     /* synthesis syn_keep=1 */;
 logic core_halted                /* synthesis syn_keep=1 */;
 logic core_fault                 /* synthesis syn_keep=1 */;
 logic core_wfi                   /* synthesis syn_keep=1 */;
 logic ibus_valid                 /* synthesis syn_keep=1 */;
 logic [31:0] ibus_addr           /* synthesis syn_keep=1 */;
 logic dbus_valid                 /* synthesis syn_keep=1 */;
 logic dbus_write                 /* synthesis syn_keep=1 */;
 logic [31:0] dbus_addr           /* synthesis syn_keep=1 */;
 logic [127:0] dbus_wdata         /* synthesis syn_keep=1 */;
 logic [15:0] dbus_wmask          /* synthesis syn_keep=1 */;
 logic ebus_dbus_valid            /* synthesis syn_keep=1 */;
 logic ebus_dbus_write            /* synthesis syn_keep=1 */;
 logic [31:0] ebus_dbus_pc        /* synthesis syn_keep=1 */;
 logic [31:0] ebus_dbus_addr      /* synthesis syn_keep=1 */;
 logic [4:0] ebus_dbus_size       /* synthesis syn_keep=1 */;
 logic [127:0] ebus_dbus_wdata    /* synthesis syn_keep=1 */;

 // =========================================================================
 // --- CORE MINI INPUT LOGIC -----------------------------------------------
 // =========================================================================

 // Wires to resolve "Constant is not allowed here" (EX3820) for debug ports
 assign tied_0_1b = 1'b0;
 assign tied_0_4b = 4'h0;
 assign tied_0_5b = 5'h0;
 assign tied_0_32b = 32'h0;
 assign tied_0_128b = 128'h0;

 // Drive CSR input from o_pmod0
 assign csr_in_value_0 = {24'hA5A5A5, o_pmod0};

 // Drive IRQ from a global enable signal
 assign core_irq = global_en_0;

 // Drive bus read data from o_pmod0 for I-bus and D-bus
 // FIX: Replaced multiple assignments with single concatenations to resolve EX0344 (Multiple Drivers)
 // ibus_rdata: [127:8] = 0, [7:0] = o_pmod0
 assign ibus_rdata = {120'h0, o_pmod0};

 // dbus_rdata: [127:16] = 0, [15:8] = o_pmod0, [7:0] = 0
 assign dbus_rdata = {112'h0, o_pmod0, 8'h0};

 // E-bus ready driven by a global enable signal
 assign ebus_dbus_ready = global_en_1;

 // Tie off unused fault signals to constant values
 assign ibus_fault_valid = 1'b0;
 assign ibus_fault_bits_epc = 32'h0;
 assign ebus_fault_valid = 1'b0;
 assign ebus_fault_bits_write = 1'b0;
 assign ebus_fault_bits_addr = 32'h0;
 assign ebus_fault_bits_epc = 32'h0;

 // =========================================================================
 // --- CoreMini INSTANTIATION ----------------------------------------------
 // =========================================================================

 /* synthesis syn_keep=1 */ CoreMini i_CoreMini(
   .clock(sys_clk),
   .reset(sys_rst),
   .io_csr_in_value_0(csr_in_value_0),
   .io_csr_out_value_0(csr_out_value_0),
   .io_csr_out_value_1(csr_out_value_1),
   .io_csr_out_value_2(csr_out_value_2),
   .io_csr_out_value_3(csr_out_value_3),
   .io_csr_out_value_4(csr_out_value_4),
   .io_csr_out_value_5(csr_out_value_5),
   .io_csr_out_value_6(csr_out_value_6),
   .io_csr_out_value_7(csr_out_value_7),
   .io_halted(core_halted),
   .io_fault(core_fault),
   .io_wfi(core_wfi),
   .io_irq(core_irq),
   .io_ibus_valid(ibus_valid),
   .io_ibus_addr(ibus_addr),
   .io_ibus_rdata(ibus_rdata),
   .io_ibus_fault_valid(ibus_fault_valid),
   .io_ibus_fault_bits_epc(ibus_fault_bits_epc),
   .io_dbus_valid(dbus_valid),
   .io_dbus_write(dbus_write),
   .io_dbus_addr(dbus_addr),
   .io_dbus_wdata(dbus_wdata),
   .io_dbus_wmask(dbus_wmask),
   .io_dbus_rdata(dbus_rdata),
   .io_ebus_dbus_valid(ebus_dbus_valid),
   .io_ebus_dbus_ready(ebus_dbus_ready),
   .io_ebus_dbus_write(ebus_dbus_write),
   .io_ebus_dbus_pc(ebus_dbus_pc),
   .io_ebus_dbus_addr(ebus_dbus_addr),
   .io_ebus_dbus_size(ebus_dbus_size),
   .io_ebus_dbus_wdata(ebus_dbus_wdata),
   .io_ebus_dbus_rdata(tied_0_128b), // Use tie-off wire instead of constant
   .io_ebus_fault_valid(ebus_fault_valid),
   .io_ebus_fault_bits_write(ebus_fault_bits_write),
   .io_ebus_fault_bits_addr(ebus_fault_bits_addr),
   .io_ebus_fault_bits_epc(ebus_fault_bits_epc),

   // DEBUG PORTS (Tied low/off using new wires to resolve EX3820)
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
 // --- FINAL OUTPUT ASSIGNMENT ---------------------------------------------
 // =========================================================================

 // Use a combination of CoreMini outputs and global_en to drive o_pmod1
 // to ensure the CoreMini logic is preserved during synthesis.

 // o_pmod1[0]: Core status signals
 assign o_pmod1[0] = core_halted ^ core_wfi ^ global_en_1;

 // o_pmod1[1]: Bus valid signals
 assign o_pmod1[1] = ibus_valid ^ dbus_valid ^ global_en_2;

 // o_pmod1[2]: CSR outputs 0 and 1
 assign o_pmod1[2] = csr_out_value_0[0] ^ csr_out_value_1[0] ^ global_en_3;

 // o_pmod1[3]: CSR outputs 2 and 3
 assign o_pmod1[3] = csr_out_value_2[0] ^ csr_out_value_3[0] ^ global_en_4;

 // o_pmod1[4]: D-bus address LSBs
 assign o_pmod1[4] = dbus_addr[0] ^ dbus_addr[1] ^ global_en_5;

 // o_pmod1[5]: I-bus address LSBs
 assign o_pmod1[5] = ibus_addr[0] ^ ibus_addr[1] ^ global_en_6;

 // o_pmod1[6]: E-bus signals
 assign o_pmod1[6] = ebus_dbus_valid ^ ebus_dbus_write ^ global_en_7;

 // o_pmod1[7]: Mix of CSR output 7 and original input o_pmod0
 assign o_pmod1[7] = csr_out_value_7[0] ^ o_pmod0[7] ^ global_en_0;

 // UART outputs tied off as unused in this minimal test
 assign uart_tx_o = 2'b0;

endmodule