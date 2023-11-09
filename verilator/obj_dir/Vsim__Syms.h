// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIM__SYMS_H_
#define VERILATED_VSIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsim.h"

// INCLUDE MODULE CLASSES
#include "Vsim___024root.h"

// SYMS CLASS (contains all model state)
class Vsim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsim* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsim___024root                 TOP;

    // CONSTRUCTORS
    Vsim__Syms(VerilatedContext* contextp, const char* namep, Vsim* modelp);
    ~Vsim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
