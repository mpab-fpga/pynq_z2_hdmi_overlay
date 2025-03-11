VFLAGS = -O3 --x-assign fast --x-initial fast --noassert
SDL_CFLAGS = "-I${SDL3_DIR}/include"
ifeq ($(OS), Windows_NT)
	SDL_LDFLAGS = -L${SDL3_DIR}/lib -lSDL3 -mconsole
else
	SDL_LDFLAGS = -L${SDL3_DIR}/lib -lSDL3
endif
SRC_LIBS = ../hardware/src
SIM_COMMON = ../../sim_common/

build: sim.exe

%.exe: %.mk
	make -C ./obj_dir -f V$<

%.mk: ../sim_common/%.sv
	verilator ${VFLAGS} -I${SRC_LIBS} \
	    -cc $< --exe $(basename $@).cpp -o $(basename $@) \
		-CFLAGS -I${SIM_COMMON} \
		-CFLAGS "${SDL_CFLAGS}" -LDFLAGS "${SDL_LDFLAGS}"

all: clean build

clean:
	rm -rf ./obj_dir

.PHONY: all clean