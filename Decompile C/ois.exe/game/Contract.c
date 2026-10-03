#include "../ois.exe.h"


// public: void * __thiscall Contract::`scalar deleting destructor'(unsigned int)

void * __thiscall Contract::_scalar_deleting_destructor_(Contract *this,uint param_1)

{
  ContractCargoInstance *this_00;
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  this_00 = *(ContractCargoInstance **)(this + 0x58);
  if (this_00 != (ContractCargoInstance *)0x0) {
    ContractCargoInstance::_scalar_deleting_destructor_(this_00,(uint)this_00);
    *(undefined4 *)(this + 0x58) = 0;
  }
  uVar1 = *(uint *)(this + 0x4c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x38);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040fea0;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0xf;
  this[0x38] = (Contract)0x0;
  uVar1 = *(uint *)(this + 0x34);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x20);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040fea0;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xf;
  this[0x20] = (Contract)0x0;
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0040fea0:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (Contract)0x0;
  operator_delete(this,(nothrow_t *)0x5c);
  return this;
}


// public: int __thiscall Contract::hoursLeft(void)

int __thiscall Contract::hoursLeft(Contract *this)

{
  if (*(float *)(this + 0x18) == -1.0) {
    return -1;
  }
  return (int)(*(float *)(this + 0x1c) -
              ((float)(*(int *)(g_gameLogic + 0x184) +
                      ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
                      *(int *)(g_gameLogic + 0x188)) * 0x18) - *(float *)(this + 0x18)));
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall Contract::describeThreeLines(bool,bool)

void __thiscall Contract::describeThreeLines(Contract *this,bool param_1,bool param_2)

{
  bool bVar1;
  Good *pGVar2;
  char *pcVar3;
  Ship *pSVar4;
  basic_string<> *pbVar5;
  FictionData *pFVar6;
  Faction *pFVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  basic_string<> abStack_9c [4];
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
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bade0;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_44 = 0;
  uStack_40 = 0xf;
  local_54 = (void *)((uint)local_54 & 0xffffff00);
  local_14 = 0;
  uStack_13 = 0;
  std::basic_string<>::basic_string<>(abStack_9c,*(basic_string<> **)(this + 0x58));
  pGVar2 = GameData::getGoodWithShortName();
  if (pGVar2 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good type \'%s\'");
    bVar1 = cc_assert_script_compatible("Unknown good type.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s");
    }
    *(undefined4 *)(_param_1 + 0x10) = 0;
    *(undefined4 *)(_param_1 + 0x14) = 0xf;
    *_param_1 = (basic_string<>)0x0;
    std::basic_string<>::assign(_param_1,"Error: unknown good.",0x14);
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
  std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
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
  if (*(int *)(*(int *)(this + 0x54) + 0x18) == 1) {
    std::basic_string<>::basic_string<>(abStack_9c,(basic_string<> *)(this + 0x20));
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
      std::basic_string<>::append((basic_string<> *)&local_54,"`7needed at `%[here]\n",0x15);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_6c);
      local_14 = 3;
      pcVar10 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar10 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
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
      pbVar5 = (basic_string<> *)strUsingArgs((char *)local_6c);
      local_14 = 4;
      std::basic_string<>::append((basic_string<> *)&local_54,pbVar5);
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
    if (*(int *)(*(int *)(this + 0x54) + 0x18) == 2) {
      std::basic_string<>::basic_string<>(abStack_9c,(basic_string<> *)(this + 0x20));
      pSVar4 = GameData::getShipWithRego();
      if (pSVar4 != (Ship *)0x0) {
        uStack_98 = 0x482d19;
        strUsingArgs((char *)local_6c);
        local_14 = 5;
        if (pSVar4 == ShipData::currentlyBoardedShip) {
          std::basic_string<>::append((basic_string<> *)&local_54,"`7to `%[here]\n",0xe);
        }
        else {
          pbVar5 = (basic_string<> *)strUsingArgs((char *)local_3c);
          local_14 = 6;
          std::basic_string<>::append((basic_string<> *)&local_54,pbVar5);
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
          pbVar5 = (basic_string<> *)strUsingArgs((char *)local_3c);
          local_14 = 7;
          std::basic_string<>::append((basic_string<> *)&local_54,pbVar5);
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
      std::basic_string<>::basic_string<>(abStack_9c,(basic_string<> *)(this + 0x38));
      pSVar4 = GameData::getShipWithRego();
      if (pSVar4 != (Ship *)0x0) {
        uStack_98 = 0x482eab;
        strUsingArgs((char *)local_3c);
        local_14 = 8;
        if (pSVar4 != ShipData::currentlyBoardedShip) {
          pbVar5 = (basic_string<> *)strUsingArgs((char *)local_6c);
          local_14 = 9;
          std::basic_string<>::append((basic_string<> *)&local_54,pbVar5);
          local_14 = 8;
          goto LAB_00482c64;
        }
        std::basic_string<>::append((basic_string<> *)&local_54,"`7from `%[here]",0xf);
        goto LAB_00482c9a;
      }
      uVar11 = 0x17;
      pcVar10 = "Error: unknown origin.\n";
    }
LAB_00482f14:
    std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,uVar11);
  }
LAB_00482f1c:
  if (in_stack_0000000c == '\0') {
    std::basic_string<>::basic_string<>(abStack_9c,(basic_string<> *)(*(int *)(this + 0x54) + 0x48))
    ;
    local_14 = 10;
    pFVar6 = Singleton<>::getInstance();
    local_14 = 0;
    pFVar7 = FictionData::getFactionForID(pFVar6);
    if (pFVar7 == (Faction *)0x0) {
      std::basic_string<>::append((basic_string<> *)&local_54,"Error: unknown faction.",0x17);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 0xb;
      pcVar10 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar10 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,*(uint *)(pcVar3 + 0x10));
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
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall Contract::describeShort(void)

void __thiscall Contract::describeShort(Contract *this)

{
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
  basic_string<> abStack_60 [4];
  undefined4 uStack_5c;
  char *pcVar12;
  uint uVar13;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005bae31;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (word)0x0;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_60,*(basic_string<> **)(this + 0x58));
  pGVar5 = GameData::getGoodWithShortName();
  if (pGVar5 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good: \'%s\'");
  }
  uStack_5c = 0x4830d5;
  pwVar6 = (word *)strUsingArgs((char *)local_2c);
  if (in_stack_00000004 != pwVar6) {
    word::~word(in_stack_00000004);
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
  std::basic_string<>::append((basic_string<> *)in_stack_00000004," ",1);
  if ((*(int *)(*(int *)(this + 0x54) + 0x18) == 0) || (*(int *)(*(int *)(this + 0x54) + 0x18) == 2)
     ) {
    pcVar7 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 1;
    pcVar12 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar12 = *(char **)pcVar7;
    }
    std::basic_string<>::append
              ((basic_string<> *)in_stack_00000004,pcVar12,*(uint *)(pcVar7 + 0x10));
    local_8 = local_8 & 0xffffff00;
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
    std::basic_string<>::basic_string<>(abStack_60,(basic_string<> *)(this + 0x38));
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
      std::basic_string<>::append
                ((basic_string<> *)in_stack_00000004,(char *)pSVar9,*(uint *)(pSVar8 + 0x18));
      std::basic_string<>::append((basic_string<> *)in_stack_00000004,"`2 (`!",6);
      iVar1 = *(int *)(pSVar8 + 0x24);
      pcVar12 = (char *)(iVar1 + 0x1c);
      if (0xf < *(uint *)(iVar1 + 0x30)) {
        pcVar12 = *(char **)(iVar1 + 0x1c);
      }
      std::basic_string<>::append
                ((basic_string<> *)in_stack_00000004,pcVar12,*(uint *)(iVar1 + 0x2c));
      uVar13 = 3;
      pcVar12 = "`2)";
    }
  }
  else {
    uVar13 = 0xd;
    pcVar12 = "`2[anywhere] ";
  }
  std::basic_string<>::append((basic_string<> *)in_stack_00000004,pcVar12,uVar13);
  std::basic_string<>::append((basic_string<> *)in_stack_00000004," `2to `7",8);
  if ((*(int *)(*(int *)(this + 0x54) + 0x18) == 1) || (*(int *)(*(int *)(this + 0x54) + 0x18) == 2)
     ) {
    std::basic_string<>::basic_string<>(abStack_60,(basic_string<> *)(this + 0x20));
    pSVar9 = GameData::getShipWithRego();
    pSVar8 = pSVar9 + 8;
    if (0xf < *(uint *)(pSVar9 + 0x1c)) {
      pSVar8 = *(Ship **)(pSVar9 + 8);
    }
    std::basic_string<>::append
              ((basic_string<> *)in_stack_00000004,(char *)pSVar8,*(uint *)(pSVar9 + 0x18));
    std::basic_string<>::append((basic_string<> *)in_stack_00000004,"`2 (`!",6);
    iVar1 = *(int *)(pSVar9 + 0x24);
    pcVar12 = (char *)(iVar1 + 0x1c);
    if (0xf < *(uint *)(iVar1 + 0x30)) {
      pcVar12 = *(char **)(iVar1 + 0x1c);
    }
    std::basic_string<>::append((basic_string<> *)in_stack_00000004,pcVar12,*(uint *)(iVar1 + 0x2c))
    ;
    uVar13 = 3;
    pcVar12 = "`2)";
  }
  else {
    uVar13 = 0xd;
    pcVar12 = "`2[anywhere] ";
  }
  std::basic_string<>::append((basic_string<> *)in_stack_00000004,pcVar12,uVar13);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall
// Contract::describeShortToVector(void)

void __thiscall Contract::describeShortToVector(Contract *this)

{
  basic_string<> *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Good *pGVar5;
  basic_string<> *pbVar6;
  Ship *pSVar7;
  basic_string<> *pbVar8;
  int iVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  vector<> *in_stack_00000004;
  basic_string<> abStack_5c [4];
  undefined4 uStack_58;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005baeb9;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_5c,*(basic_string<> **)(this + 0x58));
  pGVar5 = GameData::getGoodWithShortName();
  if (pGVar5 == (Good *)0x0) {
    debugPrint("ERROR","Unknown good: \'%s\'");
  }
  uStack_58 = 0x4833a5;
  pbVar6 = (basic_string<> *)strUsingArgs((char *)&local_2c);
  local_8 = 1;
  pbVar1 = *(basic_string<> **)(in_stack_00000004 + 4);
  if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar1) {
    std::vector<>::_Emplace_reallocate<>(in_stack_00000004,pbVar1,pbVar6);
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
    *pbVar6 = (basic_string<>)0x0;
    *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
  }
  local_8 = local_8 & 0xffffff00;
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
  std::basic_string<>::assign((basic_string<> *)&local_2c," ",1);
  pvVar10 = local_2c;
  local_8 = 2;
  pbVar1 = *(basic_string<> **)(in_stack_00000004 + 4);
  if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar1) {
    std::vector<>::_Emplace_reallocate<>(in_stack_00000004,pbVar1,(basic_string<> *)&local_2c);
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
  local_8 = local_8 & 0xffffff00;
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
  if ((*(int *)(*(int *)(this + 0x54) + 0x18) == 0) || (*(int *)(*(int *)(this + 0x54) + 0x18) == 2)
     ) {
    pbVar8 = (basic_string<> *)strUsingArgs((char *)&local_2c);
    local_8 = 3;
    std::vector<>::push_back(in_stack_00000004,pbVar8);
    local_8 = local_8 & 0xffffff00;
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
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)(this + 0x38));
    pSVar7 = GameData::getShipWithRego();
    pbVar8 = *(basic_string<> **)(in_stack_00000004 + 4);
    if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar8) {
      std::vector<>::_Emplace_reallocate<>
                (in_stack_00000004,(basic_string<> *)pbVar8,(basic_string<> *)(pSVar7 + 8));
    }
    else {
      std::basic_string<>::basic_string<>(pbVar8,(basic_string<> *)(pSVar7 + 8));
      *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
    }
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)&local_2c,"`2[anywhere] ",0xd);
    local_8 = 4;
    std::vector<>::push_back(in_stack_00000004,(basic_string<> *)&local_2c);
    local_8 = local_8 & 0xffffff00;
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
  iVar9 = *(int *)(this + 0x54);
  if ((*(int *)(iVar9 + 0x18) == 1) || (*(int *)(iVar9 + 0x18) == 2)) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)&local_2c," `2to `7",8);
    pvVar10 = local_2c;
    local_8 = 5;
    pbVar1 = *(basic_string<> **)(in_stack_00000004 + 4);
    if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar1) {
      std::vector<>::_Emplace_reallocate<>(in_stack_00000004,pbVar1,(basic_string<> *)&local_2c);
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
    local_8 = local_8 & 0xffffff00;
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
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)(this + 0x20));
    pSVar7 = GameData::getShipWithRego();
    pbVar8 = *(basic_string<> **)(in_stack_00000004 + 4);
    if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar8) {
      std::vector<>::_Emplace_reallocate<>
                (in_stack_00000004,(basic_string<> *)pbVar8,(basic_string<> *)(pSVar7 + 8));
    }
    else {
      std::basic_string<>::basic_string<>(pbVar8,(basic_string<> *)(pSVar7 + 8));
      *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
    }
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)(this + 0x20));
    GameData::getSectorOfShip();
    pbVar8 = (basic_string<> *)strUsingArgs((char *)&local_2c);
    local_8 = 6;
    std::vector<>::push_back(in_stack_00000004,pbVar8);
    local_8 = local_8 & 0xffffff00;
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
    iVar9 = *(int *)(this + 0x54);
  }
  if (0 < *(int *)(iVar9 + 0x44)) {
    iVar9 = hoursLeft(this);
    if (iVar9 < 1) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_2c,"`$** expired **",0xf);
      local_8 = 8;
      std::vector<>::push_back(in_stack_00000004,(basic_string<> *)&local_2c);
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
      pbVar8 = (basic_string<> *)strUsingArgs((char *)&local_2c);
      local_8 = 7;
      std::vector<>::push_back(in_stack_00000004,pbVar8);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Contract::performContractCompletion(void)

void __thiscall Contract::performContractCompletion(Contract *this)

{
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
  basic_string<> abStack_bc [8];
  undefined4 uStack_b4;
  basic_string<> local_a4 [8];
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
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005baf37;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar8 = *(int *)(this + 0x54);
  local_5c = 0;
  local_60 = 0;
  iVar4 = *(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x7c);
  iVar5 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar5 != iVar5) {
    local_58 = (Faction *)0x0;
    puStack_20 = &stack0xfffffffc;
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff70,
                 (basic_string<> *)(*(int *)(iVar8 + 0x7c) + (int)local_58));
      local_14 = 0;
      pFVar1 = Singleton<>::getInstance();
      local_14 = 0xffffffff;
      FlagManager::setFlag(pFVar1);
      local_5c = local_5c + 1;
      local_58 = (Faction *)((int)local_58 + 0x18);
      iVar8 = *(int *)(this + 0x54);
    } while (local_5c < (uint)((*(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x7c)) / 0x18));
  }
  if (0 < *(int *)(this + 0x50)) {
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff74,"Contract Bonus",0xe);
    BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
    local_60 = *(int *)(this + 0x50);
    LogSystem::addLogLine
              (this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
    iVar8 = *(int *)(this + 0x54);
  }
  local_58 = (Faction *)0x0;
  if (0 < *(int *)(iVar8 + 0x60)) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff74,(basic_string<> *)(iVar8 + 0x48));
    local_14 = 1;
    if (Singleton<>::instance == (FictionData *)0x0) {
      Singleton<>::instance = operator_new(0x18);
      *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
      *(undefined4 *)Singleton<>::instance = 0;
      *(undefined4 *)(Singleton<>::instance + 4) = 0;
      *(undefined4 *)(Singleton<>::instance + 8) = 0;
      *(undefined4 *)(Singleton<>::instance + 0xc) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
    }
    local_14 = 0xffffffff;
    local_58 = FictionData::getFactionForID(Singleton<>::instance);
    Faction::modifyState(local_58,*(int *)(*(int *)(this + 0x54) + 0x60));
    iVar8 = *(int *)(this + 0x54);
  }
  iVar5 = *(int *)(iVar8 + 0xa4);
  if (0 < iVar5) {
    if (*(float *)(this + 0x18) == -1.0) {
      iVar4 = -1;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0xa4);
      iVar4 = (int)(*(float *)(this + 0x1c) -
                   ((float)(*(int *)(g_gameLogic + 0x184) +
                           ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) *
                            0x1f + *(int *)(g_gameLogic + 0x188)) * 0x18) - *(float *)(this + 0x18))
                   );
    }
    if (*(int *)(iVar8 + 0x44) <= iVar4) {
      local_60 = local_60 + iVar5;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff74,"Contract Time Bonus",0x13);
      BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
      LogSystem::addLogLine
                (this_02,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
    }
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff74,(basic_string<> *)(this + 0x38));
  GameData::getShipWithRego();
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff74,(basic_string<> *)(this + 0x20));
  GameData::getShipWithRego();
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 2;
  if (local_60 < 1) {
    pwVar2 = (word *)strUsingArgs((char *)local_54);
    if ((word *)&local_3c != pwVar2) {
      word::~word((word *)&local_3c);
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
      word::~word((word *)&local_3c);
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
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff74,(basic_string<> *)&local_3c);
  local_14._0_1_ = 3;
  local_a4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_a4,"Contract Complete",0x11);
  local_14._0_1_ = 4;
  std::basic_string<>::basic_string<>(abStack_bc,(basic_string<> *)(local_58 + 0x20));
  local_14._0_1_ = 5;
  pEVar3 = Singleton<>::instance;
  if (Singleton<>::instance == (EmailManager *)0x0) {
    pEVar3 = operator_new(0x2c);
    Singleton<>::instance = pEVar3;
    *pEVar3 = (EmailManager)0x0;
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
  EmailManager::addCustomEmail(pEVar3);
  LogSystem::addLogLine(this_03,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001)
  ;
  debugPrint("GAME","Contract completed; flags and rewards set/given.");
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff74,"contracts_completed",0x13);
  local_14._0_1_ = 6;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    local_14._0_1_ = 7;
    Singleton<Stats>::instance = (Stats *)Stats::Stats(this_00);
  }
  local_14._0_1_ = 2;
  Stats::addStat(Singleton<Stats>::instance);
  uStack_9c = 0x483e0a;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff70,"",0);
  local_14._0_1_ = 8;
  uStack_b4 = 0x483e33;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff58,"contracts_completed",0x13);
  local_14._0_1_ = 9;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff40,"commerce",8);
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
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall Contract::performContractFailure(void)

void __thiscall Contract::performContractFailure(Contract *this)

{
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
  basic_string<> abStack_74 [12];
  undefined4 uStack_68;
  uint local_5c;
  uint local_44;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005baf9f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (Singleton<>::instance == (ContractManager *)0x0) {
    Singleton<>::instance = operator_new(1);
  }
  ContractManager::m_contractNumber = -1;
  iVar5 = *(int *)(this + 0x54);
  local_14 = 0;
  iVar3 = *(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88);
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffffb8,
                 (basic_string<> *)(*(int *)(iVar5 + 0x88) + iVar4));
      local_8 = 0;
      pFVar1 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar1);
      iVar5 = *(int *)(this + 0x54);
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 0x18;
    } while (local_14 < (uint)((*(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88)) / 0x18));
  }
  this_02 = (Faction *)0x0;
  if (0 < *(int *)(iVar5 + 100)) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_44,(basic_string<> *)(iVar5 + 0x48));
    local_8 = 1;
    if (Singleton<>::instance == (FictionData *)0x0) {
      Singleton<>::instance = operator_new(0x18);
      *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
      *(undefined4 *)Singleton<>::instance = 0;
      *(undefined4 *)(Singleton<>::instance + 4) = 0;
      *(undefined4 *)(Singleton<>::instance + 8) = 0;
      *(undefined4 *)(Singleton<>::instance + 0xc) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
      *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
    }
    local_8 = 0xffffffff;
    this_02 = FictionData::getFactionForID(Singleton<>::instance);
    Faction::modifyState(this_02,-*(int *)(*(int *)(this + 0x54) + 100));
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&local_44,(basic_string<> *)(this + 0x38));
  GameData::getShipWithRego();
  std::basic_string<>::basic_string<>((basic_string<> *)&local_44,(basic_string<> *)(this + 0x20));
  GameData::getShipWithRego();
  local_5c = 0x484070;
  strUsingArgs((char *)&local_44);
  local_8 = 2;
  local_5c = extraout_ECX & 0xffffff00;
  uStack_68 = 0x48409a;
  std::basic_string<>::assign((basic_string<> *)&local_5c,"Contract Failed",0xf);
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)(this_02 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,4);
  pEVar2 = Singleton<>::instance;
  if (Singleton<>::instance == (EmailManager *)0x0) {
    pEVar2 = operator_new(0x2c);
    Singleton<>::instance = pEVar2;
    *pEVar2 = (EmailManager)0x0;
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
  local_8 = 0xffffffff;
  EmailManager::addCustomEmail(pEVar2);
  LogSystem::addLogLine(this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000002)
  ;
  local_44 = 0x484151;
  debugPrint("GAME","Contract failed; flags and rewards set/given.");
  local_44 = extraout_ECX_00 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_44,"contracts_failed",0x10);
  local_8 = 5;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    local_8 = CONCAT31(local_8._1_3_,6);
    Singleton<Stats>::instance = (Stats *)Stats::Stats(this_00);
  }
  local_8 = 0xffffffff;
  Stats::addStat(Singleton<Stats>::instance);
  ExceptionList = local_10;
  return;
}
