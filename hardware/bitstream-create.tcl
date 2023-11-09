# build settings
set design_name "HDMI"
set fpga_part "xc7z020clg400-1"

# set reference directories for source files
set src_dir [file normalize "./src"]
set lib_dir [file normalize "./lib"]

# read design sources
read_verilog -sv [file normalize "${src_dir}/top_${design_name}.sv"]
read_verilog -sv [file normalize "${src_dir}/HDMI_encoder.sv"]
read_verilog -sv [file normalize "${src_dir}/TMDS_encoder.sv"]
read_verilog -sv [file normalize "${src_dir}/VIDEO_sig_gen.sv"]
read_verilog -sv [file normalize "${src_dir}/VIDEO_source.sv"]

# read constraints
read_xdc [file normalize "./constraints/constraints.xdc"]

# synth
synth_design -top "top_${design_name}" -part ${fpga_part}

# place and route
opt_design
place_design
route_design

# write bitstream, using vivado-style path
set bitstream_dir [file normalize "./vivado/vivado.runs/impl_1"]
file mkdir "$bitstream_dir"
write_bitstream -force [file normalize "${bitstream_dir}/design_1_wrapper.bit"]
