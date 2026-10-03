#include "../ois.exe.h"


// public: __thiscall BountyClass::BountyClass(void)

BountyClass * __thiscall BountyClass::BountyClass(BountyClass *this)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bacb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)this = s_nextIdentifier;
  s_nextIdentifier = s_nextIdentifier + 1;
  this[4] = (BountyClass)0x0;
  *(undefined1 **)(this + 8) = &DAT_bf800000;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  this[0x24] = (BountyClass)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xf;
  this[0x3c] = (BountyClass)0x0;
  local_8 = 1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0xf;
  *(basic_string<> *)(this + 0x54) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x54),"e10",3);
  ExceptionList = local_10;
  return this;
}
