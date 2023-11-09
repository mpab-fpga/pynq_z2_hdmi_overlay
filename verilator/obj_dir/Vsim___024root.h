// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM___024ROOT_H_
#define VERILATED_VSIM___024ROOT_H_  // guard

#include "verilated.h"

class Vsim__Syms;

class Vsim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(video_clk_pix,0,0);
        VL_OUT8(video_enable,0,0);
        VL_OUT8(vsync,0,0);
        VL_OUT8(hsync,0,0);
        VL_OUT8(frame_start,0,0);
        VL_OUT8(line_start,0,0);
        CData/*3:0*/ sim__DOT__source__DOT__stars__DOT__starlight;
        CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id;
        CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_a;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_b;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_c;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_d;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
        CData/*0:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
        CData/*3:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
        CData/*0:0*/ __Vtrigrprev__TOP__video_clk_pix;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(sx,15,0);
        VL_OUT16(sy,15,0);
        VL_OUT16(red,9,0);
        VL_OUT16(green,9,0);
        VL_OUT16(blue,9,0);
        SData/*15:0*/ sim__DOT__sync__DOT__x;
        SData/*15:0*/ sim__DOT__sync__DOT__y;
        SData/*9:0*/ sim__DOT__source__DOT__l1_red;
        SData/*9:0*/ sim__DOT__source__DOT__l2_red;
        SData/*9:0*/ sim__DOT__source__DOT__l2_green;
        SData/*9:0*/ sim__DOT__source__DOT__l2_blue;
        SData/*11:0*/ sim__DOT__source__DOT__bars__DOT__bar_colr;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data;
        SData/*11:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev;
        SData/*11:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev;
        SData/*11:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev;
        SData/*11:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
        SData/*15:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg;
        IData/*20:0*/ sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
        IData/*31:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
        IData/*31:0*/ __VstlIterCount;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 64> sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim___024root(Vsim__Syms* symsp, const char* v__name);
    ~Vsim___024root();
    VL_UNCOPYABLE(Vsim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
