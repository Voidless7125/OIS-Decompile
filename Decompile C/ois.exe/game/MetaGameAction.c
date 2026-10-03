#include "../ois.exe.h"


// public: __thiscall MetaGameAction::MetaGameAction(enum EMetaGameAction::MetaGameAction,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

MetaGameAction * __thiscall
MetaGameAction::MetaGameAction(MetaGameAction *this,int param_1,basic_string<> *param_3)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 uVar3;
  bool bVar4;
  basic_string<> *pbVar5;
  int iVar6;
  basic_string<> *pbVar7;
  Good *pGVar8;
  basic_string<> *pbVar9;
  MetaGameAction *pMVar10;
  Stats *pSVar11;
  nothrow_t *pnVar12;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> abStack_50 [8];
  undefined4 uStack_48;
  MetaGameAction *local_20 [3];
  MetaGameAction *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bd333;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar7 = (basic_string<> *)(this + 4);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  *pbVar7 = (basic_string<>)0x0;
  uStack_7 = 0;
  uVar2 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  local_14 = this;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else if (param_1 == 1) {
    *(undefined4 *)this = 1;
  }
  else {
    if (param_1 != 9) {
      if (param_1 == 2) {
        pbVar7 = (basic_string<> *)&param_3;
        if (0xf < in_stack_0000001c) {
          pbVar7 = param_3;
        }
        iVar6 = atoi((char *)pbVar7);
        *(undefined4 *)this = 2;
        *(int *)(this + 0x20) = iVar6;
        uVar3 = uStack_7;
        goto LAB_004a3fec;
      }
      if (param_1 == 3) {
        pbVar7 = (basic_string<> *)&param_3;
        if (0xf < in_stack_0000001c) {
          pbVar7 = param_3;
        }
        iVar6 = atoi((char *)pbVar7);
        *(undefined4 *)this = 3;
        *(int *)(this + 0x20) = iVar6;
        uVar3 = uStack_7;
        goto LAB_004a3fec;
      }
      if (param_1 == 4) {
        std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&param_3);
        splitStringBy();
        local_8 = 2;
        local_14 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          local_14 = *(MetaGameAction **)local_20[0];
        }
        uStack_48 = 0x4a3cef;
        std::transform<>();
        std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)local_20[0]);
        pGVar8 = GameData::getGoodWithShortName();
        uVar1 = *(undefined4 *)pGVar8;
        pbVar9 = (basic_string<> *)(local_20[0] + 0x18);
        if (0xf < *(uint *)(local_20[0] + 0x2c)) {
          pbVar9 = *(basic_string<> **)pbVar9;
        }
        iVar6 = atoi((char *)pbVar9);
        *(undefined4 *)this = 4;
        *(undefined4 *)(this + 0x1c) = uVar1;
        *(int *)(this + 0x20) = iVar6;
        std::vector<>::_Tidy((vector<> *)local_20);
        uVar3 = uStack_7;
        goto LAB_004a3fec;
      }
      if (param_1 == 5) {
        uStack_7 = uVar2;
        std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&param_3);
        splitStringBy();
        local_8 = 3;
        local_14 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          local_14 = *(MetaGameAction **)local_20[0];
        }
        uStack_48 = 0x4a3d96;
        std::transform<>();
        std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)local_20[0]);
        pGVar8 = GameData::getGoodWithShortName();
        uVar1 = *(undefined4 *)pGVar8;
        pbVar9 = (basic_string<> *)(local_20[0] + 0x18);
        if (0xf < *(uint *)(local_20[0] + 0x2c)) {
          pbVar9 = *(basic_string<> **)pbVar9;
        }
        iVar6 = atoi((char *)pbVar9);
        *(undefined4 *)this = 5;
        *(undefined4 *)(this + 0x1c) = uVar1;
        *(int *)(this + 0x20) = iVar6;
        std::vector<>::_Tidy((vector<> *)local_20);
        uVar3 = uStack_7;
        goto LAB_004a3fec;
      }
      if (param_1 == 6) {
        *(undefined4 *)this = 6;
      }
      else {
        uVar3 = uStack_7;
        if (param_1 == 0xd) {
          *(undefined4 *)this = 0xd;
          goto LAB_004a3fec;
        }
        if (param_1 == 7) {
          *(undefined4 *)this = 7;
        }
        else if (param_1 == 10) {
          *(undefined4 *)this = 10;
        }
        else if (param_1 == 0xe) {
          *(undefined4 *)this = 0xe;
        }
        else if (param_1 == 0xf) {
          *(undefined4 *)this = 0xf;
        }
        else {
          if (param_1 != 0x10) {
            if (param_1 == 0xc) {
              *(undefined4 *)this = 0xc;
              uStack_7 = uVar2;
              std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&param_3);
              splitStringBy();
              local_8 = 4;
              pMVar10 = local_20[0] + 0x18;
              if (0xf < *(uint *)(local_20[0] + 0x2c)) {
                pMVar10 = *(MetaGameAction **)pMVar10;
              }
              iVar6 = atoi((char *)pMVar10);
              *(int *)(this + 0x20) = iVar6;
              std::basic_string<>::operator=(pbVar7,(basic_string<> *)local_20[0]);
              uStack_48 = 0x4a3eaf;
              std::transform<>();
              local_14 = (MetaGameAction *)abStack_50;
              std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)pbVar7);
              local_8 = 5;
              pSVar11 = Singleton<Stats>::getInstance();
              local_8 = 4;
            }
            else {
              if (param_1 != 0xb) {
                if (param_1 == 0x11) {
                  *(undefined4 *)this = 0x11;
                }
                else if (param_1 == 0x12) {
                  *(undefined4 *)this = 0x12;
                }
                else if (param_1 == 0x13) {
                  *(undefined4 *)this = 0x13;
                }
                else {
                  if (param_1 != 0x14) goto LAB_004a3fec;
                  *(undefined4 *)this = 0x14;
                }
                goto LAB_004a3fe1;
              }
              *(undefined4 *)this = 0xb;
              uStack_7 = uVar2;
              std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)&param_3);
              splitStringBy();
              local_8 = 6;
              pMVar10 = local_20[0] + 0x18;
              if (0xf < *(uint *)(local_20[0] + 0x2c)) {
                pMVar10 = *(MetaGameAction **)pMVar10;
              }
              iVar6 = atoi((char *)pMVar10);
              *(int *)(this + 0x20) = iVar6;
              std::basic_string<>::operator=(pbVar7,(basic_string<> *)local_20[0]);
              uStack_48 = 0x4a3f4f;
              std::transform<>();
              local_14 = (MetaGameAction *)abStack_50;
              std::basic_string<>::basic_string<>(abStack_50,(basic_string<> *)pbVar7);
              local_8 = 7;
              pSVar11 = Singleton<Stats>::getInstance();
              local_8 = 6;
            }
            bVar4 = Stats::hasCustomStat(pSVar11);
            if (!bVar4) {
              uStack_48 = 0x4a3f8d;
              debugPrint("ERROR","Invalid stat \'%s\'");
              bVar4 = cc_assert_script_compatible("Invalid stat");
              if (!bVar4) {
                cocos2d::log("Assert failed: %s");
              }
            }
            std::vector<>::_Tidy((vector<> *)local_20);
            uVar3 = uStack_7;
            goto LAB_004a3fec;
          }
          *(undefined4 *)this = 0x10;
        }
      }
LAB_004a3fe1:
      uStack_7 = uVar2;
      std::basic_string<>::operator=(pbVar7,(basic_string<> *)&param_3);
      uVar3 = uStack_7;
      goto LAB_004a3fec;
    }
    *(undefined4 *)this = 9;
  }
  uVar3 = uVar2;
  if (pbVar7 != (basic_string<> *)&param_3) {
    pbVar5 = (basic_string<> *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar5 = param_3;
    }
    std::basic_string<>::assign(pbVar7,(char *)pbVar5,in_stack_00000018);
    uVar3 = uStack_7;
  }
LAB_004a3fec:
  uStack_7 = uVar3;
  if (0xf < in_stack_0000001c) {
    pnVar12 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar7 = param_3;
    if ((nothrow_t *)0xfff < pnVar12) {
      pbVar7 = *(basic_string<> **)(param_3 + -4);
      pnVar12 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((basic_string<> *)0x1f < param_3 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar7,pnVar12);
  }
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall MetaGameAction::perform(void)

void __thiscall MetaGameAction::perform(MetaGameAction *this)

{
  BankAccount *pBVar1;
  int *piVar2;
  CargoHold *pCVar3;
  GameData *pGVar4;
  GameData *pGVar5;
  bool bVar6;
  FlagManager *pFVar7;
  FictionData *pFVar8;
  Faction *this_00;
  WeaponClass *pWVar9;
  ShipComponent *pSVar10;
  undefined4 uVar11;
  int iVar12;
  Stats *pSVar13;
  float *pfVar14;
  TradeEngine *pTVar15;
  TradeLocation *pTVar16;
  Ship *pSVar17;
  int iVar18;
  Good *pGVar19;
  int extraout_ECX;
  int extraout_ECX_00;
  GameLogic *this_01;
  void *pvVar20;
  undefined4 *puVar21;
  nothrow_t *pnVar22;
  uint uVar23;
  MetaGameAction *pMVar24;
  uint unaff_EDI;
  int *piVar25;
  uint uVar26;
  basic_string<> local_a8 [12];
  undefined4 uStack_9c;
  basic_string<> local_90 [12];
  undefined4 uStack_84;
  void *local_4c [5];
  uint local_38;
  void *local_34 [5];
  uint local_20;
  ShipComponent *local_1c;
  MetaGameAction *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd3e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar12 = *(int *)this;
  pBVar1 = *(BankAccount **)(g_gameData + 0x124);
  if (iVar12 == 0) {
    local_1c = (ShipComponent *)&stack0xffffff88;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff88,(basic_string<> *)(this + 4));
    local_8 = 0;
    pFVar7 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar7);
    debugPrint("GAME","Set flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  if (iVar12 == 1) {
    local_1c = (ShipComponent *)&stack0xffffff88;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff88,(basic_string<> *)(this + 4));
    local_8 = 1;
    pFVar7 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar7);
    debugPrint("GAME","Unset flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  if (iVar12 == 2) {
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff8c,"Transfer",8);
    BankAccount::addTransaction(pBVar1);
    debugPrint("GAME","Gave %d credits to player.");
    ExceptionList = local_10;
    return;
  }
  if (iVar12 == 9) {
    std::transform<>();
    local_1c = (ShipComponent *)&stack0xffffff8c;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)(this + 4));
    local_8 = 2;
    pFVar8 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    this_00 = FictionData::getFactionForID(pFVar8);
    if (this_00 == (Faction *)0x0) {
      debugPrint("WORLD","Invalid faction \'%s\'");
      bVar6 = cc_assert_script_compatible("Invalid faction.");
      if (!bVar6) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      Faction::getAccess(this_00);
      debugPrint("GAME","Gave player license for faction %s");
      Singleton<>::getInstance();
      local_1c = *(ShipComponent **)(g_gameData + 0x40);
      local_14 = *(int **)(g_gameData + 0x3c);
      if ((ShipComponent *)local_14 != local_1c) {
        do {
          uVar23 = 0;
          piVar25 = *(int **)(*local_14 + 0xcc);
          piVar2 = *(int **)(*local_14 + 0xd0);
          local_18 = (MetaGameAction *)((uint)((int)piVar2 + (3 - (int)piVar25)) >> 2);
          if (piVar2 < piVar25) {
            local_18 = (MetaGameAction *)0x0;
          }
          if (local_18 != (MetaGameAction *)0x0) {
            do {
              bVar6 = false;
              iVar12 = *(int *)(*piVar25 + 0x254);
              if (iVar12 != 0) {
                bVar6 = *(int *)(iVar12 + 0x158) == 1;
              }
              if ((bVar6) &&
                 (pTVar16 = *(TradeLocation **)(*piVar25 + 0x398), pTVar16 != (TradeLocation *)0x0))
              {
                TradeLocation::clearContracts(pTVar16);
                TradeLocation::populateContracts(pTVar16);
                TradeLocation::restockWithContracts(pTVar16);
              }
              uVar23 = uVar23 + 1;
              piVar25 = piVar25 + 1;
            } while ((MetaGameAction *)uVar23 != local_18);
          }
          local_14 = local_14 + 1;
        } while ((ShipComponent *)local_14 != local_1c);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (iVar12 == 3) {
    if (*(int *)(this + 0x20) <= *(int *)(pBVar1 + 0x1c)) {
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff8c,"Transfer",8);
      BankAccount::addTransaction(pBVar1);
      debugPrint("GAME","Took %d credits from player.");
      ExceptionList = local_10;
      return;
    }
  }
  else if (iVar12 == 6) {
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) != 0) {
      iVar12 = -1;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff88,(basic_string<> *)(this + 4));
      pWVar9 = GameData::getWeaponClassWithIdentifier();
      Ship::addWeapon(*(Ship **)(g_gameData + 0xd0),pWVar9,iVar12);
      ExceptionList = local_10;
      return;
    }
  }
  else if (iVar12 == 7) {
    iVar12 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    iVar18 = *(int *)(iVar12 + 0x48) - *(int *)(iVar12 + 0x44) >> 2;
    if (*(int *)(iVar12 + 4) != iVar18 && -1 < *(int *)(iVar12 + 4) - iVar18) {
      pSVar10 = operator_new(8);
      local_18 = this + 4;
      pMVar24 = local_18;
      if (0xf < *(uint *)(this + 0x18)) {
        pMVar24 = *(MetaGameAction **)local_18;
      }
      local_1c = pSVar10;
      local_1c = (ShipComponent *)atoi((char *)pMVar24);
      pGVar4 = g_gameData;
      uVar23 = 0;
      *(undefined4 *)pSVar10 = 0x42c80000;
      pGVar5 = g_gameData;
      uVar26 = *(int *)(pGVar4 + 4) - *(int *)pGVar4 >> 2;
      if (uVar26 != 0) {
        local_14 = *(int **)pGVar4;
        puVar21 = local_14;
        do {
          if ((ShipComponent *)*(int *)*puVar21 == local_1c) {
            uVar11 = local_14[uVar23];
            goto LAB_004a445e;
          }
          uVar23 = uVar23 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar23 < uVar26);
      }
      uVar11 = 0;
LAB_004a445e:
      *(undefined4 *)(pSVar10 + 4) = uVar11;
      CargoHold::addComponent(*(CargoHold **)(*(int *)(pGVar5 + 0xd0) + 0x1f8),pSVar10);
      debugPrint("GAME","gave player component of type \'%s\'");
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar12 == 8) {
      pMVar24 = this + 4;
      if (0xf < *(uint *)(this + 0x18)) {
        pMVar24 = *(MetaGameAction **)pMVar24;
      }
      iVar12 = atoi((char *)pMVar24);
      pCVar3 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
      bVar6 = CargoHold::hasComponent(pCVar3,iVar12);
      if (bVar6) {
        CargoHold::removeComponent(pCVar3,*(ShipComponent **)(*(int *)(pCVar3 + 0x44) + iVar12 * 4))
        ;
        debugPrint("GAME","took component of type \'%d\' from player");
        ExceptionList = local_10;
        return;
      }
      debugPrint("GAME","couldn\'t take component type \'%d\' from player as they don\'t have it");
      ExceptionList = local_10;
      return;
    }
    if (iVar12 == 4) {
      uVar23 = 0;
      puVar21 = *(undefined4 **)(g_gameData + 0x84);
      uVar26 = *(int *)(g_gameData + 0x88) - (int)puVar21 >> 2;
      if (uVar26 != 0) {
        do {
          if (*(int *)*puVar21 == *(int *)(this + 0x1c)) {
            pGVar19 = *(Good **)(*(int *)(g_gameData + 0x84) + uVar23 * 4);
            goto LAB_004a457c;
          }
          uVar23 = uVar23 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar23 < uVar26);
      }
      pGVar19 = (Good *)0x0;
LAB_004a457c:
      iVar12 = *(int *)(this + 0x20);
      pCVar3 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
      iVar18 = CargoHold::amountCanHold(pCVar3,pGVar19);
      if (iVar12 <= iVar18) {
        CargoHold::addToHold(pCVar3,*(int *)(this + 0x1c),iVar12,extraout_ECX);
        debugPrint("GAME","Added %dx cargo of type \'%d\' to player hold");
        ExceptionList = local_10;
        return;
      }
      debugPrint("GAME","WARNING: couldn\'t add %dx cargo of type \'%d\' to player hold");
      ExceptionList = local_10;
      return;
    }
    if (iVar12 == 5) {
      CargoHold::removeFromHold
                (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)(this + 0x1c),
                 *(int *)(this + 0x20),(int)this);
      debugPrint("GAME","Removed %dx cargo of type \'%d\' from player hold");
      ExceptionList = local_10;
      return;
    }
    if (iVar12 == 0xc) {
      local_18 = (MetaGameAction *)&stack0xffffff8c;
      local_1c = (ShipComponent *)(float)*(int *)(this + 0x20);
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)(this + 4));
      local_8 = 3;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::setCustomStat(pSVar13);
      debugPrint("GAME","Set stat %s to %d.");
      ExceptionList = local_10;
      return;
    }
    if (iVar12 == 0xb) {
      local_1c = (ShipComponent *)(float)*(int *)(this + 0x20);
      std::basic_string<>::basic_string<>((basic_string<> *)local_34,(basic_string<> *)(this + 4));
      local_8 = 4;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 5;
      pfVar14 = std::map<>::operator[]((map<> *)(pSVar13 + 0x38),(basic_string<> *)local_34);
      local_8 = 0xffffffff;
      *pfVar14 = *pfVar14 + (float)local_1c;
      if (0xf < local_20) {
        pnVar22 = (nothrow_t *)(local_20 + 1);
        pvVar20 = local_34[0];
        if ((nothrow_t *)0xfff < pnVar22) {
          pvVar20 = *(void **)((int)local_34[0] + -4);
          pnVar22 = (nothrow_t *)(local_20 + 0x24);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar20))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar20,pnVar22);
      }
      local_1c = (ShipComponent *)&stack0xffffff8c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)(this + 4));
      local_8 = 6;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::getCustomStat(pSVar13);
      debugPrint("GAME","Changed stat %s by %d, amount now %d.");
      ExceptionList = local_10;
      return;
    }
    if (iVar12 == 0xd) {
      bVar6 = Ship::isDocked(*(Ship **)(g_gameData + 0xd0));
      if ((bVar6) && (*(int *)(extraout_ECX_00 + 0x178) != 0)) {
        local_1c = (ShipComponent *)&stack0xffffff8c;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff8c,
                   (basic_string<> *)(*(int *)(extraout_ECX_00 + 0x178) + 0x238));
        local_8 = 7;
        pTVar15 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        pTVar16 = TradeEngine::getTradeLocation(pTVar15);
        if (pTVar16 != (TradeLocation *)0x0) {
          TradeLocation::resetContracts(pTVar16);
        }
      }
      debugPrint("GAME","Reset contracts.");
    }
    else if (iVar12 == 0xe) {
      local_1c = (ShipComponent *)&stack0xffffff8c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff8c,"quests_accepted",0xf);
      local_8 = 8;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::addStat(pSVar13);
      local_1c = (ShipComponent *)&stack0xffffff88;
      uStack_84 = 0x4a4887;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff88,"",0);
      local_18 = (MetaGameAction *)local_90;
      local_8 = 9;
      local_90[0] = (basic_string<>)0x0;
      uStack_9c = 0x4a48b3;
      std::basic_string<>::assign(local_90,"quests_accepted",0xf);
      local_8 = CONCAT31(local_8._1_3_,10);
      local_a8[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_a8,"play",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
      debugPrint("GAME","Begun a quest.");
    }
    else if (iVar12 == 0xf) {
      local_1c = (ShipComponent *)&stack0xffffff8c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff8c,"quests_completed",0x10);
      local_8 = 0xb;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::addStat(pSVar13);
      local_1c = (ShipComponent *)&stack0xffffff88;
      uStack_84 = 0x4a4968;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff88,"",0);
      local_18 = (MetaGameAction *)local_90;
      local_8 = 0xc;
      local_90[0] = (basic_string<>)0x0;
      uStack_9c = 0x4a4994;
      std::basic_string<>::assign(local_90,"quests_completed",0x10);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      local_a8[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_a8,"play",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
      debugPrint("GAME","Completed a quest.");
    }
    else if (iVar12 == 0x10) {
      local_1c = (ShipComponent *)&stack0xffffff8c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff8c,"quests_failed",0xd);
      local_8 = 0xe;
      pSVar13 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::addStat(pSVar13);
      local_1c = (ShipComponent *)&stack0xffffff88;
      uStack_84 = 0x4a4a4d;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff88,"",0);
      local_18 = (MetaGameAction *)local_90;
      local_8 = 0xf;
      local_90[0] = (basic_string<>)0x0;
      uStack_9c = 0x4a4a79;
      std::basic_string<>::assign(local_90,"quests_failed",0xd);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      local_a8[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_a8,"play",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
      debugPrint("GAME","Failed a quest.");
    }
    else {
      if (iVar12 == 0x11) {
        pMVar24 = this + 4;
        if (0xf < *(uint *)(this + 0x18)) {
          pMVar24 = *(MetaGameAction **)pMVar24;
        }
        atoi((char *)pMVar24);
        rand();
        (**(code **)(**(int **)(g_gameData + 0xd0) + 0xc))();
        debugPrint("GAME","Damaged Player Ship with %d physical damage.");
        ExceptionList = local_10;
        return;
      }
      if (iVar12 == 0x12) {
        bVar6 = std::_Traits_equal<>
                          ("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
        if (bVar6) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)(this + 4));
          GameLogic::reportPirate();
          ExceptionList = local_10;
          return;
        }
      }
      else if (iVar12 == 0x13) {
        bVar6 = std::_Traits_equal<>
                          ("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
        if (!bVar6) {
          GameLogic::reportSmuggler(this_01);
          ExceptionList = local_10;
          return;
        }
      }
      else if (iVar12 == 0x14) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_4c,(basic_string<> *)(this + 4))
        ;
        local_8 = 0x11;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)local_4c);
        pSVar17 = Sector::getShip(*(Sector **)(*(int *)(g_gameData + 0xd0) + 0x24));
        (**(code **)**(undefined4 **)(pSVar17 + 0x44))();
        if (0xf < local_38) {
          pnVar22 = (nothrow_t *)(local_38 + 1);
          pvVar20 = local_4c[0];
          if ((nothrow_t *)0xfff < pnVar22) {
            pvVar20 = *(void **)((int)local_4c[0] + -4);
            pnVar22 = (nothrow_t *)(local_38 + 0x24);
            if (0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar20))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar20,pnVar22);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}
