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
import prim_mubi_pkg::*;

module coralnpu_soc
    #(parameter MemInitFile = "",
      parameter int ClockFrequencyMhz = 80)
    (input clk_i,
      input rst_ni,
      input spi_clk_i,
      input spi_csb_i,
      input spi_mosi_i,
      output logic spi_miso_o,
      input prim_mubi_pkg::mubi4_t scanmode_i,
      input top_pkg::uart_sideband_i_t[1 : 0] uart_sideband_i,
      output top_pkg::uart_sideband_o_t[1 : 0] uart_sideband_o,
      output logic io_halted,
      output logic io_fault);

  import tlul_pkg::*;
  import top_pkg::*;

  // Wires are unchanged
  coralnpu_tlul_pkg_128::tl_h2d_t tl_coralnpu_core_i;
  coralnpu_tlul_pkg_128::tl_d2h_t tl_coralnpu_core_o;
  coralnpu_tlul_pkg_128::tl_h2d_t tl_coralnpu_device_o;
  coralnpu_tlul_pkg_128::tl_d2h_t tl_coralnpu_device_i;

  coralnpu_tlul_pkg_32::tl_h2d_t tl_rom_o_32;
  coralnpu_tlul_pkg_32::tl_d2h_t tl_rom_i_32;

  tl_h2d_t tl_sram_o;
  tl_d2h_t tl_sram_i;

  tl_h2d_t tl_uart0_o;
  tl_d2h_t tl_uart0_i;

  tl_h2d_t tl_uart1_o;
  tl_d2h_t tl_uart1_i;

  // --- Temporary Wires for Chisel Interface Type Casting ---
  // ROM
  logic [2:0] rom_a_opcode, rom_a_param, rom_a_instr_type;
  logic [2:0] rom_d_opcode, rom_d_param, rom_d_error;
  
  // SRAM
  logic [2:0] sram_a_opcode, sram_a_param, sram_a_instr_type;
  logic [2:0] sram_d_opcode, sram_d_param, sram_d_error;

  // UART0
  logic [2:0] uart0_a_opcode, uart0_a_param, uart0_a_instr_type;
  logic [2:0] uart0_d_opcode, uart0_d_param, uart0_d_error;

  // UART1
  logic [2:0] uart1_a_opcode, uart1_a_param, uart1_a_instr_type;
  logic [2:0] uart1_d_opcode, uart1_d_param, uart1_d_error;
  
  // --- Assignment Statements for Type Casting ---
  // ROM Assignments
  assign rom_a_opcode     = unsigned'(tl_rom_o_32.a_opcode);
  assign rom_a_param      = unsigned'(tl_rom_o_32.a_param);
  assign rom_a_instr_type = unsigned'(tl_rom_o_32.a_user.instr_type);
  assign rom_d_opcode     = unsigned'(tl_rom_i_32.d_opcode);
  assign rom_d_param      = unsigned'(tl_rom_i_32.d_param);
  assign rom_d_error      = unsigned'(tl_rom_i_32.d_error);

  // SRAM Assignments
  assign sram_a_opcode     = unsigned'(tl_sram_o.a_opcode);
  assign sram_a_param      = unsigned'(tl_sram_o.a_param);
  assign sram_a_instr_type = unsigned'(tl_sram_o.a_user.instr_type);
  assign sram_d_opcode     = unsigned'(tl_sram_i.d_opcode);
  assign sram_d_param      = unsigned'(tl_sram_i.d_param);
  assign sram_d_error      = unsigned'(tl_sram_i.d_error);

  // UART0 Assignments
  assign uart0_a_opcode     = unsigned'(tl_uart0_o.a_opcode);
  assign uart0_a_param      = unsigned'(tl_uart0_o.a_param);
  assign uart0_a_instr_type = unsigned'(tl_uart0_o.a_user.instr_type);
  assign uart0_d_opcode     = unsigned'(tl_uart0_i.d_opcode);
  assign uart0_d_param      = unsigned'(tl_uart0_i.d_param);
  assign uart0_d_error      = unsigned'(tl_uart0_i.d_error);

  // UART1 Assignments
  assign uart1_a_opcode     = unsigned'(tl_uart1_o.a_opcode);
  assign uart1_a_param      = unsigned'(tl_uart1_o.a_param);
  assign uart1_a_instr_type = unsigned'(tl_uart1_o.a_user.instr_type);
  assign uart1_d_opcode     = unsigned'(tl_uart1_i.d_opcode);
  assign uart1_d_param      = unsigned'(tl_uart1_i.d_param);
  assign uart1_d_error      = unsigned'(tl_uart1_i.d_error);
  // -----------------------------------------------------------------


  // UART Instantiations
  uart i_uart0(.clk_i(clk_i),
                .rst_ni(rst_ni),
                .tl_i(tl_uart0_o),
                .tl_o(tl_uart0_i),
                .alert_rx_i(1'b0),
                .alert_tx_o(),
                .racl_policies_i(1'b0),
                .racl_error_o(),
                .cio_rx_i(uart_sideband_i[0].cio_rx),
                .cio_tx_o(uart_sideband_o[0].cio_tx),
                .cio_tx_en_o(uart_sideband_o[0].cio_tx_en),
                .intr_tx_watermark_o(uart_sideband_o[0].intr_tx_watermark),
                .intr_tx_empty_o(uart_sideband_o[0].intr_tx_empty),
                .intr_rx_watermark_o(uart_sideband_o[0].intr_rx_watermark),
                .intr_tx_done_o(uart_sideband_o[0].intr_tx_done),
                .intr_rx_overflow_o(uart_sideband_o[0].intr_rx_overflow),
                .intr_rx_frame_err_o(uart_sideband_o[0].intr_rx_frame_err),
                .intr_rx_break_err_o(uart_sideband_o[0].intr_rx_break_err),
                .intr_rx_timeout_o(uart_sideband_o[0].intr_rx_timeout),
                .intr_rx_parity_err_o(uart_sideband_o[0].intr_rx_parity_err),
                .lsio_trigger_o(uart_sideband_o[0].lsio_trigger));

  uart i_uart1(.clk_i(clk_i),
                .rst_ni(rst_ni),
                .tl_i(tl_uart1_o),
                .tl_o(tl_uart1_i),
                .alert_rx_i(1'b0),
                .alert_tx_o(),
                .racl_policies_i(1'b0),
                .racl_error_o(),
                .cio_rx_i(uart_sideband_i[1].cio_rx),
                .cio_tx_o(uart_sideband_o[1].cio_tx),
                .cio_tx_en_o(uart_sideband_o[1].cio_tx_en),
                .intr_tx_watermark_o(uart_sideband_o[1].intr_tx_watermark),
                .intr_tx_empty_o(uart_sideband_o[1].intr_tx_empty),
                .intr_rx_watermark_o(uart_sideband_o[1].intr_rx_watermark),
                .intr_tx_done_o(uart_sideband_o[1].intr_tx_done),
                .intr_rx_overflow_o(uart_sideband_o[1].intr_rx_overflow),
                .intr_rx_frame_err_o(uart_sideband_o[1].intr_rx_frame_err),
                .intr_rx_break_err_o(uart_sideband_o[1].intr_rx_break_err),
                .intr_rx_timeout_o(uart_sideband_o[1].intr_rx_timeout),
                .intr_rx_parity_err_o(uart_sideband_o[1].intr_rx_parity_err),
                .lsio_trigger_o(uart_sideband_o[1].lsio_trigger));

  // ROM Wires
  logic rom_req;
  logic [10 : 0] rom_addr;
  logic [31 : 0] rom_rdata;
  logic rom_we;
  logic [31 : 0] rom_wdata;
  logic [3 : 0] rom_wmask;
  logic rom_rvalid;

  // ROM Adapter Instantiation
  tlul_adapter_sram #(.SramAw(11),
                      .SramDw(32),
                      .ErrOnWrite(1),
                      .CmdIntgCheck(MuBi4True),
                      .EnableRspIntgGen(1'b1),
                      .EnableDataIntgGen(1'b1))
      i_rom_adapter(.clk_i(clk_i),
                    .rst_ni(rst_ni),
                    .tl_i(tl_rom_o_32),
                    .tl_o(tl_rom_i_32),
                    .req_o(rom_req),
                    .we_o(rom_we),
                    .addr_o(rom_addr),
                    .wdata_o(rom_wdata),
                    .wmask_o(rom_wmask),
                    .rdata_i(rom_rdata),
                    .gnt_i(1'b1),
                    .rvalid_i(rom_rvalid),
                    .en_ifetch_i(prim_mubi_pkg::MuBi4True),
                    .req_type_o(),
                    .intg_error_o(),
                    .user_rsvd_o(),
                    .rerror_i('h0), // FIX: Fully scoped enum cast for tl_error_e
                    .compound_txn_in_progress_o(),
                    .readback_en_i(prim_mubi_pkg::MuBi4False),
                    .readback_error_o(),
                    .wr_collision_i(1'b0),
                    .write_pending_i(1'b0));

  // ROM Primitive Instantiation
  prim_rom_adv #(.Width(32),
                  .Depth(2048),
                  .MemInitFile(MemInitFile))
      i_rom(.clk_i(clk_i),
            .rst_ni(rst_ni),
            .req_i(rom_req),
            .addr_i(rom_addr),
            .rvalid_o(rom_rvalid),
            .rdata_o(rom_rdata),
            .cfg_i(32'h0));

  // SRAM Wires
  logic sram_req;
  logic sram_we;
  logic [11 : 0] sram_addr;
  logic [31 : 0] sram_wdata;
  logic [3 : 0] sram_wmask;
  logic [31 : 0] sram_rdata;
  logic sram_rvalid;

  // SRAM Adapter Instantiation
  tlul_adapter_sram #(.SramAw(12),
                      .SramDw(32),
                      .CmdIntgCheck(MuBi4True),
                      .EnableRspIntgGen(1'b1),
                      .EnableDataIntgGen(1'b1))
      i_sram_adapter(.clk_i(clk_i),
                      .rst_ni(rst_ni),
                      .tl_i(tl_sram_o),
                      .tl_o(tl_sram_i),
                      .req_o(sram_req),
                      .we_o(sram_we),
                      .addr_o(sram_addr),
                      .wdata_o(sram_wdata),
                      .wmask_o(sram_wmask),
                      .rdata_i(sram_rdata),
                      .gnt_i(1'b1),
                      .rvalid_i(sram_rvalid),
                      .en_ifetch_i(prim_mubi_pkg::MuBi4True),
                      .req_type_o(),
                      .intg_error_o(),
                      .user_rsvd_o(),
                      .rerror_i('h0), // FIX: Fully scoped enum cast for tl_error_e
                      .compound_txn_in_progress_o(),
                      .readback_en_i(prim_mubi_pkg::MuBi4False),
                      .readback_error_o(),
                      .wr_collision_i(1'b0),
                      .write_pending_i(1'b0));

  // SRAM Primitive Instantiation
  Sram #(.Width(32),
         .Depth(2048))
      i_sram(.clk_i(clk_i),
              .req_i(sram_req),
              .we_i(sram_we),
              .addr_i(sram_addr),
              .wdata_i(sram_wdata),
              .wmask_i(sram_wmask),
              .rdata_o(sram_rdata),
              .rvalid_o(sram_rvalid));

  // Chisel Subsystem Instantiation
  // FIX: Use temporary logic wires for all enum fields to perform the type cast outside 
  // the module instantiation, resolving the 'Illegal expression in target' error.
  CoralNPUChiselSubsystem i_chisel_subsystem (
    .io_clk_i(clk_i),
    .io_rst_ni(rst_ni),

    // External Device Port 0: rom
    .io_external_devices_ports_0_a_valid(tl_rom_o_32.a_valid),
    .io_external_devices_ports_0_a_bits_opcode(rom_a_opcode),  // FIXED
    .io_external_devices_ports_0_a_bits_param(rom_a_param),   // FIXED
    .io_external_devices_ports_0_a_bits_size(tl_rom_o_32.a_size),
    .io_external_devices_ports_0_a_bits_source(tl_rom_o_32.a_source),
    .io_external_devices_ports_0_a_bits_address(tl_rom_o_32.a_address),
    .io_external_devices_ports_0_a_bits_mask(tl_rom_o_32.a_mask),
    .io_external_devices_ports_0_a_bits_data(tl_rom_o_32.a_data),
    .io_external_devices_ports_0_a_bits_user_rsvd(tl_rom_o_32.a_user.rsvd),
    .io_external_devices_ports_0_a_bits_user_instr_type(rom_a_instr_type), // FIXED
    .io_external_devices_ports_0_a_bits_user_cmd_intg(tl_rom_o_32.a_user.cmd_intg),
    .io_external_devices_ports_0_a_bits_user_data_intg(tl_rom_o_32.a_user.data_intg),
    .io_external_devices_ports_0_d_ready(tl_rom_o_32.d_ready),
    .io_external_devices_ports_0_a_ready(tl_rom_i_32.a_ready),
    .io_external_devices_ports_0_d_valid(tl_rom_i_32.d_valid),
    .io_external_devices_ports_0_d_bits_opcode(rom_d_opcode),  // FIXED
    .io_external_devices_ports_0_d_bits_param(rom_d_param),    // FIXED
    .io_external_devices_ports_0_d_bits_size(tl_rom_i_32.d_size),
    .io_external_devices_ports_0_d_bits_source(tl_rom_i_32.d_source),
    .io_external_devices_ports_0_d_bits_sink(tl_rom_i_32.d_sink),
    .io_external_devices_ports_0_d_bits_data(tl_rom_i_32.d_data),
    .io_external_devices_ports_0_d_bits_error(rom_d_error),    // FIXED
    .io_external_devices_ports_0_d_bits_user_rsp_intg(tl_rom_i_32.d_user.rsp_intg),
    .io_external_devices_ports_0_d_bits_user_data_intg(tl_rom_i_32.d_user.data_intg),

    // External Device Port 1: sram
    .io_external_devices_ports_1_a_valid(tl_sram_o.a_valid),
    .io_external_devices_ports_1_a_bits_opcode(sram_a_opcode),  // FIXED
    .io_external_devices_ports_1_a_bits_param(sram_a_param),   // FIXED
    .io_external_devices_ports_1_a_bits_size(tl_sram_o.a_size),
    .io_external_devices_ports_1_a_bits_source(tl_sram_o.a_source),
    .io_external_devices_ports_1_a_bits_address(tl_sram_o.a_address),
    .io_external_devices_ports_1_a_bits_mask(tl_sram_o.a_mask),
    .io_external_devices_ports_1_a_bits_data(tl_sram_o.a_data),
    .io_external_devices_ports_1_a_bits_user_rsvd(tl_sram_o.a_user.rsvd),
    .io_external_devices_ports_1_a_bits_user_instr_type(sram_a_instr_type), // FIXED
    .io_external_devices_ports_1_a_bits_user_cmd_intg(tl_sram_o.a_user.cmd_intg),
    .io_external_devices_ports_1_a_bits_user_data_intg(tl_sram_o.a_user.data_intg),
    .io_external_devices_ports_1_d_ready(tl_sram_o.d_ready),
    .io_external_devices_ports_1_a_ready(tl_sram_i.a_ready),
    .io_external_devices_ports_1_d_valid(tl_sram_i.d_valid),
    .io_external_devices_ports_1_d_bits_opcode(sram_d_opcode),  // FIXED
    .io_external_devices_ports_1_d_bits_param(sram_d_param),    // FIXED
    .io_external_devices_ports_1_d_bits_size(tl_sram_i.d_size),
    .io_external_devices_ports_1_d_bits_source(tl_sram_i.d_source),
    .io_external_devices_ports_1_d_bits_sink(tl_sram_i.d_sink),
    .io_external_devices_ports_1_d_bits_data(tl_sram_i.d_data),
    .io_external_devices_ports_1_d_bits_error(sram_d_error),    // FIXED
    .io_external_devices_ports_1_d_bits_user_rsp_intg(tl_sram_i.d_user.rsp_intg),
    .io_external_devices_ports_1_d_bits_user_data_intg(tl_sram_i.d_user.data_intg),

    // External Device Port 2: uart0
    .io_external_devices_ports_2_a_valid(tl_uart0_o.a_valid),
    .io_external_devices_ports_2_a_bits_opcode(uart0_a_opcode),  // FIXED
    .io_external_devices_ports_2_a_bits_param(uart0_a_param),   // FIXED
    .io_external_devices_ports_2_a_bits_size(tl_uart0_o.a_size),
    .io_external_devices_ports_2_a_bits_source(tl_uart0_o.a_source),
    .io_external_devices_ports_2_a_bits_address(tl_uart0_o.a_address),
    .io_external_devices_ports_2_a_bits_mask(tl_uart0_o.a_mask),
    .io_external_devices_ports_2_a_bits_data(tl_uart0_o.a_data),
    .io_external_devices_ports_2_a_bits_user_rsvd(tl_uart0_o.a_user.rsvd),
    .io_external_devices_ports_2_a_bits_user_instr_type(uart0_a_instr_type), // FIXED
    .io_external_devices_ports_2_a_bits_user_cmd_intg(tl_uart0_o.a_user.cmd_intg),
    .io_external_devices_ports_2_a_bits_user_data_intg(tl_uart0_o.a_user.data_intg),
    .io_external_devices_ports_2_d_ready(tl_uart0_o.d_ready),
    .io_external_devices_ports_2_a_ready(tl_uart0_i.a_ready),
    .io_external_devices_ports_2_d_valid(tl_uart0_i.d_valid),
    .io_external_devices_ports_2_d_bits_opcode(uart0_d_opcode),  // FIXED
    .io_external_devices_ports_2_d_bits_param(uart0_d_param),    // FIXED
    .io_external_devices_ports_2_d_bits_size(tl_uart0_i.d_size),
    .io_external_devices_ports_2_d_bits_source(tl_uart0_i.d_source),
    .io_external_devices_ports_2_d_bits_sink(tl_uart0_i.d_sink),
    .io_external_devices_ports_2_d_bits_data(tl_uart0_i.d_data),
    .io_external_devices_ports_2_d_bits_error(uart0_d_error),    // FIXED
    .io_external_devices_ports_2_d_bits_user_rsp_intg(tl_uart0_i.d_user.rsp_intg),
    .io_external_devices_ports_2_d_bits_user_data_intg(tl_uart0_i.d_user.data_intg),

    // External Device Port 3: uart1
    .io_external_devices_ports_3_a_valid(tl_uart1_o.a_valid),
    .io_external_devices_ports_3_a_bits_opcode(uart1_a_opcode),  // FIXED
    .io_external_devices_ports_3_a_bits_param(uart1_a_param),   // FIXED
    .io_external_devices_ports_3_a_bits_size(tl_uart1_o.a_size),
    .io_external_devices_ports_3_a_bits_source(tl_uart1_o.a_source),
    .io_external_devices_ports_3_a_bits_address(tl_uart1_o.a_address),
    .io_external_devices_ports_3_a_bits_mask(tl_uart1_o.a_mask),
    .io_external_devices_ports_3_a_bits_data(tl_uart1_o.a_data),
    .io_external_devices_ports_3_a_bits_user_rsvd(tl_uart1_o.a_user.rsvd),
    .io_external_devices_ports_3_a_bits_user_instr_type(uart1_a_instr_type), // FIXED
    .io_external_devices_ports_3_a_bits_user_cmd_intg(tl_uart1_o.a_user.cmd_intg),
    .io_external_devices_ports_3_a_bits_user_data_intg(tl_uart1_o.a_user.data_intg),
    .io_external_devices_ports_3_d_ready(tl_uart1_o.d_ready),
    .io_external_devices_ports_3_a_ready(tl_uart1_i.a_ready),
    .io_external_devices_ports_3_d_valid(tl_uart1_i.d_valid),
    .io_external_devices_ports_3_d_bits_opcode(uart1_d_opcode),  // FIXED
    .io_external_devices_ports_3_d_bits_param(uart1_d_param),    // FIXED
    .io_external_devices_ports_3_d_bits_size(tl_uart1_i.d_size),
    .io_external_devices_ports_3_d_bits_source(tl_uart1_i.d_source),
    .io_external_devices_ports_3_d_bits_sink(tl_uart1_i.d_sink),
    .io_external_devices_ports_3_d_bits_data(tl_uart1_i.d_data),
    .io_external_devices_ports_3_d_bits_error(uart1_d_error),    // FIXED
    .io_external_devices_ports_3_d_bits_user_rsp_intg(tl_uart1_i.d_user.rsp_intg),
    .io_external_devices_ports_3_d_bits_user_data_intg(tl_uart1_i.d_user.data_intg),

    // Peripheral Ports
    .io_external_ports_0(io_halted),
    .io_external_ports_1(io_fault),
    .io_external_ports_2(),
    .io_external_ports_3(1'b0),
    .io_external_ports_4(1'b0),
    .io_external_ports_5(spi_clk_i),
    .io_external_ports_6(spi_csb_i),
    .io_external_ports_7(spi_mosi_i),
    .io_external_ports_8(spi_miso_o)
  );
endmodule
