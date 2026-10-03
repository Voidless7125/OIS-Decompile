#include "../ois.exe.h"


// public: __thiscall RakNet::RakNetGUID::RakNetGUID(void)

RakNetGUID * __thiscall RakNet::RakNetGUID::RakNetGUID(RakNetGUID *this)

{
  this->systemIndex = 0xffff;
  *(undefined4 *)&this->g = DAT_006578d0;
  *(undefined4 *)((int)&this->g + 4) = DAT_006578d4;
  this->systemIndex = DAT_006578d8;
  return this;
}


// public: void __thiscall RakNet::RakNetGUID::ToString(char *)const 

void __thiscall RakNet::RakNetGUID::ToString(RakNetGUID *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this->g;
  iVar2 = *(int *)((int)&this->g + 4);
  if ((iVar1 == DAT_006578d0) && (iVar2 == DAT_006578d4)) {
    builtin_strncpy(param_1,"UNASSIGNED_RAKNET_GUID",0x17);
    return;
  }
  _sprintf(param_1,"%I64u",iVar1,iVar2);
  return;
}
