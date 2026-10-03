#include "../ois.exe.h"


// public: __thiscall UI_Image::UI_Image(class ScreenInterface *,class Widget &,bool *,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,float)

UI_Image * __thiscall
UI_Image::UI_Image(UI_Image *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,
                  undefined4 param_5,undefined4 param_6,void *param_7)

{
  Size *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000002c;
  Size local_1c [4];
  UI_Image *local_18;
  void *local_10;
  Size **ppSStack_c;
  undefined4 local_8;
  
  ppSStack_c = &this_005ca7f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  ScreenElement::ScreenElement((ScreenElement *)this,param_1,param_2,param_3);
  local_8._0_1_ = 1;
  *(undefined4 *)(this + 0x428) = param_5;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x42c) = param_6;
  *(undefined4 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x438),(basic_string<> *)&param_7);
  local_8._0_1_ = 2;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x450),(basic_string<> *)&param_7);
  this[0x468] = (UI_Image)0x0;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  *(undefined4 *)(this + 0x484) = 0;
  *(undefined4 *)(this + 0x488) = 0xf;
  this[0x474] = (UI_Image)0x0;
  *(undefined4 *)(this + 0x48c) = 0;
  *(undefined4 *)(this + 0x490) = 0;
  *(undefined4 *)(this + 0x494) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  pSVar1 = (Size *)cocos2d::Size::Size(local_1c,(float)*(int *)(this + 0x2a0),
                                       (float)*(int *)(this + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this,pSVar1);
  specialDataCheckFunction(this,0.0);
  if (0xf < in_stack_0000002c) {
    pnVar3 = (nothrow_t *)(in_stack_0000002c + 1);
    pvVar2 = param_7;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_7 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000002c + 0x24);
      if (0x1f < (uint)((int)param_7 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void * __thiscall UI_Image::`vector deleting destructor'(unsigned int)

void * __thiscall UI_Image::_vector_deleting_destructor_(UI_Image *this,uint param_1)

{
  ~UI_Image(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x498);
  }
  return this;
}


// public: virtual __thiscall UI_Image::~UI_Image(void)

void __thiscall UI_Image::~UI_Image(UI_Image *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9a80;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x46c) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x46c) = 0;
  }
  pvVar1 = *(void **)(this + 0x48c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x494) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056df88;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x48c) = 0;
    *(undefined4 *)(this + 0x490) = 0;
    *(undefined4 *)(this + 0x494) = 0;
  }
  uVar2 = *(uint *)(this + 0x488);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x474);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056df88;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x484) = 0;
  *(undefined4 *)(this + 0x488) = 0xf;
  this[0x474] = (UI_Image)0x0;
  uVar2 = *(uint *)(this + 0x464);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x450);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056df88;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x460) = 0;
  *(undefined4 *)(this + 0x464) = 0xf;
  this[0x450] = (UI_Image)0x0;
  uVar2 = *(uint *)(this + 0x44c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x438);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0056df88:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x44c) = 0xf;
  this[0x438] = (UI_Image)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Image::cleanupRender(void)

void __thiscall UI_Image::cleanupRender(UI_Image *this)

{
  if (*(int **)(this + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x46c) + 0x138))(1);
    *(undefined4 *)(this + 0x46c) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_Image::render(void)

void __thiscall UI_Image::render(UI_Image *this)

{
  bool bVar1;
  char *pcVar2;
  UI_Image *pUVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  UI_Image *pUVar7;
  undefined4 *puVar8;
  uint unaff_EDI;
  undefined4 local_20;
  undefined4 local_1c;
  UI_Image *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca829;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_18 = this;
  (**(code **)(*(int *)this + 0x290))();
  pUVar7 = this + 0x438;
  pUVar3 = pUVar7;
  if (0xf < *(uint *)(this + 0x44c)) {
    pUVar3 = *(UI_Image **)pUVar7;
  }
  bVar1 = std::_Traits_equal<>((char *)pUVar3,*(uint *)(this + 0x448),pcVar2,unaff_EDI);
  if (!bVar1) {
    puVar8 = *(undefined4 **)(this + 0x48c);
    uVar6 = 0;
    uVar4 = (uint)((int)*(undefined4 **)(this + 0x490) + (3 - (int)puVar8)) >> 2;
    if (*(undefined4 **)(this + 0x490) < puVar8) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      do {
        cocos2d::Ref::autorelease((Ref *)*puVar8);
        uVar6 = uVar6 + 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        this = local_18;
      } while (uVar6 != uVar4);
    }
    pUVar7 = this + 0x438;
    *(undefined4 *)(this + 0x490) = *(undefined4 *)(this + 0x48c);
  }
  iVar5 = *(int *)(this + 0x490);
  if ((uint)(iVar5 - *(int *)(this + 0x48c)) < 4) {
    cacheFrames(this);
    iVar5 = *(int *)(this + 0x490);
  }
  if (3 < (uint)(iVar5 - *(int *)(this + 0x48c))) {
    local_14 = *(int **)(*(int *)(this + 0x48c) + *(int *)(this + 0x434) * 4);
    *(int **)(this + 0x46c) = local_14;
    local_18 = *(UI_Image **)(pUVar7 + 0x10);
    bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
    if ((!bVar1) && (bVar1 = std::_Traits_equal<>(".png",4,pcVar2,unaff_EDI), !bVar1)) {
      local_20 = 0x3f000000;
      local_1c = 0x3f000000;
      local_8 = 0;
      (**(code **)(*local_14 + 0xa0))(&local_20);
      local_8 = 0xffffffff;
      (**(code **)(**(int **)(this + 0x46c) + 0x48))
                ((float)(*(int *)(this + 0x2a0) / 2),(float)(*(int *)(this + 0x2a4) / 2));
      (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)(this + 0x46c));
    }
    **(undefined1 **)(this + 0x288) = 1;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall UI_Image::cacheFrames(void)

void __thiscall UI_Image::cacheFrames(UI_Image *this)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  AnimationFrames *pAVar3;
  bool bVar4;
  int *piVar5;
  Sprite *pSVar6;
  uint *puVar7;
  basic_string<> *pbVar8;
  undefined4 *puVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  int iVar12;
  basic_string<> abStack_78 [12];
  undefined4 uStack_6c;
  undefined4 *local_50 [3];
  int local_44;
  int local_40;
  Sprite *local_3c;
  AnimationFrames *local_38;
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca858;
  local_10 = ExceptionList;
  local_14 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uStack_6c = 0x56e1ff;
  bVar4 = std::_Traits_equal<>("",0,local_14,unaff_EDI);
  if (!bVar4) {
    if (*(int *)(this + 0x428) < 2) {
      std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)(this + 0x438));
      pSVar6 = loadSprite();
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      uStack_6c = 0x56e425;
      local_38 = (AnimationFrames *)pSVar6;
      std::basic_string<>::assign((basic_string<> *)local_2c,"scale",5);
      local_30 = std::_Tree<>::count((_Tree<> *)(this + 0x3f8),(basic_string<> *)local_2c);
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_0056e45d:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_6c = 0x56e46a;
        operator_delete(pvVar10,pnVar11);
      }
      if (local_30 != 0) {
        puVar7 = (uint *)(**(code **)(*(int *)pSVar6 + 0xb0))();
        local_30 = *puVar7;
        (**(code **)(*(int *)pSVar6 + 0xb0))();
        (**(code **)(*(int *)pSVar6 + 0x40))();
      }
      cocos2d::Ref::retain((Ref *)pSVar6);
      ppAVar1 = *(AnimationFrames ***)(this + 0x490);
      if (*(AnimationFrames ***)(this + 0x494) == ppAVar1) {
        uStack_6c = 0x56e520;
        std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x48c),ppAVar1,&local_38);
      }
      else {
        *ppAVar1 = (AnimationFrames *)pSVar6;
        *(int *)(this + 0x490) = *(int *)(this + 0x490) + 4;
      }
    }
    else {
      local_38 = (AnimationFrames *)0x0;
      if (0 < *(int *)(this + 0x428)) {
        do {
          pAVar3 = local_38;
          std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)(this + 0x438));
          splitStringBy();
          local_8 = 0;
          piVar5 = local_50[0] + 6;
          if (0xf < (uint)local_50[0][0xb]) {
            piVar5 = (int *)*piVar5;
          }
          puVar9 = local_50[0];
          if (0xf < (uint)local_50[0][5]) {
            puVar9 = (undefined4 *)*local_50[0];
          }
          strUsingArgs((char *)abStack_78,"%s%d.%s",puVar9,pAVar3,piVar5);
          local_3c = loadSprite();
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          uStack_6c = 0x56e29d;
          std::basic_string<>::assign((basic_string<> *)local_2c,"scale",5);
          uStack_6c = 0x56e2b0;
          std::_Tree<>::_Eqrange<>((_Tree<> *)(this + 0x3f8),(basic_string<> *)&local_44);
          iVar2 = local_40;
          iVar12 = 0;
          local_34 = local_44;
          while (local_34 != iVar2) {
            iVar12 = iVar12 + 1;
            std::_Tree_unchecked_const_iterator<>::operator++
                      ((_Tree_unchecked_const_iterator<> *)&local_34);
          }
          if (0xf < local_18) {
            pnVar11 = (nothrow_t *)(local_18 + 1);
            pvVar10 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar10 = *(void **)((int)local_2c[0] + -4);
              pnVar11 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0056e45d;
            }
            uStack_6c = 0x56e2ff;
            operator_delete(pvVar10,pnVar11);
          }
          pSVar6 = local_3c;
          if (iVar12 != 0) {
            local_30 = 0x3f800000;
            piVar5 = (int *)(**(code **)(*(int *)local_3c + 0xb0))();
            local_34 = *piVar5;
            (**(code **)(*(int *)pSVar6 + 0xb0))();
            (**(code **)(*(int *)pSVar6 + 0x40))();
          }
          cocos2d::Ref::retain((Ref *)pSVar6);
          ppAVar1 = *(AnimationFrames ***)(this + 0x490);
          if (*(AnimationFrames ***)(this + 0x494) == ppAVar1) {
            uStack_6c = 0x56e3bf;
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(this + 0x48c),ppAVar1,(AnimationFrames **)&local_3c);
          }
          else {
            *ppAVar1 = (AnimationFrames *)pSVar6;
            *(int *)(this + 0x490) = *(int *)(this + 0x490) + 4;
          }
          local_8 = 0xffffffff;
          std::vector<>::_Tidy((vector<> *)local_50);
          local_38 = local_38 + 1;
        } while ((int)local_38 < *(int *)(this + 0x428));
      }
    }
    pbVar8 = (basic_string<> *)(this + 0x438);
    if ((basic_string<> *)(this + 0x474) != pbVar8) {
      if (0xf < *(uint *)(this + 0x44c)) {
        pbVar8 = *(basic_string<> **)pbVar8;
      }
      uStack_6c = 0x56e53d;
      std::basic_string<>::assign
                ((basic_string<> *)(this + 0x474),(char *)pbVar8,*(uint *)(this + 0x448));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_Image::specialDataCheckFunction(float)

void __thiscall UI_Image::specialDataCheckFunction(UI_Image *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  UI_Image *pUVar4;
  basic_string<> *pbVar5;
  undefined4 ****ppppuVar6;
  nothrow_t *pnVar7;
  basic_string<> *pbVar8;
  basic_string<> *pbVar9;
  uint unaff_EDI;
  float fVar10;
  float fVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  basic_string<> *local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca890;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_18 = pcVar3;
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    piVar1 = *(int **)(this + 0x3e4);
    if (piVar1 == (int *)0x0) {
      if (*(int *)(this + 0x2e0) == 1) goto LAB_0056e780;
    }
    else {
      local_4c = *(undefined4 *)(this + 1000);
      local_50 = *(undefined4 *)(g_gameData + 0xd0);
      if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(*piVar1 + 8))(local_48,&local_50,&local_4c);
      local_8 = 0;
      pUVar4 = this + 0x450;
      ppppuVar6 = local_48;
      if (0xf < local_34) {
        ppppuVar6 = (undefined4 ****)local_48[0];
      }
      if (0xf < *(uint *)(this + 0x464)) {
        pUVar4 = *(UI_Image **)pUVar4;
      }
      strUsingArgs((char *)local_30,pUVar4,ppppuVar6);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_34) {
        pnVar7 = (nothrow_t *)(local_34 + 1);
        ppppuVar6 = (undefined4 ****)local_48[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          ppppuVar6 = (undefined4 ****)local_48[0][-1];
          pnVar7 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar7);
      }
      pbVar8 = local_30[0];
      pbVar9 = (basic_string<> *)(this + 0x438);
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(this + 0x44c)) {
        pbVar5 = *(basic_string<> **)pbVar9;
      }
      bVar2 = std::_Traits_equal<>((char *)pbVar5,*(uint *)(this + 0x448),pcVar3,unaff_EDI);
      if (!bVar2) {
        if (pbVar9 != (basic_string<> *)local_30) {
          pbVar5 = (basic_string<> *)local_30;
          if (0xf < local_1c) {
            pbVar5 = pbVar8;
          }
          std::basic_string<>::assign(pbVar9,(char *)pbVar5,local_20);
          pbVar8 = local_30[0];
        }
        *(undefined4 *)(this + 0x434) = 0;
        *(undefined4 *)(this + 0x430) = 0;
        (**(code **)(*(int *)this + 0x294))();
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar7 = (nothrow_t *)(local_1c + 1);
        pbVar9 = pbVar8;
        if ((nothrow_t *)0xfff < pnVar7) {
          pbVar9 = *(basic_string<> **)(pbVar8 + -4);
          pnVar7 = (nothrow_t *)(local_1c + 0x24);
          if ((basic_string<> *)0x1f < pbVar8 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pbVar9,pnVar7);
      }
    }
    if (1 < *(int *)(this + 0x428)) {
      fVar10 = *(float *)(this + 0x430) + param_1;
      fVar11 = *(float *)(this + 0x42c) / (float)*(int *)(this + 0x428);
      *(float *)(this + 0x430) = fVar10;
      if (fVar11 <= fVar10) {
        *(int *)(this + 0x434) = *(int *)(this + 0x434) + 1;
        *(float *)(this + 0x430) = fVar10 - fVar11;
        if ((uint)(*(int *)(this + 0x490) - *(int *)(this + 0x48c) >> 2) <= *(uint *)(this + 0x434))
        {
          *(undefined4 *)(this + 0x434) = 0;
        }
        (**(code **)(*(int *)this + 0x294))();
      }
    }
  }
LAB_0056e780:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}
