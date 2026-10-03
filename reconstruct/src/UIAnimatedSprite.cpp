// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UIAnimatedSprite::render(UIAnimatedSprite *this)
void UIAnimatedSprite::render()

{
  ghidra::vector *this_00;
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9fb9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int **)((char *)this + 0x2a4) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x2a4) + 0x134))();
    *(undefined4 *)((char *)this + 0x2a4) = 0;
  }
  this_00 = (ghidra::vector *)((char *)this + 0x2a8);
  iVar5 = *(int *)this_00;
  if (((uint)(*(int *)((char *)this + 0x2ac) - iVar5) < 4) && (iVar6 = 0, 0 < *(int *)((char *)this + 0x290))) {
    do {
      pUVar4 = this + 0x278;
      if (0xf < *(uint *)((char *)this + 0x28c)) {
        pUVar4 = *(UIAnimatedSprite **)((char *)this + 0x278);
      }
      strUsingArgs(acStack_48,"%s_%02d.png",pUVar4,iVar6);
      this_01 = loadSprite();
      local_14 = this_01;
      cocos2d::Ref::retain((Ref *)this_01);
      ppAVar1 = *(AnimationFrames ***)((char *)this + 0x2ac);
      if (*(AnimationFrames ***)((char *)this + 0x2b0) == ppAVar1) {
        fStack_3c = 7.920342e-39;
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar1 = (AnimationFrames *)this_01;
        *(int *)((char *)this + 0x2ac) = *(int *)((char *)this + 0x2ac) + 4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((char *)this + 0x290));
    iVar5 = *(int *)this_00;
  }
  piVar2 = *(int **)(iVar5 + *(int *)((char *)this + 0x294) * 4);
  *(int **)((char *)this + 0x2a4) = piVar2;
  // [seh] local_8 = 0;
  (**(code **)(*piVar2 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  iVar5 = **(int **)((char *)this + 0x2a4);
  (**(code **)(iVar5 + 0xb0))();
  pfVar3 = (float *)(**(code **)(**(int **)((char *)this + 0x2a4) + 0xb0))();
  fStack_3c = *pfVar3 * 0.5;
  uStack_40 = 0x563f4f;
  (**(code **)(iVar5 + 0x48))();
  uStack_40 = *(undefined4 *)((char *)this + 0x2a4);
  uStack_44 = 0x563f5f;
  (**(code **)(*(int *)this + 0x10c))();
  iVar5 = *(int *)this;
  uStack_44 = 0x563f6f;
  uStack_44 = (**(code **)(**(int **)((char *)this + 0x2a4) + 0xb0))();
  builtin_strncpy(acStack_48,"x?V",4);
  (**(code **)(iVar5 + 0xac))();
  // [seh] ExceptionList = local_10;
  return;
}
