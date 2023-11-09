`timescale 1ns / 1ps

module top_HDMI_ #(
) (
    input sysclk,  // 125MHz
    output [2:0] hdmi_tx_d_p,
    output [2:0] hdmi_tx_d_n,
    output hdmi_tx_clk_p,
    output hdmi_tx_clk_n
);
  top_HDMI hdmi (
  .sysclk(sysclk),
  .hdmi_tx_d_p(hdmi_tx_d_p),
  .hdmi_tx_d_n(hdmi_tx_d_n),
  .hdmi_tx_clk_p(hdmi_tx_clk_p),
  .hdmi_tx_clk_n(hdmi_tx_clk_n)
  );
endmodule  // top_HDMI
