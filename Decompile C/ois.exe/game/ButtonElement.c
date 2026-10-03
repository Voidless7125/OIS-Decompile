#include "../ois.exe.h"


// public: __thiscall ButtonElement::ButtonElement(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ButtonElement * __thiscall
ButtonElement::ButtonElement(ButtonElement *this,undefined4 param_1,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_0000001c;
  void *local_10;
  float *pfStack_c;
  undefined4 local_8;
  
  pfStack_c = &param_2_005ca92f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (ButtonElement)0x0;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0xc),(basic_string<> *)&param_3);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Size::Size((Size *)(this + 0x2c),0.0,0.0);
  this[0x34] = (ButtonElement)0x0;
  if (0xf < in_stack_0000001c) {
    pnVar2 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall ButtonElement::render(int,class std::vector<class UIText *,class
// std::allocator<class UIText *> > *,class std::vector<class cocos2d::ui::Scale9Sprite *,class
// std::allocator<class cocos2d::ui::Scale9Sprite *> > *,class cocos2d::Node *)

void __thiscall
ButtonElement::render
          (ButtonElement *this,int param_1,vector<> *param_2,vector<> *param_3,Node *param_4)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  vector<> *this_00;
  basic_string<> *pbVar3;
  AnimationFrames *pAVar4;
  Texture2D *this_01;
  _TexParams *p_Var5;
  Scale9Sprite *pSVar6;
  UIText *pUVar7;
  void *pvVar8;
  ButtonElement *pBVar9;
  nothrow_t *pnVar10;
  undefined4 uVar11;
  undefined4 local_3c;
  AnimationFrames *local_38;
  vector<> *local_34;
  AnimationFrames *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca98b;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_3;
  if (this[7] == (ButtonElement)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (this[4] == (ButtonElement)0x0) {
      std::basic_string<>::assign((basic_string<> *)local_2c,"MenuButton_Undepressed.png",0x1a);
      local_8 = 2;
      pAVar4 = (AnimationFrames *)cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    }
    else {
      std::basic_string<>::assign((basic_string<> *)local_2c,"MenuButton_Depressed.png",0x18);
      local_8 = 1;
      pAVar4 = (AnimationFrames *)cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    }
  }
  else {
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 0;
    pAVar4 = (AnimationFrames *)cocos2d::ui::Scale9Sprite::create(pbVar3);
  }
  local_8 = 0xffffffff;
  local_30 = pAVar4;
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar8 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_0056f177;
    }
    operator_delete(pvVar8,pnVar10);
  }
  this_01 = (Texture2D *)(**(code **)(*(int *)(pAVar4 + 0x278) + 0xc))();
  p_Var5 = this_0065d534;
  if (this_0065d534 == (_TexParams *)0x0) {
    p_Var5 = operator_new(0x10);
    this_0065d534 = p_Var5;
    *(undefined4 *)(p_Var5 + 4) = 0x2600;
    *(undefined4 *)p_Var5 = 0x2600;
    *(undefined4 *)(p_Var5 + 8) = 0x812f;
    *(undefined4 *)(p_Var5 + 0xc) = 0x812f;
  }
  cocos2d::Texture2D::setTexParameters(this_01,p_Var5);
  iVar1 = *(int *)pAVar4;
  cocos2d::Size::Size((Size *)&local_3c,*(float *)(this + 0x2c),*(float *)(this + 0x30));
  (**(code **)(iVar1 + 0xac))();
  local_3c = 0;
  local_38 = (AnimationFrames *)&DAT_3f800000;
  local_8 = 3;
  (**(code **)(*(int *)pAVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pAVar4 + 0x48))();
  (**(code **)(*(int *)param_4 + 0x10c))();
  this_00 = local_34;
  ppAVar2 = *(AnimationFrames ***)(local_34 + 4);
  if (*(AnimationFrames ***)(local_34 + 8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)local_34,ppAVar2,&local_30);
  }
  else {
    *ppAVar2 = pAVar4;
    *(int *)(local_34 + 4) = *(int *)(local_34 + 4) + 4;
  }
  if (this[5] != (ButtonElement)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"MenuButton_Selected.png",0x17);
    local_8 = 4;
    pSVar6 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    local_8 = 0xffffffff;
    local_30 = (AnimationFrames *)pSVar6;
    if (0xf < local_18) {
      pnVar10 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar10 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
LAB_0056f177:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar10);
    }
    iVar1 = *(int *)pSVar6;
    cocos2d::Size::Size((Size *)&local_3c,*(float *)(this + 0x2c),*(float *)(this + 0x30));
    (**(code **)(iVar1 + 0xac))();
    pAVar4 = local_30;
    local_3c = 0;
    local_38 = (AnimationFrames *)&DAT_3f800000;
    local_8 = 5;
    (**(code **)(*(int *)local_30 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pAVar4 + 0x48))();
    (**(code **)(*(int *)param_4 + 0x108))();
    ppAVar2 = *(AnimationFrames ***)(this_00 + 4);
    if (*(AnimationFrames ***)(this_00 + 8) == ppAVar2) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)this_00,ppAVar2,&local_30);
    }
    else {
      *ppAVar2 = pAVar4;
      *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
    }
  }
  if (this[6] == (ButtonElement)0x0) {
    uVar11 = 0x37;
    if (this[7] != (ButtonElement)0x0) {
      uVar11 = 0x38;
    }
  }
  else {
    uVar11 = 0x25;
  }
  pBVar9 = this + 0xc;
  if (0xf < *(uint *)(this + 0x20)) {
    pBVar9 = *(ButtonElement **)pBVar9;
  }
  strUsingArgs(&stack0xffffff84,"`%c%s",uVar11,pBVar9);
  pUVar7 = UIText::create();
  local_8 = 6;
  local_38 = (AnimationFrames *)pUVar7;
  (**(code **)(*(int *)pUVar7 + 0xa0))();
  local_8 = 0xffffffff;
  local_34 = *(vector<> **)(this + 0x30);
  iVar1 = *(int *)pUVar7;
  local_30 = *(AnimationFrames **)(this + 0x28);
  (**(code **)(iVar1 + 0xb0))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*(int *)param_4 + 0x108))();
  ppAVar2 = *(AnimationFrames ***)(param_2 + 4);
  if (*(AnimationFrames ***)(param_2 + 8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)param_2,ppAVar2,&local_38);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pUVar7;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
