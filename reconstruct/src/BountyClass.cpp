// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: BountyClass * __thiscall BountyClass::BountyClass(BountyClass *this)
BountyClass::BountyClass()

{
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bacb6;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(int *)this = s_nextIdentifier;
  s_nextIdentifier = s_nextIdentifier + 1;
  ((char *)this)[4] = (byte)0x0;
  *(undefined1 **)((char *)this + 8) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  ((char *)this)[0x24] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0xf;
  ((char *)this)[0x3c] = (byte)0x0;
  // [seh] local_8 = 1;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0xf;
  *(std::string *)((char *)this + 0x54) = (std::string)0x0;
  ghidra::str::assign((std::string *)((char *)this + 0x54),"e10",3);
  // [seh] ExceptionList = local_10;
  return;
}
