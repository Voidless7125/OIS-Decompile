// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: int __thiscall Contract::hoursLeft(Contract *this)
int Contract::hoursLeft()

{
  if (*(float *)((char *)this + 0x18) == -1.0) {
    return -1;
  }
  return (int)(*(float *)((char *)this + 0x1c) -
              ((float)(*(int *)(g_gameLogic + 0x184) +
                      ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
                      *(int *)(g_gameLogic + 0x188)) * 0x18) - *(float *)((char *)this + 0x18)));
}


// Ghidra: void __thiscall Contract::describeThreeLines(Contract *this,bool param_1,bool param_2)
void Contract::describeThreeLines(bool param_1, bool param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  Good *pGVar2;
  char *pcVar3;
  Ship *pSVar4;
  std::string *pbVar5;
  FictionData *pFVar6;
  Faction *pFVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  std::string abStack_9c [4];
  undefined4 uStack_98;
  char *pcVar10;
  uint uVar11;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005bade0;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  local_44 = 0;
  uStack_40 = 0xf;
  local_54 = (void *)((uint)local_54 & 0xffffff00);
  local_14 = 0;
  uStack_13 = 0;
  ghidra::str::ctor(abStack_9c,*(std::string **)((char *)this + 0x58));
  pGVar2 = GameData::getGoodWithShortName();
  if (pGVar2 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good type \'%s\'");
    bVar1 = cc_assert_script_compatible("Unknown good type.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s");
    }
    *(undefined4 *)(_param_1 + 0x10) = 0;
    *(undefined4 *)(_param_1 + 0x14) = 0xf;
    *_param_1 = (std::string)0x0;
    ghidra::str::assign(_param_1,"Error: unknown good.",0x14);
    if (0xf < uStack_40) {
      pnVar9 = (nothrow_t *)(uStack_40 + 1);
      pvVar8 = local_54;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_54 + -4);
        pnVar9 = (nothrow_t *)(uStack_40 + 0x24);
        if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    goto LAB_00482ff0;
  }
  uStack_98 = 0x482acd;
  pcVar3 = (char *)strUsingArgs((char *)local_3c);
  local_14 = 1;
  pcVar10 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar10 = *(char **)pcVar3;
  }
  ghidra::str::append((std::string *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
  local_14 = 0;
  if (0xf < local_28) {
    pnVar9 = (nothrow_t *)(local_28 + 1);
    pvVar8 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_3c[0] + -4);
      pnVar9 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  if (*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 1) {
    ghidra::str::ctor(abStack_9c,(std::string *)((char *)this + 0x20));
    pSVar4 = GameData::getShipWithRego();
    if (pSVar4 == (Ship *)0x0) {
      uVar11 = 0x1d;
      pcVar10 = "Error - unknown destination.\n";
      goto LAB_00482f14;
    }
    uStack_98 = 0x482b7a;
    strUsingArgs((char *)local_3c);
    local_14 = 2;
    if (pSVar4 == ShipData::currentlyBoardedShip) {
      ghidra::str::append((std::string *)&local_54,"`7needed at `%[here]\n",0x15);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_6c);
      local_14 = 3;
      pcVar10 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar10 = *(char **)pcVar3;
      }
      ghidra::str::append((std::string *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
      local_14 = 2;
      if (0xf < local_58) {
        pnVar9 = (nothrow_t *)(local_58 + 1);
        pvVar8 = local_6c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_6c[0] + -4);
          pnVar9 = (nothrow_t *)(local_58 + 0x24);
          if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_5c = 0;
      local_58 = 0xf;
      local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
    }
    if ((in_stack_0000000c != '\0') && (*(int *)(pSVar4 + 0x24) != *(int *)(g_gameData + 0xd8))) {
      pbVar5 = (std::string *)strUsingArgs((char *)local_6c);
      local_14 = 4;
      ghidra::str::append((std::string *)&local_54,pbVar5);
      local_14 = 2;
LAB_00482c64:
      if (0xf < local_58) {
        pnVar9 = (nothrow_t *)(local_58 + 1);
        pvVar8 = local_6c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_6c[0] + -4);
          pnVar9 = (nothrow_t *)(local_58 + 0x24);
          if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8))) goto LAB_00482c8a;
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
LAB_00482c9a:
    local_14 = 0;
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c[0] + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_00482f01:
      local_14 = 0;
      operator_delete(pvVar8,pnVar9);
    }
  }
  else {
    if (*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 2) {
      ghidra::str::ctor(abStack_9c,(std::string *)((char *)this + 0x20));
      pSVar4 = GameData::getShipWithRego();
      if (pSVar4 != (Ship *)0x0) {
        uStack_98 = 0x482d19;
        strUsingArgs((char *)local_6c);
        local_14 = 5;
        if (pSVar4 == ShipData::currentlyBoardedShip) {
          ghidra::str::append((std::string *)&local_54,"`7to `%[here]\n",0xe);
        }
        else {
          pbVar5 = (std::string *)strUsingArgs((char *)local_3c);
          local_14 = 6;
          ghidra::str::append((std::string *)&local_54,pbVar5);
          local_14 = 5;
          if (0xf < local_28) {
            pnVar9 = (nothrow_t *)(local_28 + 1);
            pvVar8 = local_3c[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar8 = *(void **)((int)local_3c[0] + -4);
              pnVar9 = (nothrow_t *)(local_28 + 0x24);
              if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,pnVar9);
          }
          local_2c = 0;
          local_28 = 0xf;
          local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        }
        if ((in_stack_0000000c != '\0') && (*(int *)(pSVar4 + 0x24) != *(int *)(g_gameData + 0xd8)))
        {
          pbVar5 = (std::string *)strUsingArgs((char *)local_3c);
          local_14 = 7;
          ghidra::str::append((std::string *)&local_54,pbVar5);
          local_14 = 5;
          if (0xf < local_28) {
            pnVar9 = (nothrow_t *)(local_28 + 1);
            pvVar8 = local_3c[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar8 = *(void **)((int)local_3c[0] + -4);
              pnVar9 = (nothrow_t *)(local_28 + 0x24);
              if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,pnVar9);
          }
        }
        local_14 = 0;
        if (0xf < local_58) {
          pnVar9 = (nothrow_t *)(local_58 + 1);
          pvVar8 = local_6c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_6c[0] + -4);
            pnVar9 = (nothrow_t *)(local_58 + 0x24);
            if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_00482f01;
        }
        goto LAB_00482f1c;
      }
      uVar11 = 0x1c;
      pcVar10 = "Error: Unknown destination.\n";
    }
    else {
      ghidra::str::ctor(abStack_9c,(std::string *)((char *)this + 0x38));
      pSVar4 = GameData::getShipWithRego();
      if (pSVar4 != (Ship *)0x0) {
        uStack_98 = 0x482eab;
        strUsingArgs((char *)local_3c);
        local_14 = 8;
        if (pSVar4 != ShipData::currentlyBoardedShip) {
          pbVar5 = (std::string *)strUsingArgs((char *)local_6c);
          local_14 = 9;
          ghidra::str::append((std::string *)&local_54,pbVar5);
          local_14 = 8;
          goto LAB_00482c64;
        }
        ghidra::str::append((std::string *)&local_54,"`7from `%[here]",0xf);
        goto LAB_00482c9a;
      }
      uVar11 = 0x17;
      pcVar10 = "Error: unknown origin.\n";
    }
LAB_00482f14:
    ghidra::str::append((std::string *)&local_54,pcVar10,uVar11);
  }
LAB_00482f1c:
  if (in_stack_0000000c == '\0') {
    ghidra::str::ctor(abStack_9c,(std::string *)(*(int *)((char *)this + 0x54) + 0x48))
    ;
    local_14 = 10;
    pFVar6 = ghidra::any_singleton();
    local_14 = 0;
    pFVar7 = (pFVar6)->getFactionForID();
    if (pFVar7 == (Faction *)0x0) {
      ghidra::str::append((std::string *)&local_54,"Error: unknown faction.",0x17);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 0xb;
      pcVar10 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar10 = *(char **)pcVar3;
      }
      ghidra::str::append((std::string *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
      if (0xf < local_28) {
        pnVar9 = (nothrow_t *)(local_28 + 1);
        pvVar8 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_3c[0] + -4);
          pnVar9 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) {
LAB_00482c8a:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
  }
  *(undefined4 *)(_param_1 + 0x10) = 0;
  *(undefined4 *)(_param_1 + 0x14) = 0;
  *(void **)_param_1 = local_54;
  *(undefined4 *)(_param_1 + 4) = uStack_50;
  *(undefined4 *)(_param_1 + 8) = uStack_4c;
  *(undefined4 *)(_param_1 + 0xc) = uStack_48;
  *(ulonglong *)(_param_1 + 0x10) = CONCAT44(uStack_40,local_44);
LAB_00482ff0:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall Contract::describeShort(Contract *this)
void Contract::describeShort()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Good *pGVar5;
  word *pwVar6;
  char *pcVar7;
  Ship *pSVar8;
  Ship *pSVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  word *in_stack_00000004;
  std::string abStack_60 [4];
  undefined4 uStack_5c;
  char *pcVar12;
  uint uVar13;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bae31;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (word)0x0;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_60,*(std::string **)((char *)this + 0x58));
  pGVar5 = GameData::getGoodWithShortName();
  if (pGVar5 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good: \'%s\'");
  }
  uStack_5c = 0x4830d5;
  pwVar6 = (word *)strUsingArgs((char *)local_2c);
  if (in_stack_00000004 != pwVar6) {
    // [mislabelled-dtor] word::~word(in_stack_00000004);
    uVar2 = *(undefined4 *)(pwVar6 + 4);
    uVar3 = *(undefined4 *)(pwVar6 + 8);
    uVar4 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)in_stack_00000004 = *(undefined4 *)pwVar6;
    *(undefined4 *)(in_stack_00000004 + 4) = uVar2;
    *(undefined4 *)(in_stack_00000004 + 8) = uVar3;
    *(undefined4 *)(in_stack_00000004 + 0xc) = uVar4;
    *(undefined8 *)(in_stack_00000004 + 0x10) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  ghidra::str::append((std::string *)in_stack_00000004," ",1);
  if ((*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 0) || (*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 2)
     ) {
    pcVar7 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 1;
    pcVar12 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar12 = *(char **)pcVar7;
    }
    ghidra::str::append
              ((std::string *)in_stack_00000004,pcVar12,*(uint *)(pcVar7 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    ghidra::str::ctor(abStack_60,(std::string *)((char *)this + 0x38));
    pSVar8 = GameData::getShipWithRego();
    if (pSVar8 == ShipData::currentlyBoardedShip) {
      uVar13 = 8;
      pcVar12 = "`2[here]";
    }
    else {
      pSVar9 = pSVar8 + 8;
      if (0xf < *(uint *)(pSVar8 + 0x1c)) {
        pSVar9 = *(Ship **)(pSVar8 + 8);
      }
      ghidra::str::append
                ((std::string *)in_stack_00000004,(char *)pSVar9,*(uint *)(pSVar8 + 0x18));
      ghidra::str::append((std::string *)in_stack_00000004,"`2 (`!",6);
      iVar1 = *(int *)(pSVar8 + 0x24);
      pcVar12 = (char *)(iVar1 + 0x1c);
      if (0xf < *(uint *)(iVar1 + 0x30)) {
        pcVar12 = *(char **)(iVar1 + 0x1c);
      }
      ghidra::str::append
                ((std::string *)in_stack_00000004,pcVar12,*(uint *)(iVar1 + 0x2c));
      uVar13 = 3;
      pcVar12 = "`2)";
    }
  }
  else {
    uVar13 = 0xd;
    pcVar12 = "`2[anywhere] ";
  }
  ghidra::str::append((std::string *)in_stack_00000004,pcVar12,uVar13);
  ghidra::str::append((std::string *)in_stack_00000004," `2to `7",8);
  if ((*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 1) || (*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 2)
     ) {
    ghidra::str::ctor(abStack_60,(std::string *)((char *)this + 0x20));
    pSVar9 = GameData::getShipWithRego();
    pSVar8 = pSVar9 + 8;
    if (0xf < *(uint *)(pSVar9 + 0x1c)) {
      pSVar8 = *(Ship **)(pSVar9 + 8);
    }
    ghidra::str::append
              ((std::string *)in_stack_00000004,(char *)pSVar8,*(uint *)(pSVar9 + 0x18));
    ghidra::str::append((std::string *)in_stack_00000004,"`2 (`!",6);
    iVar1 = *(int *)(pSVar9 + 0x24);
    pcVar12 = (char *)(iVar1 + 0x1c);
    if (0xf < *(uint *)(iVar1 + 0x30)) {
      pcVar12 = *(char **)(iVar1 + 0x1c);
    }
    ghidra::str::append((std::string *)in_stack_00000004,pcVar12,*(uint *)(iVar1 + 0x2c))
    ;
    uVar13 = 3;
    pcVar12 = "`2)";
  }
  else {
    uVar13 = 0xd;
    pcVar12 = "`2[anywhere] ";
  }
  ghidra::str::append((std::string *)in_stack_00000004,pcVar12,uVar13);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Contract::describeShortToVector(Contract *this)
void Contract::describeShortToVector()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Good *pGVar5;
  std::string *pbVar6;
  Ship *pSVar7;
  std::string *pbVar8;
  int iVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  ghidra::vector *in_stack_00000004;
  std::string abStack_5c [4];
  undefined4 uStack_58;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005baeb9;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_5c,*(std::string **)((char *)this + 0x58));
  pGVar5 = GameData::getGoodWithShortName();
  if (pGVar5 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good: \'%s\'");
  }
  uStack_58 = 0x4833a5;
  pbVar6 = (std::string *)strUsingArgs((char *)&local_2c);
  // [seh] local_8 = 1;
  pbVar1 = *(std::string **)(in_stack_00000004 + 4);
  if (*(std::string **)(in_stack_00000004 + 8) == pbVar1) {
    ghidra::lib::vector___Emplace_reallocate(in_stack_00000004,pbVar1,pbVar6);
  }
  else {
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0;
    uVar2 = *(undefined4 *)(pbVar6 + 4);
    uVar3 = *(undefined4 *)(pbVar6 + 8);
    uVar4 = *(undefined4 *)(pbVar6 + 0xc);
    *(undefined4 *)pbVar1 = *(undefined4 *)pbVar6;
    *(undefined4 *)(pbVar1 + 4) = uVar2;
    *(undefined4 *)(pbVar1 + 8) = uVar3;
    *(undefined4 *)(pbVar1 + 0xc) = uVar4;
    *(undefined8 *)(pbVar1 + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
    *(undefined4 *)(pbVar6 + 0x10) = 0;
    *(undefined4 *)(pbVar6 + 0x14) = 0xf;
    *pbVar6 = (std::string)0x0;
    *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
  }
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < uStack_18) {
    pnVar11 = (nothrow_t *)(uStack_18 + 1);
    pvVar10 = local_2c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c + -4);
      pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  ghidra::str::assign((std::string *)&local_2c," ",1);
  pvVar10 = local_2c;
  // [seh] local_8 = 2;
  pbVar1 = *(std::string **)(in_stack_00000004 + 4);
  if (*(std::string **)(in_stack_00000004 + 8) == pbVar1) {
    ghidra::lib::vector___Emplace_reallocate(in_stack_00000004,pbVar1,(std::string *)&local_2c);
    uVar12 = uStack_18;
  }
  else {
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    *(void **)pbVar1 = pvVar10;
    *(undefined4 *)(pbVar1 + 4) = uStack_28;
    *(undefined4 *)(pbVar1 + 8) = uStack_24;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_20;
    *(ulonglong *)(pbVar1 + 0x10) = CONCAT44(uStack_18,local_1c);
    *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
    uVar12 = 0xf;
  }
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < uVar12) {
    pnVar11 = (nothrow_t *)(uVar12 + 1);
    pvVar10 = local_2c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c + -4);
      pnVar11 = (nothrow_t *)(uVar12 + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  if ((*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 0) || (*(int *)(*(int *)((char *)this + 0x54) + 0x18) == 2)
     ) {
    pbVar8 = (std::string *)strUsingArgs((char *)&local_2c);
    // [seh] local_8 = 3;
    ghidra::lib::vector__push_back(in_stack_00000004,pbVar8);
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    ghidra::str::ctor(abStack_5c,(std::string *)((char *)this + 0x38));
    pSVar7 = GameData::getShipWithRego();
    pbVar8 = *(std::string **)(in_stack_00000004 + 4);
    if (*(std::string **)(in_stack_00000004 + 8) == pbVar8) {
      ghidra::lib::vector___Emplace_reallocate
                (in_stack_00000004,(std::string *)pbVar8,(std::string *)(pSVar7 + 8));
    }
    else {
      ghidra::str::ctor(pbVar8,(std::string *)(pSVar7 + 8));
      *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
    }
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    ghidra::str::assign((std::string *)&local_2c,"`2[anywhere] ",0xd);
    // [seh] local_8 = 4;
    ghidra::lib::vector__push_back(in_stack_00000004,(std::string *)&local_2c);
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
  iVar9 = *(int *)((char *)this + 0x54);
  if ((*(int *)(iVar9 + 0x18) == 1) || (*(int *)(iVar9 + 0x18) == 2)) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    ghidra::str::assign((std::string *)&local_2c," `2to `7",8);
    pvVar10 = local_2c;
    // [seh] local_8 = 5;
    pbVar1 = *(std::string **)(in_stack_00000004 + 4);
    if (*(std::string **)(in_stack_00000004 + 8) == pbVar1) {
      ghidra::lib::vector___Emplace_reallocate(in_stack_00000004,pbVar1,(std::string *)&local_2c);
      uVar12 = uStack_18;
    }
    else {
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      *(void **)pbVar1 = pvVar10;
      *(undefined4 *)(pbVar1 + 4) = uStack_28;
      *(undefined4 *)(pbVar1 + 8) = uStack_24;
      *(undefined4 *)(pbVar1 + 0xc) = uStack_20;
      *(ulonglong *)(pbVar1 + 0x10) = CONCAT44(uStack_18,local_1c);
      *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
      uVar12 = 0xf;
    }
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < uVar12) {
      pnVar11 = (nothrow_t *)(uVar12 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c + -4);
        pnVar11 = (nothrow_t *)(uVar12 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    ghidra::str::ctor(abStack_5c,(std::string *)((char *)this + 0x20));
    pSVar7 = GameData::getShipWithRego();
    pbVar8 = *(std::string **)(in_stack_00000004 + 4);
    if (*(std::string **)(in_stack_00000004 + 8) == pbVar8) {
      ghidra::lib::vector___Emplace_reallocate
                (in_stack_00000004,(std::string *)pbVar8,(std::string *)(pSVar7 + 8));
    }
    else {
      ghidra::str::ctor(pbVar8,(std::string *)(pSVar7 + 8));
      *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
    }
    ghidra::str::ctor(abStack_5c,(std::string *)((char *)this + 0x20));
    GameData::getSectorOfShip();
    pbVar8 = (std::string *)strUsingArgs((char *)&local_2c);
    // [seh] local_8 = 6;
    ghidra::lib::vector__push_back(in_stack_00000004,pbVar8);
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    iVar9 = *(int *)((char *)this + 0x54);
  }
  if (0 < *(int *)(iVar9 + 0x44)) {
    iVar9 = hoursLeft(this);
    if (iVar9 < 1) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      ghidra::str::assign((std::string *)&local_2c,"`$** expired **",0xf);
      // [seh] local_8 = 8;
      ghidra::lib::vector__push_back(in_stack_00000004,(std::string *)&local_2c);
      if (uStack_18 < 0x10) goto LAB_00483814;
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      uStack_58 = 0x483769;
      pbVar8 = (std::string *)strUsingArgs((char *)&local_2c);
      // [seh] local_8 = 7;
      ghidra::lib::vector__push_back(in_stack_00000004,pbVar8);
      if (uStack_18 < 0x10) goto LAB_00483814;
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar10 = local_2c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        pvVar10 = *(void **)((int)local_2c + -4);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)*(void **)((int)local_2c + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
LAB_00483814:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Contract::performContractCompletion(Contract *this)
void Contract::performContractCompletion()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff70[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff58[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff40[1] = {0};  // [pseudo] address of an unnamed stack slot
  FlagManager *pFVar1;
  word *pwVar2;
  EmailManager *pEVar3;
  Stats *this_00;
  int iVar4;
  LogSystem *this_01;
  int iVar5;
  LogSystem *this_02;
  void *pvVar6;
  LogSystem *this_03;
  nothrow_t *pnVar7;
  int iVar8;
  std::string abStack_bc [8];
  undefined4 uStack_b4;
  std::string local_a4 [8];
  undefined4 uStack_9c;
  int local_60;
  uint local_5c;
  Faction *local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005baf37;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  iVar8 = *(int *)((char *)this + 0x54);
  local_5c = 0;
  local_60 = 0;
  iVar4 = *(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x7c);
  iVar5 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar5 != iVar5) {
    local_58 = (Faction *)0x0;
    // [seh] puStack_20 = &stack0xfffffffc;
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffff70,
                 (std::string *)(*(int *)(iVar8 + 0x7c) + (int)local_58));
      local_14 = 0;
      pFVar1 = ghidra::any_singleton();
      local_14 = 0xffffffff;
      (pFVar1)->setFlag();
      local_5c = local_5c + 1;
      local_58 = (Faction *)((int)local_58 + 0x18);
      iVar8 = *(int *)((char *)this + 0x54);
    } while (local_5c < (uint)((*(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x7c)) / 0x18));
  }
  if (0 < *(int *)((char *)this + 0x50)) {
    ghidra::str::assign((std::string *)&stack0xffffff74,"Contract Bonus",0xe);
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    local_60 = *(int *)((char *)this + 0x50);
    LogSystem::addLogLine
              (this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
    iVar8 = *(int *)((char *)this + 0x54);
  }
  local_58 = (Faction *)0x0;
  if (0 < *(int *)(iVar8 + 0x60)) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffff74,(std::string *)(iVar8 + 0x48));
    local_14 = 1;
    if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
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
    local_14 = 0xffffffff;
    local_58 = (ghidra::Singleton<void>::instance)->getFactionForID();
    (local_58)->modifyState(*(int *)(*(int *)((char *)this + 0x54) + 0x60));
    iVar8 = *(int *)((char *)this + 0x54);
  }
  iVar5 = *(int *)(iVar8 + 0xa4);
  if (0 < iVar5) {
    if (*(float *)((char *)this + 0x18) == -1.0) {
      iVar4 = -1;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0xa4);
      iVar4 = (int)(*(float *)((char *)this + 0x1c) -
                   ((float)(*(int *)(g_gameLogic + 0x184) +
                           ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) *
                            0x1f + *(int *)(g_gameLogic + 0x188)) * 0x18) - *(float *)((char *)this + 0x18))
                   );
    }
    if (*(int *)(iVar8 + 0x44) <= iVar4) {
      local_60 = local_60 + iVar5;
      ghidra::str::assign((std::string *)&stack0xffffff74,"Contract Time Bonus",0x13);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
      LogSystem::addLogLine
                (this_02,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
    }
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff74,(std::string *)((char *)this + 0x38));
  GameData::getShipWithRego();
  ghidra::str::ctor
            ((std::string *)&stack0xffffff74,(std::string *)((char *)this + 0x20));
  GameData::getShipWithRego();
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 2;
  if (local_60 < 1) {
    pwVar2 = (word *)strUsingArgs((char *)local_54);
    if ((word *)&local_3c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_3c);
      local_3c = *(void **)pwVar2;
      uStack_38 = *(undefined4 *)(pwVar2 + 4);
      uStack_34 = *(undefined4 *)(pwVar2 + 8);
      uStack_30 = *(undefined4 *)(pwVar2 + 0xc);
      local_2c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (local_40 < 0x10) goto LAB_00483c91;
    pnVar7 = (nothrow_t *)(local_40 + 1);
    pvVar6 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_54[0] + -4);
      pnVar7 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    pwVar2 = (word *)strUsingArgs((char *)local_54);
    if ((word *)&local_3c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_3c);
      local_3c = *(void **)pwVar2;
      uStack_38 = *(undefined4 *)(pwVar2 + 4);
      uStack_34 = *(undefined4 *)(pwVar2 + 8);
      uStack_30 = *(undefined4 *)(pwVar2 + 0xc);
      local_2c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (local_40 < 0x10) goto LAB_00483c91;
    pnVar7 = (nothrow_t *)(local_40 + 1);
    pvVar6 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pnVar7 = (nothrow_t *)(local_40 + 0x24);
      pvVar6 = *(void **)((int)local_54[0] + -4);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)*(void **)((int)local_54[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete(pvVar6,pnVar7);
LAB_00483c91:
  ghidra::str::ctor
            ((std::string *)&stack0xffffff74,(std::string *)&local_3c);
  local_14._0_1_ = 3;
  local_a4[0] = (std::string)0x0;
  ghidra::str::assign(local_a4,"Contract Complete",0x11);
  local_14._0_1_ = 4;
  ghidra::str::ctor(abStack_bc,(std::string *)(local_58 + 0x20));
  local_14._0_1_ = 5;
  pEVar3 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
    pEVar3 = operator_new(0x2c);
    ghidra::Singleton<void>::instance = pEVar3;
    *pEVar3 = (byte)0x0;
    *(undefined4 *)(pEVar3 + 4) = 0;
    *(undefined4 *)(pEVar3 + 8) = 0;
    *(undefined4 *)(pEVar3 + 0xc) = 0;
    *(undefined4 *)(pEVar3 + 0x10) = 0;
    *(undefined4 *)(pEVar3 + 0x14) = 0;
    *(undefined4 *)(pEVar3 + 0x18) = 0;
    *(undefined4 *)(pEVar3 + 0x1c) = 0;
    *(undefined4 *)(pEVar3 + 0x20) = 0;
    *(undefined4 *)(pEVar3 + 0x24) = 0;
    *(undefined4 *)(pEVar3 + 0x28) = 0;
  }
  local_14._0_1_ = 2;
  (pEVar3)->addCustomEmail();
  (this_03)->addLogLine(*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224), &DAT_00000001)
  ;
  debugPrint("GAME","Contract completed; flags and rewards set/given.");
  ghidra::str::assign((std::string *)&stack0xffffff74,"contracts_completed",0x13);
  local_14._0_1_ = 6;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    local_14._0_1_ = 7;
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
  }
  local_14._0_1_ = 2;
  (Singleton<Stats>::instance)->addStat();
  uStack_9c = 0x483e0a;
  ghidra::str::assign((std::string *)&stack0xffffff70,"",0);
  local_14._0_1_ = 8;
  uStack_b4 = 0x483e33;
  ghidra::str::assign((std::string *)&stack0xffffff58,"contracts_completed",0x13);
  local_14._0_1_ = 9;
  ghidra::str::assign((std::string *)&stack0xffffff40,"commerce",8);
  local_14 = CONCAT31(local_14._1_3_,2);
  Analytics::logEvent();
  if (0xf < local_2c._4_4_) {
    pnVar7 = (nothrow_t *)(local_2c._4_4_ + 1);
    pvVar6 = local_3c;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_3c + -4);
      pnVar7 = (nothrow_t *)(local_2c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall Contract::performContractFailure(Contract *this)
void Contract::performContractFailure()

{
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  FlagManager *pFVar1;
  EmailManager *pEVar2;
  Stats *this_00;
  int iVar3;
  uint extraout_ECX;
  LogSystem *this_01;
  uint extraout_ECX_00;
  int iVar4;
  Faction *this_02;
  int iVar5;
  std::string abStack_74 [12];
  undefined4 uStack_68;
  uint local_5c;
  uint local_44;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005baf9f;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (ContractManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(1);
  }
  ContractManager::m_contractNumber = -1;
  iVar5 = *(int *)((char *)this + 0x54);
  local_14 = 0;
  iVar3 = *(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88);
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffffb8,
                 (std::string *)(*(int *)(iVar5 + 0x88) + iVar4));
      // [seh] local_8 = 0;
      pFVar1 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar1)->setFlag();
      iVar5 = *(int *)((char *)this + 0x54);
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 0x18;
    } while (local_14 < (uint)((*(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88)) / 0x18));
  }
  this_02 = (Faction *)0x0;
  if (0 < *(int *)(iVar5 + 100)) {
    ghidra::str::ctor
              ((std::string *)&local_44,(std::string *)(iVar5 + 0x48));
    // [seh] local_8 = 1;
    if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
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
    // [seh] local_8 = 0xffffffff;
    this_02 = (ghidra::Singleton<void>::instance)->getFactionForID();
    (this_02)->modifyState(-*(int *)(*(int *)((char *)this + 0x54) + 100));
  }
  ghidra::str::ctor((std::string *)&local_44,(std::string *)((char *)this + 0x38));
  GameData::getShipWithRego();
  ghidra::str::ctor((std::string *)&local_44,(std::string *)((char *)this + 0x20));
  GameData::getShipWithRego();
  local_5c = 0x484070;
  strUsingArgs((char *)&local_44);
  // [seh] local_8 = 2;
  local_5c = extraout_ECX & 0xffffff00;
  uStack_68 = 0x48409a;
  ghidra::str::assign((std::string *)&local_5c,"Contract Failed",0xf);
  // [seh] local_8._0_1_ = 3;
  ghidra::str::ctor(abStack_74,(std::string *)(this_02 + 0x20));
  // [seh] local_8 = CONCAT31(local_8._1_3_,4);
  pEVar2 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
    pEVar2 = operator_new(0x2c);
    ghidra::Singleton<void>::instance = pEVar2;
    *pEVar2 = (byte)0x0;
    *(undefined4 *)(pEVar2 + 4) = 0;
    *(undefined4 *)(pEVar2 + 8) = 0;
    *(undefined4 *)(pEVar2 + 0xc) = 0;
    *(undefined4 *)(pEVar2 + 0x10) = 0;
    *(undefined4 *)(pEVar2 + 0x14) = 0;
    *(undefined4 *)(pEVar2 + 0x18) = 0;
    *(undefined4 *)(pEVar2 + 0x1c) = 0;
    *(undefined4 *)(pEVar2 + 0x20) = 0;
    *(undefined4 *)(pEVar2 + 0x24) = 0;
    *(undefined4 *)(pEVar2 + 0x28) = 0;
  }
  // [seh] local_8 = 0xffffffff;
  (pEVar2)->addCustomEmail();
  (this_01)->addLogLine(*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224), &DAT_00000002)
  ;
  local_44 = 0x484151;
  debugPrint("GAME","Contract failed; flags and rewards set/given.");
  local_44 = extraout_ECX_00 & 0xffffff00;
  ghidra::str::assign((std::string *)&local_44,"contracts_failed",0x10);
  // [seh] local_8 = 5;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  (Singleton<Stats>::instance)->addStat();
  // [seh] ExceptionList = local_10;
  return;
}
