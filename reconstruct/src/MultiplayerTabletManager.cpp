// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall MultiplayerTabletManager::render(MultiplayerTabletManager *this,TabletScreenType param_1)
void MultiplayerTabletManager::render(TabletScreenType param_1)

{
  MultiplayerTabletManager *pMVar1;
  
  *(undefined4 *)((char *)this + 0x10) = 0;
  pMVar1 = this + 0x24;
  *(undefined4 *)((char *)this + 0x34) = 0;
  if (0xf < *(uint *)((char *)this + 0x38)) {
    pMVar1 = *(MultiplayerTabletManager **)((char *)this + 0x24);
  }
  *pMVar1 = (byte)0x0;
  if (param_1 == 4) {
    renderStatus(this);
    return;
  }
  if (param_1 == 5) {
    renderScenario(this);
    return;
  }
  if (param_1 == 6) {
    *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
    ghidra::str::append((std::string *)((char *)this + 0x24),"chat",4);
  }
  return;
}


// Ghidra: void __thiscall MultiplayerTabletManager::keyHit(MultiplayerTabletManager *this,KeyCode param_1)
void MultiplayerTabletManager::keyHit(KeyCode param_1)

{
  debugPrint("GAME","Multiplayer tablet manager key hit");
  return;
}


// Ghidra: void __thiscall MultiplayerTabletManager::renderStatus(MultiplayerTabletManager *this)
void MultiplayerTabletManager::renderStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char ****ppppcVar6;
  uint uVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  char *pcVar10;
  int iVar11;
  uint unaff_EDI;
  undefined4 uStack_9c;
  uint uVar12;
  char *local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b5080;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar11 = *(int *)(*(int *)(g_gameData + 0xcc) + 0x388 +
                   *(int *)(*(int *)(g_gameData + 0xd0) + 100) * 4);
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  local_14 = pcVar4;
  pcVar5 = (char *)strUsingArgs((char *)local_44);
  // [seh] local_8 = 0;
  pcVar10 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar10 = *(char **)pcVar5;
  }
  ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  if (0xf < local_30) {
    pnVar9 = (nothrow_t *)(local_30 + 1);
    pvVar8 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_44[0] + -4);
      pnVar9 = (nothrow_t *)(local_30 + 0x24);
      uVar2 = (undefined1)local_8;
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
LAB_0043afdc:
        // [seh] local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
  local_70 = (char *)0x0;
  local_6c = 0;
  local_68 = 0;
  // [seh] local_8._0_1_ = 1;
  // [seh] local_8._1_3_ = 0;
  ghidra::str::ctor
            ((std::string *)&uStack_9c,(std::string *)(*(int *)(g_gameData + 0xcc) + 0x48));
  UIText::generateLines();
  local_60 = 0;
  local_64 = (local_6c - (int)local_70) / 0x18;
  pcVar10 = local_70;
  if (local_64 != 0) {
    do {
      *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
      uVar12 = *(uint *)(pcVar10 + 0x10);
      if (uVar12 != 0) {
        uVar1 = *(uint *)(pcVar10 + 0x14);
        pcVar5 = pcVar10;
        if (0xf < uVar1) {
          pcVar5 = *(char **)pcVar10;
        }
        if (pcVar5[uVar12 - 1] == ' ') {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
          uVar7 = uVar12 - 1;
          if (uVar12 < uVar12 - 1) {
            uVar7 = uVar12;
          }
          pcVar5 = pcVar10;
          if (0xf < uVar1) {
            pcVar5 = *(char **)pcVar10;
          }
          ghidra::str::assign((std::string *)local_2c,pcVar5,uVar7);
          // [seh] local_8._0_1_ = 2;
          ppppcVar6 = local_2c;
          if (0xf < local_18) {
            ppppcVar6 = (char ****)local_2c[0];
          }
          ghidra::str::append((std::string *)((char *)this + 0x24),(char *)ppppcVar6,local_1c);
          // [seh] local_8._0_1_ = 1;
          uVar2 = (undefined1)local_8;
          // [seh] local_8._0_1_ = 1;
          if (0xf < local_18) {
            pnVar9 = (nothrow_t *)(local_18 + 1);
            ppppcVar6 = (char ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              ppppcVar6 = (char ****)local_2c[0][-1];
              pnVar9 = (nothrow_t *)(local_18 + 0x24);
              if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6)))
              goto LAB_0043afdc;
            }
            operator_delete(ppppcVar6,pnVar9);
          }
        }
        else {
          pcVar5 = pcVar10;
          if (0xf < uVar1) {
            pcVar5 = *(char **)pcVar10;
          }
          ghidra::str::append((std::string *)((char *)this + 0x24),pcVar5,uVar12);
        }
      }
      ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
      pcVar10 = pcVar10 + 0x18;
      local_60 = local_60 + 1;
    } while (local_60 < local_64);
  }
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 3) {
    bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI);
    *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
    if (bVar3) {
      ghidra::str::append((std::string *)((char *)this + 0x24),"`3Goal: `%Combat\n",0x11);
    }
    else {
      pcVar4 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 3;
      pcVar10 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar10 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 1;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
  }
  if (iVar11 == 1) {
    uVar12 = 0x15;
    pcVar10 = "`!Status: `%Complete\n";
  }
  else if (iVar11 == 2) {
    uVar12 = 0x13;
    pcVar10 = "`!Status: `@Failed\n";
  }
  else {
    uVar12 = 0x17;
    pcVar10 = "`!Status: `$Incomplete\n";
  }
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,uVar12);
  iVar11 = 0;
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 100) == 1) {
    iVar11 = 2;
  }
  else if (*(int *)(*(int *)(g_gameData + 0xd0) + 100) == 2) {
    iVar11 = 1;
  }
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x316) != '\0') {
    if (iVar11 != 0) {
      if (0 < *(int *)(*(int *)(g_gameData + 0xcc) + 0x3b8 + iVar11 * 4)) {
        *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
        uStack_9c = 0x43b2f7;
        pcVar4 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 4;
        pcVar10 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar10 = *(char **)pcVar4;
        }
        ghidra::str::append
                  ((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar4 + 0x10));
        // [seh] local_8._0_1_ = 1;
        if (0xf < local_18) {
          pnVar9 = (nothrow_t *)(local_18 + 1);
          ppppcVar6 = (char ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            ppppcVar6 = (char ****)local_2c[0][-1];
            pnVar9 = (nothrow_t *)(local_18 + 0x24);
            if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar6,pnVar9);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      }
      if (0 < *(int *)(*(int *)(g_gameData + 0xcc) + 0x394 + iVar11 * 4)) {
        *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
        uStack_9c = 0x43b3b0;
        pcVar4 = (char *)strUsingArgs((char *)local_5c);
        // [seh] local_8._0_1_ = 5;
        pcVar10 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar10 = *(char **)pcVar4;
        }
        ghidra::str::append
                  ((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar4 + 0x10));
        // [seh] local_8._0_1_ = 1;
        if (0xf < local_48) {
          pnVar9 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar9 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar9);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      }
    }
    if (0 < *(int *)(*(int *)(g_gameData + 0xcc) + 0x3b8 +
                    *(int *)(*(int *)(g_gameData + 0xd0) + 100) * 4)) {
      *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
      uStack_9c = 0x43b47f;
      pcVar4 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 6;
      pcVar10 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar10 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 1;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
    if (0 < *(int *)(*(int *)(g_gameData + 0xcc) + 0x394 +
                    *(int *)(*(int *)(g_gameData + 0xd0) + 100) * 4)) {
      *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
      uStack_9c = 0x43b545;
      pcVar4 = (char *)strUsingArgs((char *)local_5c);
      // [seh] local_8._0_1_ = 7;
      pcVar10 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar10 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 1;
      if (0xf < local_48) {
        pnVar9 = (nothrow_t *)(local_48 + 1);
        pvVar8 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_5c[0] + -4);
          pnVar9 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
  }
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append
            ((std::string *)((char *)this + 0x24),"`![`3press `$tab`3 to close tablet`!]",0x25);
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_70);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall MultiplayerTabletManager::renderScenario(MultiplayerTabletManager *this)
void MultiplayerTabletManager::renderScenario()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  std::string *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  int iVar7;
  ghidra::lib::allocator_t *unaff_EDI;
  int iVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  MultiplayerTabletManager *local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005b50c0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  ((char *)this)[0x14] = (byte)0x1;
  local_34 = this;
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this,local_14,unaff_EDI);
  *(undefined4 *)((char *)this + 0x1c) = *(undefined4 *)((char *)this + 0x18);
  if (((char *)this)[0x14] != (byte)0x0) {
    this_00 = (std::string *)((char *)this + 0x24);
    *(undefined4 *)((char *)this + 0x34) = 0;
    pbVar1 = this_00;
    if (0xf < *(uint *)((char *)this + 0x38)) {
      pbVar1 = *(std::string **)this_00;
    }
    *pbVar1 = (std::string)0x0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    // [seh] local_8 = 0;
    local_30 = (*(int *)((char *)this + 0x1c) - *(int *)((char *)this + 0x18)) / 0x18;
    iVar7 = local_30 - *(int *)((char *)this + 0xc);
    if (iVar7 < local_30) {
      iVar8 = iVar7 * 0x18;
      do {
        puVar2 = (undefined4 *)(*(int *)(local_34 + 0x18) + iVar8);
        if (0xf < (uint)puVar2[5]) {
          puVar2 = (undefined4 *)*puVar2;
        }
        pcVar3 = (char *)strUsingArgs((char *)local_2c,"%02d: %s",iVar7,puVar2);
        // [seh] local_8._0_1_ = 1;
        pcVar4 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar4 = *(char **)pcVar3;
        }
        ghidra::str::append(this_00,pcVar4,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
        if (iVar7 != local_30) {
          ghidra::str::append(this_00,"\n",1);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x18;
      } while (iVar7 < local_30);
    }
    ghidra::lib::vector___Tidy((ghidra::vector *)&local_40);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
