// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall FogInstance::resetFog(FogInstance *this)
void FogInstance::resetFog()

{
  ghidra::vector *this_00;
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c47ab;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
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
  if ((g_gameLogic[0x142] == (byte)0x0) &&
     (*(char *)(*(int *)(g_gameData + 0xcc) + 0x376) != '\0')) {
    // [seh] local_8._1_3_ = 0;
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
        // [seh] local_8._0_1_ = 1;
        local_3c = local_44;
        fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&local_4c);
        local_14 = (FogInstance *)(0x5f3759df - ((uint)fVar9 >> 1));
        // [seh] local_8._0_1_ = 0;
        if ((1.5 - fVar9 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar9 <
            600.0) {
          local_34 = local_3c;
          local_30 = local_38;
          iVar2 = (*pcVar5)();
          iVar3 = (*pcVar5)();
          local_20 = (AnimationFrames *)(iVar3 % 0x168);
          iVar3 = (*pcVar5)();
          local_14 = (FogInstance *)(iVar3 % 6);
          // [seh] local_8 = CONCAT31(local_8._1_3_,2);
          fVar9 = local_34 + 600.0;
          fVar8 = local_30 + 600.0;
          local_28 = operator_new(0x14);
          *(float *)local_28 = local_34;
          *(float *)(local_28 + 4) = local_30;
          *(FogInstance **)(local_28 + 8) = local_14;
          *(AnimationFrames **)(local_28 + 0xc) = local_20;
          this_00 = (ghidra::vector *)(local_24 + ((int)(fVar9 / 150.0) + (int)(fVar8 / 150.0) * 8) * 0xc)
          ;
          *(int *)(local_28 + 0x10) = (int)(((float)(iVar2 % 0x19 + 0x4c) / 100.0) * 255.0);
          ppAVar1 = *(AnimationFrames ***)(this_00 + 4);
          local_20 = local_28;
          if (*(AnimationFrames ***)(this_00 + 8) == ppAVar1) {
            ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __cdecl FogInstance::getChunk(float param_1)
int FogInstance::getChunk(float param_1)

{
  float in_XMM0_Da;
  
  return (int)((in_XMM0_Da + 600.0) / 150.0);
}


// Ghidra: bool __thiscall FogInstance::fogObscuresPoint(FogInstance *this,float param_2,float param_3)
bool FogInstance::fogObscuresPoint(float param_2, float param_3)

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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c3e49;
  // [seh] local_10 = ExceptionList;
  // [seh] local_8 = 0;
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
                // [seh] ExceptionList = local_10;
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
  // [seh] ExceptionList = local_10;
  return false;
}
