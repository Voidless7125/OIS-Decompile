#include "../ois.exe.h"


// public: virtual void __thiscall TabletInterface::render(enum ETabletScreenType::TabletScreenType)

void __thiscall TabletInterface::render(TabletInterface *this,TabletScreenType param_1)

{
  GameLogic *pGVar1;
  GameData *pGVar2;
  uint uVar3;
  TabletInterface *pTVar4;
  undefined4 *puVar5;
  char *pcVar6;
  Ship *pSVar7;
  undefined4 ****ppppuVar9;
  undefined4 ***pppuVar10;
  undefined4 uVar11;
  char *pcVar12;
  void *pvVar13;
  nothrow_t *pnVar14;
  void *local_5c [5];
  uint local_48;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  Ship *pSVar8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b5300;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x10) = 0;
  pTVar4 = this + 0x24;
  *(undefined4 *)(this + 0x34) = 0;
  if (0xf < *(uint *)(this + 0x38)) {
    pTVar4 = *(TabletInterface **)(this + 0x24);
  }
  *pTVar4 = (TabletInterface)0x0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  local_14 = uVar3;
  std::basic_string<>::append((basic_string<> *)(this + 0x24),"\n",1);
  pGVar2 = g_gameData;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  puVar5 = (undefined4 *)(*(int *)(pGVar2 + 0xd0) + 0x238);
  if (0xf < *(uint *)(*(int *)(pGVar2 + 0xd0) + 0x24c)) {
    puVar5 = (undefined4 *)*puVar5;
  }
  pcVar6 = (char *)strUsingArgs((char *)local_44,"`3  Sync: %s`!@`3%s\n","CERESPILOT",puVar5,uVar3);
  local_8 = 0;
  pcVar12 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar12 = *(char **)pcVar6;
  }
  std::basic_string<>::append((basic_string<> *)(this + 0x24),pcVar12,*(uint *)(pcVar6 + 0x10));
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pnVar14 = (nothrow_t *)(local_30 + 1);
    pppuVar10 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pppuVar10 = (undefined4 ***)local_44[0][-1];
      pnVar14 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pppuVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pppuVar10,pnVar14);
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  pSVar8 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
  }
  pSVar7 = pSVar8 + 8;
  if (0xf < *(uint *)(pSVar8 + 0x1c)) {
    pSVar7 = *(Ship **)pSVar7;
  }
  pcVar6 = (char *)strUsingArgs((char *)local_2c,"`3    on: `!%s\n",pSVar7);
  local_8 = 1;
  pcVar12 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar12 = *(char **)pcVar6;
  }
  std::basic_string<>::append((basic_string<> *)(this + 0x24),pcVar12,*(uint *)(pcVar6 + 0x10));
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar14 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      pnVar14 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  pGVar1 = g_gameLogic;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  strUsingArgs((char *)local_44,"%02d:%02d %d %s %da",*(undefined4 *)(pGVar1 + 0x184),
               *(undefined4 *)(pGVar1 + 0x180),*(undefined4 *)(pGVar1 + 0x188),
               (&PTR_s_January_005e0144)[*(int *)(pGVar1 + 0x18c)],*(undefined4 *)(pGVar1 + 400));
  local_8 = 2;
  ppppuVar9 = local_44;
  if (0xf < local_30) {
    ppppuVar9 = (undefined4 ****)local_44[0];
  }
  pcVar6 = (char *)strUsingArgs((char *)local_2c,"`3   Now: `!%s\n",ppppuVar9);
  local_8._0_1_ = 3;
  pcVar12 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar12 = *(char **)pcVar6;
  }
  std::basic_string<>::append((basic_string<> *)(this + 0x24),pcVar12,*(uint *)(pcVar6 + 0x10));
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_18) {
    pnVar14 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      pnVar14 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pnVar14 = (nothrow_t *)(local_30 + 1);
    ppppuVar9 = (undefined4 ****)local_44[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      ppppuVar9 = (undefined4 ****)local_44[0][-1];
      pnVar14 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar9,pnVar14);
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  std::basic_string<>::append((basic_string<> *)(this + 0x24),"\n",1);
  pGVar2 = g_gameData;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  uVar11 = 0x38;
  if (0 < *(int *)(*(int *)(pGVar2 + 0x124) + 0x1c)) {
    uVar11 = 0x24;
  }
  pcVar6 = (char *)strUsingArgs((char *)local_2c,"`3Credit: `%c%d`$c\n",uVar11,
                                *(int *)(*(int *)(pGVar2 + 0x124) + 0x1c));
  local_8 = 4;
  pcVar12 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar12 = *(char **)pcVar6;
  }
  std::basic_string<>::append((basic_string<> *)(this + 0x24),pcVar12,*(uint *)(pcVar6 + 0x10));
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar14 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      pnVar14 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  pGVar2 = g_gameData;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar6 = (char *)strUsingArgs((char *)local_5c,"`3Acc No: `!%d\n",
                                **(undefined4 **)(pGVar2 + 0x124));
  local_8 = 5;
  pcVar12 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar12 = *(char **)pcVar6;
  }
  std::basic_string<>::append((basic_string<> *)(this + 0x24),pcVar12,*(uint *)(pcVar6 + 0x10));
  if (0xf < local_48) {
    pnVar14 = (nothrow_t *)(local_48 + 1);
    pvVar13 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_5c[0] + -4);
      pnVar14 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall TabletInterface::keyHit(enum cocos2d::EventKeyboard::KeyCode)

void __thiscall TabletInterface::keyHit(TabletInterface *this,KeyCode param_1)

{
  debugPrint("DETAIL","Tablet interface key hit");
  (**(code **)(*(int *)this + 4))(0);
  return;
}
