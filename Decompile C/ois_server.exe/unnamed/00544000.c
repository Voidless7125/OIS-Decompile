#include "../ois_server.exe.h"


Ref * __thiscall FUN_00544210(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  uint uVar4;
  Ref *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6424;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x470);
  pRVar3 = param_1;
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_SelectTray::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 0;
  *(undefined4 *)(this_00 + 0x450) = 0;
  *(undefined4 *)(this_00 + 0x454) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0;
  *(undefined4 *)(this_00 + 0x460) = 0;
  *(undefined4 *)(this_00 + 0x464) = 0;
  *(undefined2 *)(this_00 + 0x468) = 0;
  iVar5 = *(int *)(pRVar3 + 0x10);
  this_00[0x284] = (Ref)0x1;
  *(int *)(this_00 + 0x46c) = iVar5 + -0x1a;
  this_00[0x286] = (Ref)0x1;
  *(undefined4 *)(this_00 + 0x458) = *(undefined4 *)(pRVar3 + 0x160);
  local_20 = 0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00544430(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  double *pdVar3;
  int iVar4;
  undefined8 uVar5;
  double local_28 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6449;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = param_1 * 0x188;
  iVar1 = *(int *)(*(int *)((int)this + 0x10) + 100);
  if (*(int *)(iVar1 + 0x124 + iVar4) != 0) {
    if (*(char *)(iVar4 + 0xf8 + iVar1) == '\0') {
      if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041c620(*(undefined4 *)(iVar4 + 0x128 + iVar1),0);
        ExceptionList = local_10;
        return;
      }
      param_1 = *(int *)(DAT_0065b5cc + 0xd0);
      local_28[2] = (double)*(int *)(iVar4 + 300 + iVar1);
      local_28[1] = 0.0;
      local_28[0] = 0.0;
      piVar2 = *(int **)(iVar4 + 0x124 + iVar1);
      if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      uVar5 = CONCAT44(local_28,local_28 + 1);
      pdVar3 = local_28 + 2;
    }
    else {
      param_1 = *(int *)(DAT_0065b5cc + 0xd0);
      local_28[0] = (double)*(int *)(iVar4 + 300 + iVar1);
      local_28[1] = 0.0;
      local_28[2] = 0.0;
      piVar2 = *(int **)(iVar4 + 0x124 + iVar1);
      if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      uVar5 = CONCAT44(local_28 + 2,local_28 + 1);
      pdVar3 = local_28;
    }
    local_28[1] = 0.0;
    (**(code **)(*piVar2 + 8))(&param_1,pdVar3,uVar5,DAT_0065500c ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005445a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  float10 fVar5;
  void *in_stack_ffffffd4;
  
  cVar3 = '\0';
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(param_1 + 0xb8));
    cVar3 = FUN_00417780((void *)(param_1 + 0xd0),*(undefined4 *)(DAT_0065b5cc + 0xd0),
                         *(undefined4 *)(param_1 + 0xb4),in_stack_ffffffd4);
    if (*(char *)(param_1 + 0xb1) != '\0') {
      cVar3 = cVar3 == '\0';
    }
    goto switchD_0054460d_default;
  }
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    if ((double)fVar5 == (double)*(int *)(param_1 + 0x84)) {
      cVar3 = '\x01';
      break;
    }
    goto LAB_0054466c;
  case 1:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    if ((double)fVar5 != (double)*(int *)(param_1 + 0x84)) {
      cVar3 = '\x01';
      break;
    }
LAB_0054466c:
    cVar3 = '\0';
    break;
  case 2:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    cVar3 = (double)fVar5 < (double)*(int *)(param_1 + 0x84);
    break;
  case 3:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    cVar3 = (double)*(int *)(param_1 + 0x84) < (double)fVar5;
    break;
  case 4:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    bVar4 = (double)*(int *)(param_1 + 0x84) < (double)fVar5;
    goto LAB_00544801;
  case 5:
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    bVar4 = (double)fVar5 < (double)*(int *)(param_1 + 0x84);
LAB_00544801:
    cVar3 = !bVar4;
  }
switchD_0054460d_default:
  iVar1 = param_2 * 4;
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0xc) + 400) + iVar1);
  if (cVar3 == '\0') {
    if ((char)piVar2[0x9f] != '\0') {
      (**(code **)(*piVar2 + 0x2b8))();
      (**(code **)(**(int **)(iVar1 + *(int *)(*(int *)((int)this + 0xc) + 400)) + 0x290))();
    }
  }
  else if ((char)piVar2[0x9f] == '\0') {
    (**(code **)(*piVar2 + 0x294))();
    (**(code **)(**(int **)(iVar1 + *(int *)(*(int *)((int)this + 0xc) + 400)) + 0x2b8))();
    return;
  }
  return;
}


void __fastcall FUN_005448a0(void *param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 auStack_44 [16];
  
  uVar5 = 0;
  iVar6 = *(int *)((int)param_1 + 0x10);
  iVar4 = *(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 100);
  iVar3 = iVar4 >> 0x1f;
  if (iVar4 / 0x188 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(iVar6 + 100) + iVar3;
      if ((*(int *)(iVar4 + 0xf4) != 0) || (*(int *)(iVar4 + 0x7c) != 0)) {
        FUN_005445a0(param_1,iVar4,uVar5);
        iVar6 = *(int *)((int)param_1 + 0x10);
      }
      if (*(char *)(*(int *)(iVar6 + 100) + 0xb0 + iVar3) == '\0') {
        piVar2 = *(int **)(*(int *)(iVar6 + 100) + 0xac + iVar3);
        if (piVar2 != (int *)0x0) {
          auStack_44[0] = *(undefined4 *)(DAT_0065b5cc + 0xd0);
          fVar7 = (float10)(**(code **)(*piVar2 + 8))(auStack_44);
          dVar1 = (double)fVar7;
          if ((*(char *)((int)param_1 + 0x15) != '\0') ||
             (dVar1 != *(double *)(*(int *)((int)param_1 + 0x20) + uVar5 * 8))) {
            (**(code **)(**(int **)(*(int *)(*(int *)((int)param_1 + 0xc) + 400) + uVar5 * 4) +
                        0x298))(dVar1);
            *(double *)(*(int *)((int)param_1 + 0x20) + uVar5 * 8) = dVar1;
          }
        }
      }
      else {
        (**(code **)(**(int **)(*(int *)(*(int *)((int)param_1 + 0xc) + 400) + uVar5 * 4) + 0x29c))
                  ();
      }
      iVar3 = iVar3 + 0x188;
      uVar5 = uVar5 + 1;
      iVar6 = *(int *)((int)param_1 + 0x10);
    } while (uVar5 < (uint)((*(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 100)) / 0x188));
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    return;
  }
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}


undefined4 __thiscall FUN_00544a00(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int **)((int)this + 0x18) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x2c4))(param_1);
    return uVar1;
  }
  iVar3 = *(int *)((int)this + 0xc);
  uVar4 = 0;
  uVar2 = 0;
  if (*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2 != 0) {
    do {
      uVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 400) + uVar4 * 4) + 0x2c4))(param_1);
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      iVar3 = *(int *)((int)this + 0xc);
      uVar4 = uVar4 + 1;
      uVar2 = *(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2;
    } while (uVar4 < uVar2);
  }
  return uVar2 & 0xffffff00;
}


undefined4 __thiscall FUN_00544a90(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int **)((int)this + 0x18) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x2c8))(param_1);
    return uVar1;
  }
  iVar3 = *(int *)((int)this + 0xc);
  uVar4 = 0;
  uVar2 = 0;
  if (*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2 != 0) {
    do {
      uVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 400) + uVar4 * 4) + 0x2c8))(param_1);
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      iVar3 = *(int *)((int)this + 0xc);
      uVar4 = uVar4 + 1;
      uVar2 = *(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2;
    } while (uVar4 < uVar2);
  }
  return uVar2 & 0xffffff00;
}


void __fastcall FUN_00544b20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 400);
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x194) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x2cc))();
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 400);
    } while (uVar2 < (uint)(*(int *)(*(int *)(param_1 + 0xc) + 0x194) - iVar1 >> 2));
  }
  return;
}


int __thiscall FUN_00544b70(void *this,void *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  void *_Dst;
  
  iVar2 = *(int *)this;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 3;
  if (iVar4 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar8 = *(int *)((int)this + 8) - iVar2 >> 3;
  uVar5 = uVar1;
  if ((uVar8 <= 0x1fffffff - (uVar8 >> 1)) && (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar8 = uVar5 * 8;
  if (uVar5 < 0x20000000) {
    uVar5 = uVar8;
    if (0xfff < uVar8) goto LAB_00544bdf;
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar8);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00544bdf:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar6);
    if (iVar4 == 0) goto LAB_00544cc3;
    _Dst = (void *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar4;
  }
  iVar2 = ((int)param_1 - iVar2 >> 3) * 8;
  *(undefined8 *)(iVar2 + (int)_Dst) = *param_2;
  pvVar3 = *(void **)this;
  if (param_1 == *(void **)((int)this + 4)) {
    memmove(_Dst,pvVar3,(int)*(void **)((int)this + 4) - (int)pvVar3);
  }
  else {
    memmove(_Dst,pvVar3,(int)param_1 - (int)pvVar3);
    memmove((void *)(iVar2 + 8 + (int)_Dst),param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar3 & 0xfffffff8U)) &&
       (pvVar7 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7)))) {
LAB_00544cc3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  *(void **)this = _Dst;
  *(void **)((int)this + 4) = (void *)((int)_Dst + uVar1 * 8);
  *(void **)((int)this + 8) = (void *)(uVar8 + (int)_Dst);
  return *(int *)this + iVar2;
}


void __thiscall FUN_00544cd0(void *this,Rect *param_1,Rect *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Rect *pRVar4;
  Rect *pRVar5;
  uint uVar6;
  Rect *pRVar7;
  
  uVar2 = ((int)param_2 - (int)param_1) / 0x28;
  pRVar4 = *(Rect **)((int)this + 4);
  pRVar5 = *(Rect **)this;
  uVar6 = ((int)pRVar4 - (int)pRVar5) / 0x28;
  uVar1 = (*(int *)((int)this + 8) - (int)pRVar5) / 0x28;
  if (uVar2 <= uVar1) {
    if (uVar6 < uVar2) {
      FUN_00544ec0((undefined4 *)param_1,(undefined4 *)(param_1 + uVar6 * 0x28),pRVar5);
      pRVar4 = FUN_00480360(param_1 + uVar6 * 0x28,param_2,*(Rect **)((int)this + 4));
      *(Rect **)((int)this + 4) = pRVar4;
      return;
    }
    FUN_00544ec0((undefined4 *)param_1,(undefined4 *)param_2,pRVar5);
    pRVar4 = *(Rect **)((int)this + 4);
    for (pRVar7 = pRVar5 + uVar2 * 0x28; pRVar7 != pRVar4; pRVar7 = pRVar7 + 0x28) {
      FUN_00467a60(pRVar7);
    }
    *(Rect **)((int)this + 4) = pRVar5 + uVar2 * 0x28;
    return;
  }
  if (uVar2 < 0x6666667) {
    uVar6 = uVar2;
    if ((uVar1 <= 0x6666666 - (uVar1 >> 1)) && (uVar6 = (uVar1 >> 1) + uVar1, uVar6 < uVar2)) {
      uVar6 = uVar2;
    }
    if (pRVar5 != (Rect *)0x0) {
      if (pRVar5 != pRVar4) {
        do {
          FUN_00467a60(pRVar5);
          pRVar5 = pRVar5 + 0x28;
        } while (pRVar5 != pRVar4);
        pRVar5 = *(Rect **)this;
      }
      pRVar4 = pRVar5;
      if ((0xfff < uVar1 * 0x28) &&
         (pRVar4 = *(Rect **)(pRVar5 + -4), (Rect *)0x1f < pRVar5 + (-4 - (int)pRVar4)))
      goto LAB_00544dfd;
      FUN_005adb3f(pRVar4);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    if (uVar6 != 0) {
      if (0x6666666 < uVar6) goto LAB_00544eaf;
      uVar6 = uVar6 * 0x28;
      if (uVar6 < 0x1000) {
        if (uVar6 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_005adb0f(uVar6);
        }
      }
      else {
        uVar2 = uVar6 + 0x23;
        if (uVar2 <= uVar6) {
          uVar2 = 0xffffffff;
        }
        iVar3 = FUN_005adb0f(uVar2);
        if (iVar3 == 0) {
LAB_00544dfd:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        uVar2 = iVar3 + 0x23U & 0xffffffe0;
        *(int *)(uVar2 - 4) = iVar3;
      }
      *(uint *)this = uVar2;
      *(uint *)((int)this + 4) = uVar2;
      *(uint *)((int)this + 8) = *(int *)this + uVar6;
    }
    pRVar4 = FUN_00480360(param_1,param_2,*(Rect **)this);
    *(Rect **)((int)this + 4) = pRVar4;
    return;
  }
LAB_00544eaf:
                    // WARNING: Subroutine does not return
  FUN_00403b30();
}


Rect * __fastcall FUN_00544ec0(undefined4 *param_1,undefined4 *param_2,Rect *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_3 - (int)param_1;
    puVar4 = param_1 + 4;
    do {
      cocos2d::Rect::operator=(param_3,(Rect *)(puVar4 + -4));
      puVar3 = (undefined4 *)(iVar1 + (int)puVar4);
      if (puVar3 != puVar4) {
        puVar2 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar2 = (undefined4 *)*puVar4;
        }
        FUN_00402690(puVar3,puVar2,puVar4[4]);
      }
      param_3 = param_3 + 0x28;
      puVar3 = puVar4 + 6;
      puVar4 = puVar4 + 10;
    } while (puVar3 != param_2);
  }
  return param_3;
}


void * __thiscall FUN_00544f20(void *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  undefined1 in_stack_00000044;
  void *in_stack_00000048;
  undefined4 uStack00000058;
  uint in_stack_0000005c;
  void *in_stack_00000060;
  uint in_stack_00000074;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c64b6;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 3;
  FUN_004024e0(this,&param_1);
  local_8._0_1_ = 4;
  FUN_004024e0((void *)((int)this + 0x18),&stack0x00000048);
  local_8._0_1_ = 5;
  FUN_004024e0((void *)((int)this + 0x30),&stack0x00000060);
  *(undefined1 *)((int)this + 0x48) = in_stack_00000044;
  *(undefined4 *)((int)this + 0x74) = 0;
  local_8._0_1_ = 7;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)((int)this + 0x50,uVar1);
    *(undefined4 *)((int)this + 0x74) = uVar2;
  }
  local_8._0_1_ = 2;
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar3 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,8);
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
    in_stack_00000040 = (int *)0x0;
  }
  if (0xf < in_stack_0000005c) {
    pvVar3 = in_stack_00000048;
    if (0xfff < in_stack_0000005c + 1) {
      pvVar3 = *(void **)((int)in_stack_00000048 + -4);
      if (0x1f < (uint)((int)in_stack_00000048 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000058 = 0;
  in_stack_0000005c = 0xf;
  in_stack_00000048 = (void *)((uint)in_stack_00000048 & 0xffffff00);
  if (0xf < in_stack_00000074) {
    pvVar3 = in_stack_00000060;
    if (0xfff < in_stack_00000074 + 1) {
      pvVar3 = *(void **)((int)in_stack_00000060 + -4);
      if (0x1f < (uint)((int)in_stack_00000060 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_005450b0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint in_stack_fffffed4;
  void *pvVar3;
  undefined1 local_e8 [12];
  undefined4 uStack_dc;
  undefined1 local_d0 [12];
  undefined4 uStack_c4;
  int local_90 [30];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c65e3;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)this = Screen_PC::vftable;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(DAT_0065b444 + 0xc);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_8 = 2;
  uStack_7 = 0;
  uStack_c4 = 0x545184;
  FUN_00402690((void *)(param_1 + 0x30),"Comms",5);
  *(undefined2 *)((int)this + 7) = 0x101;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) / 6;
  *(int *)((int)this + 0x24) =
       (int)(*(int *)((int)this + 0x24) + (*(int *)((int)this + 0x24) >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(*(int *)((int)this + 0x40) + 0x60) = 0x28;
  local_d0[0] = 0;
  uStack_dc = 0x5451dd;
  FUN_00402690(local_d0,&DAT_0062103c,4);
  local_8 = 3;
  local_e8[0] = 0;
  FUN_00402690(local_e8,"Tribalt Precision",0x11);
  local_8 = 5;
  pvVar3 = (void *)(in_stack_fffffed4 & 0xffffff00);
  FUN_00402690(&stack0xfffffed4,&DAT_00621010,4);
  local_8 = 2;
  puVar2 = FUN_00544f20(local_90,pvVar3);
  _local_8 = CONCAT31(uStack_7,6);
  puVar1 = *(undefined4 **)((int)this + 0x48);
  if (*(undefined4 **)((int)this + 0x4c) == puVar1) {
    uStack_c4 = 0x545298;
    FUN_00547c70((void *)((int)this + 0x44),puVar1,puVar2);
  }
  else {
    FUN_00547b40(puVar1,puVar1,puVar2);
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x78;
  }
  local_8 = 2;
  FUN_005457a0(local_90);
  local_d0[0] = 0;
  uStack_dc = 0x5452cf;
  FUN_00402690(local_d0,&DAT_00621034,4);
  local_8 = 7;
  local_e8[0] = 0;
  FUN_00402690(local_e8,"Tribalt Precision",0x11);
  local_8 = 9;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffed4,&DAT_0062102c,4);
  local_8 = 2;
  puVar2 = FUN_00544f20(local_90,pvVar3);
  _local_8 = CONCAT31(uStack_7,10);
  puVar1 = *(undefined4 **)((int)this + 0x48);
  if (*(undefined4 **)((int)this + 0x4c) == puVar1) {
    uStack_c4 = 0x54538a;
    FUN_00547c70((void *)((int)this + 0x44),puVar1,puVar2);
  }
  else {
    FUN_00547b40(puVar1,puVar1,puVar2);
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x78;
  }
  local_8 = 2;
  FUN_005457a0(local_90);
  local_d0[0] = 0;
  uStack_dc = 0x5453c1;
  FUN_00402690(local_d0,&DAT_00620ffc,4);
  local_8 = 0xb;
  local_e8[0] = 0;
  FUN_00402690(local_e8,"Ventarii",8);
  local_8 = 0xd;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffed4,&DAT_00620ff8,3);
  local_8 = 2;
  puVar2 = FUN_00544f20(local_90,pvVar3);
  _local_8 = CONCAT31(uStack_7,0xe);
  puVar1 = *(undefined4 **)((int)this + 0x48);
  if (*(undefined4 **)((int)this + 0x4c) == puVar1) {
    uStack_c4 = 0x54547c;
    FUN_00547c70((void *)((int)this + 0x44),puVar1,puVar2);
  }
  else {
    FUN_00547b40(puVar1,puVar1,puVar2);
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x78;
  }
  local_8 = 2;
  FUN_005457a0(local_90);
  local_d0[0] = 0;
  uStack_dc = 0x5454b3;
  FUN_00402690(local_d0,&DAT_00620ffc,4);
  local_8 = 0xf;
  local_e8[0] = 0;
  FUN_00402690(local_e8,"Ventarii",8);
  local_8 = 0x11;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffed4,&DAT_0062100c,3);
  local_8 = 2;
  puVar2 = FUN_00544f20(local_90,pvVar3);
  _local_8 = CONCAT31(uStack_7,0x12);
  puVar1 = *(undefined4 **)((int)this + 0x48);
  if (*(undefined4 **)((int)this + 0x4c) == puVar1) {
    uStack_c4 = 0x54556e;
    FUN_00547c70((void *)((int)this + 0x44),puVar1,puVar2);
  }
  else {
    FUN_00547b40(puVar1,puVar1,puVar2);
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x78;
  }
  local_8 = 2;
  FUN_005457a0(local_90);
  local_d0[0] = 0;
  uStack_dc = 0x5455a5;
  FUN_00402690(local_d0,&DAT_00620ffc,4);
  local_8 = 0x13;
  local_e8[0] = 0;
  FUN_00402690(local_e8,"Ventarii",8);
  local_8 = 0x15;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffed4,&DAT_00621004,4);
  local_8 = 2;
  puVar2 = FUN_00544f20(local_90,pvVar3);
  _local_8 = CONCAT31(uStack_7,0x16);
  puVar1 = *(undefined4 **)((int)this + 0x48);
  if (*(undefined4 **)((int)this + 0x4c) == puVar1) {
    uStack_c4 = 0x545660;
    FUN_00547c70((void *)((int)this + 0x44),puVar1,puVar2);
  }
  else {
    FUN_00547b40(puVar1,puVar1,puVar2);
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x78;
  }
  FUN_005457a0(local_90);
  *(void **)(*(int *)((int)this + 0x40) + 4) = this;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_00545690(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_PC::vftable;
  if (*(Ref **)((int)this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x30));
  }
  piVar1 = *(int **)((int)this + 0x44);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x48);
    if (piVar1 != piVar2) {
      do {
        FUN_005457a0(piVar1);
        piVar1 = piVar1 + 0x1e;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x44);
    }
    piVar2 = piVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 0x4c) - (int)piVar1) / 0x78) * 0x78)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  FUN_004025a0((int *)((int)this + 0x34));
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_005457a0(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)param_1[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x14,DAT_0065500c ^ (uint)&stack0xfffffffc);
    param_1[0x1d] = 0;
  }
  if (0xf < (uint)param_1[0x11]) {
    pvVar2 = (void *)param_1[0xc];
    pvVar3 = pvVar2;
    if ((0xfff < param_1[0x11] + 1U) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
    goto LAB_005458c5;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[0xb]) {
    pvVar2 = (void *)param_1[6];
    pvVar3 = pvVar2;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
    goto LAB_005458c5;
    FUN_005adb3f(pvVar3);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar2 = (void *)*param_1;
    pvVar3 = pvVar2;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3)))) {
LAB_005458c5:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005458d0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffe2c;
  byte *pbVar6;
  void *local_1ac;
  code *local_1a8;
  code *local_1a4;
  undefined4 *local_1a0;
  undefined4 local_19c [4];
  undefined4 local_18c;
  undefined4 local_188;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6651;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_0065b5cc + 0xd0);
  FUN_0043d780((int)local_19c);
  local_8 = 0;
  local_18c = *(undefined4 *)(param_1 + 0x20);
  local_188 = *(undefined4 *)(param_1 + 0x24);
  pvVar2 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffe2c & 0xffffff00);
  local_1ac = pvVar2;
  FUN_00402690(&stack0xfffffe2c,&PTR_005ce008,0);
  puVar5 = local_19c;
  piVar3 = (int *)FUN_0055f500(pvVar2,*(int *)(param_1 + 0xc),puVar5,*(int *)(param_1 + 0xc) + 0x70,
                               *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x28) = piVar3;
  FUN_0055fcc0(piVar3);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))();
  local_1a4 = (code *)0x3f000000;
  local_1a0 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x28) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0xc);
  local_1ac = *(void **)(param_1 + 0x28);
  puVar4 = *(undefined4 **)(iVar1 + 0x194);
  if (*(undefined4 **)(iVar1 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar1 + 400),puVar4,&local_1ac);
  }
  else {
    *puVar4 = local_1ac;
    *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + 4;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (puVar4 == (undefined4 *)0x0) {
    local_1a0 = (undefined4 *)FUN_005adb0f(0xa8);
    puVar4 = FUN_0042b260(local_1a0);
    *(undefined4 **)(param_1 + 0x30) = puVar4;
  }
  local_1a8 = FUN_005460e0;
  local_1a0 = (undefined4 *)param_1;
  FUN_00547970(puVar4 + 6,&local_1a8);
  local_1a4 = FUN_00546740;
  local_1a0 = (undefined4 *)param_1;
  FUN_00547a10((void *)(*(int *)(param_1 + 0x30) + 0x68),&local_1a4);
  local_1a8 = FUN_00546760;
  local_1a0 = (undefined4 *)param_1;
  FUN_00547aa0((void *)(*(int *)(param_1 + 0x30) + 0x40),&local_1a8);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xd) = 1;
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    local_1a0 = (undefined4 *)FUN_005adb0f(0x150);
    local_8._0_1_ = 3;
    puVar5 = (undefined4 *)0x545b17;
    puVar4 = FUN_0042bc30(local_1a0,*(undefined4 *)(param_1 + 0x28),param_1 + 0x34,
                          *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                          param_1 + 0x34);
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 **)(param_1 + 0x2c) = puVar4;
  }
  local_1a4 = FUN_00546020;
  *(undefined4 **)(*(int *)(param_1 + 0x40) + 100) = puVar4;
  local_1a0 = (undefined4 *)param_1;
  FUN_00547a10((void *)(*(int *)(param_1 + 0x2c) + 0x128),&local_1a4);
  FUN_00546020(param_1);
  pvVar2 = (void *)((uint)puVar5 & 0xffffff00);
  FUN_00402690(&stack0xfffffe1c,&PTR_005ce008,0);
  FUN_0042ddb0(*(void **)(param_1 + 0x2c),pvVar2);
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xfffffe1c,"`!V`%entarii VT-OS v6.22",0x18);
  FUN_0042ddb0(*(void **)(param_1 + 0x2c),pvVar2);
  FUN_0042de40(*(void **)(param_1 + 0x2c),"`0User`2: %s");
  FUN_0042d280(*(int **)(param_1 + 0x2c));
  FUN_00546020(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x2c));
  FUN_00465e40((int)local_19c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00545c10(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x70) = 1;
  }
  return;
}


undefined4 __thiscall FUN_00545c20(void *this,int param_1)

{
  int *piVar1;
  int *this_00;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = *(int **)((int)this + 0x2c);
  if (this_00[0x19] == 1) {
    if (param_1 == 0x1d) {
      if ((uint)this_00[0x1a] < (uint)((this_00[0x2d] - this_00[0x2c]) / 0x18 - this_00[9])) {
        this_00[0x1a] = this_00[0x1a] + 1;
        FUN_0042c7a0(this_00);
      }
LAB_00545cd0:
      iVar5 = *(int *)((int)this + 0x1c);
      pvVar4 = (void *)FUN_00402f60();
      FUN_00558a20(pvVar4,iVar5);
    }
    else {
      if (param_1 == 0x1c) {
        if (0 < this_00[0x1a]) {
          this_00[0x1a] = this_00[0x1a] + -1;
          FUN_0042c7a0(this_00);
        }
        goto LAB_00545cd0;
      }
      if (((param_1 == 0xa4) || (param_1 == 10)) || (param_1 == 0x23)) {
        FUN_0042c690(this_00);
        FUN_00546020((int)this);
        goto LAB_00545cd0;
      }
    }
    iVar5 = *(int *)(*(int *)((int)this + 0x40) + 8);
    if (iVar5 != 1) {
      if ((iVar5 == 2) && (param_1 == 0x8e)) {
        FUN_00591070("DETAIL","Sending draft: %s");
        FUN_004b4360(*(int *)((int)this + 0x40));
        iVar5 = *(int *)((int)this + 0x1c);
        pvVar4 = (void *)FUN_00402f60();
        FUN_00558a20(pvVar4,iVar5);
        FUN_0042c690(*(int **)((int)this + 0x2c));
        uVar6 = FUN_00546020((int)this);
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      goto LAB_00545fe0;
    }
    iVar5 = FUN_004b3a50(*(int *)(DAT_0065b5cc + 300));
    if (iVar5 < 1) goto LAB_00545fe0;
    bVar7 = param_1 == 0x8d;
LAB_00545d09:
    if (!bVar7) goto LAB_00545fe0;
    FUN_0042d130(*(void **)((int)this + 0x2c),0);
    FUN_004b4940(*(void **)((int)this + 0x40));
  }
  else {
    if (this_00[0x19] != 2) {
      uVar6 = FUN_0042b4d0(*(void **)((int)this + 0x30),param_1);
      ExceptionList = local_10;
      return uVar6;
    }
    if (*(int *)((int)this + 0x18) == 1) {
      if (*(char *)((int)this + 0x14) != '\0') {
        if ((((param_1 == 0x17) || (param_1 == 0x2e)) || (param_1 == 7)) || (param_1 == 0x7f)) {
          puVar2 = *(undefined4 **)((int)this + 0x40);
          if (puVar2[0x19] != 0) {
            *puVar2 = 0;
            iVar5 = *(int *)(**(int **)(DAT_0065b5cc + 300) +
                            *(int *)(puVar2[3] + *(int *)(puVar2[0x19] + 0xbc) * 4) * 4);
            *(undefined1 *)(iVar5 + 0x9c) = 1;
            *(undefined1 *)(iVar5 + 100) = 1;
            FUN_00591070("DETAIL","Deleted email \'%s\'");
          }
        }
        *(undefined1 *)((int)this + 0x14) = 0;
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_8 = 0;
        FUN_004b49d0(*(void **)((int)this + 0x40));
        local_8 = 0xffffffff;
        FUN_004025a0(local_24);
        FUN_00546020((int)this);
        uVar6 = FUN_0042d280(*(int **)((int)this + 0x2c));
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      if (((param_1 == 0x17) || (param_1 == 0x2e)) || (param_1 == 0x7f)) {
        *(undefined1 *)((int)this + 0x14) = 1;
        FUN_00546020((int)this);
        uVar6 = FUN_0042d280(*(int **)((int)this + 0x2c));
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
    }
    if (param_1 == 0x8c) {
      FUN_0042d130(this_00,0);
      *(undefined4 *)((int)this + 0x18) = 0;
LAB_00545f74:
      FUN_00546020((int)this);
LAB_00545f7b:
      iVar5 = *(int *)((int)this + 0x1c);
      pvVar4 = (void *)FUN_00402f60();
      FUN_00558a20(pvVar4,iVar5);
    }
    else {
      if (param_1 == 0x1d) {
        if ((char)this_00[0x30] == '\0') {
          this_00[0x2f] = this_00[0x2f] + 1;
          uVar3 = (this_00[0x38] - this_00[0x37]) / 0x18;
          if (uVar3 <= (uint)this_00[0x2f]) {
            this_00[0x2f] = uVar3 - 1;
          }
          FUN_0042cf40(this_00);
        }
        goto LAB_00545f7b;
      }
      if (param_1 == 0x1c) {
        if ((char)this_00[0x30] == '\0') {
          piVar1 = this_00 + 0x2f;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            this_00[0x2f] = 0;
          }
          FUN_0042cf40(this_00);
        }
        goto LAB_00545f7b;
      }
      if ((((param_1 == 0xa4) || (param_1 == 10)) || (param_1 == 0x23)) &&
         ((char)this_00[0x30] == '\0')) {
        *(undefined4 *)((int)this + 0x18) = 0;
        FUN_0042d130(this_00,1);
        goto LAB_00545f74;
      }
    }
    iVar5 = *(int *)((int)this + 0x18);
    if (iVar5 == 1) {
      bVar7 = param_1 == 0x8e;
      goto LAB_00545d09;
    }
    if ((iVar5 != 2) || (param_1 != 0x84)) goto LAB_00545fe0;
    FUN_0042d130(*(void **)((int)this + 0x2c),0);
    pvVar4 = *(void **)((int)this + 0x40);
    *(undefined4 *)(*(int *)((int)pvVar4 + 4) + 0x18) = 1;
    FUN_004b56a0(pvVar4,*(int **)(DAT_0065b5cc + 300));
  }
  iVar5 = *(int *)((int)this + 0x1c);
  pvVar4 = (void *)FUN_00402f60();
  iVar5 = FUN_00558a20(pvVar4,iVar5);
LAB_00545fe0:
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}


void __fastcall FUN_00546020(int param_1)

{
  byte *in_stack_ffffffd4;
  Color3B local_7 [3];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    cocos2d::Color3B::Color3B(local_7,0x80,0x80,'\0');
    in_stack_ffffffd4 = (byte *)((uint)in_stack_ffffffd4 & 0xffffff00);
    FUN_00402690(&stack0xffffffd4,"`%Press `$D`%EL again to delete email",0x25);
    FUN_0042dec0(*(void **)(param_1 + 0x2c),in_stack_ffffffd4);
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 100) == 0) {
    cocos2d::Color3B::Color3B(local_7,'\0','\0',0xff);
    FUN_00591e00(&stack0xffffffd4,"CMD> `%%%s%c");
    FUN_0042dec0(*(void **)(param_1 + 0x2c),in_stack_ffffffd4);
  }
  return;
}


void __thiscall FUN_005460e0(void *this,byte *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff80;
  uint local_58;
  int local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [3];
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c66f0;
  local_10 = ExceptionList;
  local_20[3] = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  local_8 = 1;
  FUN_004024e0(local_44,&param_1);
  local_8._0_1_ = 2;
  uVar14 = 0;
  iVar13 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar13 != iVar13) {
    iVar13 = 0;
    do {
      FUN_00403640(local_44,&DAT_005e7468,1);
      pbVar5 = in_stack_0000001c + iVar13;
      pbVar7 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar7 = *(byte **)pbVar5;
      }
      FUN_00403640(local_44,pbVar7,*(uint *)(pbVar5 + 0x10));
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x18;
    } while (uVar14 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_20[1] = 0;
  local_20[2] = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&PTR_005ce008,0);
  pvVar10 = *(void **)((int)this + 0x2c);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff80,local_2c);
  FUN_0042d530(pvVar10,*(uint *)((int)pvVar10 + 0x20),in_stack_ffffff80);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_20[2]) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_20[2] + 1U) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
LAB_00546206:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  FUN_0042de40(*(void **)((int)this + 0x2c),"`!CMD>`2 %s");
  local_20[1] = 0;
  local_20[2] = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&PTR_005ce008,0);
  pvVar10 = *(void **)((int)this + 0x2c);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff80,local_2c);
  FUN_0042d530(pvVar10,*(uint *)((int)pvVar10 + 0x20),in_stack_ffffff80);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_20[2]) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_20[2] + 1U) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  iVar13 = *(int *)((int)this + 0x44);
  local_58 = 0;
  iVar9 = *(int *)((int)this + 0x48) - iVar13;
  iVar1 = iVar9 >> 0x1f;
  if (iVar9 / 0x78 + iVar1 != iVar1) {
    local_48 = 0;
    do {
      pbVar7 = (byte *)(iVar13 + local_48);
      ppbVar6 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar6 = (byte **)param_1;
      }
      pbVar5 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar5 = *(byte **)pbVar7;
      }
      uVar14 = FUN_004031f0(pbVar5,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar6,in_stack_00000014);
      if ((char)uVar14 == '\0') {
        pbVar7 = (byte *)FUN_00591e00((undefined1 *)local_2c,"%s.%s");
        bVar4 = true;
        ppbVar6 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar6 = (byte **)param_1;
        }
        pbVar5 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar5 = *(byte **)pbVar7;
        }
        uVar14 = FUN_004031f0(pbVar5,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar6,in_stack_00000014);
        if ((char)uVar14 != '\0') goto LAB_0054636f;
        bVar2 = false;
      }
      else {
LAB_0054636f:
        bVar2 = true;
      }
      if ((bVar4) && (bVar4 = false, 0xf < (uint)local_20[2])) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_20[2] + 1U) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00546206;
        FUN_005adb3f(pvVar10);
      }
      if (bVar2) {
        FUN_0042b900(local_20,(int *)&stack0x0000001c);
        local_8._0_1_ = 5;
        piVar12 = *(int **)(*(int *)((int)this + 0x44) + 0x74 + local_58 * 0x78);
        if (piVar12 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar12 + 8))();
        FUN_004025a0(local_20);
        goto LAB_00546543;
      }
      iVar13 = *(int *)((int)this + 0x44);
      local_58 = local_58 + 1;
      local_48 = local_48 + 0x78;
    } while (local_58 < (uint)((*(int *)((int)this + 0x48) - iVar13) / 0x78));
  }
  ppbVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar6 = (byte **)param_1;
  }
  uVar14 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,&DAT_00620618,4);
  if ((char)uVar14 == '\0') {
    local_20[1] = 0;
    local_20[2] = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"Unknown command.",0x10);
    pvVar10 = *(void **)((int)this + 0x2c);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff80,local_2c);
    FUN_0042d530(pvVar10,*(uint *)((int)pvVar10 + 0x20),in_stack_ffffff80);
    local_8._0_1_ = 2;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 2;
    if ((uint)local_20[2] < 0x10) goto LAB_005464a6;
    pvVar10 = local_2c[0];
    if ((0xfff < local_20[2] + 1U) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
    piVar12 = *(int **)((int)this + 0x2c);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      pvVar10 = (void *)((uint)in_stack_ffffff80 & 0xffffff00);
      FUN_00402690(&stack0xffffff80,"`!V`%entarii VT-OS `7system help:",0x21);
      FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar10);
      pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
      FUN_00402690(&stack0xffffff80," `%DIR:`7 list files",0x14);
      FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar10);
      pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
      FUN_00402690(&stack0xffffff80," `%VIEW [filename]:`7 view file contents",0x28);
      FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar10);
      pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
      FUN_00402690(&stack0xffffff80," `%type command name to execute it",0x22);
      FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar10);
      piVar12 = *(int **)((int)this + 0x2c);
    }
    else {
      uVar14 = 0;
      iVar9 = *(int *)((int)this + 0x48) - iVar13;
      iVar1 = iVar9 >> 0x1f;
      uVar3 = (undefined1)local_8;
      if (iVar9 / 0x78 + iVar1 != iVar1) {
        local_48 = 0;
        do {
          pbVar7 = (byte *)(local_48 + iVar13);
          pbVar5 = in_stack_0000001c;
          if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
            pbVar5 = *(byte **)in_stack_0000001c;
          }
          pbVar11 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar11 = *(byte **)pbVar7;
          }
          uVar8 = FUN_004031f0(pbVar11,*(uint *)(pbVar7 + 0x10),pbVar5,
                               *(uint *)(in_stack_0000001c + 0x10));
          if ((char)uVar8 != '\0') {
            FUN_0042b900(local_20,(int *)&stack0x0000001c);
            local_8._0_1_ = 6;
            piVar12 = *(int **)(*(int *)((int)this + 0x44) + 0x74 + uVar14 * 0x78);
            if (piVar12 == (int *)0x0) {
                    // WARNING: Subroutine does not return
              std::_Xbad_function_call();
            }
            (**(code **)(*piVar12 + 8))();
            local_8._0_1_ = 2;
            FUN_004025a0(local_20);
            piVar12 = *(int **)((int)this + 0x2c);
            goto LAB_0054653e;
          }
          uVar14 = uVar14 + 1;
          local_48 = local_48 + 0x78;
          uVar3 = (undefined1)local_8;
        } while (uVar14 < (uint)((*(int *)((int)this + 0x48) - iVar13) / 0x78));
      }
LAB_005464a6:
      local_8._0_1_ = uVar3;
      piVar12 = *(int **)((int)this + 0x2c);
    }
  }
LAB_0054653e:
  FUN_0042d280(piVar12);
LAB_00546543:
  if (0xf < local_30) {
    pvVar10 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar10 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_00546575;
    FUN_005adb3f(pvVar10);
  }
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  if (0xf < in_stack_00000018) {
    pbVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar7 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar7))) {
LAB_00546575:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_20[3] ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00546740(int param_1)

{
  FUN_00546020(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x2c));
  return;
}


void __thiscall FUN_00546760(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_1);
  FUN_0042ddb0(*(void **)((int)this + 0x2c),in_stack_ffffffcc);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005467f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  iVar2 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x78 + iVar1 != iVar1) {
    do {
      FUN_0042de40(*(void **)(param_1 + 0x2c)," `%c%s.%s");
      local_14 = local_14 + 1;
    } while (local_14 < (uint)((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) / 0x78));
  }
  FUN_004b65c0(*(int *)(param_1 + 0x40));
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00546900(void *this,char param_1,undefined4 *param_2,int param_3)

{
  uint ***pppuVar1;
  uint uVar2;
  int iVar3;
  uint ****ppppuVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint ****ppppuVar9;
  uint ****ppppuVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 *in_stack_ffffff2c;
  undefined1 auStack_bc [24];
  undefined **local_a4;
  undefined1 *local_a0;
  undefined4 *in_stack_ffffff6c;
  void *pvVar16;
  undefined1 *local_68;
  uint ***local_64;
  int local_60;
  uint local_58;
  uint ***local_54;
  uint ***local_50;
  undefined1 *local_4c;
  char local_45;
  uint ***local_44 [4];
  int local_34;
  uint local_30;
  uint ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c6788;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 != '\0') {
    pvVar16 = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
    local_a0 = (undefined1 *)0x54695f;
    FUN_00402690(&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",0x24);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    local_a0 = (undefined1 *)0x546989;
    FUN_00402690(&stack0xffffff6c,"`3VIEW [filename]`2: view the contents of a file",0x30);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
    goto LAB_005470ca;
  }
  iVar3 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar3 == iVar3) {
    FUN_00546900(this,'\x01',(undefined4 *)0x0,0);
    goto LAB_005470ca;
  }
  FUN_004024e0(&stack0xffffff6c,param_2);
  FUN_00592d70(&local_64,'.',in_stack_ffffff6c);
  pcVar13 = toupper_exref;
  local_8 = 1;
  pppuVar1 = (uint ***)local_64[5];
  ppppuVar10 = (uint ****)local_64;
  if ((uint ***)0xf < pppuVar1) {
    ppppuVar10 = (uint ****)*local_64;
  }
  local_54 = local_64;
  if ((uint ***)0xf < pppuVar1) {
    local_54 = (uint ***)*local_64;
  }
  ppppuVar4 = (uint ****)local_64;
  if ((uint ***)0xf < pppuVar1) {
    ppppuVar4 = (uint ****)*local_64;
  }
  FUN_00413ec0(&local_4c,toupper_exref,(char *)ppppuVar4,(char *)((int)local_64[4] + (int)local_54),
               (undefined1 *)ppppuVar10);
  local_45 = '\0';
  local_54 = (uint ***)0x0;
  iVar7 = *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44);
  iVar3 = iVar7 >> 0x1f;
  ppppuVar10 = (uint ****)local_64;
  if (iVar7 / 0x78 + iVar3 == iVar3) {
LAB_00546d21:
    local_58 = 0;
    if (*(int *)(*(int *)((int)this + 0x40) + 0x78) - *(int *)(*(int *)((int)this + 0x40) + 0x74) >>
        2 != 0) {
      do {
        FUN_004024e0(local_2c,ppppuVar10);
        local_8 = 3;
        FUN_00403640(local_2c,&DAT_005e435c,1);
        ppppuVar10 = (uint ****)(local_64 + 6);
        if ((uint ***)0xf < local_64[0xb]) {
          ppppuVar10 = (uint ****)local_64[6];
        }
        FUN_00403640(local_2c,ppppuVar10,(uint)local_64[10]);
        local_54 = local_64;
        ppppuVar10 = (uint ****)local_64;
        if ((uint ***)0xf < local_64[5]) {
          local_54 = (uint ***)*local_64;
          ppppuVar10 = (uint ****)*local_64;
        }
        ppppuVar4 = (uint ****)local_64;
        if ((uint ***)0xf < local_64[5]) {
          ppppuVar4 = (uint ****)*local_64;
        }
        puVar14 = (undefined1 *)0x0;
        puVar11 = (undefined1 *)(((int)local_64[4] + (int)ppppuVar10) - (int)ppppuVar4);
        if ((uint ****)((int)local_64[4] + (int)ppppuVar10) < ppppuVar4) {
          puVar11 = (undefined1 *)0x0;
        }
        local_50 = (uint ***)ppppuVar4;
        local_4c = puVar11;
        if (puVar11 != (undefined1 *)0x0) {
          do {
            iVar3 = tolower((int)(char)puVar14[(int)ppppuVar4]);
            *(char *)((int)local_54 + (int)puVar14) = (char)iVar3;
            puVar14 = puVar14 + 1;
          } while (puVar14 != puVar11);
        }
        uVar2 = local_58;
        ppppuVar10 = (uint ****)local_64;
        local_4c = *(undefined1 **)(*(int *)((int)this + 0x40) + 0x74);
        iVar3 = *(int *)(local_4c + local_58 * 4);
        ppppuVar4 = (uint ****)local_64;
        if ((uint ***)0xf < local_64[5]) {
          ppppuVar4 = (uint ****)*local_64;
        }
        pbVar12 = (byte *)(iVar3 + 4);
        if (0xf < *(uint *)(iVar3 + 0x18)) {
          pbVar12 = *(byte **)(iVar3 + 4);
        }
        uVar5 = FUN_004031f0(pbVar12,*(uint *)(iVar3 + 0x14),(byte *)ppppuVar4,(uint)local_64[4]);
        uVar15 = local_58;
        if ((char)uVar5 != '\0') {
          local_45 = '\x01';
          if (**(int **)(local_4c + uVar2 * 4) == 0) {
            FUN_004024e0(local_44,*(int **)(local_4c + uVar2 * 4) + 1);
            local_8 = 4;
            local_50 = (uint ***)local_44;
            if (0xf < local_30) {
              local_50 = local_44[0];
            }
            ppppuVar10 = local_44;
            if (0xf < local_30) {
              ppppuVar10 = (uint ****)local_44[0];
            }
            iVar7 = (local_34 + (int)local_50) - (int)ppppuVar10;
            iVar3 = 0;
            if ((uint ****)(local_34 + (int)local_50) < ppppuVar10) {
              iVar7 = 0;
            }
            if (iVar7 != 0) {
              do {
                iVar6 = toupper((int)*(char *)(iVar3 + (int)ppppuVar10));
                *(char *)(iVar3 + (int)local_50) = (char)iVar6;
                iVar3 = iVar3 + 1;
              } while (iVar3 != iVar7);
            }
            FUN_00403640(local_44,&DAT_006212e4,4);
            local_68 = (undefined1 *)&local_a4;
            local_a4 = std::_Func_impl_no_alloc<>::vftable;
            local_a0 = &LAB_004b4a50;
            local_4c = auStack_bc;
            local_8 = 5;
            FUN_004024e0(auStack_bc,local_44);
            uVar15 = local_58;
            local_8 = 6;
            FUN_004024e0(&stack0xffffff2c,
                         (undefined4 *)
                         (*(int *)(*(int *)(*(int *)((int)this + 0x40) + 0x74) + local_58 * 4) +
                         0x1c));
            local_8 = 4;
            FUN_0042bdf0(*(void **)((int)this + 0x2c),in_stack_ffffff2c);
            local_8 = 3;
            *(undefined4 *)(*(int *)((int)this + 0x40) + 8) = 3;
            ppppuVar10 = (uint ****)local_64;
            if (0xf < local_30) {
              ppppuVar10 = (uint ****)local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (ppppuVar10 = (uint ****)local_44[0][-1],
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar10)))) {
LAB_00546d11:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(ppppuVar10);
              ppppuVar10 = (uint ****)local_64;
            }
          }
          else {
            local_54 = (uint ***)local_2c;
            if (0xf < local_18) {
              local_54 = local_2c[0];
            }
            ppppuVar10 = local_2c;
            if (0xf < local_18) {
              ppppuVar10 = (uint ****)local_2c[0];
            }
            local_4c = (undefined1 *)((local_1c + (int)local_54) - (int)ppppuVar10);
            puVar11 = (undefined1 *)0x0;
            if ((uint ****)(local_1c + (int)local_54) < ppppuVar10) {
              local_4c = (undefined1 *)0x0;
            }
            if (local_4c != (undefined1 *)0x0) {
              ppppuVar4 = (uint ****)((int)local_54 - (int)ppppuVar10);
              local_54 = (uint ***)ppppuVar4;
              do {
                iVar3 = toupper((int)*(char *)ppppuVar10);
                puVar11 = puVar11 + 1;
                *(char *)((int)ppppuVar4 + (int)ppppuVar10) = (char)iVar3;
                ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
              } while (puVar11 != local_4c);
            }
            pvVar16 = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
            local_a0 = (undefined1 *)0x546fde;
            FUN_00402690(&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",0x24);
            FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
            pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
            local_a0 = (undefined1 *)0x547008;
            FUN_00402690(&stack0xffffff6c,"`0** IMAGE FILE **",0x12);
            FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
            FUN_0042de40(*(void **)((int)this + 0x2c),"`3FILENAME: `0%s");
            in_stack_ffffff6c = (undefined4 *)0x547036;
            FUN_0042de40(*(void **)((int)this + 0x2c),"`3FILETYPE: `0.IMG");
            uVar15 = local_58;
            ppppuVar10 = (uint ****)local_64;
          }
        }
        local_8 = 1;
        if (0xf < local_18) {
          ppppuVar10 = (uint ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppuVar10 = (uint ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppuVar10)))) goto LAB_00546d11;
          FUN_005adb3f(ppppuVar10);
          ppppuVar10 = (uint ****)local_64;
        }
        local_58 = uVar15 + 1;
      } while (local_58 <
               (uint)(*(int *)(*(int *)((int)this + 0x40) + 0x78) -
                      *(int *)(*(int *)((int)this + 0x40) + 0x74) >> 2));
      if (local_45 != '\0') goto LAB_005470c2;
    }
    pvVar16 = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
    local_a0 = (undefined1 *)0x5470ba;
    FUN_00402690(&stack0xffffff6c,"`$file not found",0x10);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
  }
  else {
    local_58 = 0;
    do {
      pbVar12 = (byte *)(*(int *)((int)this + 0x44) + local_58);
      ppppuVar4 = ppppuVar10;
      if ((uint ***)0xf < ppppuVar10[5]) {
        ppppuVar4 = (uint ****)*ppppuVar10;
      }
      pbVar8 = pbVar12;
      if (0xf < *(uint *)(pbVar12 + 0x14)) {
        pbVar8 = *(byte **)pbVar12;
      }
      local_50 = (uint ***)ppppuVar10;
      uVar2 = FUN_004031f0(pbVar8,*(uint *)(pbVar12 + 0x10),(byte *)ppppuVar4,(uint)ppppuVar10[4]);
      if (((char)uVar2 != '\0') && (1 < (uint)((local_60 - (int)local_50) / 0x18))) {
        ppppuVar9 = ppppuVar10 + 6;
        ppppuVar4 = ppppuVar9;
        local_50 = (uint ***)ppppuVar9;
        if ((uint ***)0xf < ppppuVar10[0xb]) {
          local_50 = *ppppuVar9;
          ppppuVar4 = (uint ****)*ppppuVar9;
        }
        if ((uint ***)0xf < ppppuVar10[0xb]) {
          ppppuVar9 = (uint ****)*ppppuVar9;
        }
        FUN_00413ec0(&local_4c,pcVar13,(char *)ppppuVar9,
                     (char *)((int)ppppuVar10[10] + (int)ppppuVar4),(undefined1 *)local_50);
        ppppuVar10 = (uint ****)local_64;
        ppppuVar4 = (uint ****)(local_64 + 6);
        ppppuVar9 = ppppuVar4;
        if ((uint ***)0xf < local_64[0xb]) {
          ppppuVar9 = (uint ****)*ppppuVar4;
        }
        local_50 = (uint ***)local_64[10];
        uVar2 = FUN_004031f0((byte *)ppppuVar9,(uint)local_50,&DAT_00621188,3);
        if (((char)uVar2 == '\0') ||
           (*(char *)(*(int *)((int)this + 0x44) + 0x48 + local_58) == '\0')) {
          if ((uint ***)0xf < ppppuVar10[0xb]) {
            ppppuVar4 = (uint ****)*ppppuVar4;
          }
          uVar2 = FUN_004031f0((byte *)ppppuVar4,(uint)local_50,&DAT_00621108,3);
          pcVar13 = toupper_exref;
          if (((char)uVar2 == '\0') ||
             (*(char *)(*(int *)((int)this + 0x44) + 0x48 + local_58) != '\0')) goto LAB_00546ce4;
        }
        local_45 = '\x01';
        FUN_004024e0(local_2c,ppppuVar10);
        local_8 = 2;
        FUN_00403640(local_2c,&DAT_005e435c,1);
        ppppuVar10 = (uint ****)(local_64 + 6);
        if ((uint ***)0xf < local_64[0xb]) {
          ppppuVar10 = (uint ****)local_64[6];
        }
        FUN_00403640(local_2c,ppppuVar10,(uint)local_64[10]);
        pcVar13 = toupper_exref;
        ppppuVar10 = local_2c;
        if (0xf < local_18) {
          ppppuVar10 = (uint ****)local_2c[0];
        }
        ppppuVar4 = local_2c;
        if (0xf < local_18) {
          ppppuVar4 = (uint ****)local_2c[0];
        }
        FUN_00413ec0(&local_68,toupper_exref,(char *)ppppuVar4,(char *)(local_1c + (int)ppppuVar10),
                     (undefined1 *)ppppuVar10);
        pvVar16 = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
        local_a0 = (undefined1 *)0x546bef;
        FUN_00402690(&stack0xffffff6c,"`3File Viewer v1.89 by Ventarii Corp",0x24);
        FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
        pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
        local_a0 = (undefined1 *)0x546c19;
        FUN_00402690(&stack0xffffff6c,"`0** BINARY FILE **",0x13);
        FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar16);
        FUN_0042de40(*(void **)((int)this + 0x2c),"`3FILENAME: `0%s");
        in_stack_ffffff6c = *(undefined4 **)((int)this + 0x2c);
        FUN_0042de40(in_stack_ffffff6c,"`3FILETYPE: `%s");
        FUN_0042de40(*(void **)((int)this + 0x2c),"`3MANUFAC.: `0%s");
        FUN_0042de40(*(void **)((int)this + 0x2c),"`3VERSION : `0%s");
        local_8 = 1;
        ppppuVar10 = (uint ****)local_64;
        if (0xf < local_18) {
          ppppuVar10 = (uint ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppuVar10 = (uint ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppuVar10)))) goto LAB_00546d11;
          FUN_005adb3f(ppppuVar10);
          ppppuVar10 = (uint ****)local_64;
        }
      }
LAB_00546ce4:
      local_54 = (uint ***)((int)local_54 + 1);
      local_58 = local_58 + 0x78;
    } while (local_54 <
             (uint ****)((*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44)) / 0x78));
    if (local_45 == '\0') goto LAB_00546d21;
  }
LAB_005470c2:
  FUN_004025a0((int *)&local_64);
LAB_005470ca:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005470f0(void *this,uint param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte ***pppbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte ****ppppbVar10;
  void *pvVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *in_stack_ffffff90;
  void *pvVar15;
  byte ***local_48 [4];
  uint local_38;
  uint local_34;
  byte *local_30 [3];
  byte *local_24;
  byte *local_20;
  uint local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if ((char)param_1 == '\0') {
    iVar5 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar5 == iVar5) {
      FUN_005470f0(this,1,(undefined4 *)0x0,0);
    }
    else {
      FUN_004024e0(&stack0xffffff90,param_2);
      FUN_00592d70(local_30,'.',in_stack_ffffff90);
      local_8 = CONCAT31(local_8._1_3_,1);
      pbVar8 = local_30[0];
      pbVar14 = local_30[0];
      if (0xf < *(uint *)(local_30[0] + 0x14)) {
        pbVar14 = *(byte **)local_30[0];
        pbVar8 = *(byte **)local_30[0];
      }
      pbVar3 = local_30[0];
      if (0xf < *(uint *)(local_30[0] + 0x14)) {
        pbVar3 = *(byte **)local_30[0];
      }
      FUN_00413ec0(&param_1,toupper_exref,(char *)pbVar3,
                   (char *)(pbVar8 + *(int *)(local_30[0] + 0x10)),pbVar14);
      local_1c = 0;
      param_1 = param_1 & 0xffffff;
      iVar5 = *(int *)((int)local_14 + 0x44);
      iVar9 = *(int *)((int)local_14 + 0x48) - iVar5;
      iVar12 = iVar9 >> 0x1f;
      pbVar14 = local_30[0];
      if (iVar9 / 0x78 + iVar12 != iVar12) {
        local_18 = 0;
        do {
          pbVar8 = (byte *)(local_18 + iVar5);
          pbVar3 = pbVar14;
          if (0xf < *(uint *)(pbVar14 + 0x14)) {
            pbVar3 = *(byte **)pbVar14;
          }
          pbVar7 = pbVar8;
          if (0xf < *(uint *)(pbVar8 + 0x14)) {
            pbVar7 = *(byte **)pbVar8;
          }
          uVar4 = FUN_004031f0(pbVar7,*(uint *)(pbVar8 + 0x10),pbVar3,*(uint *)(pbVar14 + 0x10));
          if ((char)uVar4 != '\0') {
            pbVar8 = pbVar14 + 0x18;
            pbVar3 = pbVar8;
            local_20 = pbVar8;
            if (0xf < *(uint *)(pbVar14 + 0x2c)) {
              local_20 = *(byte **)pbVar8;
              pbVar3 = *(byte **)pbVar8;
            }
            if (0xf < *(uint *)(pbVar14 + 0x2c)) {
              pbVar8 = *(byte **)pbVar8;
            }
            iVar5 = (int)(pbVar3 + *(int *)(pbVar14 + 0x28)) - (int)pbVar8;
            iVar12 = 0;
            if (pbVar3 + *(int *)(pbVar14 + 0x28) < pbVar8) {
              iVar5 = 0;
            }
            local_24 = (byte *)iVar5;
            if (iVar5 != 0) {
              do {
                iVar9 = toupper((int)(char)pbVar8[iVar12]);
                local_20[iVar12] = (byte)iVar9;
                iVar12 = iVar12 + 1;
                pbVar14 = local_30[0];
              } while (iVar12 != iVar5);
            }
            uVar4 = *(uint *)(pbVar14 + 0x2c);
            pbVar8 = pbVar14 + 0x18;
            pbVar3 = pbVar8;
            if (0xf < uVar4) {
              pbVar3 = *(byte **)pbVar8;
            }
            local_24 = *(byte **)(pbVar14 + 0x28);
            uVar6 = FUN_004031f0(pbVar3,(uint)local_24,&DAT_00621188,3);
            if (((char)uVar6 == '\0') ||
               (*(char *)(*(int *)((int)local_14 + 0x44) + 0x48 + local_18) == '\0')) {
              if (0xf < uVar4) {
                pbVar8 = *(byte **)pbVar8;
              }
              uVar4 = FUN_004031f0(pbVar8,(uint)local_24,&DAT_00621108,3);
              if (((char)uVar4 == '\0') ||
                 (*(char *)(*(int *)((int)local_14 + 0x44) + 0x48 + local_18) != '\0'))
              goto LAB_00547349;
            }
            param_1 = CONCAT13(1,(undefined3)param_1);
            in_stack_ffffff90 = (undefined4 *)((uint)in_stack_ffffff90 & 0xffffff00);
            FUN_00402690(&stack0xffffff90,"`$cannot delete system file",0x1b);
            FUN_0042ddb0(*(void **)((int)local_14 + 0x2c),in_stack_ffffff90);
            pbVar14 = local_30[0];
          }
LAB_00547349:
          local_1c = local_1c + 1;
          local_18 = local_18 + 0x78;
          iVar5 = *(int *)((int)local_14 + 0x44);
        } while (local_1c < (uint)((*(int *)((int)local_14 + 0x48) - iVar5) / 0x78));
      }
      pbVar8 = pbVar14;
      local_20 = pbVar14;
      if (0xf < *(uint *)(pbVar14 + 0x14)) {
        local_20 = *(byte **)pbVar14;
        pbVar8 = *(byte **)pbVar14;
      }
      pbVar3 = pbVar14;
      if (0xf < *(uint *)(pbVar14 + 0x14)) {
        pbVar3 = *(byte **)pbVar14;
      }
      iVar5 = (int)(pbVar8 + *(int *)(pbVar14 + 0x10)) - (int)pbVar3;
      iVar12 = 0;
      if (pbVar8 + *(int *)(pbVar14 + 0x10) < pbVar3) {
        iVar5 = 0;
      }
      local_24 = (byte *)iVar5;
      if (iVar5 != 0) {
        do {
          iVar9 = tolower((int)(char)pbVar3[iVar12]);
          local_20[iVar12] = (byte)iVar9;
          iVar12 = iVar12 + 1;
          pbVar14 = local_30[0];
        } while (iVar12 != iVar5);
      }
      pbVar8 = pbVar14 + 0x18;
      pbVar3 = pbVar8;
      local_20 = pbVar8;
      if (0xf < *(uint *)(pbVar14 + 0x2c)) {
        local_20 = *(byte **)pbVar8;
        pbVar3 = *(byte **)pbVar8;
      }
      if (0xf < *(uint *)(pbVar14 + 0x2c)) {
        pbVar8 = *(byte **)pbVar8;
      }
      pbVar7 = pbVar3 + *(int *)(pbVar14 + 0x28) + -(int)pbVar8;
      pbVar13 = (byte *)0x0;
      if (pbVar3 + *(int *)(pbVar14 + 0x28) < pbVar8) {
        pbVar7 = (byte *)0x0;
      }
      local_24 = pbVar7;
      if (pbVar7 != (byte *)0x0) {
        do {
          iVar5 = toupper((int)(char)pbVar13[(int)pbVar8]);
          pbVar13[(int)local_20] = (byte)iVar5;
          pbVar13 = pbVar13 + 1;
          pbVar14 = local_30[0];
        } while (pbVar13 != pbVar7);
      }
      local_20 = (byte *)0x0;
      iVar5 = *(int *)((int)local_14 + 0x40);
      if (*(int *)(iVar5 + 0x78) - *(int *)(iVar5 + 0x74) >> 2 != 0) {
        do {
          local_1c = (int)local_20 * 4;
          iVar12 = *(int *)(*(int *)(iVar5 + 0x74) + local_1c);
          pbVar8 = pbVar14;
          if (0xf < *(uint *)(pbVar14 + 0x14)) {
            pbVar8 = *(byte **)pbVar14;
          }
          pbVar3 = (byte *)(iVar12 + 4);
          if (0xf < *(uint *)(iVar12 + 0x18)) {
            pbVar3 = *(byte **)(iVar12 + 4);
          }
          uVar4 = FUN_004031f0(pbVar3,*(uint *)(iVar12 + 0x14),pbVar8,*(uint *)(pbVar14 + 0x10));
          if ((char)uVar4 != '\0') {
            FUN_004024e0(local_48,(undefined4 *)(pbVar14 + 0x18));
            uVar4 = local_34;
            pppbVar2 = local_48[0];
            iVar12 = 0;
            do {
              pbVar14 = (&PTR_DAT_005de0a4)[iVar12];
              local_24 = pbVar14 + 1;
              pbVar8 = pbVar14;
              do {
                bVar1 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (bVar1 != 0);
              ppppbVar10 = local_48;
              if (0xf < uVar4) {
                ppppbVar10 = (byte ****)pppbVar2;
              }
              uVar6 = FUN_004031f0((byte *)ppppbVar10,local_38,pbVar14,(int)pbVar8 - (int)local_24);
              if ((char)uVar6 != '\0') {
                if (uVar4 < 0x10) goto LAB_00547541;
                ppppbVar10 = (byte ****)pppbVar2;
                if ((0xfff < uVar4 + 1) &&
                   (ppppbVar10 = (byte ****)pppbVar2[-1],
                   (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar10))))
                goto LAB_005475d8;
                FUN_005adb3f(ppppbVar10);
                goto LAB_00547541;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 2);
            if (0xf < uVar4) {
              ppppbVar10 = (byte ****)pppbVar2;
              if ((0xfff < uVar4 + 1) &&
                 (ppppbVar10 = (byte ****)pppbVar2[-1],
                 (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar10)))) {
LAB_005475d8:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(ppppbVar10);
            }
            iVar12 = 2;
LAB_00547541:
            pvVar11 = local_14;
            local_48[0] = (byte ***)((uint)local_48[0] & 0xffffff00);
            local_34 = 0xf;
            iVar5 = *(int *)((int)local_14 + 0x40);
            local_38 = 0;
            pbVar14 = local_30[0];
            if (iVar12 == **(int **)(local_1c + *(int *)(iVar5 + 0x74))) {
              pvVar15 = (void *)((uint)in_stack_ffffff90 & 0xffffff00);
              FUN_00402690(&stack0xffffff90,"`$file is write-protected",0x19);
              pvVar11 = *(void **)((int)pvVar11 + 0x2c);
              goto LAB_005475af;
            }
          }
          local_20 = local_20 + 1;
        } while (local_20 < (byte *)(*(int *)(iVar5 + 0x78) - *(int *)(iVar5 + 0x74) >> 2));
      }
      pvVar11 = local_14;
      if (param_1._3_1_ == '\0') {
        pvVar15 = (void *)((uint)in_stack_ffffff90 & 0xffffff00);
        FUN_00402690(&stack0xffffff90,"`$file not found",0x10);
        pvVar11 = *(void **)((int)pvVar11 + 0x2c);
LAB_005475af:
        FUN_0042ddb0(pvVar11,pvVar15);
      }
      FUN_004025a0((int *)local_30);
    }
  }
  else {
    pvVar11 = (void *)((uint)in_stack_ffffff90 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"`3DEL [filename]`2: delete a file",0x21);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar11);
  }
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00547610(void *this,char param_1)

{
  uint in_stack_ffffffcc;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    FUN_004b4a20(*(void **)((int)this + 0x40));
  }
  else {
    pvVar1 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`0NEWS.EXE`3 by Tribalt Precision",0x21);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`3Version: 2.86",0xf);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`3Usage:",8);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`0 NEWS.EXE",0xb);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00547720(void *this,char param_1)

{
  uint in_stack_ffffffcc;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    FUN_004b49d0(*(void **)((int)this + 0x40));
  }
  else {
    pvVar1 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`0MAIL.EXE`3 by Tribalt Precision",0x21);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`3Version: 3.02",0xf);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`3Usage:",8);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
    pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`0 MAIL.EXE",0xb);
    FUN_0042ddb0(*(void **)((int)this + 0x2c),pvVar1);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


undefined1 * FUN_00547830(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"booting",7);
  return param_1;
}


void __fastcall FUN_00547860(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    if (piVar1 != piVar2) {
      do {
        FUN_005457a0(piVar1);
        piVar1 = piVar1 + 0x1e;
      } while (piVar1 != piVar2);
      piVar1 = (int *)*param_1;
    }
    piVar2 = piVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)piVar1) / 0x78) * 0x78)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_005478f0(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1e) {
    FUN_005457a0(param_1);
  }
  return;
}


void FUN_00547920(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x78)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void __thiscall FUN_00547970(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_33 = *(undefined1 *)((int)param_1 + 5);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00547a10(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = param_1[1];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00547aa0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00547b40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c6836;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar5 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  param_3[4] = 0;
  param_3[5] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar5 = param_3[7];
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  param_2[6] = param_3[6];
  param_2[7] = uVar5;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 6) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  uVar5 = param_3[0xd];
  uVar2 = param_3[0xe];
  uVar3 = param_3[0xf];
  param_2[0xc] = param_3[0xc];
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  param_3[0x10] = 0;
  param_3[0x11] = 0xf;
  *(undefined1 *)(param_3 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
  param_2[0x1d] = 0;
  local_8 = 3;
  uStack_7 = 0;
  piVar1 = (int *)param_3[0x1d];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_3 + 0x14) {
      uVar5 = (**(code **)(*piVar1 + 4))(param_2 + 0x14,uVar4);
      param_2[0x1d] = uVar5;
      _local_8 = CONCAT31(uStack_7,4);
      piVar1 = (int *)param_3[0x1d];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_3 + 0x14);
    }
    else {
      param_2[0x1d] = piVar1;
    }
    param_3[0x1d] = 0;
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_00547c70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *this_00;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005c688e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)this;
  iVar2 = ((int)param_1 - iVar7) / 0x78;
  iVar3 = (*(int *)((int)this + 4) - iVar7) / 0x78;
  if (iVar3 == 0x2222222) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar4 = iVar3 + 1;
  uVar9 = (*(int *)((int)this + 8) - iVar7) / 0x78;
  uVar5 = uVar4;
  if ((uVar9 <= 0x2222222 - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar9 = uVar5 * 0x78;
  if (uVar5 < 0x2222223) {
    if (0xfff < uVar9) goto LAB_00547d3d;
    if (uVar9 == 0) {
      puVar12 = (undefined4 *)0x0;
      uVar8 = 0;
    }
    else {
      puVar12 = (undefined4 *)FUN_005adb0f(uVar9);
      uVar8 = extraout_ECX_00;
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_00547d3d:
    uVar6 = uVar9 + 0x23;
    if (uVar6 <= uVar9) {
      uVar6 = 0xffffffff;
    }
    iVar7 = FUN_005adb0f(uVar6);
    if (iVar7 == 0) goto LAB_00547d60;
    puVar12 = (undefined4 *)(iVar7 + 0x23U & 0xffffffe0);
    puVar12[-1] = iVar7;
    uVar8 = extraout_ECX;
  }
  local_8 = 0;
  uStack_7 = 0;
  FUN_00547b40(uVar8,puVar12 + iVar2 * 0x1e,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar1) {
    this_00 = puVar12;
    for (puVar13 = *(undefined4 **)this; local_8 = 1, puVar13 != puVar1; puVar13 = puVar13 + 0x1e) {
      FUN_004024e0(this_00,puVar13);
      local_8 = 2;
      FUN_004024e0(this_00 + 6,puVar13 + 6);
      local_8 = 3;
      FUN_004024e0(this_00 + 0xc,puVar13 + 0xc);
      *(undefined1 *)(this_00 + 0x12) = *(undefined1 *)(puVar13 + 0x12);
      this_00[0x1d] = 0;
      local_8 = 5;
      if ((undefined4 *)puVar13[0x1d] != (undefined4 *)0x0) {
        uVar8 = (*(code *)**(undefined4 **)puVar13[0x1d])(this_00 + 0x14);
        this_00[0x1d] = uVar8;
      }
      this_00 = this_00 + 0x1e;
    }
  }
  else {
    FUN_00547f30(this,*(undefined4 **)this,param_1,puVar12);
    FUN_00547f30(this,param_1,*(undefined4 **)((int)this + 4),puVar12 + iVar2 * 0x1e + 0x1e);
  }
  piVar10 = *(int **)this;
  if (piVar10 != (int *)0x0) {
    piVar11 = *(int **)((int)this + 4);
    if (piVar10 != piVar11) {
      do {
        FUN_005457a0(piVar10);
        piVar10 = piVar10 + 0x1e;
      } while (piVar10 != piVar11);
      piVar10 = *(int **)this;
    }
    piVar11 = piVar10;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)piVar10) / 0x78) * 0x78)) &&
       (piVar11 = (int *)piVar10[-1], 0x1f < (uint)((int)piVar10 + (-4 - (int)piVar11)))) {
LAB_00547d60:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar11);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)((int)this + 4) = puVar12 + uVar4 * 0x1e;
  *(undefined4 **)((int)this + 8) = puVar12 + uVar5 * 0x1e;
  ExceptionList = local_10;
  return *(int *)this + iVar2 * 0x78;
}


undefined4 * __thiscall
FUN_00547f30(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void **ppvVar1;
  void *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c68b8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x1e) {
    FUN_00547b40(this,param_3,param_1);
    param_3 = param_3 + 0x1e;
    ppvVar1 = ExceptionList;
    this = extraout_ECX;
  }
  ExceptionList = local_10;
  return param_3;
}


TypeDescriptor * FUN_00547fb0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_00547fc0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_00547fe0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00547ff0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}
