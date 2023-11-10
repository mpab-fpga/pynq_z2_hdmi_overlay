###############################################################################
# @file build-vitis.tcl
#  Author: mpab
#
###############################################################################
# Copyright (c) 2023-, mpab
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice, this
#    list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
#    contributors may be used to endorse or promote products derived from
#    this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
###############################################################################

# generates assets in the Vitis workspace (firmware) directory
# must be run in ./firmware/

set PROJECT_NAME hdmi_overlay
set BOARD "pynq_z2"

set PLATFORM ${BOARD}_pfm
set APP ${PROJECT_NAME}_app
set SYS ${APP}_system

# set the workspace location
setws ./

# ========================================================

platform active $PLATFORM
platform generate

# build application project

app build -name $APP

# build system project
sysproj build -name $SYS

# generate BOOT.bin
set VIT_PROJ_DIR [pwd]
set BIF_DIR $VIT_PROJ_DIR/${SYS}/_ide/bootimage
set BIF_FILEPATH $BIF_DIR/${SYS}.bif

exec bootgen -arch zynq -image $BIF_FILEPATH -w -o $BIF_DIR/BOOT.bin
puts "created $BIF_DIR/BOOT.bin"
