#include "../ois.exe.h"


// public: void __thiscall ShipChatter::runLogic(float)

void __thiscall ShipChatter::runLogic(ShipChatter *this,float param_1)

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
  basic_string<> abStack_64 [16];
  undefined4 uStack_54;
  basic_string<> abStack_4c [12];
  undefined4 uStack_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(this + 0x2c) - *(int *)(this + 0x28) >> 2 != 0) &&
     (fVar1 = *(float *)(this + 0x24), *(float *)(this + 0x24) = fVar1 - in_XMM1_Da,
     fVar1 - in_XMM1_Da <= 0.0)) {
    iVar3 = rand();
    *(float *)(this + 0x24) = (float)(iVar3 % 6 + 5);
    getCurrentTransmissionQuality(this);
    this_00 = (LiveMessage *)**(undefined4 **)(this + 0x28);
    uStack_54 = 0x51a2d9;
    std::basic_string<>::basic_string<>(abStack_4c,(basic_string<> *)(this_00 + 0x38));
    local_8 = 0;
    std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)(this_00 + 4));
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar9 = *(undefined4 *)this_00;
    pCVar4 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    CommsManager::addLiveMessage(pCVar4,uVar9);
    puVar2 = *(undefined4 **)(this + 0x2c);
    puVar8 = *(undefined4 **)(this + 0x28);
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
          iVar3 = *(int *)(this + 0x2c);
          uStack_40 = 0x51a368;
          memmove(puVar8,puVar2,iVar3 - (int)puVar2);
          *(int *)(this + 0x2c) = (iVar3 - (int)puVar2) + (int)puVar8;
          pSVar6 = this;
        }
      }
    }
    LiveMessage::_scalar_deleting_destructor_(this_00,(uint)pSVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: int __thiscall ShipChatter::getCurrentTransmissionQuality(void)

int __thiscall ShipChatter::getCurrentTransmissionQuality(ShipChatter *this)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c40b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
  local_14 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
  local_20 = (float)*(double *)(*(int *)this + 0x28);
  local_1c = (float)*(double *)(*(int *)this + 0x30);
  local_8 = 1;
  fVar2 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
  fVar1 = (float)(0x5f3759df - ((uint)fVar2 >> 1));
  ExceptionList = local_10;
  return (uint)((1.5 - fVar2 * 0.5 * fVar1 * fVar1) * fVar1 * fVar2 < 300.0) * 4 + 0x60;
}


// public: void __thiscall ShipChatter::addMessage(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall
ShipChatter::addMessage(ShipChatter *this,undefined4 param_1,basic_string<> *param_3)

{
  basic_string<> *this_00;
  AnimationFrames **ppAVar1;
  LiveMessage *this_01;
  basic_string<> *pbVar2;
  basic_string<> *pbVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  LiveMessage *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  this_01 = operator_new(0x50);
  memset(this_01,0,0x50);
  pbVar3 = (basic_string<> *)(this_01 + 4);
  *(undefined4 *)(this_01 + 0x14) = 0;
  this_00 = (basic_string<> *)(this_01 + 0x38);
  *(undefined4 *)(this_01 + 0x18) = 0xf;
  *pbVar3 = (basic_string<>)0x0;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  *(undefined4 *)(this_01 + 0x30) = 0xf;
  this_01[0x1c] = (LiveMessage)0x0;
  *(undefined4 *)(this_01 + 0x48) = 0;
  *(undefined4 *)(this_01 + 0x4c) = 0xf;
  *this_00 = (basic_string<>)0x0;
  *(undefined4 *)this_01 = param_1;
  local_14 = this_01;
  if (pbVar3 != (basic_string<> *)&param_3) {
    pbVar2 = (basic_string<> *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar2 = param_3;
    }
    std::basic_string<>::assign(pbVar3,(char *)pbVar2,in_stack_00000018);
  }
  if (this_00 != (basic_string<> *)&stack0x00000020) {
    pbVar3 = (basic_string<> *)&stack0x00000020;
    if (0xf < in_stack_00000034) {
      pbVar3 = in_stack_00000020;
    }
    std::basic_string<>::assign(this_00,(char *)pbVar3,in_stack_00000030);
  }
  iVar4 = getCurrentTransmissionQuality(this);
  *(int *)(this_01 + 0x34) = iVar4;
  LiveMessage::generateRealMessage(this_01);
  ppAVar1 = *(AnimationFrames ***)(this + 0x2c);
  if (*(AnimationFrames ***)(this + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)this_01;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 4;
  }
  if ((*(int *)(this + 0x2c) - *(int *)(this + 0x28) & 0xfffffffcU) == 4) {
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (0xf < in_stack_0000001c) {
    pnVar5 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(basic_string<> **)(param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((basic_string<> *)0x1f < param_3 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,pnVar5);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (basic_string<> *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar5 = (nothrow_t *)(in_stack_00000034 + 1);
    pbVar3 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(basic_string<> **)(in_stack_00000020 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000020 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,pnVar5);
  }
  ExceptionList = local_10;
  return;
}
