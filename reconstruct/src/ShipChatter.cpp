// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ShipChatter::runLogic(ShipChatter *this,float param_1)
void ShipChatter::runLogic(float param_1)

{
  float fVar1;
  LiveMessage *this_00;
  undefined4 *puVar2;
  int iVar3;
  CommsManager *pCVar4;
  undefined4 *puVar5;
  ShipChatter *extraout_ECX;
  ShipChatter *pSVar6;
  ShipChatter *pSVar7;
  undefined4 *puVar8;
  float in_XMM1_Da;
  undefined4 uVar9;
  std::string abStack_64 [16];
  undefined4 uStack_54;
  std::string abStack_4c [12];
  undefined4 uStack_40;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4080;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) >> 2 != 0) &&
     (fVar1 = *(float *)((char *)this + 0x24), *(float *)((char *)this + 0x24) = fVar1 - in_XMM1_Da,
     fVar1 - in_XMM1_Da <= 0.0)) {
    iVar3 = rand();
    *(float *)((char *)this + 0x24) = (float)(iVar3 % 6 + 5);
    getCurrentTransmissionQuality(this);
    this_00 = (LiveMessage *)**(undefined4 **)((char *)this + 0x28);
    uStack_54 = 0x51a2d9;
    ghidra::str::ctor(abStack_4c,(std::string *)(this_00 + 0x38));
    // [seh] local_8 = 0;
    ghidra::str::ctor(abStack_64,(std::string *)(this_00 + 4));
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    uVar9 = *(undefined4 *)this_00;
    pCVar4 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pCVar4)->addLiveMessage(uVar9);
    puVar2 = *(undefined4 **)((char *)this + 0x2c);
    puVar8 = *(undefined4 **)((char *)this + 0x28);
    pSVar6 = extraout_ECX;
    if (puVar8 != puVar2) {
      do {
        if ((LiveMessage *)*puVar8 == this_00) break;
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar2);
      pSVar6 = extraout_ECX;
      if (puVar8 != puVar2) {
        puVar5 = puVar8 + 1;
        pSVar6 = (ShipChatter *)0x0;
        pSVar7 = (ShipChatter *)((uint)((int)puVar2 + (3 - (int)puVar5)) >> 2);
        if (puVar2 < puVar5) {
          pSVar7 = (ShipChatter *)0x0;
        }
        if (pSVar7 != (ShipChatter *)0x0) {
          do {
            if ((LiveMessage *)*puVar5 != this_00) {
              *puVar8 = (LiveMessage *)*puVar5;
              puVar8 = puVar8 + 1;
            }
            pSVar6 = pSVar6 + 1;
            puVar5 = puVar5 + 1;
          } while (pSVar6 != pSVar7);
        }
        if (puVar8 != puVar2) {
          iVar3 = *(int *)((char *)this + 0x2c);
          uStack_40 = 0x51a368;
          memmove(puVar8,puVar2,iVar3 - (int)puVar2);
          *(int *)((char *)this + 0x2c) = (iVar3 - (int)puVar2) + (int)puVar8;
          pSVar6 = this;
        }
      }
    }
    LiveMessage::_scalar_deleting_destructor_(this_00,(uint)pSVar6);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __thiscall ShipChatter::getCurrentTransmissionQuality(ShipChatter *this)
int ShipChatter::getCurrentTransmissionQuality()

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c40b2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_18 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
  local_14 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
  local_20 = (float)*(double *)(*(int *)this + 0x28);
  local_1c = (float)*(double *)(*(int *)this + 0x30);
  // [seh] local_8 = 1;
  fVar2 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
  fVar1 = (float)(0x5f3759df - ((uint)fVar2 >> 1));
  // [seh] ExceptionList = local_10;
  return (uint)((1.5 - fVar2 * 0.5 * fVar1 * fVar1) * fVar1 * fVar2 < 300.0) * 4 + 0x60;
}


// Ghidra: void __thiscall ShipChatter::addMessage(ShipChatter *this,undefined4 param_1,basic_string<> *param_3)
void ShipChatter::addMessage(undefined4 param_1, std::string * param_3)

{
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  AnimationFrames **ppAVar1;
  LiveMessage *this_01;
  std::string *pbVar2;
  std::string *pbVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  std::string *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  LiveMessage *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b3f60;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  this_01 = operator_new(0x50);
  memset(this_01,0,0x50);
  pbVar3 = (std::string *)(this_01 + 4);
  *(undefined4 *)(this_01 + 0x14) = 0;
  this_00 = (std::string *)(this_01 + 0x38);
  *(undefined4 *)(this_01 + 0x18) = 0xf;
  *pbVar3 = (std::string)0x0;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  *(undefined4 *)(this_01 + 0x30) = 0xf;
  this_01[0x1c] = (byte)0x0;
  *(undefined4 *)(this_01 + 0x48) = 0;
  *(undefined4 *)(this_01 + 0x4c) = 0xf;
  *this_00 = (std::string)0x0;
  *(undefined4 *)this_01 = param_1;
  local_14 = this_01;
  if (pbVar3 != (std::string *)&param_3) {
    pbVar2 = (std::string *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar2 = param_3;
    }
    ghidra::str::assign(pbVar3,(char *)pbVar2,in_stack_00000018);
  }
  if (this_00 != (std::string *)&stack0x00000020) {
    pbVar3 = (std::string *)&stack0x00000020;
    if (0xf < in_stack_00000034) {
      pbVar3 = in_stack_00000020;
    }
    ghidra::str::assign(this_00,(char *)pbVar3,in_stack_00000030);
  }
  iVar4 = getCurrentTransmissionQuality(this);
  *(int *)(this_01 + 0x34) = iVar4;
  (this_01)->generateRealMessage();
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x2c);
  if (*(AnimationFrames ***)((char *)this + 0x30) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)this_01;
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 4;
  }
  if ((*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) & 0xfffffffcU) == 4) {
    *(undefined4 *)((char *)this + 0x24) = 0;
  }
  if (0xf < in_stack_0000001c) {
    pnVar5 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(std::string **)(param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((std::string *)0x1f < param_3 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,pnVar5);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (std::string *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar5 = (nothrow_t *)(in_stack_00000034 + 1);
    pbVar3 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(std::string **)(in_stack_00000020 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((std::string *)0x1f < in_stack_00000020 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}
