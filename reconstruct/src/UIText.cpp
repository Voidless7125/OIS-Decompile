// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UIText::UIText(UIText *this,int param_1,undefined4 param_2,UIText param_4,void *param_5)
UIText::UIText(int param_1, undefined4 param_2, UIText param_4, void * param_5)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  SpriteFrameCache *this_00;
  _TexParams *p_Var3;
  int iVar4;
  int iVar5;
  Size *pSVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  std::string *pbVar9;
  uint unaff_EDI;
  std::string *in_XMM3_Da;
  int in_stack_00000020;
  uint in_stack_00000024;
  std::string abStack_68 [8];
  undefined4 uStack_60;
  std::string *pbVar10;
  Size local_3c [4];
  UIText *local_38;
  std::string *local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c99d8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_38 = this;
  local_34 = in_XMM3_Da;
  local_18 = pcVar2;
  cocos2d::Node::Node((Node *)this);
  ((char *)this)[0x27c] = param_4;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x278) = 0;
  *(undefined2 *)((char *)this + 0x27d) = 0x101;
  *(undefined4 *)((char *)this + 0x280) = 0;
  *(int *)((char *)this + 0x294) = param_1;
  *(undefined4 *)((char *)this + 0x29c) = 0;
  *(std::string **)((char *)this + 0x28c) = local_34;
  *(int *)((char *)this + 0x284) = (int)((float)local_34 * 5.0);
  *(int *)((char *)this + 0x288) = (int)((float)local_34 * 7.0);
  *(undefined4 *)((char *)this + 0x298) = param_2;
  *(undefined4 *)((char *)this + 0x2a0) = 0;
  *(undefined4 *)((char *)this + 0x2a4) = 0;
  *(undefined4 *)((char *)this + 0x2b8) = 0;
  *(undefined4 *)((char *)this + 700) = 0xf;
  ((char *)this)[0x2a8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2d0) = 0;
  *(undefined4 *)((char *)this + 0x2d4) = 0xf;
  ((char *)this)[0x2c0] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2d8) = 0;
  *(undefined4 *)((char *)this + 0x2dc) = 0;
  *(undefined4 *)((char *)this + 0x2e0) = 0;
  *(undefined4 *)((char *)this + 0x2e4) = 0;
  *(undefined4 *)((char *)this + 0x2e8) = 0;
  *(undefined4 *)((char *)this + 0x2ec) = 0;
  // [seh] local_8._0_1_ = 6;
  if (m_loadedPlist == false) {
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_30,"dosfont.plist",0xd);
    pbVar10 = (std::string *)local_30;
    // [seh] local_8._0_1_ = 7;
    this_00 = cocos2d::SpriteFrameCache::getInstance();
    cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,pbVar10);
    // [seh] local_8._0_1_ = 6;
    if (0xf < local_1c) {
      pnVar8 = (nothrow_t *)(local_1c + 1);
      pvVar7 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_30[0] + -4);
        pnVar8 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) {
LAB_0055e44c:
          // [seh] local_8._0_1_ = 6;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    uStack_60 = 0x55e470;
    debugPrint("RENDER","Sprite frames cached from \'%s\'");
    m_loadedPlist = true;
  }
  if (s_texParams == (_TexParams *)0x0) {
    p_Var3 = operator_new(0x10);
    s_texParams = p_Var3;
    *(undefined4 *)(p_Var3 + 4) = 0x2600;
    *(undefined4 *)p_Var3 = 0x2600;
    *(undefined4 *)(p_Var3 + 8) = 0x812f;
    *(undefined4 *)(p_Var3 + 0xc) = 0x812f;
  }
  if ((param_1 == -1) && (in_stack_00000020 != 0)) {
    ghidra::str::ctor(abStack_68,(std::string *)&param_5);
    iVar4 = getActualTextWidth();
    *(int *)((char *)this + 0x294) = iVar4 + 2;
  }
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    ghidra::str::ctor(abStack_68,(std::string *)&param_5);
    setText(this,0,0);
  }
  if (*(int *)((char *)this + 0x298) == -1) {
    ghidra::str::ctor(abStack_68,(std::string *)((char *)this + 0x2c0));
    iVar4 = generateLines();
    *(int *)((char *)this + 0x29c) = iVar4;
    *(int *)((char *)this + 0x298) = (int)((float)(iVar4 + -1) + (float)iVar4 * 7.0);
  }
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    update(this);
  }
  iVar4 = *(int *)((char *)this + 0x294);
  if (iVar4 == -1) {
    local_34 = *(std::string **)((char *)this + 0x2dc);
    iVar4 = 0;
    pbVar9 = *(std::string **)((char *)this + 0x2d8);
    if (pbVar9 != local_34) {
      do {
        ghidra::str::ctor((std::string *)local_30,pbVar9);
        // [seh] local_8._0_1_ = 8;
        ghidra::str::ctor(abStack_68,(std::string *)local_30);
        iVar5 = getActualTextWidth();
        // [seh] local_8._0_1_ = 6;
        if (iVar4 < iVar5) {
          iVar4 = iVar5;
        }
        if (0xf < local_1c) {
          pnVar8 = (nothrow_t *)(local_1c + 1);
          pvVar7 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_30[0] + -4);
            pnVar8 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) goto LAB_0055e44c;
          }
          operator_delete(pvVar7,pnVar8);
        }
        pbVar9 = pbVar9 + 0x18;
      } while (pbVar9 != local_34);
    }
    iVar5 = *(int *)((char *)this + 0x298);
  }
  else {
    iVar5 = *(int *)((char *)this + 0x298);
  }
  pSVar6 = (Size *)cocos2d::Size::Size(local_3c,(float)iVar4,(float)iVar5);
  cocos2d::Node::setContentSize((Node *)this,pSVar6);
  if (0xf < in_stack_00000024) {
    pnVar8 = (nothrow_t *)(in_stack_00000024 + 1);
    pvVar7 = param_5;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_5 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000024 + 0x24);
      if (0x1f < (uint)((int)param_5 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: UIText * __cdecl UIText::create(undefined1 param_1,void *param_2)
UIText * UIText::create(undefined1 param_1, void * param_2)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  UIText *pUVar1;
  Ref *this_;
  undefined4 in_ECX;
  void *pvVar2;
  undefined4 in_EDX;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  std::string abStack_48 [12];
  undefined4 uStack_3c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c9a1a;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_3c = 0x55e75d;
  pUVar1 = operator_new(0x2f0,&std::nothrow);
  // [seh] local_8._0_1_ = 1;
  if (pUVar1 == (UIText *)0x0) {
    this_ = (Ref *)0x0;
  }
  else {
    ghidra::str::ctor(abStack_48,(std::string *)&param_2);
    this_ = (Ref *)UIText(pUVar1,in_ECX,in_EDX,param_1);
  }
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  if (this_ == (Ref *)0x0) {
    this_ = (Ref *)0x0;
  }
  else {
    cocos2d::Ref::autorelease(this_);
  }
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_3c = 0x55e7dc;
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return (UIText *)this_;
}


// Ghidra: UIText * __cdecl UIText::create(void *param_1)
UIText * UIText::create(void * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  UIText *pUVar1;
  Ref *this_;
  undefined1 in_CL;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c9a5a;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_38 = 0x55e844;
  pUVar1 = operator_new(0x2f0,&std::nothrow);
  // [seh] local_8._0_1_ = 1;
  if (pUVar1 == (UIText *)0x0) {
    this_ = (Ref *)0x0;
  }
  else {
    ghidra::str::ctor(abStack_44,(std::string *)&param_1);
    this_ = (Ref *)UIText(pUVar1,0xffffffff,0xffffffff,in_CL);
  }
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  if (this_ == (Ref *)0x0) {
    this_ = (Ref *)0x0;
  }
  else {
    cocos2d::Ref::autorelease(this_);
  }
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_1 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x55e8c5;
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return (UIText *)this_;
}


// Ghidra: void __thiscall UIText::~UIText(UIText *this)
UIText::~UIText()

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9a80;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  cleanupRender(this);
  pvVar1 = *(void **)((char *)this + 0x2e4);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x2ec) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0055ea34;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x2e4) = 0;
    *(undefined4 *)((char *)this + 0x2e8) = 0;
    *(undefined4 *)((char *)this + 0x2ec) = 0;
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x2d8));
  uVar2 = *(uint *)((char *)this + 0x2d4);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x2c0);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0055ea34;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x2d0) = 0;
  *(undefined4 *)((char *)this + 0x2d4) = 0xf;
  ((char *)this)[0x2c0] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 700);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x2a8);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0055ea34:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x2b8) = 0;
  *(undefined4 *)((char *)this + 700) = 0xf;
  ((char *)this)[0x2a8] = (byte)0x0;
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl UIText::translateColour(char param_1)
void UIText::translateColour(char param_1)

{
  int iVar1;
  undefined2 *in_ECX;
  char in_DL;
  char unaff_SI;
  
  if (in_DL == 'b') {
    *in_ECX = colours._0_2_;
    *(undefined1 *)(in_ECX + 1) = colours._2_1_;
    return;
  }
  if ((byte)(in_DL - 0x31U) < 9) {
    iVar1 = (in_DL + -0x30) * 3;
    *in_ECX = *(undefined2 *)((int)&colours + iVar1);
    *(undefined1 *)(in_ECX + 1) = *(undefined1 *)((int)&colours + iVar1 + 2);
    return;
  }
  if (in_DL == '0') {
    *in_ECX = DAT_0065d9f6;
    *(undefined1 *)(in_ECX + 1) = DAT_0065d9f8;
    return;
  }
  if (in_DL == '!') {
    *in_ECX = DAT_0065d9f9;
    *(undefined1 *)(in_ECX + 1) = DAT_0065d9fb;
    return;
  }
  if (in_DL == '@') {
    *in_ECX = DAT_0065d9fc;
    *(undefined1 *)(in_ECX + 1) = DAT_0065d9fe;
    return;
  }
  if (in_DL == '#') {
    *in_ECX = DAT_0065d9ff;
    *(undefined1 *)(in_ECX + 1) = DAT_0065da01;
    return;
  }
  if (in_DL == '$') {
    *in_ECX = DAT_0065da02;
    *(undefined1 *)(in_ECX + 1) = DAT_0065da04;
    return;
  }
  if (in_DL == '%') {
    *in_ECX = DAT_0065da05;
    *(undefined1 *)(in_ECX + 1) = DAT_0065da07;
    return;
  }
  if (in_DL == '^') {
    *in_ECX = DAT_0065da08;
    *(undefined1 *)(in_ECX + 1) = DAT_0065da0a;
    return;
  }
  if (in_DL == '&') {
    translateColour(unaff_SI);
    return;
  }
  if (in_DL == '*') {
    translateColour(unaff_SI);
    return;
  }
  *in_ECX = DAT_0065d9ed;
  *(undefined1 *)(in_ECX + 1) = DAT_0065d9ef;
  return;
}


// Ghidra: void __thiscall UIText::setText(UIText *this,char param_2,char param_3,basic_string<> *param_4)
void UIText::setText(char param_2, char param_3, std::string * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string *pbVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  std::string *pbVar6;
  nothrow_t *pnVar7;
  std::string *pbVar8;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  std::string abStack_64 [12];
  undefined4 uStack_58;
  Size local_38 [8];
  std::string *local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c9ab0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  pbVar6 = (std::string *)((char *)this + 0x2c0);
  // [seh] local_8 = 0;
  ((char *)this)[0x27e] = (byte)0x1;
  if (pbVar6 != (std::string *)&param_4) {
    pbVar2 = (std::string *)&param_4;
    if (0xf < in_stack_00000020) {
      pbVar2 = param_4;
    }
    uStack_58 = 0x55ebeb;
    ghidra::str::assign(pbVar6,(char *)pbVar2,in_stack_0000001c);
  }
  if (*(int *)((char *)this + 0x298) == -1) {
    ghidra::str::ctor(abStack_64,(std::string *)pbVar6);
    iVar3 = generateLines();
    *(int *)((char *)this + 0x29c) = iVar3;
    *(int *)((char *)this + 0x298) = (int)((float)(iVar3 + -1) + (float)iVar3 * 7.0);
  }
  if (param_3 != '\0') {
    *(undefined4 *)((char *)this + 0x294) = 0xffffffff;
  }
  if (param_2 != '\0') {
    update(this);
  }
  iVar3 = *(int *)((char *)this + 0x294);
  if (iVar3 == -1) {
    local_30 = *(std::string **)((char *)this + 0x2dc);
    iVar3 = 0;
    pbVar8 = *(std::string **)((char *)this + 0x2d8);
    if (pbVar8 != local_30) {
      do {
        ghidra::str::ctor((std::string *)local_2c,pbVar8);
        // [seh] local_8._0_1_ = 1;
        ghidra::str::ctor(abStack_64,(std::string *)local_2c);
        iVar4 = getActualTextWidth();
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        if (iVar3 < iVar4) {
          iVar3 = iVar4;
        }
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          pvVar5 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar5 = *(void **)((int)local_2c[0] + -4);
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_0055ed65;
          }
          uStack_58 = 0x55ece6;
          operator_delete(pvVar5,pnVar7);
        }
        pbVar8 = pbVar8 + 0x18;
      } while (pbVar8 != local_30);
    }
    iVar4 = *(int *)((char *)this + 0x298);
  }
  else {
    iVar4 = *(int *)((char *)this + 0x298);
  }
  iVar1 = *(int *)this;
  uStack_58 = 0x55ed36;
  cocos2d::Size::Size(local_38,(float)iVar3,(float)iVar4);
  (**(code **)(iVar1 + 0xac))();
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pbVar6 = param_4;
    if ((nothrow_t *)0xfff < pnVar7) {
      pbVar6 = *(std::string **)(param_4 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((std::string *)0x1f < param_4 + (-4 - (int)pbVar6)) {
LAB_0055ed65:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_58 = 0x55ed72;
    operator_delete(pbVar6,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UIText::cleanup(UIText *this)
void UIText::cleanup()

{
  cleanupRender(this);
                    // WARNING: Could not recover jumptable at 0x0055edab. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::cleanup((Node *)this);
  return;
}


// Ghidra: void __thiscall UIText::cleanupRender(UIText *this)
void UIText::cleanupRender()

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x2e4);
  if (*(int *)((char *)this + 0x2e8) - iVar1 >> 2 != 0) {
    do {
      if (uVar2 == 0x10) {
        *(undefined4 *)(iVar1 + 0x40) = 0;
      }
      else {
        cocos2d::Ref::autorelease(*(Ref **)(iVar1 + uVar2 * 4));
        (**(code **)(**(int **)(*(int *)((char *)this + 0x2e4) + uVar2 * 4) + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x2e4) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x2e4);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x2e8) - iVar1 >> 2));
  }
  *(int *)((char *)this + 0x2e8) = iVar1;
  return;
}


// Ghidra: int __cdecl UIText::generateLines(undefined4 *param_1)
int UIText::generateLines(undefined4 * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_;
  ghidra::vector *pvVar1;
  undefined1 uVar2;
  bool bVar3;
  std::string *pbVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char ****ppppcVar7;
  word *pwVar8;
  word *pwVar9;
  int iVar10;
  std::string *in_ECX;
  word *extraout_ECX;
  word *extraout_ECX_00;
  char *pcVar11;
  void *pvVar12;
  word *extraout_ECX_01;
  word *extraout_ECX_02;
  uint uVar13;
  word *extraout_ECX_03;
  word *extraout_ECX_04;
  void *pvVar14;
  word *extraout_ECX_05;
  word *extraout_ECX_06;
  word *extraout_ECX_07;
  word *extraout_ECX_08;
  word *extraout_ECX_09;
  word *in_EDX;
  nothrow_t *pnVar15;
  std::string *pbVar16;
  word *pwVar17;
  ghidra::lib::allocator_t *unaff_EDI;
  std::string *pbVar18;
  uint uVar19;
  ghidra::vector *pvVar20;
  word *in_stack_00000014;
  uint in_stack_00000018;
  std::string local_144 [8];
  undefined4 uStack_13c;
  uint local_120;
  ghidra::vector *local_118;
  ghidra::vector *local_114;
  ghidra::vector *local_110;
  ghidra::vector *local_10c;
  uint local_108;
  std::string *local_104;
  word *local_100;
  word *local_fc;
  word *local_f8;
  std::string *local_f4;
  std::string *local_f0;
  std::string *local_ec;
  std::string *local_e8;
  int local_e4;
  uint local_e0;
  word *local_dc;
  word *local_d8;
  word *local_d4;
  word *local_d0;
  std::string *local_cc;
  std::string *local_c8;
  std::string *local_c4;
  word *local_c0;
  char local_b9;
  ghidra::vector *local_b8;
  void *local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  std::string local_9c;
  int local_98;
  void *local_94 [4];
  undefined4 local_84;
  uint local_80;
  std::string local_7c;
  int local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  std::string local_5c;
  int local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  char ***local_3c [4];
  uint local_2c;
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005c9b65;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar4 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_14 = 0;
  local_104 = in_ECX;
  local_24 = pbVar4;
  ghidra::lib::_Destroy_range___x28_x29(in_ECX,pbVar4,unaff_EDI);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)in_ECX;
  local_118 = (ghidra::vector *)0x0;
  local_b8 = (ghidra::vector *)0x0;
  local_114 = (ghidra::vector *)0x0;
  local_110 = (ghidra::vector *)0x0;
  local_10c = (ghidra::vector *)0x0;
  pbVar16 = (std::string *)0x0;
  local_f0 = (std::string *)0x0;
  local_ec = (std::string *)0x0;
  local_e8 = (std::string *)0x0;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (char ***)((uint)local_3c[0] & 0xffffff00);
  local_14._0_1_ = 3;
  local_d4 = (word *)0x0;
  if (in_stack_00000014 != (word *)0x0) {
    do {
      uVar13 = local_28;
      puVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        puVar5 = param_1;
      }
      if (*(word *)((int)puVar5 + (int)local_d4) == (word)0x20) {
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        local_5c = (std::string)0x0;
        local_14 = CONCAT31(local_14._1_3_,4);
        bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar4,(uint)unaff_EDI);
        if (!bVar3) {
          ppppcVar7 = local_3c;
          if (0xf < uVar13) {
            ppppcVar7 = (char ****)local_3c[0];
          }
          ghidra::str::assign((std::string *)local_74,(char *)ppppcVar7,local_2c);
          ghidra::str::ctor(local_144,(std::string *)local_3c);
          local_58 = getActualTextWidth();
          if (local_e8 == pbVar16) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_f0,(word *)pbVar16,(word *)local_74);
          }
          else {
            ghidra::str::ctor(pbVar16,(std::string *)local_74);
            pbVar16[0x18] = local_5c;
            *(int *)(pbVar16 + 0x1c) = local_58;
            local_ec = pbVar16 + 0x20;
          }
          local_2c = 0;
          ppppcVar7 = local_3c;
          if (0xf < local_28) {
            ppppcVar7 = (char ****)local_3c[0];
          }
          *(char *)ppppcVar7 = '\0';
          pbVar16 = local_ec;
        }
        ghidra::str::assign((std::string *)local_74," ",1);
        local_144[0] = (std::string)0x0;
        ghidra::str::assign(local_144," ",1);
        local_58 = getActualTextWidth();
        local_5c = (std::string)0x1;
        if (local_e8 == pbVar16) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_f0,(word *)pbVar16,(word *)local_74);
        }
        else {
          ghidra::str::ctor(pbVar16,(std::string *)local_74);
          pbVar16[0x18] = local_5c;
          *(int *)(pbVar16 + 0x1c) = local_58;
          local_ec = pbVar16 + 0x20;
        }
        pbVar16 = local_ec;
        pvVar14 = local_74[0];
        uVar13 = local_60;
joined_r0x0055f226:
        local_14._0_1_ = 3;
        if (0xf < uVar13) {
          local_14._0_1_ = 3;
          pnVar15 = (nothrow_t *)(uVar13 + 1);
          pvVar12 = pvVar14;
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar12 = *(void **)((int)pvVar14 + -4);
            pnVar15 = (nothrow_t *)(uVar13 + 0x24);
            uVar2 = (undefined1)local_14;
            if (0x1f < (uint)((int)pvVar14 + (-4 - (int)pvVar12))) goto LAB_0055f368;
          }
          operator_delete(pvVar12,pnVar15);
        }
      }
      else {
        puVar5 = &param_1;
        if (0xf < in_stack_00000018) {
          puVar5 = param_1;
        }
        if (*(word *)((int)puVar5 + (int)local_d4) != (word)0xa) {
          uStack_13c = 0x55f1ff;
          pcVar6 = (char *)strUsingArgs((char *)&local_54);
          local_14._0_1_ = 6;
          pcVar11 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar11 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_3c,pcVar11,*(uint *)(pcVar6 + 0x10));
          pvVar14 = local_54;
          uVar13 = uStack_40;
          goto joined_r0x0055f226;
        }
        if (local_2c != 0) {
          local_84 = 0;
          local_80 = 0xf;
          local_94[0] = (void *)((uint)local_94[0] & 0xffffff00);
          local_7c = (std::string)0x0;
          local_14 = CONCAT31(local_14._1_3_,5);
          ppppcVar7 = local_3c;
          if (0xf < local_28) {
            ppppcVar7 = (char ****)local_3c[0];
          }
          ghidra::str::assign((std::string *)local_94,(char *)ppppcVar7,local_2c);
          ghidra::str::ctor(local_144,(std::string *)local_3c);
          local_78 = getActualTextWidth();
          if (local_e8 == pbVar16) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_f0,(word *)pbVar16,(word *)local_94);
          }
          else {
            ghidra::str::ctor(pbVar16,(std::string *)local_94);
            pbVar16[0x18] = local_7c;
            *(int *)(pbVar16 + 0x1c) = local_78;
            local_ec = pbVar16 + 0x20;
          }
          local_14._0_1_ = 3;
          if (0xf < local_80) {
            pnVar15 = (nothrow_t *)(local_80 + 1);
            pvVar14 = local_94[0];
            if ((nothrow_t *)0xfff < pnVar15) {
              pvVar14 = *(void **)((int)local_94[0] + -4);
              pnVar15 = (nothrow_t *)(local_80 + 0x24);
              uVar2 = (undefined1)local_14;
              if (0x1f < (uint)((int)local_94[0] + (-4 - (int)pvVar14))) goto LAB_0055f368;
            }
            operator_delete(pvVar14,pnVar15);
          }
        }
        pvVar20 = local_110;
        local_2c = 0;
        ppppcVar7 = local_3c;
        if (0xf < local_28) {
          ppppcVar7 = (char ****)local_3c[0];
        }
        *(char *)ppppcVar7 = '\0';
        if (local_118 == local_110) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_114,(ghidra::vector *)local_110,(ghidra::vector *)&local_f0);
          local_118 = local_10c;
          pwVar17 = extraout_ECX_00;
        }
        else {
          ghidra::lib::vector__vector(local_110,(ghidra::vector *)&local_f0);
          local_110 = pvVar20 + 0xc;
          pwVar17 = extraout_ECX;
        }
        pbVar16 = local_f0;
        ghidra::lib::_Destroy_range___x28_x29(pwVar17,(word *)pbVar4,(allocator<word> *)unaff_EDI);
        local_ec = pbVar16;
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 < in_stack_00000014);
    if (local_2c != 0) {
      local_a4 = 0;
      local_a0 = 0xf;
      local_b4[0] = (void *)((uint)local_b4[0] & 0xffffff00);
      local_9c = (std::string)0x0;
      local_14 = CONCAT31(local_14._1_3_,7);
      ppppcVar7 = local_3c;
      if (0xf < local_28) {
        ppppcVar7 = (char ****)local_3c[0];
      }
      ghidra::str::assign((std::string *)local_b4,(char *)ppppcVar7,local_2c);
      ghidra::str::ctor(local_144,(std::string *)local_3c);
      local_98 = getActualTextWidth();
      if (local_e8 == pbVar16) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_f0,(word *)pbVar16,(word *)local_b4)
        ;
      }
      else {
        ghidra::str::ctor(pbVar16,(std::string *)local_b4);
        pbVar16[0x18] = local_9c;
        *(int *)(pbVar16 + 0x1c) = local_98;
        local_ec = pbVar16 + 0x20;
      }
      pbVar16 = local_ec;
      local_2c = 0;
      ppppcVar7 = local_3c;
      if (0xf < local_28) {
        ppppcVar7 = (char ****)local_3c[0];
      }
      local_14._0_1_ = 3;
      *(char *)ppppcVar7 = '\0';
      if (0xf < local_a0) {
        pnVar15 = (nothrow_t *)(local_a0 + 1);
        pvVar14 = local_b4[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar14 = *(void **)((int)local_b4[0] + -4);
          pnVar15 = (nothrow_t *)(local_a0 + 0x24);
          uVar2 = (undefined1)local_14;
          if (0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar14))) {
LAB_0055f368:
            local_14._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar15);
      }
    }
    local_b8 = local_114;
  }
  local_114 = local_b8;
  if ((int)pbVar16 - (int)local_f0 >> 5 != 0) {
    if (local_118 == local_110) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)&local_114,(ghidra::vector *)local_110,(ghidra::vector *)&local_f0);
      local_118 = local_10c;
      local_b8 = local_114;
      pwVar17 = extraout_ECX_02;
    }
    else {
      ghidra::lib::vector__vector(local_110,(ghidra::vector *)&local_f0);
      local_110 = local_110 + 0xc;
      pwVar17 = extraout_ECX_01;
    }
    pbVar16 = local_f0;
    ghidra::lib::_Destroy_range___x28_x29(pwVar17,(word *)pbVar4,(allocator<word> *)unaff_EDI);
    local_ec = pbVar16;
  }
  local_120 = 0;
  local_108 = ((int)local_110 - (int)local_b8) / 0xc;
  if (local_108 != 0) {
    do {
      pwVar17 = (word *)0x0;
      local_dc = (word *)0x0;
      local_fc = (word *)0x0;
      local_100 = (word *)0x0;
      local_f8 = (word *)0x0;
      local_f4 = (std::string *)0x0;
      local_cc = (std::string *)0x0;
      local_c8 = (std::string *)0x0;
      local_c4 = (std::string *)0x0;
      local_d0 = (word *)(local_120 * 3);
      local_14._0_1_ = 9;
      local_c0 = (word *)0x0;
      local_e0 = 0;
      local_b9 = '\0';
      if ((uint)(*(int *)(local_b8 + local_120 * 0xc + 4) - *(int *)(local_b8 + local_120 * 0xc)) <
          0x20) {
        local_44 = 0;
        uStack_40 = 0xf;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        ghidra::str::assign((std::string *)&local_54,"",0);
        pvVar14 = local_54;
        local_14._0_1_ = 10;
        pbVar18 = *(std::string **)(local_104 + 4);
        if (*(std::string **)(local_104 + 8) == pbVar18) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)local_104,pbVar18,(std::string *)&local_54);
          uVar13 = uStack_40;
        }
        else {
          local_54 = (void *)((uint)local_54 & 0xffffff00);
          *(void **)pbVar18 = pvVar14;
          *(undefined4 *)(pbVar18 + 4) = uStack_50;
          *(undefined4 *)(pbVar18 + 8) = uStack_4c;
          *(undefined4 *)(pbVar18 + 0xc) = uStack_48;
          *(undefined4 *)(pbVar18 + 0x10) = local_44;
          *(uint *)(pbVar18 + 0x14) = uStack_40;
          *(int *)(local_104 + 4) = *(int *)(local_104 + 4) + 0x18;
          uVar13 = 0xf;
        }
        local_14._0_1_ = 9;
        uVar2 = (undefined1)local_14;
        local_14._0_1_ = 9;
        if (0xf < uVar13) {
          pnVar15 = (nothrow_t *)(uVar13 + 1);
          pvVar14 = local_54;
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar14 = *(void **)((int)local_54 + -4);
            pnVar15 = (nothrow_t *)(uVar13 + 0x24);
            if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar14))) goto LAB_0055f368;
          }
          operator_delete(pvVar14,pnVar15);
        }
      }
      local_d4 = (word *)0x0;
      pwVar8 = *(word **)(local_b8 + local_120 * 0xc);
      if (*(int *)(local_b8 + local_120 * 0xc + 4) - (int)pwVar8 >> 5 != 0) {
        local_e4 = 0;
        do {
          pbVar18 = (std::string *)(pwVar8 + local_e4);
          if (pwVar8[local_e4 + 0x18] == (word)0x0) {
            if (local_c4 == (std::string *)local_c8) {
              ghidra::lib::vector___Emplace_reallocate
                        ((ghidra::vector *)&local_cc,(word *)local_c8,(word *)pbVar18);
            }
            else {
              ghidra::str::ctor((std::string *)local_c8,pbVar18);
              local_c8[0x18] = pbVar18[0x18];
              *(undefined4 *)(local_c8 + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
              local_c8 = local_c8 + 0x20;
            }
            local_b9 = '\0';
LAB_0055f9a5:
            local_c0 = (word *)((int)local_c0 +
                               *(int *)(*(int *)(local_b8 + (int)local_d0 * 4) + 0x1c + local_e4));
          }
          else {
            if (local_b9 != '\0') {
              if (local_c4 == (std::string *)local_c8) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_cc,(word *)local_c8,(word *)pbVar18);
                local_b9 = '\x01';
              }
              else {
                ghidra::str::ctor((std::string *)local_c8,pbVar18);
                local_b9 = '\x01';
                local_c8[0x18] = pbVar18[0x18];
                *(undefined4 *)(local_c8 + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
                local_c8 = local_c8 + 0x20;
              }
              goto LAB_0055f9a5;
            }
            if (in_EDX == (word *)0xffffffff) {
LAB_0055f7f2:
              local_e0 = local_e0 + (int)local_c0;
              local_c0 = (word *)((int)local_c8 - (int)local_cc >> 5);
              local_d8 = (word *)0x0;
              pbVar18 = local_cc;
              if (local_c0 != (word *)0x0) {
                do {
                  if (local_f4 == (std::string *)pwVar17) {
                    ghidra::lib::vector___Emplace_reallocate
                              ((ghidra::vector *)&local_fc,pwVar17,(word *)pbVar18);
                  }
                  else {
                    ghidra::str::ctor((std::string *)pwVar17,pbVar18);
                    *(std::string *)(pwVar17 + 0x18) = *(std::string *)(pbVar18 + 0x18);
                    *(undefined4 *)(pwVar17 + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
                    local_f8 = pwVar17 + 0x20;
                  }
                  local_d8 = local_d8 + 1;
                  pwVar17 = local_f8;
                  pbVar18 = pbVar18 + 0x20;
                } while (local_d8 < local_c0);
                local_dc = local_fc;
                local_100 = local_f8;
              }
              ghidra::lib::_Destroy_range___x28_x29((word *)local_cc,(word *)pbVar4,(allocator<word> *)unaff_EDI);
              local_c8 = local_cc;
              pbVar18 = (std::string *)(*(int *)(local_b8 + (int)local_d0 * 4) + local_e4);
              if (local_c4 == (std::string *)local_cc) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_cc,(word *)local_cc,(word *)pbVar18);
              }
              else {
                ghidra::str::ctor((std::string *)local_cc,pbVar18);
                local_cc[0x18] = pbVar18[0x18];
                *(undefined4 *)(local_cc + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
                local_c8 = local_cc + 0x20;
              }
              local_c0 = *(word **)(*(int *)(local_b8 + (int)local_d0 * 4) + 0x1c + local_e4);
            }
            else {
              pwVar8 = (word *)((int)local_c8 - (int)local_cc >> 5);
              uVar13 = (int)pwVar17 - (int)local_dc >> 5;
              if (pwVar8 + (int)local_c0 + local_e0 + uVar13 <= in_EDX) goto LAB_0055f7f2;
              local_44 = 0;
              uStack_40 = 0xf;
              local_54 = (void *)((uint)local_54 & 0xffffff00);
              local_14 = CONCAT31(local_14._1_3_,0xb);
              local_e0 = 0;
              pwVar17 = local_dc;
              local_d8 = (word *)uVar13;
              local_c0 = pwVar8;
              if (uVar13 != 0) {
                do {
                  pwVar8 = pwVar17;
                  if (0xf < *(uint *)(pwVar17 + 0x14)) {
                    pwVar8 = *(word **)pwVar17;
                  }
                  ghidra::str::append
                            ((std::string *)&local_54,(char *)pwVar8,*(uint *)(pwVar17 + 0x10));
                  local_e0 = local_e0 + 1;
                  pwVar17 = pwVar17 + 0x20;
                } while (local_e0 < uVar13);
              }
              pwVar17 = local_dc;
              pbVar16 = *(std::string **)(local_104 + 4);
              if (*(std::string **)(local_104 + 8) == pbVar16) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)local_104,(std::string *)pbVar16,
                           (std::string *)&local_54);
                pwVar8 = extraout_ECX_04;
              }
              else {
                ghidra::str::ctor(pbVar16,(std::string *)&local_54);
                *(int *)(local_104 + 4) = *(int *)(local_104 + 4) + 0x18;
                pwVar8 = extraout_ECX_03;
              }
              local_e0 = 0;
              ghidra::lib::_Destroy_range___x28_x29(pwVar8,(word *)pbVar4,(allocator<word> *)unaff_EDI);
              local_100 = pwVar17;
              local_d8 = (word *)0x0;
              local_f8 = pwVar17;
              pwVar8 = local_c0;
              if (local_c0 != (word *)0x0) {
                pbVar18 = local_cc + 0x1c;
                do {
                  if (pbVar18[-4] == (std::string)0x0) {
                    if (local_f4 == (std::string *)pwVar17) {
                      ghidra::lib::vector___Emplace_reallocate
                                ((ghidra::vector *)&local_fc,pwVar17,(word *)(pbVar18 + -0x1c));
                    }
                    else {
                      ghidra::str::ctor((std::string *)pwVar17,pbVar18 + -0x1c)
                      ;
                      *(std::string *)(pwVar17 + 0x18) = *(std::string *)(pbVar18 + -4);
                      *(int *)(pwVar17 + 0x1c) = *(int *)pbVar18;
                      local_f8 = pwVar17 + 0x20;
                    }
                    local_e0 = local_e0 + *(int *)pbVar18;
                    pwVar8 = local_c0;
                    pwVar17 = local_f8;
                  }
                  local_d8 = local_d8 + 1;
                  pbVar18 = pbVar18 + 0x20;
                } while (local_d8 < pwVar8);
                local_dc = local_fc;
              }
              local_100 = pwVar17;
              ghidra::lib::_Destroy_range___x28_x29(pwVar8,(word *)pbVar4,(allocator<word> *)unaff_EDI);
              local_c8 = local_cc;
              pbVar18 = (std::string *)(*(int *)(local_b8 + (int)local_d0 * 4) + local_e4);
              if (local_c4 == (std::string *)local_cc) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_cc,(word *)local_cc,(word *)pbVar18);
              }
              else {
                ghidra::str::ctor((std::string *)local_cc,pbVar18);
                local_cc[0x18] = pbVar18[0x18];
                *(undefined4 *)(local_cc + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
                local_c8 = local_cc + 0x20;
              }
              local_c0 = *(word **)(*(int *)(local_b8 + (int)local_d0 * 4) + 0x1c + local_e4);
              local_14._0_1_ = 9;
              if (0xf < uStack_40) {
                pnVar15 = (nothrow_t *)(uStack_40 + 1);
                pvVar14 = local_54;
                if ((nothrow_t *)0xfff < pnVar15) {
                  pvVar14 = *(void **)((int)local_54 + -4);
                  pnVar15 = (nothrow_t *)(uStack_40 + 0x24);
                  uVar2 = (undefined1)local_14;
                  if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar14))) goto LAB_0055f368;
                }
                operator_delete(pvVar14,pnVar15);
              }
            }
          }
          local_d4 = local_d4 + 1;
          local_e4 = local_e4 + 0x20;
          pwVar8 = *(word **)(local_b8 + (int)local_d0 * 4);
        } while (local_d4 < (word *)(*(int *)(local_b8 + (int)local_d0 * 4 + 4) - (int)pwVar8 >> 5))
        ;
      }
      local_d0 = (word *)((int)local_c8 - (int)local_cc >> 5);
      if (local_d0 != (word *)0x0) {
        if ((in_EDX == (word *)0xffffffff) ||
           (pwVar9 = (word *)((int)pwVar17 - (int)local_dc >> 5), pwVar8 = local_dc,
           pwVar9 + (int)local_d0 + (int)local_c0 + local_e0 <= in_EDX)) {
          local_d8 = (word *)0x0;
          pbVar18 = local_cc;
          if (local_d0 != (word *)0x0) {
            do {
              if (local_f4 == (std::string *)pwVar17) {
                ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_fc,pwVar17,(word *)pbVar18);
                pwVar8 = extraout_ECX_09;
              }
              else {
                ghidra::str::ctor((std::string *)pwVar17,pbVar18);
                *(std::string *)(pwVar17 + 0x18) = *(std::string *)(pbVar18 + 0x18);
                *(undefined4 *)(pwVar17 + 0x1c) = *(undefined4 *)(pbVar18 + 0x1c);
                local_f8 = pwVar17 + 0x20;
                pwVar8 = extraout_ECX_08;
              }
              local_d8 = local_d8 + 1;
              pwVar17 = local_f8;
              pbVar18 = pbVar18 + 0x20;
            } while (local_d8 < local_d0);
            local_dc = local_fc;
          }
          pbVar18 = local_cc;
          ghidra::lib::_Destroy_range___x28_x29(pwVar8,(word *)pbVar4,(allocator<word> *)unaff_EDI);
          local_c8 = pbVar18;
        }
        else {
          local_44 = 0;
          uStack_40 = 0xf;
          local_54 = (void *)((uint)local_54 & 0xffffff00);
          local_14 = CONCAT31(local_14._1_3_,0xc);
          local_d4 = (word *)0x0;
          pwVar17 = local_dc;
          local_d8 = pwVar9;
          if (pwVar9 != (word *)0x0) {
            do {
              pwVar8 = pwVar17;
              if (0xf < *(uint *)(pwVar17 + 0x14)) {
                pwVar8 = *(word **)pwVar17;
              }
              ghidra::str::append
                        ((std::string *)&local_54,(char *)pwVar8,*(uint *)(pwVar17 + 0x10));
              local_d4 = local_d4 + 1;
              pwVar17 = pwVar17 + 0x20;
            } while (local_d4 < pwVar9);
          }
          pwVar8 = local_d0;
          pbVar16 = *(std::string **)(local_104 + 4);
          if (*(std::string **)(local_104 + 8) == pbVar16) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)local_104,(std::string *)pbVar16,(std::string *)&local_54);
            pwVar9 = extraout_ECX_06;
          }
          else {
            ghidra::str::ctor(pbVar16,(std::string *)&local_54);
            *(int *)(local_104 + 4) = *(int *)(local_104 + 4) + 0x18;
            pwVar9 = extraout_ECX_05;
          }
          pwVar17 = local_dc;
          ghidra::lib::_Destroy_range___x28_x29(pwVar9,(word *)pbVar4,(allocator<word> *)unaff_EDI);
          local_f8 = pwVar17;
          local_d4 = (word *)0x0;
          pwVar9 = extraout_ECX_07;
          if (pwVar8 != (word *)0x0) {
            pbVar16 = (std::string *)(local_cc + 0x18);
            pwVar9 = local_d0;
            do {
              if (*pbVar16 == (std::string)0x0) {
                if (local_f4 == (std::string *)pwVar17) {
                  ghidra::lib::vector___Emplace_reallocate
                            ((ghidra::vector *)&local_fc,pwVar17,(word *)(pbVar16 + -0x18));
                  pwVar9 = local_d0;
                  pwVar17 = local_f8;
                }
                else {
                  ghidra::str::ctor
                            ((std::string *)pwVar17,(std::string *)(pbVar16 + -0x18));
                  *(std::string *)(pwVar17 + 0x18) = *pbVar16;
                  *(undefined4 *)(pwVar17 + 0x1c) = *(undefined4 *)(pbVar16 + 4);
                  local_f8 = pwVar17 + 0x20;
                  pwVar9 = local_d0;
                  pwVar17 = local_f8;
                }
              }
              local_d4 = local_d4 + 1;
              pbVar16 = pbVar16 + 0x20;
            } while (local_d4 < pwVar9);
            local_dc = local_fc;
          }
          pbVar18 = local_cc;
          ghidra::lib::_Destroy_range___x28_x29(pwVar9,(word *)pbVar4,(allocator<word> *)unaff_EDI);
          local_14._0_1_ = 9;
          local_c8 = pbVar18;
          if (0xf < uStack_40) {
            pnVar15 = (nothrow_t *)(uStack_40 + 1);
            pvVar14 = local_54;
            if ((nothrow_t *)0xfff < pnVar15) {
              pvVar14 = *(void **)((int)local_54 + -4);
              pnVar15 = (nothrow_t *)(uStack_40 + 0x24);
              uVar2 = (undefined1)local_14;
              if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar14))) goto LAB_0055f368;
            }
            operator_delete(pvVar14,pnVar15);
          }
        }
      }
      uVar13 = (int)pwVar17 - (int)local_dc >> 5;
      if (uVar13 != 0) {
        local_44 = 0;
        uStack_40 = 0xf;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        local_14 = CONCAT31(local_14._1_3_,0xd);
        uVar19 = 0;
        do {
          pwVar17 = local_dc;
          if (0xf < *(uint *)(local_dc + 0x14)) {
            pwVar17 = *(word **)local_dc;
          }
          ghidra::str::append
                    ((std::string *)&local_54,(char *)pwVar17,*(uint *)(local_dc + 0x10));
          pbVar16 = local_104;
          uVar19 = uVar19 + 1;
          local_dc = local_dc + 0x20;
        } while (uVar19 < uVar13);
        this_ = *(std::string **)(local_104 + 4);
        if (*(std::string **)(local_104 + 8) == this_) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)local_104,(std::string *)this_,(std::string *)&local_54);
        }
        else {
          ghidra::str::ctor(this_,(std::string *)&local_54);
          *(int *)(pbVar16 + 4) = *(int *)(pbVar16 + 4) + 0x18;
        }
        local_14._0_1_ = 9;
        if (0xf < uStack_40) {
          pnVar15 = (nothrow_t *)(uStack_40 + 1);
          pvVar14 = local_54;
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar14 = *(void **)((int)local_54 + -4);
            pnVar15 = (nothrow_t *)(uStack_40 + 0x24);
            uVar2 = (undefined1)local_14;
            if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar14))) goto LAB_0055f368;
          }
          operator_delete(pvVar14,pnVar15);
        }
      }
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_cc);
      local_14._0_1_ = 3;
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_fc);
      local_120 = local_120 + 1;
    } while (local_120 < local_108);
  }
  local_108 = (*(int *)(local_104 + 4) - *(int *)local_104) / 0x18;
  if (0xf < local_28) {
    pnVar15 = (nothrow_t *)(local_28 + 1);
    ppppcVar7 = (char ****)local_3c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      ppppcVar7 = (char ****)local_3c[0][-1];
      pnVar15 = (nothrow_t *)(local_28 + 0x24);
      if ((char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)ppppcVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar7,pnVar15);
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (char ***)((uint)local_3c[0] & 0xffffff00);
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_f0);
  pvVar1 = local_110;
  pvVar20 = local_b8;
  if (local_b8 != (ghidra::vector *)0x0) {
    for (; pvVar20 != pvVar1; pvVar20 = pvVar20 + 0xc) {
      ghidra::lib::vector___Tidy(pvVar20);
    }
    pnVar15 = (nothrow_t *)((((int)local_118 - (int)local_b8) / 0xc) * 0xc);
    pvVar20 = local_b8;
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar20 = *(ghidra::vector **)(local_b8 + -4);
      pnVar15 = pnVar15 + 0x23;
      if ((ghidra::vector *)0x1f < local_b8 + (-4 - (int)pvVar20)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar20,pnVar15);
  }
  if (0xf < in_stack_00000018) {
    pnVar15 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar5 = param_1;
    if ((nothrow_t *)0xfff < pnVar15) {
      puVar5 = (undefined4 *)param_1[-1];
      pnVar15 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar5,pnVar15);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] iVar10 = __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return iVar10;
}


// Ghidra: void __thiscall UIText::update(UIText *this)
void UIText::update()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff6c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  uint uVar2;
  char *pcVar3;
  UIText *pUVar4;
  uint uVar5;
  Sprite *pSVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  Ref *this_00;
  Texture2D *this_01;
  float *pfVar11;
  byte bVar12;
  undefined4 *puVar13;
  char *pcVar14;
  void *pvVar15;
  AnimationFrames **ppAVar16;
  nothrow_t *pnVar17;
  uint uVar18;
  UIText *pUVar19;
  ghidra::vector *this_02;
  int iVar20;
  std::string abStack_b0 [12];
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  _TexParams *p_Var21;
  AnimationFrames *local_54;
  undefined4 local_50;
  float local_4c;
  int local_48;
  Ref *local_44;
  int local_40;
  Sprite *local_3c;
  undefined2 local_38;
  undefined1 local_36;
  UIText *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9be6;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = this_;
  local_14 = uVar5;
  if (((char *)this_)[0x27e] != (byte)0x0) {
    if (DAT_0065e440 == (AnimationFrames *)0x0) {
      pSVar6 = operator_new(0x468);
      // [seh] local_8 = 0;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_3c = pSVar6;
      ghidra::str::assign((std::string *)local_2c,"white.png",9);
      // [seh] local_8._0_1_ = 1;
      cocos2d::Sprite::Sprite(pSVar6);
      // [seh] local_8._0_1_ = 2;
      *(undefined ***)pSVar6 = DummyObject::vftable_for_cocos2d__Node_;
      *(undefined ***)(pSVar6 + 0x278) = DummyObject::vftable_for_cocos2d__TextureProtocol_;
      cocos2d::Sprite::initWithFile(pSVar6,(std::string *)local_2c);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        pnVar17 = (nothrow_t *)(local_18 + 1);
        pvVar15 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_2c[0] + -4);
          pnVar17 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15))) {
LAB_0055ff9a:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      // [seh] local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      DAT_0065e440 = (AnimationFrames *)pSVar6;
      cocos2d::Ref::retain((Ref *)pSVar6);
    }
    cleanupRender(this_);
    cocos2d::Color3B::Color3B((Color3B *)&local_38);
    local_38 = DAT_0065d9ed;
    local_36 = DAT_0065d9ef;
    fStack_9c = 7.897858e-39;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff6c,(std::string *)((char *)this_ + 0x2c0));
    pUVar19 = this_ + 0x2d8;
    iVar7 = generateLines();
    *(int *)((char *)this_ + 0x29c) = iVar7;
    local_2d = '\0';
    iVar7 = *(int *)((char *)this_ + 0x2dc) - *(int *)pUVar19 >> 0x1f;
    if ((*(int *)((char *)this_ + 0x2dc) - *(int *)pUVar19) / 0x18 + iVar7 != iVar7) {
      local_40 = 0;
      pSVar6 = (Sprite *)0x0;
      do {
        iVar8 = (**(code **)(*(int *)this_ + 0xb0))();
        local_3c = pSVar6 + 1;
        uVar18 = 0;
        iVar7 = *(int *)((char *)this_ + 0x2d8);
        puVar9 = (undefined4 *)(local_40 + iVar7);
        iVar20 = 0;
        local_48 = 0;
        local_4c = (*(float *)(iVar8 + 4) - (float)(*(int *)((char *)this_ + 0x288) * (int)local_3c)) -
                   (float)(int)pSVar6;
        if (puVar9[4] != 0) {
          do {
            uVar2 = puVar9[5];
            puVar13 = puVar9;
            if (0xf < uVar2) {
              puVar13 = (undefined4 *)*puVar9;
            }
            this_ = local_34;
            if (*(char *)((int)puVar13 + uVar18) == '`') {
              uVar18 = uVar18 + 1;
              if ((uint)puVar9[4] <= uVar18) break;
              if (0xf < uVar2) {
                puVar9 = (undefined4 *)*puVar9;
              }
              if (*(char *)((int)puVar9 + uVar18) == 'a') {
                local_2d = '\x01';
              }
              else {
                puVar10 = (undefined2 *)translateColour((char)uVar5);
                local_38 = *puVar10;
                local_36 = *(undefined1 *)(puVar10 + 1);
                this_ = local_34;
              }
            }
            else {
              puVar13 = puVar9;
              if (0xf < uVar2) {
                puVar13 = (undefined4 *)*puVar9;
              }
              if (*(char *)((int)puVar13 + uVar18) != ' ') {
                puVar13 = puVar9;
                if (0xf < uVar2) {
                  puVar13 = (undefined4 *)*puVar9;
                }
                bVar12 = *(byte *)((int)puVar13 + uVar18);
                if (local_2d != '\0') {
                  local_2d = '\0';
                  if (0xf < uVar2) {
                    puVar9 = (undefined4 *)*puVar9;
                  }
                  switch(*(undefined1 *)((int)puVar9 + uVar18)) {
                  case 0x30:
                    bVar12 = 0x88;
                    break;
                  case 0x31:
                    bVar12 = 0x82;
                    break;
                  case 0x32:
                    bVar12 = 0x83;
                    break;
                  case 0x33:
                    bVar12 = 0x84;
                    break;
                  case 0x34:
                    bVar12 = 0x85;
                    break;
                  case 0x35:
                    bVar12 = 4;
                    break;
                  case 0x36:
                    bVar12 = 5;
                    break;
                  case 0x37:
                    bVar12 = 6;
                    break;
                  case 0x38:
                    bVar12 = 7;
                    break;
                  case 0x39:
                    bVar12 = 0x87;
                    break;
                  case 0x61:
                    bVar12 = 0x8c;
                    break;
                  case 0x62:
                    bVar12 = 0x91;
                    break;
                  case 99:
                    bVar12 = 0x89;
                    break;
                  case 100:
                    bVar12 = 0x8d;
                    break;
                  case 0x65:
                    bVar12 = 0x8f;
                    break;
                  case 0x66:
                    bVar12 = 0x8a;
                    break;
                  case 0x67:
                    bVar12 = 0x8b;
                    break;
                  case 0x68:
                    bVar12 = 0x8e;
                    break;
                  case 0x69:
                    bVar12 = 0x90;
                    break;
                  case 0x6a:
                    bVar12 = 0xe;
                    break;
                  case 0x6b:
                    bVar12 = 0xf;
                    break;
                  case 0x6c:
                    bVar12 = 0x10;
                    break;
                  case 0x6d:
                    bVar12 = 0x11;
                    break;
                  case 0x6e:
                    bVar12 = 0x12;
                    break;
                  case 0x6f:
                    bVar12 = 0x92;
                    break;
                  case 0x70:
                    bVar12 = 0x93;
                    break;
                  case 0x71:
                    bVar12 = 0x94;
                    break;
                  case 0x72:
                    bVar12 = 0x95;
                    break;
                  case 0x73:
                    bVar12 = 0x96;
                    break;
                  case 0x74:
                    bVar12 = 0x97;
                    break;
                  case 0x75:
                    bVar12 = 0x98;
                    break;
                  case 0x76:
                    bVar12 = 0x99;
                    break;
                  case 0x77:
                    bVar12 = 0x9a;
                    break;
                  case 0x78:
                    bVar12 = 0x9b;
                  }
                }
                local_1c = 0;
                local_18 = 0xf;
                local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
                if (OISConfiguration::alernateTextRendering == false) {
                  pcVar3 = (&PTR_s_CHAR_unknown_png_005e2568)[bVar12];
                  pcVar14 = pcVar3;
                  do {
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar1 != '\0');
                  ghidra::str::assign
                            ((std::string *)local_2c,pcVar3,(int)pcVar14 - (int)(pcVar3 + 1));
                  // [seh] local_8 = 4;
                  this_00 = (Ref *)cocos2d::Sprite::createWithSpriteFrameName
                                             ((std::string *)local_2c);
                }
                else {
                  pcVar3 = (&PTR_s_CHAR_unknown_png_005e22f8)[bVar12];
                  pcVar14 = pcVar3;
                  do {
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar1 != '\0');
                  ghidra::str::assign
                            ((std::string *)local_2c,pcVar3,(int)pcVar14 - (int)(pcVar3 + 1));
                  // [seh] local_8 = 3;
                  this_00 = (Ref *)cocos2d::Sprite::create((std::string *)local_2c);
                }
                // [seh] local_8 = -1;
                local_44 = this_00;
                if (0xf < local_18) {
                  pnVar17 = (nothrow_t *)(local_18 + 1);
                  pvVar15 = local_2c[0];
                  if ((nothrow_t *)0xfff < pnVar17) {
                    pvVar15 = *(void **)((int)local_2c[0] + -4);
                    pnVar17 = (nothrow_t *)(local_18 + 0x24);
                    if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15))) goto LAB_0055ff9a;
                  }
                  operator_delete(pvVar15,pnVar17);
                }
                p_Var21 = s_texParams;
                this_01 = (Texture2D *)(**(code **)(*(int *)(this_00 + 0x278) + 0xc))();
                cocos2d::Texture2D::setTexParameters(this_01,p_Var21);
                // [seh] local_8 = 5;
                (**(code **)(*(int *)this_00 + 0xa0))();
                pUVar19 = local_34;
                // [seh] local_8 = 0xffffffff;
                (**(code **)(*(int *)this_00 + 0x40))();
                (**(code **)(*(int *)this_00 + 0x25c))();
                // [seh] local_8 = 6;
                (**(code **)(*(int *)this_00 + 0x4c))();
                // [seh] local_8 = 0xffffffff;
                cocos2d::Ref::retain(this_00);
                ppAVar16 = *(AnimationFrames ***)(pUVar19 + 0x2e8);
                this_02 = (ghidra::vector *)(pUVar19 + 0x2e4);
                if ((int)ppAVar16 - *(int *)this_02 >> 2 == 0x10) {
                  local_54 = DAT_0065e440;
                  if (*(AnimationFrames ***)(pUVar19 + 0x2ec) == ppAVar16) {
                    ghidra::lib::vector___Emplace_reallocate(this_02,ppAVar16,&local_54);
                  }
                  else {
                    *ppAVar16 = DAT_0065e440;
                    *(int *)(pUVar19 + 0x2e8) = *(int *)(pUVar19 + 0x2e8) + 4;
                  }
                  ppAVar16 = *(AnimationFrames ***)(pUVar19 + 0x2e8);
                }
                if (*(AnimationFrames ***)(pUVar19 + 0x2ec) == ppAVar16) {
                  ghidra::lib::vector___Emplace_reallocate
                            (this_02,ppAVar16,(AnimationFrames **)&local_44);
                }
                else {
                  *ppAVar16 = (AnimationFrames *)this_00;
                  *(int *)(pUVar19 + 0x2e8) = *(int *)(pUVar19 + 0x2e8) + 4;
                }
                this_ = local_34;
                (**(code **)(*(int *)local_34 + 0x10c))();
                iVar20 = local_48;
              }
              iVar20 = iVar20 + 1 + *(int *)((char *)this_ + 0x284);
              local_48 = iVar20;
            }
            uVar18 = uVar18 + 1;
            iVar7 = *(int *)((char *)this_ + 0x2d8);
            puVar9 = (undefined4 *)(local_40 + iVar7);
          } while (uVar18 < (uint)puVar9[4]);
        }
        local_40 = local_40 + 0x18;
        pSVar6 = local_3c;
      } while (local_3c < (Sprite *)((*(int *)((char *)this_ + 0x2dc) - iVar7) / 0x18));
      pUVar19 = this_ + 0x2d8;
    }
    if (((char *)this_)[0x27c] != (byte)0x0) {
      if (*(int **)((char *)this_ + 0x280) != (int *)0x0) {
        (**(code **)(**(int **)((char *)this_ + 0x280) + 0x138))();
        *(int *)((char *)this_ + 0x280) = 0;
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_2c,"white.png",9);
      // [seh] local_8 = 7;
      pSVar6 = cocos2d::Sprite::create((std::string *)local_2c);
      // [seh] local_8 = 0xffffffff;
      *(Sprite **)((char *)this_ + 0x280) = pSVar6;
      if (0xf < local_18) {
        pnVar17 = (nothrow_t *)(local_18 + 1);
        pvVar15 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_2c[0] + -4);
          pnVar17 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      (**(code **)(*(int *)this_ + 0x108))();
      (**(code **)(**(int **)((char *)this_ + 0x280) + 0x25c))();
      (**(code **)(**(int **)((char *)this_ + 0x280) + 0x244))();
      local_50 = 0;
      local_4c = 0.0;
      // [seh] local_8 = 8;
      (**(code **)(**(int **)((char *)this_ + 0x280) + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      fStack_9c = 7.899718e-39;
      (**(code **)(**(int **)((char *)this_ + 0x280) + 0x48))();
      ghidra::str::ctor(abStack_b0,(std::string *)((char *)this_ + 0x2c0));
      iVar7 = getActualTextWidth();
      if (*(int *)((char *)this_ + 0x294) < iVar7) {
        iVar7 = *(int *)((char *)this_ + 0x294);
      }
      iVar20 = **(int **)((char *)this_ + 0x280);
      fStack_9c = 7.899802e-39;
      pfVar11 = (float *)(**(code **)(iVar20 + 0xb0))();
      pUVar4 = local_34;
      fStack_9c = (float)(iVar7 + 2) / *pfVar11;
      fStack_a0 = 7.899847e-39;
      (**(code **)(iVar20 + 0x24))();
      iVar20 = (*(int *)(pUVar19 + 4) - *(int *)pUVar19) / 0x18;
      iVar7 = **(int **)(pUVar4 + 0x280);
      fStack_a0 = 7.899948e-39;
      iVar8 = (**(code **)(iVar7 + 0xb0))();
      this_ = local_34;
      fStack_a0 = (float)((int)((float)(iVar20 + -1) + (float)iVar20 * 7.0) + 2) /
                  *(float *)(iVar8 + 4);
      uStack_a4 = 0x5605f5;
      (**(code **)(iVar7 + 0x2c))();
    }
    ((char *)this_)[0x27e] = (byte)0x0;
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: int __cdecl UIText::getRealWidthWithoutMacros(void *param_1)
int UIText::getRealWidthWithoutMacros(void * param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint in_stack_00000018;
  std::string abStack_4c [12];
  undefined4 uStack_40;
  int local_24;
  int local_20;
  int local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1e48;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar7 = 0;
  local_14 = 0;
  ghidra::str::ctor(abStack_4c,(std::string *)&param_1);
  splitStringBy();
  local_18 = (local_20 - local_24) / 0x18;
  if (local_18 != 0) {
    puVar6 = (uint *)(local_24 + 0x10);
    do {
      uVar8 = *puVar6;
      iVar3 = 0;
      uVar7 = 0;
      iVar4 = iVar3;
      if (uVar8 != 0) {
        do {
          puVar1 = puVar6 + -4;
          if (0xf < puVar6[1]) {
            puVar1 = (uint *)*puVar1;
          }
          iVar3 = iVar4 + 1;
          if (*(char *)((int)puVar1 + uVar7) != '`') {
            iVar3 = iVar4;
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar3;
        } while (uVar7 < uVar8);
      }
      uVar8 = uVar8 + iVar3 * -2;
      uVar7 = local_14;
      if (local_14 < uVar8 + 1) {
        uVar7 = uVar8;
      }
      puVar6 = puVar6 + 6;
      local_18 = local_18 + -1;
      local_14 = uVar7;
    } while (local_18 != 0);
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_24);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar2 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_40 = 0x5607e3;
    operator_delete(pvVar2,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return uVar7;
}


// Ghidra: void __cdecl UIText::getTextWithoutMacros(undefined4 *param_1)
void UIText::getTextWithoutMacros(undefined4 * param_1)

{
  undefined4 *puVar1;
  std::string *in_ECX;
  undefined4 *puVar2;
  uint uVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  uint uVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c9c31;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (std::string)0x0;
  uVar6 = 0;
  puVar2 = param_1;
  uVar3 = in_stack_00000018;
  uVar5 = in_stack_00000014;
  if (in_stack_00000014 != 0) {
    do {
      puVar1 = &param_1;
      if (0xf < uVar3) {
        puVar1 = puVar2;
      }
      if (*(char *)((int)puVar1 + uVar6) == '`') {
        uVar6 = uVar6 + 1;
      }
      else {
        puVar1 = &param_1;
        if (0xf < uVar3) {
          puVar1 = puVar2;
        }
        ghidra::lib::basic_string__push_back(in_ECX,*(char *)((int)puVar1 + uVar6));
        puVar2 = param_1;
        uVar3 = in_stack_00000018;
        uVar5 = in_stack_00000014;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  if (0xf < uVar3) {
    pnVar4 = (nothrow_t *)(uVar3 + 1);
    puVar1 = puVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar1 = (undefined4 *)puVar2[-1];
      pnVar4 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)puVar2 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __cdecl UIText::getActualTextWidth(void *param_1)
int UIText::getActualTextWidth(void * param_1)

{
  int iVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  float in_XMM0_Da;
  uint in_stack_00000018;
  std::string abStack_3c [12];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4f48;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_3c,(std::string *)&param_1);
  iVar1 = getRealWidthWithoutMacros();
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_1 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x560983;
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return (int)(in_XMM0_Da * 5.0 * (float)iVar1 + (float)(iVar1 + -1));
}


// Ghidra: void __thiscall UIText::setOpacity(UIText *this,uchar param_1)
void UIText::setOpacity(uchar param_1)

{
  uint uVar1;
  undefined3 in_stack_00000005;
  
  uVar1 = 0;
  if (*(int *)((char *)this + 0x2e8) - *(int *)((char *)this + 0x2e4) >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((char *)this + 0x2e4) + uVar1 * 4) + 0x244))(_param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)((char *)this + 0x2e8) - *(int *)((char *)this + 0x2e4) >> 2));
  }
  return;
}
