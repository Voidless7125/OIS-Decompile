// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall CounterMeasure::runLogic(CounterMeasure *this,float param_1)
bool CounterMeasure::runLogic(float param_1)

{
  float fVar1;
  CounterMeasure *pCVar2;
  
  fVar1 = *(float *)((char *)this + 0xf4);
  *(float *)((char *)this + 0xf4) = fVar1 - param_1;
  if (fVar1 - param_1 <= 0.0) {
    pCVar2 = this + 8;
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      pCVar2 = *(CounterMeasure **)pCVar2;
    }
    debugPrint("AI","%s: timer done. Removing myself.",pCVar2);
    return true;
  }
  return false;
}
