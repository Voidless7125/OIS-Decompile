#include "../ois.exe.h"


// public: virtual void * __thiscall Screen_Terminal::`scalar deleting destructor'(unsigned int)

void * __thiscall Screen_Terminal::_scalar_deleting_destructor_(Screen_Terminal *this,uint param_1)

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
  if (*(Ref **)(this + 0x20) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  this_00 = *(TerminalEngine **)(this + 0x28);
  if (this_00 != (TerminalEngine *)0x0) {
    TerminalEngine::_scalar_deleting_destructor_(this_00,(uint)this_00);
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x38));
  this_01 = *(Command **)(this + 0x2c);
  if (this_01 != (Command *)0x0) {
    pCVar2 = *(Command **)(this + 0x30);
    if (this_01 != pCVar2) {
      do {
        Command::~Command(this_01);
        this_01 = this_01 + 0x40;
      } while (this_01 != pCVar2);
      this_01 = *(Command **)(this + 0x2c);
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 0x34) - (int)this_01 & 0xffffffc0);
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
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000044);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall Screen_Terminal::configure(void)

void __thiscall Screen_Terminal::configure(Screen_Terminal *this)

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
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  Screen_Terminal *pSStack_228;
  code *local_1ec;
  code *local_1e8;
  TerminalEngine *local_1e4;
  undefined4 local_1e0;
  Widget local_1dc [16];
  undefined4 local_1cc;
  undefined4 local_1c8;
  UpgradeCommand local_54 [64];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8996;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(g_gameData + 0xd0);
  *(undefined4 *)(this + 0x18) = 0x2a;
  *(undefined4 *)(this + 0x1c) = 0x18;
  Widget::Widget(local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(this + 0x18);
  local_1c8 = *(undefined4 *)(this + 0x1c);
  pTVar2 = operator_new(0x15c00);
  local_8._0_1_ = 1;
  local_1e0 = (AnimationFrames *)pTVar2;
  std::basic_string<>::assign((basic_string<> *)&stack0xfffffdec,"",0);
  pSStack_228 = *(Screen_Terminal **)(this + 0xc);
  uStack_22c = 0x54a6a4;
  pTVar2 = (TextField *)TextField::TextField(pTVar2);
  local_8._0_1_ = 0;
  *(TextField **)(this + 0x20) = pTVar2;
  TextField::update(pTVar2);
  (**(code **)(**(int **)(this + 0x20) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (TerminalEngine *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(this + 0x20) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  pCVar6 = (Command *)(float)(*(int *)(*(int *)(this + 0xc) + 0x6c) / 2 + 6);
  pCVar7 = (Command *)(float)(*(int *)(*(int *)(this + 0xc) + 0x68) / 2);
  (**(code **)(**(int **)(this + 0x20) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(this + 0x20));
  iVar3 = (**(code **)(**(int **)(this + 0x20) + 0xb0))();
  local_1e0 = *(AnimationFrames **)(iVar3 + 4);
  (**(code **)(**(int **)(this + 0x20) + 0xb0))();
  pSStack_228 = (Screen_Terminal *)0x54a785;
  debugPrint("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(this + 0xc);
  local_1e0 = *(AnimationFrames **)(this + 0x20);
  ppAVar1 = *(AnimationFrames ***)(iVar3 + 0x194);
  if (*(AnimationFrames ***)(iVar3 + 0x198) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar3 + 400),ppAVar1,(AnimationFrames **)&local_1e0);
  }
  else {
    *ppAVar1 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = operator_new(0xa8);
  iVar3 = TerminalEngine::TerminalEngine(local_1e4);
  *(int *)(this + 0x28) = iVar3;
  local_1ec = executeCommand;
  local_1e4 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(iVar3 + 0x18),(_Binder<> *)&local_1ec);
  local_1e8 = updateScreenCall;
  local_1e4 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(*(int *)(this + 0x28) + 0x68),(_Binder<> *)&local_1e8)
  ;
  *(undefined1 *)(*(int *)(this + 0x28) + 0xd) = 1;
  local_1e4 = operator_new(0x150);
  local_8._0_1_ = 3;
  uVar4 = TextEngine::TextEngine
                    ((TextEngine *)local_1e4,*(TextField **)(this + 0x20),(int)(this + 0x38),
                     *(int *)(this + 0x18),*(int *)(this + 0x1c),(vector<> *)(this + 0x38));
  local_8._0_1_ = 0;
  *(undefined4 *)(this + 0x24) = uVar4;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1e0 + 1),'\0','\0',0xff);
  pcStack_230 = (code *)(*(int *)(this + 0x28) + 0x90);
  if (0xf < *(uint *)(*(int *)(this + 0x28) + 0xa4)) {
    pcStack_230 = *(code **)pcStack_230;
  }
  uStack_22c = 3;
  ppuStack_234 = (undefined **)0x623b04;
  uStack_23c = 0x54a897;
  strUsingArgs((char *)&pSStack_228);
  uStack_22c = 0x54a8a2;
  TextEngine::setBottomText(*(TextEngine **)(this + 0x24));
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Status;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"STATUS",6);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Power;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"POWER",5);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Inv;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"INV",3);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Modules;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"MODULES",7);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Module;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"MODULE",6);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Rotate;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xe;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"ROT",3);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Burn;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  uStack_23c = 0;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"BURN",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  if (*(WeaponCommand **)(this + 0x34) == *(WeaponCommand **)(this + 0x30)) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x2c),*(WeaponCommand **)(this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar5,pCVar7,pCVar6);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  Command::~Command((Command *)local_54);
  updateScreenCall(this);
  Widget::~Widget(local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual bool __thiscall Screen_Terminal::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_Terminal::onKeyReleased(Screen_Terminal *this,KeyCode param_1,Event *param_2)

{
  bool bVar1;
  
  bVar1 = TerminalEngine::keyReleased(*(TerminalEngine **)(this + 0x28),param_1);
  return bVar1;
}


// public: void __thiscall Screen_Terminal::executeCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_Terminal::executeCommand(Screen_Terminal *this,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Screen_Terminal *pSVar4;
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
  Screen_Terminal *local_34;
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
  pTVar9 = *(TextEngine **)(this + 0x24);
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
  uStack_74 = 0x54ae40;
  TextEngine::addLinef(pTVar9,*(char **)(this + 0x24));
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_50,"",0);
  pTVar9 = *(TextEngine **)(this + 0x24);
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
  iVar13 = *(int *)(this + 0x30);
  local_38 = *(int *)(local_34 + 0x2c);
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
        piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x2c) + 0x3c);
        if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar1 + 8))();
        std::vector<>::_Tidy(local_44);
        goto LAB_0054b05a;
      }
      uVar14 = uVar14 + 1;
      iVar13 = *(int *)(local_34 + 0x30);
    } while (uVar14 < (uint)(iVar13 - local_38 >> 6));
  }
  pSVar4 = local_34;
  bVar5 = std::_Traits_equal<>("HELP",4,pcVar6,unaff_EDI);
  iVar3 = local_38;
  if (bVar5) {
    iVar2 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar2 == iVar2) {
      showCommandList(pSVar4);
      pTVar9 = *(TextEngine **)(local_34 + 0x24);
    }
    else {
      uVar14 = 0;
      if (iVar13 - local_38 >> 6 == 0) goto LAB_0054b11b;
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
          piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x2c) + 0x3c);
          if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar1 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          std::vector<>::_Tidy(local_44);
          pTVar9 = *(TextEngine **)(pSVar4 + 0x24);
          goto LAB_0054b055;
        }
        uVar14 = uVar14 + 1;
        uVar12 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar14 < (uint)(*(int *)(local_34 + 0x30) - iVar3 >> 6));
      pTVar9 = *(TextEngine **)(local_34 + 0x24);
    }
  }
  else {
    local_40 = 0;
    local_3c = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_50,"Unknown command.",0x10);
    pTVar9 = *(TextEngine **)(pSVar4 + 0x24);
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
LAB_0054b11b:
    pTVar9 = *(TextEngine **)(local_34 + 0x24);
  }
LAB_0054b055:
  TextEngine::render(pTVar9);
LAB_0054b05a:
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0054b08c;
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
LAB_0054b08c:
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


// public: void __thiscall Screen_Terminal::updateScreenCall(void)

void __thiscall Screen_Terminal::updateScreenCall(Screen_Terminal *this)

{
  undefined4 *puVar1;
  char acStack_2c [12];
  undefined4 uStack_20;
  Color3B local_7 [3];
  
  uStack_20 = 0x54b1cb;
  cocos2d::Color3B::Color3B(local_7,'\0','\0',0xff);
  puVar1 = (undefined4 *)(*(int *)(this + 0x28) + 0x90);
  if (0xf < *(uint *)(*(int *)(this + 0x28) + 0xa4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  strUsingArgs(acStack_2c,"SYS> `%%%s%c",puVar1,3);
  TextEngine::setBottomText(*(TextEngine **)(this + 0x24));
  TextEngine::render(*(TextEngine **)(this + 0x24));
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Status(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_Terminal::cmd_Status(Screen_Terminal *this,char param_1)

{
  SystemManager *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  TextEngine *this_04;
  TextEngine *this_05;
  char *pcVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8758;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    TextEngine::addLinef((TextEngine *)this,*(char **)(this + 0x24));
    TextEngine::addLinef(this_01,*(char **)(this + 0x24));
    TextEngine::addLinef(this_02,*(char **)(this + 0x24));
    SystemManager::totalPowerGeneration(*(SystemManager **)(*(int *)(this + 0x14) + 0x40));
    SystemManager::totalPowerGeneration(*(SystemManager **)(*(int *)(this + 0x14) + 0x40));
    TextEngine::addLinef(this_03,*(char **)(this + 0x24));
    SystemManager::totalPossiblePower(*(SystemManager **)(*(int *)(this + 0x14) + 0x40));
    SystemManager::totalCurrentPower(*(SystemManager **)(*(int *)(this + 0x14) + 0x40));
    TextEngine::addLinef(this_04,*(char **)(this + 0x24));
    this_00 = *(SystemManager **)(*(int *)(this + 0x14) + 0x40);
    SystemManager::totalPowerDrain(this_00);
    SystemManager::totalPowerGeneration(this_00);
    TextEngine::addLinef(this_05,*(char **)(this + 0x24));
    switch(*(undefined4 *)(*(int *)(this + 0x14) + 0xd4)) {
    case 0:
      uVar2 = 0x20;
      pcVar1 = "Current Status: `%Manual Control";
      break;
    case 1:
      uVar2 = 0x23;
      pcVar1 = "Current Status: `$Automatic Control";
      break;
    case 2:
      uVar2 = 0x1a;
      pcVar1 = "Current Status: `0In Orbit";
      break;
    case 3:
      uVar2 = 0x18;
      pcVar1 = "Current Status: `1Docked";
      break;
    default:
      goto switchD_0054b390_default;
    }
  }
  else {
    uVar2 = 0x27;
    pcVar1 = "`3STATUS`2: display ship system summary";
  }
  std::basic_string<>::assign((basic_string<> *)&stack0xffffffcc,pcVar1,uVar2);
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
switchD_0054b390_default:
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Power(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_Terminal::cmd_Power(Screen_Terminal *this,char param_1,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ShipModule *pSVar4;
  bool bVar5;
  char *pcVar6;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *pTVar7;
  TextEngine *this_00;
  uint uVar8;
  uint unaff_EDI;
  float fVar9;
  undefined1 in_XMM0 [16];
  float fVar10;
  char *local_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c78a8;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == '\0') &&
     (iVar1 = param_4 - param_3 >> 0x1f, (param_4 - param_3) / 0x18 + iVar1 != iVar1)) {
    iVar1 = *(int *)(g_gameData + 0xd0);
    bVar5 = std::_Traits_equal<>("DRAIN",5,pcVar6,unaff_EDI);
    if (bVar5) {
      uVar8 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x3c) + uVar8 * 4);
          if (*(char *)(iVar2 + 99) != '\0') {
            if (*(char *)(iVar2 + 0x62) == '\0') {
              fVar10 = *(float *)(*(int *)(iVar2 + 8) + 0xc0);
              fVar9 = fVar10;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(iVar2 + 0xc));
              fVar10 = fVar9 * fVar10 + fVar10;
            }
            else {
              iVar3 = *(int *)(iVar2 + 100);
              fVar10 = *(float *)(*(int *)(iVar2 + 8) + 0xbc);
              fVar9 = fVar10;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(iVar2 + 0xc));
              fVar10 = (fVar9 * fVar10 + fVar10) * ((float)iVar3 / 100.0);
            }
            if (0.0 < fVar10) {
              pTVar7 = *(TextEngine **)(*(int *)(*(int *)(iVar1 + 0x40) + 0x3c) + uVar8 * 4);
              if (pTVar7[99] != (TextEngine)0x0) {
                if (pTVar7[0x62] == (TextEngine)0x0) {
                  ComponentInterfaceInstance::getPowerModifier
                            (*(ComponentInterfaceInstance **)(pTVar7 + 0xc));
                  pTVar7 = extraout_ECX_00;
                }
                else {
                  ComponentInterfaceInstance::getPowerModifier
                            (*(ComponentInterfaceInstance **)(pTVar7 + 0xc));
                  pTVar7 = extraout_ECX;
                }
              }
              local_3c = (char *)0x54b5fc;
              TextEngine::addLinef(pTVar7,*(char **)(this + 0x24));
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_0054b7dd;
    }
    bVar5 = std::_Traits_equal<>("GEN",3,pcVar6,unaff_EDI);
    if (bVar5) {
      uVar8 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          pSVar4 = *(ShipModule **)
                    (*(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x3c) + uVar8 * 4);
          if ((pSVar4[99] != (ShipModule)0x0) &&
             (ShipModule::getCurrentGenerationRate(pSVar4), 0.0 < in_XMM0._0_4_)) {
            pTVar7 = *(TextEngine **)(iVar1 + 0x40);
            pSVar4 = *(ShipModule **)(*(int *)(pTVar7 + 0x3c) + uVar8 * 4);
            if (pSVar4[99] == (ShipModule)0x0) {
              in_XMM0 = ZEXT816(0);
            }
            else {
              ShipModule::getCurrentGenerationRate(pSVar4);
              pTVar7 = *(TextEngine **)(iVar1 + 0x40);
            }
            in_XMM0._0_8_ = (double)in_XMM0._0_4_;
            local_3c = (char *)0x54b6be;
            TextEngine::addLinef(pTVar7,*(char **)(this + 0x24));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_0054b7dd;
    }
    bVar5 = std::_Traits_equal<>("STORE",5,pcVar6,unaff_EDI);
    if (bVar5) {
      pTVar7 = *(TextEngine **)(iVar1 + 0x40);
      uVar8 = 0;
      if (*(int *)(pTVar7 + 0x40) - *(int *)(pTVar7 + 0x3c) >> 2 != 0) {
        do {
          if (0.0 < *(float *)(*(int *)(*(int *)(*(int *)(pTVar7 + 0x3c) + uVar8 * 4) + 8) + 0xc4))
          {
            local_3c = "`%%%s`2: storing `$%.2fmw`2/`$%.2fmw";
            TextEngine::addLinef(pTVar7,*(char **)(this + 0x24));
            pTVar7 = *(TextEngine **)(iVar1 + 0x40);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(pTVar7 + 0x40) - *(int *)(pTVar7 + 0x3c) >> 2));
      }
      SystemManager::getCurrentPowerPercentage((SystemManager *)pTVar7);
      SystemManager::totalPossiblePower(*(SystemManager **)(iVar1 + 0x40));
      SystemManager::totalCurrentPower(*(SystemManager **)(iVar1 + 0x40));
      local_3c = "`2Total power: `$%.2fmw`2/`$%.2fmw (%d%%)";
      TextEngine::addLinef(this_00,*(char **)(this + 0x24));
      goto LAB_0054b7dd;
    }
  }
  local_3c = (char *)((uint)local_3c & 0xffffff00);
  std::basic_string<>::assign
            ((basic_string<> *)&local_3c,
             "`3POWER`2 (DRAIN,GEN,STORE): display power storage, or items currently draining or generating power"
             ,99);
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
LAB_0054b7dd:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Inv(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_Terminal::cmd_Inv(Screen_Terminal *this,char param_1)

{
  CargoPod *this_00;
  uint uVar1;
  Good *pGVar2;
  TextEngine *pTVar3;
  TextEngine *pTVar4;
  void *pvVar5;
  TextEngine *this_01;
  TextEngine *this_02;
  nothrow_t *pnVar6;
  int *piVar7;
  int iVar8;
  GameData *local_60;
  void *local_5c;
  uint local_48;
  void *local_44;
  uint local_30;
  void *local_2c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c89e0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    local_60 = (GameData *)0xc;
    iVar8 = 1;
    do {
      if (iVar8 + -1 < *(int *)(*(int *)(*(int *)(this + 0x14) + 0x1f8) + 8)) {
        this_00 = *(CargoPod **)(local_60 + *(int *)(*(int *)(this + 0x14) + 0x1f8));
        if (this_00 == (CargoPod *)0x0) {
          TextEngine::addLinef((TextEngine *)local_60,*(char **)(this + 0x24));
        }
        else if ((*(int *)(this_00 + 8) < 1) || (*(int *)(this_00 + 4) == -1)) {
          CargoPod::describeAddons(this_00);
          local_8._0_1_ = 3;
          TextEngine::addLinef(this_02,*(char **)(this + 0x24));
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_48) {
            pnVar6 = (nothrow_t *)(local_48 + 1);
            pvVar5 = local_5c;
            if ((nothrow_t *)0xfff < pnVar6) {
              pvVar5 = *(void **)((int)local_5c + -4);
              pnVar6 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c + (-4 - (int)pvVar5))) goto LAB_0054ba81;
            }
            operator_delete(pvVar5,pnVar6);
          }
          local_48 = 0xf;
          local_5c = (void *)((uint)local_5c & 0xffffff00);
        }
        else {
          pGVar2 = GameData::getGood(local_60,*(int *)(this_00 + 4));
          if (pGVar2 == (Good *)0x0) {
            CargoPod::describeAddons(this_00);
            local_8._0_1_ = 2;
            TextEngine::addLinef(this_01,*(char **)(this + 0x24));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pnVar6 = (nothrow_t *)(local_30 + 1);
              pvVar5 = local_44;
              if ((nothrow_t *)0xfff < pnVar6) {
                pvVar5 = *(void **)((int)local_44 + -4);
                pnVar6 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar5))) goto LAB_0054ba81;
              }
              operator_delete(pvVar5,pnVar6);
            }
            local_30 = 0xf;
            local_44 = (void *)((uint)local_44 & 0xffffff00);
          }
          else {
            pTVar3 = (TextEngine *)CargoPod::describeAddons(this_00);
            local_8._0_1_ = 1;
            if (0xf < *(uint *)(pTVar3 + 0x14)) {
              pTVar3 = *(TextEngine **)pTVar3;
            }
            TextEngine::addLinef(pTVar3,*(char **)(this + 0x24));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar6 = (nothrow_t *)(local_18 + 1);
              pvVar5 = local_2c;
              if ((nothrow_t *)0xfff < pnVar6) {
                pvVar5 = *(void **)((int)local_2c + -4);
                pnVar6 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar5))) {
LAB_0054ba81:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar5,pnVar6);
            }
            local_18 = 0xf;
            local_2c = (void *)((uint)local_2c & 0xffffff00);
          }
        }
      }
      local_60 = local_60 + 4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xf);
    pTVar3 = (TextEngine *)0x0;
    iVar8 = 7;
    piVar7 = (int *)(*(int *)(*(int *)(this + 0x14) + 0x1f8) + 0x10);
    do {
      pTVar4 = pTVar3 + 0x14;
      if (piVar7[-1] == 0) {
        pTVar4 = pTVar3;
      }
      pTVar3 = pTVar4 + 0x14;
      if (*piVar7 == 0) {
        pTVar3 = pTVar4;
      }
      iVar8 = iVar8 + -1;
      piVar7 = piVar7 + 2;
    } while (iVar8 != 0);
    TextEngine::addLinef(pTVar3,*(char **)(this + 0x24));
  }
  else {
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff70,"`3INV`2: display ship\'s hold contents",0x25);
    TextEngine::addLine(*(TextEngine **)(this + 0x24));
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Modules(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_Terminal::cmd_Modules(Screen_Terminal *this,char param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint local_90;
  char *pcVar7;
  uint uVar8;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c8a49;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == '\0') {
    iVar3 = *(int *)(this + 0x14);
    local_60 = 0;
    if (*(int *)(*(int *)(iVar3 + 0x40) + 0x40) - *(int *)(*(int *)(iVar3 + 0x40) + 0x3c) >> 2 != 0)
    {
      do {
        iVar1 = local_60 * 4;
        local_60 = local_60 + 1;
        local_90 = 0x54bbe1;
        TextEngine::addLinef
                  (*(TextEngine **)(*(int *)(*(int *)(*(int *)(iVar3 + 0x40) + 0x3c) + iVar1) + 8),
                   *(char **)(this + 0x24));
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        local_8 = 1;
        cVar2 = (**(code **)(**(int **)(iVar1 + *(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) +
                                                        0x3c)) + 0x14))();
        if (cVar2 == '\0') {
          iVar3 = *(int *)(iVar1 + *(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x3c));
          if (*(char *)(iVar3 + 99) == '\0') {
            std::basic_string<>::append((basic_string<> *)local_44," `2(`7disconnected`2)",0x15);
          }
          else {
            _local_8 = CONCAT31(uStack_7,2);
            iVar3 = ComponentInterfaceInstance::damagePercent
                              (*(ComponentInterfaceInstance **)(iVar3 + 0xc));
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            std::basic_string<>::assign((basic_string<> *)local_2c,"`0nominal",9);
            if (iVar3 == 0) {
              uVar8 = 0x10;
              pcVar7 = "`4non-functional";
LAB_0054bcb5:
              std::basic_string<>::assign((basic_string<> *)local_2c,pcVar7,uVar8);
            }
            else {
              if (iVar3 < 0x19) {
                uVar8 = 0xe;
                pcVar7 = "`@heavy damage";
                goto LAB_0054bcb5;
              }
              if (iVar3 < 0x32) {
                uVar8 = 8;
                pcVar7 = "`^damage";
                goto LAB_0054bcb5;
              }
              if (iVar3 < 0x4b) {
                uVar8 = 0xe;
                pcVar7 = "`$light damage";
                goto LAB_0054bcb5;
              }
            }
            pcVar4 = (char *)strUsingArgs((char *)local_5c);
            local_8 = 3;
            pcVar7 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar7 = *(char **)pcVar4;
            }
            std::basic_string<>::append((basic_string<> *)local_44,pcVar7,*(uint *)(pcVar4 + 0x10));
            local_8 = 2;
            if (0xf < local_48) {
              pnVar6 = (nothrow_t *)(local_48 + 1);
              pvVar5 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar6) {
                pvVar5 = *(void **)((int)local_5c[0] + -4);
                pnVar6 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5))) goto LAB_0054be59;
              }
              operator_delete(pvVar5,pnVar6);
            }
            local_8 = 1;
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
            if (0xf < local_18) {
              pnVar6 = (nothrow_t *)(local_18 + 1);
              pvVar5 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar6) {
                pvVar5 = *(void **)((int)local_2c[0] + -4);
                pnVar6 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_0054be59;
              }
              operator_delete(pvVar5,pnVar6);
            }
            ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)
                        (*(int *)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x3c) + iVar1) +
                        0xc));
            pcVar4 = (char *)strUsingArgs((char *)local_5c);
            local_8 = 4;
            pcVar7 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar7 = *(char **)pcVar4;
            }
            std::basic_string<>::append((basic_string<> *)local_44,pcVar7,*(uint *)(pcVar4 + 0x10));
            local_8 = 1;
            if (0xf < local_48) {
              pnVar6 = (nothrow_t *)(local_48 + 1);
              pvVar5 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar6) {
                pvVar5 = *(void **)((int)local_5c[0] + -4);
                pnVar6 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5))) goto LAB_0054be59;
              }
              operator_delete(pvVar5,pnVar6);
            }
          }
        }
        else {
          std::basic_string<>::append((basic_string<> *)local_44," `2(`@nonfunctional`2)",0x16);
        }
        std::basic_string<>::basic_string<>((basic_string<> *)&local_90,(basic_string<> *)local_44);
        TextEngine::addLine(*(TextEngine **)(this + 0x24));
        local_8 = 0;
        if (0xf < local_30) {
          pnVar6 = (nothrow_t *)(local_30 + 1);
          pvVar5 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar5 = *(void **)((int)local_44[0] + -4);
            pnVar6 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
LAB_0054be59:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar5,pnVar6);
        }
        iVar3 = *(int *)(this + 0x14);
      } while (local_60 <
               (uint)(*(int *)(*(int *)(iVar3 + 0x40) + 0x40) -
                      *(int *)(*(int *)(iVar3 + 0x40) + 0x3c) >> 2));
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_90,"`3MODULES`2: itemise all ship modules",0x25);
    TextEngine::addLine(*(TextEngine **)(this + 0x24));
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Module(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_Terminal::cmd_Module(Screen_Terminal *this,char param_1,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  TextEngine *this_00;
  TextEngine *this_01;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *extraout_ECX_01;
  TextEngine *extraout_ECX_02;
  TextEngine *pTVar5;
  int *piVar6;
  uint uVar7;
  TextEngine *pTVar8;
  bool bVar9;
  char *pcVar10;
  uint local_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c78a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar4 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar4 == iVar4) {
      cmd_Module(this);
    }
    else {
      pcVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pcVar10 = *(char **)param_3;
      }
      iVar4 = atoi(pcVar10);
      uVar7 = iVar4 - 1;
      if (((int)uVar7 < 0) ||
         (pTVar5 = *(TextEngine **)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x3c),
         (uint)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x40) + 0x40) - (int)pTVar5 >> 2) <= uVar7
         )) {
        local_3c = (uint)local_3c._1_3_ << 8;
        std::basic_string<>::assign
                  ((basic_string<> *)&local_3c,"`$Error: invalid module number",0x1e);
        TextEngine::addLine(*(TextEngine **)(this + 0x24));
      }
      else {
        piVar1 = *(int **)(pTVar5 + uVar7 * 4);
        if (piVar1 == (int *)0x0) {
          local_3c = (uint)local_3c._1_3_ << 8;
          std::basic_string<>::assign((basic_string<> *)&local_3c,"`7**empty**",0xb);
          TextEngine::addLine(*(TextEngine **)(this + 0x24));
        }
        else {
          TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
          TextEngine::addLinef(this_00,*(char **)(this + 0x24));
          cVar3 = (**(code **)(*piVar1 + 0x14))();
          if (cVar3 == '\0') {
            if (*(char *)((int)piVar1 + 99) == '\0') {
              uVar7 = 0x16;
              pcVar10 = "`3Sta.: `$disconnected";
            }
            else {
              uVar7 = 0x13;
              pcVar10 = "`3Sta.: `!connected";
            }
          }
          else {
            uVar7 = 0x14;
            pcVar10 = "`3Sta.: `@inoperable";
          }
          local_3c = local_3c & 0xffffff00;
          std::basic_string<>::assign((basic_string<> *)&local_3c,pcVar10,uVar7);
          TextEngine::addLine(*(TextEngine **)(this + 0x24));
          ComponentInterfaceInstance::getEfficiencyPercent((ComponentInterfaceInstance *)piVar1[3]);
          TextEngine::addLinef(this_01,*(char **)(this + 0x24));
          piVar6 = (int *)piVar1[3];
          pTVar5 = (TextEngine *)*piVar6;
          if (*(int *)(pTVar5 + 0x54) - *(int *)(pTVar5 + 0x50) >> 2 != 0) {
            iVar4 = 0;
            pTVar8 = (TextEngine *)&DAT_00000001;
            do {
              iVar2 = *(int *)(iVar4 + 4 + (int)piVar6);
              if (*(char *)((int)piVar1 + 99) == '\0') {
                if (iVar2 == 0) {
                  TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
                  pTVar5 = extraout_ECX_02;
                }
                else {
                  local_3c = 0x54c0b8;
                  TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
                  pTVar5 = extraout_ECX_01;
                }
                iVar2 = *(int *)(iVar4 + 0x54 + piVar1[3]);
              }
              else {
                if (iVar2 == 0) {
                  TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
                  pTVar5 = extraout_ECX_00;
                }
                else {
                  local_3c = 0x54c033;
                  TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
                  pTVar5 = extraout_ECX;
                }
                iVar2 = *(int *)(iVar4 + 0x54 + piVar1[3]);
              }
              if (iVar2 != 0) {
                TextEngine::addLinef(pTVar5,*(char **)(this + 0x24));
              }
              iVar4 = iVar4 + 4;
              piVar6 = (int *)piVar1[3];
              pTVar5 = (TextEngine *)(*(int *)(*piVar6 + 0x54) - *(int *)(*piVar6 + 0x50) >> 2);
              bVar9 = pTVar8 < pTVar5;
              pTVar8 = pTVar8 + 1;
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    local_3c = local_3c & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_3c,
               "`3MODULE`2 [module number]: show details about a ship module",0x3c);
    TextEngine::addLine(*(TextEngine **)(this + 0x24));
  }
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Terminal::showCommandList(void)

void __thiscall Screen_Terminal::showCommandList(Screen_Terminal *this)

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
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`%SysTerm 1.0.8 `7(c) by Purchase Tech",0x26);
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`0Valid commands:",0x11);
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
  local_14 = 0;
  if (*(int *)(this + 0x30) - *(int *)(this + 0x2c) >> 6 != 0) {
    do {
      uStack_50 = 0x54c2af;
      strUsingArgs((char *)local_30);
      pTVar1 = *(TextEngine **)(this + 0x24);
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
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_0054c392;
        }
        operator_delete(pvVar2,pnVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(this + 0x30) - *(int *)(this + 0x2c) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_30,"`3HELP",6);
  pTVar1 = *(TextEngine **)(this + 0x24);
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
LAB_0054c392:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Rotate(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_Terminal::cmd_Rotate(Screen_Terminal *this,char param_1,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  Ship *pSVar3;
  char *pcVar4;
  basic_string<> local_34 [4];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8758;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar1 == iVar1) goto LAB_0054c483;
    pcVar4 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pcVar4 = *(char **)param_3;
    }
    uVar2 = atoi(pcVar4);
    if (uVar2 < 0x168) {
      PresentationData::m_selectedHeading = (double)(int)uVar2;
      pSVar3 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar3 = *(Ship **)(g_gameData + 0xd0);
      }
      uStack_30 = 0x54c45f;
      ShipInterface::doRotateTo(pSVar3,0,0,0);
      strUsingArgs((char *)local_34,"`3ROT`2: rotating to %d^",uVar2);
      goto LAB_0054c4a5;
    }
    uVar2 = 0x19;
    pcVar4 = "`@Error: `2 invalid angle";
  }
  else {
LAB_0054c483:
    uVar2 = 0x26;
    pcVar4 = "`3ROT`2 [angle]: rotate ship using RCS";
  }
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,pcVar4,uVar2);
LAB_0054c4a5:
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Terminal::cmd_Burn(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_Terminal::cmd_Burn(Screen_Terminal *this,char param_1,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  Ship *pSVar4;
  uint unaff_EDI;
  basic_string<> local_38 [4];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8a78;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == '\0') &&
     (iVar1 = param_4 - param_3 >> 0x1f, (param_4 - param_3) / 0x18 + iVar1 != iVar1)) {
    bVar2 = std::_Traits_equal<>("ON",2,pcVar3,unaff_EDI);
    if (bVar2) {
      pSVar4 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar4 = *(Ship **)(g_gameData + 0xd0);
      }
      uStack_34 = 0x54c569;
      ShipInterface::doBurnMainEngine(pSVar4,0,0,0);
      goto LAB_0054c5dd;
    }
    bVar2 = std::_Traits_equal<>("OFF",3,pcVar3,unaff_EDI);
    if (bVar2) {
      pSVar4 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar4 = *(Ship **)(g_gameData + 0xd0);
      }
      uStack_34 = 0x54c5ae;
      ShipInterface::doStopMainEngine(pSVar4,0,0,0);
      goto LAB_0054c5dd;
    }
  }
  local_38[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_38,"`3BURN`2 [on/off]: enable or disable main drive",0x2f);
  TextEngine::addLine(*(TextEngine **)(this + 0x24));
LAB_0054c5dd:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}
