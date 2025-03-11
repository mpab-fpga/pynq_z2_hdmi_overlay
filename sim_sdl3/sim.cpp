#define NO_STDIO_REDIRECT

#include "Vsim.h"
#include <SDL3/SDL.h>
#include <stdio.h>
#include <verilated.h>

#include "video_hardware.h"

// screen dimensions
const int HRES = 640;
const int VRES = 480;
const int FULLSCREEN = false;

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    SDL_Log("SDL init failed.\n");
    return 1;
  }

  SDL_Window *sdl_window = NULL;
  SDL_Renderer *sdl_renderer = NULL;
  SDL_Texture *sdl_texture = NULL;

  if (!SDL_CreateWindowAndRenderer("verilator_sdl3", HRES, VRES, 0, &sdl_window,
                                   &sdl_renderer)) {
    SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  sdl_texture = SDL_CreateTexture(sdl_renderer, SDL_PIXELFORMAT_RGBA8888,
                                  SDL_TEXTUREACCESS_TARGET, HRES, VRES);
  if (!sdl_texture) {
    SDL_Log("Texture creation failed: %s\n", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  const Uint8 *keyb_state = (Uint8 *)SDL_GetKeyboardState(NULL);

  if (!keyb_state) {
    SDL_Log("SDL_GetKeyboardState: %s\n", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  SDL_Log("Simulation running. 'Q' or escape key to exit.\n\n");

  // initialize Verilog modules
  VideoHardware<HRES, VRES> sim;

  uint64_t frame_count = 0;
  uint64_t start_ticks = SDL_GetPerformanceCounter();

  while (true) {
    // cycle the clock
    sim.cycle();

    // update texture outside draw window
    // if (sim.vsync)
    // the above should work, but SDL gets stuck here, so check coords instead
    if (sim.frame_start()) {
      // check for quit event
      SDL_Event e;
      if (SDL_PollEvent(&e) && e.type == SDL_EVENT_QUIT)
        break;
      if (keyb_state[SDL_SCANCODE_Q] || keyb_state[SDL_SCANCODE_ESCAPE])
        break; // quit if user presses 'Q' or 'escape'

      SDL_UpdateTexture(sdl_texture, NULL, sim.screenbuffer,
                        HRES * sizeof(VideoHardware<HRES, VRES>::Pixel));
      SDL_RenderTexture(sdl_renderer, sdl_texture, NULL, NULL);
      SDL_RenderPresent(sdl_renderer);
      frame_count++;
    }
  }
  uint64_t end_ticks = SDL_GetPerformanceCounter();
  double duration =
      ((double)(end_ticks - start_ticks)) / SDL_GetPerformanceFrequency();
  double fps = (double)frame_count / duration;
  SDL_Log("Frames per second: %.1f\n", fps);

  SDL_DestroyTexture(sdl_texture);
  SDL_DestroyRenderer(sdl_renderer);
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
  return 0;
}
