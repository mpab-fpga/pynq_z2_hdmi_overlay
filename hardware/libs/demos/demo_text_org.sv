// Project F: Ad Astra - Top Greetings (Arty Pmod VGA)
// (C)2022 Will Green, open source hardware released under the MIT License
// Learn more at https://projectf.io/posts/fpga-ad-astra/

`default_nettype none `timescale 1ns / 1ps

module demo_text_org #(
    TXT_X = 0,
    TXT_L1Y = 150,
    TXT_L2Y = 250,
    TXT_SCALX = 8,
    TXT_SCALY = 8,
    TXT_PAUSE = 80,  // change message every N frames
    VRES = 480,
    COORDSPC = 16,  // coordinate space (bits)
    COLSPC = 10  // color space (bits)
) (
    input wire video_clk_pix,
    input wire video_enable,
    input wire vsync,
    input wire hsync,
    input wire frame_start,
    input wire line_start,
    input wire signed [COORDSPC-1:0] sx,
    input wire signed [COORDSPC-1:0] sy,
    output logic [COLSPC-1:0] red,
    output logic [COLSPC-1:0] green,
    output logic [COLSPC-1:0] blue
);

  // aliases begin
  logic clk_sys, rst_sys, rst_pix, clk_pix, de, frame, line;
  localparam CORDW = COORDSPC;
  always_comb begin
    rst_sys = 0;
    rst_pix = 0;
    clk_sys = video_clk_pix;
    clk_pix = video_clk_pix;
    de = video_enable;
    frame = frame_start;
    line = line_start;
  end
  // aliases end

  // greeting message ROM
  localparam GREET_MSGS = 32;  // 32 messages
  localparam GREET_LENGTH = 16;  // each containing 16 code points
  localparam G_ROM_WIDTH = $clog2('h5F);  // highest code point is U+005F
  localparam G_ROM_DEPTH = GREET_MSGS * GREET_LENGTH;
  localparam GREET_FILE = "text_greet.mem";

  logic [$clog2(G_ROM_DEPTH)-1:0] greet_rom_addr;
  logic [G_ROM_WIDTH-1:0] greet_rom_data;  // code point

  rom_sync #(
      .WIDTH (G_ROM_WIDTH),
      .DEPTH (G_ROM_DEPTH),
      .INIT_F(GREET_FILE)
  ) greet_rom (
      .clk (clk_pix),
      .addr(greet_rom_addr),
      .data(greet_rom_data)
  );

  // greeting selector
  localparam MSG_CHG = 80;  // change message every N frames
  logic [$clog2(MSG_CHG)-1:0] cnt_frm;  // frame counter
  logic [$clog2(GREET_MSGS)-1:0] greeting;  // greeting line chosen
  always_ff @(posedge clk_pix) begin
    if (frame) begin
      cnt_frm <= cnt_frm + 1;
      if (cnt_frm == MSG_CHG) begin
        greeting <= greeting + 1;
        cnt_frm  <= 0;
      end
    end
  end

  // font glyph ROM
  localparam FONT_WIDTH = 8;  // width in pixels (also ROM width)
  localparam FONT_HEIGHT = 8;  // height in pixels
  localparam FONT_GLYPHS = 64;  // number of glyphs (0x00 - 0x3F)
  localparam F_ROM_DEPTH = FONT_GLYPHS * FONT_HEIGHT;
  localparam CP_START = 'h20;  // first code point (0x5F - 0x20 = 0x3F)
  localparam FONT_FILE = "font_unscii_8x8_latin_uc.mem";

  logic [$clog2(F_ROM_DEPTH)-1:0] font_rom_addr;
  logic [FONT_WIDTH-1:0] font_rom_data;  // line of glyph pixels

  rom_sync #(
      .WIDTH (FONT_WIDTH),
      .DEPTH (F_ROM_DEPTH),
      .INIT_F(FONT_FILE)
  ) font_rom (
      .clk (clk_pix),
      .addr(font_rom_addr),
      .data(font_rom_data)
  );

  // sprites
  localparam V_RES = 480;  // vertical screen resolution
  localparam SPR_CNT = 8;  // number of sprites
  localparam LINE2 = V_RES / 2;  // where to consider second line of sprites
  localparam SPR_SCALE_X = TXT_SCALX;  // enlarge sprite width by this factor
  localparam SPR_SCALE_Y = TXT_SCALY;  // enlarge sprite height by this factor
  localparam SPR_DMA = 0 - 2 * SPR_CNT;  // start sprite DMA in h-blanking

  // horizontal and vertical screen position of letters
  logic signed [CORDW-1:0] spr_x[SPR_CNT];
  logic signed [CORDW-1:0] spr_y[2];  // 2 lines of sprites
  initial begin
    spr_x[0] = 64;
    spr_x[1] = 128;
    spr_x[2] = 192;
    spr_x[3] = 256;
    spr_x[4] = 320;
    spr_x[5] = 384;
    spr_x[6] = 448;
    spr_x[7] = 512;

    spr_y[0] = 150;
    spr_y[1] = 250;
  end

  // signal to start sprite drawing for two rows of text
  logic spr_start;
  always_comb begin
    spr_start = (sy < LINE2) ? (line && sy == spr_y[0]) : (line && sy == spr_y[1]);
  end

  integer i;  // for looping over sprite signals

  // greeting ROM address
  logic [$clog2(G_ROM_DEPTH)-1:0] msg_start;
  always_comb begin
    greet_rom_addr = 0;
    msg_start = greeting * GREET_LENGTH;  // calculate start of message
    for (i = 0; i < SPR_CNT; i = i + 1) begin
      /* verilator lint_off WIDTH */
      if (sx == SPR_DMA + i)
        greet_rom_addr = (sy < LINE2) ? (msg_start + i) : (msg_start + i + GREET_LENGTH / 2);
      /* verilator lint_on WIDTH */
    end
  end

  // load code point from greeting ROM
  logic [G_ROM_WIDTH-1:0] spr_cp[SPR_CNT];
  always_ff @(posedge clk_pix) begin
    for (i = 0; i < SPR_CNT; i = i + 1) begin
      /* verilator lint_off WIDTH */
      if (sx == SPR_DMA + i + 1) spr_cp[i] <= greet_rom_data;  // wait 1
      /* verilator lint_on WIDTH */
    end
  end

  // font ROM address
  logic [$clog2(F_ROM_DEPTH)-1:0] spr_glyph_addr[SPR_CNT];
  logic [$clog2(FONT_HEIGHT)-1:0] spr_glyph_line[SPR_CNT];
  logic [SPR_CNT-1:0] spr_fdma;  // font ROM DMA slots
  always_comb begin
    font_rom_addr = 0;
    for (i = 0; i < SPR_CNT; i = i + 1) begin
      /* verilator lint_off WIDTH */
      spr_fdma[i] = (sx == SPR_DMA + i + 2);  // wait 2
      spr_glyph_addr[i] = (spr_cp[i] - CP_START) * FONT_HEIGHT;
      if (spr_fdma[i]) font_rom_addr = spr_glyph_addr[i] + spr_glyph_line[i];
      /* verilator lint_on WIDTH */
    end
  end

  // sprite instances
  logic [SPR_CNT-1:0] spr_pix;  // sprite pixels

  genvar m;  // for looping over sprite instances
  generate
    for (m = 0; m < SPR_CNT; m = m + 1) begin : sprite_gen
      sprite #(
          .WIDTH(FONT_WIDTH),
          .HEIGHT(FONT_HEIGHT),
          .SCALE_X(SPR_SCALE_X),
          .SCALE_Y(SPR_SCALE_Y),
          .LSB(0),
          .CORDW(CORDW),
          .ADDRW($clog2(FONT_HEIGHT))
      ) spr0 (
          .clk(clk_pix),
          .rst(rst_pix),
          .start(spr_start),
          .dma_avail(spr_fdma[m]),
          .sx,
          .sprx(spr_x[m]),
          .data_in(font_rom_data),
          .pos(spr_glyph_line[m]),
          .pix(spr_pix[m]),
          /* verilator lint_off PINCONNECTEMPTY */
          .drawing(),
          .done()
          /* verilator lint_on PINCONNECTEMPTY */
      );
    end
  endgenerate

  // font colours
  localparam COLR_A = 'h125;  // initial colour A
  localparam COLR_B = 'h421;  // initial colour B
  localparam SLIN_1A = 'd150;  // 1st line of colour A
  localparam SLIN_1B = 'd178;  // 1st line of colour B
  localparam SLIN_2A = 'd250;  // 2nd line of colour A
  localparam SLIN_2B = 'd278;  // 2nd line of colour B
  localparam LINE_INC = 3;  // lines of each colour

  logic [11:0] font_colr;  // 12 bit colour (4-bit per channel)
  logic [$clog2(LINE_INC)-1:0] cnt_line;
  always_ff @(posedge clk_pix) begin
    if (line) begin
      if (sy == SLIN_1A || sy == SLIN_2A) begin
        cnt_line  <= 0;
        font_colr <= COLR_A;
      end else if (sy == SLIN_1B || sy == SLIN_2B) begin
        cnt_line  <= 0;
        font_colr <= COLR_B;
      end else begin
        cnt_line <= cnt_line + 1;
        if (cnt_line == LINE_INC - 1) begin
          cnt_line  <= 0;
          font_colr <= font_colr + 'h111;
        end
      end
    end
  end

  // text sprite colour
  logic [3:0] red_spr, green_spr, blue_spr;
  always_comb begin
    {red_spr, green_spr, blue_spr} = (spr_pix != 0) ? font_colr : 12'h000;
  end

  // output
  always_ff @(posedge video_clk_pix) begin
    red   <= video_enable && (spr_pix != 0) ? COLSPC'({2{red_spr}}) : COLSPC'(0);
    green <= video_enable && (spr_pix != 0) ? COLSPC'({2{green_spr}}) : COLSPC'(0);
    blue  <= video_enable && (spr_pix != 0) ? COLSPC'({2{blue_spr}}) : COLSPC'(0);
  end
endmodule
