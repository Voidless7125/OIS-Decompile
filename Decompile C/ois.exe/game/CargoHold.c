#include "../ois.exe.h"


// public: void * __thiscall CargoHold::`scalar deleting destructor'(unsigned int)

void * __thiscall CargoHold::_scalar_deleting_destructor_(CargoHold *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)(this + 0x44);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 0x4c) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  operator_delete(this,(nothrow_t *)0x50);
  return this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall CargoHold::describePod(int,bool)

void __thiscall CargoHold::describePod(CargoHold *this,int param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  nothrow_t *pnVar7;
  undefined3 in_stack_00000009;
  char in_stack_0000000c;
  char *pcVar8;
  uint uVar9;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005c2bc1;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if (in_stack_0000000c == '\0') {
    iVar4 = *(int *)(this + _param_2 * 4 + 0xc);
    iVar3 = 1;
    do {
      if (*(char *)(iVar4 + iVar3) != '\0') {
        iVar3 = 1;
        goto LAB_00507164;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    std::basic_string<>::append((basic_string<> *)param_1,"`7",2);
  }
  goto LAB_00507205;
  while (iVar3 = iVar3 + 1, iVar3 < 3) {
LAB_00507164:
    if (*(char *)(iVar4 + iVar3) == '\0') {
      iVar3 = 1;
      goto LAB_00507188;
    }
  }
  std::basic_string<>::append((basic_string<> *)param_1,"`!",2);
  goto LAB_00507205;
  while (iVar4 = iVar4 + 1, iVar4 < 3) {
LAB_00507250:
    if (*(char *)(*(int *)(this + _param_2 * 4 + 0xc) + iVar4) == '\0') {
      bVar2 = true;
      iVar4 = 1;
      do {
        if (*(char *)(iVar4 + *(int *)(this + (_param_2 + 3) * 4)) != '\0') {
          if (!bVar2) {
            std::basic_string<>::append((basic_string<> *)param_1,"+",1);
          }
          pcVar8 = (&PTR_s_none_005e16c0)[iVar4];
          bVar2 = false;
          pcVar6 = pcVar8;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          std::basic_string<>::append
                    ((basic_string<> *)param_1,pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      goto LAB_005072cc;
    }
  }
  uVar9 = 8;
  pcVar8 = "upgraded";
  goto LAB_005072c5;
  while (iVar3 = iVar3 + 1, iVar3 < 3) {
LAB_00507188:
    if (*(char *)(iVar4 + iVar3) != '\0') {
      pcVar6 = (char *)strUsingArgs((char *)local_30,"`%c",
                                    (int)*(char *)((int)&goodContainmentOptionColour + iVar3),
                                    local_18);
      local_8 = 1;
      pcVar8 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar8 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)param_1,pcVar8,*(uint *)(pcVar6 + 0x10));
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_1c) {
        pnVar7 = (nothrow_t *)(local_1c + 1);
        pvVar5 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar5 = *(void **)((int)local_30[0] + -4);
          pnVar7 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar7);
      }
      break;
    }
  }
LAB_00507205:
  if (_param_2 < 0xe) {
    if (*(int *)(this + (_param_2 + 3) * 4) == 0) goto LAB_005072cc;
    iVar4 = 1;
    do {
      if (*(char *)(*(int *)(this + _param_2 * 4 + 0xc) + iVar4) != '\0') {
        iVar4 = 1;
        goto LAB_00507250;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    uVar9 = 8;
    pcVar8 = "standard";
  }
  else {
    uVar9 = 5;
    pcVar8 = "empty";
  }
LAB_005072c5:
  std::basic_string<>::append((basic_string<> *)param_1,pcVar8,uVar9);
LAB_005072cc:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall CargoHold::configureSlots(int,int)

void __thiscall CargoHold::configureSlots(CargoHold *this,int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  CargoHold *pCVar3;
  
  *(int *)(this + 8) = param_2;
  pCVar3 = this + 0xc;
  iVar2 = 0;
  do {
    if (iVar2 < param_1) {
      puVar1 = operator_new(0xc);
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined2 **)pCVar3 = puVar1;
    }
    iVar2 = iVar2 + 1;
    pCVar3 = pCVar3 + 4;
  } while (iVar2 < 0xe);
  return;
}


// public: int __thiscall CargoHold::totalUnitsFree(void)

int __thiscall CargoHold::totalUnitsFree(CargoHold *this)

{
  CargoHold *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  pCVar1 = this + 0x10;
  iVar3 = 7;
  do {
    if (*(int *)(pCVar1 + -4) != 0) {
      iVar2 = iVar2 + (0x14 - *(int *)(*(int *)(pCVar1 + -4) + 8));
    }
    if (*(int *)pCVar1 != 0) {
      iVar2 = iVar2 + (0x14 - *(int *)(*(int *)pCVar1 + 8));
    }
    pCVar1 = pCVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall CargoHold::describeCargo(bool)

basic_string<> * __thiscall CargoHold::describeCargo(CargoHold *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  basic_string<> *pbVar5;
  char *pcVar6;
  CargoHold *pCVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  iVar3 = 0;
  pCVar7 = this + 0x10;
  iVar11 = 7;
  do {
    if (*(int *)(pCVar7 + -4) != 0) {
      iVar3 = iVar3 + *(int *)(*(int *)(pCVar7 + -4) + 8);
    }
    if (*(int *)pCVar7 != 0) {
      iVar3 = iVar3 + *(int *)(*(int *)pCVar7 + 8);
    }
    pCVar7 = pCVar7 + 8;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (iVar3 == 0) {
    pcVar8 = "`7empty";
    if (in_stack_00000008 == '\0') {
      pcVar8 = "empty";
    }
    *(undefined4 *)(_param_1 + 0x10) = 0;
    *(undefined4 *)(_param_1 + 0x14) = 0xf;
    *_param_1 = (basic_string<>)0x0;
    pcVar6 = pcVar8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::assign(_param_1,pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
    return _param_1;
  }
  iVar11 = -1;
  pCVar7 = this + 0xc;
  iVar3 = 0;
  do {
    iVar2 = *(int *)pCVar7;
    if (iVar2 != 0) {
      if ((iVar11 == -1) && (0 < *(int *)(iVar2 + 8))) {
        iVar11 = *(int *)(iVar2 + 4);
      }
      else if ((*(int *)(iVar2 + 4) != iVar11) &&
              ((*(int *)(iVar2 + 4) != -1 && (0 < *(int *)(iVar2 + 8))))) {
        pcVar8 = "`^Various";
        if (in_stack_00000008 == '\0') {
          pcVar8 = "Various";
        }
        std::basic_string<>::basic_string<>(_param_1,pcVar8);
        return _param_1;
      }
    }
    iVar3 = iVar3 + 1;
    pCVar7 = pCVar7 + 4;
  } while (iVar3 < 0xe);
  uVar10 = 0;
  puVar9 = *(undefined4 **)(g_gameData + 0x84);
  uVar12 = *(int *)(g_gameData + 0x88) - (int)puVar9 >> 2;
  if (uVar12 != 0) {
    do {
      piVar4 = (int *)*puVar9;
      if (*piVar4 == iVar11) goto LAB_00507460;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 < uVar12);
  }
  piVar4 = (int *)0x0;
LAB_00507460:
  pbVar5 = (basic_string<> *)(piVar4 + 1);
  if (in_stack_00000008 == '\0') {
    std::basic_string<>::basic_string<>(_param_1,pbVar5);
    return _param_1;
  }
  if (0xf < (uint)piVar4[6]) {
    pbVar5 = *(basic_string<> **)pbVar5;
  }
  strUsingArgs((char *)_param_1,"`!%s",pbVar5);
  return _param_1;
}


// public: bool __thiscall CargoHold::addToHold(int,int,int)

bool __thiscall CargoHold::addToHold(CargoHold *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  CargoHold *pCVar6;
  uint uVar7;
  int iVar8;
  int *local_c;
  
  uVar7 = 0;
  puVar5 = *(undefined4 **)(g_gameData + 0x84);
  uVar3 = *(int *)(g_gameData + 0x88) - (int)puVar5 >> 2;
  if (uVar3 != 0) {
    do {
      local_c = (int *)*puVar5;
      if (*local_c == param_1) goto LAB_0050751c;
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar3);
  }
  local_c = (int *)0x0;
LAB_0050751c:
  iVar8 = 0;
  pCVar6 = this + 0xc;
  do {
    iVar1 = *(int *)pCVar6;
    if (((iVar1 != 0) &&
        ((iVar2 = local_c[0x17], iVar2 == 0 ||
         ((iVar2 - 1U < 3 && (*(char *)(iVar1 + iVar2) != '\0')))))) &&
       ((iVar2 = *(int *)(iVar1 + 4), iVar2 == -1 || (iVar2 == param_1)))) {
      iVar4 = 0x14 - *(int *)(iVar1 + 8);
      if (param_2 <= iVar4) {
        if ((iVar2 == param_1) || (iVar2 == -1)) {
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_2;
          *(int *)(iVar1 + 4) = param_1;
        }
        debugPrint("DETAIL","adding %d units to slot %d",0,iVar8);
        return true;
      }
      param_2 = param_2 - iVar4;
      if ((iVar2 == param_1) || (iVar2 == -1)) {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + iVar4;
        *(int *)(iVar1 + 4) = param_1;
      }
      debugPrint("DETAIL","adding %d units to slot %d",iVar4,iVar8);
    }
    iVar8 = iVar8 + 1;
    pCVar6 = pCVar6 + 4;
  } while (iVar8 < 0xe);
  if (param_2 == 0) {
    return true;
  }
  debugPrint("GAME","No space for cargo in this hold.");
  return false;
}


// public: void __thiscall CargoHold::removeFromHold(int,int,int)

void __thiscall CargoHold::removeFromHold(CargoHold *this,int param_1,int param_2,int param_3)

{
  CargoHold *pCVar1;
  Good *pGVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  puVar3 = *(undefined4 **)(g_gameData + 0x84);
  uVar5 = *(int *)(g_gameData + 0x88) - (int)puVar3 >> 2;
  pCVar1 = this;
  if (uVar5 != 0) {
    do {
      pGVar2 = (Good *)*puVar3;
      if (*(int *)pGVar2 == param_1) goto LAB_00507627;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      pCVar1 = (CargoHold *)param_1;
    } while (uVar4 < uVar5);
  }
  param_1 = (int)pCVar1;
  pGVar2 = (Good *)0x0;
LAB_00507627:
  removeFromHold(this,pGVar2,param_2,param_1);
  return;
}


// public: void __thiscall CargoHold::removeFromHold(class Good *,int,int)

void __thiscall CargoHold::removeFromHold(CargoHold *this,Good *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CargoHold *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pCVar4 = this + 0x44;
  iVar6 = 0xe;
  iVar5 = param_2;
  do {
    if ((-1 < iVar6) &&
       (((*(int *)(this + 8) < 1 || (iVar6 < *(int *)(this + 8))) &&
        (iVar1 = *(int *)pCVar4, iVar1 != 0)))) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)param_1;
      if (iVar2 == iVar3) {
        iVar7 = *(int *)(iVar1 + 8);
      }
      else {
        iVar7 = 0;
      }
      if (param_2 <= iVar7) {
        if ((iVar2 == iVar3) &&
           (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar5, *(int *)(iVar1 + 8) < 1)) {
          *(undefined4 *)(iVar1 + 8) = 0;
          *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        }
        debugPrint("GAME","Removed %d units from pod %d",iVar5,iVar6);
        return;
      }
      if (0 < iVar7) {
        if (iVar5 < iVar7) {
          if ((iVar2 == iVar3) &&
             (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar5, *(int *)(iVar1 + 8) < 1)) {
            *(undefined4 *)(iVar1 + 8) = 0;
            *(undefined4 *)(iVar1 + 4) = 0xffffffff;
          }
          debugPrint("GAME","Removed %d units from pod %d",iVar5,iVar6);
          iVar5 = 0;
        }
        else {
          if ((iVar2 == iVar3) &&
             (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar7, *(int *)(iVar1 + 8) < 1)) {
            *(undefined4 *)(iVar1 + 8) = 0;
            *(undefined4 *)(iVar1 + 4) = 0xffffffff;
          }
          debugPrint("GAME","Removed %d units from pod %d",iVar7,iVar6);
          iVar5 = iVar5 - iVar7;
        }
      }
    }
    pCVar4 = pCVar4 + -4;
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      if (0 < iVar5) {
        debugPrint("GAME","Error: couldn\'t remove all, %d remaining.",iVar5);
      }
      return;
    }
  } while( true );
}


// public: int __thiscall CargoHold::getPodSellCost(int)

int __thiscall CargoHold::getPodSellCost(CargoHold *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) &&
     (((*(int *)(this + 8) < 1 || (param_1 < *(int *)(this + 8))) &&
      (*(int *)(this + param_1 * 4 + 0xc) != 0)))) {
    iVar2 = 0x32;
    iVar1 = 1;
    do {
      if ((iVar1 == 0) ||
         ((iVar1 - 1U < 3 && (*(char *)(iVar1 + *(int *)(this + param_1 * 4 + 0xc)) != '\0')))) {
        iVar2 = iVar2 + (int)(&goodContainmentOptionCost)[iVar1] / 2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    return iVar2;
  }
  return -1;
}


// public: bool __thiscall CargoHold::addPod(int)

bool __thiscall CargoHold::addPod(CargoHold *this,int param_1)

{
  undefined2 *puVar1;
  CargoHold *pCVar2;
  
  if (param_1 == -1) {
    param_1 = 0;
    if (0 < *(int *)(this + 8)) {
      pCVar2 = this + 0xc;
      do {
        if (*(int *)pCVar2 == 0) goto LAB_00507820;
        param_1 = param_1 + 1;
        pCVar2 = pCVar2 + 4;
      } while (param_1 < *(int *)(this + 8));
    }
    param_1 = -1;
  }
LAB_00507820:
  if (*(int *)(this + param_1 * 4 + 0xc) == 0) {
    puVar1 = operator_new(0xc);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined2 **)(this + param_1 * 4 + 0xc) = puVar1;
    return true;
  }
  return false;
}


// public: bool __thiscall CargoHold::podExists(int)

bool __thiscall CargoHold::podExists(CargoHold *this,int param_1)

{
  if ((-1 < param_1) && ((*(int *)(this + 8) < 1 || (param_1 < *(int *)(this + 8))))) {
    return *(int *)(this + param_1 * 4 + 0xc) != 0;
  }
  return false;
}


// public: void __thiscall CargoHold::removePod(int)

void __thiscall CargoHold::removePod(CargoHold *this,int param_1)

{
  if ((-1 < param_1) && ((*(int *)(this + 8) < 1 || (param_1 < *(int *)(this + 8))))) {
    if (*(void **)(this + param_1 * 4 + 0xc) != (void *)0x0) {
      operator_delete(*(void **)(this + param_1 * 4 + 0xc),(nothrow_t *)0xc);
      *(undefined4 *)(this + param_1 * 4 + 0xc) = 0;
    }
  }
  return;
}


// public: void __thiscall CargoHold::addOption(int,enum
// EGoodContainmentOption::GoodContainmentOption)

void __thiscall CargoHold::addOption(CargoHold *this,int param_1,GoodContainmentOption param_2)

{
  if ((param_1 < 0) ||
     (((0 < *(int *)(this + 8) && (*(int *)(this + 8) <= param_1)) ||
      (*(int *)(this + param_1 * 4 + 0xc) == 0)))) {
    addPod(this,param_1);
  }
  if ((param_2 != 0) && (param_2 - 1 < 3)) {
    *(undefined1 *)(param_2 + *(int *)(this + param_1 * 4 + 0xc)) = 1;
  }
  return;
}


// public: int __thiscall CargoHold::amountCanHold(class Good *)

int __thiscall CargoHold::amountCanHold(CargoHold *this,Good *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CargoHold *pCVar6;
  
  iVar4 = 0;
  pCVar6 = this + 0xc;
  iVar5 = 0xe;
  do {
    iVar3 = *(int *)pCVar6;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      if ((iVar2 < 1) ||
         (piVar1 = (int *)(iVar3 + 4), iVar3 = *(int *)pCVar6, *piVar1 != *(int *)param_1)) {
        if ((iVar2 == 0) &&
           ((iVar2 = *(int *)(param_1 + 0x5c), iVar2 == 0 ||
            ((iVar2 - 1U < 3 && (*(char *)(iVar3 + iVar2) != '\0')))))) {
          iVar4 = iVar4 + 0x14;
        }
      }
      else {
        iVar4 = iVar4 + (0x14 - iVar2);
      }
    }
    pCVar6 = pCVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar4;
}


// public: int __thiscall CargoHold::amountCanHold(enum
// EGoodContainmentOption::GoodContainmentOption)

int __thiscall CargoHold::amountCanHold(CargoHold *this,GoodContainmentOption param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CargoHold *pCVar4;
  int local_8;
  
  iVar2 = 0;
  pCVar4 = this + 0xc;
  local_8 = 0;
  iVar3 = 0;
  do {
    if (((-1 < iVar3) &&
        (((iVar2 = local_8, *(int *)(this + 8) < 1 || (iVar3 < *(int *)(this + 8))) &&
         (iVar1 = *(int *)pCVar4, iVar1 != 0)))) &&
       ((param_1 == 0 || ((param_1 - 1 < 3 && (*(char *)(iVar1 + param_1) != '\0')))))) {
      local_8 = local_8 + (0x14 - *(int *)(iVar1 + 8));
      iVar2 = local_8;
    }
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 4;
  } while (iVar3 < 0xe);
  return iVar2;
}


// public: int __thiscall CargoHold::totalBaseValue(void)

int __thiscall CargoHold::totalBaseValue(CargoHold *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  CargoHold *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  iVar8 = 0;
  pCVar5 = this + 0xc;
  do {
    if (((-1 < iVar8) &&
        (((iVar2 = local_8, *(int *)(this + 8) < 1 || (iVar8 < *(int *)(this + 8))) &&
         (iVar1 = *(int *)pCVar5, iVar1 != 0)))) &&
       ((*(int *)(iVar1 + 4) != -1 && (*(int *)(iVar1 + 8) != 0)))) {
      uVar6 = 0;
      puVar3 = *(undefined4 **)(g_gameData + 0x84);
      uVar7 = *(int *)(g_gameData + 0x88) - (int)puVar3 >> 2;
      if (uVar7 != 0) {
        do {
          piVar4 = (int *)*puVar3;
          if (*piVar4 == *(int *)(*(int *)(this + 0xc + iVar8 * 4) + 4)) goto LAB_00507a88;
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 < uVar7);
      }
      piVar4 = (int *)0x0;
LAB_00507a88:
      local_8 = local_8 + piVar4[0x16] * *(int *)(iVar1 + 8);
      iVar2 = local_8;
    }
    iVar8 = iVar8 + 1;
    pCVar5 = pCVar5 + 4;
    if (0xd < iVar8) {
      return iVar2;
    }
  } while( true );
}


// public: int __thiscall CargoHold::amountHeld(int)

int __thiscall CargoHold::amountHeld(CargoHold *this,int param_1)

{
  int iVar1;
  int iVar2;
  CargoHold *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  pCVar3 = this + 0xc;
  do {
    if ((-1 < iVar1) &&
       (((*(int *)(this + 8) < 1 || (iVar1 < *(int *)(this + 8))) &&
        (iVar2 = *(int *)pCVar3, iVar2 != 0)))) {
      if (*(int *)(iVar2 + 4) == param_1) {
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = 0;
      }
      iVar4 = iVar4 + iVar2;
    }
    iVar1 = iVar1 + 1;
    pCVar3 = pCVar3 + 4;
  } while (iVar1 < 0xe);
  return iVar4;
}


// public: int __thiscall CargoHold::amountHeld(enum EGoodContainmentOption::GoodContainmentOption)

int __thiscall CargoHold::amountHeld(CargoHold *this,GoodContainmentOption param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  CargoHold *pCVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  iVar8 = 0;
  pCVar6 = this + 0xc;
  do {
    if ((((-1 < iVar8) &&
         (((iVar2 = local_8, *(int *)(this + 8) < 1 || (iVar8 < *(int *)(this + 8))) &&
          (iVar1 = *(int *)pCVar6, iVar1 != 0)))) &&
        ((param_1 == 0 || ((param_1 - 1 < 3 && (*(char *)(iVar1 + param_1) != '\0')))))) &&
       (-1 < *(int *)(iVar1 + 4))) {
      uVar5 = 0;
      puVar3 = *(undefined4 **)(g_gameData + 0x84);
      uVar7 = *(int *)(g_gameData + 0x88) - (int)puVar3 >> 2;
      if (uVar7 != 0) {
        do {
          piVar4 = (int *)*puVar3;
          if (*piVar4 == *(int *)(*(int *)(this + 0xc + iVar8 * 4) + 4)) goto LAB_00507baa;
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 < uVar7);
      }
      piVar4 = (int *)0x0;
LAB_00507baa:
      if (piVar4[0x17] == param_1) {
        local_8 = local_8 + *(int *)(iVar1 + 8);
        iVar2 = local_8;
      }
    }
    iVar8 = iVar8 + 1;
    pCVar6 = pCVar6 + 4;
    if (0xd < iVar8) {
      return iVar2;
    }
  } while( true );
}


// public: void __thiscall CargoHold::addComponent(class ShipComponent *)

void __thiscall CargoHold::addComponent(CargoHold *this,ShipComponent *param_1)

{
  AnimationFrames **ppAVar1;
  FlagManager *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  ShipComponent *local_38;
  CargoHold *local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c2c00;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_1;
  local_34 = this;
  if ((((float)*(int *)(*(int *)(param_1 + 4) + 0x10) <= *(float *)param_1) &&
      (*(int *)(g_gameData + 0xd0) != 0)) &&
     (this == *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))) {
    uStack_60 = 0x507c77;
    strUsingArgs((char *)local_30);
    local_8 = 0;
    uStack_60 = 0x507cb4;
    std::transform<>();
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)local_30);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    FlagManager::setFlag(pFVar2);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
      pnVar4 = (nothrow_t *)(local_1c + 1);
      pvVar3 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_30[0] + -4);
        pnVar4 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  }
  ppAVar1 = *(AnimationFrames ***)(local_34 + 0x48);
  if ((uint)((int)ppAVar1 - *(int *)(local_34 + 0x44) >> 2) < *(uint *)(local_34 + 4)) {
    if (*(AnimationFrames ***)(local_34 + 0x4c) == ppAVar1) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(local_34 + 0x44),ppAVar1,(AnimationFrames **)&local_38);
    }
    else {
      *ppAVar1 = (AnimationFrames *)param_1;
      *(int *)(local_34 + 0x48) = *(int *)(local_34 + 0x48) + 4;
    }
  }
  else {
    debugPrint("GAME","ERROR: Component storage full.");
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall CargoHold::hasComponent(int)

bool __thiscall CargoHold::hasComponent(CargoHold *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(this + 0x44);
  uVar1 = 0;
  uVar3 = *(int *)(this + 0x48) - (int)piVar2 >> 2;
  if (uVar3 != 0) {
    do {
      if (**(int **)(*piVar2 + 4) == param_1) {
        return true;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < uVar3);
  }
  return false;
}


// public: void __thiscall CargoHold::removeComponent(class ShipComponent *)

void __thiscall CargoHold::removeComponent(CargoHold *this,ShipComponent *param_1)

{
  void *pvVar1;
  void *pvVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  FlagManager *pFVar6;
  uint uVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  basic_string<> abStack_74 [12];
  undefined4 uStack_68;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c2c40;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar1 = *(void **)(this + 0x48);
  puVar4 = (undefined4 *)std::remove<>();
  pvVar2 = (void *)*puVar4;
  if (pvVar2 != pvVar1) {
    iVar11 = *(int *)(this + 0x48);
    uStack_68 = 0x507e47;
    memmove(pvVar2,pvVar1,iVar11 - (int)pvVar1);
    *(int *)(this + 0x48) = (iVar11 - (int)pvVar1) + (int)pvVar2;
  }
  if ((float)*(int *)((int)*(float *)(param_1 + 4) + 0x10) <= *(float *)param_1) {
    puVar4 = *(undefined4 **)(this + 0x44);
    uVar7 = 0;
    uVar12 = *(int *)(this + 0x48) - (int)puVar4 >> 2;
    if (uVar12 != 0) {
      do {
        fVar3 = ((float *)*puVar4)[1];
        if ((fVar3 == *(float *)(param_1 + 4)) &&
           ((float)*(int *)((int)fVar3 + 0x10) <= *(float *)*puVar4)) goto LAB_00507f85;
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 < uVar12);
    }
  }
  uStack_68 = 0x507ec0;
  strUsingArgs((char *)local_30);
  local_8 = 0;
  ppppuVar9 = local_30;
  if (0xf < local_1c) {
    ppppuVar9 = (undefined4 ****)local_30[0];
  }
  ppppuVar8 = local_30;
  if (0xf < local_1c) {
    ppppuVar8 = (undefined4 ****)local_30[0];
  }
  iVar13 = (local_20 + (int)ppppuVar9) - (int)ppppuVar8;
  iVar11 = 0;
  if ((undefined4 ****)(local_20 + (int)ppppuVar9) < ppppuVar8) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    do {
      iVar5 = tolower((int)*(char *)(iVar11 + (int)ppppuVar8));
      *(char *)(iVar11 + (int)ppppuVar9) = (char)iVar5;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar13);
  }
  std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)local_30);
  local_8._0_1_ = 1;
  pFVar6 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  FlagManager::setFlag(pFVar6);
  if (0xf < local_1c) {
    pnVar10 = (nothrow_t *)(local_1c + 1);
    ppppuVar9 = (undefined4 ****)local_30[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      ppppuVar9 = (undefined4 ****)local_30[0][-1];
      pnVar10 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar9,pnVar10);
  }
LAB_00507f85:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
