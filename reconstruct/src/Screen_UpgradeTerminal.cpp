// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Screen_UpgradeTerminal::cleanup(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::cleanup()

{
  TerminalEngine *this_00;
  
  if (*(int **)((char *)this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x1c) + 0x290))();
    if (*(int **)((char *)this + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)((char *)this + 0x1c) + 0x138))(1);
      *(undefined4 *)((char *)this + 0x1c) = 0;
    }
  }
  this_00 = *(TerminalEngine **)((char *)this + 0x24);
  if (this_00 != (TerminalEngine *)0x0) {
    TerminalEngine::_scalar_deleting_destructor_(this_00,(uint)this_00);
    *(undefined4 *)((char *)this + 0x24) = 0;
  }
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::configure(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::configure()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffdec[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  TextField *pTVar2;
  int iVar3;
  undefined4 uVar4;
  allocator<Command> *paVar5;
  Command *pCVar6;
  Command *pCVar7;
  std::string abStack_24c [16];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  Screen_UpgradeTerminal *pSStack_228;
  code *local_1ec;
  code *local_1e8;
  TerminalEngine *local_1e4;
  TextField *local_1e0;
  Widget local_1dc [16];
  undefined4 local_1cc;
  undefined4 local_1c8;
  UpgradeCommand local_54 [64];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c8b9f;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x14) = 0x2a;
  *(undefined4 *)((char *)this + 0x18) = 0x18;
  new ((void *)(local_1dc)) Widget();
  // [seh] local_8 = 0;
  local_1cc = *(undefined4 *)((char *)this + 0x14);
  local_1c8 = *(undefined4 *)((char *)this + 0x18);
  pTVar2 = operator_new(0x15c00);
  // [seh] local_8._0_1_ = 1;
  local_1e0 = pTVar2;
  ghidra::str::assign((std::string *)&stack0xfffffdec,"",0);
  pSStack_228 = *(Screen_UpgradeTerminal **)((char *)this + 0xc);
  uStack_22c = 0x54fda6;
  pTVar2 = (TextField *)new ((void *)(pTVar2)) TextField();
  // [seh] local_8._0_1_ = 0;
  *(TextField **)((char *)this + 0x1c) = pTVar2;
  (pTVar2)->update();
  (**(code **)(**(int **)((char *)this + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (TerminalEngine *)0x3f000000;
  // [seh] local_8._0_1_ = 2;
  (**(code **)(**(int **)((char *)this + 0x1c) + 0xa0))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  pCVar6 = (Command *)(float)(*(int *)(*(int *)((char *)this + 0xc) + 0x6c) / 2 + 6);
  pCVar7 = (Command *)(float)(*(int *)(*(int *)((char *)this + 0xc) + 0x68) / 2);
  (**(code **)(**(int **)((char *)this + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)((char *)this + 0x1c));
  iVar3 = (**(code **)(**(int **)((char *)this + 0x1c) + 0xb0))();
  local_1e0 = *(TextField **)(iVar3 + 4);
  (**(code **)(**(int **)((char *)this + 0x1c) + 0xb0))();
  pSStack_228 = (Screen_UpgradeTerminal *)0x54fe87;
  debugPrint("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)((char *)this + 0xc);
  local_1e0 = *(TextField **)((char *)this + 0x1c);
  ppAVar1 = *(AnimationFrames ***)(iVar3 + 0x194);
  if (*(AnimationFrames ***)(iVar3 + 0x198) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(iVar3 + 400),ppAVar1,(AnimationFrames **)&local_1e0);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = operator_new(0xa8);
  iVar3 = new ((void *)(local_1e4)) TerminalEngine();
  *(int *)((char *)this + 0x24) = iVar3;
  local_1ec = executeCommand;
  local_1e4 = (TerminalEngine *)this;
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(iVar3 + 0x18),(ghidra::lib::_Binder_t *)&local_1ec);
  local_1e8 = updateScreenCall;
  local_1e4 = (TerminalEngine *)this;
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(*(int *)((char *)this + 0x24) + 0x68),(ghidra::lib::_Binder_t *)&local_1e8)
  ;
  *(undefined1 *)(*(int *)((char *)this + 0x24) + 0xd) = 1;
  local_1e4 = operator_new(0x150);
  // [seh] local_8._0_1_ = 3;
  uVar4 = TextEngine::TextEngine
                    ((TextEngine *)local_1e4,*(TextField **)((char *)this + 0x1c),(int)((char *)this + 0x34),
                     *(int *)((char *)this + 0x14),*(int *)((char *)this + 0x18),(ghidra::vector *)((char *)this + 0x34));
  // [seh] local_8._0_1_ = 0;
  *(undefined4 *)((char *)this + 0x20) = uVar4;
  renderWelcomeMessage(this);
  renderBottomLine(this);
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_List;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 4;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"LIST",4);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,5);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Sell;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 6;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"SELL",4);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,7);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Buy;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 8;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"BUY",3);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,9);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Components;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"COMPONENTS",10);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Modules;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0xc;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"MODULES",7);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xd);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Confirm;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0xe;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"CONFIRM",7);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xf);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Cancel;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0x10;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"CANCEL",6);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x11);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Info;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0x12;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"INFO",4);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x13);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Repair;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0x14;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"REPAIR",6);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x15);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Pods;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0x16;
  uStack_23c = 0;
  uStack_238 = 0xf;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"PODS",4);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x17);
  if (*(WeaponCommand **)((char *)this + 0x30) == *(WeaponCommand **)((char *)this + 0x2c)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x28),*(WeaponCommand **)((char *)this + 0x2c),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)this + 0x2c) + 0x40;
  }
  // [seh] local_8 = local_8 & 0xffffff00;
  ((Command *)local_54)->~Command();
  renderBottomLine(this);
  (*(TextEngine **)((char *)this + 0x20))->render();
  (local_1dc)->~Widget();
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::executeCommand(Screen_UpgradeTerminal *this,char *param_2)
void Screen_UpgradeTerminal::executeCommand(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  int iVar2;
  int iVar3;
  Screen_UpgradeTerminal *pSVar4;
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
  std::string abStack_7c [8];
  undefined4 uStack_74;
  void *local_50 [3];
  ghidra::vector local_44 [4];
  undefined4 local_40;
  uint local_3c;
  int local_38;
  Screen_UpgradeTerminal *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c7730;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_34 = this;
  local_14 = pcVar6;
  ghidra::str::ctor((std::string *)local_2c,(std::string *)&param_2);
  // [seh] local_8._0_1_ = 2;
  uVar14 = 0;
  iVar13 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar13 != iVar13) {
    iVar13 = 0;
    do {
      ghidra::str::append((std::string *)local_2c," ",1);
      pcVar7 = in_stack_0000001c + iVar13;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      ghidra::str::append((std::string *)local_2c,pcVar8,*(uint *)(pcVar7 + 0x10));
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x18;
    } while (uVar14 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_50,"",0);
  pTVar9 = *(TextEngine **)((char *)this + 0x20);
  // [seh] local_8._0_1_ = 3;
  ghidra::str::ctor(abStack_7c,(std::string *)local_50);
  (pTVar9)->addLineWithWrap(*(undefined4 *)(pTVar9 + 0x20));
  // [seh] local_8._0_1_ = 2;
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
  uStack_74 = 0x550690;
  (pTVar9)->addLinef(*(char **)((char *)this + 0x20));
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_50,"",0);
  pTVar9 = *(TextEngine **)((char *)this + 0x20);
  // [seh] local_8._0_1_ = 4;
  ghidra::str::ctor(abStack_7c,(std::string *)local_50);
  (pTVar9)->addLineWithWrap(*(undefined4 *)(pTVar9 + 0x20));
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
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
  iVar13 = *(int *)((char *)this + 0x2c);
  local_38 = *(int *)(local_34 + 0x28);
  if (iVar13 - local_38 >> 6 != 0) {
    do {
      pcVar8 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar8 = param_2;
      }
      bVar5 = ghidra::lib::_Traits_equal___x28_x29(pcVar8,in_stack_00000014,pcVar6,unaff_EDI);
      if (bVar5) {
        ghidra::lib::vector__vector(local_44,(ghidra::vector *)&stack0x0000001c);
        local_30 = 0;
        // [seh] local_8 = CONCAT31(local_8._1_3_,5);
        piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x28) + 0x3c);
        if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar1 + 8))();
        ghidra::lib::vector___Tidy(local_44);
        goto LAB_005508aa;
      }
      uVar14 = uVar14 + 1;
      iVar13 = *(int *)(local_34 + 0x2c);
    } while (uVar14 < (uint)(iVar13 - local_38 >> 6));
  }
  pSVar4 = local_34;
  bVar5 = ghidra::lib::_Traits_equal___x28_x29("HELP",4,pcVar6,unaff_EDI);
  iVar3 = local_38;
  if (bVar5) {
    iVar2 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar2 == iVar2) {
      showCommandList(pSVar4);
      pTVar9 = *(TextEngine **)(local_34 + 0x20);
    }
    else {
      uVar14 = 0;
      if (iVar13 - local_38 >> 6 == 0) goto LAB_0055096b;
      uVar12 = *(uint *)(in_stack_0000001c + 0x10);
      do {
        pcVar8 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pcVar8 = *(char **)in_stack_0000001c;
        }
        bVar5 = ghidra::lib::_Traits_equal___x28_x29(pcVar8,uVar12,pcVar6,unaff_EDI);
        if (bVar5) {
          ghidra::lib::vector__vector(local_44,(ghidra::vector *)&stack0x0000001c);
          pSVar4 = local_34;
          local_30 = 1;
          // [seh] local_8._0_1_ = 6;
          piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x28) + 0x3c);
          if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar1 + 8))();
          // [seh] local_8 = CONCAT31(local_8._1_3_,2);
          ghidra::lib::vector___Tidy(local_44);
          pTVar9 = *(TextEngine **)(pSVar4 + 0x20);
          goto LAB_005508a5;
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
    ghidra::str::assign((std::string *)local_50,"Unknown command.",0x10);
    pTVar9 = *(TextEngine **)(pSVar4 + 0x20);
    // [seh] local_8._0_1_ = 7;
    ghidra::str::ctor(abStack_7c,(std::string *)local_50);
    (pTVar9)->addLineWithWrap(*(undefined4 *)(pTVar9 + 0x20));
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
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
LAB_0055096b:
    pTVar9 = *(TextEngine **)(local_34 + 0x20);
  }
LAB_005508a5:
  (pTVar9)->render();
LAB_005508aa:
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_005508dc;
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
LAB_005508dc:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar6,pnVar11);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x0000001c);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::renderWelcomeMessage(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::renderWelcomeMessage()

{
  int iVar1;
  std::string local_30 [8];
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    uStack_28 = 0x550a4a;
    ((TextEngine *)this)->addLinef(*(char **)((char *)this + 0x20));
    local_30[0] = (std::string)0x0;
    ghidra::str::assign(local_30," `!** Ship Mechanic Terminal",0x1c);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    (*(TextEngine **)((char *)this + 0x20))->addBlankLine();
    ghidra::str::ctor(local_30,(std::string *)(*(int *)(iVar1 + 0x398) + 0x18))
    ;
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    (*(TextEngine **)((char *)this + 0x20))->addBlankLine();
  }
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::updateScreenCall(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::updateScreenCall()

{
  renderBottomLine(this);
  (*(TextEngine **)((char *)this + 0x20))->render();
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::renderBottomLine(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::renderBottomLine()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7770;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  strUsingArgs((char *)local_44);
  // [seh] local_8 = 0;
  strUsingArgs((char *)local_2c);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)((char *)this + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      ghidra::str::append((std::string *)local_44," ",1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppcVar1 = local_2c;
  if (0xf < local_18) {
    ppppcVar1 = (char ****)local_2c[0];
  }
  ghidra::str::append((std::string *)local_44,(char *)ppppcVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  ghidra::str::ctor((std::string *)&stack0xffffff8c,(std::string *)local_44)
  ;
  (*(TextEngine **)((char *)this + 0x20))->setBottomText();
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::showCommandList(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::showCommandList()

{
  TextEngine *pTVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  std::string local_58 [8];
  undefined4 uStack_50;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c77b0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"",0);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"`%Upgrade Terminal 1.9.1",0x18);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"`7(c) by Purchase Tech",0x16);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"`0Valid commands:",0x11);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  local_14 = 0;
  if (*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) >> 6 != 0) {
    do {
      uStack_50 = 0x550d5b;
      strUsingArgs((char *)local_30);
      pTVar1 = *(TextEngine **)((char *)this + 0x20);
      // [seh] local_8 = 0;
      ghidra::str::ctor(local_58,(std::string *)local_30);
      (pTVar1)->addLineWithWrap(*(undefined4 *)(pTVar1 + 0x20));
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar3 = (nothrow_t *)(local_1c + 1);
        pvVar2 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar3) {
          pvVar2 = *(void **)((int)local_30[0] + -4);
          pnVar3 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_00550e3e;
        }
        operator_delete(pvVar2,pnVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((char *)this + 0x2c) - *(int *)((char *)this + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_30,"`3HELP",6);
  pTVar1 = *(TextEngine **)((char *)this + 0x20);
  // [seh] local_8 = 1;
  ghidra::str::ctor(local_58,(std::string *)local_30);
  (pTVar1)->addLineWithWrap(*(undefined4 *)(pTVar1 + 0x20));
  if (0xf < local_1c) {
    pnVar3 = (nothrow_t *)(local_1c + 1);
    pvVar2 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_30[0] + -4);
      pnVar3 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) {
LAB_00550e3e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::reset(Screen_UpgradeTerminal *this)
void Screen_UpgradeTerminal::reset()

{
  TextEngine *this_00;
  undefined4 *puVar1;
  ghidra::lib::allocator_t *unaff_ESI;
  std::string *unaff_EDI;
  
  this_00 = *(TextEngine **)((char *)this + 0x20);
  puVar1 = *(undefined4 **)(this_00 + 8);
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this,unaff_EDI,unaff_ESI);
  puVar1[1] = *puVar1;
  (this_00)->render();
  renderWelcomeMessage(this);
  renderBottomLine(this);
  (*(TextEngine **)((char *)this + 0x20))->render();
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::describeModule(Screen_UpgradeTerminal *this,ModuleSaleInstance *param_1)
void Screen_UpgradeTerminal::describeModule(ModuleSaleInstance * param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  TextEngine *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *pTVar5;
  TextEngine *this_03;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *this_04;
  TextEngine *extraout_ECX_01;
  TextEngine *extraout_ECX_02;
  TextEngine *this_05;
  TextEngine *extraout_ECX_03;
  TextEngine *extraout_ECX_04;
  TextEngine *extraout_ECX_05;
  TextEngine *extraout_ECX_06;
  TextEngine *this_06;
  TextEngine *extraout_ECX_07;
  TextEngine *this_07;
  TextEngine *extraout_ECX_08;
  TextEngine *this_08;
  TextEngine *extraout_ECX_09;
  TextEngine *extraout_ECX_10;
  TextEngine *this_09;
  TextEngine *this_10;
  double dVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  puVar2 = (undefined4 *)(*(int *)(*(int *)param_1 + 8) + 8);
  if (0xf < *(uint *)(*(int *)(*(int *)param_1 + 8) + 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  ((TextEngine *)this)->addLinef(*(char **)((char *)this + 0x20), "`3Module   : `0%s", puVar2);
  puVar2 = (undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0x38);
  if (0xf < *(uint *)(*(int *)(*(int *)param_1 + 8) + 0x4c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  (this_00)->addLinef(*(char **)((char *)this + 0x20), "`3Manufact.: `!%s", puVar2);
  TextEngine::addLinef
            (this_01,*(char **)((char *)this + 0x20),"`3Type     : `7%s",
             (&PTR_s_Unknown_005e1ff8)[*(int *)(*(int *)(*(int *)param_1 + 8) + 4)]);
  TextEngine::addLinef
            (this_02,*(char **)((char *)this + 0x20),"`3Cost     : `$%dc",*(undefined4 *)(param_1 + 4));
  iVar4 = *(int *)*(ComponentInterfaceInstance **)(*(int *)param_1 + 0xc);
  iVar3 = ComponentInterfaceInstance::getComponentCount
                    (*(ComponentInterfaceInstance **)(*(int *)param_1 + 0xc));
  pTVar5 = (TextEngine *)(*(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0x50) >> 2);
  (pTVar5)->addLinef(*(char **)((char *)this + 0x20), "`3Comp. Ct.: `7%d`8/`7%d", iVar3, pTVar5);
  (*(TextEngine **)((char *)this + 0x20))->addBlankLine();
  pTVar5 = *(TextEngine **)(*(int *)param_1 + 8);
  switch(*(undefined4 *)(pTVar5 + 4)) {
  case 1:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Boot Time: `#%ds",*(undefined4 *)(pTVar5 + 0x8c));
    dVar6 = (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 200);
    pcVar7 = "`3Pwr Gen. : `$%.0f";
    pTVar5 = extraout_ECX_02;
    goto LAB_00550f95;
  case 2:
    dVar6 = (double)*(float *)(pTVar5 + 0xc4);
    pcVar7 = "`3Pwr Strge: `$%.0f";
    goto LAB_00550f95;
  case 3:
    dVar6 = (double)*(float *)(pTVar5 + 0x108);
    pcVar7 = "`3Plot Time: `!%.0fs";
    break;
  case 4:
    iVar4 = (int)(*(float *)(pTVar5 + 0xe4) * 100.0 - 100.0);
    pTVar5 = (TextEngine *)((uint)(iVar4 < 100) * 2 + 0x2b);
    (pTVar5)->addLinef(*(char **)((char *)this + 0x20), "`3Sensitv. : `!%c%d%%", pTVar5, iVar4);
    pTVar5 = *(TextEngine **)(*(int *)param_1 + 8);
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Analysis : `!~%ds",
               ((*(int *)(pTVar5 + 0xf8) + 1) / 2) * *(int *)(pTVar5 + 0xf4) +
               *(int *)(pTVar5 + 0xfc));
    uVar8 = *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0x8c);
    pTVar5 = extraout_ECX_05;
    goto LAB_005510f9;
  case 5:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Tubes    : `$%.0f",
               (double)*(float *)(pTVar5 + 0x104));
    dVar6 = (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x108);
    pcVar7 = "`3Reload   : `!%.0fs";
    pTVar5 = extraout_ECX;
LAB_00550f95:
    (pTVar5)->addLinef(*(char **)((char *)this + 0x20), pcVar7, dVar6);
    TextEngine::addLinef
              (this_03,*(char **)((char *)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz",
               *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd4),
               *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd0));
    return;
  default:
    goto switchD_00550f76_caseD_6;
  case 7:
    uVar8 = *(undefined4 *)(pTVar5 + 0x8c);
LAB_005510f9:
    (pTVar5)->addLinef(*(char **)((char *)this + 0x20), "`3Boot Time: `#%ds", uVar8);
    pTVar5 = extraout_ECX_04;
    goto LAB_00551333;
  case 8:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Tubes    : `!%.0fs",
               (double)*(float *)(pTVar5 + 0x104));
    dVar6 = (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x108);
    pcVar7 = "`3Spinup   : `!%.0fs";
    pTVar5 = extraout_ECX_06;
    break;
  case 9:
    dVar6 = (double)*(float *)(pTVar5 + 0x104);
    pcVar7 = "`3Rotation : `!%.0f^/s";
    break;
  case 10:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Spinup Tm: `!%.0fs",
               (double)*(float *)(pTVar5 + 0x108));
    TextEngine::addLinef
              (this_07,*(char **)((char *)this + 0x20),"`3Calc Time: `!%.0fs",
               (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x10c));
    dVar6 = (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x104) * 0.5;
    pcVar7 = "`3Range    : `0%.0fly";
    pTVar5 = extraout_ECX_08;
    break;
  case 0xb:
    dVar6 = (double)*(float *)(pTVar5 + 0x104);
    pcVar7 = "`3Thrust   : `@%.0fgm/s";
    break;
  case 0xc:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Hit Chce : `!%d%%",
               (int)((float)(((*(int *)(pTVar5 + 0xec) + 1) / 2) * *(int *)(pTVar5 + 0xe8) +
                            *(int *)(pTVar5 + 0xf0)) * 100.0 - 100.0));
    TextEngine::addLinef
              (this_06,*(char **)((char *)this + 0x20),"`3Reload Tm: `!%.0fs",
               (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x108));
    dVar6 = (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x104);
    pcVar7 = "`3Range    : `0%.0fgm";
    pTVar5 = extraout_ECX_07;
    break;
  case 0xe:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Boot Time: `#%ds",*(undefined4 *)(pTVar5 + 0x8c));
    fVar1 = *(float *)(*(int *)(*(int *)param_1 + 8) + 0x104);
    pcVar7 = "`3Sync Time: `!%.0fs";
    pTVar5 = extraout_ECX_00;
    goto LAB_00551036;
  case 0xf:
    TextEngine::addLinef
              (pTVar5,*(char **)((char *)this + 0x20),"`3Boot Time: `#%ds",*(undefined4 *)(pTVar5 + 0x8c));
    TextEngine::addLinef
              (this_05,*(char **)((char *)this + 0x20),"`3Range    : `!%.0fs",
               (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0x104));
    fVar1 = *(float *)(*(int *)(*(int *)param_1 + 8) + 0x108);
    pcVar7 = "`3Radius   : `!%.0fs";
    pTVar5 = extraout_ECX_03;
LAB_00551036:
    (pTVar5)->addLinef(*(char **)((char *)this + 0x20), pcVar7, (double)fVar1);
    TextEngine::addLinef
              (this_04,*(char **)((char *)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz",
               *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd4),
               *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd0));
    pTVar5 = extraout_ECX_01;
    goto LAB_00551354;
  }
  (pTVar5)->addLinef(*(char **)((char *)this + 0x20), pcVar7, dVar6);
  TextEngine::addLinef
            (this_08,*(char **)((char *)this + 0x20),"`3Boot Time: `#%ds",
             *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0x8c));
  pTVar5 = extraout_ECX_09;
LAB_00551333:
  TextEngine::addLinef
            (pTVar5,*(char **)((char *)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz",
             *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd4),
             *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd0));
  pTVar5 = extraout_ECX_10;
LAB_00551354:
  TextEngine::addLinef
            (pTVar5,*(char **)((char *)this + 0x20),"`3Pwr Drain: `^%.0f",
             (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0xc0));
  TextEngine::addLinef
            (this_09,*(char **)((char *)this + 0x20),"`3High Em. : `$%d`3 @ `$%dhz",
             *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xcc),
             *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0xd0));
  TextEngine::addLinef
            (this_10,*(char **)((char *)this + 0x20),"`3High Drn.: `^%.0f",
             (double)*(float *)(*(int *)(*(int *)param_1 + 8) + 0xbc));
switchD_00550f76_caseD_6:
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_List(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4)
void Screen_UpgradeTerminal::cmd_List(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  int iVar3;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *this_00;
  TextEngine *extraout_ECX_01;
  TextEngine *pTVar4;
  uint uVar5;
  int iVar6;
  uint unaff_EDI;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c78a8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 != '\0') {
    ghidra::str::assign
              ((std::string *)&stack0xffffffc4,
               "`3LIST [components|module|pods]`2: list all components, modules or pods available for sale"
               ,0x5a);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    goto LAB_005516bf;
  }
  iVar6 = param_4 - param_3 >> 0x1f;
  if ((param_4 - param_3) / 0x18 + iVar6 != iVar6) {
    iVar6 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
    ghidra::lib::transform___x28_x29();
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("components",10,pcVar2,unaff_EDI);
    if (bVar1) {
      uVar5 = 0;
      iVar3 = *(int *)(iVar6 + 100);
      if (*(int *)(iVar6 + 0x68) - iVar3 >> 2 != 0) {
        do {
          iVar3 = *(int *)(**(int **)(iVar3 + uVar5 * 4) + 4);
          pTVar4 = (TextEngine *)(iVar3 + 0x38);
          if (0xf < *(uint *)(iVar3 + 0x4c)) {
            pTVar4 = *(TextEngine **)pTVar4;
          }
          uVar5 = uVar5 + 1;
          (pTVar4)->addLinef(*(char **)((char *)this + 0x20));
          iVar3 = *(int *)(iVar6 + 100);
        } while (uVar5 < (uint)(*(int *)(iVar6 + 0x68) - iVar3 >> 2));
      }
      goto LAB_005516bf;
    }
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("module",6,pcVar2,unaff_EDI);
    if (bVar1) {
      uVar5 = 0;
      iVar3 = *(int *)(iVar6 + 0x58);
      if (*(int *)(iVar6 + 0x5c) - iVar3 >> 2 != 0) {
        do {
          iVar3 = *(int *)(**(int **)(iVar3 + uVar5 * 4) + 8);
          pTVar4 = (TextEngine *)(iVar3 + 8);
          if (0xf < *(uint *)(iVar3 + 0x1c)) {
            pTVar4 = *(TextEngine **)pTVar4;
          }
          uVar5 = uVar5 + 1;
          (pTVar4)->addLinef(*(char **)((char *)this + 0x20));
          iVar3 = *(int *)(iVar6 + 0x58);
        } while (uVar5 < (uint)(*(int *)(iVar6 + 0x5c) - iVar3 >> 2));
      }
      goto LAB_005516bf;
    }
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("pods",4,pcVar2,unaff_EDI);
    if (bVar1) {
      ghidra::str::assign((std::string *)&stack0xffffffc4,"`!Pods available:",0x11);
      (*(TextEngine **)((char *)this + 0x20))->addLine();
      (*(TextEngine **)((char *)this + 0x20))->addBlankLine();
      iVar6 = 0;
      pTVar4 = extraout_ECX;
      do {
        if (iVar6 == 0) {
          (pTVar4)->addLinef(*(char **)((char *)this + 0x20));
          pTVar4 = extraout_ECX_00;
        }
        else {
          (pTVar4)->addLinef(*(char **)((char *)this + 0x20));
          (this_00)->addLinef(*(char **)((char *)this + 0x20), "   `3%s - `$%dc");
          pTVar4 = extraout_ECX_01;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      goto LAB_005516bf;
    }
  }
  cmd_List(this);
LAB_005516bf:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Repair (Screen_UpgradeTerminal *this,ShipMechanics *param_1,ShipMechanics *param_3,int param_4)
void Screen_UpgradeTerminal::cmd_Repair(ShipMechanics * param_1, ShipMechanics * param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  Ship *pSVar2;
  char *pcVar3;
  std::string *pbVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  char *pcVar10;
  ShipMechanics *pSVar11;
  int *piVar12;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *this_00;
  ShipMechanics *this_01;
  undefined4 extraout_ECX_01;
  nothrow_t *pnVar13;
  undefined4 extraout_ECX_02;
  int iVar14;
  undefined **ppuVar15;
  uint unaff_EDI;
  uint uVar16;
  std::string local_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  ShipMechanics *local_50;
  undefined4 ***local_34 [4];
  int local_24;
  uint local_20;
  Screen_UpgradeTerminal *local_1c;
  undefined4 ***local_18;
  undefined4 ***local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c8d40;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_1c = this_;
  if ((char)param_1 == '\0') {
    iVar7 = param_4 - (int)param_3 >> 0x1f;
    if ((param_4 - (int)param_3) / 0x18 + iVar7 != iVar7) {
      local_50 = param_3;
      param_1 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        param_1 = *(ShipMechanics **)param_3;
        local_50 = *(ShipMechanics **)param_3;
      }
      uStack_54 = 0x551783;
      ghidra::lib::transform___x28_x29();
      pbVar4 = (std::string *)param_3;
      local_50 = (ShipMechanics *)0x5517a4;
      bVar5 = ghidra::lib::_Traits_equal___x28_x29("status",6,pcVar6,unaff_EDI);
      if (bVar5) {
        pSVar11 = extraout_ECX;
        if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
          ghidra::Singleton<void>::instance = operator_new(1);
          pSVar11 = extraout_ECX_00;
          param_1 = ghidra::Singleton<void>::instance;
        }
        local_50 = (ShipMechanics *)0x5517d9;
        ShipMechanics::itemiseHullRepairCost
                  (pSVar11,*(Ship **)(g_gameData + 0xd0),*(TextEngine **)((char *)this_ + 0x20));
        goto LAB_00551aed;
      }
      local_50 = (ShipMechanics *)0x5517f7;
      bVar5 = ghidra::lib::_Traits_equal___x28_x29("all",3,pcVar6,unaff_EDI);
      if (bVar5) {
        pSVar2 = *(Ship **)(g_gameData + 0xd0);
        ghidra::any_singleton();
        iVar7 = (this_00)->getRepairPoints(pSVar2);
        if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar7 * 5) {
LAB_00551ac3:
          uVar16 = 0x28;
          pcVar6 = "`$ ** not enough credits for this_ repair";
        }
        else {
          ghidra::any_singleton();
          (this_01)->performHullRepairAll(*(Ship **)(g_gameData + 0xd0));
          local_5c[0] = (std::string)0x0;
          ghidra::str::assign(local_5c,"Repair",6);
          BankAccount::addTransaction
                    (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_01,iVar7 * -5);
          uVar16 = 0x15;
          pcVar6 = "`0 ** repair complete";
        }
        goto LAB_00551acf;
      }
      ghidra::str::ctor((std::string *)local_34,pbVar4);
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = local_34;
      if (0xf < local_20) {
        local_14 = local_34[0];
      }
      ppppuVar8 = local_34;
      if (0xf < local_20) {
        ppppuVar8 = (undefined4 ****)local_34[0];
      }
      local_18 = local_34;
      if (0xf < local_20) {
        local_18 = local_34[0];
      }
      iVar14 = 0;
      iVar7 = ((int)ppppuVar8 + local_24) - (int)local_18;
      if ((undefined4 ****)((int)ppppuVar8 + local_24) < local_18) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        do {
          iVar9 = tolower((int)*(char *)(iVar14 + (int)local_18));
          *(char *)(iVar14 + (int)local_14) = (char)iVar9;
          iVar14 = iVar14 + 1;
          this_ = local_1c;
        } while (iVar14 != iVar7);
      }
      ppuVar15 = &PTR_s_bow_005e189c;
      do {
        pcVar3 = *ppuVar15;
        param_1 = (ShipMechanics *)(pcVar3 + 1);
        pcVar10 = pcVar3;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        local_50 = (ShipMechanics *)0x55192e;
        bVar5 = ghidra::lib::_Traits_equal___x28_x29(pcVar3,(int)pcVar10 - (int)param_1,pcVar6,unaff_EDI);
        if (bVar5) {
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_20) {
            pnVar13 = (nothrow_t *)(local_20 + 1);
            ppppuVar8 = (undefined4 ****)local_34[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppuVar8 = (undefined4 ****)local_34[0][-1];
              pnVar13 = (nothrow_t *)(local_20 + 0x24);
              if (0x1f < (uint)((int)local_34[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            local_50 = (ShipMechanics *)0x551a03;
            operator_delete(ppppuVar8,pnVar13);
          }
          ghidra::str::ctor(local_5c,(std::string *)param_3);
          pSVar11 = (ShipMechanics *)getHullLocationForString();
          ghidra::any_singleton();
          local_50 = (ShipMechanics *)0x551a34;
          iVar7 = ShipMechanics::hullRepairCost
                            ((ShipMechanics *)g_gameData,*(Ship **)(g_gameData + 0xd0),
                             (HullLocation)pSVar11);
          if (iVar7 == 0) {
            uVar16 = 0x19;
            pcVar6 = "`$ ** no damage to repair";
          }
          else {
            if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar7) goto LAB_00551ac3;
            local_5c[0] = (std::string)0x0;
            ghidra::str::assign(local_5c,"Repair",6);
            BankAccount::addTransaction
                      (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_02,-iVar7);
            param_1 = pSVar11;
            piVar12 = ghidra::lib::map__operator_x5b_x5d
                                ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x14c),(int *)&param_1);
            *piVar12 = 0;
            uVar16 = 0x15;
            pcVar6 = "`0 ** repair complete";
          }
          goto LAB_00551acf;
        }
        ppuVar15 = ppuVar15 + 1;
      } while ((int)ppuVar15 < 0x5e18b0);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_20) {
        pnVar13 = (nothrow_t *)(local_20 + 1);
        ppppuVar8 = (undefined4 ****)local_34[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar8 = (undefined4 ****)local_34[0][-1];
          pnVar13 = (nothrow_t *)(local_20 + 0x24);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        local_50 = (ShipMechanics *)0x551979;
        operator_delete(ppppuVar8,pnVar13);
      }
      local_5c[0] = (std::string)0x0;
      ghidra::str::assign(local_5c,"`$ ** unknown hull section",0x1a);
      (*(TextEngine **)((char *)this_ + 0x20))->addLine();
    }
    uStack_54 = 1;
    local_50 = (ShipMechanics *)0x0;
    uStack_58 = 0x5519c8;
    cmd_Repair(this_);
  }
  else {
    uVar16 = 0x4c;
    pcVar6 = "`3REPAIR [status|all|hull section]`2: repair, or show the current hull state";
LAB_00551acf:
    local_5c[0] = (std::string)0x0;
    ghidra::str::assign(local_5c,pcVar6,uVar16);
    (*(TextEngine **)((char *)this_ + 0x20))->addLine();
  }
LAB_00551aed:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Info(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4)
void Screen_UpgradeTerminal::cmd_Info(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  TextEngine *this_00;
  bool bVar3;
  char *pcVar4;
  char *_Str;
  int iVar5;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  uint unaff_EDI;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c78a8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 != '\0') {
    ghidra::str::assign
              ((std::string *)&stack0xffffffc4,
               "`3INFO [component|module|pod] [number]`2: describe a module, component or pod for sale"
               ,0x56);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    goto LAB_00551d4a;
  }
  if ((uint)((param_4 - param_3) / 0x18) < 2) {
LAB_00551d28:
    cmd_Info(this);
  }
  else {
    iVar2 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
    ghidra::lib::transform___x28_x29();
    _Str = (char *)(param_3 + 0x18);
    if (0xf < *(uint *)(param_3 + 0x2c)) {
      _Str = *(char **)_Str;
    }
    iVar5 = atoi(_Str);
    uVar1 = iVar5 - 1;
    bVar3 = ghidra::lib::_Traits_equal___x28_x29("component",9,pcVar4,unaff_EDI);
    if (bVar3) {
      if ((-1 < (int)uVar1) &&
         (this_00 = *(TextEngine **)(iVar2 + 100),
         uVar1 < (uint)(*(int *)(iVar2 + 0x68) - (int)this_00 >> 2))) {
        iVar2 = *(int *)(this_00 + uVar1 * 4);
        (this_00)->addLinef(*(char **)((char *)this + 0x20));
        (this_01)->addLinef(*(char **)((char *)this + 0x20));
        (this_02)->addLinef(*(char **)((char *)this + 0x20));
        TextEngine::addLinef
                  (this_03,*(char **)((char *)this + 0x20),"`3Cost     : `$%dc",*(undefined4 *)(iVar2 + 4));
        goto LAB_00551d4a;
      }
    }
    else {
      bVar3 = ghidra::lib::_Traits_equal___x28_x29("module",6,pcVar4,unaff_EDI);
      if (!bVar3) goto LAB_00551d28;
      if ((-1 < (int)uVar1) &&
         (uVar1 < (uint)(*(int *)(iVar2 + 0x5c) - *(int *)(iVar2 + 0x58) >> 2))) {
        describeModule(this,*(ModuleSaleInstance **)(*(int *)(iVar2 + 0x58) + uVar1 * 4));
        goto LAB_00551d4a;
      }
    }
    ghidra::str::assign
              ((std::string *)&stack0xffffffc4,"`$Error:`3 invalid module.",0x1a);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
  }
LAB_00551d4a:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Pods(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4)
void Screen_UpgradeTerminal::cmd_Pods(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffb4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char *pcVar1;
  char cVar2;
  CargoHold *this_00;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  TextEngine *pTVar6;
  GoodContainmentOption GVar7;
  void *pvVar8;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  TextEngine *this_01;
  nothrow_t *pnVar9;
  char *pcVar10;
  CargoHold *pCVar11;
  void *pvVar12;
  int iVar13;
  undefined **ppuVar14;
  uint unaff_EDI;
  uint local_58;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c77e0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = pcVar5;
  if (param_1 != '\0') {
    local_58 = local_58 & 0xffffff00;
    ghidra::str::assign
              ((std::string *)&local_58,
               "`3PODS [list,upgrade]`2: list or upgrade pods on your ship",0x3a);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    goto LAB_0055236e;
  }
  iVar13 = param_4 - param_3 >> 0x1f;
  if ((param_4 - param_3) / 0x18 + iVar13 != iVar13) {
    ghidra::lib::transform___x28_x29();
    iVar13 = param_3;
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("list",4,pcVar5,unaff_EDI);
    if (bVar4) {
      local_58 = local_58 & 0xffffff00;
      ghidra::str::assign((std::string *)&local_58,"`%Pods:",7);
      (*(TextEngine **)((char *)this + 0x20))->addLine();
      iVar13 = 0;
      this_00 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
      pCVar11 = this_00 + 0xc;
      do {
        if (iVar13 < *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4)) {
          if ((iVar13 < 0) ||
             (((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= iVar13)) ||
              (*(int *)pCVar11 == 0)))) {
            ((TextEngine *)this_00)->addLinef(*(char **)((char *)this + 0x20));
          }
          else {
            pTVar6 = (TextEngine *)(this_00)->describePod((int)local_2c, SUB41(iVar13,0));
            // [seh] local_8._0_1_ = 1;
            if (0xf < *(uint *)(pTVar6 + 0x14)) {
              pTVar6 = *(TextEngine **)pTVar6;
            }
            local_58 = 0x551f3f;
            (pTVar6)->addLinef(*(char **)((char *)this + 0x20));
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar8 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar8 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_005520a9;
              }
              operator_delete(pvVar8,pnVar9);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
        }
        iVar13 = iVar13 + 1;
        pCVar11 = pCVar11 + 4;
      } while (iVar13 < 0xe);
      goto LAB_0055236e;
    }
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("upgrade",7,pcVar5,unaff_EDI);
    if (bVar4) {
      if (2 < (uint)((param_4 - iVar13) / 0x18)) {
        ghidra::lib::transform___x28_x29();
        ghidra::str::ctor
                  ((std::string *)local_2c,(std::string *)(param_3 + 0x18));
        pvVar8 = local_2c[0];
        ppuVar14 = &PTR_s_temp_005e16ec;
        do {
          pcVar10 = *ppuVar14;
          pcVar1 = pcVar10 + 1;
          do {
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          bVar4 = ghidra::lib::_Traits_equal___x28_x29(*ppuVar14,(int)pcVar10 - (int)pcVar1,pcVar5,unaff_EDI);
          if (bVar4) {
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar12 = pvVar8;
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar12 = *(void **)((int)pvVar8 + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar12,pnVar9);
            }
            ghidra::str::ctor
                      ((std::string *)&local_58,(std::string *)(param_3 + 0x18));
            GVar7 = getContainmentOption();
            pcVar5 = (char *)(param_3 + 0x30);
            if (0xf < *(uint *)(param_3 + 0x44)) {
              pcVar5 = *(char **)pcVar5;
            }
            iVar13 = atoi(pcVar5);
            iVar13 = iVar13 + -1;
            if ((iVar13 < 0) ||
               (*(int *)(*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 8) <= iVar13)) {
              local_58 = local_58 & 0xffffff00;
              ghidra::str::assign((std::string *)&local_58,"`2Invalid pod number.",0x15);
              (*(TextEngine **)((char *)this + 0x20))->addLine();
            }
            else {
              bVar4 = CargoHold::podExists
                                (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),iVar13);
              if (bVar4) {
                iVar3 = *(int *)(extraout_ECX_01 + 0xc + iVar13 * 4);
                if ((iVar3 == 0) ||
                   ((GVar7 != 0 && ((2 < GVar7 - 1 || (*(char *)(iVar3 + GVar7) == '\0')))))) {
                  if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) <
                      (int)(&goodContainmentOptionCost)[GVar7]) {
                    local_58 = (uint)local_58._1_3_ << 8;
                    ghidra::str::assign
                              ((std::string *)&local_58,"`2Not enough money for this upgrade.",
                               0x24);
                    (*(TextEngine **)((char *)this + 0x20))->addLine();
                  }
                  else {
                    ghidra::str::ctor
                              ((std::string *)&local_58,(&PTR_s_none_005e1f2c)[GVar7]);
                    BankAccount::addTransaction
                              (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_02,
                               -(int)(&goodContainmentOptionCost)[GVar7]);
                    CargoHold::addOption
                              (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),iVar13,GVar7);
                    (this_01)->addLinef(*(char **)((char *)this + 0x20));
                  }
                }
                else {
                  local_58 = (uint)local_58._1_3_ << 8;
                  ghidra::str::assign
                            ((std::string *)&local_58,"`2Pod already has this upgrade.",0x1f);
                  (*(TextEngine **)((char *)this + 0x20))->addLine();
                }
              }
              else {
                local_58 = (uint)local_58._1_3_ << 8;
                ghidra::str::assign
                          ((std::string *)&local_58,"`2No pod in that slot to upgrade.",0x21);
                (*(TextEngine **)((char *)this + 0x20))->addLine();
              }
            }
            goto LAB_0055236e;
          }
          ppuVar14 = ppuVar14 + 1;
        } while ((int)ppuVar14 < 0x5e16f4);
        if (0xf < local_18) {
          pnVar9 = (nothrow_t *)(local_18 + 1);
          pvVar12 = pvVar8;
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar12 = *(void **)((int)pvVar8 + -4);
            pnVar9 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar12))) {
LAB_005520a9:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar12,pnVar9);
        }
        local_58 = local_58 & 0xffffff00;
        ghidra::str::assign((std::string *)&local_58,"`2Invalid pod upgrade.",0x16);
        (*(TextEngine **)((char *)this + 0x20))->addLine();
      }
      local_58 = local_58 & 0xffffff00;
      ghidra::str::assign
                ((std::string *)&local_58,
                 "`3PODS [upgrade] [upgrade type] [pod number]`2: upgrade a pod with a new feature",
                 0x50);
      (*(TextEngine **)((char *)this + 0x20))->addLine();
      (*(TextEngine **)((char *)this + 0x20))->addBlankLine();
      iVar13 = 0;
      pTVar6 = extraout_ECX;
      do {
        local_58 = 0x55213f;
        (pTVar6)->addLinef(*(char **)((char *)this + 0x20));
        iVar13 = iVar13 + 4;
        pTVar6 = extraout_ECX_00;
      } while (iVar13 < 8);
      goto LAB_0055236e;
    }
    local_58 = local_58 & 0xffffff00;
    ghidra::str::assign((std::string *)&local_58,"`2Invalid parameter.",0x14);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
  }
  ghidra::lib::vector__vector((ghidra::vector *)&stack0xffffffb4,(ghidra::vector *)&param_3);
  cmd_Pods(this);
LAB_0055236e:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Buy (Screen_UpgradeTerminal *this,char param_1,undefined4 *param_3,int param_4)
void Screen_UpgradeTerminal::cmd_Buy(char param_1, undefined4 * param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  TradeEngine *pTVar6;
  int iVar7;
  int iVar8;
  nothrow_t *pnVar9;
  undefined4 ****ppppuVar10;
  undefined4 extraout_ECX;
  char *pcVar11;
  CargoHold *pCVar12;
  uint unaff_EDI;
  uint uVar13;
  std::string local_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 ***local_54;
  uint local_34;
  undefined4 ***local_2c [5];
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c8d94;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_7 = 0;
  local_14 = pcVar4;
  if (param_1 != '\0') {
    local_60[0] = (std::string)0x0;
    ghidra::str::assign
              (local_60,
               "`3BUY [component|module|pod] [number/designation]`2: buy a component, module or pod"
               ,0x53);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
    goto LAB_00552987;
  }
  iVar5 = param_4 - (int)param_3 >> 0x1f;
  if ((param_4 - (int)param_3) / 0x18 + iVar5 != iVar5) {
    iVar5 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
    local_54 = (undefined4 ***)param_3;
    if (0xf < (uint)param_3[5]) {
      local_54 = (undefined4 ***)*param_3;
    }
    uStack_58 = 0x552472;
    ghidra::lib::transform___x28_x29();
    puVar1 = param_3;
    local_54 = (undefined4 ***)0x552491;
    bVar3 = ghidra::lib::_Traits_equal___x28_x29("component",9,pcVar4,unaff_EDI);
    if (bVar3) {
      if (1 < (uint)((param_4 - (int)puVar1) / 0x18)) {
        local_54 = (undefined4 ***)(puVar1 + 6);
        if (0xf < (uint)puVar1[0xb]) {
          local_54 = (undefined4 ***)*local_54;
        }
        uStack_58 = 0x5524f3;
        ghidra::lib::transform___x28_x29();
        iVar7 = *(int *)(iVar5 + 100);
        local_34 = 0;
        if (*(int *)(iVar5 + 0x68) - iVar7 >> 2 != 0) {
          do {
            ghidra::str::ctor
                      ((std::string *)local_2c,
                       (std::string *)(*(int *)(**(int **)(iVar7 + local_34 * 4) + 4) + 0x38));
            // [seh] local_8 = 1;
            local_54 = local_2c;
            if (0xf < local_18) {
              local_54 = local_2c[0];
            }
            uStack_58 = 0x55255b;
            ghidra::lib::transform___x28_x29();
            uVar13 = local_18;
            pppuVar2 = local_2c[0];
            pcVar11 = (char *)(param_3 + 6);
            if (0xf < (uint)param_3[0xb]) {
              pcVar11 = (char *)param_3[6];
            }
            local_54 = (undefined4 ***)0x552588;
            bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar11,param_3[10],pcVar4,unaff_EDI);
            if (bVar3) {
              pTVar6 = ghidra::any_singleton();
              iVar5 = *(int *)(pTVar6 + 0x11c);
              *(uint *)(iVar5 + 0x5c) = local_34;
              *(undefined4 *)(iVar5 + 0x60) = 1;
              *(undefined4 *)(iVar5 + 0x48) = 1;
              *(undefined2 *)((char *)this + 0x40) = 0;
              local_60[0] = (std::string)0x0;
              ghidra::str::assign
                        (local_60,"`!Transaction queued. Type `%confirm`! to perform.",0x32);
              (*(TextEngine **)((char *)this + 0x20))->addLine();
              if (0xf < local_18) {
                pnVar9 = (nothrow_t *)(local_18 + 1);
                ppppuVar10 = (undefined4 ****)local_2c[0];
                if ((nothrow_t *)0xfff < pnVar9) {
                  ppppuVar10 = (undefined4 ****)local_2c[0][-1];
                  pnVar9 = (nothrow_t *)(local_18 + 0x24);
                  if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar10))) {
LAB_00552710:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                local_54 = (undefined4 ***)0x55271d;
                operator_delete(ppppuVar10,pnVar9);
              }
              goto LAB_00552987;
            }
            // [seh] local_8 = bVar3;
            if (0xf < uVar13) {
              pnVar9 = (nothrow_t *)(uVar13 + 1);
              ppppuVar10 = (undefined4 ****)pppuVar2;
              if ((nothrow_t *)0xfff < pnVar9) {
                ppppuVar10 = (undefined4 ****)pppuVar2[-1];
                pnVar9 = (nothrow_t *)(uVar13 + 0x24);
                // [seh] local_8 = 0;
                if (0x1f < (uint)((int)pppuVar2 + (-4 - (int)ppppuVar10))) goto LAB_00552710;
              }
              local_54 = (undefined4 ***)0x5525c3;
              // [seh] local_8 = bVar3;
              operator_delete(ppppuVar10,pnVar9);
            }
            local_34 = local_34 + 1;
            iVar7 = *(int *)(iVar5 + 100);
          } while (local_34 < (uint)(*(int *)(iVar5 + 0x68) - iVar7 >> 2));
        }
        pcVar4 = (char *)(param_3 + 6);
        if (0xf < (uint)param_3[0xb]) {
          pcVar4 = *(char **)pcVar4;
        }
        iVar5 = atoi(pcVar4);
        if (ghidra::Singleton<void>::instance == (TradeEngine *)0x0) {
          pTVar6 = operator_new(300);
          // [seh] local_8 = 2;
          ghidra::Singleton<void>::instance = (TradeEngine *)new ((void *)(pTVar6)) TradeEngine();
          // [seh] local_8 = 0;
        }
        pTVar6 = ghidra::Singleton<void>::instance;
        iVar7 = *(int *)(ghidra::Singleton<void>::instance + 0x11c);
        *(int *)(iVar7 + 0x5c) = iVar5;
        *(undefined4 *)(iVar7 + 0x60) = 1;
        *(undefined4 *)(iVar7 + 0x48) = 1;
        if (pTVar6 == (TradeEngine *)0x0) {
          pTVar6 = operator_new(300);
          // [seh] local_8 = 3;
          pTVar6 = (TradeEngine *)new ((void *)(pTVar6)) TradeEngine();
          // [seh] local_8 = 0;
          ghidra::Singleton<void>::instance = pTVar6;
        }
        bVar3 = (pTVar6)->currentComponentPurchaseValid(*(TextEngine **)((char *)this + 0x20));
        if (!bVar3) {
          pTVar6 = ghidra::any_singleton();
          *(undefined4 *)(*(int *)(pTVar6 + 0x11c) + 0x48) = 0;
          goto LAB_00552987;
        }
        *(undefined2 *)((char *)this + 0x40) = 0;
LAB_005527f7:
        uVar13 = 0x32;
        pcVar4 = "`!Transaction queued. Type `%confirm`! to perform.";
        goto LAB_005527fe;
      }
    }
    else {
      local_54 = (undefined4 ***)0x55274e;
      bVar3 = ghidra::lib::_Traits_equal___x28_x29("module",6,pcVar4,unaff_EDI);
      if (bVar3) {
        if (1 < (uint)((param_4 - (int)puVar1) / 0x18)) {
          pcVar4 = (char *)(puVar1 + 6);
          if (0xf < (uint)puVar1[0xb]) {
            pcVar4 = *(char **)pcVar4;
          }
          iVar7 = atoi(pcVar4);
          uVar13 = iVar7 - 1;
          if (((int)uVar13 < 0) ||
             ((uint)(*(int *)(iVar5 + 0x5c) - *(int *)(iVar5 + 0x58) >> 2) <= uVar13)) {
            local_60[0] = (std::string)0x0;
            ghidra::str::assign(local_60,"`$Error:`3 invalid module.",0x1a);
            (*(TextEngine **)((char *)this + 0x20))->addLine();
            goto LAB_00552987;
          }
          puVar1 = *(undefined4 **)(*(int *)(iVar5 + 0x58) + uVar13 * 4);
          if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < (int)puVar1[1]) {
            uVar13 = 0x25;
            pcVar4 = "`$Error:`3 cannot afford this module.";
          }
          else {
            bVar3 = SystemManager::canAddModule
                              (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                               (ShipModule *)*puVar1);
            if (bVar3) {
              *(uint *)((char *)this + 0x44) = uVar13;
              *(undefined2 *)((char *)this + 0x40) = 0x100;
              goto LAB_005527f7;
            }
            uVar13 = 0x29;
            pcVar4 = "`$Error:`3 no empty slot for this module.";
          }
LAB_005527fe:
          local_60[0] = (std::string)0x0;
          ghidra::str::assign(local_60,pcVar4,uVar13);
          (*(TextEngine **)((char *)this + 0x20))->addLine();
          goto LAB_00552987;
        }
      }
      else {
        local_54 = (undefined4 ***)0x55286d;
        bVar3 = ghidra::lib::_Traits_equal___x28_x29("pod",3,pcVar4,unaff_EDI);
        if (bVar3) {
          if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < 100) {
            uVar13 = 0x24;
            pcVar4 = "`$Error:`3 cannot afford a new  pod.";
          }
          else {
            iVar7 = 0;
            iVar5 = 7;
            pCVar12 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x10;
            do {
              iVar8 = iVar7 + 1;
              if (*(int *)(pCVar12 + -4) == 0) {
                iVar8 = iVar7;
              }
              iVar7 = iVar8 + 1;
              if (*(int *)pCVar12 == 0) {
                iVar7 = iVar8;
              }
              iVar5 = iVar5 + -1;
              pCVar12 = pCVar12 + 8;
            } while (iVar5 != 0);
            if (iVar7 == 0) {
              local_60[0] = (std::string)0x0;
              ghidra::str::assign(local_60,"`$Error:`3 no empty slot for this pod.",0x26);
              (*(TextEngine **)((char *)this + 0x20))->addLine();
              goto LAB_00552987;
            }
            bVar3 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->addPod(-1);
            local_60[0] = (std::string)0x0;
            if (!bVar3) {
              ghidra::str::assign(local_60,"`^Unable to purchase pod.",0x19);
              (*(TextEngine **)((char *)this + 0x20))->addLine();
              goto LAB_00552987;
            }
            ghidra::str::assign(local_60,"Pod",3);
            BankAccount::addTransaction
                      (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,0xffffff9c);
            uVar13 = 0x2c;
            pcVar4 = "`!Transaction complete. Pod added to vessel.";
          }
          goto LAB_005527fe;
        }
      }
    }
  }
  uStack_58 = 1;
  local_54 = (undefined4 ***)0x0;
  uStack_5c = 0x552987;
  cmd_Buy(this);
LAB_00552987:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Sell(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4)
void Screen_UpgradeTerminal::cmd_Sell(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  CargoHold *this_00;
  bool bVar1;
  char *pcVar2;
  char *_Str;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  TextEngine *this_01;
  uint unaff_EDI;
  uint uVar5;
  std::string local_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8a78;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    if ((uint)((param_4 - param_3) / 0x18) < 2) {
LAB_00552ca4:
      uStack_30 = 1;
      uStack_34 = 0x552cc6;
      cmd_Sell(this);
      goto LAB_00552cc6;
    }
    uStack_30 = 0x552a4d;
    ghidra::lib::transform___x28_x29();
    _Str = (char *)(param_3 + 0x18);
    if (0xf < *(uint *)(param_3 + 0x2c)) {
      _Str = *(char **)_Str;
    }
    iVar3 = atoi(_Str);
    iVar4 = param_3;
    uVar5 = iVar3 - 1;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("component",9,pcVar2,unaff_EDI);
    if (bVar1) {
      if (((int)uVar5 < 0) ||
         ((uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) -
                 *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) >> 2) <= uVar5)) {
        uVar5 = 0x1d;
        pcVar2 = "`$Error:`3 invalid component.";
      }
      else {
        *(undefined2 *)((char *)this + 0x40) = 1;
LAB_00552b0b:
        *(uint *)((char *)this + 0x44) = uVar5;
        uVar5 = 0x32;
        pcVar2 = "`!Transaction queued. Type `%confirm`! to perform.";
      }
    }
    else {
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("module",6,pcVar2,unaff_EDI);
      if (bVar1) {
        if ((-1 < (int)uVar5) &&
           (uVar5 < (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) -
                           *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c) >> 2))) {
          *(undefined2 *)((char *)this + 0x40) = 0x101;
          goto LAB_00552b0b;
        }
        uVar5 = 0x1a;
        pcVar2 = "`$Error:`3 invalid module.";
      }
      else {
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("pod",3,pcVar2,unaff_EDI);
        if (!bVar1) goto LAB_00552ca4;
        if (((int)uVar5 < 0) ||
           (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4) <= (int)uVar5)) {
          local_38[0] = (std::string)0x0;
          ghidra::str::assign(local_38,"`$Error:`3 invalid pod slot.",0x1c);
          (*(TextEngine **)((char *)this + 0x20))->addLine();
          goto LAB_00552cc6;
        }
        pcVar2 = (char *)(iVar4 + 0x18);
        if (0xf < *(uint *)(iVar4 + 0x2c)) {
          pcVar2 = *(char **)pcVar2;
        }
        iVar4 = atoi(pcVar2);
        iVar4 = iVar4 + 1;
        this_00 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
        if ((iVar4 < 0) ||
           (((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= iVar4)) ||
            (*(int *)(this_00 + iVar4 * 4 + 0xc) == 0)))) {
          uVar5 = 0x1f;
          pcVar2 = "`$Error:`3 no pod in this slot.";
        }
        else {
          if (*(int *)(*(int *)(this_00 + iVar4 * 4 + 0xc) + 8) < 1) {
            iVar3 = (this_00)->getPodSellCost(iVar4);
            local_38[0] = (std::string)0x0;
            ghidra::str::assign(local_38,"Pod",3);
            (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, -iVar3);
            uStack_30 = 0x552c4b;
            (this_01)->addLinef(*(char **)((char *)this + 0x20));
            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->removePod(iVar4);
            goto LAB_00552cc6;
          }
          uVar5 = 0x1c;
          pcVar2 = "`$Error:`3 pod is not empty.";
        }
      }
    }
  }
  else {
    uVar5 = 0x6e;
    pcVar2 = 
    "`3SELL [component|module|pod] [item/slot]`2: sell the item or pod from your ship with the corresponding number"
    ;
  }
  local_38[0] = (std::string)0x0;
  ghidra::str::assign(local_38,pcVar2,uVar5);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
LAB_00552cc6:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Confirm(Screen_UpgradeTerminal *this,char param_1)
void Screen_UpgradeTerminal::cmd_Confirm(char param_1)

{
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *pSVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  TradeEngine *this_00;
  TextEngine *pTVar7;
  undefined4 extraout_ECX;
  TextEngine *this_01;
  undefined4 extraout_ECX_00;
  size_t sVar8;
  std::string local_40 [4];
  undefined4 uStack_3c;
  Shop SVar9;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c7878;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    iVar5 = *(int *)((char *)this + 0x44);
    if (iVar5 != -1) {
      if (((char *)this)[0x40] == (byte)0x0) {
        iVar4 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
        if (((char *)this)[0x41] != (byte)0x0) {
          pSVar1 = (ShipModule *)**(undefined4 **)(*(int *)(iVar4 + 0x58) + iVar5 * 4);
          (pSVar1)->getValue();
          uStack_3c = 0x552e57;
          (this_01)->addLinef(*(char **)((char *)this + 0x20));
          ghidra::str::ctor
                    (local_40,(std::string *)
                              (*(int *)(**(int **)(*(int *)(iVar4 + 0x58) +
                                                  *(int *)((char *)this + 0x44) * 4) + 8) + 8));
          iVar5 = (pSVar1)->getValue();
          (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX_00, -iVar5);
          SystemManager::addModule
                    (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),pSVar1,-1);
          (pSVar1)->disconnect(*(Ship **)(g_gameData + 0xd0));
          pvVar2 = *(void **)(iVar4 + 0x5c);
          puVar6 = (undefined4 *)ghidra::lib::remove___x28_x29();
          pvVar3 = (void *)*puVar6;
          if (pvVar3 != pvVar2) {
            sVar8 = *(int *)(iVar4 + 0x5c) - (int)pvVar2;
            memmove(pvVar3,pvVar2,sVar8);
            *(size_t *)(iVar4 + 0x5c) = sVar8 + (int)pvVar3;
          }
          goto LAB_00552f10;
        }
      }
      else if (((char *)this)[0x41] != (byte)0x0) {
        pSVar1 = *(ShipModule **)
                  (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c) + iVar5 * 4);
        iVar4 = (pSVar1)->getValue();
        iVar5 = *(int *)(pSVar1 + 8);
        pTVar7 = (TextEngine *)(iVar5 + 8);
        if (0xf < *(uint *)(iVar5 + 0x1c)) {
          pTVar7 = *(TextEngine **)pTVar7;
        }
        uStack_3c = 0x552db5;
        (pTVar7)->addLinef(*(char **)((char *)this + 0x20));
        ghidra::str::ctor
                  (local_40,(std::string *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40)
                                                       + 0x3c) + *(int *)((char *)this + 0x44) * 4) + 8) + 8
                            ));
        (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, iVar4 / 2);
        SystemManager::removeModule
                  (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                   *(ShipModule **)
                    (*(int *)(*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c) +
                    *(int *)((char *)this + 0x44) * 4));
        goto LAB_00552f10;
      }
      pTVar7 = *(TextEngine **)((char *)this + 0x20);
      SVar9 = 1;
      this_00 = ghidra::any_singleton();
      (this_00)->performTrade(SVar9, pTVar7);
    }
  }
  else {
    local_40[0] = (std::string)0x0;
    ghidra::str::assign(local_40,"`3CONFIRM`2: executes the current trade",0x27);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
  }
LAB_00552f10:
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Cancel(Screen_UpgradeTerminal *this,char param_1)
void Screen_UpgradeTerminal::cmd_Cancel(char param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  char *pcVar1;
  uint uVar2;
  std::string local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c7818;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    uVar2 = 0x18;
    *(undefined4 *)((char *)this + 0x44) = 0xffffffff;
    pcVar1 = "`3Transaction CANCELLED.";
  }
  else {
    uVar2 = 0x25;
    pcVar1 = "`3CANCEL`2: cancels the current trade";
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (std::string)0x0;
  ghidra::str::assign(local_30,pcVar1,uVar2);
  (*(TextEngine **)((char *)this + 0x20))->addLine();
  local_1c = 0x552fa4;
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Components(Screen_UpgradeTerminal *this,char param_1)
void Screen_UpgradeTerminal::cmd_Components(char param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  uint local_38;
  TextEngine *pTStack_34;
  undefined4 uStack_30;
  double local_2c;
  int local_24;
  uint uStack_20;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8a78;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_20 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    uVar6 = 0;
    iVar5 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44);
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) - iVar5 >> 2 != 0) {
      do {
        pfVar2 = *(float **)(iVar5 + uVar6 * 4);
        fVar3 = pfVar2[1];
        fVar1 = *pfVar2;
        if ((float)*(int *)((int)fVar3 + 0x10) <= fVar1) {
          uStack_30 = 0x30;
          if (fVar1 < (float)*(int *)((int)fVar3 + 0x14)) {
            uStack_30 = 0x24;
          }
        }
        else {
          uStack_30 = 0x40;
        }
        pTStack_34 = (TextEngine *)((int)fVar3 + 0x38);
        fVar7 = (float)*(int *)((int)fVar3 + 0x20) * (fVar1 / 100.0);
        fVar4 = 1.0;
        if (1.0 <= fVar7) {
          fVar4 = fVar7;
        }
        if (0xf < *(uint *)((int)fVar3 + 0x4c)) {
          pTStack_34 = *(TextEngine **)pTStack_34;
        }
        local_24 = (int)fVar4;
        uVar6 = uVar6 + 1;
        local_2c = (double)fVar1;
        local_38 = uVar6;
        TextEngine::addLinef
                  (pTStack_34,*(char **)((char *)this + 0x20)," `3[`7%2d`3] `7%s `3(`%c%.0f%%`3) `$%dc");
        iVar5 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44);
      } while (uVar6 < (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) - iVar5
                             >> 2));
    }
  }
  else {
    local_2c = (double)((ulonglong)local_2c & 0xffffffff);
    local_24 = 0xf;
    local_38 = local_38 & 0xffffff00;
    ghidra::str::assign
              ((std::string *)&local_38,
               "`3COMPONENTS`2: list all components or modules on your ship",0x3b);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
  }
  local_24 = 0x5530ff;
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_UpgradeTerminal::cmd_Modules(Screen_UpgradeTerminal *this,char param_1)
void Screen_UpgradeTerminal::cmd_Modules(char param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *this_00;
  char cVar1;
  int iVar2;
  TextEngine *this_01;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *local_40;
  uint uStack_3c;
  // [seh] undefined4 *puStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  uint uStack_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c7878;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_28 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    _param_1 = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar2 >> 2 != 0) {
      do {
        this_00 = *(ShipModule **)(iVar2 + _param_1 * 4);
        local_2c = 0x5531be;
        cVar1 = (**(code **)(*(int *)this_00 + 0x14))();
        if (cVar1 == '\0') {
          local_2c = 0x5531d2;
          cVar1 = (**(code **)(*(int *)this_00 + 0x18))();
          uVar3 = 0x30;
          if (cVar1 != '\0') {
            uVar3 = 0x24;
          }
        }
        else {
          uVar3 = 0x40;
        }
        local_2c = 0x5531e4;
        iVar2 = ComponentInterfaceInstance::damagePercent
                          (*(ComponentInterfaceInstance **)(this_00 + 0xc));
        puVar4 = (undefined4 *)(*(int *)(this_00 + 8) + 8);
        if (0xf < *(uint *)(*(int *)(this_00 + 8) + 0x1c)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        _param_1 = _param_1 + 1;
        local_2c = 0x5531ff;
        local_2c = (this_00)->getValue();
        local_30 = 100 - iVar2;
        local_40 = " `3[`7%2d`3] `7%s `3(`%c%d%%`3) `$%dc";
        uStack_3c = _param_1;
        // [seh] puStack_38 = puVar4;
        uStack_34 = uVar3;
        (this_01)->addLinef(*(char **)((char *)this + 0x20));
        iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
      } while (_param_1 <
               (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar2 >> 2));
    }
  }
  else {
    local_30 = 0;
    local_2c = 0xf;
    local_40 = (char *)((uint)local_40 & 0xffffff00);
    ghidra::str::assign
              ((std::string *)&local_40,
               "`3MODULES`2: list all components or modules on your ship",0x38);
    (*(TextEngine **)((char *)this + 0x20))->addLine();
  }
  local_2c = 0x553250;
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return;
}
