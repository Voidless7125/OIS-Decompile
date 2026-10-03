#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: __thiscall RakNet::AddressOrGUID::AddressOrGUID(struct RakNet::RakNetGUID const &)

AddressOrGUID * __thiscall
RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,RakNetGUID *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (this->rakNetGuid).systemIndex = 0xffff;
  *(undefined4 *)&(this->rakNetGuid).g = DAT_006578d0;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = DAT_006578d4;
  (this->rakNetGuid).systemIndex = DAT_006578d8;
  *(undefined4 *)&this->systemAddress = 0;
  *(undefined4 *)&(this->systemAddress).field_0x4 = 0;
  *(undefined4 *)&(this->systemAddress).field_0x8 = 0;
  *(undefined4 *)&(this->systemAddress).field_0xc = 0;
  *(undefined2 *)&this->systemAddress = 2;
  (this->systemAddress).debugPort = 0;
  (this->systemAddress).systemIndex = 0xffff;
  *(int *)&(this->rakNetGuid).g = (int)param_1->g;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = *(undefined4 *)((int)&param_1->g + 4);
  (this->rakNetGuid).systemIndex = param_1->systemIndex;
  uVar3 = uRam006576a4;
  uVar2 = uRam006576a0;
  uVar1 = uRam0065769c;
  *(undefined4 *)&this->systemAddress = _DAT_00657698;
  *(undefined4 *)&(this->systemAddress).field_0x4 = uVar1;
  *(undefined4 *)&(this->systemAddress).field_0x8 = uVar2;
  *(undefined4 *)&(this->systemAddress).field_0xc = uVar3;
  (this->systemAddress).systemIndex = DAT_006576aa;
  (this->systemAddress).debugPort = DAT_006576a8;
  return this;
}


// public: bool __thiscall RakNet::AddressOrGUID::IsUndefined(void)const 

bool __thiscall RakNet::AddressOrGUID::IsUndefined(AddressOrGUID *this)

{
  if (((((int)(this->rakNetGuid).g == DAT_00657908) &&
       (*(int *)((int)&(this->rakNetGuid).g + 4) == DAT_0065790c)) &&
      (*(short *)&(this->systemAddress).field_0x2 == DAT_006578f6)) &&
     ((*(short *)&this->systemAddress == 2 &&
      (*(int *)&(this->systemAddress).field_0x4 == DAT_006578f8)))) {
    return true;
  }
  return false;
}


// public: __thiscall RakNet::AddressOrGUID::AddressOrGUID(struct RakNet::AddressOrGUID const &)

AddressOrGUID * __thiscall
RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,AddressOrGUID *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  (this->rakNetGuid).systemIndex = 0xffff;
  *(undefined4 *)&(this->rakNetGuid).g = DAT_006578d0;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = DAT_006578d4;
  (this->rakNetGuid).systemIndex = DAT_006578d8;
  *(undefined4 *)&this->systemAddress = 0;
  *(undefined4 *)&(this->systemAddress).field_0x4 = 0;
  *(undefined4 *)&(this->systemAddress).field_0x8 = 0;
  *(undefined4 *)&(this->systemAddress).field_0xc = 0;
  *(undefined2 *)&this->systemAddress = 2;
  (this->systemAddress).debugPort = 0;
  (this->systemAddress).systemIndex = 0xffff;
  *(int *)&(this->rakNetGuid).g = (int)(param_1->rakNetGuid).g;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) =
       *(undefined4 *)((int)&(param_1->rakNetGuid).g + 4);
  (this->rakNetGuid).systemIndex = (param_1->rakNetGuid).systemIndex;
  uVar4 = *(undefined3 *)&(param_1->systemAddress).field_0x1;
  uVar1 = *(undefined4 *)&(param_1->systemAddress).field_0x4;
  uVar2 = *(undefined4 *)&(param_1->systemAddress).field_0x8;
  uVar3 = *(undefined4 *)&(param_1->systemAddress).field_0xc;
  (this->systemAddress).address = (param_1->systemAddress).address;
  *(undefined3 *)&(this->systemAddress).field_0x1 = uVar4;
  *(undefined4 *)&(this->systemAddress).field_0x4 = uVar1;
  *(undefined4 *)&(this->systemAddress).field_0x8 = uVar2;
  *(undefined4 *)&(this->systemAddress).field_0xc = uVar3;
  (this->systemAddress).systemIndex = (param_1->systemAddress).systemIndex;
  (this->systemAddress).debugPort = (param_1->systemAddress).debugPort;
  return this;
}


// public: __thiscall RakNet::AddressOrGUID::AddressOrGUID(struct RakNet::SystemAddress const &)

AddressOrGUID * __thiscall
RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,SystemAddress *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  (this->rakNetGuid).systemIndex = 0xffff;
  *(undefined4 *)&(this->rakNetGuid).g = DAT_006578d0;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = DAT_006578d4;
  (this->rakNetGuid).systemIndex = DAT_006578d8;
  *(undefined4 *)&this->systemAddress = 0;
  *(undefined4 *)&(this->systemAddress).field_0x4 = 0;
  *(undefined4 *)&(this->systemAddress).field_0x8 = 0;
  *(undefined4 *)&(this->systemAddress).field_0xc = 0;
  *(undefined2 *)&this->systemAddress = 2;
  (this->systemAddress).debugPort = 0;
  (this->systemAddress).systemIndex = 0xffff;
  *(undefined4 *)&(this->rakNetGuid).g = DAT_00657908;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = DAT_0065790c;
  (this->rakNetGuid).systemIndex = DAT_00657910;
  uVar4 = *(undefined3 *)&param_1->field_0x1;
  uVar1 = *(undefined4 *)&param_1->field_0x4;
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  (this->systemAddress).address = param_1->address;
  *(undefined3 *)&(this->systemAddress).field_0x1 = uVar4;
  *(undefined4 *)&(this->systemAddress).field_0x4 = uVar1;
  *(undefined4 *)&(this->systemAddress).field_0x8 = uVar2;
  *(undefined4 *)&(this->systemAddress).field_0xc = uVar3;
  (this->systemAddress).systemIndex = param_1->systemIndex;
  (this->systemAddress).debugPort = param_1->debugPort;
  return this;
}


// public: struct RakNet::AddressOrGUID & __thiscall RakNet::AddressOrGUID::operator=(struct
// RakNet::SystemAddress const &)

AddressOrGUID * __thiscall
RakNet::AddressOrGUID::operator=(AddressOrGUID *this,SystemAddress *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  *(undefined4 *)&(this->rakNetGuid).g = DAT_00657908;
  *(undefined4 *)((int)&(this->rakNetGuid).g + 4) = DAT_0065790c;
  (this->rakNetGuid).systemIndex = DAT_00657910;
  uVar4 = *(undefined3 *)&param_1->field_0x1;
  uVar1 = *(undefined4 *)&param_1->field_0x4;
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  (this->systemAddress).address = param_1->address;
  *(undefined3 *)&(this->systemAddress).field_0x1 = uVar4;
  *(undefined4 *)&(this->systemAddress).field_0x4 = uVar1;
  *(undefined4 *)&(this->systemAddress).field_0x8 = uVar2;
  *(undefined4 *)&(this->systemAddress).field_0xc = uVar3;
  (this->systemAddress).systemIndex = param_1->systemIndex;
  (this->systemAddress).debugPort = param_1->debugPort;
  return this;
}
