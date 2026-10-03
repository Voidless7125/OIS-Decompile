// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: SyncNode * __thiscall SyncNode::SyncNode(SyncNode *this,int param_1,SyncVarType param_2,void *param_3)
SyncNode::SyncNode(int param_1, SyncVarType param_2, void * param_3)

{
  std::string *this_00;
  std::string *pbVar1;
  void *pvVar2;
  std::string *pbVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pvVar2 = ExceptionList;
  // [seh] puStack_c = &DAT_005b320b;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  this_00 = (std::string *)((char *)this + 0x24);
  *(int *)this = param_1;
  *(SyncVarType *)((char *)this + 4) = param_2;
  *(void **)((char *)this + 8) = param_3;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  *this_00 = (std::string)0x0;
  // [seh] local_8 = 0;
  switch(*(undefined4 *)((char *)this + 4)) {
  case 0:
    *(undefined4 *)((char *)this + 0x10) = **(undefined4 **)((char *)this + 8);
    // [seh] ExceptionList = pvVar2;
    return;
  case 1:
    *(undefined4 *)((char *)this + 0xc) = **(undefined4 **)((char *)this + 8);
    // [seh] ExceptionList = pvVar2;
    return;
  case 2:
    *(undefined8 *)((char *)this + 0x18) = **(undefined8 **)((char *)this + 8);
    // [seh] ExceptionList = pvVar2;
    return;
  case 3:
    pbVar1 = *(std::string **)((char *)this + 8);
    if (this_00 != pbVar1) {
      pbVar3 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar3 = *(std::string **)pbVar1;
      }
      ghidra::str::assign(this_00,(char *)pbVar3,*(uint *)(pbVar1 + 0x10));
    }
    break;
  case 4:
    ((char *)this)[0x20] = **(SyncNode **)((char *)this + 8);
    // [seh] ExceptionList = pvVar2;
    return;
  }
  // [seh] ExceptionList = local_10;
  return;
}
