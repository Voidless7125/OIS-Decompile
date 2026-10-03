// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Node * __thiscall PresentationInterface::PresentationInterface(PresentationInterface *this)
PresentationInterface::PresentationInterface()

{
  char stack0xffffffa0[1] = {0};  // [pseudo] address of an unnamed stack slot
  PresentationInterface *pPVar1;
  Node *pNVar2;
  ghidra::lib::map_t *pmVar3;
  int iVar4;
  SoundEngine *pSVar5;
  ghidra::lib::_Tree_node_t *p_Var6;
  ParticleEngine *this_00;
  EventListenerKeyboard *pEVar7;
  Director *pDVar8;
  EventListenerMouse *pEVar9;
  Sprite *pSVar10;
  int iVar11;
  float *pfVar12;
  char *pcVar13;
  ghidra::lib::_Tree_comp_alloc_t *this_01;
  ghidra::lib::_Tree_comp_alloc_t *this_02;
  float local_5c;
  float fStack_58;
  float fStack_54;
  code *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  double local_24;
  PresentationInterface *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  float *pfStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  pfStack_c = &param_2_005c614b;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_1c = this;
  cocos2d::Layer::Layer((Layer *)this);
  // [seh] local_8 = 0;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined1 **)((char *)this + 0x294) = &DAT_bf800000;
  *(undefined1 **)((char *)this + 0x298) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x29c) = 0;
  *(undefined2 *)((char *)this + 0x2a0) = 0;
  *(undefined4 *)((char *)this + 0x2a4) = 0;
  *(undefined1 **)((char *)this + 0x2a8) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x2ac) = 0;
  *(undefined4 *)((char *)this + 0x2b0) = 0;
  *(undefined1 **)((char *)this + 0x2b4) = &DAT_bf800000;
  *(undefined1 **)((char *)this + 0x2b8) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 700) = 0x3f800000;
  *(undefined4 *)((char *)this + 0x2c0) = 0x3f800000;
  *(undefined4 *)((char *)this + 0x2c4) = 0xffffffff;
  *(undefined1 **)((char *)this + 0x2c8) = &DAT_bf800000;
  ((char *)this)[0x2cc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2d0) = 0;
  *(undefined4 *)((char *)this + 0x2d4) = 0;
  *(undefined4 *)((char *)this + 0x2dc) = 0;
  pSVar5 = ghidra::any_singleton();
  pPVar1 = this + 0x2e8;
  *(SoundEngine **)((char *)this + 0x2e0) = pSVar5;
  *(undefined4 *)((char *)this + 0x2e4) = 0;
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)((char *)this + 0x2ec) = 0;
  local_14 = pPVar1;
  p_Var6 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_01);
  *(ghidra::lib::_Tree_node_t **)pPVar1 = p_Var6;
  // [seh] local_8._0_1_ = 1;
  pNVar2 = (Node *)((char *)this + 0x2f0);
  *(undefined4 *)pNVar2 = 0;
  *(undefined4 *)((char *)this + 0x2f4) = 0;
  local_14 = (PresentationInterface *)pNVar2;
  p_Var6 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_02);
  *(ghidra::lib::_Tree_node_t **)pNVar2 = p_Var6;
  // [seh] local_8._0_1_ = 2;
  ((char *)this)[0x2f8] = (byte)0x0;
  fStack_54 = 7.606526e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x2fc),-9999.0,-9999.0,-9999.0);
  // [seh] local_8._0_1_ = 3;
  fStack_54 = 7.606579e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x308),-9999.0,-9999.0,-9999.0);
  // [seh] local_8._0_1_ = 4;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x314));
  // [seh] local_8._0_1_ = 5;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 800));
  // [seh] local_8._0_1_ = 6;
  fStack_54 = 7.606674e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x32c),0.0,0.0,0.0);
  // [seh] local_8._0_1_ = 7;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x338));
  ((char *)this)[0x344] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x34c) = 0;
  *(undefined4 *)((char *)this + 0x350) = 0;
  *(undefined4 *)((char *)this + 0x354) = 0;
  *(undefined4 *)((char *)this + 0x360) = 0;
  *(undefined4 *)((char *)this + 0x364) = 0;
  *(undefined4 *)((char *)this + 0x368) = 0;
  *(undefined4 *)((char *)this + 0x36c) = 0;
  *(undefined4 *)((char *)this + 0x380) = 0;
  *(undefined4 *)((char *)this + 900) = 0xf;
  ((char *)this)[0x370] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x388) = 0;
  *(undefined4 *)((char *)this + 0x38c) = 0;
  *(undefined4 *)((char *)this + 0x390) = 0;
  *(undefined4 *)((char *)this + 0x394) = 0;
  *(undefined4 *)((char *)this + 0x398) = 0;
  this_00 = ghidra::Singleton<void>::instance;
  // [seh] local_8._0_1_ = 0xb;
  *(undefined2 *)((char *)this + 0x39c) = 0;
  *(undefined4 *)((char *)this + 0x3a0) = 0;
  *(undefined4 *)((char *)this + 0x3a4) = 0;
  if (this_00 == (ParticleEngine *)0x0) {
    this_00 = operator_new(0x288);
    // [seh] local_8._0_1_ = 0xc;
    local_14 = (PresentationInterface *)this_00;
    cocos2d::Node::Node((Node *)this_00);
    *(undefined ***)this_00 = ParticleEngine::vftable;
    *(undefined4 *)(this_00 + 0x278) = 0;
    *(undefined4 *)(this_00 + 0x27c) = 0;
    *(undefined4 *)(this_00 + 0x280) = 0;
    ghidra::Singleton<void>::instance = this_00;
  }
  // [seh] local_8._0_1_ = 0xb;
  *(ParticleEngine **)((char *)this + 0x3a8) = this_00;
  *(undefined4 *)((char *)this + 0x3ac) = 0;
  *(undefined4 *)((char *)this + 0x3b0) = 0xffffffff;
  fStack_54 = 7.607158e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3b4),0.0,0.0,0.0);
  // [seh] local_8._0_1_ = 0xd;
  ((char *)this)[0x3c0] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x3c4) = 0;
  *(undefined4 *)((char *)this + 0x3c8) = 0;
  fStack_54 = 7.607242e-39;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0x3cc),0xff,0xff,0xff);
  fStack_54 = 7.607274e-39;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0x3cf),0xff,0xff,0xff);
  *(undefined4 *)((char *)this + 0x3d4) = 0;
  *(undefined4 *)((char *)this + 0x3d8) = 0;
  fStack_54 = 7.607358e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3dc),0.0,0.0,0.0);
  // [seh] local_8._0_1_ = 0xe;
  fStack_54 = 7.607411e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 1000),0.0,0.0,0.0);
  // [seh] local_8._0_1_ = 0xf;
  fStack_54 = 7.607464e-39;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3f4),0.0,0.0,0.0);
  // [seh] local_8._0_1_ = 0x10;
  *(undefined4 *)((char *)this + 0x400) = 0;
  *(undefined4 *)((char *)this + 0x404) = 0;
  *(undefined4 *)((char *)this + 0x408) = 0;
  *(undefined4 *)((char *)this + 0x40c) = 0;
  *(undefined4 *)((char *)this + 0x410) = 0;
  cocos2d::Node::scheduleUpdate((Node *)this);
  pEVar7 = cocos2d::EventListenerKeyboard::create();
  *(EventListenerKeyboard **)((char *)this + 0x2d8) = pEVar7;
  local_34 = _vcall__776__flat______;
  local_30 = 0;
  local_2c = (double)CONCAT44(this,(undefined4)local_2c);
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(pEVar7 + 0x70),(ghidra::lib::_Binder_t *)&local_34);
  local_34 = _vcall__780__flat______;
  local_30 = 0;
  local_2c = (double)CONCAT44(this,(undefined4)local_2c);
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(*(int *)((char *)this + 0x2d8) + 0x98),(ghidra::lib::_Binder_t *)&local_34)
  ;
  pDVar8 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(pDVar8 + 0x58),*(EventListener **)(local_1c + 0x2d8),1000);
  pEVar9 = cocos2d::EventListenerMouse::create();
  local_2c = (double)CONCAT44(local_1c,(undefined4)local_2c);
  local_34 = onMouseDown;
  local_30 = 0;
  *(EventListenerMouse **)(local_1c + 0x2dc) = pEVar9;
  ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)(pEVar9 + 0x70),(ghidra::lib::_Binder_t *)&local_34);
  local_34 = onMouseUp;
  local_30 = 0;
  local_2c = (double)CONCAT44(local_1c,(undefined4)local_2c);
  ghidra::lib::function__operator_x3d_x3c_x3e
            ((ghidra::lib::function_t *)(*(int *)(local_1c + 0x2dc) + 0x98),(ghidra::lib::_Binder_t *)&local_34);
  local_34 = onMouseMove;
  local_30 = 0;
  local_2c = (double)CONCAT44(local_1c,(undefined4)local_2c);
  ghidra::lib::function__operator_x3d_x3c_x3e
            ((ghidra::lib::function_t *)(*(int *)(local_1c + 0x2dc) + 0xc0),(ghidra::lib::_Binder_t *)&local_34);
  local_34 = onMouseScroll;
  local_30 = 0;
  local_2c = (double)CONCAT44(local_1c,(undefined4)local_2c);
  ghidra::lib::function__operator_x3d_x3c_x3e
            ((ghidra::lib::function_t *)(*(int *)(local_1c + 0x2dc) + 0xe8),(ghidra::lib::_Binder_t *)&local_34);
  pDVar8 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(pDVar8 + 0x58),*(EventListener **)(local_1c + 0x2dc),1000);
  local_5c = (float)((uint)local_5c & 0xffffff00);
  ghidra::str::assign((std::string *)&local_5c,"NDMouseCursor_Invalid.png",0x19);
  pSVar10 = loadSprite();
  pPVar1 = local_1c;
  local_18 = 0;
  local_14 = (PresentationInterface *)0x3f800000;
  *(Sprite **)(local_1c + 0x364) = pSVar10;
  // [seh] local_8._0_1_ = 0x11;
  (**(code **)(*(int *)pSVar10 + 0xa0))();
  // [seh] local_8._0_1_ = 0x10;
  fStack_54 = 7.608123e-39;
  cocos2d::Node::addChild((Node *)pPVar1,*(Node **)(pPVar1 + 0x364),1000);
  ghidra::str::assign((std::string *)&stack0xffffffa0,"white.png",9);
  pSVar10 = loadSprite();
  *(Sprite **)(pPVar1 + 0x2b0) = pSVar10;
  local_18 = 0;
  local_14 = (PresentationInterface *)0x0;
  // [seh] local_8._0_1_ = 0x12;
  (**(code **)(*(int *)pSVar10 + 0xa0))();
  // [seh] local_8 = CONCAT31(local_8._1_3_,0x10);
  local_24 = (double)DAT_0065db5c;
  iVar4 = **(int **)(pPVar1 + 0x2b0);
  iVar11 = (**(code **)(iVar4 + 0xb0))();
  local_14 = *(PresentationInterface **)(iVar11 + 4);
  local_2c = (double)_screenSize;
  pfVar12 = (float *)(**(code **)(**(int **)(local_1c + 0x2b0) + 0xb0))();
  fStack_54 = (float)((local_2c * 1.5) / (double)*pfVar12);
  fStack_58 = 7.60846e-39;
  (**(code **)(iVar4 + 0x3c))();
  pPVar1 = local_1c;
  fStack_58 = 0.0 - DAT_0065db5c * 0.25;
  local_5c = 0.0 - _screenSize * 0.25;
  (**(code **)(**(int **)(local_1c + 0x2b0) + 0x48))();
  iVar4 = **(int **)(pPVar1 + 0x2b0);
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0','\0','\0');
  pPVar1 = local_1c;
  (**(code **)(iVar4 + 0x25c))();
  (**(code **)(**(int **)(pPVar1 + 0x2b0) + 0x244))(0);
  cocos2d::Node::addChild((Node *)pPVar1,*(Node **)(pPVar1 + 0x2b0),2000);
  *(Node *)(pPVar1 + 0x39c) = (Node)0x0;
  pmVar3 = (ghidra::lib::map_t *)(pPVar1 + 0x2e8);
  local_14 = (PresentationInterface *)0x3b;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ' ';
  local_14 = (PresentationInterface *)0x4d;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '1';
  local_14 = (PresentationInterface *)0x4e;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '2';
  local_14 = (PresentationInterface *)0x4f;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '3';
  local_14 = (PresentationInterface *)0x50;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '4';
  local_14 = (PresentationInterface *)0x51;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '5';
  local_14 = (PresentationInterface *)0x52;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '6';
  local_14 = (PresentationInterface *)0x53;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '7';
  local_14 = (PresentationInterface *)0x54;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '8';
  local_14 = (PresentationInterface *)0x55;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '9';
  local_14 = (PresentationInterface *)0x4c;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '0';
  local_14 = (PresentationInterface *)0x49;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '-';
  local_14 = (PresentationInterface *)0x20;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '-';
  local_14 = (PresentationInterface *)0x1f;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '+';
  local_14 = (PresentationInterface *)0x4b;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '/';
  local_14 = (PresentationInterface *)0x78;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '\\';
  local_14 = (PresentationInterface *)0x77;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '[';
  local_14 = (PresentationInterface *)0x79;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ']';
  local_14 = (PresentationInterface *)0x99;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '`';
  local_14 = (PresentationInterface *)0x57;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ';';
  local_14 = (PresentationInterface *)0x43;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '\'';
  local_14 = (PresentationInterface *)0x48;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ',';
  local_14 = (PresentationInterface *)0x4a;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '.';
  local_14 = (PresentationInterface *)0x59;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  pmVar3 = (ghidra::lib::map_t *)(pPVar1 + 0x2f0);
  *pcVar13 = '=';
  local_14 = (PresentationInterface *)0x3b;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ' ';
  local_14 = (PresentationInterface *)0x4d;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '!';
  local_14 = (PresentationInterface *)0x4e;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '@';
  local_14 = (PresentationInterface *)0x4f;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '#';
  local_14 = (PresentationInterface *)0x50;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '$';
  local_14 = (PresentationInterface *)0x51;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '%';
  local_14 = (PresentationInterface *)0x52;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '^';
  local_14 = (PresentationInterface *)0x53;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '&';
  local_14 = (PresentationInterface *)0x54;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '*';
  local_14 = (PresentationInterface *)0x55;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '(';
  local_14 = (PresentationInterface *)0x4c;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ')';
  local_14 = (PresentationInterface *)0x49;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '_';
  local_14 = (PresentationInterface *)0x20;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '-';
  local_14 = (PresentationInterface *)0x1f;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '+';
  local_14 = (PresentationInterface *)0x4b;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '?';
  local_14 = (PresentationInterface *)0x78;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '|';
  local_14 = (PresentationInterface *)0x77;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '{';
  local_14 = (PresentationInterface *)0x79;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '}';
  local_14 = (PresentationInterface *)0x99;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '~';
  local_14 = (PresentationInterface *)0x57;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = ':';
  local_14 = (PresentationInterface *)0x43;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '\"';
  local_14 = (PresentationInterface *)0x48;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '<';
  local_14 = (PresentationInterface *)0x4a;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '>';
  local_14 = (PresentationInterface *)0x59;
  pcVar13 = ghidra::lib::map__operator_x5b_x5d(pmVar3,&local_14);
  *pcVar13 = '+';
  ShowCursor(0);
  cocos2d::Node::addChild((Node *)pPVar1,*(Node **)(pPVar1 + 0x3a8));
  // [seh] ExceptionList = local_10;
  return (Node *)pPVar1;
}


// Ghidra: void __thiscall PresentationInterface::~PresentationInterface(PresentationInterface *this)
PresentationInterface::~PresentationInterface()

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  nothrow_t *pnVar7;
  ghidra::lib::_Tree_t *p_Var8;
  int *piVar9;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5f40;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x3f4));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 1000));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x3dc));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x3b4));
  uVar1 = *(uint *)((char *)this + 900);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x370);
    pnVar7 = (nothrow_t *)(uVar1 + 1);
    pvVar5 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)pvVar2 + -4);
      pnVar7 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar7);
  }
  *(undefined4 *)((char *)this + 0x380) = 0;
  *(undefined4 *)((char *)this + 900) = 0xf;
  ((char *)this)[0x370] = (byte)0x0;
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x338));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x32c));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 800));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x314));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x308));
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0x2fc));
  iVar3 = *(int *)((char *)this + 0x2f0);
  p_Var8 = (ghidra::lib::_Tree_t *)((char *)this + 0x2f0);
  // [seh] local_8 = 0;
  piVar9 = *(int **)(iVar3 + 4);
  iVar6 = iVar3;
  if (*(char *)((int)piVar9 + 0xd) == '\0') {
    do {
      ghidra::lib::_Tree___Erase(p_Var8,(ghidra::lib::_Tree_node_t *)piVar9[2]);
      piVar4 = (int *)*piVar9;
      operator_delete(piVar9,(nothrow_t *)0x18);
      piVar9 = piVar4;
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
    iVar6 = *(int *)p_Var8;
  }
  *(int *)(iVar6 + 4) = iVar3;
  **(int **)p_Var8 = iVar3;
  *(int *)(*(int *)p_Var8 + 8) = iVar3;
  *(undefined4 *)((char *)this + 0x2f4) = 0;
  operator_delete(*(void **)p_Var8,(nothrow_t *)0x18);
  p_Var8 = (ghidra::lib::_Tree_t *)((char *)this + 0x2e8);
  iVar3 = *(int *)p_Var8;
  // [seh] local_8 = 1;
  iVar6 = iVar3;
  piVar9 = *(int **)(iVar3 + 4);
  if (*(char *)((int)*(int **)(iVar3 + 4) + 0xd) == '\0') {
    do {
      ghidra::lib::_Tree___Erase(p_Var8,(ghidra::lib::_Tree_node_t *)piVar9[2]);
      piVar4 = (int *)*piVar9;
      operator_delete(piVar9,(nothrow_t *)0x18);
      piVar9 = piVar4;
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
    iVar6 = *(int *)p_Var8;
  }
  *(int *)(iVar6 + 4) = iVar3;
  **(int **)p_Var8 = iVar3;
  *(int *)(*(int *)p_Var8 + 8) = iVar3;
  *(undefined4 *)((char *)this + 0x2ec) = 0;
  operator_delete(*(void **)p_Var8,(nothrow_t *)0x18);
  cocos2d::Layer::~Layer((Layer *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::configureSoundForShip(PresentationInterface *this)
void PresentationInterface::configureSoundForShip()

{
  char stack0xffffffc8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  SoundEngine *pSVar2;
  Sound SVar3;
  int iVar4;
  Ship *pSVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  float fVar13;
  
  (*(SoundEngine **)((char *)this + 0x2e0))->removeAllSounds();
  pSVar5 = ShipData::currentlyBoardedShip;
  *(undefined4 *)(*(int *)((char *)this + 0x2e0) + 0x24) = 0;
  if (pSVar5 != (Ship *)0x0) {
    *(Ship **)(*(int *)((char *)this + 0x2e0) + 0x24) = pSVar5;
  }
  iVar1 = *(int *)(*(int *)((char *)this + 0x2e0) + 0x24);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x40);
    uVar6 = 0;
    if (*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2 != 0) {
      do {
        iVar7 = 0;
        iVar4 = *(int *)(*(int *)(iVar4 + 0x3c) + uVar6 * 4);
        iVar10 = *(int *)(iVar4 + 8);
        iVar9 = *(int *)(iVar10 + 4);
        if ((iVar9 == 0xb) || (iVar9 == 9)) {
          iVar7 = 1;
        }
        else if (iVar9 == 0xe) {
          iVar7 = 5;
        }
        else if ((iVar9 == 1) || (iVar9 == 2)) {
          iVar7 = 2;
        }
        SVar3 = *(Sound *)(iVar10 + 0xb4);
        if (SVar3 != 0) {
          uVar12 = *(undefined1 *)(iVar4 + 99);
          fVar13 = 1.0;
          bVar8 = true;
          iVar9 = -1;
          iVar10 = iVar7;
          pSVar2 = ghidra::any_singleton();
          iVar9 = (pSVar2)->addSound(iVar10, SVar3, iVar9, bVar8, (bool)uVar12, fVar13);
          iVar10 = *(int *)(iVar4 + 8);
          *(int *)(iVar4 + 0x7c) = iVar9;
        }
        SVar3 = *(Sound *)(iVar10 + 0xb8);
        if (SVar3 != 0) {
          if ((*(char *)(iVar4 + 99) == '\0') || (*(char *)(iVar4 + 0x62) == '\0')) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          fVar13 = 1.0;
          bVar11 = true;
          iVar10 = -1;
          pSVar2 = ghidra::any_singleton();
          iVar7 = (pSVar2)->addSound(iVar7, SVar3, iVar10, bVar11, bVar8, fVar13);
          *(int *)(iVar4 + 0x84) = iVar7;
        }
        uVar6 = uVar6 + 1;
        iVar4 = *(int *)(iVar1 + 0x40);
        pSVar5 = ShipData::currentlyBoardedShip;
      } while (uVar6 < (uint)(*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2));
    }
  }
  if (pSVar5 != (Ship *)0x0) {
    iVar1 = *(int *)(pSVar5 + 0x254);
    bVar8 = false;
    if (iVar1 != 0) {
      bVar8 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar8) {
      (*(SoundEngine **)((char *)this + 0x2e0))->addSound(4, 0x11, -1, true, true, 1.0);
      return;
    }
    ghidra::str::ctor
              ((std::string *)&stack0xffffffc8,(std::string *)(iVar1 + 0xa8));
    SVar3 = getSound();
    (*(SoundEngine **)((char *)this + 0x2e0))->addSound(4, SVar3, -1, true, true, 1.0);
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::runFullFadeLogic(PresentationInterface *this,float param_1)
void PresentationInterface::runFullFadeLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  GameLogic *pGVar2;
  GameData *pGVar3;
  bool bVar4;
  char cVar5;
  Vec2 *pVVar6;
  SpaceStation *this_01;
  EmailInstance *this_02;
  std::string *pbVar7;
  Pather *this_03;
  PresentationInterface *pPVar8;
  PresentationInterface *this_04;
  TabletManager *pTVar9;
  char **ppcVar10;
  std::string **ppbVar11;
  bool extraout_CL;
  GameLogic *this_05;
  int iVar12;
  void *pvVar13;
  MenuManager *this_06;
  SaveHandler *this_07;
  std::string *pbVar14;
  nothrow_t *pnVar15;
  int extraout_EDX;
  Vec2 *unaff_EDI;
  float fVar16;
  float in_XMM1_Da;
  char *pcStack_68;
  Ship *pSVar17;
  AnimationFrames *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6194;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar6 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar12 = *(int *)((char *)this + 0x29c);
  local_14 = pVVar6;
  if (iVar12 == 0) {
LAB_0052eae3:
    cVar5 = (**(code **)(**(int **)((char *)this + 0x2b0) + 0x23c))();
    if (cVar5 == '\0') goto LAB_0052eb07;
  }
  else {
    if ((iVar12 == 2) && (g_gameLogic[0x73] != (byte)0x0)) {
      fVar16 = *(float *)((char *)this + 0x2ac);
    }
    else {
      fVar16 = *(float *)((char *)this + 0x2ac) - in_XMM1_Da;
      *(float *)((char *)this + 0x2ac) = fVar16;
    }
    if (fVar16 <= in_XMM1_Da) {
      if (iVar12 == 1) {
        *(undefined4 *)((char *)this + 0x29c) = 2;
        if (((char *)this)[0x2a0] == (byte)0x0) {
          fVar16 = 1.5;
        }
        else {
          fVar16 = 1.0;
        }
        *(float *)((char *)this + 0x2ac) = fVar16 * 0.3;
        *(float *)((char *)this + 0x2a8) = fVar16 * 0.3;
        (**(code **)(**(int **)((char *)this + 0x2b0) + 0x244))();
        pGVar2 = g_gameLogic;
        iVar12 = *(int *)((char *)this + 0x2a4);
        if (iVar12 == 1) {
          *(undefined1 *)(*(int *)(g_gameData + 0xd0) + 0x318) = 0;
          this_01 = (this_05)->getNearestTowLocation();
          if (*(int *)(this_01 + 0x24) == *(int *)(*(Ship **)(g_gameData + 0xd0) + 0x24)) {
            fVar16 = (float)*(double *)(this_01 + 0x30);
            // [seh] local_8 = 1;
            fastDistance(pVVar6,unaff_EDI);
            // [seh] local_8 = 0xffffffff;
            iVar12 = (int)(fVar16 * 2.0 + 1500.0);
          }
          else {
            (*(Ship **)(g_gameData + 0xd0))->setSector(*(int *)(this_01 + 0x20));
            iVar12 = 5000;
          }
          debugPrint("GAME","Player accrued %d credits in towing fees to %s");
          (this_01)->addAmount(iVar12);
          this_02 = operator_new(0xa0);
          local_30 = (AnimationFrames *)new ((void *)(this_02)) EmailInstance();
          iVar12 = *(int *)(g_gameData + 0x124);
          pbVar14 = (std::string *)(iVar12 + 4);
          if ((std::string *)(local_30 + 0x68) != pbVar14) {
            if (0xf < *(uint *)(iVar12 + 0x18)) {
              pbVar14 = *(std::string **)pbVar14;
            }
            ghidra::str::assign
                      ((std::string *)(local_30 + 0x68),(char *)pbVar14,*(uint *)(iVar12 + 0x14))
            ;
          }
          iVar12 = *(int *)(this_01 + 0x390);
          pbVar14 = (std::string *)(iVar12 + 0x20);
          if ((std::string *)(local_30 + 4) != pbVar14) {
            if (0xf < *(uint *)(iVar12 + 0x34)) {
              pbVar14 = *(std::string **)pbVar14;
            }
            ghidra::str::assign
                      ((std::string *)(local_30 + 4),(char *)pbVar14,*(uint *)(iVar12 + 0x30));
          }
          ghidra::str::assign((std::string *)(local_30 + 0x1c),"Towing Fees",0xb);
          pcStack_68 = 
          "%s,\n\nYour vessel has been towed by our licensed bulk hauling vessel to our nearest starbase, %s in %s.\n\nYou are being charged a fee of %d credits for this service, which must be paid before your ship will be released to you.\n\nThank you for using our service,\n%s"
          ;
          pbVar7 = (std::string *)strUsingArgs((char *)local_2c);
          ghidra::lib::basic_string__operator_x3d((std::string *)(local_30 + 0x34),pbVar7);
          if (0xf < local_18) {
            pnVar15 = (nothrow_t *)(local_18 + 1);
            pvVar13 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar15) {
              pvVar13 = *(void **)((int)local_2c[0] + -4);
              pnVar15 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar13,pnVar15);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          ghidra::str::assign((std::string *)(local_30 + 0x4c),"Contract Complete",0x11);
          pGVar3 = g_gameData;
          local_30[100] = (AnimationFrames)0x0;
          this_00 = *(ghidra::vector **)(pGVar3 + 300);
          ppAVar1 = *(AnimationFrames ***)(this_00 + 4);
          if (*(AnimationFrames ***)(this_00 + 8) == ppAVar1) {
            ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_30);
          }
          else {
            *ppAVar1 = local_30;
            *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
          }
          this_03 = Singleton<Pather>::getInstance();
          (this_03)->resetSector();
          (*(Ship **)(g_gameData + 0xd0))->setSpeed((float)pVVar6);
          ((GameObject *)(*(int *)(g_gameData + 0xd0) + 8))->setLocation();
          *(undefined4 *)(*(int *)(extraout_EDX + 0xd0) + 0x174) = 0;
          (*(Ship **)(extraout_EDX + 0xd0))->setDocked((Ship *)this_01, false, false);
          pcStack_68 = (char *)0x52e5c7;
          debugPrint("GAME","Vessel %s has been towed to %s in %s.");
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else if (iVar12 == 3) {
          pSVar17 = *(Ship **)(g_gameData + 0xd0);
          g_gameData[0xd4] = *(GameData *)(*(int *)(pSVar17 + 0x254) + 0xd0);
          pPVar8 = ghidra::any_singleton();
          leaveDockedVessel(pPVar8,pSVar17);
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else if (iVar12 == 4) {
          pSVar17 = *(Ship **)(g_gameData + 0xd0);
          g_gameData[0xd4] = *(GameData *)(*(int *)(*(int *)(pSVar17 + 0x178) + 0x254) + 0xd0);
          pPVar8 = ghidra::any_singleton();
          boardDockedVessel(pPVar8,pSVar17);
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else if (iVar12 == 5) {
          pSVar17 = *(Ship **)(g_gameData + 0xd0);
          pPVar8 = ghidra::any_singleton();
          boardMooredStructure(pPVar8,pSVar17);
          g_gameData[0xd4] = (byte)0x43;
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else if (iVar12 == 6) {
          pSVar17 = *(Ship **)(g_gameData + 0xd0);
          pPVar8 = ghidra::any_singleton();
          debugPrint("GAME","Returning to player\'s own ship.");
          ShipData::currentlyBoardedShip = pSVar17;
          ghidra::str::ctor
                    ((std::string *)&pcStack_68,(std::string *)(pSVar17 + 0x68));
          _DstBuf_0065d520 = (g_gameData)->getStructure(0);
          if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
            this_04 = operator_new(0x418);
            // [seh] local_8 = 2;
            ghidra::Singleton<void>::instance = (PresentationInterface *)PresentationInterface(this_04);
            // [seh] local_8 = 0xffffffff;
          }
          configureSoundForShip(ghidra::Singleton<void>::instance);
          showRoom(pPVar8,*(int *)(pSVar17 + 0x2ac));
          g_gameData[0xd4] = *(GameData *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xd0);
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else if (iVar12 == 7) {
          debugPrint("WORLD","Switching to main scenario now; tutorial done.");
          ghidra::str::assign((std::string *)(g_gameData + 0xb4),"objectsinspace",0xe);
          pGVar2 = g_gameLogic;
          g_gameLogic[0x1c5] = (byte)0x0;
          pGVar2[0xa4] = (byte)0x0;
          *(undefined2 *)(pGVar2 + 0x71) = 0x100;
          pGVar2[0x70] = (byte)0x0;
          ghidra::any_singleton();
          (this_06)->resetGame();
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
        else {
          if (iVar12 == 8) {
            pPVar8 = ghidra::any_singleton();
            if (*(int *)(pPVar8 + 0x3a0) != 0) {
              (*(Room **)(pPVar8 + 0x2d4))->recheckCharacterRenders();
              *(undefined4 *)(pPVar8 + 0x2d0) = 0x3fcccccd;
              PresentationData::m_talkMode = false;
              ghidra::str::assign(&PresentationData::m_talkingTo,"",0);
              hideTablet(pPVar8,true);
              moveToCameraPos(pPVar8,-1,(float)pVVar6);
              (*(RoomObject **)(pPVar8 + 0x3a0))->recheckTabs();
              (*(RoomObject **)(pPVar8 + 0x3a0))->resetTopBars(extraout_CL);
            }
            pTVar9 = ghidra::any_singleton();
            *(undefined4 *)(pTVar9 + 0x24) = 0;
            pTVar9 = ghidra::any_singleton();
            *(undefined4 *)(pTVar9 + 0x1c) = 0;
            pTVar9 = ghidra::any_singleton();
            *(undefined4 *)(pTVar9 + 0x20) = 0;
            pTVar9 = ghidra::any_singleton();
            pSVar17 = ShipData::currentlyBoardedShip;
            *(undefined4 *)(pTVar9 + 0x10) = 0;
            if (((pSVar17 != (Ship *)0x0) && (bVar4 = (pSVar17)->isSpaceStation(), bVar4)) &&
               (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2)) {
              ghidra::any_singleton();
              (this_07)->saveGame();
              *(undefined4 *)((char *)this + 0x2a4) = 0;
              goto LAB_0052ea44;
            }
          }
          else {
            if (iVar12 == 0xb) {
              pbVar14 = (std::string *)(g_gameLogic + 0xac);
              *(undefined4 *)(g_gameLogic + 0xa8) = 2;
              if (pbVar14 != (std::string *)&DAT_006575c8) {
                ppcVar10 = &DAT_006575c8;
                if (0xf < DAT_006575dc) {
                  ppcVar10 = (char **)DAT_006575c8;
                }
                ghidra::str::assign(pbVar14,(char *)ppcVar10,DAT_006575d8);
              }
              *(undefined4 *)(pGVar2 + 0xc4) = 2;
              if ((std::string *)(pGVar2 + 200) != (std::string *)&DAT_00657640) {
                ppcVar10 = &DAT_00657640;
                if (0xf < DAT_00657654) {
                  ppcVar10 = (char **)DAT_00657640;
                }
                ghidra::str::assign
                          ((std::string *)(pGVar2 + 200),(char *)ppcVar10,DAT_00657650);
              }
              *(undefined4 *)(pGVar2 + 0xe0) = 0;
              if ((std::string *)(pGVar2 + 0xe4) != (std::string *)&firstTimeBonusStr) {
                ppbVar11 = &firstTimeBonusStr;
                if (0xf < DAT_0065754c) {
                  ppbVar11 = (std::string **)firstTimeBonusStr;
                }
                ghidra::str::assign
                          ((std::string *)(pGVar2 + 0xe4),(char *)ppbVar11,DAT_00657548);
              }
              (pGVar2)->setStartLocation(1);
              *(undefined2 *)(pGVar2 + 0x11b) = 0x100;
              pGVar2[0x11d] = (byte)0x0;
              *(undefined2 *)(pGVar2 + 0x118) = 0;
              pGVar2[0x11a] = (byte)0x0;
              pGVar2[0xa4] = (byte)0x0;
            }
            else {
              if (iVar12 != 10) goto LAB_0052e9bc;
              *(undefined4 *)(g_gameData + 0x154) = 9;
            }
            pPVar8 = ghidra::any_singleton();
            hideTabletInstantly(pPVar8);
            pPVar8 = ghidra::any_singleton();
            quitToMenu(pPVar8);
          }
LAB_0052e9bc:
          *(undefined4 *)((char *)this + 0x2a4) = 0;
        }
      }
      else {
        if (iVar12 == 2) {
          *(undefined4 *)((char *)this + 0x29c) = 3;
          if (((char *)this)[0x2a0] == (byte)0x0) {
            fVar16 = 1.5;
          }
          else {
            fVar16 = 1.0;
          }
          *(float *)((char *)this + 0x2ac) = fVar16 * 0.4;
          *(float *)((char *)this + 0x2a8) = fVar16 * 0.4;
        }
        else {
          if (iVar12 != 3) goto LAB_0052ea44;
          *(undefined4 *)((char *)this + 0x29c) = 0;
          *(undefined1 **)((char *)this + 0x2ac) = &DAT_bf800000;
          *(undefined1 **)((char *)this + 0x2a8) = &DAT_bf800000;
        }
        (**(code **)(**(int **)((char *)this + 0x2b0) + 0x244))();
      }
    }
LAB_0052ea44:
    iVar12 = *(int *)((char *)this + 0x29c);
    if (iVar12 == 3) {
      (**(code **)(**(int **)((char *)this + 0x2b0) + 0x244))();
      goto LAB_0052eb07;
    }
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        (**(code **)(**(int **)((char *)this + 0x2b0) + 0x244))();
        goto LAB_0052eb07;
      }
      goto LAB_0052eae3;
    }
    cVar5 = (**(code **)(**(int **)((char *)this + 0x2b0) + 0x23c))();
    if (cVar5 == -0x40) goto LAB_0052eb07;
  }
  (**(code **)(**(int **)((char *)this + 0x2b0) + 0x244))();
LAB_0052eb07:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PresentationInterface::update(PresentationInterface *this,float param_1)
void PresentationInterface::update(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  BaseLight *pBVar3;
  bool bVar4;
  GameLogic *pGVar5;
  void *pvVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  MenuManager *pMVar10;
  SoundEngine *pSVar11;
  RoomEditor *pRVar12;
  SectorEditor *pSVar13;
  HardwareOutput *pHVar14;
  PresentationInterface *pPVar15;
  HCURSOR pHVar16;
  ConversationManager *pCVar17;
  int iVar18;
  MenuManager *extraout_ECX;
  MenuManager *extraout_ECX_00;
  MenuManager *this_00;
  float extraout_ECX_01;
  uint uVar19;
  float fVar20;
  char *pcVar21;
  SoundSpace *pSVar22;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pvVar6 = ExceptionList;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c61c8;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar9 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (0.0 < *(float *)((char *)this + 0x2b4)) {
    fVar9 = *(float *)((char *)this + 0x2b4) - param_1;
    *(float *)((char *)this + 0x2b4) = fVar9;
    if (0.0 < fVar9) {
      // [seh] ExceptionList = pvVar6;
      return;
    }
    *(undefined1 **)((char *)this + 0x2b4) = &DAT_bf800000;
    debugPrint("GAME","Displaying menu...");
    ghidra::str::assign((std::string *)(g_gameData + 0xb4),"mainmenu",8);
    pMVar10 = extraout_ECX;
    if (ghidra::Singleton<void>::instance == (MenuManager *)0x0) {
      pMVar10 = operator_new(0x10);
      ghidra::Singleton<void>::instance = pMVar10;
      *(undefined4 *)pMVar10 = 0;
      *(undefined4 *)(pMVar10 + 4) = 0;
      *(undefined4 *)(pMVar10 + 8) = 0;
      *(undefined4 *)(pMVar10 + 0xc) = 0;
      pMVar10 = extraout_ECX_00;
    }
    (pMVar10)->resetGame();
    g_gameLogic[0x73] = (byte)0x0;
    *(undefined4 *)((char *)this + 0x294) = 0;
    *(undefined4 *)((char *)this + 0x29c) = 3;
    // [seh] ExceptionList = local_10;
    return;
  }
  if (g_gameLogic[0x1c6] != (byte)0x0) {
    g_gameLogic[0x1c6] = (byte)0x0;
    ghidra::any_singleton();
    (this_00)->resetGame();
    PresentationData::m_mapZoomLevel = 2;
    PresentationData::m_tabletMapZoomLevel = 2;
    PresentationData::doRecenterMapOnShip
              (*(Ship **)(g_gameData + 0xd0),0.0,0.0,(double)((ulonglong)(uint)fVar9 << 0x20));
    // [seh] ExceptionList = local_10;
    return;
  }
  if ((((*(int *)(g_gameData + 0xd0) == 0) || (*(int *)g_gameLogic == 2)) ||
      (*(int *)g_gameLogic == 3)) && (*(int *)((char *)this + 0x29c) == 0)) {
    if (*(int *)g_gameLogic == 2) {
      pcVar21 = "Ending game. Player was destroyed.";
LAB_0052ece2:
      debugPrint("GAME",pcVar21);
    }
    else if (*(int *)g_gameLogic == 3) {
      if (g_gameData[0x170] == (byte)0x0) {
        pcVar21 = "Ending game. Scenario lost.";
      }
      else {
        pcVar21 = "Ending game. Scenario won.";
      }
      goto LAB_0052ece2;
    }
    pGVar5 = g_gameLogic;
    *(undefined4 *)((char *)this + 0x2a4) = 10;
    if (*(int *)pGVar5 == 2) {
      ghidra::str::assign((std::string *)&stack0xffffffc0,"",0);
      addShake(this);
      pSVar22 = (SoundSpace *)0x0;
      *(undefined2 *)((char *)this + 0x2a0) = 1;
      *(undefined4 *)((char *)this + 0x29c) = 1;
      *(undefined4 *)((char *)this + 0x2ac) = 0x40c00000;
      *(undefined4 *)((char *)this + 0x2a8) = 0x40c00000;
      pSVar11 = ghidra::any_singleton();
      (pSVar11)->setSoundSpace(pSVar22);
      pSVar11 = ghidra::any_singleton();
      if (*pSVar11 != (byte)0x0) {
        (pSVar11)->addSound(6, 0x30, -1, false, true, 1.0);
      }
    }
    else {
      *(undefined2 *)((char *)this + 0x2a0) = 0x101;
      *(undefined4 *)((char *)this + 0x29c) = 1;
      *(undefined4 *)((char *)this + 0x2ac) = 0x3f19999a;
      *(undefined4 *)((char *)this + 0x2a8) = 0x3f19999a;
    }
  }
  if ((0.0 < *(float *)((char *)this + 0x3ac)) &&
     (fVar20 = *(float *)((char *)this + 0x3ac) - param_1, *(float *)((char *)this + 0x3ac) = fVar20, fVar20 <= 0.0)
     ) {
    *(undefined4 *)((char *)this + 0x3ac) = 0;
  }
  if ((0.0 < *(float *)((char *)this + 0x2d0)) &&
     (fVar20 = *(float *)((char *)this + 0x2d0) - param_1, *(float *)((char *)this + 0x2d0) = fVar20, fVar20 < 0.0))
  {
    *(undefined4 *)((char *)this + 0x2d0) = 0;
  }
  (*(ParticleEngine **)((char *)this + 0x3a8))->runlogic(fVar9);
  pRVar12 = Singleton<RoomEditor>::getInstance();
  if ((pRVar12[0x278] == (byte)0x0) &&
     (pSVar13 = ghidra::any_singleton(), pSVar13[0x285] == (byte)0x0)) {
    if ((*(int *)(g_gameData + 0xd8) != 0) &&
       ((OISConfiguration::hardwareEnabled != false &&
        (pHVar14 = HardwareOutput::getInstance(), *pHVar14 != (byte)0x0)))) {
      pHVar14 = HardwareOutput::getInstance();
      uVar19 = 0;
      if (*(int *)(pHVar14 + 0xc) - *(int *)(pHVar14 + 8) >> 2 != 0) {
        do {
          HardwareInterface::runLogic
                    (*(HardwareInterface **)(*(int *)(pHVar14 + 8) + uVar19 * 4),fVar9);
          uVar19 = uVar19 + 1;
        } while (uVar19 < (uint)(*(int *)(pHVar14 + 0xc) - *(int *)(pHVar14 + 8) >> 2));
      }
    }
    if ((*(float *)((char *)this + 0x3d8) <= 0.0) && (iVar18 = *(int *)(g_gameData + 0xd0), iVar18 != 0)) {
      iVar1 = *(int *)(*(int *)(iVar18 + 0x40) + 0x10);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x62) == '\0')) {
        if (((iVar18 == 0) || (iVar1 = *(int *)(*(int *)(iVar18 + 0x40) + 0x18), iVar1 == 0)) ||
           (*(char *)(iVar1 + 0x62) == '\0')) goto LAB_0052ef27;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffc0,(std::string *)(iVar18 + 0x238));
      }
      else {
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffc0,(std::string *)(iVar18 + 0x238));
      }
      addShake(this);
    }
  }
LAB_0052ef27:
  bVar4 = true;
  if ((*(int **)(g_gameData + 0xd0) == (int *)0x0) ||
     (cVar7 = (**(code **)(**(int **)(g_gameData + 0xd0) + 0x20))(), cVar7 != '\0')) {
    bVar4 = false;
  }
  else {
    (*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224))->runLogic(fVar9);
  }
  if (*(Room **)((char *)this + 0x2d4) != (Room *)0x0) {
    (*(Room **)((char *)this + 0x2d4))->runLogic(fVar9);
  }
  if (*(undefined4 **)((char *)this + 0x3a0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((char *)this + 0x3a0))();
    pPVar15 = ghidra::any_singleton();
    if ((*(int *)(pPVar15 + 0x3a0) == 0) || (pPVar15[0x39d] == (byte)0x0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (iVar18 = *(int *)((char *)this + 0x3a0), *(int *)(iVar18 + 0x3c) == 4)) {
      ScreenInterface::update
                (*(ScreenInterface **)(iVar18 + 0x624 + *(int *)(iVar18 + 0x388) * 4),
                 extraout_ECX_01,SUB41(fVar9,0));
    }
  }
  if (*(undefined4 **)((char *)this + 0x3a4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((char *)this + 0x3a4))();
  }
  runCameraLogic(this,fVar9);
  if (-1.0 < *(float *)((char *)this + 0x294)) {
    fVar20 = *(float *)((char *)this + 0x294) - param_1;
    *(float *)((char *)this + 0x294) = fVar20;
    if (0.0 < fVar20) {
      fVar20 = 1.0 - fVar20 / *(float *)((char *)this + 0x298);
      if ((fVar20 <= 1.0) && (0.0 <= fVar20)) {
        iVar18 = *(int *)((char *)this + 0x2d4);
        uVar19 = 0;
        if (*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2 != 0) {
          do {
            iVar1 = *(int *)(*(int *)(iVar18 + 0x90) + uVar19 * 4);
            iVar2 = *(int *)(iVar1 + 0x3c);
            if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              if (*(BaseLight **)(iVar1 + 0x3d8) != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity
                          (*(BaseLight **)(iVar1 + 0x3d8),*(float *)(iVar1 + 0x3ac) * fVar20);
                iVar18 = *(int *)((char *)this + 0x2d4);
              }
              iVar1 = *(int *)(*(int *)(iVar18 + 0x90) + uVar19 * 4);
              pBVar3 = *(BaseLight **)(iVar1 + 0x3d4);
              if (pBVar3 != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac) * fVar20);
                iVar18 = *(int *)((char *)this + 0x2d4);
              }
              iVar1 = *(int *)(*(int *)(iVar18 + 0x90) + uVar19 * 4);
              pBVar3 = *(BaseLight **)(iVar1 + 0x3d0);
              if (pBVar3 != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac) * fVar20);
                iVar18 = *(int *)((char *)this + 0x2d4);
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < (uint)(*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2));
        }
        if (*(BaseLight **)(iVar18 + 0x9c) != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity
                    (*(BaseLight **)(iVar18 + 0x9c),*(float *)(iVar18 + 0x40) * fVar20);
        }
        ghidra::any_singleton();
      }
    }
    else {
      *(undefined1 **)((char *)this + 0x294) = &DAT_bf800000;
    }
  }
  runFullFadeLogic(this,fVar9);
  pHVar16 = GetCursor();
  if (pHVar16 != (HCURSOR)0x0) {
    ShowCursor(0);
  }
  if ((*(float *)((char *)this + 0x38c) == *(float *)((char *)this + 0x394)) &&
     (*(float *)((char *)this + 0x390) == *(float *)((char *)this + 0x398))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    *(undefined4 *)((char *)this + 0x388) = 0;
    fVar20 = 0.0;
  }
  else {
    fVar20 = *(float *)((char *)this + 0x388) + param_1;
    *(float *)((char *)this + 0x388) = fVar20;
  }
  if ((fVar20 <= 1.0) || (OISConfiguration::tooltips == false)) {
    if (*(int **)((char *)this + 0x368) == (int *)0x0) goto LAB_0052f250;
    (**(code **)(**(int **)((char *)this + 0x368) + 0xb4))();
  }
  else {
    if (*(int **)((char *)this + 0x368) == (int *)0x0) goto LAB_0052f250;
    (**(code **)(**(int **)((char *)this + 0x368) + 0xb4))();
  }
  (**(code **)(**(int **)((char *)this + 0x36c) + 0xb4))();
LAB_0052f250:
  *(undefined4 *)((char *)this + 0x38c) = *(undefined4 *)((char *)this + 0x394);
  *(undefined4 *)((char *)this + 0x390) = *(undefined4 *)((char *)this + 0x398);
  if (*(int *)((char *)this + 0x3b0) == -1) {
    if ((*(float *)((char *)this + 0x2d0) == 0.0) && (bVar8 = hasForcedConversationPending(this), bVar8)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((bVar8) && (bVar8 = hasForcedConversationPending(this), bVar8)) {
      iVar18 = *(int *)((char *)this + 0x2d4);
      uVar19 = 0;
      if (*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2 != 0) {
        do {
          iVar18 = *(int *)(*(int *)(iVar18 + 0x90) + uVar19 * 4);
          iVar1 = *(int *)(iVar18 + 0x3c);
          if ((iVar1 == 5) || (iVar1 == 6)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((bVar8) && (iVar18 = *(int *)(iVar18 + 0x100), iVar18 != 0)) {
            ghidra::str::ctor
                      ((std::string *)&stack0xffffffc0,
                       (std::string *)(*(int *)(iVar18 + 0x1c) + 0xf8));
            // [seh] local_8 = 0;
            pCVar17 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            iVar18 = (pCVar17)->hasConversationToForce();
            if (iVar18 != -1) {
              ghidra::str::assign
                        ((std::string *)
                         (*(int *)(*(int *)(*(int *)((char *)this + 0x2d4) + 0x90) + uVar19 * 4) + 200),"",0
                        );
              moveToCameraPos(this,*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x2d4) + 0x90) +
                                                    uVar19 * 4) + 900),fVar9);
            }
          }
          iVar18 = *(int *)((char *)this + 0x2d4);
          uVar19 = uVar19 + 1;
        } while (uVar19 < (uint)(*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2));
      }
    }
  }
  if ((bVar4) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0x374) != 0)) {
    switchToPComms(this);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::boardDockedVessel(PresentationInterface *this,Ship *param_1)
void PresentationInterface::boardDockedVessel(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  FlagManager *pFVar1;
  std::string *pbVar2;
  void *pvVar3;
  undefined4 ****ppppuVar4;
  nothrow_t *pnVar5;
  undefined4 ***pppuStack_6c;
  int iStack_68;
  undefined4 ***pppuStack_64;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c6208;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (((*(int *)(param_1 + 0x178) != 0) && (param_1[0x280] == (byte)0x0)) &&
     (param_1[0x281] == (byte)0x0)) {
    debugPrint("GAME","Boarded docked platform/craft.");
    ShipData::currentlyBoardedShip = *(Ship **)(param_1 + 0x178);
    ghidra::str::ctor
              ((std::string *)&pppuStack_6c,
               (std::string *)(ShipData::currentlyBoardedShip + 0x68));
    _DstBuf_0065d520 = (g_gameData)->getStructure();
    showRoom(this,*(int *)(*(int *)(param_1 + 0x178) + 0x2ac));
    pppuStack_64 = (undefined4 ***)0x52f4a4;
    strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0;
    pppuStack_64 = local_2c;
    if (0xf < local_18) {
      pppuStack_64 = local_2c[0];
    }
    iStack_68 = local_1c + (int)pppuStack_64;
    pppuStack_6c = local_2c;
    if (0xf < local_18) {
      pppuStack_6c = local_2c[0];
    }
    ghidra::lib::transform___x28_x29();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff90,(std::string *)local_2c);
    // [seh] local_8._0_1_ = 1;
    pFVar1 = ghidra::any_singleton();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (pFVar1)->setFlag();
    pppuStack_64 = (undefined4 ***)0x52f529;
    pbVar2 = (std::string *)strUsingArgs((char *)local_44);
    ghidra::lib::basic_string__operator_x3d((std::string *)local_2c,pbVar2);
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar3 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar3 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar5);
    }
    pppuStack_64 = (undefined4 ***)0x52f59e;
    ghidra::lib::transform___x28_x29();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff90,(std::string *)local_2c);
    // [seh] local_8._0_1_ = 2;
    pFVar1 = ghidra::any_singleton();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (pFVar1)->setFlag();
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      ppppuVar4 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        ppppuVar4 = (undefined4 ****)local_2c[0][-1];
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar4,pnVar5);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PresentationInterface::leaveDockedVessel(PresentationInterface *this,Ship *param_1)
void PresentationInterface::leaveDockedVessel(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff80[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  FlagManager *pFVar2;
  word *pwVar3;
  PresentationInterface *this_00;
  int iVar4;
  void *pvVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  nothrow_t *pnVar8;
  int iVar9;
  std::string abStack_7c [8];
  undefined4 uStack_74;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c625a;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  debugPrint("GAME","Returning to player\'s own ship.");
  uStack_74 = 0x52f686;
  strUsingArgs((char *)&local_2c);
  // [seh] local_8 = 0;
  ppppuVar7 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar7 = (undefined4 ****)local_2c;
  }
  ppppuVar6 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar6 = (undefined4 ****)local_2c;
  }
  iVar9 = 0;
  iVar4 = ((int)local_1c + (int)ppppuVar7) - (int)ppppuVar6;
  if ((undefined4 ****)((int)local_1c + (int)ppppuVar7) < ppppuVar6) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    do {
      iVar1 = tolower((int)*(char *)(iVar9 + (int)ppppuVar6));
      *(char *)(iVar9 + (int)ppppuVar7) = (char)iVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar4);
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff80,(std::string *)&local_2c);
  // [seh] local_8._0_1_ = 1;
  pFVar2 = ghidra::any_singleton();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  (pFVar2)->setFlag();
  uStack_74 = 0x52f736;
  pwVar3 = (word *)strUsingArgs((char *)local_44);
  if ((word *)&local_2c != pwVar3) {
    // [mislabelled-dtor] word::~word((word *)&local_2c);
    local_2c = *(undefined4 ****)pwVar3;
    uStack_28 = *(undefined4 *)(pwVar3 + 4);
    uStack_24 = *(undefined4 *)(pwVar3 + 8);
    uStack_20 = *(undefined4 *)(pwVar3 + 0xc);
    local_1c = *(undefined8 *)(pwVar3 + 0x10);
    *(undefined4 *)(pwVar3 + 0x10) = 0;
    *(undefined4 *)(pwVar3 + 0x14) = 0xf;
    *pwVar3 = (word)0x0;
  }
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar5 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar5 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar8);
  }
  ppppuVar7 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar7 = (undefined4 ****)local_2c;
  }
  ppppuVar6 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar6 = (undefined4 ****)local_2c;
  }
  iVar9 = 0;
  iVar4 = ((int)local_1c + (int)ppppuVar7) - (int)ppppuVar6;
  if ((undefined4 ****)((int)local_1c + (int)ppppuVar7) < ppppuVar6) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    do {
      iVar1 = tolower((int)*(char *)(iVar9 + (int)ppppuVar6));
      *(char *)(iVar9 + (int)ppppuVar7) = (char)iVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar4);
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff80,(std::string *)&local_2c);
  // [seh] local_8._0_1_ = 2;
  pFVar2 = ghidra::any_singleton();
  // [seh] local_8._0_1_ = 0;
  (pFVar2)->setFlag();
  ShipData::currentlyBoardedShip = param_1;
  ghidra::str::ctor(abStack_7c,(std::string *)(param_1 + 0x68));
  _DstBuf_0065d520 = (g_gameData)->getStructure();
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_00 = operator_new(0x418);
    // [seh] local_8._0_1_ = 3;
    ghidra::Singleton<void>::instance = (PresentationInterface *)PresentationInterface(this_00);
    // [seh] local_8._0_1_ = 0;
  }
  configureSoundForShip(ghidra::Singleton<void>::instance);
  showRoom(this,*(int *)(param_1 + 0x2ac));
  if (0xf < local_1c._4_4_) {
    pnVar8 = (nothrow_t *)(local_1c._4_4_ + 1);
    ppppuVar7 = (undefined4 ****)local_2c;
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppuVar7 = (undefined4 ****)local_2c[-1];
      pnVar8 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar7,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PresentationInterface::boardMooredStructure(PresentationInterface *this,Ship *param_1)
void PresentationInterface::boardMooredStructure(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string bVar2;
  Stats *pSVar3;
  PresentationInterface *this_00;
  uint unaff_EDI;
  std::string local_74 [12];
  undefined4 uStack_68;
  std::string local_5c [12];
  undefined4 uStack_50;
  std::string local_40 [12];
  undefined4 local_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6298;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 != 0) {
    local_34 = 0x52f942;
    bVar2 = (std::string)
            ghidra::lib::_Traits_equal_t
                      // [cookie] ("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
    if (((!(bool)bVar2) && (param_1[0x280] == (byte)0x0)) && (param_1[0x281] == (byte)0x0)) {
      if (*(int *)(iVar1 + 0x60) == 4) {
        local_40[0] = bVar2;
        ghidra::str::assign(local_40,"derelicts_boarded",0x11);
        // [seh] local_8 = 0;
        pSVar3 = Singleton<Stats>::getInstance();
        // [seh] local_8 = 0xffffffff;
        (pSVar3)->addStat();
        local_34 = 0;
        uStack_50 = 0x52f9d4;
        ghidra::str::assign((std::string *)&stack0xffffffbc,"",0);
        // [seh] local_8 = 1;
        local_5c[0] = (std::string)0x0;
        uStack_68 = 0x52fa00;
        ghidra::str::assign(local_5c,"derelicts_boarded",0x11);
        // [seh] local_8 = CONCAT31(local_8._1_3_,2);
        local_74[0] = (std::string)0x0;
        ghidra::str::assign(local_74,"play",4);
        // [seh] local_8 = 0xffffffff;
        Analytics::logEvent();
      }
      local_34 = 0x52fa41;
      debugPrint("GAME","Boarded moored structure.");
      ShipData::currentlyBoardedShip = (Ship *)0x0;
      ghidra::str::ctor
                (local_40,(std::string *)(*(int *)(param_1 + 0x174) + 200));
      _DstBuf_0065d520 = (g_gameData)->getStructure();
      this_00 = ghidra::any_singleton();
      configureSoundForShip(this_00);
      showRoom(this,0);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::setAirlockStates(PresentationInterface *this,Ship *param_1,bool param_2)
void PresentationInterface::setAirlockStates(Ship * param_1, bool param_2)

{
  std::string abStack_24 [24];
  
  param_1[0x280] = (Ship)param_2;
  param_1[0x281] = (Ship)param_2;
  if ((param_1[0x234] != (byte)0x0) && (*(Ship **)(g_gameData + 0xd0) == param_1)) {
    ghidra::str::ctor(abStack_24,(std::string *)(param_1 + 0x68));
    GameData::setUniqueObjects();
    ghidra::str::ctor(abStack_24,(std::string *)(param_1 + 0x68));
    GameData::setUniqueObjects();
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::changeRoom(PresentationInterface *this,int param_1)
void PresentationInterface::changeRoom(int param_1)

{
  int iVar1;
  Room *pRVar2;
  int iVar3;
  
  if ((*(int *)((char *)this + 0x3b0) == -1) && (*(float *)((char *)this + 0x3ac) <= 0.0)) {
    *(undefined4 *)((char *)this + 0x3ac) = 0x3dcccccd;
    iVar1 = param_1 + *(int *)(*(int *)((char *)this + 0x2d4) + 0x1c);
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if ((iVar3 != *(int *)(*(int *)((char *)this + 0x2d4) + 0x1c)) &&
       (pRVar2 = (_DstBuf_0065d520)->getRoom(iVar3), pRVar2 != (Room *)0x0)) {
      showRoom(this,iVar3);
    }
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::cleanupCurrentRoom(PresentationInterface *this)
void PresentationInterface::cleanupCurrentRoom()

{
  if (*(Room **)((char *)this + 0x2d4) != (Room *)0x0) {
    (*(Room **)((char *)this + 0x2d4))->cleanupRoom();
    *(undefined4 *)((char *)this + 0x2d4) = 0;
  }
  if (*(int *)((char *)this + 0x354) != 0) {
    *(undefined4 *)((char *)this + 0x354) = 0;
  }
  if (*(int *)((char *)this + 0x34c) != 0) {
    *(undefined4 *)((char *)this + 0x34c) = 0;
  }
  *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
  if (*(int *)((char *)this + 0x350) != 0) {
    *(undefined4 *)((char *)this + 0x350) = 0;
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::showRoom(PresentationInterface *this,int param_1)
void PresentationInterface::showRoom(int param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  LogSystem *pLVar2;
  int iVar3;
  int *piVar4;
  Ship *pSVar5;
  GameData *pGVar6;
  Room RVar7;
  Node *pNVar8;
  Room *pRVar9;
  Room *pRVar10;
  Screen_Renderer *pSVar11;
  ScreenInterface *pSVar12;
  RoomObject *pRVar13;
  PresentationInterface *pPVar14;
  int iVar15;
  float extraout_ECX;
  PresentationInterface *pPVar16;
  uint uVar17;
  int *piVar18;
  undefined1 uVar19;
  Vec3 local_3c [20];
  undefined8 local_28;
  undefined4 local_20;
  int *local_1c;
  PresentationInterface *local_18;
  PresentationInterface *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c62c9;
  // [seh] local_10 = ExceptionList;
  // [cookie] pNVar8 = (Node *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_18 = this_;
  cleanupCurrentRoom(this_);
  pRVar9 = (_DstBuf_0065d520)->getRoom(param_1);
  *(Room **)((char *)this_ + 0x2d4) = pRVar9;
  pRVar10 = pRVar9 + 0x44;
  if (0xf < *(uint *)(pRVar9 + 0x58)) {
    pRVar10 = *(Room **)pRVar10;
  }
  debugPrint("GAME","Displaying room %s",pRVar10);
  (*(Room **)((char *)this_ + 0x2d4))->render((float)this_, pNVar8);
  cocos2d::Vec3::Vec3(local_3c,(Vec3 *)(*(int *)((char *)this_ + 0x2d4) + 0x74));
  // [seh] local_8 = 0;
  cocos2d::Vec3::operator*(local_3c,(float)&local_28);
  // [seh] local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_3c);
  *(undefined8 *)((char *)this_ + 0x2fc) = local_28;
  *(undefined4 *)((char *)this_ + 0x304) = local_20;
  cocos2d::Vec3::~Vec3((Vec3 *)&local_28);
  pSVar5 = ShipData::currentlyBoardedShip;
  pRVar10 = *(Room **)((char *)this_ + 0x2d4);
  *(undefined8 *)((char *)this_ + 0x308) = *(undefined8 *)(pRVar10 + 0x80);
  *(undefined4 *)((char *)this_ + 0x310) = *(undefined4 *)(pRVar10 + 0x88);
  *(undefined4 *)((char *)this_ + 0x34c) = 0;
  *(undefined4 *)((char *)this_ + 0x350) = 0;
  *(undefined4 *)((char *)this_ + 0x348) = 0xffffffff;
  if ((pSVar5 == (Ship *)0x0) || (pSVar5[0xe4] == (byte)0x0)) {
    *(undefined2 *)((char *)this_ + 0x3cf) = *(undefined2 *)(pRVar10 + 0x8c);
    *(Room *)((char *)this_ + 0x3d1) = pRVar10[0x8e];
    *(undefined2 *)((char *)this_ + 0x3cc) = *(undefined2 *)(pRVar10 + 0x8c);
    RVar7 = pRVar10[0x8e];
  }
  else {
    iVar15 = *(int *)(pSVar5 + 0x254);
    *(undefined2 *)((char *)this_ + 0x3cf) = *(undefined2 *)(iVar15 + 0xdc);
    ((char *)this_)[0x3d1] = *(PresentationInterface *)(iVar15 + 0xde);
    iVar15 = *(int *)(pSVar5 + 0x254);
    *(undefined2 *)((char *)this_ + 0x3cc) = *(undefined2 *)(iVar15 + 0xdc);
    RVar7 = *(Room *)(iVar15 + 0xde);
  }
  pPVar16 = this_ + 0x3cf;
  *(Room *)((char *)this_ + 0x3ce) = RVar7;
  if (*(int *)(pRVar10 + 0x38) == -1) {
    uVar19 = 1;
  }
  else {
    *(int *)((char *)this_ + 0x348) = *(int *)(pRVar10 + 0x38);
    pSVar11 = (pRVar10)->getConsole(*(int *)(pRVar10 + 0x38));
    *(Screen_Renderer **)((char *)this_ + 0x350) = pSVar11;
    pSVar12 = (pRVar10)->getConsoleInterface(*(int *)(pRVar10 + 0x38));
    *(ScreenInterface **)((char *)this_ + 0x354) = pSVar12;
    (*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224))->renderWarning();
    pLVar2 = *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224);
    *(undefined4 *)(pLVar2 + 0x58) = *(undefined4 *)((char *)this_ + 0x354);
    if (*(int *)(pLVar2 + 0x10) != 0) {
      (pLVar2)->renderWarning();
    }
    *(undefined4 *)(pLVar2 + 0x58) = 0;
    uVar19 = 0;
  }
  (**(code **)(**(int **)((char *)this_ + 0x364) + 0xb4))();
  pGVar6 = g_gameData;
  pRVar10 = *(Room **)((char *)this_ + 0x2d4);
  if ((*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x58) == 0) &&
     (*(int *)(pRVar10 + 0x3c) != -1)) {
    pRVar13 = (pRVar10)->getObjectForScreenID(*(int *)(pRVar10 + 0x3c));
    setMessageFocus(this_,pRVar13);
    pLVar2 = *(LogSystem **)(*(int *)(pGVar6 + 0xd0) + 0x224);
    *(undefined4 *)(pLVar2 + 0x58) = *(undefined4 *)((char *)this_ + 0x354);
    if (*(int *)(pLVar2 + 0x10) != 0) {
      (pLVar2)->renderWarning();
    }
    *(undefined4 *)(pLVar2 + 0x58) = 0;
  }
  else {
    pRVar13 = (pRVar10)->getObjectForScreenID(*(int *)((char *)this_ + 0x348));
    setMessageFocus(this_,pRVar13);
  }
  (*(SoundEngine **)((char *)this_ + 0x2e0))->setSoundSpace(*(SoundSpace **)((char *)this_ + 0x2d4));
  iVar15 = *(int *)((char *)this_ + 0x3a0);
  *(undefined4 *)(iVar15 + 0x3f0) = *(undefined4 *)((char *)this_ + 0x2d4);
  if (*(int *)(iVar15 + 0x3dc) == 0) {
    (*(RoomObject **)((char *)this_ + 0x3a0))->render(*(Node **)((char *)this_ + 0x404));
    iVar15 = *(int *)((char *)this_ + 0x3a0);
    if (*(int *)(iVar15 + 0x3c) == 4) {
      ScreenInterface::update
                (*(ScreenInterface **)(iVar15 + 0x624 + *(int *)(iVar15 + 0x388) * 4),extraout_ECX,
                 (bool)uVar19);
    }
  }
  else {
    (*(RoomObject **)((char *)this_ + 0x3a0))->updateRotationForCamera();
  }
  if (*(int *)((char *)this_ + 0x3a4) == 0) {
    _DAT_000003f0 = *(undefined4 *)((char *)this_ + 0x2d4);
    (*(RoomObject **)((char *)this_ + 0x3a4))->render((Node *)this_);
  }
  iVar15 = *(int *)(g_gameData + 0xd0);
  local_1c = (int *)iVar15;
  pPVar14 = ghidra::any_singleton();
  piVar18 = local_1c;
  if ((*(char *)(iVar15 + 0x234) != '\0') && (*(int *)(g_gameData + 0xd0) == iVar15)) {
    iVar15 = *(int *)(pPVar14 + 0x2d4);
    uVar17 = 0;
    local_14 = pPVar14;
    if (*(int *)(iVar15 + 0x94) - *(int *)(iVar15 + 0x90) >> 2 != 0) {
      do {
        iVar15 = *(int *)(*(int *)(iVar15 + 0x90) + uVar17 * 4);
        iVar3 = *(int *)(iVar15 + 0x31c);
        if (iVar3 == 1) {
          cVar1 = *(char *)((int)piVar18 + 0x280);
LAB_0052ff6a:
          *(bool *)(iVar15 + 0x34c) = cVar1 == '\0';
          RoomObject::resetPosition
                    (*(RoomObject **)(*(int *)(*(int *)(pPVar14 + 0x2d4) + 0x90) + uVar17 * 4));
        }
        else if (iVar3 == 2) {
          cVar1 = *(char *)((int)piVar18 + 0x281);
          goto LAB_0052ff6a;
        }
        iVar15 = *(int *)(pPVar14 + 0x2d4);
        uVar17 = uVar17 + 1;
        this_ = local_18;
      } while (uVar17 < (uint)(*(int *)(iVar15 + 0x94) - *(int *)(iVar15 + 0x90) >> 2));
    }
  }
  *(undefined4 *)((char *)this_ + 0x2d0) = 0x3fcccccd;
  local_14 = (PresentationInterface *)0x0;
  piVar18 = *(int **)(*(int *)((char *)this_ + 0x2d4) + 0x90);
  piVar4 = *(int **)(*(int *)((char *)this_ + 0x2d4) + 0x94);
  uVar17 = (uint)((int)piVar4 + (3 - (int)piVar18)) >> 2;
  if (piVar4 < piVar18) {
    uVar17 = 0;
  }
  local_1c = piVar18;
  if (uVar17 != 0) {
    do {
      iVar15 = *piVar18;
      iVar3 = *(int *)(iVar15 + 0x3c);
      if ((((iVar3 == 3) || (iVar3 == 1)) || (iVar3 == 2)) && (*(char *)(iVar15 + 0x380) == '\0')) {
        if (*(int **)(iVar15 + 0x3d0) != (int *)0x0) {
          (**(code **)(**(int **)(iVar15 + 0x3d0) + 0x25c))(pPVar16);
        }
        if (*(int **)(iVar15 + 0x3d8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar15 + 0x3d8) + 0x25c))(pPVar16);
        }
        if (*(int **)(iVar15 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar15 + 0x3d4) + 0x25c))(pPVar16);
        }
      }
      piVar18 = piVar18 + 1;
      local_14 = (PresentationInterface *)((int)local_14 + 1);
      this_ = local_18;
    } while (local_14 != (PresentationInterface *)uVar17);
  }
  iVar15 = *(int *)((char *)this_ + 0x3a4);
  if (iVar15 != 0) {
    if (*(int **)(iVar15 + 0x3d0) != (int *)0x0) {
      (**(code **)(**(int **)(iVar15 + 0x3d0) + 0x25c))(pPVar16);
      iVar15 = *(int *)((char *)this_ + 0x3a4);
    }
    if (*(int **)(iVar15 + 0x3d8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar15 + 0x3d8) + 0x25c))(pPVar16);
      iVar15 = *(int *)((char *)this_ + 0x3a4);
    }
    if (*(int **)(iVar15 + 0x3d4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar15 + 0x3d4) + 0x25c))(pPVar16);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::onKeyPressed(PresentationInterface *this,KeyCode param_1,Event *param_2)
void PresentationInterface::onKeyPressed(KeyCode param_1, Event * param_2)

{
  ServerPresentationInterface *pSVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  ServerPresentationInterface *pSVar6;
  RoomEditor *pRVar7;
  SectorEditor *pSVar8;
  
  if (g_gameLogic[0x70] == (byte)0x0) {
    pRVar7 = Singleton<RoomEditor>::getInstance();
    if (((pRVar7[0x278] == (byte)0x0) &&
        (pSVar8 = ghidra::any_singleton(), pSVar8[0x285] == (byte)0x0)) &&
       (*(int *)((char *)this + 0x29c) == 0)) {
      if ((param_1 == 0xc) || (param_1 == 0xd)) {
        ((char *)this)[0x2f8] = (byte)0x1;
      }
      piVar4 = *(int **)((char *)this + 0x350);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 7) != '\0')) {
                    // WARNING: Could not recover jumptable at 0x00530253. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar4 + 0x1c))();
        return;
      }
    }
  }
  else {
    pSVar6 = ghidra::any_singleton();
    if (((param_1 == 0x1c) || (param_1 == 0x25)) || (param_1 == 0x92)) {
      iVar2 = *(int *)(pSVar6 + 0x290);
      if (iVar2 != 0) {
        pSVar1 = pSVar6 + 0x298;
        *(int *)pSVar1 = *(int *)pSVar1 + -1;
        if (*(int *)pSVar1 < 0) {
          *(int *)(pSVar6 + 0x298) = (*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) + -1;
          return;
        }
      }
    }
    else if (((param_1 == 0x1d) || (param_1 == 0x2b)) || (param_1 == 0x8e)) {
      iVar2 = *(int *)(pSVar6 + 0x290);
      if ((iVar2 != 0) &&
         (*(int *)(pSVar6 + 0x298) = *(int *)(pSVar6 + 0x298) + 1,
         (uint)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) <= *(uint *)(pSVar6 + 0x298)))
      {
        *(undefined4 *)(pSVar6 + 0x298) = 0;
        return;
      }
    }
    else if ((((param_1 == 0x3b) || (param_1 == 0xa4)) || (param_1 == 10)) || (param_1 == 0x23)) {
      iVar2 = *(int *)(*(int *)(*(int *)(pSVar6 + 0x290) + 0x1c) + *(int *)(pSVar6 + 0x298) * 4);
      if (((*(int *)(iVar2 + 0x6c) != 0) && (*(char *)(iVar2 + 0x74) != '\0')) &&
         (bVar5 = std::_Func_class<bool,int>::operator()
                            ((_Func_class<bool,int> *)(iVar2 + 0x48),*(int *)(iVar2 + 0x70)), !bVar5
         )) {
        return;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(pSVar6 + 0x290) + 0x1c) + *(int *)(pSVar6 + 0x298) * 4);
      iVar3 = *(int *)(iVar2 + 0x70);
      if (*(int *)(iVar2 + 0x44) != 0) {
        std::_Func_class<void,int>::operator()((_Func_class<void,int> *)(iVar2 + 0x20),iVar3);
        return;
      }
      if (iVar3 != -1) {
        *(int *)(pSVar6 + 0x294) = iVar3;
        *(undefined4 *)(pSVar6 + 0x298) = 0;
      }
    }
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::switchToConsoleID(PresentationInterface *this,int param_1)
void PresentationInterface::switchToConsoleID(int param_1)

{
  Room *this_00;
  LogSystem *this_01;
  Screen_Renderer *pSVar1;
  RoomObject *pRVar2;
  ScreenInterface *pSVar3;
  GameData *pGVar4;
  
  this_00 = *(Room **)((char *)this + 0x2d4);
  *(int *)((char *)this + 0x348) = param_1;
  pSVar1 = (this_00)->getConsole(param_1);
  *(Screen_Renderer **)((char *)this + 0x350) = pSVar1;
  pRVar2 = (this_00)->getObjectForScreenID(param_1);
  *(RoomObject **)((char *)this + 0x34c) = pRVar2;
  pSVar3 = (this_00)->getConsoleInterface(param_1);
  pGVar4 = g_gameData;
  *(ScreenInterface **)((char *)this + 0x354) = pSVar3;
  this_01 = *(LogSystem **)(*(int *)(pGVar4 + 0xd0) + 0x224);
  *(ScreenInterface **)(this_01 + 0x58) = pSVar3;
  if (*(int *)(this_01 + 0x10) != 0) {
    (this_01)->renderWarning();
    pGVar4 = g_gameData;
  }
  *(undefined4 *)(this_01 + 0x58) = 0;
  (*(LogSystem **)(*(int *)(pGVar4 + 0xd0) + 0x224))->renderWarning();
  pRVar2 = (*(Room **)((char *)this + 0x2d4))->getObjectForScreenID(*(int *)((char *)this + 0x348));
  setMessageFocus(this,pRVar2);
  return;
}


// Ghidra: void __thiscall PresentationInterface::quitToMenu(PresentationInterface *this)
void PresentationInterface::quitToMenu()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameLogic *pGVar1;
  SoundEngine *this_00;
  PresentationInterface *this_01;
  ghidra::lib::allocator_t *unaff_EDI;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6302;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar4 = *(int *)(g_gameData + 0xcc);
  ghidra::lib::_Destroy_range_t
            // [cookie] ((std::string *)this,(std::string *)(___security_cookie ^ (uint)&stack0xfffffffc),
             unaff_EDI);
  *(undefined4 *)(iVar4 + 0x3f8) = *(undefined4 *)(iVar4 + 0x3f4);
  pGVar1 = g_gameLogic;
  iVar4 = -1;
  SVar3 = 8;
  *(undefined4 *)(g_gameLogic + 100) = 0;
  pGVar1[0x1c5] = (byte)0x0;
  pGVar1[0xa4] = (byte)0x0;
  pSVar2 = *(Ship **)(g_gameData + 0xd0);
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(pSVar2, SVar3, iVar4);
  g_gameLogic[0x73] = (byte)0x1;
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_01 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (PresentationInterface *)PresentationInterface(this_01);
    // [seh] local_8 = 0xffffffff;
  }
  cleanupCurrentRoom(ghidra::Singleton<void>::instance);
  *(undefined4 *)((char *)this + 0x2b4) = 0x3f000000;
  *(undefined4 *)((char *)this + 0x29c) = 0;
  debugPrint("GAME","Quitting to menu after a pause...");
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::onKeyReleased(PresentationInterface *this,KeyCode param_1,Event *param_2)
void PresentationInterface::onKeyReleased(KeyCode param_1, Event * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  RoomObject *this_00;
  undefined4 *puVar1;
  KeyCode KVar2;
  RoomObject *this_01;
  bool bVar3;
  char cVar4;
  Ship *pSVar5;
  RoomEditor *pRVar6;
  SectorEditor *pSVar7;
  InputConfiguration *pIVar8;
  bool extraout_CL;
  bool extraout_CL_00;
  PresentationInterface *this_02;
  int iVar9;
  PresentationInterface *extraout_ECX;
  PresentationInterface *this_03;
  PresentationInterface *this_04;
  PresentationInterface *this_05;
  NetworkData *this_06;
  int extraout_EDX;
  int iVar10;
  undefined4 unaff_EBX;
  uint uVar11;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  int *piVar12;
  float fVar13;
  int *piVar14;
  undefined4 local_4c;
  undefined4 local_48;
  RoomObject *local_44;
  Event *local_40;
  int local_3c [9];
  int *local_18;
  Ship *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6328;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar5 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_40 = param_2;
  local_14 = pSVar5;
  if (*(int *)((char *)this + 0x29c) != 0) goto LAB_00530a76;
  if ((param_1 == 0xc) || (param_1 == 0xd)) {
    ((char *)this)[0x2f8] = (byte)0x0;
  }
  if ((((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 0))
      || (bVar3 = hasForcedConversationPending(this), bVar3)) || (param_1 != 6)) {
    pRVar6 = Singleton<RoomEditor>::getInstance();
    if (((pRVar6[0x278] != (byte)0x0) ||
        (pSVar7 = ghidra::any_singleton(), pSVar7[0x285] != (byte)0x0)) ||
       (*(int *)g_gameLogic != 1)) goto LAB_00530a76;
    if (param_1 != *(KeyCode *)(g_inputConfiguration + 4)) {
      if (param_1 == *(KeyCode *)g_inputConfiguration) {
        local_44 = *(RoomObject **)((char *)this + 0x3a0);
        if ((*(float *)(local_44 + 0x334) != 0.0) ||
           (((*(int *)(g_gameData + 0xcc) != 0 &&
             (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
            (bVar3 = tabletActive(this), bVar3)))) goto LAB_00530a76;
        if (*(int *)((char *)this + 0x350) != 0) {
          this_00 = *(RoomObject **)(*(int *)(*(int *)((char *)this + 0x350) + 0xc) + 0x54);
          bVar3 = tabletActive(this);
          this_01 = local_44;
          if (bVar3) {
            (local_44)->nextValidScreen();
            if (((*(int *)(this_01 + *(int *)(this_01 + 0x388) * 4 + 0x624) == 0) ||
                (iVar10 = *(int *)(*(int *)(this_01 + *(int *)(this_01 + 0x388) * 4 + 0x624) + 0x180
                                  ), iVar10 == 0)) || (*(char *)(iVar10 + 0x59) == '\0')) {
              if (g_gameLogic[0x73] != (byte)0x0) {
                g_gameLogic[0x73] = (byte)0x0;
              }
            }
            else if (g_gameLogic[0x73] == (byte)0x0) {
              g_gameLogic[0x73] = (byte)0x1;
            }
            (this_01)->resetScreen(extraout_CL);
            setTabletScreen(this,*(int *)(this_01 + 0x388));
          }
          else {
            param_2 = local_40;
            if (((*(int *)(*(int *)((char *)this + 0x2d4) + 0x38) != -1) ||
                (this_00[0x38c] == (byte)0x0)) ||
               ((uint)((*(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394)) / 0x50) < 2))
            goto LAB_00530896;
            (this_00)->nextValidScreen();
            if (((*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) == 0) ||
                (iVar10 = *(int *)(*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) + 0x180
                                  ), iVar10 == 0)) || (*(char *)(iVar10 + 0x59) == '\0')) {
              if (g_gameLogic[0x73] != (byte)0x0) {
                g_gameLogic[0x73] = (byte)0x0;
              }
            }
            else if (g_gameLogic[0x73] == (byte)0x0) {
              g_gameLogic[0x73] = (byte)0x1;
            }
            (this_00)->resetScreen(extraout_CL_00);
            bVar3 = tabletActive(this);
            if (bVar3) {
              setTabletScreen(this_04,*(int *)(this_00 + 0x388));
            }
            else {
              switchToConsoleID(this,*(int *)(*(int *)(*(int *)((char *)this + 0x2d4) + 0xa4) + 0x18 +
                                             *(int *)((char *)this + 0x3b0) * 0x1c));
            }
          }
          ShipInterface::soundHigh(pSVar5);
          param_2 = local_40;
        }
      }
LAB_00530896:
      if (param_1 == 6) {
        pSVar7 = ghidra::any_singleton();
        if (pSVar7[0x285] != (byte)0x0) {
          pSVar7 = ghidra::any_singleton();
          (pSVar7)->disable();
        }
        bVar3 = tabletActive(this);
        this_03 = this_05;
        if (bVar3) goto LAB_00530654;
        moveToCameraPos(this_05,-1,(float)pSVar5);
      }
      iVar10 = *(int *)((char *)this + 0x350);
      if ((((((iVar10 == 0) || (*(int *)(iVar10 + 0x10) == 0)) ||
            (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) == 0)) ||
           (((piVar12 = *(int **)(*(int *)(iVar10 + 0xc) + 0x188), piVar12 != (int *)0x0 &&
             (cVar4 = (**(code **)(*piVar12 + 0x10))(0), cVar4 == '\0')) ||
            ((puVar1 = *(undefined4 **)(*(int *)(*(int *)((char *)this + 0x350) + 0x10) + 0x60),
             puVar1 == (undefined4 *)0x0 || (cVar4 = (**(code **)*puVar1)(param_1), cVar4 == '\0')))
            ))) && ((((iVar10 = *(int *)((char *)this + 0x350), iVar10 == 0 ||
                      (*(char *)(iVar10 + 7) == '\0')) ||
                     ((*(char *)(iVar10 + 8) == '\0' &&
                      ((piVar12 = *(int **)(*(int *)(iVar10 + 0xc) + 0x188), piVar12 == (int *)0x0
                       || (cVar4 = (**(code **)(*piVar12 + 0x10))(0), cVar4 == '\0')))))) ||
                    (cVar4 = (**(code **)(**(int **)((char *)this + 0x350) + 0x20))(param_1,param_2),
                    cVar4 == '\0')))) && (bVar3 = tabletActive(this), !bVar3)) {
        if ((param_1 == 0xc) || (param_1 == 0xd)) {
          ((char *)this)[0x2f8] = (byte)0x0;
        }
        pIVar8 = ghidra::any_singleton();
        piVar12 = *(int **)(pIVar8 + 0xc);
        piVar14 = *(int **)(pIVar8 + 0x10);
        if (piVar12 != piVar14) {
          do {
            iVar10 = *piVar12;
            KVar2 = *(KeyCode *)(iVar10 + 0x1c);
            if ((KVar2 != 0) && (KVar2 == param_1)) {
              if ((g_gameLogic[0x71] == (byte)0x0) ||
                 (bVar3 = PresentationData::isLocalCommand((int)pSVar5), bVar3)) {
                ShipInterface::getShipCommandFunction((ShipCommand)pSVar5);
                // [seh] local_8 = 0;
                if (local_18 != (int *)0x0) {
                  local_44 = (RoomObject *)0x0;
                  local_4c = *(undefined4 *)(g_gameData + 0xd0);
                  local_40 = (Event *)0x0;
                  local_48 = 0;
                  (**(code **)(*local_18 + 8))(&local_4c,&local_48,&local_40,&local_44);
                }
                // [seh] local_8 = 1;
                if (local_18 != (int *)0x0) {
                  (**(code **)(*local_18 + 0x10))(local_18 != local_3c);
                  local_18 = (int *)0x0;
                }
                // [seh] local_8 = 0xffffffff;
              }
              else {
                ghidra::any_singleton();
                NetworkData::sendShipCommand
                          (this_06,*(int *)(iVar10 + 0x24),(double)(ZEXT48(pSVar5) << 0x20),
                           (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(piVar14,unaff_EBX)
                          );
              }
            }
            piVar12 = piVar12 + 1;
          } while (piVar12 != piVar14);
        }
      }
      goto LAB_00530a76;
    }
    fVar13 = 0.0;
    if (((PresentationData::m_talkMode != false) && (iVar10 = *(int *)((char *)this + 0x3a0), iVar10 != 0))
       && ((*(float *)(iVar10 + 0x334) != 0.0 ||
           (bVar3 = tabletActive(this), iVar10 = extraout_EDX, bVar3)))) {
      *(undefined1 *)(iVar10 + 0x34c) = 1;
      (*(RoomObject **)((char *)this + 0x3a0))->resetPosition();
      goto LAB_00530a76;
    }
    if ((*(float *)(*(int *)((char *)this + 0x3a0) + 0x334) != fVar13) ||
       (bVar3 = hasForcedConversationPending(this), bVar3)) goto LAB_00530a76;
    bVar3 = tabletActive(this);
    this_03 = extraout_ECX;
    if (!bVar3) {
      iVar10 = *(int *)(*(int *)(g_gameData + 0xcc) + 0x70);
      if (*(int *)((char *)this + 0x3b0) == -1) {
        if (iVar10 != 0) {
          if ((g_gameLogic[0x71] != (byte)0x0) || (iVar10 != 2)) goto LAB_005306ab;
          showTablet(this,-1);
        }
      }
      else if ((iVar10 != 0) && (iVar10 != 1)) {
        moveToCameraPos(this,-1,(float)pSVar5);
LAB_005306ab:
        showTablet(this,-1);
      }
      goto LAB_00530896;
    }
LAB_00530654:
    if (PresentationData::m_talkMode != false) goto LAB_00530a76;
  }
  else {
    if (*(float *)(*(int *)((char *)this + 0x3a0) + 0x334) != 0.0) goto LAB_00530a76;
    bVar3 = tabletActive(this);
    this_03 = this_02;
    if (!bVar3) {
      if (*(int *)((char *)this + 0x3b0) == -1) {
        showTablet(this_02,-1);
        uVar11 = 0;
        local_40 = *(Event **)(*(int *)((char *)this + 0x3a0) + 0x394);
        iVar9 = *(int *)(*(int *)((char *)this + 0x3a0) + 0x398) - (int)local_40;
        iVar10 = iVar9 >> 0x1f;
        if (iVar9 / 0x50 + iVar10 != iVar10) {
          do {
            bVar3 = ghidra::lib::_Traits_equal___x28_x29("tab_options",0xb,(char *)pSVar5,unaff_EDI);
            if (bVar3) {
              setTabletScreen(this,uVar11);
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)((*(int *)(*(int *)((char *)this + 0x3a0) + 0x398) -
                                   *(int *)(*(int *)((char *)this + 0x3a0) + 0x394)) / 0x50));
        }
      }
      else {
        moveToCameraPos(this_02,-1,(float)pSVar5);
      }
      goto LAB_00530a76;
    }
  }
  hideTablet(this_03,false);
LAB_00530a76:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PresentationInterface::resetSpaceStationScreens(PresentationInterface *this)
void PresentationInterface::resetSpaceStationScreens()

{
  int *piVar1;
  int iVar2;
  Structure *pSVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (_DstBuf_0065d520 != (Structure *)0x0) {
    iVar5 = *(int *)(_DstBuf_0065d520 + 0x18);
    uVar4 = 0;
    pSVar3 = _DstBuf_0065d520;
    if (*(int *)(_DstBuf_0065d520 + 0x1c) - iVar5 >> 2 != 0) {
      do {
        iVar5 = *(int *)(iVar5 + uVar4 * 4);
        uVar6 = 0;
        iVar2 = *(int *)(iVar5 + 0x90);
        if (*(int *)(iVar5 + 0x94) - iVar2 >> 2 != 0) {
          do {
            if (*(int *)(*(int *)(iVar2 + uVar6 * 4) + 0x3c) == 4) {
              iVar5 = 0x624;
              do {
                iVar2 = *(int *)(iVar5 + *(int *)(*(int *)(*(int *)(*(int *)(pSVar3 + 0x18) +
                                                                   uVar4 * 4) + 0x90) + uVar6 * 4));
                if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 300), piVar1 != (int *)0x0)) {
                  (**(code **)(*piVar1 + 0x14))();
                  pSVar3 = _DstBuf_0065d520;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < 0x64c);
            }
            uVar6 = uVar6 + 1;
            iVar5 = *(int *)(*(int *)(pSVar3 + 0x18) + uVar4 * 4);
            iVar2 = *(int *)(iVar5 + 0x90);
          } while (uVar6 < (uint)(*(int *)(iVar5 + 0x94) - iVar2 >> 2));
        }
        uVar4 = uVar4 + 1;
        iVar5 = *(int *)(pSVar3 + 0x18);
      } while (uVar4 < (uint)(*(int *)(pSVar3 + 0x1c) - iVar5 >> 2));
    }
  }
  return;
}


// Ghidra: bool __thiscall PresentationInterface::tabletActive(PresentationInterface *this)
bool PresentationInterface::tabletActive()

{
  if ((*(int *)((char *)this + 0x3a0) != 0) && (((char *)this)[0x39d] != (byte)0x0)) {
    return true;
  }
  return false;
}


// Ghidra: void __thiscall PresentationInterface::showTablet(PresentationInterface *this,int param_1)
void PresentationInterface::showTablet(int param_1)

{
  LogSystem *this_00;
  NotesManager *pNVar1;
  RoomObject *pRVar2;
  GameData *pGVar3;
  
  pNVar1 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (NotesManager *)0x0) {
    pNVar1 = operator_new(4);
    ghidra::Singleton<void>::instance = pNVar1;
    *(undefined4 *)pNVar1 = 0xffffffff;
  }
  *(undefined4 *)pNVar1 = 0xffffffff;
  (*(RoomObject **)((char *)this + 0x3a0))->movePosition();
  pGVar3 = g_gameData;
  ((char *)this)[0x39d] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
  this_00 = *(LogSystem **)(*(int *)(pGVar3 + 0xd0) + 0x224);
  *(undefined4 *)(this_00 + 0x58) = *(undefined4 *)((char *)this + 0x354);
  if (*(int *)(this_00 + 0x10) != 0) {
    (this_00)->renderWarning();
    pGVar3 = g_gameData;
  }
  *(undefined4 *)(this_00 + 0x58) = 0;
  (*(LogSystem **)(*(int *)(pGVar3 + 0xd0) + 0x224))->renderWarning();
  if (param_1 == -1) {
    param_1 = 0;
  }
  setTabletScreen(this,param_1);
  pRVar2 = (*(Room **)((char *)this + 0x2d4))->getObjectForScreenID(*(int *)((char *)this + 0x348));
  setMessageFocus(this,pRVar2);
  debugPrint("DETAIL","Showing tablet.");
  (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))(0);
  return;
}


// Ghidra: void __thiscall PresentationInterface::setTabletScreen(PresentationInterface *this,int param_1)
void PresentationInterface::setTabletScreen(int param_1)

{
  RoomObject *this_00;
  int iVar1;
  
  *(int *)(*(int *)((char *)this + 0x3a0) + 0x388) = param_1;
  this_00 = *(RoomObject **)((char *)this + 0x3a0);
  iVar1 = *(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624);
  *(int *)((char *)this + 0x354) = iVar1;
  *(undefined4 *)((char *)this + 0x350) = *(undefined4 *)(iVar1 + 300);
  (this_00)->resetScreen(SUB41(this_00,0));
  iVar1 = *(int *)(*(int *)(*(int *)((char *)this + 0x3a0) + 0x624 +
                           *(int *)(*(int *)((char *)this + 0x3a0) + 0x388) * 4) + 0x180);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x59) != '\0')) {
    g_gameLogic[0x73] = (byte)0x1;
    return;
  }
  g_gameLogic[0x73] = (byte)0x0;
  return;
}


// Ghidra: void __thiscall PresentationInterface::hideTablet(PresentationInterface *this,bool param_1)
void PresentationInterface::hideTablet(bool param_1)

{
  int iVar1;
  LogSystem *this_00;
  LogLine *this_01;
  TabletManager *pTVar2;
  ScreenInterface *pSVar3;
  RoomObject *pRVar4;
  GameData *pGVar5;
  
  if ((!param_1) && (pTVar2 = ghidra::any_singleton(), *(int *)(pTVar2 + 0x20) != 0)) {
    return;
  }
  g_gameLogic[0x73] = (byte)0x0;
  (*(RoomObject **)((char *)this + 0x3a0))->movePosition();
  pGVar5 = g_gameData;
  iVar1 = *(int *)(*(Room **)((char *)this + 0x2d4) + 0x3c);
  if (iVar1 == -1) {
    this_00 = *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224);
    *(undefined4 *)(this_00 + 0x58) = 0;
    if (*(int *)(this_00 + 0x10) != 0) {
      (this_00)->renderWarning();
      pGVar5 = g_gameData;
    }
    *(undefined4 *)(this_00 + 0x58) = 0;
  }
  else {
    pSVar3 = (*(Room **)((char *)this + 0x2d4))->getConsoleInterface(iVar1);
    pGVar5 = g_gameData;
    *(ScreenInterface **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x58) = pSVar3;
  }
  g_gameLogic[0x73] = (byte)0x0;
  iVar1 = *(int *)(*(int *)(pGVar5 + 0xd0) + 0x224);
  if (*(int **)(iVar1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x34) + 0x138))(1);
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  this_01 = *(LogLine **)(iVar1 + 0x10);
  if (this_01 != (LogLine *)0x0) {
    LogLine::_scalar_deleting_destructor_(this_01,(uint)this_01);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(iVar1 + 0x58) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x58) + 0x70) = 1;
  }
  *(undefined4 *)((char *)this + 0x354) = 0;
  *(undefined4 *)((char *)this + 0x350) = 0;
  *(undefined4 *)((char *)this + 0x34c) = 0;
  *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
  ((char *)this)[0x39d] = (byte)0x0;
  debugPrint("DETAIL","Hiding tablet.");
  pRVar4 = (*(Room **)((char *)this + 0x2d4))->getObjectForScreenID(*(int *)((char *)this + 0x348));
  setMessageFocus(this,pRVar4);
  (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))(1);
  return;
}


// Ghidra: void __thiscall PresentationInterface::hideTabletInstantly(PresentationInterface *this)
void PresentationInterface::hideTabletInstantly()

{
  int iVar1;
  int iVar2;
  LogSystem *this_00;
  LogLine *this_01;
  ScreenInterface *pSVar3;
  RoomObject *pRVar4;
  GameData *pGVar5;
  
  *(undefined1 *)(*(int *)((char *)this + 0x3a0) + 0x34c) = 0;
  (*(RoomObject **)((char *)this + 0x3a0))->resetPosition();
  pGVar5 = g_gameData;
  g_gameLogic[0x73] = (byte)0x0;
  iVar1 = *(int *)(pGVar5 + 0xd0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(*(Room **)((char *)this + 0x2d4) + 0x3c);
    if (iVar2 == -1) {
      this_00 = *(LogSystem **)(iVar1 + 0x224);
      *(undefined4 *)(this_00 + 0x58) = 0;
      if (*(int *)(this_00 + 0x10) != 0) {
        (this_00)->renderWarning();
        pGVar5 = g_gameData;
      }
      *(undefined4 *)(this_00 + 0x58) = 0;
    }
    else {
      pSVar3 = (*(Room **)((char *)this + 0x2d4))->getConsoleInterface(iVar2);
      *(ScreenInterface **)(*(int *)(iVar1 + 0x224) + 0x58) = pSVar3;
    }
    iVar1 = *(int *)(*(int *)(pGVar5 + 0xd0) + 0x224);
    if (*(int **)(iVar1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x34) + 0x138))(1);
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    this_01 = *(LogLine **)(iVar1 + 0x10);
    if (this_01 != (LogLine *)0x0) {
      LogLine::_scalar_deleting_destructor_(this_01,(uint)this_01);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    if (*(int *)(iVar1 + 0x58) != 0) {
      *(undefined1 *)(*(int *)(iVar1 + 0x58) + 0x70) = 1;
    }
  }
  *(undefined4 *)((char *)this + 0x354) = 0;
  *(undefined4 *)((char *)this + 0x350) = 0;
  *(undefined4 *)((char *)this + 0x34c) = 0;
  *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
  ((char *)this)[0x39d] = (byte)0x0;
  debugPrint("DETAIL","Hiding tablet.");
  pRVar4 = (*(Room **)((char *)this + 0x2d4))->getObjectForScreenID(*(int *)((char *)this + 0x348));
  setMessageFocus(this,pRVar4);
  (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))(1);
  return;
}


// Ghidra: void __thiscall PresentationInterface::switchToPComms(PresentationInterface *this)
void PresentationInterface::switchToPComms()

{
  undefined4 *puVar1;
  RoomObject *this_00;
  int iVar2;
  int iVar3;
  LogSystem *this_01;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar7;
  undefined4 *puVar8;
  int iVar9;
  GameData *pGVar10;
  uint uVar11;
  uint uVar12;
  RoomObject *pRVar13;
  uint unaff_EBX;
  char *unaff_EDI;
  uint local_14;
  uint local_c;
  
  local_14 = 0;
  puVar8 = *(undefined4 **)(*(int *)((char *)this + 0x2d4) + 0x90);
  puVar1 = *(undefined4 **)(*(int *)((char *)this + 0x2d4) + 0x94);
  uVar11 = (uint)((int)puVar1 + (3 - (int)puVar8)) >> 2;
  if (puVar1 < puVar8) {
    uVar11 = 0;
  }
  if (uVar11 == 0) {
    return;
  }
LAB_00530fd6:
  this_00 = (RoomObject *)*puVar8;
  local_c = 0;
  iVar2 = *(int *)(this_00 + 0x394);
  iVar9 = *(int *)(this_00 + 0x398) - iVar2;
  iVar3 = iVar9 >> 0x1f;
  if (iVar9 / 0x50 + iVar3 != iVar3) {
    do {
      bVar4 = ghidra::lib::_Traits_equal___x28_x29("pcomms",6,unaff_EDI,unaff_EBX);
      if (bVar4) {
        uVar7 = extraout_CL;
        if (this_00 != *(RoomObject **)((char *)this + 0x34c)) goto LAB_00531156;
        iVar2 = *(int *)((char *)this + 0x2d4);
        iVar3 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x18 + *(int *)((char *)this + 0x3b0) * 0x1c);
        uVar5 = 0;
        *(int *)((char *)this + 0x348) = iVar3;
        uVar12 = *(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90) >> 2;
        if (uVar12 != 0) goto LAB_005310a0;
        goto LAB_005310ba;
      }
      local_c = local_c + 1;
    } while (local_c < (uint)((*(int *)(this_00 + 0x398) - iVar2) / 0x50));
  }
  goto LAB_005311bb;
  while (uVar5 = uVar5 + 1, uVar5 < uVar12) {
LAB_005310a0:
    iVar9 = *(int *)(*(int *)(iVar2 + 0x90) + uVar5 * 4);
    if ((*(int *)(iVar9 + 0x3c) == 4) && (*(int *)(iVar9 + 900) == iVar3)) {
      uVar6 = *(undefined4 *)(*(int *)(iVar9 + 0x624 + *(int *)(iVar9 + 0x388) * 4) + 300);
      goto LAB_005310bc;
    }
  }
LAB_005310ba:
  uVar6 = 0;
LAB_005310bc:
  *(undefined4 *)((char *)this + 0x350) = uVar6;
  uVar5 = 0;
  iVar2 = *(int *)(*(int *)((char *)this + 0x2d4) + 0x90);
  uVar12 = *(int *)(*(int *)((char *)this + 0x2d4) + 0x94) - iVar2 >> 2;
  if (uVar12 != 0) {
    do {
      pRVar13 = *(RoomObject **)(iVar2 + uVar5 * 4);
      if ((*(int *)(pRVar13 + 900) != -1) && (*(int *)(pRVar13 + 900) == *(int *)((char *)this + 0x348)))
      goto LAB_00531105;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar12);
  }
  pRVar13 = (RoomObject *)0x0;
LAB_00531105:
  setMessageFocus(this,pRVar13);
  pGVar10 = g_gameData;
  this_01 = *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224);
  *(undefined4 *)(this_01 + 0x58) = *(undefined4 *)((char *)this + 0x354);
  if (*(int *)(this_01 + 0x10) != 0) {
    (this_01)->renderWarning();
    pGVar10 = g_gameData;
  }
  *(undefined4 *)(this_01 + 0x58) = 0;
  (*(LogSystem **)(*(int *)(pGVar10 + 0xd0) + 0x224))->renderWarning();
  uVar7 = extraout_CL_00;
LAB_00531156:
  if (local_c != *(uint *)(this_00 + 0x388)) {
    *(uint *)(this_00 + 0x388) = local_c;
    (this_00)->resetScreen((bool)uVar7);
    if (*(char *)(*(int *)(*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) + 0x180) + 0x59
                 ) == '\0') {
      if (g_gameLogic[0x73] != (byte)0x0) {
        g_gameLogic[0x73] = (byte)0x0;
      }
    }
    else if (g_gameLogic[0x73] == (byte)0x0) {
      g_gameLogic[0x73] = (byte)0x1;
    }
  }
LAB_005311bb:
  local_14 = local_14 + 1;
  puVar8 = puVar8 + 1;
  if (local_14 == uVar11) {
    return;
  }
  goto LAB_00530fd6;
}


// Ghidra: void __thiscall PresentationInterface::setMessageFocus(PresentationInterface *this,RoomObject *param_1)
void PresentationInterface::setMessageFocus(RoomObject * param_1)

{
  RoomObject *pRVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x2d4);
  if (*(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90) >> 2 != 0) {
    do {
      pRVar1 = *(RoomObject **)(*(int *)(iVar2 + 0x90) + uVar3 * 4);
      if (pRVar1 == param_1) {
        pRVar1[9] = (byte)0x1;
      }
      else if (*(int *)(pRVar1 + 0x3c) == 4) {
        pRVar1[9] = (byte)0x0;
      }
      iVar2 = *(int *)((char *)this + 0x2d4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90) >> 2));
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::switchToHelmControlAfterUndocking(PresentationInterface *this)
void PresentationInterface::switchToHelmControlAfterUndocking()

{
  int iVar1;
  int iVar2;
  RoomObject *this_00;
  bool bVar3;
  int iVar4;
  uint unaff_ESI;
  int iVar5;
  char *unaff_EDI;
  RoomObject *pRVar6;
  uint local_8;
  
  iVar1 = *(int *)((char *)this + 0x2d4);
  local_8 = 0;
  iVar2 = *(int *)(iVar1 + 0x90);
  iVar4 = iVar2;
  if (*(int *)(iVar1 + 0x94) - iVar2 >> 2 == 0) {
    return;
  }
  do {
    this_00 = *(RoomObject **)(iVar4 + local_8 * 4);
    if (*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) != 0) {
      bVar3 = ghidra::lib::_Traits_equal___x28_x29("helm",4,unaff_EDI,unaff_ESI);
      if (bVar3) {
        iVar4 = *(int *)(iVar1 + 0x90);
      }
      else {
        iVar5 = 0;
        pRVar6 = this_00 + 0x624;
        do {
          iVar4 = *(int *)pRVar6;
          if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x128) == 0)) && (*(int *)(iVar4 + 300) != 0)) &&
             ((*(int *)(*(int *)(iVar4 + 300) + 0x10) != 0 &&
              (bVar3 = ghidra::lib::_Traits_equal___x28_x29("Helm",4,unaff_EDI,unaff_ESI), bVar3)))) {
            (this_00)->switchToScreen(iVar5);
            debugPrint("DETAIL","Switching helm display to ship control.");
            return;
          }
          iVar5 = iVar5 + 1;
          pRVar6 = pRVar6 + 4;
          iVar4 = iVar2;
        } while (iVar5 < 10);
      }
    }
    local_8 = local_8 + 1;
    if ((uint)(*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2) <= local_8) {
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall PresentationInterface::moveToRTCommsStation(PresentationInterface *this)
void PresentationInterface::moveToRTCommsStation()

{
  RoomObject *this_00;
  bool bVar1;
  int iVar2;
  bool extraout_CL;
  int iVar3;
  uint unaff_ESI;
  int iVar4;
  uint uVar5;
  char *unaff_EDI;
  uint local_c;
  
  local_c = 0;
  iVar2 = *(int *)(*(int *)((char *)this + 0x2d4) + 0x90);
  iVar4 = iVar2;
  if (*(int *)(*(int *)((char *)this + 0x2d4) + 0x94) - iVar2 >> 2 != 0) {
    do {
      this_00 = *(RoomObject **)(iVar2 + local_c * 4);
      if ((*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) != 0) &&
         (bVar1 = ghidra::lib::_Traits_equal___x28_x29("pcomms",6,unaff_EDI,unaff_ESI), bVar1)) {
        iVar2 = *(int *)(iVar4 + local_c * 4);
LAB_005314ec:
        moveToCameraPos(this,*(int *)(iVar2 + 900),(float)unaff_EDI);
        return;
      }
      uVar5 = 0;
      iVar4 = *(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394) >> 0x1f;
      iVar3 = (*(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394)) / 0x50 + iVar4;
      if (iVar3 != iVar4) {
        do {
          bVar1 = ghidra::lib::_Traits_equal___x28_x29("pcomms",6,unaff_EDI,unaff_ESI);
          if (bVar1) {
            if (uVar5 != *(uint *)(this_00 + 0x388)) {
              *(uint *)(this_00 + 0x388) = uVar5;
              (this_00)->resetScreen(extraout_CL);
              if (*(char *)(*(int *)(*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) +
                                    0x180) + 0x59) == '\0') {
                if (g_gameLogic[0x73] != (byte)0x0) {
                  g_gameLogic[0x73] = (byte)0x0;
                }
              }
              else if (g_gameLogic[0x73] == (byte)0x0) {
                g_gameLogic[0x73] = (byte)0x1;
              }
            }
            iVar2 = *(int *)(*(int *)(*(int *)((char *)this + 0x2d4) + 0x90) + local_c * 4);
            goto LAB_005314ec;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(iVar3 - iVar4));
      }
      local_c = local_c + 1;
      iVar4 = *(int *)(*(int *)((char *)this + 0x2d4) + 0x90);
    } while (local_c < (uint)(*(int *)(*(int *)((char *)this + 0x2d4) + 0x94) - iVar4 >> 2));
  }
  return;
}


// Ghidra: char __thiscall PresentationInterface::keycodeToChar (PresentationInterface *this,KeyCode param_1,bool param_2,bool param_3)
char PresentationInterface::keycodeToChar(KeyCode param_1, bool param_2, bool param_3)

{
  char *pcVar1;
  
  if (0x19 < param_1 - 0x7c) {
    if (((char *)this)[0x2f8] != (byte)0x0) {
      pcVar1 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x2f0),&param_1);
      return *pcVar1;
    }
    pcVar1 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x2e8),&param_1);
    return *pcVar1;
  }
  if (((((char *)this)[0x2f8] == (byte)0x0) || (!param_2)) && (!param_3)) {
    return (char)param_1 + -0x1b;
  }
  return (char)param_1 + -0x3b;
}


// Ghidra: void __thiscall PresentationInterface::eventLocationToLocation(PresentationInterface *this,EventMouse *param_1)
void PresentationInterface::eventLocationToLocation(EventMouse * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  float fVar2;
  int in_stack_00000008;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c6362;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  fVar2 = *(float *)(in_stack_00000008 + 0x2c);
  local_14 = *(float *)(in_stack_00000008 + 0x30);
  if (*(int **)((char *)this + 0x364) == (int *)0x0) {
    *(float *)param_1 = fVar2;
    goto LAB_005316a7;
  }
  local_18 = DAT_0065db64 - local_14;
  if (0.0 <= fVar2) {
    fVar1 = _designSize;
    if (_designSize < fVar2) goto LAB_00531614;
  }
  else {
    fVar1 = 0.0;
LAB_00531614:
    fVar2 = fVar1;
  }
  if (0.0 <= local_18) {
    fVar1 = DAT_0065db64;
    if (DAT_0065db64 < local_18) goto LAB_00531630;
  }
  else {
    fVar1 = 0.0;
LAB_00531630:
    local_18 = fVar1;
  }
  // [seh] local_8 = 1;
  local_24 = (float)(int)(OSInterface::renderScale * _designSize) * (fVar2 / _designSize);
  local_20 = (float)(int)(OSInterface::renderScale * DAT_0065db64) -
             (float)(int)(OSInterface::renderScale * DAT_0065db64) * (local_18 / DAT_0065db64);
  local_1c = fVar2;
  local_14 = local_18;
  (**(code **)(**(int **)((char *)this + 0x364) + 0x4c))
            // [cookie] (&local_24,___security_cookie ^ (uint)&stack0xfffffffc);
  *(float *)param_1 = fVar2;
LAB_005316a7:
  *(float *)(param_1 + 4) = local_14;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::onMouseMove(PresentationInterface *this,Event *param_1)
void PresentationInterface::onMouseMove(Event * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff84[1] = {0};  // [pseudo] address of an unnamed stack slot
  RoomObject *pRVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  word *pwVar5;
  UIText *pUVar6;
  std::string *pbVar7;
  Sprite *pSVar8;
  int iVar9;
  undefined4 *puVar10;
  std::string *pbVar11;
  void *pvVar12;
  int *piVar13;
  nothrow_t *pnVar14;
  uint unaff_EDI;
  uint auStack_90 [3];
  float local_58;
  float local_54;
  undefined4 local_50;
  RoomObject *local_4c;
  undefined4 local_48;
  void *local_44;
  uint local_30;
  std::string *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c63a3;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar4;
  eventLocationToLocation(this,(EventMouse *)&local_58);
  // [seh] local_8 = 0;
  if (((*(int *)((char *)this + 0x354) != 0) && (*(int *)((char *)this + 0x350) != 0)) &&
     (*(char *)(*(int *)((char *)this + 0x350) + 4) != '\0')) {
    local_58 = local_58 / _designSize;
    local_54 = local_54 / DAT_0065db64;
    (**(code **)(**(int **)((char *)this + 0x354) + 8))();
  }
  *(float *)((char *)this + 0x394) = local_58;
  *(float *)((char *)this + 0x398) = local_54;
  local_1c = 0xf00000000;
  local_2c = (std::string *)((uint)local_2c & 0xffffff00);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)((char *)this + 0x2d4) == 0) goto LAB_00531cb1;
  local_4c = (*(Room **)((char *)this + 0x2d4))->getObjectClickedOn();
  if (local_4c == (RoomObject *)0x0) {
    if (*(int *)((char *)this + 0x408) != 0) {
      piVar13 = *(int **)(*(int *)((char *)this + 0x408) + 0x3dc);
      if (piVar13 != (int *)0x0) {
        iVar2 = *piVar13;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xff,0xff,0xff);
        (**(code **)(iVar2 + 0x25c))();
      }
      *(undefined4 *)((char *)this + 0x408) = 0;
    }
  }
  else {
    pRVar1 = *(RoomObject **)((char *)this + 0x408);
    if (pRVar1 == (RoomObject *)0x0) {
      *(RoomObject **)((char *)this + 0x408) = local_4c;
      if (*(int **)(local_4c + 0x3dc) != (int *)0x0) {
        iVar2 = **(int **)(local_4c + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xb4,0xff,0xff);
        (**(code **)(iVar2 + 0x25c))();
      }
    }
    else if (local_4c != pRVar1) {
      if (*(int **)(pRVar1 + 0x3dc) != (int *)0x0) {
        iVar2 = **(int **)(pRVar1 + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xff,0xff,0xff);
        (**(code **)(iVar2 + 0x25c))();
      }
      *(RoomObject **)((char *)this + 0x408) = local_4c;
      if (*(int **)(local_4c + 0x3dc) != (int *)0x0) {
        iVar2 = **(int **)(local_4c + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xb4,0xff,0xff);
        (**(code **)(iVar2 + 0x25c))();
      }
    }
  }
  pwVar5 = (word *)(*(Room **)((char *)this + 0x2d4))->getObjectTooltipText();
  if ((word *)&local_2c != pwVar5) {
    // [mislabelled-dtor] word::~word((word *)&local_2c);
    local_2c = *(std::string **)pwVar5;
    uStack_28 = *(undefined4 *)(pwVar5 + 4);
    uStack_24 = *(undefined4 *)(pwVar5 + 8);
    uStack_20 = *(undefined4 *)(pwVar5 + 0xc);
    local_1c = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_30) {
    pnVar14 = (nothrow_t *)(local_30 + 1);
    pvVar12 = local_44;
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar12 = *(void **)((int)local_44 + -4);
      pnVar14 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar14);
  }
  pbVar7 = local_2c;
  bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI);
  if (bVar3) {
LAB_00531c0e:
    bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI);
    if ((bVar3) && (*(int **)((char *)this + 0x368) != (int *)0x0)) {
      (**(code **)(**(int **)((char *)this + 0x368) + 0x138))();
      *(undefined4 *)((char *)this + 0x368) = 0;
      if ((std::string *)((char *)this + 0x370) != (std::string *)&local_2c) {
        pbVar11 = (std::string *)&local_2c;
        if (0xf < local_1c._4_4_) {
          pbVar11 = pbVar7;
        }
        ghidra::str::assign((std::string *)((char *)this + 0x370),(char *)pbVar11,(uint)local_1c)
        ;
        pbVar7 = local_2c;
      }
      (**(code **)(**(int **)((char *)this + 0x36c) + 0xb4))();
    }
  }
  else {
    if (*(int *)((char *)this + 0x368) != 0) {
      pbVar11 = (std::string *)&local_2c;
      if (0xf < local_1c._4_4_) {
        pbVar11 = pbVar7;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar11,(uint)local_1c,pcVar4,unaff_EDI);
      if (bVar3) goto LAB_00531c0e;
      (**(code **)(**(int **)((char *)this + 0x368) + 0x138))();
      *(undefined4 *)((char *)this + 0x368) = 0;
    }
    ghidra::str::ctor
              ((std::string *)&stack0xffffff84,(std::string *)&local_2c);
    pUVar6 = UIText::create();
    *(UIText **)((char *)this + 0x368) = pUVar6;
    local_50 = 0;
    local_4c = (RoomObject *)0x3f800000;
    // [seh] local_8._0_1_ = 2;
    (**(code **)(*(int *)pUVar6 + 0xa0))();
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)(**(int **)((char *)this + 0x368) + 0x40))();
    if ((std::string *)((char *)this + 0x370) != (std::string *)&local_2c) {
      pbVar7 = (std::string *)&local_2c;
      if (0xf < local_1c._4_4_) {
        pbVar7 = local_2c;
      }
      ghidra::str::assign((std::string *)((char *)this + 0x370),(char *)pbVar7,(uint)local_1c);
    }
    (**(code **)(**(int **)((char *)this + 0x368) + 0x48))();
    (**(code **)(**(int **)((char *)this + 0x364) + 0x10c))();
    piVar13 = *(int **)((char *)this + 0x36c);
    if (piVar13 == (int *)0x0) {
      auStack_90[0] = auStack_90[0] & 0xffffff00;
      ghidra::str::assign((std::string *)auStack_90,"white.png",9);
      pSVar8 = loadSprite();
      *(Sprite **)((char *)this + 0x36c) = pSVar8;
      iVar2 = *(int *)pSVar8;
      auStack_90[2] = 0x531ad7;
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),'\0','\0','\0');
      (**(code **)(iVar2 + 0x25c))();
      local_50 = 0;
      local_4c = (RoomObject *)0x3f800000;
      // [seh] local_8._0_1_ = 3;
      (**(code **)(**(int **)((char *)this + 0x36c) + 0xa0))();
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      auStack_90[2] = 0x531b1f;
      (**(code **)(**(int **)((char *)this + 0x36c) + 0x244))();
      auStack_90[2] = 0x40000000;
      auStack_90[1] = 0x41200000;
      auStack_90[0] = 0x531b3c;
      (**(code **)(**(int **)((char *)this + 0x36c) + 0x48))();
      auStack_90[0] = 0xffffffff;
      (**(code **)(**(int **)((char *)this + 0x364) + 0x108))(*(undefined4 *)((char *)this + 0x36c));
      piVar13 = *(int **)((char *)this + 0x36c);
    }
    (**(code **)(*piVar13 + 0xb4))();
    iVar2 = **(int **)((char *)this + 0x36c);
    iVar9 = (**(code **)(**(int **)((char *)this + 0x368) + 0xb0))();
    local_48 = *(float *)(iVar9 + 4) + 2.0;
    iVar9 = (**(code **)(**(int **)((char *)this + 0x36c) + 0xb0))();
    local_48 = local_48 / *(float *)(iVar9 + 4);
    puVar10 = (undefined4 *)(**(code **)(**(int **)((char *)this + 0x368) + 0xb0))();
    local_4c = (RoomObject *)*puVar10;
    (**(code **)(**(int **)((char *)this + 0x36c) + 0xb0))();
    auStack_90[2] = 0x531c09;
    (**(code **)(iVar2 + 0x3c))();
    pbVar7 = local_2c;
  }
  if (0xf < local_1c._4_4_) {
    pnVar14 = (nothrow_t *)(local_1c._4_4_ + 1);
    pbVar11 = pbVar7;
    if ((nothrow_t *)0xfff < pnVar14) {
      pbVar11 = *(std::string **)(pbVar7 + -4);
      pnVar14 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if ((std::string *)0x1f < pbVar7 + (-4 - (int)pbVar11)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar11,pnVar14);
  }
LAB_00531cb1:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PresentationInterface::onMouseUp(PresentationInterface *this,Event *param_1)
void PresentationInterface::onMouseUp(Event * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffc8[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  float fVar2;
  SectorEditor *pSVar3;
  FlagManager *pFVar4;
  RoomObject *this_00;
  RotateTo *pRVar5;
  SoundEngine *this_01;
  NetworkData *this_02;
  MenuManager *this_03;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fVar6;
  Sound SVar7;
  int iVar8;
  undefined4 in_stack_ffffffc8;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_1c;
  float local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c63fc;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x2d4) != 0) {
    eventLocationToLocation(this,(EventMouse *)&local_1c);
    // [seh] local_8 = 0;
    if (*(int *)(param_1 + 0x28) == 1) {
      if (((*(int *)((char *)this + 0x3a0) == 0) || (((char *)this)[0x39d] == (byte)0x0)) ||
         (PresentationData::m_talkMode == false)) {
        pSVar3 = ghidra::any_singleton();
        if (pSVar3[0x285] != (byte)0x0) {
          pSVar3 = ghidra::any_singleton();
          (pSVar3)->addAsteroid();
        }
        if (((*(int *)(g_gameData + 0xcc) != 0) &&
            (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) && (*(int *)((char *)this + 0x350) != 0)) {
          ghidra::str::assign
                    ((std::string *)&stack0xffffff9c,"has_zoomed_from_monitor",0x17);
          // [seh] local_8._0_1_ = 1;
          pFVar4 = ghidra::any_singleton();
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          (pFVar4)->setFlag();
        }
        moveToCameraPos(this,-1,fVar2);
      }
    }
    else if (((*(int *)((char *)this + 0x354) == 0) || (*(int *)((char *)this + 0x350) == 0)) ||
            (*(char *)(*(int *)((char *)this + 0x350) + 4) == '\0')) {
      if (((*(int *)((char *)this + 0x3a0) == 0) || (((char *)this)[0x39d] == (byte)0x0)) &&
         (this_00 = (*(Room **)((char *)this + 0x2d4))->getObjectClickedOn(), this_00 != (RoomObject *)0x0
         )) {
        bVar1 = hasForcedConversationPending(this);
        if (bVar1) {
          // [seh] ExceptionList = local_10;
          return;
        }
        bVar1 = (this_00)->isCharacter();
        if (bVar1) {
          (**(code **)(**(int **)(this_00 + 0x3dc) + 200))();
          *(ulonglong *)(this_00 + 0x40) = CONCAT44(uStack_34,in_stack_ffffffc8);
          *(undefined4 *)(this_00 + 0x48) = local_30;
          // [seh] local_8._0_1_ = 3;
          (**(code **)(**(int **)(this_00 + 0x3dc) + 0x5c))();
          (**(code **)(**(int **)(this_00 + 0x3dc) + 0x5c))();
          // [seh] local_8._0_1_ = 4;
          angleInDegreesFrom();
          fVar6 = 4.0;
          iVar8 = **(int **)(this_00 + 0x3dc);
          pRVar5 = cocos2d::RotateTo::create(1.4,(Vec3 *)&stack0xffffffc8);
          cocos2d::EaseInOut::create((ActionInterval *)pRVar5,fVar6);
          (**(code **)(iVar8 + 0x1d0))();
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          cocos2d::Vec3::~Vec3((Vec3 *)&stack0xffffffc8);
          moveToCameraPos(this,*(int *)(this_00 + 900),fVar2);
        }
        else if (*(int *)(this_00 + 900) == -1) {
          if (*(int *)(this_00 + 0x61c) != 0) {
            if ((this_00[0x5ec] == (byte)0x0) && (g_gameLogic[0x71] != (byte)0x0)) {
              ghidra::any_singleton();
              NetworkData::sendShipCommand
                        (this_02,*(int *)(this_00 + 0x5f0),(double)((ulonglong)(uint)fVar2 << 0x20),
                         (double)CONCAT44(unaff_ESI,unaff_EDI),
                         (double)CONCAT44(in_stack_ffffffc8,unaff_EBX));
            }
            else {
              ghidra::lib::_Func_class__operator_x28_x29
                        ((ghidra::func_class *)(this_00 + 0x5f8),*(Ship **)(g_gameData + 0xd0),
                         (double)((ulonglong)(uint)fVar2 << 0x20),
                         (double)CONCAT44(unaff_ESI,unaff_EDI),
                         (double)CONCAT44(in_stack_ffffffc8,unaff_EBX));
            }
            SVar7 = *(Sound *)(this_00 + 0x368);
            if (SVar7 != 0) {
              iVar8 = -1;
              this_01 = ghidra::any_singleton();
              (this_01)->playSound(SVar7, iVar8);
            }
          }
        }
        else {
          moveToCameraPos(this,*(int *)(this_00 + 900),fVar2);
        }
      }
    }
    else {
      local_1c = local_1c / _designSize;
      local_18 = local_18 / DAT_0065db64;
      (**(code **)(**(int **)((char *)this + 0x354) + 4))();
    }
    if (g_gameLogic[0x1c6] != (byte)0x0) {
      g_gameLogic[0x1c6] = (byte)0x0;
      ghidra::any_singleton();
      (this_03)->resetGame();
      PresentationData::m_mapZoomLevel = 2;
      PresentationData::m_tabletMapZoomLevel = 2;
      PresentationData::doRecenterMapOnShip
                (*(Ship **)(g_gameData + 0xd0),0.0,0.0,(double)((ulonglong)(uint)fVar2 << 0x20));
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::onMouseDown(PresentationInterface *this,Event *param_1)
void PresentationInterface::onMouseDown(Event * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c3dd9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  eventLocationToLocation(this,(EventMouse *)&local_18);
  // [seh] local_8 = 0;
  if (((*(int *)((char *)this + 0x354) != 0) && (*(int *)((char *)this + 0x350) != 0)) &&
     (*(char *)(*(int *)((char *)this + 0x350) + 4) != '\0')) {
    local_18 = local_18 / _designSize;
    local_14 = local_14 / DAT_0065db64;
    if (*(int *)(param_1 + 0x28) != 1) {
      (**(code **)**(undefined4 **)((char *)this + 0x354))(local_18,local_14,uVar1);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::onMouseScroll(PresentationInterface *this,Event *param_1)
void PresentationInterface::onMouseScroll(Event * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  bool bVar2;
  float fVar3;
  RoomObject *pRVar4;
  int iVar5;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c3dd9;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar3 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  eventLocationToLocation(this,(EventMouse *)&local_18);
  // [seh] local_8 = 0;
  bVar1 = *(float *)(param_1 + 0x38) == 0.0;
  bVar2 = 0.0 < *(float *)(param_1 + 0x38);
  if (OISConfiguration::scrollWheel != false) {
    if ((*(int *)((char *)this + 0x3a0) != 0) && (((char *)this)[0x39d] != (byte)0x0)) {
      if (PresentationData::m_talkMode != false) {
        // [seh] ExceptionList = local_10;
        return;
      }
      hideTablet(this,false);
      // [seh] ExceptionList = local_10;
      return;
    }
    if (*(int *)((char *)this + 0x350) == 0) {
      if (((bVar2 || bVar1) ||
          (pRVar4 = (*(Room **)((char *)this + 0x2d4))->getObjectClickedOn(local_18, local_14),
          pRVar4 == (RoomObject *)0x0)) || (iVar5 = *(int *)(pRVar4 + 900), iVar5 == -1))
      goto LAB_00532266;
    }
    else {
      if (!bVar2 && !bVar1) goto LAB_00532266;
      iVar5 = -1;
    }
    moveToCameraPos(this,iVar5,fVar3);
  }
LAB_00532266:
  if ((*(int *)((char *)this + 0x350) != 0) && (*(char *)(*(int *)((char *)this + 0x350) + 4) != '\0')) {
    local_18 = local_18 / _designSize;
    local_14 = local_14 / DAT_0065db64;
  }
  *(float *)((char *)this + 0x394) = local_18;
  *(float *)((char *)this + 0x398) = local_14;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __cdecl PresentationInterface::doToggleRoomObject (Ship *param_1,double param_2,double param_3,double param_4)
bool PresentationInterface::doToggleRoomObject(Ship * param_1, double param_2, double param_3, double param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  RoomObject *this_;
  bool bVar2;
  PresentationInterface *this_00;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  Ship *pSVar6;
  undefined4 in_stack_00000008;
  std::string local_38 [8];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6432;
  // [seh] local_10 = ExceptionList;
  if ((double)CONCAT44(param_2._0_4_,in_stack_00000008) == -1.0) {
    return false;
  }
  uStack_30 = 0x532320;
  // [seh] ExceptionList = &local_10;
  debugPrint("RENDER","toggling object %d");
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_00 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (PresentationInterface *)PresentationInterface(this_00);
    // [seh] local_8 = 0xffffffff;
  }
  uVar3 = 0;
  piVar1 = *(int **)(*(int *)(ghidra::Singleton<void>::instance + 0x2d4) + 0x90);
  uVar5 = *(int *)(*(int *)(ghidra::Singleton<void>::instance + 0x2d4) + 0x94) - (int)piVar1 >> 2;
  piVar4 = piVar1;
  if (uVar5 != 0) {
    while (*(int *)(*piVar4 + 0x50) != (int)(double)CONCAT44(param_2._0_4_,in_stack_00000008)) {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      if (uVar5 <= uVar3) {
        // [seh] ExceptionList = local_10;
        return true;
      }
    }
    this_ = (RoomObject *)piVar1[uVar3];
    if (this_ != (RoomObject *)0x0) {
      if (*(int *)((char *)this_ + 0x584) != 0) {
        pSVar6 = ShipData::currentlyBoardedShip;
        if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
          pSVar6 = *(Ship **)(g_gameData + 0xd0);
        }
        local_38[0] = (std::string)0x0;
        ghidra::str::assign(local_38,"",0);
        bVar2 = ghidra::lib::_Func_class__operator_x28_x29((ghidra::func_class *)((char *)this_ + 0x560),pSVar6,0);
        if (!bVar2) {
          // [seh] ExceptionList = local_10;
          return false;
        }
      }
      (this_)->movePosition();
    }
  }
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: void __thiscall PresentationInterface::moveToCameraPos(PresentationInterface *this,int param_1,float param_2)
void PresentationInterface::moveToCameraPos(int param_1, float param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff44[1] = {0};  // [pseudo] address of an unnamed stack slot
  Room *pRVar1;
  int iVar2;
  int *piVar3;
  LogSystem *pLVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  Screen_Renderer *pSVar9;
  RoomObject *pRVar10;
  FlagManager *pFVar11;
  ScreenInterface *pSVar12;
  bool extraout_CL;
  nothrow_t *pnVar13;
  GameData *pGVar14;
  void *pvVar15;
  uint unaff_EDI;
  float in_XMM2_Da;
  double dStack_bc;
  std::string abStack_b8 [4];
  double dStack_b4;
  undefined4 uStack_ac;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  void *local_48 [2];
  Vec3 local_40 [12];
  uint local_34;
  void *local_30 [2];
  Vec3 local_28 [12];
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6493;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_18 = pcVar7;
  if (*(int **)((char *)this + 0x350) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x350) + 0x24))();
  }
  *(undefined8 *)((char *)this + 0x314) = *(undefined8 *)((char *)this + 0x2fc);
  *(undefined4 *)((char *)this + 0x31c) = *(undefined4 *)((char *)this + 0x304);
  *(undefined8 *)((char *)this + 800) = *(undefined8 *)((char *)this + 0x308);
  *(undefined4 *)((char *)this + 0x328) = *(undefined4 *)((char *)this + 0x310);
  *(int *)((char *)this + 0x3b0) = param_1;
  _uStack_ac = (double)CONCAT44(0x5324c8,uStack_ac);
  cocos2d::Vec3::Vec3(local_40,(Vec3 *)(*(int *)((char *)this + 0x2d4) + 0x74));
  // [seh] local_8 = 0;
  _uStack_ac = (double)CONCAT44(&local_54,0x5324ea);
  cocos2d::Vec3::operator*(local_40,(float)&local_54);
  // [seh] local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_40);
  *(ulonglong *)((char *)this + 0x32c) = CONCAT44(uStack_50,local_54);
  *(undefined4 *)((char *)this + 0x334) = local_4c;
  cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
  PresentationData::m_talkMode = false;
  *(undefined8 *)((char *)this + 0x338) = *(undefined8 *)(*(int *)((char *)this + 0x2d4) + 0x80);
  *(undefined4 *)((char *)this + 0x340) = *(undefined4 *)(*(int *)((char *)this + 0x2d4) + 0x88);
  _uStack_ac = 6.4534203941776116e-307;
  ghidra::str::assign(&PresentationData::m_talkingTo,"",0);
  *(float *)((char *)this + 0x40c) = in_XMM2_Da;
  *(undefined4 *)((char *)this + 0x410) = 0;
  if (param_1 < 0) {
LAB_005329f6:
    pRVar1 = *(Room **)((char *)this + 0x2d4);
    if (*(int *)(pRVar1 + 0x38) != -1) {
      _uStack_ac = (double)CONCAT44(0x532a10,uStack_ac);
      pRVar10 = (pRVar1)->getObjectForScreenID(*(int *)(pRVar1 + 0x38));
      *(RoomObject **)((char *)this + 0x34c) = pRVar10;
      *(undefined4 *)((char *)this + 0x348) = *(undefined4 *)(pRVar1 + 0x38);
      _uStack_ac = (double)CONCAT44(0x532a29,uStack_ac);
      pSVar9 = (pRVar1)->getConsole(*(int *)(pRVar1 + 0x38));
      *(Screen_Renderer **)((char *)this + 0x350) = pSVar9;
      _uStack_ac = (double)CONCAT44(0x532a39,uStack_ac);
      pSVar12 = (pRVar1)->getConsoleInterface(*(int *)(pRVar1 + 0x38));
      pGVar14 = g_gameData;
      *(ScreenInterface **)((char *)this + 0x354) = pSVar12;
      pLVar4 = *(LogSystem **)(*(int *)(pGVar14 + 0xd0) + 0x224);
      *(ScreenInterface **)(pLVar4 + 0x58) = pSVar12;
      if (*(int *)(pLVar4 + 0x10) != 0) {
        (pLVar4)->renderWarning();
        pGVar14 = g_gameData;
      }
      *(undefined4 *)(pLVar4 + 0x58) = 0;
      (*(LogSystem **)(*(int *)(pGVar14 + 0xd0) + 0x224))->renderWarning();
      goto LAB_00532a7f;
    }
    if (*(int *)(g_gameData + 0xd0) != 0) {
      (*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224))->cleanupWarning();
    }
    *(undefined4 *)((char *)this + 0x354) = 0;
    *(undefined4 *)((char *)this + 0x350) = 0;
    *(undefined4 *)((char *)this + 0x34c) = 0;
    *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
    _uStack_ac = (double)CONCAT44(0x532ae6,uStack_ac);
    (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))();
    if (*(int *)(g_gameData + 0xd0) != 0) {
      pLVar4 = *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224);
      iVar2 = *(int *)(*(Room **)((char *)this + 0x2d4) + 0x3c);
      if (iVar2 == -1) {
        *(undefined4 *)(pLVar4 + 0x58) = 0;
      }
      else {
        _uStack_ac = (double)CONCAT44(iVar2,0x532b0f);
        pSVar12 = (*(Room **)((char *)this + 0x2d4))->getConsoleInterface(iVar2);
        *(ScreenInterface **)(pLVar4 + 0x58) = pSVar12;
      }
      if (*(int *)(pLVar4 + 0x10) != 0) {
        _uStack_ac = (double)CONCAT44(0x532b28,uStack_ac);
        (pLVar4)->renderWarning();
      }
      *(undefined4 *)(pLVar4 + 0x58) = 0;
    }
  }
  else {
    pRVar1 = *(Room **)((char *)this + 0x2d4);
    if ((uint)((*(int *)(pRVar1 + 0xa8) - *(int *)(pRVar1 + 0xa4)) / 0x1c) <= (uint)param_1)
    goto LAB_005329f6;
    iVar8 = param_1 * 0x1c;
    iVar2 = *(int *)(iVar8 + 0x18 + *(int *)(pRVar1 + 0xa4));
    *(int *)((char *)this + 0x348) = iVar2;
    _uStack_ac = (double)CONCAT44(0x5325cc,uStack_ac);
    pSVar9 = (pRVar1)->getConsole(iVar2);
    *(Screen_Renderer **)((char *)this + 0x350) = pSVar9;
    _uStack_ac = (double)CONCAT44(0x5325da,uStack_ac);
    pRVar10 = (pRVar1)->getObjectForScreenID(iVar2);
    *(RoomObject **)((char *)this + 0x34c) = pRVar10;
    _uStack_ac = (double)CONCAT44(0x5325e8,uStack_ac);
    pRVar10 = (pRVar1)->getObjectForScreenID(iVar2);
    _uStack_ac = (double)CONCAT44(0x5325f0,uStack_ac);
    setMessageFocus(this,pRVar10);
    if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
        && (*(int *)((char *)this + 0x350) != 0)) && (*(int *)(*(int *)((char *)this + 0x350) + 0x10) != 0)) {
      _uStack_ac = 8.054702188700713e-307;
      bVar5 = ghidra::lib::_Traits_equal___x28_x29("c_nav",5,pcVar7,unaff_EDI);
      if (bVar5) {
        _uStack_ac = 3.18299368644791e-313;
        dStack_bc = (double)((ulonglong)dStack_bc & 0xffffffffffffff00);
        ghidra::str::assign((std::string *)&stack0xffffff44,"has_viewed_nav_screen",0x15)
        ;
        // [seh] local_8 = 1;
        pFVar11 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar11)->setFlag();
      }
    }
    iVar2 = *(int *)(*(int *)((char *)this + 0x34c) + 0x3c);
    if ((iVar2 == 5) || (iVar2 == 6)) {
      uStack_68 = 0;
      local_64 = 0xf;
      // [seh] local_8 = 2;
      iVar2 = *(int *)(*(int *)((char *)this + 0x34c) + 0x100);
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 == 0)) {
LAB_005329af:
        *(undefined4 *)((char *)this + 0x354) = 0;
        *(undefined4 *)((char *)this + 0x350) = 0;
        *(undefined4 *)((char *)this + 0x34c) = 0;
        *(undefined4 *)((char *)this + 0x348) = 0xffffffff;
        *(undefined4 *)((char *)this + 0x3b0) = 0xffffffff;
        _uStack_ac = (double)CONCAT44(0x5329f1,uStack_ac);
        (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))();
        goto LAB_00532c32;
      }
      uStack_50 = 0;
      local_4c = 0xf;
      local_60 = 0;
      // [seh] local_8._0_1_ = 3;
      // [seh] local_8._1_3_ = 0;
      _uStack_ac = (double)CONCAT44(0x5326e6,uStack_ac);
      ghidra::str::ctor
                ((std::string *)local_48,(std::string *)(iVar2 + 0xf8));
      // [seh] local_8 = CONCAT31(local_8._1_3_,4);
      bVar5 = false;
      _uStack_ac = 8.054919481070062e-307;
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("femalepassenger",0xf,pcVar7,unaff_EDI);
      if (bVar6) {
LAB_00532767:
        bVar6 = true;
      }
      else {
        _uStack_ac = (double)CONCAT44(0x532735,uStack_ac);
        ghidra::str::ctor
                  ((std::string *)local_30,
                   (std::string *)
                   (*(int *)(*(int *)(*(int *)((char *)this + 0x34c) + 0x100) + 0x1c) + 0xf8));
        bVar5 = true;
        _uStack_ac = 8.053697211494579e-307;
        bVar6 = ghidra::lib::_Traits_equal___x28_x29("malepassenger",0xd,pcVar7,unaff_EDI);
        if (bVar6) goto LAB_00532767;
        bVar6 = false;
      }
      if ((bVar5) && (0xf < local_1c)) {
        pnVar13 = (nothrow_t *)(local_1c + 1);
        pvVar15 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar15 = *(void **)((int)local_30[0] + -4);
          pnVar13 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        _uStack_ac = (double)CONCAT44(pvVar15,0x5327a3);
        operator_delete(pvVar15,pnVar13);
      }
      // [seh] local_8 = 3;
      if (0xf < local_34) {
        pnVar13 = (nothrow_t *)(local_34 + 1);
        pvVar15 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar15 = *(void **)((int)local_48[0] + -4);
          pnVar13 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        _uStack_ac = (double)CONCAT44(pvVar15,0x5327df);
        operator_delete(pvVar15,pnVar13);
      }
      if (bVar6) {
        piVar3 = *(int **)(g_gameData + 0x128);
        if ((((piVar3 == (int *)0x0) || (*piVar3 == 0)) || (*(int *)(*piVar3 + 0x5c) < 0)) ||
           ((char)piVar3[0x24] != '\0')) goto LAB_005329af;
        _uStack_ac = (double)((ulonglong)_uStack_ac & 0xffffffff);
        dStack_bc = (double)CONCAT35(abStack_b8._1_3_,9);
        ghidra::str::assign(abStack_b8,"passenger",9);
        dStack_bc = (double)CONCAT44(abStack_b8,
                                     *(undefined4 *)(**(int **)(g_gameData + 0x128) + 0x5c));
        talkToCharacter(this);
        *(undefined1 *)(*(int *)(g_gameData + 0x128) + 0x90) = 1;
      }
      else {
        ghidra::str::ctor
                  (abStack_b8,
                   (std::string *)
                   (*(int *)(*(int *)(*(int *)((char *)this + 0x34c) + 0x100) + 0x1c) + 0xf8));
        dStack_bc = (double)CONCAT44(abStack_b8,0xffffffff);
        bVar5 = talkToCharacter(this);
        if (!bVar5) goto LAB_005329af;
        _uStack_ac = 6.4534203941783e-307;
        ghidra::str::assign((std::string *)(*(int *)((char *)this + 0x34c) + 200),"",0);
      }
      (*(RoomObject **)((char *)this + 0x3a0))->recheckTabs();
      _uStack_ac = (double)CONCAT44(0x5328cf,uStack_ac);
      (*(RoomObject **)((char *)this + 0x3a0))->resetTopBars(extraout_CL);
      _uStack_ac = (double)CONCAT44(0x5328d8,uStack_ac);
      showTablet(this,4);
      // [seh] local_8 = 0xffffffff;
    }
    _uStack_ac = (double)CONCAT44(0x5328fd,uStack_ac);
    cocos2d::Vec3::Vec3(local_28,(Vec3 *)(*(int *)(*(int *)((char *)this + 0x2d4) + 0xa4) + iVar8));
    // [seh] local_8 = 5;
    _uStack_ac = (double)CONCAT44(&local_6c,0x53291f);
    cocos2d::Vec3::operator*(local_28,(float)&local_6c);
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_28);
    *(ulonglong *)((char *)this + 0x32c) = CONCAT44(uStack_68,local_6c);
    *(undefined4 *)((char *)this + 0x334) = local_64;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_6c);
    iVar2 = *(int *)(*(Room **)((char *)this + 0x2d4) + 0xa4);
    *(undefined8 *)((char *)this + 0x338) = *(undefined8 *)(iVar2 + 0xc + iVar8);
    *(undefined4 *)((char *)this + 0x340) = *(undefined4 *)(iVar2 + 0x14 + iVar8);
    _uStack_ac = (double)CONCAT44(0x53297b,uStack_ac);
    pSVar12 = (*(Room **)((char *)this + 0x2d4))->getConsoleInterface(*(int *)((char *)this + 0x348));
    pGVar14 = g_gameData;
    *(ScreenInterface **)((char *)this + 0x354) = pSVar12;
    pLVar4 = *(LogSystem **)(*(int *)(pGVar14 + 0xd0) + 0x224);
    *(ScreenInterface **)(pLVar4 + 0x58) = pSVar12;
    if (*(int *)(pLVar4 + 0x10) != 0) {
      (pLVar4)->renderWarning();
    }
    *(undefined4 *)(pLVar4 + 0x58) = 0;
LAB_00532a7f:
    _uStack_ac = (double)CONCAT44(0x532a8f,uStack_ac);
    (**(code **)(**(int **)((char *)this + 0x364) + 0xb4))();
  }
  if (in_XMM2_Da == 0.0) {
    *(undefined8 *)((char *)this + 0x2fc) = *(undefined8 *)((char *)this + 0x32c);
    *(undefined4 *)((char *)this + 0x304) = *(undefined4 *)((char *)this + 0x334);
    *(undefined8 *)((char *)this + 0x308) = *(undefined8 *)((char *)this + 0x338);
    ((char *)this)[0x344] = (byte)0x0;
    *(undefined4 *)((char *)this + 0x310) = *(undefined4 *)((char *)this + 0x340);
  }
  else {
    ((char *)this)[0x344] = (byte)0x1;
  }
  _uStack_ac = (double)in_XMM2_Da;
  dStack_b4 = (double)*(float *)((char *)this + 0x334);
  dStack_bc = (double)*(float *)((char *)this + 0x330);
  debugPrint("RENDER","Moving camera from %f, %f, %f -> %f, %f, %f, taking %f seconds",
             (double)*(float *)((char *)this + 0x314),(double)*(float *)((char *)this + 0x318),
             (double)*(float *)((char *)this + 0x31c),(double)*(float *)((char *)this + 0x32c));
  if (((param_1 == -1) && (*(int *)((char *)this + 0x3a0) != 0)) &&
     (((char *)this)[0x39d] != (byte)0x0)) {
    _uStack_ac = 2.69305401048276e-317;
    hideTablet(this,false);
  }
LAB_00532c32:
  _uStack_ac = (double)CONCAT44(*(int *)((char *)this + 0x348),0x532c43);
  pRVar10 = (*(Room **)((char *)this + 0x2d4))->getObjectForScreenID(*(int *)((char *)this + 0x348));
  _uStack_ac = (double)CONCAT44(pRVar10,0x532c4b);
  setMessageFocus(this,pRVar10);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: basic_string<> * __thiscall PresentationInterface::getConsoleToDamage(PresentationInterface *this)
std::string * PresentationInterface::getConsoleToDamage()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  std::string *pbVar7;
  uint unaff_EDI;
  std::string *this_00;
  std::string *in_stack_00000004;
  int local_20;
  std::string *local_1c;
  std::string *local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c64c8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_00 = (std::string *)0x0;
  local_20 = 0;
  local_1c = (std::string *)0x0;
  local_18 = (std::string *)0x0;
  // [seh] local_8 = 0;
  local_14 = 0;
  iVar4 = *(int *)(_DstBuf_0065d520 + 0x18);
  if (*(int *)(_DstBuf_0065d520 + 0x1c) - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + local_14 * 4);
      uVar6 = 0;
      iVar5 = *(int *)(iVar4 + 0x90);
      if (*(int *)(iVar4 + 0x94) - iVar5 >> 2 != 0) {
        do {
          iVar4 = *(int *)(iVar5 + uVar6 * 4);
          if (*(char *)(iVar4 + 0xfe) != '\0') {
            pbVar7 = (std::string *)(iVar4 + 0x58);
            bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
            if (!bVar1) {
              if (local_18 == this_00) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_20,(std::string *)this_00,pbVar7);
                this_00 = local_1c;
              }
              else {
                ghidra::str::ctor(this_00,pbVar7);
                local_1c = this_00 + 0x18;
                this_00 = local_1c;
              }
            }
          }
          uVar6 = uVar6 + 1;
          iVar4 = *(int *)(*(int *)(_DstBuf_0065d520 + 0x18) + local_14 * 4);
          iVar5 = *(int *)(iVar4 + 0x90);
        } while (uVar6 < (uint)(*(int *)(iVar4 + 0x94) - iVar5 >> 2));
      }
      local_14 = local_14 + 1;
      iVar4 = *(int *)(_DstBuf_0065d520 + 0x18);
    } while (local_14 < (uint)(*(int *)(_DstBuf_0065d520 + 0x1c) - iVar4 >> 2));
  }
  iVar5 = local_20;
  iVar4 = ((int)this_00 - local_20) / 0x18;
  if (iVar4 == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
    *in_stack_00000004 = (std::string)0x0;
    ghidra::str::assign(in_stack_00000004,"",0);
    ghidra::lib::vector___Tidy((ghidra::vector *)&local_20);
    // [seh] ExceptionList = local_10;
    return in_stack_00000004;
  }
  iVar3 = rand();
  ghidra::str::ctor
            (in_stack_00000004,(std::string *)(iVar5 + (iVar3 % (iVar4 + -1)) * 0x18));
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_20);
  // [seh] ExceptionList = local_10;
  return in_stack_00000004;
}


// Ghidra: void __thiscall PresentationInterface::addShake(PresentationInterface *this,char *param_2)
void PresentationInterface::addShake(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 *puVar1;
  bool bVar2;
  char *pcVar3;
  char ****ppppcVar4;
  char *pcVar5;
  RakNetGUID *this_00;
  nothrow_t *pnVar6;
  uint uVar7;
  char *pcVar8;
  uint unaff_EDI;
  int iVar9;
  float in_XMM1_Da;
  float in_XMM2_Da;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char ***local_48 [4];
  uint local_38;
  uint local_34;
  float local_2c;
  RakNetGUID *local_28;
  PresentationInterface *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  uVar7 = in_stack_00000018;
  pcVar8 = param_2;
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005c650b;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_14 = 0;
  local_24 = this;
  puVar1 = &stack0xfffffffc;
  if (OISConfiguration::noCameraMotion) goto LAB_00532f79;
  if (g_gameLogic[0x70] != (byte)0x0) {
    local_2c = in_XMM2_Da;
    // [seh] puStack_20 = &stack0xfffffffc;
    ghidra::str::ctor((std::string *)local_48,(std::string *)&param_2);
    local_14._0_1_ = 1;
    local_24 = (PresentationInterface *)ghidra::any_singleton();
    local_14 = CONCAT31(local_14._1_3_,2);
    uVar7 = 0;
    iVar9 = *(int *)(local_24 + 0x3c);
    if (*(int *)(local_24 + 0x40) - iVar9 >> 2 != 0) {
      do {
        local_28 = *(RakNetGUID **)(iVar9 + uVar7 * 4);
        ppppcVar4 = local_48;
        if (0xf < local_34) {
          ppppcVar4 = (char ****)local_48[0];
        }
        bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar4,local_38,pcVar3,unaff_EDI);
        if (bVar2) {
          this_00 = local_28;
          if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
            ghidra::Singleton<void>::instance = operator_new(1);
            this_00 = *(RakNetGUID **)(iVar9 + uVar7 * 4);
          }
          NetworkData::sendPresentationCommand
                    ((NetworkData *)this_00,*this_00,0,local_2c,(float)pcVar3);
        }
        uVar7 = uVar7 + 1;
        iVar9 = *(int *)(local_24 + 0x3c);
      } while (uVar7 < (uint)(*(int *)(local_24 + 0x40) - iVar9 >> 2));
    }
    pcVar8 = param_2;
    uVar7 = in_stack_00000018;
    puVar1 = puStack_20;
    if (0xf < local_34) {
      pnVar6 = (nothrow_t *)(local_34 + 1);
      ppppcVar4 = (char ****)local_48[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        ppppcVar4 = (char ****)local_48[0][-1];
        pnVar6 = (nothrow_t *)(local_34 + 0x24);
        if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar4,pnVar6);
      pcVar8 = param_2;
      uVar7 = in_stack_00000018;
      puVar1 = puStack_20;
    }
    goto LAB_00532f79;
  }
  puVar1 = &stack0xfffffffc;
  if (*(int *)(g_gameData + 0xd0) == 0) {
LAB_00532ff4:
    // [seh] puStack_20 = puVar1;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    puVar1 = puStack_20;
    if (!bVar2) goto LAB_00532f79;
  }
  else {
    pcVar5 = (char *)&param_2;
    if (0xf < in_stack_00000018) {
      pcVar5 = param_2;
    }
    bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
    puVar1 = puStack_20;
    if (!bVar2) goto LAB_00532ff4;
  }
  if (*(float *)(local_24 + 0x3d8) <= in_XMM2_Da && in_XMM2_Da != *(float *)(local_24 + 0x3d8)) {
    *(float *)(local_24 + 0x3d8) = in_XMM2_Da;
  }
  puVar1 = puStack_20;
  if (*(float *)(local_24 + 0x400) <= in_XMM1_Da && in_XMM1_Da != *(float *)(local_24 + 0x400)) {
    *(float *)(local_24 + 0x400) = in_XMM1_Da;
  }
LAB_00532f79:
  // [seh] puStack_20 = puVar1;
  if (0xf < uVar7) {
    pnVar6 = (nothrow_t *)(uVar7 + 1);
    pcVar3 = pcVar8;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(pcVar8 + -4);
      pnVar6 = (nothrow_t *)(uVar7 + 0x24);
      if ((char *)0x1f < pcVar8 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  // [seh] ExceptionList = local_1c;
  return;
}


// Ghidra: void __thiscall PresentationInterface::switchJumpMode(PresentationInterface *this,bool param_1)
void PresentationInterface::switchJumpMode(bool param_1)

{
  char stack0x00000005[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined2 *puVar2;
  undefined2 in_stack_00000005;
  undefined1 in_stack_00000007;
  
  if (param_1) {
    puVar2 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)&stack0x00000005,0x80,'\0',0x80);
  }
  else {
    puVar2 = &stack0x00000005;
    in_stack_00000005 = *(undefined2 *)(*(int *)((char *)this + 0x2d4) + 0x8c);
    in_stack_00000007 = *(undefined1 *)(*(int *)((char *)this + 0x2d4) + 0x8e);
  }
  *(undefined2 *)((char *)this + 0x3cc) = *puVar2;
  ((char *)this)[0x3ce] = *(PresentationInterface *)(puVar2 + 1);
  bVar1 = cocos2d::Color3B::operator==((Color3B *)((char *)this + 0x3cf),(Color3B *)((char *)this + 0x3cc));
  if (!bVar1) {
    *(undefined4 *)((char *)this + 0x3c4) = 0;
    *(undefined4 *)((char *)this + 0x3c8) = 0x40000000;
    ((char *)this)[0x3c0] = (byte)0x1;
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::switchEmconMode(PresentationInterface *this,bool param_1)
void PresentationInterface::switchEmconMode(bool param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  
  if ((*(int *)((char *)this + 0x2d4) != 0) && (ShipData::currentlyBoardedShip != (Ship *)0x0)) {
    if (param_1) {
      puVar2 = (undefined2 *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xdc);
    }
    else {
      puVar2 = (undefined2 *)(*(int *)((char *)this + 0x2d4) + 0x8c);
    }
    *(undefined2 *)((char *)this + 0x3cc) = *puVar2;
    ((char *)this)[0x3ce] = *(PresentationInterface *)(puVar2 + 1);
    bVar1 = cocos2d::Color3B::operator==((Color3B *)((char *)this + 0x3cf),(Color3B *)((char *)this + 0x3cc));
    if (!bVar1) {
      *(undefined4 *)((char *)this + 0x3c4) = 0;
      *(undefined4 *)((char *)this + 0x3c8) = 0x40000000;
      ((char *)this)[0x3c0] = (byte)0x1;
    }
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::runCameraLogic(PresentationInterface *this,float param_1)
void PresentationInterface::runCameraLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Vec3 *this_00;
  float fVar1;
  PresentationInterface PVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  Camera *pCVar7;
  float *pfVar8;
  undefined4 uVar9;
  Vec3 *pVVar10;
  int iVar11;
  BaseLight *this_01;
  code *pcVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  float in_XMM1_Da;
  Vec3 *pVVar16;
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 local_4c [12];
  undefined8 local_40;
  undefined4 local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6566;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((char *)this + 0x2d4) == 0) {
    return;
  }
  // [seh] ExceptionList = &local_10;
  local_18 = in_XMM1_Da;
  if (OISConfiguration::noCameraMotion) goto LAB_005334b7;
  if ((g_gameLogic[0x73] == (byte)0x0) && (0.0 < *(float *)((char *)this + 0x3d8))) {
    fVar14 = *(float *)((char *)this + 0x3d8) - in_XMM1_Da;
    *(float *)((char *)this + 0x3d8) = fVar14;
    if (0.0 < fVar14) {
      if (((*(float *)((char *)this + 0x3dc) == *(float *)((char *)this + 0x3f4)) &&
          (*(float *)((char *)this + 0x3e0) == *(float *)((char *)this + 0x3f8))) &&
         (*(float *)((char *)this + 0x3e4) == *(float *)((char *)this + 0x3fc))) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)((char *)this + 0x400);
        }
        else {
          fVar14 = *(float *)((char *)this + 0x400);
        }
        *(float *)((char *)this + 0x3f4) = fVar14;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)((char *)this + 0x400);
        }
        else {
          fVar14 = *(float *)((char *)this + 0x400);
        }
        *(float *)((char *)this + 0x3f8) = fVar14;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)((char *)this + 0x400);
        }
        else {
          fVar14 = *(float *)((char *)this + 0x400);
        }
        *(float *)((char *)this + 0x3fc) = fVar14;
      }
    }
    else {
      *(undefined4 *)((char *)this + 0x3d8) = 0;
      *(undefined4 *)((char *)this + 0x3f4) = 0;
      *(undefined4 *)((char *)this + 0x3f8) = 0;
      *(undefined4 *)((char *)this + 0x3fc) = 0;
      *(undefined4 *)((char *)this + 0x400) = 0;
    }
  }
  if (*(int *)((char *)this + 0x3b0) == -1) {
    *(float *)((char *)this + 0x3ec) = (*(float *)((char *)this + 0x394) / _designSize - 1.0) * -1.0 * 1.6 - 0.8;
    *(float *)((char *)this + 1000) = (*(float *)((char *)this + 0x398) / DAT_0065db64 - 1.0) * -1.0 * 1.6 - 0.8;
  }
  else {
    *(undefined4 *)((char *)this + 0x3ec) = 0;
    *(undefined4 *)((char *)this + 1000) = 0;
  }
  fVar14 = *(float *)((char *)this + 0x3dc);
  fVar1 = *(float *)((char *)this + 0x3f4);
  if (fVar14 <= fVar1) {
    if (fVar14 < fVar1) {
      fVar14 = local_18 * 96.0 + fVar14;
      *(float *)((char *)this + 0x3dc) = fVar14;
      bVar13 = fVar14 < fVar1;
      goto LAB_00533409;
    }
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)((char *)this + 0x3dc) = fVar14;
    bVar13 = fVar1 < fVar14;
LAB_00533409:
    if (!bVar13 && fVar1 != fVar14) {
      *(float *)((char *)this + 0x3dc) = fVar1;
    }
  }
  fVar14 = *(float *)((char *)this + 0x3e0);
  fVar1 = *(float *)((char *)this + 0x3f8);
  if (fVar14 <= fVar1) {
    if (fVar14 < fVar1) {
      fVar14 = local_18 * 96.0 + fVar14;
      *(float *)((char *)this + 0x3e0) = fVar14;
      bVar13 = fVar14 < fVar1;
      goto LAB_0053345b;
    }
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)((char *)this + 0x3e0) = fVar14;
    bVar13 = fVar1 < fVar14;
LAB_0053345b:
    if (!bVar13 && fVar1 != fVar14) {
      *(float *)((char *)this + 0x3e0) = fVar1;
    }
  }
  fVar14 = *(float *)((char *)this + 0x3e4);
  fVar1 = *(float *)((char *)this + 0x3fc);
  if (fVar14 <= fVar1) {
    if (fVar1 <= fVar14) goto LAB_005334b7;
    fVar14 = local_18 * 96.0 + fVar14;
    *(float *)((char *)this + 0x3e4) = fVar14;
    bVar13 = fVar14 < fVar1;
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)((char *)this + 0x3e4) = fVar14;
    bVar13 = fVar1 < fVar14;
  }
  if (!bVar13 && fVar1 != fVar14) {
    *(float *)((char *)this + 0x3e4) = fVar1;
  }
LAB_005334b7:
  pcVar12 = ~Vec3_exref;
  if (((char *)this)[0x344] != (byte)0x0) {
    fVar14 = *(float *)((char *)this + 0x410);
    local_28 = *(float *)((char *)this + 0x32c) - *(float *)((char *)this + 0x314);
    *(float *)((char *)this + 0x410) = fVar14 + local_18;
    local_1c = (fVar14 + local_18) / *(float *)((char *)this + 0x40c);
    local_24 = *(float *)((char *)this + 0x330) - *(float *)((char *)this + 0x318);
    local_20 = *(float *)((char *)this + 0x334) - *(float *)((char *)this + 0x31c);
    local_34 = (float *)(*(float *)((char *)this + 0x338) - *(float *)((char *)this + 800));
    local_30 = *(float *)((char *)this + 0x33c) - *(float *)((char *)this + 0x324);
    dVar15 = (double)(local_1c * 3.1415927);
    local_2c = *(float *)((char *)this + 0x340) - *(float *)((char *)this + 0x328);
    __libm_sse2_cos_precise(uVar4);
    local_1c = ((float)dVar15 - 1.0) * local_1c * -0.5;
    if (1.0 < local_1c) {
      ((char *)this)[0x344] = (byte)0x0;
      local_1c = 1.0;
    }
    puVar6 = (undefined8 *)
             cocos2d::Vec3::Vec3(local_4c,local_1c * local_28 + *(float *)((char *)this + 0x314),
                                 local_1c * local_24 + *(float *)((char *)this + 0x318),
                                 local_1c * local_20 + *(float *)((char *)this + 0x31c));
    *(undefined8 *)((char *)this + 0x2fc) = *puVar6;
    *(undefined4 *)((char *)this + 0x304) = *(undefined4 *)(puVar6 + 1);
    cocos2d::Vec3::~Vec3(local_4c);
    puVar6 = (undefined8 *)
             cocos2d::Vec3::Vec3(local_4c,local_1c * (float)local_34 + *(float *)((char *)this + 800),
                                 local_1c * local_30 + *(float *)((char *)this + 0x324),
                                 local_1c * local_2c + *(float *)((char *)this + 0x328));
    *(undefined8 *)((char *)this + 0x308) = *puVar6;
    *(undefined4 *)((char *)this + 0x310) = *(undefined4 *)(puVar6 + 1);
    cocos2d::Vec3::~Vec3(local_4c);
    if (local_1c == 1.0) {
      debugPrint("RENDER","Moved to %f, %f, %f",(double)*(float *)((char *)this + 0x3b4),
                 (double)*(float *)((char *)this + 0x3b8),(double)*(float *)((char *)this + 0x3bc));
    }
  }
  pCVar7 = cocos2d::Camera::getDefaultCamera();
  local_34 = (float *)(**(code **)(*(int *)pCVar7 + 0x7c))();
  // [seh] local_8 = 0;
  this_00 = (Vec3 *)((char *)this + 0x2fc);
  pfVar8 = (float *)cocos2d::Vec3::operator+(this_00,local_4c);
  if (((*pfVar8 != *local_34) || (pfVar8[1] != local_34[1])) ||
     (local_11 = '\0', pfVar8[2] != local_34[2])) {
    local_11 = '\x01';
  }
  cocos2d::Vec3::~Vec3(local_4c);
  // [seh] local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_58);
  if (local_11 != '\0') {
    pCVar7 = cocos2d::Camera::getDefaultCamera();
    uVar9 = cocos2d::Vec3::operator+(this_00,local_58);
    // [seh] local_8 = 1;
    (**(code **)(*(int *)pCVar7 + 0x78))(uVar9);
    pcVar12 = ~Vec3_exref;
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_58);
  }
  pCVar7 = cocos2d::Camera::getDefaultCamera();
  pVVar16 = local_64;
  local_34 = (float *)(**(code **)(*(int *)pCVar7 + 200))();
  // [seh] local_8 = 2;
  pVVar10 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x308),local_4c);
  // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  pfVar8 = (float *)cocos2d::Vec3::operator+(pVVar10,local_58);
  if (((*pfVar8 != *local_34) || (pfVar8[1] != local_34[1])) ||
     (local_11 = '\0', pfVar8[2] != local_34[2])) {
    local_11 = '\x01';
  }
  (*pcVar12)();
  (*pcVar12)();
  // [seh] local_8 = 0xffffffff;
  (*pcVar12)();
  if (local_11 != '\0') {
    pCVar7 = cocos2d::Camera::getDefaultCamera();
    pVVar10 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x308),local_58);
    // [seh] local_8 = 4;
    cocos2d::Vec3::operator+(pVVar10,local_64);
    // [seh] local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)(*(int *)pCVar7 + 0xc4))();
    cocos2d::Vec3::~Vec3(local_64);
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_58);
  }
  iVar11 = *(int *)((char *)this + 0x2d4);
  uVar4 = 0;
  if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
    do {
      iVar3 = *(int *)(*(int *)(iVar11 + 0x90) + uVar4 * 4);
      if (*(char *)(iVar3 + 0x3f4) != '\0') {
        uVar9 = *(undefined4 *)((char *)this + 0x300);
        *(undefined4 *)(iVar3 + 0x41c) = *(undefined4 *)this_00;
        *(undefined4 *)(iVar3 + 0x420) = uVar9;
        *(undefined4 *)(iVar3 + 0x424) = *(undefined4 *)((char *)this + 0x304);
        iVar11 = *(int *)((char *)this + 0x2d4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
  }
  if ((*(int *)((char *)this + 0x3a0) != 0) && (*(char *)(*(int *)((char *)this + 0x3a0) + 0x3f4) != '\0')) {
    cocos2d::Vec3::Vec3((Vec3 *)&local_40,*(float *)this_00 / OSInterface::renderScale,
                        *(float *)((char *)this + 0x300) / OSInterface::renderScale,
                        *(float *)((char *)this + 0x304) / OSInterface::renderScale);
    iVar11 = *(int *)((char *)this + 0x3a0);
    *(undefined8 *)(iVar11 + 0x41c) = local_40;
    *(undefined4 *)(iVar11 + 0x424) = local_38;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_40);
  }
  if (*(float *)((char *)this + 0x2c8) <= -1.0) {
    runLightLogic(this,(float)pVVar16);
  }
  else if (*(int *)((char *)this + 0x2c4) != -1) {
    fVar14 = *(float *)((char *)this + 0x2c8) - local_18;
    *(float *)((char *)this + 0x2c8) = fVar14;
    if (fVar14 <= 0.0) {
      PVar2 = ((char *)this)[0x2cc];
      ((char *)this)[0x2cc] = (PresentationInterface)(PVar2 == (byte)0x0);
      iVar11 = *(int *)((char *)this + 0x2c4) + -1;
      *(int *)((char *)this + 0x2c4) = iVar11;
      if (iVar11 < 0) {
        *(undefined1 **)((char *)this + 0x2c8) = &DAT_bf800000;
        ((char *)this)[0x2cc] = (byte)0x0;
      }
      else {
        if (PVar2 == (byte)0x0) {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.1;
        }
        else if (iVar11 < 4) {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.2;
        }
        else {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.07;
        }
        *(float *)((char *)this + 0x2c8) = fVar14;
      }
    }
    if (((char *)this)[0x2cc] == (byte)0x0) {
      *(undefined4 *)((char *)this + 700) = 0x3f800000;
    }
    else {
      *(undefined4 *)((char *)this + 700) = 0x3d75c28f;
    }
  }
  fVar14 = *(float *)((char *)this + 700);
  fVar1 = *(float *)((char *)this + 0x2c0);
  if (fVar14 != fVar1) {
    if (fVar14 <= fVar1) {
      local_18 = fVar1 - local_18 * 8.0;
      *(float *)((char *)this + 0x2c0) = local_18;
      if (local_18 < fVar14) {
        *(float *)((char *)this + 0x2c0) = fVar14;
        local_18 = fVar14;
      }
    }
    else {
      local_18 = local_18 * 6.0 + fVar1;
      *(float *)((char *)this + 0x2c0) = local_18;
      if (fVar14 < local_18) {
        *(float *)((char *)this + 0x2c0) = fVar14;
        local_18 = fVar14;
      }
    }
    iVar11 = *(int *)((char *)this + 0x2d4);
    uVar4 = 0;
    if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
      do {
        iVar11 = *(int *)(*(int *)(iVar11 + 0x90) + uVar4 * 4);
        iVar3 = *(int *)(iVar11 + 0x3c);
        if ((((iVar3 == 3) || (iVar3 == 1)) || (iVar3 == 2)) && (*(char *)(iVar11 + 0x380) == '\0'))
        {
          if (iVar3 == 1) {
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_01 = *(BaseLight **)(iVar11 + 0x3d0);
          }
          else if (iVar3 == 3) {
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_01 = *(BaseLight **)(iVar11 + 0x3d8);
          }
          else {
            if (iVar3 != 2) goto LAB_00533baf;
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_01 = *(BaseLight **)(iVar11 + 0x3d4);
          }
          cocos2d::BaseLight::setIntensity(this_01,fVar14 * local_18);
        }
LAB_00533baf:
        iVar11 = *(int *)((char *)this + 0x2d4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PresentationInterface::runLightLogic(PresentationInterface *this,float param_1)
void PresentationInterface::runLightLogic(float param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float in_XMM1_Da;
  float fVar8;
  undefined2 local_8;
  undefined1 local_6;
  
  if (*(float *)((char *)this + 0x3d4) == 0.0) {
    if (((char *)this)[0x3c0] != (byte)0x0) {
      fVar7 = *(float *)((char *)this + 0x3c8);
      fVar8 = *(float *)((char *)this + 0x3c4) + in_XMM1_Da;
      *(float *)((char *)this + 0x3c4) = fVar8;
      if (fVar7 <= fVar8) {
        *(float *)((char *)this + 0x3c4) = fVar7;
        ((char *)this)[0x3c0] = (byte)0x0;
        *(undefined4 *)((char *)this + 0x3d4) = 0x40000000;
        fVar8 = fVar7;
      }
      iVar5 = *(int *)((char *)this + 0x2d4);
      fVar8 = fVar8 / fVar7;
      uVar6 = 0;
      if (*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x90) >> 2 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4);
          iVar2 = *(int *)(iVar1 + 0x3c);
          if ((((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) && (*(char *)(iVar1 + 0x380) == '\0')
             ) {
            cocos2d::Color3B::Color3B((Color3B *)&local_8);
            iVar5 = *(int *)((char *)this + 0x2d4);
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d0);
            if (piVar3 != (int *)0x0) {
              puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)((char *)this + 0x2d4);
              local_8 = *puVar4;
              local_6 = *(undefined1 *)(puVar4 + 1);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d8);
            if (piVar3 != (int *)0x0) {
              puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)((char *)this + 0x2d4);
              local_8 = *puVar4;
              local_6 = *(undefined1 *)(puVar4 + 1);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)((char *)this + 0x2d4);
            }
            local_8 = CONCAT11((char)(int)((float)(int)((uint)(byte)((char *)this)[0x3cd] -
                                                       (uint)(byte)((char *)this)[0x3d0]) * fVar8 +
                                          (float)(byte)((char *)this)[0x3d0]),
                               (char)(int)((float)(int)((uint)(byte)((char *)this)[0x3cc] -
                                                       (uint)(byte)((char *)this)[0x3cf]) * fVar8 +
                                          (float)(byte)((char *)this)[0x3cf]));
            local_6 = (undefined1)
                      (int)((float)(int)((uint)(byte)((char *)this)[0x3ce] - (uint)(byte)((char *)this)[0x3d1]) * fVar8
                           + (float)(byte)((char *)this)[0x3d1]);
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d0);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)((char *)this + 0x2d4);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d8);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)((char *)this + 0x2d4);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)((char *)this + 0x2d4);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)(*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x90) >> 2));
      }
      if (*(int *)((char *)this + 0x3a4) != 0) {
        cocos2d::Color3B::Color3B((Color3B *)&local_8);
        iVar5 = *(int *)((char *)this + 0x3a4);
        if (*(int **)(iVar5 + 0x3d0) != (int *)0x0) {
          puVar4 = (undefined2 *)(**(code **)(**(int **)(iVar5 + 0x3d0) + 0x254))();
          iVar5 = *(int *)((char *)this + 0x3a4);
          local_8 = *puVar4;
          local_6 = *(undefined1 *)(puVar4 + 1);
        }
        if (*(int **)(iVar5 + 0x3d8) != (int *)0x0) {
          puVar4 = (undefined2 *)(**(code **)(**(int **)(iVar5 + 0x3d8) + 0x254))();
          iVar5 = *(int *)((char *)this + 0x3a4);
          local_8 = *puVar4;
          local_6 = *(undefined1 *)(puVar4 + 1);
        }
        if (*(int **)(iVar5 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d4) + 0x254))();
          iVar5 = *(int *)((char *)this + 0x3a4);
        }
        local_8 = CONCAT11((char)(int)((float)(int)((uint)(byte)((char *)this)[0x3cd] -
                                                   (uint)(byte)((char *)this)[0x3d0]) * fVar8 +
                                      (float)(byte)((char *)this)[0x3d0]),
                           (char)(int)((float)(int)((uint)(byte)((char *)this)[0x3cc] -
                                                   (uint)(byte)((char *)this)[0x3cf]) * fVar8 +
                                      (float)(byte)((char *)this)[0x3cf]));
        local_6 = (undefined1)
                  (int)((float)(int)((uint)(byte)((char *)this)[0x3ce] - (uint)(byte)((char *)this)[0x3d1]) * fVar8 +
                       (float)(byte)((char *)this)[0x3d1]);
        if (*(int **)(iVar5 + 0x3d0) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d0) + 0x25c))(&local_8);
          iVar5 = *(int *)((char *)this + 0x3a4);
        }
        if (*(int **)(iVar5 + 0x3d8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d8) + 0x25c))(&local_8);
          iVar5 = *(int *)((char *)this + 0x3a4);
        }
        if (*(int **)(iVar5 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d4) + 0x25c))(&local_8);
        }
      }
      if (1.0 <= fVar8) {
        debugPrint("RENDER","Lights at desired level.");
        *(undefined2 *)((char *)this + 0x3cf) = *(undefined2 *)((char *)this + 0x3cc);
        ((char *)this)[0x3d1] = ((char *)this)[0x3ce];
        *(undefined4 *)((char *)this + 0x3d4) = 0x40000000;
        ((char *)this)[0x3c0] = (byte)0x0;
      }
    }
  }
  else {
    fVar7 = *(float *)((char *)this + 0x3d4) - in_XMM1_Da;
    *(float *)((char *)this + 0x3d4) = fVar7;
    if (fVar7 < 0.0) {
      *(undefined4 *)((char *)this + 0x3d4) = 0;
      return;
    }
  }
  return;
}


// Ghidra: void __thiscall PresentationInterface::giveEmoteToCharacter(PresentationInterface *this,char *param_2)
void PresentationInterface::giveEmoteToCharacter(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  CharacterAnimationManager *pCVar6;
  std::string *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  nothrow_t *pnVar10;
  std::string *this_00;
  int *piVar11;
  void *pvVar12;
  int iVar13;
  std::string *pbVar14;
  void *pvVar15;
  uint unaff_EDI;
  uint uVar16;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  std::string *pbVar17;
  uint local_38;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c65a0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  bVar3 = false;
  // [seh] local_8 = 1;
  iVar9 = *(int *)((char *)this + 0x2d4);
  local_38 = 0;
  local_14 = pcVar4;
  if (*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2 != 0) {
    do {
      iVar13 = local_38 * 4;
      iVar9 = *(int *)(iVar13 + *(int *)(iVar9 + 0x90));
      iVar1 = *(int *)(iVar9 + 0x3c);
      pvVar12 = local_2c[0];
      uVar16 = local_18;
      if ((((iVar1 == 5) || (iVar1 == 6)) && (iVar9 = *(int *)(iVar9 + 0x100), iVar9 != 0)) &&
         (iVar9 = *(int *)(iVar9 + 0x1c), iVar9 != 0)) {
        ghidra::str::ctor
                  ((std::string *)local_2c,(std::string *)(iVar9 + 0xf8));
        uVar16 = local_18;
        pvVar12 = local_2c[0];
        bVar3 = true;
        pcVar5 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar5 = param_2;
        }
        bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
        if (!bVar2) goto LAB_005340f8;
        bVar2 = true;
      }
      else {
LAB_005340f8:
        bVar2 = false;
      }
      if ((bVar3) && (bVar3 = false, 0xf < uVar16)) {
        pnVar10 = (nothrow_t *)(uVar16 + 1);
        pvVar15 = pvVar12;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar15 = *(void **)((int)pvVar12 + -4);
          pnVar10 = (nothrow_t *)(uVar16 + 0x24);
          if (0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar15))) goto LAB_00534218;
        }
        operator_delete(pvVar15,pnVar10);
      }
      if (bVar2) {
        iVar9 = *(int *)(*(int *)((char *)this + 0x2d4) + 0x90);
        pbVar17 = (std::string *)&stack0x0000001c;
        pCVar6 = ghidra::any_singleton();
        pbVar7 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(pCVar6 + 0x18),pbVar17);
        this_00 = (std::string *)(*(int *)(iVar9 + iVar13) + 200);
        if (this_00 != pbVar7) {
          pbVar14 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar14 = *(std::string **)pbVar7;
          }
          ghidra::str::assign(this_00,(char *)pbVar14,*(uint *)(pbVar7 + 0x10));
        }
        iVar9 = *(int *)(iVar13 + *(int *)(*(int *)((char *)this + 0x2d4) + 0x90));
        piVar11 = (int *)(iVar9 + 200);
        if (0xf < *(uint *)(iVar9 + 0xdc)) {
          piVar11 = (int *)*piVar11;
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x100) + 0x1c);
        puVar8 = (undefined4 *)(iVar9 + 0xc);
        if (0xf < *(uint *)(iVar9 + 0x20)) {
          puVar8 = (undefined4 *)*puVar8;
        }
        debugPrint("WORLD","Giving %s the custom animation \'%s\' to play",puVar8,piVar11);
      }
      iVar9 = *(int *)((char *)this + 0x2d4);
      local_38 = local_38 + 1;
    } while (local_38 < (uint)(*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2));
  }
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
LAB_00534218:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar10 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar12 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar12 = *(void **)((int)in_stack_0000001c + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall PresentationInterface::talkToCharacter(PresentationInterface *this,undefined4 param_2,char *param_3)
bool PresentationInterface::talkToCharacter(undefined4 param_2, char * param_3)

{
  TabletManager *this_00;
  ConversationManager *pCVar1;
  Conversation *pCVar2;
  GameCharacter *pGVar3;
  ConversationElement *pCVar4;
  char *pcVar5;
  ConversationManager *this_01;
  void *pvVar6;
  nothrow_t *pnVar7;
  bool bVar8;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 uVar9;
  std::string abStack_58 [8];
  undefined4 uStack_50;
  void *local_30 [5];
  uint local_1c;
  undefined1 *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c65f0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_7 = 0;
  if (*(int *)((char *)this + 0x3a0) == 0) {
    bVar8 = false;
  }
  else {
    ghidra::str::ctor((std::string *)local_30,(std::string *)&param_3);
    // [seh] local_8 = 1;
    this_00 = ghidra::any_singleton();
    local_18 = abStack_58;
    // [seh] local_8 = 2;
    ghidra::str::ctor(abStack_58,(std::string *)local_30);
    uVar9 = 0;
    // [seh] local_8 = 3;
    pCVar1 = ghidra::any_singleton();
    // [seh] local_8 = 2;
    pCVar2 = (pCVar1)->getConversation(param_2, uVar9);
    *(Conversation **)(this_00 + 0x20) = pCVar2;
    if (pCVar2 != (Conversation *)0x0) {
      ghidra::str::ctor(abStack_58,(std::string *)(pCVar2 + 4));
      pGVar3 = GameData::getCharacter();
      *(GameCharacter **)(this_00 + 0x10) = pGVar3;
      if (*(int *)(this_00 + 0x20) != 0) {
        this_00[0x18] = (byte)0x1;
        (this_00)->setElement(0);
        *(undefined4 *)(this_00 + 0x24) = 0;
        *(undefined4 *)(this_00 + 4) = 0;
        *(undefined1 **)(this_00 + 8) = &DAT_bf800000;
        ghidra::any_singleton();
        pCVar4 = Conversation::getElement
                           (*(Conversation **)(this_00 + 0x20),*(int *)(this_00 + 0x1c));
        (this_01)->performElementActions(pCVar4);
        // [seh] local_8 = 0;
        if (0xf < local_1c) {
          pnVar7 = (nothrow_t *)(local_1c + 1);
          pvVar6 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_30[0] + -4);
            pnVar7 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) goto LAB_00534340;
          }
          operator_delete(pvVar6,pnVar7);
        }
        pcVar5 = (char *)&param_3;
        if (0xf < in_stack_0000001c) {
          pcVar5 = param_3;
        }
        PresentationData::m_talkMode = true;
        ghidra::str::assign(&PresentationData::m_talkingTo,pcVar5,in_stack_00000018);
        bVar8 = true;
        goto LAB_00534425;
      }
      uStack_50 = 0x53437d;
      debugPrint("GAME","\'%s\' person has nothing to say.");
    }
    if (0xf < local_1c) {
      pnVar7 = (nothrow_t *)(local_1c + 1);
      pvVar6 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_30[0] + -4);
        pnVar7 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) goto LAB_00534340;
      }
      operator_delete(pvVar6,pnVar7);
    }
    bVar8 = false;
  }
LAB_00534425:
  if (0xf < in_stack_0000001c) {
    pnVar7 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar5 = *(char **)(param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar5)) {
LAB_00534340:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return bVar8;
}


// Ghidra: void __thiscall PresentationInterface::flicker(PresentationInterface *this,int param_1)
void PresentationInterface::flicker(int param_1)

{
  uint uVar1;
  
  *(int *)((char *)this + 0x2c4) = param_1;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  ((char *)this)[0x2cc] = (byte)0x1;
  *(float *)((char *)this + 0x2c8) = (float)(int)(uVar1 + 1) * 0.1;
  return;
}


// Ghidra: void __thiscall PresentationInterface::exitGame(PresentationInterface *this)
void PresentationInterface::exitGame()

{
  SoundEngine *this_00;
  Director *this_01;
  
  SteamAPI_Shutdown(this);
  this_00 = ghidra::any_singleton();
  (this_00)->shutdown();
  this_01 = cocos2d::Director::getInstance();
  cocos2d::Director::end(this_01);
  return;
}


// Ghidra: bool __thiscall PresentationInterface::hasForcedConversationPending(PresentationInterface *this)
bool PresentationInterface::hasForcedConversationPending()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ConversationManager *pCVar1;
  int iVar2;
  uint uVar3;
  std::string abStack_3c [24];
  uint uStack_24;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bffb8;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_24 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar2 = *(int *)((char *)this + 0x2d4);
  if ((iVar2 != 0) && (uVar3 = 0, *(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90) >> 2 != 0)) {
    do {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x90) + uVar3 * 4);
      if (((*(int *)(iVar2 + 0x3c) == 5) || (*(int *)(iVar2 + 0x3c) == 6)) &&
         ((*(int *)(iVar2 + 0x100) != 0 && (*(char *)(iVar2 + 0xfd) == '\0')))) {
        ghidra::str::ctor
                  (abStack_3c,(std::string *)(*(int *)(*(int *)(iVar2 + 0x100) + 0x1c) + 0xf8));
        // [seh] local_8 = 0;
        pCVar1 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        iVar2 = (pCVar1)->hasConversationToForce();
        if (iVar2 != -1) {
          // [seh] ExceptionList = local_10;
          return true;
        }
      }
      iVar2 = *(int *)((char *)this + 0x2d4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90) >> 2));
  }
  // [seh] ExceptionList = local_10;
  return false;
}
