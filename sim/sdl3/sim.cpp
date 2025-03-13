#define NO_STDIO_REDIRECT

#include <SDL3/SDL.h>
#include <SDL3/SDL_video.h>
#include <stdio.h>
#include <verilated.h>

#include "video_hardware.h"

int SCALING = 0;
bool FULLSCREEN = false;

SDL_Window *sdl_window = NULL;
SDL_Renderer *sdl_renderer = NULL;
SDL_Texture *sdl_texture = NULL;

int SDL_Exit(const char* msg, int error) {
  if (error) SDL_Log("%s: %s", msg, SDL_GetError());

  SDL_DestroyTexture(sdl_texture);
  SDL_DestroyRenderer(sdl_renderer);
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
  return error;
}

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    return SDL_Exit("SDL_Init failure", SDL_APP_FAILURE);
  }

  int display = -1;
  auto pDM = SDL_GetDesktopDisplayMode((++display) + 1);
  while (!pDM) {
    pDM = SDL_GetDesktopDisplayMode((++display) + 1);
  }
  auto screen_height = pDM->h;
  while ((((++SCALING + 1)* VideoHardware::VRES)) <= screen_height);
  SDL_Log("Display: %d, Scaling: %d, Screen(%d, %d)\n", display, SCALING, VideoHardware::HRES * SCALING, VideoHardware::VRES * SCALING);

  if (!SDL_CreateWindowAndRenderer("verilator_sdl3", VideoHardware::HRES * SCALING,
    VideoHardware::VRES * SCALING, 0, &sdl_window,
                                   &sdl_renderer)) {
    return SDL_Exit("Couldn't create window/renderer", SDL_APP_FAILURE);
  }

  sdl_texture = SDL_CreateTexture(sdl_renderer, SDL_PIXELFORMAT_RGBA8888,
                                  SDL_TEXTUREACCESS_TARGET, VideoHardware::HRES, VideoHardware::VRES);
  if (!sdl_texture) {
    return SDL_Exit("Texture creation failed", SDL_APP_FAILURE);
  }

  const Uint8 *keyb_state = (Uint8 *)SDL_GetKeyboardState(NULL);

  if (!keyb_state) {
    return SDL_Exit("SDL_GetKeyboardState failed", SDL_APP_FAILURE);
  }

  SDL_Log("Simulation running. 'S' toggle full screen/window. 'Q' or ESC to exit.\n\n");

  // initialize Verilog modules
  VideoHardware::VideoHardware sim;

  uint64_t frame_count = 0;
  uint64_t start_ticks = SDL_GetPerformanceCounter();

  int PREV_SDL_SCANCODE_S = 0;

  while (true) {
    // cycle the clock
    sim.cycle();

    // update texture outside draw window
    // if (sim.vsync)
    // the above should work, but SDL gets stuck here, so check coords instead
    if (sim.hw.frame_start) {
      // check for quit event
      SDL_Event e;
      if (SDL_PollEvent(&e) && e.type == SDL_EVENT_QUIT)
        break;
      if (keyb_state[SDL_SCANCODE_Q] || keyb_state[SDL_SCANCODE_ESCAPE])
        break; // quit if user presses 'Q' or 'escape'
      if (keyb_state[SDL_SCANCODE_S] && !PREV_SDL_SCANCODE_S) {
        FULLSCREEN = !FULLSCREEN;
        SDL_SetWindowFullscreen(sdl_window, FULLSCREEN);
      }
      PREV_SDL_SCANCODE_S = keyb_state[SDL_SCANCODE_S];

      SDL_UpdateTexture(sdl_texture, NULL, sim.screenbuffer,
        VideoHardware::HRES * sizeof(VideoHardware::Pixel));
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
  
  return SDL_Exit("", 0);
}
