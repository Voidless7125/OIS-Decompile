// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall SystemManager::generatePower(SystemManager *this,float param_1)
void SystemManager::generatePower(float param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float in_XMM1_Da;
  float fVar6;
  float local_8;
  
  uVar5 = 0;
  iVar4 = *(int *)((char *)this + 0x3c);
  local_8 = in_XMM1_Da;
  if (*(int *)((char *)this + 0x40) - iVar4 >> 2 == 0) {
    return;
  }
  do {
    piVar2 = *(int **)(iVar4 + uVar5 * 4);
    if ((((piVar2[2] != 0) && (0.0 < *(float *)(piVar2[2] + 0xc4))) &&
        (*(char *)((int)piVar2 + 99) != '\0')) &&
       (cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 == '\0')) {
      if ((*(char *)((int)piVar2 + 99) == '\0') ||
         (cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 != '\0')) {
        fVar6 = 0.0;
      }
      else {
        iVar4 = ComponentInterfaceInstance::getEfficiencyPercent
                          ((ComponentInterfaceInstance *)piVar2[3]);
        fVar6 = *(float *)(piVar2[2] + 0xc4) * ((float)iVar4 / 100.0);
      }
      fVar1 = (float)piVar2[0x17];
      if ((fVar1 < fVar6) && (fVar6 = fVar6 - fVar1, 0.0 < fVar6)) {
        if (local_8 < fVar6) {
          piVar2[0x17] = (int)(fVar1 + local_8);
          return;
        }
        local_8 = local_8 - fVar6;
        piVar2[0x17] = (int)(fVar1 + fVar6);
      }
    }
    uVar5 = uVar5 + 1;
    iVar4 = *(int *)((char *)this + 0x3c);
  } while (uVar5 < (uint)(*(int *)((char *)this + 0x40) - iVar4 >> 2));
  return;
}


// Ghidra: bool __thiscall SystemManager::drawPower(SystemManager *this,float param_1)
bool SystemManager::drawPower(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  float in_XMM0_Da;
  float in_XMM1_Da;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b12f8;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = uVar5;
  totalCurrentPower(this);
  if (in_XMM1_Da <= in_XMM0_Da) {
    uVar8 = 0;
    iVar2 = *(int *)((char *)this + 0x3c);
    if (*(int *)((char *)this + 0x40) - iVar2 >> 2 != 0) {
      do {
        iVar3 = *(int *)(iVar2 + uVar8 * 4);
        if (((*(int *)(iVar3 + 8) != 0) && (0.0 < *(float *)(*(int *)(iVar3 + 8) + 0xc4))) &&
           (*(char *)(iVar3 + 99) != '\0')) {
          fVar1 = *(float *)(iVar3 + 0x5c);
          if (in_XMM1_Da <= fVar1) {
            *(float *)(iVar3 + 0x5c) = fVar1 - in_XMM1_Da;
            goto LAB_0052362a;
          }
          in_XMM1_Da = in_XMM1_Da - fVar1;
          *(undefined4 *)(iVar3 + 0x5c) = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)(*(int *)((char *)this + 0x40) - iVar2 >> 2));
    }
    puVar6 = (undefined4 *)
             cocos2d::StringUtils::format
                       ((char *)local_2c,"WARNING: This should never happen.",uVar5);
    // [seh] local_8 = 0;
    if (0xf < (uint)puVar6[5]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    cocos2d::log("%s : %s","SystemManager::drawPower",puVar6);
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar9);
    }
  }
LAB_0052362a:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar4 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


// Ghidra: ShipModule * __thiscall SystemManager::addEmptyModule(SystemManager *this,int param_1,void *param_3)
ShipModule * SystemManager::addEmptyModule(int param_1, void * param_3)

{
  int *piVar1;
  SystemManager *this_00;
  ShipModuleClass *pSVar2;
  ShipModule *pSVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  uint in_stack_0000001c;
  std::string abStack_54 [4];
  undefined4 uStack_50;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  SystemManager *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4b92;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_50 = 0x5236a3;
  local_14 = this;
  debugPrint("DETAIL","Setting up empty module into slot %d, module %s");
  this_00 = local_14;
  piVar1 = *(int **)((char *)this + 0x3c);
  uVar4 = 0;
  uVar8 = *(int *)((char *)this + 0x40) - (int)piVar1 >> 2;
  piVar6 = piVar1;
  if (uVar8 != 0) {
    do {
      if (*(int *)(*piVar6 + 0x10) == param_1) {
        if ((ShipModule *)piVar1[uVar4] != (ShipModule *)0x0) {
          removeModule(local_14,(ShipModule *)piVar1[uVar4]);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 < uVar8);
  }
  ghidra::str::ctor((std::string *)local_2c,(std::string *)&param_3);
  // [seh] local_8._0_1_ = 1;
  ghidra::str::ctor(abStack_54,(std::string *)local_2c);
  pSVar2 = GameData::getModuleClassWithIdentifier();
  local_14 = operator_new(0x88);
  // [seh] local_8._0_1_ = 2;
  pSVar3 = (ShipModule *)new ((void *)((ShipModule *)local_14)) ShipModule(pSVar2);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  addModule(this_00,pSVar3,param_1);
  if (0xf < local_18) {
    pnVar7 = (nothrow_t *)(local_18 + 1);
    pvVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      pnVar7 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_0000001c) {
    pnVar7 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return pSVar3;
}


// Ghidra: bool __thiscall SystemManager::addModule(SystemManager *this,ShipModule *param_1,int param_2)
bool SystemManager::addModule(ShipModule * param_1, int param_2)

{
  int *piVar1;
  AnimationFrames **ppAVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  FlagManager *pFVar6;
  undefined4 *puVar7;
  ShipModule *this_00;
  ShipModule local_40 [8];
  undefined4 uStack_38;
  char *pcVar8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  this_00 = param_1;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4be0;
  // [seh] local_10 = ExceptionList;
  piVar1 = *(int **)((char *)this + 0x40);
  piVar4 = *(int **)((char *)this + 0x3c);
  if (piVar4 != piVar1) {
    do {
      if ((ShipModule *)*piVar4 == param_1) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    if (piVar4 != piVar1) {
      return false;
    }
  }
  // [seh] ExceptionList = &local_10;
  iVar3 = getSlotForType(this,*(ModuleType *)(*(int *)(param_1 + 8) + 4));
  if (iVar3 == -1) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  iVar3 = param_2;
  if ((param_2 == -1) &&
     (iVar3 = getSlotForType(this,*(ModuleType *)(*(int *)(this_00 + 8) + 4)), iVar3 == -1)) {
    pcVar8 = "%s: Cannot add module \'%s\' to any slot.";
LAB_00523875:
    uStack_38 = 0x52387f;
    debugPrint("DETAIL",pcVar8);
    // [seh] ExceptionList = local_10;
    return false;
  }
  if (-1 < *(int *)(this_00 + 0x10)) {
    piVar1 = *(int **)((char *)this + 0x40);
    piVar4 = *(int **)((char *)this + 0x3c);
    if (piVar4 != piVar1) {
      do {
        if ((ShipModule *)*piVar4 == this_00) break;
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar1);
      if (piVar4 != piVar1) {
        pcVar8 = "%s: Module \'%s\' is already connected.";
        goto LAB_00523875;
      }
    }
  }
  *(int *)(this_00 + 0x10) = iVar3;
  piVar1 = *(int **)((char *)this + 0x3c);
  piVar4 = *(int **)((char *)this + 0x40);
  piVar5 = piVar1;
  if (piVar1 == piVar4) {
LAB_005238ff:
    *(int *)(this_00 + 0x38) = (int)piVar4 - (int)piVar1 >> 2;
    ppAVar2 = *(AnimationFrames ***)((char *)this + 0x40);
    if (*(AnimationFrames ***)((char *)this + 0x44) == ppAVar2) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)((char *)this + 0x3c),ppAVar2,(AnimationFrames **)&param_1);
      this_00 = param_1;
    }
    else {
      *ppAVar2 = (AnimationFrames *)this_00;
      *(int *)((char *)this + 0x40) = *(int *)((char *)this + 0x40) + 4;
    }
  }
  else {
    do {
      if ((ShipModule *)*piVar5 == this_00) break;
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar4);
    if (piVar5 == piVar4) goto LAB_005238ff;
  }
  this_00[99] = (byte)0x0;
  (this_00)->connect(*(Ship **)((char *)this + 0x48));
  *(undefined1 **)(this_00 + 0x24) = &DAT_bf800000;
  this_00[0x2c] = (byte)0x1;
  *(undefined4 *)(this_00 + 0x28) = 100;
  *(SystemManager **)(this_00 + 4) = this;
  (this_00)->resetDefaultEMCONState();
  switch(*(undefined4 *)(*(int *)(this_00 + 8) + 4)) {
  case 7:
    if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
    goto switchD_0052396a_caseD_9;
    param_1 = local_40;
    local_40[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_40,"helm_connected",0xe);
    // [seh] local_8 = 1;
    break;
  case 8:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) == '\0') goto switchD_0052396a_caseD_9;
    param_1 = local_40;
    local_40[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_40,"has_weapon_launcher",0x13);
    // [seh] local_8 = 2;
    break;
  default:
    goto switchD_0052396a_caseD_9;
  case 10:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) == '\0') goto switchD_0052396a_caseD_9;
    param_1 = local_40;
    local_40[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_40,"has_jump_drive",0xe);
    // [seh] local_8 = 0;
    break;
  case 0x10:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) == '\0') goto switchD_0052396a_caseD_9;
    param_1 = local_40;
    local_40[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_40,"has_hacking_module",0x12);
    // [seh] local_8 = 3;
    break;
  case 0x11:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) == '\0') goto switchD_0052396a_caseD_9;
    param_1 = local_40;
    local_40[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_40,"has_grappler",0xc);
    // [seh] local_8 = 4;
  }
  pFVar6 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar6)->setFlag();
switchD_0052396a_caseD_9:
  if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
    puVar7 = (undefined4 *)(*(int *)(this_00 + 8) + 0x50);
    if (0xf < *(uint *)(*(int *)(this_00 + 8) + 100)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    param_1 = local_40;
    strUsingArgs((char *)local_40,"has_module_%s",puVar7);
    // [seh] local_8 = 5;
    pFVar6 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar6)->setFlag();
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: void __thiscall SystemManager::removeModule(SystemManager *this,ShipModule *param_1)
void SystemManager::removeModule(ShipModule * param_1)

{
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FlagManager *pFVar4;
  NetworkServer *pNVar5;
  int *piVar6;
  std::string abStack_40 [4];
  undefined4 uStack_3c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4c30;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) != -1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  piVar6 = *(int **)((char *)this + 0x3c);
  piVar1 = *(int **)((char *)this + 0x40);
  if (piVar6 != piVar1) {
    do {
      if ((ShipModule *)*piVar6 == param_1) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
    if (piVar6 != piVar1) {
      puVar3 = (undefined4 *)ghidra::lib::remove___x28_x29();
      piVar6 = (int *)*puVar3;
      if (piVar6 != piVar1) {
        iVar2 = *(int *)((char *)this + 0x40);
        memmove(piVar6,piVar1,iVar2 - (int)piVar1);
        *(int *)((char *)this + 0x40) = (iVar2 - (int)piVar1) + (int)piVar6;
      }
    }
  }
  uStack_3c = 0x523c1e;
  debugPrint("DETAIL","%s: Disconnected module \'%s\'");
  switch(*(undefined4 *)(*(int *)(param_1 + 8) + 4)) {
  case 3:
    if (param_1 == *(ShipModule **)((char *)this + 0x28)) {
      *(undefined4 *)((char *)this + 0x28) = 0;
    }
    break;
  case 4:
    if (param_1 == *(ShipModule **)this) {
      *(undefined4 *)this = 0;
    }
    break;
  case 5:
    if (param_1 == *(ShipModule **)((char *)this + 8)) {
      *(undefined4 *)((char *)this + 8) = 0;
    }
    break;
  case 7:
    if (param_1 == *(ShipModule **)((char *)this + 0x24)) {
      *(undefined4 *)((char *)this + 0x24) = 0;
    }
    break;
  case 8:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
      ghidra::str::assign((std::string *)&stack0xffffffbc,"has_weapon_launcher",0x13);
      // [seh] local_8 = 1;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar4)->setFlag();
    }
    if (param_1 == *(ShipModule **)((char *)this + 0x20)) {
      *(undefined4 *)((char *)this + 0x20) = 0;
    }
    break;
  case 9:
    if (param_1 == *(ShipModule **)((char *)this + 0x18)) {
      *(undefined4 *)((char *)this + 0x18) = 0;
    }
    break;
  case 10:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
      ghidra::str::assign((std::string *)&stack0xffffffbc,"has_jump_drive",0xe);
      // [seh] local_8 = 0;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar4)->setFlag();
    }
    if (param_1 == *(ShipModule **)((char *)this + 0x14)) {
      *(undefined4 *)((char *)this + 0x14) = 0;
    }
    break;
  case 0xb:
    if (param_1 == *(ShipModule **)((char *)this + 0x10)) {
      *(undefined4 *)((char *)this + 0x10) = 0;
    }
    break;
  case 0xc:
    if (param_1 == *(ShipModule **)((char *)this + 0xc)) {
      *(undefined4 *)((char *)this + 0xc) = 0;
    }
    break;
  case 0xe:
    if (param_1 == *(ShipModule **)((char *)this + 0x1c)) {
      *(undefined4 *)((char *)this + 0x1c) = 0;
    }
    break;
  case 0xf:
    if (param_1 == *(ShipModule **)((char *)this + 4)) {
      *(undefined4 *)((char *)this + 4) = 0;
    }
    break;
  case 0x10:
    if (param_1 == *(ShipModule **)((char *)this + 0x30)) {
      *(undefined4 *)((char *)this + 0x30) = 0;
    }
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
      ghidra::str::assign((std::string *)&stack0xffffffbc,"has_hacking_module",0x12);
      // [seh] local_8 = 2;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar4)->setFlag();
    }
    break;
  case 0x11:
    if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
      ghidra::str::assign((std::string *)&stack0xffffffbc,"has_grappler",0xc);
      // [seh] local_8 = 3;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar4)->setFlag();
    }
    if (param_1 == *(ShipModule **)((char *)this + 0x2c)) {
      *(undefined4 *)((char *)this + 0x2c) = 0;
    }
  }
  if (*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0') {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + 0x50);
    if (0xf < *(uint *)(*(int *)(param_1 + 8) + 100)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs(&stack0xffffffbc,"has_module_%s",puVar3);
    // [seh] local_8 = 4;
    pFVar4 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar4)->setFlag();
  }
  if (g_gameLogic[0x70] != (byte)0x0) {
    ghidra::str::ctor
              (abStack_40,(std::string *)(*(int *)((char *)this + 0x48) + 0x238));
    // [seh] local_8 = 5;
    pNVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pNVar5)->stopSyncingModule();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall SystemManager::canAddModule(SystemManager *this,ShipModule *param_1)
bool SystemManager::canAddModule(ShipModule * param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)((char *)this + 0x40);
  piVar3 = *(int **)((char *)this + 0x3c);
  if (piVar3 != piVar1) {
    do {
      if ((ShipModule *)*piVar3 == param_1) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      return false;
    }
  }
  iVar2 = getSlotForType(this,*(ModuleType *)(*(int *)(param_1 + 8) + 4));
  return iVar2 != -1;
}


// Ghidra: ShipModule * __thiscall SystemManager::getModule(SystemManager *this,ModuleType param_1,bool param_2)
ShipModule * SystemManager::getModule(ModuleType param_1, bool param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if ((*(ModuleType *)(piVar1[2] + 4) == param_1) &&
         ((!param_2 ||
          ((*(char *)((int)piVar1 + 99) != '\0' &&
           (cVar2 = (**(code **)(*piVar1 + 0x10))(0), cVar2 != '\0')))))) {
        return *(ShipModule **)(*(int *)((char *)this + 0x3c) + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((char *)this + 0x3c);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0x40) - iVar3 >> 2));
  }
  return (ShipModule *)0x0;
}


// Ghidra: void __thiscall SystemManager::connectModulesOfType(SystemManager *this,ModuleType param_1)
void SystemManager::connectModulesOfType(ModuleType param_1)

{
  ShipModule *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar1 >> 2 != 0) {
    do {
      this_00 = *(ShipModule **)(iVar1 + uVar2 * 4);
      if (*(int *)(*(int *)(this_00 + 8) + 4) == 1) {
        (this_00)->connect(*(Ship **)((char *)this + 0x48));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x3c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x40) - iVar1 >> 2));
  }
  return;
}


// Ghidra: void __thiscall SystemManager::disconnectModulesOfType(SystemManager *this,ModuleType param_1)
void SystemManager::disconnectModulesOfType(ModuleType param_1)

{
  ShipModule *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar1 >> 2 != 0) {
    do {
      this_00 = *(ShipModule **)(iVar1 + uVar2 * 4);
      if (*(int *)(*(int *)(this_00 + 8) + 4) == 1) {
        (this_00)->disconnect(*(Ship **)((char *)this + 0x48));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x3c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x40) - iVar1 >> 2));
  }
  return;
}


// Ghidra: ShipModule * __thiscall SystemManager::getModule(SystemManager *this,int param_1)
ShipModule * SystemManager::getModule(int param_1)

{
  ShipModule *pSVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0x40) - *(int *)((char *)this + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      pSVar1 = *(ShipModule **)(*(int *)((char *)this + 0x3c) + uVar2 * 4);
      if (*(int *)(pSVar1 + 0x10) == param_1) {
        return pSVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (ShipModule *)0x0;
}


// Ghidra: int __thiscall SystemManager::getSlotForType(SystemManager *this,ModuleType param_1)
int SystemManager::getSlotForType(ModuleType param_1)

{
  int iVar1;
  ModuleType MVar2;
  ModuleSlotType MVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ModuleType unaff_EDI;
  
  if (param_1 != 0xffffffff) {
    MVar3 = ShipModuleClass::getSlotTypeForModuleType(unaff_EDI);
    param_1 = 0;
    iVar1 = *(int *)(*(int *)((char *)this + 0x48) + 0x254);
    piVar6 = *(int **)(iVar1 + 0x13c);
    MVar2 = (*(int *)(iVar1 + 0x140) - (int)piVar6) / 0x18;
    if (MVar2 != 0) {
      do {
        if (piVar6[1] == MVar3) {
          uVar5 = 0;
          piVar4 = *(int **)((char *)this + 0x3c);
          uVar7 = *(int *)((char *)this + 0x40) - (int)piVar4 >> 2;
          if (uVar7 == 0) {
LAB_00524147:
            return *(int *)(*(int *)(iVar1 + 0x13c) + param_1 * 0x18);
          }
          while (*(int *)(*piVar4 + 0x10) != *piVar6) {
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
            if (uVar7 <= uVar5) goto LAB_00524147;
          }
          if (*piVar4 == 0) goto LAB_00524147;
        }
        param_1 = param_1 + 1;
        piVar6 = piVar6 + 6;
      } while (param_1 < MVar2);
    }
  }
  return -1;
}


// Ghidra: float __thiscall SystemManager::getMaxBatteryStorage(SystemManager *this)
float SystemManager::getMaxBatteryStorage()

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  uVar4 = 0;
  iVar3 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if ((((piVar1[2] != 0) && (0.0 < *(float *)(piVar1[2] + 0xc4))) &&
          (*(char *)((int)piVar1 + 99) != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x14))(), in_ST0 = extraout_ST0, cVar2 == '\0')) {
        ((ComponentInterfaceInstance *)piVar1[3])->getEfficiencyPercent();
        in_ST0 = extraout_ST0_00;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((char *)this + 0x3c);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0x40) - iVar3 >> 2));
  }
  return (float)in_ST0;
}


// Ghidra: float __thiscall SystemManager::getMaxTheoreticalPowerGeneration(SystemManager *this)
float SystemManager::getMaxTheoreticalPowerGeneration()

{
  int iVar1;
  uint uVar2;
  float10 in_ST0;
  float fVar3;
  float fVar4;
  float local_8;
  
  uVar2 = 0;
  local_8 = 0.0;
  iVar1 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar1 >> 2 != 0) {
    do {
      fVar3 = local_8;
      fVar4 = (*(ShipModule **)(iVar1 + uVar2 * 4))->getCurrentGenerationRate();
      in_ST0 = (float10)fVar4;
      if (0.0 < fVar3) {
        iVar1 = *(int *)(*(int *)((char *)this + 0x3c) + uVar2 * 4);
        if (*(char *)(iVar1 + 99) == '\0') {
          local_8 = local_8 + 0.0;
        }
        else {
          local_8 = *(float *)(*(int *)(iVar1 + 8) + 200) + local_8;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x3c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x40) - iVar1 >> 2));
  }
  return (float)in_ST0;
}


// Ghidra: ShipModule * __thiscall SystemManager::getBattery(SystemManager *this,int param_1)
ShipModule * SystemManager::getBattery(int param_1)

{
  ShipModule *pSVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  piVar4 = *(int **)((char *)this + 0x3c);
  uVar3 = *(int *)((char *)this + 0x40) - (int)piVar4 >> 2;
  iVar5 = 0;
  if (uVar3 != 0) {
    do {
      pSVar1 = (ShipModule *)*piVar4;
      iVar6 = iVar5;
      if ((((*(int *)(pSVar1 + 8) != 0) && (0.0 < *(float *)(*(int *)(pSVar1 + 8) + 0xc4))) &&
          (pSVar1[99] != (byte)0x0)) && (iVar6 = iVar5 + 1, iVar5 == param_1)) {
        return pSVar1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
      iVar5 = iVar6;
    } while (uVar2 < uVar3);
  }
  return (ShipModule *)0x0;
}


// Ghidra: int __thiscall SystemManager::getCurrentPowerPercentage(SystemManager *this)
int SystemManager::getCurrentPowerPercentage()

{
  int iVar1;
  bool bVar2;
  float in_XMM0_Da;
  float fVar3;
  
  iVar1 = *(int *)(*(int *)((char *)this + 0x48) + 0x254);
  bVar2 = false;
  if (iVar1 != 0) {
    bVar2 = *(int *)(iVar1 + 0x158) == 1;
  }
  if (!bVar2) {
    bVar2 = false;
    if (iVar1 != 0) {
      bVar2 = *(int *)(iVar1 + 0x158) == 2;
    }
    if (!bVar2) {
      totalCurrentPower(this);
      fVar3 = in_XMM0_Da;
      totalPossiblePower(this);
      return (int)((in_XMM0_Da / fVar3) * 100.0);
    }
  }
  return 100;
}


// Ghidra: float __thiscall SystemManager::totalCurrentPower(SystemManager *this)
float SystemManager::totalCurrentPower()

{
  uint uVar1;
  uint uVar2;
  float10 in_ST0;
  
  uVar1 = 0;
  uVar2 = *(int *)((char *)this + 0x40) - *(int *)((char *)this + 0x3c) >> 2;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
    return (float)in_ST0;
  }
  return (float)in_ST0;
}


// Ghidra: float __thiscall SystemManager::totalPossiblePower(SystemManager *this)
float SystemManager::totalPossiblePower()

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  uVar4 = 0;
  iVar3 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if (((piVar1[2] != 0) && (0.0 < *(float *)(piVar1[2] + 0xc4))) &&
         (cVar2 = (**(code **)(*piVar1 + 0x14))(), in_ST0 = extraout_ST0, cVar2 == '\0')) {
        ((ComponentInterfaceInstance *)piVar1[3])->getEfficiencyPercent();
        in_ST0 = extraout_ST0_00;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((char *)this + 0x3c);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0x40) - iVar3 >> 2));
  }
  return (float)in_ST0;
}


// Ghidra: void __thiscall SystemManager::resetHardware(SystemManager *this,int param_1)
void SystemManager::resetHardware(int param_1)

{
  int *piVar1;
  GameData *pGVar2;
  char cVar3;
  int iVar4;
  FlagManager *pFVar5;
  uint uVar6;
  float fVar7;
  std::string local_40 [12];
  undefined4 uStack_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bffb8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uVar6 = 0;
  iVar4 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar4 >> 2 != 0) {
    do {
      if (((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)
          ) || (*(int *)(*(int *)(*(int *)(iVar4 + uVar6 * 4) + 8) + 4) != 9)) {
        if ((param_1 == 100) || (iVar4 = rand(), iVar4 % 100 + 1 <= param_1)) {
          uStack_34 = 0x52456c;
          debugPrint("DETAIL"," resetting %s");
          pGVar2 = g_gameData;
          iVar4 = *(int *)(*(int *)((char *)this + 0x3c) + uVar6 * 4);
          *(undefined1 *)(iVar4 + 0x2c) = 0;
          *(undefined1 *)(iVar4 + 99) = 1;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          if (((*(int *)(pGVar2 + 0xcc) != 0) && (*(int *)(*(int *)(pGVar2 + 0xcc) + 0x70) == 1)) &&
             (*(int *)(*(int *)(iVar4 + 8) + 4) == 7)) {
            local_40[0] = (std::string)0x0;
            ghidra::str::assign(local_40,"helm_connected",0xe);
            // [seh] local_8 = 0;
            pFVar5 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            (pFVar5)->setFlag();
          }
          piVar1 = *(int **)(*(int *)((char *)this + 0x3c) + uVar6 * 4);
          if (*(int *)(piVar1[2] + 4) == 2) {
            if ((*(int *)(g_gameData + 0xcc) == 0) ||
               (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
              iVar4 = rand();
              *(float *)(*(int *)(*(int *)((char *)this + 0x3c) + uVar6 * 4) + 0x5c) =
                   (float)iVar4 / 32767.0;
            }
            else {
              if ((*(char *)((int)piVar1 + 99) == '\0') ||
                 (cVar3 = (**(code **)(*piVar1 + 0x14))(), cVar3 != '\0')) {
                fVar7 = 0.0;
              }
              else {
                iVar4 = ComponentInterfaceInstance::getEfficiencyPercent
                                  ((ComponentInterfaceInstance *)piVar1[3]);
                fVar7 = *(float *)(piVar1[2] + 0xc4) * ((float)iVar4 / 100.0);
              }
              *(float *)(*(int *)(*(int *)((char *)this + 0x3c) + uVar6 * 4) + 0x5c) = fVar7 / 3.0;
            }
          }
        }
        else {
          uStack_34 = 0x524543;
          debugPrint("DETAIL"," (skipping resetting %s)");
        }
      }
      uVar6 = uVar6 + 1;
      iVar4 = *(int *)((char *)this + 0x3c);
    } while (uVar6 < (uint)(*(int *)((char *)this + 0x40) - iVar4 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: float __thiscall SystemManager::totalPowerDrain(SystemManager *this)
float SystemManager::totalPowerDrain()

{
  uint uVar1;
  uint uVar2;
  float10 in_ST0;
  
  uVar1 = 0;
  uVar2 = *(int *)((char *)this + 0x40) - *(int *)((char *)this + 0x3c) >> 2;
  if (uVar2 == 0) {
    return (float)in_ST0;
  }
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < uVar2);
  return (float)in_ST0;
}


// Ghidra: float __thiscall SystemManager::totalPowerGeneration(SystemManager *this)
float SystemManager::totalPowerGeneration()

{
  ShipModule *this_00;
  int iVar1;
  uint uVar2;
  float10 in_ST0;
  float fVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x3c);
  if (*(int *)((char *)this + 0x40) - iVar1 >> 2 != 0) {
    do {
      this_00 = *(ShipModule **)(iVar1 + uVar2 * 4);
      if (this_00[99] != (byte)0x0) {
        fVar3 = (this_00)->getCurrentGenerationRate();
        in_ST0 = (float10)fVar3;
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x3c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x40) - iVar1 >> 2));
  }
  return (float)in_ST0;
}


// Ghidra: void __thiscall SystemManager::runAttritionLogic(SystemManager *this,float param_1)
void SystemManager::runAttritionLogic(float param_1)

{
  GameData *pGVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  Dice *unaff_EDI;
  int iVar8;
  bool bVar9;
  float fVar10;
  float in_XMM1_Da;
  int local_48;
  
  pGVar1 = g_gameData;
  if (((((*(int *)((char *)this + 0x48) != 0) && (iVar2 = *(int *)(g_gameData + 0xcc), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x70) == 2)) &&
      ((*(char *)(*(int *)((char *)this + 0x48) + 0x234) != '\0' && (*(char *)(iVar2 + 0x377) == '\0')))) &&
     ((*(int *)((char *)this + 0x40) - *(int *)((char *)this + 0x3c) >> 2 != 0 &&
      (fVar10 = *(float *)((char *)this + 0x38), *(float *)((char *)this + 0x38) = fVar10 - in_XMM1_Da,
      fVar10 - in_XMM1_Da <= 0.0)))) {
    if ((*(int *)(*(int *)(pGVar1 + 0xcc) + 0x378) == 0) &&
       (*(int *)(*(int *)(pGVar1 + 0xcc) + 0x380) == 0)) {
      iVar2 = rand();
      iVar2 = iVar2 % 0x1e + 0x12d;
    }
    else {
      iVar2 = diceRoll(unaff_EDI);
    }
    iVar7 = 0;
    *(float *)((char *)this + 0x38) = (float)iVar2;
    iVar2 = *(int *)((char *)this + 0x3c);
    iVar8 = *(int *)((char *)this + 0x40) - iVar2 >> 2;
    if (0 < iVar8) {
      iVar7 = rand();
      iVar2 = *(int *)((char *)this + 0x3c);
      iVar7 = iVar7 % iVar8 + 1;
    }
    iVar2 = *(int *)(iVar2 + -4 + iVar7 * 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      puVar3 = (undefined4 *)(*(int *)(iVar2 + 8) + 8);
      if (0xf < *(uint *)(*(int *)(iVar2 + 8) + 0x1c)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      debugPrint("GAME","Performing attrition on %s.",puVar3);
      iVar2 = *(int *)(iVar2 + 0xc);
      iVar7 = 0;
      do {
        local_48 = -1;
        while( true ) {
          if (99 < iVar7) {
            if (local_48 == -1) {
              return;
            }
            goto LAB_005248c9;
          }
          iVar7 = iVar7 + 1;
          local_48 = rand();
          local_48 = local_48 % 0x14;
          if (*(int *)(iVar2 + 4 + local_48 * 4) == 0) break;
          if (local_48 != -1) {
LAB_005248c9:
            bVar9 = false;
            if (*(int *)(iVar2 + 0x54 + local_48 * 4) != 0) {
              uVar4 = rand();
              uVar4 = uVar4 & 0x80000001;
              bVar9 = uVar4 == 0;
              if ((int)uVar4 < 0) {
                bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
              }
            }
            iVar8 = 0;
            iVar7 = 8;
            do {
              iVar5 = rand();
              iVar8 = iVar8 + 1 + iVar5 % 5;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            if (bVar9) {
              iVar7 = *(int *)(*(int *)(iVar2 + 0x54 + local_48 * 4) + 4);
              fVar10 = (float)(iVar8 + -2) / *(float *)(iVar7 + 0x1c);
              puVar3 = (undefined4 *)(iVar7 + 0x38);
              if (0xf < *(uint *)(iVar7 + 0x4c)) {
                puVar3 = (undefined4 *)*puVar3;
              }
              debugPrint("GAME","Applying attrition of %.0f damage points to addon %s.",
                         (double)fVar10,puVar3);
              pfVar6 = *(float **)(iVar2 + 0x54 + local_48 * 4);
              *pfVar6 = *pfVar6 - fVar10;
              pfVar6 = *(float **)(iVar2 + 0x54 + local_48 * 4);
            }
            else {
              iVar7 = *(int *)(*(int *)(iVar2 + 4 + local_48 * 4) + 4);
              fVar10 = (float)(iVar8 + -2) / *(float *)(iVar7 + 0x1c);
              puVar3 = (undefined4 *)(iVar7 + 0x38);
              if (0xf < *(uint *)(iVar7 + 0x4c)) {
                puVar3 = (undefined4 *)*puVar3;
              }
              debugPrint("GAME","Applying attrition of %f damage points to component %s.",
                         (double)fVar10,puVar3);
              pfVar6 = *(float **)(iVar2 + 4 + local_48 * 4);
              *pfVar6 = *pfVar6 - fVar10;
              pfVar6 = *(float **)(iVar2 + 4 + local_48 * 4);
            }
            if (0.0 < *pfVar6) {
              return;
            }
            *pfVar6 = 0.0;
            return;
          }
        }
      } while( true );
    }
  }
  return;
}


// Ghidra: void __thiscall SystemManager::newDamage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3)
void SystemManager::newDamage(HullLocation param_1, float param_2, DamageType param_3)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  AnimationFrames **ppAVar1;
  MetaGameAction **ppMVar2;
  ShipModule *this_00;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  MetaGameAction *pMVar8;
  MetaGameAction *pMVar9;
  ghidra::lib::_Tree_node_t *p_Var10;
  HullLocation HVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  void *pvVar15;
  nothrow_t *pnVar16;
  MetaGameAction *pMVar17;
  MetaGameAction *pMVar18;
  uint uVar19;
  uint uVar20;
  MetaGameAction **ppMVar21;
  SystemManager *this_01;
  bool bVar22;
  float fVar23;
  MetaGameAction *in_XMM2_Da;
  HullLocation local_64;
  MetaGameAction *local_60;
  MetaGameAction *local_5c;
  void *local_58;
  MetaGameAction *local_54;
  MetaGameAction *local_50;
  void *local_4c;
  MetaGameAction **local_48;
  MetaGameAction **local_44;
  MetaGameAction *local_3c;
  MetaGameAction *local_38;
  MetaGameAction **local_34;
  MetaGameAction *local_30;
  int *local_2c;
  MetaGameAction *local_28;
  int local_24;
  void *local_20;
  HullLocation local_1c;
  SystemManager *local_18;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4c70;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_11 = '\0';
  local_30 = in_XMM2_Da;
  local_18 = this_;
  if ((((param_2 == 0.0) || (param_2 == 2.8026e-45)) || (param_2 == 5.60519e-45)) ||
     (param_2 == 7.00649e-45)) {
    iVar5 = *(int *)((char *)this_ + 0x48);
    (*(ShipClass **)(iVar5 + 0x254))->hullStrengthForSection((HullLocation)&local_64);
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(iVar5 + 0x14c),(int *)&local_3c);
    *piVar4 = (int)((float)*piVar4 + (float)local_30);
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
    pMVar17 = local_5c;
    if ((int)local_5c < *piVar4) {
      local_3c = (MetaGameAction *)param_1;
      puVar6 = (uint *)ghidra::lib::map__operator_x5b_x5d
                                 ((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
      *puVar6 = (uint)pMVar17;
    }
    iVar5 = *(int *)((char *)this_ + 0x48);
    local_3c = (MetaGameAction *)param_1;
    pMVar17 = *(MetaGameAction **)(iVar5 + 0x14c);
    pMVar8 = *(MetaGameAction **)(pMVar17 + 4);
    pMVar18 = pMVar17;
    if ((*(MetaGameAction **)(pMVar17 + 4))[0xd] == (byte)0x0) {
      do {
        if (*(int *)(pMVar8 + 0x10) < (int)param_1) {
          pMVar9 = *(MetaGameAction **)(pMVar8 + 8);
        }
        else {
          pMVar9 = *(MetaGameAction **)pMVar8;
          pMVar18 = pMVar8;
        }
        pMVar8 = pMVar9;
      } while (pMVar9[0xd] == (byte)0x0);
      if ((pMVar18 == pMVar17) || ((int)param_1 < *(int *)(pMVar18 + 0x10))) goto LAB_00524be2;
    }
    else {
LAB_00524be2:
      local_38 = (MetaGameAction *)&local_3c;
      p_Var10 = ghidra::lib::_Tree_comp_alloc___Buynode
                          ((ghidra::lib::_Tree_comp_alloc_t *)(iVar5 + 0x14c),(piecewise_construct_t *)param_1,
                           (tuple<int&&> *)&local_38,(ghidra::lib::tuple_t *)param_1);
      ghidra::lib::_Tree___Insert_hint
                ((ghidra::lib::_Tree_t *)(iVar5 + 0x14c),&local_38,pMVar18,p_Var10 + 0x10,p_Var10);
      pMVar18 = local_38;
    }
    pMVar17 = local_5c;
    puVar12 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
    if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
      puVar12 = (undefined4 *)*puVar12;
    }
    debugPrint("GAME","%s: Hull damage: %d/%d",puVar12,*(MetaGameAction **)(pMVar18 + 0x14),local_5c
              );
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
    bVar22 = SBORROW4(*piVar4,(int)pMVar17);
    iVar5 = *piVar4 - (int)pMVar17;
  }
  else {
    iVar5 = *(int *)((char *)this_ + 0x48);
    (*(ShipClass **)(iVar5 + 0x254))->hullStrengthForSection((HullLocation)&local_64);
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(iVar5 + 0x14c),(int *)&local_3c);
    iVar5 = rand();
    *piVar4 = *piVar4 + iVar5 % 6 + 1;
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
    pMVar17 = local_5c;
    if ((int)local_5c < *piVar4) {
      local_3c = (MetaGameAction *)param_1;
      puVar6 = (uint *)ghidra::lib::map__operator_x5b_x5d
                                 ((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
      *puVar6 = (uint)pMVar17;
    }
    iVar5 = *(int *)((char *)this_ + 0x48);
    piVar4 = (int *)(iVar5 + 8);
    local_3c = (MetaGameAction *)param_1;
    if (0xf < *(uint *)(iVar5 + 0x1c)) {
      piVar4 = (int *)*piVar4;
    }
    piVar7 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(iVar5 + 0x14c),(int *)&local_3c);
    debugPrint("GAME","%s: Hull damage: %d/%d",piVar4,*piVar7,local_5c);
    local_3c = (MetaGameAction *)param_1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(*(int *)((char *)this_ + 0x48) + 0x14c),(int *)&local_3c);
    bVar22 = SBORROW4(*piVar4,(int)local_5c);
    iVar5 = *piVar4 - (int)local_5c;
  }
  if (bVar22 == iVar5 < 0) {
    debugPrint("GAME","HULL SECTION DESTROYED.");
    debugPrint("GAME","Destroying all modules contained in this_ section...");
    local_11 = '\x01';
  }
  cVar3 = local_11;
  local_2c = (void *)0x0;
  local_58 = (void *)0x0;
  local_28 = (MetaGameAction *)0x0;
  local_54 = (MetaGameAction *)0x0;
  local_38 = (MetaGameAction *)0x0;
  local_50 = (MetaGameAction *)0x0;
  // [seh] local_8 = 0;
  HVar11 = 1;
  local_1c = 1;
  switch(param_2) {
  case 0.0:
    uVar19 = rand();
    uVar19 = uVar19 & 0x80000001;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
    }
    HVar11 = uVar19 + 1;
    break;
  case 1.4013e-45:
    uVar19 = rand();
    uVar19 = uVar19 & 0x80000001;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
    }
    HVar11 = uVar19 + 2;
    break;
  case 2.8026e-45:
  case 4.2039e-45:
    break;
  case 5.60519e-45:
    iVar5 = rand();
    HVar11 = iVar5 % 3 + 1;
    break;
  case 7.00649e-45:
    iVar5 = rand();
    HVar11 = (HullLocation)(iVar5 % 6 + 1 < 3);
    break;
  default:
    goto switchD_00524c84_default;
  }
  local_1c = HVar11;
switchD_00524c84_default:
  if ((cVar3 == '\0') || (param_2 == 1.4013e-45)) {
    puVar12 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
    if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
      puVar12 = (undefined4 *)*puVar12;
    }
    debugPrint("GAME","%s: Damaging %d modules.",puVar12,local_1c);
  }
  else {
    puVar12 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
    if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
      puVar12 = (undefined4 *)*puVar12;
    }
    debugPrint("GAME","%s: Removing ALL modules.",puVar12);
  }
  ppMVar21 = (MetaGameAction **)0x0;
  local_20 = (void *)0x0;
  local_4c = (void *)0x0;
  local_48 = (MetaGameAction **)0x0;
  local_34 = (MetaGameAction **)0x0;
  local_44 = (MetaGameAction **)0x0;
  // [seh] local_8._0_1_ = 2;
  local_3c = *(MetaGameAction **)((char *)this_ + 0x3c);
  fVar23 = (float)local_30 + (float)local_30;
  local_30 = (MetaGameAction *)0x0;
  local_24 = (int)fVar23;
  if (*(int *)((char *)this_ + 0x40) - (int)local_3c >> 2 != 0) {
    do {
      uVar19 = 0;
      local_2c = *(int **)(*(int *)(*(int *)((char *)this_ + 0x48) + 0x254) + 0x13c);
      iVar14 = *(int *)(*(int *)(*(int *)((char *)this_ + 0x48) + 0x254) + 0x140) - (int)local_2c;
      iVar5 = iVar14 >> 0x1f;
      iVar14 = iVar14 / 0x18 + iVar5;
      if (iVar14 != iVar5) {
        piVar4 = local_2c;
        do {
          if (*piVar4 == *(int *)(*(int *)(local_3c + (int)local_30 * 4) + 0x10)) {
            HVar11 = local_2c[uVar19 * 6 + 3];
            goto LAB_00524dde;
          }
          uVar19 = uVar19 + 1;
          piVar4 = piVar4 + 6;
        } while (uVar19 < (uint)(iVar14 - iVar5));
      }
      HVar11 = 0;
LAB_00524dde:
      if ((HVar11 == param_1) || (this_ = local_18, param_2 == 1.4013e-45)) {
        if (local_34 == ppMVar21) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_4c,ppMVar21,&local_30);
          local_34 = local_44;
        }
        else {
          *ppMVar21 = local_30;
          local_48 = ppMVar21 + 1;
        }
        this_ = local_18;
        pMVar17 = local_30;
        ppMVar21 = local_48;
        local_30 = pMVar17;
        if (local_11 != '\0') {
          ppAVar1 = (AnimationFrames **)(*(int *)(local_18 + 0x3c) + (int)local_30 * 4);
          if (local_38 == local_28) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_58,(AnimationFrames **)local_28,ppAVar1);
            local_38 = local_50;
            local_28 = local_54;
            local_30 = pMVar17;
          }
          else {
            *(AnimationFrames **)local_28 = *ppAVar1;
            local_54 = local_28 + 4;
            local_28 = local_54;
          }
        }
      }
      local_3c = *(MetaGameAction **)((char *)this_ + 0x3c);
      local_30 = local_30 + 1;
    } while (local_30 < (MetaGameAction *)(*(int *)((char *)this_ + 0x40) - (int)local_3c >> 2));
    local_2c = local_58;
    local_20 = local_4c;
  }
  puVar12 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
  HVar11 = (int)ppMVar21 - (int)local_20 >> 2;
  if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
    puVar12 = (undefined4 *)*puVar12;
  }
  local_4c = local_20;
  debugPrint("GAME","%s: Valid modules to damage: %d.",puVar12,HVar11);
  this_01 = local_18;
  if (local_11 != '\0') goto LAB_005252f4;
  if ((param_2 == 0.0) || (param_2 == 2.8026e-45)) {
    if ((local_1c != 1) && (HVar11 != 1)) goto LAB_005252f4;
    if (HVar11 != 0) {
      iVar5 = rand();
      local_3c = (MetaGameAction *)(iVar5 % 0x140);
      uVar19 = rand();
      uVar19 = uVar19 & 0x800000ff;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffff00) + 1;
      }
      iVar5 = 0;
      if (0 < (int)HVar11) {
        iVar5 = rand();
        iVar5 = iVar5 % (int)HVar11 + 1;
      }
      pMVar17 = local_3c;
      piVar4 = *(int **)(*(int *)((char *)this_ + 0x3c) + *(int *)((int)local_20 + iVar5 * 4 + -4) * 4);
      puVar12 = (undefined4 *)(piVar4[2] + 8);
      if (0xf < *(uint *)(piVar4[2] + 0x1c)) {
        puVar12 = (undefined4 *)*puVar12;
      }
      puVar13 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
      if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
        puVar13 = (undefined4 *)*puVar13;
      }
      debugPrint("GAME",
                 "%s: damaging module \'%s\' for %d points of %s damage at impact point %dx%d",
                 puVar13,puVar12,local_24,(&PTR_s_Nominal_005e19c8)[(int)param_2],local_3c,uVar19);
      ComponentInterfaceInstance::damageAtLocation
                ((ComponentInterfaceInstance *)piVar4[3],local_24,(DamageType)param_2,(int)pMVar17,
                 uVar19);
      if ((*(char *)((int)piVar4 + 99) == '\0') ||
         (cVar3 = (**(code **)(*piVar4 + 0x14))(), cVar3 != '\0')) {
        fVar23 = 0.0;
      }
      else {
        iVar5 = ComponentInterfaceInstance::getEfficiencyPercent
                          ((ComponentInterfaceInstance *)piVar4[3]);
        fVar23 = *(float *)(piVar4[2] + 0xc4) * ((float)iVar5 / 100.0);
      }
      this_01 = local_18;
      if (fVar23 < (float)piVar4[0x17]) {
        piVar4[0x17] = (int)fVar23;
      }
      goto LAB_005252f4;
    }
  }
  else {
    if ((local_1c != 1) && (HVar11 != 1)) {
      if (HVar11 < local_1c) {
        param_1 = 0;
        if (HVar11 != 0) {
          do {
            this_01 = local_18;
            piVar4 = *(int **)(*(int *)((char *)this_ + 0x3c) + *(int *)((int)local_20 + param_1 * 4) * 4);
            puVar12 = (undefined4 *)(piVar4[2] + 8);
            if (0xf < *(uint *)(piVar4[2] + 0x1c)) {
              puVar12 = (undefined4 *)*puVar12;
            }
            puVar13 = (undefined4 *)(*(int *)(local_18 + 0x48) + 8);
            if (0xf < *(uint *)(*(int *)(local_18 + 0x48) + 0x1c)) {
              puVar13 = (undefined4 *)*puVar13;
            }
            debugPrint("GAME","%s: damaging module \'%s\' for %d points of %s damage",puVar13,
                       puVar12,local_24,(&PTR_s_Nominal_005e19c8)[(int)param_2]);
            ComponentInterfaceInstance::damage
                      ((ComponentInterfaceInstance *)piVar4[3],local_24,(DamageType)param_2);
            if ((*(char *)((int)piVar4 + 99) == '\0') ||
               (cVar3 = (**(code **)(*piVar4 + 0x14))(), cVar3 != '\0')) {
              fVar23 = 0.0;
            }
            else {
              iVar5 = ComponentInterfaceInstance::getEfficiencyPercent
                                ((ComponentInterfaceInstance *)piVar4[3]);
              fVar23 = *(float *)(piVar4[2] + 0xc4) * ((float)iVar5 / 100.0);
            }
            if (fVar23 < (float)piVar4[0x17]) {
              piVar4[0x17] = (int)fVar23;
            }
            param_1 = param_1 + 1;
            this_ = this_01;
          } while (param_1 < HVar11);
        }
      }
      else {
        param_1 = 0;
        local_64 = 0;
        local_60 = (MetaGameAction *)0x0;
        local_30 = (MetaGameAction *)0x0;
        local_5c = (MetaGameAction *)0x0;
        pMVar17 = (MetaGameAction *)0x0;
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        local_3c = (MetaGameAction *)0x0;
        pMVar8 = local_3c;
        if (local_1c != 0) {
          do {
            iVar14 = (int)ppMVar21 - (int)local_20;
            iVar5 = rand();
            pvVar15 = local_20;
            local_3c = *(MetaGameAction **)((int)local_20 + (iVar5 % (iVar14 >> 2)) * 4);
            if (local_30 == pMVar17) {
              ghidra::lib::vector___Emplace_reallocate
                        ((ghidra::vector *)&local_64,(MetaGameAction **)pMVar17,&local_3c);
              local_30 = local_5c;
              param_1 = local_64;
            }
            else {
              *(MetaGameAction **)pMVar17 = local_3c;
              local_60 = pMVar17 + 4;
            }
            pMVar17 = local_60;
            piVar4 = (int *)ghidra::lib::remove___x28_x29(pvVar15,ppMVar21);
            ppMVar2 = (MetaGameAction **)*piVar4;
            if (ppMVar2 != ppMVar21) {
              ppMVar21 = ppMVar2;
              local_48 = ppMVar2;
            }
            this_ = local_18;
            pMVar8 = pMVar17;
          } while ((uint)((int)((int)pMVar17 - param_1) >> 2) < local_1c);
        }
        local_3c = pMVar8;
        this_01 = local_18;
        if ((int)((int)local_3c - param_1) >> 2 != 0) {
          iVar5 = (int)local_3c - param_1;
          local_3c = (MetaGameAction *)0x0;
          do {
            iVar14 = local_24;
            piVar4 = *(int **)(*(int *)((char *)this_ + 0x3c) + *(int *)(param_1 + (int)local_3c * 4) * 4);
            puVar12 = (undefined4 *)(piVar4[2] + 8);
            if (0xf < *(uint *)(piVar4[2] + 0x1c)) {
              puVar12 = (undefined4 *)*puVar12;
            }
            puVar13 = (undefined4 *)(*(int *)(local_18 + 0x48) + 8);
            if (0xf < *(uint *)(*(int *)(local_18 + 0x48) + 0x1c)) {
              puVar13 = (undefined4 *)*puVar13;
            }
            local_3c = local_3c + 1;
            debugPrint("GAME","%s: (module %d) damaging module \'%s\' for %d points of %s damage",
                       puVar13,local_3c,puVar12,local_24,(&PTR_s_Nominal_005e19c8)[(int)param_2]);
            ComponentInterfaceInstance::damage
                      ((ComponentInterfaceInstance *)piVar4[3],iVar14,(DamageType)param_2);
            this_ = local_18;
            if ((*(char *)((int)piVar4 + 99) == '\0') ||
               (cVar3 = (**(code **)(*piVar4 + 0x14))(), cVar3 != '\0')) {
              fVar23 = 0.0;
            }
            else {
              iVar14 = ComponentInterfaceInstance::getEfficiencyPercent
                                 ((ComponentInterfaceInstance *)piVar4[3]);
              fVar23 = *(float *)(piVar4[2] + 0xc4) * ((float)iVar14 / 100.0);
            }
            if (fVar23 < (float)piVar4[0x17]) {
              piVar4[0x17] = (int)fVar23;
            }
            this_01 = this_;
          } while (local_3c < (MetaGameAction *)(iVar5 >> 2));
        }
        // [seh] local_8._0_1_ = 2;
        if (param_1 != 0) {
          pnVar16 = (nothrow_t *)((int)local_30 - param_1 & 0xfffffffc);
          pvVar15 = (void *)param_1;
          if ((nothrow_t *)0xfff < pnVar16) {
            pvVar15 = *(void **)(param_1 - 4);
            pnVar16 = pnVar16 + 0x23;
            if (0x1f < (param_1 - (int)pvVar15) - 4) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar15,pnVar16);
        }
      }
      goto LAB_005252f4;
    }
    if (HVar11 != 0) {
      iVar5 = 0;
      if (0 < (int)HVar11) {
        iVar5 = rand();
        iVar5 = iVar5 % (int)HVar11 + 1;
      }
      iVar14 = local_24;
      this_00 = *(ShipModule **)
                 (*(int *)((char *)this_ + 0x3c) + *(int *)((int)local_20 + iVar5 * 4 + -4) * 4);
      iVar5 = *(int *)(this_00 + 8);
      puVar12 = (undefined4 *)(iVar5 + 8);
      if (0xf < *(uint *)(iVar5 + 0x1c)) {
        puVar12 = (undefined4 *)*puVar12;
      }
      puVar13 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
      if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
        puVar13 = (undefined4 *)*puVar13;
      }
      debugPrint("GAME","%s: damaging module \'%s\' for %d points of %s damage",puVar13,puVar12,
                 local_24,(&PTR_s_Nominal_005e19c8)[(int)param_2]);
      (this_00)->damageModule(iVar14, (int)param_2);
      this_01 = local_18;
      goto LAB_005252f4;
    }
  }
  puVar12 = (undefined4 *)(*(int *)((char *)this_ + 0x48) + 8);
  if (0xf < *(uint *)(*(int *)((char *)this_ + 0x48) + 0x1c)) {
    puVar12 = (undefined4 *)*puVar12;
  }
  debugPrint("GAME","%s: no modules in the right palce to damage from this_.",puVar12);
  this_01 = local_18;
LAB_005252f4:
  uVar20 = 0;
  uVar19 = (int)local_28 - (int)local_2c >> 2;
  if (uVar19 != 0) {
    do {
      removeModule(this_01,*(ShipModule **)((int)local_2c + uVar20 * 4));
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
  }
  if (local_20 != (void *)0x0) {
    pnVar16 = (nothrow_t *)((int)local_34 - (int)local_20 & 0xfffffffc);
    pvVar15 = local_20;
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_20 + -4);
      pnVar16 = pnVar16 + 0x23;
      if (0x1f < (uint)((int)local_20 + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  if (local_2c != (void *)0x0) {
    pnVar16 = (nothrow_t *)((int)local_38 - (int)local_2c & 0xfffffffc);
    piVar4 = local_2c;
    if ((nothrow_t *)0xfff < pnVar16) {
      piVar4 = *(int **)((int)local_2c + -4);
      pnVar16 = pnVar16 + 0x23;
      if (0x1f < (uint)((int)local_2c + (-4 - (int)piVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar4,pnVar16);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall SystemManager::damage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3)
void SystemManager::damage(HullLocation param_1, float param_2, DamageType param_3)

{
  DamageType in_stack_fffffff8;
  
  newDamage(this,param_1,param_2,in_stack_fffffff8);
  return;
}
