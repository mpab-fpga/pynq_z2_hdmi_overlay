#include "Vsim.h"

template <size_t HRES, size_t VRES> struct VideoHardware {
  typedef struct Pixel { // for SDL texture
    uint8_t a;           // transparency
    uint8_t b;           // blue
    uint8_t g;           // green
    uint8_t r;           // red
  } Pixel;

  Pixel screenbuffer[HRES * VRES];

  Vsim sim;

  inline bool frame_start() { return sim.frame_start; }

  void cycle() {
    sim.video_clk_pix = 1;
    sim.eval();
    sim.video_clk_pix = 0;
    sim.eval();

    // update pixel inside draw window
    if (sim.video_enable) {
      Pixel *p = &screenbuffer[sim.sy * HRES + sim.sx];
      p->a = 0xFF; // transparency
      p->b = sim.blue;
      p->g = sim.green;
      p->r = sim.red;
    }
  }

  ~VideoHardware() { sim.final(); }

  // TODO: implement reset
  //  reset
  //  sim->rst_pix = 1;
  //  sim->video_clk_pix = 0;
  //  sim->eval();
  //  sim->video_clk_pix = 1;
  //  sim->eval();
  //  sim->rst_pix = 0;
  //  sim->video_clk_pix = 0;
  //  sim->eval();
};
