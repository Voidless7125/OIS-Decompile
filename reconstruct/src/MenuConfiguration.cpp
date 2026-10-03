// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl MenuConfiguration::configureMenus(void)
void MenuConfiguration::configureMenus()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff30[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  std::string *pbVar2;
  MetaGameAction **ppMVar3;
  AnimationFrames **ppAVar4;
  char *pcVar5;
  undefined4 *puVar6;
  std::string *pbVar7;
  GameData *pGVar8;
  bool bVar9;
  std::string *pbVar10;
  Menu *pMVar11;
  MetaGameAction *pMVar12;
  MenuItem *pMVar13;
  MenuManager *pMVar14;
  AnimationFrames *pAVar15;
  std::string *pbVar16;
  char *pcVar17;
  void *pvVar18;
  nothrow_t *pnVar19;
  ghidra::func_class *p_Var20;
  char *unaff_EDI;
  ghidra::vector *this_;
  undefined4 *puVar21;
  std::string local_cc [8];
  undefined4 uStack_c4;
  MenuItem local_b4 [12];
  undefined4 uStack_a8;
  MetaGameAction local_9c [12];
  undefined4 uStack_90;
  int local_70;
  MetaGameAction *local_64;
  MenuItem *local_60;
  MetaGameAction *local_5c;
  MetaGameAction *local_58;
  MetaGameAction *local_54;
  undefined **local_50;
  code *local_4c;
  void *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ghidra::func_class *p_Stack_2c;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005c5cc9;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar10 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = pbVar10;
  pMVar11 = operator_new(0x378);
  local_5c = local_9c;
  local_14 = 0;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529629;
  local_54 = (MetaGameAction *)pMVar11;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 1;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"",0);
  local_14._0_1_ = 2;
  ghidra::str::assign((std::string *)&stack0xffffff30,"",0);
  local_14 = (uint)local_14._1_3_ << 8;
  pMVar12 = (MetaGameAction *)new ((void *)(pMVar11)) Menu(0);
  local_14 = 0xffffffff;
  local_30 = 0;
  p_Stack_2c = (ghidra::func_class *)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x5296b7;
  local_58 = pMVar12;
  ghidra::str::assign((std::string *)&local_40,"menu_main",9);
  pvVar18 = local_40;
  local_14 = 3;
  pbVar2 = *(std::string **)(pMVar12 + 0x314);
  if (*(std::string **)(pMVar12 + 0x318) == pbVar2) {
    uStack_90 = 0x5296f6;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pMVar12 + 0x310),pbVar2,(std::string *)&local_40);
    p_Var20 = p_Stack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *(void **)pbVar2 = pvVar18;
    *(undefined4 *)(pbVar2 + 4) = uStack_3c;
    *(undefined4 *)(pbVar2 + 8) = uStack_38;
    *(undefined4 *)(pbVar2 + 0xc) = uStack_34;
    *(undefined4 *)(pbVar2 + 0x10) = local_30;
    *(ghidra::func_class **)(pbVar2 + 0x14) = p_Stack_2c;
    *(int *)(pMVar12 + 0x314) = *(int *)(pMVar12 + 0x314) + 0x18;
    p_Var20 = (ghidra::func_class *)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < p_Var20) {
    pnVar19 = (nothrow_t *)((int)p_Var20 + 1);
    pvVar18 = local_40;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)local_40 + -4);
      pnVar19 = (nothrow_t *)((int)p_Var20 + 0x24);
      if (0x1f < (uint)((int)local_40 + (-4 - (int)pvVar18))) {
LAB_00529723:
        local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_90 = 0x529730;
    operator_delete(pvVar18,pnVar19);
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 4;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x52976b;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 5;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign
            ((std::string *)local_b4,"selectscenario=objectsinspace,selectsaveslot=0,menu=1",0x35
            );
  local_14._0_1_ = 6;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Story",5);
  local_14 = CONCAT31(local_14._1_3_,4);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  this_ = (ghidra::vector *)(pMVar12 + 0x31c);
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x5297f5;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 7;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x52982d;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 8;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=2",6);
  local_14._0_1_ = 9;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Scenarios",9);
  local_14 = CONCAT31(local_14._1_3_,7);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x5298af;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 10;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x5298e7;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0xb;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=3",6);
  local_14._0_1_ = 0xc;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"LAN",3);
  local_14 = CONCAT31(local_14._1_3_,10);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529969;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 0xd;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x5299a1;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0xe;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=7",6);
  local_14._0_1_ = 0xf;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"News",4);
  local_14 = CONCAT31(local_14._1_3_,0xd);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529a23;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 0x10;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529a5b;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x11;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=8",6);
  local_14._0_1_ = 0x12;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Credits",7);
  local_14 = CONCAT31(local_14._1_3_,0x10);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529add;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 0x13;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529b15;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x14;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=4",6);
  local_14._0_1_ = 0x15;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Options",7);
  local_14 = CONCAT31(local_14._1_3_,0x13);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529b97;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 0x16;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529bcf;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x17;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=5",6);
  local_14._0_1_ = 0x18;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Input Config",0xc);
  local_14 = CONCAT31(local_14._1_3_,0x16);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529c51;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar13 = operator_new(0x68);
  local_5c = local_9c;
  local_14 = 0x19;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529c89;
  local_54 = (MetaGameAction *)pMVar13;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x1a;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"menu=6",6);
  local_14._0_1_ = 0x1b;
  local_cc[0] = (std::string)0x0;
  ghidra::str::assign(local_cc,"Quit Game",9);
  local_14 = CONCAT31(local_14._1_3_,0x19);
  local_64 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
  local_14 = 0xffffffff;
  ppMVar3 = *(MetaGameAction ***)(pMVar12 + 800);
  if (*(MetaGameAction ***)(pMVar12 + 0x324) == ppMVar3) {
    uStack_90 = 0x529d0b;
    ghidra::lib::vector___Emplace_reallocate(this_,ppMVar3,&local_64);
  }
  else {
    *ppMVar3 = local_64;
    *(int *)(pMVar12 + 800) = *(int *)(pMVar12 + 800) + 4;
  }
  pMVar14 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (MenuManager *)0x0) {
    pMVar14 = operator_new(0x10);
    ghidra::Singleton<void>::instance = pMVar14;
    *(undefined4 *)pMVar14 = 0;
    *(undefined4 *)(pMVar14 + 4) = 0;
    *(undefined4 *)(pMVar14 + 8) = 0;
    *(undefined4 *)(pMVar14 + 0xc) = 0;
    local_54 = (MetaGameAction *)pMVar14;
  }
  ppAVar4 = *(AnimationFrames ***)(pMVar14 + 8);
  if (*(AnimationFrames ***)(pMVar14 + 0xc) == ppAVar4) {
    uStack_90 = 0x529d61;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pMVar14 + 4),ppAVar4,(AnimationFrames **)&local_58);
  }
  else {
    *ppAVar4 = (AnimationFrames *)pMVar12;
    *(int *)(pMVar14 + 8) = *(int *)(pMVar14 + 8) + 4;
  }
  pMVar11 = operator_new(0x378);
  local_5c = local_9c;
  local_14 = 0x1c;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529d9c;
  local_54 = (MetaGameAction *)pMVar11;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x1d;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"",0);
  local_14._0_1_ = 0x1e;
  ghidra::str::assign((std::string *)&stack0xffffff30,"Story",5);
  local_14 = CONCAT31(local_14._1_3_,0x1c);
  pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(1);
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  p_Stack_2c = (ghidra::func_class *)&local_50;
  local_4c = updateWithSaveSlots;
  local_58 = (MetaGameAction *)pAVar15;
  ghidra::lib::_Func_class___Swap(p_Stack_2c,(ghidra::func_class *)(pAVar15 + 0x328));
  local_14 = 0x1f;
  if (p_Stack_2c != (ghidra::func_class *)0x0) {
    (**(code **)(*(int *)p_Stack_2c + 0x10))();
  }
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  p_Stack_2c = (ghidra::func_class *)&local_50;
  local_4c = saveSlotIsSelected;
  ghidra::lib::_Func_class___Swap(p_Stack_2c,(ghidra::func_class *)(pAVar15 + 0x350));
  local_14 = 0x20;
  if (p_Stack_2c != (ghidra::func_class *)0x0) {
    (**(code **)(*(int *)p_Stack_2c + 0x10))();
  }
  local_14 = 0xffffffff;
  local_30 = 0;
  p_Stack_2c = (ghidra::func_class *)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x529ea7;
  ghidra::str::assign((std::string *)&local_40,"starting_new_game",0x11);
  pvVar18 = local_40;
  local_14 = 0x21;
  pbVar2 = *(std::string **)(pAVar15 + 0x314);
  if (*(std::string **)(pAVar15 + 0x318) == pbVar2) {
    uStack_90 = 0x529ee6;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pAVar15 + 0x310),pbVar2,(std::string *)&local_40);
    p_Var20 = p_Stack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *(void **)pbVar2 = pvVar18;
    *(undefined4 *)(pbVar2 + 4) = uStack_3c;
    *(undefined4 *)(pbVar2 + 8) = uStack_38;
    *(undefined4 *)(pbVar2 + 0xc) = uStack_34;
    *(undefined4 *)(pbVar2 + 0x10) = local_30;
    *(ghidra::func_class **)(pbVar2 + 0x14) = p_Stack_2c;
    *(int *)(pAVar15 + 0x314) = *(int *)(pAVar15 + 0x314) + 0x18;
    p_Var20 = (ghidra::func_class *)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < p_Var20) {
    pnVar19 = (nothrow_t *)((int)p_Var20 + 1);
    pvVar18 = local_40;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)local_40 + -4);
      pnVar19 = (nothrow_t *)((int)p_Var20 + 0x24);
      if (0x1f < (uint)((int)local_40 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_90 = 0x529f20;
    operator_delete(pvVar18,pnVar19);
  }
  pMVar14 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (MenuManager *)0x0) {
    pMVar14 = operator_new(0x10);
    ghidra::Singleton<void>::instance = pMVar14;
    *(undefined4 *)pMVar14 = 0;
    *(undefined4 *)(pMVar14 + 4) = 0;
    *(undefined4 *)(pMVar14 + 8) = 0;
    *(undefined4 *)(pMVar14 + 0xc) = 0;
    local_54 = (MetaGameAction *)pMVar14;
  }
  ppAVar4 = *(AnimationFrames ***)(pMVar14 + 8);
  if (*(AnimationFrames ***)(pMVar14 + 0xc) == ppAVar4) {
    uStack_90 = 0x529f76;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pMVar14 + 4),ppAVar4,(AnimationFrames **)&local_58);
  }
  else {
    *ppAVar4 = pAVar15;
    *(int *)(pMVar14 + 8) = *(int *)(pMVar14 + 8) + 4;
  }
  pMVar11 = operator_new(0x378);
  local_5c = local_9c;
  local_14 = 0x22;
  local_9c[0] = (byte)0x0;
  uStack_a8 = 0x529fb1;
  local_54 = (MetaGameAction *)pMVar11;
  ghidra::str::assign((std::string *)local_9c,"",0);
  local_60 = local_b4;
  local_14._0_1_ = 0x23;
  local_b4[0] = (byte)0x0;
  ghidra::str::assign((std::string *)local_b4,"",0);
  local_14._0_1_ = 0x24;
  ghidra::str::assign((std::string *)&stack0xffffff30,"Scenarios",9);
  local_14 = CONCAT31(local_14._1_3_,0x22);
  pMVar12 = (MetaGameAction *)new ((void *)(pMVar11)) Menu(2);
  local_14 = 0xffffffff;
  local_30 = 0;
  p_Stack_2c = (ghidra::func_class *)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x52a03c;
  local_58 = pMVar12;
  ghidra::str::assign((std::string *)&local_40,"submenu_scenarios",0x11);
  pvVar18 = local_40;
  local_14 = 0x25;
  pbVar2 = *(std::string **)(pMVar12 + 0x314);
  if (*(std::string **)(pMVar12 + 0x318) == pbVar2) {
    uStack_90 = 0x52a07b;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pMVar12 + 0x310),pbVar2,(std::string *)&local_40);
    p_Var20 = p_Stack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *(void **)pbVar2 = pvVar18;
    *(undefined4 *)(pbVar2 + 4) = uStack_3c;
    *(undefined4 *)(pbVar2 + 8) = uStack_38;
    *(undefined4 *)(pbVar2 + 0xc) = uStack_34;
    *(undefined4 *)(pbVar2 + 0x10) = local_30;
    *(ghidra::func_class **)(pbVar2 + 0x14) = p_Stack_2c;
    *(int *)(pMVar12 + 0x314) = *(int *)(pMVar12 + 0x314) + 0x18;
    p_Var20 = (ghidra::func_class *)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < p_Var20) {
    pnVar19 = (nothrow_t *)((int)p_Var20 + 1);
    pvVar18 = local_40;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)local_40 + -4);
      pnVar19 = (nothrow_t *)((int)p_Var20 + 0x24);
      if (0x1f < (uint)((int)local_40 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_90 = 0x52a0b5;
    operator_delete(pvVar18,pnVar19);
  }
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  p_Stack_2c = (ghidra::func_class *)&local_50;
  local_4c = updateWithSinglePlayerScenarioCategories;
  ghidra::lib::_Func_class___Swap(p_Stack_2c,(ghidra::func_class *)(pMVar12 + 0x328));
  local_14 = 0x26;
  if (p_Stack_2c != (ghidra::func_class *)0x0) {
    (**(code **)(*(int *)p_Stack_2c + 0x10))();
    p_Stack_2c = (ghidra::func_class *)0x0;
  }
  local_14 = 0xffffffff;
  pMVar14 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (MenuManager *)0x0) {
    pMVar14 = operator_new(0x10);
    ghidra::Singleton<void>::instance = pMVar14;
    *(undefined4 *)pMVar14 = 0;
    *(undefined4 *)(pMVar14 + 4) = 0;
    *(undefined4 *)(pMVar14 + 8) = 0;
    *(undefined4 *)(pMVar14 + 0xc) = 0;
    local_54 = (MetaGameAction *)pMVar14;
  }
  ppAVar4 = *(AnimationFrames ***)(pMVar14 + 8);
  if (*(AnimationFrames ***)(pMVar14 + 0xc) == ppAVar4) {
    uStack_90 = 0x52a158;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(pMVar14 + 4),ppAVar4,(AnimationFrames **)&local_58);
  }
  else {
    *ppAVar4 = (AnimationFrames *)pMVar12;
    *(int *)(pMVar14 + 8) = *(int *)(pMVar14 + 8) + 4;
  }
  local_70 = 0;
  do {
    if ((local_70 != 7) && (local_70 != 0)) {
      pMVar11 = operator_new(0x378);
      local_14 = 0x27;
      local_54 = local_9c;
      pcVar5 = (&PTR_s_Testing_005e1d84)[local_70];
      local_64 = (MetaGameAction *)(pcVar5 + 1);
      local_9c[0] = (byte)0x0;
      pcVar17 = pcVar5;
      do {
        cVar1 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar1 != '\0');
      uStack_a8 = 0x52a1c3;
      ghidra::str::assign((std::string *)local_9c,pcVar5,(int)pcVar17 - (int)local_64);
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x28;
      local_b4[0] = (byte)0x0;
      ghidra::str::assign((std::string *)local_b4,"",0);
      local_14._0_1_ = 0x29;
      pcVar5 = (&PTR_s_Testing_005e1d84)[local_70];
      local_64 = (MetaGameAction *)(pcVar5 + 1);
      pcVar17 = pcVar5;
      do {
        cVar1 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar1 != '\0');
      ghidra::str::assign
                ((std::string *)&stack0xffffff30,pcVar5,(int)pcVar17 - (int)local_64);
      local_14 = CONCAT31(local_14._1_3_,0x27);
      pMVar12 = (MetaGameAction *)new ((void *)(pMVar11)) Menu(local_70 + 0x14);
      local_14 = 0xffffffff;
      local_30 = 0;
      p_Stack_2c = (ghidra::func_class *)0xf;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      uStack_90 = 0x52a26a;
      local_64 = pMVar12;
      local_58 = pMVar12;
      ghidra::str::assign((std::string *)&local_40,"submenu_scenariolist",0x14);
      pvVar18 = local_40;
      local_14 = 0x2a;
      pbVar2 = *(std::string **)(pMVar12 + 0x314);
      if (*(std::string **)(pMVar12 + 0x318) == pbVar2) {
        uStack_90 = 0x52a2a9;
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(pMVar12 + 0x310),pbVar2,(std::string *)&local_40);
        p_Var20 = p_Stack_2c;
      }
      else {
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        *(void **)pbVar2 = pvVar18;
        *(undefined4 *)(pbVar2 + 4) = uStack_3c;
        *(undefined4 *)(pbVar2 + 8) = uStack_38;
        *(undefined4 *)(pbVar2 + 0xc) = uStack_34;
        *(undefined4 *)(pbVar2 + 0x10) = local_30;
        *(ghidra::func_class **)(pbVar2 + 0x14) = p_Stack_2c;
        *(int *)(pMVar12 + 0x314) = *(int *)(pMVar12 + 0x314) + 0x18;
        p_Var20 = (ghidra::func_class *)0xf;
      }
      local_14 = 0xffffffff;
      if (0xf < p_Var20) {
        pnVar19 = (nothrow_t *)((int)p_Var20 + 1);
        pvVar18 = local_40;
        if ((nothrow_t *)0xfff < pnVar19) {
          pvVar18 = *(void **)((int)local_40 + -4);
          pnVar19 = (nothrow_t *)((int)p_Var20 + 0x24);
          if (0x1f < (uint)((int)local_40 + (-4 - (int)pvVar18))) goto LAB_00529723;
        }
        uStack_90 = 0x52a2e1;
        operator_delete(pvVar18,pnVar19);
      }
      local_50 = std::_Func_impl_no_alloc<>::vftable;
      p_Stack_2c = (ghidra::func_class *)&local_50;
      local_4c = scenarioIsSelected;
      ghidra::lib::_Func_class___Swap(p_Stack_2c,(ghidra::func_class *)(pMVar12 + 0x350));
      local_14 = 0x2b;
      if (p_Stack_2c != (ghidra::func_class *)0x0) {
        (**(code **)(*(int *)p_Stack_2c + 0x10))();
      }
      local_14 = 0xffffffff;
      uStack_90 = 0x52a33c;
      ghidra::str::assign((std::string *)(pMVar12 + 0x280),"selectscenario=",0xf);
      puVar6 = *(undefined4 **)(g_gameData + 100);
      pMVar14 = ghidra::Singleton<void>::instance;
      for (puVar21 = *(undefined4 **)(g_gameData + 0x60); ghidra::Singleton<void>::instance = pMVar14,
          puVar21 != puVar6; puVar21 = puVar21 + 1) {
        pbVar7 = (std::string *)*puVar21;
        if (*(int *)(pbVar7 + 0x68) == local_70) {
          local_60 = operator_new(0x68);
          local_54 = local_9c;
          local_14 = 0x2c;
          local_9c[0] = (byte)0x0;
          uStack_a8 = 0x52a3a1;
          ghidra::str::assign((std::string *)local_9c,"",0);
          local_14._0_1_ = 0x2d;
          local_5c = (MetaGameAction *)local_b4;
          uStack_c4 = 0x52a3c3;
          strUsingArgs((char *)local_b4);
          local_14._0_1_ = 0x2e;
          ghidra::str::ctor(local_cc,(std::string *)(pbVar7 + 0x18));
          local_14 = CONCAT31(local_14._1_3_,0x2c);
          local_5c = (MetaGameAction *)new ((void *)(local_60)) MenuItem();
          local_14 = 0xffffffff;
          local_54 = local_5c;
          if ((std::string *)(local_5c + 0x4c) != pbVar7) {
            pbVar16 = pbVar7;
            if (0xf < *(uint *)(pbVar7 + 0x14)) {
              pbVar16 = *(std::string **)pbVar7;
            }
            uStack_90 = 0x52a410;
            ghidra::str::assign
                      ((std::string *)(local_5c + 0x4c),(char *)pbVar16,*(uint *)(pbVar7 + 0x10))
            ;
          }
          ppMVar3 = *(MetaGameAction ***)(local_64 + 800);
          if (*(MetaGameAction ***)(local_64 + 0x324) == ppMVar3) {
            uStack_90 = 0x52a436;
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(local_64 + 0x31c),ppMVar3,&local_54);
          }
          else {
            *ppMVar3 = local_5c;
            *(int *)(local_64 + 800) = *(int *)(local_64 + 800) + 4;
          }
        }
        pMVar14 = ghidra::Singleton<void>::instance;
      }
      if (pMVar14 == (MenuManager *)0x0) {
        pMVar14 = operator_new(0x10);
        ghidra::Singleton<void>::instance = pMVar14;
        *(undefined4 *)pMVar14 = 0;
        *(undefined4 *)(pMVar14 + 4) = 0;
        *(undefined4 *)(pMVar14 + 8) = 0;
        *(undefined4 *)(pMVar14 + 0xc) = 0;
      }
      ppAVar4 = *(AnimationFrames ***)(pMVar14 + 8);
      if (*(AnimationFrames ***)(pMVar14 + 0xc) == ppAVar4) {
        uStack_90 = 0x52a4a0;
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(pMVar14 + 4),ppAVar4,(AnimationFrames **)&local_58);
      }
      else {
        *ppAVar4 = (AnimationFrames *)local_64;
        *(int *)(pMVar14 + 8) = *(int *)(pMVar14 + 8) + 4;
      }
    }
    local_70 = local_70 + 1;
    if (7 < local_70) {
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x2f;
      local_9c[0] = (byte)0x0;
      uStack_a8 = 0x52a4e8;
      ghidra::str::assign((std::string *)local_9c,"",0);
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x30;
      local_b4[0] = (byte)0x0;
      ghidra::str::assign((std::string *)local_b4,"",0);
      local_14._0_1_ = 0x31;
      ghidra::str::assign((std::string *)&stack0xffffff30,"LAN",3);
      local_14 = CONCAT31(local_14._1_3_,0x2f);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(3);
      local_14 = 0xffffffff;
      local_30 = 0;
      p_Stack_2c = (ghidra::func_class *)0xf;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      uStack_90 = 0x52a573;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::assign((std::string *)&local_40,"submenu_multi",0xd);
      pvVar18 = local_40;
      local_14 = 0x32;
      pbVar2 = *(std::string **)(pAVar15 + 0x314);
      if (*(std::string **)(pAVar15 + 0x318) == pbVar2) {
        uStack_90 = 0x52a5bb;
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(pAVar15 + 0x310),pbVar2,(std::string *)&local_40);
      }
      else {
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        *(void **)pbVar2 = pvVar18;
        *(undefined4 *)(pbVar2 + 4) = uStack_3c;
        *(undefined4 *)(pbVar2 + 8) = uStack_38;
        *(undefined4 *)(pbVar2 + 0xc) = uStack_34;
        *(ulonglong *)(pbVar2 + 0x10) = CONCAT44(p_Stack_2c,local_30);
        *(int *)(pAVar15 + 0x314) = *(int *)(pAVar15 + 0x314) + 0x18;
        local_30 = 0;
        p_Stack_2c = (ghidra::func_class *)0xf;
      }
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(pAVar15 + 0x328),updateWithMultiplayerOptions);
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x33;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x34;
      ghidra::str::ctor((std::string *)local_b4,"options");
      local_14._0_1_ = 0x35;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Options");
      local_14 = CONCAT31(local_14._1_3_,0x33);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(4);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_options");
      local_14 = 0x36;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x37;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x38;
      ghidra::str::ctor((std::string *)local_b4,"input");
      local_14._0_1_ = 0x39;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Input Configuration");
      local_14 = CONCAT31(local_14._1_3_,0x37);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(5);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_input");
      local_14 = 0x3a;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x3b;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x3c;
      ghidra::str::ctor((std::string *)local_b4,"");
      local_14._0_1_ = 0x3d;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Quit?");
      local_14 = CONCAT31(local_14._1_3_,0x3b);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(6);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      pMVar13 = operator_new(0x68);
      local_54 = local_9c;
      local_14 = 0x3e;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x3f;
      ghidra::str::ctor((std::string *)local_b4,"quit");
      local_14._0_1_ = 0x40;
      ghidra::str::ctor(local_cc,"Yes");
      local_14 = CONCAT31(local_14._1_3_,0x3e);
      local_54 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
      local_14 = 0xffffffff;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x31c),(InputOption **)&local_54);
      pMVar13 = operator_new(0x68);
      local_54 = local_9c;
      local_14 = 0x41;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x42;
      ghidra::str::ctor((std::string *)local_b4,"menu=0");
      local_14._0_1_ = 0x43;
      ghidra::str::ctor(local_cc,"No");
      local_14 = CONCAT31(local_14._1_3_,0x41);
      local_54 = (MetaGameAction *)new ((void *)(pMVar13)) MenuItem();
      local_14 = 0xffffffff;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x31c),(InputOption **)&local_54);
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x44;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x45;
      ghidra::str::ctor((std::string *)local_b4,"news");
      local_14._0_1_ = 0x46;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"News");
      local_14 = CONCAT31(local_14._1_3_,0x44);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(7);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_news");
      local_14 = 0x47;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"continue");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"News");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x48;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x49;
      ghidra::str::ctor((std::string *)local_b4,"credits");
      local_14._0_1_ = 0x4a;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Credits");
      local_14 = CONCAT31(local_14._1_3_,0x48);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(8);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_credits");
      local_14 = 0x4b;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"back");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"Credits");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x4c;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x4d;
      ghidra::str::ctor((std::string *)local_b4,"gameover");
      local_14._0_1_ = 0x4e;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Results");
      local_14 = CONCAT31(local_14._1_3_,0x4c);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(9);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_gameover");
      local_14 = 0x4f;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"back");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"Results");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x50;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x51;
      ghidra::str::ctor((std::string *)local_b4,"manualip");
      local_14._0_1_ = 0x52;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Manual Connection");
      local_14 = CONCAT31(local_14._1_3_,0x50);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(0xb);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_manualconnection");
      local_14 = 0x53;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"back");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"Manual Connection");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x54;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x55;
      ghidra::str::ctor((std::string *)local_b4,"multichat");
      local_14._0_1_ = 0x56;
      ghidra::str::ctor((std::string *)&stack0xffffff30,"Multiplayer - Chat");
      local_14 = CONCAT31(local_14._1_3_,0x54);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(0xc);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_multichat");
      local_14 = 0x57;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"back");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"Multiplayer - Chat");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pMVar11 = operator_new(0x378);
      local_54 = local_9c;
      local_14 = 0x58;
      ghidra::str::ctor((std::string *)local_9c,"");
      local_5c = (MetaGameAction *)local_b4;
      local_14._0_1_ = 0x59;
      ghidra::str::ctor((std::string *)local_b4,"multioptions");
      local_14._0_1_ = 0x5a;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff30,"Multiplayer - Options");
      local_14 = CONCAT31(local_14._1_3_,0x58);
      pAVar15 = (AnimationFrames *)new ((void *)(pMVar11)) Menu(0xd);
      local_14 = 0xffffffff;
      local_58 = (MetaGameAction *)pAVar15;
      ghidra::str::ctor((std::string *)&local_40,"submenu_multioptions");
      local_14 = 0x5b;
      ghidra::lib::vector__push_back((ghidra::vector *)(pAVar15 + 0x310),(std::string *)&local_40);
      local_14 = 0xffffffff;
      // [mislabelled-dtor] word::~word((word *)&local_40);
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x298),"back");
      ghidra::lib::basic_string__operator_x3d((std::string *)(pAVar15 + 0x2c8),"Multiplayer - Options");
      pMVar14 = ghidra::any_singleton();
      ghidra::lib::vector__push_back((ghidra::vector *)(pMVar14 + 4),(UIText **)&local_58);
      pGVar8 = g_gameData;
      if (*(int *)(g_gameData + 0x154) == -1) {
        bVar9 = ghidra::lib::basic_string___Equal(&OISConfiguration::lastVersionPlayed,"");
        if ((bVar9) || (bVar9 = std::operator!=<>(pbVar10,unaff_EDI), bVar9)) {
          pMVar14 = ghidra::any_singleton();
          *(undefined4 *)pMVar14 = 7;
          ghidra::lib::basic_string__operator_x3d(&OISConfiguration::lastVersionPlayed,"1.0.8");
          OISConfiguration::save();
        }
      }
      else {
        pMVar14 = ghidra::any_singleton();
        *(undefined4 *)pMVar14 = *(undefined4 *)(pGVar8 + 0x154);
        *(undefined4 *)(g_gameData + 0x154) = 0xffffffff;
      }
      // [seh] ExceptionList = local_1c;
      // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


// Ghidra: bool __cdecl MenuConfiguration::saveSlotIsSelected(void *param_1)
bool MenuConfiguration::saveSlotIsSelected(void * param_1)

{
  if ((*(int *)(g_gameLogic + 0x74) != -1) && (*(int *)(g_gameLogic + 0x74) == *(int *)param_1)) {
    return true;
  }
  return false;
}


// Ghidra: void __cdecl MenuConfiguration::updateWithSaveSlots(Menu *param_1)
void MenuConfiguration::updateWithSaveSlots(Menu * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  MetaGameAction **ppMVar1;
  bool bVar2;
  SaveHandler *this_;
  SaveMetaData *pSVar3;
  MenuItem *pMVar4;
  SaveHandler *this_00;
  int iVar5;
  std::string local_80 [8];
  undefined4 uStack_78;
  std::string local_68 [12];
  undefined4 uStack_5c;
  MetaGameAction local_50 [12];
  undefined4 uStack_44;
  int iVar6;
  MetaGameAction *local_18;
  MenuItem *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5d4d;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  (param_1)->removeAllItems();
  iVar5 = 0;
  do {
    ghidra::any_singleton();
    bVar2 = (this_00)->saveExists(iVar5);
    if (bVar2) {
      iVar6 = iVar5;
      this_ = ghidra::any_singleton();
      pSVar3 = (this_)->metadataForSave(iVar6);
      pMVar4 = operator_new(0x68);
      if (pSVar3 == (SaveMetaData *)0x0) {
        // [seh] local_8 = 3;
        local_50[0] = (byte)0x0;
        uStack_5c = 0x52af54;
        ghidra::str::assign((std::string *)local_50,"",0);
        // [seh] local_8._0_1_ = 4;
        local_68[0] = (std::string)0x0;
        ghidra::str::assign(local_68,"",0);
        // [seh] local_8._0_1_ = 5;
        local_80[0] = (std::string)0x0;
        ghidra::str::assign(local_80,"Error: bad save file",0x14);
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      }
      else {
        local_18 = local_50;
        // [seh] local_8 = 0;
        local_50[0] = (byte)0x0;
        uStack_5c = 0x52aedc;
        local_14 = pMVar4;
        ghidra::str::assign((std::string *)local_50,"",0);
        // [seh] local_8._0_1_ = 1;
        uStack_78 = 0x52aef4;
        strUsingArgs((char *)local_68);
        // [seh] local_8._0_1_ = 2;
        if (0xf < *(uint *)(pSVar3 + 0x14)) {
          pSVar3 = *(SaveMetaData **)pSVar3;
        }
        strUsingArgs((char *)local_80,"%s",pSVar3);
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        pMVar4 = local_14;
      }
    }
    else {
      pMVar4 = operator_new(0x68);
      // [seh] local_8 = 6;
      local_50[0] = (byte)0x0;
      uStack_5c = 0x52afe1;
      ghidra::str::assign((std::string *)local_50,"",0);
      // [seh] local_8._0_1_ = 7;
      uStack_78 = 0x52aff9;
      strUsingArgs((char *)local_68);
      // [seh] local_8._0_1_ = 8;
      local_80[0] = (std::string)0x0;
      ghidra::str::assign(local_80,"[no save]",9);
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    }
    local_18 = (MetaGameAction *)new ((void *)(pMVar4)) MenuItem(iVar5);
    // [seh] local_8 = 0xffffffff;
    ppMVar1 = *(MetaGameAction ***)(param_1 + 800);
    if (*(MetaGameAction ***)(param_1 + 0x324) == ppMVar1) {
      uStack_44 = 0x52b051;
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(param_1 + 0x31c),ppMVar1,&local_18);
    }
    else {
      *ppMVar1 = local_18;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl MenuConfiguration::updateWithMultiplayerOptions(Menu *param_1)
void MenuConfiguration::updateWithMultiplayerOptions(Menu * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  MetaGameAction **ppMVar1;
  Menu *pMVar2;
  NetworkClient *pNVar3;
  MenuItem *pMVar4;
  ghidra::vector *this_;
  undefined4 uVar5;
  std::string local_70 [12];
  undefined4 uStack_64;
  std::string local_58 [12];
  undefined4 uStack_4c;
  std::string local_40 [12];
  undefined4 uStack_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  pMVar2 = param_1;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5dcd;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  this_ = (ghidra::vector *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)this_;
  pNVar3 = ghidra::any_singleton();
  if (*(int *)(pNVar3 + 0x20) == 0) {
    pMVar4 = operator_new(0x68);
    // [seh] local_8 = 6;
    local_40[0] = (std::string)0x0;
    uStack_4c = 0x52b236;
    param_1 = (Menu *)pMVar4;
    ghidra::str::assign(local_40,"",0);
    // [seh] local_8._0_1_ = 7;
    local_58[0] = (std::string)0x0;
    uStack_64 = 0x52b25f;
    ghidra::str::assign(local_58,"menu=11",7);
    // [seh] local_8._0_1_ = 8;
    local_70[0] = (std::string)0x0;
    ghidra::str::assign(local_70,"Manual Connection",0x11);
    uVar5 = 1;
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  }
  else {
    pMVar4 = operator_new(0x68);
    // [seh] local_8 = 0;
    local_40[0] = (std::string)0x0;
    uStack_4c = 0x52b0ec;
    param_1 = (Menu *)pMVar4;
    ghidra::str::assign(local_40,"",0);
    // [seh] local_8._0_1_ = 1;
    local_58[0] = (std::string)0x0;
    uStack_64 = 0x52b115;
    ghidra::str::assign(local_58,"menu=12",7);
    // [seh] local_8._0_1_ = 2;
    local_70[0] = (std::string)0x0;
    ghidra::str::assign(local_70,"Chat",4);
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    param_1 = (Menu *)new ((void *)(pMVar4)) MenuItem(2);
    // [seh] local_8 = 0xffffffff;
    ppMVar1 = *(MetaGameAction ***)(pMVar2 + 800);
    if (*(MetaGameAction ***)(pMVar2 + 0x324) == ppMVar1) {
      uStack_34 = 0x52b16e;
      ghidra::lib::vector___Emplace_reallocate(this_,ppMVar1,(MetaGameAction **)&param_1);
    }
    else {
      *ppMVar1 = (MetaGameAction *)param_1;
      *(int *)(pMVar2 + 800) = *(int *)(pMVar2 + 800) + 4;
    }
    pMVar4 = operator_new(0x68);
    // [seh] local_8 = 3;
    local_40[0] = (std::string)0x0;
    uStack_4c = 0x52b1a6;
    param_1 = (Menu *)pMVar4;
    ghidra::str::assign(local_40,"",0);
    // [seh] local_8._0_1_ = 4;
    local_58[0] = (std::string)0x0;
    uStack_64 = 0x52b1cf;
    ghidra::str::assign(local_58,"menu=13",7);
    // [seh] local_8._0_1_ = 5;
    local_70[0] = (std::string)0x0;
    ghidra::str::assign(local_70,"Options",7);
    uVar5 = 3;
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  }
  param_1 = (Menu *)new ((void *)(pMVar4)) MenuItem(uVar5);
  // [seh] local_8 = 0xffffffff;
  ppMVar1 = *(MetaGameAction ***)(pMVar2 + 800);
  if (*(MetaGameAction ***)(pMVar2 + 0x324) != ppMVar1) {
    *ppMVar1 = (MetaGameAction *)param_1;
    *(int *)(pMVar2 + 800) = *(int *)(pMVar2 + 800) + 4;
    // [seh] ExceptionList = local_10;
    return;
  }
  uStack_34 = 0x52b2c7;
  ghidra::lib::vector___Emplace_reallocate(this_,ppMVar1,(MetaGameAction **)&param_1);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl MenuConfiguration::updateWithSinglePlayerScenarioCategories(Menu *param_1)
void MenuConfiguration::updateWithSinglePlayerScenarioCategories(Menu * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  int iVar2;
  char *pcVar3;
  MetaGameAction **ppMVar4;
  int iVar5;
  int iVar6;
  MenuItem *pMVar7;
  ghidra::vector *this_;
  char *pcVar8;
  MetaGameAction *pMVar9;
  int iVar10;
  int *piVar11;
  std::string local_80 [8];
  undefined4 uStack_78;
  char acStack_68 [12];
  undefined4 uStack_5c;
  std::string local_50 [12];
  undefined4 uStack_44;
  MetaGameAction *local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5e0f;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  this_ = (ghidra::vector *)(param_1 + 0x31c);
  local_14 = 0;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)this_;
  do {
    if ((iVar10 != 7) && (iVar10 != 0)) {
      pMVar9 = (MetaGameAction *)0x0;
      piVar11 = *(int **)(g_gameData + 0x60);
      local_18 = (MetaGameAction *)
                 ((uint)((int)*(int **)(g_gameData + 100) + (3 - (int)piVar11)) >> 2);
      if (*(int **)(g_gameData + 100) < piVar11) {
        local_18 = (MetaGameAction *)0x0;
      }
      iVar5 = 0;
      if (local_18 != (MetaGameAction *)0x0) {
        do {
          iVar2 = *piVar11;
          piVar11 = piVar11 + 1;
          iVar6 = iVar5 + 1;
          if (*(int *)(iVar2 + 0x68) != iVar10) {
            iVar6 = iVar5;
          }
          pMVar9 = pMVar9 + 1;
          iVar5 = iVar6;
        } while (pMVar9 != local_18);
        if (iVar6 != 0) {
          pMVar7 = operator_new(0x68);
          // [seh] local_8 = 0;
          local_50[0] = (std::string)0x0;
          uStack_5c = 0x52b3b6;
          ghidra::str::assign(local_50,"",0);
          // [seh] local_8._0_1_ = 1;
          uStack_78 = 0x52b3d1;
          strUsingArgs(acStack_68);
          // [seh] local_8._0_1_ = 2;
          pcVar3 = (&PTR_s_Testing_005e1d84)[iVar10];
          local_18 = (MetaGameAction *)(pcVar3 + 1);
          local_80[0] = (std::string)0x0;
          pcVar8 = pcVar3;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          ghidra::str::assign(local_80,pcVar3,(int)pcVar8 - (int)local_18);
          iVar5 = local_14;
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          local_18 = (MetaGameAction *)new ((void *)(pMVar7)) MenuItem(local_14);
          local_14 = iVar5 + 1;
          // [seh] local_8 = 0xffffffff;
          local_18[100] = (byte)0x1;
          ppMVar4 = *(MetaGameAction ***)(param_1 + 800);
          if (*(MetaGameAction ***)(param_1 + 0x324) == ppMVar4) {
            uStack_44 = 0x52b451;
            ghidra::lib::vector___Emplace_reallocate(this_,ppMVar4,&local_18);
          }
          else {
            *ppMVar4 = local_18;
            *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 4;
          }
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  iVar10 = *(int *)(param_1 + 800) - *(int *)this_ >> 2;
  if (iVar10 != 0) {
    *(undefined1 *)(*(int *)(*(int *)this_ + -4 + iVar10 * 4) + 100) = 1;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __cdecl MenuConfiguration::scenarioIsSelected(void *param_1)
bool MenuConfiguration::scenarioIsSelected(void * param_1)

{
  bool bVar1;
  uint unaff_EBP;
  char *unaff_ESI;
  GameData *pGVar2;
  
  pGVar2 = g_gameData + 0xb4;
  if (0xf < *(uint *)(g_gameData + 200)) {
    pGVar2 = *(GameData **)(g_gameData + 0xb4);
  }
  bVar1 = ghidra::lib::_Traits_equal___x28_x29((char *)pGVar2,*(uint *)(g_gameData + 0xc4),unaff_ESI,unaff_EBP);
  return bVar1;
}
