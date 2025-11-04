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

module chip_console60k_frontend(
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

  // Unused sideband assignments (required for top_pkg/uart to resolve)
  assign spi_clk_probe_o = spi_clk_i;
  assign spi_csb_probe_o = spi_csb_i;
  assign spi_mosi_probe_o = spi_mosi_i;
  assign spi_miso_probe_o = spi_miso_o;
  assign io_halted_n = ~io_halted;
  assign io_fault_n = ~io_fault;

  top_pkg::uart_sideband_i_t[1 : 0] uart_sideband_i;
  top_pkg::uart_sideband_o_t[1 : 0] uart_sideband_o;
  assign uart_sideband_i[0].cio_rx = uart_rx_i[0];
  assign uart_sideband_i[1].cio_rx = uart_rx_i[1];
  
  // Connect remaining required signals/ports to dummy values
  assign uart_tx_o[1] = 1'b0; // Unused output

  // --- Start RVV Logic and Instantiation ---

  // Enum type for SEW. (Definitions remain the same)
  typedef enum logic [2:0] {
    SEW8=0,
    SEW16=1,
    SEW32=2,
    SEW64=3
  } RVVSEW;

  // Enum type for LMUL. (Definitions remain the same)
  typedef enum logic [2:0] {
    LMUL1=0,
    LMUL2=1,
    LMUL4=2,
    LMUL8=3,
    LMULRESERVED=4,
    LMUL1_8=5, // 1/8
    LMUL1_4=6, // 1/4
    LMUL1_2=7  // 1/2
  } RVVLMUL;

  // Enum type for vtype.vxrm: rounding mode
  typedef enum logic [1:0] {
    RNU = 0,
    RNE = 1,
    RDN = 2,
    ROD = 3
  } RVVXRM;

  // The architectural configuration state of the RVV core.
  typedef struct packed {
    logic                           vill;
    logic [`VL_WIDTH-1:0]           vl;       
    logic [`VSTART_WIDTH-1:0]       vstart;
    logic [`VTYPE_VMA_WIDTH-1:0]    ma;        
    logic [`VTYPE_VTA_WIDTH-1:0]    ta;        
    RVVXRM                          xrm;        
    logic [`VCSR_VXSAT_WIDTH-1:0]   xsat;  
    RVVSEW                          sew;
    RVVLMUL                         lmul;
  } RVVConfigState;

  // Enum to encode the major opcode of the instruction.
  typedef enum logic [1:0] {
    LOAD=0,
    STORE=1,
    RVV=2
  } RVVOpCode;

  // A decoded instruction forwarded to the RVVCore from the scalar core.
  typedef struct packed {
    logic [`PC_WIDTH-1:0] pc;
    RVVOpCode             opcode;
    logic [24:0]          bits;
  } RVVInstruction;

  // An command internal to the RVVCore.
  typedef struct packed {
  `ifdef TB_SUPPORT
    logic [`PC_WIDTH-1:0] inst_pc;
  `endif
    RVVOpCode             opcode;
    logic [24:0]          bits;
    logic [31:0]          rs1;
    RVVConfigState        arch_state;
  } RVVCmd;

  // Wires for RvvFrontEnd interface
  localparam N = 4;
  localparam CMD_BUFFER_MAX_CAPACITY = 16;
  RVVConfigState config_state;
  wire config_state_valid;
  RVVInstruction trap_data_o;
  logic trap_valid_o;
  logic [N-1:0] frontend_cmd_valid;
  RVVCmd [N-1:0] frontend_cmd_data;
  logic [$clog2(2*N + 1)-1:0] queue_capacity_internal = '0; // Tie-off
  logic [$clog2(2*N + 1)-1:0] queue_capacity;
  logic [N-1:0] reg_write_valid;
  logic [4:0] [N-1:0] reg_write_addr;
  logic [31:0] [N-1:0] reg_write_data;
  logic [(2*N)-1:0] reg_read_valid = '0; // Tie-off
  logic [31:0] [(2*N)-1:0] reg_read_data = '0; // Tie-off
  logic [N-1:0] inst_valid = '0; // Tie-off
  RVVInstruction [N-1:0] inst_data = '0; // Tie-off
  logic [N-1:0] inst_ready;
  logic [`VSTART_WIDTH-1:0] vstart = '0; // Tie-off
  logic [1:0] vxrm = '0; // Tie-off
  logic vxsat = '0; // Tie-off

  // Wires for synthesis observability
  wire any_cmd_valid = |frontend_cmd_valid; // OR reduction of all command valid bits

  // *** THE FIX ***
  // Connect a signal driven by RvvFrontEnd to a top-level output
  assign uart_tx_o[0] = any_cmd_valid;

  // RvvFrontEnd Instantiation
  RvvFrontEnd#(.N(4)) frontend(
      .clk(clk_81MHz), // Use the PLL output clock
      .rstn(~sys_rst),
      .vstart_i(vstart),
      .vxrm_i(vxrm),
      .vxsat_i(vxsat),
      .inst_valid_i(inst_valid),
      .inst_data_i(inst_data),
      .inst_ready_o(inst_ready),
      .reg_read_valid_i(reg_read_valid),
      .reg_read_data_i(reg_read_data),
      .reg_write_valid_o(reg_write_valid),
      .reg_write_addr_o(reg_write_addr),
      .reg_write_data_o(reg_write_data),
      .cmd_valid_o(frontend_cmd_valid),
      .cmd_data_o(frontend_cmd_data),
      .queue_capacity_i(queue_capacity_internal),
      .queue_capacity_o(queue_capacity),
      .trap_valid_o(trap_valid_o),
      .trap_data_o(trap_data_o),
      .config_state_valid(config_state_valid),
      .config_state(config_state)
    );

endmodule
