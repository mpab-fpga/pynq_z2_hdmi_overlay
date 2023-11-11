# build settings
set design_name "HDMI"
set fpga_part "xc7z020clg400-1"
set bitstream_filepath [file normalize "./vivado.runs/impl_1/design_1_wrapper.bit"]

# set reference directories for source files
set src_dir [file normalize "../src"]
set lib_dir [file normalize "../lib"]

# read design sources
read_verilog -sv [file normalize "${src_dir}/./bitmap_addr.sv"]
read_verilog -sv [file normalize "${src_dir}/./bram_sdp.sv"]
read_verilog -sv [file normalize "${src_dir}/./clut_simple.sv"]
read_verilog -sv [file normalize "${src_dir}/./demo_rasterbars.sv"]
read_verilog -sv [file normalize "${src_dir}/./demo_sinescroll.sv"]
read_verilog -sv [file normalize "${src_dir}/./demo_stars.sv"]
read_verilog -sv [file normalize "${src_dir}/./demo_text.sv"]
read_verilog -sv [file normalize "${src_dir}/./draw_char.sv"]
read_verilog -sv [file normalize "${src_dir}/./get_glyph_line.sv"]
read_verilog -sv [file normalize "${src_dir}/./HDMI_encoder.sv"]
read_verilog -sv [file normalize "${src_dir}/./lfsr.sv"]
read_verilog -sv [file normalize "${src_dir}/./linebuffer_simple.sv"]
read_verilog -sv [file normalize "${src_dir}/./rasterbar.sv"]
read_verilog -sv [file normalize "${src_dir}/./render_rasterbars.sv"]
read_verilog -sv [file normalize "${src_dir}/./render_sinescroll.sv"]
read_verilog -sv [file normalize "${src_dir}/./rom_async.sv"]
read_verilog -sv [file normalize "${src_dir}/./rom_sync.sv"]
read_verilog -sv [file normalize "${src_dir}/./sine_table.sv"]
read_verilog -sv [file normalize "${src_dir}/./sprite.sv"]
read_verilog -sv [file normalize "${src_dir}/./starfield.sv"]
read_verilog -sv [file normalize "${src_dir}/./TMDS_encoder.sv"]
read_verilog -sv [file normalize "${src_dir}/./top_HDMI.sv"]
read_verilog -sv [file normalize "${src_dir}/./top_HDMI_.v"]
read_verilog -sv [file normalize "${src_dir}/./VIDEO_sig_gen.sv"]
read_verilog -sv [file normalize "${src_dir}/./VIDEO_source.sv"]
read_verilog -sv [file normalize "${src_dir}/./VIDEO_sync.sv"]
read_verilog -sv [file normalize "${src_dir}/./xd.sv"]

# read memory files
read_mem [file normalize "${src_dir}/./font_unscii_8x8_latin_uc.mem"]
read_mem [file normalize "${src_dir}/./outline-font-32x32.mem"]
read_mem [file normalize "${src_dir}/./sinescroll_greet.mem"]
read_mem [file normalize "${src_dir}/./sine_table_64x8.mem"]
read_mem [file normalize "${src_dir}/./sweetie16_4b_0.mem"]
read_mem [file normalize "${src_dir}/./text_greet.mem"]

# read constraints
read_xdc [file normalize "../constraints/constraints.xdc"]

# synth
synth_design -top "top_${design_name}" -part ${fpga_part}

# place and route
opt_design
place_design
route_design

# write bitstream, using vivado-style path
write_bitstream -force $bitstream_filepath
