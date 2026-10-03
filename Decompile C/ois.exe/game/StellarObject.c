#include "../ois.exe.h"


// public: __thiscall StellarObject::StellarObject(int,enum EStellarCategory::StellarCategory)

StellarObject * __thiscall
StellarObject::StellarObject(StellarObject *this,int param_1,StellarCategory param_2)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (StellarObject)0x0;
  *(int *)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xf;
  this[0x3c] = (StellarObject)0x0;
  *(StellarCategory *)(this + 0x54) = param_2;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0xf;
  this[0x5c] = (StellarObject)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xf;
  this[0x74] = (StellarObject)0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0xf;
  this[0x8c] = (StellarObject)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  return this;
}
