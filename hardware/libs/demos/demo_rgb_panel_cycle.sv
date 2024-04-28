`timescale 1ns / 1ps

module demo_rgb_panel_cycle #(
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
  logic show_blue;
  logic show_green;
  logic show_red;
  logic show_bg;
  logic [COLSPC-1:0] bg_color;
  logic bg_color_dir;
  logic [COLSPC-1:0] bg_start_color;
  logic bg_start_color_dir;

  initial begin
    bg_start_color = 0;
    bg_color = 0;
    bg_start_color_dir = 1;
    bg_color_dir = 1;
  end

  always_ff @(posedge frame_start) begin
    bg_start_color <= bg_start_color_dir ? bg_start_color + 1 : bg_start_color - 1;
    if (bg_start_color_dir && bg_start_color == 254 || !bg_start_color_dir && bg_start_color == 1)
      bg_start_color_dir <= ~bg_start_color_dir;
  end

  always_ff @(posedge line_start) begin
    if (sy == 0) begin
      bg_color <= bg_start_color;
      bg_color_dir <= bg_start_color_dir;
    end else begin
      bg_color <= bg_color_dir ? bg_color + 1 : bg_color - 1;
      if (bg_color_dir && bg_color == 254 || !bg_color_dir && bg_color == 1)
        bg_color_dir <= ~bg_color_dir;
    end
  end

  always_comb begin
    show_blue = sy >= 10 && sy <= 150;
    show_green = sy >= 170 && sy <= 310;
    show_red = sy >= 330 && sy <= 470;
    show_bg = (sx <= 20 || sx >= 620) || (!show_red && !show_green && !show_blue);
  end

  always_ff @(posedge video_clk_pix) begin
    if (show_bg) begin
      red   <= bg_color;
      green <= bg_color;
      blue  <= bg_color;
    end else if (show_red) begin
      red   <= 255;
      green <= 0;
      blue  <= 0;
    end else if (show_green) begin
      red   <= 0;
      green <= 255;
      blue  <= 0;
    end else if (show_blue) begin
      red   <= 0;
      green <= 0;
      blue  <= 255;
    end
  end
endmodule  // VIDEO_source
