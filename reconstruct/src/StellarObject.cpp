// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: StellarObject * __thiscall StellarObject::StellarObject(StellarObject *this,int param_1,StellarCategory param_2)
StellarObject::StellarObject(int param_1, StellarCategory param_2)

{
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(int *)((char *)this + 0x38) = param_1;
  *(undefined4 *)((char *)this + 0x18) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0xf;
  ((char *)this)[0x3c] = (byte)0x0;
  *(StellarCategory *)((char *)this + 0x54) = param_2;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x6c) = 0;
  *(undefined4 *)((char *)this + 0x70) = 0xf;
  ((char *)this)[0x5c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x84) = 0;
  *(undefined4 *)((char *)this + 0x88) = 0xf;
  ((char *)this)[0x74] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x9c) = 0;
  *(undefined4 *)((char *)this + 0xa0) = 0xf;
  ((char *)this)[0x8c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0;
  *(undefined4 *)((char *)this + 0xb0) = 0;
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  return;
}
