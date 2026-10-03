#include "../ois.exe.h"


// public: __thiscall LogLine::LogLine(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,enum ELogPriority::LogPriority)

LogLine * __thiscall LogLine::LogLine(LogLine *this,void *param_2)

{
  GameLogic *pGVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x18),(basic_string<> *)&param_2);
  pGVar1 = g_gameLogic;
  *(undefined4 *)(this + 0x30) = in_stack_0000001c;
  *(undefined4 *)this = *(undefined4 *)(pGVar1 + 400);
  *(undefined4 *)(this + 4) = *(undefined4 *)(pGVar1 + 0x18c);
  *(undefined4 *)(this + 8) = *(undefined4 *)(pGVar1 + 0x188);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(pGVar1 + 0x184);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(pGVar1 + 0x180);
  *(int *)(this + 0x14) = (int)*(float *)(pGVar1 + 0x17c);
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return this;
}


// public: void * __thiscall LogLine::`scalar deleting destructor'(unsigned int)

void * __thiscall LogLine::_scalar_deleting_destructor_(LogLine *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (LogLine)0x0;
  operator_delete(this,(nothrow_t *)0x34);
  return this;
}
