// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"

#include "Vsim___024root.h"

void Vsim___024root___eval_act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id = 0;
    CData/*5:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id = 0;
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data = 0;
    CData/*1:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad = 0;
    SData/*15:0*/ __Vdly__sim__DOT__sync__DOT__y;
    __Vdly__sim__DOT__sync__DOT__y = 0;
    SData/*15:0*/ __Vdly__sim__DOT__sync__DOT__x;
    __Vdly__sim__DOT__sync__DOT__x = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0;
    // Body
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    __Vdly__sim__DOT__sync__DOT__x = vlSelf->sim__DOT__sync__DOT__x;
    __Vdly__sim__DOT__sync__DOT__y = vlSelf->sim__DOT__sync__DOT__y;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = (0x1fffffU & ((IData)(1U) + vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt));
    if ((0x6689bU == vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0U;
    }
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = (0x1fffffU & ((IData)(1U) + vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt));
    if ((0x6689dU == vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0U;
    }
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = (0x1fffffU & ((IData)(1U) + vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt));
    if ((0x6689eU == vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0U;
    }
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
        = ((0xfffffU & (vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
                        >> 1U)) ^ ((1U & vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg)
                                    ? 0x140000U : 0U));
    if ((0U == vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt)) {
        vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg = 0x1fffffU;
    }
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
        = ((0xfffffU & (vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
                        >> 1U)) ^ ((1U & vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg)
                                    ? 0x140000U : 0U));
    if ((0U == vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt)) {
        vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg = 0xa9a9aU;
    }
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
        = ((0xfffffU & (vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
                        >> 1U)) ^ ((1U & vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg)
                                    ? 0x140000U : 0U));
    if ((0U == vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt)) {
        vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg = 0x9a9a9U;
    }
    if ((0x27fU == VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x)))) {
        __Vdly__sim__DOT__sync__DOT__y = ((0x1dfU == 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y)))
                                           ? 0xffd3U
                                           : (0xffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y)))));
        __Vdly__sim__DOT__sync__DOT__x = 0xff60U;
    } else {
        __Vdly__sim__DOT__sync__DOT__x = (0xffffU & 
                                          ((IData)(1U) 
                                           + VL_EXTENDS_II(16,16, (IData)(vlSelf->sim__DOT__sync__DOT__x))));
    }
    vlSelf->vsync = (1U & (~ (VL_LTES_III(32, 0xffffffddU, 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y))) 
                              & VL_GTS_III(32, 0xffffffdfU, 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y))))));
    vlSelf->sx = vlSelf->sim__DOT__sync__DOT__x;
    vlSelf->hsync = (1U & (~ (VL_LTES_III(32, 0xffffff70U, 
                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x))) 
                              & VL_GTS_III(32, 0xffffffd0U, 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x))))));
    if ((0U == vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id)));
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 1U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0U;
    } else if ((1U == vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 2U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev 
            = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0x40U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
            = (0xffffU & ((IData)(0xdcU) + VL_SHIFTRS_III(16,32,32, 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((2U == vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 3U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev 
            = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0x80U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
            = (0xffffU & ((IData)(0xdcU) + VL_SHIFTRS_III(16,32,32, 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((3U == vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 4U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev 
            = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0xc0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
            = (0xffffU & ((IData)(0xdcU) + VL_SHIFTRS_III(16,32,32, 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((4U == vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 5U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev 
            = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
            = (0xffffU & ((IData)(0xdcU) + VL_SHIFTRS_III(16,32,32, 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if (vlSelf->frame_start) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0U;
    }
    if ((((0U == (IData)(vlSelf->sim__DOT__source__DOT__l2_red)) 
          & (0U == (IData)(vlSelf->sim__DOT__source__DOT__l2_green))) 
         & (0U == (IData)(vlSelf->sim__DOT__source__DOT__l2_blue)))) {
        vlSelf->blue = vlSelf->sim__DOT__source__DOT__l1_red;
        vlSelf->green = vlSelf->sim__DOT__source__DOT__l1_red;
        vlSelf->red = vlSelf->sim__DOT__source__DOT__l1_red;
    } else {
        vlSelf->blue = vlSelf->sim__DOT__source__DOT__l2_blue;
        vlSelf->green = vlSelf->sim__DOT__source__DOT__l2_green;
        vlSelf->red = vlSelf->sim__DOT__source__DOT__l2_red;
    }
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0xffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id) 
                    + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs)));
    vlSelf->frame_start = ((0xffffffd3U == VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y))) 
                           & (0xffffff60U == VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x))));
    vlSelf->sim__DOT__source__DOT__l1_red = ((IData)(vlSelf->video_enable)
                                              ? (0xffU 
                                                 & (((IData)(vlSelf->sim__DOT__source__DOT__stars__DOT__starlight) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->sim__DOT__source__DOT__stars__DOT__starlight)))
                                              : 0U);
    vlSelf->sim__DOT__source__DOT__l2_red = (0xffU 
                                             & ((0xf0U 
                                                 & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                    >> 4U)) 
                                                | (0xfU 
                                                   & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                      >> 8U))));
    vlSelf->sim__DOT__source__DOT__l2_green = (0xffU 
                                               & ((0xf0U 
                                                   & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                        >> 4U))));
    vlSelf->sim__DOT__source__DOT__l2_blue = (0xffU 
                                              & ((0xf0U 
                                                  & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr))));
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad 
        = (3U & ((IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id) 
                 >> 6U));
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id 
        = (0x3fU & ((2U & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad))
                     ? ((1U & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad))
                         ? (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                         : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                     : ((1U & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad))
                         ? (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                         : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))));
    vlSelf->sim__DOT__source__DOT__stars__DOT__starlight 
        = (0xfU & ((0x1fffffU == (0xfffU | vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg))
                    ? (vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
                       >> 4U) : ((0x1fffffU == (0xfffU 
                                                | vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg))
                                  ? (vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
                                     >> 4U) : ((0x1fffffU 
                                                == 
                                                (0x7ffU 
                                                 | vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg))
                                                ? (vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
                                                   >> 4U)
                                                : 0U))));
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
        [sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id];
    vlSelf->video_enable = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__y))) 
                            & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x))));
    vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr 
        = (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a) 
            & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_a))
            ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a)
            : (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b) 
                & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_b))
                ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b)
                : (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c) 
                    & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_c))
                    ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c)
                    : (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d) 
                        & (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_d))
                        ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d)
                        : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a)
                            ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a)
                            : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b)
                                ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b)
                                : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c)
                                    ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c)
                                    : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d)
                                        ? (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d)
                                        : 0U))))))));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data 
        = ((0x40U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
            ? 0x100U : ((0xc0U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                         ? 0xff00U : (0xffffU & ((2U 
                                                  & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad))
                                                  ? 
                                                 (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data))
                                                  : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data)))));
    if (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a) 
         == (IData)(vlSelf->sy))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0x126U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 1U;
    } else if (vlSelf->line_start) {
        if ((1U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step))) {
                if (vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0U;
                } else {
                    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
                    = (0xfffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc)
                                  ? ((IData)(0x111U) 
                                     + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a))
                                  : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a) 
                                     - (IData)(0x111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b) 
         == (IData)(vlSelf->sy))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0x640U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 1U;
    } else if (vlSelf->line_start) {
        if ((1U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step))) {
                if (vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0U;
                } else {
                    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
                    = (0xfffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc)
                                  ? ((IData)(0x111U) 
                                     + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b))
                                  : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b) 
                                     - (IData)(0x111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c) 
         == (IData)(vlSelf->sy))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0x610U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 1U;
    } else if (vlSelf->line_start) {
        if ((1U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step))) {
                if (vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0U;
                } else {
                    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
                    = (0xfffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc)
                                  ? ((IData)(0x111U) 
                                     + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c))
                                  : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c) 
                                     - (IData)(0x111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d) 
         == (IData)(vlSelf->sy))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0x145U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0U;
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 1U;
    } else if (vlSelf->line_start) {
        if ((1U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step))) {
                if (vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0U;
                } else {
                    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
                    = (0xfffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc)
                                  ? ((IData)(0x111U) 
                                     + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d))
                                  : ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d) 
                                     - (IData)(0x111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line)));
        }
    }
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_a 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_b 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_c 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_d 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev));
    vlSelf->sy = vlSelf->sim__DOT__sync__DOT__y;
    vlSelf->line_start = (0xffffff60U == VL_EXTENDS_II(32,16, (IData)(vlSelf->sim__DOT__sync__DOT__x)));
    vlSelf->sim__DOT__sync__DOT__y = __Vdly__sim__DOT__sync__DOT__y;
    vlSelf->sim__DOT__sync__DOT__x = __Vdly__sim__DOT__sync__DOT__x;
}

void Vsim___024root___eval_nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsim___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vsim___024root___eval_triggers__act(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__nba(Vsim___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim___024root___eval(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsim___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsim___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sim.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsim___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsim___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sim.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsim___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->video_clk_pix & 0xfeU))) {
        Verilated::overWidthError("video_clk_pix");}
}
#endif  // VL_DEBUG
