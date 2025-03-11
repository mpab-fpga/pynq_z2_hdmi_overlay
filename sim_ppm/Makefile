VFLAGS = -O3 --x-assign fast --x-initial fast --noassert
SRC_LIBS = ../hardware/src

%.exe: %.mk
	make -C ./obj_dir -f V$<

%.mk: ../sim_common/%.sv
	verilator ${VFLAGS} -I${SRC_LIBS} \
	    -cc $< --exe $(basename $@).cpp -o $(basename $@)

all: sim.exe

clean:
	rm -rf ./obj_dir

.PHONY: all clean