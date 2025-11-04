`define SYNTHESIS
// Copyright lowRISC contributors (OpenTitan project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Flash phy module package
//

package flash_phy_pkg;

  // flash phy parameters
  localparam int unsigned NumBanks       = flash_ctrl_top_specific_pkg::NumBanks;
  localparam int unsigned InfosPerBank   = flash_ctrl_top_specific_pkg::InfosPerBank;
  localparam int unsigned PagesPerBank   = flash_ctrl_top_specific_pkg::PagesPerBank;
  localparam int unsigned WordsPerPage   = flash_ctrl_top_specific_pkg::WordsPerPage;
  localparam int unsigned BankW          = flash_ctrl_top_specific_pkg::BankW;
  localparam int unsigned PageW          = flash_ctrl_top_specific_pkg::PageW;
  localparam int unsigned WordW          = flash_ctrl_top_specific_pkg::WordW;
  localparam int unsigned BankAddrW      = flash_ctrl_top_specific_pkg::BankAddrW;
  localparam int unsigned DataWidth      = flash_ctrl_top_specific_pkg::DataWidth;
  localparam int unsigned EccWidth       = 8;
  localparam int unsigned MetaDataWidth  = flash_ctrl_top_specific_pkg::MetaDataWidth;
  localparam int unsigned WidthMultiple  = flash_ctrl_top_specific_pkg::WidthMultiple;
  localparam int unsigned NumBuf         = 4; // number of flash read buffers
  localparam int unsigned RspOrderDepth  = 2; // this should be DataWidth / BusWidth
                                             // will switch to this after bus widening
  localparam int unsigned PlainIntgWidth = MetaDataWidth - EccWidth;
  localparam int unsigned PlainDataWidth = DataWidth + PlainIntgWidth;
  //localparam int unsigned ScrDataWidth   = DataWidth + EccWidth;
  localparam int unsigned FullDataWidth  = DataWidth + MetaDataWidth;
  localparam int unsigned InfoTypes      = flash_ctrl_top_specific_pkg::InfoTypes;
  localparam int unsigned InfoTypesWidth = flash_ctrl_top_specific_pkg::InfoTypesWidth;

  // flash ctrl / bus parameters
  localparam int unsigned BusWidth       = flash_ctrl_top_specific_pkg::BusWidth;
  localparam int unsigned BusFullWidth   = flash_ctrl_top_specific_pkg::BusFullWidth;
  localparam int unsigned BusBankAddrW   = flash_ctrl_top_specific_pkg::BusBankAddrW;
  localparam int unsigned BusWordW       = flash_ctrl_top_specific_pkg::BusWordW;
  localparam int unsigned ProgTypes      = flash_ctrl_top_specific_pkg::ProgTypes;

  // address bits remain must be 0
  localparam int unsigned AddrBitsRemain = DataWidth % BusWidth;

  // base index
  // This is the lsb position of the prim flash address when looking at the bus address
  localparam int unsigned LsbAddrBit    = $clog2(WidthMultiple);
  localparam int unsigned WordSelW      = WidthMultiple == 1 ? 1 : LsbAddrBit;

  // scramble / de-scramble parameters
  // Number of cycles the gf_mult is given to complete
  localparam int unsigned KeySize       = 128;
  localparam int unsigned GfMultCycles  = 2;
  // If this value is greater than 1, constraints must be updated for multicycle paths
  localparam int unsigned CipherCycles  = 2;

  // GF(2) irreducible polynomial for flash XEX scrambling scheme.
  // We use the NIST 800-38B recommendation for block cipher modes of operation.
  // See Section "5.3 Subkeys" on page 6:
  // https://nvlpubs.nist.gov/nistpubs/SpecialPublications/NIST.SP.800-38B.pdf
  // Specifically, we use the polynomial: x^64 + x^4 + x^3 + x + 1. Note, the
  // MSB get clipped off below.
  localparam bit[DataWidth-1:0] ScrambleIPoly = DataWidth'(1'b1) << 4 |
                                               DataWidth'(1'b1) << 3 |
                                               DataWidth'(1'b1) << 1 |
                                               DataWidth'(1'b1) << 0;

  // Read buffer metadata
  typedef enum logic [1:0] {
    Invalid     = 2'h0,
    Wip         = 2'h1,
    Valid       = 2'h2,
    Undef       = 2'h3
  } rd_buf_attr_e;

  typedef struct packed {
    logic [PlainDataWidth-1:0] data;
    logic [BankAddrW-1:0] addr; // all address bits preserved to pick return portion
    logic part;
    logic [InfoTypesWidth-1:0] info_sel;
    rd_buf_attr_e attr;
    logic err;
  } rd_buf_t;

  typedef struct packed {
    logic [NumBuf-1:0] buf_sel;
    logic [WordSelW-1:0] word_sel;
    logic intg_ecc_en;
  } rsp_fifo_entry_t;

  localparam int RspOrderFifoWidth = $bits(rsp_fifo_entry_t);

  typedef struct packed {
    logic [BankAddrW-1:0] addr;
    logic descramble;
    logic ecc;
  } rd_attr_t;

  // Flash Operations Supported
  typedef enum logic [1:0] {
    PhyProg,
    PhyPgErase,
    PhyBkErase,
    PhyLastOp
  } flash_phy_op_e;

  // Flash Operations Selected
  typedef enum logic [1:0] {
    None         = 2'h0,
    Host         = 2'h1,
    Ctrl         = 2'h2
  } flash_phy_op_sel_e;

  typedef enum logic {
    ScrambleOp   = 1'b0,
    DeScrambleOp = 1'b1
  } cipher_ops_e;

  // Connections to prim_flash
  typedef struct packed {
    logic rd_req;
    logic prog_req;
    logic prog_last;
    flash_ctrl_top_specific_pkg::flash_prog_e prog_type;
    logic pg_erase_req;
    logic bk_erase_req;
    logic erase_suspend_req;
    logic he;
    logic [BankAddrW-1:0] addr;
    flash_ctrl_top_specific_pkg::flash_part_e part;
    logic [InfoTypesWidth-1:0] info_sel;
    logic [FullDataWidth-1:0] prog_full_data;
  } flash_phy_prim_flash_req_t;

  typedef struct packed {
    logic ack;
    logic done;
    logic [FullDataWidth-1:0] rdata;
  } flash_phy_prim_flash_rsp_t;

  typedef struct packed {
    logic calc_req;
    logic op_req;
    cipher_ops_e op_type;
    logic [BankAddrW-1:0] addr;
    logic [DataWidth-1:0] plain_data;
    logic [DataWidth-1:0] scrambled_data;
  } scramble_req_t;

  typedef struct packed {
    logic calc_ack;
    logic op_ack;
    logic [DataWidth-1:0] mask;
    logic [DataWidth-1:0] plain_data;
    logic [DataWidth-1:0] scrambled_data;
  } scramble_rsp_t;

endpackage // flash_phy_pkg
