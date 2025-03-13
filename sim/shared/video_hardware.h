#include "Vsim.h"

namespace VideoHardware {

typedef struct { // for SDL texture
  uint8_t a;     // transparency
  uint8_t b;     // blue
  uint8_t g;     // green
  uint8_t r;     // red
} Pixel;

// hardware currently restricted to 640x480
const unsigned int HRES = 640;
const unsigned int VRES = 480;

struct VideoHardware {
  Pixel screenbuffer[HRES * VRES];
  Vsim hw;

  void cycle() {
    hw.video_clk_pix = 1;
    hw.eval();
    hw.video_clk_pix = 0;
    hw.eval();

    // update pixel inside draw window
    if (hw.video_enable) {
      Pixel *p = &screenbuffer[hw.sy * HRES + hw.sx];
      p->a = 0xFF; // transparency
      p->b = hw.blue;
      p->g = hw.green;
      p->r = hw.red;
    }
  }

  ~VideoHardware() { hw.final(); }

  // TODO: implement reset
  //  reset
  //  hw->rst_pix = 1;
  //  hw->video_clk_pix = 0;
  //  hw->eval();
  //  hw->video_clk_pix = 1;
  //  hw->eval();
  //  hw->rst_pix = 0;
  //  hw->video_clk_pix = 0;
  //  hw->eval();
};

} // namespace VideoHardware