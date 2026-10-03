// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Dice * __thiscall Dice::Dice(Dice *this,int param_1,int param_2,int param_3)
Dice::Dice(int param_1, int param_2, int param_3)

{
  *(int *)this = param_1;
  *(int *)((char *)this + 4) = param_2;
  *(int *)((char *)this + 8) = param_3;
  return;
}
