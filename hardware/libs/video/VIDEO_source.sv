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
  always_ff @(posedge video_clk_pix) begin
    red   <= 255;  // double signal width (assumes CHANW=4)
    green <= 255;
    blue  <= 255;
  end
endmodule
