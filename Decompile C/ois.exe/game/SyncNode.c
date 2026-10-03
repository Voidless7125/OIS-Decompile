#include "../ois.exe.h"


// public: __thiscall SyncNode::SyncNode(int,enum ESyncVarType::SyncVarType,void *)

SyncNode * __thiscall
SyncNode::SyncNode(SyncNode *this,int param_1,SyncVarType param_2,void *param_3)

{
  basic_string<> *this_00;
  basic_string<> *pbVar1;
  void *pvVar2;
  basic_string<> *pbVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &DAT_005b320b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (basic_string<> *)(this + 0x24);
  *(int *)this = param_1;
  *(SyncVarType *)(this + 4) = param_2;
  *(void **)(this + 8) = param_3;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  *this_00 = (basic_string<>)0x0;
  local_8 = 0;
  switch(*(undefined4 *)(this + 4)) {
  case 0:
    *(undefined4 *)(this + 0x10) = **(undefined4 **)(this + 8);
    ExceptionList = pvVar2;
    return this;
  case 1:
    *(undefined4 *)(this + 0xc) = **(undefined4 **)(this + 8);
    ExceptionList = pvVar2;
    return this;
  case 2:
    *(undefined8 *)(this + 0x18) = **(undefined8 **)(this + 8);
    ExceptionList = pvVar2;
    return this;
  case 3:
    pbVar1 = *(basic_string<> **)(this + 8);
    if (this_00 != pbVar1) {
      pbVar3 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar3 = *(basic_string<> **)pbVar1;
      }
      std::basic_string<>::assign(this_00,(char *)pbVar3,*(uint *)(pbVar1 + 0x10));
    }
    break;
  case 4:
    this[0x20] = **(SyncNode **)(this + 8);
    ExceptionList = pvVar2;
    return this;
  }
  ExceptionList = local_10;
  return this;
}
