#include "../ois.exe.h"


// public: __thiscall ConsoleDamage::ConsoleDamage(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ConsoleDamage * __thiscall ConsoleDamage::ConsoleDamage(ConsoleDamage *this,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  double dVar6;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4f48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)this,(basic_string<> *)&param_2);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar5) {
    dVar6 = -2.5;
  }
  else {
    dVar6 = 2.5;
  }
  *(int *)(this + 0x24) = (int)dVar6;
  iVar2 = rand();
  *(float *)(this + 0x18) = (float)(iVar2 % 100 + 1) / 100.0;
  iVar2 = rand();
  *(float *)(this + 0x1c) = (float)(iVar2 % 100 + 1) / 100.0;
  iVar2 = rand();
  *(int *)(this + 0x20) = iVar2 % 5;
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
