// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Node * __thiscall UIRectangle::UIRectangle(UIRectangle *this,int param_1,int param_2)
UIRectangle::UIRectangle(int param_1, int param_2)

{
  UIRectangle *this_00;
  Size *pSVar1;
  Sprite *pSVar2;
  uint uStack_78;
  uint uStack_68;
  uint uStack_58;
  float local_48;
  undefined4 local_20;
  undefined4 local_1c;
  UIRectangle *local_18;
  // [seh] void *local_10;
  Size **ppSStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  ppSStack_c = &param_1_005ca00d;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_18 = this;
  cocos2d::Node::Node((Node *)this);
  // [seh] local_8 = 0;
  // [vtable] *(undefined ***)this = vftable;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0x288));
  pSVar1 = (Size *)cocos2d::Size::Size((Size *)&local_20,(float)param_1,(float)param_2);
  cocos2d::Node::setContentSize((Node *)this,pSVar1);
  local_48 = (float)((uint)local_48 & 0xffffff00);
  ghidra::str::assign((std::string *)&local_48,"white.png",9);
  pSVar2 = loadSprite();
  *(Sprite **)((char *)this + 0x278) = pSVar2;
  local_20 = 0;
  local_1c = 0;
  // [seh] local_8._0_1_ = 1;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  // [seh] local_8._0_1_ = 0;
  (**(code **)(**(int **)((char *)this + 0x278) + 0x48))();
  (**(code **)(**(int **)((char *)this + 0x278) + 0x2c))();
  local_48 = 7.921053e-39;
  cocos2d::Node::addChild((Node *)this,*(Node **)((char *)this + 0x278));
  local_48 = 0.0;
  uStack_58 = uStack_58 & 0xffffff00;
  ghidra::str::assign((std::string *)&uStack_58,"white.png",9);
  pSVar2 = loadSprite();
  local_20 = 0;
  local_1c = 0;
  *(Sprite **)(local_18 + 0x27c) = pSVar2;
  // [seh] local_8._0_1_ = 2;
  local_48 = 7.921169e-39;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  // [seh] local_8._0_1_ = 0;
  local_48 = (float)(param_2 + -1);
  (**(code **)(**(int **)(local_18 + 0x27c) + 0x48))();
  this_00 = local_18;
  (**(code **)(**(int **)(local_18 + 0x27c) + 0x24))();
  uStack_58 = 0x564151;
  cocos2d::Node::addChild((Node *)this_00,*(Node **)(this_00 + 0x27c));
  uStack_58 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  ghidra::str::assign((std::string *)&uStack_68,"white.png",9);
  pSVar2 = loadSprite();
  *(Sprite **)(this_00 + 0x280) = pSVar2;
  local_20 = 0;
  local_1c = 0;
  // [seh] local_8._0_1_ = 3;
  uStack_58 = 0x5641a1;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  // [seh] local_8._0_1_ = 0;
  uStack_58 = 0;
  (**(code **)(**(int **)(this_00 + 0x280) + 0x48))();
  (**(code **)(**(int **)(this_00 + 0x280) + 0x2c))();
  uStack_68 = 0x5641ed;
  cocos2d::Node::addChild((Node *)this_00,*(Node **)(this_00 + 0x280));
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  ghidra::str::assign((std::string *)&uStack_78,"white.png",9);
  pSVar2 = loadSprite();
  *(Sprite **)(this_00 + 0x284) = pSVar2;
  local_20 = 0;
  local_1c = 0;
  // [seh] local_8._0_1_ = 4;
  uStack_68 = 0x56423d;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  uStack_68 = 0;
  (**(code **)(**(int **)(this_00 + 0x284) + 0x48))();
  (**(code **)(**(int **)(this_00 + 0x284) + 0x24))();
  uStack_78 = 0x564281;
  cocos2d::Node::addChild((Node *)this_00,*(Node **)(this_00 + 0x284));
  uStack_78 = 0x564298;
  setColour(this_00);
  // [seh] ExceptionList = local_10;
  return (Node *)this_00;
}


// Ghidra: void __thiscall UIRectangle::cleanupAll(UIRectangle *this)
void UIRectangle::cleanupAll()

{
  if (*(int **)((char *)this + 0x278) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x278) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x278) = 0;
  }
  if (*(int **)((char *)this + 0x27c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x27c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x27c) = 0;
  }
  if (*(int **)((char *)this + 0x280) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x280) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x280) = 0;
  }
  if (*(int **)((char *)this + 0x284) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x284) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x284) = 0;
  }
  return;
}


// Ghidra: void __thiscall UIRectangle::setColour(UIRectangle *this,undefined4 param_2)
void UIRectangle::setColour(undefined4 param_2)

{
  UIRectangle *pUVar1;
  int iVar2;
  
  iVar2 = 4;
  pUVar1 = this + 0x278;
  do {
    if (*(int **)pUVar1 != (int *)0x0) {
      (**(code **)(**(int **)pUVar1 + 0x25c))(&param_2);
    }
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)((char *)this + 0x288) = (undefined2)param_2;
  ((char *)this)[0x28a] = param_2._2_1_;
  return;
}
