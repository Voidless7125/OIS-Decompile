// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __cdecl ShipInterface::doBurnMainEngine(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doBurnMainEngine(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xffffffc8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char cVar2;
  FlagManager *pFVar3;
  bool bVar4;
  std::string abStack_34 [12];
  undefined4 uStack_28;
  Ship *pSVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0030;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) {
    pSVar5 = (Ship *)0x0;
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))();
    if ((cVar2 != '\0') && (*(int *)(param_1 + 0xd4) != 3)) {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
        bVar4 = false;
        if (iVar1 != 0) {
          bVar4 = *(int *)(iVar1 + 0x158) == 2;
        }
        if (bVar4) {
          // [seh] ExceptionList = local_10;
          return false;
        }
      }
      if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      {
        abStack_34[0] = (std::string)0x0;
        ghidra::str::assign(abStack_34,"lock_manual_engine_control",0x1a);
        // [seh] local_8 = 0;
        pFVar3 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        bVar4 = (pFVar3)->flagSet();
        if (bVar4) {
          // [seh] ExceptionList = local_10;
          return false;
        }
        uStack_28 = 0;
        ghidra::str::assign((std::string *)&stack0xffffffc8,"has_fired_main_engine",0x15)
        ;
        // [seh] local_8 = 1;
        pFVar3 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar3)->setFlag();
      }
      (param_1)->cancelTravel();
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) != 0) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 0x62) = 1;
        soundHigh(pSVar5);
        uStack_28 = 0x4de9b9;
        debugPrint("GAME","BURNING MAIN ENGINE.");
        // [seh] ExceptionList = local_10;
        return true;
      }
      uStack_28 = 0x4de9dd;
      debugPrint("GAME","NO MAIN ENGINE TO BURN.");
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doStopMainEngine(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doStopMainEngine(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  bool bVar2;
  Sound SVar3;
  int iVar4;
  
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0), cVar1 != '\0'))
  {
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
      bVar2 = false;
      if (iVar4 != 0) {
        bVar2 = *(int *)(iVar4 + 0x158) == 2;
      }
      if (bVar2) {
        return false;
      }
    }
    if (*(int *)(param_1 + 0xd4) != 3) {
      (param_1)->cancelTravel();
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) != 0) {
        iVar4 = -1;
        SVar3 = 9;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 0x62) = 0;
        this_ = ghidra::any_singleton();
        (this_)->playSound(param_1, SVar3, iVar4);
        debugPrint("GAME","STOPPING MAIN ENGINE.");
        return true;
      }
      debugPrint("GAME","NO MAIN ENGINE TO STOPPING.");
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleMainEngine(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleMainEngine(Ship * param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
      (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0), cVar2 != '\0'))
     && (*(int *)(param_1 + 0xd4) != 3)) {
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
      bVar3 = false;
      if (iVar1 != 0) {
        bVar3 = *(int *)(iVar1 + 0x158) == 2;
      }
      if (bVar3) {
        return false;
      }
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) != 0) {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 0x62) == '\0') {
        doBurnMainEngine(param_1,param_2,param_3,param_4);
        return true;
      }
      doStopMainEngine(param_1,param_2,param_3,param_4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCancelAP(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCancelAP(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  FlagManager *pFVar2;
  SoundEngine *this_;
  bool bVar3;
  std::string abStack_34 [8];
  undefined4 uStack_2c;
  Sound SVar4;
  int iVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0058;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (((*(int **)(*(int *)(param_1 + 0x40) + 0x24) == (int *)0x0) ||
      (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(), cVar1 == '\0'))
     || (*(int *)(param_1 + 0xd4) == 3)) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
    bVar3 = false;
    if (iVar5 != 0) {
      bVar3 = *(int *)(iVar5 + 0x158) == 2;
    }
    if (bVar3) {
      // [seh] ExceptionList = local_10;
      return false;
    }
  }
  if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    abStack_34[0] = (std::string)0x0;
    ghidra::str::assign(abStack_34,"lock_manual_control",0x13);
    // [seh] local_8 = 0;
    pFVar2 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    bVar3 = (pFVar2)->flagSet();
    if (bVar3) {
      // [seh] ExceptionList = local_10;
      return false;
    }
  }
  (param_1)->clearWaypointFlags();
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
  (param_1)->cancelAutopilot();
  iVar5 = -1;
  SVar4 = 9;
  uStack_2c = 0x4dec66;
  this_ = ghidra::any_singleton();
  uStack_2c = 0x4dec6d;
  (this_)->playSound(param_1, SVar4, iVar5);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doClearCourse(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doClearCourse(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *this_00;
  Ship *pSVar1;
  bool bVar2;
  Sound SVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd4) == 3) {
    return false;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
    bVar2 = false;
    if (iVar4 != 0) {
      bVar2 = *(int *)(iVar4 + 0x158) == 2;
    }
    if (bVar2) {
      return false;
    }
  }
  iVar4 = -1;
  SVar3 = 9;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar3, iVar4);
  (param_1)->clearSelectPoints();
  (this_00)->clearWaypointFlags();
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("GAME","%s: Autopilot cancelled.",pSVar1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doRemoveLastWaypoint(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRemoveLastWaypoint(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  int iVar2;
  SoundEngine *this_;
  Ship *this_00;
  Sound SVar3;
  int iVar4;
  
  this_00 = param_1;
  if (param_1 != (Ship *)0x0) {
    iVar4 = *(int *)(param_1 + 0x1c4);
    iVar2 = *(int *)(param_1 + 0x1c8) - iVar4 >> 5;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        bVar1 = doClearCourse(param_1,0,0,0);
        return bVar1;
      }
      ghidra::lib::vector__erase((ghidra::vector *)(param_1 + 0x1c4),&param_1,iVar2 * 0x20 + iVar4 + -0x20);
      (this_00)->clearSelectPoints();
      iVar4 = -1;
      SVar3 = 9;
      this_ = ghidra::any_singleton();
      (this_)->playSound(this_00, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPlotCourse(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPlotCourse(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  SensorData *this_;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  Vec2 *pVVar4;
  SyntheticObject *pSVar5;
  FlagManager *pFVar6;
  SoundEngine *this_00;
  LogSystem *this_01;
  LogSystem *this_02;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  undefined4 *******pppppppuVar7;
  LogSystem *extraout_ECX_01;
  LogSystem *this_03;
  int extraout_EDX;
  int extraout_EDX_00;
  nothrow_t *pnVar8;
  int iVar9;
  Vec2 *unaff_EDI;
  int iVar10;
  float fVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined4 *******local_68;
  int iStack_64;
  Sound SVar14;
  undefined4 *******local_2c [4];
  int local_1c;
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] local_8 = 0xff;
  uStack_7 = 0xffffff;
  // [seh] puStack_c = &DAT_005c00d6;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar4 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_68 = (undefined4 *******)((uint)local_68 & 0xffffff00);
  local_14 = pVVar4;
  ghidra::str::assign((std::string *)&local_68,"",0);
  bVar1 = ShipData::checkAutoPilotEngaged(param_1);
  if ((bVar1) && (param_2 == 0)) {
    iStack_64 = 0x4dee31;
    doCancelAP(param_1,0,0,0);
  }
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) == (int *)0x0) ||
     (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(), cVar2 == '\0'))
  goto LAB_004df4c0;
  fVar11 = (float)*(double *)(param_1 + 0x30);
  // [seh] local_8 = 0;
  uStack_7 = 0;
  (param_1)->distanceToDecelerateFromFull();
  iVar9 = (int)fVar11;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x18) == 0) {
    puVar12 = &DAT_bf800000;
  }
  else {
    puVar12 = (undefined1 *)
              (360.0 / *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 8) + 0x104));
  }
  iVar10 = (int)(float)puVar12;
  if ((iVar9 == -1) || (iVar10 == -1)) {
    (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    iVar9 = -1;
    SVar14 = 10;
    this_00 = ghidra::any_singleton();
    (this_00)->playSound(param_1, SVar14, iVar9);
    goto LAB_004df4c0;
  }
  (param_1)->getSpeed();
  if (((float)puVar12 == 0.0) &&
     ((uint)(*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4)) < 0x20)) {
    iVar9 = iVar9 * 2;
  }
  else {
    iVar9 = iVar9 + (iVar9 / 3) * 2;
  }
  fVar11 = (float)iVar9 + 3.0 + (float)iVar10;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    fVar13 = (float)*(double *)(*(int *)(param_1 + 0x1a4) + 0x28);
    // [seh] local_8 = 1;
    fastDistance(pVVar4,unaff_EDI);
    // [seh] local_8 = 0;
    if (fVar11 < fVar13) {
      (param_1)->addWaypoint(*(GameObject **)(param_1 + 0x1a4));
      soundHigh((Ship *)pVVar4);
    }
    else {
      soundError((Ship *)pVVar4);
      (this_02)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    }
    goto LAB_004df4c0;
  }
  fVar13 = *(float *)(param_1 + 0x1b8);
  if ((fVar13 != -9999.0) || (fVar13 = *(float *)(param_1 + 0x1bc), fVar13 != -9999.0)) {
    fastDistance(pVVar4,unaff_EDI);
    uVar3 = local_8;
    if (fVar11 < fVar13) goto LAB_004df486;
    goto LAB_004df438;
  }
  this_ = *(SensorData **)(param_1 + 0x19c);
  if (this_ == (SensorData *)0x0) goto LAB_004df4c0;
  iVar9 = *(int *)((char *)this_ + 0x130);
  if (iVar9 == 0) {
    bVar1 = (this_)->canBeMooredWith();
    fVar13 = (float)((double)*(float *)(extraout_EDX_00 + 0x108) +
                    *(double *)(extraout_EDX_00 + 0x18));
    if (!bVar1) {
      // [seh] local_8 = 7;
      fastDistance(pVVar4,unaff_EDI);
      // [seh] local_8 = 0;
      uVar3 = local_8;
      if (fVar11 < fVar13) {
        if ((((*(int *)(g_gameData + 0xcc) != 0) &&
             (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
            (*(int *)(*(int *)(param_1 + 0x19c) + 0xe0) == 5)) &&
           (pSVar5 = Sector::getSyntheticObjectWithID
                               (*(Sector **)(param_1 + 0x24),*(int *)(*(int *)(param_1 + 0x19c) + 4)
                               ), uVar3 = local_8, pSVar5 != (SyntheticObject *)0x0)) {
          strUsingArgs((char *)local_2c);
          // [seh] local_8 = 8;
          pppppppuVar7 = local_2c;
          if (0xf < local_18) {
            pppppppuVar7 = local_2c[0];
          }
          iStack_64 = local_1c + (int)pppppppuVar7;
          local_68 = local_2c;
          if (0xf < local_18) {
            local_68 = local_2c[0];
          }
          ghidra::lib::transform___x28_x29();
          ghidra::str::ctor
                    ((std::string *)&stack0xffffff94,(std::string *)local_2c);
          // [seh] local_8 = 9;
          pFVar6 = ghidra::any_singleton();
          // [seh] local_8 = 8;
          (pFVar6)->setFlag();
          // [seh] local_8 = 0;
          uVar3 = local_8;
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pppppppuVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pppppppuVar7 = (undefined4 *******)local_2c[0][-1];
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar7))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pppppppuVar7,pnVar8);
            uVar3 = local_8;
          }
        }
        goto LAB_004df486;
      }
      goto LAB_004df438;
    }
    // [seh] local_8 = 4;
    fastDistance(pVVar4,unaff_EDI);
    // [seh] local_8 = 0;
    if (fVar11 < fVar13) {
      pSVar5 = Sector::getSyntheticObjectWithID
                         (*(Sector **)(param_1 + 0x24),*(int *)(*(int *)(param_1 + 0x19c) + 4));
      if (pSVar5 != (SyntheticObject *)0x0) {
        *(SyntheticObject **)(param_1 + 0x170) = pSVar5;
        soundHigh((Ship *)pVVar4);
        (param_1)->addWaypoint((GameObject *)(pSVar5 + 8));
        debugPrint("GAME","Plotting course to moor with synthetic object.");
        if ((*(int *)(g_gameData + 0xcc) != 0) &&
           (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
          strUsingArgs((char *)local_2c);
          // [seh] local_8 = 5;
          pppppppuVar7 = local_2c;
          if (0xf < local_18) {
            pppppppuVar7 = local_2c[0];
          }
          iStack_64 = local_1c + (int)pppppppuVar7;
          local_68 = local_2c;
          if (0xf < local_18) {
            local_68 = local_2c[0];
          }
          ghidra::lib::transform___x28_x29();
          ghidra::str::ctor
                    ((std::string *)&stack0xffffff94,(std::string *)local_2c);
          // [seh] local_8 = 6;
          pFVar6 = ghidra::any_singleton();
          // [seh] local_8 = 5;
          (pFVar6)->setFlag();
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pppppppuVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pppppppuVar7 = (undefined4 *******)local_2c[0][-1];
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar7))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pppppppuVar7,pnVar8);
          }
        }
      }
      goto LAB_004df4c0;
    }
    soundError((Ship *)pVVar4);
    *(undefined4 *)(param_1 + 0x170) = 0;
    this_03 = extraout_ECX_00;
  }
  else {
    bVar1 = (*(ShipClass **)(iVar9 + 0x254))->canBeDockedWith();
    if (bVar1) {
      fVar13 = (float)*(double *)(iVar9 + 0x30);
      // [seh] local_8 = 2;
      fastDistance(pVVar4,unaff_EDI);
      // [seh] local_8 = 0;
      uVar3 = local_8;
      // [seh] local_8 = 0;
      if (fVar11 < fVar13) {
        soundHigh((Ship *)pVVar4);
        (param_1)->addWaypoint((GameObject *)
                                  (-(uint)(*(int *)(*(int *)(param_1 + 0x19c) + 0x130) != 0) &
                                  *(int *)(*(int *)(param_1 + 0x19c) + 0x130) + 8U));
        debugPrint("GAME","Plotting course to space station.");
        goto LAB_004df4c0;
      }
LAB_004df438:
      // [seh] local_8 = uVar3;
      soundError((Ship *)pVVar4);
      this_03 = extraout_ECX_01;
    }
    else {
      fVar13 = (float)((double)*(float *)(extraout_EDX + 0x108) + *(double *)(extraout_EDX + 0x18));
      // [seh] local_8 = 3;
      fastDistance(pVVar4,unaff_EDI);
      // [seh] local_8 = 0;
      uVar3 = local_8;
      // [seh] local_8 = 0;
      if (fVar11 < fVar13) {
LAB_004df486:
        // [seh] local_8 = uVar3;
        (param_1)->addWaypoint();
        soundHigh((Ship *)pVVar4);
        goto LAB_004df4c0;
      }
      soundError((Ship *)pVVar4);
      this_03 = extraout_ECX;
    }
  }
  (this_03)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
LAB_004df4c0:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// Ghidra: bool __cdecl ShipInterface::doEngageCourse(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngageCourse(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  double dVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  Ship *pSVar5;
  float fVar6;
  int iVar7;
  FlagManager *pFVar8;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *extraout_ECX_01;
  LogSystem *this;
  LogSystem *pLVar9;
  float fVar10;
  std::string abStack_38 [4];
  undefined4 uStack_34;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0119;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar5 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if ((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0xd4) != 3)) {
    pLVar9 = (LogSystem *)0x0;
    if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
       (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(),
       pLVar9 = extraout_ECX, cVar3 != '\0')) {
      pLVar9 = (LogSystem *)0x0;
      if ((*(int **)(*(int *)(param_1 + 0x40) + 0x10) != (int *)0x0) &&
         (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x10))(),
         pLVar9 = extraout_ECX_00, cVar3 != '\0')) {
        pLVar9 = (LogSystem *)0x0;
        if ((*(int **)(*(int *)(param_1 + 0x40) + 0x18) != (int *)0x0) &&
           (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x10))(),
           pLVar9 = extraout_ECX_01, cVar3 != '\0')) {
          if (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 == 0) {
            // [seh] ExceptionList = local_10;
            return false;
          }
          if (*(int *)(param_1 + 0xd4) != 0) {
            // [seh] ExceptionList = local_10;
            return false;
          }
          *(undefined4 *)(param_1 + 0xd4) = 1;
          *(undefined4 *)(param_1 + 0x2c0) = 0;
          *(undefined4 *)(param_1 + 0x2c4) = 0;
          dVar1 = *(double *)(param_1 + 0x30);
          pfVar2 = *(float **)(param_1 + 0x1c4);
          *pfVar2 = (float)*(double *)(param_1 + 0x28);
          pfVar2[1] = (float)dVar1;
          local_18 = (float)*(double *)(param_1 + 0x28);
          local_14 = (float)*(double *)(param_1 + 0x30);
          // [seh] local_8 = 0;
          fVar10 = cocos2d::Vec2::getDistanceSq
                             ((Vec2 *)(*(int *)(param_1 + 0x1c4) + 8),(Vec2 *)&local_18);
          fVar6 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
          // [seh] local_8 = 0xffffffff;
          *(double *)(param_1 + 0x138) =
               (double)((1.5 - fVar10 * 0.5 * fVar6 * fVar6) * fVar6 * fVar10);
          pLVar9 = *(LogSystem **)(param_1 + 0x1c4);
          iVar7 = *(int *)(param_1 + 0x1c8) - (int)pLVar9 >> 5;
          if ((iVar7 == 0) || (*(int *)(pLVar9 + iVar7 * 0x20 + -0xc) == 0)) {
            (pLVar9)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x0);
          }
          else {
            (param_1)->getFinalWaypointObject();
            uStack_34 = 0x4df6bb;
            (this)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x0);
          }
          if ((*(int *)(g_gameData + 0xcc) != 0) &&
             (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
            abStack_38[0] = (std::string)0x0;
            ghidra::str::assign(abStack_38,"only_plot_to_beacons",0x14);
            // [seh] local_8 = 1;
            pFVar8 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            bVar4 = (pFVar8)->flagSet();
            if (bVar4) {
              ghidra::str::assign
                        ((std::string *)&stack0xffffffc4,"lock_manual_control",0x13);
              // [seh] local_8 = 2;
              pFVar8 = ghidra::any_singleton();
              // [seh] local_8 = 0xffffffff;
              (pFVar8)->setFlag();
            }
          }
          soundHigh(pSVar5);
          // [seh] ExceptionList = local_10;
          return true;
        }
      }
    }
    (pLVar9)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doFullStop(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doFullStop(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char cVar2;
  FlagManager *pFVar3;
  SoundEngine *this_;
  std::string local_34 [4];
  undefined4 uStack_30;
  Sound SVar4;
  int iVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0150;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"no_full_stop",0xc);
    // [seh] local_8 = 0;
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    bVar1 = (pFVar3)->flagSet();
    if (bVar1) {
      // [seh] ExceptionList = local_10;
      return false;
    }
  }
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(), cVar2 != '\0')) {
    (param_1)->clearWaypointFlags();
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
    (param_1)->allStop();
    iVar5 = -1;
    SVar4 = 9;
    uStack_30 = 0x4df896;
    this_ = ghidra::any_singleton();
    uStack_30 = 0x4df89d;
    (this_)->playSound(param_1, SVar4, iVar5);
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      ghidra::str::assign((std::string *)&stack0xffffffc4,"has_ever_hit_full_stop",0x16);
      // [seh] local_8 = 1;
      pFVar3 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar3)->setFlag();
    }
    // [seh] ExceptionList = local_10;
    return true;
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doRotateTo(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRotateTo(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_;
  float unaff_ESI;
  char *pcVar2;
  
  if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    return false;
  }
  this_ = (LogSystem *)0x0;
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0),
     this_ = extraout_ECX, cVar1 == '\0')) {
    pcVar2 = "Not possible: helm non-functional";
  }
  else {
    this_ = (LogSystem *)0x0;
    if ((*(int **)(*(int *)(param_1 + 0x40) + 0x18) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x10))(0),
       this_ = extraout_ECX_00, cVar1 != '\0')) {
      if (*(int *)(param_1 + 0xd4) == 3) {
        return false;
      }
      if (*(int *)(param_1 + 0xd4) == 1) {
        (param_1)->cancelAutopilot();
      }
      (param_1)->rotateTo(unaff_ESI);
      *(undefined4 *)(param_1 + 0xd4) = 1;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      return true;
    }
    pcVar2 = "Not possible: RCS non-functional";
  }
  (this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002, pcVar2);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doFireRCSCW(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doFireRCSCW(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char cVar2;
  bool bVar3;
  Ship *pSVar4;
  FlagManager *pFVar5;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_;
  std::string abStack_30 [4];
  undefined4 uStack_2c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0030;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar4 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_ = (LogSystem *)0x0;
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(),
     this_ = extraout_ECX, cVar2 != '\0')) {
    this_ = (LogSystem *)0x0;
    if ((*(int **)(*(int *)(param_1 + 0x40) + 0x18) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x10))(),
       this_ = extraout_ECX_00, cVar2 != '\0')) {
      if (*(int *)(param_1 + 0xd4) == 3) {
        // [seh] ExceptionList = local_10;
        return false;
      }
      if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      {
        abStack_30[0] = (std::string)0x0;
        ghidra::str::assign(abStack_30,"lock_manual_control",0x13);
        // [seh] local_8 = 0;
        pFVar5 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        abStack_30[0] = (std::string)(pFVar5)->flagSet();
        if ((bool)abStack_30[0]) {
          // [seh] ExceptionList = local_10;
          return false;
        }
        ghidra::str::assign(abStack_30,"angle_50",8);
        // [seh] local_8 = 1;
        pFVar5 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        bVar3 = (pFVar5)->flagSet();
        if (bVar3) {
          // [seh] ExceptionList = local_10;
          return false;
        }
      }
      (param_1)->cancelTravel();
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
      if (iVar1 == 0) {
        soundError(pSVar4);
        debugPrint("GAME","NO RCS TO BURN.");
        // [seh] ExceptionList = local_10;
        return false;
      }
      if ((*(char *)(iVar1 + 0x62) != '\0') && (*(int *)(iVar1 + 0x34) == 1)) {
        uStack_2c = 0x4dfb39;
        doStopRCS(param_1,param_2,0,0);
        // [seh] ExceptionList = local_10;
        return true;
      }
      *(undefined1 *)(iVar1 + 0x62) = 1;
      *(undefined1 **)(param_1 + 0x128) = &DAT_bf800000;
      PresentationData::m_selectedHeading = -1.0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 1;
      debugPrint("GAME","BURNING RCS CW.");
      soundHigh(pSVar4);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  (this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doFireRCSCCW(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doFireRCSCCW(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char cVar2;
  bool bVar3;
  Ship *pSVar4;
  FlagManager *pFVar5;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_;
  std::string abStack_30 [4];
  undefined4 uStack_2c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0030;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar4 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_ = (LogSystem *)0x0;
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(),
     this_ = extraout_ECX, cVar2 != '\0')) {
    this_ = (LogSystem *)0x0;
    if ((*(int **)(*(int *)(param_1 + 0x40) + 0x18) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x10))(),
       this_ = extraout_ECX_00, cVar2 != '\0')) {
      if (*(int *)(param_1 + 0xd4) == 3) {
        // [seh] ExceptionList = local_10;
        return false;
      }
      if ((*(Ship **)(param_1 + 0x178) != (Ship *)0x0) &&
         (bVar3 = (*(Ship **)(param_1 + 0x178))->isJumpGate(), bVar3)) {
        // [seh] ExceptionList = local_10;
        return false;
      }
      if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      {
        abStack_30[0] = (std::string)0x0;
        ghidra::str::assign(abStack_30,"lock_manual_control",0x13);
        // [seh] local_8 = 0;
        pFVar5 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        abStack_30[0] = (std::string)(pFVar5)->flagSet();
        if ((bool)abStack_30[0]) {
          // [seh] ExceptionList = local_10;
          return false;
        }
        ghidra::str::assign(abStack_30,"angle_50",8);
        // [seh] local_8 = 1;
        pFVar5 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        bVar3 = (pFVar5)->flagSet();
        if (bVar3) {
          // [seh] ExceptionList = local_10;
          return false;
        }
      }
      (param_1)->cancelTravel();
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
      if (iVar1 == 0) {
        soundError(pSVar4);
        debugPrint("GAME","NO RCS TO BURN.");
        // [seh] ExceptionList = local_10;
        return false;
      }
      if ((*(char *)(iVar1 + 0x62) != '\0') && (*(int *)(iVar1 + 0x34) == 2)) {
        uStack_2c = 0x4dfd60;
        doStopRCS(param_1,param_2,0,0);
        // [seh] ExceptionList = local_10;
        return true;
      }
      *(undefined1 *)(iVar1 + 0x62) = 1;
      *(undefined1 **)(param_1 + 0x128) = &DAT_bf800000;
      PresentationData::m_selectedHeading = -1.0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 2;
      soundHigh(pSVar4);
      debugPrint("GAME","BURNING RCS CCW.");
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  (this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doStopRCS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doStopRCS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_;
  Ship *unaff_ESI;
  char *pcVar3;
  
  if (param_1 == (Ship *)0x0) {
    return false;
  }
  if (*(int *)(param_1 + 0xd4) == 3) {
    return false;
  }
  this_ = (LogSystem *)0x0;
  if ((*(int **)(*(int *)(param_1 + 0x40) + 0x24) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0),
     this_ = extraout_ECX, cVar1 == '\0')) {
    pcVar3 = "Not possible: helm non-functional";
  }
  else {
    this_ = (LogSystem *)0x0;
    if ((*(int **)(*(int *)(param_1 + 0x40) + 0x18) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x10))(0),
       this_ = extraout_ECX_00, cVar1 != '\0')) {
      if (*(int *)(param_1 + 0xd4) == 3) {
        return false;
      }
      if ((*(Ship **)(param_1 + 0x178) != (Ship *)0x0) &&
         (bVar2 = (*(Ship **)(param_1 + 0x178))->isJumpGate(), bVar2)) {
        return false;
      }
      (param_1)->cancelTravel();
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x18) == 0) {
        soundError(unaff_ESI);
        debugPrint("GAME","NO RCS TO BURN.");
        return false;
      }
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) = 0;
      PresentationData::m_selectedHeading = -1.0;
      soundLow(unaff_ESI);
      debugPrint("GAME","STOPPING RCS BURN.");
      return true;
    }
    pcVar3 = "Not possible: RCS non-functional";
  }
  (this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002, pcVar3);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleEMCON(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleEMCON(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  Ship *extraout_EDX;
  
  if ((((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) &&
       (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 0)) &&
      (*(char *)(*(int *)(param_1 + 0x254) + 0xdf) != '\0')) && (*(int *)(param_1 + 0xd4) != 3)) {
    if ((*(Ship **)(param_1 + 0x178) != (Ship *)0x0) &&
       (bVar1 = (*(Ship **)(param_1 + 0x178))->isJumpGate(), param_1 = extraout_EDX, bVar1)) {
      return false;
    }
    if (param_1[0xe4] == (byte)0x0) {
      doActiveEMCONMode(param_1,param_2,param_3,param_4);
      return true;
    }
    doDeactivateEMCONMode(param_1,param_2,param_3,param_4);
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doActiveEMCONMode(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doActiveEMCONMode(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  undefined4 in_emcon_mode = 0;  // [pseudo] register/stack value live on entry
  SoundEngine *pSVar1;
  PresentationInterface *this_;
  FlagManager *pFVar2;
  std::string local_38 [12];
  undefined4 uStack_2c;
  Ship *pSVar3;
  Sound SVar4;
  bool bVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0178;
  // [seh] local_10 = ExceptionList;
  if ((((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) &&
       (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 0)) &&
      (*(char *)(*(int *)(param_1 + 0x254) + 0xdf) != '\0')) && (*(int *)(param_1 + 0xd4) != 3)) {
    iVar6 = -1;
    SVar4 = 3;
    // [seh] ExceptionList = &local_10;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x34) = 0;
    uStack_2c = 0x4e0037;
    pSVar3 = param_1;
    pSVar1 = ghidra::any_singleton();
    uStack_2c = 0x4e003e;
    (pSVar1)->playSound(pSVar3, SVar4, iVar6);
    (param_1)->setEmcon(true);
    pSVar1 = ghidra::any_singleton();
    if ((pSVar1[0x44] != (byte)0x0) && (*(int *)(pSVar1 + 100) != 0)) {
      FMOD::ChannelControl::setPaused(SUB41(*(int *)(pSVar1 + 100),0));
    }
    bVar5 = true;
    this_ = ghidra::any_singleton();
    (this_)->switchEmconMode(bVar5);
    local_38[0] = (std::string)0x0;
    ghidra::str::assign(local_38,"in_emcon_mode",0xd);
    // [seh] local_8 = 0;
    pFVar2 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar2)->setFlag();
    // [seh] ExceptionList = local_10;
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDeactivateEMCONMode(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDeactivateEMCONMode(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  undefined4 in_emcon_mode = 0;  // [pseudo] register/stack value live on entry
  SoundEngine *pSVar1;
  PresentationInterface *this_;
  FlagManager *pFVar2;
  uint uVar3;
  std::string local_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  Ship *pSVar4;
  Sound SVar5;
  bool bVar6;
  int iVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bffb8;
  // [seh] local_10 = ExceptionList;
  if ((((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) &&
       (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 0)) &&
      (*(char *)(*(int *)(param_1 + 0x254) + 0xdf) != '\0')) && (*(int *)(param_1 + 0xd4) != 3)) {
    iVar7 = -1;
    SVar5 = 4;
    uStack_38 = 0x4e0154;
    // [seh] ExceptionList = &local_10;
    pSVar4 = param_1;
    pSVar1 = ghidra::any_singleton();
    uStack_34 = 0x4e015e;
    (pSVar1)->playSound(pSVar4, SVar5, iVar7);
    iVar7 = *(int *)(param_1 + 0x40);
    uVar3 = 0;
    param_1[0xe4] = (byte)0x0;
    if (*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2 != 0) {
      do {
        (*(ShipModule **)(*(int *)(iVar7 + 0x3c) + uVar3 * 4))->connect(param_1);
        iVar7 = *(int *)(param_1 + 0x40);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
    }
    pSVar1 = ghidra::any_singleton();
    if (pSVar1[0x44] != (byte)0x0) {
      (pSVar1)->resumeTrack();
    }
    bVar6 = false;
    this_ = ghidra::any_singleton();
    (this_)->switchEmconMode(bVar6);
    local_40[0] = (std::string)0x0;
    ghidra::str::assign(local_40,"in_emcon_mode",0xd);
    // [seh] local_8 = 0;
    pFVar2 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar2)->setFlag();
    // [seh] ExceptionList = local_10;
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEnableLADAR(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEnableLADAR(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 4) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 4) + 0x10))(0);
    if (cVar1 != '\0') {
      iVar3 = -1;
      SVar2 = 8;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) = 1;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisableLADAR(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisableLADAR(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 4) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 4) + 0x10))(0);
    if (cVar1 != '\0') {
      iVar3 = -1;
      SVar2 = 9;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) = 0;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleLADAR(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleLADAR(Ship * param_1, int param_2, int param_3, int param_4)

{
  char cVar1;
  bool bVar2;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 4) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 4) + 0x10))(0);
    if (cVar1 != '\0') {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) != '\0') {
        bVar2 = doDisableLADAR(param_1,0,0,0);
        return bVar2;
      }
      bVar2 = doEnableLADAR(param_1,0,0,0);
      return bVar2;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doActivatePDS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doActivatePDS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0xc) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))(0);
    if (cVar1 != '\0') {
      iVar3 = -1;
      SVar2 = 8;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) = 1;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDectivatePDS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDectivatePDS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0xc) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))(0);
    if (cVar1 != '\0') {
      iVar3 = -1;
      SVar2 = 9;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) = 0;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doTogglePDS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTogglePDS(Ship * param_1, int param_2, int param_3, int param_4)

{
  char cVar1;
  bool bVar2;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0xc) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))(0);
    if (cVar1 != '\0') {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0') {
        bVar2 = doDectivatePDS(param_1,0,0,0);
        return bVar2;
      }
      bVar2 = doActivatePDS(param_1,0,0,0);
      return bVar2;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doFireCM(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doFireCM(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  char cVar2;
  int iVar3;
  SoundEngine *this_;
  PresentationInterface *pPVar4;
  Stats *pSVar5;
  std::string abStack_74 [12];
  undefined4 uStack_68;
  std::string abStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  std::string abStack_40 [8];
  undefined4 uStack_38;
  Sound SVar6;
  int iVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c01c0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((*(int **)(*(int *)(param_1 + 0x40) + 8) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 8) + 0x10))(), cVar2 != '\0')) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    if ((0 < *(int *)(iVar7 + 0x68)) && (*(float *)(iVar7 + 0x6c) <= -1.0)) {
      iVar3 = *(int *)(iVar7 + 0x68) + -1;
      *(int *)(iVar7 + 0x68) = iVar3;
      if (0 < iVar3) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 8);
        iVar3 = ComponentInterfaceInstance::getEfficiencyPercent
                          (*(ComponentInterfaceInstance **)(iVar7 + 0xc));
        *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 8) + 0x6c) =
             (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
             *(float *)(*(int *)(iVar7 + 8) + 0x108);
      }
      pbVar1 = (std::string *)(param_1 + 0x238);
      ghidra::str::ctor(abStack_40,pbVar1);
      fStack_50 = (float)*(double *)(param_1 + 0x28);
      uStack_54 = *(undefined4 *)(param_1 + 0x20);
      uStack_58 = 0x4e050a;
      GameLogic::addCountermeasure();
      iVar7 = -1;
      SVar6 = 0x22;
      uStack_38 = 0x4e0514;
      this_ = ghidra::any_singleton();
      uStack_38 = 0x4e051b;
      (this_)->playSound(param_1, SVar6, iVar7);
      ghidra::str::ctor(abStack_40,pbVar1);
      // [seh] local_8 = 0;
      pPVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pPVar4)->addShake();
      uStack_38 = 0x4e056e;
      debugPrint("GAME","%s: Counter-measure fired");
      abStack_40[0] = (std::string)0x0;
      ghidra::str::assign(abStack_40,"cms_dropped",0xb);
      // [seh] local_8 = 1;
      pSVar5 = Singleton<Stats>::getInstance();
      // [seh] local_8 = 0xffffffff;
      (pSVar5)->addStat();
      fStack_50 = 7.16526e-39;
      ghidra::str::assign((std::string *)&stack0xffffffbc,"",0);
      // [seh] local_8 = 2;
      abStack_5c[0] = (std::string)0x0;
      uStack_68 = 0x4e0600;
      ghidra::str::assign(abStack_5c,"cms_dropped",0xb);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      abStack_74[0] = (std::string)0x0;
      ghidra::str::assign(abStack_74,"play",4);
      // [seh] local_8 = 0xffffffff;
      Analytics::logEvent();
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMainDrivePowerIncrease(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMainDrivePowerIncrease(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  char cVar2;
  SoundEngine *this_;
  Sound SVar3;
  int iVar4;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x10) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x10))(0);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
      *piVar1 = *piVar1 + 10;
      if (100 < *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) = 100;
      }
      iVar4 = -1;
      SVar3 = 8;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMainDrivePowerDecrease(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMainDrivePowerDecrease(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  char cVar2;
  SoundEngine *this_;
  Sound SVar3;
  int iVar4;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x10) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x10))(0);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
      *piVar1 = *piVar1 + -10;
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) < 10) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) = 10;
      }
      iVar4 = -1;
      SVar3 = 9;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPwrCurrentModulePowerIncrease(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPwrCurrentModulePowerIncrease(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  char cVar2;
  uint uVar3;
  SoundEngine *this_;
  uint uVar4;
  Sound SVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(iVar6 + uVar4 * 4);
      if (piVar1[4] == *(int *)(param_1 + 0x1e8)) {
        if (piVar1 == (int *)0x0) {
          return false;
        }
        cVar2 = (**(code **)(*piVar1 + 0x10))(0);
        if (cVar2 == '\0') {
          return false;
        }
        piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
        *piVar1 = *piVar1 + 10;
        if (100 < *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100)) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) = 100;
        }
        iVar6 = -1;
        SVar5 = 8;
        this_ = ghidra::any_singleton();
        (this_)->playSound(param_1, SVar5, iVar6);
        return true;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPwrCurrentModulePowerDecrease(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPwrCurrentModulePowerDecrease(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  char cVar2;
  uint uVar3;
  SoundEngine *this_;
  uint uVar4;
  Sound SVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(iVar6 + uVar4 * 4);
      if (piVar1[4] == *(int *)(param_1 + 0x1e8)) {
        if (piVar1 == (int *)0x0) {
          return false;
        }
        cVar2 = (**(code **)(*piVar1 + 0x10))(0);
        if (cVar2 == '\0') {
          return false;
        }
        piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
        *piVar1 = *piVar1 + -10;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) < 10) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100) = 10;
        }
        iVar6 = -1;
        SVar5 = 9;
        this_ = ghidra::any_singleton();
        (this_)->playSound(param_1, SVar5, iVar6);
        return true;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngConnectCurrentModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngConnectCurrentModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  uint uVar1;
  SoundEngine *pSVar2;
  uint uVar3;
  LogSystem *this_00;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar3 = 0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2;
    if (uVar1 != 0) {
      do {
        this_ = *(ShipModule **)(iVar6 + uVar3 * 4);
        if (*(int *)((char *)this_ + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (this_ == (ShipModule *)0x0) {
            return false;
          }
          if ((*(int *)(*(int *)((char *)this_ + 8) + 4) == 1) && (*(int *)(param_1 + 0xd4) == 3)) {
            iVar6 = -1;
            SVar5 = 10;
            pSVar4 = param_1;
            pSVar2 = ghidra::any_singleton();
            (pSVar2)->playSound(pSVar4, SVar5, iVar6);
            LogSystem::addLogLine
                      (this_00,*(LogPriority *)(param_1 + 0x224),&DAT_00000002,
                       "Cannot start reactor when docked.");
            return false;
          }
          iVar6 = -1;
          SVar5 = 8;
          pSVar4 = param_1;
          pSVar2 = ghidra::any_singleton();
          (pSVar2)->playSound(pSVar4, SVar5, iVar6);
          (this_)->connect(param_1);
          return true;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngDisconnectCurrentModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngDisconnectCurrentModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  uint uVar1;
  SoundEngine *this_00;
  uint uVar2;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar2 = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar5 >> 2;
    if (uVar1 != 0) {
      do {
        this_ = *(ShipModule **)(iVar5 + uVar2 * 4);
        if (*(int *)((char *)this_ + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (this_ == (ShipModule *)0x0) {
            return false;
          }
          iVar5 = -1;
          SVar4 = 9;
          pSVar3 = param_1;
          this_00 = ghidra::any_singleton();
          (this_00)->playSound(pSVar3, SVar4, iVar5);
          (this_)->disconnect(param_1);
          return true;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngOpenCurrentModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngOpenCurrentModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  uint uVar2;
  SoundEngine *this_;
  uint uVar3;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar3 = 0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2;
    if (uVar2 != 0) {
      do {
        iVar1 = *(int *)(iVar6 + uVar3 * 4);
        if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (iVar1 == 0) {
            return false;
          }
          iVar6 = -1;
          SVar5 = 8;
          pSVar4 = param_1;
          this_ = ghidra::any_singleton();
          (this_)->playSound(pSVar4, SVar5, iVar6);
          *(undefined1 *)(iVar1 + 0x1d) = 1;
          *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1e4);
          *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
          return true;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngCloseCurrentModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngCloseCurrentModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  iVar3 = -1;
  SVar2 = 9;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngRepairCurrentComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngRepairCurrentComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  uint uVar2;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  
  if ((99 < *(int *)(param_1 + 0x1dc)) &&
     (iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + -400 +
                      *(int *)(param_1 + 0x1dc) * 4), iVar5 != 0)) {
    if (*(float *)(param_1 + 0x154) <= 0.0) {
      *(int *)(param_1 + 0x158) = iVar5;
      *(undefined4 *)(param_1 + 0x154) = 0x40800000;
    }
    iVar5 = -1;
    SVar4 = 8;
    pSVar3 = param_1;
    pSVar1 = ghidra::any_singleton();
    (pSVar1)->playSound(pSVar3, SVar4, iVar5);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar5 = uVar2 + 1;
    SVar4 = 0x18;
    pSVar1 = ghidra::any_singleton();
    (pSVar1)->playSound(param_1, SVar4, iVar5);
    return true;
  }
  iVar5 = -1;
  SVar4 = 10;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar4, iVar5);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleMapMode(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleMapMode(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Sound SVar1;
  
  if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    return false;
  }
  if (param_2 == 0) {
    if (PresentationData::m_mapZoomLevel == 0) {
      PresentationData::m_mapZoomLevel = 2;
      SVar1 = 9;
    }
    else {
      PresentationData::m_mapZoomLevel = 0;
      SVar1 = 8;
    }
  }
  else if (PresentationData::m_tabletMapZoomLevel == 0) {
    SVar1 = 9;
    PresentationData::m_tabletMapZoomLevel = 3;
  }
  else {
    SVar1 = 8;
    PresentationData::m_tabletMapZoomLevel = 0;
  }
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTogglePwrCurrentModuleEmcon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTogglePwrCurrentModuleEmcon(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  int iVar2;
  SystemManager *this_;
  uint uVar3;
  ShipModule *pSVar4;
  SoundEngine *this_00;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x1e8);
  if (iVar2 == -1) {
    return false;
  }
  this_ = *(SystemManager **)(param_1 + 0x40);
  uVar3 = 0;
  uVar6 = *(int *)((char *)this_ + 0x40) - *(int *)((char *)this_ + 0x3c) >> 2;
  if (uVar6 != 0) {
    do {
      iVar5 = *(int *)(*(int *)((char *)this_ + 0x3c) + uVar3 * 4);
      if (*(int *)(iVar5 + 0x10) == iVar2) goto LAB_004e0b54;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  iVar5 = 0;
LAB_004e0b54:
  cVar1 = *(char *)(iVar5 + 0x14);
  pSVar4 = (this_)->getModule(iVar2);
  pSVar4[0x14] = (ShipModule)(cVar1 == '\0');
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(param_1, (cVar1 != '\0') + 8, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTogglePwrCurrentModulePower(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTogglePwrCurrentModulePower(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  uint uVar1;
  int iVar2;
  SoundEngine *pSVar3;
  uint uVar4;
  ShipModule *this_;
  Sound SVar5;
  
  if (*(int *)(param_1 + 0x1e8) == -1) {
    return false;
  }
  uVar4 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar2 >> 2;
  if (uVar1 != 0) {
    do {
      this_ = *(ShipModule **)(iVar2 + uVar4 * 4);
      if (*(int *)((char *)this_ + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e0bdf;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  this_ = (ShipModule *)0x0;
LAB_004e0bdf:
  if (((char *)this_)[99] == (byte)0x0) {
    iVar2 = 0;
    do {
      if (this_[iVar2 + 0x1e] == (byte)0x0) goto LAB_004e0c2d;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (((char *)this_)[0x1c] != (byte)0x0) {
LAB_004e0c2d:
      iVar2 = -1;
      SVar5 = 10;
      pSVar3 = ghidra::any_singleton();
      (pSVar3)->playSound(param_1, SVar5, iVar2);
      return false;
    }
    (this_)->connect(param_1);
    SVar5 = 8;
  }
  else {
    (this_)->disconnect(param_1);
    SVar5 = 9;
  }
  pSVar3 = ghidra::any_singleton();
  (pSVar3)->playSound(param_1, SVar5, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doPwrRaisePriority(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPwrRaisePriority(Ship * param_1, int param_2, int param_3, int param_4)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  AnimationFrames **ppAVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  std::string local_3c [8];
  undefined4 uStack_34;
  AnimationFrames *local_c;
  AnimationFrames *local_8;
  
  local_3c[0] = (std::string)0x0;
  ghidra::str::assign(local_3c,"",0);
  bVar6 = ShipData::checkPwrCanRaisePriority(param_1,0);
  if (bVar6) {
    iVar8 = *(int *)(param_1 + 0x40);
    uVar9 = 0;
    iVar2 = *(int *)(iVar8 + 0x3c);
    uVar10 = *(int *)(iVar8 + 0x40) - iVar2 >> 2;
    if (uVar10 != 0) {
      do {
        local_c = *(AnimationFrames **)(iVar2 + uVar9 * 4);
        if (*(int *)(local_c + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e0cc5;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    local_c = (AnimationFrames *)0x0;
LAB_004e0cc5:
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        if (*(AnimationFrames **)(iVar2 + uVar9 * 4) == local_c) {
          if (uVar9 == 0xffffffff) {
            return false;
          }
          pvVar3 = *(void **)(iVar8 + 0x40);
          local_8 = local_c;
          puVar7 = (undefined4 *)ghidra::lib::remove___x28_x29();
          pvVar4 = (void *)*puVar7;
          iVar8 = *(int *)(param_1 + 0x40);
          if (pvVar4 != pvVar3) {
            sVar11 = *(int *)(iVar8 + 0x40) - (int)pvVar3;
            uStack_34 = 0x4e0d20;
            memmove(pvVar4,pvVar3,sVar11);
            *(size_t *)(iVar8 + 0x40) = sVar11 + (int)pvVar4;
            iVar8 = *(int *)(param_1 + 0x40);
          }
          ppAVar5 = *(AnimationFrames ***)(iVar8 + 0x40);
          ppAVar1 = (AnimationFrames **)(*(int *)(iVar8 + 0x3c) + (uVar9 - 1) * 4);
          if (*(AnimationFrames ***)(iVar8 + 0x44) == ppAVar5) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar8 + 0x3c),ppAVar1,&local_8);
            *(uint *)(local_8 + 0x38) = uVar9 - 1;
            return true;
          }
          if (ppAVar1 != ppAVar5) {
            *ppAVar5 = ppAVar5[-1];
            *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
            sVar11 = (int)ppAVar5 + (-4 - (int)ppAVar1);
            uStack_34 = 0x4e0d7b;
            memmove((void *)((int)ppAVar5 - sVar11),ppAVar1,sVar11);
            *ppAVar1 = local_c;
            *(uint *)(local_c + 0x38) = uVar9 - 1;
            return true;
          }
          *ppAVar5 = local_c;
          *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
          *(uint *)(local_c + 0x38) = uVar9 - 1;
          return true;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPwrLowerPriority(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPwrLowerPriority(Ship * param_1, int param_2, int param_3, int param_4)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  AnimationFrames **ppAVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  std::string local_3c [8];
  undefined4 uStack_34;
  AnimationFrames *local_c;
  AnimationFrames *local_8;
  
  local_3c[0] = (std::string)0x0;
  ghidra::str::assign(local_3c,"",0);
  bVar6 = ShipData::checkPwrCanLowerPriority(param_1,0);
  if (bVar6) {
    iVar8 = *(int *)(param_1 + 0x40);
    uVar9 = 0;
    iVar2 = *(int *)(iVar8 + 0x3c);
    uVar10 = *(int *)(iVar8 + 0x40) - iVar2 >> 2;
    if (uVar10 != 0) {
      do {
        local_c = *(AnimationFrames **)(iVar2 + uVar9 * 4);
        if (*(int *)(local_c + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e0e25;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    local_c = (AnimationFrames *)0x0;
LAB_004e0e25:
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        if (*(AnimationFrames **)(iVar2 + uVar9 * 4) == local_c) {
          if (uVar9 == 0xffffffff) {
            return false;
          }
          pvVar3 = *(void **)(iVar8 + 0x40);
          local_8 = local_c;
          puVar7 = (undefined4 *)ghidra::lib::remove___x28_x29();
          pvVar4 = (void *)*puVar7;
          iVar8 = *(int *)(param_1 + 0x40);
          if (pvVar4 != pvVar3) {
            sVar11 = *(int *)(iVar8 + 0x40) - (int)pvVar3;
            uStack_34 = 0x4e0e80;
            memmove(pvVar4,pvVar3,sVar11);
            *(size_t *)(iVar8 + 0x40) = sVar11 + (int)pvVar4;
            iVar8 = *(int *)(param_1 + 0x40);
          }
          ppAVar5 = *(AnimationFrames ***)(iVar8 + 0x40);
          ppAVar1 = (AnimationFrames **)(*(int *)(iVar8 + 0x3c) + (uVar9 + 1) * 4);
          if (*(AnimationFrames ***)(iVar8 + 0x44) == ppAVar5) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar8 + 0x3c),ppAVar1,&local_8);
            *(uint *)(local_8 + 0x38) = uVar9 + 1;
            return true;
          }
          if (ppAVar1 != ppAVar5) {
            *ppAVar5 = ppAVar5[-1];
            *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
            sVar11 = (int)ppAVar5 + (-4 - (int)ppAVar1);
            uStack_34 = 0x4e0edb;
            memmove((void *)((int)ppAVar5 - sVar11),ppAVar1,sVar11);
            *ppAVar1 = local_c;
            *(uint *)(local_c + 0x38) = uVar9 + 1;
            return true;
          }
          *ppAVar5 = local_c;
          *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
          *(uint *)(local_c + 0x38) = uVar9 + 1;
          return true;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPwrSelectModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPwrSelectModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  int iVar1;
  
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, (param_2 == -1) + 8, -1);
  iVar1 = -1;
  if (*(int *)(param_1 + 0x1e8) != param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x1e8) = iVar1;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngSelectModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngSelectModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x1e4) != param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x1e4) = iVar1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, (iVar1 == -1) + 8, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngMoveComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngMoveComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  std::string bVar3;
  char cVar4;
  uint uVar5;
  SoundEngine *pSVar6;
  NetworkServer *pNVar7;
  FlagManager *pFVar8;
  int *piVar9;
  GameLogic *pGVar10;
  uint uVar11;
  std::string abStack_48 [16];
  undefined4 uStack_38;
  Sound SVar12;
  char *pcVar13;
  int iVar14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c01f8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uVar11 = 0;
  piVar9 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar9 >> 2;
  if (uVar5 != 0) {
    do {
      piVar1 = (int *)*piVar9;
      if (piVar1[4] == *(int *)(param_1 + 0x1e4)) {
        if (piVar1 != (int *)0x0) {
          bVar3 = (std::string)(**(code **)(*piVar1 + 0x10))();
          if (param_2 < 100) {
            piVar9 = (int *)(piVar1[3] + (param_2 + 1) * 4);
            iVar14 = *(int *)(piVar1[3] + 4 + param_3 * 4);
            iVar2 = *piVar9;
            if (iVar2 == 0) {
              pcVar13 = "Invalid component to be dragged.";
              goto LAB_004e0fe9;
            }
            if (*(int *)(*(int *)(iVar2 + 4) + 0x80) != *(int *)(*(int *)(iVar14 + 4) + 0x80)) {
              pcVar13 = "Dragging component to an invalid slot.";
              goto LAB_004e0fe9;
            }
            *piVar9 = 0;
            *(undefined4 *)(piVar1[3] + 4 + param_3 * 4) = 0;
            pGVar10 = g_gameLogic;
            *(int *)(piVar1[3] + 4 + param_2 * 4) = iVar14;
            if (pGVar10[0x70] != (byte)0x0) {
              ghidra::str::ctor(abStack_48,(std::string *)(param_1 + 0x238));
              // [seh] local_8 = 0;
              pNVar7 = ghidra::any_singleton();
              // [seh] local_8 = 0xffffffff;
              (pNVar7)->addOrRemoveComponent();
              pGVar10 = g_gameLogic;
            }
            *(int *)(piVar1[3] + 4 + param_3 * 4) = iVar2;
            if (pGVar10[0x70] != (byte)0x0) {
              ghidra::str::ctor(abStack_48,(std::string *)(param_1 + 0x238));
              // [seh] local_8 = 1;
              pNVar7 = ghidra::any_singleton();
              // [seh] local_8 = 0xffffffff;
              (pNVar7)->addOrRemoveComponent();
            }
            debugPrint("DETAIL","Moved a component inside the module.");
            iVar14 = -1;
            SVar12 = 8;
            uStack_38 = 0x4e113a;
            pSVar6 = ghidra::any_singleton();
            uStack_38 = 0x4e1141;
            (pSVar6)->playSound(param_1, SVar12, iVar14);
          }
          if (*(int *)(g_gameData + 0xcc) == 0) {
            // [seh] ExceptionList = local_10;
            return false;
          }
          if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) {
            // [seh] ExceptionList = local_10;
            return false;
          }
          cVar4 = (**(code **)(*piVar1 + 0x10))();
          if (cVar4 == '\0') {
            // [seh] ExceptionList = local_10;
            return false;
          }
          if (bVar3 != (std::string)0x0) {
            // [seh] ExceptionList = local_10;
            return false;
          }
          uStack_38 = 0;
          abStack_48[0] = bVar3;
          ghidra::str::assign(abStack_48,"repaired_module",0xf);
          // [seh] local_8 = 2;
          pFVar8 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          (pFVar8)->setFlag();
          // [seh] ExceptionList = local_10;
          return false;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar11 < uVar5);
  }
  pcVar13 = "WARNING: No selected component or module for some reason.";
LAB_004e0fe9:
  debugPrint("DETAIL",pcVar13);
  iVar14 = -1;
  SVar12 = 10;
  uStack_38 = 0x4e1000;
  pSVar6 = ghidra::any_singleton();
  uStack_38 = 0x4e1007;
  (pSVar6)->playSound(param_1, SVar12, iVar14);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngUnmountComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngUnmountComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  AnimationFrames **ppAVar2;
  float *pfVar3;
  ShipModule *pSVar4;
  AnimationFrames **ppAVar5;
  SoundEngine *pSVar6;
  FlagManager *pFVar7;
  NetworkServer *pNVar8;
  std::string local_3c [4];
  undefined4 uStack_38;
  Ship *pSVar9;
  Sound SVar10;
  int iVar11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0238;
  // [seh] local_10 = ExceptionList;
  if (param_2 == -1) {
    return false;
  }
  // [seh] ExceptionList = &local_10;
  if (param_2 < 100) {
    pSVar4 = (*(SystemManager **)(param_1 + 0x40))->getModule(*(int *)(param_1 + 0x1e4))
    ;
    if (*(int *)(*(int *)(pSVar4 + 0xc) + 4 + param_2 * 4) == 0) {
      debugPrint("GAME","%s: no component found at offset %d");
      iVar11 = -1;
      SVar10 = 10;
      pSVar9 = param_1;
      pSVar6 = ghidra::any_singleton();
      (pSVar6)->playSound(pSVar9, SVar10, iVar11);
    }
    else {
      uStack_38 = 0x4e13af;
      debugPrint("GAME","%s: Unmounting addon \'%s\' from module \'%s\'");
      iVar11 = *(int *)(param_1 + 0x1f8);
      ppAVar5 = (AnimationFrames **)(*(int *)(pSVar4 + 0xc) + param_2 * 4 + 4);
      ppAVar2 = *(AnimationFrames ***)(iVar11 + 0x48);
      if (*(AnimationFrames ***)(iVar11 + 0x4c) == ppAVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar11 + 0x44),ppAVar2,ppAVar5);
      }
      else {
        *ppAVar2 = *ppAVar5;
        *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + 4;
      }
      iVar11 = -1;
      SVar10 = 8;
      pSVar9 = param_1;
      pSVar6 = ghidra::any_singleton();
      (pSVar6)->playSound(pSVar9, SVar10, iVar11);
      if ((((*(int *)(g_gameData + 0xcc) != 0) &&
           (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
          (pfVar3 = *(float **)(*(int *)(pSVar4 + 0xc) + 4 + param_2 * 4), pfVar3 != (float *)0x0))
         && (*pfVar3 <= (float)*(int *)((int)pfVar3[1] + 0x14) &&
             (float)*(int *)((int)pfVar3[1] + 0x14) != *pfVar3)) {
        local_3c[0] = (std::string)0x0;
        ghidra::str::assign(local_3c,"removed_damaged_component",0x19);
        // [seh] local_8 = 1;
        pFVar7 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar7)->setFlag();
      }
      *(undefined4 *)(*(int *)(pSVar4 + 0xc) + 4 + param_2 * 4) = 0;
    }
    if (g_gameLogic[0x70] == (byte)0x0) {
      // [seh] ExceptionList = local_10;
      return true;
    }
    ghidra::str::ctor
              ((std::string *)&stack0xffffffc0,(std::string *)(param_1 + 0x238));
    // [seh] local_8 = 2;
  }
  else {
    iVar11 = param_2 + -100;
    pSVar4 = (*(SystemManager **)(param_1 + 0x40))->getModule(*(int *)(param_1 + 0x1e4))
    ;
    if (*(int *)(iVar11 * 4 + 0x54 + *(int *)(pSVar4 + 0xc)) == 0) {
      debugPrint("GAME","%s: no addon found at offset %d");
      SVar10 = 10;
    }
    else {
      uStack_38 = 0x4e129f;
      debugPrint("GAME","%s: Unmounting addon \'%s\' from module \'%s\'");
      ppAVar5 = (AnimationFrames **)(*(int *)(pSVar4 + 0xc) + iVar11 * 4 + 0x54);
      iVar1 = *(int *)(param_1 + 0x1f8);
      ppAVar2 = *(AnimationFrames ***)(iVar1 + 0x48);
      if (*(AnimationFrames ***)(iVar1 + 0x4c) == ppAVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar1 + 0x44),ppAVar2,ppAVar5);
      }
      else {
        *ppAVar2 = *ppAVar5;
        *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 4;
      }
      SVar10 = 8;
      *(undefined4 *)(iVar11 * 4 + 0x54 + *(int *)(pSVar4 + 0xc)) = 0;
    }
    iVar11 = -1;
    pSVar9 = param_1;
    pSVar6 = ghidra::any_singleton();
    (pSVar6)->playSound(pSVar9, SVar10, iVar11);
    if (g_gameLogic[0x70] == (byte)0x0) {
      // [seh] ExceptionList = local_10;
      return true;
    }
    ghidra::str::ctor
              ((std::string *)&stack0xffffffc0,(std::string *)(param_1 + 0x238));
    // [seh] local_8 = 0;
  }
  pNVar8 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pNVar8)->addOrRemoveComponent();
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngMountComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngMountComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xffffffa8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  int iVar3;
  AnimationFrames **ppAVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  AnimationFrames **ppAVar10;
  FlagManager *pFVar11;
  NetworkServer *pNVar12;
  SoundEngine *pSVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  std::string abStack_54 [8];
  undefined4 uStack_4c;
  Sound SVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  Ship *pSVar22;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0280;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uVar15 = 0;
  iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + param_3 * 4);
  piVar14 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar9 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar14 >> 2;
  if (uVar9 != 0) {
    do {
      piVar16 = (int *)*piVar14;
      if (piVar16[4] == *(int *)(param_1 + 0x1e4)) goto LAB_004e1531;
      uVar15 = uVar15 + 1;
      piVar14 = piVar14 + 1;
    } while (uVar15 < uVar9);
  }
  piVar16 = (int *)0x0;
LAB_004e1531:
  pSVar22 = (Ship *)0x0;
  cVar7 = (**(code **)(*piVar16 + 0x10))();
  if (iVar21 == 0) {
    pcVar19 = "WARNING: No selected component or module for some reason.";
  }
  else {
    iVar20 = *(int *)(iVar21 + 4);
    iVar1 = *(int *)(iVar20 + 0x80);
    if ((iVar1 == 10) || (iVar1 == 0xb)) {
      if (((int *)piVar16[3])[param_2 + 0x15] == 0) {
        if (*(int *)(*(int *)piVar16[3] + 0x4c) != *(int *)(iVar20 + 0x24)) {
          debugPrint("DETAIL","Invalid socket type.");
          soundError(pSVar22);
          // [seh] ExceptionList = local_10;
          return false;
        }
        soundHigh(pSVar22);
        *(int *)(piVar16[3] + 0x54 + param_2 * 4) = iVar21;
        ghidra::lib::remove___x28_x29();
        ghidra::lib::vector__erase((ghidra::vector *)(*(int *)(param_1 + 0x1f8) + 0x44));
        uStack_4c = 0x4e18a6;
        debugPrint("DETAIL","Addon \'%s\' added to %s.");
        if (g_gameLogic[0x70] == (byte)0x0) {
          // [seh] ExceptionList = local_10;
          return true;
        }
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 0x238));
        // [seh] local_8 = 0;
        pNVar12 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pNVar12)->addOrRemoveComponent();
        // [seh] ExceptionList = local_10;
        return true;
      }
      pcVar19 = "Addon exists.";
    }
    else {
      bVar17 = false;
      iVar2 = *(int *)piVar16[3];
      if (*(int *)(iVar2 + 0x4c) == *(int *)(iVar20 + 0x24)) {
        bVar17 = true;
      }
      else {
        iVar3 = ((int *)piVar16[3])[param_2 + 0x15];
        if (iVar3 != 0) {
          bVar17 = *(int *)(*(int *)(iVar3 + 4) + 0x28) == *(int *)(iVar20 + 0x24);
        }
      }
      bVar6 = false;
      if (iVar1 == **(int **)(*(int *)(iVar2 + 0x50) + param_2 * 4)) {
        bVar6 = bVar17;
      }
      if (bVar6) {
        if (*(int *)(piVar16[3] + 4 + param_2 * 4) != 0) {
          debugPrint("DETAIL","Component exists.");
          iVar20 = *(int *)(param_1 + 0x1f8);
          ppAVar10 = (AnimationFrames **)(piVar16[3] + param_2 * 4 + 4);
          ppAVar4 = *(AnimationFrames ***)(iVar20 + 0x48);
          if (*(AnimationFrames ***)(iVar20 + 0x4c) == ppAVar4) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar20 + 0x44),ppAVar4,ppAVar10);
          }
          else {
            *ppAVar4 = *ppAVar10;
            *(int *)(iVar20 + 0x48) = *(int *)(iVar20 + 0x48) + 4;
          }
          soundHigh(pSVar22);
          if ((((*(int *)(g_gameData + 0xcc) != 0) &&
               (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
              (pfVar5 = *(float **)(piVar16[3] + 4 + param_2 * 4), pfVar5 != (float *)0x0)) &&
             (*pfVar5 <= (float)*(int *)((int)pfVar5[1] + 0x14) &&
              (float)*(int *)((int)pfVar5[1] + 0x14) != *pfVar5)) {
            abStack_54[0] = (std::string)0x0;
            ghidra::str::assign(abStack_54,"removed_damaged_component",0x19);
            // [seh] local_8 = 1;
            pFVar11 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            (pFVar11)->setFlag();
          }
          *(undefined4 *)(piVar16[3] + 4 + param_2 * 4) = 0;
        }
        iVar20 = -1;
        SVar18 = 8;
        pSVar22 = param_1;
        pSVar13 = ghidra::any_singleton();
        (pSVar13)->playSound(pSVar22, SVar18, iVar20);
        *(int *)(piVar16[3] + 4 + param_2 * 4) = iVar21;
        ghidra::lib::remove___x28_x29();
        ghidra::lib::vector__erase((ghidra::vector *)(*(int *)(param_1 + 0x1f8) + 0x44));
        uStack_4c = 0x4e1718;
        debugPrint("DETAIL","Component \'%s\' added to %s.");
        if (g_gameLogic[0x70] != (byte)0x0) {
          ghidra::str::ctor
                    ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 0x238));
          // [seh] local_8 = 2;
          pNVar12 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          (pNVar12)->addOrRemoveComponent();
        }
        if (((*(int *)(g_gameData + 0xcc) != 0) &&
            (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
           ((cVar8 = (**(code **)(*piVar16 + 0x10))(), cVar8 != '\0' && (cVar7 == '\0')))) {
          ghidra::str::assign((std::string *)&stack0xffffffa8,"repaired_module",0xf);
          // [seh] local_8 = 3;
          pFVar11 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          (pFVar11)->setFlag();
          // [seh] ExceptionList = local_10;
          return true;
        }
        // [seh] ExceptionList = local_10;
        return true;
      }
      pcVar19 = "Invalid socket type.";
    }
  }
  debugPrint("DETAIL",pcVar19);
  iVar21 = -1;
  SVar18 = 10;
  pSVar13 = ghidra::any_singleton();
  (pSVar13)->playSound(param_1, SVar18, iVar21);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSelectComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  undefined4 *puVar2;
  SoundEngine *this_;
  int *piVar3;
  GameData *pGVar4;
  
  pGVar4 = g_gameData;
  *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d4) = param_2;
  if ((*(int *)(param_1 + 0x1d4) != -1) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + *(int *)(param_1 + 0x1d4) * 4),
     iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 4);
    piVar3 = (int *)(iVar1 + 0x38);
    if (0xf < *(uint *)(iVar1 + 0x4c)) {
      piVar3 = (int *)*piVar3;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x50);
    if (0xf < *(uint *)(iVar1 + 100)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    debugPrint("DETAIL","Selected component \'%s %s\' in inventory",puVar2,piVar3);
    pGVar4 = g_gameData;
  }
  iVar1 = *(int *)(*(int *)(pGVar4 + 0xd0) + 0x1d4);
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, (uint)(iVar1 == -1) * 2 + 8, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngSelectComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngSelectComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ShipModule *pSVar5;
  int *piVar6;
  SoundEngine *this_;
  undefined4 *puVar7;
  int *piVar8;
  
  *(int *)(*(int *)(g_gameData + 0xd0) + 0x1dc) = param_2;
  iVar1 = *(int *)(param_1 + 0x1dc);
  if (iVar1 != -1) {
    if (iVar1 < 100) {
      pSVar5 = SystemManager::getModule
                         (*(SystemManager **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
      if (pSVar5 != (ShipModule *)0x0) {
        iVar2 = *(int *)(*(int *)(pSVar5 + 0xc) + 4 + iVar1 * 4);
        iVar3 = *(int *)(pSVar5 + 8);
        piVar6 = (int *)(iVar3 + 8);
        if (iVar2 == 0) {
          if (0xf < *(uint *)(iVar3 + 0x1c)) {
            piVar6 = (int *)*piVar6;
          }
          puVar4 = (undefined4 *)(iVar3 + 0x38);
          if (0xf < *(uint *)(iVar3 + 0x4c)) {
            puVar4 = (undefined4 *)*puVar4;
          }
          debugPrint("DETAIL","Selected empty slot \'%d\' in open module \'%s %s\'",iVar1,puVar4,
                     piVar6);
        }
        else {
          if (0xf < *(uint *)(iVar3 + 0x1c)) {
            piVar6 = (int *)*piVar6;
          }
          puVar4 = (undefined4 *)(iVar3 + 0x38);
          if (0xf < *(uint *)(iVar3 + 0x4c)) {
            puVar4 = (undefined4 *)*puVar4;
          }
          iVar2 = *(int *)(iVar2 + 4);
          piVar8 = (int *)(iVar2 + 0x38);
          if (0xf < *(uint *)(iVar2 + 0x4c)) {
            piVar8 = (int *)*piVar8;
          }
          puVar7 = (undefined4 *)(iVar2 + 0x50);
          if (0xf < *(uint *)(iVar2 + 100)) {
            puVar7 = (undefined4 *)*puVar7;
          }
          debugPrint("DETAIL","Selected component \'%s %s\' (slot %d) in open module \'%s %s\'",
                     puVar7,piVar8,iVar1,puVar4,piVar6);
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + -400 + iVar1 * 4);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 4);
        piVar6 = (int *)(iVar1 + 0x38);
        if (0xf < *(uint *)(iVar1 + 0x4c)) {
          piVar6 = (int *)*piVar6;
        }
        puVar4 = (undefined4 *)(iVar1 + 0x50);
        if (0xf < *(uint *)(iVar1 + 100)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        debugPrint("DETAIL","Selected component \'%s %s\' in tray",puVar4,piVar6);
      }
    }
  }
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1dc);
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, (uint)(iVar1 == -1) * 2 + 8, -1);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doEngToggleScrew(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngToggleScrew(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  uint uVar2;
  int iVar3;
  SoundEngine *this_;
  uint uVar4;
  Sound SVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar2 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar3 >> 2;
    if (uVar4 != 0) {
      do {
        iVar1 = *(int *)(iVar3 + uVar2 * 4);
        if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (iVar1 == 0) {
            return false;
          }
          if (*(char *)(iVar1 + 99) != '\0') {
            return false;
          }
          *(bool *)(iVar1 + param_2 + 0x1e) = *(char *)(iVar1 + param_2 + 0x1e) == '\0';
          iVar3 = rand();
          iVar3 = iVar3 % 3 + 1;
          SVar5 = 0x19;
          this_ = ghidra::any_singleton();
          (this_)->playSound(param_1, SVar5, iVar3);
          return true;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doEngToggleShield(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doEngToggleShield(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SoundEngine *this_;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar4 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar2 >> 2;
    if (uVar5 != 0) {
      do {
        iVar3 = *(int *)(iVar2 + uVar4 * 4);
        if (*(int *)(iVar3 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (iVar3 == 0) {
            return false;
          }
          if (*(char *)(iVar3 + 99) != '\0') {
            return false;
          }
          cVar1 = *(char *)(iVar3 + 0x1c);
          this_ = ghidra::any_singleton();
          (this_)->playSound(param_1, (cVar1 != '\0') + 0x1a, -1);
          *(bool *)(iVar3 + 0x1c) = *(char *)(iVar3 + 0x1c) == '\0';
          return true;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doAlterServerSetting(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doAlterServerSetting(Ship * param_1, int param_2, int param_3, int param_4)

{
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doJmpSetJumpDestination(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJmpSetJumpDestination(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  GameLogic *this_;
  LogSystem *this_00;
  char cVar1;
  SoundEngine *this_01;
  undefined4 *puVar2;
  Quadrant QVar3;
  Sound SVar4;
  char *pcVar5;
  int iVar6;
  Ship *pSVar7;
  undefined1 auStack_14 [16];
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) {
    pSVar7 = (Ship *)0x0;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))();
    if (cVar1 != '\0') {
      this_ = *(GameLogic **)(param_1 + 0x1d0);
      if (*(GameLogic **)(param_1 + 0x50) == this_) {
        pcVar5 = "Sector already selected.";
      }
      else {
        if ((GameLogic *)**(undefined4 **)(param_1 + 0x24) != this_) {
          if (this_ == (GameLogic *)0xffffffff) {
            LogSystem::addLogLine
                      ((LogSystem *)0xffffffff,*(LogPriority *)(param_1 + 0x224),(char *)0x3,
                       "Select a cluster from cluster map first.");
            soundError(pSVar7);
            return false;
          }
          *(GameLogic **)(param_1 + 0x50) = this_;
          puVar2 = (undefined4 *)
                   GameLogic::calculateJumpDestination
                             (this_,(int)auStack_14,*(int *)(param_1 + 0x20));
          *(undefined4 *)(param_1 + 0x48) = *puVar2;
          *(undefined4 *)(param_1 + 0x4c) = puVar2[1];
          quadrantFor(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
          QVar3 = invertQuadrant((Quadrant)pSVar7);
          *(Quadrant *)(param_1 + 0x60) = QVar3;
          if (param_1[0x234] != (byte)0x0) {
            QVar3 = ((GameObject *)(param_1 + 8))->getQuadrant();
            this_00 = *(LogSystem **)(param_1 + 0x224);
            if (*(Quadrant *)(param_1 + 0x60) == QVar3) {
              LogSystem::addLogLine
                        (this_00,(LogPriority)this_00,&DAT_00000001,
                         "Jump destination set. In jump quadrant.");
            }
            else {
              LogSystem::addLogLine
                        (this_00,(LogPriority)this_00,&DAT_00000002,
                         "Jump destination set. Maneuver to quadrant %s.",
                         (&PTR_s_A_005e13d4)[*(Quadrant *)(param_1 + 0x60)]);
            }
          }
          *(undefined1 **)(param_1 + 0x5c) = &DAT_bf800000;
          soundHigh(pSVar7);
          return true;
        }
        pcVar5 = "Already in this_ sector.";
      }
      ((LogSystem *)this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x3, pcVar5);
      iVar6 = -1;
      SVar4 = 10;
      this_01 = ghidra::any_singleton();
      (this_01)->playSound(param_1, SVar4, iVar6);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJmpSpinUpJumpDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJmpSpinUpJumpDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffec[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  Quadrant QVar4;
  int iVar5;
  LogSystem *this_;
  GameLogic *this_00;
  char *pcVar6;
  Ship *pSVar7;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) {
    pSVar7 = (Ship *)0x0;
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))();
    if ((cVar2 != '\0') &&
       (((*(int *)(param_1 + 0xd4) != 3 ||
         ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))) &&
        (*(int *)(param_1 + 0x178) == 0)))) {
      if (*(int **)(*(int *)(param_1 + 0x40) + 0x14) == (int *)0x0) {
        pcVar6 = "No jump drive installed.";
        this_ = (LogSystem *)0x0;
      }
      else {
        cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))(0);
        if (cVar2 != '\0') {
          if (*(int *)(param_1 + 0x50) != -1) {
            puVar3 = (undefined4 *)
                     GameLogic::calculateJumpDestination
                               (this_00,(int)&stack0xffffffec,*(int *)(param_1 + 0x20));
            *(undefined4 *)(param_1 + 0x48) = *puVar3;
            *(undefined4 *)(param_1 + 0x4c) = puVar3[1];
            quadrantFor(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
            QVar4 = invertQuadrant((Quadrant)pSVar7);
            *(Quadrant *)(param_1 + 0x60) = QVar4;
          }
          iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
          iVar5 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)
                              (*(int *)(*(int *)(iVar1 + 4) + 0x14) + 0xc));
          *(float *)(param_1 + 0x58) =
               *(float *)(*(int *)(iVar1 + 8) + 0x108) * (((float)iVar5 / 100.0 - 1.0) * -1.0 + 1.0)
          ;
          soundHigh(pSVar7);
          return true;
        }
        pcVar6 = "Jump drive non-functional.";
        this_ = (LogSystem *)this_00;
      }
      (this_)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x3, pcVar6);
      soundError(pSVar7);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJmpDischargeJumpDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJmpDischargeJumpDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  char cVar1;
  LogSystem *pLVar2;
  LogSystem *extraout_ECX;
  char *pcVar3;
  Ship *pSVar4;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) {
    pSVar4 = (Ship *)0x0;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))();
    if ((cVar1 != '\0') &&
       (((*(int *)(param_1 + 0xd4) != 3 ||
         ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))) &&
        (*(int *)(param_1 + 0x178) == 0)))) {
      if (*(int **)(*(int *)(param_1 + 0x40) + 0x14) == (int *)0x0) {
        pcVar3 = "No jump drive installed.";
        pLVar2 = (LogSystem *)0x0;
      }
      else {
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))(0);
        pLVar2 = extraout_ECX;
        if (cVar1 == '\0') {
          pcVar3 = "Jump drive non-functional.";
        }
        else {
          if (*(float *)(param_1 + 0x58) == 0.0) {
            (param_1)->dischargeJumpDrive();
            return true;
          }
          pcVar3 = "Jump drive not spun up.";
        }
      }
      (pLVar2)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x3, pcVar3);
      soundError(pSVar4);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJmpCalculateJumpSolution(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJmpCalculateJumpSolution(Ship * param_1, int param_2, int param_3, int param_4)

{
  char cVar1;
  Quadrant QVar2;
  LogSystem *pLVar3;
  LogSystem *extraout_ECX;
  LogSystem *this;
  LogSystem *extraout_ECX_00;
  Quadrant extraout_EDX;
  float fVar4;
  char *pcVar5;
  Ship *pSVar6;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) {
    pSVar6 = (Ship *)0x0;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))();
    if ((cVar1 != '\0') &&
       (((*(int *)(param_1 + 0xd4) != 3 ||
         ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))) &&
        (*(int *)(param_1 + 0x178) == 0)))) {
      if (*(int **)(*(int *)(param_1 + 0x40) + 0x14) == (int *)0x0) {
        pcVar5 = "No jump drive installed.";
        pLVar3 = (LogSystem *)0x0;
      }
      else {
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))(0);
        pLVar3 = extraout_ECX;
        if (cVar1 == '\0') {
          pcVar5 = "Jump drive non-functional.";
        }
        else if (*(float *)(param_1 + 0x58) == 0.0) {
          if ((*(int *)(param_1 + 0x50) == -1) ||
             (fVar4 = *(float *)(param_1 + 0x5c), fVar4 != -1.0)) {
            pcVar5 = "Jump target not selected from sector map.";
          }
          else {
            QVar2 = ((GameObject *)(param_1 + 8))->getQuadrant();
            if (extraout_EDX != QVar2) {
              LogSystem::addLogLine
                        (this,*(LogPriority *)(param_1 + 0x224),(char *)0x3,
                         "Navigate to quadrant %s for calculation.",
                         (&PTR_s_Quadrant_A_005e104c)[extraout_EDX]);
              return false;
            }
            (param_1)->getSpeed();
            if (fVar4 <= 0.0) {
              *(undefined4 *)(param_1 + 0x5c) = 0;
              soundHigh(pSVar6);
              return true;
            }
            pcVar5 = "Cannot calculate solution while moving.";
            pLVar3 = extraout_ECX_00;
          }
        }
        else {
          pcVar5 = "Jump drive not spun up.";
        }
      }
      (pLVar3)->addLogLine(*(LogPriority *)(param_1 + 0x224), (char *)0x3, pcVar5);
      soundError(pSVar6);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJmpBeginJump(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJmpBeginJump(Ship * param_1, int param_2, int param_3, int param_4)

{
  char cVar1;
  Quadrant QVar2;
  PresentationInterface *pPVar3;
  std::string abStack_38 [4];
  undefined4 uStack_34;
  bool bVar4;
  int iVar5;
  Ship *pSVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0058;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (((((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0) &&
        (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(), cVar1 != '\0')
        ) && ((*(int *)(param_1 + 0xd4) != 3 ||
              ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))))) &&
      (*(int *)(param_1 + 0x178) == 0)) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    pSVar6 = (Ship *)0x0;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))();
    if ((((cVar1 != '\0') && (*(float *)(param_1 + 0x58) == 0.0)) &&
        (50.0 < *(float *)(param_1 + 0x5c) || *(float *)(param_1 + 0x5c) == 50.0)) &&
       (QVar2 = ((GameObject *)(param_1 + 8))->getQuadrant(),
       QVar2 == *(Quadrant *)(param_1 + 0x60))) {
      soundHigh(pSVar6);
      uStack_34 = 0x4e218e;
      debugPrint("GAME","Jumping from sector %d to sector %d");
      (param_1)->beginJump();
      iVar5 = -1;
      pPVar3 = ghidra::any_singleton();
      (pPVar3)->moveToCameraPos(iVar5, (float)pSVar6);
      bVar4 = true;
      pPVar3 = ghidra::any_singleton();
      (pPVar3)->switchJumpMode(bVar4);
      ghidra::str::ctor(abStack_38,(std::string *)(param_1 + 0x238));
      // [seh] local_8 = 0;
      pPVar3 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pPVar3)->addShake();
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doTutorialJump(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTutorialJump(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  float fVar2;
  FlagManager *pFVar3;
  PresentationInterface *pPVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  std::string local_40 [8];
  undefined4 uStack_38;
  Color3B local_13 [3];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c02ee;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_40[0] = (std::string)0x0;
  ghidra::str::assign(local_40,"",0);
  bVar1 = ShipData::checkCanJumpInTutorial(param_1);
  if (!bVar1) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  uStack_38 = 0x4e22ca;
  (param_1)->beginJump();
  puVar6 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar6 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      if (*(int *)*puVar6 == *(int *)(*(int *)(g_gameData + 0xcc) + 0xb0)) break;
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(g_gameData + 0x40));
  }
  uStack_38 = 0x4e230f;
  debugPrint("DETAIL","Tutorial jumping to sector \'%s\'");
  ghidra::str::assign((std::string *)&stack0xffffffbc,"tutorial_jumping",0x10);
  // [seh] local_8 = 0;
  pFVar3 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar3)->setFlag();
  ghidra::str::assign((std::string *)&stack0xffffffbc,"ready_to_jump_in_tutorial",0x19);
  // [seh] local_8 = 1;
  pFVar3 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar3)->setFlag();
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar4 = operator_new(0x418);
    // [seh] local_8 = 2;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar4)) PresentationInterface();
    // [seh] local_8 = 0xffffffff;
  }
  (ghidra::Singleton<void>::instance)->moveToCameraPos(-1, fVar2);
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar4 = operator_new(0x418);
    // [seh] local_8 = 3;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar4)) PresentationInterface();
    // [seh] local_8 = 0xffffffff;
  }
  pPVar4 = ghidra::Singleton<void>::instance;
  uStack_38 = 0x4e2424;
  puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_13,0x80,'\0',0x80);
  *(undefined2 *)(pPVar4 + 0x3cc) = *puVar5;
  pPVar4[0x3ce] = *(PresentationInterface *)(puVar5 + 1);
  bVar1 = cocos2d::Color3B::operator==((Color3B *)(pPVar4 + 0x3cf),(Color3B *)(pPVar4 + 0x3cc));
  if (!bVar1) {
    *(undefined4 *)(pPVar4 + 0x3c4) = 0;
    *(undefined4 *)(pPVar4 + 0x3c8) = 0x40000000;
    pPVar4[0x3c0] = (byte)0x1;
  }
  ghidra::str::ctor(local_40,(std::string *)(param_1 + 0x238));
  // [seh] local_8 = 4;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar4 = operator_new(0x418);
    // [seh] local_8 = CONCAT31(local_8._1_3_,5);
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar4)) PresentationInterface();
  }
  // [seh] local_8 = 0xffffffff;
  (ghidra::Singleton<void>::instance)->addShake();
  debugPrint("WORLD","Began tutorial-mode jump");
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTradeToMax(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTradeToMax(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  TradeEngine *this_;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0322;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  iVar1 = *(int *)(ghidra::Singleton<void>::instance + 0x11c);
  iVar2 = (ghidra::Singleton<void>::instance)->maxCanAffordForCurrentTrade(param_2);
  *(int *)(iVar1 + param_2 * 0x44 + 0x1c) = iVar2;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doPerformTrade(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPerformTrade(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *pSVar1;
  TradeEngine *this_;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar4 = -1;
  SVar3 = 0x2b;
  pSVar2 = param_1;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(pSVar2, SVar3, iVar4);
  iVar4 = -1;
  SVar3 = 0x2d;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar3, iVar4);
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
    // [seh] local_8 = 0xffffffff;
  }
  (ghidra::Singleton<void>::instance)->performTrade(param_2, (TextEngine *)0x0);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCancelTrade(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCancelTrade(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  TradeEngine *this_;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  iVar1 = *(int *)(ghidra::Singleton<void>::instance + 0x11c);
  *(undefined4 *)(iVar1 + 4 + param_2 * 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x18 + param_2 * 0x44) = 0xffffffff;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceBackToMenu(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceBackToMenu(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  TradeEngine *this_00;
  Sound SVar1;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar2 = -1;
  SVar1 = 0x2c;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_00 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_00)) TradeEngine();
  }
  *(undefined4 *)(ghidra::Singleton<void>::instance + 0xcc) = 0;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceGetLicense(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceGetLicense(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *pSVar2;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->performPurchaseLicense();
  iVar5 = -1;
  if (bVar1) {
    SVar4 = 0x2b;
    pSVar3 = param_1;
    pSVar2 = ghidra::any_singleton();
    (pSVar2)->playSound(pSVar3, SVar4, iVar5);
    SVar4 = 0x2d;
  }
  else {
    SVar4 = 0x2c;
  }
  iVar5 = -1;
  pSVar2 = ghidra::any_singleton();
  (pSVar2)->playSound(param_1, SVar4, iVar5);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceTakeLoan(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceTakeLoan(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  TradeEngine *this_00;
  Sound SVar1;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar2 = -1;
  SVar1 = 0x2b;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_00 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_00)) TradeEngine();
    // [seh] local_8 = 0xffffffff;
  }
  (ghidra::Singleton<void>::instance)->takeLoan();
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceRepayLoan(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceRepayLoan(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  SoundEngine *pSVar2;
  TradeEngine *this_;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Sound SVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0352;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,"",0);
  bVar1 = ShipData::checkCommerceTermRepaymentValid(param_1,0);
  iVar4 = -1;
  if (!bVar1) {
    SVar3 = 0x2c;
    uStack_2c = 0x4e28b2;
    pSVar2 = ghidra::any_singleton();
    uStack_2c = 0x4e28b9;
    (pSVar2)->playSound(param_1, SVar3, iVar4);
    // [seh] ExceptionList = local_10;
    return false;
  }
  SVar3 = 0x2b;
  uStack_2c = 0x4e28d3;
  pSVar2 = ghidra::any_singleton();
  uStack_2c = 0x4e28da;
  (pSVar2)->playSound(param_1, SVar3, iVar4);
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
    // [seh] local_8 = 0xffffffff;
  }
  (ghidra::Singleton<void>::instance)->repayLoan();
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceTakeContract(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceTakeContract(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  TradeEngine *pTVar2;
  SoundEngine *pSVar3;
  Stats *this_;
  std::string local_6c [12];
  undefined4 uStack_60;
  std::string local_54 [12];
  undefined4 uStack_48;
  std::string local_38 [8];
  undefined4 uStack_30;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c03bb;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    pTVar2 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->canTakeContract();
  if (bVar1) {
    iVar6 = -1;
    SVar5 = 0x2b;
    uStack_30 = 0x4e29b0;
    pSVar4 = param_1;
    pSVar3 = ghidra::any_singleton();
    uStack_30 = 0x4e29b7;
    (pSVar3)->playSound(pSVar4, SVar5, iVar6);
    iVar6 = -1;
    SVar5 = 0x2d;
    uStack_30 = 0x4e29c3;
    pSVar3 = ghidra::any_singleton();
    uStack_30 = 0x4e29ca;
    (pSVar3)->playSound(param_1, SVar5, iVar6);
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    bVar1 = (ghidra::Singleton<void>::instance)->takeContract();
    if (bVar1) {
      local_38[0] = (std::string)0x0;
      ghidra::str::assign(local_38,"contracts_taken",0xf);
      // [seh] local_8 = 2;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_ = operator_new(0x58);
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        Singleton<Stats>::instance = (Stats *)new ((void *)(this_)) Stats();
      }
      // [seh] local_8 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      uStack_48 = 0x4e2a93;
      ghidra::str::assign((std::string *)&stack0xffffffc4,"",0);
      // [seh] local_8 = 4;
      local_54[0] = (std::string)0x0;
      uStack_60 = 0x4e2abf;
      ghidra::str::assign(local_54,"contracts_taken",0xf);
      // [seh] local_8 = CONCAT31(local_8._1_3_,5);
      local_6c[0] = (std::string)0x0;
      ghidra::str::assign(local_6c,"commerce",8);
      // [seh] local_8 = 0xffffffff;
      Analytics::logEvent();
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceDeliverContract(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceDeliverContract(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  TradeEngine *pTVar2;
  SoundEngine *pSVar3;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0404;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    pTVar2 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->canDeliverContract();
  if (bVar1) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    bVar1 = (ghidra::Singleton<void>::instance)->deliverContract();
    if (bVar1) {
      iVar6 = -1;
      SVar5 = 0x2a;
      pSVar4 = param_1;
      pSVar3 = ghidra::any_singleton();
      (pSVar3)->playSound(pSVar4, SVar5, iVar6);
      iVar6 = -1;
      SVar5 = 0x2d;
      pSVar3 = ghidra::any_singleton();
      (pSVar3)->playSound(param_1, SVar5, iVar6);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceTakePassenger(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceTakePassenger(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffb0[1] = {0};  // [pseudo] address of an unnamed stack slot
  PassengerInstance *this_;
  void *pvVar1;
  void *pvVar2;
  GameData *pGVar3;
  bool bVar4;
  TradeEngine *pTVar5;
  SoundEngine *pSVar6;
  undefined4 *puVar7;
  Stats *this_00;
  GameLogic *in_ECX;
  GameLogic *extraout_ECX;
  SaveHandler *this_01;
  size_t sVar8;
  std::string local_80 [12];
  undefined4 uStack_74;
  std::string local_68 [12];
  undefined4 uStack_5c;
  uint local_4c;
  Ship *pSVar9;
  Sound SVar10;
  int iVar11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c046b;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    pTVar5 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar5)) TradeEngine();
    in_ECX = extraout_ECX;
  }
  // [seh] local_8 = 0xffffffff;
  if ((((*(int *)(ghidra::Singleton<void>::instance + 0xcc) == 4) &&
       (*(int *)(ghidra::Singleton<void>::instance + 0xd8) != -1)) &&
      (*(char *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe0) == '\0')) &&
     (bVar4 = (in_ECX)->hasPassenger(), !bVar4)) {
    iVar11 = -1;
    SVar10 = 0x2b;
    pSVar9 = param_1;
    pSVar6 = ghidra::any_singleton();
    (pSVar6)->playSound(pSVar9, SVar10, iVar11);
    iVar11 = -1;
    SVar10 = 0x2d;
    pSVar6 = ghidra::any_singleton();
    (pSVar6)->playSound(param_1, SVar10, iVar11);
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      pTVar5 = operator_new(300);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar5)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    pTVar5 = ghidra::Singleton<void>::instance;
    iVar11 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
    this_ = *(PassengerInstance **)
            (*(int *)(iVar11 + 0x408) + *(int *)(ghidra::Singleton<void>::instance + 0xd8) * 4);
    if (this_ != (PassengerInstance *)0x0) {
      (this_)->pickup();
      pvVar1 = *(void **)(iVar11 + 0x40c);
      puVar7 = (undefined4 *)ghidra::lib::remove___x28_x29();
      pvVar2 = (void *)*puVar7;
      if (pvVar2 != pvVar1) {
        sVar8 = *(int *)(iVar11 + 0x40c) - (int)pvVar1;
        memmove(pvVar2,pvVar1,sVar8);
        *(size_t *)(iVar11 + 0x40c) = sVar8 + (int)pvVar2;
      }
      *(PassengerInstance **)(g_gameData + 0x128) = this_;
      local_4c = 0x4e2dbb;
      debugPrint("WORLD","Player took passenger %s from station %s, destination %s");
      pGVar3 = g_gameData;
      *(undefined4 *)(pTVar5 + 0xd8) = 0xffffffff;
      if (*(int *)(*(int *)(pGVar3 + 0xcc) + 0x70) == 2) {
        ghidra::any_singleton();
        (this_01)->saveGame();
      }
      local_4c = local_4c & 0xffffff00;
      ghidra::str::assign((std::string *)&local_4c,"passengers_taken",0x10);
      // [seh] local_8 = 2;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_00 = operator_new(0x58);
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
      }
      // [seh] local_8 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      uStack_5c = 0x4e2e6e;
      ghidra::str::assign((std::string *)&stack0xffffffb0,"",0);
      // [seh] local_8 = 4;
      local_68[0] = (std::string)0x0;
      uStack_74 = 0x4e2e9a;
      ghidra::str::assign(local_68,"passengers_taken",0x10);
      // [seh] local_8 = CONCAT31(local_8._1_3_,5);
      local_80[0] = (std::string)0x0;
      ghidra::str::assign(local_80,"commerce",8);
      // [seh] local_8 = 0xffffffff;
      Analytics::logEvent();
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommerceTakeBounty(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommerceTakeBounty(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  TradeEngine *pTVar2;
  SoundEngine *pSVar3;
  Stats *this_;
  std::string local_6c [12];
  undefined4 uStack_60;
  std::string local_54 [12];
  undefined4 uStack_48;
  std::string local_38 [8];
  undefined4 uStack_30;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c03bb;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    pTVar2 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  if ((*(int *)(ghidra::Singleton<void>::instance + 0xcc) == 5) &&
     (*(int *)(ghidra::Singleton<void>::instance + 0xe4) != -1)) {
    iVar6 = -1;
    SVar5 = 0x2b;
    uStack_30 = 0x4e2f7e;
    pSVar4 = param_1;
    pSVar3 = ghidra::any_singleton();
    uStack_30 = 0x4e2f85;
    (pSVar3)->playSound(pSVar4, SVar5, iVar6);
    iVar6 = -1;
    SVar5 = 0x2d;
    uStack_30 = 0x4e2f91;
    pSVar3 = ghidra::any_singleton();
    uStack_30 = 0x4e2f98;
    (pSVar3)->playSound(param_1, SVar5, iVar6);
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar2)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    bVar1 = (ghidra::Singleton<void>::instance)->performTakeBounty();
    if (bVar1) {
      local_38[0] = (std::string)0x0;
      ghidra::str::assign(local_38,"bounties_taken",0xe);
      // [seh] local_8 = 2;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_ = operator_new(0x58);
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        Singleton<Stats>::instance = (Stats *)new ((void *)(this_)) Stats();
      }
      // [seh] local_8 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      uStack_48 = 0x4e3065;
      ghidra::str::assign((std::string *)&stack0xffffffc4,"",0);
      // [seh] local_8 = 4;
      local_54[0] = (std::string)0x0;
      uStack_60 = 0x4e3091;
      ghidra::str::assign(local_54,"bounties_taken",0xe);
      // [seh] local_8 = CONCAT31(local_8._1_3_,5);
      local_6c[0] = (std::string)0x0;
      ghidra::str::assign(local_6c,"commerce",8);
      // [seh] local_8 = 0xffffffff;
      Analytics::logEvent();
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doViewWire(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doViewWire(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *pSVar1;
  TradeEngine *this_;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0352;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar4 = -1;
  SVar3 = 0x2b;
  pSVar2 = param_1;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(pSVar2, SVar3, iVar4);
  iVar4 = -1;
  SVar3 = 0x2c;
  pSVar2 = param_1;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(pSVar2, SVar3, iVar4);
  iVar4 = -1;
  SVar3 = 0x2d;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar3, iVar4);
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  ghidra::Singleton<void>::instance[0x128] = (byte)0x1;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doDock(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDock(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  float fVar2;
  Ship *pSVar3;
  SoundEngine *pSVar4;
  PresentationInterface *this_;
  bool extraout_CL;
  std::string local_3c [8];
  undefined4 uStack_34;
  Ship *pSVar5;
  Sound SVar6;
  int iVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c04aa;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_3c[0] = (std::string)0x0;
  ghidra::str::assign(local_3c,"",0);
  bVar1 = ShipData::checkCanBeginDock(param_1,0);
  if (!bVar1) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  pSVar3 = (*(Sector **)(param_1 + 0x24))->getSpaceStationClosestTo();
  iVar7 = -1;
  SVar6 = 8;
  uStack_34 = 0x4e3230;
  pSVar5 = param_1;
  pSVar4 = ghidra::any_singleton();
  uStack_34 = 0x4e3237;
  (pSVar4)->playSound(pSVar5, SVar6, iVar7);
  uStack_34 = 0x4e3252;
  debugPrint("GAME","Manually began docking procedure with %s");
  (param_1)->setSpeed(fVar2);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pSVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(pSVar3 + 0x30);
  ghidra::str::ctor(local_3c,(std::string *)(param_1 + 0x238));
  // [seh] local_8 = 0;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_ = operator_new(0x418);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(this_)) PresentationInterface();
  }
  // [seh] local_8 = 0xffffffff;
  (ghidra::Singleton<void>::instance)->addShake();
  iVar7 = -1;
  SVar6 = 0x29;
  uStack_34 = 0x4e32e3;
  pSVar5 = param_1;
  pSVar4 = ghidra::any_singleton();
  uStack_34 = 0x4e32ea;
  (pSVar4)->playSound(pSVar5, SVar6, iVar7);
  (param_1)->dockWith(pSVar3, extraout_CL);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doUndock(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doUndock(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  RoomObject *this_;
  int iVar1;
  bool bVar2;
  char *pcVar3;
  SoundEngine *this_00;
  PresentationInterface *pPVar4;
  bool extraout_CL;
  uint unaff_EDI;
  uint uVar5;
  Ship *pSVar6;
  Sound SVar7;
  int iVar8;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c04e2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar8 = -1;
  SVar7 = 8;
  pSVar6 = param_1;
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(pSVar6, SVar7, iVar8);
  (param_1)->undock(false);
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar4 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar4)) PresentationInterface();
    // [seh] local_8 = 0xffffffff;
  }
  pPVar4 = ghidra::Singleton<void>::instance;
  local_14 = 0;
  iVar8 = *(int *)(*(int *)(ghidra::Singleton<void>::instance + 0x2d4) + 0x90);
  if (*(int *)(*(int *)(ghidra::Singleton<void>::instance + 0x2d4) + 0x94) - iVar8 >> 2 != 0) {
    do {
      this_ = *(RoomObject **)(iVar8 + local_14 * 4);
      uVar5 = 0;
      iVar1 = *(int *)((char *)this_ + 0x398) - *(int *)((char *)this_ + 0x394) >> 0x1f;
      if ((*(int *)((char *)this_ + 0x398) - *(int *)((char *)this_ + 0x394)) / 0x50 + iVar1 != iVar1) {
        iVar8 = *(int *)(iVar8 + local_14 * 4);
        do {
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("weapons",7,pcVar3,unaff_EDI);
          if (bVar2) {
            if (uVar5 != *(uint *)((char *)this_ + 0x388)) {
              *(uint *)((char *)this_ + 0x388) = uVar5;
              (this_)->resetScreen(extraout_CL);
              if (*(char *)(*(int *)(*(int *)(this_ + *(int *)((char *)this_ + 0x388) * 4 + 0x624) + 0x180) +
                           0x59) == '\0') {
                if (g_gameLogic[0x73] != (byte)0x0) {
                  g_gameLogic[0x73] = (byte)0x0;
                }
              }
              else if (g_gameLogic[0x73] == (byte)0x0) {
                g_gameLogic[0x73] = (byte)0x1;
              }
            }
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((*(int *)(iVar8 + 0x398) - *(int *)(iVar8 + 0x394)) / 0x50));
      }
      local_14 = local_14 + 1;
      iVar8 = *(int *)(*(int *)(pPVar4 + 0x2d4) + 0x90);
    } while (local_14 < (uint)(*(int *)(*(int *)(pPVar4 + 0x2d4) + 0x94) - iVar8 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doBreakOrbit(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doBreakOrbit(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return false;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xe8) = 5;
  *(undefined4 *)(param_1 + 0xf4) = 0x40800000;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doChangeToStandardOrbit(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doChangeToStandardOrbit(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return false;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 0)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doChangeToHighOrbit(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doChangeToHighOrbit(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return false;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 2)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 2;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doChangeToPolarOrbit(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doChangeToPolarOrbit(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return false;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 1)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSpinUpWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSpinUpWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  SoundEngine *this_;
  LogSystem *this_00;
  uint uStack_28;
  Sound SVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))();
    if ((cVar1 != '\0') &&
       ((*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x62) == '\0' &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4)
         != 0)))) {
      uStack_28 = uStack_28 & 0xffffff00;
      ghidra::str::assign((std::string *)&uStack_28,"",0);
      bVar2 = ShipData::checkTubeSpinningUp(param_1,0);
      if (bVar2) {
        debugPrint("GAME","Unable to spin up.");
        uStack_28 = 0x4e371a;
        (this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
        return false;
      }
      iVar4 = -1;
      SVar3 = 5;
      *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x30) = *(int *)(param_1 + 0x1b4) + -1;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x62) = 1;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  debugPrint("GAME","Unable to spin up.");
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPowerDownWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPowerDownWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  char cVar2;
  SoundEngine *this_;
  Sound SVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if ((cVar2 != '\0') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4)
        != 0)) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x62) = 0;
      iVar4 = -1;
      SVar3 = 9;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                      *(int *)(param_1 + 0x1b4) * 4);
      *(undefined1 **)(iVar1 + 0x3c0) = &DAT_bf800000;
      *(undefined1 *)(iVar1 + 0x3bc) = 0;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar3, iVar4);
      return false;
    }
  }
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doFireWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doFireWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  Weapon *this;
  char cVar1;
  bool bVar2;
  Stats *pSVar3;
  SoundEngine *this_00;
  PresentationInterface *pPVar4;
  int extraout_ECX;
  std::string abStack_70 [12];
  undefined4 uStack_64;
  std::string abStack_58 [12];
  undefined4 uStack_4c;
  std::string abStack_3c [8];
  undefined4 uStack_34;
  Ship *pSVar5;
  Sound SVar6;
  int iVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0538;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))();
    if ((cVar1 != '\0') &&
       (this = *(Weapon **)
                (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4),
       this != (Weapon *)0x0)) {
      bVar2 = (this)->canFire();
      if ((bVar2) && (*(char *)(extraout_ECX + 0x3c4) == '\0')) {
        if (param_1[0x234] != (byte)0x0) {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x388) + 0x1b4);
          if (iVar7 == 4) {
            abStack_3c[0] = (std::string)0x0;
            ghidra::str::assign(abStack_3c,"probes_fired",0xc);
            // [seh] local_8 = 0;
            pSVar3 = Singleton<Stats>::getInstance();
            // [seh] local_8 = 0xffffffff;
            (pSVar3)->addStat();
            uStack_4c = 0x4e390f;
            ghidra::str::assign((std::string *)&stack0xffffffc0,"",0);
            // [seh] local_8 = 1;
            abStack_58[0] = (std::string)0x0;
            uStack_64 = 0x4e393b;
            ghidra::str::assign(abStack_58,"probes_fired",0xc);
            // [seh] local_8 = CONCAT31(local_8._1_3_,2);
            abStack_70[0] = (std::string)0x0;
            ghidra::str::assign(abStack_70,"play",4);
            // [seh] local_8 = 0xffffffff;
            Analytics::logEvent();
          }
          else if (iVar7 == 3) {
            abStack_3c[0] = (std::string)0x0;
            ghidra::str::assign(abStack_3c,"torps_fired",0xb);
            // [seh] local_8 = 3;
            pSVar3 = Singleton<Stats>::getInstance();
            // [seh] local_8 = 0xffffffff;
            (pSVar3)->addStat();
            uStack_4c = 0x4e39e1;
            ghidra::str::assign((std::string *)&stack0xffffffc0,"",0);
            // [seh] local_8 = 4;
            abStack_58[0] = (std::string)0x0;
            uStack_64 = 0x4e3a0d;
            ghidra::str::assign(abStack_58,"torps_fired",0xb);
            // [seh] local_8 = CONCAT31(local_8._1_3_,5);
            abStack_70[0] = (std::string)0x0;
            ghidra::str::assign(abStack_70,"play",4);
            // [seh] local_8 = 0xffffffff;
            Analytics::logEvent();
            *(int *)(g_gameLogic + 0x6c) = *(int *)(g_gameLogic + 0x6c) + 1;
          }
        }
        (param_1)->fireWeapon(*(int *)(param_1 + 0x1b4) + -1);
        iVar7 = -1;
        SVar6 = 6;
        uStack_34 = 0x4e3a60;
        pSVar5 = param_1;
        this_00 = ghidra::any_singleton();
        uStack_34 = 0x4e3a67;
        (this_00)->playSound(pSVar5, SVar6, iVar7);
        ghidra::str::ctor(abStack_3c,(std::string *)(param_1 + 0x238));
        // [seh] local_8 = 6;
        pPVar4 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pPVar4)->addShake();
        pSVar3 = Singleton<Stats>::getInstance();
        *(int *)(pSVar3 + 0x2c) = *(int *)(pSVar3 + 0x2c) + 1;
        // [seh] ExceptionList = local_10;
        return true;
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doUnlinkWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doUnlinkWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  char cVar2;
  Ship *pSVar3;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    pSVar3 = (Ship *)0x0;
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))();
    if ((cVar2 != '\0') &&
       ((iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                         *(int *)(param_1 + 0x1b4) * 4), iVar1 != 0 &&
        (*(char *)(iVar1 + 0x3c4) != '\0')))) {
      *(undefined1 *)(iVar1 + 0x3fc) = 0;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4) = 0;
      soundLow(pSVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doArmWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doArmWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  Weapon *this;
  char cVar1;
  Ship *pSVar2;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    pSVar2 = (Ship *)0x0;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))();
    if ((cVar1 != '\0') &&
       (((this = *(Weapon **)
                  (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4)
         , this != (Weapon *)0x0 && (((char *)this)[0x3c4] != (byte)0x0)) && (((char *)this)[0x3fc] != (byte)0x0))))
    {
      (this)->goActive();
      soundHigh(pSVar2);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisableWeapon(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisableWeapon(Ship * param_1, int param_2, int param_3, int param_4)

{
  Weapon *this;
  int iVar1;
  char cVar2;
  int *piVar3;
  Ship *unaff_EDI;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if ((cVar2 != '\0') &&
       (((this = *(Weapon **)
                  (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4)
         , this != (Weapon *)0x0 && (((char *)this)[0x3c4] != (byte)0x0)) && (((char *)this)[0x3fc] != (byte)0x0))))
    {
      (this)->unsetTarget();
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                      *(int *)(param_1 + 0x1b4) * 4);
      if (*(int *)(iVar1 + 0x3d0) == 2) {
        piVar3 = (int *)(iVar1 + 0x238);
        if (0xf < *(uint *)(iVar1 + 0x24c)) {
          piVar3 = (int *)*piVar3;
        }
        debugPrint("AI","%s: Going inactive.",piVar3);
        *(undefined4 *)(iVar1 + 0x3d0) = 1;
        *(undefined1 *)(iVar1 + 0x3c5) = 0;
      }
      soundLow(unaff_EDI);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSetWeaponTarget(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSetWeaponTarget(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  FlagManager *pFVar7;
  std::string *pbVar8;
  SoundEngine *this_;
  LogSystem *this_00;
  void *pvVar9;
  LogSystem *this_01;
  nothrow_t *pnVar10;
  int iVar11;
  undefined4 uStack_78;
  Ship *pSVar12;
  Sound SVar13;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c0588;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (((*(int *)(param_1 + 0x1b4) == -1) ||
      (*(int **)(*(int *)(param_1 + 0x40) + 0x20) == (int *)0x0)) ||
     (cVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(), cVar4 == '\0'))
  goto LAB_004e3d0e;
  iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
  iVar6 = *(int *)(iVar11 + 0x38 + *(int *)(param_1 + 0x1b4) * 4);
  iVar3 = *(int *)(g_gameData + 0xcc);
  if (iVar6 == 0) {
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x70) == 1)) {
      ((LogSystem *)0x0)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    }
    goto LAB_004e3d0e;
  }
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x70) == 1)) && (*(char *)(iVar6 + 0x3bc) == '\0')) {
    iVar6 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(iVar11 + 0xc));
    Weapon::getSpinUpPercent
              (*(Weapon **)
                (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4),
               (int)(((float)iVar6 / 100.0) * 0.5 *
                    *(float *)(*(int *)(*(int *)(*(int *)(iVar11 + 4) + 0x20) + 8) + 0x108)));
    (this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    goto LAB_004e3d0e;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_44,"[unknown]",9);
  // [seh] local_8 = 0;
  iVar11 = *(int *)(param_1 + 0x19c);
  if (iVar11 == 0) {
    if (*(int *)(param_1 + 0x1a4) == 0) {
      if ((*(float *)(param_1 + 0x1b8) != -9999.0) || (*(float *)(param_1 + 0x1bc) != -9999.0)) {
        iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                         *(int *)(param_1 + 0x1b4) * 4);
        *(undefined4 *)(iVar11 + 300) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(iVar11 + 0x130) = *(undefined4 *)(param_1 + 0x1bc);
        uStack_78 = 0x4e410e;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c);
        ghidra::lib::basic_string__operator_x3d((std::string *)local_44,pbVar8);
        goto LAB_004e401f;
      }
    }
    else {
      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                       *(int *)(param_1 + 0x1b4) * 4) + 0x38c) = *(int *)(param_1 + 0x1a4);
      ghidra::lib::basic_string__operator_x3d
                ((std::string *)local_44,*(std::string **)(param_1 + 0x1a4));
    }
  }
  else {
    if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
        && (iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                                     *(int *)(param_1 + 0x1b4) * 4) + 0x38c), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0x30) == 1)) {
      strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 1;
      uStack_78 = 0x4e3e72;
      ghidra::lib::transform___x28_x29();
      ghidra::str::ctor((std::string *)&uStack_78,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 2;
      pFVar7 = ghidra::any_singleton();
      // [seh] local_8._0_1_ = 1;
      (pFVar7)->setFlag();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      iVar11 = *(int *)(param_1 + 0x19c);
    }
    *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                      *(int *)(param_1 + 0x1b4) * 4) + 0x38c) =
         -(uint)(*(int *)(iVar11 + 0x130) != 0) & *(int *)(iVar11 + 0x130) + 8U;
    iVar11 = *(int *)(param_1 + 0x19c);
    fVar1 = *(float *)(iVar11 + 0x108);
    dVar2 = *(double *)(iVar11 + 0x18);
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                    *(int *)(param_1 + 0x1b4) * 4);
    *(float *)(iVar6 + 300) =
         (float)((double)*(float *)(iVar11 + 0x104) + *(double *)(iVar11 + 0x10));
    *(float *)(iVar6 + 0x130) = (float)((double)fVar1 + dVar2);
    ghidra::lib::basic_string__operator_x3d
              ((std::string *)local_44,(std::string *)(*(int *)(param_1 + 0x19c) + 0x48));
    if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
       && (*(int *)(*(int *)(param_1 + 0x19c) + 0x130) != 0)) {
      strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 3;
      uStack_78 = 0x4e3ff1;
      ghidra::lib::transform___x28_x29();
      ghidra::str::ctor((std::string *)&uStack_78,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 4;
      pFVar7 = ghidra::any_singleton();
      // [seh] local_8._0_1_ = 3;
      (pFVar7)->setFlag();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
LAB_004e401f:
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_004e4051;
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
  }
  iVar11 = -1;
  SVar13 = 8;
  pSVar12 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar12, SVar13, iVar11);
  Weapon::updateTarget
            (*(Weapon **)
              (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4));
  this_01 = *(LogSystem **)(param_1 + 0x1b4);
  iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + (int)this_01 * 4);
  if (*(int *)(iVar11 + 0x3d0) == 3) {
    *(undefined4 *)(iVar11 + 0x3d0) = 1;
    this_01 = *(LogSystem **)(param_1 + 0x1b4);
  }
  (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
  if (0xf < local_30) {
    pnVar10 = (nothrow_t *)(local_30 + 1);
    pvVar9 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_44[0] + -4);
      pnVar10 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
LAB_004e4051:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
LAB_004e3d0e:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar5 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// Ghidra: bool __cdecl ShipInterface::doRequestDockingPermission(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRequestDockingPermission(Ship * param_1, int param_2, int param_3, int param_4)

{
  SpaceStation *this;
  int iVar1;
  MetaGameAction **ppMVar2;
  DockingRequest *pDVar3;
  ghidra::vector *in_ECX;
  LogSystem *this_00;
  ghidra::vector *extraout_ECX;
  LogSystem *extraout_ECX_00;
  SpaceStation *pSVar4;
  MetaGameAction *local_c [2];
  
  if (((param_1 != (Ship *)0x0) &&
      (this = *(SpaceStation **)(param_1 + 0x17c), this != (SpaceStation *)0x0)) &&
     ((iVar1 = *(int *)(*(int *)((char *)this + 0x254) + 0x158), iVar1 == 1 ||
      ((iVar1 == 2 || (iVar1 == 3)))))) {
    if (*(int *)((char *)this + 0x3dc) != 0) {
      pDVar3 = (this)->getDockingRequest(param_1);
      if (pDVar3 != (DockingRequest *)0x0) {
        pSVar4 = this + 8;
        if (0xf < *(uint *)((char *)this + 0x1c)) {
          pSVar4 = *(SpaceStation **)pSVar4;
        }
        LogSystem::addLogLine
                  (this_00,*(LogPriority *)(param_1 + 0x224),&DAT_00000002,
                   "Docking permission `^denied`7 for %s",pSVar4);
        return false;
      }
      local_c[0] = operator_new(0xc);
      in_ECX = (ghidra::vector *)((char *)this + 0x3c4);
      *(Ship **)local_c[0] = param_1;
      *(undefined4 *)(local_c[0] + 4) = 0;
      *(undefined4 *)(local_c[0] + 8) = 0;
      ppMVar2 = *(MetaGameAction ***)((char *)this + 0x3c8);
      if (*(MetaGameAction ***)((char *)this + 0x3cc) == ppMVar2) {
        ghidra::lib::vector___Emplace_reallocate(in_ECX,ppMVar2,local_c);
        in_ECX = extraout_ECX;
      }
      else {
        *ppMVar2 = local_c[0];
        *(int *)((char *)this + 0x3c8) = *(int *)((char *)this + 0x3c8) + 4;
      }
      iVar1 = *(int *)((char *)this + 0x390);
      if (iVar1 == 0) {
        debugPrint("ERROR","Tried to add owed amount to station with no faction.");
        in_ECX = (ghidra::vector *)extraout_ECX_00;
      }
      else {
        *(float *)(iVar1 + 0xd0) = (float)*(int *)((char *)this + 0x3dc) + *(float *)(iVar1 + 0xd0);
      }
    }
    pSVar4 = this + 8;
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      pSVar4 = *(SpaceStation **)pSVar4;
    }
    LogSystem::addLogLine
              ((LogSystem *)in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,
               "Docking permission granted for %s",pSVar4);
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doRequestUndockingPermission(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRequestUndockingPermission(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffc8[1] = {0};  // [pseudo] address of an unnamed stack slot
  SpaceStation *this_;
  bool bVar1;
  FlagManager *pFVar2;
  SoundEngine *this_00;
  LogSystem *this_01;
  SaveHandler *this_02;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c05c0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x178) != 0)) &&
     ((iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158), iVar5 == 1 ||
      ((iVar5 == 2 || (iVar5 == 3)))))) {
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      local_34[0] = (std::string)0x0;
      ghidra::str::assign(local_34,"ready_to_disembark_station",0x1a);
      // [seh] local_8 = 0;
      pFVar2 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      bVar1 = (pFVar2)->flagSet();
      if (!bVar1) {
        // [seh] ExceptionList = local_10;
        return false;
      }
    }
    this_ = *(SpaceStation **)(param_1 + 0x178);
    iVar5 = -1;
    SVar4 = 0x2d;
    uStack_2c = 0x4e43d8;
    pSVar3 = param_1;
    this_00 = ghidra::any_singleton();
    uStack_2c = 0x4e43df;
    (this_00)->playSound(pSVar3, SVar4, iVar5);
    bVar1 = (this_)->requestUndockingClearance(param_1, false);
    if (bVar1) {
      uStack_2c = 0x4e4403;
      (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
      ghidra::any_singleton();
      (this_02)->saveGame();
      if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      {
        ghidra::str::assign((std::string *)&stack0xffffffc8,"cannot_board_vessel",0x13);
        // [seh] local_8 = 1;
        pFVar2 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar2)->setFlag();
      }
      // [seh] ExceptionList = local_10;
      return true;
    }
    uStack_2c = 0x4e448b;
    (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doRescindDockingPermission(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRescindDockingPermission(Ship * param_1, int param_2, int param_3, int param_4)

{
  SpaceStation *this;
  int iVar1;
  undefined4 uVar2;
  DockingRequest *pDVar3;
  undefined4 *puVar4;
  SpaceStation *pSVar5;
  LogSystem *in_ECX;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 local_c [8];
  
  if (((param_1 == (Ship *)0x0) ||
      (this = *(SpaceStation **)(param_1 + 0x17c), this == (SpaceStation *)0x0)) ||
     ((iVar1 = *(int *)(*(int *)((char *)this + 0x254) + 0x158), iVar1 != 1 &&
      ((iVar1 != 2 && (iVar1 != 3)))))) {
    return false;
  }
  if (*(int *)((char *)this + 0x3dc) != 0) {
    pDVar3 = (this)->getDockingRequest(param_1);
    if ((pDVar3 == (DockingRequest *)0x0) || (*(int *)(pDVar3 + 8) != 0)) {
      in_ECX = (LogSystem *)(extraout_ECX & 0xffffff00);
    }
    else {
      (this)->removeAmount(8);
      uVar2 = *(undefined4 *)((char *)this + 0x3c8);
      puVar4 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x3c4),uVar2);
      ghidra::lib::vector__erase((ghidra::vector *)((char *)this + 0x3c4),local_c,*puVar4,uVar2);
      operator_delete(pDVar3,(nothrow_t *)0xc);
      in_ECX = (LogSystem *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
    }
    pSVar5 = this + 8;
    if ((char)in_ECX == '\0') {
      if (0xf < *(uint *)((char *)this + 0x1c)) {
        pSVar5 = *(SpaceStation **)pSVar5;
      }
      LogSystem::addLogLine
                (in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000002,
                 "No docking permission found for %s",pSVar5);
      return false;
    }
  }
  pSVar5 = this + 8;
  if (0xf < *(uint *)((char *)this + 0x1c)) {
    pSVar5 = *(SpaceStation **)pSVar5;
  }
  LogSystem::addLogLine
            (in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,
             "Docking permission rescinded for %s",pSVar5);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doRescindUndockingPermission(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRescindUndockingPermission(Ship * param_1, int param_2, int param_3, int param_4)

{
  SpaceStation *this;
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  DockingRequest *pDVar4;
  undefined4 *puVar5;
  LogSystem *in_ECX;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  undefined1 local_c [8];
  
  if (((param_1 == (Ship *)0x0) ||
      (this = *(SpaceStation **)(param_1 + 0x178), this == (SpaceStation *)0x0)) ||
     ((iVar1 = *(int *)(*(int *)((char *)this + 0x254) + 0x158), iVar1 != 1 &&
      ((iVar1 != 2 && (iVar1 != 3)))))) {
    return false;
  }
  if (*(int *)((char *)this + 0x3dc) != 0) {
    pDVar4 = (this)->getDockingRequest(param_1);
    if ((pDVar4 == (DockingRequest *)0x0) || (*(int *)(pDVar4 + 8) != 2)) {
      bVar3 = false;
      in_ECX = extraout_ECX;
    }
    else {
      uVar2 = *(undefined4 *)((char *)this + 0x3c8);
      puVar5 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x3c4),uVar2);
      ghidra::lib::vector__erase((ghidra::vector *)((char *)this + 0x3c4),local_c,*puVar5,uVar2);
      operator_delete(pDVar4,(nothrow_t *)0xc);
      bVar3 = true;
      in_ECX = extraout_ECX_00;
    }
    if (!bVar3) {
      LogSystem::addLogLine
                (in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,
                 "No undocking permission found.");
      return false;
    }
  }
  LogSystem::addLogLine
            (in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,
             "Permission to undock rescinded.");
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doPayForJumpgate(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPayForJumpgate(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SpaceStation *pSVar1;
  std::string *this_;
  bool bVar2;
  SoundEngine *pSVar3;
  LogSystem *this_00;
  undefined4 extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *extraout_ECX_01;
  LogSystem *extraout_ECX_02;
  LogSystem *this_01;
  void *pvVar4;
  LogSystem *extraout_ECX_03;
  nothrow_t *pnVar5;
  std::string local_54 [4];
  undefined4 uStack_50;
  Ship *pSVar6;
  Sound SVar7;
  int iVar8;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bce38;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_54[0] = (std::string)0x0;
  ghidra::str::assign(local_54,"",0);
  bVar2 = ShipData::checkNeedToPayForJumpgate(param_1,0);
  if (!bVar2) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  pSVar1 = *(SpaceStation **)(param_1 + 0x178);
  if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < *(int *)(pSVar1 + 0x3e0)) {
    (this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    iVar8 = -1;
    SVar7 = 0x2c;
    uStack_50 = 0x4e4748;
    pSVar3 = ghidra::any_singleton();
    (pSVar3)->playSound(param_1, SVar7, iVar8);
    // [seh] ExceptionList = local_10;
    return false;
  }
  local_54[0] = (std::string)0x0;
  ghidra::str::assign(local_54,"Jumpgate",8);
  BankAccount::addTransaction
            (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,-*(int *)(pSVar1 + 0x3e0));
  ghidra::str::ctor
            ((std::string *)local_2c,(std::string *)(param_1 + 0x238));
  // [seh] local_8 = 0;
  ghidra::str::ctor(local_54,(std::string *)local_2c);
  bVar2 = (pSVar1)->shipHasPaidForUse();
  if (bVar2) {
    // [seh] local_8 = 0xffffffff;
    this_01 = extraout_ECX_00;
    if (local_18 < 0x10) goto LAB_004e4874;
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    this_ = *(std::string **)(pSVar1 + 0x418);
    if (*(std::string **)(pSVar1 + 0x41c) == this_) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(pSVar1 + 0x414),(std::string *)this_,(std::string *)local_2c);
      this_01 = extraout_ECX_02;
    }
    else {
      ghidra::str::ctor(this_,(std::string *)local_2c);
      *(int *)(pSVar1 + 0x418) = *(int *)(pSVar1 + 0x418) + 0x18;
      this_01 = extraout_ECX_01;
    }
    // [seh] local_8 = 0xffffffff;
    if (local_18 < 0x10) goto LAB_004e4874;
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  // [seh] local_8 = 0xffffffff;
  operator_delete(pvVar4,pnVar5);
  this_01 = extraout_ECX_03;
LAB_004e4874:
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  uStack_50 = 0x4e489e;
  (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
  iVar8 = -1;
  SVar7 = 0x2d;
  uStack_50 = 0x4e48ac;
  pSVar6 = param_1;
  pSVar3 = ghidra::any_singleton();
  (pSVar3)->playSound(pSVar6, SVar7, iVar8);
  iVar8 = -1;
  SVar7 = 0x2b;
  uStack_50 = 0x4e48c1;
  pSVar3 = ghidra::any_singleton();
  (pSVar3)->playSound(param_1, SVar7, iVar8);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doActivateJumpgate(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doActivateJumpgate(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa0[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  std::string *pbVar2;
  int *piVar3;
  PresentationInterface *pPVar4;
  Stats *pSVar5;
  undefined4 *puVar6;
  std::string *pbVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  nothrow_t *pnVar11;
  std::string *pbVar12;
  std::string *unaff_EDI;
  uint uVar13;
  std::string local_90 [12];
  undefined4 uStack_84;
  std::string local_78 [12];
  undefined4 uStack_6c;
  std::string local_5c [4];
  undefined4 uStack_58;
  int iVar14;
  std::string *pbVar15;
  void *local_34 [5];
  uint local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0600;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar2 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_5c[0] = (std::string)0x0;
  ghidra::str::assign(local_5c,"",0);
  bVar1 = ShipData::checkDockedWithJumpgate();
  if (bVar1) {
    local_5c[0] = (std::string)0x0;
    ghidra::str::assign(local_5c,"",0);
    local_5c[0] = (std::string)ShipData::checkNeedToPayForJumpgate();
    if (!(bool)local_5c[0]) {
      ghidra::str::assign(local_5c,"",0);
      bVar1 = ShipData::checkCanActivateJumpgate();
      if (bVar1) {
        local_14 = *(undefined1 **)(*(int *)(param_1 + 0x178) + 0x38c);
        for (puVar6 = *(undefined4 **)(g_gameData + 0x3c);
            puVar6 != *(undefined4 **)(g_gameData + 0x40); puVar6 = puVar6 + 1) {
          piVar3 = (int *)*puVar6;
          if ((undefined1 *)*piVar3 == local_14) goto LAB_004e49df;
        }
        piVar3 = (int *)0x0;
LAB_004e49df:
        uVar10 = 0;
        piVar8 = (int *)piVar3[0x33];
        uVar13 = piVar3[0x34] - (int)piVar8 >> 2;
        if (uVar13 != 0) {
          do {
            if ((*(int *)(*(int *)(*piVar8 + 0x254) + 0x158) == 2) &&
               (*(int *)(*piVar8 + 0x38c) == *(int *)(param_1 + 0x20))) break;
            uVar10 = uVar10 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar10 < uVar13);
        }
        uStack_58 = 0x4e4a44;
        debugPrint("GAME","Jumping from sector %d to jumpgate, \'%s\'");
        (param_1)->beginJump();
        iVar14 = -1;
        pPVar4 = ghidra::any_singleton();
        (pPVar4)->moveToCameraPos(iVar14, (float)pbVar2);
        bVar1 = true;
        pPVar4 = ghidra::any_singleton();
        (pPVar4)->switchJumpMode(bVar1);
        local_18 = local_5c;
        pbVar12 = (std::string *)(param_1 + 0x238);
        ghidra::str::ctor(local_5c,pbVar12);
        // [seh] local_8 = 0;
        pPVar4 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pPVar4)->addShake();
        local_5c[0] = (std::string)0x0;
        local_18 = local_5c;
        ghidra::str::assign(local_5c,"jumpgates_used",0xe);
        // [seh] local_8 = 1;
        pSVar5 = Singleton<Stats>::getInstance();
        // [seh] local_8 = 0xffffffff;
        (pSVar5)->addStat();
        uStack_6c = 0x4e4b36;
        local_18 = &stack0xffffffa0;
        ghidra::str::assign((std::string *)&stack0xffffffa0,"",0);
        local_14 = local_78;
        // [seh] local_8 = 2;
        local_78[0] = (std::string)0x0;
        uStack_84 = 0x4e4b62;
        ghidra::str::assign(local_78,"jumpgates_used",0xe);
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        local_90[0] = (std::string)0x0;
        ghidra::str::assign(local_90,"play",4);
        // [seh] local_8 = 0xffffffff;
        Analytics::logEvent();
        iVar14 = *(int *)(param_1 + 0x178);
        if (0xf < *(uint *)(param_1 + 0x24c)) {
          pbVar12 = *(std::string **)pbVar12;
        }
        ghidra::str::ctor((std::string *)local_34,(char *)pbVar12);
        pbVar12 = *(std::string **)(iVar14 + 0x418);
        puVar6 = (undefined4 *)ghidra::lib::remove___x28_x29();
        pbVar15 = (std::string *)*puVar6;
        if (pbVar15 != pbVar12) {
          pbVar7 = ghidra::lib::_Move_unchecked___x28_x29(pbVar15,pbVar2,unaff_EDI);
          ghidra::lib::_Destroy_range_t
                    ((std::string *)pbVar15,(std::string *)pbVar2,(ghidra::lib::allocator_t *)unaff_EDI);
          *(std::string **)(iVar14 + 0x418) = pbVar7;
        }
        if (0xf < local_20) {
          pnVar11 = (nothrow_t *)(local_20 + 1);
          pvVar9 = local_34[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_34[0] + -4);
            pnVar11 = (nothrow_t *)(local_20 + 0x24);
            if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar11);
        }
        // [seh] ExceptionList = local_10;
        return true;
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doPayDockedStation(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPayDockedStation(Ship * param_1, int param_2, int param_3, int param_4)

{
  SpaceStation *this;
  LogSystem *in_ECX;
  LogSystem *this_00;
  undefined4 extraout_ECX;
  LogSystem *this_01;
  SaveHandler *this_02;
  int iVar1;
  Ship *unaff_EDI;
  std::string local_30 [4];
  undefined4 uStack_2c;
  
  if (((param_1 != (Ship *)0x0) &&
      (this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0)) &&
     ((iVar1 = *(int *)(*(int *)((char *)this + 0x254) + 0x158), iVar1 == 1 ||
      ((iVar1 == 2 || (iVar1 == 3)))))) {
    if ((*(int *)((char *)this + 0x390) != 0) &&
       (iVar1 = (int)*(float *)(*(int *)((char *)this + 0x390) + 0xd0), iVar1 != 0)) {
      uStack_2c = 0x4e4cbe;
      debugPrint("GAME","Player amount = %d, cost = %d");
      if (iVar1 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
        local_30[0] = (std::string)0x0;
        ghidra::str::assign(local_30,"Station Services",0x10);
        (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, -iVar1);
        (this)->removeAmount(iVar1);
        uStack_2c = 0x4e4d25;
        (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
        commerceBeep(unaff_EDI);
        stationBeepHigh(unaff_EDI);
        ghidra::any_singleton();
        (this_02)->saveGame();
        return true;
      }
      (this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
      soundError(unaff_EDI);
      return false;
    }
    (in_ECX)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doChangeDetails(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doChangeDetails(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  GameData *pGVar2;
  std::string *pbVar3;
  EmailManager *pEVar4;
  SoundEngine *pSVar5;
  SaveHandler *this;
  void *pvVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  std::string local_a4 [12];
  undefined4 uStack_98;
  std::string local_8c [12];
  undefined4 uStack_80;
  uint local_74;
  Ship *pSVar9;
  Sound SVar10;
  int iVar11;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c0658;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if ((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x178) != 0)) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
    bVar8 = false;
    if (iVar11 != 0) {
      bVar8 = *(int *)(iVar11 + 0x158) == 1;
    }
    if (bVar8) {
      local_74 = local_74 & 0xffffff00;
      uStack_80 = 0x4e4e13;
      ghidra::str::assign((std::string *)&local_74,"",0);
      uStack_80 = 0x4e4e1b;
      bVar8 = ShipData::checkCanChangeDetails();
      if (bVar8) {
        iVar11 = *(int *)(param_1 + 0x178);
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        // [seh] local_8 = 0;
        pGVar2 = g_gameData + 0xf4;
        if ((std::string *)(*(int *)(g_gameData + 0x124) + 4) != (std::string *)pGVar2) {
          if (0xf < *(uint *)(g_gameData + 0x108)) {
            pGVar2 = *(GameData **)pGVar2;
          }
          ghidra::str::assign
                    ((std::string *)(*(int *)(g_gameData + 0x124) + 4),(char *)pGVar2,
                     *(uint *)(g_gameData + 0x104));
        }
        pGVar2 = g_gameData + 0xf4;
        if ((std::string *)(*(int *)(g_gameData + 0xd0) + 0x80) != (std::string *)pGVar2) {
          if (0xf < *(uint *)(g_gameData + 0x108)) {
            pGVar2 = *(GameData **)pGVar2;
          }
          ghidra::str::assign
                    ((std::string *)(*(int *)(g_gameData + 0xd0) + 0x80),(char *)pGVar2,
                     *(uint *)(g_gameData + 0x104));
        }
        pGVar2 = g_gameData + 0x10c;
        if ((std::string *)(*(int *)(g_gameData + 0xd0) + 8) != (std::string *)pGVar2) {
          if (0xf < *(uint *)(g_gameData + 0x120)) {
            pGVar2 = *(GameData **)pGVar2;
          }
          ghidra::str::assign
                    ((std::string *)(*(int *)(g_gameData + 0xd0) + 8),(char *)pGVar2,
                     *(uint *)(g_gameData + 0x11c));
        }
        local_74 = local_74 & 0xffffff00;
        uStack_80 = 0x4e4ee8;
        ghidra::str::assign((std::string *)&local_74,"Registration change.",0x14);
        uStack_80 = 0x4e4eff;
        (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
        local_74 = 0x4e4f3b;
        pbVar3 = (std::string *)strUsingArgs((char *)local_44);
        ghidra::lib::basic_string__operator_x3d((std::string *)local_2c,pbVar3);
        if (0xf < local_30) {
          pnVar7 = (nothrow_t *)(local_30 + 1);
          pvVar6 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_44[0] + -4);
            pnVar7 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
        if (*(int *)(iVar11 + 0x390) == 0) {
          ghidra::str::ctor
                    ((std::string *)&local_74,(std::string *)local_2c);
          // [seh] local_8._0_1_ = 4;
          local_8c[0] = (std::string)0x0;
          uStack_98 = 0x4e5013;
          ghidra::str::assign(local_8c,"Rego Details Changed",0x14);
          // [seh] local_8._0_1_ = 5;
          local_a4[0] = (std::string)0x0;
          ghidra::str::assign(local_a4,"AEA",3);
          // [seh] local_8._0_1_ = 6;
        }
        else {
          ghidra::str::ctor
                    ((std::string *)&local_74,(std::string *)local_2c);
          // [seh] local_8._0_1_ = 1;
          local_8c[0] = (std::string)0x0;
          uStack_98 = 0x4e4fc0;
          ghidra::str::assign(local_8c,"Rego Details Changed",0x14);
          // [seh] local_8._0_1_ = 2;
          ghidra::str::ctor
                    (local_a4,(std::string *)(*(int *)(iVar11 + 0x390) + 0x20));
          // [seh] local_8._0_1_ = 3;
        }
        pEVar4 = ghidra::any_singleton();
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        (pEVar4)->addCustomEmail();
        iVar11 = -1;
        SVar10 = 0x2d;
        pSVar9 = param_1;
        pSVar5 = ghidra::any_singleton();
        (pSVar5)->playSound(pSVar9, SVar10, iVar11);
        iVar11 = -1;
        SVar10 = 0x2b;
        pSVar5 = ghidra::any_singleton();
        (pSVar5)->playSound(param_1, SVar10, iVar11);
        if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
          ghidra::any_singleton();
          (this)->saveGame();
        }
        debugPrint("GAME","Changed player details to %s, captain of the %s");
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar1 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// Ghidra: bool __cdecl ShipInterface::doTeleportShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTeleportShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0xf;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_20,"",0);
  pvVar1 = local_20[0];
  if (param_1 == (Ship *)0x0) {
    if (local_c < 0x10) {
      return false;
    }
    pnVar2 = (nothrow_t *)(local_c + 1);
    if (pnVar2 < (nothrow_t *)0x1000) goto LAB_004e518b;
    pvVar1 = *(void **)((int)local_20[0] + -4);
  }
  else {
    if (local_c < 0x10) {
      return false;
    }
    pnVar2 = (nothrow_t *)(local_c + 1);
    if (pnVar2 < (nothrow_t *)0x1000) goto LAB_004e518b;
    pvVar1 = *(void **)((int)local_20[0] + -4);
  }
  pnVar2 = (nothrow_t *)(local_c + 0x24);
  if (0x1f < (uint)((int)local_20[0] + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
LAB_004e518b:
  operator_delete(pvVar1,pnVar2);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doActivateIFF(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doActivateIFF(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x30c) != '\0') {
    return false;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x34) = 1;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doDeactivateIFF(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDeactivateIFF(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x30c) == '\0') {
    iVar3 = -1;
    SVar2 = 9;
    pSVar1 = param_1;
    this_ = ghidra::any_singleton();
    (this_)->playSound(pSVar1, SVar2, iVar3);
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x34) = 0;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleIFF(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleIFF(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x30c) != '\0') {
    return false;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x40) + 0x34);
  this_ = ghidra::any_singleton();
  if (cVar1 != '\0') {
    (this_)->playSound(param_1, 9, -1);
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x34) = 0;
    return false;
  }
  (this_)->playSound(param_1, 8, -1);
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x34) = 1;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTurnOnSOS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTurnOnSOS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  SoundEngine *this_;
  int iVar2;
  uint uVar3;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_00;
  LogSystem *extraout_ECX_01;
  LogSystem *this_01;
  int iVar4;
  uint unaff_EDI;
  float fVar5;
  std::string local_94 [12];
  undefined4 uStack_88;
  Stats local_7c [12];
  undefined4 uStack_70;
  std::string local_60 [4];
  undefined4 uStack_5c;
  Ship *pSVar6;
  Sound SVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  SpaceStation *local_18;
  Stats *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c06cb;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar1 = ghidra::lib::_Traits_equal_t
                    // [cookie] ("objectsinspace",0xe,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),
                     unaff_EDI);
  if (!bVar1) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  iVar2 = -1;
  SVar7 = 8;
  pSVar6 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar6, SVar7, iVar2);
  this_00 = extraout_ECX;
  if (param_1[0x318] == (byte)0x0) {
    local_18 = (SpaceStation *)local_60;
    local_60[0] = (std::string)0x0;
    ghidra::str::assign(local_60,"sos_sent",8);
    // [seh] local_8 = 0;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      local_14 = operator_new(0x58);
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<Stats>::instance = (Stats *)new ((void *)(local_14)) Stats();
    }
    // [seh] local_8 = 0xffffffff;
    (Singleton<Stats>::instance)->addStat();
    local_18 = (SpaceStation *)&stack0xffffff9c;
    uStack_70 = 0x4e53c1;
    ghidra::str::assign((std::string *)&stack0xffffff9c,"",0);
    local_14 = local_7c;
    // [seh] local_8 = 2;
    local_7c[0] = (byte)0x0;
    uStack_88 = 0x4e53ed;
    ghidra::str::assign((std::string *)local_7c,"sos_sent",8);
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    local_94[0] = (std::string)0x0;
    ghidra::str::assign(local_94,"play",4);
    // [seh] local_8 = 0xffffffff;
    Analytics::logEvent();
    this_00 = extraout_ECX_00;
  }
  param_1[0x318] = (byte)0x1;
  local_18 = (this_00)->getNearestTowLocation();
  if (local_18 == (SpaceStation *)0x0) {
    iVar2 = -1;
    this_01 = (LogSystem *)0x0;
  }
  else {
    local_20 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
    local_1c = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
    local_28 = (float)*(double *)(local_18 + 0x28);
    local_24 = (float)*(double *)(local_18 + 0x30);
    // [seh] local_8 = 5;
    fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
    local_14 = (Stats *)(0x5f3759df - ((uint)fVar5 >> 1));
    fVar5 = ((1.5 - fVar5 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar5) /
            10.0;
    // [seh] local_8 = 0xffffffff;
    if (fVar5 < 30.0) {
      iVar4 = 0;
      iVar2 = 2;
      do {
        uVar3 = rand();
        uVar3 = uVar3 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar4 = iVar4 + 1 + uVar3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      fVar5 = (float)(iVar4 + 0x16);
    }
    this_01 = *(LogSystem **)(local_18 + 0x24);
    if (this_01 != *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x24)) {
      local_30 = (float)*(int *)(*(int *)(g_gameData + 0xd8) + 0x7c);
      local_2c = (float)*(int *)(*(int *)(g_gameData + 0xd8) + 0x80);
      local_38 = (float)*(int *)(this_01 + 0x7c);
      local_34 = (float)*(int *)(this_01 + 0x80);
      // [seh] local_8 = 7;
      local_18 = (SpaceStation *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
      local_14 = (Stats *)(0x5f3759df - ((uint)local_18 >> 1));
      fVar5 = (1.5 - (float)local_18 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
              (float)local_18 + 60.0;
      // [seh] local_8 = 0xffffffff;
      this_01 = extraout_ECX_01;
    }
    iVar2 = (int)fVar5;
  }
  *(float *)(param_1 + 0x31c) = (float)iVar2;
  (this_01)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000004);
  uStack_5c = 0x4e5637;
  debugPrint("GAME",
             "Vessel fired SOS beacon - will be taken back to a starbase via tow in %f seconds");
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTurnOffSOS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTurnOffSOS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  iVar3 = -1;
  SVar2 = 9;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  param_1[0x318] = (byte)0x0;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSetViewShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSetViewShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  TradeEngine *this_;
  SoundEngine *pSVar1;
  Sound SVar2;
  int iVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0702;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  iVar3 = -1;
  if (*(int *)(ghidra::Singleton<void>::instance + 0xf8) != -1) {
    SVar2 = 8;
    *(int *)(ghidra::Singleton<void>::instance + 0xfc) = *(int *)(ghidra::Singleton<void>::instance + 0xf8);
    pSVar1 = ghidra::any_singleton();
    (pSVar1)->playSound(param_1, SVar2, iVar3);
    // [seh] ExceptionList = local_10;
    return true;
  }
  SVar2 = 10;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar2, iVar3);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doLeaveShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doLeaveShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  FlagManager *pFVar4;
  PresentationInterface *pPVar5;
  undefined4 ****ppppuVar6;
  nothrow_t *pnVar7;
  int extraout_EDX;
  uint unaff_EDI;
  Ship *pSVar8;
  std::string local_54 [12];
  undefined4 uStack_48;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0740;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1d8) = 0xffffffff;
  local_14 = pcVar3;
  if (*(int *)(param_1 + 0x174) == 0) {
LAB_004e5984:
    if ((((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0xd4) != 3)) ||
        (*(int *)(param_1 + 0xf8) != 2)) ||
       ((param_1[0x280] != (byte)0x0 || (param_1[0x281] != (byte)0x0)))) goto LAB_004e58c7;
    local_54[0] = (std::string)0x0;
    ghidra::str::assign(local_54,"cannot_board_vessel",0x13);
    // [seh] local_8 = 3;
    pFVar4 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    bVar1 = (pFVar4)->flagSet();
    if (bVar1) goto LAB_004e58c7;
    if (ShipData::currentlyBoardedShip == param_1) {
      if ((((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1) &&
           (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) != '\0')) &&
          (bVar1 = (*(Ship **)(param_1 + 0x178))->isSpaceStation(), bVar1)) &&
         (*(char *)(extraout_EDX + 0x388) == '\0')) {
        pPVar5 = ghidra::any_singleton();
        *(undefined4 *)(pPVar5 + 0x2a4) = 7;
      }
      else {
        pPVar5 = ghidra::any_singleton();
        *(undefined4 *)(pPVar5 + 0x2a4) = 4;
      }
    }
    else {
      if (((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) &&
          (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) != '\0')) &&
         (g_gameLogic[0x11d] == (byte)0x0)) goto LAB_004e58c7;
      pPVar5 = ghidra::any_singleton();
      *(undefined4 *)(pPVar5 + 0x2a4) = 3;
    }
  }
  else {
    uStack_48 = 0x4e57b7;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    if (bVar1) goto LAB_004e5984;
    pSVar8 = param_1 + 0x68;
    if (0xf < *(uint *)(param_1 + 0x7c)) {
      pSVar8 = *(Ship **)(param_1 + 0x68);
    }
    uStack_48 = 0x4e57ea;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29((char *)pSVar8,*(uint *)(param_1 + 0x78),pcVar3,unaff_EDI);
    if (bVar1) {
      local_54[0] = (std::string)0x0;
      ghidra::str::assign(local_54,"cannot_board_structure",0x16);
      // [seh] local_8 = 0;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      bVar1 = (pFVar4)->flagSet();
      if (bVar1) goto LAB_004e58c7;
      ghidra::str::ctor
                ((std::string *)local_2c,(std::string *)(*(int *)(param_1 + 0x174) + 0x80));
      // [seh] local_8 = 1;
      ppppuVar6 = local_2c;
      if (0xf < local_18) {
        ppppuVar6 = (undefined4 ****)local_2c[0];
      }
      strUsingArgs((char *)local_54,"cannot_board_structure_%s",ppppuVar6);
      // [seh] local_8._0_1_ = 2;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      bVar1 = (pFVar4)->flagSet();
      if (bVar1) {
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          ppppuVar6 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            ppppuVar6 = (undefined4 ****)local_2c[0][-1];
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          uStack_48 = 0x4e58c2;
          operator_delete(ppppuVar6,pnVar7);
        }
        goto LAB_004e58c7;
      }
      pPVar5 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      *(undefined4 *)(pPVar5 + 0x2a4) = 5;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        ppppuVar6 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          ppppuVar6 = (undefined4 ****)local_2c[0][-1];
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_48 = 0x4e592b;
        operator_delete(ppppuVar6,pnVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    }
    else {
      pPVar5 = ghidra::any_singleton();
      *(undefined4 *)(pPVar5 + 0x2a4) = 6;
    }
  }
  pPVar5 = ghidra::any_singleton();
  *(undefined2 *)(pPVar5 + 0x2a0) = 0x100;
  *(undefined4 *)(pPVar5 + 0x29c) = 1;
  *(undefined4 *)(pPVar5 + 0x2ac) = 0x3ecccccd;
  *(undefined4 *)(pPVar5 + 0x2a8) = 0x3ecccccd;
LAB_004e58c7:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __cdecl ShipInterface::doCommunicateWithSelected(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommunicateWithSelected(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  PrivateCommsManager *this_;
  PresentationInterface *this_00;
  LogSystem *in_ECX;
  int *piVar2;
  LogSystem *pLVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x19c) == 0) {
    pcVar4 = "No object selected.";
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x130);
    if (iVar1 != 0) {
      this_ = ghidra::any_singleton();
      in_ECX = (LogSystem *)0x0;
      piVar2 = *(int **)((char *)this_ + 0x74);
      pLVar3 = (LogSystem *)(*(int *)((char *)this_ + 0x78) - (int)piVar2 >> 2);
      if (pLVar3 != (LogSystem *)0x0) {
        do {
          if ((*(int *)(*piVar2 + 8) == iVar1) && (iVar1 != 0)) {
            (this_)->switchTo((int)in_ECX);
            this_00 = ghidra::any_singleton();
            (this_00)->moveToRTCommsStation();
            return true;
          }
          in_ECX = in_ECX + 1;
          piVar2 = piVar2 + 1;
        } while (in_ECX < pLVar3);
      }
    }
    pcVar4 = "No communication channel available.";
  }
  (in_ECX)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002, pcVar4);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommsSync(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommsSync(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  char cVar2;
  int iVar3;
  SoundEngine *this_;
  Sound SVar4;
  int iVar5;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x1c) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x1c) + 0x10))(0);
    if ((cVar2 != '\0') && (*(float *)(param_1 + 0x160) <= 0.0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
      iVar3 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(iVar1 + 0xc));
      iVar5 = -1;
      SVar4 = 8;
      *(float *)(param_1 + 0x160) =
           (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
           *(float *)(*(int *)(iVar1 + 8) + 0x104);
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar4, iVar5);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommsTurnOnAuto(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommsTurnOnAuto(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x1c) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x1c) + 0x10))(0);
    if (cVar1 != '\0') {
      param_1[0x15c] = (byte)0x1;
      if (*(float *)(param_1 + 0x160) == -1.0) {
        *(undefined4 *)(param_1 + 0x164) = 0x43340000;
      }
      iVar3 = -1;
      SVar2 = 8;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doCommsTurnOffAuto(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doCommsTurnOffAuto(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x1c) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x1c) + 0x10))(0);
    if (cVar1 != '\0') {
      iVar3 = -1;
      SVar2 = 9;
      param_1[0x15c] = (byte)0x0;
      *(undefined1 **)(param_1 + 0x164) = &DAT_bf800000;
      this_ = ghidra::any_singleton();
      (this_)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMooredWreckUnlockCargo(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMooredWreckUnlockCargo(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  FlagManager *pFVar3;
  SoundEngine *pSVar4;
  LogSystem *this;
  void *pvVar5;
  nothrow_t *pnVar6;
  Ship *pSVar7;
  Sound SVar8;
  int iVar9;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0788;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  ghidra::str::assign((std::string *)&stack0xffffff90,"",0);
  bVar1 = ShipData::checkMooredWreckHasUnclampedCargo(param_1);
  if (!bVar1) {
    ghidra::str::ctor
              ((std::string *)local_2c,(std::string *)(*(int *)(param_1 + 0x174) + 0x80));
    // [seh] local_8 = 0;
    ghidra::lib::transform___x28_x29();
    strUsingArgs((char *)local_44);
    // [seh] local_8._0_1_ = 1;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff8c,(std::string *)local_44);
    // [seh] local_8._0_1_ = 2;
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    (pFVar3)->setFlag();
    debugPrint("WORLD","Unlocked magnetic clamps on cargo for %s");
    (this)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
    iVar9 = -1;
    SVar8 = 8;
    pSVar7 = param_1;
    pSVar4 = ghidra::any_singleton();
    (pSVar4)->playSound(pSVar7, SVar8, iVar9);
    iVar9 = -1;
    SVar8 = 0x12;
    pSVar4 = ghidra::any_singleton();
    (pSVar4)->playSound(param_1, SVar8, iVar9);
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __cdecl ShipInterface::doMooredWreckDownloadData(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMooredWreckDownloadData(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  FlagManager *pFVar3;
  SoundEngine *pSVar4;
  LogSystem *this;
  void *pvVar5;
  nothrow_t *pnVar6;
  Ship *pSVar7;
  Sound SVar8;
  int iVar9;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c07d0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  ghidra::str::assign((std::string *)&stack0xffffff90,"",0);
  bVar1 = ShipData::checkMooredWreckHasDownloadedData(param_1);
  if (!bVar1) {
    ghidra::str::ctor
              ((std::string *)local_2c,(std::string *)(*(int *)(param_1 + 0x174) + 0x80));
    // [seh] local_8 = 0;
    ghidra::lib::transform___x28_x29();
    strUsingArgs((char *)local_44);
    // [seh] local_8._0_1_ = 1;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff8c,(std::string *)local_44);
    // [seh] local_8._0_1_ = 2;
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8._0_1_ = 1;
    (pFVar3)->setFlag();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff8c,
               (std::string *)(*(int *)(param_1 + 0x174) + 0xb0));
    // [seh] local_8._0_1_ = 3;
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    (pFVar3)->setFlag();
    debugPrint("WORLD","Downloaded data for wreck %s");
    (this)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
    iVar9 = -1;
    SVar8 = 9;
    pSVar7 = param_1;
    pSVar4 = ghidra::any_singleton();
    (pSVar4)->playSound(pSVar7, SVar8, iVar9);
    iVar9 = -1;
    SVar8 = 0x2d;
    pSVar4 = ghidra::any_singleton();
    (pSVar4)->playSound(param_1, SVar8, iVar9);
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __cdecl ShipInterface::doShipCargoDown(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doShipCargoDown(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (param_1 == (Ship *)0x0) {
    return false;
  }
  if (*(int *)(param_1 + 0x1ec) == *(int *)(*(int *)(param_1 + 0x254) + 0xe4) + -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1ec) + 1;
  }
  iVar3 = -1;
  SVar2 = 9;
  *(int *)(param_1 + 0x1ec) = iVar1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doShipCargoUp(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doShipCargoUp(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  if (param_1 == (Ship *)0x0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
  }
  iVar3 = -1;
  SVar2 = 8;
  *(int *)(param_1 + 0x1ec) = iVar1 + -1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doMooredCargoDown(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMooredCargoDown(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  int iVar2;
  SoundEngine *this_;
  int iVar3;
  bool bVar4;
  Sound SVar5;
  int iVar6;
  
  if (((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x174) + 0xe8), iVar2 != 0)) {
    iVar3 = 0;
    iVar6 = -1;
    do {
      if ((iVar3 < 0) || ((0 < *(int *)(iVar2 + 8) && (*(int *)(iVar2 + 8) <= iVar3)))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(iVar2 + 0xc + iVar3 * 4) != 0;
      }
      iVar1 = iVar3;
      if (!bVar4) {
        iVar1 = iVar6;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar1;
    } while (iVar3 < 0xe);
    if (*(int *)(param_1 + 0x1f0) == iVar1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1f0) + 1;
    }
    iVar6 = -1;
    SVar5 = 9;
    *(int *)(param_1 + 0x1f0) = iVar2;
    this_ = ghidra::any_singleton();
    (this_)->playSound(param_1, SVar5, iVar6);
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMooredCargoUp(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMooredCargoUp(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  SoundEngine *this_;
  int iVar2;
  int iVar3;
  bool bVar4;
  Sound SVar5;
  int iVar6;
  
  if (((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (iVar6 = *(int *)(*(int *)(param_1 + 0x174) + 0xe8), iVar6 != 0)) {
    iVar2 = 0;
    iVar3 = -1;
    do {
      if ((iVar2 < 0) || ((0 < *(int *)(iVar6 + 8) && (*(int *)(iVar6 + 8) <= iVar2)))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(iVar6 + 0xc + iVar2 * 4) != 0;
      }
      iVar1 = iVar2;
      if (!bVar4) {
        iVar1 = iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar1;
    } while (iVar2 < 0xe);
    if (*(int *)(param_1 + 0x1f0) != 0) {
      iVar1 = *(int *)(param_1 + 0x1f0) + -1;
    }
    iVar6 = -1;
    SVar5 = 8;
    *(int *)(param_1 + 0x1f0) = iVar1;
    this_ = ghidra::any_singleton();
    (this_)->playSound(param_1, SVar5, iVar6);
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJettisonCargo(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJettisonCargo(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  CargoHold *this_;
  bool bVar5;
  bool bVar6;
  SyntheticObject *pSVar7;
  undefined1 uVar8;
  int iVar9;
  SoundEngine *this_00;
  Stats *pSVar10;
  LogSystem *this_01;
  void *pvVar11;
  LogSystem *this_02;
  std::string *pbVar12;
  nothrow_t *pnVar13;
  SyntheticObject *pSVar14;
  uint uVar15;
  float fVar16;
  std::string local_b4 [12];
  undefined4 uStack_a8;
  Ship local_9c [12];
  undefined4 uStack_90;
  uint local_80;
  Ship *pSVar17;
  Sound SVar18;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  Ship *local_38;
  undefined1 *local_34;
  SyntheticObject *local_30;
  void *local_2c [3];
  undefined8 local_20;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c084c;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  bVar5 = false;
  local_30 = (SyntheticObject *)0x0;
  local_38 = param_1;
  iVar9 = *(int *)(param_1 + 0x1ec);
  if (((((iVar9 != -1) && (iVar9 < *(int *)(*(int *)(param_1 + 0x254) + 0xe4))) && (-1 < iVar9)) &&
      ((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar2 < 1 || (iVar9 < iVar2)))) &&
     (*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + iVar9 * 4) != 0)) {
    local_3c = *(float *)(param_1 + 0x24);
    local_48 = (float)*(double *)(param_1 + 0x28);
    local_44 = (float)*(double *)(param_1 + 0x30);
    pSVar14 = (SyntheticObject *)0x0;
    iVar9 = *(int *)((int)local_3c + 0x9c);
    local_30 = (SyntheticObject *)0x0;
    pSVar7 = local_30;
    if (*(int *)((int)local_3c + 0xa0) - iVar9 >> 2 != 0) {
      uVar15 = 0;
      do {
        iVar9 = *(int *)(iVar9 + uVar15 * 4);
        local_50 = (float)*(double *)(iVar9 + 0x28);
        local_4c = (float)*(double *)(iVar9 + 0x30);
        // [seh] local_8._0_1_ = 1;
        // [seh] local_8._1_3_ = 0;
        fVar16 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_50,(Vec2 *)&local_48);
        local_30 = (SyntheticObject *)(0x5f3759df - ((uint)fVar16 >> 1));
        local_34 = (undefined1 *)
                   ((1.5 - fVar16 * 0.5 * (float)local_30 * (float)local_30) * (float)local_30 *
                   fVar16);
        if (5.0 < (float)local_34) {
LAB_004e645f:
          bVar6 = false;
        }
        else {
          if (pSVar14 != (SyntheticObject *)0x0) {
            local_58 = (float)*(double *)(pSVar14 + 0x28);
            local_54 = (float)*(double *)(pSVar14 + 0x30);
            // [seh] local_8 = CONCAT31(local_8._1_3_,2);
            bVar5 = true;
            local_30 = (SyntheticObject *)0x1;
            fVar16 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_58,(Vec2 *)&local_48);
            local_30 = (SyntheticObject *)(0x5f3759df - ((uint)fVar16 >> 1));
            if ((float)local_34 <=
                (1.5 - fVar16 * 0.5 * (float)local_30 * (float)local_30) * (float)local_30 * fVar16)
            goto LAB_004e645f;
          }
          bVar6 = true;
        }
        if (bVar5) {
          bVar5 = false;
        }
        if (bVar6) {
          pSVar14 = *(SyntheticObject **)(*(int *)((int)local_3c + 0x9c) + uVar15 * 4);
        }
        uVar15 = uVar15 + 1;
        iVar9 = *(int *)((int)local_3c + 0x9c);
        pSVar7 = pSVar14;
      } while (uVar15 < (uint)(*(int *)((int)local_3c + 0xa0) - iVar9 >> 2));
    }
    local_30 = pSVar7;
    // [seh] local_8 = 0xffffffff;
    if ((local_30 == (SyntheticObject *)0x0) || (*(int *)(local_30 + 0x60) != 1)) {
      local_30 = (*(Sector **)(local_38 + 0x24))->addSyntheticObject(1);
      rand();
      rand();
      positionFromPoint();
      *(double *)(local_30 + 0x28) = (double)local_40;
      *(double *)(local_30 + 0x30) = (double)local_3c;
    }
    pSVar17 = local_38;
    iVar9 = (local_30)->getNextEmptyCargoPod();
    pSVar14 = local_30;
    (*(CargoHold **)(local_30 + 0xe8))->addPod(iVar9);
    puVar3 = *(ulonglong **)(*(int *)(pSVar17 + 0x1f8) + 0xc + *(int *)(pSVar17 + 0x1ec) * 4);
    puVar4 = *(undefined2 **)(*(int *)(pSVar14 + 0xe8) + 0xc + iVar9 * 4);
    local_18 = (uint)puVar3[1];
    uVar1 = *puVar3;
    local_20._0_2_ = (undefined2)uVar1;
    *puVar4 = (undefined2)local_20;
    local_20._2_1_ = (undefined1)(uVar1 >> 0x10);
    *(undefined1 *)(puVar4 + 1) = local_20._2_1_;
    *(undefined4 *)(*(int *)(*(int *)(pSVar14 + 0xe8) + 0xc + iVar9 * 4) + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(pSVar17 + 0x1f8) + 0xc + *(int *)(pSVar17 + 0x1ec) * 4) + 4);
    *(undefined4 *)(*(int *)(*(int *)(pSVar14 + 0xe8) + 0xc + iVar9 * 4) + 8) =
         *(undefined4 *)
          (*(int *)(*(int *)(pSVar17 + 0x1f8) + 0xc + *(int *)(pSVar17 + 0x1ec) * 4) + 8);
    pbVar12 = (std::string *)(pSVar17 + 0x238);
    local_20 = uVar1;
    if ((std::string *)(pSVar14 + 0x68) != pbVar12) {
      if (0xf < *(uint *)(pSVar17 + 0x24c)) {
        pbVar12 = *(std::string **)pbVar12;
      }
      ghidra::str::assign
                ((std::string *)(pSVar14 + 0x68),(char *)pbVar12,*(uint *)(pSVar17 + 0x248));
    }
    this_ = *(CargoHold **)(pSVar17 + 0x1f8);
    if (*(int *)(*(int *)(this_ + *(int *)(pSVar17 + 0x1ec) * 4 + 0xc) + 4) == -1) {
      (this_)->describePod((int)local_2c, SUB41(*(int *)(pSVar17 + 0x1ec),0));
      // [seh] local_8 = 3;
      (this_01)->addLogLine(*(LogPriority *)(pSVar17 + 0x224), &DAT_00000002);
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar13);
      }
      local_20 = local_20 & 0xffffffff;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    else {
      ((GameData *)this_)->getGood(*(int *)(*(int *)(this_ + *(int *)(pSVar17 + 0x1ec) * 4 + 0xc) + 4));
      local_80 = 0x4e66c4;
      (this_02)->addLogLine(*(LogPriority *)(pSVar17 + 0x224), &DAT_00000002);
    }
    (*(CargoHold **)(pSVar17 + 0x1f8))->removePod(*(int *)(pSVar17 + 0x1ec));
    iVar9 = -1;
    SVar18 = 0x22;
    this_00 = ghidra::any_singleton();
    (this_00)->playSound(pSVar17, SVar18, iVar9);
    local_34 = (undefined1 *)&local_80;
    local_80 = local_80 & 0xffffff00;
    ghidra::str::assign((std::string *)&local_80,"cargo_jettisons",0xf);
    // [seh] local_8 = 4;
    pSVar10 = Singleton<Stats>::getInstance();
    // [seh] local_8 = 0xffffffff;
    (pSVar10)->addStat();
    uStack_90 = 0x4e674f;
    local_34 = &stack0xffffff7c;
    ghidra::str::assign((std::string *)&stack0xffffff7c,"",0);
    local_38 = local_9c;
    // [seh] local_8 = 5;
    local_9c[0] = (byte)0x0;
    uStack_a8 = 0x4e677b;
    ghidra::str::assign((std::string *)local_9c,"cargo_jettisons",0xf);
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    local_b4[0] = (std::string)0x0;
    ghidra::str::assign(local_b4,"play",4);
    // [seh] local_8 = 0xffffffff;
    Analytics::logEvent();
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar8 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar8;
}


// Ghidra: bool __cdecl ShipInterface::doMoveModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMoveModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  SoundEngine *pSVar2;
  ShipModule *this_;
  ShipModule *pSVar3;
  char *pcVar4;
  LogSystem *in_ECX;
  int iVar5;
  int *piVar6;
  LogSystem *this_00;
  int *piVar7;
  uint uVar8;
  Ship *unaff_EDI;
  Ship *pSVar9;
  Sound SVar10;
  int iVar11;
  
  if (((param_2 != -1) && (param_3 != -1)) &&
     ((*(int *)(g_gameData + 0xcc) == 0 || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)))) {
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      uVar8 = 0;
      piVar1 = *(int **)(*(int *)(param_1 + 0x254) + 0x13c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x254) + 0x140) - (int)piVar1;
      iVar11 = iVar5 >> 0x1f;
      iVar5 = iVar5 / 0x18 + iVar11;
      piVar7 = piVar1;
      if (iVar5 != iVar11) {
        do {
          if (*piVar7 == param_2) {
            piVar7 = piVar1 + uVar8 * 6;
            goto LAB_004e686e;
          }
          uVar8 = uVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (uVar8 < (uint)(iVar5 - iVar11));
      }
      piVar7 = (int *)0x0;
LAB_004e686e:
      piVar6 = (int *)0x0;
      uVar8 = 0;
      if (iVar5 != iVar11) {
        piVar6 = piVar1 + 2;
        do {
          if (*piVar6 == param_3) {
            piVar6 = piVar1 + uVar8 * 6;
            goto LAB_004e68a6;
          }
          uVar8 = uVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (uVar8 < (uint)(iVar5 - iVar11));
        piVar6 = (int *)0x0;
      }
LAB_004e68a6:
      if ((piVar7 == (int *)0x0) || (piVar6 == (int *)0x0)) {
        iVar11 = -1;
        SVar10 = 10;
        pSVar2 = ghidra::any_singleton();
        (pSVar2)->playSound(param_1, SVar10, iVar11);
        return true;
      }
      if (piVar7[1] != piVar6[1]) {
        iVar11 = -1;
        SVar10 = 10;
        pSVar9 = param_1;
        pSVar2 = ghidra::any_singleton();
        (pSVar2)->playSound(pSVar9, SVar10, iVar11);
        LogSystem::addLogLine
                  (this_00,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,"Invalid slot type.");
        return false;
      }
      iVar11 = piVar6[2];
      this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(iVar11);
      pSVar3 = (*(SystemManager **)(param_1 + 0x40))->getModule(piVar7[2]);
      if (this_ != pSVar3) {
        *(int *)(pSVar3 + 0x10) = iVar11;
        if (this_ == (ShipModule *)0x0) {
          pcVar4 = "Module moved.";
        }
        else {
          *(int *)((char *)this_ + 0x10) = piVar7[2];
          pcVar4 = "Module positions swapped.";
        }
        LogSystem::addLogLine
                  ((LogSystem *)this_,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,pcVar4);
        uVar8 = rand();
        uVar8 = uVar8 & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        iVar11 = uVar8 + 1;
        SVar10 = 0x18;
        pSVar9 = ShipData::currentlyBoardedShip;
        pSVar2 = ghidra::any_singleton();
        (pSVar2)->playSound(pSVar9, SVar10, iVar11);
        commerceBeep(unaff_EDI);
        return true;
      }
      soundError(unaff_EDI);
      return false;
    }
    LogSystem::addLogLine
              (in_ECX,*(LogPriority *)(param_1 + 0x224),&DAT_00000001,
               "Station machinery required to move modules.");
    iVar11 = -1;
    SVar10 = 10;
    pSVar2 = ghidra::any_singleton();
    (pSVar2)->playSound(param_1, SVar10, iVar11);
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doJettisonComponent(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJettisonComponent(Ship * param_1, int param_2, int param_3, int param_4)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  SoundEngine *pSVar4;
  undefined4 *puVar5;
  size_t sVar6;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Ship *pSVar7;
  Sound SVar8;
  int iVar9;
  
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,"",0);
  bVar3 = ShipData::checkCanJettisonComponent(param_1,0);
  if (!bVar3) {
    iVar9 = -1;
    SVar8 = 10;
    uStack_2c = 0x4e6a37;
    pSVar4 = ghidra::any_singleton();
    uStack_2c = 0x4e6a3e;
    (pSVar4)->playSound(param_1, SVar8, iVar9);
    return false;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x1f8) + 0x48);
  puVar5 = (undefined4 *)ghidra::lib::remove___x28_x29();
  pvVar2 = (void *)*puVar5;
  iVar9 = *(int *)(param_1 + 0x1f8);
  if (pvVar2 != pvVar1) {
    sVar6 = *(int *)(iVar9 + 0x48) - (int)pvVar1;
    uStack_2c = 0x4e6a8b;
    memmove(pvVar2,pvVar1,sVar6);
    *(size_t *)(iVar9 + 0x48) = sVar6 + (int)pvVar2;
  }
  iVar9 = -1;
  SVar8 = 0x22;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  uStack_2c = 0x4e6aab;
  pSVar7 = param_1;
  pSVar4 = ghidra::any_singleton();
  uStack_2c = 0x4e6ab2;
  (pSVar4)->playSound(pSVar7, SVar8, iVar9);
  iVar9 = -1;
  SVar8 = 8;
  uStack_2c = 0x4e6abc;
  pSVar4 = ghidra::any_singleton();
  uStack_2c = 0x4e6ac3;
  (pSVar4)->playSound(param_1, SVar8, iVar9);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doJettisonAllCargo(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doJettisonAllCargo(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined8 uVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  std::string *pbVar8;
  SoundEngine *this_;
  LogSystem *extraout_ECX;
  std::string *this_00;
  Stats *pSVar9;
  double dVar10;
  float fVar11;
  std::string local_a0 [12];
  undefined4 uStack_94;
  std::string local_88 [12];
  undefined4 uStack_7c;
  std::string local_6c [8];
  undefined4 uStack_64;
  Sound SVar12;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_34;
  SyntheticObject *local_2c;
  Stats *local_28;
  float local_24;
  undefined8 local_20;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c08c2;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_6c[0] = (std::string)0x0;
  ghidra::str::assign(local_6c,"",0);
  bVar4 = ShipData::checkCanJettisonAllCargo();
  if (bVar4) {
    local_2c = (*(Sector **)(param_1 + 0x24))->addSyntheticObject(1);
    local_3c = (float)*(double *)(param_1 + 0x28);
    local_38 = (float)*(double *)(param_1 + 0x30);
    iVar6 = rand();
    iVar7 = rand();
    fVar11 = (float)(iVar7 % 100) / 100.0;
    local_24 = fVar11 + fVar11 + 1.0;
    // [seh] local_8 = 0;
    dVar10 = (double)(iVar6 % 0x168 + -1) * 0.017453292519943295;
    local_34 = dVar10;
    __libm_sse2_sin_precise();
    local_28 = (Stats *)(float)(dVar10 * (double)local_24);
    __libm_sse2_cos_precise();
    local_34._4_4_ = (float)(local_34 * (double)local_24);
    local_34._0_4_ = (float)local_28;
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    cocos2d::Vec2::operator+((Vec2 *)&local_3c,(Vec2 *)&local_44);
    pbVar8 = (std::string *)(param_1 + 0x238);
    // [seh] local_8 = 2;
    this_00 = (std::string *)(local_2c + 0x68);
    *(double *)(local_2c + 0x28) = (double)local_44;
    *(double *)(local_2c + 0x30) = (double)local_40;
    if (this_00 != pbVar8) {
      if (0xf < *(uint *)(param_1 + 0x24c)) {
        pbVar8 = *(std::string **)pbVar8;
      }
      ghidra::str::assign(this_00,(char *)pbVar8,*(uint *)(param_1 + 0x248));
      this_00 = (std::string *)extraout_ECX;
    }
    uStack_64 = 0x4e6c6a;
    ((LogSystem *)this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    pSVar9 = (Stats *)0x0;
    iVar6 = 0xc;
    local_28 = (Stats *)0x0;
    iVar7 = 0;
    local_24 = 1.68156e-44;
    do {
      if ((-1 < iVar7) &&
         (((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar2 < 1 || (iVar7 < iVar2)) &&
          (*(int *)(iVar6 + *(int *)(param_1 + 0x1f8)) != 0)))) {
        (*(CargoHold **)(local_2c + 0xe8))->addPod((int)pSVar9);
        uVar1 = **(undefined8 **)(iVar6 + *(int *)(param_1 + 0x1f8));
        puVar3 = *(undefined2 **)((int)local_24 + *(int *)(local_2c + 0xe8));
        local_20._0_2_ = (undefined2)uVar1;
        *puVar3 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
        *(undefined4 *)(*(int *)((int)local_24 + *(int *)(local_2c + 0xe8)) + 4) =
             *(undefined4 *)(*(int *)(iVar6 + *(int *)(param_1 + 0x1f8)) + 4);
        *(undefined4 *)(*(int *)((int)local_24 + *(int *)(local_2c + 0xe8)) + 8) =
             *(undefined4 *)(*(int *)(iVar6 + *(int *)(param_1 + 0x1f8)) + 8);
        local_34._4_4_ = *(float *)(param_1 + 0x1f8);
        local_20 = uVar1;
        if (((*(int *)((int)local_34._4_4_ + 8) < 1) || (iVar7 < *(int *)((int)local_34._4_4_ + 8)))
           && (*(void **)(iVar6 + (int)local_34._4_4_) != (void *)0x0)) {
          operator_delete(*(void **)(iVar6 + (int)local_34._4_4_),(nothrow_t *)0xc);
          *(undefined4 *)(iVar6 + (int)local_34._4_4_) = 0;
        }
        pSVar9 = local_28 + 1;
        local_24 = (float)((int)local_24 + 4);
        local_28 = pSVar9;
      }
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar6 < 0x44);
    local_34 = (double)CONCAT44(local_6c,(float)local_34);
    local_6c[0] = (std::string)0x0;
    ghidra::str::assign(local_6c,"cargo_jettisons",0xf);
    // [seh] local_8._0_1_ = 3;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      local_28 = operator_new(0x58);
      // [seh] local_8._0_1_ = 4;
      Singleton<Stats>::instance = (Stats *)new ((void *)(local_28)) Stats();
    }
    // [seh] local_8._0_1_ = 2;
    (Singleton<Stats>::instance)->addStat();
    local_34 = (double)CONCAT44(&stack0xffffff90,(float)local_34);
    uStack_7c = 0x4e6ded;
    ghidra::str::assign((std::string *)&stack0xffffff90,"",0);
    local_28 = (Stats *)local_88;
    // [seh] local_8._0_1_ = 5;
    local_88[0] = (std::string)0x0;
    uStack_94 = 0x4e6e16;
    ghidra::str::assign(local_88,"cargo_jettisons",0xf);
    // [seh] local_8._0_1_ = 6;
    local_a0[0] = (std::string)0x0;
    ghidra::str::assign(local_a0,"play",4);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    Analytics::logEvent();
    iVar6 = -1;
    SVar12 = 0x22;
    uStack_64 = 0x4e6e4f;
    this_ = ghidra::any_singleton();
    uStack_64 = 0x4e6e56;
    (this_)->playSound(param_1, SVar12, iVar6);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar5 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// Ghidra: bool __cdecl ShipInterface::doTransferCargoFromShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTransferCargoFromShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  int iVar2;
  SoundEngine *this_;
  std::string local_24 [8];
  undefined4 uStack_1c;
  Sound SVar3;
  
  local_24[0] = (std::string)0x0;
  ghidra::str::assign(local_24,"",0);
  bVar1 = ShipData::checkCanGrappleFromShip(param_1,0);
  if (!bVar1) {
    return false;
  }
  iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                    (*(ComponentInterfaceInstance **)
                      (*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0xc));
  *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x6c) =
       *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 8) + 0x104) *
       (((float)iVar2 / 100.0 - 1.0) * -1.0 + 1.0);
  *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x34) = *(int *)(param_1 + 0x1ec) + 1;
  uStack_1c = 0x4e6f32;
  debugPrint("GAME","Beginning transfer from ship cargo slot %d to moored vessel");
  iVar2 = -1;
  SVar3 = 8;
  uStack_1c = 0x4e6f3f;
  this_ = ghidra::any_singleton();
  uStack_1c = 0x4e6f46;
  (this_)->playSound(param_1, SVar3, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTransferCargoFromMoored(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTransferCargoFromMoored(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  int iVar2;
  SoundEngine *this_;
  std::string local_24 [8];
  undefined4 uStack_1c;
  Sound SVar3;
  
  local_24[0] = (std::string)0x0;
  ghidra::str::assign(local_24,"",0);
  bVar1 = ShipData::checkCanGrappleFromMoored(param_1,0);
  if (!bVar1) {
    return false;
  }
  iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                    (*(ComponentInterfaceInstance **)
                      (*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0xc));
  *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x6c) =
       *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 8) + 0x104) *
       (((float)iVar2 / 100.0 - 1.0) * -1.0 + 1.0);
  *(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x34) = ~*(uint *)(param_1 + 0x1f0);
  uStack_1c = 0x4e7003;
  debugPrint("GAME","Beginning transfer from moored cargo slot %d to vessel");
  iVar2 = -1;
  SVar3 = 8;
  uStack_1c = 0x4e7010;
  this_ = ghidra::any_singleton();
  uStack_1c = 0x4e7017;
  (this_)->playSound(param_1, SVar3, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doHack(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doHack(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  LogSystem *this;
  void *pvVar4;
  nothrow_t *pnVar5;
  std::string local_50 [4];
  undefined4 uStack_4c;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b43b8;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_50[0] = (std::string)0x0;
  ghidra::str::assign(local_50,"",0);
  bVar1 = ShipData::checkCanHack(param_1,0);
  if (bVar1) {
    iVar3 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)
                        (*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0xc));
    *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c) =
         *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 8) + 0x104) *
         (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x62) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x18) =
         *(undefined4 *)(*(int *)(param_1 + 0x194) + 0x130);
    (*(SensorData **)(param_1 + 0x194))->describe(SUB41(local_2c,0), '\0');
    // [seh] local_8 = 0;
    uStack_4c = 0x4e7124;
    (this)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000002);
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_4c = 0x4e719b;
    debugPrint("DETAIL","Security attack begun, time to completion %f seconds");
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __cdecl ShipInterface::doRepairHullAtDepot(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRepairHullAtDepot(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  SoundEngine *pSVar2;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  ShipMechanics *extraout_ECX_02;
  ShipMechanics *pSVar3;
  undefined4 extraout_ECX_03;
  LogSystem *this;
  std::string local_28 [8];
  undefined4 uStack_20;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  
  local_28[0] = (std::string)0x0;
  ghidra::str::assign(local_28,"",0);
  bVar1 = ShipData::checkCanRepairHullAtDepot(param_1,0);
  if (bVar1) {
    pSVar3 = extraout_ECX;
    if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(1);
      pSVar3 = extraout_ECX_00;
    }
    iVar6 = (pSVar3)->getRepairPoints(param_1);
    if (iVar6 * 5 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      pSVar3 = extraout_ECX_01;
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        pSVar3 = extraout_ECX_02;
      }
      (pSVar3)->performHullRepairAll(param_1);
      local_28[0] = (std::string)0x0;
      ghidra::str::assign(local_28,"Repair",6);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX_03, iVar6 * -5);
      iVar6 = -1;
      SVar5 = 8;
      uStack_20 = 0x4e72a9;
      pSVar4 = param_1;
      pSVar2 = ghidra::any_singleton();
      uStack_20 = 0x4e72b0;
      (pSVar2)->playSound(pSVar4, SVar5, iVar6);
      uStack_20 = 0x4e72c2;
      (this)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
      return true;
    }
  }
  iVar6 = -1;
  SVar5 = 10;
  uStack_20 = 0x4e7204;
  pSVar2 = ghidra::any_singleton();
  uStack_20 = 0x4e720b;
  (pSVar2)->playSound(param_1, SVar5, iVar6);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doRepairModulesAtDepot(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRepairModulesAtDepot(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  undefined4 *puVar1;
  ShipMechanics *pSVar2;
  bool bVar3;
  SoundEngine *pSVar4;
  int iVar5;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this_;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX_01;
  LogSystem *this_00;
  uint uVar8;
  std::string local_30 [8];
  undefined4 uStack_28;
  Ship *pSVar9;
  Sound SVar10;
  int iVar11;
  
  local_30[0] = (std::string)0x0;
  ghidra::str::assign(local_30,"",0);
  bVar3 = ShipData::checkCanRepairHullAtDepot(param_1,0);
  if (bVar3) {
    this_ = extraout_ECX;
    if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(1);
      this_ = extraout_ECX_00;
    }
    pSVar2 = ghidra::Singleton<void>::instance;
    iVar11 = (this_)->moduleRepairCost(param_1);
    if (iVar11 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      if (pSVar2 == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
      }
      uVar8 = 0;
      iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + uVar8 * 4);
          iVar7 = 0xc;
          do {
            iVar5 = *(int *)(iVar6 + 0xc);
            puVar1 = *(undefined4 **)(iVar5 + -8 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + -4 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            if (*(undefined4 **)(iVar7 + iVar5) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar7 + iVar5) = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 4 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 8 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0xc + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x10 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x14 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x18 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar6 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x1c + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
            }
            iVar7 = iVar7 + 0x28;
          } while (iVar7 < 0x5c);
          uVar8 = uVar8 + 1;
          iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
        } while (uVar8 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar6 >> 2));
      }
      local_30[0] = (std::string)0x0;
      ghidra::str::assign(local_30,"Repair",6);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX_01, -iVar11);
      iVar11 = -1;
      SVar10 = 8;
      uStack_28 = 0x4e74b0;
      pSVar9 = param_1;
      pSVar4 = ghidra::any_singleton();
      uStack_28 = 0x4e74b7;
      (pSVar4)->playSound(pSVar9, SVar10, iVar11);
      uStack_28 = 0x4e74c9;
      (this_00)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000001);
      return true;
    }
  }
  iVar11 = -1;
  SVar10 = 10;
  uStack_28 = 0x4e7317;
  pSVar4 = ghidra::any_singleton();
  uStack_28 = 0x4e731e;
  (pSVar4)->playSound(param_1, SVar10, iVar11);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doRearmAtDepot(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRearmAtDepot(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffac[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *this_;
  bool bVar1;
  SoundEngine *pSVar2;
  int iVar3;
  WeaponClass *pWVar4;
  void *pvVar5;
  undefined4 extraout_ECX;
  nothrow_t *pnVar6;
  std::string local_50 [8];
  undefined4 uStack_48;
  Sound SVar7;
  int iVar8;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  ShipMechanics *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0908;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_50[0] = (std::string)0x0;
  ghidra::str::assign(local_50,"",0);
  bVar1 = ShipData::checkCanRearmAtDepot(param_1);
  if (bVar1) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_2c,"m10",3);
    // [seh] local_8 = 0;
    if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(1);
      local_14 = ghidra::Singleton<void>::instance;
    }
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    if (0x4f < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_2c,"m10",3);
      // [seh] local_8 = 1;
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        local_14 = ghidra::Singleton<void>::instance;
      }
      // [seh] local_8 = 2;
      if ((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
        this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x20);
        iVar8 = *(int *)((char *)this_ + 8);
        if (*(int *)(iVar8 + 4) == 8) {
          iVar3 = (this_)->getHousedObjectCount();
          if (0 < (int)(*(float *)(iVar8 + 0x104) - (float)iVar3)) {
            iVar8 = -1;
            ghidra::str::assign((std::string *)&stack0xffffffac,"m10",3);
            pWVar4 = GameData::getWeaponClassWithIdentifier();
            (param_1)->addWeapon(pWVar4, iVar8);
          }
        }
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar6 = (nothrow_t *)(local_18 + 1);
        pvVar5 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)local_2c[0] + -4);
          pnVar6 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar6);
      }
      local_50[0] = (std::string)0x0;
      ghidra::str::assign(local_50,"m10",3);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX);
      iVar8 = -1;
      SVar7 = 8;
      uStack_48 = 0x4e7723;
      pSVar2 = ghidra::any_singleton();
      uStack_48 = 0x4e772a;
      (pSVar2)->playSound(param_1, SVar7, iVar8);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  iVar8 = -1;
  SVar7 = 10;
  uStack_48 = 0x4e7545;
  pSVar2 = ghidra::any_singleton();
  uStack_48 = 0x4e754c;
  (pSVar2)->playSound(param_1, SVar7, iVar8);
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doBuyCMAtDepot(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doBuyCMAtDepot(Ship * param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  bool bVar2;
  SoundEngine *pSVar3;
  undefined4 extraout_ECX;
  std::string local_24 [8];
  undefined4 uStack_1c;
  Sound SVar4;
  int iVar5;
  
  local_24[0] = (std::string)0x0;
  ghidra::str::assign(local_24,"",0);
  bVar2 = ShipData::checkCanBuyCMAtDepot(param_1,0);
  if (bVar2) {
    if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(1);
    }
    if (0x18 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
      }
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 8) + 0x68);
      *piVar1 = *piVar1 + 1;
      local_24[0] = (std::string)0x0;
      ghidra::str::assign(local_24,"CM",2);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, 0xffffffe7);
      iVar5 = -1;
      SVar4 = 8;
      uStack_1c = 0x4e781d;
      pSVar3 = ghidra::any_singleton();
      uStack_1c = 0x4e7824;
      (pSVar3)->playSound(param_1, SVar4, iVar5);
      return true;
    }
  }
  iVar5 = -1;
  SVar4 = 10;
  uStack_1c = 0x4e7783;
  pSVar3 = ghidra::any_singleton();
  uStack_1c = 0x4e778a;
  (pSVar3)->playSound(param_1, SVar4, iVar5);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMapClick(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMapClick(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  SensorData *pSVar2;
  int *piVar3;
  StellarObject *pSVar4;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c094b;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_18 = (float)param_2;
  local_14 = (float)param_3;
  // [seh] local_8 = 0;
  debugPrint("GAME","World pos = %.2f, %.2f",(double)param_2);
  local_20 = 0;
  local_1c = 0;
  // [seh] local_8._0_1_ = 1;
  cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_20);
  debugPrint("GAME","dist from origin = %f");
  // [seh] local_8._0_1_ = 0;
  pSVar4 = (StellarObject *)0x0;
  pSVar2 = (param_1)->getSensorDataNear();
  if (pSVar2 == (SensorData *)0x0) {
    ghidra::any_singleton();
    pSVar4 = GameData::getStellarObjectWithinDistance();
    if (pSVar4 != (StellarObject *)0x0) {
      if (*(int *)(pSVar4 + 0x54) != 1) {
        // [seh] local_8._0_1_ = 2;
        piVar3 = ghidra::lib::map__operator_x5b_x5d
                           ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)(param_1 + 0x20));
        // [seh] local_8._0_1_ = 0;
        bVar1 = ((FogInstance *)*piVar3)->fogObscuresPoint();
        if (bVar1) {
          pSVar4 = (StellarObject *)0x0;
          goto LAB_004e7aec;
        }
      }
      debugPrint("GAME","Selected stellar object.");
      *(StellarObject **)(param_1 + 0x1a4) = pSVar4;
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(pSVar4 + 0x38);
      local_20 = 0xc61c3c00;
      local_1c = 0xc61c3c00;
      *(undefined4 *)(param_1 + 0x1b8) = 0xc61c3c00;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1bc) = 0xc61c3c00;
      if (param_1[0x1b0] != (byte)0x0) {
        *(undefined4 *)(param_1 + 0x194) = 0;
        *(undefined4 *)(param_1 + 400) = 0xffffffff;
        *(StellarObject **)(param_1 + 0x1ac) = pSVar4;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(pSVar4 + 0x38);
      }
    }
  }
  else {
    *(SensorData **)(param_1 + 0x19c) = pSVar2;
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)pSVar2;
    if (param_1[0x1b0] != (byte)0x0) {
      *(SensorData **)(param_1 + 0x194) = pSVar2;
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)pSVar2;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
    }
    local_20 = 0xc61c3c00;
    local_1c = 0xc61c3c00;
    *(undefined4 *)(param_1 + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = 0xc61c3c00;
  }
LAB_004e7aec:
  debugPrint("GAME","Clicked on %f, %f",(double)local_18);
  if ((pSVar4 == (StellarObject *)0x0) && (pSVar2 == (SensorData *)0x0)) {
    *(float *)(param_1 + 0x1b8) = local_18;
    *(float *)(param_1 + 0x1bc) = local_14;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    if (param_1[0x1b0] != (byte)0x0) {
      *(undefined4 *)(param_1 + 400) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doConnectModule(Ship *param_1,ShipModule *param_2)
bool ShipInterface::doConnectModule(Ship * param_1, ShipModule * param_2)

{
  char cVar1;
  SoundEngine *pSVar2;
  FlagManager *pFVar3;
  Ship *in_ECX;
  LogSystem *this;
  ShipModule *in_EDX;
  std::string abStack_3c [12];
  undefined4 uStack_30;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb148;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (in_EDX != (ShipModule *)0x0) {
    if ((*(int *)(*(int *)(in_EDX + 8) + 4) == 1) && (*(int *)(in_ECX + 0xd4) == 3)) {
      iVar6 = -1;
      SVar5 = 10;
      uStack_30 = 0x4e7bf9;
      pSVar4 = in_ECX;
      pSVar2 = ghidra::any_singleton();
      uStack_30 = 0x4e7c00;
      (pSVar2)->playSound(pSVar4, SVar5, iVar6);
      uStack_30 = 0x4e7c12;
      (this)->addLogLine(*(LogPriority *)(in_ECX + 0x224), &DAT_00000002);
    }
    else {
      cVar1 = (**(code **)(*(int *)in_EDX + 0x14))();
      if (cVar1 == '\0') {
        (in_EDX)->connect(in_ECX);
        if ((*(int *)(g_gameData + 0xcc) != 0) &&
           (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
          cVar1 = (**(code **)(*(int *)in_EDX + 0x10))();
          if (cVar1 != '\0') {
            abStack_3c[0] = (std::string)0x0;
            ghidra::str::assign(abStack_3c,"reconnected_working_module",0x1a);
            // [seh] local_8 = 0;
            pFVar3 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            (pFVar3)->setFlag();
          }
        }
        iVar6 = -1;
        SVar5 = 8;
        uStack_30 = 0x4e7cac;
        pSVar2 = ghidra::any_singleton();
        uStack_30 = 0x4e7cb3;
        (pSVar2)->playSound(in_ECX, SVar5, iVar6);
        // [seh] ExceptionList = local_10;
        return true;
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doToggleReactor(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleReactor(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  ShipModule *unaff_EBX;
  uint uVar2;
  Ship *unaff_ESI;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  
  if (param_1 != (Ship *)0x0) {
    iVar5 = *(int *)(param_1 + 0x40);
    uVar2 = 0;
    if (*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2 != 0) {
      do {
        this_ = *(ShipModule **)(*(int *)(iVar5 + 0x3c) + uVar2 * 4);
        if (*(int *)(*(int *)((char *)this_ + 8) + 4) == 1) {
          if (((char *)this_)[99] == (byte)0x0) {
            doConnectModule(unaff_ESI,unaff_EBX);
          }
          else if ((this_ != (ShipModule *)0x0) &&
                  (cVar1 = (**(code **)(*(int *)this_ + 0x14))(), cVar1 == '\0')) {
            (this_)->disconnect(param_1);
            iVar5 = -1;
            SVar4 = 9;
            pSVar3 = param_1;
            this_00 = ghidra::any_singleton();
            (this_00)->playSound(pSVar3, SVar4, iVar5);
          }
        }
        iVar5 = *(int *)(param_1 + 0x40);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2));
    }
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectReactor(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectReactor(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  uint uVar2;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  
  if (param_1 != (Ship *)0x0) {
    iVar5 = *(int *)(param_1 + 0x40);
    uVar2 = 0;
    if (*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2 != 0) {
      do {
        this_ = *(ShipModule **)(*(int *)(iVar5 + 0x3c) + uVar2 * 4);
        if (((*(int *)(*(int *)((char *)this_ + 8) + 4) == 1) && (this_ != (ShipModule *)0x0)) &&
           (cVar1 = (**(code **)(*(int *)this_ + 0x14))(), cVar1 == '\0')) {
          (this_)->disconnect(param_1);
          iVar5 = -1;
          SVar4 = 9;
          pSVar3 = param_1;
          this_00 = ghidra::any_singleton();
          (this_00)->playSound(pSVar3, SVar4, iVar5);
        }
        iVar5 = *(int *)(param_1 + 0x40);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2));
    }
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectReactor(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectReactor(Ship * param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  Ship *unaff_ESI;
  uint uVar2;
  ShipModule *unaff_EDI;
  
  if (param_1 == (Ship *)0x0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2 != 0) {
    do {
      if (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x3c) + uVar2 * 4) + 8) + 4) == 1) {
        doConnectModule(unaff_ESI,unaff_EDI);
        iVar1 = *(int *)(param_1 + 0x40);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doToggleHelm(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleHelm(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(7, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectHelm(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectHelm(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x24);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectHelm(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectHelm(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(7, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleRCS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleRCS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(9, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectRCS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectRCS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x18);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectRCS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectRCS(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(9, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleMainDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleMainDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(0xb, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectMainDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectMainDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x10);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectMainDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectMainDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(0xb, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleComms(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleComms(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(0xe, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectComms(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectComms(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x1c);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectComms(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectComms(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(0xe, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleWeap(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleWeap(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(8, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectWeap(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectWeap(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x20);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectWeap(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectWeap(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(8, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleJumpDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleJumpDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(10, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectJumpDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectJumpDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x14);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectJumpDrive(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectJumpDrive(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(10, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleBatt1(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleBatt1(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(0);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectBatt1(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectBatt1(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(0);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectBatt1(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectBatt1(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  ShipModule *pSVar2;
  
  pSVar2 = (*(SystemManager **)(param_1 + 0x40))->getBattery(0);
  if (pSVar2 == (ShipModule *)0x0) {
    return false;
  }
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleBatt2(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleBatt2(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(1);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectBatt2(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectBatt2(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(1);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectBatt2(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectBatt2(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  ShipModule *pSVar2;
  
  pSVar2 = (*(SystemManager **)(param_1 + 0x40))->getBattery(1);
  if (pSVar2 == (ShipModule *)0x0) {
    return false;
  }
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleBatt3(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleBatt3(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(2);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectBatt3(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectBatt3(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getBattery(2);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectBatt3(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectBatt3(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  ShipModule *pSVar2;
  
  pSVar2 = (*(SystemManager **)(param_1 + 0x40))->getBattery(2);
  if (pSVar2 == (ShipModule *)0x0) {
    return false;
  }
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleNavCom(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleNavCom(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(3, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectNavCom(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectNavCom(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x28);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectNavCom(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectNavCom(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(3, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doToggleSensors(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doToggleSensors(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  bool bVar2;
  ShipModule *this_;
  SoundEngine *this_00;
  Sound SVar3;
  int iVar4;
  
  this_ = (*(SystemManager **)(param_1 + 0x40))->getModule(4, false);
  if (this_ != (ShipModule *)0x0) {
    if (((char *)this_)[99] == (byte)0x0) {
      bVar2 = doConnectModule(param_1,(ShipModule *)param_2);
      return bVar2;
    }
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar4 = -1;
      SVar3 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar3, iVar4);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectSensors(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectSensors(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  ShipModule *this_;
  char cVar1;
  SoundEngine *this_00;
  Sound SVar2;
  int iVar3;
  
  this_ = (ShipModule *)**(undefined4 **)(param_1 + 0x40);
  if (this_ != (ShipModule *)0x0) {
    cVar1 = (**(code **)(*(int *)this_ + 0x14))();
    if (cVar1 == '\0') {
      (this_)->disconnect(param_1);
      iVar3 = -1;
      SVar2 = 9;
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(param_1, SVar2, iVar3);
      return true;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doConnectSensors(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectSensors(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  
  (*(SystemManager **)(param_1 + 0x40))->getModule(4, false);
  bVar1 = doConnectModule(param_1,(ShipModule *)param_2);
  return bVar1;
}


// Ghidra: bool __cdecl ShipInterface::doTurnOnShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTurnOnShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  
  if ((param_1 != (Ship *)0x0) && (param_1[0xd0] == (byte)0x0)) {
    param_1[0xd0] = (byte)0x1;
    (*(SystemManager **)(param_1 + 0x40))->resetHardware(100);
    iVar4 = -1;
    SVar3 = 8;
    pSVar2 = param_1;
    pSVar1 = ghidra::any_singleton();
    (pSVar1)->playSound(pSVar2, SVar3, iVar4);
    iVar4 = -1;
    SVar3 = 0xc;
    pSVar1 = ghidra::any_singleton();
    (pSVar1)->playSound(param_1, SVar3, iVar4);
    return true;
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doTurnOffShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTurnOffShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Sound SVar1;
  int iVar2;
  
  if (param_1 == (Ship *)0x0) {
    return false;
  }
  iVar2 = -1;
  SVar1 = 9;
  param_1[0xd0] = (byte)0x0;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSelectDown(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSelectDown(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  SensorManager *in_ECX;
  SensorManager *extraout_ECX;
  Sound SVar1;
  int iVar2;
  
  if (ghidra::Singleton<void>::instance == (SensorManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(4);
    *(undefined ***)ghidra::Singleton<void>::instance = SensorManager::vftable;
    in_ECX = extraout_ECX;
  }
  (in_ECX)->down(param_1);
  iVar2 = -1;
  SVar1 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSelectUp(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSelectUp(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  SensorManager *in_ECX;
  SensorManager *extraout_ECX;
  Sound SVar1;
  int iVar2;
  
  if (ghidra::Singleton<void>::instance == (SensorManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(4);
    *(undefined ***)ghidra::Singleton<void>::instance = SensorManager::vftable;
    in_ECX = extraout_ECX;
  }
  (in_ECX)->up(param_1);
  iVar2 = -1;
  SVar1 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSelectRight(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSelectRight(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  SensorManager *extraout_ECX;
  SensorManager *extraout_ECX_00;
  SensorManager *this_00;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: sensor select right",pSVar1);
  this_00 = extraout_ECX;
  if (ghidra::Singleton<void>::instance == (SensorManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(4);
    *(undefined ***)ghidra::Singleton<void>::instance = SensorManager::vftable;
    this_00 = extraout_ECX_00;
  }
  (this_00)->right(param_1);
  iVar3 = -1;
  SVar2 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSelectLeft(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSelectLeft(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  SensorManager *extraout_ECX;
  SensorManager *extraout_ECX_00;
  SensorManager *this_00;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: sensor select left",pSVar1);
  this_00 = extraout_ECX;
  if (ghidra::Singleton<void>::instance == (SensorManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(4);
    *(undefined ***)ghidra::Singleton<void>::instance = SensorManager::vftable;
    this_00 = extraout_ECX_00;
  }
  (this_00)->left(param_1);
  iVar3 = -1;
  SVar2 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSetNavAndSensorLinked(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSetNavAndSensorLinked(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: set nav and sensor linked.",pSVar1);
  param_1[0x1b0] = (byte)0x1;
  iVar3 = -1;
  SVar2 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorUnsetNavAndSensorLinked(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorUnsetNavAndSensorLinked(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: set nav and sensor unlinked.",pSVar1);
  param_1[0x1b0] = (byte)0x0;
  iVar3 = -1;
  SVar2 = 9;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSetHistoryLocked(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSetHistoryLocked(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 8;
  param_1[0x1b1] = (byte)0x1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorUnsetHistoryLocked(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorUnsetHistoryLocked(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 9;
  param_1[0x1b1] = (byte)0x0;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorSetAuto(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorSetAuto(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: sensors set to auto.",pSVar1);
  param_1[0x1b2] = (byte)0x1;
  if (param_1[0x1b0] != (byte)0x0) {
    param_1[0x1b0] = (byte)0x0;
  }
  iVar3 = -1;
  SVar2 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSensorUnsetAuto(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSensorUnsetAuto(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Ship *pSVar1;
  SoundEngine *this_;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("DETAIL","%s: sensors turned off auto.",pSVar1);
  param_1[0x1b2] = (byte)0x0;
  iVar3 = -1;
  SVar2 = 9;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube(Ship * param_1, int param_2, int param_3, int param_4)

{
  float *pfVar1;
  char cVar2;
  SoundEngine *pSVar3;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      if ((0 < param_2) &&
         (pfVar1 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104),
         (float)param_2 < *pfVar1 || (float)param_2 == *pfVar1)) {
        iVar6 = -1;
        SVar5 = 8;
        pSVar4 = param_1;
        pSVar3 = ghidra::any_singleton();
        (pSVar3)->playSound(pSVar4, SVar5, iVar6);
        *(int *)(param_1 + 0x1b4) = param_2;
        return true;
      }
      iVar6 = -1;
      SVar5 = 10;
      pSVar3 = ghidra::any_singleton();
      (pSVar3)->playSound(param_1, SVar5, iVar6);
      return false;
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doDeselectTube(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDeselectTube(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *pSVar1;
  Sound SVar2;
  int iVar3;
  
  iVar3 = -1;
  SVar2 = 9;
  pSVar1 = param_1;
  this_ = ghidra::any_singleton();
  (this_)->playSound(pSVar1, SVar2, iVar3);
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube1(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube1(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  float fVar1;
  char cVar2;
  SoundEngine *this_;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this_ = ghidra::any_singleton();
      if (1.0 <= fVar1) {
        (this_)->playSound(param_1, 8, -1);
        *(undefined4 *)(param_1 + 0x1b4) = 1;
        return true;
      }
      (this_)->playSound(param_1, 10, -1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube2(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube2(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  float fVar1;
  char cVar2;
  SoundEngine *this_;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this_ = ghidra::any_singleton();
      if (2.0 <= fVar1) {
        (this_)->playSound(param_1, 8, -1);
        *(undefined4 *)(param_1 + 0x1b4) = 2;
        return true;
      }
      (this_)->playSound(param_1, 10, -1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube3(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube3(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  float fVar1;
  char cVar2;
  SoundEngine *this_;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this_ = ghidra::any_singleton();
      if (3.0 <= fVar1) {
        (this_)->playSound(param_1, 8, -1);
        *(undefined4 *)(param_1 + 0x1b4) = 3;
        return true;
      }
      (this_)->playSound(param_1, 10, -1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube4(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube4(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  float fVar1;
  char cVar2;
  SoundEngine *this_;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this_ = ghidra::any_singleton();
      if (4.0 <= fVar1) {
        (this_)->playSound(param_1, 8, -1);
        *(undefined4 *)(param_1 + 0x1b4) = 4;
        return true;
      }
      (this_)->playSound(param_1, 10, -1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSelectTube5(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSelectTube5(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  float fVar1;
  char cVar2;
  SoundEngine *this_;
  
  if (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if (cVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this_ = ghidra::any_singleton();
      if (5.0 <= fVar1) {
        (this_)->playSound(param_1, 8, -1);
        *(undefined4 *)(param_1 + 0x1b4) = 5;
        return true;
      }
      (this_)->playSound(param_1, 10, -1);
    }
  }
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicToMenu(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicToMenu(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  TradeEngine *this_;
  SoundEngine *this_00;
  Sound SVar1;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  iVar2 = -1;
  SVar1 = 9;
  *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10c) = 0;
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(param_1, SVar1, iVar2);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicRepair(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicRepair(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *pSVar2;
  uint uVar3;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->performRepair();
  if (bVar1) {
    iVar6 = -1;
    SVar5 = 0x2d;
    pSVar4 = param_1;
    pSVar2 = ghidra::any_singleton();
    (pSVar2)->playSound(pSVar4, SVar5, iVar6);
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar6 = uVar3 + 1;
    SVar5 = 0x18;
    pSVar2 = ghidra::any_singleton();
    (pSVar2)->playSound(param_1, SVar5, iVar6);
    // [seh] ExceptionList = local_10;
    return true;
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicBuyPod(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicBuyPod(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *pSVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  std::string local_38 [8];
  undefined4 uStack_30;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0322;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_38[0] = (std::string)0x0;
  ghidra::str::assign(local_38,"",0);
  bVar1 = ShipData::checkMechanicCanBuyPod(param_1,0);
  if (bVar1) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      this_ = operator_new(300);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    if ((*(int *)(ghidra::Singleton<void>::instance + 0x10c) == 2) &&
       (iVar6 = *(int *)(ghidra::Singleton<void>::instance + 0x114), iVar6 != -1)) {
      if ((*(int *)(*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) + iVar6 * 4 + 0xc) == 0) &&
         (99 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        bVar1 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->addPod(iVar6);
        if (bVar1) {
          local_38[0] = (std::string)0x0;
          ghidra::str::assign(local_38,"Pod",3);
          (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, 0xffffff9c)
          ;
          iVar6 = -1;
          SVar5 = 0x2d;
          uStack_30 = 0x4e9067;
          pSVar4 = param_1;
          pSVar2 = ghidra::any_singleton();
          uStack_30 = 0x4e906e;
          (pSVar2)->playSound(pSVar4, SVar5, iVar6);
          iVar6 = -1;
          SVar5 = 8;
          uStack_30 = 0x4e9078;
          pSVar4 = param_1;
          pSVar2 = ghidra::any_singleton();
          uStack_30 = 0x4e907f;
          (pSVar2)->playSound(pSVar4, SVar5, iVar6);
          uVar3 = rand();
          uVar3 = uVar3 & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          iVar6 = uVar3 + 1;
          SVar5 = 0x18;
          uStack_30 = 0x4e909b;
          pSVar2 = ghidra::any_singleton();
          uStack_30 = 0x4e90a2;
          (pSVar2)->playSound(param_1, SVar5, iVar6);
          // [seh] ExceptionList = local_10;
          return true;
        }
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicSellPod(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicSellPod(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *pSVar2;
  uint uVar3;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0352;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,"",0);
  bVar1 = ShipData::checkMechanicCanSellPod(param_1,0);
  if (bVar1) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      this_ = operator_new(300);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    bVar1 = (ghidra::Singleton<void>::instance)->performSellPod();
    if (bVar1) {
      iVar6 = -1;
      SVar5 = 0x2d;
      uStack_2c = 0x4e9174;
      pSVar4 = param_1;
      pSVar2 = ghidra::any_singleton();
      uStack_2c = 0x4e917b;
      (pSVar2)->playSound(pSVar4, SVar5, iVar6);
      iVar6 = -1;
      SVar5 = 9;
      uStack_2c = 0x4e9185;
      pSVar4 = param_1;
      pSVar2 = ghidra::any_singleton();
      uStack_2c = 0x4e918c;
      (pSVar2)->playSound(pSVar4, SVar5, iVar6);
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      iVar6 = uVar3 + 1;
      SVar5 = 0x18;
      uStack_2c = 0x4e91a8;
      pSVar2 = ghidra::any_singleton();
      uStack_2c = 0x4e91af;
      (pSVar2)->playSound(param_1, SVar5, iVar6);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicUpgradePod(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicUpgradePod(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *pSVar2;
  uint uVar3;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0352;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,"",0);
  bVar1 = ShipData::checkMechanicCanUpgradePod(param_1,param_2);
  if (bVar1) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      this_ = operator_new(300);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    bVar1 = (ghidra::Singleton<void>::instance)->performUpgradePod(param_2);
    if (bVar1) {
      iVar6 = -1;
      SVar5 = 0x2d;
      uStack_2c = 0x4e9288;
      pSVar4 = param_1;
      pSVar2 = ghidra::any_singleton();
      uStack_2c = 0x4e928f;
      (pSVar2)->playSound(pSVar4, SVar5, iVar6);
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      iVar6 = uVar3 + 1;
      SVar5 = 0x18;
      uStack_2c = 0x4e92ab;
      pSVar2 = ghidra::any_singleton();
      uStack_2c = 0x4e92b2;
      (pSVar2)->playSound(param_1, SVar5, iVar6);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicCancelModule(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicCancelModule(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  TradeEngine *this_;
  SoundEngine *this_00;
  std::string local_30 [8];
  undefined4 uStack_28;
  Sound SVar2;
  int iVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_30[0] = (std::string)0x0;
  ghidra::str::assign(local_30,"",0);
  bVar1 = ShipData::checkMechanicCanUpgradePod(param_1,param_2);
  if (bVar1) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      this_ = operator_new(300);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    if (*(int *)(ghidra::Singleton<void>::instance + 0x118) != -1) {
      iVar3 = -1;
      SVar2 = 9;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x118) = 0xffffffff;
      uStack_28 = 0x4e9389;
      this_00 = ghidra::any_singleton();
      uStack_28 = 0x4e9390;
      (this_00)->playSound(param_1, SVar2, iVar3);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicModuleTransaction(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicModuleTransaction(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  std::string bVar1;
  bool bVar2;
  TradeEngine *this_;
  SoundEngine *pSVar3;
  std::string local_34 [8];
  undefined4 uStack_2c;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0352;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,"",0);
  bVar1 = (std::string)ShipData::checkMechanicCanBuyModule(param_1,0);
  if (!(bool)bVar1) {
    local_34[0] = bVar1;
    ghidra::str::assign(local_34,"",0);
    bVar2 = ShipData::checkMechanicCanSellModule(param_1,0);
    if (!bVar2) {
      // [seh] ExceptionList = local_10;
      return false;
    }
  }
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
    // [seh] local_8 = 0xffffffff;
  }
  bVar2 = (ghidra::Singleton<void>::instance)->performModuleTransaction();
  if (!bVar2) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  iVar6 = -1;
  SVar5 = 0x2d;
  uStack_2c = 0x4e9490;
  pSVar4 = param_1;
  pSVar3 = ghidra::any_singleton();
  uStack_2c = 0x4e9497;
  (pSVar3)->playSound(pSVar4, SVar5, iVar6);
  iVar6 = -1;
  SVar5 = 8;
  uStack_2c = 0x4e94a1;
  pSVar3 = ghidra::any_singleton();
  uStack_2c = 0x4e94a8;
  (pSVar3)->playSound(param_1, SVar5, iVar6);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicBuyArmament(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicBuyArmament(Ship * param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  TradeEngine *pTVar5;
  WeaponClass *pWVar6;
  SoundEngine *pSVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 extraout_ECX_01;
  SaveHandler *this;
  std::string local_3c [8];
  undefined4 uStack_34;
  Ship *pSVar10;
  Sound SVar11;
  int iVar12;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c099c;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    pTVar5 = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar5)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  bVar4 = (ghidra::Singleton<void>::instance)->canBuyArmament(param_1, param_2);
  if (bVar4) {
    if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
      pTVar5 = operator_new(300);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar5)) TradeEngine();
      // [seh] local_8 = 0xffffffff;
    }
    if (param_2 == -1) {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8) + 0x68);
      *piVar1 = *piVar1 + 1;
      local_3c[0] = (std::string)0x0;
      ghidra::str::assign(local_3c,"CM",2);
      // [seh] local_8 = 2;
      uVar8 = extraout_ECX;
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        uVar8 = extraout_ECX_00;
      }
      // [seh] local_8 = 0xffffffff;
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(uVar8, 0xffffffe7);
    }
    else {
      pcVar3 = (&PTR_s_m10_005dfacc)[param_2];
      local_3c[0] = (std::string)0x0;
      pcVar9 = pcVar3;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      ghidra::str::assign(local_3c,pcVar3,(int)pcVar9 - (int)(pcVar3 + 1));
      pWVar6 = GameData::getWeaponClassWithIdentifier();
      (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar6, -1);
      ghidra::str::ctor(local_3c,(std::string *)pWVar6);
      BankAccount::addTransaction
                (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_01,-*(int *)(pWVar6 + 0x1a0));
      uStack_34 = 0x4e9689;
      debugPrint("WORLD","Bought weapon from tube %d");
      if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
        ghidra::any_singleton();
        (this)->saveGame();
      }
    }
    iVar12 = -1;
    SVar11 = 0x2d;
    uStack_34 = 0x4e96b1;
    pSVar10 = param_1;
    pSVar7 = ghidra::any_singleton();
    uStack_34 = 0x4e96b8;
    (pSVar7)->playSound(pSVar10, SVar11, iVar12);
    iVar12 = -1;
    SVar11 = 8;
    uStack_34 = 0x4e96c2;
    pSVar7 = ghidra::any_singleton();
    uStack_34 = 0x4e96c9;
    (pSVar7)->playSound(param_1, SVar11, iVar12);
    // [seh] ExceptionList = local_10;
    return true;
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doMechanicSellArmament(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMechanicSellArmament(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  bool bVar2;
  uint uVar3;
  TradeEngine *this_;
  TradeEngine *pTVar4;
  SoundEngine *pSVar5;
  Ship *pSVar6;
  Sound SVar7;
  int iVar8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  TradeEngine *local_8;
  
  pTVar4 = ghidra::Singleton<void>::instance;
  // [seh] local_8 = (TradeEngine *)0xffffffff;
  // [seh] puStack_c = &DAT_005c09e4;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = pTVar4;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  pTVar4 = ghidra::Singleton<void>::instance;
  // [seh] local_8 = (TradeEngine *)0xffffffff;
  if ((((param_1 != (Ship *)0x0) && (*(int *)(ghidra::Singleton<void>::instance + 0x10c) == 4)) &&
      (*(int *)(ghidra::Singleton<void>::instance + 0xf4) != -1)) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0,uVar3);
    if ((cVar1 != '\0') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c + *(int *)(pTVar4 + 0xf4) * 4) !=
        0)) {
      if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
        pTVar4 = operator_new(300);
        // [seh] local_8 = (TradeEngine *)0x1;
        ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar4)) TradeEngine();
        // [seh] local_8 = (TradeEngine *)0xffffffff;
      }
      bVar2 = (ghidra::Singleton<void>::instance)->performSellArmament();
      if (bVar2) {
        iVar8 = -1;
        SVar7 = 0x2d;
        pSVar6 = param_1;
        pSVar5 = ghidra::any_singleton();
        (pSVar5)->playSound(pSVar6, SVar7, iVar8);
        iVar8 = -1;
        SVar7 = 9;
        pSVar5 = ghidra::any_singleton();
        (pSVar5)->playSound(param_1, SVar7, iVar8);
        // [seh] ExceptionList = local_10;
        return true;
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doBuyShip(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doBuyShip(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  TradeEngine *this_;
  SoundEngine *pSVar1;
  std::string abStack_30 [8];
  undefined4 uStack_28;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b26a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
    this_ = operator_new(300);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(this_)) TradeEngine();
  }
  // [seh] local_8 = 0xffffffff;
  (ghidra::Singleton<void>::instance)->performBuyShip();
  ghidra::str::ctor
            (abStack_30,(std::string *)(*(int *)(g_gameData + 0xd0) + 0x68));
  GameData::setUniqueObjects();
  ghidra::str::ctor
            (abStack_30,(std::string *)(*(int *)(g_gameData + 0xd0) + 0x68));
  GameData::setUniqueObjects();
  iVar4 = -1;
  SVar3 = 0x2d;
  uStack_28 = 0x4e990f;
  pSVar2 = param_1;
  pSVar1 = ghidra::any_singleton();
  uStack_28 = 0x4e9916;
  (pSVar1)->playSound(pSVar2, SVar3, iVar4);
  iVar4 = -1;
  SVar3 = 8;
  uStack_28 = 0x4e9922;
  pSVar1 = ghidra::any_singleton();
  uStack_28 = 0x4e9929;
  (pSVar1)->playSound(param_1, SVar3, iVar4);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doNextTrack(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doNextTrack(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = ghidra::any_singleton();
  *(undefined4 *)(pSVar1 + 4) = 0;
  *(undefined4 *)(pSVar1 + 8) = 0x41200000;
  (pSVar1)->playNewTrack();
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doPrevTrack(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPrevTrack(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = ghidra::any_singleton();
  if (*(uint *)(pSVar1 + 100) != 0) {
    if (*(int *)(pSVar1 + 0x48) == 0) {
      (pSVar1)->playNewTrack();
    }
    else {
      FMOD::Channel::setPosition(*(uint *)(pSVar1 + 100),0);
      FMOD::ChannelControl::setPaused(SUB41(*(undefined4 *)(pSVar1 + 100),0));
    }
    FMOD::ChannelControl::setVolume(*(float *)(pSVar1 + 100));
    *(undefined4 *)(pSVar1 + 4) = 0;
    *(undefined4 *)(pSVar1 + 8) = 0x41200000;
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doPauseTrack(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doPauseTrack(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = ghidra::any_singleton();
  pSVar1[0x44] = (byte)0x0;
  if (*(int *)(pSVar1 + 100) != 0) {
    FMOD::ChannelControl::setPaused(SUB41(*(int *)(pSVar1 + 100),0));
  }
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doResumeTrack(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doResumeTrack(Ship * param_1, int param_2, int param_3, int param_4)

{
  SoundEngine *pSVar1;
  Sound SVar2;
  int iVar3;
  
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->resumeTrack();
  iVar3 = -1;
  SVar2 = 8;
  pSVar1 = ghidra::any_singleton();
  (pSVar1)->playSound(param_1, SVar2, iVar3);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doQuitToMenu(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doQuitToMenu(Ship * param_1, int param_2, int param_3, int param_4)

{
  PresentationInterface *pPVar1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0a12;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar1 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar1)) PresentationInterface();
  }
  pPVar1 = ghidra::Singleton<void>::instance;
  if (0.0 <= *(float *)(ghidra::Singleton<void>::instance + 0x2ac)) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  *(undefined4 *)(ghidra::Singleton<void>::instance + 0x2a4) = 0xb;
  *(undefined2 *)(pPVar1 + 0x2a0) = 0x101;
  *(undefined4 *)(pPVar1 + 0x29c) = 1;
  *(undefined4 *)(pPVar1 + 0x2ac) = 0x3f19999a;
  *(undefined4 *)(pPVar1 + 0x2a8) = 0x3f19999a;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doQuitToOS(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doQuitToOS(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  PresentationInterface *this_;
  SoundEngine *this_00;
  Director *this_01;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1272;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_ = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(this_)) PresentationInterface();
  }
  // [seh] local_8 = 0xffffffff;
  SteamAPI_Shutdown(uVar1);
  this_00 = ghidra::any_singleton();
  (this_00)->shutdown();
  this_01 = cocos2d::Director::getInstance();
  cocos2d::Director::end(this_01);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doRoomLeft(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRoomLeft(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  PresentationInterface *pPVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0a54;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar2 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar2)) PresentationInterface();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->hasForcedConversationPending();
  if (!bVar1) {
    if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
      pPVar2 = operator_new(0x418);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance =
           (PresentationInterface *)new ((void *)(pPVar2)) PresentationInterface();
      // [seh] local_8 = 0xffffffff;
    }
    (ghidra::Singleton<void>::instance)->changeRoom(-1);
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doRoomRight(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doRoomRight(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  PresentationInterface *pPVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0a54;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    pPVar2 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(pPVar2)) PresentationInterface();
  }
  // [seh] local_8 = 0xffffffff;
  bVar1 = (ghidra::Singleton<void>::instance)->hasForcedConversationPending();
  if (!bVar1) {
    if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
      pPVar2 = operator_new(0x418);
      // [seh] local_8 = 1;
      ghidra::Singleton<void>::instance =
           (PresentationInterface *)new ((void *)(pPVar2)) PresentationInterface();
      // [seh] local_8 = 0xffffffff;
    }
    (ghidra::Singleton<void>::instance)->changeRoom(1);
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTimeSlower(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTimeSlower(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  GameLogic *pGVar1;
  GameLogic *pGVar2;
  SoundEngine *this_;
  char acStack_98 [4];
  undefined4 uStack_94;
  Sound SVar3;
  int iVar4;
  
  pGVar2 = g_gameLogic;
  if (g_gameLogic[0x72] == (byte)0x0) {
    return false;
  }
  pGVar1 = g_gameLogic + 100;
  *(int *)pGVar1 = *(int *)pGVar1 + -1;
  if (*(int *)pGVar1 < 0) {
    *(undefined4 *)(pGVar2 + 100) = 0;
    return true;
  }
  strUsingArgs(acStack_98,"Time compression: %.0fx",
               (double)(float)(&timeCompressionScales)[*(int *)(pGVar2 + 100)]);
  GameLogic::setTimeCompressionText();
  iVar4 = -1;
  SVar3 = 10;
  uStack_94 = 0x4e9d89;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar3, iVar4);
  uStack_94 = 0x4e9dbe;
  debugPrint("GAME","Time compression set to %fx");
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doTimeFaster(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doTimeFaster(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  GameLogic *pGVar1;
  SoundEngine *this_;
  char acStack_98 [4];
  undefined4 uStack_94;
  Sound SVar2;
  int iVar3;
  
  pGVar1 = g_gameLogic;
  if (g_gameLogic[0x72] == (byte)0x0) {
    return false;
  }
  *(int *)(g_gameLogic + 100) = *(int *)(g_gameLogic + 100) + 1;
  iVar3 = *(int *)(pGVar1 + 100);
  if (2 < iVar3) {
    *(undefined4 *)(pGVar1 + 100) = 2;
    return true;
  }
  strUsingArgs(acStack_98,"Time compression: %.0fx",(double)(float)(&timeCompressionScales)[iVar3]);
  GameLogic::setTimeCompressionText();
  iVar3 = -1;
  SVar2 = 10;
  uStack_94 = 0x4e9e3b;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar2, iVar3);
  uStack_94 = 0x4e9e70;
  debugPrint("GAME","Time compression set to %fx");
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doBeginGame(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doBeginGame(Ship * param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  GameLogic GVar2;
  Scenario *pSVar3;
  SaveHandler *this;
  GameLogic *pGVar4;
  SaveHandler *this_00;
  std::string abStack_28 [12];
  undefined4 uStack_1c;
  
  ghidra::str::ctor(abStack_28,(std::string *)(g_gameData + 0xb4));
  pSVar3 = GameData::getScenario();
  if (((*(int *)(pSVar3 + 0x6c) == 0) || (*(int *)(pSVar3 + 0x6c) == 1)) &&
     (g_gameLogic[0x118] == (byte)0x0)) {
    ghidra::any_singleton();
    bVar1 = (this)->saveExists(*(int *)(g_gameLogic + 0x74));
    if (bVar1) goto LAB_004e9f18;
    uStack_1c = 0x4e9eed;
    ghidra::str::assign((std::string *)(g_gameData + 0xb4),"tutorial",8);
  }
  else {
LAB_004e9f18:
    if (*(int *)(pSVar3 + 0x6c) == 1) {
      ghidra::any_singleton();
      GVar2 = (GameLogic)(this_00)->saveExists(*(int *)(g_gameLogic + 0x74));
      pGVar4 = g_gameLogic;
      g_gameLogic[0x1c5] = GVar2;
      goto LAB_004e9efa;
    }
  }
  pGVar4 = g_gameLogic;
  g_gameLogic[0x1c5] = (byte)0x0;
LAB_004e9efa:
  *(undefined2 *)(pGVar4 + 0x71) = 0x100;
  pGVar4[0x70] = (byte)0x0;
  pGVar4[0x1c6] = (byte)0x1;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doDeleteSave(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDeleteSave(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameLogic *pGVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  LPCSTR ***ppppCVar6;
  SoundEngine *pSVar7;
  SaveHandler *this;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  Sound SVar11;
  int iVar12;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0a80;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = uVar4;
  if (g_gameLogic[0x1c4] == (byte)0x0) {
    iVar12 = -1;
    SVar11 = 8;
    pSVar7 = ghidra::any_singleton();
    (pSVar7)->playSound(param_1, SVar11, iVar12);
    g_gameLogic[0x1c4] = (byte)0x1;
  }
  else {
    ghidra::any_singleton();
    bVar2 = (this)->saveExists(*(int *)(g_gameLogic + 0x74));
    if (bVar2) {
      ghidra::any_singleton();
      OSInterface::getSaveDirectory();
      // [seh] local_8 = 0;
      pcVar5 = (char *)strUsingArgs((char *)local_44,"/objects%02d.sav",
                                    *(undefined4 *)(g_gameLogic + 0x74),uVar4);
      // [seh] local_8._0_1_ = 1;
      pcVar8 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar8 = *(char **)pcVar5;
      }
      ghidra::str::append((std::string *)local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      local_34 = 0;
      ppppCVar6 = local_2c;
      if (0xf < local_18) {
        ppppCVar6 = (LPCSTR ***)local_2c[0];
      }
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      DeleteFileA((LPCSTR)ppppCVar6);
      ppppCVar6 = local_2c;
      if (0xf < local_18) {
        ppppCVar6 = (LPCSTR ***)local_2c[0];
      }
      debugPrint("DETAIL","Deleted: %s",ppppCVar6);
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        ppppCVar6 = (LPCSTR ***)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          ppppCVar6 = (LPCSTR ***)local_2c[0][-1];
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if ((LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppCVar6,pnVar10);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (LPCSTR **)((uint)local_2c[0] & 0xffffff00);
    }
    pGVar1 = g_gameLogic;
    iVar12 = -1;
    SVar11 = 8;
    g_gameLogic[0x60] = (byte)0x1;
    pGVar1[0x1c4] = (byte)0x0;
    pSVar7 = ghidra::any_singleton();
    (pSVar7)->playSound(param_1, SVar11, iVar12);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar3 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// Ghidra: bool __cdecl ShipInterface::doSwitchToMenu(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSwitchToMenu(Ship * param_1, int param_2, int param_3, int param_4)

{
  *(int *)(g_gameLogic + 0x144) = param_2;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doConnectToServer(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doConnectToServer(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  std::string *_Str;
  int iVar2;
  NetworkClient *this_;
  std::string *pbVar3;
  std::string local_24 [12];
  undefined4 uStack_18;
  
  local_24[0] = (std::string)0x0;
  ghidra::str::assign(local_24,"",0);
  bVar1 = ShipData::checkCanConnectToServer(param_1,0);
  if (!bVar1) {
    return false;
  }
  _Str = &OISConfiguration::serverPort;
  if (0xf < DAT_0065d75c) {
    _Str = _serverPort;
  }
  pbVar3 = &OISConfiguration::serverIP;
  if (0xf < DAT_00657764) {
    pbVar3 = _serverIP;
  }
  iVar2 = atoi((char *)_Str);
  uStack_18 = 0x4ea1a4;
  this_ = ghidra::any_singleton();
  uStack_18 = 0x4ea1ab;
  (this_)->connectToServer((char *)pbVar3, iVar2);
  *(undefined4 *)(g_gameLogic + 0x144) = 0xc;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doDisconnectFromServer(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doDisconnectFromServer(Ship * param_1, int param_2, int param_3, int param_4)

{
  GameLogic *pGVar1;
  bool bVar2;
  NetworkClient *pNVar3;
  uint local_24;
  
  local_24 = local_24 & 0xffffff00;
  ghidra::str::assign((std::string *)&local_24,"",0);
  bVar2 = ShipData::checkCanDisconnectFromServer(param_1,0);
  if (!bVar2) {
    return false;
  }
  pNVar3 = ghidra::any_singleton();
  if (*(int **)(pNVar3 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(pNVar3 + 0x30) + 0x38))();
    pGVar1 = g_gameLogic;
    *(undefined4 *)(pNVar3 + 0x20) = 0;
    *(undefined2 *)(pGVar1 + 0x71) = 0x100;
    local_24 = 0x4ea247;
    debugPrint("MULTI","Disconnected from server.");
  }
  *(undefined4 *)(g_gameLogic + 0x144) = 0;
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doSendChatMessage(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSendChatMessage(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  GameData *pGVar1;
  bool bVar2;
  NetworkClient *pNVar3;
  GameData *pGVar4;
  SoundEngine *this_;
  std::string local_30 [8];
  undefined4 uStack_28;
  Sound SVar5;
  int iVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b2198;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_30[0] = (std::string)0x0;
  ghidra::str::assign(local_30,"",0);
  bVar2 = ShipData::checkCanSendChatMessage(param_1,0);
  if (bVar2) {
    pNVar3 = ghidra::any_singleton();
    if (*(int *)(pNVar3 + 0x20) != 0) {
      pNVar3 = ghidra::any_singleton();
      if ((*(int *)(g_gameData + 0x200) != 0) && (*(int *)(pNVar3 + 0x20) != 0)) {
        ghidra::str::ctor(local_30,(std::string *)(g_gameData + 0x1f0));
        // [seh] local_8 = 0;
        if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
          ghidra::Singleton<void>::instance = operator_new(1);
        }
        // [seh] local_8 = 0xffffffff;
        NetworkData::sendChatLineToServer();
        pGVar4 = g_gameData + 0x1f0;
        pGVar1 = g_gameData + 0x204;
        *(undefined4 *)(g_gameData + 0x200) = 0;
        if (0xf < *(uint *)pGVar1) {
          pGVar4 = *(GameData **)pGVar4;
        }
        *pGVar4 = (byte)0x0;
      }
      iVar6 = -1;
      SVar5 = 0x2c;
      uStack_28 = 0x4ea350;
      this_ = ghidra::any_singleton();
      uStack_28 = 0x4ea357;
      (this_)->playSound(param_1, SVar5, iVar6);
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSendReadyCommand(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSendReadyCommand(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  NetworkClient *pNVar2;
  NetworkClient *pNVar3;
  SoundEngine *this_;
  Sound SVar4;
  int iVar5;
  AddressOrGUID AStack_44;
  undefined4 uStack_1c;
  undefined1 local_8;
  NetworkClient local_7;
  undefined2 uStack_6;
  
  pNVar2 = ghidra::any_singleton();
  if (*(int *)(pNVar2 + 0x20) == 0) {
    return false;
  }
  pNVar2 = ghidra::any_singleton();
  if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
    uStack_1c = 0x4ea3a9;
    ghidra::Singleton<void>::instance = operator_new(1);
  }
  _local_8 = CONCAT11(param_2 == 1,0xa6);
  pNVar3 = ghidra::any_singleton();
  uStack_1c = 1;
  piVar1 = *(int **)(pNVar3 + 0x30);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_44,(RakNetGUID *)&DAT_00657688);
  (**(code **)(*piVar1 + 0x50))(&local_8,2,1,3,0);
  iVar5 = -1;
  SVar4 = 0x2c;
  pNVar2[0x1c] = (NetworkClient)(param_2 == 1);
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar4, iVar5);
  return true;
}


// Ghidra: bool __cdecl ShipInterface::doMoveCargo(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doMoveCargo(Ship * param_1, int param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  GameData *this_;
  CargoPod *this_00;
  int iVar2;
  GameData *pGVar3;
  bool bVar4;
  Good *pGVar5;
  uint uVar6;
  int iVar7;
  SoundEngine *pSVar8;
  LogSystem *this_01;
  Ship *unaff_EDI;
  Ship *pSVar9;
  Sound SVar10;
  
  pGVar3 = g_gameData;
  iVar7 = param_3 * 4 + 0xc;
  pSVar9 = *(Ship **)(g_gameData + 0xd0);
  this_ = *(GameData **)(pSVar9 + 0x1f8);
  this_00 = *(CargoPod **)((char *)this_ + iVar7);
  if ((this_00 != (CargoPod *)0x0) && (*(int *)(this_00 + 8) == 0)) {
    iVar1 = param_2 * 4 + 0xc;
    iVar2 = *(int *)((char *)this_ + iVar1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
      iVar2 = *(int *)(iVar2 + 4);
      pGVar5 = (this_)->getGood(iVar2);
      if (pGVar5 != (Good *)0x0) {
        if (*(GoodContainmentOption *)(pGVar5 + 0x5c) != 0) {
          bVar4 = (this_00)->hasOption(*(GoodContainmentOption *)(pGVar5 + 0x5c));
          if (!bVar4) goto LAB_004ea546;
        }
        *(int *)(this_00 + 4) = iVar2;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x1f8) + iVar7) + 8) =
             *(undefined4 *)(*(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x1f8) + iVar1) + 8);
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x1f8) + iVar1) + 4) =
             0xffffffff;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x1f8) + iVar1) + 8) = 0;
        soundHigh(unaff_EDI);
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        iVar7 = uVar6 + 1;
        SVar10 = 0x18;
        pSVar9 = ShipData::currentlyBoardedShip;
        pSVar8 = ghidra::any_singleton();
        (pSVar8)->playSound(pSVar9, SVar10, iVar7);
        LogSystem::addLogLine
                  (this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001,
                   "Cargo moved.");
        return true;
      }
LAB_004ea546:
      soundError(unaff_EDI);
      return false;
    }
  }
  iVar7 = -1;
  SVar10 = 10;
  pSVar8 = ghidra::any_singleton();
  (pSVar8)->playSound(pSVar9, SVar10, iVar7);
  return false;
}


// Ghidra: bool __cdecl ShipInterface::doSendServerCommand(Ship *param_1,int param_2,int param_3,int param_4)
bool ShipInterface::doSendServerCommand(Ship * param_1, int param_2, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  NetworkClient *pNVar7;
  char ****ppppcVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  char ****ppppcVar11;
  int *piVar12;
  void *pvVar13;
  uint unaff_EDI;
  void **ppvVar14;
  std::string abStack_8c [16];
  undefined4 uStack_7c;
  std::string abStack_74 [12];
  undefined4 uStack_68;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] local_8 = 0xff;
  uStack_7 = 0xffffff;
  // [seh] puStack_c = &DAT_005c0ad0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar6;
  if ((((g_gameLogic[0x71] != (byte)0x0) &&
       (pNVar7 = ghidra::any_singleton(), *(int *)(pNVar7 + 0x20) != 0)) && (param_2 == 1)) &&
     (*(int *)(g_gameData + 0x274) != -1)) {
    uStack_7c = 0x4ea5e5;
    ghidra::str::ctor(abStack_74,(std::string *)(g_gameData + 0x25c));
    UIText::getTextWithoutMacros();
    ppppcVar11 = (char ****)local_44[0];
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    // [seh] local_8 = 1;
    uStack_7 = 0;
    piVar1 = *(int **)(g_gameData + 0x254);
    for (piVar12 = *(int **)(g_gameData + 0x250); piVar12 != piVar1; piVar12 = piVar12 + 1) {
      iVar2 = *piVar12;
      ppppcVar8 = local_44;
      if (0xf < local_30) {
        ppppcVar8 = ppppcVar11;
      }
      uStack_68 = 0x4ea652;
      bVar4 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar8,local_34,pcVar6,unaff_EDI);
      if (bVar4) {
        ppvVar14 = (void **)(iVar2 + 0x18);
        if (local_2c != ppvVar14) {
          if (0xf < *(uint *)(iVar2 + 0x2c)) {
            ppvVar14 = *ppvVar14;
          }
          uStack_68 = 0x4ea683;
          ghidra::str::assign
                    ((std::string *)local_2c,(char *)ppvVar14,*(uint *)(iVar2 + 0x28));
          ppppcVar11 = (char ****)local_44[0];
        }
        break;
      }
    }
    uVar3 = local_18;
    pvVar10 = local_2c[0];
    uStack_68 = 0x4ea6a4;
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
    if (bVar4) {
      if (0xf < uVar3) {
        pnVar9 = (nothrow_t *)(uVar3 + 1);
        pvVar13 = pvVar10;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar13 = *(void **)((int)pvVar10 + -4);
          pnVar9 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_68 = 0x4ea6de;
        operator_delete(pvVar13,pnVar9);
        ppppcVar11 = (char ****)local_44[0];
      }
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        ppppcVar8 = ppppcVar11;
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppcVar8 = (char ****)ppppcVar11[-1];
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if ((char *)0x1f < (char *)((int)ppppcVar11 + (-4 - (int)ppppcVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_68 = 0x4ea716;
        operator_delete(ppppcVar8,pnVar9);
      }
    }
    else {
      uStack_7c = 0x4ea748;
      ghidra::str::ctor(abStack_74,(std::string *)local_2c);
      // [seh] local_8 = 2;
      ghidra::str::ctor(abStack_8c,(std::string *)&OISConfiguration::username);
      // [seh] local_8 = 3;
      if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
      }
      // [seh] local_8 = 1;
      NetworkData::sendSetClientInfo();
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_68 = 0x4ea7b6;
        operator_delete(pvVar10,pnVar9);
      }
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        ppppcVar11 = (char ****)local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppcVar11 = (char ****)local_44[0][-1];
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if ((char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_68 = 0x4ea7ec;
        operator_delete(ppppcVar11,pnVar9);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar5 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// Ghidra: void __cdecl ShipInterface::getShipCommandFunction(ShipCommand param_1)
void ShipInterface::getShipCommandFunction(ShipCommand param_1)

{
  ghidra::lib::function_t *in_ECX;
  undefined4 in_EDX;
  int in_stack_ffffffc8;
  
  switch(in_EDX) {
  case 0:
    std::function<>::ghidra::lib::function_t<>(in_ECX,RakNet::RakPeer::IsNetworkSimulatorActive);
    return;
  default:
    PresentationData::getShipCommandFunction(in_stack_ffffffc8);
    std::function<>::ghidra::lib::function_t<>();
    return;
  case 2:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doBurnMainEngine;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 3:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doStopMainEngine;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 4:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleMainEngine;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 5:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPlotCourse;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 6:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doClearCourse;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 7:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRemoveLastWaypoint;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0xf:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngageCourse;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x10:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doFullStop;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x11:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doFireRCSCW;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x12:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doFireRCSCCW;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x13:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doStopRCS;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x14:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doActiveEMCONMode;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x15:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDeactivateEMCONMode;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x16:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doCancelAP;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x17:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDock;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x18:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doUndock;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x19:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube);
    return;
  case 0x1a:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doDeselectTube);
    return;
  case 0x1b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doSpinUpWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x1c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPowerDownWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x1d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doFireWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x1e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doSetWeaponTarget;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x1f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doUnlinkWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x20:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doArmWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x21:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisableWeapon;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x22:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRotateTo;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x23:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleEMCON;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x25:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doBreakOrbit;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x26:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doChangeToStandardOrbit;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x27:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doChangeToHighOrbit;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x28:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doChangeToPolarOrbit;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x29:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRequestDockingPermission;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRequestUndockingPermission;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doActivateIFF;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDeactivateIFF;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleIFF;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doLeaveShip;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x2f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doCommunicateWithSelected;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x30:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRescindDockingPermission;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x31:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doRescindUndockingPermission;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x32:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPayDockedStation;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x33:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doActivateJumpgate;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x34:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPayForJumpgate;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x35:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube1);
    return;
  case 0x36:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube2);
    return;
  case 0x37:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube3);
    return;
  case 0x38:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube4);
    return;
  case 0x39:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectTube5);
    return;
  case 0x3a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doMapClick;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x3b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngDisconnectCurrentModule;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x3c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngConnectCurrentModule;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x3d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngOpenCurrentModule;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x3e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngCloseCurrentModule;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x3f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doEngRepairCurrentComponent;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x40:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doJmpSetJumpDestination;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x41:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doJmpSpinUpJumpDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x42:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doJmpCalculateJumpSolution;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x43:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doJmpBeginJump;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x44:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doJmpDischargeJumpDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x45:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTogglePwrCurrentModuleEmcon);
    return;
  case 0x46:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTogglePwrCurrentModulePower);
    return;
  case 0x47:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doPwrRaisePriority);
    return;
  case 0x48:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doPwrLowerPriority);
    return;
  case 0x49:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectReactor;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectReactor;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleReactor;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectHelm;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectHelm;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleHelm;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x4f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectRCS;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x50:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectRCS;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x51:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleRCS;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x52:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectMainDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x53:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectMainDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x54:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleMainDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x55:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectComms;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x56:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectComms;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x57:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleComms;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x58:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectWeap;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x59:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectWeap;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleWeap;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectJumpDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectJumpDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleJumpDrive;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectBatt1;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x5f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectBatt1;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x60:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleBatt1;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x61:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectBatt2;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x62:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectBatt2;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 99:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleBatt2;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 100:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectBatt3;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x65:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectBatt3;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x66:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleBatt3;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x67:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectNavCom;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x68:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectNavCom;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x69:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleNavCom;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doDisconnectSensors;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doConnectSensors;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doToggleSensors;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doTurnOnShip;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doTurnOffShip;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x6f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doTeleportShip;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x70:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSelectDown);
    return;
  case 0x71:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSelectUp);
    return;
  case 0x72:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSelectRight);
    return;
  case 0x73:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSelectLeft);
    return;
  case 0x74:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doAlterServerSetting);
    return;
  case 0x75:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSetNavAndSensorLinked);
    return;
  case 0x76:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorUnsetNavAndSensorLinked);
    return;
  case 0x77:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSetHistoryLocked);
    return;
  case 0x78:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorUnsetHistoryLocked);
    return;
  case 0x79:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorSetAuto);
    return;
  case 0x7a:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSensorUnsetAuto);
    return;
  case 0x7b:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doPwrSelectModule);
    return;
  case 0x7c:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngSelectModule);
    return;
  case 0x7d:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngSelectComponent);
    return;
  case 0x7e:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngMountComponent);
    return;
  case 0x7f:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngMoveComponent);
    return;
  case 0x80:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngUnmountComponent);
    return;
  case 0x81:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngToggleScrew);
    return;
  case 0x82:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEngToggleShield);
    return;
  case 0x83:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSelectComponent);
    return;
  case 0x84:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doAlterServerSetting);
    return;
  case 0x85:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doAlterServerSetting);
    return;
  case 0x86:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doEnableLADAR);
    return;
  case 0x87:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doDisableLADAR);
    return;
  case 0x88:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doToggleLADAR);
    return;
  case 0x89:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doMainDrivePowerIncrease;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x8a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doMainDrivePowerDecrease;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x8b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPwrCurrentModulePowerIncrease;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x8c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = doPwrCurrentModulePowerDecrease;
    *(ghidra::lib::function_t **)(in_ECX + 0x24) = in_ECX;
    return;
  case 0x8d:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doActivatePDS);
    return;
  case 0x8e:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doDectivatePDS);
    return;
  case 0x8f:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTogglePDS);
    return;
  case 0x90:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doFireCM);
    return;
  case 0x91:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommsSync);
    return;
  case 0x92:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommsTurnOnAuto);
    return;
  case 0x93:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommsTurnOffAuto);
    return;
  case 0x94:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doShipCargoDown);
    return;
  case 0x95:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doShipCargoUp);
    return;
  case 0x96:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doJettisonCargo);
    return;
  case 0x97:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doJettisonAllCargo);
    return;
  case 0x98:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMooredCargoDown);
    return;
  case 0x99:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMooredCargoUp);
    return;
  case 0x9a:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTransferCargoFromMoored);
    return;
  case 0x9b:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTransferCargoFromShip);
    return;
  case 0x9c:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doHack);
    return;
  case 0x9d:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doRepairHullAtDepot);
    return;
  case 0x9e:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doRepairModulesAtDepot);
    return;
  case 0x9f:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doRearmAtDepot);
    return;
  case 0xa0:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doBuyCMAtDepot);
    return;
  case 0xa1:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTutorialJump);
    return;
  case 0xa2:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTradeToMax);
    return;
  case 0xa3:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doPerformTrade);
    return;
  case 0xa4:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCancelTrade);
    return;
  case 0xa5:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceBackToMenu);
    return;
  case 0xa6:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceGetLicense);
    return;
  case 0xa7:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceTakeLoan);
    return;
  case 0xa8:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceRepayLoan);
    return;
  case 0xa9:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceTakeContract);
    return;
  case 0xaa:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceDeliverContract);
    return;
  case 0xab:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doViewWire);
    return;
  case 0xac:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicToMenu);
    return;
  case 0xad:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicRepair);
    return;
  case 0xae:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicBuyPod);
    return;
  case 0xaf:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicSellPod);
    return;
  case 0xb0:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicUpgradePod);
    return;
  case 0xb1:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicCancelModule);
    return;
  case 0xb2:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicModuleTransaction);
    return;
  case 0xb3:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicBuyArmament);
    return;
  case 0xb4:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMechanicSellArmament);
    return;
  case 0xb5:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doBuyShip);
    return;
  case 0xb6:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMooredWreckUnlockCargo);
    return;
  case 0xb7:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMooredWreckDownloadData);
    return;
  case 0xb8:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doSetViewShip);
    return;
  case 0xb9:
    std::function<>::ghidra::lib::function_t<>(in_ECX,RakNet::RakPeer::IsNetworkSimulatorActive);
    return;
  case 0xba:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceTakePassenger);
    return;
  case 0xbb:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTurnOnSOS);
    return;
  case 0xbc:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doTurnOffSOS);
    return;
  case 0xc1:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doCommerceTakeBounty);
    return;
  case 0xc2:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doQuitToMenu);
    return;
  case 0xc3:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doQuitToOS);
    return;
  case 0xca:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doChangeDetails);
    return;
  case 0xcb:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doBeginGame);
    return;
  case 0xcc:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doDeleteSave);
    return;
  case 0xcd:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doJettisonComponent);
    return;
  case 0xce:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMoveModule);
    return;
  case 0xd5:
    std::function<>::ghidra::lib::function_t<>(in_ECX,doMoveCargo);
    return;
  }
}


// Ghidra: void __cdecl ShipInterface::stationBeepHigh(Ship *param_1)
void ShipInterface::stationBeepHigh(Ship * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *extraout_var;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 0x2b;
  this_ = ghidra::any_singleton();
  (this_)->playSound(extraout_var, SVar1, iVar2);
  return;
}


// Ghidra: void __cdecl ShipInterface::commerceBeep(Ship *param_1)
void ShipInterface::commerceBeep(Ship * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *extraout_var;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 0x2d;
  this_ = ghidra::any_singleton();
  (this_)->playSound(extraout_var, SVar1, iVar2);
  return;
}


// Ghidra: void __cdecl ShipInterface::soundHigh(Ship *param_1)
void ShipInterface::soundHigh(Ship * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *extraout_var;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(extraout_var, SVar1, iVar2);
  return;
}


// Ghidra: void __cdecl ShipInterface::soundLow(Ship *param_1)
void ShipInterface::soundLow(Ship * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *extraout_var;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 9;
  this_ = ghidra::any_singleton();
  (this_)->playSound(extraout_var, SVar1, iVar2);
  return;
}


// Ghidra: void __cdecl ShipInterface::soundError(Ship *param_1)
void ShipInterface::soundError(Ship * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  Ship *extraout_var;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 10;
  this_ = ghidra::any_singleton();
  (this_)->playSound(extraout_var, SVar1, iVar2);
  return;
}
