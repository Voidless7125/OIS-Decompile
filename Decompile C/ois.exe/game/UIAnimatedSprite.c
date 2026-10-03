#include "../ois.exe.h"


// public: virtual void * __thiscall UIAnimatedSprite::`vector deleting destructor'(unsigned int)

void * __thiscall
UIAnimatedSprite::_vector_deleting_destructor_(UIAnimatedSprite *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c9f90;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x2a4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2a4) + 0x134))(uVar2);
    *(undefined4 *)(this + 0x2a4) = 0;
  }
  puVar6 = *(undefined4 **)(this + 0x2a8);
  uVar5 = 0;
  uVar2 = (uint)((int)*(undefined4 **)(this + 0x2ac) + (3 - (int)puVar6)) >> 2;
  if (*(undefined4 **)(this + 0x2ac) < puVar6) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      cocos2d::Ref::autorelease((Ref *)*puVar6);
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != uVar2);
  }
  *(undefined4 *)(this + 0x2ac) = *(undefined4 *)(this + 0x2a8);
  pvVar1 = *(void **)(this + 0x2a8);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x2b0) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00563ddd;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined4 *)(this + 0x2ac) = 0;
    *(undefined4 *)(this + 0x2b0) = 0;
  }
  uVar2 = *(uint *)(this + 0x28c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x278);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00563ddd:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0xf;
  this[0x278] = (UIAnimatedSprite)0x0;
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x2b8);
  }
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall UIAnimatedSprite::render(void)

void __thiscall UIAnimatedSprite::render(UIAnimatedSprite *this)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  int *piVar2;
  Sprite *this_01;
  float *pfVar3;
  UIAnimatedSprite *pUVar4;
  int iVar5;
  int iVar6;
  char acStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  Sprite *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9fb9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(this + 0x2a4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2a4) + 0x134))();
    *(undefined4 *)(this + 0x2a4) = 0;
  }
  this_00 = (vector<> *)(this + 0x2a8);
  iVar5 = *(int *)this_00;
  if (((uint)(*(int *)(this + 0x2ac) - iVar5) < 4) && (iVar6 = 0, 0 < *(int *)(this + 0x290))) {
    do {
      pUVar4 = this + 0x278;
      if (0xf < *(uint *)(this + 0x28c)) {
        pUVar4 = *(UIAnimatedSprite **)(this + 0x278);
      }
      strUsingArgs(acStack_48,"%s_%02d.png",pUVar4,iVar6);
      this_01 = loadSprite();
      local_14 = this_01;
      cocos2d::Ref::retain((Ref *)this_01);
      ppAVar1 = *(AnimationFrames ***)(this + 0x2ac);
      if (*(AnimationFrames ***)(this + 0x2b0) == ppAVar1) {
        fStack_3c = 7.920342e-39;
        std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar1 = (AnimationFrames *)this_01;
        *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) + 4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0x290));
    iVar5 = *(int *)this_00;
  }
  piVar2 = *(int **)(iVar5 + *(int *)(this + 0x294) * 4);
  *(int **)(this + 0x2a4) = piVar2;
  local_8 = 0;
  (**(code **)(*piVar2 + 0xa0))();
  local_8 = 0xffffffff;
  iVar5 = **(int **)(this + 0x2a4);
  (**(code **)(iVar5 + 0xb0))();
  pfVar3 = (float *)(**(code **)(**(int **)(this + 0x2a4) + 0xb0))();
  fStack_3c = *pfVar3 * 0.5;
  uStack_40 = 0x563f4f;
  (**(code **)(iVar5 + 0x48))();
  uStack_40 = *(undefined4 *)(this + 0x2a4);
  uStack_44 = 0x563f5f;
  (**(code **)(*(int *)this + 0x10c))();
  iVar5 = *(int *)this;
  uStack_44 = 0x563f6f;
  uStack_44 = (**(code **)(**(int **)(this + 0x2a4) + 0xb0))();
  builtin_strncpy(acStack_48,"x?V",4);
  (**(code **)(iVar5 + 0xac))();
  ExceptionList = local_10;
  return;
}
