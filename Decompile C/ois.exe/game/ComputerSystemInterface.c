#include "../ois.exe.h"


// public: virtual void __thiscall ComputerSystemInterface::setScreenSize(int,int)

void __thiscall
ComputerSystemInterface::setScreenSize(ComputerSystemInterface *this,int param_1,int param_2)

{
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_2 + -8;
  return;
}
