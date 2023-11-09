// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"

#include "Vsim___024root.h"

VL_ATTR_COLD void Vsim___024root___eval_static(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    // Body
    Vsim___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__video_clk_pix = vlSelf->video_clk_pix;
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h178645e6__0;
    // Body
    VL_WRITEF("Create rom_async with init file 'sine_table_64x8.mem'.\n");
    __Vtemp_h178645e6__0[0U] = 0x2e6d656dU;
    __Vtemp_h178645e6__0[1U] = 0x36347838U;
    __Vtemp_h178645e6__0[2U] = 0x626c655fU;
    __Vtemp_h178645e6__0[3U] = 0x655f7461U;
    __Vtemp_h178645e6__0[4U] = 0x73696eU;
    VL_READMEM_N(true, 8, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h178645e6__0)
                 ,  &(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsim___024root___eval_final(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsim___024root___eval_triggers__stl(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsim___024root___eval_stl(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_settle(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsim___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsim___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("sim.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsim___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id = 0;
    CData/*5:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id = 0;
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data = 0;
    CData/*1:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad = 0;
    // Body
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_a 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_b 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_c 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev));
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_d 
        = VL_LTS_III(16, (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d), (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev));
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
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0xffU & ((IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id) 
                    + (IData)(vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs)));
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
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data 
        = vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
        [sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_id];
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data 
        = ((0x40U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
            ? 0x100U : ((0xc0U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                         ? 0xff00U : (0xffffU & ((2U 
                                                  & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__quad))
                                                  ? 
                                                 (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data))
                                                  : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__tab_data)))));
}

VL_ATTR_COLD void Vsim___024root___eval_stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vsim___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge video_clk_pix)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge video_clk_pix)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->video_clk_pix = 0;
    vlSelf->video_enable = 0;
    vlSelf->vsync = 0;
    vlSelf->hsync = 0;
    vlSelf->frame_start = 0;
    vlSelf->line_start = 0;
    vlSelf->sx = 0;
    vlSelf->sy = 0;
    vlSelf->red = 0;
    vlSelf->green = 0;
    vlSelf->blue = 0;
    vlSelf->sim__DOT__sync__DOT__x = 0;
    vlSelf->sim__DOT__sync__DOT__y = 0;
    vlSelf->sim__DOT__source__DOT__l1_red = 0;
    vlSelf->sim__DOT__source__DOT__l2_red = 0;
    vlSelf->sim__DOT__source__DOT__l2_green = 0;
    vlSelf->sim__DOT__source__DOT__l2_blue = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__starlight = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_up_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0;
    vlSelf->__Vtrigrprev__TOP__video_clk_pix = 0;
}
