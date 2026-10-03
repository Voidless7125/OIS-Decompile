// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIScavenge::recalculateLogic(AIScavenge *this)
void AIScavenge::recalculateLogic()

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c23b8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (*(int *)((char *)this + 0x38) == 0) {
    iVar8 = *(int *)((char *)this + 0x24);
    uVar12 = 0;
    if (*(int *)(*(int *)(iVar8 + 0x44) + 0x148) - *(int *)(*(int *)(iVar8 + 0x44) + 0x144) >> 2 !=
        0) {
      do {
        iVar1 = *(int *)((char *)this + 0x38);
        if (iVar1 == 0) {
LAB_005012b3:
          bVar6 = true;
        }
        else {
          local_28 = (float)*(double *)(iVar8 + 0x28);
          local_24 = (float)*(double *)(iVar8 + 0x30);
          local_30 = (float)*(double *)(iVar1 + 0x28);
          local_2c = (float)*(double *)(iVar1 + 0x30);
          local_38 = (float)*(double *)(iVar8 + 0x28);
          local_34 = (float)*(double *)(iVar8 + 0x30);
          local_40 = (float)*(double *)(iVar1 + 0x28);
          local_3c = (float)*(double *)(iVar1 + 0x30);
          // [seh] local_8 = 3;
          bVar5 = true;
          bVar4 = true;
          bVar3 = true;
          bVar2 = true;
          local_18 = 0xf;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
          local_20 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_40,(Vec2 *)&local_38);
          fVar7 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
          if ((1.5 - fVar13 * 0.5 * fVar7 * fVar7) * fVar7 * fVar13 <
              (1.5 - local_20 * local_14 * local_14) * local_14 * local_1c) goto LAB_005012b3;
          bVar6 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        if (bVar3) {
          bVar3 = false;
        }
        if (bVar4) {
          bVar4 = false;
        }
        if (bVar5) {
          bVar5 = false;
        }
        if (bVar6) {
          uVar10 = 0;
          piVar9 = *(int **)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x9c);
          uVar11 = *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0xa0) - (int)piVar9 >> 2;
          if (uVar11 == 0) goto LAB_00501355;
          goto LAB_00501346;
        }
        iVar8 = *(int *)((char *)this + 0x24);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(*(int *)(iVar8 + 0x44) + 0x148) -
                               *(int *)(*(int *)(iVar8 + 0x44) + 0x144) >> 2));
    }
    *(undefined4 *)((char *)this + 0x20) = 0;
    // [seh] ExceptionList = local_10;
    return;
  }
  goto LAB_0050135a;
  while( true ) {
    uVar10 = uVar10 + 1;
    piVar9 = piVar9 + 1;
    if (uVar11 <= uVar10) break;
LAB_00501346:
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x44) ==
        *(int *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x144) + uVar12 * 4) + 4
                )) goto LAB_00501357;
  }
LAB_00501355:
  iVar8 = 0;
LAB_00501357:
  *(int *)((char *)this + 0x38) = iVar8;
LAB_0050135a:
  *(undefined4 *)((char *)this + 0x20) = 0x40400000;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIScavenge::enterState(AIScavenge *this)
void AIScavenge::enterState()

{
  Ship *this_00;
  int iVar1;
  
  this_00 = *(Ship **)((char *)this + 0x24);
  if (*(int *)(this_00 + 0xd4) == 1) {
    (this_00)->clearWaypointFlags();
    *(undefined4 *)(this_00 + 0x1c8) = *(undefined4 *)(this_00 + 0x1c4);
    iVar1 = *(int *)((char *)this + 0x24);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 0x2c0) = 0;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
  }
  ((char *)this)[0x30] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x34) = 0x40c00000;
  return;
}


// Ghidra: void __thiscall AIScavenge::leaveState(AIScavenge *this)
void AIScavenge::leaveState()

{
  Ship *this_00;
  int iVar1;
  
  this_00 = *(Ship **)((char *)this + 0x24);
  ((char *)this)[0x30] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  if (*(int *)(this_00 + 0xd4) == 1) {
    (this_00)->clearWaypointFlags();
    *(undefined4 *)(this_00 + 0x1c8) = *(undefined4 *)(this_00 + 0x1c4);
    iVar1 = *(int *)((char *)this + 0x24);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 0x2c0) = 0;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
  }
  return;
}


// Ghidra: void __thiscall AIScavenge::runLogic(AIScavenge *this,float param_1)
void AIScavenge::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  CargoHold *this_00;
  bool bVar1;
  Vec2 *pVVar2;
  char *pcVar3;
  int iVar4;
  Good *pGVar5;
  int iVar6;
  Ship *pSVar7;
  char *pcVar8;
  LogSystem *this_01;
  undefined4 *puVar9;
  LogSystem *this_02;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  int iVar13;
  GameData *pGVar14;
  uint uVar15;
  Vec2 *unaff_EDI;
  float fVar16;
  float fVar17;
  std::string local_9c [12];
  undefined4 uStack_90;
  std::string local_84 [8];
  undefined4 uStack_7c;
  float local_54;
  undefined1 *local_50;
  float local_4c;
  float local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005c2467;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar2 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_50 = (undefined1 *)0x0;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  iVar13 = *(int *)((char *)this + 0x38);
  local_14 = pVVar2;
  if (iVar13 == 0) goto LAB_00501bc1;
  if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x174) == iVar13) && (((char *)this)[0x30] == (byte)0x0))
  {
    ((char *)this)[0x30] = (byte)0x1;
    local_84[0] = (std::string)0x0;
    uStack_90 = 0x5014dd;
    ghidra::str::assign(local_84,"Warned target.",0xe);
    Ship::log();
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    // [seh] local_8 = 0;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("Unknown",7,(char *)pVVar2,(uint)unaff_EDI);
    if (bVar1) {
      uStack_7c = 0x50154f;
      pcVar3 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 1;
      uVar12 = *(uint *)(pcVar3 + 0x14);
    }
    else {
      uStack_7c = 0x5015b3;
      pcVar3 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 2;
      uVar12 = *(uint *)(pcVar3 + 0x14);
    }
    pcVar8 = pcVar3;
    if (0xf < uVar12) {
      pcVar8 = *(char **)pcVar3;
    }
    ghidra::str::append((std::string *)local_2c,pcVar8,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_00501596;
      }
      operator_delete(pvVar10,pnVar11);
    }
    local_50 = local_84;
    ghidra::str::ctor(local_84,(std::string *)local_2c);
    // [seh] local_8._0_1_ = 3;
    local_9c[0] = (std::string)0x0;
    ghidra::str::assign(local_9c,"XX-XXX",6);
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage(3);
    pGVar14 = g_gameData;
    iVar13 = *(int *)(g_gameData + 0xd0);
    pcVar3 = (char *)(iVar13 + 0x238);
    if (0xf < *(uint *)(iVar13 + 0x24c)) {
      pcVar3 = *(char **)pcVar3;
    }
    bVar1 = ghidra::lib::_Traits_equal___x28_x29(pcVar3,*(uint *)(iVar13 + 0x248),(char *)pVVar2,(uint)unaff_EDI);
    if (bVar1) {
      uStack_7c = 0x501664;
      LogSystem::addLogLine
                (this_01,*(LogPriority *)(*(int *)(pGVar14 + 0xd0) + 0x224),&DAT_00000004);
      pGVar14 = g_gameData;
    }
    ShipBehaviour::forgetPiracyTarget
              (*(ShipBehaviour **)(*(int *)((char *)this + 0x24) + 0x44),*(Ship **)(pGVar14 + 0xd0));
    // [seh] local_8._0_1_ = 0xff;
    // [seh] local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00501596;
      }
      operator_delete(pvVar10,pnVar11);
    }
    iVar13 = *(int *)((char *)this + 0x38);
  }
  local_54 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
  local_50 = (undefined1 *)(float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
  local_4c = (float)*(double *)(iVar13 + 0x28);
  local_48 = (float)*(double *)(iVar13 + 0x30);
  // [seh] local_8 = 5;
  fVar17 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_4c,(Vec2 *)&local_54);
  local_48 = (float)(0x5f3759df - ((uint)fVar17 >> 1));
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  pSVar7 = *(Ship **)((char *)this + 0x24);
  if ((pSVar7[0x2ec] != (byte)0x0) || (*(int *)(pSVar7 + 0xd4) == 1)) goto LAB_00501bc1;
  fVar16 = 5.0;
  if (5.0 < (1.5 - fVar17 * 0.5 * local_48 * local_48) * local_48 * fVar17) {
    randomPositionWithinRadius();
    pSVar7 = *(Ship **)((char *)this + 0x24);
    // [seh] local_8._0_1_ = 0xb;
    // [seh] local_8._1_3_ = 0;
    (pSVar7)->clearWaypointFlags();
    *(undefined4 *)(pSVar7 + 0x1c8) = *(undefined4 *)(pSVar7 + 0x1c4);
    (pSVar7)->mapCourseTo();
    goto LAB_00501bc1;
  }
  (pSVar7)->getSpeed();
  if (fVar16 != 0.0) {
    (*(Ship **)((char *)this + 0x24))->getSpeed();
    if ((0.0 < fVar16) && (*(int *)(*(Ship **)((char *)this + 0x24) + 0xd4) != 1)) {
      (*(Ship **)((char *)this + 0x24))->allStop();
    }
    goto LAB_00501bc1;
  }
  fVar17 = *(float *)((char *)this + 0x34);
  *(float *)((char *)this + 0x34) = fVar17 - param_1;
  if (0.0 < fVar17 - param_1) goto LAB_00501bc1;
  iVar13 = 0xc;
  do {
    local_48 = *(float *)(*(int *)((char *)this + 0x38) + 0xe8);
    if (*(int *)(iVar13 + (int)local_48) != 0) {
      pSVar7 = *(Ship **)((char *)this + 0x24);
      bVar1 = (pSVar7)->hasEmptyPodSlot();
      if (bVar1) {
        iVar4 = (pSVar7)->getNextEmptyCargoPod();
        (*(CargoHold **)(*(int *)((char *)this + 0x24) + 0x1f8))->addPod(iVar4);
        **(undefined1 **)(*(int *)(*(int *)((char *)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) =
             **(undefined1 **)(iVar13 + *(int *)(*(int *)((char *)this + 0x38) + 0xe8));
        *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 1) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x38) + 0xe8) + iVar13) + 1);
        *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 2) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x38) + 0xe8) + iVar13) + 2);
        *(undefined4 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 4) =
             *(undefined4 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x38) + 0xe8) + iVar13) + 4);
        *(undefined4 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 8) =
             *(undefined4 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x38) + 0xe8) + iVar13) + 8);
      }
      else {
        uVar12 = 0;
        puVar9 = *(undefined4 **)(g_gameData + 0x84);
        uVar15 = *(int *)(g_gameData + 0x88) - (int)puVar9 >> 2;
        if (uVar15 != 0) {
          local_50 = *(undefined1 **)(*(int *)((int)local_48 + iVar13) + 4);
          do {
            pGVar5 = (Good *)*puVar9;
            if (*(undefined1 **)pGVar5 == local_50) goto LAB_005018d9;
            uVar12 = uVar12 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar12 < uVar15);
        }
        pGVar5 = (Good *)0x0;
LAB_005018d9:
        this_00 = *(CargoHold **)(*(int *)((char *)this + 0x24) + 0x1f8);
        iVar6 = (this_00)->amountCanHold(pGVar5);
        iVar4 = *(int *)(iVar13 + (int)local_48);
        if (*(int *)(iVar4 + 8) <= iVar6) {
          uStack_7c = 0x501903;
          (this_00)->addToHold(*(int *)(iVar4 + 4), *(int *)(iVar4 + 8), iVar4);
        }
      }
    }
    iVar13 = iVar13 + 4;
  } while (iVar13 < 0x44);
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x501931;
  ghidra::str::assign(local_84,"Done gone and grabbed us some cargo.",0x24);
  Ship::log();
  ghidra::str::ctor
            ((std::string *)local_44,(std::string *)(*(int *)((char *)this + 0x38) + 0x68));
  // [seh] local_8 = 6;
  ghidra::str::ctor(local_84,(std::string *)local_44);
  pSVar7 = GameData::getShipWithRego();
  Sector::removeSyntheticObject
            (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24),*(SyntheticObject **)((char *)this + 0x38));
  *(undefined4 *)((char *)this + 0x38) = 0;
  if (((pSVar7 == (Ship *)0x0) ||
      (bVar1 = (*(Ship **)((char *)this + 0x24))->canCurrentlyDetect(pSVar7), !bVar1)) ||
     (bVar1 = (pSVar7)->hasCargo(), !bVar1)) {
LAB_00501a0e:
    bVar1 = false;
  }
  else {
    local_4c = (float)*(double *)(pSVar7 + 0x28);
    fVar17 = (float)*(double *)(pSVar7 + 0x30);
    // [seh] local_8 = 8;
    local_50 = (undefined1 *)0x3;
    local_48 = fVar17;
    fastDistance(pVVar2,unaff_EDI);
    if ((float)(&piracyDistance)[*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x74)] < fVar17)
    goto LAB_00501a0e;
    bVar1 = true;
  }
  // [seh] local_8._0_1_ = 6;
  // [seh] local_8._1_3_ = 0;
  if (bVar1) {
    (*(ShipBehaviour **)(*(int *)((char *)this + 0x24) + 0x44))->forgetPiracyTarget(pSVar7);
    uStack_7c = 0x501a45;
    strUsingArgs((char *)local_2c);
    // [seh] local_8._0_1_ = 9;
    ghidra::str::ctor(local_84,(std::string *)local_2c);
    // [seh] local_8._0_1_ = 10;
    local_9c[0] = (std::string)0x0;
    ghidra::str::assign(local_9c,"XX-XXX",6);
    // [seh] local_8._0_1_ = 9;
    (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage(3);
    if (pSVar7[0x234] != (byte)0x0) {
      uStack_7c = 0x501aaf;
      (this_02)->addLogLine(*(LogPriority *)(pSVar7 + 0x224), &DAT_00000004);
    }
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00501596;
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
  if (0xf < local_30) {
    pnVar11 = (nothrow_t *)(local_30 + 1);
    pvVar10 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_44[0] + -4);
      pnVar11 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
LAB_00501596:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
LAB_00501bc1:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIScavenge::removeDesireTarget(AIScavenge *this,GameObject *param_1)
void AIScavenge::removeDesireTarget(GameObject * param_1)

{
  int iVar1;
  
  if ((((*(int *)((char *)this + 0x38) != 0) &&
       (iVar1 = *(int *)(*(int *)((char *)this + 0x38) + 0x44), iVar1 != -1)) &&
      (*(int *)(param_1 + 0x30) == 2)) && (*(int *)(param_1 + 0x3c) == iVar1)) {
    *(undefined4 *)((char *)this + 0x38) = 0;
  }
  if (*(GameObject **)((char *)this + 0x28) == param_1) {
    *(undefined4 *)((char *)this + 0x28) = 0;
  }
  return;
}
