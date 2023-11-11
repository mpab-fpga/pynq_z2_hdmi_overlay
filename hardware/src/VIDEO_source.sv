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

  logic [COLSPC-1:0] te_red, te_green, te_blue;
  demo_text text (
      .red  (te_red),
      .green(te_green),
      .blue (te_blue),
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
    if (te_red != 0 || te_green != 0 || te_blue != 0) begin
      red   <= te_red;
      green <= te_green;
      blue  <= te_blue;
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
