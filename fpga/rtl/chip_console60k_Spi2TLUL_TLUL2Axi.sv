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

module chip_console60k_Spi2TLUL_TLUL2Axi(
     // System
     input  logic sys_clk,     // 27 MHz
     input  logic s0,          // Used in global_en
     input  logic s1,          // Used in global_en
     input  logic s2,          // Used in global_en (System Reset Source / Write Enable)
     // UART
     output wire [1:0] uart_tx_o,
     input  wire [1:0] uart_rx_i,
     // PMODs (Used for Spi2TLUL Test Path)
     input [7:0] o_pmod0,      // Used as Address and Write Data / SPI Control
     output [7:0] o_pmod1      // Final Output: Driven by XOR chain from Spi2TLUL/TLUL2Axi outputs
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
  
  // =========================================================================
  // --- GLOBAL ENABLE SIGNALS -----------------------------------------------
  // =========================================================================
  wire global_en_0 = (~s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_1 = (~s2)&(~s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_2 = (~s2)&(s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_3 = (~s2)&(s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_4 = (s2)&(~s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_5 = (s2)&(~s1)&(s0) /* synthesis syn_keep=1 */;
  wire global_en_6 = (s2)&(s1)&(~s0) /* synthesis syn_keep=1 */;
  wire global_en_7 = (s2)&(s1)&(s0) /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- SPI2TLUL INTERFACE WIRES --------------------------------------------
  // =========================================================================

  // Inputs to Spi2TLUL (Driven by o_pmod0 and global_en)
  logic         Spi2TLUL_io_spi_clk /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_spi_csb /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_spi_mosi /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_d_ready /* synthesis syn_keep=1 */; 
  logic [127:0] Spi2TLUL_io_tl_a_bits_data /* synthesis syn_keep=1 */; 
  
  logic [127:0] dummy_tl_a_bits_data /* synthesis syn_keep=1 */; 

  // Outputs from Spi2TLUL (Driven by Spi2TLUL, consumed by TLUL2Axi or final XOR)
  // These are the intermediate TileLink A-channel signals
  logic         Spi2TLUL_io_spi_miso /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_ready /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_valid /* synthesis syn_keep=1 */;
  logic [2:0]   Spi2TLUL_io_tl_a_bits_opcode /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_bits_param /* synthesis syn_keep=1 */;
  logic [3:0]   Spi2TLUL_io_tl_a_bits_size /* synthesis syn_keep=1 */;
  logic [5:0]   Spi2TLUL_io_tl_a_bits_source /* synthesis syn_keep=1 */;
  logic [31:0]  Spi2TLUL_io_tl_a_bits_address /* synthesis syn_keep=1 */;
  logic [15:0]  Spi2TLUL_io_tl_a_bits_mask /* synthesis syn_keep=1 */;
  logic [4:0]   Spi2TLUL_io_tl_a_bits_user_rsvd /* synthesis syn_keep=1 */;
  logic [3:0]   Spi2TLUL_io_tl_a_bits_user_instr_type /* synthesis syn_keep=1 */;
  logic [6:0]   Spi2TLUL_io_tl_a_bits_user_cmd_intg /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_a_bits_user_data_intg /* synthesis syn_keep=1 */;
  
  // These are the intermediate TileLink D-channel signals (Driven by TLUL2Axi, consumed by Spi2TLUL)
  logic         Spi2TLUL_io_tl_d_valid /* synthesis syn_keep=1 */;
  logic [2:0]   Spi2TLUL_io_tl_d_bits_opcode /* synthesis syn_keep=1 */;
  logic [127:0] Spi2TLUL_io_tl_d_bits_data /* synthesis syn_keep=1 */;
  logic         Spi2TLUL_io_tl_d_bits_error /* synthesis syn_keep=1 */;
  
  // Unused TileLink D-channel wires from Spi2TLUL (used for port completeness)
  logic Spi2TLUL_io_tl_d_bits_param;
  logic [3:0] Spi2TLUL_io_tl_d_bits_size /* synthesis syn_keep=1 */;
  logic [5:0] Spi2TLUL_io_tl_d_bits_source /* synthesis syn_keep=1 */;
  logic Spi2TLUL_io_tl_d_bits_sink /* synthesis syn_keep=1 */;
  logic [6:0] Spi2TLUL_io_tl_d_bits_user_rsp_intg /* synthesis syn_keep=1 */;
  logic Spi2TLUL_io_tl_d_bits_user_data_intg /* synthesis syn_keep=1 */;

  // =========================================================================
  // --- TLUL2Axi INTERFACE WIRES (AXI signals are internal to this wrapper) -
  // =========================================================================
  
  // TLUL to AXI is an adapter. We only need the TLUL input/output ports.
  // We'll use the existing Spi2TLUL wires for the TLUL A and D channel interface, 
  // but we must define the AXI side signals for completeness (or tie them off).
  
  // TLUL INPUT (A-channel, driven by Spi2TLUL) - Already defined above
  // TLUL OUTPUT (D-channel, driven to Spi2TLUL) - Already defined above

  // Internal AXI-Lite Signals (AXI-Lite slave to TLUL master)
  logic         TLUL2Axi_aw_ready;
  logic         TLUL2Axi_aw_valid;
  logic [31:0]  TLUL2Axi_aw_addr;
  logic [2:0]   TLUL2Axi_aw_prot;
  // ... (other AXI-Lite signals are omitted for brevity, but needed in a real TLUL2Axi module)

  logic         TLUL2Axi_ar_ready;
  logic         TLUL2Axi_ar_valid;
  logic [31:0]  TLUL2Axi_ar_addr;
  
  logic         TLUL2Axi_w_ready;
  logic         TLUL2Axi_w_valid;
  
  logic         TLUL2Axi_r_ready;
  logic         TLUL2Axi_r_valid;
  logic [31:0]  TLUL2Axi_r_data;
  logic [1:0]   TLUL2Axi_r_resp;
  
  logic         TLUL2Axi_b_ready;
  logic         TLUL2Axi_b_valid;
  logic [1:0]   TLUL2Axi_b_resp;

  // =========================================================================
  // --- DRIVING SPI2TLUL INPUTS ---------------------------------------------
  // =========================================================================

  // Use o_pmod0 to drive critical SPI signals
  assign Spi2TLUL_io_spi_clk    = o_pmod0[0]; // SPI Clock from LSB
  assign Spi2TLUL_io_spi_mosi   = o_pmod0[1]; // SPI MOSI data
  
  // Use a global enable signal to drive the Chip Select (Active Low)
  assign Spi2TLUL_io_spi_csb    = ~global_en_0; 
  
  // Drive the wide TL data input with o_pmod0
  assign Spi2TLUL_io_tl_a_bits_data = {120'b0, o_pmod0[7:3], 3'b0};

  // The signal Spi2TLUL_io_tl_d_ready is driven by the internal Spi2TLUL module (Master Ready)
  // and is NOT driven by o_pmod0.

  // =========================================================================
  // --- SPI2TLUL INSTANTIATION (Master TLUL) --------------------------------
  // =========================================================================
  
  /* synthesis syn_keep=1 */ Spi2TLUL i_Spi2TLUL(
    .clock(sys_clk),
    .reset(sys_rst),
    .io_spi_clk(Spi2TLUL_io_spi_clk),
    .io_spi_csb(Spi2TLUL_io_spi_csb),
    .io_spi_mosi(Spi2TLUL_io_spi_mosi),
    .io_spi_miso(Spi2TLUL_io_spi_miso),
    
    // **TLUL Master Output (A-channel) -> TLUL2Axi Input**
    .io_tl_a_ready(Spi2TLUL_io_tl_a_ready),
    .io_tl_a_valid(Spi2TLUL_io_tl_a_valid),
    .io_tl_a_bits_opcode(Spi2TLUL_io_tl_a_bits_opcode),
    .io_tl_a_bits_param(Spi2TLUL_io_tl_a_bits_param),
    .io_tl_a_bits_size(Spi2TLUL_io_tl_a_bits_size),
    .io_tl_a_bits_source(Spi2TLUL_io_tl_a_bits_source),
    .io_tl_a_bits_address(Spi2TLUL_io_tl_a_bits_address),
    .io_tl_a_bits_mask(Spi2TLUL_io_tl_a_bits_mask),
    .io_tl_a_bits_data(dummy_tl_a_bits_data), // Driven by our assign statement
    .io_tl_a_bits_user_rsvd(Spi2TLUL_io_tl_a_bits_user_rsvd),
    .io_tl_a_bits_user_instr_type(Spi2TLUL_io_tl_a_bits_user_instr_type),
    .io_tl_a_bits_user_cmd_intg(Spi2TLUL_io_tl_a_bits_user_cmd_intg),
    .io_tl_a_bits_user_data_intg(Spi2TLUL_io_tl_a_bits_user_data_intg),

    // **TLUL Master Input (D-channel) <- TLUL2Axi Output**
    .io_tl_d_ready(Spi2TLUL_io_tl_d_ready),
    .io_tl_d_valid(Spi2TLUL_io_tl_d_valid),
    .io_tl_d_bits_opcode(Spi2TLUL_io_tl_d_bits_opcode),
    .io_tl_d_bits_param(Spi2TLUL_io_tl_d_bits_param),
    .io_tl_d_bits_size(Spi2TLUL_io_tl_d_bits_size),
    .io_tl_d_bits_source(Spi2TLUL_io_tl_d_bits_source),
    .io_tl_d_bits_sink(Spi2TLUL_io_tl_d_bits_sink),
    .io_tl_d_bits_data(Spi2TLUL_io_tl_d_bits_data),
    .io_tl_d_bits_user_rsp_intg(Spi2TLUL_io_tl_d_bits_user_rsp_intg),
    .io_tl_d_bits_user_data_intg(Spi2TLUL_io_tl_d_bits_user_data_intg),
    .io_tl_d_bits_error(Spi2TLUL_io_tl_d_bits_error)
  ) /* synthesis syn_keep=1 */;
  
  // =========================================================================
  // --- TLUL2AXI INSTANTIATION (Slave TLUL / Master AXI) --------------------
  // =========================================================================
  
  /* synthesis syn_keep=1 */ TLUL2Axi i_TLUL2Axi(
    .clock(sys_clk),
    .reset(sys_rst),
    
    // **TLUL Slave Input (A-channel) <- Spi2TLUL Output**
    .io_tl_a_ready(Spi2TLUL_io_tl_a_ready),
    .io_tl_a_valid(Spi2TLUL_io_tl_a_valid),
    .io_tl_a_bits_opcode(Spi2TLUL_io_tl_a_bits_opcode),
    .io_tl_a_bits_param(Spi2TLUL_io_tl_a_bits_param),
    .io_tl_a_bits_size(Spi2TLUL_io_tl_a_bits_size),
    .io_tl_a_bits_source(Spi2TLUL_io_tl_a_bits_source),
    .io_tl_a_bits_address(Spi2TLUL_io_tl_a_bits_address),
    .io_tl_a_bits_mask(Spi2TLUL_io_tl_a_bits_mask),
    .io_tl_a_bits_data(Spi2TLUL_io_tl_a_bits_data), // Use the assigned Spi2TLUL input wire
    .io_tl_a_bits_user_rsvd(Spi2TLUL_io_tl_a_bits_user_rsvd),
    .io_tl_a_bits_user_instr_type(Spi2TLUL_io_tl_a_bits_user_instr_type),
    .io_tl_a_bits_user_cmd_intg(Spi2TLUL_io_tl_a_bits_user_cmd_intg),
    .io_tl_a_bits_user_data_intg(Spi2TLUL_io_tl_a_bits_user_data_intg),
    
    // **TLUL Slave Output (D-channel) -> Spi2TLUL Input**
    .io_tl_d_ready(Spi2TLUL_io_tl_d_ready),
    .io_tl_d_valid(Spi2TLUL_io_tl_d_valid),
    .io_tl_d_bits_opcode(Spi2TLUL_io_tl_d_bits_opcode),
    .io_tl_d_bits_param(Spi2TLUL_io_tl_d_bits_param),
    .io_tl_d_bits_size(Spi2TLUL_io_tl_d_bits_size),
    .io_tl_d_bits_source(Spi2TLUL_io_tl_d_bits_source),
    .io_tl_d_bits_sink(Spi2TLUL_io_tl_d_bits_sink),
    .io_tl_d_bits_data(Spi2TLUL_io_tl_d_bits_data),
    .io_tl_d_bits_user_rsp_intg(Spi2TLUL_io_tl_d_bits_user_rsp_intg),
    .io_tl_d_bits_user_data_intg(Spi2TLUL_io_tl_d_bits_user_data_intg),
    .io_tl_d_bits_error(Spi2TLUL_io_tl_d_bits_error)
//  ,

    // **AXI-Lite Master Output (Tie off, for synthesis completeness)**
//    .io_axi4lite_aw_ready(TLUL2Axi_aw_ready),
//    .io_axi4lite_aw_valid(TLUL2Axi_aw_valid),
//    .io_axi4lite_aw_addr(TLUL2Axi_aw_addr),
//    .io_axi4lite_aw_prot(TLUL2Axi_aw_prot),

//    .io_axi4lite_w_ready(TLUL2Axi_w_ready),
//    .io_axi4lite_w_valid(TLUL2Axi_w_valid),

//    .io_axi4lite_b_ready(TLUL2Axi_b_ready),
//    .io_axi4lite_b_valid(TLUL2Axi_b_valid),
//    .io_axi4lite_b_resp(TLUL2Axi_b_resp),
//    
//    .io_axi4lite_ar_ready(TLUL2Axi_ar_ready),
//    .io_axi4lite_ar_valid(TLUL2Axi_ar_valid),
//    .io_axi4lite_ar_addr(TLUL2Axi_ar_addr),

//    .io_axi4lite_r_ready(TLUL2Axi_r_ready),
//    .io_axi4lite_r_valid(TLUL2Axi_r_valid),
//    .io_axi4lite_r_data(TLUL2Axi_r_data),
//    .io_axi4lite_r_resp(TLUL2Axi_r_resp)
    
  ) /* synthesis syn_keep=1 */;


  // =========================================================================
  // --- FINAL OUTPUT ASSIGNMENT (Forced Dependency) -------------------------
  // =========================================================================
  
  // To ensure the TLUL2Axi module is not optimized away, its internal AXI signals
  // must contribute to the top-level output, o_pmod1.
  
  // NOTE: Re-purpose two bits of o_pmod1 to include TLUL2Axi outputs.
  
  // Bits 0-5 use Spi2TLUL outputs as before:
  assign o_pmod1[0] = Spi2TLUL_io_spi_miso ^ Spi2TLUL_io_tl_d_bits_error ^ global_en_1;
  assign o_pmod1[1] = Spi2TLUL_io_tl_a_valid ^ Spi2TLUL_io_tl_a_ready ^ Spi2TLUL_io_tl_a_bits_param;
  assign o_pmod1[2] = Spi2TLUL_io_tl_a_bits_opcode[0] ^ Spi2TLUL_io_tl_d_bits_opcode[1] ^ Spi2TLUL_io_tl_a_bits_user_data_intg;
  assign o_pmod1[3] = Spi2TLUL_io_tl_a_bits_size[0] ^ Spi2TLUL_io_tl_d_bits_data[0] ^ Spi2TLUL_io_tl_a_bits_user_cmd_intg[0];
  assign o_pmod1[4] = Spi2TLUL_io_tl_a_bits_source[0] ^ Spi2TLUL_io_tl_d_bits_data[1] ^ Spi2TLUL_io_tl_a_bits_address[0];
  assign o_pmod1[5] = Spi2TLUL_io_tl_a_bits_mask[0] ^ Spi2TLUL_io_tl_d_bits_data[2] ^ Spi2TLUL_io_tl_a_bits_user_rsvd[0];
  
  // Bits 6-7 now depend on signals internal to TLUL2Axi, forcing its synthesis.
  // Use a couple of AXI READY/VALID signals:
  assign o_pmod1[6] = TLUL2Axi_ar_valid ^ TLUL2Axi_aw_ready ^ global_en_3; 
  assign o_pmod1[7] = Spi2TLUL_io_tl_d_ready ^ TLUL2Axi_r_valid ^ global_en_7;
                                                                           
endmodule