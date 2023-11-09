`timescale 1ns / 1ps

module VIDEO_source #(
    COORDSPC = 16,  // coordinate space (bits)
    COLSPC   = 10   // color space (bits)
) (
    input logic video_clk_pix,
    input logic video_enable,
    input logic vsync,
    input logic hsync,
    input logic frame_start,
    input logic line_start,
    input logic signed [COORDSPC-1:0] sx,
    input logic signed [COORDSPC-1:0] sy,
    output logic [COLSPC-1:0] red,
    output logic [COLSPC-1:0] green,
    output logic [COLSPC-1:0] blue
);
  logic [COLSPC-1:0] l1_red, l1_green, l1_blue;
  demo_stars stars (
      .red  (l1_red),
      .green(l1_green),
      .blue (l1_blue),
      .*
  );

  logic [COLSPC-1:0] l2_red, l2_green, l2_blue;
  demo_rasterbars bars (
      .red  (l2_red),
      .green(l2_green),
      .blue (l2_blue),
      .*
  );

  logic [COLSPC-1:0] l3_red, l3_green, l3_blue;
  demo_greet greet (
      .red  (l3_red),
      .green(l3_green),
      .blue (l3_blue),
      .*
  );

  always_ff @(posedge video_clk_pix) begin
    if (l3_red != 0 || l3_green != 0 || l3_green != 0) begin
      red   <= l3_red;
      green <= l3_green;
      blue  <= l3_blue;
    end else if (l2_red != 0 || l2_green != 0 || l2_blue != 0) begin
      red   <= l2_red;
      green <= l2_green;
      blue  <= l2_blue;
    end else begin
      red   <= l1_red;
      green <= l1_green;
      blue  <= l1_blue;
    end
  end

endmodule
