#include "../ois.exe.h"


// public: __thiscall Beacon::Beacon(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Beacon * __thiscall Beacon::Beacon(Beacon *this,void *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b14e0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  SyntheticObject::SyntheticObject((SyntheticObject *)this,2);
  iVar1 = s_beaconID;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this = vftable;
  s_beaconID = s_beaconID + 1;
  strUsingArgs((char *)(this + 0xf0),"%d",iVar1,uVar2);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return this;
}
