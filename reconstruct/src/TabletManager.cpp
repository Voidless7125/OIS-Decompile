// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall TabletManager::getTabletSummary(TabletManager *this)
void TabletManager::getTabletSummary()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  Ship *pSVar6;
  Ship *pSVar7;
  int *piVar8;
  SaveHandler *pSVar9;
  SaveHandler *pSVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  void *pvVar14;
  nothrow_t *pnVar15;
  uint unaff_ESI;
  std::string *in_stack_00000004;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005c95c9;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  puVar4 = (undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x238);
  if (0xf < *(uint *)(*(int *)(g_gameData + 0xd0) + 0x24c)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  puVar12 = (undefined4 *)(*(int *)(g_gameData + 0x124) + 4);
  if (0xf < *(uint *)(*(int *)(g_gameData + 0x124) + 0x18)) {
    puVar12 = (undefined4 *)*puVar12;
  }
  local_14 = pcVar3;
  pcVar5 = (char *)strUsingArgs((char *)local_44,"`3  Sync: `!%s`3@`!%s\n",puVar12,puVar4);
  // [seh] local_8 = 1;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pnVar15 = (nothrow_t *)(local_30 + 1);
    pvVar14 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_44[0] + -4);
      pnVar15 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  pSVar7 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar7 = *(Ship **)(g_gameData + 0xd0);
  }
  pSVar6 = pSVar7 + 8;
  if (0xf < *(uint *)(pSVar7 + 0x1c)) {
    pSVar6 = *(Ship **)pSVar6;
  }
  pcVar5 = (char *)strUsingArgs((char *)local_2c,"`3    on: `!%s\n",pSVar6);
  // [seh] local_8 = 2;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar14 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_2c[0] + -4);
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pSVar7 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar7 = *(Ship **)(g_gameData + 0xd0);
  }
  pSVar6 = pSVar7 + 0x238;
  if (0xf < *(uint *)(pSVar7 + 0x24c)) {
    pSVar6 = *(Ship **)pSVar6;
  }
  pcVar5 = (char *)strUsingArgs((char *)local_44,"`3        `!%s\n",pSVar6);
  // [seh] local_8 = 3;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pnVar15 = (nothrow_t *)(local_30 + 1);
    pvVar14 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_44[0] + -4);
      pnVar15 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  pSVar7 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar7 = *(Ship **)(g_gameData + 0xd0);
  }
  piVar8 = *(int **)(pSVar7 + 0x254);
  if (0xf < (uint)piVar8[5]) {
    piVar8 = (int *)*piVar8;
  }
  pcVar5 = (char *)strUsingArgs((char *)local_2c,"`3        `!%s\n",piVar8);
  // [seh] local_8 = 4;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar14 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_2c[0] + -4);
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  ghidra::str::append(in_stack_00000004,"\n",1);
  uVar13 = 0x38;
  if (0 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
    uVar13 = 0x24;
  }
  pcVar5 = (char *)strUsingArgs((char *)local_2c,"`3Credit: `%c%d`$c\n",uVar13,
                                *(int *)(*(int *)(g_gameData + 0x124) + 0x1c));
  // [seh] local_8 = 5;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar14 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_2c[0] + -4);
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar5 = (char *)strUsingArgs((char *)local_2c,"`3Acc No: `!%d\n",
                                **(undefined4 **)(g_gameData + 0x124));
  // [seh] local_8 = 6;
  pcVar11 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar11 = *(char **)pcVar5;
  }
  ghidra::str::append(in_stack_00000004,pcVar11,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar14 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_2c[0] + -4);
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
    ghidra::any_singleton();
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_ESI);
    if (!bVar2) {
      pSVar9 = ghidra::any_singleton();
      pSVar10 = pSVar9 + 0x14;
      if (0xf < *(uint *)(pSVar9 + 0x28)) {
        pSVar10 = *(SaveHandler **)pSVar10;
      }
      pcVar11 = (char *)strUsingArgs((char *)local_44,"\n`!Last save was aboard `%%%s",pSVar10);
      // [seh] local_8 = 7;
      pcVar3 = pcVar11;
      if (0xf < *(uint *)(pcVar11 + 0x14)) {
        pcVar3 = *(char **)pcVar11;
      }
      ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar11 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_30) {
        pnVar15 = (nothrow_t *)(local_30 + 1);
        pvVar14 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar14 = *(void **)((int)local_44[0] + -4);
          pnVar15 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar15);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
  }
  if (g_gameLogic[0x72] == (byte)0x0) {
    if ((g_gameLogic[0x71] != (byte)0x0) &&
       (iVar1 = *(int *)(g_gameData + 0xcc), *(int *)(iVar1 + 0x70) == 4)) {
      uVar13 = 0x33;
      if (*(int *)(iVar1 + 0x3a8) == 0) {
        uVar13 = 0x21;
      }
      pcVar11 = (char *)strUsingArgs((char *)local_2c,"\n\n`!Pirates remaining: `%c%d`3/`!%d\n",
                                     uVar13,*(int *)(iVar1 + 0x3a8),*(undefined4 *)(iVar1 + 0x39c));
      // [seh] local_8 = 8;
      pcVar3 = pcVar11;
      if (0xf < *(uint *)(pcVar11 + 0x14)) {
        pcVar3 = *(char **)pcVar11;
      }
      ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar11 + 0x10));
      if (0xf < local_18) {
        pnVar15 = (nothrow_t *)(local_18 + 1);
        pvVar14 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar14 = *(void **)((int)local_2c[0] + -4);
          pnVar15 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar15);
      }
    }
  }
  else {
    ghidra::str::append
              (in_stack_00000004,
               "\n\n*Hit \'`!~`%\' (`!tilde`%) to switch between tabs*\n\n*`!<`% and `!>`% = alter game speed*\n*`!TAB`% = toggle your PDA*\n*`!Space`% = find ship (nav map)*\n*`!Shift+click`% = multi waypoints*"
               ,0xba);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TabletManager::getNotes(TabletManager *this)
void TabletManager::getNotes()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 *puVar4;
  nothrow_t *pnVar5;
  Sector *pSVar6;
  std::string *in_stack_00000004;
  std::string abStack_74 [8];
  undefined4 uStack_6c;
  char *pcVar7;
  uint uVar8;
  int local_48;
  int local_44;
  undefined4 local_3c;
  ShipClass *local_34;
  Sector *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005c9671;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  local_3c = 1;
  iVar1 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
  if (iVar1 == 0) {
    ghidra::str::append(in_stack_00000004,"`7** no current trade contracts",0x1f);
  }
  else {
    local_30 = (Sector *)0x0;
    if (iVar1 != 0) {
      do {
        pSVar6 = local_30;
        ghidra::str::append(in_stack_00000004,"`!Contract: \n",0xd);
        ((Contract *)**(undefined4 **)(g_gameData + 0x13c))->describeShortToVector();
        // [seh] local_8 = 1;
        local_34 = (ShipClass *)0x0;
        iVar1 = local_44 - local_48 >> 0x1f;
        if ((local_44 - local_48) / 0x18 + iVar1 != iVar1) {
          do {
            uStack_6c = 0x55ae6b;
            pcVar3 = (char *)strUsingArgs((char *)local_2c);
            // [seh] local_8._0_1_ = 2;
            pcVar7 = pcVar3;
            if (0xf < *(uint *)(pcVar3 + 0x14)) {
              pcVar7 = *(char **)pcVar3;
            }
            ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
            // [seh] local_8 = CONCAT31(local_8._1_3_,1);
            if (0xf < local_18) {
              pnVar5 = (nothrow_t *)(local_18 + 1);
              pvVar2 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar5) {
                pvVar2 = *(void **)((int)local_2c[0] + -4);
                pnVar5 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
              }
              operator_delete(pvVar2,pnVar5);
            }
            local_34 = local_34 + 1;
            pSVar6 = local_30;
          } while (local_34 < (ShipClass *)((local_44 - local_48) / 0x18));
        }
        // [seh] local_8 = local_8 & 0xffffff00;
        ghidra::lib::vector___Tidy((ghidra::vector *)&local_48);
        local_30 = pSVar6 + 1;
      } while (local_30 <
               (Sector *)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2));
    }
  }
  iVar1 = *(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2;
  if ((iVar1 != 0) && (local_30 = (Sector *)0x0, iVar1 != 0)) {
    do {
      iVar1 = *(int *)(*(int *)(g_gameData + 0x130) + (int)local_30 * 4);
      ghidra::str::ctor
                (abStack_74,(std::string *)(*(int *)(iVar1 + 0x4c) + 0x24));
      local_34 = GameData::getShipClassWithIdentifier();
      puVar4 = *(undefined4 **)(g_gameData + 0x3c);
      if (puVar4 != *(undefined4 **)(g_gameData + 0x40)) {
        do {
          if (*(int *)*puVar4 == *(int *)(*(int *)(iVar1 + 0x4c) + 0x18)) break;
          puVar4 = puVar4 + 1;
        } while (puVar4 != *(undefined4 **)(g_gameData + 0x40));
      }
      uStack_6c = 0x55afa0;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 3;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      uStack_6c = 0x55b011;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 4;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      uStack_6c = 0x55b082;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 5;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      uStack_6c = 0x55b0f3;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 6;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      uStack_6c = 0x55b164;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 7;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x1c);
      if (iVar1 == 0) {
        uVar8 = 0x14;
        pcVar7 = "`%Threat: `0Minimal\n";
LAB_0055b1e8:
        ghidra::str::append(in_stack_00000004,pcVar7,uVar8);
      }
      else {
        if (iVar1 == 1) {
          uVar8 = 0x15;
          pcVar7 = "`%Threat: `$Possible\n";
          goto LAB_0055b1e8;
        }
        if (iVar1 == 2) {
          uVar8 = 0x16;
          pcVar7 = "`%Threat: `@Dangerous\n";
          goto LAB_0055b1e8;
        }
      }
      uStack_6c = 0x55b1ff;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 8;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar2 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar2 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) goto LAB_0055b37f;
        }
        operator_delete(pvVar2,pnVar5);
      }
      local_1c = 0;
      local_30 = local_30 + 1;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    } while (local_30 < (Sector *)(*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2)
            );
  }
  if (*(int *)(g_gameData + 0x128) != 0) {
    ghidra::str::ctor
              (abStack_74,*(std::string **)(*(int *)(g_gameData + 0x128) + 0xc));
    GameData::getShipWithRego();
    ghidra::str::ctor
              (abStack_74,(std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18));
    GameData::getShipWithRego();
    ghidra::str::ctor
              (abStack_74,(std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18));
    local_30 = GameData::getSectorOfShip();
    ghidra::str::append(in_stack_00000004,"\n",1);
    ghidra::str::append(in_stack_00000004,"`!- Passenger -\n",0x10);
    uStack_6c = 0x55b336;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 9;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar2 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
LAB_0055b37f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar5);
    }
    uStack_6c = 0x55b3a9;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 10;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar2 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar5);
    }
    uStack_6c = 0x55b41c;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xb;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar2 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar5);
    }
    uStack_6c = 0x55b492;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xc;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar2 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar5);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_6c = 0x55b519;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xd;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar2 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar5);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TabletManager::getTranslateString(TabletManager *this)
void TabletManager::getTranslateString()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  undefined4 *puVar1;
  std::string *pbVar2;
  AnimationFrames **ppAVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  std::string *pbVar7;
  void **ppvVar8;
  FlagManager *pFVar9;
  char *pcVar10;
  int iVar11;
  std::string *pbVar12;
  std::string *pbVar13;
  PresentationInterface *this_01;
  char *pcVar14;
  AnimationFrames **ppAVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  nothrow_t *pnVar19;
  undefined4 *puVar20;
  uint uVar21;
  std::string *unaff_EDI;
  std::string *pbVar22;
  std::string *in_stack_00000004;
  std::string abStack_e0 [8];
  undefined4 uStack_d8;
  uint local_c8;
  void *pvVar23;
  uint local_84;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005c9735;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar7 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar11 = *(int *)((char *)this + 0x20);
  bVar6 = false;
  local_14 = pbVar7;
  if (iVar11 == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
    *in_stack_00000004 = (std::string)0x0;
    ghidra::str::assign
              (in_stack_00000004,"`3Talking to: `8nobody\n`3Language  : `8n/a",0x2a);
    goto LAB_0055be71;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  // [seh] local_8 = 2;
  iVar17 = *(int *)(iVar11 + 0x8c);
  if (iVar17 == 0) {
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("passenger",9,(char *)pbVar7,(uint)unaff_EDI);
    if (bVar4) {
      iVar11 = *(int *)(g_gameData + 0x128);
      ppvVar8 = (void **)(iVar11 + 0x10);
      if (local_74 != ppvVar8) {
        if (0xf < *(uint *)(iVar11 + 0x24)) {
          ppvVar8 = *ppvVar8;
        }
        ghidra::str::assign
                  ((std::string *)local_74,(char *)ppvVar8,*(uint *)(iVar11 + 0x20));
      }
      ppvVar8 = (void **)(*(int *)(g_gameData + 0x128) + 0x70);
      goto LAB_0055b674;
    }
    ghidra::str::assign((std::string *)local_74,"unknown",7);
    pvVar23 = (void *)0x7;
    pcVar14 = "english";
LAB_0055b705:
    ghidra::str::assign((std::string *)local_5c,pcVar14,(uint)pvVar23);
  }
  else {
    ppvVar8 = (void **)(iVar17 + 0xc);
    if (local_74 != ppvVar8) {
      if (0xf < *(uint *)(iVar17 + 0x20)) {
        ppvVar8 = *ppvVar8;
      }
      ghidra::str::assign
                ((std::string *)local_74,(char *)ppvVar8,*(uint *)(iVar17 + 0x1c));
      iVar11 = *(int *)((char *)this + 0x20);
    }
    ppvVar8 = (void **)(*(int *)(iVar11 + 0x8c) + 0x24);
LAB_0055b674:
    if (local_5c != ppvVar8) {
      pcVar14 = (char *)ppvVar8;
      if ((void *)0xf < ppvVar8[5]) {
        pcVar14 = *ppvVar8;
      }
      pvVar23 = ppvVar8[4];
      goto LAB_0055b705;
    }
  }
  if (*(char *)(*(int *)(*(int *)((char *)this + 0x20) + 0x8c) + 0x44) == '\0') {
LAB_0055b780:
    bVar4 = false;
  }
  else {
    ghidra::str::ctor
              ((std::string *)local_44,
               (std::string *)(*(int *)(*(int *)((char *)this + 0x20) + 0x8c) + 0xf8));
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    bVar6 = true;
    uStack_d8 = 0x55b75e;
    strUsingArgs((char *)&local_c8);
    // [seh] local_8 = 4;
    pFVar9 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    bVar5 = (pFVar9)->flagSet();
    bVar4 = true;
    if (bVar5) goto LAB_0055b780;
  }
  // [seh] local_8._0_1_ = 2;
  // [seh] local_8._1_3_ = 0;
  if ((bVar6) && (0xf < local_30)) {
    pnVar19 = (nothrow_t *)(local_30 + 1);
    pvVar23 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar23 = *(void **)((int)local_44[0] + -4);
      pnVar19 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) {
LAB_0055b7be:
        // [seh] local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar23,pnVar19);
  }
  if (bVar4) {
    ghidra::str::append((std::string *)&local_2c,"`3Talking to: `7unknown\n",0x18);
  }
  else {
    pcVar10 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8._0_1_ = 5;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    ghidra::str::append((std::string *)&local_2c,pcVar14,*(uint *)(pcVar10 + 0x10));
    // [seh] local_8._0_1_ = 2;
    if (0xf < local_30) {
      pnVar19 = (nothrow_t *)(local_30 + 1);
      pvVar23 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar23 = *(void **)((int)local_44[0] + -4);
        pnVar19 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar23,pnVar19);
    }
  }
  pcVar10 = (char *)strUsingArgs((char *)local_44);
  // [seh] local_8._0_1_ = 6;
  pcVar14 = pcVar10;
  if (0xf < *(uint *)(pcVar10 + 0x14)) {
    pcVar14 = *(char **)pcVar10;
  }
  ghidra::str::append((std::string *)&local_2c,pcVar14,*(uint *)(pcVar10 + 0x10));
  // [seh] local_8._0_1_ = 2;
  if (0xf < local_30) {
    pnVar19 = (nothrow_t *)(local_30 + 1);
    pvVar23 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar23 = *(void **)((int)local_44[0] + -4);
      pnVar19 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar23,pnVar19);
  }
  ghidra::str::append((std::string *)&local_2c,"\n`7",3);
  uVar16 = 0;
  puVar1 = *(undefined4 **)(*(int *)((char *)this + 0x20) + 0xa0);
  uVar21 = *(int *)(*(int *)((char *)this + 0x20) + 0xa4) - (int)puVar1 >> 2;
  if (uVar21 != 0) {
    puVar20 = puVar1;
    do {
      if (*(int *)*puVar20 == *(int *)((char *)this + 0x1c)) {
        iVar11 = puVar1[uVar16];
        goto LAB_0055b919;
      }
      uVar16 = uVar16 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar16 < uVar21);
  }
  iVar11 = 0;
LAB_0055b919:
  iVar17 = 0;
  local_84 = 0;
  while( true ) {
    uVar16 = *(uint *)((char *)this + 4);
    uVar21 = uVar16;
    if (uVar16 == 0xffffffff) {
      uVar21 = (*(int *)((char *)this + 0x38) - *(int *)((char *)this + 0x34)) / 0x18;
    }
    if (uVar21 <= local_84) break;
    iVar18 = *(int *)((char *)this + 0x34);
    pbVar22 = (std::string *)(iVar17 + iVar18);
    uVar16 = *(uint *)(pbVar22 + 0x10);
    bVar6 = ghidra::lib::_Traits_equal___x28_x29("\n",1,(char *)pbVar7,(uint)unaff_EDI);
    if (bVar6) {
      ghidra::str::append((std::string *)&local_2c,"\n",1);
LAB_0055b9a4:
      local_84 = local_84 + 1;
      iVar17 = iVar17 + 0x18;
    }
    else {
      pbVar12 = pbVar22;
      if (0xf < *(uint *)(pbVar22 + 0x14)) {
        pbVar12 = *(std::string **)pbVar22;
      }
      if (*pbVar12 == (std::string)0x23) {
        pbVar2 = *(std::string **)((char *)this + 0x44);
        pbVar13 = ghidra::lib::_Find_unchecked___x28_x29(pbVar22,pbVar7,unaff_EDI);
        if (pbVar13 != pbVar2) goto LAB_0055b9a4;
        local_c8 = local_c8 & 0xffffff00;
        if (*(int *)(pbVar22 + 0x10) == 0) {
                    // WARNING: Subroutine does not return
          ghidra::lib::_String_val___Xran();
        }
        uVar21 = *(int *)(pbVar22 + 0x10) - 1;
        if (uVar21 < uVar16) {
          uVar16 = uVar21;
        }
        if (0xf < *(uint *)(pbVar22 + 0x14)) {
          pbVar22 = *(std::string **)pbVar22;
        }
        ghidra::str::assign((std::string *)&local_c8,(char *)(pbVar22 + 1),uVar16);
        // [seh] local_8._0_1_ = 7;
        ghidra::str::ctor
                  (abStack_e0,(std::string *)(*(int *)(*(int *)((char *)this + 0x20) + 0x8c) + 0xf8));
        // [seh] local_8._0_1_ = 8;
        if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
          this_01 = operator_new(0x418);
          // [seh] local_8._0_1_ = 9;
          ghidra::Singleton<void>::instance =
               (PresentationInterface *)new ((void *)(this_01)) PresentationInterface();
        }
        // [seh] local_8._0_1_ = 2;
        (ghidra::Singleton<void>::instance)->giveEmoteToCharacter();
        pbVar2 = *(std::string **)((char *)this + 0x44);
        if (*(std::string **)((char *)this + 0x48) == pbVar2) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)((char *)this + 0x40),(std::string *)pbVar2,
                     (std::string *)(*(int *)((char *)this + 0x34) + iVar17));
          local_84 = local_84 + 1;
          iVar17 = iVar17 + 0x18;
        }
        else {
          ghidra::str::ctor
                    (pbVar2,(std::string *)(*(int *)((char *)this + 0x34) + iVar17));
          *(int *)((char *)this + 0x44) = *(int *)((char *)this + 0x44) + 0x18;
          local_84 = local_84 + 1;
          iVar17 = iVar17 + 0x18;
        }
      }
      else {
        if (0 < (int)local_84) {
          ghidra::str::append((std::string *)&local_2c," ",1);
          iVar18 = *(int *)((char *)this + 0x34);
        }
        pcVar10 = (char *)(iVar17 + iVar18);
        pcVar14 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar14 = *(char **)pcVar10;
        }
        ghidra::str::append((std::string *)&local_2c,pcVar14,*(uint *)(pcVar10 + 0x10));
        local_84 = local_84 + 1;
        iVar17 = iVar17 + 0x18;
      }
    }
  }
  if ((uVar16 != 0xffffffff) &&
     (local_84 < (uint)((*(int *)((char *)this + 0x38) - *(int *)((char *)this + 0x34)) / 0x18))) {
    if (0.6 < *(float *)((char *)this + 0xc)) {
      pcVar14 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 0xb;
      uVar16 = *(uint *)(pcVar14 + 0x14);
    }
    else {
      pcVar14 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 10;
      uVar16 = *(uint *)(pcVar14 + 0x14);
    }
    pcVar10 = pcVar14;
    if (0xf < uVar16) {
      pcVar10 = *(char **)pcVar14;
    }
    ghidra::str::append((std::string *)&local_2c,pcVar10,*(uint *)(pcVar14 + 0x10));
    // [seh] local_8._0_1_ = 2;
    if (0xf < local_30) {
      pnVar19 = (nothrow_t *)(local_30 + 1);
      pvVar23 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar23 = *(void **)((int)local_44[0] + -4);
        pnVar19 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) goto LAB_0055bbc5;
      }
      operator_delete(pvVar23,pnVar19);
    }
  }
  ghidra::str::append((std::string *)&local_2c,"\n\n",2);
  if (*(int *)((char *)this + 4) == -1) {
    this_00 = (ghidra::vector *)((char *)this + 0x28);
    iVar17 = *(int *)this_00;
    uVar16 = 0;
    *(int *)((char *)this + 0x2c) = iVar17;
    iVar18 = *(int *)(iVar11 + 0x60);
    if (*(int *)(iVar11 + 100) - iVar18 >> 2 != 0) {
      do {
        bVar6 = ConversationOption::checkReq
                          (*(ConversationOption **)(uVar16 * 4 + iVar18),
                           *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                           *(BankAccount **)(g_gameData + 0x124));
        if (bVar6) {
          ppAVar15 = (AnimationFrames **)(*(int *)(iVar11 + 0x60) + uVar16 * 4);
          ppAVar3 = *(AnimationFrames ***)((char *)this + 0x2c);
          if (*(AnimationFrames ***)((char *)this + 0x30) == ppAVar3) {
            ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar3,ppAVar15);
          }
          else {
            *ppAVar3 = *ppAVar15;
            *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 4;
          }
        }
        uVar16 = uVar16 + 1;
        iVar18 = *(int *)(iVar11 + 0x60);
      } while (uVar16 < (uint)(*(int *)(iVar11 + 100) - iVar18 >> 2));
      iVar17 = *(int *)((char *)this + 0x2c);
    }
    uVar16 = 0;
    if (iVar17 - *(int *)this_00 >> 2 != 0) {
      do {
        if (0 < (int)uVar16) {
          ghidra::str::append((std::string *)&local_2c,"\n",1);
        }
        local_c8 = 0x55bd0c;
        pcVar10 = (char *)strUsingArgs((char *)local_44);
        // [seh] local_8._0_1_ = 0xc;
        pcVar14 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar14 = *(char **)pcVar10;
        }
        ghidra::str::append((std::string *)&local_2c,pcVar14,*(uint *)(pcVar10 + 0x10));
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_30) {
          pnVar19 = (nothrow_t *)(local_30 + 1);
          pvVar23 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar23 = *(void **)((int)local_44[0] + -4);
            pnVar19 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) goto LAB_0055b7be;
          }
          operator_delete(pvVar23,pnVar19);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uint)(*(int *)((char *)this + 0x2c) - *(int *)this_00 >> 2));
    }
  }
  pvVar23 = local_2c;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  *(void **)in_stack_00000004 = pvVar23;
  *(undefined4 *)(in_stack_00000004 + 4) = uStack_28;
  *(undefined4 *)(in_stack_00000004 + 8) = uStack_24;
  *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_20;
  *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_18,local_1c);
  local_1c = 0;
  uStack_18 = 0xf;
  if (0xf < local_48) {
    pnVar19 = (nothrow_t *)(local_48 + 1);
    pvVar23 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar23 = *(void **)((int)local_5c[0] + -4);
      pnVar19 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar23))) goto LAB_0055bbc5;
    }
    operator_delete(pvVar23,pnVar19);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar19 = (nothrow_t *)(local_60 + 1);
    pvVar23 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar23 = *(void **)((int)local_74[0] + -4);
      pnVar19 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar23))) goto LAB_0055bbc5;
    }
    operator_delete(pvVar23,pnVar19);
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  if (0xf < uStack_18) {
    pnVar19 = (nothrow_t *)(uStack_18 + 1);
    pvVar23 = local_2c;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar23 = *(void **)((int)local_2c + -4);
      pnVar19 = (nothrow_t *)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar23))) {
LAB_0055bbc5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar23,pnVar19);
  }
LAB_0055be71:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TabletManager::selectElement(TabletManager *this)
void TabletManager::selectElement()

{
  int iVar1;
  bool bVar2;
  PresentationInterface *pPVar3;
  RotateTo *pRVar4;
  CharacterEyeState CVar5;
  CharacterMouthState CVar6;
  ConversationElement *pCVar7;
  SoundEngine *this_00;
  TabletManager *extraout_ECX;
  ConversationManager *this_01;
  uint uVar8;
  uint uVar9;
  uint unaff_ESI;
  char *unaff_EDI;
  std::string abStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  Ship *pSVar10;
  Sound SVar11;
  float fVar12;
  int iVar13;
  TabletManager *local_10;
  int local_c;
  
  if (*(int *)((char *)this + 0x20) != 0) {
    local_10 = *(TabletManager **)((char *)this + 0x28);
    if ((*(int *)((char *)this + 0x2c) - (int)local_10 & 0xfffffffcU) == 0) {
      debugPrint("ERROR","No options for current element.");
      uStack_30 = 0x55bee5;
      bVar2 = cc_assert_script_compatible("No options for current element.");
      if (!bVar2) {
        cocos2d::log("Assert failed: %s");
        return;
      }
    }
    else {
      local_c = *(int *)((char *)this + 0x24);
      iVar13 = *(int *)(local_10 + local_c * 4);
      if ((iVar13 != 0) && (uVar9 = 0, *(int *)(iVar13 + 0x5c) - *(int *)(iVar13 + 0x58) >> 2 != 0))
      {
        do {
          uStack_30 = 0x55bf47;
          performMetaGameAction
                    (local_10,*(MetaGameAction **)(*(int *)(iVar13 + 0x58) + uVar9 * 4),
                     (CargoHold *)local_10,*(BankAccount **)(g_gameData + 0x124));
          uVar9 = uVar9 + 1;
          local_10 = extraout_ECX;
        } while (uVar9 < (uint)(*(int *)(iVar13 + 0x5c) - *(int *)(iVar13 + 0x58) >> 2));
        local_c = *(int *)((char *)this + 0x24);
        local_10 = *(TabletManager **)((char *)this + 0x28);
      }
      iVar13 = *(int *)(local_10 + local_c * 4);
      iVar1 = *(int *)(iVar13 + 8);
      if (iVar1 == -1) {
        pPVar3 = ghidra::any_singleton();
        if ((*(int *)(pPVar3 + 0x34c) != 0) &&
           (pPVar3 = ghidra::any_singleton(), *(int *)(*(int *)(pPVar3 + 0x34c) + 0x100) != 0)) {
          pPVar3 = ghidra::any_singleton();
          fVar12 = 4.0;
          iVar13 = **(int **)(*(int *)(pPVar3 + 0x34c) + 0x3dc);
          uStack_30 = 0x55bfc1;
          pRVar4 = cocos2d::RotateTo::create(1.4,(Vec3 *)(*(int *)(pPVar3 + 0x34c) + 0x40));
          cocos2d::EaseInOut::create((ActionInterval *)pRVar4,fVar12);
          (**(code **)(iVar13 + 0x1d0))();
        }
        pPVar3 = ghidra::any_singleton();
        *(undefined4 *)(pPVar3 + 0x2a4) = 8;
        pPVar3 = ghidra::any_singleton();
        *(undefined2 *)(pPVar3 + 0x2a0) = 0x101;
        *(undefined4 *)(pPVar3 + 0x29c) = 1;
        *(undefined4 *)(pPVar3 + 0x2ac) = 0x3f19999a;
        *(undefined4 *)(pPVar3 + 0x2a8) = 0x3f19999a;
      }
      else if (iVar1 == -2) {
        debugPrint("GAME","Scenario done.");
        pPVar3 = ghidra::any_singleton();
        (pPVar3)->quitToMenu();
      }
      else {
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI);
        if (!bVar2) {
          ghidra::str::ctor(abStack_38,(std::string *)(iVar13 + 0x24));
          CVar5 = getCharacterEyeState();
          *(CharacterEyeState *)(*(int *)((char *)this + 0x10) + 0x58) = CVar5;
          local_c = *(int *)((char *)this + 0x24);
          local_10 = *(TabletManager **)((char *)this + 0x28);
        }
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI);
        if (!bVar2) {
          ghidra::str::ctor
                    (abStack_38,(std::string *)(*(int *)(local_10 + local_c * 4) + 0xc));
          CVar6 = getCharacterMouthState();
          *(CharacterMouthState *)(*(int *)((char *)this + 0x10) + 0x54) = CVar6;
          local_c = *(int *)((char *)this + 0x24);
          local_10 = *(TabletManager **)((char *)this + 0x28);
        }
        setElement(this,*(int *)(*(int *)(local_10 + local_c * 4) + 8));
        *(undefined4 *)((char *)this + 0x24) = 0;
        uStack_30 = 0x55c101;
        debugPrint("GAME","Going to element %d");
        uVar9 = 0;
        iVar13 = *(int *)(*(int *)((char *)this + 0x20) + 0xa0);
        uVar8 = *(int *)(*(int *)((char *)this + 0x20) + 0xa4) - iVar13 >> 2;
        if (uVar8 != 0) {
          do {
            if (**(int **)(iVar13 + uVar9 * 4) == *(int *)((char *)this + 0x1c)) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        uStack_30 = 0x55c14a;
        debugPrint("GAME","Element text = %s");
        ghidra::any_singleton();
        pCVar7 = (*(Conversation **)((char *)this + 0x20))->getElement(*(int *)((char *)this + 0x1c));
        (this_01)->performElementActions(pCVar7);
      }
      iVar13 = -1;
      SVar11 = 8;
      pSVar10 = *(Ship **)(g_gameData + 0xd0);
      uStack_34 = 0x55c178;
      this_00 = ghidra::any_singleton();
      uStack_30 = 0x55c182;
      (this_00)->playSound(pSVar10, SVar11, iVar13);
    }
  }
  return;
}


// Ghidra: void __thiscall TabletManager::runLogic(TabletManager *this,float param_1)
void TabletManager::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 ***pppuVar1;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  float fVar7;
  float in_XMM1_Da;
  undefined4 ***local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((char *)this + 0x20) == 0) goto LAB_0055c3e3;
  fVar7 = in_XMM1_Da + *(float *)((char *)this + 0xc);
  *(float *)((char *)this + 0xc) = fVar7;
  if (1.0 <= fVar7) {
    *(float *)((char *)this + 0xc) = fVar7 - 1.0;
  }
  iVar2 = *(int *)((char *)this + 0x10);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 10) != '\0')) {
    *(undefined1 *)(iVar2 + 10) = 0;
  }
  if (*(int *)((char *)this + 4) < 0) goto LAB_0055c3e3;
  fVar7 = *(float *)((char *)this + 8);
  if (fVar7 == -1.0) {
    ghidra::str::ctor
              ((std::string *)local_20,
               (std::string *)(*(int *)((char *)this + 0x34) + *(int *)((char *)this + 4) * 0x18));
    uVar5 = local_c;
    pppuVar1 = local_20[0];
    ppppuVar4 = local_20;
    if (0xf < local_c) {
      ppppuVar4 = (undefined4 ****)local_20[0];
    }
    if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '?') {
LAB_0055c278:
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      fVar7 = (float)(int)uVar3 + 0.5;
    }
    else {
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '.') goto LAB_0055c278;
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '!') goto LAB_0055c278;
      iVar2 = rand();
      fVar7 = (float)(iVar2 % 5) / 50.0;
    }
    *(float *)((char *)this + 8) = fVar7;
    if (0xf < uVar5) {
      pnVar6 = (nothrow_t *)(uVar5 + 1);
      ppppuVar4 = (undefined4 ****)pppuVar1;
      if ((nothrow_t *)0xfff < pnVar6) {
        ppppuVar4 = (undefined4 ****)pppuVar1[-1];
        pnVar6 = (nothrow_t *)(uVar5 + 0x24);
        if (0x1f < (uint)((int)pppuVar1 + (-4 - (int)ppppuVar4))) goto LAB_0055c3c2;
      }
      operator_delete(ppppuVar4,pnVar6);
      fVar7 = *(float *)((char *)this + 8);
    }
  }
  *(float *)((char *)this + 8) = fVar7 - in_XMM1_Da;
  if (fVar7 - in_XMM1_Da < 0.0) {
    ghidra::str::ctor
              ((std::string *)local_20,
               (std::string *)(*(int *)((char *)this + 0x34) + *(int *)((char *)this + 4) * 0x18));
    ppppuVar4 = local_20;
    if (0xf < local_c) {
      ppppuVar4 = (undefined4 ****)local_20[0];
    }
    if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '?') {
LAB_0055c350:
      uVar5 = rand();
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      fVar7 = (float)(int)uVar5 + 0.5;
    }
    else {
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '.') goto LAB_0055c350;
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '!') goto LAB_0055c350;
      iVar2 = rand();
      fVar7 = (float)(iVar2 % 5) / 50.0;
    }
    *(float *)((char *)this + 8) = fVar7;
    *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 1;
    if ((uint)((*(int *)((char *)this + 0x38) - *(int *)((char *)this + 0x34)) / 0x18) <= *(uint *)((char *)this + 4)) {
      *(undefined4 *)((char *)this + 4) = 0xffffffff;
      *(undefined1 **)((char *)this + 8) = &DAT_bf800000;
    }
    if (0xf < local_c) {
      pnVar6 = (nothrow_t *)(local_c + 1);
      ppppuVar4 = (undefined4 ****)local_20[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        ppppuVar4 = (undefined4 ****)local_20[0][-1];
        pnVar6 = (nothrow_t *)(local_c + 0x24);
        if (0x1f < (uint)((int)local_20[0] + (-4 - (int)ppppuVar4))) {
LAB_0055c3c2:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar4,pnVar6);
    }
  }
  iVar2 = *(int *)((char *)this + 0x10);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 10) == '\0')) {
    *(undefined1 *)(iVar2 + 10) = 1;
  }
LAB_0055c3e3:
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TabletManager::keyPressed(TabletManager *this,KeyCode param_1)
bool TabletManager::keyPressed(KeyCode param_1)

{
  TabletManager *pTVar1;
  SoundEngine *pSVar2;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  
  if ((*(int *)((char *)this + 0x20) != 0) && (*(int *)((char *)this + 4) == -1)) {
    switch(param_1) {
    case 10:
    case 0x23:
    case 0xa4:
      selectElement(this);
      return true;
    case 0x1c:
    case 0x25:
      pTVar1 = this + 0x24;
      *(int *)pTVar1 = *(int *)pTVar1 + -1;
      if (*(int *)pTVar1 < 0) {
        *(int *)((char *)this + 0x24) = (*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) >> 2) + -1;
      }
      iVar5 = -1;
      SVar4 = 8;
      pSVar3 = *(Ship **)(g_gameData + 0xd0);
      pSVar2 = ghidra::any_singleton();
      (pSVar2)->playSound(pSVar3, SVar4, iVar5);
      return true;
    case 0x1d:
    case 0x2b:
      *(int *)((char *)this + 0x24) = *(int *)((char *)this + 0x24) + 1;
      if ((uint)(*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) >> 2) <= *(uint *)((char *)this + 0x24)) {
        *(undefined4 *)((char *)this + 0x24) = 0;
      }
      iVar5 = -1;
      SVar4 = 8;
      pSVar3 = *(Ship **)(g_gameData + 0xd0);
      pSVar2 = ghidra::any_singleton();
      (pSVar2)->playSound(pSVar3, SVar4, iVar5);
      return true;
    }
  }
  return false;
}


// Ghidra: void __thiscall TabletManager::performMetaGameAction (TabletManager *this,MetaGameAction *param_1,CargoHold *param_2,BankAccount *param_3)
void TabletManager::performMetaGameAction(MetaGameAction * param_1, CargoHold * param_2, BankAccount * param_3)

{
  char stack0xffffffa4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa8[1] = {0};  // [pseudo] address of an unnamed stack slot
  CargoHold *pCVar1;
  GameData *pGVar2;
  GameData *pGVar3;
  bool bVar4;
  FlagManager *pFVar5;
  FictionData *pFVar6;
  Faction *pFVar7;
  WeaponClass *pWVar8;
  ShipComponent *pSVar9;
  int iVar10;
  undefined4 uVar11;
  Stats *pSVar12;
  float *pfVar13;
  TradeEngine *pTVar14;
  TradeLocation *this_00;
  undefined4 extraout_ECX;
  TradeEngine *this_01;
  undefined4 extraout_ECX_00;
  int iVar15;
  uint uVar16;
  Good *pGVar17;
  int extraout_ECX_01;
  void *pvVar18;
  int extraout_ECX_02;
  undefined4 *puVar19;
  nothrow_t *pnVar20;
  MetaGameAction *pMVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c97a8;
  // [seh] local_10 = ExceptionList;
  iVar10 = *(int *)param_1;
  if (iVar10 == 0) {
    // [seh] ExceptionList = &local_10;
    ghidra::str::ctor
              ((std::string *)&stack0xffffffa4,(std::string *)(param_1 + 4));
    // [seh] local_8 = 0;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    debugPrint("GAME","Set flag \'%s\'");
    // [seh] ExceptionList = local_10;
    return;
  }
  if (iVar10 == 1) {
    // [seh] ExceptionList = &local_10;
    ghidra::str::ctor
              ((std::string *)&stack0xffffffa4,(std::string *)(param_1 + 4));
    // [seh] local_8 = 1;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    debugPrint("GAME","Unset flag \'%s\'");
    // [seh] ExceptionList = local_10;
    return;
  }
  if (iVar10 == 2) {
    // [seh] ExceptionList = &local_10;
    ghidra::str::assign((std::string *)&stack0xffffffa8,"Transfer",8);
    (param_3)->addTransaction(extraout_ECX);
    debugPrint("GAME","Gave %d credits to player.");
    // [seh] ExceptionList = local_10;
    return;
  }
  if (iVar10 == 9) {
    // [seh] ExceptionList = &local_10;
    ghidra::lib::transform___x28_x29();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 4));
    // [seh] local_8 = 2;
    pFVar6 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    pFVar7 = (pFVar6)->getFactionForID();
    if (pFVar7 != (Faction *)0x0) {
      (pFVar7)->getAccess();
      pcVar23 = "Gave player license for faction %s";
LAB_0055c802:
      debugPrint("GAME",pcVar23);
      ghidra::any_singleton();
      (this_01)->repopulateCurrentContracts();
      // [seh] ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar10 != 10) {
      if (iVar10 == 3) {
        if (*(int *)(param_1 + 0x20) <= *(int *)(param_3 + 0x1c)) {
          // [seh] ExceptionList = &local_10;
          ghidra::str::assign((std::string *)&stack0xffffffa8,"Transfer",8);
          (param_3)->addTransaction(extraout_ECX_00);
          debugPrint("GAME","Took %d credits from player.");
          // [seh] ExceptionList = local_10;
          return;
        }
        pcVar24 = "Not enough money to perform action.";
        pcVar23 = "ERROR";
        // [seh] ExceptionList = &local_10;
      }
      else {
        if (iVar10 == 6) {
          if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) == 0) {
            return;
          }
          iVar10 = -1;
          // [seh] ExceptionList = &local_10;
          ghidra::str::ctor
                    ((std::string *)&stack0xffffffa4,(std::string *)(param_1 + 4));
          pWVar8 = GameData::getWeaponClassWithIdentifier();
          (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar8, iVar10);
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 == 7) {
          iVar10 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
          iVar15 = *(int *)(iVar10 + 0x48) - *(int *)(iVar10 + 0x44) >> 2;
          if (*(int *)(iVar10 + 4) == iVar15 || *(int *)(iVar10 + 4) - iVar15 < 0) {
            return;
          }
          // [seh] ExceptionList = &local_10;
          pSVar9 = operator_new(8);
          pMVar21 = param_1 + 4;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            pMVar21 = *(MetaGameAction **)pMVar21;
          }
          iVar10 = atoi((char *)pMVar21);
          pGVar2 = g_gameData;
          uVar16 = 0;
          *(undefined4 *)pSVar9 = 0x42c80000;
          pGVar3 = g_gameData;
          uVar22 = *(int *)(pGVar2 + 4) - *(int *)pGVar2 >> 2;
          if (uVar22 != 0) {
            local_18 = *(undefined4 **)pGVar2;
            puVar19 = local_18;
            do {
              if (*(int *)*puVar19 == iVar10) {
                uVar11 = local_18[uVar16];
                goto LAB_0055c996;
              }
              uVar16 = uVar16 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar16 < uVar22);
          }
          uVar11 = 0;
LAB_0055c996:
          *(undefined4 *)(pSVar9 + 4) = uVar11;
          (*(CargoHold **)(*(int *)(pGVar3 + 0xd0) + 0x1f8))->addComponent(pSVar9);
          debugPrint("GAME","gave player component of type \'%s\'");
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 == 8) {
          pMVar21 = param_1 + 4;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            pMVar21 = *(MetaGameAction **)pMVar21;
          }
          // [seh] ExceptionList = &local_10;
          iVar10 = atoi((char *)pMVar21);
          pCVar1 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
          bVar4 = (pCVar1)->hasComponent(iVar10);
          if (!bVar4) {
            debugPrint("GAME",
                       "couldn\'t take component type \'%d\' from player as they don\'t have it");
            // [seh] ExceptionList = local_10;
            return;
          }
          puVar19 = *(undefined4 **)(pCVar1 + 0x44);
          do {
            if (puVar19 == *(undefined4 **)(pCVar1 + 0x48)) {
LAB_0055ca4a:
              debugPrint("GAME","took component of type \'%d\' from player");
              // [seh] ExceptionList = local_10;
              return;
            }
            if (**(int **)((ShipComponent *)*puVar19 + 4) == iVar10) {
              (pCVar1)->removeComponent((ShipComponent *)*puVar19);
              goto LAB_0055ca4a;
            }
            puVar19 = puVar19 + 1;
          } while( true );
        }
        if (iVar10 == 4) {
          uVar16 = 0;
          puVar19 = *(undefined4 **)(g_gameData + 0x84);
          uVar22 = *(int *)(g_gameData + 0x88) - (int)puVar19 >> 2;
          if (uVar22 != 0) {
            do {
              if (*(int *)*puVar19 == *(int *)(param_1 + 0x1c)) {
                pGVar17 = *(Good **)(*(int *)(g_gameData + 0x84) + uVar16 * 4);
                goto LAB_0055cad9;
              }
              uVar16 = uVar16 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar16 < uVar22);
          }
          pGVar17 = (Good *)0x0;
LAB_0055cad9:
          iVar10 = *(int *)(param_1 + 0x20);
          pCVar1 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
          // [seh] ExceptionList = &local_10;
          iVar15 = (pCVar1)->amountCanHold(pGVar17);
          if (iVar15 < iVar10) {
            debugPrint("GAME","WARNING: couldn\'t add %dx cargo of type \'%d\' to player hold");
            // [seh] ExceptionList = local_10;
            return;
          }
          (pCVar1)->addToHold(*(int *)(param_1 + 0x1c), iVar10, extraout_ECX_01);
          debugPrint("GAME","Added %dx cargo of type \'%d\' to player hold");
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 == 5) {
          // [seh] ExceptionList = &local_10;
          CargoHold::removeFromHold
                    (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)(param_1 + 0x1c),
                     *(int *)(param_1 + 0x20),(int)this);
          debugPrint("GAME","Removed %dx cargo of type \'%d\' from player hold");
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 == 0xc) {
          // [seh] ExceptionList = &local_10;
          ghidra::str::ctor
                    ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 4));
          // [seh] local_8 = 4;
          pSVar12 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 0xffffffff;
          (pSVar12)->setCustomStat();
          debugPrint("GAME","Set stat %s to %d.");
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 == 0xb) {
          iVar10 = *(int *)(param_1 + 0x20);
          // [seh] ExceptionList = &local_10;
          ghidra::str::ctor
                    ((std::string *)local_30,(std::string *)(param_1 + 4));
          // [seh] local_8 = 5;
          pSVar12 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 6;
          pfVar13 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(pSVar12 + 0x38),(std::string *)local_30);
          // [seh] local_8 = 0xffffffff;
          *pfVar13 = (float)iVar10 + *pfVar13;
          if (0xf < local_1c) {
            pnVar20 = (nothrow_t *)(local_1c + 1);
            pvVar18 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              pvVar18 = *(void **)((int)local_30[0] + -4);
              pnVar20 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar18,pnVar20);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          ghidra::str::ctor
                    ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 4));
          // [seh] local_8 = 7;
          pSVar12 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 0xffffffff;
          (pSVar12)->getCustomStat();
          debugPrint("GAME","Changed stat %s by %d, amount now %d.");
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar10 != 0xd) {
          return;
        }
        // [seh] ExceptionList = &local_10;
        bVar4 = (*(Ship **)(g_gameData + 0xd0))->isDocked();
        if ((bVar4) && (*(int *)(extraout_ECX_02 + 0x178) != 0)) {
          ghidra::str::ctor
                    ((std::string *)&stack0xffffffa8,
                     (std::string *)(*(int *)(extraout_ECX_02 + 0x178) + 0x238));
          // [seh] local_8 = 8;
          pTVar14 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          this_00 = (pTVar14)->getTradeLocation();
          if (this_00 != (TradeLocation *)0x0) {
            (this_00)->resetContracts();
          }
        }
        pcVar24 = "Reset contracts.";
        pcVar23 = "GAME";
      }
      debugPrint(pcVar23,pcVar24);
      // [seh] ExceptionList = local_10;
      return;
    }
    // [seh] ExceptionList = &local_10;
    ghidra::lib::transform___x28_x29();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffa8,(std::string *)(param_1 + 4));
    // [seh] local_8 = 3;
    pFVar6 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    pFVar7 = (pFVar6)->getFactionForID();
    if (pFVar7 != (Faction *)0x0) {
      *(undefined4 *)(pFVar7 + 0xd8) = 0;
      *(undefined4 *)(pFVar7 + 0xdc) = 5;
      pcVar23 = "Suspended player for faction %s";
      goto LAB_0055c802;
    }
  }
  debugPrint("WORLD","Invalid faction \'%s\'");
  bVar4 = cc_assert_script_compatible("Invalid faction.");
  if (!bVar4) {
    cocos2d::log("Assert failed: %s");
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TabletManager::setElement(TabletManager *this,int param_1)
void TabletManager::setElement(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  int *piVar1;
  bool bVar2;
  std::string *pbVar3;
  int *piVar4;
  CharacterEyeState CVar5;
  CharacterMouthState CVar6;
  undefined4 ****ppppuVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  void *pvVar12;
  uint uVar13;
  nothrow_t *pnVar14;
  ghidra::lib::allocator_t *unaff_EDI;
  undefined4 uStack_80;
  TabletManager *pTVar15;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  std::string *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c97e8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_00 = (ghidra::vector *)((char *)this + 0x34);
  *(int *)((char *)this + 0x1c) = param_1;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined1 **)((char *)this + 8) = &DAT_bf800000;
  pTVar15 = this;
  local_18 = pbVar3;
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this,pbVar3,unaff_EDI);
  *(undefined4 *)((char *)this + 0x38) = *(undefined4 *)this_00;
  ghidra::lib::_Destroy_range___x28_x29((std::string *)pTVar15,pbVar3,unaff_EDI);
  *(undefined4 *)((char *)this + 0x44) = *(undefined4 *)((char *)this + 0x40);
  uVar9 = 0;
  piVar4 = *(int **)(*(int *)((char *)this + 0x20) + 0xa0);
  uVar13 = *(int *)(*(int *)((char *)this + 0x20) + 0xa4) - (int)piVar4 >> 2;
  if (uVar13 != 0) {
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_1) {
        if (piVar1 != (int *)0x0) {
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI);
          if (!bVar2) {
            ghidra::str::ctor
                      ((std::string *)&uStack_80,(std::string *)(piVar1 + 9));
            CVar5 = getCharacterEyeState();
            *(CharacterEyeState *)(*(int *)((char *)this + 0x10) + 0x58) = CVar5;
          }
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI);
          if (!bVar2) {
            ghidra::str::ctor
                      ((std::string *)&uStack_80,(std::string *)(piVar1 + 3));
            CVar6 = getCharacterMouthState();
            *(CharacterMouthState *)(*(int *)((char *)this + 0x10) + 0x54) = CVar6;
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
          uVar9 = 0;
          // [seh] local_8 = 0;
          if (piVar1[0x13] == 0) goto LAB_0055ce92;
          piVar4 = piVar1 + 0xf;
          goto LAB_0055cf60;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar9 < uVar13);
  }
  uStack_80 = 0x55ce6a;
  debugPrint("ERROR","Invalid conversationElement \'%d\' in conversation %d with person %s");
  bVar2 = cc_assert_script_compatible("Unknown conversation element.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s");
  }
  goto LAB_0055ce92;
LAB_0055cf60:
  do {
    uVar13 = piVar1[0x14];
    piVar10 = piVar4;
    if (0xf < uVar13) {
      piVar10 = (int *)*piVar4;
    }
    if (*(char *)((int)piVar10 + uVar9) == ' ') {
LAB_0055d0cf:
      if (local_20 != 0) {
        pbVar3 = *(std::string **)((char *)this + 0x38);
        if (*(std::string **)((char *)this + 0x3c) == pbVar3) {
          ghidra::lib::vector___Emplace_reallocate
                    (this_00,(std::string *)pbVar3,(std::string *)local_30);
        }
        else {
          ghidra::str::ctor(pbVar3,(std::string *)local_30);
          *(int *)((char *)this + 0x38) = *(int *)((char *)this + 0x38) + 0x18;
        }
        local_20 = 0;
        ppppuVar7 = local_30;
        if (0xf < local_1c) {
          ppppuVar7 = (undefined4 ****)local_30[0];
        }
        *(undefined1 *)ppppuVar7 = 0;
      }
    }
    else {
      piVar10 = piVar4;
      if (0xf < uVar13) {
        piVar10 = (int *)*piVar4;
      }
      if (*(char *)((int)piVar10 + uVar9) == '\t') goto LAB_0055d0cf;
      piVar10 = piVar4;
      if (0xf < uVar13) {
        piVar10 = (int *)*piVar4;
      }
      if (*(char *)((int)piVar10 + uVar9) == '\n') {
        if (local_20 != 0) {
          pbVar3 = *(std::string **)((char *)this + 0x38);
          if (*(std::string **)((char *)this + 0x3c) == pbVar3) {
            ghidra::lib::vector___Emplace_reallocate
                      (this_00,(std::string *)pbVar3,(std::string *)local_30);
          }
          else {
            ghidra::str::ctor(pbVar3,(std::string *)local_30);
            *(int *)((char *)this + 0x38) = *(int *)((char *)this + 0x38) + 0x18;
          }
          local_20 = 0;
          ppppuVar7 = local_30;
          if (0xf < local_1c) {
            ppppuVar7 = (undefined4 ****)local_30[0];
          }
          *(undefined1 *)ppppuVar7 = 0;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
        ghidra::str::assign((std::string *)local_48,"\n",1);
        // [seh] local_8._0_1_ = 1;
        ghidra::lib::vector__push_back(this_00,(std::string *)local_48);
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_34) {
          pnVar14 = (nothrow_t *)(local_34 + 1);
          pvVar12 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar12 = *(void **)((int)local_48[0] + -4);
            pnVar14 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12))) goto LAB_0055d169;
          }
          operator_delete(pvVar12,pnVar14);
        }
      }
      else {
        piVar10 = piVar4;
        if (0xf < uVar13) {
          piVar10 = (int *)*piVar4;
        }
        if (*(char *)((int)piVar10 + uVar9) != '\r') {
          pcVar8 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 2;
          pcVar11 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar11 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)local_30,pcVar11,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_34) {
            pnVar14 = (nothrow_t *)(local_34 + 1);
            pvVar12 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_48[0] + -4);
              pnVar14 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12))) goto LAB_0055d169;
            }
            operator_delete(pvVar12,pnVar14);
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < (uint)piVar1[0x13]);
  if (local_20 != 0) {
    pbVar3 = *(std::string **)((char *)this + 0x38);
    if (*(std::string **)((char *)this + 0x3c) == pbVar3) {
      ghidra::lib::vector___Emplace_reallocate
                (this_00,(std::string *)pbVar3,(std::string *)local_30);
    }
    else {
      ghidra::str::ctor(pbVar3,(std::string *)local_30);
      *(int *)((char *)this + 0x38) = *(int *)((char *)this + 0x38) + 0x18;
    }
  }
  if (0xf < local_1c) {
    pnVar14 = (nothrow_t *)(local_1c + 1);
    ppppuVar7 = (undefined4 ****)local_30[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      ppppuVar7 = (undefined4 ****)local_30[0][-1];
      pnVar14 = (nothrow_t *)(local_1c + 0x24);
      if ((undefined1 *)0x1f < (undefined1 *)((int)local_30[0] + (-4 - (int)ppppuVar7))) {
LAB_0055d169:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar7,pnVar14);
  }
LAB_0055ce92:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}
