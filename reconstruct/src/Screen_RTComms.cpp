// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Screen_RTComms::configure(Screen_RTComms *this)
void Screen_RTComms::configure()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffe18[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c8899;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x14) = 0x35;
  *(undefined4 *)((char *)this + 0x18) = 0x1e;
  new ((void *)(local_1b4)) Widget();
  // [seh] local_8 = 0;
  local_1a4 = *(undefined4 *)((char *)this + 0x14);
  local_1a0 = *(undefined4 *)((char *)this + 0x18);
  pTVar2 = operator_new(0x15c00);
  // [seh] local_8._0_1_ = 1;
  local_1b8 = (AnimationFrames *)pTVar2;
  ghidra::str::assign((std::string *)&stack0xfffffe18,"",0);
  uStack_1fc = *(undefined4 *)((char *)this + 0xc);
  pWStack_1f8 = local_1b4;
  pTVar2 = (TextField *)new ((void *)(pTVar2)) TextField();
  // [seh] local_8._0_1_ = 0;
  *(TextField **)((char *)this + 0x1c) = pTVar2;
  (pTVar2)->update();
  (**(code **)(**(int **)((char *)this + 0x1c) + 0x2c))();
  // [seh] local_8._0_1_ = 2;
  (**(code **)(**(int **)((char *)this + 0x1c) + 0xa0))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)((char *)this + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)((char *)this + 0x1c));
  iVar7 = *(int *)((char *)this + 0xc);
  local_1b8 = *(AnimationFrames **)((char *)this + 0x1c);
  ppAVar1 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(iVar7 + 400),ppAVar1,(AnimationFrames **)&local_1b8);
  }
  else {
    *ppAVar1 = local_1b8;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  this_00 = operator_new(0x150);
  // [seh] local_8._0_1_ = 3;
  pWStack_1f8 = (Widget *)0x54a0a0;
  uVar3 = TextEngine::TextEngine
                    (this_00,*(TextField **)((char *)this + 0x1c),(int)((char *)this + 0x24),*(int *)((char *)this + 0x14),
                     *(int *)((char *)this + 0x18),(ghidra::vector *)((char *)this + 0x24));
  pCVar4 = ghidra::Singleton<void>::instance;
  // [seh] local_8._0_1_ = 0;
  *(undefined4 *)((char *)this + 0x20) = uVar3;
  if (pCVar4 == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    ghidra::Singleton<void>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (byte)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
    uVar3 = *(undefined4 *)((char *)this + 0x20);
  }
  *(undefined4 *)(pCVar4 + 0x10) = uVar3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"`%RTCOMMS v1.10",0xf);
  // [seh] local_8._0_1_ = 4;
  iVar7 = *(int *)(pCVar4 + 4) - local_1c;
  if (0 < iVar7) {
    do {
      ghidra::str::append((std::string *)local_2c," ",1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1b8 + 1),'\0','\0',0xff);
  ghidra::str::ctor((std::string *)&uStack_1fc,(std::string *)local_2c);
  (*(TextEngine **)(pCVar4 + 0x10))->setBottomText();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
  pCVar4 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    ghidra::Singleton<void>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (byte)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
  }
  *(undefined4 *)(pCVar4 + 4) = *(undefined4 *)((char *)this + 0x14);
  *(undefined4 *)(pCVar4 + 8) = *(undefined4 *)((char *)this + 0x18);
  pCVar4[0xc] = (byte)0x1;
  (local_1b4)->~Widget();
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_RTComms::update(Screen_RTComms *this,float param_1)
void Screen_RTComms::update(float param_1)

{
  TextEngine *this_00;
  undefined4 *puVar1;
  char cVar2;
  CommsManager *pCVar3;
  std::string *extraout_ECX;
  std::string *pbVar4;
  ghidra::lib::allocator_t *unaff_ESI;
  std::string *unaff_EDI;
  char *pcVar5;
  uint uVar6;
  std::string abStack_2c [16];
  undefined4 uStack_1c;
  
  pbVar4 = (std::string *)0x0;
  if (*(int **)(*(int *)((char *)this + 0xc) + 0x188) != (int *)0x0) {
    uStack_1c = 0x54a25f;
    cVar2 = (**(code **)(**(int **)(*(int *)((char *)this + 0xc) + 0x188) + 0x10))();
    pbVar4 = extraout_ECX;
    if (cVar2 != '\0') {
      pCVar3 = ghidra::any_singleton();
      if (pCVar3[0xc] != (byte)0x0) {
        pCVar3 = ghidra::any_singleton();
        pCVar3[0xc] = (byte)0x0;
        (**(code **)(*(int *)this + 0xc))();
      }
      if (*(int *)((char *)this + 0xc) == 0) {
        return;
      }
      *(undefined1 *)(*(int *)((char *)this + 0xc) + 0x70) = 1;
      return;
    }
  }
  this_00 = *(TextEngine **)((char *)this + 0x20);
  puVar1 = *(undefined4 **)(this_00 + 8);
  uStack_1c = 0x54a2a7;
  ghidra::lib::_Destroy_range___x28_x29(pbVar4,unaff_EDI,unaff_ESI);
  puVar1[1] = *puVar1;
  (this_00)->render();
  if (*(int **)(*(int *)((char *)this + 0xc) + 0x188) == (int *)0x0) {
    uVar6 = 0x1e;
    pcVar5 = "`@Error #74: `$no comms module";
  }
  else {
    cVar2 = (**(code **)(**(int **)(*(int *)((char *)this + 0xc) + 0x188) + 0x14))();
    uVar6 = 0x2a;
    if (cVar2 == '\0') {
      pcVar5 = "`@Error #81: `$comms module non-functional";
    }
    else {
      pcVar5 = "`@Error #78: `$comms module is `@destroyed";
    }
  }
  uStack_1c = 0;
  abStack_2c[0] = (std::string)0x0;
  ghidra::str::assign(abStack_2c,pcVar5,uVar6);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  (*(TextEngine **)((char *)this + 0x20))->render();
  return;
}


// Ghidra: bool __thiscall Screen_RTComms::onKeyPressed(Screen_RTComms *this,KeyCode param_1,Event *param_2)
bool Screen_RTComms::onKeyPressed(KeyCode param_1, Event * param_2)

{
  return true;
}


// Ghidra: bool __thiscall Screen_RTComms::onKeyReleased(Screen_RTComms *this,KeyCode param_1,Event *param_2)
bool Screen_RTComms::onKeyReleased(KeyCode param_1, Event * param_2)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  CommsManager *pCVar1;
  
  pCVar1 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (CommsManager *)0x0) {
    pCVar1 = operator_new(0x20);
    ghidra::Singleton<void>::instance = pCVar1;
    *(undefined ***)pCVar1 = CommsManager::vftable;
    *(undefined4 *)(pCVar1 + 4) = 0x50;
    *(undefined4 *)(pCVar1 + 8) = 0x28;
    pCVar1[0xc] = (byte)0x0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    this_ = (Screen_RTComms *)pCVar1;
  }
  (*(code *)**(undefined4 **)pCVar1)(param_1,this_);
  return true;
}


// Ghidra: void __thiscall Screen_RTComms::render(Screen_RTComms *this)
void Screen_RTComms::render()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  TextEngine *pTVar1;
  undefined4 *puVar2;
  std::string *pbVar3;
  CommsManager *pCVar4;
  std::string *extraout_ECX;
  int iVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  ghidra::lib::allocator_t *unaff_EDI;
  std::string abStack_58 [12];
  undefined4 uStack_4c;
  void *local_30 [5];
  uint local_1c;
  CommsManager *local_18;
  Screen_RTComms *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3af8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pCVar4 = ghidra::Singleton<void>::instance;
  local_14 = this_;
  if (ghidra::Singleton<void>::instance == (CommsManager *)0x0) {
    pCVar4 = operator_new(0x20);
    ghidra::Singleton<void>::instance = pCVar4;
    *(undefined ***)pCVar4 = CommsManager::vftable;
    *(undefined4 *)(pCVar4 + 4) = 0x50;
    *(undefined4 *)(pCVar4 + 8) = 0x28;
    pCVar4[0xc] = (byte)0x0;
    *(undefined4 *)(pCVar4 + 0x14) = 0;
    *(undefined4 *)(pCVar4 + 0x18) = 0;
    *(undefined4 *)(pCVar4 + 0x1c) = 0;
    this_ = (Screen_RTComms *)extraout_ECX;
    local_18 = pCVar4;
  }
  pTVar1 = *(TextEngine **)(pCVar4 + 0x10);
  puVar2 = *(undefined4 **)(pTVar1 + 8);
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this_,pbVar3,unaff_EDI);
  puVar2[1] = *puVar2;
  (pTVar1)->render();
  uVar8 = 0;
  iVar5 = *(int *)(pCVar4 + 0x14);
  if (*(int *)(pCVar4 + 0x18) - iVar5 >> 2 != 0) {
    do {
      ghidra::str::ctor
                ((std::string *)local_30,(std::string *)(*(int *)(iVar5 + uVar8 * 4) + 0x1c));
      pTVar1 = *(TextEngine **)(pCVar4 + 0x10);
      // [seh] local_8 = 0;
      ghidra::str::ctor(abStack_58,(std::string *)local_30);
      (pTVar1)->addLineWithWrap(*(undefined4 *)(pTVar1 + 0x20));
      // [seh] local_8 = 0xffffffff;
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
  (*(TextEngine **)(local_14 + 0x20))->render();
  // [seh] ExceptionList = local_10;
  return;
}
