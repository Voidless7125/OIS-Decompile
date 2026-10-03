#include "../ois.exe.h"


// public: void __thiscall CommsManager::reset(void)

void __thiscall CommsManager::reset(CommsManager *this)

{
  LiveMessage *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(this + 0x14);
  uVar1 = (*(int *)(this + 0x18) - (int)puVar2) + 3U >> 2;
  uVar3 = 0;
  if (*(undefined4 **)(this + 0x18) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (LiveMessage *)*puVar2;
      if (this_00 != (LiveMessage *)0x0) {
        LiveMessage::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
  this[0xc] = (CommsManager)0x1;
  return;
}


// public: void __thiscall CommsManager::addLiveMessage(enum ECommsType::CommsType,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall
CommsManager::addLiveMessage(CommsManager *this,undefined4 param_1,basic_string<> *param_3)

{
  AnimationFrames **ppAVar1;
  LiveMessage *this_00;
  basic_string<> *pbVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined4 in_stack_00000038;
  CommsManager *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = this;
  this_00 = operator_new(0x50);
  memset(this_00,0,0x50);
  pbVar4 = (basic_string<> *)(this_00 + 4);
  *(undefined4 *)(this_00 + 0x14) = 0;
  pbVar3 = (basic_string<> *)(this_00 + 0x38);
  *(undefined4 *)(this_00 + 0x18) = 0xf;
  *pbVar4 = (basic_string<>)0x0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x30) = 0xf;
  this_00[0x1c] = (LiveMessage)0x0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined4 *)(this_00 + 0x4c) = 0xf;
  *pbVar3 = (basic_string<>)0x0;
  *(undefined4 *)(this_00 + 0x34) = in_stack_00000038;
  local_14 = (CommsManager *)this_00;
  if (pbVar3 != (basic_string<> *)&stack0x00000020) {
    pbVar2 = (basic_string<> *)&stack0x00000020;
    if (0xf < in_stack_00000034) {
      pbVar2 = in_stack_00000020;
    }
    std::basic_string<>::assign(pbVar3,(char *)pbVar2,in_stack_00000030);
  }
  if (pbVar4 != (basic_string<> *)&param_3) {
    pbVar3 = (basic_string<> *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar3 = param_3;
    }
    std::basic_string<>::assign(pbVar4,(char *)pbVar3,in_stack_00000018);
  }
  *(undefined4 *)this_00 = param_1;
  LiveMessage::generateRealMessage(this_00);
  ppAVar1 = *(AnimationFrames ***)(this + 0x18);
  if (*(AnimationFrames ***)(this + 0x1c) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x14),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)this_00;
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
  }
  this[0xc] = (CommsManager)0x1;
  if (0xf < in_stack_0000001c) {
    pnVar5 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(basic_string<> **)(param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((basic_string<> *)0x1f < param_3 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (basic_string<> *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar5 = (nothrow_t *)(in_stack_00000034 + 1);
    pbVar4 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(basic_string<> **)(in_stack_00000020 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000020 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  ExceptionList = local_10;
  return;
}
