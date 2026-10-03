// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __cdecl PresentationData::checkRoomObjectState(int param_1,int param_2,void *param_3)
bool PresentationData::checkRoomObjectState(int param_1, int param_2, void * param_3)

{
  int iVar1;
  PresentationInterface *pPVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  undefined1 uVar7;
  uint uVar8;
  uint in_stack_00000020;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bf8c8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 != 0) {
    uVar8 = 0;
    pPVar2 = ghidra::any_singleton();
    piVar3 = *(int **)(*(int *)(pPVar2 + 0x2d4) + 0x90);
    uVar5 = *(int *)(*(int *)(pPVar2 + 0x2d4) + 0x94) - (int)piVar3 >> 2;
    if (uVar5 != 0) {
      do {
        iVar1 = *piVar3;
        if (*(int *)(iVar1 + 0x50) == param_2) {
          if (iVar1 != 0) {
            uVar7 = *(undefined1 *)(iVar1 + 0x34c);
            goto LAB_0052c8a8;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar8 < uVar5);
    }
  }
  uVar7 = 0;
LAB_0052c8a8:
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
  // [seh] ExceptionList = local_10;
  return (bool)uVar7;
}


// Ghidra: bool __cdecl PresentationData::checkHasSelectedDirection(int param_1,undefined4 param_2,void *param_3)
bool PresentationData::checkHasSelectedDirection(int param_1, undefined4 param_2, void * param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (m_selectedHeading == (double)*(float *)(param_1 + 0x128))) {
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


// Ghidra: bool __cdecl PresentationData::checkNavMapLockedToShip(int param_1,int param_2,void *param_3)
bool PresentationData::checkNavMapLockedToShip(int param_1, int param_2, void * param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else if (param_2 == 0) {
    bVar3 = true;
    if (m_mapZoomLevel != 0) {
      bVar3 = m_lockToShip;
    }
  }
  else {
    bVar3 = m_tabletLockToShip;
    if (m_tabletMapZoomLevel == 0) {
      bVar3 = true;
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
  return bVar3;
}


// Ghidra: bool __cdecl PresentationData::doMoveMapLeft(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMoveMapLeft(Ship * param_1, double param_2, double param_3, double param_4)

{
  moveMap(0xc1200000,0);
  return true;
}


// Ghidra: bool __cdecl PresentationData::doMoveMapRight(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMoveMapRight(Ship * param_1, double param_2, double param_3, double param_4)

{
  moveMap(0x41200000,0);
  return true;
}


// Ghidra: bool __cdecl PresentationData::doMoveMapUp(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMoveMapUp(Ship * param_1, double param_2, double param_3, double param_4)

{
  moveMap(0,0x41200000);
  return true;
}


// Ghidra: bool __cdecl PresentationData::doMoveMapDown(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMoveMapDown(Ship * param_1, double param_2, double param_3, double param_4)

{
  moveMap(0,0xc1200000);
  return true;
}


// Ghidra: bool __cdecl PresentationData::doMapZoomIn(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMapZoomIn(Ship * param_1, double param_2, double param_3, double param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  undefined4 in_stack_00000008;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 9;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  if ((double)CONCAT44(param_2._0_4_,in_stack_00000008) == 0.0) {
    m_mapZoomLevel = m_mapZoomLevel + -1;
    if (m_mapZoomLevel < 1) {
      m_mapZoomLevel = 1;
    }
  }
  else {
    m_tabletMapZoomLevel = m_tabletMapZoomLevel + -1;
    if (m_tabletMapZoomLevel < 1) {
      m_tabletMapZoomLevel = 1;
      return true;
    }
  }
  return true;
}


// Ghidra: bool __cdecl PresentationData::doMapZoomOut(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doMapZoomOut(Ship * param_1, double param_2, double param_3, double param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  undefined4 in_stack_00000008;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 8;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  if ((double)CONCAT44(param_2._0_4_,in_stack_00000008) == 0.0) {
    m_mapZoomLevel = m_mapZoomLevel + 1;
    if (4 < m_mapZoomLevel) {
      m_mapZoomLevel = 4;
    }
  }
  else {
    m_tabletMapZoomLevel = m_tabletMapZoomLevel + 1;
    if (3 < m_tabletMapZoomLevel) {
      m_tabletMapZoomLevel = 3;
      return true;
    }
  }
  return true;
}


// Ghidra: bool __cdecl PresentationData::doRecenterMapOnShip(Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationData::doRecenterMapOnShip(Ship * param_1, double param_2, double param_3, double param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  SoundEngine *this_;
  undefined4 in_stack_00000008;
  Sound SVar1;
  int iVar2;
  
  iVar2 = -1;
  SVar1 = 9;
  this_ = ghidra::any_singleton();
  (this_)->playSound(param_1, SVar1, iVar2);
  if ((double)CONCAT44(param_2._0_4_,in_stack_00000008) != 0.0) {
    _m_tabletMapCenterPoint = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
    m_tabletLockToShip = true;
    DAT_0065e058 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
    return true;
  }
  _m_mapCenterPoint = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
  m_lockToShip = true;
  DAT_0065e060 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
  return true;
}


// Ghidra: void __cdecl PresentationData::moveMap(float param_1,float param_2)
void PresentationData::moveMap(float param_1, float param_2)

{
  char in_CL;
  
  if (in_CL == '\0') {
    if (m_lockToShip) {
      m_lockToShip = false;
      _m_mapCenterPoint = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
      DAT_0065e060 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
    }
    _m_mapCenterPoint = _m_mapCenterPoint + param_1;
    DAT_0065e060 = DAT_0065e060 + param_2;
    return;
  }
  if (m_tabletLockToShip) {
    m_tabletLockToShip = false;
    _m_tabletMapCenterPoint = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
    DAT_0065e058 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
  }
  _m_tabletMapCenterPoint = _m_tabletMapCenterPoint + param_1;
  DAT_0065e058 = DAT_0065e058 + param_2;
  return;
}


// Ghidra: bool __cdecl PresentationData::isLocalCommand(int param_1)
bool PresentationData::isLocalCommand(int param_1)

{
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 1:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x24:
  case 0xc4:
  case 0xc5:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd6:
    return true;
  default:
    return false;
  }
}


// Ghidra: void __cdecl PresentationData::getShipCommandFunction(int param_1)
void PresentationData::getShipCommandFunction(int param_1)

{
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  switch(in_EDX) {
  case 1:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = PresentationInterface::doToggleRoomObject;
    in_ECX[9] = in_ECX;
    return;
  default:
    in_ECX[9] = 0;
    return;
  case 8:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMoveMapLeft;
    in_ECX[9] = in_ECX;
    return;
  case 9:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMoveMapRight;
    in_ECX[9] = in_ECX;
    return;
  case 10:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMoveMapUp;
    in_ECX[9] = in_ECX;
    return;
  case 0xb:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMoveMapDown;
    in_ECX[9] = in_ECX;
    return;
  case 0xc:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMapZoomIn;
    in_ECX[9] = in_ECX;
    return;
  case 0xd:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doMapZoomOut;
    in_ECX[9] = in_ECX;
    return;
  case 0xe:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = doRecenterMapOnShip;
    in_ECX[9] = in_ECX;
    return;
  case 0x24:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doToggleMapMode;
    in_ECX[9] = in_ECX;
    return;
  case 0xbd:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doNextTrack;
    in_ECX[9] = in_ECX;
    return;
  case 0xbe:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doPrevTrack;
    in_ECX[9] = in_ECX;
    return;
  case 0xbf:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doPauseTrack;
    in_ECX[9] = in_ECX;
    return;
  case 0xc0:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doResumeTrack;
    in_ECX[9] = in_ECX;
    return;
  case 0xc4:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doRoomLeft;
    in_ECX[9] = in_ECX;
    return;
  case 0xc5:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doRoomRight;
    in_ECX[9] = in_ECX;
    return;
  case 200:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doTimeSlower;
    in_ECX[9] = in_ECX;
    return;
  case 0xc9:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doTimeFaster;
    in_ECX[9] = in_ECX;
    return;
  case 0xcf:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doSwitchToMenu;
    in_ECX[9] = in_ECX;
    return;
  case 0xd0:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doConnectToServer;
    in_ECX[9] = in_ECX;
    return;
  case 0xd1:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doDisconnectFromServer;
    in_ECX[9] = in_ECX;
    return;
  case 0xd2:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doSendChatMessage;
    in_ECX[9] = in_ECX;
    return;
  case 0xd3:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doAlterServerSetting;
    in_ECX[9] = in_ECX;
    return;
  case 0xd4:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doSendServerCommand;
    in_ECX[9] = in_ECX;
    return;
  case 0xd6:
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[1] = ShipInterface::doSendReadyCommand;
    in_ECX[9] = in_ECX;
    return;
  }
}
