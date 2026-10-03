#include "../ois.exe.h"


// public: virtual bool __thiscall CounterMeasure::runLogic(float)

bool __thiscall CounterMeasure::runLogic(CounterMeasure *this,float param_1)

{
  float fVar1;
  CounterMeasure *pCVar2;
  
  fVar1 = *(float *)(this + 0xf4);
  *(float *)(this + 0xf4) = fVar1 - param_1;
  if (fVar1 - param_1 <= 0.0) {
    pCVar2 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pCVar2 = *(CounterMeasure **)pCVar2;
    }
    debugPrint("AI","%s: timer done. Removing myself.",pCVar2);
    return true;
  }
  return false;
}
