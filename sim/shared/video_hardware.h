#include "Vsim.h"

namespace VideoHardware {

#if !defined(VIDEO_HARDWARE_NO_BUFFER)
typedef struct { // for SDL texture
  uint8_t a;     // transparency
  uint8_t b;     // blue
  uint8_t g;     // green
  uint8_t r;     // red
} Pixel;
#else
typedef struct {
  uint8_t a; // transparency
  uint8_t b; // blue
  uint8_t g; // green
  uint8_t r; // red
  int sx, sy;
  bool video_enable;
  bool frame_start;
} VideoData;
#endif

// hardware currently restricted to 640x480
const unsigned int HRES=640;
const unsigned int VRES=480;

struct VideoHardware {
#if !defined(VIDEO_HARDWARE_NO_BUFFER)
  Pixel screenbuffer[HRES * VRES];
#endif
  Vsim hw;

#if !defined(VIDEO_HARDWARE_NO_BUFFER)
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
#else
  VideoData cycle() {
    hw.video_clk_pix = 1;
    hw.eval();
    hw.video_clk_pix = 0;
    hw.eval();

    return {0xFF,  hw.blue, hw.green,        hw.red,
            hw.sx, hw.sy,   hw.video_enable, hw.frame_start};
  }
#endif

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