#include "../ois.exe.h"


// public: __thiscall TabletOmega::TabletOmega(void)

TabletOmega * __thiscall TabletOmega::TabletOmega(TabletOmega *this)

{
  MetaGameAction **ppMVar1;
  MetaGameAction *pMVar2;
  ConversationManager *pCVar3;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 extraout_CL_01;
  undefined1 extraout_CL_02;
  undefined1 uVar4;
  MetaGameAction *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c9831;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0x2133;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xf;
  this[0xc] = (TabletOmega)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  local_8 = 2;
  pMVar2 = operator_new(0x3c);
  local_14 = pMVar2;
  memset(pMVar2,0,0x3c);
  *(undefined4 *)(pMVar2 + 8) = 0x20;
  *(undefined4 *)(pMVar2 + 4) = 0x50;
  *(undefined4 *)(pMVar2 + 0x10) = 0;
  pMVar2[0x14] = (MetaGameAction)0x0;
  *(undefined4 *)(pMVar2 + 0x18) = 0;
  *(undefined4 *)(pMVar2 + 0x1c) = 0;
  *(undefined4 *)(pMVar2 + 0x20) = 0;
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  *(undefined4 *)(pMVar2 + 0x38) = 0xf;
  pMVar2[0x24] = (MetaGameAction)0x0;
  *(undefined ***)pMVar2 = CargoManager::vftable;
  *(int *)(pMVar2 + 0xc) = *(int *)(pMVar2 + 8) + -8;
  *(MetaGameAction **)(this + 0x48) = pMVar2;
  local_14 = operator_new(4);
  *(undefined4 *)local_14 = 0xffffffff;
  *(MetaGameAction **)(this + 0x4c) = local_14;
  pMVar2 = operator_new(0x3c);
  local_14 = pMVar2;
  memset(pMVar2,0,0x3c);
  *(undefined4 *)(pMVar2 + 8) = 0x20;
  *(undefined4 *)(pMVar2 + 4) = 0x50;
  *(undefined4 *)(pMVar2 + 0x10) = 0;
  pMVar2[0x14] = (MetaGameAction)0x0;
  *(undefined4 *)(pMVar2 + 0x18) = 0;
  *(undefined4 *)(pMVar2 + 0x1c) = 0;
  *(undefined4 *)(pMVar2 + 0x20) = 0;
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  *(undefined4 *)(pMVar2 + 0x38) = 0xf;
  pMVar2[0x24] = (MetaGameAction)0x0;
  *(undefined ***)pMVar2 = TabletInterface::vftable;
  *(int *)(pMVar2 + 0xc) = *(int *)(pMVar2 + 8) + -8;
  *(MetaGameAction **)(this + 0x50) = pMVar2;
  pMVar2 = operator_new(0x3c);
  local_14 = pMVar2;
  memset(pMVar2,0,0x3c);
  *(undefined4 *)(pMVar2 + 4) = 0x50;
  *(undefined4 *)(pMVar2 + 8) = 0x20;
  *(undefined4 *)(pMVar2 + 0x10) = 0;
  pMVar2[0x14] = (MetaGameAction)0x0;
  *(undefined4 *)(pMVar2 + 0x18) = 0;
  *(undefined4 *)(pMVar2 + 0x1c) = 0;
  *(undefined4 *)(pMVar2 + 0x20) = 0;
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  *(undefined4 *)(pMVar2 + 0x38) = 0xf;
  pMVar2[0x24] = (MetaGameAction)0x0;
  *(undefined ***)pMVar2 = MultiplayerTabletManager::vftable;
  *(int *)(pMVar2 + 0xc) = *(int *)(pMVar2 + 8) + -8;
  *(MetaGameAction **)(this + 0x54) = pMVar2;
  pCVar3 = Singleton<>::getInstance();
  *(ConversationManager **)(this + 0x58) = pCVar3;
  local_14 = (MetaGameAction *)0x0;
  *(undefined4 *)(pCVar3 + 4) = 0x1f;
  *(undefined4 *)(*(int *)(this + 0x58) + 8) = 0x18;
  ppMVar1 = *(MetaGameAction ***)(this + 0x30);
  *(MetaGameAction ***)(this + 0x34) = ppMVar1;
  if (*(MetaGameAction ***)(this + 0x38) == ppMVar1) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x30),ppMVar1,&local_14);
    uVar4 = extraout_CL_00;
  }
  else {
    *ppMVar1 = (MetaGameAction *)0x0;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
    uVar4 = extraout_CL;
  }
  ppMVar1 = *(MetaGameAction ***)(this + 0x34);
  local_14 = (MetaGameAction *)&DAT_00000001;
  if (*(MetaGameAction ***)(this + 0x38) == ppMVar1) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x30),ppMVar1,&local_14);
    uVar4 = extraout_CL_01;
  }
  else {
    *ppMVar1 = (MetaGameAction *)&DAT_00000001;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
  }
  ppMVar1 = *(MetaGameAction ***)(this + 0x34);
  local_14 = (MetaGameAction *)&DAT_00000002;
  if (*(MetaGameAction ***)(this + 0x38) == ppMVar1) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x30),ppMVar1,&local_14);
    uVar4 = extraout_CL_02;
  }
  else {
    *ppMVar1 = (MetaGameAction *)&DAT_00000002;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
  }
  *(undefined4 *)(this + 4) = 0;
  render(this,(bool)uVar4);
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall TabletOmega::renderTopFrame(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *)

void __thiscall TabletOmega::renderTopFrame(TabletOmega *this,basic_string<> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  int iVar5;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9858;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar1 = (char *)strUsingArgs((char *)local_30,"`%c",(int)(char)this[8],local_18);
  local_8 = 0;
  pcVar2 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar2 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar2,*(uint *)(pcVar1 + 0x10));
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
  std::basic_string<>::append(param_1,"`ad",3);
  iVar5 = 0x1d;
  do {
    std::basic_string<>::append(param_1,"`aa",3);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  std::basic_string<>::append(param_1,"`ae\n",4);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TabletOmega::renderBottomFrame(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *)

void __thiscall TabletOmega::renderBottomFrame(TabletOmega *this,basic_string<> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  int iVar5;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9858;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar1 = (char *)strUsingArgs((char *)local_30,"`%c",(int)(char)this[8],local_18);
  local_8 = 0;
  pcVar2 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar2 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar2,*(uint *)(pcVar1 + 0x10));
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
  std::basic_string<>::append(param_1,"`af",3);
  iVar5 = 0x1d;
  do {
    std::basic_string<>::append(param_1,"`ac",3);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  std::basic_string<>::append(param_1,"`ag",3);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TabletOmega::renderLine(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall
TabletOmega::renderLine(undefined4 param_1_00,basic_string<> *param_1,int param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  basic_string<> abStack_5c [8];
  undefined4 uStack_54;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c98a0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_54 = 0x55d67d;
  pcVar1 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 1;
  pcVar2 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar2 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar2,*(uint *)(pcVar1 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  std::basic_string<>::append(param_1,"`ab",3);
  uStack_54 = 0x55d6f4;
  pcVar1 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 2;
  pcVar2 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar2 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar2,*(uint *)(pcVar1 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  iVar6 = param_3;
  if (0 < param_3) {
    do {
      std::basic_string<>::append(param_1," ",1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  pcVar2 = (char *)&param_4;
  if (0xf < in_stack_00000020) {
    pcVar2 = param_4;
  }
  std::basic_string<>::append(param_1,pcVar2,in_stack_0000001c);
  iVar6 = 0;
  while( true ) {
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)&param_4);
    iVar3 = UIText::getRealWidthWithoutMacros();
    if ((0x1d - iVar3) - param_3 <= iVar6) break;
    std::basic_string<>::append(param_1," ",1);
    iVar6 = iVar6 + 1;
  }
  uStack_54 = 0x55d7ca;
  pcVar1 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 3;
  pcVar2 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar2 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar2,*(uint *)(pcVar1 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  std::basic_string<>::append(param_1,"`ab\n",4);
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pcVar2 = param_4;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar2 = *(char **)(param_4 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_4 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar2,pnVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TabletOmega::renderCenterLine(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall
TabletOmega::renderCenterLine(undefined4 param_1_00,basic_string<> *param_1,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  int iVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> abStack_68 [8];
  undefined4 uStack_60;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c98f0;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_60 = 0x55d8dd;
  pcVar1 = (char *)strUsingArgs((char *)local_30);
  local_8._0_1_ = 1;
  pcVar4 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar4 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar4,*(uint *)(pcVar1 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
    pnVar6 = (nothrow_t *)(local_1c + 1);
    pvVar5 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_30[0] + -4);
      pnVar6 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  std::basic_string<>::append(param_1,"`ab",3);
  uStack_60 = 0x55d954;
  pcVar1 = (char *)strUsingArgs((char *)local_30);
  local_8._0_1_ = 2;
  pcVar4 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar4 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar4,*(uint *)(pcVar1 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
    pnVar6 = (nothrow_t *)(local_1c + 1);
    pvVar5 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_30[0] + -4);
      pnVar6 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  std::basic_string<>::basic_string<>(abStack_68,(basic_string<> *)&param_3);
  iVar2 = UIText::getRealWidthWithoutMacros();
  iVar3 = (0x1d - iVar2) / 2;
  iVar7 = iVar3;
  if (0 < iVar3) {
    do {
      std::basic_string<>::append(param_1," ",1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pcVar4 = (char *)&param_3;
  if (0xf < in_stack_0000001c) {
    pcVar4 = param_3;
  }
  std::basic_string<>::append(param_1,pcVar4,in_stack_00000018);
  iVar2 = (0x1d - iVar3) - iVar2;
  if (0 < iVar2) {
    do {
      std::basic_string<>::append(param_1," ",1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uStack_60 = 0x55da3c;
  pcVar1 = (char *)strUsingArgs((char *)local_30);
  local_8._0_1_ = 3;
  pcVar4 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar4 = *(char **)pcVar1;
  }
  std::basic_string<>::append(param_1,pcVar4,*(uint *)(pcVar1 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
    pnVar6 = (nothrow_t *)(local_1c + 1);
    pvVar5 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_30[0] + -4);
      pnVar6 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  std::basic_string<>::append(param_1,"`ab\n",4);
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar4 = *(char **)(param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TabletOmega::render(bool)

void __thiscall TabletOmega::render(TabletOmega *this,bool param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  TabletOmega *pTVar4;
  char *pcVar5;
  uint uVar6;
  uint unaff_EDI;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  
  renderHeader(this);
  renderFooter(this);
  if (*(int *)(this + 0x28) != 0) {
    pTVar4 = this + 0xc;
    *(undefined4 *)(this + 0x1c) = 0;
    if (0xf < *(uint *)(this + 0x20)) {
      pTVar4 = *(TabletOmega **)(this + 0xc);
    }
    *pTVar4 = (TabletOmega)0x0;
    std::basic_string<>::append((basic_string<> *)(this + 0xc),"\n",1);
    uVar6 = 0;
    iVar7 = *(int *)(this + 0x3c);
    uVar2 = *(int *)(this + 0x40) - iVar7 >> 2;
    if (uVar2 != 0) {
      do {
        piVar8 = *(int **)(iVar7 + uVar6 * 4);
        if (*piVar8 == *(int *)(*(int *)(this + 0x30) + *(int *)(this + 4) * 4)) goto LAB_0055db77;
        iVar7 = *(int *)(this + 0x3c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    piVar8 = (int *)0x0;
LAB_0055db77:
    pcVar10 = (char *)*piVar8;
    (**(code **)(*(int *)piVar8[7] + 4))();
    iVar7 = piVar8[7];
    iVar9 = *(int *)(iVar7 + 0x10);
    pcVar5 = (char *)(iVar7 + 0x24);
    if (0xf < *(uint *)(iVar7 + 0x38)) {
      pcVar5 = *(char **)(iVar7 + 0x24);
    }
    std::basic_string<>::append((basic_string<> *)(this + 0xc),pcVar5,*(uint *)(iVar7 + 0x34));
    iVar9 = 0x18 - iVar9;
    if (0 < iVar9) {
      do {
        std::basic_string<>::append((basic_string<> *)(this + 0xc),"\n",1);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    pcVar5 = *(char **)(this + 0x28);
    pcVar3 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar3 = *(char **)pcVar5;
    }
    bVar1 = std::_Traits_equal<>(pcVar3,*(uint *)(pcVar5 + 0x10),pcVar10,unaff_EDI);
    if (!bVar1) {
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar5 = *(char **)pcVar5;
      }
      *pcVar5 = '\0';
      pTVar4 = this + 0xc;
      if (0xf < *(uint *)(this + 0x20)) {
        pTVar4 = *(TabletOmega **)(this + 0xc);
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x28),(char *)pTVar4,*(uint *)(this + 0x1c));
    }
  }
  return;
}


// public: void __thiscall TabletOmega::renderHeader(void)

void __thiscall TabletOmega::renderHeader(TabletOmega *this)

{
  char cVar1;
  basic_string<> *this_00;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  void *pvVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  basic_string<> local_a4 [4];
  undefined4 uStack_a0;
  uint local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char ***local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c9940;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = *(undefined4 **)(this + 0x24);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[4] = 0;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
    renderTopFrame(this,*(basic_string<> **)(this + 0x24));
    strUsingArgs((char *)local_a4,"`@O`^m`$e`0g`!a `9O`#S `3v1.01");
    renderCenterLine(this,*(undefined4 *)(this + 0x24));
    this_00 = *(basic_string<> **)(this + 0x24);
    pcVar5 = (char *)strUsingArgs((char *)local_74);
    local_8 = 0;
    pcVar7 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar7 = *(char **)pcVar5;
    }
    std::basic_string<>::append(this_00,pcVar7,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_60) {
      pnVar11 = (nothrow_t *)(local_60 + 1);
      pvVar8 = local_74[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar8 = *(void **)((int)local_74[0] + -4);
        pnVar11 = (nothrow_t *)(local_60 + 0x24);
        uVar3 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8))) {
LAB_0055dd01:
          local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar11);
    }
    std::basic_string<>::append(this_00,"`ab",3);
    iVar13 = 0x1d;
    do {
      std::basic_string<>::append(this_00," ",1);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    std::basic_string<>::append(this_00,"`ab\n",4);
    local_34 = iVar13;
    local_30 = 0xf;
    local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    local_78 = 0;
    if (*(int *)(this + 0x34) - *(int *)(this + 0x30) >> 2 != 0) {
      do {
        if (local_78 != 0) {
          std::basic_string<>::append((basic_string<> *)local_44," `3- ",5);
        }
        uVar12 = 0;
        piVar6 = *(int **)(this + 0x3c);
        uVar14 = *(int *)(this + 0x40) - (int)piVar6 >> 2;
        if (uVar14 != 0) {
          do {
            piVar2 = (int *)*piVar6;
            if (*piVar2 == *(int *)(*(int *)(this + 0x30) + local_78 * 4)) {
              if (piVar2 != (int *)0x0) {
                std::basic_string<>::basic_string<>
                          ((basic_string<> *)local_2c,(basic_string<> *)(piVar2 + 1));
                goto LAB_0055ddd6;
              }
              break;
            }
            uVar12 = uVar12 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar12 < uVar14);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)local_2c,"Unknown",7);
LAB_0055ddd6:
        local_8._0_1_ = 2;
        uStack_a0 = 0x55de05;
        pcVar5 = (char *)strUsingArgs((char *)local_5c);
        local_8._0_1_ = 3;
        pcVar7 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar7 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_44,pcVar7,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 2;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 2;
        if (0xf < local_48) {
          pnVar11 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar11 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) goto LAB_0055dd01;
          }
          operator_delete(pvVar8,pnVar11);
        }
        local_8._0_1_ = 1;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar8 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar8 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            uVar3 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_0055dd01;
          }
          operator_delete(pvVar8,pnVar11);
        }
        local_78 = local_78 + 1;
      } while (local_78 < (uint)(*(int *)(this + 0x34) - *(int *)(this + 0x30) >> 2));
    }
    ppppcVar10 = local_44;
    if (0xf < local_30) {
      ppppcVar10 = (char ****)local_44[0];
    }
    local_a4[0] = (basic_string<>)0x0;
    ppppcVar9 = ppppcVar10;
    do {
      cVar1 = *(char *)ppppcVar9;
      ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
    } while (cVar1 != '\0');
    std::basic_string<>::assign
              (local_a4,(char *)ppppcVar10,(int)ppppcVar9 - (int)((int)ppppcVar10 + 1));
    renderCenterLine(this,*(undefined4 *)(this + 0x24));
    renderBottomFrame(this,*(basic_string<> **)(this + 0x24));
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      ppppcVar10 = (char ****)local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        ppppcVar10 = (char ****)local_44[0][-1];
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if ((char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar10,pnVar11);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TabletOmega::renderFooter(void)

void __thiscall TabletOmega::renderFooter(TabletOmega *this)

{
  undefined4 *puVar1;
  basic_string<> local_28 [16];
  undefined4 local_18;
  
  puVar1 = *(undefined4 **)(this + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
    local_18 = 0x55dfab;
    renderTopFrame(this,*(basic_string<> **)(this + 0x2c));
    local_18 = 0;
    local_28[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_28,"[`$arrows`!] - [`$return`!]",0x1b);
    renderLine(this,*(undefined4 *)(this + 0x2c),2);
    local_18 = 0x55dfe3;
    renderBottomFrame(this,*(basic_string<> **)(this + 0x2c));
  }
  return;
}


// public: struct TabletTab * __thiscall TabletOmega::getTab(int)

TabletTab * __thiscall TabletOmega::getTab(TabletOmega *this,int param_1)

{
  TabletTab *pTVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      pTVar1 = *(TabletTab **)(*(int *)(this + 0x3c) + uVar2 * 4);
      if (*(int *)pTVar1 == param_1) {
        return pTVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (TabletTab *)0x0;
}


// public: virtual bool __thiscall TabletOmega::keyPressed(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall TabletOmega::keyPressed(TabletOmega *this,KeyCode param_1)

{
  TabletOmega *pTVar1;
  Ship SVar2;
  SoundEngine *pSVar3;
  TabletTab *pTVar4;
  NetworkData *this_00;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  Ship *pSVar5;
  uint unaff_EDI;
  Sound SVar6;
  int iVar7;
  double in_stack_ffffff8c;
  
  if (param_1 == 0x1a) {
    pTVar1 = this + 4;
    *(int *)pTVar1 = *(int *)pTVar1 + -1;
    if (*(int *)pTVar1 < 0) {
      *(int *)(this + 4) = (*(int *)(this + 0x34) - *(int *)(this + 0x30) >> 2) + -1;
    }
  }
  else {
    if (param_1 != 0x1b) {
      if (param_1 != 0x84) {
        pTVar4 = getTab(this,*(int *)(*(int *)(this + 0x30) + *(int *)(this + 4) * 4));
        (**(code **)(**(int **)(pTVar4 + 0x1c) + 8))(param_1);
        return true;
      }
      pSVar5 = *(Ship **)(g_gameData + 0xd0);
      if (ShipData::currentlyBoardedShip != pSVar5) {
        return true;
      }
      SVar2 = pSVar5[0xd0];
      if (g_gameLogic[0x71] == (GameLogic)0x0) {
        if (SVar2 != (Ship)0x0) {
          ShipInterface::doTurnOffShip(pSVar5,0,0,0);
          return true;
        }
        ShipInterface::doTurnOnShip(pSVar5,0,0,0);
        return true;
      }
      Singleton<>::getInstance();
      if (SVar2 == (Ship)0x0) {
        NetworkData::sendShipCommand
                  (this_00,0x6e,(double)((ulonglong)unaff_EDI << 0x20),
                   (double)CONCAT44(unaff_EBX,unaff_ESI),in_stack_ffffff8c);
        return true;
      }
      NetworkData::sendShipCommand
                (this_00,0x6d,(double)((ulonglong)unaff_EDI << 0x20),
                 (double)CONCAT44(unaff_EBX,unaff_ESI),in_stack_ffffff8c);
      return true;
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if ((uint)(*(int *)(this + 0x34) - *(int *)(this + 0x30) >> 2) <= *(uint *)(this + 4)) {
      *(undefined4 *)(this + 4) = 0;
    }
  }
  render(this,SUB41(this,0));
  iVar7 = -1;
  SVar6 = 8;
  pSVar5 = *(Ship **)(g_gameData + 0xd0);
  pSVar3 = Singleton<>::getInstance();
  SoundEngine::playSound(pSVar3,pSVar5,SVar6,iVar7);
  pSVar5 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar5 = *(Ship **)(g_gameData + 0xd0);
  }
  pSVar3 = Singleton<>::getInstance();
  if (OISConfiguration::keySounds == false) {
    return true;
  }
  iVar7 = rand();
  iVar7 = iVar7 % 3 + 1;
  if (pSVar5 != (Ship *)0x0) {
    SoundEngine::playSound(pSVar3,pSVar5,0xd,iVar7);
    return true;
  }
  SoundEngine::addSound(pSVar3,0,0xd,iVar7,false,true,1.0);
  return true;
}
