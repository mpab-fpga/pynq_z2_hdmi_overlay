VFLAGS = -O3 --x-assign fast --x-initial fast --noassert
SDL_CFLAGS = "-I${SDL3_DIR}/include"
SDL_LDFLAGS = "-L${SDL3_DIR}/lib -lSDL3"
SRC_LIBS = ../hardware/src

%.exe: %.mk
	make -C ./obj_dir -f V$<

%.mk: ../sim_common/%.sv
	verilator ${VFLAGS} -I${SRC_LIBS} \
	    -cc $< --exe $(basename $@).cpp -o $(basename $@) \
		-CFLAGS ${SDL_CFLAGS} -LDFLAGS ${SDL_LDFLAGS}

all: sim.exe

clean:
	rm -rf ./obj_dir

.PHONY: all clean