`timescale 1ns / 1ps

module demo_rasterbars #(
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
    logic [11:0] bar_colr;
    /* verilator lint_off UNUSED */
    logic bar_up;  // current bar is moving up
    /* verilator lint_on UNUSED */
    render_rasterbars #(
        .VCENTER(220),  // 480 vertical pixels and bars are 40 pixels high
        .COLR_LINES(2),
        .SIN_FILE({"sine_table_64x8.mem"}),
        .SIN_SHIFT(1)
    ) rasters_instance (
        .clk(video_clk_pix),
        .start(frame_start),
        .line(line_start),
        .sy,
        .bar_colr,
        .bar_up
    );

    // separate colour channels
    logic [3:0] paint_r, paint_g, paint_b;
    always_comb {paint_r, paint_g, paint_b} = bar_colr;

    // SDL output (8 bits per colour channel)
    always_ff @(posedge video_clk_pix) begin
        red <= COLSPC'({2{paint_r}});  // double signal width (assumes CHANW=4)
        green <= COLSPC'({2{paint_g}});
        blue <= COLSPC'({2{paint_b}});
    end
endmodule