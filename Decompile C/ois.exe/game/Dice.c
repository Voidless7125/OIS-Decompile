#include "../ois.exe.h"


// public: __thiscall Dice::Dice(int,int,int)

Dice * __thiscall Dice::Dice(Dice *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return this;
}
