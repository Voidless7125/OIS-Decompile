#include "../ois.exe.h"


// public: __thiscall TerminalEngine::TerminalEngine(void)

TerminalEngine * __thiscall TerminalEngine::TerminalEngine(TerminalEngine *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0x28;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  this[0x90] = (TerminalEngine)0x0;
  return this;
}


// public: void __thiscall TerminalEngine::executeCurrentCommand(void)

void __thiscall TerminalEngine::executeCurrentCommand(TerminalEngine *this)

{
  basic_string<> *pbVar1;
  basic_string<> *pbVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  basic_string<> *pbVar5;
  allocator<> *unaff_EDI;
  basic_string<> abStack_90 [12];
  undefined4 uStack_84;
  void *local_68 [4];
  undefined4 local_58;
  uint local_54;
  vector<> local_50 [12];
  basic_string<> *local_44;
  basic_string<> *local_40;
  undefined4 local_3c;
  vector<> *local_38;
  basic_string<> *local_34;
  basic_string<> *local_30;
  void *local_2c [5];
  uint local_18;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3a88;
  local_10 = ExceptionList;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pbVar2;
  if (*(int *)(this + 0x3c) == 0) {
    uStack_84 = 0x42b4d2;
    debugPrint("ERROR","TerminalEngine has no callback configured.");
  }
  else if (*(int *)(this + 0xa0) != 0) {
    local_44 = (basic_string<> *)0x0;
    local_40 = (basic_string<> *)0x0;
    local_3c = 0;
    local_8 = 0;
    pbVar5 = (basic_string<> *)(this + 0x90);
    std::basic_string<>::basic_string<>(abStack_90,pbVar5);
    local_38 = (vector<> *)splitStringBy();
    local_30 = (basic_string<> *)0x0;
    local_34 = (basic_string<> *)0x0;
    if ((vector<> *)&local_44 != local_38) {
      std::vector<>::_Tidy((vector<> *)&local_44);
      local_40 = *(basic_string<> **)(local_38 + 4);
      local_44 = *(basic_string<> **)local_38;
      local_3c = *(undefined4 *)(local_38 + 8);
      *(undefined4 *)local_38 = 0;
      *(undefined4 *)(local_38 + 4) = 0;
      *(undefined4 *)(local_38 + 8) = 0;
      local_34 = local_40;
      local_30 = local_44;
    }
    pbVar1 = local_30;
    std::vector<>::_Tidy(local_50);
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,local_30);
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((uint)((int)(local_34 + -(int)local_30) / 0x18) < 2) {
      std::_Destroy_range<>((basic_string<> *)(local_34 + -(int)local_30),pbVar2,unaff_EDI);
      local_40 = pbVar1;
    }
    else {
      uStack_84 = 0x42b596;
      std::vector<>::erase((vector<> *)&local_44);
    }
    std::vector<>::vector<>(local_50,(vector<> *)&local_44);
    local_8._0_1_ = 2;
    std::basic_string<>::basic_string<>((basic_string<> *)local_68,(basic_string<> *)local_2c);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int **)(this + 0x3c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    uStack_84 = 0x42b5e4;
    (**(code **)(**(int **)(this + 0x3c) + 8))();
    if (0xf < local_54) {
      pnVar4 = (nothrow_t *)(local_54 + 1);
      pvVar3 = local_68[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_68[0] + -4);
        pnVar4 = (nothrow_t *)(local_54 + 0x24);
        if (0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_84 = 0x42b617;
      operator_delete(pvVar3,pnVar4);
    }
    local_58 = 0;
    local_54 = 0xf;
    local_68[0] = (void *)((uint)local_68[0] & 0xffffff00);
    std::vector<>::_Tidy(local_50);
    *(undefined4 *)(this + 0xa0) = 0;
    if (0xf < *(uint *)(this + 0xa4)) {
      pbVar5 = *(basic_string<> **)pbVar5;
    }
    *pbVar5 = (basic_string<>)0x0;
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pvVar3 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_2c[0] + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_84 = 0x42b679;
      operator_delete(pvVar3,pnVar4);
    }
    std::vector<>::_Tidy((vector<> *)&local_44);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall TerminalEngine::keyReleased(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall TerminalEngine::keyReleased(TerminalEngine *this,KeyCode param_1)

{
  basic_string<> *pbVar1;
  char cVar2;
  undefined1 uVar3;
  basic_string<> *pbVar4;
  char *pcVar5;
  Ship *pSVar6;
  SoundEngine *this_00;
  char *pcVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  PresentationInterface *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3aca;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2d = '\0';
  if (*(int *)this != 0) {
    if ((((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) || (param_1 == 0x3b)) {
      renderNextChunkOfFile(this);
    }
    goto LAB_0042b8a3;
  }
  if (((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) {
    executeCurrentCommand(this);
    std::basic_string<>::assign((basic_string<> *)(this + 0x90),"",0);
LAB_0042b78d:
    local_2d = '\x01';
  }
  else {
    if (((param_1 == 7) || (param_1 == 0x17)) || (param_1 == 0x2e)) {
      pbVar1 = (basic_string<> *)(this + 0x90);
      if (*(int *)(this + 0xa0) != 0) {
        pbVar4 = pbVar1;
        if (0xf < *(uint *)(this + 0xa4)) {
          pbVar4 = *(basic_string<> **)pbVar1;
        }
        std::basic_string<>::erase(pbVar1,&local_34,pbVar4 + *(int *)(this + 0xa0) + -1);
      }
      goto LAB_0042b78d;
    }
    if (*(uint *)(this + 0x10) <= *(uint *)(this + 0xa0)) {
      debugPrint("DETAIL","Command length hit.",local_14);
      goto LAB_0042b8a3;
    }
  }
  if (Singleton<>::instance == (PresentationInterface *)0x0) {
    local_34 = operator_new(0x418);
    local_8 = 0;
    Singleton<>::instance =
         (PresentationInterface *)PresentationInterface::PresentationInterface(local_34);
    local_8 = 0xffffffff;
  }
  cVar2 = PresentationInterface::keycodeToChar
                    (Singleton<>::instance,param_1,(bool)this[0xc],(bool)this[0xd]);
  if (cVar2 == '\0') {
    if (local_2d == '\0') goto LAB_0042b8a3;
  }
  else {
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"%c",(int)cVar2);
    local_8 = 1;
    pcVar7 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar7 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)(this + 0x90),pcVar7,*(uint *)(pcVar5 + 0x10));
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (*(int *)(this + 0x8c) != 0) {
    (**(code **)(**(int **)(this + 0x8c) + 8))();
  }
  pSVar6 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar6 = *(Ship **)(g_gameData + 0xd0);
  }
  this_00 = Singleton<>::getInstance();
  SoundEngine::playRandomKeyPress(this_00,pSVar6);
LAB_0042b8a3:
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: void __thiscall TerminalEngine::renderNextChunkOfFile(void)

void __thiscall TerminalEngine::renderNextChunkOfFile(TerminalEngine *this)

{
  vector<> *this_00;
  basic_string<> *pbVar1;
  basic_string<> *pbVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  basic_string<> *pbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  basic_string<> *unaff_EDI;
  basic_string<> abStack_58 [12];
  undefined4 uStack_4c;
  void *local_30 [5];
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3af8;
  local_10 = ExceptionList;
  pbVar1 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  piVar8 = *(int **)this;
  local_18 = (piVar8[1] - *piVar8) / 0x18;
  if (*(int *)(this + 8) + -2 < local_18) {
    local_18 = *(int *)(this + 8) + -2;
  }
  iVar6 = 0;
  if (0 < local_18) {
    iVar7 = 0;
    local_14 = piVar8;
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_30,(basic_string<> *)(**(int **)this + iVar7));
      local_8 = 0;
      if (*(int **)(this + 100) == (int *)0x0) goto LAB_0042ba69;
      (**(code **)(**(int **)(this + 100) + 8))();
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
        uStack_4c = 0x42b992;
        operator_delete(pvVar3,pnVar4);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x18;
    } while (iVar6 < local_18);
    piVar8 = *(int **)this;
  }
  pbVar5 = (basic_string<> *)*piVar8;
  local_14 = piVar8;
  if (pbVar5 != pbVar5 + local_18 * 0x18) {
    pbVar2 = std::_Move_unchecked<>(pbVar5,pbVar1,unaff_EDI);
    piVar8 = local_14;
    std::_Destroy_range<>
              ((basic_string<> *)pbVar5,(basic_string<> *)pbVar1,(allocator<> *)unaff_EDI);
    piVar8[1] = (int)pbVar2;
    piVar8 = *(int **)this;
    pbVar5 = (basic_string<> *)*piVar8;
  }
  iVar6 = piVar8[1] - (int)pbVar5 >> 0x1f;
  if ((piVar8[1] - (int)pbVar5) / 0x18 + iVar6 == iVar6) {
    abStack_58[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_58,"",0);
    std::_Func_class<>::operator()((_Func_class<> *)(this + 0x40));
    this_00 = *(vector<> **)this;
    if (this_00 != (vector<> *)0x0) {
      std::vector<>::_Tidy(this_00);
      uStack_4c = 0x42ba5c;
      operator_delete(this_00,(nothrow_t *)0xc);
    }
  }
  else {
    abStack_58[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_58,"`%[`$space`7/`$return`7 to continue`$]",0x26);
    std::_Func_class<>::operator()((_Func_class<> *)(this + 0x40));
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 8))();
    ExceptionList = local_10;
    return;
  }
LAB_0042ba69:
                    // WARNING: Subroutine does not return
  std::_Xbad_function_call();
}


// public: void * __thiscall TerminalEngine::`scalar deleting destructor'(unsigned int)

void * __thiscall TerminalEngine::_scalar_deleting_destructor_(TerminalEngine *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  TerminalEngine *pTVar3;
  uint uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7580;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(uint *)(this + 0xa4);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x90);
    pnVar6 = (nothrow_t *)(uVar1 + 1);
    pvVar5 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  this[0x90] = (TerminalEngine)0x0;
  local_8 = 0;
  pTVar3 = *(TerminalEngine **)(this + 0x8c);
  if (pTVar3 != (TerminalEngine *)0x0) {
    (**(code **)(*(int *)pTVar3 + 0x10))(pTVar3 != this + 0x68,uVar4);
    *(undefined4 *)(this + 0x8c) = 0;
  }
  local_8 = 1;
  pTVar3 = *(TerminalEngine **)(this + 100);
  if (pTVar3 != (TerminalEngine *)0x0) {
    (**(code **)(*(int *)pTVar3 + 0x10))(pTVar3 != this + 0x40);
    *(undefined4 *)(this + 100) = 0;
  }
  local_8 = 2;
  pTVar3 = *(TerminalEngine **)(this + 0x3c);
  if (pTVar3 != (TerminalEngine *)0x0) {
    (**(code **)(*(int *)pTVar3 + 0x10))(pTVar3 != this + 0x18);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  operator_delete(this,(nothrow_t *)0xa8);
  ExceptionList = local_10;
  return this;
}
