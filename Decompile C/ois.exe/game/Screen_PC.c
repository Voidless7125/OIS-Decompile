#include "../ois.exe.h"


// public: __thiscall Screen_PC::Screen_PC(class ScreenInterface *,int,int)

void __thiscall
Screen_PC::Screen_PC(Screen_PC *this,ScreenInterface *param_1,int param_2,int param_3)

{
  CommsCommand *pCVar1;
  allocator<> *paVar2;
  CommsCommand *unaff_EDI;
  basic_string<> local_12c [16];
  undefined4 local_11c;
  undefined4 local_118;
  undefined **local_114;
  code *local_110;
  Screen_PC *local_108;
  undefined4 uStack_f4;
  basic_string<> local_e8 [12];
  undefined4 uStack_dc;
  basic_string<> local_d0 [12];
  undefined4 uStack_c4;
  CommsCommand local_90 [120];
  CommsCommand *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c8553;
  local_10 = ExceptionList;
  pCVar1 = (CommsCommand *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (Screen_PC)0x0;
  *(ScreenInterface **)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x20) = param_2;
  *(undefined ***)this = vftable;
  this[0x14] = (Screen_PC)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(int *)(this + 0x24) = param_3;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(g_gameLogic + 0xc);
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  local_8 = 2;
  uStack_7 = 0;
  uStack_c4 = 0x546e64;
  local_18 = pCVar1;
  std::basic_string<>::assign((basic_string<> *)(param_1 + 0x30),"Comms",5);
  *(undefined2 *)(this + 7) = 0x101;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) / 6;
  *(int *)(this + 0x24) = (int)(*(int *)(this + 0x24) + (*(int *)(this + 0x24) >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(*(int *)(this + 0x40) + 0x60) = 0x28;
  local_d0[0] = (basic_string<>)0x0;
  uStack_dc = 0x546ebd;
  std::basic_string<>::assign(local_d0,"3.02",4);
  local_8 = 3;
  local_e8[0] = (basic_string<>)0x0;
  uStack_f4 = 0x546ee9;
  std::basic_string<>::assign(local_e8,"Tribalt Precision",0x11);
  local_114 = std::_Func_impl_no_alloc<>::vftable;
  local_110 = cmd_Email;
  local_8 = 5;
  local_11c = 0;
  local_118 = 0xf;
  local_12c[0] = (basic_string<>)0x0;
  local_108 = this;
  std::basic_string<>::assign(local_12c,"MAIL",4);
  local_8 = 2;
  paVar2 = (allocator<> *)CommsCommand::CommsCommand(local_90);
  _local_8 = CONCAT31(uStack_7,6);
  if (*(CommsCommand **)(this + 0x4c) == *(CommsCommand **)(this + 0x48)) {
    uStack_c4 = 0x546f78;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x44),*(CommsCommand **)(this + 0x48),(CommsCommand *)paVar2);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar2,pCVar1,unaff_EDI);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 0x78;
  }
  local_8 = 2;
  CommsCommand::~CommsCommand(local_90);
  local_d0[0] = (basic_string<>)0x0;
  uStack_dc = 0x546faf;
  std::basic_string<>::assign(local_d0,"2.86",4);
  local_8 = 7;
  local_e8[0] = (basic_string<>)0x0;
  uStack_f4 = 0x546fdb;
  std::basic_string<>::assign(local_e8,"Tribalt Precision",0x11);
  local_114 = std::_Func_impl_no_alloc<>::vftable;
  local_110 = cmd_News;
  local_8 = 9;
  local_11c = 0;
  local_118 = 0xf;
  local_12c[0] = (basic_string<>)0x0;
  local_108 = this;
  std::basic_string<>::assign(local_12c,"NEWS",4);
  local_8 = 2;
  paVar2 = (allocator<> *)CommsCommand::CommsCommand(local_90);
  _local_8 = CONCAT31(uStack_7,10);
  if (*(CommsCommand **)(this + 0x4c) == *(CommsCommand **)(this + 0x48)) {
    uStack_c4 = 0x54706a;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x44),*(CommsCommand **)(this + 0x48),(CommsCommand *)paVar2);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar2,pCVar1,unaff_EDI);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 0x78;
  }
  local_8 = 2;
  CommsCommand::~CommsCommand(local_90);
  local_d0[0] = (basic_string<>)0x0;
  uStack_dc = 0x5470a1;
  std::basic_string<>::assign(local_d0,"6.22",4);
  local_8 = 0xb;
  local_e8[0] = (basic_string<>)0x0;
  uStack_f4 = 0x5470cd;
  std::basic_string<>::assign(local_e8,"Ventarii",8);
  local_114 = std::_Func_impl_no_alloc<>::vftable;
  local_110 = cmd_DEL;
  local_8 = 0xd;
  local_11c = 0;
  local_118 = 0xf;
  local_12c[0] = (basic_string<>)0x0;
  local_108 = this;
  std::basic_string<>::assign(local_12c,"DEL",3);
  local_8 = 2;
  paVar2 = (allocator<> *)CommsCommand::CommsCommand(local_90);
  _local_8 = CONCAT31(uStack_7,0xe);
  if (*(CommsCommand **)(this + 0x4c) == *(CommsCommand **)(this + 0x48)) {
    uStack_c4 = 0x54715c;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x44),*(CommsCommand **)(this + 0x48),(CommsCommand *)paVar2);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar2,pCVar1,unaff_EDI);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 0x78;
  }
  local_8 = 2;
  CommsCommand::~CommsCommand(local_90);
  local_d0[0] = (basic_string<>)0x0;
  uStack_dc = 0x547193;
  std::basic_string<>::assign(local_d0,"6.22",4);
  local_8 = 0xf;
  local_e8[0] = (basic_string<>)0x0;
  uStack_f4 = 0x5471bf;
  std::basic_string<>::assign(local_e8,"Ventarii",8);
  local_114 = std::_Func_impl_no_alloc<>::vftable;
  local_110 = cmd_DIR;
  local_8 = 0x11;
  local_11c = 0;
  local_118 = 0xf;
  local_12c[0] = (basic_string<>)0x0;
  local_108 = this;
  std::basic_string<>::assign(local_12c,"DIR",3);
  local_8 = 2;
  paVar2 = (allocator<> *)CommsCommand::CommsCommand(local_90);
  _local_8 = CONCAT31(uStack_7,0x12);
  if (*(CommsCommand **)(this + 0x4c) == *(CommsCommand **)(this + 0x48)) {
    uStack_c4 = 0x54724e;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x44),*(CommsCommand **)(this + 0x48),(CommsCommand *)paVar2);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar2,pCVar1,unaff_EDI);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 0x78;
  }
  local_8 = 2;
  CommsCommand::~CommsCommand(local_90);
  local_d0[0] = (basic_string<>)0x0;
  uStack_dc = 0x547285;
  std::basic_string<>::assign(local_d0,"6.22",4);
  local_8 = 0x13;
  local_e8[0] = (basic_string<>)0x0;
  uStack_f4 = 0x5472b1;
  std::basic_string<>::assign(local_e8,"Ventarii",8);
  local_114 = std::_Func_impl_no_alloc<>::vftable;
  local_110 = cmd_VIEW;
  local_8 = 0x15;
  local_11c = 0;
  local_118 = 0xf;
  local_12c[0] = (basic_string<>)0x0;
  local_108 = this;
  std::basic_string<>::assign(local_12c,"VIEW",4);
  local_8 = 2;
  paVar2 = (allocator<> *)CommsCommand::CommsCommand(local_90);
  _local_8 = CONCAT31(uStack_7,0x16);
  if (*(CommsCommand **)(this + 0x4c) == *(CommsCommand **)(this + 0x48)) {
    uStack_c4 = 0x547340;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x44),*(CommsCommand **)(this + 0x48),(CommsCommand *)paVar2);
  }
  else {
    std::_Default_allocator_traits<>::construct<>(paVar2,pCVar1,unaff_EDI);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 0x78;
  }
  CommsCommand::~CommsCommand(local_90);
  *(Screen_PC **)(*(int *)(this + 0x40) + 4) = this;
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void * __thiscall Screen_PC::`vector deleting destructor'(unsigned int)

void * __thiscall Screen_PC::_vector_deleting_destructor_(Screen_PC *this,uint param_1)

{
  TerminalEngine *this_00;
  nothrow_t *pnVar1;
  CommsCommand *this_01;
  CommsCommand *pCVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
  }
  this_00 = *(TerminalEngine **)(this + 0x30);
  if (this_00 != (TerminalEngine *)0x0) {
    TerminalEngine::_scalar_deleting_destructor_(this_00,(uint)this_00);
  }
  this_01 = *(CommsCommand **)(this + 0x44);
  if (this_01 != (CommsCommand *)0x0) {
    pCVar2 = *(CommsCommand **)(this + 0x48);
    if (this_01 != pCVar2) {
      do {
        CommsCommand::~CommsCommand(this_01);
        this_01 = this_01 + 0x78;
      } while (this_01 != pCVar2);
      this_01 = *(CommsCommand **)(this + 0x44);
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 0x4c) - (int)this_01) / 0x78) * 0x78);
    pCVar2 = this_01;
    if ((nothrow_t *)0xfff < pnVar1) {
      pCVar2 = *(CommsCommand **)(this_01 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((CommsCommand *)0x1f < this_01 + (-4 - (int)pCVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar2,pnVar1);
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x34));
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x50);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall Screen_PC::configure(void)

void __thiscall Screen_PC::configure(Screen_PC *this)

{
  AnimationFrames **ppAVar1;
  TextField *pTVar2;
  int iVar3;
  TextEngine *this_00;
  Widget *pWStack_1e4;
  TextField *local_1ac;
  code *local_1a8;
  code *local_1a4;
  TerminalEngine *local_1a0;
  Widget local_19c [16];
  undefined4 local_18c;
  undefined4 local_188;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c85c1;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(g_gameData + 0xd0);
  Widget::Widget(local_19c);
  local_8 = 0;
  local_18c = *(undefined4 *)(this + 0x20);
  local_188 = *(undefined4 *)(this + 0x24);
  pTVar2 = operator_new(0x15c00);
  local_8._0_1_ = 1;
  local_1ac = pTVar2;
  std::basic_string<>::assign((basic_string<> *)&stack0xfffffe2c,"",0);
  pWStack_1e4 = local_19c;
  pTVar2 = (TextField *)TextField::TextField(pTVar2,*(undefined4 *)(this + 0xc));
  local_8._0_1_ = 0;
  *(TextField **)(this + 0x28) = pTVar2;
  TextField::update(pTVar2);
  (**(code **)(**(int **)(this + 0x28) + 0x2c))();
  local_1a4 = (code *)0x3f000000;
  local_1a0 = (TerminalEngine *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(this + 0x28) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(this + 0x28) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(this + 0x28));
  iVar3 = *(int *)(this + 0xc);
  local_1ac = *(TextField **)(this + 0x28);
  ppAVar1 = *(AnimationFrames ***)(iVar3 + 0x194);
  if (*(AnimationFrames ***)(iVar3 + 0x198) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar3 + 400),ppAVar1,(AnimationFrames **)&local_1ac);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_1ac;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  iVar3 = *(int *)(this + 0x30);
  if (iVar3 == 0) {
    local_1a0 = operator_new(0xa8);
    iVar3 = TerminalEngine::TerminalEngine(local_1a0);
    *(int *)(this + 0x30) = iVar3;
  }
  local_1a8 = executeCommand;
  local_1a0 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(iVar3 + 0x18),(_Binder<> *)&local_1a8);
  local_1a4 = updateScreenCall;
  local_1a0 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(*(int *)(this + 0x30) + 0x68),(_Binder<> *)&local_1a4)
  ;
  local_1a8 = addString;
  local_1a0 = (TerminalEngine *)this;
  std::function<>::operator=<>((function<> *)(*(int *)(this + 0x30) + 0x40),(_Binder<> *)&local_1a8)
  ;
  *(undefined4 *)(*(int *)(this + 0x30) + 4) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(*(int *)(this + 0x30) + 8) = *(undefined4 *)(this + 0x24);
  *(undefined1 *)(*(int *)(this + 0x30) + 0xd) = 1;
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 == 0) {
    local_1a0 = operator_new(0x150);
    local_8._0_1_ = 3;
    pWStack_1e4 = (Widget *)0x5477f7;
    iVar3 = TextEngine::TextEngine
                      ((TextEngine *)local_1a0,*(TextField **)(this + 0x28),(int)(this + 0x34),
                       *(int *)(this + 0x20),*(int *)(this + 0x24),(vector<> *)(this + 0x34));
    local_8 = (uint)local_8._1_3_ << 8;
    *(int *)(this + 0x2c) = iVar3;
  }
  local_1a4 = renderBottomLine;
  *(int *)(*(int *)(this + 0x40) + 100) = iVar3;
  local_1a0 = (TerminalEngine *)this;
  std::function<>::operator=<>
            ((function<> *)(*(int *)(this + 0x2c) + 0x128),(_Binder<> *)&local_1a4);
  renderBottomLine(this);
  pWStack_1e4 = (Widget *)((uint)pWStack_1e4 & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&pWStack_1e4,"",0);
  TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  pWStack_1e4 = (Widget *)((uint)pWStack_1e4 & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&pWStack_1e4,"`!V`%entarii VT-OS v6.22",0x18);
  TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  TextEngine::addLinef(this_00,*(char **)(this + 0x2c));
  TextEngine::render(*(TextEngine **)(this + 0x2c));
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x2c));
  Widget::~Widget(local_19c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual bool __thiscall Screen_PC::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_PC::onKeyReleased(Screen_PC *this,KeyCode param_1,Event *param_2)

{
  TextEngine *pTVar1;
  TextEngine *this_00;
  ComputerSystem *this_01;
  uint uVar2;
  SoundEngine *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  Ship *pSVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c85f8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = *(TextEngine **)(this + 0x2c);
  if (*(int *)(this_00 + 100) == 1) {
    if (param_1 == 0x1d) {
      if (*(uint *)(this_00 + 0x68) <
          (uint)((*(int *)(this_00 + 0xb4) - *(int *)(this_00 + 0xb0)) / 0x18 -
                *(int *)(this_00 + 0x24))) {
        *(uint *)(this_00 + 0x68) = *(uint *)(this_00 + 0x68) + 1;
        TextEngine::renderDocument(this_00);
      }
LAB_005479b0:
      pSVar7 = *(Ship **)(this + 0x1c);
      pSVar3 = Singleton<>::getInstance();
      SoundEngine::playRandomKeyPress(pSVar3,pSVar7);
    }
    else {
      if (param_1 == 0x1c) {
        if (0 < *(int *)(this_00 + 0x68)) {
          *(int *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + -1;
          TextEngine::renderDocument(this_00);
        }
        goto LAB_005479b0;
      }
      if (((param_1 == 0xa4) || (param_1 == 10)) || (param_1 == 0x23)) {
        TextEngine::finishShowingDocument(this_00);
        renderBottomLine(this);
        goto LAB_005479b0;
      }
    }
    iVar4 = *(int *)(*(int *)(this + 0x40) + 8);
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        ExceptionList = local_10;
        return true;
      }
      if (param_1 != 0x8e) {
        ExceptionList = local_10;
        return true;
      }
      iVar4 = *(int *)(*(int *)(this + 0x40) + 0x5c);
      puVar5 = (undefined4 *)(iVar4 + 0x34);
      if (0xf < *(uint *)(iVar4 + 0x48)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      debugPrint("DETAIL","Sending draft: %s",puVar5,uVar2);
      ComputerSystem::sendCurrentDraft(*(ComputerSystem **)(this + 0x40));
      pSVar7 = *(Ship **)(this + 0x1c);
      pSVar3 = Singleton<>::getInstance();
      SoundEngine::playRandomKeyPress(pSVar3,pSVar7);
      TextEngine::finishShowingDocument(*(TextEngine **)(this + 0x2c));
      renderBottomLine(this);
      ExceptionList = local_10;
      return true;
    }
    iVar4 = CommsData::getDraftCount(*(CommsData **)(g_gameData + 300));
    if (iVar4 < 1) {
      ExceptionList = local_10;
      return true;
    }
    bVar6 = param_1 == 0x8d;
  }
  else {
    if (*(int *)(this_00 + 100) != 2) {
      bVar6 = TerminalEngine::keyReleased(*(TerminalEngine **)(this + 0x30),param_1);
      ExceptionList = local_10;
      return bVar6;
    }
    if (*(int *)(this + 0x18) == 1) {
      if (this[0x14] != (Screen_PC)0x0) {
        if ((((param_1 == 0x17) || (param_1 == 0x2e)) || (param_1 == 7)) || (param_1 == 0x7f)) {
          puVar5 = *(undefined4 **)(this + 0x40);
          if (puVar5[0x19] != 0) {
            *puVar5 = 0;
            iVar4 = *(int *)(**(int **)(g_gameData + 300) +
                            *(int *)(puVar5[3] + *(int *)(puVar5[0x19] + 0xbc) * 4) * 4);
            *(undefined1 *)(iVar4 + 0x9c) = 1;
            *(undefined1 *)(iVar4 + 100) = 1;
            puVar5 = (undefined4 *)(iVar4 + 0x1c);
            if (0xf < *(uint *)(iVar4 + 0x30)) {
              puVar5 = (undefined4 *)*puVar5;
            }
            debugPrint("DETAIL","Deleted email \'%s\'",puVar5,uVar2);
          }
        }
        this[0x14] = (Screen_PC)0x0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_8 = 0;
        ComputerSystem::showEmails(*(ComputerSystem **)(this + 0x40));
        local_8 = 0xffffffff;
        std::vector<>::_Tidy((vector<> *)&local_24);
        renderBottomLine(this);
        TextEngine::render(*(TextEngine **)(this + 0x2c));
        ExceptionList = local_10;
        return true;
      }
      if (((param_1 == 0x17) || (param_1 == 0x2e)) || (param_1 == 0x7f)) {
        this[0x14] = (Screen_PC)0x1;
        renderBottomLine(this);
        TextEngine::render(*(TextEngine **)(this + 0x2c));
        ExceptionList = local_10;
        return true;
      }
    }
    if (param_1 == 0x8c) {
      TextEngine::finishShowingList(this_00,false);
      *(undefined4 *)(this + 0x18) = 0;
LAB_00547c54:
      renderBottomLine(this);
LAB_00547c5b:
      pSVar7 = *(Ship **)(this + 0x1c);
      pSVar3 = Singleton<>::getInstance();
      SoundEngine::playRandomKeyPress(pSVar3,pSVar7);
    }
    else {
      if (param_1 == 0x1d) {
        if (this_00[0xc0] == (TextEngine)0x0) {
          *(int *)(this_00 + 0xbc) = *(int *)(this_00 + 0xbc) + 1;
          uVar2 = (*(int *)(this_00 + 0xe0) - *(int *)(this_00 + 0xdc)) / 0x18;
          if (uVar2 <= *(uint *)(this_00 + 0xbc)) {
            *(uint *)(this_00 + 0xbc) = uVar2 - 1;
          }
          TextEngine::renderList(this_00);
        }
        goto LAB_00547c5b;
      }
      if (param_1 == 0x1c) {
        if (this_00[0xc0] == (TextEngine)0x0) {
          pTVar1 = this_00 + 0xbc;
          *(int *)pTVar1 = *(int *)pTVar1 + -1;
          if (*(int *)pTVar1 < 0) {
            *(undefined4 *)(this_00 + 0xbc) = 0;
          }
          TextEngine::renderList(this_00);
        }
        goto LAB_00547c5b;
      }
      if ((((param_1 == 0xa4) || (param_1 == 10)) || (param_1 == 0x23)) &&
         (this_00[0xc0] == (TextEngine)0x0)) {
        *(undefined4 *)(this + 0x18) = 0;
        TextEngine::finishShowingList(this_00,true);
        goto LAB_00547c54;
      }
    }
    if (*(int *)(this + 0x18) != 1) {
      if (*(int *)(this + 0x18) != 2) {
        ExceptionList = local_10;
        return true;
      }
      if (param_1 != 0x84) {
        ExceptionList = local_10;
        return true;
      }
      TextEngine::finishShowingList(*(TextEngine **)(this + 0x2c),false);
      this_01 = *(ComputerSystem **)(this + 0x40);
      *(undefined4 *)(*(int *)(this_01 + 4) + 0x18) = 1;
      ComputerSystem::renderEmails(this_01,*(CommsData **)(g_gameData + 300));
      goto LAB_00547cb1;
    }
    bVar6 = param_1 == 0x8e;
  }
  if (!bVar6) {
    ExceptionList = local_10;
    return true;
  }
  TextEngine::finishShowingList(*(TextEngine **)(this + 0x2c),false);
  ComputerSystem::showDrafts(*(ComputerSystem **)(this + 0x40));
LAB_00547cb1:
  pSVar7 = *(Ship **)(this + 0x1c);
  pSVar3 = Singleton<>::getInstance();
  SoundEngine::playRandomKeyPress(pSVar3,pSVar7);
  ExceptionList = local_10;
  return true;
}


// public: void __thiscall Screen_PC::renderBottomLine(void)

void __thiscall Screen_PC::renderBottomLine(Screen_PC *this)

{
  undefined4 *puVar1;
  basic_string<> local_2c [12];
  undefined4 uStack_20;
  Color3B local_7 [3];
  
  if (this[0x14] != (Screen_PC)0x0) {
    uStack_20 = 0x547d24;
    cocos2d::Color3B::Color3B(local_7,0x80,0x80,'\0');
    local_2c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_2c,"`%Press `$D`%EL again to delete email",0x25);
    TextEngine::setBottomText(*(TextEngine **)(this + 0x2c));
    return;
  }
  if (*(int *)(*(int *)(this + 0x2c) + 100) == 0) {
    uStack_20 = 0x547d7d;
    cocos2d::Color3B::Color3B(local_7,'\0','\0',0xff);
    puVar1 = (undefined4 *)(*(int *)(this + 0x30) + 0x90);
    if (0xf < *(uint *)(*(int *)(this + 0x30) + 0xa4)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    strUsingArgs((char *)local_2c,"CMD> `%%%s%c",puVar1,3);
    TextEngine::setBottomText(*(TextEngine **)(this + 0x2c));
  }
  return;
}


// public: void __thiscall Screen_PC::executeCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_PC::executeCommand(Screen_PC *this,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  void *pvVar9;
  TextEngine *pTVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint unaff_EDI;
  uint uVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  int in_stack_00000020;
  basic_string<> local_80 [4];
  undefined4 uStack_7c;
  uint local_58;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [3];
  vector<> local_20 [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8660;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar5 = false;
  local_8 = 1;
  local_14 = pcVar6;
  std::basic_string<>::basic_string<>((basic_string<> *)local_44,(basic_string<> *)&param_2);
  local_8._0_1_ = 2;
  uVar13 = 0;
  iVar12 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      std::basic_string<>::append((basic_string<> *)local_44," ",1);
      pcVar7 = in_stack_0000001c + iVar12;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
      uVar13 = uVar13 + 1;
      iVar12 = iVar12 + 0x18;
    } while (uVar13 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
  pTVar10 = *(TextEngine **)(this + 0x2c);
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>(local_80,(basic_string<> *)local_2c);
  TextEngine::addLineWithWrap(pTVar10,*(undefined4 *)(pTVar10 + 0x20));
  local_8._0_1_ = 2;
  pTVar10 = extraout_ECX;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
LAB_00547ee6:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar11);
    pTVar10 = extraout_ECX_00;
  }
  TextEngine::addLinef(pTVar10,*(char **)(this + 0x2c));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
  pTVar10 = *(TextEngine **)(this + 0x2c);
  local_8._0_1_ = 4;
  std::basic_string<>::basic_string<>(local_80,(basic_string<> *)local_2c);
  TextEngine::addLineWithWrap(pTVar10,*(undefined4 *)(pTVar10 + 0x20));
  local_8._0_1_ = 2;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar11);
  }
  iVar12 = *(int *)(this + 0x44);
  local_58 = 0;
  iVar2 = *(int *)(this + 0x48) - iVar12 >> 0x1f;
  if ((*(int *)(this + 0x48) - iVar12) / 0x78 + iVar2 != iVar2) {
    do {
      pcVar8 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar8 = param_2;
      }
      bVar4 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar6,unaff_EDI);
      if (bVar4) {
LAB_0054804f:
        bVar4 = true;
      }
      else {
        uStack_7c = 0x54801c;
        strUsingArgs((char *)local_2c);
        bVar5 = true;
        pcVar8 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar8 = param_2;
        }
        bVar4 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar6,unaff_EDI);
        if (bVar4) goto LAB_0054804f;
        bVar4 = false;
      }
      if ((bVar5) && (bVar5 = false, 0xf < local_18)) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00547ee6;
        }
        operator_delete(pvVar9,pnVar11);
      }
      if (bVar4) {
        std::vector<>::vector<>(local_20,(vector<> *)&stack0x0000001c);
        local_8._0_1_ = 5;
        piVar1 = *(int **)(*(int *)(this + 0x44) + 0x74 + local_58 * 0x78);
        if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar1 + 8))();
        std::vector<>::_Tidy(local_20);
        goto LAB_00548223;
      }
      iVar12 = *(int *)(this + 0x44);
      local_58 = local_58 + 1;
    } while (local_58 < (uint)((*(int *)(this + 0x48) - iVar12) / 0x78));
  }
  bVar5 = std::_Traits_equal<>("HELP",4,pcVar6,unaff_EDI);
  pcVar8 = in_stack_0000001c;
  if (bVar5) {
    iVar2 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar2 == iVar2) {
      local_80[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_80,"`!V`%entarii VT-OS `7system help:",0x21);
      TextEngine::addLine(*(TextEngine **)(this + 0x2c));
      local_80[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_80," `%DIR:`7 list files",0x14);
      TextEngine::addLine(*(TextEngine **)(this + 0x2c));
      local_80[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_80," `%VIEW [filename]:`7 view file contents",0x28);
      TextEngine::addLine(*(TextEngine **)(this + 0x2c));
      local_80[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_80," `%type command name to execute it",0x22);
      TextEngine::addLine(*(TextEngine **)(this + 0x2c));
      pTVar10 = *(TextEngine **)(this + 0x2c);
    }
    else {
      uVar13 = 0;
      iVar2 = *(int *)(this + 0x48) - iVar12 >> 0x1f;
      uVar3 = (undefined1)local_8;
      if ((*(int *)(this + 0x48) - iVar12) / 0x78 + iVar2 != iVar2) {
        do {
          pcVar7 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar7 = *(char **)pcVar8;
          }
          bVar5 = std::_Traits_equal<>(pcVar7,*(uint *)(pcVar8 + 0x10),pcVar6,unaff_EDI);
          if (bVar5) {
            std::vector<>::vector<>(local_20,(vector<> *)&stack0x0000001c);
            local_8._0_1_ = 6;
            piVar1 = *(int **)(*(int *)(this + 0x44) + 0x74 + uVar13 * 0x78);
            if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
              std::_Xbad_function_call();
            }
            (**(code **)(*piVar1 + 8))();
            local_8._0_1_ = 2;
            std::vector<>::_Tidy(local_20);
            pTVar10 = *(TextEngine **)(this + 0x2c);
            goto LAB_0054821e;
          }
          uVar13 = uVar13 + 1;
          uVar3 = (undefined1)local_8;
        } while (uVar13 < (uint)((*(int *)(this + 0x48) - iVar12) / 0x78));
      }
LAB_00548186:
      local_8._0_1_ = uVar3;
      pTVar10 = *(TextEngine **)(this + 0x2c);
    }
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"Unknown command.",0x10);
    pTVar10 = *(TextEngine **)(this + 0x2c);
    local_8._0_1_ = 7;
    std::basic_string<>::basic_string<>(local_80,(basic_string<> *)local_2c);
    TextEngine::addLineWithWrap(pTVar10,*(undefined4 *)(pTVar10 + 0x20));
    local_8._0_1_ = 2;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 2;
    if (local_18 < 0x10) goto LAB_00548186;
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar11);
    pTVar10 = *(TextEngine **)(this + 0x2c);
  }
LAB_0054821e:
  TextEngine::render(pTVar10);
LAB_00548223:
  if (0xf < local_30) {
    pnVar11 = (nothrow_t *)(local_30 + 1);
    pvVar9 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)local_44[0] + -4);
      pnVar11 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_00548255;
    }
    operator_delete(pvVar9,pnVar11);
  }
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  if (0xf < in_stack_00000018) {
    pnVar11 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar11) {
      pcVar6 = *(char **)(param_2 + -4);
      pnVar11 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar6)) {
LAB_00548255:
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


// public: void __thiscall Screen_PC::updateScreenCall(void)

void __thiscall Screen_PC::updateScreenCall(Screen_PC *this)

{
  renderBottomLine(this);
  TextEngine::render(*(TextEngine **)(this + 0x2c));
  return;
}


// public: void __thiscall Screen_PC::addString(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall Screen_PC::addString(Screen_PC *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_2);
  TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x5484b6;
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_PC::cmd_DIR(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_PC::cmd_DIR(Screen_PC *this)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8698;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar7 = *(int *)(this + 0x48);
  iVar6 = *(int *)(this + 0x44);
  local_14 = 0;
  iVar5 = iVar7 - iVar6 >> 0x1f;
  if ((iVar7 - iVar6) / 0x78 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      piVar2 = (int *)(iVar5 + iVar6);
      if (0xf < *(uint *)(iVar5 + 0x14 + iVar6)) {
        piVar2 = (int *)*piVar2;
      }
      pcVar4 = "EXE";
      bVar8 = *(char *)(iVar5 + 0x48 + iVar6) == '\0';
      if (bVar8) {
        pcVar4 = "COM";
      }
      uVar3 = 0x30;
      if (!bVar8) {
        uVar3 = 0x21;
      }
      TextEngine::addLinef
                ((TextEngine *)0x21,*(char **)(this + 0x2c)," `%c%s.%s",uVar3,piVar2,pcVar4,uVar1);
      iVar7 = *(int *)(this + 0x48);
      iVar6 = *(int *)(this + 0x44);
      local_14 = local_14 + 1;
      iVar5 = iVar5 + 0x78;
    } while (local_14 < (uint)((iVar7 - iVar6) / 0x78));
  }
  ComputerSystem::renderFiles(*(ComputerSystem **)(this + 0x40),(iVar7 - iVar6) / 0x78);
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_PC::cmd_VIEW(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall
Screen_PC::cmd_VIEW(Screen_PC *this,char param_1,basic_string<> *param_3,int param_4)

{
  basic_string<> *pbVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  TextEngine *this_00;
  char *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  basic_string<> *pbVar6;
  int iVar7;
  TextEngine *this_04;
  TextEngine *this_05;
  nothrow_t *pnVar8;
  int iVar9;
  basic_string<> *pbVar10;
  uint uVar11;
  uint unaff_EDI;
  basic_string<> abStack_d4 [16];
  undefined4 uStack_c4;
  basic_string<> abStack_bc [24];
  undefined **local_a4;
  code *local_a0;
  basic_string<> *local_64;
  int local_60;
  uint local_58;
  basic_string<> *local_54;
  basic_string<> *local_50;
  basic_string<> *local_4c;
  char local_45;
  basic_string<> *local_44 [4];
  int local_34;
  uint local_30;
  basic_string<> *local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c86f8;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_14 = pcVar4;
  if (param_1 != '\0') {
    local_a0 = (code *)0x54863f;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",0x24);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_a0 = (code *)0x548669;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff6c,"`3VIEW [filename]`2: view the contents of a file"
               ,0x30);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    goto LAB_00548daa;
  }
  iVar7 = param_4 - (int)param_3 >> 0x1f;
  if ((param_4 - (int)param_3) / 0x18 + iVar7 == iVar7) {
    cmd_VIEW(this);
    goto LAB_00548daa;
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,param_3);
  splitStringBy();
  local_8 = 1;
  local_54 = local_64;
  if (0xf < *(uint *)(local_64 + 0x14)) {
    local_54 = *(basic_string<> **)local_64;
  }
  std::transform<>();
  local_45 = '\0';
  local_54 = (basic_string<> *)0x0;
  iVar7 = *(int *)(this + 0x48) - *(int *)(this + 0x44) >> 0x1f;
  pbVar6 = local_64;
  if ((*(int *)(this + 0x48) - *(int *)(this + 0x44)) / 0x78 + iVar7 == iVar7) {
LAB_00548a01:
    local_58 = 0;
    if (*(int *)(*(int *)(this + 0x40) + 0x78) - *(int *)(*(int *)(this + 0x40) + 0x74) >> 2 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar6);
        local_8 = 3;
        std::basic_string<>::append((basic_string<> *)local_2c,".",1);
        pbVar6 = local_64 + 0x18;
        if ((basic_string<> *)0xf < *(basic_string<> **)(local_64 + 0x2c)) {
          pbVar6 = *(basic_string<> **)(local_64 + 0x18);
        }
        std::basic_string<>::append
                  ((basic_string<> *)local_2c,(char *)pbVar6,
                   (uint)*(basic_string<> **)(local_64 + 0x28));
        local_54 = local_64;
        pbVar6 = local_64;
        if (0xf < *(uint *)(local_64 + 0x14)) {
          local_54 = *(basic_string<> **)local_64;
          pbVar6 = *(basic_string<> **)local_64;
        }
        pbVar10 = local_64;
        if (0xf < *(uint *)(local_64 + 0x14)) {
          pbVar10 = *(basic_string<> **)local_64;
        }
        iVar9 = 0;
        iVar7 = (int)(pbVar6 + *(uint *)(local_64 + 0x10)) - (int)pbVar10;
        if (pbVar6 + *(uint *)(local_64 + 0x10) < pbVar10) {
          iVar7 = 0;
        }
        local_50 = pbVar10;
        local_4c = (basic_string<> *)iVar7;
        if (iVar7 != 0) {
          do {
            iVar5 = tolower((int)*(char *)(pbVar10 + iVar9));
            local_54[iVar9] = SUB41(iVar5,0);
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar7);
        }
        uVar2 = local_58;
        pbVar6 = local_64;
        local_4c = *(basic_string<> **)(*(int *)(this + 0x40) + 0x74);
        pbVar10 = local_64;
        if (0xf < *(uint *)(local_64 + 0x14)) {
          pbVar10 = *(basic_string<> **)local_64;
        }
        bVar3 = std::_Traits_equal<>((char *)pbVar10,*(uint *)(local_64 + 0x10),pcVar4,unaff_EDI);
        uVar11 = local_58;
        if (bVar3) {
          local_45 = '\x01';
          if (**(int **)(local_4c + uVar2 * 4) == 0) {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_44,
                       (basic_string<> *)(*(int **)(local_4c + uVar2 * 4) + 1));
            local_8 = 4;
            local_50 = (basic_string<> *)local_44;
            if (0xf < local_30) {
              local_50 = local_44[0];
            }
            pbVar6 = (basic_string<> *)local_44;
            if (0xf < local_30) {
              pbVar6 = local_44[0];
            }
            iVar9 = (int)(local_50 + local_34) - (int)pbVar6;
            iVar7 = 0;
            if (local_50 + local_34 < pbVar6) {
              iVar9 = 0;
            }
            if (iVar9 != 0) {
              do {
                iVar5 = toupper((int)(char)pbVar6[iVar7]);
                local_50[iVar7] = SUB41(iVar5,0);
                iVar7 = iVar7 + 1;
              } while (iVar7 != iVar9);
            }
            std::basic_string<>::append((basic_string<> *)local_44,".TXT",4);
            local_a4 = std::_Func_impl_no_alloc<>::vftable;
            local_a0 = ComputerSystem::doneWithFile;
            local_4c = abStack_bc;
            local_8 = 5;
            uStack_c4 = 0x548bbe;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)abStack_bc,(basic_string<> *)local_44);
            uVar11 = local_58;
            local_8 = 6;
            std::basic_string<>::basic_string<>
                      (abStack_d4,
                       (basic_string<> *)
                       (*(int *)(*(int *)(*(int *)(this + 0x40) + 0x74) + local_58 * 4) + 0x1c));
            local_8 = 4;
            TextEngine::showDocument(*(TextEngine **)(this + 0x2c));
            local_8 = 3;
            *(undefined4 *)(*(int *)(this + 0x40) + 8) = 3;
            pbVar6 = local_64;
            if (0xf < local_30) {
              pnVar8 = (nothrow_t *)(local_30 + 1);
              pbVar6 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pbVar6 = *(basic_string<> **)(local_44[0] + -4);
                pnVar8 = (nothrow_t *)(local_30 + 0x24);
                if ((basic_string<> *)0x1f < local_44[0] + (-4 - (int)pbVar6)) {
LAB_005489f1:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pbVar6,pnVar8);
              pbVar6 = local_64;
            }
          }
          else {
            local_54 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              local_54 = local_2c[0];
            }
            pbVar6 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              pbVar6 = local_2c[0];
            }
            local_4c = local_54 + local_1c + -(int)pbVar6;
            pbVar10 = (basic_string<> *)0x0;
            if (local_54 + local_1c < pbVar6) {
              local_4c = (basic_string<> *)0x0;
            }
            if (local_4c != (basic_string<> *)0x0) {
              pbVar1 = local_54 + -(int)pbVar6;
              local_54 = pbVar1;
              do {
                iVar7 = toupper((int)(char)*pbVar6);
                pbVar10 = pbVar10 + 1;
                pbVar1[(int)pbVar6] = SUB41(iVar7,0);
                pbVar6 = pbVar6 + 1;
              } while (pbVar10 != local_4c);
            }
            local_a0 = (code *)0x548cbe;
            std::basic_string<>::assign
                      ((basic_string<> *)&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",
                       0x24);
            TextEngine::addLine(*(TextEngine **)(this + 0x2c));
            local_a0 = (code *)0x548ce8;
            std::basic_string<>::assign
                      ((basic_string<> *)&stack0xffffff6c,"`0** IMAGE FILE **",0x12);
            TextEngine::addLine(*(TextEngine **)(this + 0x2c));
            TextEngine::addLinef(this_04,*(char **)(this + 0x2c));
            TextEngine::addLinef(this_05,*(char **)(this + 0x2c));
            uVar11 = local_58;
            pbVar6 = local_64;
          }
        }
        local_8 = 1;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pbVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pbVar6 = *(basic_string<> **)(local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar6)) goto LAB_005489f1;
          }
          operator_delete(pbVar6,pnVar8);
          pbVar6 = local_64;
        }
        local_58 = uVar11 + 1;
      } while (local_58 <
               (uint)(*(int *)(*(int *)(this + 0x40) + 0x78) -
                      *(int *)(*(int *)(this + 0x40) + 0x74) >> 2));
      if (local_45 != '\0') goto LAB_00548da2;
    }
    local_a0 = (code *)0x548d9a;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff6c,"`$file not found",0x10);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  }
  else {
    local_58 = 0;
    do {
      pbVar10 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar10 = *(basic_string<> **)pbVar6;
      }
      local_50 = pbVar6;
      bVar3 = std::_Traits_equal<>((char *)pbVar10,*(uint *)(pbVar6 + 0x10),pcVar4,unaff_EDI);
      if ((bVar3) && (1 < (uint)((local_60 - (int)local_50) / 0x18))) {
        local_50 = pbVar6 + 0x18;
        if (0xf < *(uint *)(pbVar6 + 0x2c)) {
          local_50 = *(basic_string<> **)local_50;
        }
        std::transform<>();
        pbVar6 = local_64;
        local_50 = *(basic_string<> **)(local_64 + 0x28);
        bVar3 = std::_Traits_equal<>("EXE",3,pcVar4,unaff_EDI);
        if (((bVar3) && (*(char *)(*(int *)(this + 0x44) + 0x48 + local_58) != '\0')) ||
           ((bVar3 = std::_Traits_equal<>("COM",3,pcVar4,unaff_EDI), bVar3 &&
            (*(char *)(*(int *)(this + 0x44) + 0x48 + local_58) == '\0')))) {
          local_45 = '\x01';
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar6);
          local_8 = 2;
          std::basic_string<>::append((basic_string<> *)local_2c,".",1);
          pbVar6 = local_64 + 0x18;
          if (0xf < *(uint *)(local_64 + 0x2c)) {
            pbVar6 = *(basic_string<> **)(local_64 + 0x18);
          }
          std::basic_string<>::append
                    ((basic_string<> *)local_2c,(char *)pbVar6,*(uint *)(local_64 + 0x28));
          std::transform<>();
          local_a0 = (code *)0x5488cf;
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",0x24)
          ;
          TextEngine::addLine(*(TextEngine **)(this + 0x2c));
          local_a0 = (code *)0x5488f9;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff6c,"`0** BINARY FILE **",0x13)
          ;
          TextEngine::addLine(*(TextEngine **)(this + 0x2c));
          TextEngine::addLinef(this_00,*(char **)(this + 0x2c));
          this_01 = "!APPLICATION";
          if (*(char *)(*(int *)(this + 0x44) + 0x48 + local_58) == '\0') {
            this_01 = "0UTILITY";
          }
          TextEngine::addLinef((TextEngine *)this_01,*(char **)(this + 0x2c));
          TextEngine::addLinef(this_02,*(char **)(this + 0x2c));
          TextEngine::addLinef(this_03,*(char **)(this + 0x2c));
          local_8 = 1;
          pbVar6 = local_64;
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pbVar6 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pbVar6 = *(basic_string<> **)(local_2c[0] + -4);
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar6)) goto LAB_005489f1;
            }
            operator_delete(pbVar6,pnVar8);
            pbVar6 = local_64;
          }
        }
      }
      local_54 = local_54 + 1;
      local_58 = local_58 + 0x78;
    } while (local_54 < (basic_string<> *)((*(int *)(this + 0x48) - *(int *)(this + 0x44)) / 0x78));
    if (local_45 == '\0') goto LAB_00548a01;
  }
LAB_00548da2:
  std::vector<>::_Tidy((vector<> *)&local_64);
LAB_00548daa:
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Screen_PC::cmd_DEL(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_PC::cmd_DEL(Screen_PC *this,char param_1,basic_string<> *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  Screen_PC *pSVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  nothrow_t *pnVar11;
  TextEngine *pTVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  char *pcVar16;
  uint unaff_EDI;
  void *pvVar17;
  char *pcVar18;
  basic_string<> local_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_64;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  char *local_30 [3];
  char *local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  Screen_PC *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8730;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if (param_1 == '\0') {
    iVar8 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar8 == iVar8) {
      uStack_68 = 1;
      local_64 = (char *)0x0;
      uStack_6c = 0x548e79;
      cmd_DEL(this);
    }
    else {
      std::basic_string<>::basic_string<>(local_70,param_3);
      splitStringBy();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_64 = local_30[0];
      if (0xf < *(uint *)(local_30[0] + 0x14)) {
        local_64 = *(char **)local_30[0];
      }
      uStack_68 = 0x548ece;
      std::transform<>();
      local_1c = 0;
      bVar2 = false;
      iVar8 = *(int *)(local_14 + 0x48) - *(int *)(local_14 + 0x44) >> 0x1f;
      pcVar18 = local_30[0];
      if ((*(int *)(local_14 + 0x48) - *(int *)(local_14 + 0x44)) / 0x78 + iVar8 != iVar8) {
        local_18 = 0;
        do {
          pcVar10 = pcVar18;
          if (0xf < *(uint *)(pcVar18 + 0x14)) {
            pcVar10 = *(char **)pcVar18;
          }
          local_64 = (char *)0x548f29;
          bVar6 = std::_Traits_equal<>(pcVar10,*(uint *)(pcVar18 + 0x10),pcVar7,unaff_EDI);
          if (bVar6) {
            puVar14 = (uint *)(pcVar18 + 0x18);
            puVar13 = puVar14;
            local_20 = puVar14;
            if (0xf < *(uint *)(pcVar18 + 0x2c)) {
              local_20 = (uint *)*puVar14;
              puVar13 = (uint *)*puVar14;
            }
            if (0xf < *(uint *)(pcVar18 + 0x2c)) {
              puVar14 = (uint *)*puVar14;
            }
            iVar8 = ((int)puVar13 + *(int *)(pcVar18 + 0x28)) - (int)puVar14;
            iVar15 = 0;
            if ((uint *)((int)puVar13 + *(int *)(pcVar18 + 0x28)) < puVar14) {
              iVar8 = 0;
            }
            local_24 = (char *)iVar8;
            if (iVar8 != 0) {
              do {
                iVar9 = toupper((int)*(char *)(iVar15 + (int)puVar14));
                *(char *)(iVar15 + (int)local_20) = (char)iVar9;
                iVar15 = iVar15 + 1;
                pcVar18 = local_30[0];
              } while (iVar15 != iVar8);
            }
            local_24 = *(char **)(pcVar18 + 0x28);
            local_64 = (char *)0x548faf;
            bVar6 = std::_Traits_equal<>("EXE",3,pcVar7,unaff_EDI);
            if ((!bVar6) || (*(char *)(*(int *)(local_14 + 0x44) + 0x48 + local_18) == '\0')) {
              local_64 = (char *)0x548fde;
              bVar6 = std::_Traits_equal<>("COM",3,pcVar7,unaff_EDI);
              if ((!bVar6) || (*(char *)(*(int *)(local_14 + 0x44) + 0x48 + local_18) != '\0'))
              goto LAB_00549029;
            }
            bVar2 = true;
            local_70[0] = (basic_string<>)0x0;
            std::basic_string<>::assign(local_70,"`$cannot delete system file",0x1b);
            TextEngine::addLine(*(TextEngine **)(local_14 + 0x2c));
            pcVar18 = local_30[0];
          }
LAB_00549029:
          local_1c = local_1c + 1;
          local_18 = local_18 + 0x78;
        } while (local_1c < (uint)((*(int *)(local_14 + 0x48) - *(int *)(local_14 + 0x44)) / 0x78));
      }
      pcVar10 = pcVar18;
      local_20 = (uint *)pcVar18;
      if (0xf < *(uint *)(pcVar18 + 0x14)) {
        local_20 = *(uint **)pcVar18;
        pcVar10 = *(char **)pcVar18;
      }
      pcVar16 = pcVar18;
      if (0xf < *(uint *)(pcVar18 + 0x14)) {
        pcVar16 = *(char **)pcVar18;
      }
      iVar8 = (int)(pcVar10 + *(int *)(pcVar18 + 0x10)) - (int)pcVar16;
      iVar15 = 0;
      if (pcVar10 + *(int *)(pcVar18 + 0x10) < pcVar16) {
        iVar8 = 0;
      }
      local_24 = (char *)iVar8;
      if (iVar8 != 0) {
        do {
          iVar9 = tolower((int)pcVar16[iVar15]);
          *(char *)((int)local_20 + iVar15) = (char)iVar9;
          iVar15 = iVar15 + 1;
          pcVar18 = local_30[0];
        } while (iVar15 != iVar8);
      }
      puVar14 = (uint *)(pcVar18 + 0x18);
      puVar13 = puVar14;
      local_20 = puVar14;
      if (0xf < *(uint *)(pcVar18 + 0x2c)) {
        local_20 = (uint *)*puVar14;
        puVar13 = (uint *)*puVar14;
      }
      if (0xf < *(uint *)(pcVar18 + 0x2c)) {
        puVar14 = (uint *)*puVar14;
      }
      pcVar10 = (char *)(((int)puVar13 + *(int *)(pcVar18 + 0x28)) - (int)puVar14);
      pcVar16 = (char *)0x0;
      if ((uint)((int)puVar13 + *(int *)(pcVar18 + 0x28)) < puVar14) {
        pcVar10 = (char *)0x0;
      }
      local_24 = pcVar10;
      if (pcVar10 != (char *)0x0) {
        do {
          iVar8 = toupper((int)pcVar16[(int)puVar14]);
          pcVar16[(int)local_20] = (char)iVar8;
          pcVar16 = pcVar16 + 1;
          pcVar18 = local_30[0];
        } while (pcVar16 != pcVar10);
      }
      local_20 = (uint *)0x0;
      iVar8 = *(int *)(local_14 + 0x40);
      if (*(int *)(iVar8 + 0x78) - *(int *)(iVar8 + 0x74) >> 2 != 0) {
        do {
          local_1c = (int)local_20 * 4;
          pcVar10 = pcVar18;
          if (0xf < *(uint *)(pcVar18 + 0x14)) {
            pcVar10 = *(char **)pcVar18;
          }
          local_64 = (char *)0x549160;
          bVar6 = std::_Traits_equal<>(pcVar10,*(uint *)(pcVar18 + 0x10),pcVar7,unaff_EDI);
          if (bVar6) {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_48,(basic_string<> *)(pcVar18 + 0x18));
            uVar4 = local_34;
            pvVar3 = local_48[0];
            iVar15 = 0;
            do {
              pcVar18 = (&PTR_s_TXT_005e017c)[iVar15];
              local_24 = pcVar18 + 1;
              pcVar10 = pcVar18;
              do {
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              local_64 = (char *)0x5491ad;
              bVar6 = std::_Traits_equal<>(pcVar18,(int)pcVar10 - (int)local_24,pcVar7,unaff_EDI);
              if (bVar6) {
                if (uVar4 < 0x10) goto LAB_00549221;
                pnVar11 = (nothrow_t *)(uVar4 + 1);
                pvVar17 = pvVar3;
                if ((nothrow_t *)0xfff < pnVar11) {
                  pvVar17 = *(void **)((int)pvVar3 + -4);
                  pnVar11 = (nothrow_t *)(uVar4 + 0x24);
                  if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar17))) goto LAB_005492b8;
                }
                local_64 = (char *)0x54921e;
                operator_delete(pvVar17,pnVar11);
                goto LAB_00549221;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < 2);
            if (0xf < uVar4) {
              pnVar11 = (nothrow_t *)(uVar4 + 1);
              pvVar17 = pvVar3;
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar17 = *(void **)((int)pvVar3 + -4);
                pnVar11 = (nothrow_t *)(uVar4 + 0x24);
                if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar17))) {
LAB_005492b8:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              local_64 = (char *)0x5491e7;
              operator_delete(pvVar17,pnVar11);
            }
            iVar15 = 2;
LAB_00549221:
            pSVar5 = local_14;
            local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
            local_34 = 0xf;
            iVar8 = *(int *)(local_14 + 0x40);
            local_38 = 0;
            pcVar18 = local_30[0];
            if (iVar15 == **(int **)(local_1c + *(int *)(iVar8 + 0x74))) {
              local_70[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_70,"`$file is write-protected",0x19);
              pTVar12 = *(TextEngine **)(pSVar5 + 0x2c);
              goto LAB_0054928f;
            }
          }
          local_20 = (uint *)((int)local_20 + 1);
        } while (local_20 < (uint *)(*(int *)(iVar8 + 0x78) - *(int *)(iVar8 + 0x74) >> 2));
      }
      pSVar5 = local_14;
      if (!bVar2) {
        local_70[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_70,"`$file not found",0x10);
        pTVar12 = *(TextEngine **)(pSVar5 + 0x2c);
LAB_0054928f:
        TextEngine::addLine(pTVar12);
      }
      std::vector<>::_Tidy((vector<> *)local_30);
    }
  }
  else {
    local_70[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_70,"`3DEL [filename]`2: delete a file",0x21);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  }
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_PC::cmd_News(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_PC::cmd_News(Screen_PC *this,char param_1)

{
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
  if (param_1 == '\0') {
    local_20 = 0x5493d9;
    ComputerSystem::showArticles(*(ComputerSystem **)(this + 0x40));
  }
  else {
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`0NEWS.EXE`3 by Tribalt Precision",0x21);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`3Version: 2.86",0xf);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`3Usage:",8);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`0 NEWS.EXE",0xb);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  }
  local_20 = 0x5493e1;
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_PC::cmd_Email(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

void __thiscall Screen_PC::cmd_Email(Screen_PC *this,char param_1)

{
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
  if (param_1 == '\0') {
    local_20 = 0x5494e9;
    ComputerSystem::showEmails(*(ComputerSystem **)(this + 0x40));
  }
  else {
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`0MAIL.EXE`3 by Tribalt Precision",0x21);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`3Version: 3.02",0xf);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`3Usage:",8);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
    local_24 = 0;
    local_20 = 0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"`0 MAIL.EXE",0xb);
    TextEngine::addLine(*(TextEngine **)(this + 0x2c));
  }
  local_20 = 0x5494f1;
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall Screen_PC::getCurrentBootString(void)

basic_string<> * __thiscall Screen_PC::getCurrentBootString(Screen_PC *this)

{
  basic_string<> *in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  std::basic_string<>::assign(in_stack_00000004,"booting",7);
  return in_stack_00000004;
}
