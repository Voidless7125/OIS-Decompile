#include "../ois.exe.h"


// public: __thiscall IllegalGood::IllegalGood(void)

IllegalGood * __thiscall IllegalGood::IllegalGood(IllegalGood *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (IllegalGood)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}
