#include "../ois.exe.h"


// public: void __thiscall FogInstance::resetFog(void)

void __thiscall FogInstance::resetFog(FogInstance *this)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  AnimationFrames *local_28;
  FogInstance *local_24;
  AnimationFrames *local_20;
  int local_1c;
  int local_18;
  FogInstance *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c47ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 8;
  local_14 = this;
  local_24 = this;
  do {
    local_18 = 8;
    do {
      puVar6 = *(undefined4 **)local_14;
      uVar4 = 0;
      uVar7 = (uint)((int)*(undefined4 **)(local_14 + 4) + (3 - (int)puVar6)) >> 2;
      if (*(undefined4 **)(local_14 + 4) < puVar6) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        do {
          if ((void *)*puVar6 != (void *)0x0) {
            operator_delete((void *)*puVar6,(nothrow_t *)0x14);
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar4 != uVar7);
        puVar6 = *(undefined4 **)local_14;
      }
      *(undefined4 **)(local_14 + 4) = puVar6;
      local_14 = local_14 + 0xc;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  if ((g_gameLogic[0x142] == (GameLogic)0x0) &&
     (*(char *)(*(int *)(g_gameData + 0xcc) + 0x376) != '\0')) {
    local_8._1_3_ = 0;
    local_18 = -0x24c;
    pcVar5 = rand_exref;
    do {
      local_40 = (float)local_18;
      local_1c = -0x24c;
      do {
        local_44 = (float)local_1c;
        local_4c = 0;
        local_48 = 0;
        local_38 = local_40;
        local_8._0_1_ = 1;
        local_3c = local_44;
        fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&local_4c);
        local_14 = (FogInstance *)(0x5f3759df - ((uint)fVar9 >> 1));
        local_8._0_1_ = 0;
        if ((1.5 - fVar9 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar9 <
            600.0) {
          local_34 = local_3c;
          local_30 = local_38;
          iVar2 = (*pcVar5)();
          iVar3 = (*pcVar5)();
          local_20 = (AnimationFrames *)(iVar3 % 0x168);
          iVar3 = (*pcVar5)();
          local_14 = (FogInstance *)(iVar3 % 6);
          local_8 = CONCAT31(local_8._1_3_,2);
          fVar9 = local_34 + 600.0;
          fVar8 = local_30 + 600.0;
          local_28 = operator_new(0x14);
          *(float *)local_28 = local_34;
          *(float *)(local_28 + 4) = local_30;
          *(FogInstance **)(local_28 + 8) = local_14;
          *(AnimationFrames **)(local_28 + 0xc) = local_20;
          this_00 = (vector<> *)(local_24 + ((int)(fVar9 / 150.0) + (int)(fVar8 / 150.0) * 8) * 0xc)
          ;
          *(int *)(local_28 + 0x10) = (int)(((float)(iVar2 % 0x19 + 0x4c) / 100.0) * 255.0);
          ppAVar1 = *(AnimationFrames ***)(this_00 + 4);
          local_20 = local_28;
          if (*(AnimationFrames ***)(this_00 + 8) == ppAVar1) {
            std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,&local_20);
          }
          else {
            *ppAVar1 = local_28;
            *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
          }
          pcVar5 = rand_exref;
        }
        local_1c = local_1c + 0x18;
      } while (local_1c < 0x264);
      local_18 = local_18 + 0x18;
    } while (local_18 < 0x264);
  }
  ExceptionList = local_10;
  return;
}


// public: static int __cdecl FogInstance::getChunk(float)

int __cdecl FogInstance::getChunk(float param_1)

{
  float in_XMM0_Da;
  
  return (int)((in_XMM0_Da + 600.0) / 150.0);
}


// public: bool __thiscall FogInstance::removeFogInRadius(int,int,class cocos2d::Vec2,float)

bool __thiscall
FogInstance::removeFogInRadius
          (FogInstance *this,int param_1,int param_2,undefined4 param_4,undefined4 param_5,
          float param_6)

{
  uint uVar1;
  float fVar2;
  AnimationFrames **ppAVar3;
  int *piVar4;
  int *piVar5;
  nothrow_t *pnVar6;
  int iVar7;
  uint uVar8;
  AnimationFrames **ppAVar9;
  uint uVar10;
  size_t sVar11;
  int *piVar12;
  float fVar13;
  int *local_30;
  AnimationFrames **local_2c;
  AnimationFrames **local_28;
  int *local_24;
  int *local_20;
  AnimationFrames **local_1c;
  FogInstance *local_18;
  undefined1 local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c47e1;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppAVar9 = (AnimationFrames **)0x0;
  local_11 = 0;
  local_20 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  local_28 = (AnimationFrames **)0x0;
  uVar8 = 0;
  local_8 = 1;
  param_1 = param_1 + param_2 * 8;
  iVar7 = *(int *)(this + param_1 * 0xc);
  local_18 = this;
  if (*(int *)(this + param_1 * 0xc + 4) - iVar7 >> 2 != 0) {
    do {
      fVar13 = cocos2d::Vec2::getDistanceSq(*(Vec2 **)(iVar7 + uVar8 * 4),(Vec2 *)&param_4);
      fVar2 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
      if ((1.5 - fVar13 * 0.5 * fVar2 * fVar2) * fVar2 * fVar13 <= param_6) {
        ppAVar3 = (AnimationFrames **)(*(int *)(this + param_1 * 0xc) + uVar8 * 4);
        if (local_1c == ppAVar9) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_30,ppAVar9,ppAVar3);
          local_1c = local_28;
        }
        else {
          *ppAVar9 = *ppAVar3;
          local_2c = ppAVar9 + 1;
        }
        local_11 = 1;
        ppAVar9 = local_2c;
      }
      uVar8 = uVar8 + 1;
      iVar7 = *(int *)(this + param_1 * 0xc);
    } while (uVar8 < (uint)(*(int *)(this + param_1 * 0xc + 4) - iVar7 >> 2));
    local_20 = local_30;
  }
  param_6 = (float)((int)ppAVar9 - (int)local_20 >> 2);
  piVar4 = local_20;
  local_30 = local_20;
  if (param_6 != 0.0) {
    do {
      local_24 = *(int **)(this + param_1 * 0xc + 4);
      piVar12 = *(int **)(this + param_1 * 0xc);
      if (piVar12 != local_24) {
        do {
          if (*piVar12 == *piVar4) break;
          piVar12 = piVar12 + 1;
        } while (piVar12 != local_24);
        if (piVar12 != local_24) {
          piVar5 = piVar12 + 1;
          uVar8 = 0;
          uVar10 = (uint)((int)local_24 + (3 - (int)piVar5)) >> 2;
          if (local_24 < piVar5) {
            uVar10 = 0;
          }
          if (uVar10 != 0) {
            do {
              if (*piVar5 != *piVar4) {
                *piVar12 = *piVar5;
                piVar12 = piVar12 + 1;
              }
              uVar8 = uVar8 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar8 != uVar10);
          }
          if (piVar12 != local_24) {
            sVar11 = *(int *)(local_18 + param_1 * 0xc + 4) - (int)local_24;
            memmove(piVar12,local_24,sVar11);
            *(size_t *)(local_18 + param_1 * 0xc + 4) = sVar11 + (int)piVar12;
          }
        }
      }
      this = local_18;
      iVar7 = (int)param_6;
      debugPrint("DETAIL","Removed fog at %f, %f",(double)*(float *)*piVar4,
                 (double)((float *)*piVar4)[1],uVar1);
      param_6 = (float)(iVar7 + -1);
      piVar4 = piVar4 + 1;
    } while (param_6 != 0.0);
    param_6 = 0.0;
  }
  if (local_20 != (int *)0x0) {
    pnVar6 = (nothrow_t *)((int)local_1c - (int)local_20 & 0xfffffffc);
    piVar4 = local_20;
    if ((nothrow_t *)0xfff < pnVar6) {
      piVar4 = (int *)local_20[-1];
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)local_20 + (-4 - (int)piVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar4,pnVar6);
  }
  ExceptionList = local_10;
  return (bool)local_11;
}


// public: bool __thiscall FogInstance::fogObscuresPoint(class cocos2d::Vec2)

bool __thiscall FogInstance::fogObscuresPoint(FogInstance *this,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void **ppvVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3e49;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar10 = (int)((param_2 + 600.0) / 150.0);
  iVar6 = (int)((param_3 + 600.0) / 150.0);
  uVar9 = iVar6 - 1;
  iVar6 = iVar6 + 1;
  if ((int)uVar9 <= iVar6) {
    uVar1 = iVar10 - 1;
    uVar3 = uVar1;
    uVar4 = uVar1;
    ppvVar5 = &local_10;
    do {
      for (; ExceptionList = ppvVar5, (int)uVar3 <= iVar10 + 1; uVar3 = uVar3 + 1) {
        if ((uVar9 < 8) && (uVar4 < 8)) {
          iVar2 = uVar3 + uVar9 * 8;
          uVar11 = 0;
          iVar8 = *(int *)(this + iVar2 * 0xc);
          if (*(int *)(this + iVar2 * 0xc + 4) - iVar8 >> 2 != 0) {
            do {
              fVar12 = cocos2d::Vec2::getDistanceSq(*(Vec2 **)(iVar8 + uVar11 * 4),(Vec2 *)&param_2)
              ;
              fVar7 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
              if ((1.5 - fVar12 * 0.5 * fVar7 * fVar7) * fVar7 * fVar12 <= 24.0) {
                ExceptionList = local_10;
                return true;
              }
              uVar11 = uVar11 + 1;
              iVar8 = *(int *)(this + iVar2 * 0xc);
            } while (uVar11 < (uint)(*(int *)(this + iVar2 * 0xc + 4) - iVar8 >> 2));
          }
        }
        uVar4 = uVar4 + 1;
        ppvVar5 = ExceptionList;
      }
      uVar9 = uVar9 + 1;
      uVar3 = uVar1;
      uVar4 = uVar1;
      ppvVar5 = ExceptionList;
    } while ((int)uVar9 <= iVar6);
  }
  ExceptionList = local_10;
  return false;
}
