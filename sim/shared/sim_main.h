#include <_sdl.h>

#include <stdio.h>
#include <verilated.h>

#include "Vsim.h"

namespace sim {

static inline int _main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);

  auto sdl = _sdl::SDL();
  auto hw = Vsim();

  bool full_screen = false;

  const Uint8 *keyb_state = (Uint8 *)SDL_GetKeyboardState(NULL);

  if (!keyb_state) {
    return sdl.exit("SDL_GetKeyboardState failed", _sdl::APP_FAILURE);
  }

  SDL_Log("Simulation running. 'S' toggle full screen/window. 'Q' or ESC to "
          "exit.\n\n");

  uint64_t frame_count = 0;
  uint64_t start_ticks = SDL_GetPerformanceCounter();

  int PREV_SDL_SCANCODE_S = 0;

  while (true) {
    // cycle the clock
    hw.video_clk_pix = 1;
    hw.eval();
    hw.video_clk_pix = 0;
    hw.eval();

    if (hw.video_enable) {
      auto *p = &sdl.screenbuffer[hw.sy * _sdl::HRES + hw.sx];
      p->a = 0xFF; // transparency
      p->b = hw.blue;
      p->g = hw.green;
      p->r = hw.red;
    }

    // update texture outside draw window
    // if (sim.vsync)
    // the above should work, but SDL gets stuck here, so check coords instead
    if (hw.frame_start) {
      // check for quit event
      SDL_Event e;
      if (SDL_PollEvent(&e) && e.type == _sdl::EVENT_QUIT)
        break;
      if (keyb_state[SDL_SCANCODE_Q] || keyb_state[SDL_SCANCODE_ESCAPE])
        break; // quit if user presses 'Q' or 'escape'
      if (keyb_state[SDL_SCANCODE_S] && !PREV_SDL_SCANCODE_S) {
        full_screen = !full_screen;
        SDL_SetWindowFullscreen(sdl._window, full_screen);
      }
      PREV_SDL_SCANCODE_S = keyb_state[SDL_SCANCODE_S];

      sdl.render();
      frame_count++;
    }
  }
  uint64_t end_ticks = SDL_GetPerformanceCounter();
  double duration =
      ((double)(end_ticks - start_ticks)) / SDL_GetPerformanceFrequency();
  double fps = (double)frame_count / duration;
  SDL_Log("Frames per second: %.1f\n", fps);

  return 0;
}

}