#include "../ois.exe.h"


// public: virtual void * __thiscall ServerPresentationInterface::`scalar deleting
// destructor'(unsigned int)

void * __thiscall
ServerPresentationInterface::_scalar_deleting_destructor_
          (ServerPresentationInterface *this,uint param_1)

{
  ~ServerPresentationInterface(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x2f0);
  }
  return this;
}


// public: virtual __thiscall ServerPresentationInterface::~ServerPresentationInterface(void)

void __thiscall
ServerPresentationInterface::~ServerPresentationInterface(ServerPresentationInterface *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)(this + 0x2e0);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x2e8) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00534788;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x2e0) = 0;
    *(undefined4 *)(this + 0x2e4) = 0;
    *(undefined4 *)(this + 0x2e8) = 0;
  }
  uVar2 = *(uint *)(this + 0x2dc);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x2c8);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00534788;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0xf;
  this[0x2c8] = (ServerPresentationInterface)0x0;
  uVar2 = *(uint *)(this + 0x2c0);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x2ac);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00534788;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0xf;
  this[0x2ac] = (ServerPresentationInterface)0x0;
  pvVar1 = *(void **)(this + 0x29c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x2a4) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00534788:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x29c) = 0;
    *(undefined4 *)(this + 0x2a0) = 0;
    *(undefined4 *)(this + 0x2a4) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x00534782. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Layer::~Layer((Layer *)this);
  return;
}


// public: void __thiscall ServerPresentationInterface::renderOutlines(void)

void __thiscall ServerPresentationInterface::renderOutlines(ServerPresentationInterface *this)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  AnimationFrames *this_00;
  Scale9Sprite *pSVar3;
  Texture2D *pTVar4;
  Sprite *pSVar5;
  uint uVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  undefined4 *puVar10;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  AnimationFrames *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c6632;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar10 = *(undefined4 **)(this + 0x29c);
  local_18 = (AnimationFrames *)(this + 0x29c);
  uVar9 = 0;
  uVar6 = (*(int *)(this + 0x2a0) - (int)puVar10) + 3U >> 2;
  if (*(undefined4 **)(this + 0x2a0) < puVar10) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      (**(code **)(*(int *)*puVar10 + 0x138))();
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != uVar6);
  }
  this_00 = local_18;
  *(undefined4 *)(local_18 + 4) = *(undefined4 *)local_18;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_3c,"E_Border.png",0xc);
  local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_3c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
    pnVar8 = (nothrow_t *)(local_28 + 1);
    pvVar7 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_3c[0] + -4);
      pnVar8 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  iVar1 = *(int *)pSVar3;
  cocos2d::Size::Size((Size *)&local_1c,318.0,358.0);
  (**(code **)(iVar1 + 0xac))();
  local_1c = 0;
  local_18 = (AnimationFrames *)0x0;
  local_8 = 1;
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar3 + 0x40))();
  pTVar4 = (Texture2D *)(**(code **)(*(int *)(pSVar3 + 0x278) + 0xc))();
  local_20 = 0x2600;
  local_24 = 0x2600;
  local_1c = 0x812f;
  local_18 = (AnimationFrames *)0x812f;
  cocos2d::Texture2D::setTexParameters(pTVar4,(_TexParams *)&local_24);
  (**(code **)(*(int *)pSVar3 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  ppAVar2 = *(AnimationFrames ***)(this_00 + 4);
  local_18 = (AnimationFrames *)pSVar3;
  if (*(AnimationFrames ***)(this_00 + 8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)this_00,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pSVar3;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_3c,"E_Border.png",0xc);
  local_8 = 2;
  pSVar3 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_3c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
    pnVar8 = (nothrow_t *)(local_28 + 1);
    pvVar7 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_3c[0] + -4);
      pnVar8 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  iVar1 = *(int *)pSVar3;
  cocos2d::Size::Size((Size *)&local_1c,318.0,358.0);
  (**(code **)(iVar1 + 0xac))();
  local_1c = 0;
  local_18 = (AnimationFrames *)0x0;
  local_8 = 3;
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar3 + 0x40))();
  pTVar4 = (Texture2D *)(**(code **)(*(int *)(pSVar3 + 0x278) + 0xc))();
  local_20 = 0x2600;
  local_24 = 0x2600;
  local_1c = 0x812f;
  local_18 = (AnimationFrames *)0x812f;
  cocos2d::Texture2D::setTexParameters(pTVar4,(_TexParams *)&local_24);
  (**(code **)(*(int *)pSVar3 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  ppAVar2 = *(AnimationFrames ***)(this_00 + 4);
  local_18 = (AnimationFrames *)pSVar3;
  if (*(AnimationFrames ***)(this_00 + 8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)this_00,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pSVar3;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
  }
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff64,"Logo_Lores.png",0xe);
  pSVar5 = loadSprite();
  (**(code **)(*(int *)pSVar5 + 0x48))();
  (**(code **)(*(int *)pSVar5 + 0x40))();
  (**(code **)(*(int *)this + 0x10c))();
  ppAVar2 = *(AnimationFrames ***)(this_00 + 4);
  local_18 = (AnimationFrames *)pSVar5;
  if (*(AnimationFrames ***)(this_00 + 8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)this_00,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pSVar5;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual void __thiscall ServerPresentationInterface::update(float)

void __thiscall ServerPresentationInterface::update(ServerPresentationInterface *this,float param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  NetworkServer *pNVar4;
  basic_string<> *pbVar5;
  UIText *pUVar6;
  basic_string<> *pbVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char *pcVar9;
  uint uVar10;
  basic_string<> *local_44 [4];
  uint local_34;
  uint local_30;
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c66b2;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (basic_string<> *)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  local_14 = pcVar2;
  std::basic_string<>::assign((basic_string<> *)local_44,"Server Information:\n",0x14);
  Singleton<>::getInstance();
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 1;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  uStack_70 = 0x534c7e;
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 2;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  std::basic_string<>::append((basic_string<> *)local_44,"\n",1);
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 3;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (basic_string<> *)((uint)local_2c[0] & 0xffffff00);
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 4;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  Singleton<>::getInstance();
  Singleton<>::getInstance();
  uStack_70 = 0x534e0b;
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 5;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  std::basic_string<>::append((basic_string<> *)local_44,"\n",1);
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 6;
  pcVar9 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar9 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,*(uint *)(pcVar3 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  pNVar4 = Singleton<>::getInstance();
  switch(*(undefined4 *)(pNVar4 + 0x1c)) {
  case 0:
    uVar10 = 0xb;
    pcVar9 = "`$Disabled\n";
    break;
  case 1:
    uVar10 = 0x17;
    pcVar9 = "`9Awaiting Connections\n";
    break;
  case 2:
    uVar10 = 0xd;
    pcVar9 = "`!Game Lobby\n";
    break;
  case 3:
    uVar10 = 10;
    pcVar9 = "`0Running\n";
    break;
  default:
    goto switchD_00534ee3_default;
  }
  std::basic_string<>::append((basic_string<> *)local_44,pcVar9,uVar10);
switchD_00534ee3_default:
  uVar10 = local_30;
  pbVar5 = (basic_string<> *)local_44;
  if (0xf < local_30) {
    pbVar5 = local_44[0];
  }
  bVar1 = std::_Traits_equal<>((char *)pbVar5,local_34,pcVar2,unaff_EDI);
  if (!bVar1) {
    if ((basic_string<> *)(this + 0x2ac) != (basic_string<> *)local_44) {
      pbVar5 = (basic_string<> *)local_44;
      if (0xf < uVar10) {
        pbVar5 = local_44[0];
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0x2ac),(char *)pbVar5,local_34);
    }
    if (*(int *)(this + 0x2a8) == 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_74,(basic_string<> *)local_44);
      pUVar6 = UIText::create(0);
      *(UIText **)(this + 0x2a8) = pUVar6;
      (**(code **)(*(int *)pUVar6 + 0x40))();
      local_8._0_1_ = 7;
      (**(code **)(**(int **)(this + 0x2a8) + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_70 = 0x534ffd;
      (**(code **)(**(int **)(this + 0x2a8) + 0x48))();
      uStack_70 = *(undefined4 *)(this + 0x2a8);
      uStack_74 = 0x53500d;
      (**(code **)(*(int *)this + 0x10c))();
    }
    else {
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_74,(basic_string<> *)local_44);
      UIText::setText(*(UIText **)(this + 0x2a8),1,0);
    }
  }
  renderServerMenu(this);
  pbVar5 = local_2c[0];
  local_8 = CONCAT31(local_8._1_3_,8);
  pbVar7 = (basic_string<> *)local_2c;
  if (0xf < local_18) {
    pbVar7 = local_2c[0];
  }
  bVar1 = std::_Traits_equal<>((char *)pbVar7,local_1c,pcVar2,unaff_EDI);
  if (!bVar1) {
    if ((basic_string<> *)(this + 0x2c8) != (basic_string<> *)local_2c) {
      pbVar7 = (basic_string<> *)local_2c;
      if (0xf < local_18) {
        pbVar7 = pbVar5;
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0x2c8),(char *)pbVar7,local_1c);
    }
    if (*(int *)(this + 0x2c4) == 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_74,(basic_string<> *)local_2c);
      pUVar6 = UIText::create(0);
      *(UIText **)(this + 0x2c4) = pUVar6;
      (**(code **)(*(int *)pUVar6 + 0x40))();
      local_8._0_1_ = 9;
      (**(code **)(**(int **)(this + 0x2c4) + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,8);
      uStack_70 = 0x53511b;
      (**(code **)(**(int **)(this + 0x2c4) + 0x48))();
      uStack_70 = *(undefined4 *)(this + 0x2c4);
      uStack_74 = 0x53512b;
      (**(code **)(*(int *)this + 0x10c))();
      pbVar5 = local_2c[0];
    }
    else {
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_74,(basic_string<> *)local_2c);
      UIText::setText(*(UIText **)(this + 0x2c4),1,0);
      pbVar5 = local_2c[0];
    }
  }
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pbVar7 = pbVar5;
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar7 = *(basic_string<> **)(pbVar5 + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((basic_string<> *)0x1f < pbVar5 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar7,pnVar8);
  }
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pbVar5 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar5 = *(basic_string<> **)(local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if ((basic_string<> *)0x1f < local_44[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall ServerPresentationInterface::configureMenus(void)

void __thiscall ServerPresentationInterface::configureMenus(ServerPresentationInterface *this)

{
  char cVar1;
  AnimationFrames **ppAVar2;
  ServerPresentationInterface *pSVar3;
  ServerMenu *pSVar4;
  AnimationFrames *pAVar5;
  ServerMenuItem *pSVar6;
  char *pcVar7;
  GameData *pGVar8;
  uint uVar9;
  vector<> *this_00;
  int iVar10;
  vector<> *this_01;
  basic_string<> local_c4 [16];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined **local_ac [2];
  code *local_a4;
  undefined4 local_a0;
  ServerPresentationInterface *local_98;
  undefined1 *local_88;
  uint uStack_84;
  undefined **local_80;
  undefined4 uStack_7c;
  basic_string<> local_70 [4];
  ServerPresentationInterface *local_6c;
  undefined4 local_60;
  basic_string<> local_3c;
  ServerMenu *local_28;
  vector<> *local_24;
  AnimationFrames *local_20;
  AnimationFrames *local_1c;
  AnimationFrames *local_18;
  ServerPresentationInterface *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c6805;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar10 = *(int *)(this + 0x2e0);
  this_01 = (vector<> *)(this + 0x2e0);
  uVar9 = 0;
  local_24 = this_01;
  local_14 = this;
  if (*(int *)(this + 0x2e4) - iVar10 >> 2 != 0) {
    do {
      pSVar4 = *(ServerMenu **)(iVar10 + uVar9 * 4);
      if (pSVar4 != (ServerMenu *)0x0) {
        ServerMenu::~ServerMenu(pSVar4);
        local_60 = 0x535246;
        operator_delete(pSVar4,(nothrow_t *)&DAT_00000028);
      }
      uVar9 = uVar9 + 1;
      iVar10 = *(int *)this_01;
    } while (uVar9 < (uint)(*(int *)(this + 0x2e4) - iVar10 >> 2));
  }
  *(int *)(local_14 + 0x2e4) = iVar10;
  pSVar4 = operator_new(0x28);
  local_8 = 0;
  local_60 = 0;
  local_70[0] = (basic_string<>)0x0;
  uStack_7c = 0x53529b;
  local_28 = pSVar4;
  std::basic_string<>::assign(local_70,"",0);
  pAVar5 = (AnimationFrames *)ServerMenu::ServerMenu(pSVar4);
  local_8 = 0xffffffff;
  local_1c = pAVar5;
  local_18 = pAVar5;
  pSVar6 = operator_new(0x78);
  local_20 = (AnimationFrames *)&local_80;
  uStack_84 = 1;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  local_28 = (ServerMenu *)pSVar6;
  std::basic_string<>::assign(local_c4,"Change Scenario",0xf);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_20 = (AnimationFrames *)ServerMenuItem::ServerMenuItem(pSVar6,0);
  this_00 = (vector<> *)(pAVar5 + 0x1c);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
  if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
    local_60 = 0x535347;
    std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_20);
  }
  else {
    *ppAVar2 = local_20;
    *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
  }
  pSVar6 = operator_new(0x78);
  uStack_84 = 2;
  local_28 = (ServerMenu *)local_ac;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_c4,"Change Difficulty",0x11);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_20 = (AnimationFrames *)ServerMenuItem::ServerMenuItem(pSVar6,1);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
  if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
    local_60 = 0x5353d8;
    std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_20);
  }
  else {
    *ppAVar2 = local_20;
    *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
  }
  pSVar6 = operator_new(0x78);
  uStack_84 = 0xffffffff;
  local_28 = (ServerMenu *)local_ac;
  local_88 = (undefined1 *)local_ac;
  local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
  local_a4 = forceStart;
  local_a0 = 0;
  local_98 = local_14;
  local_8._0_1_ = 9;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_c4,"Force Start",0xb);
  local_8 = CONCAT31(local_8._1_3_,7);
  local_20 = (AnimationFrames *)ServerMenuItem::ServerMenuItem(pSVar6,1);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
  if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
    local_60 = 0x535485;
    std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_20);
  }
  else {
    *ppAVar2 = local_20;
    *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
  }
  pSVar6 = operator_new(0x78);
  uStack_84 = 0xffffffff;
  local_28 = (ServerMenu *)local_ac;
  local_88 = (undefined1 *)local_ac;
  local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
  local_a4 = quit;
  local_a0 = 0;
  local_98 = local_14;
  local_8._0_1_ = 0xc;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_c4,"Quit",4);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_20 = (AnimationFrames *)ServerMenuItem::ServerMenuItem(pSVar6,2);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
  if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
    local_60 = 0x535532;
    std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_20);
  }
  else {
    *ppAVar2 = local_20;
    *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
  }
  ppAVar2 = *(AnimationFrames ***)(this + 0x2e4);
  if (*(AnimationFrames ***)(this + 0x2e8) == ppAVar2) {
    local_60 = 0x535551;
    std::vector<>::_Emplace_reallocate<>(this_01,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = local_1c;
    *(int *)(this + 0x2e4) = *(int *)(this + 0x2e4) + 4;
  }
  pSVar4 = operator_new(0x28);
  local_8 = 0xd;
  local_60 = 0;
  local_70[0] = (basic_string<>)0x0;
  uStack_7c = 0x53558b;
  std::basic_string<>::assign(local_70,"Change Scenario",0xf);
  local_20 = (AnimationFrames *)ServerMenu::ServerMenu(pSVar4);
  pSVar3 = local_14;
  local_8 = 0xffffffff;
  uVar9 = 0;
  pGVar8 = g_gameData + 0x60;
  local_1c = (AnimationFrames *)0x0;
  local_18 = local_20;
  if (*(int *)(g_gameData + 100) - *(int *)pGVar8 >> 2 != 0) {
    do {
      iVar10 = *(int *)(uVar9 * 4 + *(int *)pGVar8);
      if ((*(int *)(iVar10 + 0x6c) == 3) && (*(int *)(iVar10 + 0x68) != 0)) {
        pSVar6 = operator_new(0x78);
        local_80 = std::_Func_impl_no_alloc<>::vftable;
        local_70[0] = local_3c;
        local_6c = pSVar3;
        local_28 = (ServerMenu *)local_ac;
        local_88 = (undefined1 *)local_ac;
        local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
        local_a4 = setScenario;
        local_a0 = 0;
        local_98 = pSVar3;
        local_8._0_1_ = 0x10;
        local_8._1_3_ = 0;
        uStack_84 = uVar9;
        std::basic_string<>::basic_string<>
                  (local_c4,(basic_string<> *)
                            (*(int *)(*(int *)(g_gameData + 0x60) + uVar9 * 4) + 0x18));
        local_8 = CONCAT31(local_8._1_3_,0xe);
        local_28 = (ServerMenu *)ServerMenuItem::ServerMenuItem(pSVar6,local_1c);
        local_1c = (AnimationFrames *)((int)local_1c + 1);
        local_8 = 0xffffffff;
        ppAVar2 = *(AnimationFrames ***)(local_20 + 0x20);
        if (*(AnimationFrames ***)(local_20 + 0x24) == ppAVar2) {
          local_60 = 0x5356af;
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(local_20 + 0x1c),ppAVar2,(AnimationFrames **)&local_28);
        }
        else {
          *ppAVar2 = (AnimationFrames *)local_28;
          *(int *)(local_20 + 0x20) = *(int *)(local_20 + 0x20) + 4;
        }
      }
      uVar9 = uVar9 + 1;
      pGVar8 = g_gameData + 0x60;
      this_01 = local_24;
    } while (uVar9 < (uint)(*(int *)(g_gameData + 100) - *(int *)pGVar8 >> 2));
  }
  pSVar6 = operator_new(0x78);
  uStack_84 = 0;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 0x13;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_c4,"Back",4);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_28 = (ServerMenu *)ServerMenuItem::ServerMenuItem(pSVar6,local_1c);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(local_20 + 0x20);
  if (*(AnimationFrames ***)(local_20 + 0x24) == ppAVar2) {
    local_60 = 0x535764;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(local_20 + 0x1c),ppAVar2,(AnimationFrames **)&local_28);
  }
  else {
    *ppAVar2 = (AnimationFrames *)local_28;
    *(int *)(local_20 + 0x20) = *(int *)(local_20 + 0x20) + 4;
  }
  ppAVar2 = *(AnimationFrames ***)(this_01 + 4);
  if (*(AnimationFrames ***)(this_01 + 8) == ppAVar2) {
    local_60 = 0x535783;
    std::vector<>::_Emplace_reallocate<>(this_01,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = local_20;
    *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 4;
  }
  pSVar4 = operator_new(0x28);
  local_8 = 0x14;
  local_60 = 0;
  local_70[0] = (basic_string<>)0x0;
  uStack_7c = 0x5357bd;
  std::basic_string<>::assign(local_70,"Change Difficulty",0x11);
  pAVar5 = (AnimationFrames *)ServerMenu::ServerMenu(pSVar4);
  pSVar3 = local_14;
  iVar10 = 0;
  local_8 = 0xffffffff;
  local_1c = pAVar5;
  local_18 = pAVar5;
  do {
    local_20 = operator_new(0x78);
    local_80 = std::_Func_impl_no_alloc<>::vftable;
    local_70[0] = local_3c;
    local_6c = pSVar3;
    local_88 = (undefined1 *)local_ac;
    local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
    local_a4 = setDifficulty;
    local_a0 = 0;
    local_98 = pSVar3;
    local_8._0_1_ = 0x17;
    local_8._1_3_ = 0;
    pcVar7 = (&PTR_s_Easy_005e1da4)[iVar10];
    local_28 = (ServerMenu *)(pcVar7 + 1);
    local_b4 = 0;
    local_b0 = 0xf;
    local_c4[0] = (basic_string<>)0x0;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uStack_84 = iVar10;
    std::basic_string<>::assign(local_c4,(&PTR_s_Easy_005e1da4)[iVar10],(int)pcVar7 - (int)local_28)
    ;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    local_28 = (ServerMenu *)ServerMenuItem::ServerMenuItem((ServerMenuItem *)local_20,iVar10);
    local_8 = 0xffffffff;
    ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
    if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
      local_60 = 0x5358bc;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(pAVar5 + 0x1c),ppAVar2,(AnimationFrames **)&local_28);
    }
    else {
      *ppAVar2 = (AnimationFrames *)local_28;
      *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  pSVar6 = operator_new(0x78);
  uStack_84 = 0;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 0x1a;
  local_8._1_3_ = 0;
  local_b4 = 0;
  local_b0 = 0xf;
  local_c4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_c4,"Back",4);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  local_28 = (ServerMenu *)ServerMenuItem::ServerMenuItem(pSVar6,4);
  local_8 = 0xffffffff;
  ppAVar2 = *(AnimationFrames ***)(pAVar5 + 0x20);
  if (*(AnimationFrames ***)(pAVar5 + 0x24) == ppAVar2) {
    local_60 = 0x535957;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pAVar5 + 0x1c),ppAVar2,(AnimationFrames **)&local_28);
  }
  else {
    *ppAVar2 = (AnimationFrames *)local_28;
    *(int *)(pAVar5 + 0x20) = *(int *)(pAVar5 + 0x20) + 4;
  }
  ppAVar2 = *(AnimationFrames ***)(local_24 + 4);
  if (*(AnimationFrames ***)(local_24 + 8) == ppAVar2) {
    local_60 = 0x535989;
    std::vector<>::_Emplace_reallocate<>(local_24,ppAVar2,&local_18);
    ExceptionList = local_10;
    return;
  }
  *ppAVar2 = local_1c;
  *(int *)(local_24 + 4) = *(int *)(local_24 + 4) + 4;
  ExceptionList = local_10;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall ServerPresentationInterface::renderServerMenu(void)

void __thiscall ServerPresentationInterface::renderServerMenu(ServerPresentationInterface *this)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  basic_string<> *in_stack_00000004;
  char *pcVar6;
  uint uVar7;
  basic_string<> *local_38;
  basic_string<> *local_34;
  basic_string<> *local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3dc8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = in_stack_00000004;
  piVar3 = *(int **)(this + 0x2e0);
  local_30 = in_stack_00000004;
  for (; piVar3 != *(int **)(this + 0x2e4); piVar3 = piVar3 + 1) {
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x18) == *(int *)(this + 0x294)) goto LAB_005359fe;
  }
  iVar4 = 0;
LAB_005359fe:
  *(int *)(this + 0x290) = iVar4;
  local_14 = uVar2;
  if (iVar4 == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
    *in_stack_00000004 = (basic_string<>)0x0;
    std::basic_string<>::assign(in_stack_00000004,"ERROR: INVALID MENU.",0x14);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    uVar5 = 0;
    if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2 != 0) {
      do {
        if (uVar5 == *(uint *)(this + 0x298)) {
          uVar7 = 10;
          pcVar6 = "`7[`%o`7] ";
        }
        else {
          uVar7 = 6;
          pcVar6 = "`7[ ] ";
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,uVar7);
        iVar4 = *(int *)(*(int *)(*(int *)(this + 0x290) + 0x1c) + uVar5 * 4);
        piVar3 = *(int **)(iVar4 + 0x6c);
        if (piVar3 != (int *)0x0) {
          if (*(char *)(iVar4 + 0x74) == '\0') {
            local_34 = *(basic_string<> **)(iVar4 + 0x70);
            cVar1 = (**(code **)(*piVar3 + 8))(&local_34,uVar2);
            if (cVar1 == '\0') {
              pcVar6 = "`7";
            }
            else {
              pcVar6 = "`%";
            }
          }
          else {
            local_38 = *(basic_string<> **)(iVar4 + 0x70);
            cVar1 = (**(code **)(*piVar3 + 8))(&local_38);
            if (cVar1 == '\0') {
              pcVar6 = "`8";
            }
            else {
              pcVar6 = "`%";
            }
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,2);
        }
        iVar4 = *(int *)(*(int *)(*(int *)(this + 0x290) + 0x1c) + uVar5 * 4);
        pcVar6 = (char *)(iVar4 + 4);
        if (0xf < *(uint *)(iVar4 + 0x18)) {
          pcVar6 = *(char **)(iVar4 + 4);
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(iVar4 + 0x14));
        std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
        uVar5 = uVar5 + 1;
        in_stack_00000004 = local_30;
      } while (uVar5 < (uint)(*(int *)(*(int *)(this + 0x290) + 0x20) -
                              *(int *)(*(int *)(this + 0x290) + 0x1c) >> 2));
    }
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
    *(uint *)in_stack_00000004 = local_2c;
    *(undefined4 *)(in_stack_00000004 + 4) = uStack_28;
    *(undefined4 *)(in_stack_00000004 + 8) = uStack_24;
    *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_20;
    *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall ServerPresentationInterface::quit(int)

void __thiscall ServerPresentationInterface::quit(ServerPresentationInterface *this,int param_1)

{
  uint uVar1;
  SoundEngine *this_00;
  Director *this_01;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1272;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Singleton<>::instance == (PresentationInterface *)0x0) {
    this = operator_new(0x418);
    local_8 = 0;
    Singleton<>::instance =
         (PresentationInterface *)
         PresentationInterface::PresentationInterface((PresentationInterface *)this);
  }
  local_8 = 0xffffffff;
  SteamAPI_Shutdown(uVar1,this);
  this_00 = Singleton<>::getInstance();
  SoundEngine::shutdown(this_00);
  this_01 = cocos2d::Director::getInstance();
  cocos2d::Director::end(this_01);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ServerPresentationInterface::forceStart(int)

void __thiscall
ServerPresentationInterface::forceStart(ServerPresentationInterface *this,int param_1)

{
  NetworkServer *this_00;
  
  this_00 = Singleton<>::getInstance();
  NetworkServer::forceSessionToBegin(this_00);
  return;
}


// public: void __thiscall ServerPresentationInterface::setScenario(int)

void __thiscall
ServerPresentationInterface::setScenario(ServerPresentationInterface *this,int param_1)

{
  basic_string<> *pbVar1;
  basic_string<> *pbVar2;
  
  pbVar1 = *(basic_string<> **)(*(int *)(g_gameData + 0x60) + param_1 * 4);
  if ((basic_string<> *)(g_gameData + 0xb4) != pbVar1) {
    pbVar2 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar2 = *(basic_string<> **)pbVar1;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(g_gameData + 0xb4),(char *)pbVar2,*(uint *)(pbVar1 + 0x10));
  }
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  return;
}


// public: bool __thiscall ServerPresentationInterface::difficultySelected(int)

bool __thiscall
ServerPresentationInterface::difficultySelected(ServerPresentationInterface *this,int param_1)

{
  return param_1 == *(int *)(g_gameLogic + 0xa0);
}


// public: void __thiscall ServerPresentationInterface::setDifficulty(int)

void __thiscall
ServerPresentationInterface::setDifficulty(ServerPresentationInterface *this,int param_1)

{
  *(int *)(g_gameLogic + 0xa0) = param_1;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  return;
}
