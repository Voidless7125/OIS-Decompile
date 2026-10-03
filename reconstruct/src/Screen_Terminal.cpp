// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Screen_Terminal::configure(Screen_Terminal *this)
void Screen_Terminal::configure()

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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c8996;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x14) = *(undefined4 *)(g_gameData + 0xd0);
  *(undefined4 *)((char *)this + 0x18) = 0x2a;
  *(undefined4 *)((char *)this + 0x1c) = 0x18;
  new ((void *)(local_1dc)) Widget();
  // [seh] local_8 = 0;
  local_1cc = *(undefined4 *)((char *)this + 0x18);
  local_1c8 = *(undefined4 *)((char *)this + 0x1c);
  pTVar2 = operator_new(0x15c00);
  // [seh] local_8._0_1_ = 1;
  local_1e0 = (AnimationFrames *)pTVar2;
  ghidra::str::assign((std::string *)&stack0xfffffdec,"",0);
  pSStack_228 = *(Screen_Terminal **)((char *)this + 0xc);
  uStack_22c = 0x54a6a4;
  pTVar2 = (TextField *)new ((void *)(pTVar2)) TextField();
  // [seh] local_8._0_1_ = 0;
  *(TextField **)((char *)this + 0x20) = pTVar2;
  (pTVar2)->update();
  (**(code **)(**(int **)((char *)this + 0x20) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (TerminalEngine *)0x3f000000;
  // [seh] local_8._0_1_ = 2;
  (**(code **)(**(int **)((char *)this + 0x20) + 0xa0))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  pCVar6 = (Command *)(float)(*(int *)(*(int *)((char *)this + 0xc) + 0x6c) / 2 + 6);
  pCVar7 = (Command *)(float)(*(int *)(*(int *)((char *)this + 0xc) + 0x68) / 2);
  (**(code **)(**(int **)((char *)this + 0x20) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)((char *)this + 0x20));
  iVar3 = (**(code **)(**(int **)((char *)this + 0x20) + 0xb0))();
  local_1e0 = *(AnimationFrames **)(iVar3 + 4);
  (**(code **)(**(int **)((char *)this + 0x20) + 0xb0))();
  pSStack_228 = (Screen_Terminal *)0x54a785;
  debugPrint("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)((char *)this + 0xc);
  local_1e0 = *(AnimationFrames **)((char *)this + 0x20);
  ppAVar1 = *(AnimationFrames ***)(iVar3 + 0x194);
  if (*(AnimationFrames ***)(iVar3 + 0x198) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(iVar3 + 400),ppAVar1,(AnimationFrames **)&local_1e0);
  }
  else {
    *ppAVar1 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = operator_new(0xa8);
  iVar3 = new ((void *)(local_1e4)) TerminalEngine();
  *(int *)((char *)this + 0x28) = iVar3;
  local_1ec = executeCommand;
  local_1e4 = (TerminalEngine *)this;
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(iVar3 + 0x18),(ghidra::lib::_Binder_t *)&local_1ec);
  local_1e8 = updateScreenCall;
  local_1e4 = (TerminalEngine *)this;
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(*(int *)((char *)this + 0x28) + 0x68),(ghidra::lib::_Binder_t *)&local_1e8)
  ;
  *(undefined1 *)(*(int *)((char *)this + 0x28) + 0xd) = 1;
  local_1e4 = operator_new(0x150);
  // [seh] local_8._0_1_ = 3;
  uVar4 = TextEngine::TextEngine
                    ((TextEngine *)local_1e4,*(TextField **)((char *)this + 0x20),(int)((char *)this + 0x38),
                     *(int *)((char *)this + 0x18),*(int *)((char *)this + 0x1c),(ghidra::vector *)((char *)this + 0x38));
  // [seh] local_8._0_1_ = 0;
  *(undefined4 *)((char *)this + 0x24) = uVar4;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1e0 + 1),'\0','\0',0xff);
  pcStack_230 = (code *)(*(int *)((char *)this + 0x28) + 0x90);
  if (0xf < *(uint *)(*(int *)((char *)this + 0x28) + 0xa4)) {
    pcStack_230 = *(code **)pcStack_230;
  }
  uStack_22c = 3;
  ppuStack_234 = (undefined **)0x623b04;
  uStack_23c = 0x54a897;
  strUsingArgs((char *)&pSStack_228);
  uStack_22c = 0x54a8a2;
  (*(TextEngine **)((char *)this + 0x24))->setBottomText();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Status;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 4;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"STATUS",6);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,5);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Power;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 6;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"POWER",5);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,7);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Inv;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 8;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"INV",3);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,9);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Modules;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 10;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"MODULES",7);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Module;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0xc;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"MODULE",6);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xd);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Rotate;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0xe;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"ROT",3);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xf);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  ((Command *)local_54)->~Command();
  local_1e4 = (TerminalEngine *)&ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = cmd_Burn;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  // [seh] local_8._0_1_ = 0x10;
  uStack_23c = 0;
  abStack_24c[0] = (std::string)0x0;
  pSStack_228 = this;
  ghidra::str::assign(abStack_24c,"BURN",4);
  // [seh] local_8._0_1_ = 0;
  paVar5 = (allocator<Command> *)new ((void *)(local_54)) UpgradeCommand();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x11);
  if (*(WeaponCommand **)((char *)this + 0x34) == *(WeaponCommand **)((char *)this + 0x30)) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x2c),*(WeaponCommand **)((char *)this + 0x30),(WeaponCommand *)paVar5);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar5,pCVar7,pCVar6);
    *(int *)((char *)this + 0x30) = *(int *)((char *)this + 0x30) + 0x40;
  }
  // [seh] local_8 = local_8 & 0xffffff00;
  ((Command *)local_54)->~Command();
  updateScreenCall(this);
  (local_1dc)->~Widget();
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall Screen_Terminal::onKeyReleased(Screen_Terminal *this,KeyCode param_1,Event *param_2)
bool Screen_Terminal::onKeyReleased(KeyCode param_1, Event * param_2)

{
  bool bVar1;
  
  bVar1 = (*(TerminalEngine **)((char *)this + 0x28))->keyReleased(param_1);
  return bVar1;
}


// Ghidra: void __thiscall Screen_Terminal::executeCommand(Screen_Terminal *this,char *param_2)
void Screen_Terminal::executeCommand(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  std::string abStack_7c [8];
  undefined4 uStack_74;
  void *local_50 [3];
  ghidra::vector local_44 [4];
  undefined4 local_40;
  uint local_3c;
  int local_38;
  Screen_Terminal *local_34;
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
  pTVar9 = *(TextEngine **)((char *)this + 0x24);
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
  uStack_74 = 0x54ae40;
  (pTVar9)->addLinef(*(char **)((char *)this + 0x24));
  local_40 = 0;
  local_3c = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_50,"",0);
  pTVar9 = *(TextEngine **)((char *)this + 0x24);
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
  iVar13 = *(int *)((char *)this + 0x30);
  local_38 = *(int *)(local_34 + 0x2c);
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
        piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x2c) + 0x3c);
        if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar1 + 8))();
        ghidra::lib::vector___Tidy(local_44);
        goto LAB_0054b05a;
      }
      uVar14 = uVar14 + 1;
      iVar13 = *(int *)(local_34 + 0x30);
    } while (uVar14 < (uint)(iVar13 - local_38 >> 6));
  }
  pSVar4 = local_34;
  bVar5 = ghidra::lib::_Traits_equal___x28_x29("HELP",4,pcVar6,unaff_EDI);
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
        bVar5 = ghidra::lib::_Traits_equal___x28_x29(pcVar8,uVar12,pcVar6,unaff_EDI);
        if (bVar5) {
          ghidra::lib::vector__vector(local_44,(ghidra::vector *)&stack0x0000001c);
          pSVar4 = local_34;
          local_30 = 1;
          // [seh] local_8._0_1_ = 6;
          piVar1 = *(int **)(uVar14 * 0x40 + *(int *)(local_34 + 0x2c) + 0x3c);
          if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar1 + 8))();
          // [seh] local_8 = CONCAT31(local_8._1_3_,2);
          ghidra::lib::vector___Tidy(local_44);
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
    ghidra::str::assign((std::string *)local_50,"Unknown command.",0x10);
    pTVar9 = *(TextEngine **)(pSVar4 + 0x24);
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
LAB_0054b11b:
    pTVar9 = *(TextEngine **)(local_34 + 0x24);
  }
LAB_0054b055:
  (pTVar9)->render();
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
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x0000001c);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_Terminal::updateScreenCall(Screen_Terminal *this)
void Screen_Terminal::updateScreenCall()

{
  undefined4 *puVar1;
  char acStack_2c [12];
  undefined4 uStack_20;
  Color3B local_7 [3];
  
  uStack_20 = 0x54b1cb;
  cocos2d::Color3B::Color3B(local_7,'\0','\0',0xff);
  puVar1 = (undefined4 *)(*(int *)((char *)this + 0x28) + 0x90);
  if (0xf < *(uint *)(*(int *)((char *)this + 0x28) + 0xa4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  strUsingArgs(acStack_2c,"SYS> `%%%s%c",puVar1,3);
  (*(TextEngine **)((char *)this + 0x24))->setBottomText();
  (*(TextEngine **)((char *)this + 0x24))->render();
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Status(Screen_Terminal *this,char param_1)
void Screen_Terminal::cmd_Status(char param_1)

{
  char stack0xffffffcc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  SystemManager *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  TextEngine *this_04;
  TextEngine *this_05;
  char *pcVar1;
  uint uVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8758;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    ((TextEngine *)this)->addLinef(*(char **)((char *)this + 0x24));
    (this_01)->addLinef(*(char **)((char *)this + 0x24));
    (this_02)->addLinef(*(char **)((char *)this + 0x24));
    (*(SystemManager **)(*(int *)((char *)this + 0x14) + 0x40))->totalPowerGeneration();
    (*(SystemManager **)(*(int *)((char *)this + 0x14) + 0x40))->totalPowerGeneration();
    (this_03)->addLinef(*(char **)((char *)this + 0x24));
    (*(SystemManager **)(*(int *)((char *)this + 0x14) + 0x40))->totalPossiblePower();
    (*(SystemManager **)(*(int *)((char *)this + 0x14) + 0x40))->totalCurrentPower();
    (this_04)->addLinef(*(char **)((char *)this + 0x24));
    this_00 = *(SystemManager **)(*(int *)((char *)this + 0x14) + 0x40);
    (this_00)->totalPowerDrain();
    (this_00)->totalPowerGeneration();
    (this_05)->addLinef(*(char **)((char *)this + 0x24));
    switch(*(undefined4 *)(*(int *)((char *)this + 0x14) + 0xd4)) {
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
  ghidra::str::assign((std::string *)&stack0xffffffcc,pcVar1,uVar2);
  (*(TextEngine **)((char *)this + 0x24))->addLine();
switchD_0054b390_default:
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Power(Screen_Terminal *this,char param_1,int param_3,int param_4)
void Screen_Terminal::cmd_Power(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c78a8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if ((param_1 == '\0') &&
     (iVar1 = param_4 - param_3 >> 0x1f, (param_4 - param_3) / 0x18 + iVar1 != iVar1)) {
    iVar1 = *(int *)(g_gameData + 0xd0);
    bVar5 = ghidra::lib::_Traits_equal___x28_x29("DRAIN",5,pcVar6,unaff_EDI);
    if (bVar5) {
      uVar8 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x3c) + uVar8 * 4);
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
              if (pTVar7[99] != (byte)0x0) {
                if (pTVar7[0x62] == (byte)0x0) {
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
              (pTVar7)->addLinef(*(char **)((char *)this + 0x24));
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_0054b7dd;
    }
    bVar5 = ghidra::lib::_Traits_equal___x28_x29("GEN",3,pcVar6,unaff_EDI);
    if (bVar5) {
      uVar8 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          pSVar4 = *(ShipModule **)
                    (*(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x3c) + uVar8 * 4);
          if ((pSVar4[99] != (byte)0x0) &&
             ((pSVar4)->getCurrentGenerationRate(), 0.0 < in_XMM0._0_4_)) {
            pTVar7 = *(TextEngine **)(iVar1 + 0x40);
            pSVar4 = *(ShipModule **)(*(int *)(pTVar7 + 0x3c) + uVar8 * 4);
            if (pSVar4[99] == (byte)0x0) {
              in_XMM0 = ZEXT816(0);
            }
            else {
              (pSVar4)->getCurrentGenerationRate();
              pTVar7 = *(TextEngine **)(iVar1 + 0x40);
            }
            in_XMM0._0_8_ = (double)in_XMM0._0_4_;
            local_3c = (char *)0x54b6be;
            (pTVar7)->addLinef(*(char **)((char *)this + 0x24));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_0054b7dd;
    }
    bVar5 = ghidra::lib::_Traits_equal___x28_x29("STORE",5,pcVar6,unaff_EDI);
    if (bVar5) {
      pTVar7 = *(TextEngine **)(iVar1 + 0x40);
      uVar8 = 0;
      if (*(int *)(pTVar7 + 0x40) - *(int *)(pTVar7 + 0x3c) >> 2 != 0) {
        do {
          if (0.0 < *(float *)(*(int *)(*(int *)(*(int *)(pTVar7 + 0x3c) + uVar8 * 4) + 8) + 0xc4))
          {
            local_3c = "`%%%s`2: storing `$%.2fmw`2/`$%.2fmw";
            (pTVar7)->addLinef(*(char **)((char *)this + 0x24));
            pTVar7 = *(TextEngine **)(iVar1 + 0x40);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(pTVar7 + 0x40) - *(int *)(pTVar7 + 0x3c) >> 2));
      }
      ((SystemManager *)pTVar7)->getCurrentPowerPercentage();
      (*(SystemManager **)(iVar1 + 0x40))->totalPossiblePower();
      (*(SystemManager **)(iVar1 + 0x40))->totalCurrentPower();
      local_3c = "`2Total power: `$%.2fmw`2/`$%.2fmw (%d%%)";
      (this_00)->addLinef(*(char **)((char *)this + 0x24));
      goto LAB_0054b7dd;
    }
  }
  local_3c = (char *)((uint)local_3c & 0xffffff00);
  ghidra::str::assign
            ((std::string *)&local_3c,
             "`3POWER`2 (DRAIN,GEN,STORE): display power storage, or items currently draining or generating power"
             ,99);
  (*(TextEngine **)((char *)this + 0x24))->addLine();
LAB_0054b7dd:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Inv(Screen_Terminal *this,char param_1)
void Screen_Terminal::cmd_Inv(char param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff70[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c89e0;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (param_1 == '\0') {
    local_60 = (GameData *)0xc;
    iVar8 = 1;
    do {
      if (iVar8 + -1 < *(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x1f8) + 8)) {
        this_00 = *(CargoPod **)(local_60 + *(int *)(*(int *)((char *)this + 0x14) + 0x1f8));
        if (this_00 == (CargoPod *)0x0) {
          ((TextEngine *)local_60)->addLinef(*(char **)((char *)this + 0x24));
        }
        else if ((*(int *)(this_00 + 8) < 1) || (*(int *)(this_00 + 4) == -1)) {
          (this_00)->describeAddons();
          // [seh] local_8._0_1_ = 3;
          (this_02)->addLinef(*(char **)((char *)this + 0x24));
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
          pGVar2 = (local_60)->getGood(*(int *)(this_00 + 4));
          if (pGVar2 == (Good *)0x0) {
            (this_00)->describeAddons();
            // [seh] local_8._0_1_ = 2;
            (this_01)->addLinef(*(char **)((char *)this + 0x24));
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
            pTVar3 = (TextEngine *)(this_00)->describeAddons();
            // [seh] local_8._0_1_ = 1;
            if (0xf < *(uint *)(pTVar3 + 0x14)) {
              pTVar3 = *(TextEngine **)pTVar3;
            }
            (pTVar3)->addLinef(*(char **)((char *)this + 0x24));
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
    piVar7 = (int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x1f8) + 0x10);
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
    (pTVar3)->addLinef(*(char **)((char *)this + 0x24));
  }
  else {
    ghidra::str::assign
              ((std::string *)&stack0xffffff70,"`3INV`2: display ship\'s hold contents",0x25);
    (*(TextEngine **)((char *)this + 0x24))->addLine();
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Modules(Screen_Terminal *this,char param_1)
void Screen_Terminal::cmd_Modules(char param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c8a49;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_7 = 0;
  if (param_1 == '\0') {
    iVar3 = *(int *)((char *)this + 0x14);
    local_60 = 0;
    if (*(int *)(*(int *)(iVar3 + 0x40) + 0x40) - *(int *)(*(int *)(iVar3 + 0x40) + 0x3c) >> 2 != 0)
    {
      do {
        iVar1 = local_60 * 4;
        local_60 = local_60 + 1;
        local_90 = 0x54bbe1;
        TextEngine::addLinef
                  (*(TextEngine **)(*(int *)(*(int *)(*(int *)(iVar3 + 0x40) + 0x3c) + iVar1) + 8),
                   *(char **)((char *)this + 0x24));
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        // [seh] local_8 = 1;
        cVar2 = (**(code **)(**(int **)(iVar1 + *(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) +
                                                        0x3c)) + 0x14))();
        if (cVar2 == '\0') {
          iVar3 = *(int *)(iVar1 + *(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x3c));
          if (*(char *)(iVar3 + 99) == '\0') {
            ghidra::str::append((std::string *)local_44," `2(`7disconnected`2)",0x15);
          }
          else {
            _local_8 = CONCAT31(uStack_7,2);
            iVar3 = ComponentInterfaceInstance::damagePercent
                              (*(ComponentInterfaceInstance **)(iVar3 + 0xc));
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            ghidra::str::assign((std::string *)local_2c,"`0nominal",9);
            if (iVar3 == 0) {
              uVar8 = 0x10;
              pcVar7 = "`4non-functional";
LAB_0054bcb5:
              ghidra::str::assign((std::string *)local_2c,pcVar7,uVar8);
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
            // [seh] local_8 = 3;
            pcVar7 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar7 = *(char **)pcVar4;
            }
            ghidra::str::append((std::string *)local_44,pcVar7,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8 = 2;
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
            // [seh] local_8 = 1;
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
                        (*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x3c) + iVar1) +
                        0xc));
            pcVar4 = (char *)strUsingArgs((char *)local_5c);
            // [seh] local_8 = 4;
            pcVar7 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar7 = *(char **)pcVar4;
            }
            ghidra::str::append((std::string *)local_44,pcVar7,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8 = 1;
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
          ghidra::str::append((std::string *)local_44," `2(`@nonfunctional`2)",0x16);
        }
        ghidra::str::ctor((std::string *)&local_90,(std::string *)local_44);
        (*(TextEngine **)((char *)this + 0x24))->addLine();
        // [seh] local_8 = 0;
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
        iVar3 = *(int *)((char *)this + 0x14);
      } while (local_60 <
               (uint)(*(int *)(*(int *)(iVar3 + 0x40) + 0x40) -
                      *(int *)(*(int *)(iVar3 + 0x40) + 0x3c) >> 2));
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
    ghidra::str::assign
              ((std::string *)&local_90,"`3MODULES`2: itemise all ship modules",0x25);
    (*(TextEngine **)((char *)this + 0x24))->addLine();
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Module(Screen_Terminal *this,char param_1,char *param_3,int param_4)
void Screen_Terminal::cmd_Module(char param_1, char * param_3, int param_4)

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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c78a8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
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
         (pTVar5 = *(TextEngine **)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x3c),
         (uint)(*(int *)(*(int *)(*(int *)((char *)this + 0x14) + 0x40) + 0x40) - (int)pTVar5 >> 2) <= uVar7
         )) {
        local_3c = (uint)local_3c._1_3_ << 8;
        ghidra::str::assign
                  ((std::string *)&local_3c,"`$Error: invalid module number",0x1e);
        (*(TextEngine **)((char *)this + 0x24))->addLine();
      }
      else {
        piVar1 = *(int **)(pTVar5 + uVar7 * 4);
        if (piVar1 == (int *)0x0) {
          local_3c = (uint)local_3c._1_3_ << 8;
          ghidra::str::assign((std::string *)&local_3c,"`7**empty**",0xb);
          (*(TextEngine **)((char *)this + 0x24))->addLine();
        }
        else {
          (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
          (this_00)->addLinef(*(char **)((char *)this + 0x24));
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
          ghidra::str::assign((std::string *)&local_3c,pcVar10,uVar7);
          (*(TextEngine **)((char *)this + 0x24))->addLine();
          ((ComponentInterfaceInstance *)piVar1[3])->getEfficiencyPercent();
          (this_01)->addLinef(*(char **)((char *)this + 0x24));
          piVar6 = (int *)piVar1[3];
          pTVar5 = (TextEngine *)*piVar6;
          if (*(int *)(pTVar5 + 0x54) - *(int *)(pTVar5 + 0x50) >> 2 != 0) {
            iVar4 = 0;
            pTVar8 = (TextEngine *)&DAT_00000001;
            do {
              iVar2 = *(int *)(iVar4 + 4 + (int)piVar6);
              if (*(char *)((int)piVar1 + 99) == '\0') {
                if (iVar2 == 0) {
                  (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
                  pTVar5 = extraout_ECX_02;
                }
                else {
                  local_3c = 0x54c0b8;
                  (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
                  pTVar5 = extraout_ECX_01;
                }
                iVar2 = *(int *)(iVar4 + 0x54 + piVar1[3]);
              }
              else {
                if (iVar2 == 0) {
                  (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
                  pTVar5 = extraout_ECX_00;
                }
                else {
                  local_3c = 0x54c033;
                  (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
                  pTVar5 = extraout_ECX;
                }
                iVar2 = *(int *)(iVar4 + 0x54 + piVar1[3]);
              }
              if (iVar2 != 0) {
                (pTVar5)->addLinef(*(char **)((char *)this + 0x24));
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
    ghidra::str::assign
              ((std::string *)&local_3c,
               "`3MODULE`2 [module number]: show details about a ship module",0x3c);
    (*(TextEngine **)((char *)this + 0x24))->addLine();
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_Terminal::showCommandList(Screen_Terminal *this)
void Screen_Terminal::showCommandList()

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
  (*(TextEngine **)((char *)this + 0x24))->addLine();
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"`%SysTerm 1.0.8 `7(c) by Purchase Tech",0x26);
  (*(TextEngine **)((char *)this + 0x24))->addLine();
  local_58[0] = (std::string)0x0;
  ghidra::str::assign(local_58,"`0Valid commands:",0x11);
  (*(TextEngine **)((char *)this + 0x24))->addLine();
  local_14 = 0;
  if (*(int *)((char *)this + 0x30) - *(int *)((char *)this + 0x2c) >> 6 != 0) {
    do {
      uStack_50 = 0x54c2af;
      strUsingArgs((char *)local_30);
      pTVar1 = *(TextEngine **)((char *)this + 0x24);
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
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) goto LAB_0054c392;
        }
        operator_delete(pvVar2,pnVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((char *)this + 0x30) - *(int *)((char *)this + 0x2c) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_30,"`3HELP",6);
  pTVar1 = *(TextEngine **)((char *)this + 0x24);
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
LAB_0054c392:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Rotate(Screen_Terminal *this,char param_1,char *param_3,int param_4)
void Screen_Terminal::cmd_Rotate(char param_1, char * param_3, int param_4)

{
  int iVar1;
  uint uVar2;
  Ship *pSVar3;
  char *pcVar4;
  std::string local_34 [4];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8758;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
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
  local_34[0] = (std::string)0x0;
  ghidra::str::assign(local_34,pcVar4,uVar2);
LAB_0054c4a5:
  (*(TextEngine **)((char *)this + 0x24))->addLine();
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Screen_Terminal::cmd_Burn(Screen_Terminal *this,char param_1,int param_3,int param_4)
void Screen_Terminal::cmd_Burn(char param_1, int param_3, int param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  char *pcVar3;
  Ship *pSVar4;
  uint unaff_EDI;
  std::string local_38 [4];
  undefined4 uStack_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8a78;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if ((param_1 == '\0') &&
     (iVar1 = param_4 - param_3 >> 0x1f, (param_4 - param_3) / 0x18 + iVar1 != iVar1)) {
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("ON",2,pcVar3,unaff_EDI);
    if (bVar2) {
      pSVar4 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar4 = *(Ship **)(g_gameData + 0xd0);
      }
      uStack_34 = 0x54c569;
      ShipInterface::doBurnMainEngine(pSVar4,0,0,0);
      goto LAB_0054c5dd;
    }
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("OFF",3,pcVar3,unaff_EDI);
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
  local_38[0] = (std::string)0x0;
  ghidra::str::assign(local_38,"`3BURN`2 [on/off]: enable or disable main drive",0x2f);
  (*(TextEngine **)((char *)this + 0x24))->addLine();
LAB_0054c5dd:
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_3);
  // [seh] ExceptionList = local_10;
  return;
}
