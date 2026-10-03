// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ComputerSystemInterface::setScreenSize(ComputerSystemInterface *this,int param_1,int param_2)
void ComputerSystemInterface::setScreenSize(int param_1, int param_2)

{
  *(int *)((char *)this + 4) = param_1;
  *(int *)((char *)this + 8) = param_2;
  *(int *)((char *)this + 0xc) = param_2 + -8;
  return;
}
