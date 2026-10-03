#include "../ois.exe.h"


// public: virtual void * __thiscall Screen_WeaponTerminal::`vector deleting destructor'(unsigned
// int)

void * __thiscall
Screen_WeaponTerminal::_vector_deleting_destructor_(Screen_WeaponTerminal *this,uint param_1)

{
  TerminalEngine *this_00;
  nothrow_t *pnVar1;
  Command *this_01;
  Command *pCVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(Ref **)(this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  this_00 = *(TerminalEngine **)(this + 0x24);
  if (this_00 != (TerminalEngine *)0x0) {
    TerminalEngine::_scalar_deleting_destructor_(this_00,(uint)this_00);
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x34));
  this_01 = *(Command **)(this + 0x28);
  if (this_01 != (Command *)0x0) {
    pCVar2 = *(Command **)(this + 0x2c);
    if (this_01 != pCVar2) {
      do {
        Command::~Command(this_01);
        this_01 = this_01 + 0x40;
      } while (this_01 != pCVar2);
      this_01 = *(Command **)(this + 0x28);
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 0x30) - (int)this_01 & 0xffffffc0);
    pCVar2 = this_01;
    if ((nothrow_t *)0xfff < pnVar1) {
      pCVar2 = *(Command **)(this_01 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Command *)0x1f < this_01 + (-4 - (int)pCVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar2,pnVar1);
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x4c);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall Screen_WeaponTerminal::configure(void)

void __thiscall Screen_WeaponTerminal::configure(Screen_WeaponTerminal *this)

{
  AnimationFrames **ppAVar1;
  TextField *pTVar2;
  int iVar3;
  undefined4 uVar4;
  allocator<Command> *paVar5;
  Command *pCVar6;
  Command *pCVar7;
  basic_string<> abStack_24c [16];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  Screen_WeaponTerminal *pSStack_228;
  code *local_1ec;
  code *local_1e8;
  TerminalEngine *local_1e4;
  TextField *local_1e0;
  Widget local_1dc [16];
  undefined4 local_1cc;
  undefined4 local_1c8;
  UpgradeCommand local_54 [64];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8e4d;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x14) = 0x2a;
  *(undefined4 *)(this + 0x18) = 0x18;
  Widget::Widget(local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(this + 0x14);
  local_1c8 = *(undefined4 *)(this + 0x18);
  pTVar2 = operator_new(0x15c00);
  local_8._0_1_ = 1;
  local_1e0 = pTVar2;
  std::basic_string<>::assign((basic_string<> *)&stack0xfffffdec,"",0);
  pSStack_228 = *(Screen_WeaponTerminal **)(this + 0xc);
  uStack_22c = 0x553606;
  pTVar2 = (TextField *)TextField::TextField(pTVar2);
  local_8._0_1_ = 0;
  *(TextField **)(this + 0x1c) = pTVar2;
  TextField::update(pTVar2);
  (**(code **)(**(int **)(this + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (TerminalEngine *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(this + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  pCVar6 = (Command *)(float)(*(int *)(*(int *)(this + 0xc) + 0x6c) / 2 + 6);
  pCVar7 = (Command *)(float)(*(int *)(*(int *)(this + 0xc) + 0x68) / 2);
  (**(code **)(**(int **)(this + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(this + 0x1c));
  iVar3 = (**(code **)(**(int **)(this + 0x1c) + 0xb0))();
  local_1e0 = *(TextField **)(iVar3 + 4);
  (**(code **)(**(int **)(this + 0x1c) + 0xb0))();
  pSStack_228 = (Screen_WeaponTerminal *)0x5536e7;
  debugPrint("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(this + 0xc);
  local_1e0 = *(TextField **)(this + 0x1c);
  ppAVar1 = *(AnimationFrames ***)(iVar3 + 0x194);
  if (*(AnimationFrames ***)(iVar3 + 0x198) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar3 + 400),ppAVar1,(AnimationFrames **)&local_1e0);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = operator_new(0xa8);
  iVar3 = TerminalEngine::TerminalEngine(local_1e4);
  *(int *)(this + 0x24) = iVar3;
  local_1ec = executeCommand;
  local_1e4 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(iVar3 + 0x18),(_Binder<> *)&local_1ec);
  local_1e8 = updateScreenCall;
  local_1e4 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(*(int *)(this + 0x24) + 0x68),(_Binder<> *)&local_1e8)
  ;
  *(undefined1 *)(*(int *)(this + 0x24) + 0xd) = 1;
  local_1e4 = operator_new(0x150);
  local_8._0_1_ = 3;
  uVar4 = TextEngine::TextEngine
                    ((TextEngine *)local_1e4,*(TextField **)(this + 0x1c),(int)(this + 0x34),
                     *(int *)(this + 0x14),*(int *)(this + 0x18),(vector<> *)(this + 0x34));
  local_8._0_1_ = 0;
  *(undefined4 *)(this + 0x20) = uVar4;
  renderWelcomeMessage(this);
  renderBottomLine(this);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_List;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"LIST",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*(WeaponCommand **)(this + 0x30) == *(WeaponCommand **)(this + 0x2c)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x28),*(WeaponCommand **)(this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Info;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"INFO",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (*(WeaponCommand **)(this + 0x30) == *(WeaponCommand **)(this + 0x2c)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x28),*(WeaponCommand **)(this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Inventory;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"INV",3);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (*(WeaponCommand **)(this + 0x30) == *(WeaponCommand **)(this + 0x2c)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x28),*(WeaponCommand **)(this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Buy;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"BUY",3);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(WeaponCommand **)(this + 0x30) == *(WeaponCommand **)(this + 0x2c)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x28),*(WeaponCommand **)(this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  Command::~Command((Command *)local_54);
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  Widget::~Widget(local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_WeaponTerminal::executeCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_WeaponTerminal::executeCommand(Screen_WeaponTerminal *this,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Screen_WeaponTerminal *pSVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *pTVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  int iVar13;
  uint unaff_EDI;
  uint uVar14;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  int in_stack_00000020;
  basic_string<> abStack_7c [8];
  undefined4 uStack_74;
  void *local_50 [3];
  vector<> local_44 [4];
  undefined4 local_40;
  uint local_3c;
  int local_38;
  Screen_WeaponTerminal *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7730;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  local_14 = pcVar6;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)&param_2);
  local_8._0_1_ = 2;
  uVar14 = 0;
  iVar13 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar13 != iVar13) {
    iVar13 = 0;
    do {
      std::basic_string<>::append((basic_string<> *)local_2c," ",1);
      pcVar7 = in_stack_0000001c + iVar13;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar8,*(uint *)(pcVar7 + 0x10));
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x18;
    } while (uVar14 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_50,"",0);
  pTVar9 = *(TextEngine **)(this + 0x20);
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>(abStack_7c,(basic_string<> *)local_50);
  TextEngine::addLineWithWrap(pTVar9,*(undefined4 *)(pTVar9 + 0x20));
  local_8._0_1_ = 2;
  pTVar9 = extraout_ECX;
  if (0xf < local_3c) {
    pnVar11 = (nothrow_t *)(local_3c + 1);
    pvVar10 = local_50[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_50[0] + -4);
      pnVar11 = (nothrow_t *)(local_3c + 0x24);
      if (0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
    pTVar9 = extraout_ECX_00;
  }
  uStack_74 = 0x553b90;
  TextEngine::addLinef(pTVar9,*(char **)(this + 0x20));
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_50,"",0);
  pTVar9 = *(TextEngine **)(this + 0x20);
  local_8._0_1_ = 4;
  std::basic_string<>::basic_string<>(abStack_7c,(basic_string<> *)local_50);
  TextEngine::addLineWithWrap(pTVar9,*(undefined4 *)(pTVar9 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_3c) {
    pnVar11 = (nothrow_t *)(local_3c + 1);
    pvVar10 = local_50[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_50[0] + -4);
      pnVar11 = (nothrow_t *)(local_3c + 0x24);
      if (0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  uVar14 = 0;
  iVar13 = *(int *)(this + 0x2c);
  local_38 = *(int *)(local_34 + 0x28);
  if (iVar13 - local_38 >> 6 != 0) {
    do {
      pcVar8 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar8 = param_2;
      }
      bVar5 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar6,unaff_EDI);
      if (bVar5) {
        std::vector<>::vector<>(local_44,(vector<> *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x28) + 0x3c);
        if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar1 + 8))();
        std::vector<>::_Tidy(local_44);
        goto LAB_00553daa;
      }
      uVar14 = uVar14 + 1;
      iVar13 = *(int *)(local_34 + 0x2c);
    } while (uVar14 < (uint)(iVar13 - local_38 >> 6));
  }
  pSVar4 = local_34;
  bVar5 = std::_Traits_equal<>("HELP",4,pcVar6,unaff_EDI);
  iVar3 = local_38;
  if (bVar5) {
    iVar2 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar2 == iVar2) {
      showCommandList(pSVar4);
      pTVar9 = *(TextEngine **)(local_34 + 0x20);
    }
    else {
      uVar14 = 0;
      if (iVar13 - local_38 >> 6 == 0) goto LAB_00553e6b;
      uVar12 = *(uint *)(in_stack_0000001c + 0x10);
      do {
        pcVar8 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pcVar8 = *(char **)in_stack_0000001c;
        }
        bVar5 = std::_Traits_equal<>(pcVar8,uVar12,pcVar6,unaff_EDI);
        if (bVar5) {
          std::vector<>::vector<>(local_44,(vector<> *)&stack0x0000001c);
          pSVar4 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x28) + 0x3c);
          if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar1 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          std::vector<>::_Tidy(local_44);
          pTVar9 = *(TextEngine **)(pSVar4 + 0x20);
          goto LAB_00553da5;
        }
        uVar14 = uVar14 + 1;
        uVar12 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar14 < (uint)(*(int *)(local_34 + 0x2c) - iVar3 >> 6));
      pTVar9 = *(TextEngine **)(local_34 + 0x20);
    }
  }
  else {
    local_40 = 0;
    local_3c = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_50,"Unknown command.",0x10);
    pTVar9 = *(TextEngine **)(pSVar4 + 0x20);
    local_8._0_1_ = 7;
    std::basic_string<>::basic_string<>(abStack_7c,(basic_string<> *)local_50);
    TextEngine::addLineWithWrap(pTVar9,*(undefined4 *)(pTVar9 + 0x20));
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_3c) {
      pnVar11 = (nothrow_t *)(local_3c + 1);
      pvVar10 = local_50[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_50[0] + -4);
        pnVar11 = (nothrow_t *)(local_3c + 0x24);
        if (0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
LAB_00553e6b:
    pTVar9 = *(TextEngine **)(local_34 + 0x20);
  }
LAB_00553da5:
  TextEngine::render(pTVar9);
LAB_00553daa:
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00553ddc;
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pnVar11 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar11) {
      pcVar6 = *(char **)(param_2 + -4);
      pnVar11 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar6)) {
LAB_00553ddc:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar6,pnVar11);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  std::vector<>::_Tidy((vector<> *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_WeaponTerminal::renderWelcomeMessage(void)

void __thiscall Screen_WeaponTerminal::renderWelcomeMessage(Screen_WeaponTerminal *this)

{
  int iVar1;
  basic_string<> local_30 [8];
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    uStack_28 = 0x553f4a;
    TextEngine::addLinef((TextEngine *)this,*(char **)(this + 0x20));
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30," `$ Weapons Terminal",0x14);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    std::basic_string<>::basic_string<>(local_30,(basic_string<> *)(*(int *)(iVar1 + 0x398) + 0x18))
    ;
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
  }
  return;
}


// public: void __thiscall Screen_WeaponTerminal::updateScreenCall(void)

void __thiscall Screen_WeaponTerminal::updateScreenCall(Screen_WeaponTerminal *this)

{
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  return;
}


// public: void __thiscall Screen_WeaponTerminal::renderBottomLine(void)

void __thiscall Screen_WeaponTerminal::renderBottomLine(Screen_WeaponTerminal *this)

{
  char ****ppppcVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  int iVar4;
  Color3B local_47 [3];
  void *local_44 [4];
  int local_34;
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7770;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  strUsingArgs((char *)local_44);
  local_8 = 0;
  strUsingArgs((char *)local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)(this + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      std::basic_string<>::append((basic_string<> *)local_44," ",1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppcVar1 = local_2c;
  if (0xf < local_18) {
    ppppcVar1 = (char ****)local_2c[0];
  }
  std::basic_string<>::append((basic_string<> *)local_44,(char *)ppppcVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff8c,(basic_string<> *)local_44)
  ;
  TextEngine::setBottomText(*(TextEngine **)(this + 0x20));
  if (0xf < local_18) {
    pnVar3 = (nothrow_t *)(local_18 + 1);
    ppppcVar1 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      ppppcVar1 = (char ****)local_2c[0][-1];
      pnVar3 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar1,pnVar3);
  }
  if (0xf < local_30) {
    pnVar3 = (nothrow_t *)(local_30 + 1);
    pvVar2 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_44[0] + -4);
      pnVar3 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_WeaponTerminal::cmd_List(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_WeaponTerminal::cmd_List(Screen_WeaponTerminal *this,char param_1)

{
  char cVar1;
  char *pcVar2;
  WeaponClass *pWVar3;
  int iVar4;
  WeaponClass *pWVar5;
  TextEngine *this_00;
  char *pcVar6;
  TextEngine *pTVar7;
  nothrow_t *pnVar8;
  undefined **ppuVar9;
  TextEngine *local_5c;
  undefined8 local_58;
  TextEngine *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005c8d00;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_5c = (TextEngine *)((uint)local_5c & 0xffffff00);
  if (param_1 == '\0') {
    std::basic_string<>::assign((basic_string<> *)&local_5c,"`!Weapons for sale:",0x13);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    local_58 = (double)CONCAT44(0x554200,(undefined4)local_58);
    TextEngine::addLinef(this_00,*(char **)(this + 0x20));
    ppuVar9 = &PTR_s_m10_005e2044;
    do {
      pcVar2 = *ppuVar9;
      local_5c = (TextEngine *)((uint)local_5c & 0xffffff00);
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      std::basic_string<>::assign
                ((basic_string<> *)&local_5c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
      pWVar3 = GameData::getWeaponClassWithIdentifier();
      if (pWVar3 == (WeaponClass *)0x0) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (TextEngine *)((uint)local_2c[0] & 0xffffff00);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (*(int *)(pWVar3 + 0x1b4) == 4) {
        std::basic_string<>::assign((basic_string<> *)local_2c,"`!PROBE",7);
      }
      else {
        std::basic_string<>::assign((basic_string<> *)local_2c,"`@",2);
        iVar4 = *(int *)(pWVar3 + 0x194);
        if (iVar4 == 1) {
          std::basic_string<>::assign((basic_string<> *)local_2c,"`$",2);
          iVar4 = *(int *)(pWVar3 + 0x194);
        }
        pcVar2 = (&PTR_s_EXP_005e2054)[iVar4];
        pcVar6 = pcVar2;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        std::basic_string<>::append
                  ((basic_string<> *)local_2c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
      }
      pWVar5 = pWVar3 + 0x60;
      local_5c = (TextEngine *)local_2c;
      if (0xf < local_18) {
        local_5c = local_2c[0];
      }
      if (0xf < *(uint *)(pWVar3 + 0x74)) {
        pWVar5 = *(WeaponClass **)pWVar5;
      }
      local_58 = (double)*(float *)(pWVar3 + 0x108);
      TextEngine::addLinef
                (local_5c,*(char **)(this + 0x20)," `3%s: %s`7, %.02fgm/s, yield %.0f `7- `$%dc",
                 pWVar5);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pTVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pTVar7 = *(TextEngine **)(local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if ((TextEngine *)0x1f < local_2c[0] + (-4 - (int)pTVar7)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pTVar7,pnVar8);
      }
      ppuVar9 = ppuVar9 + 1;
    } while ((int)ppuVar9 < 0x5e2054);
  }
  else {
    std::basic_string<>::assign
              ((basic_string<> *)&local_5c,"`3LIST`2: list all weapons available for sale",0x2d);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_WeaponTerminal::cmd_Inventory(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_WeaponTerminal::cmd_Inventory(Screen_WeaponTerminal *this)

{
  TextEngine *this_00;
  int iVar1;
  int iVar2;
  uint local_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c78a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c = local_3c & 0xffffff00;
  if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) == 0) {
    std::basic_string<>::assign((basic_string<> *)&local_3c,"`@ ** ERROR: No weapons module",0x1e);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  else {
    std::basic_string<>::assign((basic_string<> *)&local_3c,"`! Weapons:",0xb);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    iVar1 = 0;
    iVar2 = 0x3c;
    do {
      this_00 = *(TextEngine **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
      if ((float)iVar1 < *(float *)(*(int *)(this_00 + 8) + 0x104)) {
        if (*(int *)(this_00 + iVar2) == 0) {
          TextEngine::addLinef(this_00,*(char **)(this + 0x20));
        }
        else {
          TextEngine::addLinef(this_00,*(char **)(this + 0x20));
        }
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0x5c);
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8) != 0) {
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      local_3c = 0x5544c0;
      TextEngine::addLinef
                (*(TextEngine **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8),
                 *(char **)(this + 0x20));
    }
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_WeaponTerminal::cmd_Buy(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_WeaponTerminal::cmd_Buy(Screen_WeaponTerminal *this,char param_1,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  TextEngine *this_00;
  int iVar7;
  TextEngine *pTVar8;
  undefined4 extraout_ECX_00;
  TextEngine *this_01;
  char *pcVar9;
  uint unaff_EDI;
  undefined **ppuVar10;
  uint uVar11;
  basic_string<> local_40 [4];
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7878;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar2 = param_4 - param_3 >> 0x1f;
    if ((param_4 - param_3) / 0x18 + iVar2 == iVar2) {
      uStack_3c = 0x554584;
      cmd_Buy(this);
      goto LAB_005547d7;
    }
    _param_1 = (WeaponClass *)0x0;
    std::transform<>();
    bVar4 = std::_Traits_equal<>("cm",2,pcVar5,unaff_EDI);
    if (bVar4) {
      if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 0x32) {
LAB_005545fd:
        uVar11 = 0x1d;
        pcVar5 = "`$ ** Not enough money to buy";
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8);
        if (iVar2 == 0) {
          uVar11 = 0x14;
          pcVar5 = "`$ ** No CM launcher";
        }
        else {
          if ((float)*(int *)(iVar2 + 0x68) < *(float *)(*(int *)(iVar2 + 8) + 0x104)) {
            *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
            local_40[0] = (basic_string<>)0x0;
            std::basic_string<>::assign(local_40,"CM",2);
            BankAccount::addTransaction
                      (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,0xffffffce);
            TextEngine::addLinef(this_00,*(char **)(this + 0x20));
            goto LAB_005546a4;
          }
          uVar11 = 0x1e;
          pcVar5 = "`$ ** Not enough space to load";
        }
      }
    }
    else {
LAB_005546a4:
      ppuVar10 = &PTR_s_m10_005e2044;
      do {
        pcVar3 = *ppuVar10;
        pcVar9 = pcVar3;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        bVar4 = std::_Traits_equal<>(pcVar3,(int)pcVar9 - (int)(pcVar3 + 1),pcVar5,unaff_EDI);
        if (bVar4) {
          local_40[0] = (basic_string<>)0x0;
          pcVar9 = pcVar3;
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          std::basic_string<>::assign(local_40,pcVar3,(int)pcVar9 - (int)(pcVar3 + 1));
          _param_1 = GameData::getWeaponClassWithIdentifier();
          if (_param_1 == (WeaponClass *)0x0) goto LAB_005547d7;
        }
        ppuVar10 = ppuVar10 + 1;
      } while ((int)ppuVar10 < 0x5e2054);
      if (_param_1 == (WeaponClass *)0x0) {
        uVar11 = 0x14;
        pcVar5 = "`$ ** Unknown weapon";
      }
      else {
        if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < *(int *)(_param_1 + 0x1a0))
        goto LAB_005545fd;
        iVar2 = *(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x40) + 0x20);
        if (iVar2 == 0) {
          uVar11 = 0x16;
          pcVar5 = "`$ ** No weapon system";
        }
        else {
          iVar7 = 0;
          piVar6 = (int *)(iVar2 + 0x3c);
          do {
            if (((float)iVar7 < *(float *)(*(int *)(iVar2 + 8) + 0x104)) && (*piVar6 == 0)) {
              Ship::addWeapon(*(Ship **)(g_gameData + 0xd0),_param_1,-1);
              std::basic_string<>::basic_string<>(local_40,(basic_string<> *)_param_1);
              BankAccount::addTransaction
                        (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_00,
                         -*(int *)(_param_1 + 0x1a0));
              uStack_3c = 0x55483a;
              TextEngine::addLinef(this_01,*(char **)(this + 0x20));
              goto LAB_005547d7;
            }
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar7 < 8);
          uVar11 = 0x1f;
          pcVar5 = "`$ ** No empty tubes for weapon";
        }
      }
    }
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,pcVar5,uVar11);
    pTVar8 = *(TextEngine **)(this + 0x20);
  }
  else {
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,"`3BUY [weapon]`2: purchase a weapon",0x23);
    pTVar8 = *(TextEngine **)(this + 0x20);
  }
  TextEngine::addLine(pTVar8);
LAB_005547d7:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_WeaponTerminal::cmd_Info(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_WeaponTerminal::cmd_Info
          (Screen_WeaponTerminal *this,char param_1,basic_string<> *param_3,int param_4)

{
  basic_string<> *pbVar1;
  bool bVar2;
  char *pcVar3;
  WeaponClass *pWVar4;
  int iVar5;
  TextEngine *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  TextEngine *this_04;
  TextEngine *this_05;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *this_06;
  TextEngine *this_07;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint unaff_EDI;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c77e0;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar3;
  if (param_1 == '\0') {
    iVar5 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar5 == iVar5) {
      cmd_Info(this);
    }
    else {
      std::transform<>();
      pbVar1 = param_3;
      bVar2 = std::_Traits_equal<>("cm",2,pcVar3,unaff_EDI);
      if (bVar2) {
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffffa8,"`! ** Weapon Details ** ",0x18);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
        TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
        TextEngine::addLinef(this_00,*(char **)(this + 0x20));
        TextEngine::addLinef(this_01,*(char **)(this + 0x20));
      }
      else {
        std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffffa8,pbVar1);
        pWVar4 = GameData::getWeaponClassWithIdentifier();
        if (pWVar4 != (WeaponClass *)0x0) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (*(int *)(pWVar4 + 0x1b4) == 4) {
            std::basic_string<>::assign((basic_string<> *)local_2c,"`!Probe",7);
          }
          else {
            std::basic_string<>::assign((basic_string<> *)local_2c,"`@",2);
            iVar5 = *(int *)(pWVar4 + 0x194);
            if (iVar5 == 1) {
              std::basic_string<>::assign((basic_string<> *)local_2c,"`$",2);
              iVar5 = *(int *)(pWVar4 + 0x194);
            }
            std::basic_string<>::append
                      ((basic_string<> *)local_2c,(&PTR_s_Explosive_005e206c)[iVar5]);
          }
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffffa8,"`! ** Weapon Details ** ",0x18);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
          TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
          TextEngine::addLinef(this_02,*(char **)(this + 0x20));
          TextEngine::addLinef(this_03,*(char **)(this + 0x20));
          TextEngine::addLinef(this_04,*(char **)(this + 0x20));
          if (*(int *)(pWVar4 + 0x1b4) == 4) {
            std::basic_string<>::assign((basic_string<> *)&stack0xffffffa8,"`3Size  : `8n/a",0xf);
            TextEngine::addLine(*(TextEngine **)(this + 0x20));
            this_06 = extraout_ECX;
          }
          else {
            TextEngine::addLinef(this_05,*(char **)(this + 0x20));
            this_06 = extraout_ECX_00;
          }
          TextEngine::addLinef(this_06,*(char **)(this + 0x20));
          TextEngine::addLinef(this_07,*(char **)(this + 0x20));
          TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
          if (0xf < local_18) {
            pnVar7 = (nothrow_t *)(local_18 + 1);
            pvVar6 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar7) {
              pvVar6 = *(void **)((int)local_2c[0] + -4);
              pnVar7 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar6,pnVar7);
          }
        }
      }
    }
  }
  else {
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffffa8,
               "`3INFO [weapon]`2: get detailed information about a weapon for sale",0x43);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_WeaponTerminal::showCommandList(void)

void __thiscall Screen_WeaponTerminal::showCommandList(Screen_WeaponTerminal *this)

{
  TextEngine *pTVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  basic_string<> local_58 [8];
  undefined4 uStack_50;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c77b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"",0);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`%Weapon Terminal 3.0.1 `7(c) by Purchase Tech",0x2e);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`0Valid commands:",0x11);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_14 = 0;
  if (*(int *)(this + 0x2c) - *(int *)(this + 0x28) >> 6 != 0) {
    do {
      uStack_50 = 0x554c7f;
      strUsingArgs((char *)local_30);
      pTVar1 = *(TextEngine **)(this + 0x20);
      local_8 = 0;
      std::basic_string<>::basic_string<>(local_58,(basic_string<> *)local_30);
      TextEngine::addLineWithWrap(pTVar1,*(undefined4 *)(pTVar1 + 0x20));
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar3 = (nothrow_t *)(local_1c + 1);
        pvVar2 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar3) {
          pvVar2 = *(void **)((int)local_30[0] + -4);
          pnVar3 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_00554d62;
        }
        operator_delete(pvVar2,pnVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(this + 0x2c) - *(int *)(this + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_30,"`3HELP",6);
  pTVar1 = *(TextEngine **)(this + 0x20);
  local_8 = 1;
  std::basic_string<>::basic_string<>(local_58,(basic_string<> *)local_30);
  TextEngine::addLineWithWrap(pTVar1,*(undefined4 *)(pTVar1 + 0x20));
  if (0xf < local_1c) {
    pnVar3 = (nothrow_t *)(local_1c + 1);
    pvVar2 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_30[0] + -4);
      pnVar3 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) {
LAB_00554d62:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Screen_WeaponTerminal::reset(void)

void __thiscall Screen_WeaponTerminal::reset(Screen_WeaponTerminal *this)

{
  TextEngine *this_00;
  undefined4 *puVar1;
  allocator<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  
  this_00 = *(TextEngine **)(this + 0x20);
  puVar1 = *(undefined4 **)(this_00 + 8);
  std::_Destroy_range<>((basic_string<> *)this,unaff_EDI,unaff_ESI);
  puVar1[1] = *puVar1;
  TextEngine::render(this_00);
  renderWelcomeMessage(this);
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  return;
}
