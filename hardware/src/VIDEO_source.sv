`timescale 1ns / 1ps

module VIDEO_source #(
    COORDSPC = 16,  // coordinate space (bits)
    COLSPC   = 10   // color space (bits)
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
  logic [COLSPC-1:0] st_red, st_green, st_blue;
  demo_stars stars (
      .red  (st_red),
      .green(st_green),
      .blue (st_blue),
      .*
  );

  logic [COLSPC-1:0] rb_red, rb_green, rb_blue;
  demo_rasterbars bars (
      .red  (rb_red),
      .green(rb_green),
      .blue (rb_blue),
      .*
  );

  // logic [COLSPC-1:0] te_red, te_green, te_blue;
  // demo_text text (
  //     .red  (te_red),
  //     .green(te_green),
  //     .blue (te_blue),
  //     .*
  // );

  logic [COLSPC-1:0] te1_red, te1_green, te1_blue;
  demo_text #(
      .TXT_X(32),
      .TXT_L1Y(64),
      .TXT_L2Y(160),
      .TXT_SCALX(4),
      .TXT_SCALY(4),
      .TXT_PAUSE(60)
  ) text1 (
      .red  (te1_red),
      .green(te1_green),
      .blue (te1_blue),
      .*
  );

  logic [COLSPC-1:0] te2_red, te2_green, te2_blue;
  demo_text #(
      .TXT_X(352),
      .TXT_L1Y(64),
      .TXT_L2Y(160),
      .TXT_SCALX(4),
      .TXT_SCALY(4),
      .TXT_PAUSE(60)
  ) text2 (
      .red  (te2_red),
      .green(te2_green),
      .blue (te2_blue),
      .*
  );

  logic [COLSPC-1:0] te3_red, te3_green, te3_blue;
  demo_text #(
      .TXT_X(32),
      .TXT_L1Y(304),
      .TXT_L2Y(400),
      .TXT_SCALX(4),
      .TXT_SCALY(4),
      .TXT_PAUSE(60)
  ) text3 (
      .red  (te3_red),
      .green(te3_green),
      .blue (te3_blue),
      .*
  );

  logic [COLSPC-1:0] te4_red, te4_green, te4_blue;
  demo_text #(
      .TXT_X(352),
      .TXT_L1Y(304),
      .TXT_L2Y(400),
      .TXT_SCALX(4),
      .TXT_SCALY(4),
      .TXT_PAUSE(60)
  ) text4 (
      .red  (te4_red),
      .green(te4_green),
      .blue (te4_blue),
      .*
  );

  logic [COLSPC-1:0] ss_red, ss_green, ss_blue;
  demo_sinescroll sinescroll (
      .red  (ss_red),
      .green(ss_green),
      .blue (ss_blue),
      .*
  );

  always_ff @(posedge video_clk_pix) begin
    // if (te_red != 0 || te_green != 0 || te_blue != 0) begin
    //   red   <= te_red;
    //   green <= te_green;
    //   blue  <= te_blue;
    if (te1_red != 0 || te1_green != 0 || te1_blue != 0) begin
      red   <= te1_red;
      green <= te1_green;
      blue  <= te1_blue;
    end else if (te2_red != 0 || te2_green != 0 || te2_blue != 0) begin
      red   <= te2_red;
      green <= te2_green;
      blue  <= te2_blue;
    end else if (te3_red != 0 || te3_green != 0 || te3_blue != 0) begin
      red   <= te3_red;
      green <= te3_green;
      blue  <= te3_blue;
    end else if (te4_red != 0 || te4_green != 0 || te4_blue != 0) begin
      red   <= te4_red;
      green <= te4_green;
      blue  <= te4_blue;
    end else if (ss_red != 0 || ss_green != 0 || ss_blue != 0) begin
      red   <= ss_red;
      green <= ss_green;
      blue  <= ss_blue;
    end else if (rb_red != 0 || rb_green != 0 || rb_blue != 0) begin
      red   <= rb_red;
      green <= rb_green;
      blue  <= rb_blue;
    end else begin
      red   <= st_red;
      green <= st_green;
      blue  <= st_blue;
    end
  end

endmodule
