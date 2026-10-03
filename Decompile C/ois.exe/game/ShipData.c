#include "../ois.exe.h"


// bool __cdecl ShipData::checkResolutionChanged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkResolutionChanged(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (OISConfiguration::displayChanged)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_options",0xf);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004cb4bc;
    }
  }
  bVar1 = false;
LAB_004cb4bc:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4cb4ef;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSOSActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSOSActive(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x318) != '\0';
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkShipDisabled(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkShipDisabled(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (Ship *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = Ship::isDisabled(param_1,false);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSOSCanBeActivated(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSOSCanBeActivated(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == (Ship *)0x0) || (g_gameLogic[0x72] == (GameLogic)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = Ship::isDisabled(param_1,false);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkClusterMode(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkClusterMode(int param_1,int param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    iVar1 = PresentationData::m_mapZoomLevel;
    if (param_2 != 0) {
      iVar1 = PresentationData::m_tabletMapZoomLevel;
    }
    bVar4 = iVar1 == 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkPCEAlarm(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPCEAlarm(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x104);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkIsEMCONMode(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsEMCONMode(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0xe4) != '\0';
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNominal(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNominal(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(double *)(param_1 + 0x140) != 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkWarning(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkWarning(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(double *)(param_1 + 0x140) <= 0.0)) ||
     (0.30000001192092896 <= *(double *)(param_1 + 0x140))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkInDanger(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkInDanger(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if ((0.30000001192092896 < *(double *)(param_1 + 0x140)) ||
          (0.5 < *(double *)(param_1 + 0x140))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkInAsteroidField(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkInAsteroidField(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (*(int **)(param_1 + 0x184) == (int *)0x0)) ||
      (**(int **)(param_1 + 0x184) != 1)) || (*(double *)(param_1 + 0x140) <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkInNebula(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkInNebula(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (*(int **)(param_1 + 0x184) == (int *)0x0)) ||
      (**(int **)(param_1 + 0x184) != 2)) || (*(double *)(param_1 + 0x140) <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNavTargetSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNavTargetSelected(Ship *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  float *pfVar2;
  Ship *extraout_ECX;
  Ship *extraout_ECX_00;
  int extraout_ECX_01;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  float fVar6;
  uint in_stack_00000020;
  
  if ((param_1 != (Ship *)0x0) && (PresentationData::m_mapZoomLevel != 0)) {
    iVar1 = *(int *)(param_1 + 0x19c);
    if (iVar1 != 0) {
      pfVar2 = (float *)Ship::getFinalWaypointLocation(param_1);
      if (((float)*(double *)(iVar1 + 0x10) == *pfVar2) &&
         (param_1 = extraout_ECX, (float)*(double *)(iVar1 + 0x18) == pfVar2[1])) goto LAB_004cba52;
LAB_004cbadc:
      bVar5 = true;
      goto LAB_004cbae2;
    }
LAB_004cba52:
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 != 0) {
      pfVar2 = (float *)Ship::getFinalWaypointLocation(param_1);
      if (((float)*(double *)(iVar1 + 0x20) != *pfVar2) ||
         (param_1 = extraout_ECX_00, (float)*(double *)(iVar1 + 0x28) != pfVar2[1]))
      goto LAB_004cbadc;
    }
    fVar6 = *(float *)(param_1 + 0x1b8);
    if ((fVar6 != -9999.0) || (*(float *)(param_1 + 0x1bc) != -9999.0)) {
      pfVar2 = (float *)Ship::getFinalWaypointLocation(param_1);
      if ((fVar6 != *pfVar2) || (*(float *)(extraout_ECX_01 + 0x1bc) != pfVar2[1]))
      goto LAB_004cbadc;
    }
  }
  bVar5 = false;
LAB_004cbae2:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar5;
}


// bool __cdecl ShipData::checkCanAddWaypoint(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanAddWaypoint(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd4) != 3)) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkValidTravelTargetSelected(param_1,0);
    if (bVar1) {
      iVar2 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
      if ((iVar2 == 0) || (*(int *)(iVar2 * 0x20 + -0xc + *(int *)(param_1 + 0x1c4)) == 0)) {
        bVar1 = true;
        goto LAB_004cbbb1;
      }
    }
  }
  bVar1 = false;
LAB_004cbbb1:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cbbe4;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// WARNING: Type propagation algorithm not settling
// bool __cdecl ShipData::checkValidTravelTargetSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkValidTravelTargetSelected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  FlagManager *pFVar4;
  undefined4 *******pppppppuVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000020;
  undefined4 *******local_58;
  int iStack_54;
  undefined4 *******pppppppuStack_50;
  undefined4 *******local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bf890;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == 0) goto LAB_004cbcac;
  if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    local_58 = (undefined4 *******)((uint)local_58 & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)&local_58,"only_plot_to_beacons",0x14);
    local_8 = 1;
    pFVar4 = Singleton<>::getInstance();
    local_8 = 0;
    bVar2 = FlagManager::flagSet(pFVar4);
    iVar1 = *(int *)(param_1 + 0x194);
    if (!bVar2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x130) != 0)) {
        pppppppuStack_50 = (undefined4 *******)0x4cbd0e;
        strUsingArgs((char *)local_2c);
        local_8 = 2;
        pppppppuStack_50 = local_2c;
        if (0xf < local_18) {
          pppppppuStack_50 = local_2c[0];
        }
        iStack_54 = local_1c + (int)pppppppuStack_50;
        local_58 = local_2c;
        if (0xf < local_18) {
          local_58 = local_2c[0];
        }
        std::transform<>();
        std::basic_string<>::basic_string<>((basic_string<> *)&local_58,(basic_string<> *)local_2c);
        local_8 = 3;
        pFVar4 = Singleton<>::getInstance();
        local_8 = 2;
        FlagManager::flagSet(pFVar4);
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          pppppppuVar5 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pppppppuVar5 = (undefined4 *******)local_2c[0][-1];
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pppppppuVar5,pnVar7);
        }
      }
      goto LAB_004cbcac;
    }
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0xe0) != 5)) goto LAB_004cbcac;
  }
  local_58 = (undefined4 *******)((uint)local_58 & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&local_58,"",0);
  checkNavTargetSelected(param_1,param_2);
LAB_004cbcac:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkMainEngineBurning(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMainEngineBurning(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10), iVar1 == 0)) ||
     (*(char *)(iVar1 + 0x62) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkHasSelectedDestination(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasSelectedDestination(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if ((((*(int *)(param_1 + 0x1a4) == 0) &&
            (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 == 0)) &&
           (*(float *)(param_1 + 0x1b8) == -9999.0)) && (*(float *)(param_1 + 0x1bc) == -9999.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkEngCurrentModuleCanOpen(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngCurrentModuleCanOpen(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4))
    ;
    if ((pSVar1 != (ShipModule *)0x0) && (pSVar1[99] == (ShipModule)0x0)) {
      bVar4 = true;
      goto LAB_004cbf6f;
    }
  }
  bVar4 = false;
LAB_004cbf6f:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkEngNoTrayItemSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngNoTrayItemSelected(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x1dc) < 100;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanTeleport(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanTeleport(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined1 extraout_AL;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x004cc039. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return (bool)extraout_AL;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return false;
}


// bool __cdecl ShipData::checkEngIsRepairing(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngIsRepairing(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = 0.0 < *(float *)(param_1 + 0x154);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkEngModuleCanBeConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngModuleCanBeConnected(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4))
    ;
    if ((pSVar1 != (ShipModule *)0x0) && (pSVar1[99] == (ShipModule)0x0)) {
      iVar2 = 0;
      do {
        if (pSVar1[iVar2 + 0x1e] == (ShipModule)0x0) goto LAB_004cc0f7;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if (pSVar1[0x1c] == (ShipModule)0x0) {
        bVar5 = true;
        goto LAB_004cc0f9;
      }
    }
  }
LAB_004cc0f7:
  bVar5 = false;
LAB_004cc0f9:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar5;
}


// bool __cdecl ShipData::checkIsDockedOrDocking(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsDockedOrDocking(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) == 3;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotDocked(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotDocked(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) != 3;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotDockedOrMultiplayer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotDockedOrMultiplayer(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (g_gameLogic[0x71] != (GameLogic)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) != 3;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotDockedOrMultiplayerOrTutorial(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkNotDockedOrMultiplayerOrTutorial(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (g_gameLogic[0x71] != (GameLogic)0x0)) ||
     ((*(int *)(g_gameData + 0xcc) != 0 && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) != 3;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotDockedWithStation(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotDockedWithStation(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkIsDockedWithStation(param_1,param_2);
    bVar1 = !bVar1;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cc37d;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIsDockedWithStation(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsDockedWithStation(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkIsFullyDocked(param_1,param_2);
    if (((bVar1) && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 1)) {
      bVar1 = true;
      goto LAB_004cc423;
    }
  }
  bVar1 = false;
LAB_004cc423:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cc456;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIsDockedWithDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsDockedWithDepot(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkIsFullyDocked(param_1,param_2);
    if (((bVar1) && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 3)) {
      bVar1 = true;
      goto LAB_004cc4f3;
    }
  }
  bVar1 = false;
LAB_004cc4f3:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cc526;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkNeedToPayForJumpgate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNeedToPayForJumpgate(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithJumpgate(param_1,param_2);
    if ((bVar1) && (*(int *)(*(int *)(param_1 + 0x178) + 0x38c) != -1)) {
      std::basic_string<>::basic_string<>(local_38,(basic_string<> *)(param_1 + 0x238));
      bVar1 = SpaceStation::shipHasPaidForUse(*(SpaceStation **)(param_1 + 0x178));
      if (!bVar1) {
        bVar1 = true;
        goto LAB_004cc5da;
      }
    }
  }
  bVar1 = false;
LAB_004cc5da:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cc60d;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanActivateJumpgate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanActivateJumpgate(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithJumpgate(param_1,param_2);
    if (((bVar1) && (*(int *)(*(int *)(param_1 + 0x178) + 0x38c) != -1)) &&
       (*(float *)(param_1 + 0x54) == -1.0)) {
      std::basic_string<>::basic_string<>(local_38,(basic_string<> *)(param_1 + 0x238));
      bVar1 = SpaceStation::shipHasPaidForUse(*(SpaceStation **)(param_1 + 0x178));
      if (bVar1) {
        bVar1 = true;
        goto LAB_004cc6dc;
      }
    }
  }
  bVar1 = false;
LAB_004cc6dc:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cc70f;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIsDockedWithJumpgate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsDockedWithJumpgate(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkIsFullyDocked(param_1,param_2);
    if (((bVar1) && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 2)) {
      bVar1 = true;
      goto LAB_004cc7b3;
    }
  }
  bVar1 = false;
LAB_004cc7b3:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cc7e6;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkDockedWithEarthgate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkDockedWithEarthgate(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar2 = checkIsFullyDocked(param_1,param_2);
    if ((((bVar2) && (iVar1 = *(int *)(param_1 + 0x178), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 2)) && (*(int *)(iVar1 + 0x38c) == -1)) {
      bVar2 = true;
      goto LAB_004cc88c;
    }
  }
  bVar2 = false;
LAB_004cc88c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cc8bf;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanChangeDetails(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanChangeDetails(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  GameData *pGVar2;
  bool bVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  char *pcVar6;
  uint unaff_ESI;
  char *unaff_EDI;
  uint in_stack_00000020;
  
  pGVar2 = g_gameData;
  if (param_1 == 0) {
    bVar3 = false;
    goto LAB_004cc993;
  }
  pcVar6 = (char *)(param_1 + 8);
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pcVar6 = *(char **)(param_1 + 8);
  }
  bVar3 = std::_Traits_equal<>(pcVar6,*(uint *)(param_1 + 0x18),unaff_EDI,unaff_ESI);
  if (bVar3) {
    iVar1 = *(int *)(pGVar2 + 0x124);
    pcVar6 = (char *)(iVar1 + 4);
    if (0xf < *(uint *)(iVar1 + 0x18)) {
      pcVar6 = *(char **)(iVar1 + 4);
    }
    bVar3 = std::_Traits_equal<>(pcVar6,*(uint *)(iVar1 + 0x14),unaff_EDI,unaff_ESI);
    if (!bVar3) goto LAB_004cc96e;
  }
  else {
LAB_004cc96e:
    if ((199 < *(int *)(*(int *)(pGVar2 + 0x124) + 0x1c)) &&
       (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) {
      bVar3 = true;
      goto LAB_004cc993;
    }
  }
  bVar3 = false;
LAB_004cc993:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsDocking(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsDocking(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsUndocking(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsUndocking(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) != 3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsFullyDocked(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsFullyDocked(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint unaff_EBX;
  char *unaff_ESI;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x174) != 0) &&
       (bVar1 = std::_Traits_equal<>("",0,unaff_ESI,unaff_EBX), !bVar1)) {
      bVar1 = true;
      goto LAB_004ccaf0;
    }
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      bVar1 = true;
      goto LAB_004ccaf0;
    }
  }
  bVar1 = false;
LAB_004ccaf0:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar1;
}


// bool __cdecl ShipData::checkShowSpaceDisc(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkShowSpaceDisc(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint unaff_EBX;
  char *unaff_ESI;
  uint in_stack_00000020;
  
  if (((param_1 == 0) ||
      ((*(int *)(param_1 + 0x174) != 0 &&
       (bVar1 = std::_Traits_equal<>("",0,unaff_ESI,unaff_EBX), !bVar1)))) ||
     ((*(int *)(param_1 + 0xd4) == 3 &&
      ((*(int *)(param_1 + 0x178) != 0 &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 1)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar1;
}


// bool __cdecl ShipData::checkDontShowSpaceDisc(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkDontShowSpaceDisc(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint unaff_EBX;
  char *unaff_ESI;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x174) != 0) &&
       (bVar1 = std::_Traits_equal<>("",0,unaff_ESI,unaff_EBX), !bVar1)) {
      bVar1 = true;
      goto LAB_004ccc50;
    }
    if (((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 1)) {
      bVar1 = true;
      goto LAB_004ccc50;
    }
  }
  bVar1 = false;
LAB_004ccc50:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar1;
}


// bool __cdecl ShipData::checkTube1Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube1Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 1.0)) {
      bVar5 = true;
      goto LAB_004cccf9;
    }
  }
  bVar5 = false;
LAB_004cccf9:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube2Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube2Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 2.0)) {
      bVar5 = true;
      goto LAB_004ccdb9;
    }
  }
  bVar5 = false;
LAB_004ccdb9:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube3Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube3Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 3.0)) {
      bVar5 = true;
      goto LAB_004cce79;
    }
  }
  bVar5 = false;
LAB_004cce79:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube4Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube4Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 4.0)) {
      bVar5 = true;
      goto LAB_004ccf39;
    }
  }
  bVar5 = false;
LAB_004ccf39:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube5Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube5Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 5.0)) {
      bVar5 = true;
      goto LAB_004ccff9;
    }
  }
  bVar5 = false;
LAB_004ccff9:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube6Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube6Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 6.0)) {
      bVar5 = true;
      goto LAB_004cd0b9;
    }
  }
  bVar5 = false;
LAB_004cd0b9:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube7Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube7Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 7.0)) {
      bVar5 = true;
      goto LAB_004cd179;
    }
  }
  bVar5 = false;
LAB_004cd179:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkTube8Selected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTube8Selected(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 8.0)) {
      bVar5 = true;
      goto LAB_004cd239;
    }
  }
  bVar5 = false;
LAB_004cd239:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkNotDocking(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotDocking(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotUndocking(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotUndocking(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) == 3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanOpenAirlock(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanOpenAirlock(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
LAB_004cd3d8:
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
      bVar4 = false;
      if (iVar1 != 0) {
        bVar4 = *(int *)(iVar1 + 0x158) == 2;
      }
      if (bVar4) goto LAB_004cd3d8;
    }
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar4 = checkIsFullyDocked(param_1,param_2);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cd40d;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkNavMapInSectorMode(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNavMapInSectorMode(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  bVar3 = PresentationData::m_mapZoomLevel == 0;
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return param_1 != 0 && bVar3;
}


// bool __cdecl ShipData::checkIsInFreeSpace(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInFreeSpace(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if ((*(int *)(param_1 + 0xd4) == 0) || (*(int *)(param_1 + 0xd4) == 1)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsInOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) == 2;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsInStandardOrbit(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInStandardOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsInHighOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInHighOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsInPolarOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInPolarOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotInStandardOrbit(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotInStandardOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotInHighOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotInHighOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNotInPolarOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNotInPolarOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsChangingOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsChangingOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xe8) == 4;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsLeavingOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsLeavingOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xe8) == 5;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsEnteringOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsEnteringOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xe8) == 1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsCorrectingOrbit(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsCorrectingOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xe8) == 3;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsInStableOrbit(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsInStableOrbit(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xe8) == 2;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanRepairHullAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanRepairHullAtDepot(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = extraout_ECX;
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        this = extraout_ECX_00;
      }
      iVar2 = ShipMechanics::getRepairPoints(this,param_1);
      if ((0 < iVar2 * 5) && (iVar2 * 5 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        bVar1 = true;
        goto LAB_004cda13;
      }
    }
  }
  bVar1 = false;
LAB_004cda13:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cda46;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotRepairHullAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotRepairHullAtDepot(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = extraout_ECX;
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        this = extraout_ECX_00;
      }
      iVar2 = ShipMechanics::getRepairPoints(this,param_1);
      if ((iVar2 * 5 == 0) || (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar2 * 5)) {
        bVar1 = true;
        goto LAB_004cdb03;
      }
    }
  }
  bVar1 = false;
LAB_004cdb03:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cdb36;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanRepairModulesAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanRepairModulesAtDepot(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = extraout_ECX;
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        this = extraout_ECX_00;
      }
      iVar2 = ShipMechanics::moduleRepairCost(this,param_1);
      if ((0 < iVar2) && (iVar2 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        bVar1 = true;
        goto LAB_004cdbf1;
      }
    }
  }
  bVar1 = false;
LAB_004cdbf1:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cdc24;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotRepairModulesAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCannotRepairModulesAtDepot(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = extraout_ECX;
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        this = extraout_ECX_00;
      }
      iVar2 = ShipMechanics::moduleRepairCost(this,param_1);
      if ((iVar2 == 0) || (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar2)) {
        bVar1 = true;
        goto LAB_004cdce1;
      }
    }
  }
  bVar1 = false;
LAB_004cdce1:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cdd14;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanRearmAtDepot(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanRearmAtDepot(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *this;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> local_50 [12];
  undefined4 uStack_44;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_50[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_50,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x20);
      if (this == (ShipModule *)0x0) {
        iVar4 = 0;
        iVar2 = 0;
      }
      else {
        iVar4 = ShipModule::getHousedObjectCount(this);
        iVar2 = (int)*(float *)(*(int *)(this + 8) + 0x104);
      }
      if (iVar4 < iVar2) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_44 = 0x4cddee;
        std::basic_string<>::assign((basic_string<> *)local_2c,"m10",3);
        local_8 = CONCAT31(local_8._1_3_,1);
        Singleton<>::getInstance();
        if (0xf < local_18) {
          pnVar5 = (nothrow_t *)(local_18 + 1);
          pvVar3 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar3 = *(void **)((int)local_2c[0] + -4);
            pnVar5 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          uStack_44 = 0x4cde2a;
          operator_delete(pvVar3,pnVar5);
        }
        bVar1 = 0x4f < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c);
        goto LAB_004cde43;
      }
    }
  }
  bVar1 = false;
LAB_004cde43:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_44 = 0x4cde76;
    operator_delete(pvVar3,pnVar5);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotRearmAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotRearmAtDepot(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *this;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> local_50 [12];
  undefined4 uStack_44;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_50[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_50,"",0);
    bVar1 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar1) {
      this = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x20);
      if (this == (ShipModule *)0x0) {
        iVar4 = 0;
        iVar2 = 0;
      }
      else {
        iVar4 = ShipModule::getHousedObjectCount(this);
        iVar2 = (int)*(float *)(*(int *)(this + 8) + 0x104);
      }
      if (iVar4 < iVar2) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_44 = 0x4cdf52;
        std::basic_string<>::assign((basic_string<> *)local_2c,"m10",3);
        local_8 = CONCAT31(local_8._1_3_,1);
        Singleton<>::getInstance();
        if (0xf < local_18) {
          pnVar5 = (nothrow_t *)(local_18 + 1);
          pvVar3 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar3 = *(void **)((int)local_2c[0] + -4);
            pnVar5 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          uStack_44 = 0x4cdf8e;
          operator_delete(pvVar3,pnVar5);
        }
        bVar1 = *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 0x50;
      }
      else {
        bVar1 = true;
      }
      goto LAB_004cdfa7;
    }
  }
  bVar1 = false;
LAB_004cdfa7:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_44 = 0x4cdfda;
    operator_delete(pvVar3,pnVar5);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanBuyCMAtDepot(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanBuyCMAtDepot(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar2 = checkIsDockedWithDepot(param_1,param_2);
    if (((bVar2) && (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), iVar1 != 0)) &&
       ((float)*(int *)(iVar1 + 0x68) < *(float *)(*(int *)(iVar1 + 8) + 0x104))) {
      Singleton<>::getInstance();
      bVar2 = 0x18 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c);
      goto LAB_004ce08d;
    }
  }
  bVar2 = false;
LAB_004ce08d:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ce0c0;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCannotBuyCMAtDepot(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotBuyCMAtDepot(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar2 = checkIsDockedWithDepot(param_1,param_2);
    if (bVar2) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      if ((iVar1 == 0) || (*(float *)(*(int *)(iVar1 + 8) + 0x104) <= (float)*(int *)(iVar1 + 0x68))
         ) {
        bVar2 = true;
      }
      else {
        Singleton<>::getInstance();
        bVar2 = *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 0x19;
      }
      goto LAB_004ce181;
    }
  }
  bVar2 = false;
LAB_004ce181:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ce1b4;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkHasDockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasDockingPermission(Ship *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  SpaceStation *this;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  
  if (((param_1 != (Ship *)0x0) &&
      ((this = *(SpaceStation **)(param_1 + 0x17c), this != (SpaceStation *)0x0 ||
       (this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0)))) &&
     ((iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158), iVar1 == 1 ||
      ((iVar1 == 2 || (iVar1 == 3)))))) {
    bVar2 = SpaceStation::shipHasDockingClearance(this,param_1);
    if (bVar2) {
      bVar2 = true;
      goto LAB_004ce21c;
    }
  }
  bVar2 = false;
LAB_004ce21c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar2;
}


// bool __cdecl ShipData::checkNeedsDockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNeedsDockingPermission(int param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *pSVar1;
  bool bVar2;
  void *pvVar3;
  Ship *extraout_EDX;
  Ship *extraout_EDX_00;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) &&
     ((g_gameLogic[0x11d] != (GameLogic)0x0 || (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')
      ))) {
    pSVar1 = *(SpaceStation **)(param_1 + 0x17c);
    if (pSVar1 == (SpaceStation *)0x0) {
      pSVar1 = *(SpaceStation **)(param_1 + 0x178);
      if (pSVar1 != (SpaceStation *)0x0) {
        bVar2 = ShipClass::canBeDockedWith(*(ShipClass **)(pSVar1 + 0x254));
        if (bVar2) {
          bVar2 = SpaceStation::shipHasDockingClearance(pSVar1,extraout_EDX_00);
          if (!bVar2) {
            bVar2 = true;
            goto LAB_004ce2dd;
          }
        }
      }
    }
    else {
      bVar2 = ShipClass::canBeDockedWith(*(ShipClass **)(pSVar1 + 0x254));
      if (bVar2) {
        bVar2 = SpaceStation::shipHasDockingClearance(pSVar1,extraout_EDX);
        if (!bVar2) {
          bVar2 = true;
          goto LAB_004ce2dd;
        }
      }
    }
  }
  bVar2 = false;
LAB_004ce2dd:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar2;
}


// bool __cdecl ShipData::checkHasUndockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasUndockingPermission(Ship *param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  int iVar1;
  bool bVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      local_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_38,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      pFVar3 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar2 = FlagManager::flagSet(pFVar3);
      if (!bVar2) goto LAB_004ce40c;
    }
    if (((((g_gameLogic[0x11d] != (GameLogic)0x0) ||
          (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) ||
         (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
        ((this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0 &&
         (((iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158), iVar1 == 1 || (iVar1 == 2)) ||
          (iVar1 == 3)))))) &&
       (bVar2 = SpaceStation::shipHasUndockingClearance(this,param_1), bVar2)) {
      bVar2 = true;
      goto LAB_004ce40e;
    }
  }
LAB_004ce40c:
  bVar2 = false;
LAB_004ce40e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4ce441;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkNeedsUndockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNeedsUndockingPermission(Ship *param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  
  if (((param_1 != (Ship *)0x0) &&
      (((g_gameLogic[0x11d] != (GameLogic)0x0 ||
        (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) ||
       (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)))) &&
     ((this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0 &&
      (((iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158), iVar1 == 1 || (iVar1 == 2)) ||
       (iVar1 == 3)))))) {
    bVar2 = SpaceStation::shipHasUndockingClearance(this,param_1);
    if (!bVar2) {
      bVar2 = true;
      goto LAB_004ce4ce;
    }
  }
  bVar2 = false;
LAB_004ce4ce:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar2;
}


// bool __cdecl ShipData::checkCanGetUndockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanGetUndockingPermission(int param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkNeedsUndockingPermission(param_1,0);
    if ((bVar1) && (this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0)) {
      bVar1 = false;
      if (*(int *)(this + 0x254) != 0) {
        bVar1 = *(int *)(*(int *)(this + 0x254) + 0x158) == 1;
      }
      if (bVar1) {
        iVar2 = SpaceStation::getCurrentAmountOwed(this);
        if (iVar2 == 0) {
          bVar1 = true;
          goto LAB_004ce5a6;
        }
      }
    }
  }
  bVar1 = false;
LAB_004ce5a6:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ce5d9;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotGetUndockingPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCannotGetUndockingPermission(int param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkNeedsUndockingPermission(param_1,0);
    if (!bVar1) {
      bVar1 = true;
      goto LAB_004ce68a;
    }
    this = *(SpaceStation **)(param_1 + 0x178);
    if (this != (SpaceStation *)0x0) {
      bVar1 = false;
      if (*(int *)(this + 0x254) != 0) {
        bVar1 = *(int *)(*(int *)(this + 0x254) + 0x158) == 1;
      }
      if (bVar1) {
        iVar2 = SpaceStation::getCurrentAmountOwed(this);
        if (iVar2 != 0) {
          bVar1 = true;
          goto LAB_004ce68a;
        }
      }
    }
  }
  bVar1 = false;
LAB_004ce68a:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ce6bd;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkAnyAirlockOpen(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkAnyAirlockOpen(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if ((*(char *)(param_1 + 0x280) == '\0') || (*(char *)(param_1 + 0x281) == '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkAllAirlocksSealed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkAllAirlocksSealed(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 0x280) == '\0')) ||
     (*(char *)(param_1 + 0x281) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanUndock(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanUndock(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  SpaceStation *this;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      local_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_38,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      pFVar2 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (!bVar1) goto LAB_004ce886;
    }
    if ((((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) &&
        (param_1[0x280] != (Ship)0x0)) &&
       ((param_1[0x281] != (Ship)0x0 && (*(int *)(param_1 + 0x178) != 0)))) {
      bVar1 = ShipClass::canBeDockedWith(*(ShipClass **)(*(int *)(param_1 + 0x178) + 0x254));
      if (bVar1) {
        bVar1 = SpaceStation::shipHasUndockingClearance(this,param_1);
        if (bVar1) {
          bVar1 = true;
          goto LAB_004ce888;
        }
      }
    }
  }
LAB_004ce886:
  bVar1 = false;
LAB_004ce888:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4ce8bb;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkDockedButCannotUndock(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkDockedButCannotUndock(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf960;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      local_34[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_34,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      pFVar2 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (!bVar1) goto LAB_004ce9ae;
    }
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      local_34[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_34,"",0);
      bVar1 = checkCanUndock(param_1,0);
      bVar1 = !bVar1;
      goto LAB_004ce9b0;
    }
  }
LAB_004ce9ae:
  bVar1 = false;
LAB_004ce9b0:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ce9e3;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIFFActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIFFActive(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x40) == 0)) ||
     (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkSelectedNavObjectCanCommunicate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkSelectedNavObjectCanCommunicate(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) ||
       (((*(int *)(g_gameData + 0xcc) != 0 && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
        || (g_gameLogic[0x72] == (GameLogic)0x0)))) ||
      ((iVar1 = *(int *)(param_1 + 0x19c), iVar1 == 0 || (*(int *)(iVar1 + 0x130) == 0)))) ||
     ((*(char *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x40) + 0x34) == '\0' &&
      (5.0 < *(float *)(iVar1 + 0x40))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkOwesMoneyToDockedStation(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkOwesMoneyToDockedStation(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x178), iVar1 == 0)) ||
      ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 != 1 &&
       ((iVar2 != 2 && (iVar2 != 3)))))) ||
     ((*(int *)(iVar1 + 0x390) == 0 || ((int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0) < 1)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar5;
}


// bool __cdecl ShipData::checkOwesMoneyToDockedStationAndCanPay(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkOwesMoneyToDockedStationAndCanPay(int param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0))
      && ((iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158), iVar1 == 1 ||
          ((iVar1 == 2 || (iVar1 == 3)))))) &&
     ((*(int *)(this + 0x390) != 0 && (0 < (int)*(float *)(*(int *)(this + 0x390) + 0xd0))))) {
    iVar1 = SpaceStation::getCurrentAmountOwed(this);
    if (iVar1 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      bVar4 = true;
      goto LAB_004cebf2;
    }
  }
  bVar4 = false;
LAB_004cebf2:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkOwesMoneyToDockedStationAndCannotPay(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkOwesMoneyToDockedStationAndCannotPay(int param_1,undefined4 param_2,void *param_3)

{
  SpaceStation *this;
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (this = *(SpaceStation **)(param_1 + 0x178), this != (SpaceStation *)0x0))
      && ((iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158), iVar1 == 1 ||
          ((iVar1 == 2 || (iVar1 == 3)))))) &&
     ((*(int *)(this + 0x390) != 0 && (0 < (int)*(float *)(*(int *)(this + 0x390) + 0xd0))))) {
    iVar1 = SpaceStation::getCurrentAmountOwed(this);
    if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar1) {
      bVar4 = true;
      goto LAB_004cec92;
    }
  }
  bVar4 = false;
LAB_004cec92:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkAirlocksClosedButNeedsUndockPermission(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkAirlocksClosedButNeedsUndockPermission(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((param_1 != 0) && (*(char *)(param_1 + 0x280) != '\0')) &&
      (*(char *)(param_1 + 0x281) != '\0')) &&
     ((*(int *)(param_1 + 0xd4) == 3 && (*(int *)(param_1 + 0xf8) == 2)))) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkNeedsUndockingPermission(param_1,param_2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004ced5e;
    }
  }
  bVar1 = false;
LAB_004ced5e:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4ced91;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanJumpInTutorial(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanJumpInTutorial(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf960;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(g_gameData + 0xcc) != 0)) &&
     (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"ready_to_jump_in_tutorial",0x19);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (((bVar1) && (*(float *)(param_1 + 0x118) == 0.0)) && (*(float *)(param_1 + 0x11c) == 0.0)) {
      bVar1 = true;
      goto LAB_004cee5f;
    }
  }
  bVar1 = false;
LAB_004cee5f:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4cee92;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanDetectCassandraInTutorial(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCanDetectCassandraInTutorial(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(g_gameData + 0xcc) != 0)) &&
     (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"tutorial_jumped",0xf);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (!bVar1) {
      bVar1 = true;
      goto LAB_004cef38;
    }
  }
  bVar1 = false;
LAB_004cef38:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4cef6b;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIsMoving(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsMoving(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if ((*(float *)(param_1 + 0x118) == 0.0) && (*(float *)(param_1 + 0x11c) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkHasCoursePlotted(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasCoursePlotted(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 != 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCoursePlottedNotEngaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCoursePlottedNotEngaged(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 == 0)) ||
     (*(int *)(param_1 + 0xd4) == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkAutoPilotEngaged(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkAutoPilotEngaged(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) ||
     ((*(int *)(g_gameData + 0xcc) != 0 && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) == 1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkAutoPilotNotEngaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkAutoPilotNotEngaged(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0xd4) != 1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkDockedWithJumpgate(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkDockedWithJumpgate(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x178) == 0)) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) != 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkPwrReactorOff(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrReactorOff(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else if (*(SystemManager **)(param_1 + 0x40) == (SystemManager *)0x0) {
    bVar4 = true;
  }
  else {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1,true);
    bVar4 = pSVar1 == (ShipModule *)0x0;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkPwrReactorOn(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrReactorOn(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(SystemManager **)(param_1 + 0x40) != (SystemManager *)0x0)) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1,true);
    if (pSVar1 != (ShipModule *)0x0) {
      bVar4 = true;
      goto LAB_004cf2fb;
    }
  }
  bVar4 = false;
LAB_004cf2fb:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkCanRotate(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanRotate(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) &&
     (((*(int *)(g_gameData + 0xcc) == 0 || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) &&
      (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0)))) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (((cVar2 != '\0') && (PresentationData::m_selectedHeading != -1.0)) &&
       (PresentationData::m_selectedHeading != (double)*(float *)(param_1 + 0x120))) {
      bVar5 = true;
      goto LAB_004cf3df;
    }
  }
  bVar5 = false;
LAB_004cf3df:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkRCSBurning(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkRCSBurning(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) != '\0')) {
      bVar5 = true;
      goto LAB_004cf48b;
    }
  }
  bVar5 = false;
LAB_004cf48b:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkRCSBurningCW(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkRCSBurningCW(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') &&
       ((iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), *(char *)(iVar2 + 0x62) != '\0' &&
        (*(int *)(iVar2 + 0x34) == 1)))) {
      bVar6 = true;
      goto LAB_004cf541;
    }
  }
  bVar6 = false;
LAB_004cf541:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkRCSBurningCCW(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkRCSBurningCCW(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') &&
       ((iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), *(char *)(iVar2 + 0x62) != '\0' &&
        (*(int *)(iVar2 + 0x34) == 2)))) {
      bVar6 = true;
      goto LAB_004cf5f1;
    }
  }
  bVar6 = false;
LAB_004cf5f1:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkIsStationary(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsStationary(Ship *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  float in_XMM0_Da;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) &&
     (((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)) &&
      (*(int *)(param_1 + 0xd4) != 2)))) {
    Ship::getSpeed(param_1);
    if (in_XMM0_Da == 0.0) {
      bVar3 = true;
      goto LAB_004cf6a2;
    }
  }
  bVar3 = false;
LAB_004cf6a2:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCanComeToFullStop(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanComeToFullStop(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  float in_XMM0_Da;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    bVar1 = Ship::isStopping(param_1);
    if (!bVar1) {
      Ship::getSpeed(param_1);
      bVar1 = 0.0 < in_XMM0_Da;
      goto LAB_004cf742;
    }
  }
  bVar1 = false;
LAB_004cf742:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanSetTarget(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanSetTarget(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    bVar1 = Ship::canUseWeapons(param_1);
    if (bVar1) {
      local_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_38,"",0);
      bVar1 = checkNavTargetSelected(param_1,param_2);
      if (((bVar1) && (*(int *)(param_1 + 0x1b4) != -1)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                           *(int *)(param_1 + 0x1b4) * 4) + 0x38c) == 0)) {
        bVar1 = true;
        goto LAB_004cf824;
      }
    }
  }
  bVar1 = false;
LAB_004cf824:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cf857;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanChangeTarget(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanChangeTarget(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    bVar1 = Ship::canUseWeapons(param_1);
    if (bVar1) {
      local_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_38,"",0);
      bVar1 = checkNavTargetSelected(param_1,param_2);
      if (((bVar1) && (*(int *)(param_1 + 0x1b4) != -1)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                           *(int *)(param_1 + 0x1b4) * 4) + 0x38c) != 0)) {
        bVar1 = true;
        goto LAB_004cf904;
      }
    }
  }
  bVar1 = false;
LAB_004cf904:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cf937;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotSetOrChangeTarget(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotSetOrChangeTarget(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (Ship *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = Ship::canUseWeapons(param_1);
    if (bVar1) {
      local_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_38,"",0);
      bVar1 = checkNavTargetSelected(param_1,param_2);
      if ((bVar1) && (*(int *)(param_1 + 0x1b4) != -1)) {
        bVar1 = false;
        goto LAB_004cf9d3;
      }
    }
    bVar1 = true;
  }
LAB_004cf9d3:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4cfa06;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkTubeHasExp(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeHasExp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (((cVar3 != '\0') &&
        (((*(int *)(param_1 + 0x1b4) != -1 &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)))) &&
       (*(int *)(*(int *)(iVar2 + 0x388) + 0x194) == 0)) {
      bVar6 = true;
      goto LAB_004cfa9b;
    }
  }
  bVar6 = false;
LAB_004cfa9b:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeHasEmp(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeHasEmp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (((cVar3 != '\0') &&
        (((*(int *)(param_1 + 0x1b4) != -1 &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)))) &&
       (*(int *)(*(int *)(iVar2 + 0x388) + 0x194) == 1)) {
      bVar6 = true;
      goto LAB_004cfb6b;
    }
  }
  bVar6 = false;
LAB_004cfb6b:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeCanBeArmed(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanBeArmed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3c4) != '\0')) && (*(char *)(iVar2 + 0x3c5) == '\0')))) {
        bVar6 = true;
        goto LAB_004cfc4f;
      }
    }
  }
  bVar6 = false;
LAB_004cfc4f:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeCanBePoweredDown(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanBePoweredDown(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  Weapon *this;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((this = *(Weapon **)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), this != (Weapon *)0x0
          && (this[0x3c4] == (Weapon)0x0)))) {
        if (this[0x3bc] == (Weapon)0x0) {
          bVar4 = Weapon::isSpinningUp(this);
          if (!bVar4) goto LAB_004cfd36;
        }
        bVar4 = true;
        goto LAB_004cfd38;
      }
    }
  }
LAB_004cfd36:
  bVar4 = false;
LAB_004cfd38:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkTubeCanBeDisabled(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanBeDisabled(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if (((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
           (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
          ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3c4) != '\0')))) &&
         ((*(int *)(iVar2 + 0x38c) == 0 ||
          ((*(float *)(iVar2 + 300) != -9999.0 || (*(float *)(iVar2 + 0x130) != -9999.0)))))) {
        bVar6 = true;
        goto LAB_004cfe4d;
      }
    }
  }
  bVar6 = false;
LAB_004cfe4d:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeHasTorpedo(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeHasTorpedo(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 3)))) {
        bVar6 = true;
        goto LAB_004cff26;
      }
    }
  }
  bVar6 = false;
LAB_004cff26:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeHasMine(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeHasMine(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 5)))) {
        bVar6 = true;
        goto LAB_004cfff6;
      }
    }
  }
  bVar6 = false;
LAB_004cfff6:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeHasProbe(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeHasProbe(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 4)))) {
        bVar6 = true;
        goto LAB_004d00c6;
      }
    }
  }
  bVar6 = false;
LAB_004d00c6:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeCanSpinUp(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanSpinUp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  basic_string<> abStack_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if (cVar3 != '\0') {
        abStack_38[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(abStack_38,"",0);
        bVar4 = checkTubeSpinningUp(param_1,param_2);
        if ((((!bVar4) && (*(int *)(param_1 + 0x1b4) != -1)) &&
            (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
           (((*(char *)(iVar2 + 0x62) == '\0' &&
             (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)) &&
            ((*(char *)(iVar2 + 0x3bc) == '\0' && (*(float *)(iVar2 + 0x3c0) <= 0.0)))))) {
          bVar4 = true;
          goto LAB_004d01e3;
        }
      }
    }
  }
  bVar4 = false;
LAB_004d01e3:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d0216;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkTubeLinked(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeLinked(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(char *)(iVar2 + 0x3c4) != '\0')))) {
        bVar6 = true;
        goto LAB_004d02b6;
      }
    }
  }
  bVar6 = false;
LAB_004d02b6:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeSpinningUp(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeSpinningUp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (-1.0 < *(float *)(iVar2 + 0x3c0))))) {
        bVar6 = true;
        goto LAB_004d038e;
      }
    }
  }
  bVar6 = false;
LAB_004d038e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeEmpty(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeEmpty(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((cVar3 != '\0') &&
         (((*(int *)(param_1 + 0x1b4) == -1 ||
           (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 == 0)) ||
          (*(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4) == 0)))) {
        bVar6 = true;
        goto LAB_004d045c;
      }
    }
  }
  bVar6 = false;
LAB_004d045c:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeLaunched(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeLaunched(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3bc) != '\0')) && (*(char *)(iVar2 + 0x3c4) != '\0')))) {
        bVar6 = true;
        goto LAB_004d053f;
      }
    }
  }
  bVar6 = false;
LAB_004d053f:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkTubeCanFire(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanFire(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  Weapon *this;
  char cVar3;
  bool bVar4;
  int extraout_ECX;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (this = *(Weapon **)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), this != (Weapon *)0x0))
      {
        bVar4 = Weapon::canFire(this);
        if ((bVar4) && (*(char *)(extraout_ECX + 0x3c4) == '\0')) {
          bVar4 = true;
          goto LAB_004d061f;
        }
      }
    }
  }
  bVar4 = false;
LAB_004d061f:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkTubeCanLaunch(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkTubeCanLaunch(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3bc) != '\0')) && (*(char *)(iVar2 + 0x3c4) == '\0')))) {
        bVar6 = true;
        goto LAB_004d06ff;
      }
    }
  }
  bVar6 = false;
LAB_004d06ff:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleReactorUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleReactorUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pSVar3 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1);
    if (pSVar3 != (ShipModule *)0x0) {
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        bVar6 = true;
        goto LAB_004d07a2;
      }
    }
  }
  bVar6 = false;
LAB_004d07a2:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleReactorDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleReactorDamaged(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pSVar3 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1);
    if (pSVar3 != (ShipModule *)0x0) {
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))();
        if (cVar1 == '\0') {
          bVar6 = true;
          goto LAB_004d0852;
        }
      }
    }
  }
  bVar6 = false;
LAB_004d0852:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleReactorDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleReactorDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pSVar3 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1);
    if (pSVar3 != (ShipModule *)0x0) {
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        bVar6 = true;
        goto LAB_004d08f2;
      }
    }
  }
  bVar6 = false;
LAB_004d08f2:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleReactorConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleReactorConnected(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1);
    if ((pSVar1 != (ShipModule *)0x0) && (pSVar1[99] != (ShipModule)0x0)) {
      bVar4 = true;
      goto LAB_004d0965;
    }
  }
  bVar4 = false;
LAB_004d0965:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleReactorFunctioning(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleReactorFunctioning(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pSVar3 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),1);
    if ((pSVar3 != (ShipModule *)0x0) && (pSVar3[99] != (ShipModule)0x0)) {
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x10))(0,uVar2);
      if (cVar1 != '\0') {
        bVar6 = true;
        goto LAB_004d09fa;
      }
    }
  }
  bVar6 = false;
LAB_004d09fa:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleMainDriveUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleMainDriveUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d0a9c;
    }
  }
  bVar5 = false;
LAB_004d0a9c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleMainDriveDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleMainDriveDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d0b4e;
      }
    }
  }
  bVar5 = false;
LAB_004d0b4e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleMainDriveDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleMainDriveDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0)
      ) && (*(char *)((int)piVar1 + 99) != '\0')) {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d0bf2;
    }
  }
  bVar5 = false;
LAB_004d0bf2:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleMainDriveConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleMainDriveConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleRCSUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleRCSUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d0cec;
    }
  }
  bVar5 = false;
LAB_004d0cec:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleRCSDamaged(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleRCSDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d0d9e;
      }
    }
  }
  bVar5 = false;
LAB_004d0d9e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleRCSDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleRCSDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d0e3c;
    }
  }
  bVar5 = false;
LAB_004d0e3c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleRCSConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleRCSConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleCommsUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleCommsUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d0f3c;
    }
  }
  bVar5 = false;
LAB_004d0f3c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleCommsDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleCommsDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x1c) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d0fee;
      }
    }
  }
  bVar5 = false;
LAB_004d0fee:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleCommsDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleCommsDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d108c;
    }
  }
  bVar5 = false;
LAB_004d108c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleCommsConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleCommsConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleBatt1Undamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt1Undamaged(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,0);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,0);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        bVar6 = true;
        goto LAB_004d119e;
      }
    }
  }
  bVar6 = false;
LAB_004d119e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt1Damaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt1Damaged(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,1);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,1);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))();
        if (cVar1 == '\0') {
          bVar6 = true;
          goto LAB_004d125d;
        }
      }
    }
  }
  bVar6 = false;
LAB_004d125d:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt1Destroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt1Destroyed(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,1);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,1);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        bVar6 = true;
        goto LAB_004d130e;
      }
    }
  }
  bVar6 = false;
LAB_004d130e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt1Connected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt1Connected(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar1 = SystemManager::getBattery(this,1);
    if (pSVar1 != (ShipModule *)0x0) {
      pSVar1 = SystemManager::getBattery(this,1);
      if (pSVar1[99] != (ShipModule)0x0) {
        bVar4 = true;
        goto LAB_004d1391;
      }
    }
  }
  bVar4 = false;
LAB_004d1391:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleBatt2Undamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt2Undamaged(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,1);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,1);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        bVar6 = true;
        goto LAB_004d142e;
      }
    }
  }
  bVar6 = false;
LAB_004d142e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt3Undamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt3Undamaged(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,2);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,2);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        bVar6 = true;
        goto LAB_004d14de;
      }
    }
  }
  bVar6 = false;
LAB_004d14de:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt3Damaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt3Damaged(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,2);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,2);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))();
        if (cVar1 == '\0') {
          bVar6 = true;
          goto LAB_004d159d;
        }
      }
    }
  }
  bVar6 = false;
LAB_004d159d:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt3Destroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt3Destroyed(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar3 = SystemManager::getBattery(this,2);
    if (pSVar3 != (ShipModule *)0x0) {
      pSVar3 = SystemManager::getBattery(this,2);
      cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        bVar6 = true;
        goto LAB_004d164e;
      }
    }
  }
  bVar6 = false;
LAB_004d164e:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleBatt3Connected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBatt3Connected(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar1 = SystemManager::getBattery(this,2);
    if (pSVar1 != (ShipModule *)0x0) {
      pSVar1 = SystemManager::getBattery(this,2);
      if (pSVar1[99] != (ShipModule)0x0) {
        bVar4 = true;
        goto LAB_004d16d1;
      }
    }
  }
  bVar4 = false;
LAB_004d16d1:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleHelmUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleHelmUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d175c;
    }
  }
  bVar5 = false;
LAB_004d175c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleHelmDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleHelmDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d180e;
      }
    }
  }
  bVar5 = false;
LAB_004d180e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleHelmDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleHelmDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d18ac;
    }
  }
  bVar5 = false;
LAB_004d18ac:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleHelmConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleHelmConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x24), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleSensorsUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleSensorsUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x18))
                      (___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar1 == '\0') {
      bVar4 = true;
      goto LAB_004d19ab;
    }
  }
  bVar4 = false;
LAB_004d19ab:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkModuleSensorsDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleSensorsDamaged(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x18))
                      (___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x40) + 0x14))();
      if (cVar1 == '\0') {
        bVar4 = true;
        goto LAB_004d1a5c;
      }
    }
  }
  bVar4 = false;
LAB_004d1a5c:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkModuleSensorsDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleSensorsDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x14))
                      (___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      bVar4 = true;
      goto LAB_004d1afb;
    }
  }
  bVar4 = false;
LAB_004d1afb:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkModuleSensorsConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleSensorsConnected(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (**(int **)(param_1 + 0x40) == 0)) ||
     (*(char *)(**(int **)(param_1 + 0x40) + 99) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkModuleNavComUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleNavComUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d1bfc;
    }
  }
  bVar5 = false;
LAB_004d1bfc:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleNavComDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleNavComDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x28) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d1cae;
      }
    }
  }
  bVar5 = false;
LAB_004d1cae:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleNavComDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleNavComDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d1d4c;
    }
  }
  bVar5 = false;
LAB_004d1d4c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleNavComConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleNavComConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x28), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleWeaponUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleWeaponUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d1e4c;
    }
  }
  bVar5 = false;
LAB_004d1e4c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleWeaponDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleWeaponDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d1efe;
      }
    }
  }
  bVar5 = false;
LAB_004d1efe:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleWeaponDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleWeaponDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d1f9c;
    }
  }
  bVar5 = false;
LAB_004d1f9c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleWeaponConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleWeaponConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleJumpDriveUndamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleJumpDriveUndamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_004d209c;
    }
  }
  bVar5 = false;
LAB_004d209c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleJumpDriveDamaged(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleJumpDriveDamaged(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x14))();
      if (cVar2 == '\0') {
        bVar5 = true;
        goto LAB_004d214e;
      }
    }
  }
  bVar5 = false;
LAB_004d214e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleJumpDriveDestroyed(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleJumpDriveDestroyed(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d21ec;
    }
  }
  bVar5 = false;
LAB_004d21ec:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleJumpDriveConnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleJumpDriveConnected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkModuleBooting(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleBooting(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
        piVar3 != *(int **)(*(int *)(param_1 + 0x40) + 0x40); piVar3 = piVar3 + 1) {
      piVar1 = (int *)*piVar3;
      if (*(int *)(piVar1[2] + 4) == param_2) {
        cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
        if ((cVar2 != '\0') && (cVar2 = (**(code **)(*piVar1 + 0x1c))(), cVar2 == '\0')) {
          bVar6 = true;
          goto LAB_004d22f6;
        }
        break;
      }
    }
  }
  bVar6 = false;
LAB_004d22f6:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkModuleDisconnected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleDisconnected(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
        piVar3 != *(int **)(*(int *)(param_1 + 0x40) + 0x40); piVar3 = piVar3 + 1) {
      piVar1 = (int *)*piVar3;
      if (*(int *)(piVar1[2] + 4) == param_2) {
        cVar2 = (**(code **)(*piVar1 + 0x14))(___security_cookie ^ (uint)&stack0xfffffffc);
        if ((cVar2 == '\0') && (*(char *)((int)piVar1 + 99) == '\0')) {
          bVar6 = true;
          goto LAB_004d23b6;
        }
        break;
      }
    }
  }
  bVar6 = false;
LAB_004d23b6:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkCanSetJumpDestination(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanSetJumpDestination(Ship *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  Vec2 *pVVar4;
  Sector *pSVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  Vec2 *unaff_EDI;
  float fVar8;
  float fVar9;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf99a;
  local_10 = ExceptionList;
  pVVar4 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))(0);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar3 = Ship::isUndocking(param_1);
      if ((!bVar3) &&
         ((((*(int *)(param_1 + 0x178) == 0 &&
            (iVar1 = *(int *)(param_1 + 0x1d0), *(int *)(param_1 + 0x50) != iVar1)) &&
           (**(int **)(param_1 + 0x24) != iVar1)) && (iVar1 != -1)))) {
        pSVar5 = GameData::getSectorWithID(g_gameData,iVar1);
        fVar8 = (float)*(int *)(pSVar5 + 0x7c);
        local_8 = CONCAT31(local_8._1_3_,2);
        fastDistance(pVVar4,unaff_EDI);
        fVar9 = fVar8;
        ShipModule::getCurrentJumpRange(*(ShipModule **)(*(int *)(param_1 + 0x40) + 0x14));
        if (fVar8 <= fVar9) {
          bVar3 = true;
          goto LAB_004d2537;
        }
      }
    }
  }
  bVar3 = false;
LAB_004d2537:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCanNotSetJumpDestination(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanNotSetJumpDestination(Ship *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  Vec2 *pVVar4;
  Sector *pSVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  Vec2 *unaff_EDI;
  float fVar8;
  float fVar9;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf99a;
  local_10 = ExceptionList;
  pVVar4 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))(0);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar3 = Ship::isUndocking(param_1);
      if ((!bVar3) && (*(int *)(param_1 + 0x178) == 0)) {
        iVar1 = *(int *)(param_1 + 0x1d0);
        if (((*(int *)(param_1 + 0x50) != iVar1) && (**(int **)(param_1 + 0x24) != iVar1)) &&
           (iVar1 != -1)) {
          pSVar5 = GameData::getSectorWithID(g_gameData,iVar1);
          fVar8 = (float)*(int *)(pSVar5 + 0x7c);
          local_8 = CONCAT31(local_8._1_3_,2);
          fastDistance(pVVar4,unaff_EDI);
          fVar9 = fVar8;
          ShipModule::getCurrentJumpRange(*(ShipModule **)(*(int *)(param_1 + 0x40) + 0x14));
          if (fVar8 <= fVar9) goto LAB_004d26a5;
        }
        bVar3 = true;
        goto LAB_004d26a7;
      }
    }
  }
LAB_004d26a5:
  bVar3 = false;
LAB_004d26a7:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCanSpinUpJumpDrive(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanSpinUpJumpDrive(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar2 = Ship::isUndocking(param_1);
      if ((!bVar2) &&
         ((*(int *)(param_1 + 0x178) == 0 &&
          (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0)))) {
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0);
        if ((cVar1 != '\0') && (*(float *)(param_1 + 0x58) == -1.0)) {
          bVar2 = true;
          goto LAB_004d279e;
        }
      }
    }
  }
  bVar2 = false;
LAB_004d279e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanNotSpinUpJumpDrive(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanNotSpinUpJumpDrive(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar2 = Ship::isUndocking(param_1);
      if ((!bVar2) &&
         ((*(int *)(param_1 + 0x178) == 0 &&
          (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0)))) {
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0);
        if ((cVar1 != '\0') && (*(float *)(param_1 + 0x58) != -1.0)) {
          bVar2 = true;
          goto LAB_004d288e;
        }
      }
    }
  }
  bVar2 = false;
LAB_004d288e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanDischargeJumpDrive(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanDischargeJumpDrive(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar2 = Ship::isUndocking(param_1);
      if ((!bVar2) &&
         (((*(int *)(param_1 + 0x178) == 0 &&
           (0.0 < *(float *)(param_1 + 0x58) || *(float *)(param_1 + 0x58) == 0.0)) &&
          (*(float *)(param_1 + 0x54) == -1.0)))) {
        bVar2 = true;
        goto LAB_004d2970;
      }
    }
  }
  bVar2 = false;
LAB_004d2970:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanNotDischargeJumpDrive(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanNotDischargeJumpDrive(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar2 = Ship::isUndocking(param_1);
      if ((!bVar2) && (*(int *)(param_1 + 0x178) == 0)) {
        if (*(float *)(param_1 + 0x58) <= 0.0 && *(float *)(param_1 + 0x58) != 0.0) {
          bVar2 = true;
          goto LAB_004d2a54;
        }
        if (*(float *)(param_1 + 0x54) != -1.0) {
          bVar2 = true;
          goto LAB_004d2a54;
        }
      }
    }
  }
  bVar2 = false;
LAB_004d2a54:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkHasJumpDrive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasJumpDrive(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x14) != 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkHasNoJumpDrive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasNoJumpDrive(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x14) == 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkJumpDriveSpinningUp(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkJumpDriveSpinningUp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') && (0.0 < *(float *)(param_1 + 0x58))) {
        bVar5 = true;
        goto LAB_004d2bcf;
      }
    }
  }
  bVar5 = false;
LAB_004d2bcf:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkJumpDriveCalculating(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkJumpDriveCalculating(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if (((cVar2 != '\0') && (*(float *)(param_1 + 0x5c) != -1.0)) &&
         (*(float *)(param_1 + 0x5c) != 100.0)) {
        bVar5 = true;
        goto LAB_004d2ca5;
      }
    }
  }
  bVar5 = false;
LAB_004d2ca5:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkJumpDriveCalculated(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkJumpDriveCalculated(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') &&
         (100.0 < *(float *)(param_1 + 0x5c) || *(float *)(param_1 + 0x5c) == 100.0)) {
        bVar5 = true;
        goto LAB_004d2d64;
      }
    }
  }
  bVar5 = false;
LAB_004d2d64:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkJumpDriveSpunUp(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkJumpDriveSpunUp(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') && (*(float *)(param_1 + 0x58) == 0.0)) {
        bVar5 = true;
        goto LAB_004d2e28;
      }
    }
  }
  bVar5 = false;
LAB_004d2e28:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCanCalculateJump(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanCalculateJump(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  Quadrant QVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((((param_1 == (Ship *)0x0) || (*(int **)(*(int *)(param_1 + 0x40) + 0x14) == (int *)0x0)) ||
        (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                           (0,___security_cookie ^ (uint)&stack0xfffffffc), cVar1 == '\0')) ||
       (((*(int *)(param_1 + 0xd4) == 3 &&
         ((*(int *)(param_1 + 0xf8) == 2 || (*(int *)(param_1 + 0xf8) == 3)))) ||
        (*(int *)(param_1 + 0x178) != 0)))) ||
      (((*(int **)(*(int *)(param_1 + 0x40) + 0x24) == (int *)0x0 ||
        (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0), cVar1 == '\0'
        )) || ((*(int *)(param_1 + 0x50) == -1 ||
               (((*(float *)(param_1 + 0x58) != 0.0 ||
                 (fVar6 = *(float *)(param_1 + 0x5c), fVar6 != -1.0)) ||
                (QVar2 = GameObject::getQuadrant((GameObject *)(param_1 + 8)),
                *(Quadrant *)(param_1 + 0x60) != QVar2)))))))) ||
     (Ship::getSpeed(param_1), 0.0 < fVar6)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCanNotCalculateJump(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanNotCalculateJump(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  Quadrant QVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 == (Ship *)0x0) || (*(int **)(*(int *)(param_1 + 0x40) + 0x14) == (int *)0x0)) ||
     (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                        (0,___security_cookie ^ (uint)&stack0xfffffffc), cVar1 == '\0')) {
LAB_004d309a:
    bVar5 = false;
  }
  else {
    if (((*(int *)(param_1 + 0xd4) != 3) ||
        ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))) &&
       ((*(int *)(param_1 + 0x178) == 0 &&
        (((*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0 &&
          (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0),
          cVar1 != '\0')) && (*(int *)(param_1 + 0x50) != -1)))))) {
      if (*(float *)(param_1 + 0x58) != 0.0) {
        bVar5 = true;
        goto LAB_004d309c;
      }
      fVar6 = *(float *)(param_1 + 0x5c);
      if (fVar6 != -1.0) {
        bVar5 = true;
        goto LAB_004d309c;
      }
      QVar2 = GameObject::getQuadrant((GameObject *)(param_1 + 8));
      if (*(Quadrant *)(param_1 + 0x60) != QVar2) {
        bVar5 = true;
        goto LAB_004d309c;
      }
      Ship::getSpeed(param_1);
      if (fVar6 <= 0.0) goto LAB_004d309a;
    }
    bVar5 = true;
  }
LAB_004d309c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCanJump(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanJump(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  Quadrant QVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      bVar2 = Ship::isUndocking(param_1);
      if ((!bVar2) &&
         ((((*(int *)(param_1 + 0x178) == 0 && (*(int *)(param_1 + 0x50) != -1)) &&
           (*(float *)(param_1 + 0x58) == 0.0)) &&
          ((50.0 < *(float *)(param_1 + 0x5c) || *(float *)(param_1 + 0x5c) == 50.0 &&
           (fVar6 = *(float *)(param_1 + 0x54), fVar6 == -1.0)))))) {
        QVar3 = GameObject::getQuadrant((GameObject *)(param_1 + 8));
        if (*(Quadrant *)(param_1 + 0x60) == QVar3) {
          Ship::getSpeed(param_1);
          if (fVar6 <= 0.0) {
            bVar2 = true;
            goto LAB_004d31c0;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_004d31c0:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanNotJump(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanNotJump(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  Quadrant QVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x14) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x10))
                      (0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      if ((*(int *)(param_1 + 0xd4) != 3) || (*(int *)(param_1 + 0xf8) != 2)) {
        bVar2 = Ship::isUndocking(param_1);
        if ((!bVar2) && (*(int *)(param_1 + 0x178) == 0)) {
          if (*(int *)(param_1 + 0x50) == -1) {
            bVar2 = true;
            goto LAB_004d32f8;
          }
          if (*(float *)(param_1 + 0x58) != 0.0) {
            bVar2 = true;
            goto LAB_004d32f8;
          }
          if (*(float *)(param_1 + 0x5c) <= 50.0 && *(float *)(param_1 + 0x5c) != 50.0) {
            bVar2 = true;
            goto LAB_004d32f8;
          }
          fVar6 = *(float *)(param_1 + 0x54);
          if (fVar6 != -1.0) {
            bVar2 = true;
            goto LAB_004d32f8;
          }
          QVar3 = GameObject::getQuadrant((GameObject *)(param_1 + 8));
          if (*(Quadrant *)(param_1 + 0x60) != QVar3) {
            bVar2 = true;
            goto LAB_004d32f8;
          }
          Ship::getSpeed(param_1);
          if (fVar6 <= 0.0) goto LAB_004d32f6;
        }
      }
      bVar2 = true;
      goto LAB_004d32f8;
    }
  }
LAB_004d32f6:
  bVar2 = false;
LAB_004d32f8:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkPwrLowPowerWarning(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrLowPowerWarning(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (*(SystemManager **)(param_1 + 0x40) == (SystemManager *)0x0)) {
    bVar4 = false;
  }
  else {
    iVar1 = SystemManager::getCurrentPowerPercentage(*(SystemManager **)(param_1 + 0x40));
    bVar4 = iVar1 < 0x19;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkPwrIsDraining(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrIsDraining(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (this = *(SystemManager **)(param_1 + 0x40), this == (SystemManager *)0x0))
  {
    bVar3 = false;
  }
  else {
    SystemManager::totalPowerDrain(this);
    fVar4 = in_XMM0_Da;
    SystemManager::totalPowerGeneration(this);
    bVar3 = fVar4 <= in_XMM0_Da;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkPwrIsGenerating(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrIsGenerating(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (this = *(SystemManager **)(param_1 + 0x40), this == (SystemManager *)0x0))
  {
    bVar3 = false;
  }
  else {
    SystemManager::totalPowerDrain(this);
    fVar4 = in_XMM0_Da;
    SystemManager::totalPowerGeneration(this);
    bVar3 = in_XMM0_Da < fVar4;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkIsTurnedOff(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsTurnedOff(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0xd0) == '\0';
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsTurnedOn(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsTurnedOn(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0xd0);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkSensorsHistoryLocked(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSensorsHistoryLocked(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x1b1);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkSensorsNavLinked(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSensorsNavLinked(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x1b0);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkSensorsAuto(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSensorsAuto(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x1b2);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkLADARFunctional(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkLADARFunctional(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d372e;
    }
  }
  bVar5 = false;
LAB_004d372e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkMainDriveFunctional(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMainDriveFunctional(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d37ce;
    }
  }
  bVar5 = false;
LAB_004d37ce:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkLADARActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkLADARActive(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) != '\0')) {
      bVar5 = true;
      goto LAB_004d387b;
    }
  }
  bVar5 = false;
LAB_004d387b:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkLADARInActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkLADARInActive(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) == '\0')) {
      bVar5 = true;
      goto LAB_004d392f;
    }
  }
  bVar5 = false;
LAB_004d392f:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkModuleOpen(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkModuleOpen(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x1d8) != -1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkNoModuleOpen(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNoModuleOpen(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x1d8) == -1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkEngCurrentModuleOn(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngCurrentModuleOn(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  ShipModule SVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4))
    ;
    if (pSVar1 != (ShipModule *)0x0) {
      SVar4 = pSVar1[99];
      goto LAB_004d3a6a;
    }
  }
  SVar4 = (ShipModule)0x0;
LAB_004d3a6a:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return (bool)SVar4;
}


// bool __cdecl ShipData::checkEngCurrentModuleOff(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkEngCurrentModuleOff(int param_1,undefined4 param_2,void *param_3)

{
  ShipModule *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4))
    ;
    if (pSVar1 != (ShipModule *)0x0) {
      bVar4 = pSVar1[99] == (ShipModule)0x0;
      goto LAB_004d3ade;
    }
  }
  bVar4 = false;
LAB_004d3ade:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar4;
}


// bool __cdecl ShipData::checkPwrHasModuleSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrHasModuleSelected(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    uVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar1 >> 2;
    if (uVar5 != 0) {
      do {
        iVar2 = *(int *)(iVar1 + uVar3 * 4);
        if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar2 != 0) {
            bVar7 = true;
            goto LAB_004d3b56;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  bVar7 = false;
LAB_004d3b56:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  return bVar7;
}


// bool __cdecl ShipData::checkPwrCurrentModuleOn(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCurrentModuleOn(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  int iVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  ShipModule SVar7;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    uVar2 = 0;
    uVar5 = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
    if (uVar5 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(this + 0x3c) + uVar2 * 4);
        if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar1 != 0) {
            pSVar3 = SystemManager::getModule(this,*(int *)(param_1 + 0x1e8));
            SVar7 = pSVar3[99];
            goto LAB_004d3bd6;
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
  }
  SVar7 = (ShipModule)0x0;
LAB_004d3bd6:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  return (bool)SVar7;
}


// bool __cdecl ShipData::checkPwrCurrentModuleOff(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCurrentModuleOff(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  SystemManager *this;
  ShipModule *pSVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1e8), iVar1 == -1)) {
    bVar5 = false;
  }
  else {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar2 = SystemManager::getModule(this,iVar1);
    if (pSVar2 == (ShipModule *)0x0) {
      bVar5 = true;
    }
    else {
      pSVar2 = SystemManager::getModule(this,iVar1);
      bVar5 = pSVar2[99] == (ShipModule)0x0;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar5;
}


// bool __cdecl ShipData::checkPwrCurrentModuleEmconOn(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCurrentModuleEmconOn(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  int iVar1;
  uint uVar2;
  ShipModule *pSVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  ShipModule SVar7;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    this = *(SystemManager **)(param_1 + 0x40);
    uVar2 = 0;
    uVar5 = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
    if (uVar5 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(this + 0x3c) + uVar2 * 4);
        if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar1 != 0) {
            pSVar3 = SystemManager::getModule(this,*(int *)(param_1 + 0x1e8));
            SVar7 = pSVar3[0x14];
            goto LAB_004d3ce6;
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
  }
  SVar7 = (ShipModule)0x0;
LAB_004d3ce6:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  return (bool)SVar7;
}


// bool __cdecl ShipData::checkPwrCurrentModuleEmconOff(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCurrentModuleEmconOff(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  SystemManager *this;
  ShipModule *pSVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1e8), iVar1 == -1)) {
    bVar5 = false;
  }
  else {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar2 = SystemManager::getModule(this,iVar1);
    if (pSVar2 == (ShipModule *)0x0) {
      bVar5 = true;
    }
    else {
      pSVar2 = SystemManager::getModule(this,iVar1);
      bVar5 = pSVar2[0x14] == (ShipModule)0x0;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return bVar5;
}


// bool __cdecl ShipData::checkPwrCanRaisePriority(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCanRaisePriority(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  ShipModule *pSVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e8) != -1)) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar1 = SystemManager::getModule(this,*(int *)(param_1 + 0x1e8));
    if (pSVar1 == (ShipModule *)0x0) {
      bVar7 = true;
      goto LAB_004d3e0e;
    }
    uVar2 = 0;
    piVar3 = *(int **)(this + 0x3c);
    uVar5 = *(int *)(this + 0x40) - (int)piVar3 >> 2;
    if (uVar5 != 0) {
      do {
        if ((ShipModule *)*piVar3 == pSVar1) {
          if (uVar2 != 0xffffffff) {
            bVar7 = 0 < (int)uVar2;
            goto LAB_004d3e0e;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar5);
    }
  }
  bVar7 = false;
LAB_004d3e0e:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  return bVar7;
}


// bool __cdecl ShipData::checkPwrCanLowerPriority(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPwrCanLowerPriority(int param_1,undefined4 param_2,void *param_3)

{
  SystemManager *this;
  ShipModule *pSVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e8) != -1)) {
    this = *(SystemManager **)(param_1 + 0x40);
    pSVar1 = SystemManager::getModule(this,*(int *)(param_1 + 0x1e8));
    if (pSVar1 == (ShipModule *)0x0) {
      bVar7 = true;
      goto LAB_004d3eae;
    }
    uVar3 = 0;
    piVar2 = *(int **)(this + 0x3c);
    uVar5 = *(int *)(this + 0x40) - (int)piVar2 >> 2;
    if (uVar5 != 0) {
      do {
        if ((ShipModule *)*piVar2 == pSVar1) {
          if (uVar3 != 0xffffffff) {
            bVar7 = uVar3 < uVar5 - 1;
            goto LAB_004d3eae;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < uVar5);
    }
  }
  bVar7 = false;
LAB_004d3eae:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  return bVar7;
}


// bool __cdecl ShipData::checkCounterMeasureExists(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCounterMeasureExists(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 8), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d3f4e;
    }
  }
  bVar5 = false;
LAB_004d3f4e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCounterMeasureCanLaunch(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCounterMeasureCanLaunch(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar2 = checkCounterMeasureExists(param_1,0);
    if (((bVar2) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), *(float *)(iVar1 + 0x6c) <= -1.0)) &&
       (0 < *(int *)(iVar1 + 0x68))) {
      bVar2 = true;
      goto LAB_004d4023;
    }
  }
  bVar2 = false;
LAB_004d4023:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d4056;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCounterMeasureCannotLaunch(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCounterMeasureCannotLaunch(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar2 = checkCounterMeasureExists(param_1,0);
    if ((bVar2) &&
       ((iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), 0.0 <= *(float *)(iVar1 + 0x6c) ||
        (*(int *)(iVar1 + 0x68) < 1)))) {
      bVar2 = true;
      goto LAB_004d40f3;
    }
  }
  bVar2 = false;
LAB_004d40f3:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d4126;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkPDSExists(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPDSExists(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(int *)(*(int *)(param_1 + 0x40) + 0xc) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkPDSActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPDSActive(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkPDSExists(param_1,0);
    if (bVar1) {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))();
      if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0')) {
        bVar1 = true;
        goto LAB_004d4229;
      }
    }
  }
  bVar1 = false;
LAB_004d4229:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d425c;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkPDSInactive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPDSInactive(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_38[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_38,"",0);
    bVar1 = checkPDSExists(param_1,0);
    if (bVar1) {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))();
      if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) == '\0')) {
        bVar1 = true;
        goto LAB_004d4309;
      }
    }
  }
  bVar1 = false;
LAB_004d4309:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d433c;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommsAutosyncOn(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommsAutosyncOn(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(int *)(*(int *)(param_1 + 0x40) + 0x1c) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x15c);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return (bool)uVar3;
}


// bool __cdecl ShipData::checkPDLActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkPDLActive(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0xc), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0')) {
      bVar5 = true;
      goto LAB_004d441b;
    }
  }
  bVar5 = false;
LAB_004d441b:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkJumpDriveActive(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkJumpDriveActive(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  basic_string<> bVar3;
  bool bVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  basic_string<> abStack_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      abStack_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(abStack_38,"",0);
      bVar3 = (basic_string<>)checkJumpDriveSpinningUp(param_1,0);
      if (!(bool)bVar3) {
        abStack_38[0] = bVar3;
        std::basic_string<>::assign(abStack_38,"",0);
        bVar3 = (basic_string<>)checkJumpDriveSpunUp(param_1,0);
        if (!(bool)bVar3) {
          abStack_38[0] = bVar3;
          std::basic_string<>::assign(abStack_38,"",0);
          bVar3 = (basic_string<>)checkJumpDriveCalculated(param_1,0);
          if (!(bool)bVar3) {
            abStack_38[0] = bVar3;
            std::basic_string<>::assign(abStack_38,"",0);
            bVar4 = checkJumpDriveCalculating(param_1,0);
            if (!bVar4) goto LAB_004d458f;
          }
        }
      }
      bVar4 = true;
      goto LAB_004d4591;
    }
  }
LAB_004d458f:
  bVar4 = false;
LAB_004d4591:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d45c4;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkLADARDetected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkLADARDetected(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(float *)(param_1 + 0x100) < 0.0)) || (1.0 < *(float *)(param_1 + 0x100))
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkMenuMain(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMenuMain(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"menu_main",9);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d46ce;
    }
  }
  bVar1 = false;
LAB_004d46ce:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d4701;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSubmenuOptions(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSubmenuOptions(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_options",0xf);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d479e;
    }
  }
  bVar1 = false;
LAB_004d479e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d47d1;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSubmenuInput(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSubmenuInput(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_input",0xd);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d486e;
    }
  }
  bVar1 = false;
LAB_004d486e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d48a1;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSubmenuNews(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSubmenuNews(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_news",0xc);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d493e;
    }
  }
  bVar1 = false;
LAB_004d493e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d4971;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSubmenuCredits(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSubmenuCredits(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_credits",0xf);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d4a0e;
    }
  }
  bVar1 = false;
LAB_004d4a0e:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d4a41;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSubmenuGameOver(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSubmenuGameOver(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[5] == (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"submenu_gameover",0x10);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d4ade;
    }
  }
  bVar1 = false;
LAB_004d4ade:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d4b11;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkHasPurchase(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasPurchase(int param_1,int param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) == 1;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkValidPurchase(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkValidPurchase(int param_1,Shop param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::currentPurchaseValid(Singleton<>::instance,param_2,(TextEngine *)0x0);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkInvalidPurchase(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkInvalidPurchase(int param_1,Shop param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *pTVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bfa2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      local_8 = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
    }
    local_8 = 0;
    if (*(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) == 1) {
      if (Singleton<>::instance == (TradeEngine *)0x0) {
        pTVar2 = operator_new(300);
        local_8 = 2;
        Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
      }
      local_8 = 0;
      bVar1 = TradeEngine::currentPurchaseValid(Singleton<>::instance,param_2,(TextEngine *)0x0);
      if (!bVar1) {
        bVar1 = true;
        goto LAB_004d4d6c;
      }
    }
  }
  bVar1 = false;
LAB_004d4d6c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkHasSale(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasSale(int param_1,int param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) == 2;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkValidSale(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkValidSale(int param_1,Shop param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::currentSaleValid(Singleton<>::instance,param_2,(TextEngine *)0x0);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkInvalidSale(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkInvalidSale(int param_1,Shop param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *pTVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bfa2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      local_8 = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
    }
    local_8 = 0;
    if (*(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) == 2) {
      if (Singleton<>::instance == (TradeEngine *)0x0) {
        pTVar2 = operator_new(300);
        local_8 = 2;
        Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
      }
      local_8 = 0;
      bVar1 = TradeEngine::currentSaleValid(Singleton<>::instance,param_2,(TextEngine *)0x0);
      if (!bVar1) {
        bVar1 = true;
        goto LAB_004d4ffc;
      }
    }
  }
  bVar1 = false;
LAB_004d4ffc:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkHasPurchaseOrSale(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasPurchaseOrSale(int param_1,int param_2,void *param_3)

{
  TradeEngine *pTVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bfa2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar1 = operator_new(300);
      local_8 = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar1);
    }
    local_8 = 0;
    if (*(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) != 1) {
      if (Singleton<>::instance == (TradeEngine *)0x0) {
        pTVar1 = operator_new(300);
        local_8 = 2;
        Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar1);
      }
      if (*(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + param_2 * 0x44) != 2) {
        bVar4 = false;
        goto LAB_004d5109;
      }
    }
    bVar4 = true;
  }
LAB_004d5109:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkCommerceAtMenu(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceAtMenu(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(Singleton<>::instance + 0xcc) == 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceNotAtMenu(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceNotAtMenu(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(Singleton<>::instance + 0xcc) != 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceMenuIs(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceMenuIs(int param_1,int param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(Singleton<>::instance + 0xcc) == param_2;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermCanPurchaseLicense(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCanPurchaseLicense(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::canPurchaseLicense(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermCannotPurchaseLicense(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCannotPurchaseLicense(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  TradeEngine *this;
  FictionData *pFVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  uint uVar9;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfa6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if ((*(int *)(Singleton<>::instance + 0xcc) == 1) &&
       (iVar4 = *(int *)(Singleton<>::instance + 0xd0), iVar4 != -1)) {
      pFVar2 = Singleton<>::getInstance();
      uVar3 = 0;
      puVar1 = *(undefined4 **)pFVar2;
      uVar9 = *(int *)(pFVar2 + 4) - (int)puVar1 >> 2;
      puVar6 = puVar1;
      if (uVar9 != 0) {
        do {
          if (*(int *)*puVar6 == iVar4) {
            iVar4 = puVar1[uVar3];
            goto LAB_004d54e0;
          }
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar3 < uVar9);
      }
      iVar4 = 0;
LAB_004d54e0:
      if ((*(char *)(iVar4 + 0xe0) != '\0') ||
         (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < *(int *)(iVar4 + 0xcc))) {
        bVar8 = true;
        goto LAB_004d550a;
      }
    }
  }
  bVar8 = false;
LAB_004d550a:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar7);
  }
  ExceptionList = local_10;
  return bVar8;
}


// bool __cdecl ShipData::checkCommerceTermLoanGiverSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermLoanGiverSelected(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0xcc) == 2) &&
       (*(int *)(Singleton<>::instance + 0xdc) != -1)) {
      bVar3 = true;
      goto LAB_004d55d1;
    }
  }
  bVar3 = false;
LAB_004d55d1:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermLoanGiverNotSelected(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermLoanGiverNotSelected(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0xcc) == 2) &&
       (*(int *)(Singleton<>::instance + 0xdc) == -1)) {
      bVar3 = true;
      goto LAB_004d5691;
    }
  }
  bVar3 = false;
LAB_004d5691:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermRepayingLoan(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceTermRepayingLoan(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  TradeEngine TVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    TVar3 = (TradeEngine)0x0;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    TVar3 = Singleton<>::instance[0xe9];
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return (bool)TVar3;
}


// bool __cdecl ShipData::checkCommerceTermCanDeliverContract(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCanDeliverContract(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::canDeliverContract(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermCannotDeliverContract(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCannotDeliverContract(int param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  basic_string<> *pbVar4;
  TradeEngine *this;
  Good *pGVar5;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  basic_string<> *unaff_ESI;
  uint in_stack_00000020;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  pbVar4 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if ((((*(int *)(Singleton<>::instance + 0xcc) == 3) &&
         (999 < *(int *)(Singleton<>::instance + 0xd4))) &&
        (uVar1 = *(int *)(Singleton<>::instance + 0xd4) - 1000, -1 < (int)uVar1)) &&
       (uVar1 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2))) {
      iVar2 = *(int *)(*(int *)(g_gameData + 0x13c) + uVar1 * 4);
      bVar3 = std::operator!=<>(pbVar4,unaff_ESI);
      if (bVar3) {
        bVar3 = true;
      }
      else {
        std::basic_string<>::basic_string<>(abStack_34,*(basic_string<> **)(iVar2 + 0x58));
        pGVar5 = GameData::getGoodWithShortName();
        if (pGVar5 == (Good *)0x0) {
          bVar3 = 0 < *(int *)(*(int *)(iVar2 + 0x58) + 0x1c);
        }
        else {
          iVar6 = CargoHold::amountHeld
                            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar5);
          bVar3 = iVar6 < *(int *)(*(int *)(iVar2 + 0x58) + 0x1c);
        }
      }
      goto LAB_004d5961;
    }
  }
  bVar3 = false;
LAB_004d5961:
  if (0xf < in_stack_00000020) {
    pnVar8 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar7 = param_3;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_3 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d5994;
    operator_delete(pvVar7,pnVar8);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermCanTakeContract(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCanTakeContract(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::canTakeContract(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermCannotTakeContract(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCannotTakeContract(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  TradeEngine *pTVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar3 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar3);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    pTVar3 = Singleton<>::instance;
    if (*(int *)(Singleton<>::instance + 0xcc) == 3) {
      if (*(int *)(Singleton<>::instance + 0xd4) == -1) {
        bVar2 = true;
      }
      else if (*(int *)(Singleton<>::instance + 0xd4) < 1000) {
        bVar2 = TradeEngine::canTakeCurrentContract(Singleton<>::instance);
        if (bVar2) {
          iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
          bVar2 = (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2) <=
                  *(uint *)(pTVar3 + 0xd4);
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCommerceTermCanTakePassenger(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCanTakePassenger(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  GameLogic *in_ECX;
  GameLogic *extraout_ECX;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
      in_ECX = extraout_ECX;
    }
    if (*(int *)(Singleton<>::instance + 0xcc) == 4) {
      if (*(int *)(Singleton<>::instance + 0xd8) == -1) {
        bVar1 = false;
      }
      else if (*(char *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe0) == '\0') {
        bVar1 = GameLogic::hasPassenger(in_ECX);
        bVar1 = !bVar1;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermCannotTakePassenger(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCannotTakePassenger(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  GameLogic *in_ECX;
  GameLogic *extraout_ECX;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
      in_ECX = extraout_ECX;
    }
    if (*(int *)(Singleton<>::instance + 0xcc) == 4) {
      if (*(int *)(Singleton<>::instance + 0xd8) == -1) {
        bVar1 = false;
      }
      else if (*(char *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe0) == '\0') {
        bVar1 = GameLogic::hasPassenger(in_ECX);
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermCanTakeBounty(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceTermCanTakeBounty(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (*(int *)(Singleton<>::instance + 0xcc) == 5) {
      bVar3 = *(int *)(Singleton<>::instance + 0xe4) != -1;
    }
    else {
      bVar3 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermCannotTakeBounty(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermCannotTakeBounty(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (*(int *)(Singleton<>::instance + 0xcc) == 5) {
      bVar3 = *(int *)(Singleton<>::instance + 0xe4) == -1;
    }
    else {
      bVar3 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCommerceTermLoanValid(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceTermLoanValid(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::currentLoanValid(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermLoanInvalid(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceTermLoanInvalid(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  TradeEngine *pTVar2;
  FictionData *pFVar3;
  int iVar4;
  uint uVar5;
  Faction *this;
  void *pvVar6;
  undefined4 *puVar7;
  nothrow_t *pnVar8;
  bool bVar9;
  uint uVar10;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfa6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar9 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    pTVar2 = Singleton<>::instance;
    if ((*(int *)(Singleton<>::instance + 0xcc) == 2) &&
       (*(int *)(Singleton<>::instance + 0xdc) != -1)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      if (Singleton<>::instance[0xe9] == (TradeEngine)0x0) {
        iVar4 = *(int *)(Singleton<>::instance + 0xdc);
        pFVar3 = Singleton<>::getInstance();
        uVar5 = 0;
        puVar1 = *(undefined4 **)pFVar3;
        uVar10 = *(int *)(pFVar3 + 4) - (int)puVar1 >> 2;
        puVar7 = puVar1;
        if (uVar10 != 0) {
          do {
            if (*(int *)*puVar7 == iVar4) {
              this = (Faction *)puVar1[uVar5];
              goto LAB_004d6075;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar5 < uVar10);
        }
        this = (Faction *)0x0;
LAB_004d6075:
        iVar4 = Faction::amountCanBorrow(this);
        if ((iVar4 < 1) || (*(int *)(pTVar2 + 0xe0) < 1)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
      }
      else {
        bVar9 = false;
      }
    }
    else {
      bVar9 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar8 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  ExceptionList = local_10;
  return bVar9;
}


// bool __cdecl ShipData::checkCommerceTermRepaymentValid(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCommerceTermRepaymentValid(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::currentRepaymentValid(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCommerceTermRepaymentInvalid(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCommerceTermRepaymentInvalid(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *pTVar1;
  FictionData *this;
  Faction *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  int iVar6;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar5 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar1 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    pTVar1 = Singleton<>::instance;
    if ((*(int *)(Singleton<>::instance + 0xcc) == 2) &&
       (*(int *)(Singleton<>::instance + 0xdc) != -1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if (Singleton<>::instance[0xe9] == (TradeEngine)0x0) {
        bVar5 = false;
      }
      else {
        if ((*(int *)(Singleton<>::instance + 0xe0) != 0) &&
           (*(int *)(Singleton<>::instance + 0xe0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))
           ) {
          iVar6 = *(int *)(Singleton<>::instance + 0xdc);
          this = Singleton<>::getInstance();
          pFVar2 = FictionData::getFactionForNumber(this,iVar6);
          if ((*(int *)(pTVar1 + 0xe0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) &&
             (*(int *)(pTVar1 + 0xe0) <= (int)*(float *)(pFVar2 + 0xd0))) {
            bVar5 = false;
            goto LAB_004d628c;
          }
        }
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
    }
  }
LAB_004d628c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkWireVisible(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkWireVisible(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  TradeEngine TVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    TVar3 = (TradeEngine)0x0;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    TVar3 = Singleton<>::instance[0x128];
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return (bool)TVar3;
}


// bool __cdecl ShipData::checkMechanicAtMenu(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicAtMenu(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(Singleton<>::instance + 0x10c) == 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicAt(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicAt(int param_1,int param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar3 = *(int *)(Singleton<>::instance + 0x10c) == param_2;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCanRepair(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanRepair(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *pTVar1;
  int iVar2;
  HullLocation HVar3;
  ShipMechanics *in_ECX;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar1 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar1);
      local_8 = (uint)local_8._1_3_ << 8;
      in_ECX = extraout_ECX;
    }
    pTVar1 = Singleton<>::instance;
    if (*(int *)(Singleton<>::instance + 0x10c) == 1) {
      HVar3 = *(HullLocation *)(Singleton<>::instance + 0x110);
      if (HVar3 == 0xffffffff) {
        if (Singleton<>::instance == (ShipMechanics *)0x0) {
          Singleton<>::instance = operator_new(1);
          in_ECX = extraout_ECX_00;
        }
        iVar2 = ShipMechanics::getRepairPoints(in_ECX,*(Ship **)(g_gameData + 0xd0));
        iVar2 = iVar2 * 5;
      }
      else {
        if (Singleton<>::instance == (ShipMechanics *)0x0) {
          Singleton<>::instance = operator_new(1);
          HVar3 = *(HullLocation *)(pTVar1 + 0x110);
          in_ECX = extraout_ECX_01;
        }
        iVar2 = ShipMechanics::hullRepairCost(in_ECX,*(Ship **)(g_gameData + 0xd0),HVar3);
      }
      if ((iVar2 != 0) && (iVar2 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        bVar6 = true;
        goto LAB_004d65fc;
      }
    }
  }
  bVar6 = false;
LAB_004d65fc:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkMechanicCannotRepair(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotRepair(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *pTVar1;
  int iVar2;
  HullLocation HVar3;
  ShipMechanics *in_ECX;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar1 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar1);
      local_8 = (uint)local_8._1_3_ << 8;
      in_ECX = extraout_ECX;
    }
    pTVar1 = Singleton<>::instance;
    if (*(int *)(Singleton<>::instance + 0x10c) != 1) {
      bVar6 = false;
      goto LAB_004d674f;
    }
    HVar3 = *(HullLocation *)(Singleton<>::instance + 0x110);
    if (HVar3 == 0xffffffff) {
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        in_ECX = extraout_ECX_00;
      }
      iVar2 = ShipMechanics::getRepairPoints(in_ECX,*(Ship **)(g_gameData + 0xd0));
      iVar2 = iVar2 * 5;
    }
    else {
      if (Singleton<>::instance == (ShipMechanics *)0x0) {
        Singleton<>::instance = operator_new(1);
        HVar3 = *(HullLocation *)(pTVar1 + 0x110);
        in_ECX = extraout_ECX_01;
      }
      iVar2 = ShipMechanics::hullRepairCost(in_ECX,*(Ship **)(g_gameData + 0xd0),HVar3);
    }
    if ((iVar2 == 0) || (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar2)) {
      bVar6 = true;
      goto LAB_004d674f;
    }
  }
  bVar6 = false;
LAB_004d674f:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar6;
}


// bool __cdecl ShipData::checkMechanicCanBuyPod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanBuyPod(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
         (*(int *)(Singleton<>::instance + 0x114) != -1)) &&
        (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                 *(int *)(Singleton<>::instance + 0x114) * 4) == 0)) &&
       (99 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
      bVar3 = true;
      goto LAB_004d6838;
    }
  }
  bVar3 = false;
LAB_004d6838:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCannotBuyPod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotBuyPod(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
       (*(int *)(Singleton<>::instance + 0x114) != -1)) {
      if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                  *(int *)(Singleton<>::instance + 0x114) * 4) == 0) {
        bVar3 = *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 100;
      }
      else {
        bVar3 = true;
      }
      goto LAB_004d691b;
    }
  }
  bVar3 = false;
LAB_004d691b:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCanSellPod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanSellPod(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
        (*(int *)(Singleton<>::instance + 0x114) != -1)) &&
       (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                *(int *)(Singleton<>::instance + 0x114) * 4) != 0)) {
      bVar3 = true;
      goto LAB_004d69fb;
    }
  }
  bVar3 = false;
LAB_004d69fb:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCannotSellPod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotSellPod(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
       (*(int *)(Singleton<>::instance + 0x114) != -1)) {
      bVar3 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                      *(int *)(Singleton<>::instance + 0x114) * 4) == 0;
      goto LAB_004d6ada;
    }
  }
  bVar3 = false;
LAB_004d6ada:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCanUpgradePod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanUpgradePod(int param_1,int param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    bVar1 = TradeEngine::mechanicCanUpgradePod(Singleton<>::instance,param_2);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMechanicCannotUpgradePod(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMechanicCannotUpgradePod(int param_1,GoodContainmentOption param_2,void *param_3)

{
  CargoPod *this;
  GameData *pGVar1;
  bool bVar2;
  TradeEngine *this_00;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfa6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this_00 = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this_00);
    }
    pGVar1 = g_gameData;
    if ((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
       (*(int *)(Singleton<>::instance + 0x114) != -1)) {
      this = *(CargoPod **)
              (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
              *(int *)(Singleton<>::instance + 0x114) * 4);
      if (this == (CargoPod *)0x0) {
        bVar2 = true;
        goto LAB_004d6cb1;
      }
      if (param_2 - 1 < 2) {
        bVar2 = CargoPod::hasOption(this,param_2);
        if (bVar2) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)(*(int *)(pGVar1 + 0x124) + 0x1c) <
                  (int)(&goodContainmentOptionCost)[param_2];
        }
        goto LAB_004d6cb1;
      }
    }
  }
  bVar2 = false;
LAB_004d6cb1:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkMechanicCanBuyModule(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanBuyModule(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::mechanicCanBuyModule(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMechanicCannotBuyModule(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotBuyModule(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  TradeEngine *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if (*(int *)(Singleton<>::instance + 0x10c) == 3) {
      if (*(int *)(Singleton<>::instance + 0x118) == -1) {
        bVar2 = false;
      }
      else if (Singleton<>::instance[0x109] == (TradeEngine)0x0) {
        puVar1 = *(undefined4 **)
                  (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398) + 0x58)
                  + *(int *)(Singleton<>::instance + 0x118) * 4);
        bVar2 = SystemManager::canAddModule
                          (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                           (ShipModule *)*puVar1);
        if (bVar2) {
          bVar2 = *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < (int)puVar1[1];
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkMechanicCanSellModule(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanSellModule(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (*(int *)(Singleton<>::instance + 0x10c) == 3) {
      if (*(int *)(Singleton<>::instance + 0x118) == -1) {
        bVar3 = false;
      }
      else {
        bVar3 = Singleton<>::instance[0x109] != (TradeEngine)0x0;
      }
    }
    else {
      bVar3 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMechanicCannotSellModule(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotSellModule(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfaea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (Singleton<>::instance == (TradeEngine *)0x0)) {
    this = operator_new(300);
    local_8 = CONCAT31(local_8._1_3_,1);
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return false;
}


// bool __cdecl ShipData::checkBuyingModules(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkBuyingModules(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfb2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (*(int *)(Singleton<>::instance + 0x10c) == 3) {
      bVar3 = Singleton<>::instance[0x109] == (TradeEngine)0x0;
      goto LAB_004d70c0;
    }
  }
  bVar3 = false;
LAB_004d70c0:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkShipCanBuy(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkShipCanBuy(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf9da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::shipCanBuy(Singleton<>::instance);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkShipCannotBuy(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkShipCannotBuy(int param_1,undefined4 param_2,void *param_3)

{
  float fVar1;
  TradeEngine *pTVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfa6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar2 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar2);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    pTVar2 = Singleton<>::instance;
    if (*(int *)(Singleton<>::instance + 0xf8) != -1) {
      iVar4 = *(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x178) + 0x398);
      iVar3 = Ship::getValue(*(Ship **)(g_gameData + 0xd0));
      fVar1 = *(float *)(iVar4 + 0x48);
      iVar4 = Ship::getValue(*(Ship **)(*(int *)(iVar4 + 0x3c) + *(int *)(pTVar2 + 0xf8) * 4));
      iVar4 = iVar4 - (int)(fVar1 * (float)iVar3);
      if ((-1 < iVar4) && (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar4)) {
        bVar7 = true;
        goto LAB_004d729d;
      }
    }
  }
  bVar7 = false;
LAB_004d729d:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar7;
}


// bool __cdecl ShipData::checkMechanicCanBuyArmament(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanBuyArmament(Ship *param_1,int param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfb6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (Ship *)0x0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    bVar1 = TradeEngine::canBuyArmament(Singleton<>::instance,param_1,param_2);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMechanicCannotBuyArmament(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotBuyArmament(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  TradeEngine *pTVar4;
  WeaponClass *pWVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  uint in_stack_00000020;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfbaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar8 = false;
    goto LAB_004d7509;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    pTVar4 = operator_new(300);
    local_8._0_1_ = 1;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar4);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  pTVar4 = Singleton<>::instance;
  if (*(int *)(Singleton<>::instance + 0x10c) == 4) {
    if (param_2 != -1) {
      if (*(int *)(Singleton<>::instance + 0xf4) != -1) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20);
        if (piVar1 == (int *)0x0) {
          bVar8 = false;
          goto LAB_004d7509;
        }
        cVar3 = (**(code **)(*piVar1 + 0x10))();
        if (cVar3 == '\0') {
          bVar8 = false;
          goto LAB_004d7509;
        }
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c + *(int *)(pTVar4 + 0xf4) * 4)
            == 0) {
          std::basic_string<>::basic_string<>(abStack_3c,(&PTR_s_m10_005dfacc)[param_2]);
          pWVar5 = GameData::getWeaponClassWithIdentifier();
          if ((pWVar5 != (WeaponClass *)0x0) &&
             (*(int *)(pWVar5 + 0x1a0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
            bVar8 = false;
            goto LAB_004d7509;
          }
        }
      }
LAB_004d7507:
      bVar8 = true;
      goto LAB_004d7509;
    }
    piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8);
    if (piVar1 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar1 + 0x18))();
      if (cVar3 == '\0') {
        iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8);
        if ((float)*(int *)(iVar2 + 0x68) < *(float *)(*(int *)(iVar2 + 8) + 0x104)) {
          Singleton<>::getInstance();
          bVar8 = *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 0x19;
          goto LAB_004d7509;
        }
        goto LAB_004d7507;
      }
    }
  }
  bVar8 = false;
LAB_004d7509:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x4d753c;
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  return bVar8;
}


// bool __cdecl ShipData::checkMechanicCanSellArmament(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCanSellArmament(Ship *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  TradeEngine *this;
  int in_ECX;
  int extraout_ECX;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfb6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (Ship *)0x0) {
    bVar1 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
      local_8 = (uint)local_8._1_3_ << 8;
      in_ECX = extraout_ECX;
    }
    bVar1 = TradeEngine::canSellArmament(Singleton<>::instance,param_1,in_ECX);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMechanicCannotSellArmament(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMechanicCannotSellArmament(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  TradeEngine *pTVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfbaa;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar7 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      pTVar4 = operator_new(300);
      local_8._0_1_ = 1;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar4);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    pTVar4 = Singleton<>::instance;
    if (*(int *)(Singleton<>::instance + 0x10c) == 4) {
      if (*(int *)(Singleton<>::instance + 0xf4) == -1) {
        bVar7 = true;
      }
      else {
        piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20);
        if (piVar1 == (int *)0x0) {
          bVar7 = false;
        }
        else {
          cVar2 = (**(code **)(*piVar1 + 0x10))(0,uVar3);
          if (cVar2 == '\0') {
            bVar7 = false;
          }
          else {
            bVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c +
                            *(int *)(pTVar4 + 0xf4) * 4) == 0;
          }
        }
      }
    }
    else {
      bVar7 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar7;
}


// bool __cdecl ShipData::checkCanHack(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanHack(int param_1,undefined4 param_2,void *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  Vec2 *pVVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  Vec2 *unaff_ESI;
  float fVar9;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc0c;
  local_10 = ExceptionList;
  pVVar5 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar2 != (int *)0x0))
  {
    cVar4 = (**(code **)(*piVar2 + 0x10))(0);
    if (((cVar4 != '\0') &&
        (((pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c),
          *pfVar1 <= 0.0 && *pfVar1 != 0.0 && (iVar3 = *(int *)(param_1 + 0x194), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x130) != 0)))) &&
       ((*(int *)(*(int *)(*(int *)(iVar3 + 0x130) + 0x254) + 0x158) == 0 &&
        (*(float *)(iVar3 + 0x40) <= 0.5)))) {
      fVar9 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x30);
      local_8 = 2;
      fastDistance(pVVar5,unaff_ESI);
      if (fVar9 <= *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 8) + 0x108)) {
        bVar8 = true;
        goto LAB_004d783e;
      }
    }
  }
  bVar8 = false;
LAB_004d783e:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  return bVar8;
}


// bool __cdecl ShipData::checkCannotHack(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotHack(int param_1,undefined4 param_2,void *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  Vec2 *pVVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  Vec2 *unaff_ESI;
  float fVar9;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc0c;
  local_10 = ExceptionList;
  pVVar5 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar2 != (int *)0x0))
  {
    cVar4 = (**(code **)(*piVar2 + 0x10))(0);
    if (cVar4 != '\0') {
      pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c);
      if ((((*pfVar1 <= 0.0 && *pfVar1 != 0.0) && (iVar3 = *(int *)(param_1 + 0x194), iVar3 != 0))
          && (*(int *)(iVar3 + 0x130) != 0)) &&
         ((*(float *)(iVar3 + 0x40) <= 0.5 &&
          (*(int *)(*(int *)(*(int *)(iVar3 + 0x130) + 0x254) + 0x158) == 0)))) {
        fVar9 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x30);
        local_8 = 2;
        fastDistance(pVVar5,unaff_ESI);
        if (fVar9 <= *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 8) + 0x108))
        goto LAB_004d79ac;
      }
      bVar8 = true;
      goto LAB_004d79ae;
    }
  }
LAB_004d79ac:
  bVar8 = false;
LAB_004d79ae:
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  return bVar8;
}


// bool __cdecl ShipData::checkIsHacking(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsHacking(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (0.0 <= *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c))) {
      bVar5 = true;
      goto LAB_004d7a63;
    }
  }
  bVar5 = false;
LAB_004d7a63:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkHackUnitFunctional(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHackUnitFunctional(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d7afe;
    }
  }
  bVar5 = false;
LAB_004d7afe:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkBeingHailed(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkBeingHailed(int param_1,undefined4 param_2,void *param_3)

{
  PrivateCommsManager *pPVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 == 0) || (*(char *)(param_1 + 0x234) == '\0')) || (*(int *)(param_1 + 0x374) == 0))
  {
LAB_004d7bbb:
    bVar4 = false;
  }
  else {
    if ((g_gameLogic[0x71] != (GameLogic)0x0) || (g_gameLogic[0x72] != (GameLogic)0x0)) {
      pPVar1 = Singleton<>::getInstance();
      if (*(float *)(pPVar1 + 8) < 0.7) goto LAB_004d7bbb;
    }
    bVar4 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkShouldShowCargoScreen(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkShouldShowCargoScreen(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"",0);
    bVar1 = checkIsInFreeSpace(param_1,0);
    if ((bVar1) &&
       ((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2 ||
        (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 3)))) {
      bVar1 = true;
      goto LAB_004d7c92;
    }
  }
  bVar1 = false;
LAB_004d7c92:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d7cc5;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkIsMoored(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsMoored(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x174) != 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkIsMooredToCargo(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsMooredToCargo(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0x174) + 0x60) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkHasGrapplingArm(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasGrapplingArm(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_004d7df2;
    }
  }
  bVar5 = false;
LAB_004d7df2:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkGrapplingArmInUse(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkGrapplingArmInUse(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,___security_cookie ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (0.0 <= *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x6c))) {
      bVar5 = true;
      goto LAB_004d7ea7;
    }
  }
  bVar5 = false;
LAB_004d7ea7:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCanGrappleFromMoored(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanGrappleFromMoored(Ship *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> abStack_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (*(int **)(*(int *)(param_1 + 0x40) + 0x2c) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x2c) + 0x10))();
    if (cVar1 != '\0') {
      abStack_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(abStack_38,"",0);
      bVar2 = checkGrapplingArmInUse(param_1,0);
      if ((!bVar2) && (*(int *)(param_1 + 0x1f0) != -1)) {
        if (*(int *)(*(int *)(param_1 + 0x174) + 0x60) == 4) {
          abStack_38[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(abStack_38,"",0);
          bVar2 = checkMooredWreckHasUnclampedCargo(param_1,0);
          if (!bVar2) goto LAB_004d7ff8;
        }
        if (*(CargoHold **)(*(int *)(param_1 + 0x174) + 0xe8) != (CargoHold *)0x0) {
          bVar2 = CargoHold::podExists
                            (*(CargoHold **)(*(int *)(param_1 + 0x174) + 0xe8),
                             *(int *)(param_1 + 0x1f0));
          if (bVar2) {
            bVar2 = Ship::hasEmptyPodSlot(param_1);
            if (bVar2) {
              bVar2 = true;
              goto LAB_004d7ffa;
            }
          }
        }
      }
    }
  }
LAB_004d7ff8:
  bVar2 = false;
LAB_004d7ffa:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d802d;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanGrappleFromShip(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanGrappleFromShip(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> abStack_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf8c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      abStack_38[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(abStack_38,"",0);
      bVar3 = checkGrapplingArmInUse(param_1,0);
      if ((!bVar3) && (*(int *)(param_1 + 0x1ec) != -1)) {
        if (*(int *)(*(int *)(param_1 + 0x174) + 0x60) == 4) {
          abStack_38[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(abStack_38,"",0);
          bVar3 = checkMooredWreckHasUnclampedCargo(param_1,0);
          if (!bVar3) goto LAB_004d8143;
        }
        bVar3 = CargoHold::podExists(*(CargoHold **)(param_1 + 0x1f8),*(int *)(param_1 + 0x1ec));
        if (bVar3) {
          bVar3 = true;
          goto LAB_004d8145;
        }
      }
    }
  }
LAB_004d8143:
  bVar3 = false;
LAB_004d8145:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d8178;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkMooredWreckHasNotDownloadedData(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMooredWreckHasNotDownloadedData(int param_1,undefined4 param_2,void *param_3)

{
  undefined1 uVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc50;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)local_2c,(basic_string<> *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8._0_1_ = 1;
    std::transform<>();
    strUsingArgs((char *)local_44);
    local_8._0_1_ = 2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff90,(basic_string<> *)local_44);
    local_8._0_1_ = 3;
    pFVar2 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,2);
    FlagManager::flagSet(pFVar2);
    if (0xf < local_30) {
      pnVar4 = (nothrow_t *)(local_30 + 1);
      pvVar3 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_44[0] + -4);
        pnVar4 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pvVar3 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_2c[0] + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  uVar1 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// bool __cdecl ShipData::checkMooredWreckHasDownloadedData(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMooredWreckHasDownloadedData(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  FlagManager *pFVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  uint in_stack_00000020;
  basic_string<> abStack_70 [8];
  undefined4 uStack_68;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bfc50;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_14 = pcVar3;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)local_2c,(basic_string<> *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8 = 1;
    uStack_68 = 0x4d83ce;
    std::transform<>();
    bVar1 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
    if (!bVar1) {
      uStack_68 = 0x4d8423;
      strUsingArgs((char *)local_44);
      local_8 = 2;
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_44);
      local_8 = 3;
      pFVar4 = Singleton<>::getInstance();
      local_8 = 2;
      FlagManager::flagSet(pFVar4);
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  uVar2 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// bool __cdecl ShipData::checkMooredWreckHasUnclampedCargo(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMooredWreckHasUnclampedCargo(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined1 uVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc50;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x174), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x60) == 4)) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(iVar1 + 0x80))
    ;
    local_8._0_1_ = 1;
    std::transform<>();
    strUsingArgs((char *)local_44);
    local_8._0_1_ = 2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff90,(basic_string<> *)local_44);
    local_8._0_1_ = 3;
    pFVar3 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,2);
    FlagManager::flagSet(pFVar3);
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
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
  }
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// bool __cdecl ShipData::checkMooredWreckHasNotUnclampedCargo(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMooredWreckHasNotUnclampedCargo(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined1 uVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc50;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x174), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x60) == 4)) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(iVar1 + 0x80))
    ;
    local_8._0_1_ = 1;
    std::transform<>();
    strUsingArgs((char *)local_44);
    local_8._0_1_ = 2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff90,(basic_string<> *)local_44);
    local_8._0_1_ = 3;
    pFVar3 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,2);
    FlagManager::flagSet(pFVar3);
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
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
  }
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// bool __cdecl ShipData::checkCanBoardBrokerShip(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanBoardBrokerShip(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfb2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((-1 < *(int *)(Singleton<>::instance + 0xfc)) &&
       (Singleton<>::instance[0x100] == (TradeEngine)0x0)) {
      bVar3 = true;
      goto LAB_004d8921;
    }
  }
  bVar3 = false;
LAB_004d8921:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkCannotBoardBrokerShip(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotBoardBrokerShip(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfb2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0xfc) == -1) ||
       (Singleton<>::instance[0x100] == (TradeEngine)0x0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkIsViewingSelectedShip(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsViewingSelectedShip(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((-1 < *(int *)(Singleton<>::instance + 0xf8)) &&
       (*(int *)(Singleton<>::instance + 0xf8) == *(int *)(Singleton<>::instance + 0xfc))) {
      bVar3 = true;
      goto LAB_004d8aa2;
    }
  }
  bVar3 = false;
LAB_004d8aa2:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkIsNotViewingSelectedShip(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkIsNotViewingSelectedShip(int param_1,undefined4 param_2,void *param_3)

{
  TradeEngine *this;
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfc9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((-1 < *(int *)(Singleton<>::instance + 0xf8)) &&
       (*(int *)(Singleton<>::instance + 0xf8) != *(int *)(Singleton<>::instance + 0xfc))) {
      bVar3 = true;
      goto LAB_004d8b62;
    }
  }
  bVar3 = false;
LAB_004d8b62:
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


// bool __cdecl ShipData::checkHasEmailsToDownload(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkHasEmailsToDownload(int param_1,undefined4 param_2,void *param_3)

{
  EmailManager *this;
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    this = Singleton<>::getInstance();
    iVar1 = EmailManager::getUnsentEmailCount(this);
    bVar4 = 0 < iVar1;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkStartingNewGame(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkStartingNewGame(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d8ce2;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkNewGameOptions(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNewGameOptions(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_30 [12];
  undefined4 uStack_24;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bf820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (g_gameLogic[0xa4] != (GameLogic)0x0)) {
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d8d81;
    }
  }
  bVar1 = false;
LAB_004d8d81:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_24 = 0x4d8db4;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkConversationActive(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkConversationActive(int param_1,undefined4 param_2,void *param_3)

{
  TabletManager *pTVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    pTVar1 = Singleton<>::getInstance();
    bVar4 = *(int *)(pTVar1 + 0x20) != 0;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkMusicPlaying(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMusicPlaying(int param_1,undefined4 param_2,void *param_3)

{
  SoundEngine *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  SoundEngine SVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xe4) != '\0')) {
    SVar4 = (SoundEngine)0x0;
  }
  else {
    pSVar1 = Singleton<>::getInstance();
    SVar4 = pSVar1[0x44];
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return (bool)SVar4;
}


// bool __cdecl ShipData::checkMusicNotPlaying(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMusicNotPlaying(int param_1,undefined4 param_2,void *param_3)

{
  SoundEngine *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xe4) != '\0')) {
    bVar4 = false;
  }
  else {
    pSVar1 = Singleton<>::getInstance();
    bVar4 = pSVar1[0x44] == (SoundEngine)0x0;
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// bool __cdecl ShipData::checkCanUseMusic(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanUseMusic(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0xe4) == '\0';
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanJettisonComponent(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanJettisonComponent(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(uint *)(param_1 + 0x1d4) == 0xffffffff)) ||
     ((uint)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x48) - *(int *)(*(int *)(param_1 + 0x1f8) + 0x44)
            >> 2) < *(uint *)(param_1 + 0x1d4))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return bVar3;
}


// bool __cdecl ShipData::checkCanJettisonCargo(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanJettisonCargo(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (g_gameLogic[0x71] == (GameLogic)0x0)) &&
      (*(int *)(param_1 + 0x1ec) != -1)) && (*(int *)(param_1 + 0x174) == 0)) {
    bVar1 = CargoHold::podExists(*(CargoHold **)(param_1 + 0x1f8),*(int *)(param_1 + 0x1ec));
    if (bVar1) {
      bVar1 = true;
      goto LAB_004d90a0;
    }
  }
  bVar1 = false;
LAB_004d90a0:
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return bVar1;
}


// bool __cdecl ShipData::checkCanJettisonAllCargo(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanJettisonAllCargo(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  uint in_stack_00000020;
  
  if (((param_1 != 0) && (g_gameLogic[0x71] == (GameLogic)0x0)) && (*(int *)(param_1 + 0x174) == 0))
  {
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
    if (0 < iVar1) {
      piVar3 = (int *)(*(int *)(param_1 + 0x1f8) + 0xc);
      do {
        if (((-1 < iVar4) &&
            ((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar2 < 1 || (iVar4 < iVar2)))) &&
           (*piVar3 != 0)) {
          bVar7 = true;
          goto LAB_004d913e;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
  }
  bVar7 = false;
LAB_004d913e:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  return bVar7;
}


// bool __cdecl ShipData::checkCanBeginDock(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanBeginDock(Ship *param_1,undefined4 param_2,void *param_3)

{
  Vec2 *pVVar1;
  Ship *pSVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  Vec2 *unaff_ESI;
  float in_XMM0_Da;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfcda;
  local_10 = ExceptionList;
  pVVar1 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0xd4) != 3)) {
    Ship::getSpeed(param_1);
    if (in_XMM0_Da <= 0.4) {
      pSVar2 = Sector::getSpaceStationClosestTo
                         (*(Sector **)(param_1 + 0x24),(float)*(double *)(param_1 + 0x28),
                          (float)*(double *)(param_1 + 0x30));
      if (pSVar2 != (Ship *)0x0) {
        fVar6 = (float)*(double *)(pSVar2 + 0x30);
        local_8 = CONCAT31(local_8._1_3_,2);
        fastDistance(pVVar1,unaff_ESI);
        if (fVar6 <= 5.0) {
          bVar5 = true;
          goto LAB_004d925c;
        }
      }
    }
  }
  bVar5 = false;
LAB_004d925c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkCannotBeginDock(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotBeginDock(Ship *param_1,undefined4 param_2,void *param_3)

{
  Vec2 *pVVar1;
  Ship *pSVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  Vec2 *unaff_ESI;
  float in_XMM0_Da;
  float fVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfcda;
  local_10 = ExceptionList;
  pVVar1 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (Ship *)0x0) {
    if (*(int *)(param_1 + 0xd4) == 3) {
      bVar5 = true;
      goto LAB_004d9396;
    }
    Ship::getSpeed(param_1);
    if (0.4 < in_XMM0_Da) {
      bVar5 = true;
      goto LAB_004d9396;
    }
    pSVar2 = Sector::getSpaceStationClosestTo
                       (*(Sector **)(param_1 + 0x24),(float)*(double *)(param_1 + 0x28),
                        (float)*(double *)(param_1 + 0x30));
    if (pSVar2 == (Ship *)0x0) {
      bVar5 = true;
      goto LAB_004d9396;
    }
    fVar6 = (float)*(double *)(pSVar2 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    fastDistance(pVVar1,unaff_ESI);
    if (5.0 < fVar6) {
      bVar5 = true;
      goto LAB_004d9396;
    }
  }
  bVar5 = false;
LAB_004d9396:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar5;
}


// bool __cdecl ShipData::checkFlagSet(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkFlagSet(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_3);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9465;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkFlagNotSet(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkFlagNotSet(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_3);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9508;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return !bVar1;
}


// bool __cdecl ShipData::checkMenuCanBeginGame(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMenuCanBeginGame(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  SaveHandler *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_EBX;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bfd48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  uStack_28 = 0x4d9577;
  bVar1 = std::_Traits_equal<>("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EBX)
  ;
  if ((!bVar1) && (g_gameLogic[0x1c4] == (GameLogic)0x0)) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"starting_new_game",0x11);
    local_8 = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = 0;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      if (*(int *)(g_gameLogic + 0x74) != -1) {
        Singleton<>::getInstance();
        bVar1 = SaveHandler::saveExists(this,*(int *)(g_gameLogic + 0x74));
        if (!bVar1) {
          bVar1 = true;
          goto LAB_004d9639;
        }
      }
    }
    else {
      local_34[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_34,"submenu_scenariolist",0x14);
      local_8 = 2;
      pFVar2 = Singleton<>::getInstance();
      local_8 = 0;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (bVar1) {
        bVar1 = true;
        goto LAB_004d9639;
      }
    }
  }
  bVar1 = false;
LAB_004d9639:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d966c;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMenuCanBeginStory(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMenuCanBeginStory(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  SaveHandler *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_EBX;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_28 = 0x4d96e7;
  bVar1 = std::_Traits_equal<>("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EBX)
  ;
  if ((!bVar1) && (g_gameLogic[0x1c4] == (GameLogic)0x0)) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FlagManager::flagSet(pFVar2);
    if ((bVar1) && (*(int *)(g_gameLogic + 0x74) != -1)) {
      Singleton<>::getInstance();
      bVar1 = SaveHandler::saveExists(this,*(int *)(g_gameLogic + 0x74));
      if (!bVar1) {
        bVar1 = true;
        goto LAB_004d9760;
      }
    }
  }
  bVar1 = false;
LAB_004d9760:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9793;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMenuCanDeleteSave(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkMenuCanDeleteSave(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  SaveHandler *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_EBX;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_28 = 0x4d9807;
  bVar1 = std::_Traits_equal<>("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EBX)
  ;
  if ((!bVar1) && (*(int *)(g_gameLogic + 0x74) != -1)) {
    Singleton<>::getInstance();
    bVar1 = SaveHandler::saveExists(this,*(int *)(g_gameLogic + 0x74));
    if ((bVar1) && (g_gameLogic[0x1c4] == (GameLogic)0x0)) {
      local_34[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_34,"starting_new_game",0x11);
      local_8._0_1_ = 1;
      pFVar2 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (bVar1) {
        bVar1 = true;
        goto LAB_004d9880;
      }
    }
  }
  bVar1 = false;
LAB_004d9880:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d98b3;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkMenuCanConfirmDelete(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkMenuCanConfirmDelete(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  SaveHandler *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(g_gameLogic + 0x74) != -1) {
    Singleton<>::getInstance();
    bVar1 = SaveHandler::saveExists(this,*(int *)(g_gameLogic + 0x74));
    if ((bVar1) && (g_gameLogic[0x1c4] != (GameLogic)0x0)) {
      local_34[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_34,"starting_new_game",0x11);
      local_8._0_1_ = 1;
      pFVar2 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (bVar1) {
        bVar1 = true;
        goto LAB_004d996d;
      }
    }
  }
  bVar1 = false;
LAB_004d996d:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d99a0;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkConnectedToServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkConnectedToServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined1 extraout_AL;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x004d99e9. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return (bool)extraout_AL;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return true;
}


// bool __cdecl ShipData::checkCanConnectToServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanConnectToServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  basic_string<> bVar1;
  bool bVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> abStack_50 [12];
  undefined4 uStack_44;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfd98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38[0] = (basic_string<>)0x0;
  uStack_44 = 0x4d9a52;
  std::basic_string<>::assign(local_38,"submenu_manualconnection",0x18);
  local_8._0_1_ = 1;
  pFVar3 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  bVar1 = (basic_string<>)FlagManager::flagSet(pFVar3);
  if ((bool)bVar1) {
LAB_004d9aa6:
    std::basic_string<>::basic_string<>(local_38,(basic_string<> *)&OISConfiguration::serverIP);
    local_8._0_1_ = 3;
    std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&OISConfiguration::serverPort);
    local_8._0_1_ = 4;
    Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = NetworkClient::validServer();
    if (bVar2) {
      bVar2 = true;
      goto LAB_004d9aea;
    }
  }
  else {
    uStack_44 = 0x4d9a8e;
    local_38[0] = bVar1;
    std::basic_string<>::assign(local_38,"submenu_serverbrowser",0x15);
    local_8._0_1_ = 2;
    pFVar3 = Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = FlagManager::flagSet(pFVar3);
    if (bVar2) goto LAB_004d9aa6;
  }
  bVar2 = false;
LAB_004d9aea:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d9b1d;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCannotConnectToServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCannotConnectToServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  basic_string<> bVar1;
  bool bVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000020;
  basic_string<> abStack_50 [12];
  undefined4 uStack_44;
  basic_string<> local_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfd98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38[0] = (basic_string<>)0x0;
  uStack_44 = 0x4d9b92;
  std::basic_string<>::assign(local_38,"submenu_manualconnection",0x18);
  local_8._0_1_ = 1;
  pFVar3 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  bVar1 = (basic_string<>)FlagManager::flagSet(pFVar3);
  if ((bool)bVar1) {
LAB_004d9be6:
    std::basic_string<>::basic_string<>(local_38,(basic_string<> *)&OISConfiguration::serverIP);
    local_8._0_1_ = 3;
    std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&OISConfiguration::serverPort);
    local_8._0_1_ = 4;
    Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = NetworkClient::validServer();
    if (!bVar2) {
      bVar2 = true;
      goto LAB_004d9c2a;
    }
  }
  else {
    uStack_44 = 0x4d9bce;
    local_38[0] = bVar1;
    std::basic_string<>::assign(local_38,"submenu_serverbrowser",0x15);
    local_8._0_1_ = 2;
    pFVar3 = Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = FlagManager::flagSet(pFVar3);
    if (bVar2) goto LAB_004d9be6;
  }
  bVar2 = false;
LAB_004d9c2a:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_3 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4d9c5d;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanDisconnectFromServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCanDisconnectFromServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  basic_string<> bVar1;
  bool bVar2;
  FlagManager *pFVar3;
  NetworkClient *pNVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfd48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  pFVar3 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  bVar1 = (basic_string<>)FlagManager::flagSet(pFVar3);
  if ((bool)bVar1) {
LAB_004d9d24:
    pNVar4 = Singleton<>::getInstance();
    if (*(int *)(pNVar4 + 0x20) != 0) {
      bVar2 = true;
      goto LAB_004d9d35;
    }
  }
  else {
    local_34[0] = bVar1;
    std::basic_string<>::assign(local_34,"submenu_multichat",0x11);
    local_8._0_1_ = 2;
    pFVar3 = Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = FlagManager::flagSet(pFVar3);
    if (bVar2) goto LAB_004d9d24;
  }
  bVar2 = false;
LAB_004d9d35:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9d68;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCannotSendReadyState(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCannotSendReadyState(undefined4 param_1,undefined4 param_2,void *param_3)

{
  basic_string<> bVar1;
  bool bVar2;
  FlagManager *pFVar3;
  NetworkClient *pNVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfd48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  pFVar3 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  bVar1 = (basic_string<>)FlagManager::flagSet(pFVar3);
  if ((bool)bVar1) {
LAB_004d9e24:
    pNVar4 = Singleton<>::getInstance();
    if (*(int *)(pNVar4 + 0x20) == 0) {
      bVar2 = true;
      goto LAB_004d9e35;
    }
  }
  else {
    local_34[0] = bVar1;
    std::basic_string<>::assign(local_34,"submenu_multichat",0x11);
    local_8._0_1_ = 2;
    pFVar3 = Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar2 = FlagManager::flagSet(pFVar3);
    if (bVar2) goto LAB_004d9e24;
  }
  bVar2 = false;
LAB_004d9e35:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9e68;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return bVar2;
}


// bool __cdecl ShipData::checkCanSendReadyStateToServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCanSendReadyStateToServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  NetworkClient *pNVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_3);
  bVar1 = checkCanDisconnectFromServer(param_1,param_2);
  if (bVar1) {
    pNVar2 = Singleton<>::getInstance();
    if (pNVar2[0x1c] == (NetworkClient)0x0) {
      bVar1 = true;
      goto LAB_004d9edc;
    }
  }
  bVar1 = false;
LAB_004d9edc:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9f0f;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanRemoveReadyStateFromServer(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCanRemoveReadyStateFromServer(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  NetworkClient *pNVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_3);
  bVar1 = checkCanDisconnectFromServer(param_1,param_2);
  if (bVar1) {
    pNVar2 = Singleton<>::getInstance();
    if (pNVar2[0x1c] != (NetworkClient)0x0) {
      bVar1 = true;
      goto LAB_004d9f8c;
    }
  }
  bVar1 = false;
LAB_004d9f8c:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4d9fbf;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCanSendChatMessage(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanSendChatMessage(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multichat",0x11);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if ((bVar1) && (*(int *)(g_gameData + 0x200) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4da08f;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotSendChatMessage(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

bool __cdecl
ShipData::checkCannotSendChatMessage(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multichat",0x11);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if ((bVar1) && (*(int *)(g_gameData + 0x200) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4da15f;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkSmugglerDetected(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkSmugglerDetected(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  char *unaff_EBX;
  uint unaff_EBP;
  uint in_stack_00000020;
  
  bVar1 = std::_Traits_equal<>("",0,unaff_EBX,unaff_EBP);
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return !bVar1;
}


// bool __cdecl ShipData::checkCanTakeShip(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCanTakeShip(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  GameLogic *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if (bVar1) {
    bVar1 = GameLogic::canTakeShip(this);
    if (bVar1) {
      bVar1 = true;
      goto LAB_004da277;
    }
  }
  bVar1 = false;
LAB_004da277:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4da2aa;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkCannotTakeShip(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkCannotTakeShip(undefined4 param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  FlagManager *pFVar2;
  GameLogic *this;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bfd10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FlagManager::flagSet(pFVar2);
  if (bVar1) {
    bVar1 = GameLogic::canTakeShip(this);
    if (!bVar1) {
      bVar1 = true;
      goto LAB_004da337;
    }
  }
  bVar1 = false;
LAB_004da337:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4da36a;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// bool __cdecl ShipData::checkNothing(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __cdecl ShipData::checkNothing(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return param_1 != 0;
}


// class std::function<bool __cdecl(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)> __cdecl ShipData::getCheckFunction(enum
// EShipDataCheckType::ShipDataCheckType)

void __cdecl ShipData::getCheckFunction(ShipDataCheckType param_1)

{
  bool____cdecl_____Ship__int_std__basic_string<>_ *pbVar1;
  function<> *in_ECX;
  undefined4 in_EDX;
  _func_bool_Ship_ptr_int_basic_string<> **unaff_ESI;
  code *local_8;
  
  switch(in_EDX) {
  case 0:
    local_8 = checkNothing;
    break;
  case 1:
    local_8 = checkFlagSet;
    break;
  case 2:
    local_8 = checkFlagNotSet;
    break;
  case 3:
    local_8 = PresentationData::checkRoomObjectState;
    break;
  case 4:
    local_8 = checkNavTargetSelected;
    break;
  case 5:
    local_8 = checkIsMoving;
    break;
  case 6:
    local_8 = checkMainEngineBurning;
    break;
  case 7:
  case 0xd:
    local_8 = PresentationData::checkHasSelectedDirection;
    break;
  case 8:
    local_8 = checkHasCoursePlotted;
    break;
  case 9:
    local_8 = checkAutoPilotEngaged;
    break;
  case 10:
    local_8 = checkAutoPilotNotEngaged;
    break;
  case 0xb:
    local_8 = checkCoursePlottedNotEngaged;
    break;
  case 0xc:
    local_8 = checkDockedWithJumpgate;
    break;
  case 0xe:
    local_8 = PresentationData::checkNavMapLockedToShip;
    break;
  case 0xf:
    local_8 = checkNavMapInSectorMode;
    break;
  case 0x10:
    local_8 = checkPwrHasModuleSelected;
    break;
  case 0x11:
    local_8 = checkPwrCurrentModuleOn;
    break;
  case 0x12:
    local_8 = checkPwrCurrentModuleOff;
    break;
  case 0x13:
    local_8 = checkPwrCurrentModuleEmconOn;
    break;
  case 0x14:
    local_8 = checkPwrCurrentModuleEmconOff;
    break;
  case 0x15:
    local_8 = checkPwrReactorOn;
    break;
  case 0x16:
    local_8 = checkPwrReactorOff;
    break;
  case 0x17:
    local_8 = checkPwrCanRaisePriority;
    break;
  case 0x18:
    local_8 = checkPwrCanLowerPriority;
    break;
  case 0x19:
    local_8 = checkIsStationary;
    break;
  case 0x1a:
    local_8 = checkCanComeToFullStop;
    break;
  case 0x1b:
    local_8 = checkRCSBurning;
    break;
  case 0x1c:
    local_8 = checkRCSBurningCW;
    break;
  case 0x1d:
    local_8 = checkRCSBurningCCW;
    break;
  case 0x1e:
    local_8 = checkIsEMCONMode;
    break;
  case 0x1f:
    local_8 = checkHasSelectedDestination;
    break;
  case 0x20:
    local_8 = checkWarning;
    break;
  case 0x21:
    local_8 = checkInDanger;
    break;
  case 0x22:
    local_8 = checkNominal;
    break;
  case 0x23:
    local_8 = checkInAsteroidField;
    break;
  case 0x24:
    local_8 = checkInNebula;
    break;
  case 0x25:
    local_8 = checkTubeHasTorpedo;
    break;
  case 0x26:
    local_8 = checkTubeHasMine;
    break;
  case 0x27:
    local_8 = checkTubeHasProbe;
    break;
  case 0x28:
    local_8 = checkTubeCanSpinUp;
    break;
  case 0x29:
    local_8 = checkTubeCanFire;
    break;
  case 0x2a:
    local_8 = checkTubeCanLaunch;
    break;
  case 0x2b:
    local_8 = checkTubeLaunched;
    break;
  case 0x2c:
    local_8 = checkTubeEmpty;
    break;
  case 0x2d:
    local_8 = checkTubeSpinningUp;
    break;
  case 0x2e:
    local_8 = checkTubeLinked;
    break;
  case 0x2f:
    local_8 = checkTubeHasExp;
    break;
  case 0x30:
    local_8 = checkTubeHasEmp;
    break;
  case 0x31:
    local_8 = checkTubeCanBeArmed;
    break;
  case 0x32:
    local_8 = checkTubeCanBePoweredDown;
    break;
  case 0x33:
    local_8 = checkTubeCanBeDisabled;
    break;
  case 0x34:
    local_8 = checkCanSetTarget;
    break;
  case 0x35:
    local_8 = checkCanChangeTarget;
    break;
  case 0x36:
    local_8 = checkCannotSetOrChangeTarget;
    break;
  case 0x37:
    local_8 = checkCanRotate;
    break;
  case 0x38:
    local_8 = checkPCEAlarm;
    break;
  case 0x39:
    local_8 = checkClusterMode;
    break;
  case 0x3a:
    local_8 = checkIsInOrbit;
    break;
  case 0x3b:
    local_8 = checkIsInStandardOrbit;
    break;
  case 0x3c:
    local_8 = checkIsInHighOrbit;
    break;
  case 0x3d:
    local_8 = checkIsInPolarOrbit;
    break;
  case 0x3e:
    local_8 = checkNotInStandardOrbit;
    break;
  case 0x3f:
    local_8 = checkNotInHighOrbit;
    break;
  case 0x40:
    local_8 = checkNotInPolarOrbit;
    break;
  case 0x41:
    local_8 = checkIsInFreeSpace;
    break;
  case 0x42:
    local_8 = checkIsChangingOrbit;
    break;
  case 0x43:
    local_8 = checkIsLeavingOrbit;
    break;
  case 0x44:
    local_8 = checkIsEnteringOrbit;
    break;
  case 0x45:
    local_8 = checkIsCorrectingOrbit;
    break;
  case 0x46:
    local_8 = checkIsInStableOrbit;
    break;
  case 0x47:
    local_8 = checkNotDocked;
    break;
  case 0x48:
    local_8 = checkNotDockedOrMultiplayer;
    break;
  case 0x49:
    local_8 = checkNotDockedOrMultiplayerOrTutorial;
    break;
  case 0x4a:
    local_8 = checkIsDockedOrDocking;
    break;
  case 0x4b:
    local_8 = checkIsDockedOrDocking;
    break;
  case 0x4c:
    local_8 = checkIsDocking;
    break;
  case 0x4d:
    local_8 = checkIsFullyDocked;
    break;
  case 0x4e:
    local_8 = checkIsUndocking;
    break;
  case 0x4f:
    local_8 = checkNotDocking;
    break;
  case 0x50:
    local_8 = checkNotUndocking;
    break;
  case 0x51:
    local_8 = checkCanOpenAirlock;
    break;
  case 0x52:
    local_8 = checkHasDockingPermission;
    break;
  case 0x53:
    local_8 = checkNeedsDockingPermission;
    break;
  case 0x54:
    local_8 = checkHasUndockingPermission;
    break;
  case 0x55:
    local_8 = checkNeedsUndockingPermission;
    break;
  case 0x56:
    local_8 = checkCanGetUndockingPermission;
    break;
  case 0x57:
    local_8 = checkCannotGetUndockingPermission;
    break;
  case 0x58:
    local_8 = checkAnyAirlockOpen;
    break;
  case 0x59:
    local_8 = checkAllAirlocksSealed;
    break;
  case 0x5a:
    local_8 = checkAirlocksClosedButNeedsUndockPermission;
    break;
  case 0x5b:
    local_8 = checkCanUndock;
    break;
  case 0x5c:
    local_8 = checkDockedButCannotUndock;
    break;
  case 0x5d:
    local_8 = checkIFFActive;
    break;
  case 0x5e:
    local_8 = checkSelectedNavObjectCanCommunicate;
    break;
  case 0x5f:
    local_8 = checkOwesMoneyToDockedStation;
    break;
  case 0x60:
    local_8 = checkOwesMoneyToDockedStationAndCannotPay;
    break;
  case 0x61:
    local_8 = checkOwesMoneyToDockedStationAndCanPay;
    break;
  case 0x62:
    local_8 = checkIsDockedWithStation;
    break;
  case 99:
    local_8 = checkIsDockedWithDepot;
    break;
  case 100:
    local_8 = checkIsDockedWithJumpgate;
    break;
  case 0x65:
    local_8 = checkNeedToPayForJumpgate;
    break;
  case 0x66:
    local_8 = checkCanActivateJumpgate;
    break;
  case 0x67:
    local_8 = checkNotDockedWithStation;
    break;
  case 0x68:
    local_8 = checkModuleReactorUndamaged;
    break;
  case 0x69:
    local_8 = checkModuleReactorDamaged;
    break;
  case 0x6a:
    local_8 = checkModuleReactorDestroyed;
    break;
  case 0x6b:
    local_8 = checkModuleReactorConnected;
    break;
  case 0x6c:
    local_8 = checkModuleReactorFunctioning;
    break;
  case 0x6d:
    local_8 = checkModuleMainDriveUndamaged;
    break;
  case 0x6e:
    local_8 = checkModuleMainDriveDamaged;
    break;
  case 0x6f:
    local_8 = checkModuleMainDriveDestroyed;
    break;
  case 0x70:
    local_8 = checkModuleMainDriveConnected;
    break;
  case 0x71:
    local_8 = checkModuleRCSUndamaged;
    break;
  case 0x72:
    local_8 = checkModuleRCSDamaged;
    break;
  case 0x73:
    local_8 = checkModuleRCSDestroyed;
    break;
  case 0x74:
    local_8 = checkModuleRCSConnected;
    break;
  case 0x75:
    local_8 = checkModuleCommsUndamaged;
    break;
  case 0x76:
    local_8 = checkModuleCommsDamaged;
    break;
  case 0x77:
    local_8 = checkModuleCommsDestroyed;
    break;
  case 0x78:
    local_8 = checkModuleCommsConnected;
    break;
  case 0x79:
    local_8 = checkModuleBatt1Undamaged;
    break;
  case 0x7a:
    local_8 = checkModuleBatt1Damaged;
    break;
  case 0x7b:
    local_8 = checkModuleBatt1Destroyed;
    break;
  case 0x7c:
    local_8 = checkModuleBatt1Connected;
    break;
  case 0x7d:
    local_8 = checkModuleBatt2Undamaged;
    break;
  case 0x7e:
    local_8 = checkModuleBatt1Damaged;
    break;
  case 0x7f:
    local_8 = checkModuleBatt1Destroyed;
    break;
  case 0x80:
    local_8 = checkModuleBatt1Connected;
    break;
  case 0x81:
    local_8 = checkModuleBatt3Undamaged;
    break;
  case 0x82:
    local_8 = checkModuleBatt3Damaged;
    break;
  case 0x83:
    local_8 = checkModuleBatt3Destroyed;
    break;
  case 0x84:
    local_8 = checkModuleBatt3Connected;
    break;
  case 0x85:
    local_8 = checkModuleHelmUndamaged;
    break;
  case 0x86:
    local_8 = checkModuleHelmDamaged;
    break;
  case 0x87:
    local_8 = checkModuleHelmDestroyed;
    break;
  case 0x88:
    local_8 = checkModuleHelmConnected;
    break;
  case 0x89:
    local_8 = checkModuleSensorsUndamaged;
    break;
  case 0x8a:
    local_8 = checkModuleSensorsDamaged;
    break;
  case 0x8b:
    local_8 = checkModuleSensorsDestroyed;
    break;
  case 0x8c:
    local_8 = checkModuleSensorsConnected;
    break;
  case 0x8d:
    local_8 = checkModuleNavComUndamaged;
    break;
  case 0x8e:
    local_8 = checkModuleNavComDamaged;
    break;
  case 0x8f:
    local_8 = checkModuleNavComDestroyed;
    break;
  case 0x90:
    local_8 = checkModuleNavComConnected;
    break;
  case 0x91:
    local_8 = checkModuleWeaponUndamaged;
    break;
  case 0x92:
    local_8 = checkModuleWeaponDamaged;
    break;
  case 0x93:
    local_8 = checkModuleWeaponDestroyed;
    break;
  case 0x94:
    local_8 = checkModuleWeaponConnected;
    break;
  case 0x95:
    local_8 = checkModuleJumpDriveUndamaged;
    break;
  case 0x96:
    local_8 = checkModuleJumpDriveDamaged;
    break;
  case 0x97:
    local_8 = checkModuleJumpDriveDestroyed;
    break;
  case 0x98:
    local_8 = checkModuleJumpDriveConnected;
    break;
  case 0x99:
    std::function<>::function<><>(in_ECX,checkModuleBooting);
    return;
  case 0x9a:
    std::function<>::function<><>(in_ECX,checkModuleDisconnected);
    return;
  case 0x9b:
    local_8 = checkShowSpaceDisc;
    break;
  case 0x9c:
    local_8 = checkDontShowSpaceDisc;
    break;
  case 0x9d:
    local_8 = checkTube1Selected;
    break;
  case 0x9e:
    local_8 = checkTube2Selected;
    break;
  case 0x9f:
    local_8 = checkTube3Selected;
    break;
  case 0xa0:
    local_8 = checkTube4Selected;
    break;
  case 0xa1:
    local_8 = checkTube5Selected;
    break;
  case 0xa2:
    local_8 = checkTube6Selected;
    break;
  case 0xa3:
    local_8 = checkTube7Selected;
    break;
  case 0xa4:
    local_8 = checkTube8Selected;
    break;
  case 0xa5:
    local_8 = checkEngCurrentModuleOn;
    break;
  case 0xa6:
    local_8 = checkEngCurrentModuleOff;
    break;
  case 0xa7:
    local_8 = checkEngCurrentModuleCanOpen;
    break;
  case 0xa8:
    local_8 = checkModuleOpen;
    break;
  case 0xa9:
    local_8 = checkNoModuleOpen;
    break;
  case 0xaa:
    local_8 = checkEngCurrentModuleCanOpen;
    break;
  case 0xab:
    local_8 = checkEngModuleCanBeConnected;
    break;
  case 0xac:
    local_8 = checkEngNoTrayItemSelected;
    break;
  case 0xad:
    local_8 = checkCanTeleport;
    break;
  case 0xae:
    local_8 = checkEngIsRepairing;
    break;
  case 0xaf:
    local_8 = checkCanSetJumpDestination;
    break;
  case 0xb0:
    local_8 = checkCanNotSetJumpDestination;
    break;
  case 0xb1:
    local_8 = checkCanSpinUpJumpDrive;
    break;
  case 0xb2:
    local_8 = checkCanNotSpinUpJumpDrive;
    break;
  case 0xb3:
    local_8 = checkCanCalculateJump;
    break;
  case 0xb4:
    local_8 = checkCanNotCalculateJump;
    break;
  case 0xb5:
    local_8 = checkCanJump;
    break;
  case 0xb6:
    local_8 = checkCanNotJump;
    break;
  case 0xb7:
    local_8 = checkCanDischargeJumpDrive;
    break;
  case 0xb8:
    local_8 = checkCanNotDischargeJumpDrive;
    break;
  case 0xb9:
    local_8 = checkHasJumpDrive;
    break;
  case 0xba:
    local_8 = checkHasNoJumpDrive;
    break;
  case 0xbb:
    local_8 = checkJumpDriveSpinningUp;
    break;
  case 0xbc:
    local_8 = checkJumpDriveCalculating;
    break;
  case 0xbd:
    local_8 = checkJumpDriveSpunUp;
    break;
  case 0xbe:
    local_8 = checkJumpDriveCalculated;
    break;
  case 0xbf:
    local_8 = checkPwrLowPowerWarning;
    break;
  case 0xc0:
    local_8 = checkPwrIsDraining;
    break;
  case 0xc1:
    local_8 = checkPwrIsGenerating;
    break;
  case 0xc2:
    local_8 = checkIsTurnedOn;
    break;
  case 0xc3:
    local_8 = checkIsTurnedOff;
    break;
  case 0xc4:
    local_8 = checkCanTeleport;
    break;
  case 0xc5:
    local_8 = checkSensorsNavLinked;
    break;
  case 0xc6:
    local_8 = checkSensorsHistoryLocked;
    break;
  case 199:
    local_8 = checkSensorsAuto;
    break;
  case 200:
    local_8 = checkLADARActive;
    break;
  case 0xc9:
    local_8 = checkLADARFunctional;
    break;
  case 0xca:
    local_8 = checkLADARInActive;
    break;
  case 0xcb:
    local_8 = checkMainDriveFunctional;
    break;
  case 0xcc:
    local_8 = checkCounterMeasureExists;
    break;
  case 0xcd:
    local_8 = checkCounterMeasureCanLaunch;
    break;
  case 0xce:
    local_8 = checkCounterMeasureCannotLaunch;
    std::_Func_class<>::_Set((_Func_class<> *)in_ECX,(_Func_base<> *)0x0);
    pbVar1 = std::move<>(unaff_ESI);
    std::_Func_class<>::_Reset<>((_Func_class<> *)in_ECX,pbVar1);
    return;
  case 0xcf:
    std::function<>::function<><>(in_ECX,checkPDSExists);
    return;
  case 0xd0:
    std::function<>::function<><>(in_ECX,checkPDSActive);
    return;
  case 0xd1:
    std::function<>::function<><>(in_ECX,checkPDSInactive);
    return;
  case 0xd2:
    std::function<>::function<><>(in_ECX,checkCommsAutosyncOn);
    return;
  case 0xd3:
    local_8 = checkValidTravelTargetSelected;
    break;
  case 0xd4:
    local_8 = checkCanAddWaypoint;
    break;
  case 0xd5:
    std::function<>::function<><>(in_ECX,checkIsMoored);
    return;
  case 0xd6:
    std::function<>::function<><>(in_ECX,checkIsMooredToCargo);
    return;
  case 0xd7:
    std::function<>::function<><>(in_ECX,checkIsMooredToCargo);
    return;
  case 0xd8:
    std::function<>::function<><>(in_ECX,checkHasGrapplingArm);
    return;
  case 0xd9:
    std::function<>::function<><>(in_ECX,checkGrapplingArmInUse);
    return;
  case 0xda:
    std::function<>::function<><>(in_ECX,checkCanGrappleFromMoored);
    return;
  case 0xdb:
    std::function<>::function<><>(in_ECX,checkCanGrappleFromShip);
    return;
  case 0xdc:
    std::function<>::function<><>(in_ECX,checkCanJettisonCargo);
    return;
  case 0xdd:
    std::function<>::function<><>(in_ECX,checkCanJettisonAllCargo);
    return;
  case 0xde:
    std::function<>::function<><>(in_ECX,checkCanHack);
    return;
  case 0xdf:
    std::function<>::function<><>(in_ECX,checkCannotHack);
    return;
  case 0xe0:
    std::function<>::function<><>(in_ECX,checkHackUnitFunctional);
    return;
  case 0xe1:
    std::function<>::function<><>(in_ECX,checkIsHacking);
    return;
  case 0xe2:
    std::function<>::function<><>(in_ECX,checkBeingHailed);
    return;
  case 0xe3:
    std::function<>::function<><>(in_ECX,checkShouldShowCargoScreen);
    return;
  case 0xe4:
    local_8 = checkCanRepairHullAtDepot;
    break;
  case 0xe5:
    local_8 = checkCannotRepairHullAtDepot;
    break;
  case 0xe6:
    local_8 = checkCanRepairModulesAtDepot;
    break;
  case 0xe7:
    local_8 = checkCannotRepairModulesAtDepot;
    break;
  case 0xe8:
    local_8 = checkCanRearmAtDepot;
    break;
  case 0xe9:
    local_8 = checkCannotRearmAtDepot;
    break;
  case 0xea:
    local_8 = checkCanBuyCMAtDepot;
    break;
  case 0xeb:
    local_8 = checkCannotBuyCMAtDepot;
    break;
  case 0xec:
    std::function<>::function<><>(in_ECX,checkCanJumpInTutorial);
    return;
  case 0xed:
    std::function<>::function<><>(in_ECX,checkCanDetectCassandraInTutorial);
    return;
  case 0xee:
    std::function<>::function<><>(in_ECX,checkJumpDriveActive);
    return;
  case 0xef:
    std::function<>::function<><>(in_ECX,checkPDLActive);
    return;
  case 0xf0:
    std::function<>::function<><>(in_ECX,checkLADARDetected);
    return;
  case 0xf1:
    std::function<>::function<><>(in_ECX,checkMenuMain);
    return;
  case 0xf2:
    std::function<>::function<><>(in_ECX,checkSubmenuOptions);
    return;
  case 0xf3:
    std::function<>::function<><>(in_ECX,checkSubmenuInput);
    return;
  case 0xf4:
    std::function<>::function<><>(in_ECX,checkSubmenuNews);
    return;
  case 0xf5:
    std::function<>::function<><>(in_ECX,checkSubmenuCredits);
    return;
  case 0xf6:
    std::function<>::function<><>(in_ECX,checkSubmenuGameOver);
    return;
  case 0xf7:
    std::function<>::function<><>(in_ECX,checkHasPurchase);
    return;
  case 0xf8:
    std::function<>::function<><>(in_ECX,checkValidPurchase);
    return;
  case 0xf9:
    std::function<>::function<><>(in_ECX,checkInvalidPurchase);
    return;
  case 0xfa:
    std::function<>::function<><>(in_ECX,checkHasSale);
    return;
  case 0xfb:
    std::function<>::function<><>(in_ECX,checkValidSale);
    return;
  case 0xfc:
    std::function<>::function<><>(in_ECX,checkInvalidSale);
    return;
  case 0xfd:
    std::function<>::function<><>(in_ECX,checkHasPurchaseOrSale);
    return;
  case 0xfe:
    std::function<>::function<><>(in_ECX,checkCommerceAtMenu);
    return;
  case 0xff:
    std::function<>::function<><>(in_ECX,checkCommerceNotAtMenu);
    return;
  case 0x100:
    std::function<>::function<><>(in_ECX,checkCommerceMenuIs);
    return;
  case 0x101:
    std::function<>::function<><>(in_ECX,checkCommerceTermCanPurchaseLicense);
    return;
  case 0x102:
    std::function<>::function<><>(in_ECX,checkCommerceTermCannotPurchaseLicense);
    return;
  case 0x103:
    std::function<>::function<><>(in_ECX,checkCommerceTermLoanGiverSelected);
    return;
  case 0x104:
    std::function<>::function<><>(in_ECX,checkCommerceTermLoanGiverNotSelected);
    return;
  case 0x105:
    std::function<>::function<><>(in_ECX,checkCommerceTermRepayingLoan);
    return;
  case 0x106:
    std::function<>::function<><>(in_ECX,checkCommerceTermLoanValid);
    return;
  case 0x107:
    std::function<>::function<><>(in_ECX,checkCommerceTermLoanInvalid);
    return;
  case 0x108:
    std::function<>::function<><>(in_ECX,checkCommerceTermRepaymentValid);
    return;
  case 0x109:
    std::function<>::function<><>(in_ECX,checkCommerceTermRepaymentInvalid);
    return;
  case 0x10a:
    std::function<>::function<><>(in_ECX,checkCommerceTermCanTakeContract);
    return;
  case 0x10b:
    std::function<>::function<><>(in_ECX,checkCommerceTermCannotTakeContract);
    return;
  case 0x10c:
    std::function<>::function<><>(in_ECX,checkCommerceTermCanDeliverContract);
    return;
  case 0x10d:
    std::function<>::function<><>(in_ECX,checkCommerceTermCannotDeliverContract);
    return;
  case 0x10e:
    std::function<>::function<><>(in_ECX,checkCommerceTermCanTakePassenger);
    return;
  case 0x10f:
    std::function<>::function<><>(in_ECX,checkCommerceTermCannotTakePassenger);
    return;
  case 0x110:
    std::function<>::function<><>(in_ECX,checkWireVisible);
    return;
  case 0x111:
    std::function<>::function<><>(in_ECX,checkMechanicAtMenu);
    return;
  case 0x112:
    std::function<>::function<><>(in_ECX,checkMechanicAt);
    return;
  case 0x113:
    std::function<>::function<><>(in_ECX,checkMechanicCanRepair);
    return;
  case 0x114:
    std::function<>::function<><>(in_ECX,checkMechanicCannotRepair);
    return;
  case 0x115:
    std::function<>::function<><>(in_ECX,checkMechanicCanBuyPod);
    return;
  case 0x116:
    std::function<>::function<><>(in_ECX,checkMechanicCannotBuyPod);
    return;
  case 0x117:
    std::function<>::function<><>(in_ECX,checkMechanicCanSellPod);
    return;
  case 0x118:
    std::function<>::function<><>(in_ECX,checkMechanicCannotSellPod);
    return;
  case 0x119:
    std::function<>::function<><>(in_ECX,checkMechanicCanUpgradePod);
    return;
  case 0x11a:
    std::function<>::function<><>(in_ECX,checkMechanicCannotUpgradePod);
    return;
  case 0x11b:
    std::function<>::function<><>(in_ECX,checkMechanicCanBuyModule);
    return;
  case 0x11c:
    std::function<>::function<><>(in_ECX,checkMechanicCannotBuyModule);
    return;
  case 0x11d:
    std::function<>::function<><>(in_ECX,checkMechanicCanSellModule);
    return;
  case 0x11e:
    std::function<>::function<><>(in_ECX,checkMechanicCannotSellModule);
    return;
  case 0x11f:
    std::function<>::function<><>(in_ECX,checkMechanicCanBuyArmament);
    return;
  case 0x120:
    std::function<>::function<><>(in_ECX,checkMechanicCannotBuyArmament);
    return;
  case 0x121:
    std::function<>::function<><>(in_ECX,checkMechanicCanSellArmament);
    return;
  case 0x122:
    std::function<>::function<><>(in_ECX,checkMechanicCannotSellArmament);
    return;
  case 0x123:
    std::function<>::function<><>(in_ECX,checkBuyingModules);
    return;
  case 0x124:
    std::function<>::function<><>(in_ECX,checkShipCanBuy);
    return;
  case 0x125:
    std::function<>::function<><>(in_ECX,checkShipCannotBuy);
    return;
  case 0x126:
    std::function<>::function<><>(in_ECX,checkMooredWreckHasNotDownloadedData);
    return;
  case 0x127:
    std::function<>::function<><>(in_ECX,checkMooredWreckHasDownloadedData);
    return;
  case 0x128:
    std::function<>::function<><>(in_ECX,checkMooredWreckHasUnclampedCargo);
    return;
  case 0x129:
    std::function<>::function<><>(in_ECX,checkMooredWreckHasNotUnclampedCargo);
    return;
  case 0x12a:
    std::function<>::function<><>(in_ECX,checkCanBoardBrokerShip);
    return;
  case 299:
    std::function<>::function<><>(in_ECX,checkCannotBoardBrokerShip);
    return;
  case 300:
    std::function<>::function<><>(in_ECX,checkIsViewingSelectedShip);
    return;
  case 0x12d:
    std::function<>::function<><>(in_ECX,checkIsNotViewingSelectedShip);
    return;
  case 0x12e:
    std::function<>::function<><>(in_ECX,checkHasEmailsToDownload);
    return;
  case 0x12f:
    std::function<>::function<><>(in_ECX,checkStartingNewGame);
    return;
  case 0x130:
    std::function<>::function<><>(in_ECX,checkNewGameOptions);
    return;
  case 0x131:
    std::function<>::function<><>(in_ECX,checkConversationActive);
    return;
  case 0x132:
    std::function<>::function<><>(in_ECX,checkMusicPlaying);
    return;
  case 0x133:
    std::function<>::function<><>(in_ECX,checkMusicNotPlaying);
    return;
  case 0x134:
    std::function<>::function<><>(in_ECX,checkCanUseMusic);
    return;
  case 0x135:
    std::function<>::function<><>(in_ECX,checkSOSActive);
    return;
  case 0x136:
    std::function<>::function<><>(in_ECX,checkSOSCanBeActivated);
    return;
  case 0x137:
    std::function<>::function<><>(in_ECX,checkShipDisabled);
    return;
  case 0x138:
    std::function<>::function<><>(in_ECX,checkCommerceTermCanTakeBounty);
    return;
  case 0x139:
    std::function<>::function<><>(in_ECX,checkCommerceTermCannotTakeBounty);
    return;
  case 0x13a:
    std::function<>::function<><>(in_ECX,checkResolutionChanged);
    return;
  case 0x13b:
    local_8 = checkCanBeginDock;
    break;
  case 0x13c:
    local_8 = checkCannotBeginDock;
    break;
  case 0x13d:
    local_8 = checkDockedWithEarthgate;
    break;
  case 0x13e:
    local_8 = checkCanChangeDetails;
    break;
  case 0x13f:
    std::function<>::function<><>(in_ECX,checkMenuCanBeginGame);
    return;
  case 0x140:
    std::function<>::function<><>(in_ECX,checkMenuCanDeleteSave);
    return;
  case 0x141:
    std::function<>::function<><>(in_ECX,checkMenuCanDeleteSave);
    return;
  case 0x142:
    std::function<>::function<><>(in_ECX,checkMenuCanConfirmDelete);
    return;
  case 0x143:
    std::function<>::function<><>(in_ECX,checkMenuCanBeginStory);
    return;
  case 0x144:
    std::function<>::function<><>(in_ECX,checkCanJettisonComponent);
    return;
  case 0x145:
    std::function<>::function<><>(in_ECX,checkConnectedToServer);
    return;
  case 0x146:
    std::function<>::function<><>(in_ECX,checkCanConnectToServer);
    return;
  case 0x147:
    std::function<>::function<><>(in_ECX,checkCannotConnectToServer);
    return;
  case 0x148:
    std::function<>::function<><>(in_ECX,checkCanDisconnectFromServer);
    return;
  case 0x149:
    std::function<>::function<><>(in_ECX,checkCannotSendReadyState);
    return;
  case 0x14a:
    std::function<>::function<><>(in_ECX,checkCanSendChatMessage);
    return;
  case 0x14b:
    std::function<>::function<><>(in_ECX,checkCannotSendChatMessage);
    return;
  case 0x14c:
    std::function<>::function<><>(in_ECX,checkCanSendReadyStateToServer);
    return;
  case 0x14d:
    std::function<>::function<><>(in_ECX,checkCanRemoveReadyStateFromServer);
    return;
  case 0x14e:
    std::function<>::function<><>(in_ECX,checkCannotSendReadyState);
    return;
  default:
    std::function<>::function<>(in_ECX,0);
    return;
  case 0x150:
    std::function<>::function<><>(in_ECX,checkSmugglerDetected);
    return;
  case 0x151:
    std::function<>::function<><>(in_ECX,checkCanTakeShip);
    return;
  case 0x152:
    std::function<>::function<><>(in_ECX,checkCannotTakeShip);
    return;
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  std::_Func_class<>::_Reset<>
            ((_Func_class<> *)in_ECX,(bool____cdecl_____Ship__int_std__basic_string<>_ *)&local_8);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipData::replaceSubstring(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

uint * __cdecl
ShipData::replaceSubstring
          (uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6
          ,undefined4 *param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint *in_ECX;
  nothrow_t *pnVar6;
  char *pcVar7;
  uint unaff_EDI;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  char *in_stack_00000034;
  uint in_stack_00000044;
  uint in_stack_00000048;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bfdd8;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 2;
  pcVar7 = (char *)0x0;
  while( true ) {
    puVar2 = param_7;
    puVar4 = &param_7;
    if (0xf < in_stack_00000030) {
      puVar4 = param_7;
    }
    pcVar7 = (char *)std::_Traits_find<>(pcVar7,(uint)puVar4,in_stack_0000002c,pcVar3,unaff_EDI);
    uVar1 = param_1;
    if (pcVar7 == (char *)0xffffffff) break;
    pcVar5 = (char *)&stack0x00000034;
    if (0xf < in_stack_00000048) {
      pcVar5 = in_stack_00000034;
    }
    std::basic_string<>::replace
              ((basic_string<> *)&param_1,(uint)pcVar7,in_stack_0000002c,pcVar5,in_stack_00000044);
    std::basic_string<>::push_back((basic_string<> *)&param_7,(char)in_stack_00000044);
  }
  param_1 = param_1 & 0xffffff00;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = uVar1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  *(ulonglong *)(in_ECX + 4) = CONCAT44(param_6,param_5);
  param_5 = 0;
  param_6 = 0xf;
  if (0xf < in_stack_00000030) {
    pnVar6 = (nothrow_t *)(in_stack_00000030 + 1);
    puVar4 = puVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      puVar4 = (undefined4 *)puVar2[-1];
      pnVar6 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)puVar2 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar4,pnVar6);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  param_7 = (undefined4 *)((uint)param_7 & 0xffffff00);
  if (0xf < in_stack_00000048) {
    pnVar6 = (nothrow_t *)(in_stack_00000048 + 1);
    pcVar3 = in_stack_00000034;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(in_stack_00000034 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000048 + 0x24);
      if ((char *)0x1f < in_stack_00000034 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  return in_ECX;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipData::stringWithVars(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class Ship *,class Ship *,int)

void __cdecl ShipData::stringWithVars(int param_1,int param_2,void *param_3)

{
  char cVar1;
  basic_string<> *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  basic_string<> *pbVar6;
  void **ppvVar7;
  Quadrant QVar8;
  uint uVar9;
  basic_string<> *in_ECX;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  int in_EDX;
  nothrow_t *pnVar13;
  bool bVar14;
  uint in_stack_00000020;
  basic_string<> abStack_fc [12];
  undefined4 uStack_f0;
  basic_string<> local_e4 [8];
  undefined4 uStack_dc;
  void *local_cc;
  void *pvStack_c8;
  void *pvStack_c4;
  void *local_84 [4];
  undefined4 local_74;
  uint uStack_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bff0b;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 1;
  std::basic_string<>::basic_string<>(in_ECX,(basic_string<> *)&param_3);
  if (in_EDX != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)&local_cc,(basic_string<> *)(in_EDX + 8));
    local_14._0_1_ = 2;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc06c;
    std::basic_string<>::assign(local_e4,"$self",5);
    local_14._0_1_ = 3;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_28) {
      pnVar13 = (nothrow_t *)(local_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar13 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_cc,(basic_string<> *)(in_EDX + 0x238));
    local_14._0_1_ = 4;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc130;
    std::basic_string<>::assign(local_e4,"$rego",5);
    local_14._0_1_ = 5;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_28) {
      pnVar13 = (nothrow_t *)(local_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar13 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_cc,(basic_string<> *)(*(int *)(in_EDX + 0x44) + 0x7c));
    local_14._0_1_ = 6;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc1f5;
    std::basic_string<>::assign(local_e4,"$origin",7);
    local_14._0_1_ = 7;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_28) {
      pnVar13 = (nothrow_t *)(local_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar13 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    CargoHold::describeCargo(*(CargoHold **)(in_EDX + 0x1f8),SUB41(&local_cc,0));
    local_14._0_1_ = 8;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc2bc;
    std::basic_string<>::assign(local_e4,"$cargo",6);
    local_14._0_1_ = 9;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_28) {
      pnVar13 = (nothrow_t *)(local_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar13 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    pbVar2 = *(basic_string<> **)(*(int *)(in_EDX + 0x44) + 0x10);
    bVar14 = pbVar2 == (basic_string<> *)0x0;
    if (bVar14) {
      local_74 = 0;
      uStack_70 = 0xf;
      local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_84,"unknown",7);
      ppvVar7 = local_84;
    }
    else {
      ppvVar7 = (void **)std::basic_string<>::basic_string<>((basic_string<> *)local_54,pbVar2);
    }
    local_cc = *ppvVar7;
    pvStack_c8 = ppvVar7[1];
    pvStack_c4 = ppvVar7[2];
    ppvVar7[4] = (void *)0x0;
    ppvVar7[5] = (void *)0xf;
    *(undefined1 *)ppvVar7 = 0;
    local_14 = 0xc;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc3f2;
    std::basic_string<>::assign(local_e4,"$destination",0xc);
    local_14._0_1_ = 0xd;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,0xb);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_28) {
      pnVar13 = (nothrow_t *)(local_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar13 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    local_14 = 10;
    local_2c = 0;
    local_28 = 0xf;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    if ((bVar14) && (0xf < uStack_70)) {
      pnVar13 = (nothrow_t *)(uStack_70 + 1);
      pvVar10 = local_84[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_84[0] + -4);
        pnVar13 = (nothrow_t *)(uStack_70 + 0x24);
        if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    local_14 = 1;
    if ((!bVar14) && (0xf < local_40)) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
  }
  if (param_2 != -1) {
    uStack_dc = 0x4dc549;
    strUsingArgs((char *)&local_cc);
    local_14._0_1_ = 0xe;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc572;
    std::basic_string<>::assign(local_e4,"$amount",7);
    local_14._0_1_ = 0xf;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
  }
  if (param_1 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)&local_cc,(basic_string<> *)(param_1 + 8))
    ;
    local_14._0_1_ = 0x10;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc63c;
    std::basic_string<>::assign(local_e4,"$other",6);
    local_14._0_1_ = 0x11;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
    QVar8 = GameObject::getQuadrant((GameObject *)(param_1 + 8));
    pcVar12 = (&PTR_s_A_005e07e4)[QVar8];
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    pcVar11 = pcVar12;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::assign
              ((basic_string<> *)&local_cc,pcVar12,(int)pcVar11 - (int)(pcVar12 + 1));
    local_14._0_1_ = 0x12;
    local_e4[0] = (basic_string<>)0x0;
    uStack_f0 = 0x4dc736;
    std::basic_string<>::assign(local_e4,"$otherquadrant",0xe);
    local_14._0_1_ = 0x13;
    std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
    local_14 = CONCAT31(local_14._1_3_,1);
    pbVar6 = (basic_string<> *)replaceSubstring();
    if (in_ECX != pbVar6) {
      word::~word((word *)in_ECX);
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar4 = *(undefined4 *)(pbVar6 + 8);
      uVar5 = *(undefined4 *)(pbVar6 + 0xc);
      *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
      *(undefined4 *)(in_ECX + 4) = uVar3;
      *(undefined4 *)(in_ECX + 8) = uVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
      *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0xf;
      *pbVar6 = (basic_string<>)0x0;
    }
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
  }
  rand();
  pvStack_c4 = (void *)0x4dc7dc;
  strUsingArgs((char *)local_6c);
  local_14._0_1_ = 0x14;
  uVar9 = rand();
  uVar9 = uVar9 & 0x80000001;
  bVar14 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar14) {
    rand();
    pvStack_c4 = (void *)0x4dc815;
    pcVar11 = (char *)strUsingArgs((char *)local_54);
    local_14._0_1_ = 0x15;
    pcVar12 = pcVar11;
    if (0xf < *(uint *)(pcVar11 + 0x14)) {
      pcVar12 = *(char **)pcVar11;
    }
    std::basic_string<>::append((basic_string<> *)local_6c,pcVar12,*(uint *)(pcVar11 + 0x10));
    local_14._0_1_ = 0x14;
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar13);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&local_cc,(basic_string<> *)local_6c);
  local_14._0_1_ = 0x16;
  local_e4[0] = (basic_string<>)0x0;
  uStack_f0 = 0x4dc8a6;
  std::basic_string<>::assign(local_e4,"$randomdockingbay",0x11);
  local_14._0_1_ = 0x17;
  std::basic_string<>::basic_string<>(abStack_fc,(basic_string<> *)in_ECX);
  local_14 = CONCAT31(local_14._1_3_,0x14);
  pbVar6 = (basic_string<> *)replaceSubstring();
  if (in_ECX != pbVar6) {
    word::~word((word *)in_ECX);
    uVar3 = *(undefined4 *)(pbVar6 + 4);
    uVar4 = *(undefined4 *)(pbVar6 + 8);
    uVar5 = *(undefined4 *)(pbVar6 + 0xc);
    *(undefined4 *)in_ECX = *(undefined4 *)pbVar6;
    *(undefined4 *)(in_ECX + 4) = uVar3;
    *(undefined4 *)(in_ECX + 8) = uVar4;
    *(undefined4 *)(in_ECX + 0xc) = uVar5;
    *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
    *(undefined4 *)(pbVar6 + 0x10) = 0;
    *(undefined4 *)(pbVar6 + 0x14) = 0xf;
    *pbVar6 = (basic_string<>)0x0;
  }
  if (0xf < local_40) {
    pnVar13 = (nothrow_t *)(local_40 + 1);
    pvVar10 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar10 = *(void **)((int)local_54[0] + -4);
      pnVar13 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar13);
  }
  if (0xf < local_58) {
    pnVar13 = (nothrow_t *)(local_58 + 1);
    pvVar10 = local_6c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar10 = *(void **)((int)local_6c[0] + -4);
      pnVar13 = (nothrow_t *)(local_58 + 0x24);
      if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar13);
  }
  local_5c = 0;
  local_58 = 0xf;
  local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < in_stack_00000020) {
    pnVar13 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar10 = param_3;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar10 = *(void **)((int)param_3 + -4);
      pnVar13 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar13);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
