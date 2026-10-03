// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Faction * __thiscall Sector::getMainFaction(Sector *this)
Faction * Sector::getMainFaction()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  FictionData *pFVar2;
  Faction *pFVar3;
  int iVar4;
  std::string abStack_34 [24];
  uint uStack_1c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0178;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_1c = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)((char *)this + 0xe8) - (int)*(std::string **)((char *)this + 0xe4);
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar1 != iVar1) {
    // [seh] ExceptionList = &local_10;
    ghidra::str::ctor(abStack_34,*(std::string **)((char *)this + 0xe4));
    // [seh] local_8 = 0;
    pFVar2 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    pFVar3 = (pFVar2)->getFactionForID();
    // [seh] ExceptionList = local_10;
    return pFVar3;
  }
  return (Faction *)0x0;
}


// Ghidra: Zone * __thiscall Sector::getZone(Sector *this,float param_2,float param_3,char param_4)
Zone * Sector::getZone(float param_2, float param_3, char param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  bool bVar2;
  int iVar3;
  Zone *pZVar4;
  Sector *pSVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float local_1c;
  Sector *local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c4812;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pZVar4 = (Zone *)0x0;
  iVar3 = *(int *)((char *)this_ + 0x134);
  pSVar5 = (Sector *)0x0;
  if (*(int *)((char *)this_ + 0x138) - iVar3 >> 2 != 0) {
    fVar7 = 0.5;
    local_18 = this_;
    do {
      local_20 = param_2;
      local_1c = param_3;
      iVar1 = *(int *)(iVar3 + (int)pSVar5 * 4);
      // [seh] local_8._0_1_ = 1;
      if (*(float *)(iVar1 + 0x3c) <= 0.0) {
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)(iVar1 + 0xe8));
        fVar7 = 0.5;
        this_ = (Sector *)((uint)fVar6 >> 1);
        local_14 = (float)(0x5f3759df - (int)this_);
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        iVar3 = *(int *)(local_18 + 0x134);
        if ((1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6 <= *(float *)(iVar1 + 0x38)
           ) {
LAB_00520d35:
          pZVar4 = *(Zone **)(iVar3 + (int)pSVar5 * 4);
        }
      }
      else {
        fVar6 = *(float *)(iVar1 + 0x3c) * fVar7;
        if ((*(float *)(iVar1 + 0xe8) - fVar6 <= param_2) &&
           (param_2 <= fVar6 + *(float *)(iVar1 + 0xe8))) {
          fVar6 = *(float *)(iVar1 + 0x40) * fVar7;
          if ((*(float *)(iVar1 + 0xec) - fVar6 <= param_3) &&
             (param_3 <= *(float *)(iVar1 + 0xec) + fVar6)) {
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            goto LAB_00520d35;
          }
        }
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
      }
      if ((pZVar4 != (Zone *)0x0) && (param_4 != '\0')) {
        bVar2 = ((GameLogic *)this_)->zoneActive(pZVar4);
        if (!bVar2) {
          pZVar4 = (Zone *)0x0;
        }
      }
      pSVar5 = pSVar5 + 1;
      iVar3 = *(int *)(local_18 + 0x134);
      this_ = (Sector *)(*(int *)(local_18 + 0x138) - iVar3 >> 2);
    } while (pSVar5 < this_);
  }
  // [seh] ExceptionList = local_10;
  return pZVar4;
}


// Ghidra: SyntheticObject * __thiscall Sector::getSyntheticObjectWithID(Sector *this,int param_1)
SyntheticObject * Sector::getSyntheticObjectWithID(int param_1)

{
  SyntheticObject *pSVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0xa0) - *(int *)((char *)this + 0x9c) >> 2;
  if (uVar3 != 0) {
    do {
      pSVar1 = *(SyntheticObject **)(*(int *)((char *)this + 0x9c) + uVar2 * 4);
      if (*(int *)(pSVar1 + 0x44) == param_1) {
        return pSVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (SyntheticObject *)0x0;
}


// Ghidra: SyntheticObject * __thiscall Sector::addSyntheticObject(Sector *this,int param_1)
SyntheticObject * Sector::addSyntheticObject(int param_1)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  Beacon *pBVar3;
  AnimationFrames *pAVar4;
  std::string local_38 [12];
  undefined4 uStack_2c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  iVar2 = param_1;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4854;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (param_1 != 2) {
    param_1 = (int)operator_new(0xf0);
    // [seh] local_8 = 1;
    param_1 = new ((void *)((SyntheticObject *)param_1)) SyntheticObject(iVar2);
    // [seh] local_8 = 0xffffffff;
    *(undefined1 **)(param_1 + 100) = &DAT_bf800000;
    *(Sector **)(param_1 + 0x24) = this;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)this;
    ppAVar1 = *(AnimationFrames ***)((char *)this + 0xa0);
    if (*(AnimationFrames ***)((char *)this + 0xa4) == ppAVar1) {
      uStack_2c = 0x520f08;
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)((char *)this + 0x9c),ppAVar1,(AnimationFrames **)&param_1);
    }
    else {
      *ppAVar1 = (AnimationFrames *)param_1;
      *(int *)((char *)this + 0xa0) = *(int *)((char *)this + 0xa0) + 4;
    }
    // [seh] ExceptionList = local_10;
    return (SyntheticObject *)param_1;
  }
  pBVar3 = operator_new(0x108);
  // [seh] local_8 = 0;
  local_38[0] = (std::string)0x0;
  param_1 = (int)pBVar3;
  ghidra::str::assign(local_38,"",0);
  pAVar4 = (AnimationFrames *)new ((void *)(pBVar3)) Beacon();
  // [seh] local_8 = 0xffffffff;
  *(undefined1 **)(pAVar4 + 100) = &DAT_bf800000;
  *(Sector **)(pAVar4 + 0x24) = this;
  *(undefined4 *)(pAVar4 + 0x20) = *(undefined4 *)this;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0xa0);
  if (*(AnimationFrames ***)((char *)this + 0xa4) != ppAVar1) {
    *ppAVar1 = pAVar4;
    *(int *)((char *)this + 0xa0) = *(int *)((char *)this + 0xa0) + 4;
    // [seh] ExceptionList = local_10;
    return (SyntheticObject *)pAVar4;
  }
  uStack_2c = 0x520e90;
  param_1 = (int)pAVar4;
  ghidra::lib::vector___Emplace_reallocate
            ((ghidra::vector *)((char *)this + 0x9c),ppAVar1,(AnimationFrames **)&param_1);
  // [seh] ExceptionList = local_10;
  return (SyntheticObject *)pAVar4;
}


// Ghidra: void __thiscall Sector::removeSyntheticObject(Sector *this,SyntheticObject *param_1)
void Sector::removeSyntheticObject(SyntheticObject * param_1)

{
  Ship *this_00;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar4 = *(undefined4 **)((char *)this + 0xcc);
  uVar6 = 0;
  uVar5 = (uint)((int)*(undefined4 **)((char *)this + 0xd0) + (3 - (int)puVar4)) >> 2;
  if (*(undefined4 **)((char *)this + 0xd0) < puVar4) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      this_00 = (Ship *)*puVar4;
      if ((*(int *)(this_00 + 0x194) != 0) &&
         ((((iVar1 = *(int *)(*(int *)(this_00 + 0x194) + 0xe0), iVar1 == 5 || (iVar1 == 6)) ||
           (iVar1 == 4)) || (iVar1 == 7)))) {
        *(undefined4 *)(this_00 + 0x194) = 0;
        *(undefined4 *)(this_00 + 400) = 0xffffffff;
      }
      (this_00)->removeSensorDataForSyntheticID(*(int *)(param_1 + 0x44));
      if ((*(SyntheticObject **)(this_00 + 0x174) != (SyntheticObject *)0x0) &&
         (*(SyntheticObject **)(this_00 + 0x174) == param_1)) {
        *(undefined4 *)(this_00 + 0x174) = 0;
      }
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != uVar5);
  }
  pvVar2 = *(void **)((char *)this + 0xa0);
  puVar4 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x9c),pvVar2);
  pvVar3 = (void *)*puVar4;
  if (pvVar3 != pvVar2) {
    iVar1 = *(int *)((char *)this + 0xa0);
    memmove(pvVar3,pvVar2,iVar1 - (int)pvVar2);
    *(int *)((char *)this + 0xa0) = (iVar1 - (int)pvVar2) + (int)pvVar3;
  }
  if (param_1 != (SyntheticObject *)0x0) {
    (param_1)->~SyntheticObject();
    operator_delete(param_1,(nothrow_t *)0xf0);
  }
  return;
}


// Ghidra: void __thiscall Sector::addStellarObject(Sector *this,StellarObject *param_1)
void Sector::addStellarObject(StellarObject * param_1)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x88);
  if (*(AnimationFrames ***)((char *)this + 0x8c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x84),ppAVar1,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar1 = (AnimationFrames *)param_1;
    *(int *)((char *)this + 0x88) = *(int *)((char *)this + 0x88) + 4;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 0)) {
    ppAVar1 = *(AnimationFrames ***)((char *)this + 0x94);
    if (*(AnimationFrames ***)((char *)this + 0x98) != ppAVar1) {
      *ppAVar1 = (AnimationFrames *)param_1;
      *(int *)((char *)this + 0x94) = *(int *)((char *)this + 0x94) + 4;
      return;
    }
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x90),ppAVar1,(AnimationFrames **)&param_1);
  }
  return;
}


// Ghidra: StellarObject * __thiscall Sector::getStellarObjectNear(Sector *this)
StellarObject * Sector::getStellarObjectNear()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  StellarObject *pSVar5;
  float in_XMM1_Da;
  float fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  Sector *local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c489c;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar1 = false;
  local_14 = 0.0;
  pSVar5 = (StellarObject *)0x0;
  iVar3 = *(int *)((char *)this + 0x84);
  uVar4 = 0;
  local_1c = in_XMM1_Da;
  local_18 = this;
  if (*(int *)((char *)this + 0x88) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      local_28 = (float)*(double *)(iVar3 + 0x20);
      local_24 = (float)*(double *)(iVar3 + 0x28);
      // [seh] local_8 = 1;
      uStack_7 = 0;
      local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&stack0x00000004);
      local_14 = (float)(0x5f3759df - ((uint)local_20 >> 1));
      local_20 = (1.5 - local_20 * 0.5 * local_14 * local_14) * local_14 * local_20;
      if (local_1c < local_20) {
LAB_0052121c:
        bVar2 = false;
      }
      else {
        if (pSVar5 != (StellarObject *)0x0) {
          local_30 = (float)*(double *)(pSVar5 + 0x20);
          local_2c = (float)*(double *)(pSVar5 + 0x28);
          _local_8 = CONCAT31(uStack_7,2);
          bVar1 = true;
          local_14 = 1.4013e-45;
          fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&stack0x00000004);
          local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
          if (local_20 <= (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6)
          goto LAB_0052121c;
        }
        bVar2 = true;
      }
      if (bVar1) {
        bVar1 = false;
      }
      if (bVar2) {
        pSVar5 = *(StellarObject **)(*(int *)(local_18 + 0x84) + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(local_18 + 0x84);
    } while (uVar4 < (uint)(*(int *)(local_18 + 0x88) - iVar3 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return pSVar5;
}


// Ghidra: void __thiscall Sector::removeWeapon(Sector *this,Weapon *param_1)
void Sector::removeWeapon(Weapon * param_1)

{
  NetworkServer *pNVar1;
  Ship *this_00;
  Weapon *pWVar2;
  std::string abStack_38 [16];
  undefined4 uStack_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be068;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  this_00 = *(Ship **)(param_1 + 0x39c);
  if (this_00 != (Ship *)0x0) {
    if (g_gameLogic[0x70] != (byte)0x0) {
      ghidra::str::ctor(abStack_38,(std::string *)(this_00 + 0x238));
      // [seh] local_8 = 0;
      pWVar2 = param_1;
      pNVar1 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pNVar1)->removeWeapon(pWVar2);
      this_00 = *(Ship **)(param_1 + 0x39c);
    }
    uStack_28 = 0x5212f0;
    (this_00)->removeWeapon(param_1);
  }
  uStack_28 = 0x5212f8;
  removeShip(this,(Ship *)param_1);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Sector::removeAllWeapons(Sector *this)
void Sector::removeAllWeapons()

{
  Weapon *pWVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0xcc);
  if (*(int *)((char *)this + 0xd0) - iVar2 >> 2 != 0) {
    do {
      pWVar1 = *(Weapon **)(iVar2 + uVar3 * 4);
      bVar4 = false;
      iVar2 = *(int *)(pWVar1 + 0x254);
      if (iVar2 != 0) {
        bVar4 = *(int *)(iVar2 + 0x158) == 4;
      }
      if (bVar4) {
        removeWeapon(this,pWVar1);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0xcc);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0xd0) - iVar2 >> 2));
  }
  return;
}


// Ghidra: void __thiscall Sector::removeShip(Sector *this,Ship *param_1)
void Sector::removeShip(Ship * param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  
  piVar6 = *(int **)((char *)this + 0xcc);
  piVar1 = *(int **)((char *)this + 0xd0);
  if (piVar6 != piVar1) {
    do {
      iVar2 = *piVar6;
      uVar9 = 0;
      piVar8 = *(int **)(*(int *)(iVar2 + 0x40) + 0x3c);
      piVar3 = *(int **)(*(int *)(iVar2 + 0x40) + 0x40);
      uVar10 = (uint)((int)piVar3 + (3 - (int)piVar8)) >> 2;
      if (piVar3 < piVar8) {
        uVar10 = 0;
      }
      if (uVar10 != 0) {
        do {
          if (*(Ship **)(*piVar8 + 0x18) == param_1) {
            *(undefined4 *)(*piVar8 + 0x18) = 0;
          }
          uVar9 = uVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar9 != uVar10);
      }
      iVar4 = *(int *)(iVar2 + 0x44);
      if (iVar4 != 0) {
        if (*(Ship **)(iVar4 + 0x40) == param_1) {
          *(undefined4 *)(iVar4 + 0x40) = 0;
        }
        puVar5 = *(undefined4 **)(iVar4 + 200);
        puVar7 = *(undefined4 **)(iVar4 + 0xc4);
        uVar9 = (uint)((int)puVar5 + (3 - (int)puVar7)) >> 2;
        if (puVar5 < puVar7) {
          uVar9 = 0;
        }
        if (uVar9 != 0) {
          if (param_1 == (Ship *)0x0) {
            for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
              (**(code **)(*(int *)*puVar7 + 0x18))(0);
            }
          }
          else {
            uVar10 = 0;
            do {
              (**(code **)(*(int *)*puVar7 + 0x18))(param_1 + 8);
              puVar7 = puVar7 + 1;
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar9);
          }
        }
        *(undefined4 *)(iVar4 + 0x154) = *(undefined4 *)(iVar4 + 0x150);
        *(undefined4 *)(iVar4 + 0x148) = *(undefined4 *)(iVar4 + 0x144);
        *(undefined4 *)(iVar4 + 0x13c) = *(undefined4 *)(iVar4 + 0x138);
        *(undefined4 *)(iVar4 + 0x130) = *(undefined4 *)(iVar4 + 300);
        *(undefined4 *)(iVar4 + 0x128) = 0;
      }
      if (*(char *)(iVar2 + 0x234) != '\0') {
        if ((*(int *)(iVar2 + 0x194) != 0) &&
           (*(Ship **)(*(int *)(iVar2 + 0x194) + 0x130) == param_1)) {
          *(undefined4 *)(param_1 + 0x194) = 0;
          *(undefined4 *)(param_1 + 400) = 0xffffffff;
        }
        if ((*(int *)(iVar2 + 0x19c) != 0) &&
           (*(Ship **)(*(int *)(iVar2 + 0x19c) + 0x130) == param_1)) {
          *(undefined4 *)(iVar2 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar2 + 0x1a4) = 0;
          *(undefined4 *)(iVar2 + 0x1a0) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x1bc) = 0xc61c3c00;
          *(undefined4 *)(iVar2 + 0x19c) = 0;
          *(undefined4 *)(iVar2 + 0x198) = 0xffffffff;
          if (*(char *)(iVar2 + 0x1b0) != '\0') {
            *(undefined4 *)(iVar2 + 0x194) = 0;
            *(undefined4 *)(iVar2 + 400) = 0xffffffff;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
    piVar6 = *(int **)((char *)this + 0xcc);
  }
  piVar1 = *(int **)((char *)this + 0xd0);
  if (piVar6 != piVar1) {
    do {
      if ((Ship *)*piVar6 == param_1) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
    if (piVar6 != piVar1) {
      puVar7 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0xcc),piVar1);
      piVar6 = (int *)*puVar7;
      if (piVar6 != piVar1) {
        iVar2 = *(int *)((char *)this + 0xd0);
        memmove(piVar6,piVar1,iVar2 - (int)piVar1);
        *(int *)((char *)this + 0xd0) = (iVar2 - (int)piVar1) + (int)piVar6;
      }
    }
  }
  return;
}


// Ghidra: Ship * __thiscall Sector::getShip(Sector *this,int param_1)
Ship * Sector::getShip(int param_1)

{
  return *(Ship **)(*(int *)((char *)this + 0xcc) + param_1 * 4);
}


// Ghidra: Ship * __thiscall Sector::getShip(Sector *this,char *param_2)
Ship * Sector::getShip(char * param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  Ship *pSVar7;
  char *unaff_EDI;
  uint uVar8;
  bool bVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar3 = param_2;
  iVar1 = *(int *)((char *)this + 0xcc);
  uVar6 = 0;
  uVar8 = *(int *)((char *)this + 0xd0) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      bVar9 = false;
      iVar2 = *(int *)(*(int *)(iVar1 + uVar6 * 4) + 0x254);
      if (iVar2 != 0) {
        bVar9 = *(int *)(iVar2 + 0x158) == 0;
      }
      if (bVar9) {
        pcVar4 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar4 = pcVar3;
        }
        bVar9 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
        if (bVar9) {
          pSVar7 = *(Ship **)(iVar1 + uVar6 * 4);
          goto LAB_00521679;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pSVar7 = (Ship *)0x0;
LAB_00521679:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar3 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pSVar7;
}


// Ghidra: Ship * __thiscall Sector::getShipClosestTo(Sector *this,int param_2)
Ship * Sector::getShipClosestTo(int param_2)

{
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  Ship *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c48fd;
  // [seh] local_10 = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  iVar6 = *(int *)((char *)this + 0xcc);
  if (param_2 == -1) {
    param_2 = 5;
  }
  uVar7 = 0;
  local_18 = (Ship *)0x0;
  ppvVar4 = &local_10;
  if (*(int *)((char *)this + 0xd0) - iVar6 >> 2 == 0) {
    return (Ship *)0x0;
  }
  do {
    // [seh] ExceptionList = ppvVar4;
    if ((param_2 == 5) ||
       (*(int *)(*(int *)(*(int *)(iVar6 + uVar7 * 4) + 0x254) + 0x158) == param_2)) {
      if (local_18 == (Ship *)0x0) {
LAB_00521867:
        bVar3 = true;
      }
      else {
        iVar6 = *(int *)(iVar6 + uVar7 * 4);
        local_30 = (float)*(double *)(iVar6 + 0x28);
        local_2c = (float)*(double *)(iVar6 + 0x30);
        local_38 = (float)*(double *)(local_18 + 0x28);
        local_34 = (float)*(double *)(local_18 + 0x30);
        // [seh] local_8 = 2;
        bVar2 = true;
        bVar1 = true;
        local_20 = 3;
        local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&stack0x00000008);
        local_28 = local_24 * 0.5;
        local_1c = (float)(0x5f3759df - ((uint)local_24 >> 1));
        fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&stack0x00000008);
        fVar5 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
        if ((1.5 - local_28 * local_1c * local_1c) * local_1c * local_24 <
            (1.5 - fVar8 * 0.5 * fVar5 * fVar5) * fVar5 * fVar8) goto LAB_00521867;
        bVar3 = false;
      }
      if (bVar1) {
        bVar1 = false;
      }
      if (bVar2) {
        bVar2 = false;
      }
      if (bVar3) {
        local_18 = *(Ship **)(*(int *)((char *)this + 0xcc) + uVar7 * 4);
      }
    }
    uVar7 = uVar7 + 1;
    iVar6 = *(int *)((char *)this + 0xcc);
    ppvVar4 = ExceptionList;
    if ((uint)(*(int *)((char *)this + 0xd0) - iVar6 >> 2) <= uVar7) {
      // [seh] ExceptionList = local_10;
      return local_18;
    }
  } while( true );
}


// Ghidra: Ship * __thiscall Sector::getSpaceStationClosestTo(Sector *this)
Ship * Sector::getSpaceStationClosestTo()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  Ship *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c495d;
  // [seh] local_10 = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  uVar7 = 0;
  iVar6 = *(int *)((char *)this + 0xcc);
  local_14 = (Ship *)0x0;
  ppvVar4 = &local_10;
  if (*(int *)((char *)this + 0xd0) - iVar6 >> 2 == 0) {
    return (Ship *)0x0;
  }
  do {
    // [seh] ExceptionList = ppvVar4;
    iVar6 = *(int *)(iVar6 + uVar7 * 4);
    bVar8 = false;
    iVar1 = *(int *)(iVar6 + 0x254);
    if (iVar1 != 0) {
      bVar8 = *(int *)(iVar1 + 0x158) == 3;
    }
    if (bVar8) {
LAB_0052196b:
      if (local_14 == (Ship *)0x0) {
LAB_00521a79:
        bVar8 = true;
      }
      else {
        local_2c = (float)*(double *)(iVar6 + 0x28);
        local_28 = (float)*(double *)(iVar6 + 0x30);
        local_34 = (float)*(double *)(local_14 + 0x28);
        local_30 = (float)*(double *)(local_14 + 0x30);
        // [seh] local_8 = 2;
        bVar3 = true;
        bVar2 = true;
        local_1c = 3;
        local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&stack0x00000004);
        local_24 = local_20 * 0.5;
        local_18 = (float)(0x5f3759df - ((uint)local_20 >> 1));
        fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_34,(Vec2 *)&stack0x00000004);
        fVar5 = (float)(0x5f3759df - ((uint)fVar9 >> 1));
        if ((1.5 - local_24 * local_18 * local_18) * local_18 * local_20 <
            (1.5 - fVar9 * 0.5 * fVar5 * fVar5) * fVar5 * fVar9) goto LAB_00521a79;
        bVar8 = false;
      }
      if (bVar2) {
        bVar2 = false;
      }
      if (bVar3) {
        bVar3 = false;
      }
      if (bVar8) {
        local_14 = *(Ship **)(*(int *)((char *)this + 0xcc) + uVar7 * 4);
      }
    }
    else {
      bVar8 = false;
      if (iVar1 != 0) {
        bVar8 = *(int *)(iVar1 + 0x158) == 1;
      }
      if (bVar8) goto LAB_0052196b;
      bVar8 = false;
      if (iVar1 != 0) {
        bVar8 = *(int *)(iVar1 + 0x158) == 2;
      }
      if (bVar8) goto LAB_0052196b;
    }
    uVar7 = uVar7 + 1;
    iVar6 = *(int *)((char *)this + 0xcc);
    ppvVar4 = ExceptionList;
    if ((uint)(*(int *)((char *)this + 0xd0) - iVar6 >> 2) <= uVar7) {
      // [seh] ExceptionList = local_10;
      return local_14;
    }
  } while( true );
}


// Ghidra: float __thiscall Sector::getAngleToNearestStar(Sector *this,undefined4 param_2,undefined4 param_3)
float Sector::getAngleToNearestStar(undefined4 param_2, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 in_ST0;
  float10 extraout_ST1;
  float fVar8;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c49bd;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  bVar2 = false;
  bVar1 = false;
  local_18 = 0.0;
  iVar6 = 0;
  uVar7 = 0;
  iVar5 = *(int *)((char *)this + 0x84);
  local_20 = 0;
  if (*(int *)((char *)this + 0x88) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + uVar7 * 4);
      if (*(int *)(iVar5 + 0x54) == 1) {
        if (iVar6 == 0) {
LAB_00521c5a:
          bVar3 = true;
        }
        else {
          local_2c = (float)*(double *)(iVar6 + 0x20);
          local_28 = (float)*(double *)(iVar6 + 0x28);
          local_34 = (float)*(double *)(iVar5 + 0x20);
          local_30 = (float)*(double *)(iVar5 + 0x28);
          // [seh] local_8 = 2;
          bVar2 = true;
          bVar1 = true;
          local_18 = 4.2039e-45;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&param_2);
          local_24 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_34,(Vec2 *)&param_2);
          local_18 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
          in_ST0 = extraout_ST1;
          if ((1.5 - fVar8 * 0.5 * local_18 * local_18) * local_18 * fVar8 <
              (1.5 - local_24 * local_14 * local_14) * local_14 * local_1c) goto LAB_00521c5a;
          bVar3 = false;
        }
        if (bVar1) {
          bVar1 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        iVar6 = local_20;
        if (bVar3) {
          local_20 = *(int *)(*(int *)((char *)this + 0x84) + uVar7 * 4);
          iVar6 = local_20;
        }
      }
      // [seh] local_8 = 0;
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)((char *)this + 0x84);
    } while (uVar7 < (uint)(*(int *)((char *)this + 0x88) - iVar5 >> 2));
    if (iVar6 != 0) {
      fVar8 = angleInDegreesFrom(param_2,param_3,(float)*(double *)(iVar6 + 0x20),
                                 (float)*(double *)(iVar6 + 0x28),uVar4);
      // [seh] ExceptionList = local_10;
      return fVar8;
    }
  }
  // [seh] ExceptionList = local_10;
  return (float)in_ST0;
}


// Ghidra: float __thiscall Sector::getSolarRadiationAt(Sector *this)
float Sector::getSolarRadiationAt()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  float10 in_ST0;
  float10 extraout_ST1;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c3312;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uStack_7 = 0;
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x84);
  local_14 = 0.0;
  if (*(int *)((char *)this + 0x88) - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if (*(int *)(iVar1 + 0x54) == 1) {
        local_20 = (float)*(double *)(iVar1 + 0x20);
        local_1c = (float)*(double *)(iVar1 + 0x28);
        // [seh] local_8 = 1;
        fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000004,(Vec2 *)&local_20);
        local_18 = (float)(0x5f3759df - ((uint)fVar3 >> 1));
        fVar3 = (1.5 - fVar3 * 0.5 * local_18 * local_18) * local_18 * fVar3 - 200.0;
        in_ST0 = extraout_ST1;
        if (0.0 <= fVar3) {
          if (fVar3 <= 300.0) {
            local_14 = (1.0 - fVar3 / 300.0) + local_14;
          }
        }
        else {
          local_14 = local_14 + 1.0;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x84);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x88) - iVar1 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return (float)in_ST0;
}


// Ghidra: void __thiscall Sector::clearBounties(Sector *this)
void Sector::clearBounties()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  Bounty *this_00;
  std::string *pbVar2;
  undefined4 *puVar3;
  std::string *pbVar4;
  void *pvVar5;
  int iVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  std::string *unaff_EDI;
  std::string *pbVar9;
  void *local_30 [5];
  uint local_1c;
  NameManager *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3af8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar2 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  uVar8 = 0;
  iVar6 = *(int *)((char *)this + 0x11c);
  if (*(int *)((char *)this + 0x120) - iVar6 >> 2 != 0) {
    do {
      ghidra::str::ctor
                ((std::string *)local_30,(std::string *)(*(int *)(iVar6 + uVar8 * 4) + 4));
      // [seh] local_8 = 0;
      local_14 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      pbVar1 = *(std::string **)(local_14 + 0x10);
      puVar3 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)(local_14 + 0xc),pbVar1);
      pbVar9 = (std::string *)*puVar3;
      if (pbVar9 != pbVar1) {
        pbVar4 = ghidra::lib::_Move_unchecked___x28_x29(pbVar9,pbVar2,unaff_EDI);
        ghidra::lib::_Destroy_range_t
                  ((std::string *)pbVar9,(std::string *)pbVar2,(ghidra::lib::allocator_t *)unaff_EDI);
        *(std::string **)(local_14 + 0x10) = pbVar4;
      }
      if (0xf < local_1c) {
        pnVar7 = (nothrow_t *)(local_1c + 1);
        pvVar5 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar5 = *(void **)((int)local_30[0] + -4);
          pnVar7 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar7);
      }
      this_00 = *(Bounty **)(*(int *)((char *)this + 0x11c) + uVar8 * 4);
      if (this_00 != (Bounty *)0x0) {
        Bounty::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar8 = uVar8 + 1;
      iVar6 = *(int *)((char *)this + 0x11c);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x120) - iVar6 >> 2));
  }
  *(int *)((char *)this + 0x120) = iVar6;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Sector::setNewBounties(Sector *this)
void Sector::setNewBounties()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  Dice *pDVar7;
  int iVar8;
  int *piVar9;
  AnimationFrames *pAVar10;
  int iVar11;
  NameManager *pNVar12;
  Sector *pSVar13;
  char *pcVar14;
  void *pvVar15;
  char *pcVar16;
  nothrow_t *pnVar17;
  uint uVar18;
  int iVar19;
  word *pwVar20;
  AnimationFrames **ppAVar21;
  word *pwVar22;
  bool bVar23;
  AnimationFrames *local_64;
  int local_60;
  void *local_5c;
  AnimationFrames **local_58;
  AnimationFrames **local_54;
  int local_50;
  int local_4c;
  uint local_48;
  AnimationFrames **local_44;
  code *local_40;
  void *local_3c;
  Sector *local_38;
  uint local_34;
  AnimationFrames *local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  Dice *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4a01;
  // [seh] local_10 = ExceptionList;
  // [cookie] pDVar7 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_34 = 0;
  local_48 = 0;
  local_38 = this;
  local_14 = pDVar7;
  clearBounties(this);
  local_50 = diceRoll(pDVar7);
  local_3c = (void *)0x0;
  ppAVar21 = (AnimationFrames **)0x0;
  local_5c = (void *)0x0;
  local_58 = (AnimationFrames **)0x0;
  local_44 = (AnimationFrames **)0x0;
  local_54 = (AnimationFrames **)0x0;
  uVar18 = 0;
  // [seh] local_8 = 0;
  iVar19 = *(int *)(local_38 + 0x128);
  if (*(int *)(local_38 + 300) - iVar19 >> 2 != 0) {
    do {
      ppAVar1 = (AnimationFrames **)(iVar19 + uVar18 * 4);
      pAVar10 = *ppAVar1;
      if ((pAVar10[4] == (AnimationFrames)0x0) && (*(float *)(pAVar10 + 8) == -1.0)) {
        if (local_44 == ppAVar21) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_5c,ppAVar21,ppAVar1);
          local_44 = local_54;
          ppAVar21 = local_58;
        }
        else {
          *ppAVar21 = pAVar10;
          local_58 = ppAVar21 + 1;
          ppAVar21 = local_58;
        }
      }
      uVar18 = uVar18 + 1;
      iVar19 = *(int *)(local_38 + 0x128);
    } while (uVar18 < (uint)(*(int *)(local_38 + 300) - iVar19 >> 2));
    local_3c = local_5c;
  }
  local_4c = 0;
  local_5c = local_3c;
  if (0 < local_50) {
    local_40 = rand_exref;
    do {
      iVar19 = (int)ppAVar21 - (int)local_3c >> 2;
      if (iVar19 == 0) break;
      iVar8 = (*local_40)();
      iVar19 = *(int *)((int)local_3c + (iVar8 % iVar19) * 4);
      local_30 = (AnimationFrames *)iVar19;
      piVar9 = (int *)ghidra::lib::remove___x28_x29(local_3c,ppAVar21);
      if ((AnimationFrames **)*piVar9 != ppAVar21) {
        ppAVar21 = (AnimationFrames **)*piVar9;
      }
      local_58 = ppAVar21;
      pAVar10 = operator_new(0x54);
      local_30 = pAVar10;
      memset(pAVar10,0,0x54);
      *(undefined4 *)(pAVar10 + 0x14) = 0;
      *(undefined4 *)(pAVar10 + 0x18) = 0xf;
      pAVar10[4] = (AnimationFrames)0x0;
      *(undefined4 *)(pAVar10 + 0x2c) = 0;
      *(undefined4 *)(pAVar10 + 0x30) = 0xf;
      pAVar10[0x1c] = (AnimationFrames)0x0;
      *(undefined4 *)(pAVar10 + 0x44) = 0;
      *(undefined4 *)(pAVar10 + 0x48) = 0xf;
      pAVar10[0x34] = (AnimationFrames)0x0;
      *(int *)(pAVar10 + 0x4c) = iVar19;
      iVar8 = *(int *)(iVar19 + 0xc);
      if ((iVar8 == 0) && (*(int *)(iVar19 + 0x14) == 0)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      local_64 = pAVar10;
      if (bVar23) {
        iVar19 = 0;
      }
      else {
        local_48 = *(uint *)(iVar19 + 0x14);
        local_60 = *(int *)(iVar19 + 0x10);
        iVar19 = 0;
        if ((0 < local_60) && (0 < iVar8)) {
          do {
            iVar11 = (*local_40)();
            iVar19 = iVar19 + iVar11 % local_60 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar19 = local_48 + iVar19;
      }
      bVar23 = ghidra::Singleton<void>::instance == (PassengerManager *)0x0;
      *(int *)local_30 = iVar19;
      if (bVar23) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      pcVar6 = local_40;
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      local_48 = local_34 | 1;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      local_34 = local_48;
      iVar19 = (*local_40)();
      if (iVar19 % 100 < 0x2f) {
        iVar19 = (*pcVar6)();
        pcVar16 = (&PTR_s_Scav_005d07a8)[iVar19 % 0x4c4];
        pcVar14 = pcVar16;
        do {
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
      }
      else {
        iVar19 = (*pcVar6)();
        pcVar16 = (&PTR_s_Mary_005d1ab8)[iVar19 % 0x10b3];
        pcVar14 = pcVar16;
        do {
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
      }
      ghidra::str::assign
                ((std::string *)&local_2c,pcVar16,(int)pcVar14 - (int)(pcVar16 + 1));
      ghidra::str::append((std::string *)&local_2c," ",1);
      iVar19 = (*pcVar6)();
      pcVar16 = (&PTR_s_Cardholder_005d5d98)[iVar19 % 0x26f4];
      pcVar14 = pcVar16;
      do {
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar2 != '\0');
      ghidra::str::append
                ((std::string *)&local_2c,pcVar16,(int)pcVar14 - (int)(pcVar16 + 1));
      pAVar10 = local_30;
      pwVar20 = (word *)(local_30 + 0x1c);
      if (pwVar20 != (word *)&local_2c) {
        // [mislabelled-dtor] word::~word(pwVar20);
        *(void **)pwVar20 = local_2c;
        *(undefined4 *)(pAVar10 + 0x20) = uStack_28;
        *(undefined4 *)(pAVar10 + 0x24) = uStack_24;
        *(undefined4 *)(pAVar10 + 0x28) = uStack_20;
        *(undefined4 *)(pAVar10 + 0x2c) = local_1c;
        *(uint *)(pAVar10 + 0x30) = uStack_18;
        local_1c = 0;
        uStack_18 = 0xf;
        local_2c = (void *)((uint)local_2c & 0xffffff00);
      }
      local_34 = local_34 & 0xfffffffe;
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < uStack_18) {
        pnVar17 = (nothrow_t *)(uStack_18 + 1);
        pvVar15 = local_2c;
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_2c + -4);
          pnVar17 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar15))) goto LAB_005224a8;
        }
        operator_delete(pvVar15,pnVar17);
      }
      pNVar12 = ghidra::any_singleton();
      pwVar20 = (word *)(pNVar12)->generatePirateName();
      pAVar10 = local_30;
      pwVar22 = (word *)(local_30 + 4);
      if (pwVar22 != pwVar20) {
        // [mislabelled-dtor] word::~word(pwVar22);
        uVar3 = *(undefined4 *)(pwVar20 + 4);
        uVar4 = *(undefined4 *)(pwVar20 + 8);
        uVar5 = *(undefined4 *)(pwVar20 + 0xc);
        *(undefined4 *)pwVar22 = *(undefined4 *)pwVar20;
        *(undefined4 *)(pAVar10 + 8) = uVar3;
        *(undefined4 *)(pAVar10 + 0xc) = uVar4;
        *(undefined4 *)(pAVar10 + 0x10) = uVar5;
        uVar3 = *(undefined4 *)(pwVar20 + 0x14);
        *(undefined4 *)(pAVar10 + 0x14) = *(undefined4 *)(pwVar20 + 0x10);
        *(undefined4 *)(pAVar10 + 0x18) = uVar3;
        *(undefined4 *)(pwVar20 + 0x10) = 0;
        *(undefined4 *)(pwVar20 + 0x14) = 0xf;
        *pwVar20 = (word)0x0;
      }
      if (0xf < uStack_18) {
        pnVar17 = (nothrow_t *)(uStack_18 + 1);
        pvVar15 = local_2c;
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_2c + -4);
          pnVar17 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar15))) goto LAB_005224a8;
        }
        operator_delete(pvVar15,pnVar17);
      }
      pNVar12 = ghidra::any_singleton();
      pwVar20 = (word *)(pNVar12)->generateGeneralRego();
      pAVar10 = local_30;
      pwVar22 = (word *)(local_30 + 0x34);
      if (pwVar22 != pwVar20) {
        // [mislabelled-dtor] word::~word(pwVar22);
        uVar3 = *(undefined4 *)(pwVar20 + 4);
        uVar4 = *(undefined4 *)(pwVar20 + 8);
        uVar5 = *(undefined4 *)(pwVar20 + 0xc);
        *(undefined4 *)pwVar22 = *(undefined4 *)pwVar20;
        *(undefined4 *)(pAVar10 + 0x38) = uVar3;
        *(undefined4 *)(pAVar10 + 0x3c) = uVar4;
        *(undefined4 *)(pAVar10 + 0x40) = uVar5;
        uVar3 = *(undefined4 *)(pwVar20 + 0x14);
        *(undefined4 *)(pAVar10 + 0x44) = *(undefined4 *)(pwVar20 + 0x10);
        *(undefined4 *)(pAVar10 + 0x48) = uVar3;
        *(undefined4 *)(pwVar20 + 0x10) = 0;
        *(undefined4 *)(pwVar20 + 0x14) = 0xf;
        *pwVar20 = (word)0x0;
      }
      if (0xf < uStack_18) {
        pnVar17 = (nothrow_t *)(uStack_18 + 1);
        pvVar15 = local_2c;
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_2c + -4);
          pnVar17 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar15))) goto LAB_005224a8;
        }
        operator_delete(pvVar15,pnVar17);
      }
      ppAVar1 = *(AnimationFrames ***)(local_38 + 0x120);
      if (*(AnimationFrames ***)(local_38 + 0x124) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(local_38 + 0x11c),ppAVar1,&local_64);
      }
      else {
        *ppAVar1 = local_30;
        *(int *)(local_38 + 0x120) = *(int *)(local_38 + 0x120) + 4;
      }
      local_4c = local_4c + 1;
    } while (local_4c < local_50);
  }
  pSVar13 = local_38 + 0x1c;
  if (0xf < *(uint *)(local_38 + 0x30)) {
    pSVar13 = *(Sector **)pSVar13;
  }
  debugPrint("WORLD","Have %d bounties available at %s",
             *(int *)(local_38 + 0x120) - *(int *)(local_38 + 0x11c) >> 2,pSVar13);
  if (local_3c != (void *)0x0) {
    pnVar17 = (nothrow_t *)((int)local_44 - (int)local_3c & 0xfffffffc);
    pvVar15 = local_3c;
    if ((nothrow_t *)0xfff < pnVar17) {
      pvVar15 = *(void **)((int)local_3c + -4);
      pnVar17 = pnVar17 + 0x23;
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar15))) {
LAB_005224a8:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar17);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: NavPoint * __thiscall Sector::getNavPointNear(Sector *this)
NavPoint * Sector::getNavPointNear()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  NavPoint *pNVar3;
  uint uVar4;
  float in_XMM2_Da;
  float fVar5;
  float fVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4a39;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pNVar3 = (NavPoint *)0x0;
  uVar4 = 0;
  iVar2 = *(int *)((char *)this + 0xa8);
  if (*(int *)((char *)this + 0xac) - iVar2 >> 2 != 0) {
    do {
      fVar5 = cocos2d::Vec2::getDistanceSq
                        ((Vec2 *)(*(int *)(iVar2 + uVar4 * 4) + 8),(Vec2 *)&stack0x00000004);
      fVar1 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
      fVar5 = (1.5 - fVar5 * 0.5 * fVar1 * fVar1) * fVar1 * fVar5;
      if (fVar5 <= in_XMM2_Da) {
        if (pNVar3 != (NavPoint *)0x0) {
          fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(pNVar3 + 8),(Vec2 *)&stack0x00000004);
          fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
          if (fVar5 <= (1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6) goto LAB_00522606;
        }
        pNVar3 = *(NavPoint **)(*(int *)((char *)this + 0xa8) + uVar4 * 4);
      }
LAB_00522606:
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)((char *)this + 0xa8);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0xac) - iVar2 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return pNVar3;
}


// Ghidra: NavPoint * __thiscall Sector::getNavPointNearZoneSet(Sector *this,char *param_2)
NavPoint * Sector::getNavPointNearZoneSet(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  nothrow_t *pnVar7;
  NavPoint *pNVar8;
  int iVar9;
  uint unaff_EDI;
  uint uVar10;
  void *pvVar11;
  float in_XMM2_Da;
  float fVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_30;
  NavPoint *local_2c;
  NavPoint *local_28;
  NavPoint *local_24;
  uint local_20;
  NavPoint *local_1c;
  float local_18;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4a70;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pNVar8 = (NavPoint *)0x0;
  iVar9 = *(int *)((char *)this + 0xa8);
  local_18 = (float)(*(int *)((char *)this + 0xac) - iVar9);
  if (3 < (uint)local_18) {
    local_1c = (NavPoint *)0x0;
    local_2c = (NavPoint *)0x0;
    local_30 = (void *)0x0;
    local_24 = (NavPoint *)0x0;
    local_28 = (NavPoint *)0x0;
    // [seh] local_8 = 1;
    local_20 = 0;
    if ((int)local_18 >> 2 != 0) {
      do {
        iVar9 = *(int *)(iVar9 + local_20 * 4);
        if ((*(int *)(iVar9 + 4) == 0) && (*(int *)(iVar9 + 0x38) != 3)) {
          uVar10 = 0;
          iVar9 = *(int *)((char *)this + 0x134);
          local_11 = '\0';
          pNVar8 = local_1c;
          if (*(int *)((char *)this + 0x138) - iVar9 >> 2 != 0) {
            do {
              pcVar5 = (char *)&param_2;
              if (0xf < in_stack_00000018) {
                pcVar5 = param_2;
              }
              bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
              if (bVar3) {
                fVar12 = cocos2d::Vec2::getDistanceSq
                                   ((Vec2 *)(*(int *)(*(int *)((char *)this + 0xa8) + local_20 * 4) + 8),
                                    (Vec2 *)(*(int *)(iVar9 + uVar10 * 4) + 0xe8));
                iVar9 = *(int *)((char *)this + 0x134);
                local_18 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
                if ((1.5 - fVar12 * 0.5 * local_18 * local_18) * local_18 * fVar12 <=
                    *(float *)(*(int *)(iVar9 + uVar10 * 4) + 0x38) + in_XMM2_Da) {
                  local_11 = '\x01';
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)(*(int *)((char *)this + 0x138) - iVar9 >> 2));
            pNVar8 = local_1c;
            if (local_11 != '\0') {
              ppAVar1 = (AnimationFrames **)(*(int *)((char *)this + 0xa8) + local_20 * 4);
              if (local_24 == local_1c) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_30,(AnimationFrames **)local_1c,ppAVar1);
                local_24 = local_28;
                local_1c = local_2c;
                pNVar8 = local_2c;
              }
              else {
                *(AnimationFrames **)local_1c = *ppAVar1;
                local_2c = local_1c + 4;
                pNVar8 = local_2c;
                local_1c = local_2c;
              }
            }
          }
        }
        local_20 = local_20 + 1;
        iVar9 = *(int *)((char *)this + 0xa8);
      } while (local_20 < (uint)(*(int *)((char *)this + 0xac) - iVar9 >> 2));
    }
    pvVar2 = local_30;
    iVar9 = (int)pNVar8 - (int)local_30 >> 2;
    pNVar8 = (NavPoint *)0x0;
    if (iVar9 != 0) {
      iVar6 = rand();
      pNVar8 = *(NavPoint **)((int)pvVar2 + (iVar6 % (iVar9 + -1)) * 4);
    }
    if (pvVar2 != (void *)0x0) {
      pnVar7 = (nothrow_t *)((int)local_24 - (int)pvVar2 & 0xfffffffc);
      pvVar11 = pvVar2;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar11 = *(void **)((int)pvVar2 + -4);
        pnVar7 = pnVar7 + 0x23;
        if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar7);
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return pNVar8;
}


// Ghidra: int __thiscall Sector::getNavMeshIDClosestTo(Sector *this,undefined4 param_2,undefined4 param_3,char param_4)
int Sector::getNavMeshIDClosestTo(undefined4 param_2, undefined4 param_3, char param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4a39;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0;
  iVar3 = *(int *)((char *)this + 0xa8);
  if (*(int *)((char *)this + 0xac) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar3 + 4) == 0) && ((param_4 == '\0' || (*(int *)(iVar3 + 0x38) != 3)))) {
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar3 + 8),(Vec2 *)&param_2);
        fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        if (uVar5 != 0xffffffff) {
          fVar7 = cocos2d::Vec2::getDistanceSq
                            ((Vec2 *)(*(int *)(*(int *)((char *)this + 0xa8) + uVar5 * 4) + 8),
                             (Vec2 *)&param_2);
          fVar2 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
          if ((1.5 - fVar7 * 0.5 * fVar2 * fVar2) * fVar2 * fVar7 <=
              (1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6) goto LAB_00522a03;
        }
        uVar5 = uVar4;
      }
LAB_00522a03:
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((char *)this + 0xa8);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0xac) - iVar3 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return uVar5;
}


// Ghidra: NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1,NavPointType param_2)
NavPoint * Sector::getNavPoint(int param_1, NavPointType param_2)

{
  NavPoint *pNVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0xac) - *(int *)((char *)this + 0xa8) >> 2;
  if (uVar3 != 0) {
    do {
      pNVar1 = *(NavPoint **)(*(int *)((char *)this + 0xa8) + uVar2 * 4);
      if ((*(int *)pNVar1 == param_1) && (*(NavPointType *)(pNVar1 + 4) == param_2)) {
        return pNVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (NavPoint *)0x0;
}


// Ghidra: NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1)
NavPoint * Sector::getNavPoint(int param_1)

{
  NavPoint *pNVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0xac) - *(int *)((char *)this + 0xa8) >> 2;
  if (uVar3 != 0) {
    do {
      pNVar1 = *(NavPoint **)(*(int *)((char *)this + 0xa8) + uVar2 * 4);
      if (*(int *)pNVar1 == param_1) {
        return pNVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (NavPoint *)0x0;
}


// Ghidra: NavPoint * __thiscall Sector::getRandomNavPoint(Sector *this,MeshCategory param_1)
NavPoint * Sector::getRandomNavPoint(MeshCategory param_1)

{
  AnimationFrames *pAVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  AnimationFrames **ppAVar5;
  int iVar6;
  NavPoint *pNVar7;
  AnimationFrames **ppAVar8;
  nothrow_t *pnVar9;
  void *local_24;
  AnimationFrames **local_20;
  AnimationFrames **local_1c;
  Sector *local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4c28;
  // [seh] local_10 = ExceptionList;
  iVar6 = *(int *)((char *)this + 0xa8);
  if ((uint)(*(int *)((char *)this + 0xac) - iVar6) < 4) {
    return (NavPoint *)0x0;
  }
  ppAVar5 = (AnimationFrames **)0x0;
  ppAVar8 = (AnimationFrames **)0x0;
  local_24 = (void *)0x0;
  local_20 = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  // [seh] local_8 = 0;
  local_14 = 0;
  // [seh] ExceptionList = &local_10;
  local_18 = this;
  if (*(int *)((char *)this + 0xac) - iVar6 >> 2 != 0) {
    do {
      pAVar1 = *(AnimationFrames **)(iVar6 + local_14 * 4);
      if ((*(int *)(pAVar1 + 4) == 0) && (*(MeshCategory *)(pAVar1 + 0x38) == param_1)) {
        if (ppAVar8 == ppAVar5) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_24,ppAVar5,(AnimationFrames **)(iVar6 + local_14 * 4));
          ppAVar5 = local_20;
          ppAVar8 = local_1c;
        }
        else {
          *ppAVar5 = pAVar1;
          local_20 = ppAVar5 + 1;
          ppAVar5 = local_20;
        }
      }
      local_14 = local_14 + 1;
      iVar6 = *(int *)(local_18 + 0xa8);
    } while (local_14 < (uint)(*(int *)(local_18 + 0xac) - iVar6 >> 2));
  }
  pvVar2 = local_24;
  iVar6 = (int)ppAVar5 - (int)local_24 >> 2;
  pNVar7 = (NavPoint *)0x0;
  if (iVar6 != 0) {
    iVar3 = rand();
    pNVar7 = *(NavPoint **)((int)pvVar2 + (iVar3 % (iVar6 + -1)) * 4);
  }
  if (pvVar2 != (void *)0x0) {
    pnVar9 = (nothrow_t *)((int)ppAVar8 - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar9);
  }
  // [seh] ExceptionList = local_10;
  return pNVar7;
}


// Ghidra: NavPoint * __thiscall Sector::getRandomNavPointNotNear(Sector *this,int param_1)
NavPoint * Sector::getRandomNavPointNotNear(int param_1)

{
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  AnimationFrames **ppAVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  NavPoint *pNVar6;
  int iVar7;
  NavPoint *pNVar8;
  nothrow_t *pnVar9;
  float in_XMM3_Da;
  float fVar10;
  void *local_28;
  NavPoint *local_24;
  NavPoint *local_20;
  float local_1c;
  Sector *local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4aa1;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pNVar6 = (NavPoint *)0x0;
  iVar7 = *(int *)((char *)this + 0xa8);
  if (3 < (uint)(*(int *)((char *)this + 0xac) - iVar7)) {
    uVar4 = 0;
    local_24 = (NavPoint *)0x0;
    pNVar8 = (NavPoint *)0x0;
    local_28 = (void *)0x0;
    local_20 = (NavPoint *)0x0;
    // [seh] local_8 = 1;
    local_1c = in_XMM3_Da;
    local_18 = this;
    if (*(int *)((char *)this + 0xac) - iVar7 >> 2 != 0) {
      do {
        iVar7 = *(int *)(uVar4 * 4 + iVar7);
        if ((*(int *)(iVar7 + 4) == 0) && (*(int *)(iVar7 + 0x38) == param_1)) {
          fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar7 + 8),(Vec2 *)&stack0x00000008);
          local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
          if (local_1c < (1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10) {
            ppAVar2 = (AnimationFrames **)(*(int *)(local_18 + 0xa8) + uVar4 * 4);
            if (pNVar8 == pNVar6) {
              ghidra::lib::vector___Emplace_reallocate
                        ((ghidra::vector *)&local_28,(AnimationFrames **)pNVar6,ppAVar2);
              pNVar6 = local_24;
              pNVar8 = local_20;
            }
            else {
              *(AnimationFrames **)pNVar6 = *ppAVar2;
              local_24 = pNVar6 + 4;
              pNVar6 = local_24;
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar7 = *(int *)(local_18 + 0xa8);
      } while (uVar4 < (uint)(*(int *)(local_18 + 0xac) - iVar7 >> 2));
    }
    pvVar1 = local_28;
    iVar7 = (int)pNVar6 - (int)local_28 >> 2;
    pNVar6 = (NavPoint *)0x0;
    if (iVar7 != 0) {
      iVar3 = rand();
      pNVar6 = *(NavPoint **)((int)pvVar1 + (iVar3 % iVar7) * 4);
    }
    if (pvVar1 != (void *)0x0) {
      pnVar9 = (nothrow_t *)((int)pNVar8 - (int)pvVar1 & 0xfffffffc);
      pvVar5 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar5 = *(void **)((int)pvVar1 + -4);
        pnVar9 = pnVar9 + 0x23;
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar9);
    }
  }
  // [seh] ExceptionList = local_10;
  return pNVar6;
}


// Ghidra: void __thiscall Sector::repopulateTradeLocations(Sector *this)
void Sector::repopulateTradeLocations()

{
  int iVar1;
  TradeLocation *this_00;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  piVar3 = *(int **)((char *)this + 0xcc);
  uVar2 = (uint)((int)*(int **)((char *)this + 0xd0) + (3 - (int)piVar3)) >> 2;
  uVar4 = 0;
  if (*(int **)((char *)this + 0xd0) < piVar3) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      bVar5 = false;
      iVar1 = *(int *)(*piVar3 + 0x254);
      if (iVar1 != 0) {
        bVar5 = *(int *)(iVar1 + 0x158) == 1;
      }
      if ((bVar5) &&
         (this_00 = *(TradeLocation **)(*piVar3 + 0x398), this_00 != (TradeLocation *)0x0)) {
        (this_00)->resetAndRepopulate();
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 != uVar2);
  }
  return;
}
