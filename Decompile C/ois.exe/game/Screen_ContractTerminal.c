#include "../ois.exe.h"


// public: virtual void * __thiscall Screen_ContractTerminal::`scalar deleting destructor'(unsigned
// int)

void * __thiscall
Screen_ContractTerminal::_scalar_deleting_destructor_(Screen_ContractTerminal *this,uint param_1)

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
    operator_delete(this,(nothrow_t *)&DAT_00000040);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall Screen_ContractTerminal::configure(void)

void __thiscall Screen_ContractTerminal::configure(Screen_ContractTerminal *this)

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
  Screen_ContractTerminal *pSStack_228;
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
  puStack_c = &DAT_005c7679;
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
  pSStack_228 = *(Screen_ContractTerminal **)(this + 0xc);
  uStack_22c = 0x53ee76;
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
  pSStack_228 = (Screen_ContractTerminal *)0x53ef57;
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
  pcStack_230 = cmd_Take;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"TAKE",4);
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
  pcStack_230 = cmd_Drop;
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
  pcStack_230 = cmd_Current;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"CURRENT",7);
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
  pcStack_230 = cmd_License;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"LICENSE",7);
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
  pcStack_230 = cmd_Faction;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x12;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (basic_string<>)0x0;
  pSStack_228 = this;
  std::basic_string<>::assign(abStack_24c,"FACTION",7);
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
  local_8 = local_8 & 0xffffff00;
  Command::~Command((Command *)local_54);
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  Widget::~Widget(local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Cargo(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_ContractTerminal::cmd_Cargo(Screen_ContractTerminal *this,char param_1)

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
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_0053f89a;
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
LAB_0053f89a:
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


// public: virtual bool __thiscall Screen_ContractTerminal::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall
Screen_ContractTerminal::onKeyReleased(Screen_ContractTerminal *this,KeyCode param_1,Event *param_2)

{
  bool bVar1;
  
  bVar1 = TerminalEngine::keyReleased(*(TerminalEngine **)(this + 0x24),param_1);
  return bVar1;
}


// public: void __thiscall Screen_ContractTerminal::executeCommand(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_ContractTerminal::executeCommand(Screen_ContractTerminal *this,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Screen_ContractTerminal *pSVar4;
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
  Screen_ContractTerminal *local_34;
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
  uStack_74 = 0x53fa20;
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
        goto LAB_0053fc3a;
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
      if (iVar13 - local_38 >> 6 == 0) goto LAB_0053fcfb;
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
          goto LAB_0053fc35;
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
LAB_0053fcfb:
    pTVar9 = *(TextEngine **)(local_34 + 0x20);
  }
LAB_0053fc35:
  TextEngine::render(pTVar9);
LAB_0053fc3a:
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0053fc6c;
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
LAB_0053fc6c:
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


// public: void __thiscall Screen_ContractTerminal::renderWelcomeMessage(void)

void __thiscall Screen_ContractTerminal::renderWelcomeMessage(Screen_ContractTerminal *this)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  basic_string<> local_30 [8];
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    uStack_28 = 0x53fde2;
    TextEngine::addLinef((TextEngine *)this,*(char **)(this + 0x20));
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30," `!** Mercantile Contract Terminal",0x22);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    std::basic_string<>::basic_string<>(local_30,(basic_string<> *)(*(int *)(iVar1 + 0x398) + 0x18))
    ;
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
    iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 0x4c);
      uVar3 = 0;
      uVar4 = *(int *)(iVar1 + 0x50) - (int)piVar2 >> 2;
      if (uVar4 != 0) {
        do {
          if (*(char *)(*piVar2 + 0xe0) != '\0') {
            return;
          }
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (uVar3 < uVar4);
      }
    }
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"`%NOTE: You have no license for any factions here.",0x32);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"`7Use the `%license`7 command to purchase licenses.",0x33)
    ;
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
  }
  return;
}


// public: void __thiscall Screen_ContractTerminal::updateScreenCall(void)

void __thiscall Screen_ContractTerminal::updateScreenCall(Screen_ContractTerminal *this)

{
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x20));
  return;
}


// public: void __thiscall Screen_ContractTerminal::renderBottomLine(void)

void __thiscall Screen_ContractTerminal::renderBottomLine(Screen_ContractTerminal *this)

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


// public: void __thiscall Screen_ContractTerminal::showCommandList(void)

void __thiscall Screen_ContractTerminal::showCommandList(Screen_ContractTerminal *this)

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
  TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`%Contract Terminal 3.2.2 `7(c) by Collier Industries",0x35)
  ;
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,"`0Valid commands:",0x11);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  local_14 = 0;
  if (*(int *)(this + 0x2c) - *(int *)(this + 0x28) >> 6 != 0) {
    do {
      uStack_50 = 0x54013d;
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
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_00540220;
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
LAB_00540220:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Screen_ContractTerminal::reset(void)

void __thiscall Screen_ContractTerminal::reset(Screen_ContractTerminal *this)

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


// public: void __thiscall Screen_ContractTerminal::cmd_List(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_ContractTerminal::cmd_List(Screen_ContractTerminal *this,char param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  TextEngine *this_00;
  void *pvVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  uint uVar8;
  basic_string<> local_58 [4];
  undefined4 uStack_54;
  void *local_2c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c77e0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (iVar1 == 0) goto LAB_005403cc;
    iVar4 = *(int *)(iVar1 + 0x94);
    iVar3 = *(int *)(iVar1 + 0x98) - iVar4 >> 2;
    if (iVar3 == 0) {
      uVar8 = 0x2b;
      pcVar7 = "`$** no contracts available at this time **";
    }
    else {
      uVar8 = 0;
      if (iVar3 != 0) {
        do {
          Contract::describeShort(*(Contract **)(iVar4 + uVar8 * 4));
          local_8._0_1_ = 1;
          uVar8 = uVar8 + 1;
          uStack_54 = 0x54034e;
          TextEngine::addLinef(this_00,*(char **)(this + 0x20));
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pnVar6 = (nothrow_t *)(local_18 + 1);
            pvVar5 = local_2c;
            if ((nothrow_t *)0xfff < pnVar6) {
              pvVar5 = *(void **)((int)local_2c + -4);
              pnVar6 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar5,pnVar6);
          }
          iVar4 = *(int *)(iVar1 + 0x94);
        } while (uVar8 < (uint)(*(int *)(iVar1 + 0x98) - iVar4 >> 2));
      }
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      uVar8 = 0x25;
      pcVar7 = "`! type `%info [number]`! for details";
    }
  }
  else {
    uVar8 = 0x3b;
    pcVar7 = "`3LIST`2: list all contracts being promoted on this station";
  }
  local_58[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_58,pcVar7,uVar8);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_005403cc:
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Drop(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_ContractTerminal::cmd_Drop(Screen_ContractTerminal *this,char param_1)

{
  Contract *this_00;
  GameData *pGVar1;
  char *pcVar2;
  uint uVar3;
  basic_string<> local_30 [16];
  undefined4 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398) == 0) goto LAB_005404e6;
    if ((*(int *)(g_gameData + 0x140) - (int)*(undefined4 **)(g_gameData + 0x13c) & 0xfffffffcU) ==
        0) {
      uVar3 = 0x20;
      pcVar2 = "`$ You have no current contract.";
    }
    else {
      this_00 = (Contract *)**(undefined4 **)(g_gameData + 0x13c);
      if (this_00 != (Contract *)0x0) {
        local_20 = 0x540493;
        Contract::_scalar_deleting_destructor_(this_00,(uint)g_gameData);
      }
      pGVar1 = g_gameData;
      *(undefined4 *)(g_gameData + 0x140) = *(undefined4 *)(g_gameData + 0x13c);
      TradeLocation::restockWithContracts
                (*(TradeLocation **)(*(int *)(*(int *)(pGVar1 + 0xd0) + 0x178) + 0x398));
      uVar3 = 0x17;
      pcVar2 = "`0 Contract terminated.";
    }
  }
  else {
    uVar3 = 0x28;
    pcVar2 = "`3CANCEL`2: cancel your current contract";
  }
  local_20 = 0;
  local_30[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_30,pcVar2,uVar3);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_005404e6:
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Faction(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_ContractTerminal::cmd_Faction
          (Screen_ContractTerminal *this,char param_1,basic_string<> *param_3,int param_4)

{
  basic_string<> *pbVar1;
  int iVar2;
  bool bVar3;
  FictionData *pFVar4;
  Faction *pFVar5;
  Faction *this_00;
  TextEngine *this_01;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *this_02;
  char *pcVar6;
  uint uVar7;
  basic_string<> local_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c7850;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    pbVar1 = *(basic_string<> **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    iVar2 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar2 == iVar2) {
      uStack_38 = 0x54058c;
      std::vector<>::vector<>((vector<> *)&stack0xffffffd0,(vector<> *)&param_3);
      uStack_38 = 0x540595;
      cmd_Faction(this);
      goto LAB_005406e6;
    }
    std::transform<>();
    std::basic_string<>::basic_string<>(local_3c,param_3);
    local_8._0_1_ = 1;
    pFVar4 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    pFVar5 = FictionData::getFactionForID(pFVar4);
    if (pFVar5 != (Faction *)0x0) {
      this_00 = pFVar5 + 0x20;
      if (0xf < *(uint *)(pFVar5 + 0x34)) {
        this_00 = *(Faction **)this_00;
      }
      TextEngine::addLinef((TextEngine *)this_00,*(char **)(this + 0x20));
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      TextEngine::addLinef(this_01,*(char **)(this + 0x20));
      TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
      std::basic_string<>::basic_string<>(local_3c,pbVar1);
      bVar3 = Faction::officeAtLocation(pFVar5);
      this_02 = extraout_ECX;
      if (bVar3) {
        local_3c[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_3c,"`$** has office here",0x14);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
        this_02 = extraout_ECX_00;
      }
      if (pFVar5[0xe0] == (Faction)0x0) {
        TextEngine::addLinef(this_02,*(char **)(this + 0x20));
      }
      else {
        TextEngine::addLinef(this_02,*(char **)(this + 0x20));
      }
      goto LAB_005406e6;
    }
    uVar7 = 0x12;
    pcVar6 = "`$Unknown faction.";
  }
  else {
    uVar7 = 0x49;
    pcVar6 = "`3FACTION [factionID]`2: information about a faction who issues contracts";
  }
  local_3c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_3c,pcVar6,uVar7);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_005406e6:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_License(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_ContractTerminal::cmd_License
          (Screen_ContractTerminal *this,char param_1,int param_3,int param_4)

{
  TradeLocation *this_00;
  Faction *this_01;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *pTVar4;
  TextEngine *this_02;
  undefined4 extraout_ECX_01;
  TextEngine *this_03;
  char *pcVar5;
  uint uVar6;
  uint unaff_EDI;
  uint uVar7;
  basic_string<> local_40 [4];
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7878;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (this_00 == (TradeLocation *)0x0) goto LAB_00540973;
    iVar3 = param_4 - param_3 >> 0x1f;
    if ((param_4 - param_3) / 0x18 + iVar3 != iVar3) {
      std::transform<>();
      iVar3 = *(int *)(this_00 + 0x4c);
      uVar6 = 0;
      uVar7 = *(int *)(this_00 + 0x50) - iVar3 >> 2;
      if (uVar7 != 0) {
        do {
          iVar3 = *(int *)(iVar3 + uVar6 * 4);
          pcVar5 = (char *)(iVar3 + 8);
          if (0xf < *(uint *)(iVar3 + 0x1c)) {
            pcVar5 = *(char **)(iVar3 + 8);
          }
          bVar1 = std::_Traits_equal<>(pcVar5,*(uint *)(iVar3 + 0x18),pcVar2,unaff_EDI);
          if (bVar1) {
            std::basic_string<>::basic_string<>(local_40,(basic_string<> *)this_00);
            bVar1 = Faction::officeAtLocation(*(Faction **)(*(int *)(this_00 + 0x4c) + uVar6 * 4));
            if (!bVar1) {
              TextEngine::addLinef(this_02,*(char **)(this + 0x20));
              goto LAB_00540973;
            }
            iVar3 = *(int *)(*(int *)(this_00 + 0x4c) + uVar6 * 4);
            if (*(char *)(iVar3 + 0xe0) != '\0') {
              uVar7 = 0x29;
              pcVar2 = "`$You already have this contract license.";
              goto LAB_00540955;
            }
            pTVar4 = *(TextEngine **)(iVar3 + 0xcc);
            if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < (int)pTVar4) {
              TextEngine::addLinef(pTVar4,*(char **)(this + 0x20));
            }
            else {
              local_40[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_40,"License",7);
              BankAccount::addTransaction
                        (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_01,
                         -*(int *)(*(int *)(*(int *)(this_00 + 0x4c) + uVar6 * 4) + 0xcc));
              Faction::getAccess(*(Faction **)(*(int *)(this_00 + 0x4c) + uVar6 * 4));
              TextEngine::addLinef(this_03,*(char **)(this + 0x20));
              local_40[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_40,"`7Cost: `$100c",0xe);
              TextEngine::addLine(*(TextEngine **)(this + 0x20));
              local_40[0] = (basic_string<>)0x0;
              std::basic_string<>::assign
                        (local_40,"`7Type `%LIST`7 to view contracts from your new employer.",0x39);
              TextEngine::addLine(*(TextEngine **)(this + 0x20));
              TradeLocation::clearContracts(this_00);
              TradeLocation::populateContracts(this_00);
            }
            goto LAB_00540973;
          }
          uVar6 = uVar6 + 1;
          iVar3 = *(int *)(this_00 + 0x4c);
        } while (uVar6 < uVar7);
      }
      uVar7 = 0x23;
      pcVar2 = "`$Cannot buy license for that here.";
      goto LAB_00540955;
    }
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,"`2Factions you need licenses for at this base:",0x2e);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    uVar7 = 0;
    if (*(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x4c) >> 2 != 0) {
      do {
        std::basic_string<>::basic_string<>(local_40,(basic_string<> *)this_00);
        bVar1 = Faction::officeAtLocation(*(Faction **)(*(int *)(this_00 + 0x4c) + uVar7 * 4));
        if ((bVar1) &&
           (((this_01 = *(Faction **)(uVar7 * 4 + *(int *)(this_00 + 0x4c)), pTVar4 = extraout_ECX,
             this_01[0xe0] == (Faction)0x0 ||
             (iVar3 = Faction::getCurrentTier(this_01), pTVar4 = extraout_ECX_00, iVar3 == 0)) ||
            (this_01[0xe0] == (Faction)0x0)))) {
          uStack_3c = 0x54086d;
          TextEngine::addLinef(pTVar4,*(char **)(this + 0x20));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(*(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x4c) >> 2));
    }
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,"`2To purchase a license, type `3LICENSE [faction]",0x31);
    pTVar4 = *(TextEngine **)(this + 0x20);
  }
  else {
    uVar7 = 0x51;
    pcVar2 = "`3LICENSE [faction]`2: list licenses, or obtain a contract license with a faction";
LAB_00540955:
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,pcVar2,uVar7);
    pTVar4 = *(TextEngine **)(this + 0x20);
  }
  TextEngine::addLine(pTVar4);
LAB_00540973:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Take(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_ContractTerminal::cmd_Take
          (Screen_ContractTerminal *this,MetaGameAction *param_1,char *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  MetaGameAction *pMVar4;
  MetaGameAction **ppMVar5;
  GameData *pGVar6;
  bool bVar7;
  int iVar8;
  GameLogic *this_00;
  GameLogic *this_01;
  int extraout_EDX;
  char *pcVar9;
  uint uVar10;
  basic_string<> local_40 [4];
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    iVar2 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar2 == iVar2) {
      uStack_3c = 0x540b78;
      cmd_Take(this);
      goto LAB_00540d3c;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (iVar2 == 0) goto LAB_00540d3c;
    pcVar9 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pcVar9 = *(char **)param_3;
    }
    iVar8 = atoi(pcVar9);
    if (-1 < iVar8 + -1) {
      iVar3 = *(int *)(iVar2 + 0x94);
      this_00 = (GameLogic *)(*(int *)(iVar2 + 0x98) - iVar3 >> 2);
      if ((GameLogic *)(iVar8 + -1) < this_00) {
        bVar7 = GameLogic::playerHasContract(this_00);
        if (!bVar7) {
          pMVar4 = *(MetaGameAction **)(iVar3 + extraout_EDX * 4);
          iVar8 = GameLogic::convertedTimeInHours(this_01);
          *(float *)(pMVar4 + 0x18) = (float)iVar8;
          uStack_3c = 0x540c1d;
          debugPrint("DETAIL","Begin time in hours: %f");
          fVar1 = *(float *)(*(int *)(pMVar4 + 0x54) + 0x9c);
          if (fVar1 != 0.0) {
            *(float *)(*(int *)(pMVar4 + 0x54) + 0xa8) = fVar1;
          }
          pGVar6 = g_gameData;
          ppMVar5 = *(MetaGameAction ***)(g_gameData + 0x140);
          param_1 = pMVar4;
          if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar5) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(g_gameData + 0x13c),ppMVar5,&param_1);
          }
          else {
            *ppMVar5 = pMVar4;
            *(int *)(pGVar6 + 0x140) = *(int *)(pGVar6 + 0x140) + 4;
          }
          std::remove<>();
          std::vector<>::erase((vector<> *)(iVar2 + 0x94));
          local_40[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_40,"`! Contract taken.",0x12);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
          TextEngine::addBlankLine(*(TextEngine **)(this + 0x20));
          local_40[0] = (basic_string<>)0x0;
          std::basic_string<>::assign
                    (local_40,"`! Go to trade terminal to buy goods at agreed price",0x34);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
          TradeLocation::restockWithContracts
                    (*(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398));
          goto LAB_00540d3c;
        }
        uVar10 = 0x1a;
        pcVar9 = "`$ Contract already taken.";
        goto LAB_00540d1e;
      }
    }
    uVar10 = 0x1d;
    pcVar9 = "`$ Invalid contract specified";
  }
  else {
    uVar10 = 0x3c;
    pcVar9 = "`3TAKE [contract number]`2: request to take a given contract";
  }
LAB_00540d1e:
  local_40[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_40,pcVar9,uVar10);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_00540d3c:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Current(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_ContractTerminal::cmd_Current(Screen_ContractTerminal *this,char param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  TextEngine *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *extraout_ECX_01;
  TextEngine *extraout_ECX_02;
  TextEngine *pTVar7;
  int iVar8;
  uint unaff_EDI;
  basic_string<> local_3c [4];
  undefined4 uStack_38;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c78a8;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    if ((*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) & 0xfffffffcU) == 0) {
      local_3c[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_3c,"`%%No current contracts.",0x18);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    local_14 = 0;
    iVar8 = *(int *)(g_gameData + 0x13c);
    if (*(int *)(g_gameData + 0x140) - iVar8 >> 2 != 0) {
      do {
        iVar3 = *(int *)(iVar8 + local_14 * 4);
        iVar8 = local_14 * 4;
        iVar4 = *(int *)(*(int *)(iVar3 + 0x54) + 0x18);
        if (iVar4 == 1) {
          local_3c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_3c,"`2From : `7anywhere",0x13);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
        }
        else if ((iVar4 == 0) || (iVar4 == 2)) {
          iVar4 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
          _param_1 = (char *)(iVar4 + 0x238);
          if (0xf < *(uint *)(iVar4 + 0x24c)) {
            _param_1 = *(char **)_param_1;
          }
          bVar5 = std::_Traits_equal<>(_param_1,*(uint *)(iVar4 + 0x248),pcVar6,unaff_EDI);
          if (bVar5) {
            local_3c[0] = (basic_string<>)0x0;
            std::basic_string<>::assign(local_3c,"`2From : `$here",0xf);
            TextEngine::addLine(*(TextEngine **)(this + 0x20));
          }
          else {
            std::basic_string<>::basic_string<>(local_3c,(basic_string<> *)(iVar3 + 0x38));
            GameData::getShipWithRego();
            TextEngine::addLinef(this_00,*(char **)(this + 0x20));
          }
        }
        iVar3 = *(int *)(iVar8 + *(int *)(g_gameData + 0x13c));
        iVar4 = *(int *)(*(int *)(iVar3 + 0x54) + 0x18);
        if ((iVar4 == 1) || (iVar4 == 2)) {
          iVar4 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
          _param_1 = (char *)(iVar4 + 0x238);
          if (0xf < *(uint *)(iVar4 + 0x24c)) {
            _param_1 = *(char **)_param_1;
          }
          bVar5 = std::_Traits_equal<>(_param_1,*(uint *)(iVar4 + 0x248),pcVar6,unaff_EDI);
          if (bVar5) {
            local_3c[0] = (basic_string<>)0x0;
            std::basic_string<>::assign(local_3c,"`2To   : `$here",0xf);
            TextEngine::addLine(*(TextEngine **)(this + 0x20));
          }
          else {
            std::basic_string<>::basic_string<>(local_3c,(basic_string<> *)(iVar3 + 0x20));
            GameData::getShipWithRego();
            TextEngine::addLinef(this_01,*(char **)(this + 0x20));
          }
        }
        else if (iVar4 == 0) {
          local_3c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_3c,"`2To   : `7anywhere",0x13);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
        }
        local_3c[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_3c,"`2Cargo:",8);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
        std::basic_string<>::basic_string<>
                  (local_3c,*(basic_string<> **)
                             (*(int *)(*(int *)(g_gameData + 0x13c) + iVar8) + 0x58));
        GameData::getGoodWithShortName();
        uStack_38 = 0x54107e;
        TextEngine::addLinef(this_02,*(char **)(this + 0x20));
        if (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + iVar8) + 0x58) + 0x28) == -1)
        {
          local_3c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_3c,"            `7buy at: `9market value",0x24);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
          pTVar7 = extraout_ECX_00;
        }
        else {
          TextEngine::addLinef(this_03,*(char **)(this + 0x20));
          pTVar7 = extraout_ECX;
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + iVar8) + 0x58) + 0x24) == -1)
        {
          local_3c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_3c,"            `7sell at: `9market value",0x25);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
          pTVar7 = extraout_ECX_02;
        }
        else {
          TextEngine::addLinef(pTVar7,*(char **)(this + 0x20));
          pTVar7 = extraout_ECX_01;
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + iVar8) + 0x58) + 0x2c) < 1) {
          local_3c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_3c,"            `7bonus: `0none",0x1b);
          TextEngine::addLine(*(TextEngine **)(this + 0x20));
        }
        else {
          TextEngine::addLinef(pTVar7,*(char **)(this + 0x20));
        }
        fVar1 = *(float *)(*(int *)(iVar8 + *(int *)(g_gameData + 0x13c)) + 0x1c);
        if (fVar1 != -1.0) {
          fVar2 = *(float *)(*(int *)(iVar8 + *(int *)(g_gameData + 0x13c)) + 0x18);
          if ((fVar2 == -1.0) ||
             (iVar8 = (*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
                      *(int *)(g_gameLogic + 0x188),
             (int)(fVar1 - ((float)(*(int *)(g_gameLogic + 0x184) + iVar8 * 0x18) - fVar2)) < 1)) {
            local_3c[0] = (basic_string<>)0x0;
            std::basic_string<>::assign(local_3c,"`2Time : `@expired",0x12);
            TextEngine::addLine(*(TextEngine **)(this + 0x20));
          }
          else {
            TextEngine::addLinef((TextEngine *)(iVar8 * 3),*(char **)(this + 0x20));
          }
        }
        local_14 = local_14 + 1;
        iVar8 = *(int *)(g_gameData + 0x13c);
      } while (local_14 < (uint)(*(int *)(g_gameData + 0x140) - iVar8 >> 2));
    }
  }
  else {
    local_3c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_3c,"`3CURRENT`2: see your current contracts",0x27);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_ContractTerminal::cmd_Info(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_ContractTerminal::cmd_Info
          (Screen_ContractTerminal *this,char param_1,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  FictionData *pFVar7;
  Ship *pSVar8;
  TextEngine *this_00;
  TextEngine *pTVar9;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *extraout_ECX_01;
  TextEngine *this_03;
  char *_Str;
  uint unaff_EDI;
  uint uVar10;
  basic_string<> local_40 [4];
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c78e0;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar1 == iVar1) {
      uStack_3c = 0x541308;
      cmd_Info(this);
      goto LAB_005417ef;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (iVar1 == 0) goto LAB_005417ef;
    _Str = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      _Str = *(char **)param_3;
    }
    iVar6 = atoi(_Str);
    uVar10 = iVar6 - 1;
    if (((int)uVar10 < 0) ||
       ((uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2) <= uVar10)) {
      uVar10 = 0x1d;
      pcVar5 = "`$ Invalid contract specified";
      goto LAB_005417e2;
    }
    iVar6 = uVar10 * 4;
    std::basic_string<>::basic_string<>
              (local_40,(basic_string<> *)
                        (*(int *)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x54) + 0x48));
    local_8._0_1_ = 1;
    pFVar7 = Singleton<>::getInstance();
    local_8 = (uint)local_8._1_3_ << 8;
    FictionData::getFactionForID(pFVar7);
    iVar2 = *(int *)(iVar6 + *(int *)(iVar1 + 0x94));
    iVar3 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
    if (iVar3 == 1) {
      local_40[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_40,"`2From : `7anywhere",0x13);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    else if ((iVar3 == 0) || (iVar3 == 2)) {
      iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
      _param_1 = (char *)(iVar3 + 0x238);
      if (0xf < *(uint *)(iVar3 + 0x24c)) {
        _param_1 = *(char **)_param_1;
      }
      bVar4 = std::_Traits_equal<>(_param_1,*(uint *)(iVar3 + 0x248),pcVar5,unaff_EDI);
      if (bVar4) {
        local_40[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_40,"`2From : `$here",0xf);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
      }
      else {
        std::basic_string<>::basic_string<>(local_40,(basic_string<> *)(iVar2 + 0x38));
        GameData::getShipWithRego();
        TextEngine::addLinef(this_00,*(char **)(this + 0x20));
      }
    }
    iVar2 = *(int *)(iVar6 + *(int *)(iVar1 + 0x94));
    iVar3 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
    if ((iVar3 == 1) || (iVar3 == 2)) {
      iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
      _param_1 = (char *)(iVar3 + 0x238);
      if (0xf < *(uint *)(iVar3 + 0x24c)) {
        _param_1 = *(char **)_param_1;
      }
      bVar4 = std::_Traits_equal<>(_param_1,*(uint *)(iVar3 + 0x248),pcVar5,unaff_EDI);
      if (bVar4) {
        local_40[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_40,"`2To   : `$here",0xf);
        TextEngine::addLine(*(TextEngine **)(this + 0x20));
      }
      else {
        std::basic_string<>::basic_string<>(local_40,(basic_string<> *)(iVar2 + 0x20));
        pSVar8 = GameData::getShipWithRego();
        pTVar9 = (TextEngine *)(*(int *)(pSVar8 + 0x24) + 0x1c);
        if (0xf < *(uint *)(*(int *)(pSVar8 + 0x24) + 0x30)) {
          pTVar9 = *(TextEngine **)pTVar9;
        }
        uStack_3c = 0x541580;
        TextEngine::addLinef(pTVar9,*(char **)(this + 0x20));
      }
    }
    else if (iVar3 == 0) {
      local_40[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_40,"`2To   : `7anywhere",0x13);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,"`2Cargo:",8);
    TextEngine::addLine(*(TextEngine **)(this + 0x20));
    std::basic_string<>::basic_string<>
              (local_40,*(basic_string<> **)(*(int *)(*(int *)(iVar1 + 0x94) + iVar6) + 0x58));
    GameData::getGoodWithShortName();
    uStack_3c = 0x5415f0;
    TextEngine::addLinef(this_01,*(char **)(this + 0x20));
    iVar2 = *(int *)(*(int *)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x58) + 0x28);
    if (iVar2 == -1) {
      uVar10 = 0x24;
      pcVar5 = "            `7buy at: `0market value";
LAB_0054163a:
      local_40[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_40,pcVar5,uVar10);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
      pTVar9 = extraout_ECX_00;
    }
    else if (iVar2 < 1) {
      pTVar9 = this_02;
      if (iVar2 == 0) {
        uVar10 = 0x22;
        pcVar5 = "            `%no buy or sell price";
        goto LAB_0054163a;
      }
    }
    else {
      TextEngine::addLinef(this_02,*(char **)(this + 0x20));
      pTVar9 = extraout_ECX;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x58) + 0x24);
    if (iVar2 == -1) {
      local_40[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_40,"           `7sell at: `0market value",0x24);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    else if (0 < iVar2) {
      TextEngine::addLinef(pTVar9,*(char **)(this + 0x20));
    }
    pTVar9 = *(TextEngine **)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x58);
    if (0 < *(int *)(pTVar9 + 0x2c)) {
      TextEngine::addLinef(pTVar9,*(char **)(this + 0x20));
      pTVar9 = extraout_ECX_01;
    }
    TextEngine::addLinef(pTVar9,*(char **)(this + 0x20));
    if (*(float *)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x1c) == -1.0) {
      local_40[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_40,"`2Time : `7none",0xf);
      TextEngine::addLine(*(TextEngine **)(this + 0x20));
    }
    else {
      uStack_3c = 0x541730;
      TextEngine::addLinef(this_03,*(char **)(this + 0x20));
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar6 + *(int *)(iVar1 + 0x94)) + 0x54) + 0x68);
    if (iVar1 == 1) {
      uVar10 = 0xf;
      pcVar5 = "`2Diff.: `0easy";
    }
    else if (iVar1 == 2) {
      uVar10 = 0x11;
      pcVar5 = "`2Diff.: `2medium";
    }
    else if (iVar1 == 3) {
      uVar10 = 0xf;
      pcVar5 = "`2Diff.: `$hard";
    }
    else if (iVar1 == 4) {
      uVar10 = 0x12;
      pcVar5 = "`2Diff.: `^v. hard";
    }
    else {
      uVar10 = 0x14;
      pcVar5 = "`2Diff.: `@nightmare";
    }
  }
  else {
    uVar10 = 0x3a;
    pcVar5 = "`3INFO [contract number]`2: see full details of a contract";
  }
LAB_005417e2:
  local_40[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_40,pcVar5,uVar10);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
LAB_005417ef:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}
