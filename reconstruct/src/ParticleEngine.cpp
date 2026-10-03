// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ParticleEngine::runlogic(ParticleEngine *this,float param_1)
void ParticleEngine::runlogic(float param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  Vec3 *pVVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  AnimationFrames **ppAVar10;
  size_t sVar11;
  int *piVar12;
  int *in_XMM1_Da;
  Vec3 local_74 [12];
  Vec3 local_68 [12];
  Vec3 local_5c [12];
  Vec3 local_50 [12];
  Vec3 local_44 [12];
  int *local_38;
  AnimationFrames **local_34;
  AnimationFrames **local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  AnimationFrames **local_1c;
  int *local_18;
  ParticleEngine *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c6023;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  ppAVar10 = (AnimationFrames **)0x0;
  local_20 = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  local_30 = (AnimationFrames **)0x0;
  // [seh] local_8 = 0;
  iVar7 = *(int *)((char *)this_ + 0x278);
  local_24 = 0;
  local_18 = in_XMM1_Da;
  local_14 = this_;
  if (*(int *)((char *)this_ + 0x27c) - iVar7 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar7 + local_24 * 4);
      local_28 = local_24 * 4;
      local_20 = (int *)iVar7;
      pVVar2 = (Vec3 *)cocos2d::Vec3::Vec3(local_5c,0.0,-800.0,0.0);
      // [seh] local_8._0_1_ = 1;
      cocos2d::Vec3::operator*(pVVar2,(float)local_50);
      // [seh] local_8._0_1_ = 2;
      puVar3 = (undefined8 *)cocos2d::Vec3::operator+((Vec3 *)(iVar7 + 0x278),local_44);
      *(undefined8 *)(iVar7 + 0x278) = *puVar3;
      *(undefined4 *)(iVar7 + 0x280) = *(undefined4 *)(puVar3 + 1);
      cocos2d::Vec3::~Vec3(local_44);
      cocos2d::Vec3::~Vec3(local_50);
      // [seh] local_8._0_1_ = 0;
      cocos2d::Vec3::~Vec3(local_5c);
      if (*(float *)(iVar7 + 0x27c) <= -400.0 && *(float *)(iVar7 + 0x27c) != -400.0) {
        *(undefined4 *)(iVar7 + 0x27c) = 0xc3c80000;
      }
      cocos2d::Vec3::operator*((Vec3 *)(iVar7 + 0x278),(float)local_74);
      // [seh] local_8._0_1_ = 3;
      pVVar2 = (Vec3 *)(iVar7 + 0x290);
      puVar3 = (undefined8 *)cocos2d::Vec3::operator+(pVVar2,local_68);
      *(undefined8 *)pVVar2 = *puVar3;
      *(undefined4 *)(iVar7 + 0x298) = *(undefined4 *)(puVar3 + 1);
      cocos2d::Vec3::~Vec3(local_68);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      cocos2d::Vec3::~Vec3(local_74);
      (**(code **)(**(int **)((int)local_20 + 0x29c) + 0x78))(pVVar2);
      if (*(float *)((int)local_20 + 0x294) <= 0.0 && *(float *)((int)local_20 + 0x294) != 0.0) {
        debugPrint("RENDER","Particle journey complete.");
        if (local_1c == ppAVar10) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_38,ppAVar10,
                     (AnimationFrames **)(*(int *)((char *)this_ + 0x278) + local_28));
          local_1c = local_30;
          ppAVar10 = local_34;
        }
        else {
          *ppAVar10 = *(AnimationFrames **)(*(int *)((char *)this_ + 0x278) + local_28);
          local_34 = ppAVar10 + 1;
          ppAVar10 = local_34;
        }
      }
      iVar7 = *(int *)((char *)this_ + 0x278);
      local_24 = local_24 + 1;
    } while (local_24 < (uint)(*(int *)((char *)this_ + 0x27c) - iVar7 >> 2));
    local_20 = local_38;
  }
  local_24 = (int)ppAVar10 - (int)local_20 >> 2;
  piVar9 = local_20;
  local_38 = local_20;
  if (local_24 != 0) {
    do {
      iVar7 = *piVar9;
      piVar12 = *(int **)(iVar7 + 0x29c);
      local_18 = piVar9;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0x138))(1,uVar1);
        *(undefined4 *)(iVar7 + 0x29c) = 0;
      }
      (**(code **)(*(int *)*piVar9 + 0x138))(1);
      local_2c = *(int **)((char *)this_ + 0x27c);
      piVar12 = *(int **)((char *)this_ + 0x278);
      if (piVar12 != local_2c) {
        do {
          if (*piVar12 == *piVar9) break;
          piVar12 = piVar12 + 1;
        } while (piVar12 != local_2c);
        if (piVar12 != local_2c) {
          piVar4 = piVar12 + 1;
          uVar5 = 0;
          uVar8 = (uint)((int)local_2c + (3 - (int)piVar4)) >> 2;
          if (local_2c < piVar4) {
            uVar8 = 0;
          }
          if (uVar8 != 0) {
            do {
              if (*piVar4 != *local_18) {
                *piVar12 = *piVar4;
                piVar12 = piVar12 + 1;
              }
              uVar5 = uVar5 + 1;
              piVar4 = piVar4 + 1;
              piVar9 = local_18;
            } while (uVar5 != uVar8);
          }
          if (piVar12 != local_2c) {
            sVar11 = *(int *)(local_14 + 0x27c) - (int)local_2c;
            memmove(piVar12,local_2c,sVar11);
            *(size_t *)(local_14 + 0x27c) = sVar11 + (int)piVar12;
            piVar9 = local_18;
          }
        }
      }
      local_18 = piVar9 + 1;
      local_24 = local_24 + -1;
      piVar9 = local_18;
      this_ = local_14;
    } while (local_24 != 0);
    local_24 = 0;
  }
  if (local_20 != (int *)0x0) {
    pnVar6 = (nothrow_t *)((int)local_1c - (int)local_20 & 0xfffffffc);
    piVar9 = local_20;
    if ((nothrow_t *)0xfff < pnVar6) {
      piVar9 = (int *)local_20[-1];
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)local_20 + (-4 - (int)piVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar9,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  return;
}
