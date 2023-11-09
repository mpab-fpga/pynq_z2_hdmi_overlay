`timescale 1ns / 1ps

module demo_stars #(
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
    // starfields
    logic sf1_on, sf2_on, sf3_on;
    /* verilator lint_off UNUSED */
    logic [7:0] sf1_star, sf2_star, sf3_star;
    /* verilator lint_on UNUSED */

    starfield #(.INC(-1), .SEED(21'h9A9A9)) sf1 (
        .clk(video_clk_pix),
        .en(1'b1),
        .rst(0),
        .sf_on(sf1_on),
        .sf_star(sf1_star)
    );

    starfield #(.INC(-2), .SEED(21'hA9A9A)) sf2 (
        .clk(video_clk_pix),
        .en(1'b1),
        .rst(0),
        .sf_on(sf2_on),
        .sf_star(sf2_star)
    );

    starfield #(.INC(-4), .MASK(21'h7FF)) sf3 (
        .clk(video_clk_pix),
        .en(1'b1),
        .rst(0),
        .sf_on(sf3_on),
        .sf_star(sf3_star)
    );

    // star brightness
    logic [3:0] starlight;
    always_comb begin
        starlight = (sf1_on) ? sf1_star[7:4] :
                    (sf2_on) ? sf2_star[7:4] :
                    (sf3_on) ? sf3_star[7:4] : 4'h0;
    end

    // VGA output
    always_ff @(posedge video_clk_pix) begin
        red <= video_enable ? COLSPC'({2{starlight}}) : COLSPC'(0);
        green <= video_enable ? COLSPC'({2{starlight}}) : COLSPC'(0);
        blue <= video_enable ? COLSPC'({2{starlight}}) : COLSPC'(0);
    end
endmodule