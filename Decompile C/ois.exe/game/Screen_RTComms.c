#include "../ois.exe.h"


// public: virtual void * __thiscall Screen_RTComms::`scalar deleting destructor'(unsigned int)

void * __thiscall Screen_RTComms::_scalar_deleting_destructor_(Screen_RTComms *this,uint param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(Ref **)(this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x24));
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000030);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall Screen_RTComms::configure(void)

void __thiscall Screen_RTComms::configure(Screen_RTComms *this)

{
  AnimationFrames **ppAVar1;
  TextField *pTVar2;
  TextEngine *this_00;
  undefined4 uVar3;
  CommsManager *pCVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  int iVar7;
  undefined4 uStack_1fc;
  Widget *pWStack_1f8;
  undefined4 local_1b8;
  Widget local_1b4 [16];
  undefined4 local_1a4;
  undefined4 local_1a0;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8899;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x14) = 0x35;
  *(undefined4 *)(this + 0x18) = 0x1e;
  Widget::Widget(local_1b4);
  local_8 = 0;
  local_1a4 = *(undefined4 *)(this + 0x14);
  local_1a0 = *(undefined4 *)(this + 0x18);
  pTVar2 = operator_new(0x15c00);
  local_8._0_1_ = 1;
  local_1b8 = (AnimationFrames *)pTVar2;
  std::basic_string<>::assign((basic_string<> *)&stack0xfffffe18,"",0);
  uStack_1fc = *(undefined4 *)(this + 0xc);
  pWStack_1f8 = local_1b4;
  pTVar2 = (TextField *)TextField::TextField(pTVar2);
  local_8._0_1_ = 0;
  *(TextField **)(this + 0x1c) = pTVar2;
  TextField::update(pTVar2);
  (**(code **)(**(int **)(this + 0x1c) + 0x2c))();
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(this + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(this + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(this + 0x1c));
  iVar7 = *(int *)(this + 0xc);
  local_1b8 = *(AnimationFrames **)(this + 0x1c);
  ppAVar1 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar7 + 400),ppAVar1,(AnimationFrames **)&local_1b8);
  }
  else {
    *ppAVar1 = local_1b8;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  this_00 = operator_new(0x150);
  local_8._0_1_ = 3;
  pWStack_1f8 = (Widget *)0x54a0a0;
  uVar3 = TextEngine::TextEngine
                    (this_00,*(TextField **)(this + 0x1c),(int)(this + 0x24),*(int *)(this + 0x14),
                     *(int *)(this + 0x18),(vector<> *)(this + 0x24));
  pCVar4 = Singleton<>::instance;
  local_8._0_1_ = 0;
  *(undefined4 *)(this + 0x20) = uVar3;
  if (pCVar4 == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    Singleton<>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (CommsManager)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
    uVar3 = *(undefined4 *)(this + 0x20);
  }
  *(undefined4 *)(pCVar4 + 0x10) = uVar3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"`%RTCOMMS v1.10",0xf);
  local_8._0_1_ = 4;
  iVar7 = *(int *)(pCVar4 + 4) - local_1c;
  if (0 < iVar7) {
    do {
      std::basic_string<>::append((basic_string<> *)local_2c," ",1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1b8 + 1),'\0','\0',0xff);
  std::basic_string<>::basic_string<>((basic_string<> *)&uStack_1fc,(basic_string<> *)local_2c);
  TextEngine::setBottomText(*(TextEngine **)(pCVar4 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pnVar6 = (nothrow_t *)(local_18 + 1);
    pvVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      pnVar6 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  pCVar4 = Singleton<>::instance;
  if (Singleton<>::instance == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    Singleton<>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (CommsManager)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
  }
  *(undefined4 *)(pCVar4 + 4) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(pCVar4 + 8) = *(undefined4 *)(this + 0x18);
  pCVar4[0xc] = (CommsManager)0x1;
  Widget::~Widget(local_1b4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall Screen_RTComms::update(float)

void __thiscall Screen_RTComms::update(Screen_RTComms *this,float param_1)

{
  TextEngine *this_00;
  undefined4 *puVar1;
  char cVar2;
  CommsManager *pCVar3;
  basic_string<> *extraout_ECX;
  basic_string<> *pbVar4;
  allocator<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  char *pcVar5;
  uint uVar6;
  basic_string<> abStack_2c [16];
  undefined4 uStack_1c;
  
  pbVar4 = (basic_string<> *)0x0;
  if (*(int **)(*(int *)(this + 0xc) + 0x188) != (int *)0x0) {
    uStack_1c = 0x54a25f;
    cVar2 = (**(code **)(**(int **)(*(int *)(this + 0xc) + 0x188) + 0x10))();
    pbVar4 = extraout_ECX;
    if (cVar2 != '\0') {
      pCVar3 = Singleton<>::getInstance();
      if (pCVar3[0xc] != (CommsManager)0x0) {
        pCVar3 = Singleton<>::getInstance();
        pCVar3[0xc] = (CommsManager)0x0;
        (**(code **)(*(int *)this + 0xc))();
      }
      if (*(int *)(this + 0xc) == 0) {
        return;
      }
      *(undefined1 *)(*(int *)(this + 0xc) + 0x70) = 1;
      return;
    }
  }
  this_00 = *(TextEngine **)(this + 0x20);
  puVar1 = *(undefined4 **)(this_00 + 8);
  uStack_1c = 0x54a2a7;
  std::_Destroy_range<>(pbVar4,unaff_EDI,unaff_ESI);
  puVar1[1] = *puVar1;
  TextEngine::render(this_00);
  if (*(int **)(*(int *)(this + 0xc) + 0x188) == (int *)0x0) {
    uVar6 = 0x1e;
    pcVar5 = "`@Error #74: `$no comms module";
  }
  else {
    cVar2 = (**(code **)(**(int **)(*(int *)(this + 0xc) + 0x188) + 0x14))();
    uVar6 = 0x2a;
    if (cVar2 == '\0') {
      pcVar5 = "`@Error #81: `$comms module non-functional";
    }
    else {
      pcVar5 = "`@Error #78: `$comms module is `@destroyed";
    }
  }
  uStack_1c = 0;
  abStack_2c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(abStack_2c,pcVar5,uVar6);
  TextEngine::addLine(*(TextEngine **)(this + 0x20));
  TextEngine::render(*(TextEngine **)(this + 0x20));
  return;
}


// public: virtual bool __thiscall Screen_RTComms::onKeyPressed(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_RTComms::onKeyPressed(Screen_RTComms *this,KeyCode param_1,Event *param_2)

{
  return true;
}


// public: virtual bool __thiscall Screen_RTComms::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_RTComms::onKeyReleased(Screen_RTComms *this,KeyCode param_1,Event *param_2)

{
  CommsManager *pCVar1;
  
  pCVar1 = Singleton<>::instance;
  if (Singleton<>::instance == (CommsManager *)0x0) {
    pCVar1 = operator_new(0x20);
    Singleton<>::instance = pCVar1;
    *(undefined ***)pCVar1 = CommsManager::vftable;
    *(undefined4 *)(pCVar1 + 4) = 0x50;
    *(undefined4 *)(pCVar1 + 8) = 0x28;
    pCVar1[0xc] = (CommsManager)0x0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    this = (Screen_RTComms *)pCVar1;
  }
  (*(code *)**(undefined4 **)pCVar1)(param_1,this);
  return true;
}


// public: virtual void __thiscall Screen_RTComms::render(void)

void __thiscall Screen_RTComms::render(Screen_RTComms *this)

{
  TextEngine *pTVar1;
  undefined4 *puVar2;
  basic_string<> *pbVar3;
  CommsManager *pCVar4;
  basic_string<> *extraout_ECX;
  int iVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  allocator<> *unaff_EDI;
  basic_string<> abStack_58 [12];
  undefined4 uStack_4c;
  void *local_30 [5];
  uint local_1c;
  CommsManager *local_18;
  Screen_RTComms *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3af8;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pCVar4 = Singleton<>::instance;
  local_14 = this;
  if (Singleton<>::instance == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    Singleton<>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (CommsManager)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
    this = (Screen_RTComms *)extraout_ECX;
    local_18 = pCVar4;
  }
  pTVar1 = *(TextEngine **)(pCVar4 + 0x10);
  puVar2 = *(undefined4 **)(pTVar1 + 8);
  std::_Destroy_range<>((basic_string<> *)this,pbVar3,unaff_EDI);
  puVar2[1] = *puVar2;
  TextEngine::render(pTVar1);
  uVar8 = 0;
  iVar5 = *(int *)(pCVar4 + 0x14);
  if (*(int *)(pCVar4 + 0x18) - iVar5 >> 2 != 0) {
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_30,(basic_string<> *)(*(int *)(iVar5 + uVar8 * 4) + 0x1c));
      pTVar1 = *(TextEngine **)(pCVar4 + 0x10);
      local_8 = 0;
      std::basic_string<>::basic_string<>(abStack_58,(basic_string<> *)local_30);
      TextEngine::addLineWithWrap(pTVar1,*(undefined4 *)(pTVar1 + 0x20));
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar7 = (nothrow_t *)(local_1c + 1);
        pvVar6 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_30[0] + -4);
          pnVar7 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_4c = 0x54a4a5;
        operator_delete(pvVar6,pnVar7);
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)(pCVar4 + 0x14);
    } while (uVar8 < (uint)(*(int *)(pCVar4 + 0x18) - iVar5 >> 2));
  }
  TextEngine::render(*(TextEngine **)(local_14 + 0x20));
  ExceptionList = local_10;
  return;
}
