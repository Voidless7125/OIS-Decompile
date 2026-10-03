#include "../ois.exe.h"


// public: void __thiscall FlagManager::setFlag(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool)

void __thiscall FlagManager::setFlag(FlagManager *this,char *param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  bool *pbVar5;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_00;
  GameLogic *this_01;
  char *pcVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  int iVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char in_stack_0000001c;
  basic_string<> abStack_48 [8];
  undefined4 uStack_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar7 = in_stack_00000018;
  pcVar6 = param_2;
  puStack_c = &DAT_005b4e48;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
  if (bVar1) goto LAB_004a1227;
  if (*(int *)(g_gameData + 0xcc) != 0) {
    if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x164) == '\0') {
      if ((in_stack_0000001c != '\x01') ||
         (bVar1 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI), bVar1)) {
LAB_004a10ed:
        if ((in_stack_0000001c == '\x01') &&
           (bVar1 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI), !bVar1)) {
          pcVar4 = (char *)&param_2;
          if (0xf < uVar7) {
            pcVar4 = pcVar6;
          }
          bVar1 = std::_Traits_equal<>(pcVar4,in_stack_00000014,pcVar3,unaff_EDI);
          if (bVar1) {
            bVar1 = false;
            this_00 = extraout_ECX_00;
            goto LAB_004a114c;
          }
        }
      }
      else {
        pcVar4 = (char *)&param_2;
        if (0xf < uVar7) {
          pcVar4 = pcVar6;
        }
        bVar1 = std::_Traits_equal<>(pcVar4,in_stack_00000014,pcVar3,unaff_EDI);
        if (!bVar1) goto LAB_004a10ed;
        bVar1 = true;
        this_00 = extraout_ECX;
LAB_004a114c:
        GameLogic::completeSingleplayerScenario(this_00,bVar1);
        pcVar6 = param_2;
      }
    }
    if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x164) == '\0') {
      iVar9 = 0;
      do {
        pcVar4 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar4 = pcVar6;
        }
        bVar1 = std::_Traits_equal<>(pcVar4,in_stack_00000014,pcVar3,unaff_EDI);
        if (bVar1) {
          if (iVar9 != -1) {
            uStack_40 = 0x4a11b7;
            debugPrint("GAME","Team %d won.");
            GameLogic::completeMultiplayerScenario(this_01,iVar9);
          }
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
    }
  }
  bVar1 = (bool)in_stack_0000001c;
  if ((bool)in_stack_0000001c == true) {
    std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)&param_2);
    GameLogic::removeShipOnSettingFlag();
    bVar2 = std::_Traits_equal<>("PASSENGER_FLAG",0xe,pcVar3,unaff_EDI);
    if ((bVar2) && (*(PassengerInstance **)(g_gameData + 0x128) != (PassengerInstance *)0x0)) {
      PassengerInstance::leaveAngry(*(PassengerInstance **)(g_gameData + 0x128));
    }
  }
  pbVar5 = std::map<>::operator[]((map<> *)(this + 0xc),(basic_string<> *)&param_2);
  *pbVar5 = bVar1;
  pcVar6 = param_2;
  uVar7 = in_stack_00000018;
LAB_004a1227:
  if (0xf < uVar7) {
    pnVar8 = (nothrow_t *)(uVar7 + 1);
    pcVar3 = pcVar6;
    if ((nothrow_t *)0xfff < pnVar8) {
      pcVar3 = *(char **)(pcVar6 + -4);
      pnVar8 = (nothrow_t *)(uVar7 + 0x24);
      if ((char *)0x1f < pcVar6 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall FlagManager::flagSet(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall FlagManager::flagSet(FlagManager *this,void *param_2)

{
  bool *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  undefined1 uVar4;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = std::map<>::operator[]((map<> *)(this + 0xc),(basic_string<> *)&param_2);
  if (*pbVar1 == false) {
    uVar4 = 0;
  }
  else {
    pbVar1 = std::map<>::operator[]((map<> *)(this + 0xc),(basic_string<> *)&param_2);
    uVar4 = *pbVar1;
  }
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return (bool)uVar4;
}


// public: void __thiscall FlagManager::reset(void)

void __thiscall FlagManager::reset(FlagManager *this)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(this + 0xc);
  std::_Tree<>::_Erase((_Tree<> *)(this + 0xc),*(_Tree_node<> **)(iVar1 + 4));
  uVar6 = 0;
  *(int *)(*(int *)(this + 0xc) + 4) = iVar1;
  **(int **)(this + 0xc) = iVar1;
  *(int *)(*(int *)(this + 0xc) + 8) = iVar1;
  *(undefined4 *)(this + 0x10) = 0;
  puVar5 = *(undefined4 **)this;
  uVar7 = (*(int *)(this + 4) - (int)puVar5) + 3U >> 2;
  if (*(undefined4 **)(this + 4) < puVar5) {
    uVar7 = 0;
  }
  if (uVar7 != 0) {
    do {
      puVar2 = (undefined2 *)*puVar5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
      *puVar2 = 0;
      *(undefined1 **)(puVar2 + 0x10) = &DAT_bf800000;
    } while (uVar6 != uVar7);
  }
  piVar3 = *(int **)(g_gameData + 100);
  for (piVar8 = *(int **)(g_gameData + 0x60); piVar8 != piVar3; piVar8 = piVar8 + 1) {
    uVar6 = 0;
    puVar5 = *(undefined4 **)(*piVar8 + 0x3dc);
    puVar4 = *(undefined4 **)(*piVar8 + 0x3e0);
    uVar7 = (uint)((int)puVar4 + (3 - (int)puVar5)) >> 2;
    if (puVar4 < puVar5) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      do {
        puVar2 = (undefined2 *)*puVar5;
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
        *puVar2 = 0;
        *(undefined1 **)(puVar2 + 0x10) = &DAT_bf800000;
      } while (uVar6 != uVar7);
    }
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling
// public: void __thiscall FlagManager::runFlagLogic(float,class FlagTimeToSet *)

void __thiscall FlagManager::runFlagLogic(FlagManager *this,float param_1,FlagTimeToSet *param_2)

{
  undefined8 uVar1;
  basic_string<> *pbVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  FlagManager *pFVar7;
  char *******pppppppcVar8;
  int iVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  basic_string<> *pbVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float in_XMM1_Da;
  char *pcStack_bc;
  uint local_8c;
  void *local_84 [5];
  uint local_70;
  char *******local_6c [5];
  uint local_58;
  void *local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_44;
  char *******local_3c [4];
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &DAT_005bd198;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar1 = local_44;
  puVar3 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 1) != '\0') goto LAB_004a1a3e;
  pbVar2 = *(basic_string<> **)((int)param_1 + 0x4c);
  pbVar12 = *(basic_string<> **)((int)param_1 + 0x48);
  bVar6 = true;
  puVar3 = &stack0xfffffffc;
  if (pbVar12 != pbVar2) {
    do {
      puStack_20 = puVar3;
      std::basic_string<>::basic_string<>((basic_string<> *)local_3c,pbVar12);
      local_14 = 0;
      if (local_2c != 0) {
        pppppppcVar8 = (char *******)local_3c;
        if (0xf < local_28) {
          pppppppcVar8 = local_3c[0];
        }
        if (*(char *)pppppppcVar8 == '!') {
          bVar6 = false;
        }
        else {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&pcStack_bc,(basic_string<> *)local_3c);
          local_14._0_1_ = 1;
          pFVar7 = Singleton<>::getInstance();
          local_14 = (uint)local_14._1_3_ << 8;
          bVar5 = flagSet(pFVar7);
          if (!bVar5) {
            bVar6 = false;
          }
        }
      }
      local_14._1_3_ = 0xffffff;
      local_14._0_1_ = 0xff;
      if (0xf < local_28) {
        local_14._0_1_ = 0xff;
        local_14._1_3_ = 0xffffff;
        pnVar11 = (nothrow_t *)(local_28 + 1);
        pppppppcVar8 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pppppppcVar8 = (char *******)local_3c[0][-1];
          pnVar11 = (nothrow_t *)(local_28 + 0x24);
          uVar4 = (undefined1)local_14;
          if ((char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar8)))
          goto LAB_004a1650;
        }
        operator_delete(pppppppcVar8,pnVar11);
      }
      pbVar12 = pbVar12 + 0x18;
      puVar3 = puStack_20;
    } while (pbVar12 != pbVar2);
    if (!bVar6) {
      uVar13 = 0;
      iVar14 = *(int *)((int)param_1 + 0x3c);
      if (*(int *)((int)param_1 + 0x40) - iVar14 >> 2 != 0) {
        do {
          bVar6 = Requirement::checkReq
                            (*(Requirement **)(iVar14 + uVar13 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          uVar1 = local_44;
          puVar3 = puStack_20;
          if (!bVar6) goto LAB_004a1a3e;
          uVar13 = uVar13 + 1;
          iVar14 = *(int *)((int)param_1 + 0x3c);
        } while (uVar13 < (uint)(*(int *)((int)param_1 + 0x40) - iVar14 >> 2));
      }
      puVar3 = puStack_20;
      if (*(float *)((int)param_1 + 0x20) < 0.0) {
        iVar14 = *(int *)((int)param_1 + 0x18);
        if (((((iVar14 != 0) || (*(int *)((int)param_1 + 0x14) != 0)) ||
             (*(int *)((int)param_1 + 0x10) != 0)) ||
            ((*(int *)((int)param_1 + 0xc) != 0 || (*(int *)((int)param_1 + 8) != 0)))) ||
           (*(float *)((int)param_1 + 4) != 0.0)) {
          local_54 = *(void **)(g_gameLogic + 0x17c);
          iStack_50 = *(int *)(g_gameLogic + 0x180);
          iStack_4c = *(int *)(g_gameLogic + 0x184);
          iStack_48 = *(int *)(g_gameLogic + 0x188);
          uVar1 = *(undefined8 *)(g_gameLogic + 0x18c);
          local_44._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
          if ((int)local_44._4_4_ < iVar14) goto LAB_004a1a3e;
          bVar6 = (int)local_44._4_4_ <= iVar14;
          local_44 = uVar1;
          if (bVar6) {
            local_44._0_4_ = (int)uVar1;
            if (((int)local_44 < *(int *)((int)param_1 + 0x14)) ||
               ((bVar6 = (int)local_44 <= *(int *)((int)param_1 + 0x14), bVar6 &&
                ((iStack_48 < *(int *)((int)param_1 + 0x10) ||
                 ((iStack_48 <= *(int *)((int)param_1 + 0x10) &&
                  ((iStack_4c < *(int *)((int)param_1 + 0xc) ||
                   ((iStack_4c <= *(int *)((int)param_1 + 0xc) &&
                    (iStack_50 < *(int *)((int)param_1 + 8))))))))))))) goto LAB_004a1a3e;
          }
        }
        uVar1 = local_44;
        if (*(char *)param_1 != '\0') goto LAB_004a1a3e;
        if (0.0 < *(float *)((int)param_1 + 0x1c)) {
          *(float *)((int)param_1 + 0x20) = *(float *)((int)param_1 + 0x1c) * 60.0 * 60.0;
          pcStack_bc = (char *)0x4a17c0;
          debugPrint("WORLD","Counting down %.2f hours in-game before firing \'%s\'");
          *(undefined1 *)param_1 = 1;
          uVar1 = local_44;
          puVar3 = puStack_20;
          goto LAB_004a1a3e;
        }
        *(undefined1 **)((int)param_1 + 0x20) = &DAT_bf800000;
        pbVar2 = *(basic_string<> **)((int)param_1 + 0x4c);
        for (pbVar12 = *(basic_string<> **)((int)param_1 + 0x48); pbVar12 != pbVar2;
            pbVar12 = pbVar12 + 0x18) {
          std::basic_string<>::basic_string<>((basic_string<> *)local_6c,pbVar12);
          local_14 = 3;
          pppppppcVar8 = (char *******)local_6c;
          if (0xf < local_58) {
            pppppppcVar8 = local_6c[0];
          }
          if (*(char *)pppppppcVar8 == '!') {
            std::basic_string<>::substr((basic_string<> *)local_6c,(uint)local_3c,1);
            local_14._0_1_ = 4;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffff40,(basic_string<> *)local_3c);
            setFlag(this);
            debugPrint("WORLD"," - \'%s\' unset");
            pcStack_bc = "%02d-%02d-%02d %d:%d";
            strUsingArgs((char *)local_84);
            local_14._0_1_ = 5;
            debugPrint("WORLD","Flag \'%s\' unset as date/time %s has passed.");
            local_14._0_1_ = 4;
            uVar4 = (undefined1)local_14;
            local_14._0_1_ = 4;
            if (0xf < local_70) {
              pnVar11 = (nothrow_t *)(local_70 + 1);
              pvVar10 = local_84[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_84[0] + -4);
                pnVar11 = (nothrow_t *)(local_70 + 0x24);
                if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar10))) goto LAB_004a1650;
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_14._0_1_ = 3;
            if (0xf < local_28) {
              pnVar11 = (nothrow_t *)(local_28 + 1);
              pppppppcVar8 = local_3c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppcVar8 = (char *******)local_3c[0][-1];
                pnVar11 = (nothrow_t *)(local_28 + 0x24);
                uVar4 = (undefined1)local_14;
                if ((char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar8)))
                goto LAB_004a1650;
              }
              operator_delete(pppppppcVar8,pnVar11);
            }
          }
          else {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffff40,(basic_string<> *)local_6c);
            setFlag(this);
            debugPrint("WORLD"," - \'%s\' set");
            pcStack_bc = "%02d-%02d-%02d %d:%d";
            strUsingArgs((char *)&local_54);
            local_14._0_1_ = 6;
            debugPrint("WORLD","Flag \'%s\' set as date/time %s has passed.");
            local_14._0_1_ = 3;
            if (0xf < local_44._4_4_) {
              pnVar11 = (nothrow_t *)(local_44._4_4_ + 1);
              pvVar10 = local_54;
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_54 + -4);
                pnVar11 = (nothrow_t *)(local_44._4_4_ + 0x24);
                uVar4 = (undefined1)local_14;
                if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10))) goto LAB_004a1650;
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_44 = 0xf00000000;
            local_54 = (void *)((uint)local_54 & 0xffffff00);
          }
          local_14._0_1_ = 0xff;
          local_14._1_3_ = 0xffffff;
          if (0xf < local_58) {
            pnVar11 = (nothrow_t *)(local_58 + 1);
            pppppppcVar8 = local_6c[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pppppppcVar8 = (char *******)local_6c[0][-1];
              pnVar11 = (nothrow_t *)(local_58 + 0x24);
              uVar4 = (undefined1)local_14;
              if ((char *)0x1f < (char *)((int)local_6c[0] + (-4 - (int)pppppppcVar8)))
              goto LAB_004a1650;
            }
            operator_delete(pppppppcVar8,pnVar11);
          }
        }
      }
      else {
        fVar15 = *(float *)((int)param_1 + 0x20) - in_XMM1_Da * 24.0;
        *(float *)((int)param_1 + 0x20) = fVar15;
        uVar1 = local_44;
        if (0.0 < fVar15) goto LAB_004a1a3e;
        *(undefined1 **)((int)param_1 + 0x20) = &DAT_bf800000;
        pcStack_bc = "%02d-%02d-%02d %d:%d";
        strUsingArgs((char *)local_3c);
        local_14 = 2;
        pcStack_bc = (char *)0x4a1620;
        debugPrint("WORLD","Flags firing as date/time %s AND a delay of %.1f hours has passed.");
        local_14._0_1_ = 0xff;
        local_14._1_3_ = 0xffffff;
        if (0xf < local_28) {
          pnVar11 = (nothrow_t *)(local_28 + 1);
          pppppppcVar8 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pppppppcVar8 = (char *******)local_3c[0][-1];
            pnVar11 = (nothrow_t *)(local_28 + 0x24);
            uVar4 = (undefined1)local_14;
            if ((char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar8))) {
LAB_004a1650:
              local_14._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pppppppcVar8,pnVar11);
        }
        local_8c = 0;
        iVar9 = *(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x48);
        iVar14 = iVar9 >> 0x1f;
        if (iVar9 / 0x18 + iVar14 != iVar14) {
          iVar14 = 0;
          do {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffff40,
                       (basic_string<> *)(*(int *)((int)param_1 + 0x48) + iVar14));
            setFlag(this);
            debugPrint("WORLD"," - \'%s\' set");
            local_8c = local_8c + 1;
            iVar14 = iVar14 + 0x18;
          } while (local_8c <
                   (uint)((*(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x48)) / 0x18));
        }
      }
    }
  }
  *(undefined1 *)((int)param_1 + 1) = 1;
  uVar1 = local_44;
  puVar3 = puStack_20;
LAB_004a1a3e:
  puStack_20 = puVar3;
  local_44 = uVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall FlagManager::runLogic(float)

void __thiscall FlagManager::runLogic(FlagManager *this,float param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  FlagTimeToSet *unaff_EDI;
  uint uVar4;
  
  pfVar3 = *(float **)this;
  uVar2 = (*(int *)(this + 4) - (int)pfVar3) + 3U >> 2;
  uVar4 = 0;
  if (*(float **)(this + 4) < pfVar3) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      runFlagLogic(this,*pfVar3,unaff_EDI);
      pfVar3 = pfVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  iVar1 = *(int *)(g_gameData + 0xcc);
  if (iVar1 != 0) {
    pfVar3 = *(float **)(iVar1 + 0x3dc);
    uVar4 = 0;
    uVar2 = (uint)((int)*(float **)(iVar1 + 0x3e0) + (3 - (int)pfVar3)) >> 2;
    if (*(float **)(iVar1 + 0x3e0) < pfVar3) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      do {
        runFlagLogic(this,*pfVar3,unaff_EDI);
        pfVar3 = pfVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
  }
  return;
}


// public: class FlagTimeToSet * __thiscall FlagManager::addFlagToSet(void)

FlagTimeToSet * __thiscall FlagManager::addFlagToSet(FlagManager *this)

{
  AnimationFrames **ppAVar1;
  FlagManager *local_8;
  
  local_8 = this;
  local_8 = operator_new(0x54);
  local_8 = (FlagManager *)FlagTimeToSet::FlagTimeToSet((FlagTimeToSet *)local_8);
  ppAVar1 = *(AnimationFrames ***)(this + 4);
  if (*(AnimationFrames ***)(this + 8) != ppAVar1) {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
    return (FlagTimeToSet *)local_8;
  }
  std::vector<>::_Emplace_reallocate<>((vector<> *)this,ppAVar1,(AnimationFrames **)&local_8);
  return (FlagTimeToSet *)local_8;
}
