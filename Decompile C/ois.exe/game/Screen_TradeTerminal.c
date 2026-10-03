#include "../ois.exe.h"


// public: virtual void __thiscall Screen_TradeTerminal::update(float)

void __thiscall Screen_TradeTerminal::update(Screen_TradeTerminal *this,float param_1)

{
  if (*(int *)(this + 0xc) != 0) {
    *(undefined1 *)(*(int *)(this + 0xc) + 0x70) = 1;
  }
  return;
}


// public: virtual void * __thiscall Screen_TradeTerminal::`scalar deleting destructor'(unsigned
// int)

void * __thiscall
Screen_TradeTerminal::_scalar_deleting_destructor_(Screen_TradeTerminal *this,uint param_1)

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


// public: virtual void __thiscall Screen_TradeTerminal::configure(void)

void __thiscall Screen_TradeTerminal::configure(Screen_TradeTerminal *this)

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
  Screen_TradeTerminal *pSStack_228;
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
  puStack_c = &DAT_005c8b9f;
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
  pSStack_228 = *(Screen_TradeTerminal **)(this + 0xc);
  uStack_22c = 0x54c996;
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
  pSStack_228 = (Screen_TradeTerminal *)0x54ca77;
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
  pcStack_230 = cmd_Confirm;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"CONFIRM",7);
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
  pcStack_230 = cmd_Cancel;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"CANCEL",6);
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
  Command::~Command((Command *)local_54);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Buy;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"BUY",3);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xd);
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
  pcStack_230 = cmd_Cargo;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xe;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"CARGO",5);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0xf);
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
  pcStack_230 = cmd_Sell;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"SELL",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0x11);
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
  pcStack_230 = cmd_Weapons;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x12;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"WEAP",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0x13);
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
  pcStack_230 = cmd_Passengers;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x14;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"PASSENGERS",10);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0x15);
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
  pcStack_230 = cmd_Take;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x16;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"TAKE",4);
  local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)UpgradeCommand::UpgradeCommand(local_54);
  local_8 = CONCAT31(local_8._1_3_,0x17);
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


// public: void __thiscall Screen_TradeTerminal::executeCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_TradeTerminal::executeCommand(Screen_TradeTerminal *this,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Screen_TradeTerminal *pSVar4;
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
  Screen_TradeTerminal *local_34;
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
  uStack_74 = 0x54d280;
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
        goto LAB_0054d49a;
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
      if (iVar13 - local_38 >> 6 == 0) goto LAB_0054d55b;
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
          goto LAB_0054d495;
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
LAB_0054d55b:
    pTVar9 = *(TextEngine **)(local_34 + 0x20);
  }
LAB_0054d495:
  TextEngine::render(pTVar9);
LAB_0054d49a:
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0054d4cc;
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
LAB_0054d4cc:
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


// public: void __thiscall Screen_TradeTerminal::renderWelcomeMessage(void)

void __thiscall Screen_TradeTerminal::renderWelcomeMessage(Screen_TradeTerminal *this)

{
  int iVar1;
  uint uVar2;
  TextEngine *this_00;
  basic_string<> local_30 [8];
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    uStack_28 = 0x54d642;
    TextEngine::addLinef((TextEngine *)this,*(char **)(this + 0x20));
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30," `!** Trading Terminal",0x16);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    std::basic_string<>::basic_string<>(local_30,(basic_string<> *)(*(int *)(iVar1 + 0x398) + 0x18))
    ;
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    uVar2 = *(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) >> 2;
    if (1 < uVar2) {
      uStack_28 = 0x54d6ba;
      TextEngine::addLinef(this_00,*(char **)(this + 0x20));
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      return;
    }
    if (uVar2 == 1) {
      local_30[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_30,"`$A passenger is looking for transport here.",0x2c);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
  }
  return;
}


// public: void __thiscall Screen_TradeTerminal::updateScreenCall(void)

void __thiscall Screen_TradeTerminal::updateScreenCall(Screen_TradeTerminal *this)

{
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  return;
}


// public: void __thiscall Screen_TradeTerminal::renderBottomLine(void)

void __thiscall Screen_TradeTerminal::renderBottomLine(Screen_TradeTerminal *this)

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


// public: void __thiscall Screen_TradeTerminal::cmd_List(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_List(Screen_TradeTerminal *this,char param_1,int param_3,int param_4)

{
  TradeLocation *this_00;
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  Good *pGVar5;
  int iVar6;
  TradeLocation *pTVar7;
  undefined4 *puVar8;
  TextEngine *this_01;
  void *pvVar9;
  GameData *pGVar10;
  TextEngine *pTVar11;
  uint uVar12;
  nothrow_t *pnVar13;
  uint uVar14;
  uint unaff_EDI;
  int *piVar15;
  uint local_70;
  uint local_60;
  TextEngine *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  TextEngine *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c8bf8;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar3;
  if (param_1 != '\0') {
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff60,
               "`3LIST [buy|sell]`2: list all tradeable items either to buy or for sale",0x47);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054dfba;
  }
  iVar6 = param_4 - param_3 >> 0x1f;
  if ((param_4 - param_3) / 0x18 + iVar6 != iVar6) {
    this_00 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    std::transform<>();
    bVar1 = std::_Traits_equal<>("sell",4,pcVar3,unaff_EDI);
    if (bVar1) {
      std::basic_string<>::assign
                ((basic_string<> *)&stack0xffffff60,"`7Wanted to buy (base rate):",0x1c);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
      iVar6 = *(int *)(this_00 + 0x70);
      local_60 = 0;
      if (*(int *)(this_00 + 0x74) - iVar6 >> 2 != 0) {
        do {
          uVar12 = 0;
          puVar8 = *(undefined4 **)(g_gameData + 0x84);
          uVar14 = *(int *)(g_gameData + 0x88) - (int)puVar8 >> 2;
          if (uVar14 != 0) {
            do {
              piVar15 = (int *)*puVar8;
              if (*piVar15 == *(int *)(*(int *)(iVar6 + local_60 * 4) + 0x14)) goto LAB_0054da35;
              uVar12 = uVar12 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar12 < uVar14);
          }
          piVar15 = (int *)0x0;
LAB_0054da35:
          iVar4 = TradeLocation::singleGoodCost
                            (this_00,*(int *)(*(int *)(*(int *)(this_00 + 0x70) + local_60 * 4) +
                                             0x14),true);
          iVar6 = *(int *)(*(int *)(*(int *)(this_00 + 0x70) + local_60 * 4) + 0x14);
          TradeLocation::singleGoodCost(this_00,iVar6,true);
          uVar14 = 0;
          puVar8 = *(undefined4 **)(g_gameData + 0x84);
          uVar12 = *(int *)(g_gameData + 0x88) - (int)puVar8 >> 2;
          if (uVar12 != 0) {
            do {
              if (*(int *)*puVar8 == iVar6) break;
              uVar14 = uVar14 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar14 < uVar12);
          }
          if (iVar4 == 0) {
            debugPrint("DETAIL","ignoring %s as cost is null");
          }
          else {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_2c,(basic_string<> *)piVar15[7]);
            local_8._0_1_ = 1;
            TextEngine::addLinef(this_01,*(char **)(this + 0x20));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar13 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar13) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar13 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0054db8e;
              }
              operator_delete(pvVar9,pnVar13);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          iVar6 = *(int *)(this_00 + 0x70);
          local_60 = local_60 + 1;
        } while (local_60 < (uint)(*(int *)(this_00 + 0x74) - iVar6 >> 2));
      }
      goto LAB_0054dfba;
    }
    bVar1 = std::_Traits_equal<>("buy",3,pcVar3,unaff_EDI);
    if (bVar1) {
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff60,"`7For sale:",0xb);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
      pGVar10 = *(GameData **)(this_00 + 0x70);
      local_70 = 0;
      if (*(int *)(this_00 + 0x74) - (int)pGVar10 >> 2 != 0) {
        do {
          iVar6 = *(int *)(pGVar10 + local_70 * 4);
          if ((*(int *)(iVar6 + 4) != 0) || (*(int *)(iVar6 + 0xc) != 0)) {
            iVar6 = *(int *)(iVar6 + 0x14);
            pGVar5 = GameData::getGood(pGVar10,iVar6);
            TradeLocation::singleGoodCost(this_00,iVar6,false);
            iVar6 = *(int *)(*(int *)(*(int *)(this_00 + 0x70) + local_70 * 4) + 0x14);
            TradeLocation::singleGoodCost(this_00,iVar6,false);
            uVar14 = 0;
            puVar8 = *(undefined4 **)(g_gameData + 0x84);
            uVar12 = *(int *)(g_gameData + 0x88) - (int)puVar8 >> 2;
            if (uVar12 != 0) {
              do {
                if (*(int *)*puVar8 == iVar6) break;
                uVar14 = uVar14 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar14 < uVar12);
            }
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_2c,*(basic_string<> **)(pGVar5 + 0x1c));
            local_8._0_1_ = 2;
            TextEngine::addLinef
                      (*(TextEngine **)(*(int *)(*(int *)(this_00 + 0x70) + local_70 * 4) + 0x10),
                       *(char **)(this + 0x20),"  `7[`8%s`7] %s x`%c%d `7@ `%c%dc");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar13 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar13) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar13 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0054db8e;
              }
              operator_delete(pvVar9,pnVar13);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          local_70 = local_70 + 1;
          pGVar10 = *(GameData **)(this_00 + 0x70);
        } while (local_70 < (uint)(*(int *)(this_00 + 0x74) - (int)pGVar10 >> 2));
      }
      pGVar10 = g_gameData + 0x13c;
      iVar6 = *(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2;
      if (iVar6 != 0) {
        bVar1 = false;
        local_60 = 0;
        if (iVar6 != 0) {
          do {
            iVar6 = *(int *)(*(int *)pGVar10 + local_60 * 4);
            pTVar7 = this_00;
            if (0xf < *(uint *)(this_00 + 0x14)) {
              pTVar7 = *(TradeLocation **)this_00;
            }
            bVar2 = std::_Traits_equal<>((char *)pTVar7,*(uint *)(this_00 + 0x10),pcVar3,unaff_EDI);
            if (bVar2) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xffffff60,*(basic_string<> **)(iVar6 + 0x58));
              pGVar5 = GameData::getGoodWithShortName();
              if (!bVar1) {
                TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
                std::basic_string<>::assign
                          ((basic_string<> *)&stack0xffffff60," `%Contract pick-ups here:",0x1a);
                TextEngine::addLine(*(TextEngine **)(this + 0x20));
                bVar1 = true;
              }
              iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + local_60 * 4) + 0x58
                                       ) + 0x28);
              if (iVar6 == -1) {
                iVar6 = *(int *)(pGVar5 + 0x58);
              }
              if (iVar6 == 0) {
                std::basic_string<>::basic_string<>
                          ((basic_string<> *)local_5c,*(basic_string<> **)(pGVar5 + 0x1c));
                local_8._0_1_ = 4;
                pTVar11 = (TextEngine *)local_5c;
                if (0xf < local_48) {
                  pTVar11 = local_5c[0];
                }
                TextEngine::addLinef(pTVar11,*(char **)(this + 0x20));
                local_8 = (uint)local_8._1_3_ << 8;
                if (0xf < local_48) {
                  pnVar13 = (nothrow_t *)(local_48 + 1);
                  pTVar11 = local_5c[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    pTVar11 = *(TextEngine **)(local_5c[0] + -4);
                    pnVar13 = (nothrow_t *)(local_48 + 0x24);
                    if ((TextEngine *)0x1f < local_5c[0] + (-4 - (int)pTVar11)) {
LAB_0054db8e:
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  operator_delete(pTVar11,pnVar13);
                }
                local_4c = 0;
                local_48 = 0xf;
                local_5c[0] = (TextEngine *)((uint)local_5c[0] & 0xffffff00);
              }
              else {
                std::basic_string<>::basic_string<>
                          ((basic_string<> *)local_44,*(basic_string<> **)(pGVar5 + 0x1c));
                local_8._0_1_ = 3;
                pTVar11 = (TextEngine *)local_44;
                if (0xf < local_30) {
                  pTVar11 = local_44[0];
                }
                TextEngine::addLinef(pTVar11,*(char **)(this + 0x20));
                local_8 = (uint)local_8._1_3_ << 8;
                if (0xf < local_30) {
                  pnVar13 = (nothrow_t *)(local_30 + 1);
                  pTVar11 = local_44[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    pTVar11 = *(TextEngine **)(local_44[0] + -4);
                    pnVar13 = (nothrow_t *)(local_30 + 0x24);
                    if ((TextEngine *)0x1f < local_44[0] + (-4 - (int)pTVar11)) goto LAB_0054db8e;
                  }
                  operator_delete(pTVar11,pnVar13);
                }
                local_34 = 0;
                local_30 = 0xf;
                local_44[0] = (TextEngine *)((uint)local_44[0] & 0xffffff00);
              }
            }
            pGVar10 = g_gameData + 0x13c;
            local_60 = local_60 + 1;
          } while (local_60 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2));
        }
      }
      goto LAB_0054dfba;
    }
  }
  cmd_List(this);
LAB_0054dfba:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Info(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_Info
          (Screen_TradeTerminal *this,char param_1,basic_string<> *param_3,int param_4)

{
  TradeLocation *this_00;
  CargoHold *this_01;
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  Good *pGVar4;
  int iVar5;
  TextEngine *pTVar6;
  Sector *pSVar7;
  TradeLocation *pTVar8;
  char ****ppppcVar9;
  TextEngine *this_02;
  TextEngine *extraout_ECX;
  TextEngine *this_03;
  Sector *this_04;
  TextEngine *this_05;
  TextEngine *this_06;
  TextEngine *this_07;
  TextEngine *this_08;
  TextEngine *this_09;
  TextEngine *this_10;
  TextEngine *extraout_ECX_00;
  nothrow_t *pnVar10;
  uint unaff_EDI;
  uint uVar11;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8c30;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar3;
  if (param_1 != '\0') {
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff9c,
               "`3INFO [identifier, number]`2: get info on a specific item or passenger",0x47);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054e549;
  }
  iVar5 = param_4 - (int)param_3 >> 0x1f;
  if ((param_4 - (int)param_3) / 0x18 + iVar5 == iVar5) {
    cmd_Info(this);
    goto LAB_0054e549;
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,param_3);
  local_8 = CONCAT31(local_8._1_3_,1);
  std::transform<>();
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff9c,(basic_string<> *)local_2c)
  ;
  pGVar4 = GameData::getGoodWithShortName();
  if (pGVar4 == (Good *)0x0) {
    ppppcVar9 = local_2c;
    if (0xf < local_18) {
      ppppcVar9 = (char ****)local_2c[0];
    }
    iVar5 = atoi((char *)ppppcVar9);
    pTVar6 = (TextEngine *)(iVar5 - 1);
    this_03 = extraout_ECX;
    if (-1 < (int)pTVar6) {
      this_03 = (TextEngine *)
                (*(int *)(ShipData::currentlyBoardedShip + 0x40c) -
                 *(int *)(ShipData::currentlyBoardedShip + 0x408) >> 2);
      if (pTVar6 < this_03) {
        iVar5 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x408) + (int)pTVar6 * 4);
        TextEngine::addLinef(this_03,*(char **)(this + 0x20));
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff9c,
                   (basic_string<> *)(*(int *)(iVar5 + 0xc) + 0x18));
        GameData::getSpaceStation();
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff9c,
                   (basic_string<> *)(*(int *)(iVar5 + 0xc) + 0x18));
        pSVar7 = GameData::getSectorOfShip();
        this_04 = pSVar7 + 0x1c;
        if (0xf < *(uint *)(pSVar7 + 0x30)) {
          this_04 = *(Sector **)this_04;
        }
        TextEngine::addLinef((TextEngine *)this_04,*(char **)(this + 0x20));
        TextEngine::addLinef(this_05,*(char **)(this + 0x20));
        goto LAB_0054e1a7;
      }
    }
LAB_0054e19c:
    TextEngine::addLinef(this_03,*(char **)(this + 0x20));
  }
  else {
    this_00 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    TextEngine::addLinef(this_02,*(char **)(this + 0x20));
    TextEngine::addLinef(this_06,*(char **)(this + 0x20));
    TextEngine::addLinef(this_07,*(char **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    TextEngine::addLinef(this_08,*(char **)(this + 0x20));
    this_01 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    CargoHold::amountCanHold(this_01,pGVar4);
    iVar5 = CargoHold::amountHeld(this_01,*(int *)pGVar4);
    TextEngine::addLinef((TextEngine *)((uint)(iVar5 < 1) * 8 + 0x30),*(char **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"`%**Station Information**",0x19)
    ;
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TradeLocation::goodAmount(this_00,*(int *)pGVar4);
    bVar2 = false;
    iVar5 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
    if (iVar5 == 0) {
      TextEngine::addLinef((TextEngine *)0x21,*(char **)(this + 0x20));
LAB_0054e474:
      bVar2 = TradeLocation::doesBuy(this_00,*(int *)pGVar4);
      if (bVar2) {
        TradeLocation::singleGoodCost(this_00,*(int *)pGVar4,true);
        TextEngine::addLinef(this_10,*(char **)(this + 0x20));
      }
      else {
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"`7None for sale here.",0x15)
        ;
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
      }
    }
    else {
      uVar11 = 0;
      if (iVar5 == 0) goto LAB_0054e474;
      do {
        pTVar8 = this_00;
        if (0xf < *(uint *)(this_00 + 0x14)) {
          pTVar8 = *(TradeLocation **)this_00;
        }
        bVar1 = std::_Traits_equal<>((char *)pTVar8,*(uint *)(this_00 + 0x10),pcVar3,unaff_EDI);
        if (bVar1) {
          ppppcVar9 = local_2c;
          if (0xf < local_18) {
            ppppcVar9 = (char ****)local_2c[0];
          }
          bVar1 = std::_Traits_equal<>((char *)ppppcVar9,local_1c,pcVar3,unaff_EDI);
          if (bVar1) {
            TextEngine::addLinef(this_09,*(char **)(this + 0x20));
            if (!bVar2) {
              bVar2 = true;
            }
            iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + uVar11 * 4) + 0x58) +
                            0x28);
            if (iVar5 == -1) {
              iVar5 = *(int *)(pGVar4 + 0x58);
            }
            if (iVar5 == 0) {
              std::basic_string<>::assign
                        ((basic_string<> *)&stack0xffffff9c,"`7Pickup : `0free",0x11);
              TextEngine::addLine(*(TextEngine **)(this + 0x20));
            }
            else {
              TextEngine::addLinef((TextEngine *)&DAT_00000001,*(char **)(this + 0x20));
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2));
      if (!bVar2) goto LAB_0054e474;
    }
    bVar2 = TradeLocation::doesBuy(this_00,*(int *)pGVar4);
    if (bVar2) {
      TradeLocation::singleGoodCost(this_00,*(int *)pGVar4,false);
      this_03 = extraout_ECX_00;
      goto LAB_0054e19c;
    }
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"`7Does not buy here.",0x14);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
LAB_0054e1a7:
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    ppppcVar9 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      ppppcVar9 = (char ****)local_2c[0][-1];
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar10);
  }
LAB_0054e549:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Buy(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_Buy(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4)

{
  undefined4 uVar1;
  TradeLocation *this_00;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  Good *pGVar5;
  char *_Str;
  TextEngine *this_01;
  TradeEngine *pTVar6;
  TradeLocation *pTVar7;
  Good *pGVar8;
  TextEngine *this_02;
  TextEngine *this_03;
  int iVar9;
  TextEngine *this_04;
  void *pvVar10;
  nothrow_t *pnVar11;
  GameData *pGVar12;
  uint unaff_EDI;
  uint uVar13;
  uint local_70;
  Shop SVar14;
  TextEngine *pTVar15;
  uint local_3c;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8c70;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar4;
  if (param_1 != '\0') {
    local_70 = local_70 & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_70,"`3BUY [amount] [identifier]`2: buy goods",0x28);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054e8f1;
  }
  if ((uint)((param_4 - (int)param_3) / 0x18) < 2) {
    cmd_Buy(this);
    goto LAB_0054e8f1;
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(param_3 + 0x18))
  ;
  local_8 = CONCAT31(local_8._1_3_,1);
  std::transform<>();
  std::basic_string<>::basic_string<>((basic_string<> *)&local_70,(basic_string<> *)local_2c);
  pGVar5 = GameData::getGoodWithShortName();
  if (pGVar5 == (Good *)0x0) {
    TextEngine::addLinef(this_02,*(char **)(this + 0x20));
  }
  else {
    _Str = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      _Str = *(char **)param_3;
    }
    this_01 = (TextEngine *)atoi(_Str);
    if ((int)this_01 < 1) {
      TextEngine::addLinef(this_03,*(char **)(this + 0x20));
    }
    else {
      uVar1 = *(undefined4 *)pGVar5;
      pTVar6 = Singleton<>::getInstance();
      iVar9 = *(int *)(pTVar6 + 0x11c);
      *(undefined4 *)(iVar9 + 0x18) = uVar1;
      *(TextEngine **)(iVar9 + 0x1c) = this_01;
      *(undefined4 *)(iVar9 + 4) = 1;
      pTVar15 = *(TextEngine **)(this + 0x20);
      SVar14 = 0;
      pTVar6 = Singleton<>::getInstance();
      bVar2 = TradeEngine::currentPurchaseValid(pTVar6,SVar14,pTVar15);
      pGVar12 = g_gameData;
      if (bVar2) {
        local_3c = 0;
        bVar2 = false;
        this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
        uVar13 = 0;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)pGVar5;
        *(TextEngine **)(this + 0x44) = this_01;
        iVar9 = *(int *)(pGVar12 + 0x13c);
        if (*(int *)(pGVar12 + 0x140) - iVar9 >> 2 == 0) {
LAB_0054e7d4:
          local_3c = TradeLocation::goodCost(this_00,*(int *)pGVar5,(int)this_01,true);
        }
        else {
          do {
            iVar9 = *(int *)(iVar9 + uVar13 * 4);
            pTVar7 = this_00;
            if (0xf < *(uint *)(this_00 + 0x14)) {
              pTVar7 = *(TradeLocation **)this_00;
            }
            bVar3 = std::_Traits_equal<>((char *)pTVar7,*(uint *)(this_00 + 0x10),pcVar4,unaff_EDI);
            if (bVar3) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&local_70,*(basic_string<> **)(iVar9 + 0x58));
              pGVar8 = GameData::getGoodWithShortName();
              pGVar12 = g_gameData;
              if (pGVar8 == pGVar5) {
                bVar2 = true;
              }
            }
            uVar13 = uVar13 + 1;
            iVar9 = *(int *)(pGVar12 + 0x13c);
          } while (uVar13 < (uint)(*(int *)(pGVar12 + 0x140) - iVar9 >> 2));
          if (!bVar2) goto LAB_0054e7d4;
        }
        *(undefined4 *)(this + 0x40) = *(undefined4 *)pGVar5;
        *(TextEngine **)(this + 0x44) = this_01;
        TradeLocation::singleGoodCost(this_00,*(int *)pGVar5,true);
        local_70 = local_70 & 0xffffff00;
        std::basic_string<>::assign((basic_string<> *)&local_70,"`!Transaction details:",0x16);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
        if (local_3c == 0) {
          TextEngine::addLinef(this_01,*(char **)(this + 0x20));
        }
        else {
          local_70 = 0x54e872;
          TextEngine::addLinef(this_01,*(char **)(this + 0x20));
          local_70 = local_3c;
          TextEngine::addLinef(this_04,*(char **)(this + 0x20)," `3Total cost: `$%dc");
        }
        this[0x48] = (Screen_TradeTerminal)0x0;
        TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
        local_70 = local_70 & 0xffffff00;
        std::basic_string<>::assign
                  ((basic_string<> *)&local_70,
                   "`%TRANSACTION READY. Type `!CONFIRM`% to perform, `@CANCEL`% to ignore.",0x47);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
      }
    }
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
LAB_0054e8f1:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Confirm(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_TradeTerminal::cmd_Confirm(Screen_TradeTerminal *this)

{
  TradeEngine *this_00;
  basic_string<> local_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c8ccc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(this + 0x40) == -1) {
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`7No active transaction to confirm.",0x23);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054e9df;
  }
  if (this[0x48] == (Screen_TradeTerminal)0x0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this_00 = operator_new(300);
      local_8._0_1_ = 2;
      goto LAB_0054e9bc;
    }
  }
  else if (Singleton<>::instance == (TradeEngine *)0x0) {
    this_00 = operator_new(300);
    local_8._0_1_ = 1;
LAB_0054e9bc:
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this_00);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  uStack_28 = 0x54e9d8;
  TradeEngine::performTrade(Singleton<>::instance,0,*(TextEngine **)(this + 0x20));
  *(undefined4 *)(this + 0x40) = 0xffffffff;
LAB_0054e9df:
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Cancel(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_TradeTerminal::cmd_Cancel(Screen_TradeTerminal *this)

{
  char *pcVar1;
  uint uVar2;
  basic_string<> local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8758;
  local_10 = ExceptionList;
  uStack_1c = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(this + 0x40) == -1) {
    uVar2 = 0x22;
    pcVar1 = "`7No active transaction to cancel.";
  }
  else {
    uVar2 = 0x17;
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x44) = 0;
    pcVar1 = "`!Transaction cancelled";
  }
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_34,pcVar1,uVar2);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_20 = 0x54ea7c;
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Weapons(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_Weapons(Screen_TradeTerminal *this,char param_1,int param_3,int param_4)

{
  ShipModule *this_00;
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  WeaponClass *pWVar6;
  TextEngine *this_01;
  TextEngine *this_02;
  undefined4 extraout_ECX;
  char ****ppppcVar7;
  int extraout_EDX;
  nothrow_t *pnVar8;
  int iVar9;
  uint unaff_EDI;
  uint local_5c;
  int local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8d00;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar2;
  if (param_1 != '\0') {
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_5c,"`3WEAP [buy] [amount] [identifier]`2: buy a weapon",0x32
              );
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_5c,"`3WEAP [list] `2: list available weapons",0x28);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054eec7;
  }
  iVar4 = param_4 - param_3 >> 0x1f;
  if ((param_4 - param_3) / 0x18 + iVar4 == iVar4) {
LAB_0054eea5:
    cmd_Weapons(this);
    goto LAB_0054eec7;
  }
  std::transform<>();
  iVar4 = param_3;
  bVar1 = std::_Traits_equal<>("list",4,pcVar2,unaff_EDI);
  if (bVar1) {
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign((basic_string<> *)&local_5c,"`3Weapons available:",0x14);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_5c,"`2  m10`3: M-10 Explosive-tipped Shipkiller: `$600c",
               0x33);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign
              ((basic_string<> *)&local_5c,"`2  e10`3: E-10 EMP torpedo: `$300c",0x23);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    goto LAB_0054eec7;
  }
  bVar1 = std::_Traits_equal<>("buy",3,pcVar2,unaff_EDI);
  if (!bVar1) goto LAB_0054eea5;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(iVar4 + 0x30));
  local_8 = CONCAT31(local_8._1_3_,1);
  ppppcVar7 = local_2c;
  if (0xf < local_18) {
    ppppcVar7 = (char ****)local_2c[0];
  }
  uVar3 = (int)ppppcVar7 + local_1c;
  ppppcVar7 = local_2c;
  if (0xf < local_18) {
    ppppcVar7 = (char ****)local_2c[0];
  }
  std::transform<>();
  local_5c = 0x54ecad;
  bVar1 = std::_Traits_equal<>("m10",3,(char *)ppppcVar7,uVar3);
  if (bVar1) {
    local_30 = 600;
LAB_0054ece7:
    pcVar2 = (char *)(param_3 + 0x18);
    if (0xf < *(uint *)(param_3 + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar4 = atoi(pcVar2);
    if (iVar4 < 1) {
      TextEngine::addLinef(this_01,*(char **)(this + 0x20));
      goto LAB_0054ee79;
    }
    this_00 = *(ShipModule **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
    if (this_00 == (ShipModule *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = ShipModule::getHousedObjectCount(this_00);
    }
    iVar5 = Ship::maxWeapons(*(Ship **)(g_gameData + 0xd0));
    if (iVar5 - iVar9 < iVar4) {
      TextEngine::addLinef(this_02,*(char **)(this + 0x20));
      goto LAB_0054ee79;
    }
    iVar9 = *(int *)(*(int *)(extraout_EDX + 0x124) + 0x1c);
    if (iVar4 * local_30 - iVar9 != 0 && iVar9 <= iVar4 * local_30) {
      TextEngine::addLinef(this_02,*(char **)(this + 0x20));
      goto LAB_0054ee79;
    }
    iVar9 = iVar4;
    if (0 < iVar4) {
      do {
        iVar5 = -1;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffffa0,(basic_string<> *)local_2c);
        pWVar6 = GameData::getWeaponClassWithIdentifier();
        Ship::addWeapon(*(Ship **)(g_gameData + 0xd0),pWVar6,iVar5);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    std::basic_string<>::basic_string<>((basic_string<> *)&local_5c,(basic_string<> *)local_2c);
    BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124),extraout_ECX);
    ppppcVar7 = local_2c;
    if (0xf < local_18) {
      ppppcVar7 = (char ****)local_2c[0];
    }
    strUsingArgs((char *)&local_5c,"`2  %dx %s bought for `$%dc",iVar4,ppppcVar7);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    if (local_18 < 0x10) goto LAB_0054eec7;
    pnVar8 = (nothrow_t *)(local_18 + 1);
    ppppcVar7 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppcVar7 = (char ****)local_2c[0][-1];
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppcVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    bVar1 = std::_Traits_equal<>("e10",3,pcVar2,unaff_EDI);
    if (bVar1) {
      local_30 = 300;
      goto LAB_0054ece7;
    }
    local_5c = local_5c & 0xffffff00;
    std::basic_string<>::assign((basic_string<> *)&local_5c,"`^Error: unknown weapon.",0x18);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_0054ee79:
    if (local_18 < 0x10) goto LAB_0054eec7;
    pnVar8 = (nothrow_t *)(local_18 + 1);
    ppppcVar7 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      ppppcVar7 = (char ****)local_2c[0][-1];
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)local_2c[0][-1]))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete(ppppcVar7,pnVar8);
LAB_0054eec7:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Sell(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_Sell(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  Good *pGVar4;
  char *_Str;
  int iVar5;
  TradeEngine *pTVar6;
  TextEngine *this_00;
  TextEngine *this_01;
  void *pvVar7;
  nothrow_t *pnVar8;
  basic_string<> local_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  Shop SVar9;
  TextEngine *pTVar10;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c77e0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    if ((uint)((param_4 - (int)param_3) / 0x18) < 2) {
      uStack_50 = 1;
      uStack_54 = 0x54ef99;
      cmd_Sell(this);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_2c,(basic_string<> *)(param_3 + 0x18));
      local_8 = CONCAT31(local_8._1_3_,1);
      uStack_50 = 0x54efe1;
      std::transform<>();
      std::basic_string<>::basic_string<>(local_58,(basic_string<> *)local_2c);
      pGVar4 = GameData::getGoodWithShortName();
      if (pGVar4 == (Good *)0x0) {
        uStack_50 = 0x54f016;
        TextEngine::addLinef(this_00,*(char **)(this + 0x20));
      }
      else {
        _Str = param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          _Str = *(char **)param_3;
        }
        iVar5 = atoi(_Str);
        if (iVar5 < 1) {
          TextEngine::addLinef(this_01,*(char **)(this + 0x20));
        }
        else {
          uVar1 = *(undefined4 *)pGVar4;
          pTVar6 = Singleton<>::getInstance();
          iVar2 = *(int *)(pTVar6 + 0x11c);
          *(undefined4 *)(iVar2 + 0x18) = uVar1;
          *(int *)(iVar2 + 0x1c) = iVar5;
          *(undefined4 *)(iVar2 + 4) = 2;
          pTVar10 = *(TextEngine **)(this + 0x20);
          SVar9 = 0;
          pTVar6 = Singleton<>::getInstance();
          bVar3 = TradeEngine::currentSaleValid(pTVar6,SVar9,pTVar10);
          if (bVar3) {
            *(undefined4 *)(this + 0x40) = *(undefined4 *)pGVar4;
            *(int *)(this + 0x44) = iVar5;
            this[0x48] = (Screen_TradeTerminal)0x1;
            TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
            local_58[0] = (basic_string<>)0x0;
            std::basic_string<>::assign
                      (local_58,"`%TRANSACTION READY. Type `!CONFIRM`% to perform.",0x31);
            TextEngine::addLine(*(TextEngine **)(this + 0x20));
          }
        }
      }
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
    }
  }
  else {
    local_58[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_58,"`3SELL [amount] [identifier]`2: sell goods",0x2a);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Cargo(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_TradeTerminal::cmd_Cargo(Screen_TradeTerminal *this,char param_1)

{
  CargoHold *this_00;
  int iVar1;
  bool bVar2;
  TextEngine *pTVar3;
  void *pvVar4;
  TextEngine *this_01;
  nothrow_t *pnVar5;
  int iVar6;
  CargoHold *pCVar7;
  GoodContainmentOption GVar8;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c76c8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    this_00 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff88,"`%Cargo:",8);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    bVar2 = false;
    iVar6 = 0;
    pCVar7 = this_00 + 0xc;
    do {
      if (iVar6 < *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4)) {
        if ((iVar6 < 0) ||
           (((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= iVar6)) ||
            (iVar1 = *(int *)pCVar7, iVar1 == 0)))) {
          TextEngine::addLinef((TextEngine *)this_00,*(char **)(this + 0x20));
        }
        else {
          bVar2 = true;
          if (*(int *)(iVar1 + 8) < 1) {
            CargoHold::describePod(this_00,(int)local_44,SUB41(iVar6,0));
            local_8._0_1_ = 2;
            TextEngine::addLinef(this_01,*(char **)(this + 0x20));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pnVar5 = (nothrow_t *)(local_30 + 1);
              pvVar4 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar5) {
                pvVar4 = *(void **)((int)local_44[0] + -4);
                pnVar5 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_0054f40a;
              }
              operator_delete(pvVar4,pnVar5);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
          else {
            GameData::getGood((GameData *)this_00,*(int *)(iVar1 + 4));
            pTVar3 = (TextEngine *)CargoHold::describePod(this_00,(int)local_2c,SUB41(iVar6,0));
            local_8._0_1_ = 1;
            if (0xf < *(uint *)(pTVar3 + 0x14)) {
              pTVar3 = *(TextEngine **)pTVar3;
            }
            TextEngine::addLinef(pTVar3,*(char **)(this + 0x20));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar5 = (nothrow_t *)(local_18 + 1);
              pvVar4 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar5) {
                pvVar4 = *(void **)((int)local_2c[0] + -4);
                pnVar5 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
LAB_0054f40a:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar4,pnVar5);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
        }
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 4;
    } while (iVar6 < 0xe);
    if (!bVar2) {
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff88," `7** no cargo pods **",0x16);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    GVar8 = 1;
    do {
      CargoHold::amountHeld(this_00,GVar8);
      iVar6 = CargoHold::amountCanHold(this_00,GVar8);
      pTVar3 = (TextEngine *)0x25;
      if (iVar6 == 0) {
        pTVar3 = (TextEngine *)0x38;
      }
      TextEngine::addLinef(pTVar3,*(char **)(this + 0x20));
      GVar8 = GVar8 + 1;
    } while ((int)GVar8 < 3);
  }
  else {
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff88,
               "`3CARGO`2: view the cargo and free space on your ship",0x35);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Passengers(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_TradeTerminal::cmd_Passengers(Screen_TradeTerminal *this,char param_1)

{
  int iVar1;
  SpaceStation *pSVar2;
  SpaceStation *this_00;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint local_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8a78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
    if ((*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) & 0xfffffffcU) == 0) {
      uVar5 = 0x2b;
      pcVar4 = "`$** no passenger listings at the moment **";
    }
    else {
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      uVar5 = 0;
      iVar3 = *(int *)(iVar1 + 0x408);
      if (*(int *)(iVar1 + 0x40c) - iVar3 >> 2 != 0) {
        do {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&local_38,
                     (basic_string<> *)(*(int *)(*(int *)(iVar3 + uVar5 * 4) + 0xc) + 0x18));
          pSVar2 = GameData::getSpaceStation();
          this_00 = pSVar2 + 8;
          if (0xf < *(uint *)(pSVar2 + 0x1c)) {
            this_00 = *(SpaceStation **)this_00;
          }
          uVar5 = uVar5 + 1;
          local_38 = 0x54f509;
          TextEngine::addLinef((TextEngine *)this_00,*(char **)(this + 0x20));
          iVar3 = *(int *)(iVar1 + 0x408);
        } while (uVar5 < (uint)(*(int *)(iVar1 + 0x40c) - iVar3 >> 2));
      }
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      uVar5 = 0x56;
      pcVar4 = 
      "`2Use `0info`2 to find out more information and `0take`2 to agree to take a passenger.";
    }
  }
  else {
    uVar5 = 0x31;
    pcVar4 = "`3PASSENGERS`2: view the passenger bulletin board";
  }
  local_38 = local_38 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_38,pcVar4,uVar5);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_TradeTerminal::cmd_Take(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_TradeTerminal::cmd_Take(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4)

{
  int iVar1;
  PassengerInstance *this_00;
  bool bVar2;
  int iVar3;
  Sector *pSVar4;
  GameLogic *this_01;
  TextEngine *this_02;
  Sector *this_03;
  TextEngine *this_04;
  GameLogic *pGVar5;
  char *pcVar6;
  uint uVar7;
  char *local_40;
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar1 == iVar1) {
      uStack_3c = 0x54f5e4;
      std::vector<>::vector<>((vector<> *)&stack0xffffffcc,(vector<> *)&param_3);
      uStack_3c = 0x54f5ed;
      cmd_Take(this);
      goto LAB_0054f77d;
    }
    iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
    pcVar6 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pcVar6 = *(char **)param_3;
    }
    iVar3 = atoi(pcVar6);
    pGVar5 = (GameLogic *)(iVar3 + -1);
    if (((int)pGVar5 < 0) ||
       (this_01 = (GameLogic *)((*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) >> 2) + -1),
       this_01 < pGVar5)) {
      uVar7 = 0x1b;
      pcVar6 = "`$Invalid passenger number.";
    }
    else {
      bVar2 = GameLogic::hasPassenger(this_01);
      if (bVar2) {
        uVar7 = 0x29;
        pcVar6 = "`$You have no free cabin for a passenger.";
      }
      else if (iVar1 == 0) {
        uVar7 = 0x31;
        pcVar6 = "`^Error: unable to pick up passenger from station";
      }
      else {
        this_00 = *(PassengerInstance **)(*(int *)(iVar1 + 0x408) + (int)pGVar5 * 4);
        if (this_00 != (PassengerInstance *)0x0) {
          PassengerInstance::pickup(this_00);
          std::remove<>();
          std::vector<>::erase((vector<> *)(iVar1 + 0x408));
          *(PassengerInstance **)(g_gameData + 0x128) = this_00;
          TextEngine::addLinef(this_02,*(char **)(this + 0x20));
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&local_40,(basic_string<> *)(*(int *)(this_00 + 0xc) + 0x18))
          ;
          GameData::getSpaceStation();
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&local_40,(basic_string<> *)(*(int *)(this_00 + 0xc) + 0x18))
          ;
          pSVar4 = GameData::getSectorOfShip();
          this_03 = pSVar4 + 0x1c;
          if (0xf < *(uint *)(pSVar4 + 0x30)) {
            this_03 = *(Sector **)this_03;
          }
          uStack_3c = 0x54f73e;
          TextEngine::addLinef((TextEngine *)this_03,*(char **)(this + 0x20));
          uStack_3c = *(undefined4 *)(this_00 + 8);
          local_40 = "`2Fee        : `$%dc";
          TextEngine::addLinef(this_04,*(char **)(this + 0x20));
          goto LAB_0054f77d;
        }
        uVar7 = 0x24;
        pcVar6 = "`^Error: unable to pick up passenger";
      }
    }
  }
  else {
    uVar7 = 0x3b;
    pcVar6 = "`3TAKE [passenger number]`2: admit a passenger to your ship";
  }
  local_40 = (char *)((uint)local_40 & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&local_40,pcVar6,uVar7);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_0054f77d:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_TradeTerminal::showCommandList(void)

void __thiscall Screen_TradeTerminal::showCommandList(Screen_TradeTerminal *this)

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
  std::basic_string<>::assign(local_58,"`%Trade Terminal 2.1.0 `7(c) by Purchase Tech",0x2d);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`0Valid commands:",0x11);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_14 = 0;
  if (*(int *)(this + 0x2c) - *(int *)(this + 0x28) >> 6 != 0) {
    do {
      uStack_50 = 0x54f87f;
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
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_0054f962;
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
LAB_0054f962:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Screen_TradeTerminal::reset(void)

void __thiscall Screen_TradeTerminal::reset(Screen_TradeTerminal *this)

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
