// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall CommsManager::reset(CommsManager *this)
void CommsManager::reset()

{
  LiveMessage *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)((char *)this + 0x14);
  uVar1 = (*(int *)((char *)this + 0x18) - (int)puVar2) + 3U >> 2;
  uVar3 = 0;
  if (*(undefined4 **)((char *)this + 0x18) < puVar2) {
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
  *(undefined4 *)((char *)this + 0x18) = *(undefined4 *)((char *)this + 0x14);
  ((char *)this)[0xc] = (byte)0x1;
  return;
}


// Ghidra: void __thiscall CommsManager::addLiveMessage(CommsManager *this,undefined4 param_1,basic_string<> *param_3)
void CommsManager::addLiveMessage(undefined4 param_1, std::string * param_3)

{
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  LiveMessage *this_00;
  std::string *pbVar2;
  std::string *pbVar3;
  std::string *pbVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  std::string *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined4 in_stack_00000038;
  CommsManager *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4070;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_14 = this;
  this_00 = operator_new(0x50);
  memset(this_00,0,0x50);
  pbVar4 = (std::string *)(this_00 + 4);
  *(undefined4 *)(this_00 + 0x14) = 0;
  pbVar3 = (std::string *)(this_00 + 0x38);
  *(undefined4 *)(this_00 + 0x18) = 0xf;
  *pbVar4 = (std::string)0x0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x30) = 0xf;
  this_00[0x1c] = (byte)0x0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined4 *)(this_00 + 0x4c) = 0xf;
  *pbVar3 = (std::string)0x0;
  *(undefined4 *)(this_00 + 0x34) = in_stack_00000038;
  local_14 = (CommsManager *)this_00;
  if (pbVar3 != (std::string *)&stack0x00000020) {
    pbVar2 = (std::string *)&stack0x00000020;
    if (0xf < in_stack_00000034) {
      pbVar2 = in_stack_00000020;
    }
    ghidra::str::assign(pbVar3,(char *)pbVar2,in_stack_00000030);
  }
  if (pbVar4 != (std::string *)&param_3) {
    pbVar3 = (std::string *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar3 = param_3;
    }
    ghidra::str::assign(pbVar4,(char *)pbVar3,in_stack_00000018);
  }
  *(undefined4 *)this_00 = param_1;
  (this_00)->generateRealMessage();
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x14),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)this_00;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  ((char *)this)[0xc] = (byte)0x1;
  if (0xf < in_stack_0000001c) {
    pnVar5 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(std::string **)(param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((std::string *)0x1f < param_3 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (std::string *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar5 = (nothrow_t *)(in_stack_00000034 + 1);
    pbVar4 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(std::string **)(in_stack_00000020 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((std::string *)0x1f < in_stack_00000020 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}
