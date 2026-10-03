#include "../ois_server.exe.h"


void __fastcall FUN_0057c940(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c9820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_(param_1,8,2,~Vec2_exref);
  ExceptionList = local_10;
  return;
}


uint __thiscall FUN_0057c990(void *this,int param_1)

{
  switch(param_1) {
  case 0xc:
  case 0xd:
    *(undefined1 *)((int)this + 0x45c) = 1;
    break;
  case 0x1a:
  case 0x27:
    *(undefined4 *)((int)this + 0x44c) = 0xbf800000;
    return 1;
  case 0x1b:
  case 0x29:
    *(undefined4 *)((int)this + 0x44c) = 0x3f800000;
    return 1;
  case 0x1c:
  case 0x25:
    *(undefined4 *)((int)this + 0x450) = 0x3f800000;
    return 1;
  case 0x1d:
  case 0x2b:
    *(undefined4 *)((int)this + 0x450) = 0xbf800000;
    return 1;
  }
  return 0;
}


void __thiscall FUN_0057ca40(void *this,undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fStack_34;
  float fStack_30;
  void *apvStack_2c [5];
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c9849;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  switch(param_1) {
  case 7:
    if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
      FUN_004122b0();
      uVar4 = 7;
LAB_0057cdc8:
      FUN_0041c620(uVar4,0);
    }
    else {
      FUN_004deb20(*(int *)(DAT_0065b5cc + 0xd0));
    }
    goto LAB_0057cdd3;
  default:
    goto LAB_0057cddd;
  case 10:
  case 0x23:
  case 0xa4:
    if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
      FUN_004122b0();
      uVar4 = 0xf;
      goto LAB_0057cdc8;
    }
    FUN_004df2b0(*(int *)(DAT_0065b5cc + 0xd0));
    goto LAB_0057cdd3;
  case 0xc:
  case 0xd:
    *(undefined1 *)((int)this + 0x45c) = 0;
    goto LAB_0057cddd;
  case 0x1a:
  case 0x1b:
  case 0x27:
  case 0x29:
    *(undefined4 *)((int)this + 0x44c) = 0;
    break;
  case 0x1c:
  case 0x1d:
  case 0x25:
  case 0x2b:
    *(undefined4 *)((int)this + 0x450) = 0;
    break;
  case 0x1f:
  case 0x47:
  case 0x59:
    FUN_0052b090(*(int *)(DAT_0065b5cc + 0xd0),(double)*(byte *)((int)this + 0x45d));
    **(undefined1 **)((int)this + 0x288) = 1;
    break;
  case 0x20:
  case 0x49:
    FUN_0052b030(*(int *)(DAT_0065b5cc + 0xd0),(double)*(byte *)((int)this + 0x45d));
    **(undefined1 **)((int)this + 0x288) = 1;
    break;
  case 0x3b:
    FUN_0052b100(*(int *)(DAT_0065b5cc + 0xd0),(double)*(byte *)((int)this + 0x45d));
    *(undefined4 *)((int)this + 0x44c) = 0;
    *(undefined4 *)((int)this + 0x450) = 0;
    **(undefined1 **)((int)this + 0x288) = 1;
    break;
  case 0x7e:
    if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
      FUN_004122b0();
      uVar4 = 6;
      goto LAB_0057cdc8;
    }
    FUN_004dea70(*(int *)(DAT_0065b5cc + 0xd0));
LAB_0057cdd3:
    (**(code **)(*(int *)this + 0x294))(uVar1);
    goto LAB_0057cddd;
  case 0x8b:
    if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
      FUN_005777f0(this,&fStack_34,*(float *)((int)this + 0x4d4),*(float *)((int)this + 0x4d8));
      uStack_8 = 0;
      piVar2 = (int *)FUN_00591e00((undefined1 *)apvStack_2c,"Loc: %f, %f");
      FUN_00413230((void *)((int)this + 0x4e4),piVar2);
      if (0xf < uStack_18) {
        pvVar3 = apvStack_2c[0];
        if ((0xfff < uStack_18 + 1) &&
           (pvVar3 = *(void **)((int)apvStack_2c[0] + -4),
           0x1f < (uint)((int)apvStack_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      FUN_00591070("WORLD","Plotting point over: %f, %f");
      if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
        FUN_004122b0();
        FUN_0041c620(0x3a,(double)(DAT_00655098 + 1));
      }
      else {
        FUN_004e72a0(*(int *)(DAT_0065b5cc + 0xd0),(int)fStack_34,(int)fStack_30);
      }
      if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
        FUN_004122b0();
        uVar4 = 5;
        goto LAB_0057cdc8;
      }
      FUN_004deb90(*(void **)(DAT_0065b5cc + 0xd0),0);
      goto LAB_0057cdd3;
    }
LAB_0057cddd:
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0057ced0(int param_1)

{
  *(undefined1 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  return;
}


int __thiscall FUN_0057cef0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x28;
}


void __fastcall FUN_0057cf10(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0057d3b0((void *)*param_1,(void *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x14) * 0x14)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_0057cf90(void *param_1,void *param_2)

{
  FUN_0057d3b0(param_1,param_2);
  return;
}


undefined4 * FUN_0057cfb0(void *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  
  iVar3 = (int)DAT_0065b980 - (int)DAT_0065b97c >> 2;
  iVar8 = (int)param_1 - (int)DAT_0065b97c;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar3 + 1;
  uVar7 = (int)DAT_0065b984 - (int)DAT_0065b97c >> 2;
  uVar4 = uVar1;
  if ((uVar7 <= 0x3fffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0057d026;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0057d026:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    iVar3 = FUN_005adb0f(uVar5);
    if (iVar3 == 0) goto LAB_0057d10f;
    _Dst = (void *)(iVar3 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar3;
  }
  puVar2 = (undefined4 *)((int)_Dst + (iVar8 >> 2) * 4);
  *puVar2 = *param_2;
  if (param_1 == DAT_0065b980) {
    memmove(_Dst,DAT_0065b97c,(int)DAT_0065b980 - (int)DAT_0065b97c);
  }
  else {
    memmove(_Dst,DAT_0065b97c,(int)param_1 - (int)DAT_0065b97c);
    memmove(puVar2 + 1,param_1,(int)DAT_0065b980 - (int)param_1);
  }
  if (DAT_0065b97c != (void *)0x0) {
    pvVar6 = DAT_0065b97c;
    if ((0xfff < ((int)DAT_0065b984 - (int)DAT_0065b97c & 0xfffffffcU)) &&
       (pvVar6 = *(void **)((int)DAT_0065b97c + -4),
       0x1f < (uint)((int)DAT_0065b97c + (-4 - (int)pvVar6)))) {
LAB_0057d10f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  DAT_0065b97c = _Dst;
  DAT_0065b980 = (void *)((int)_Dst + uVar1 * 4);
  DAT_0065b984 = (void *)(uVar7 + (int)_Dst);
  return puVar2;
}


int __thiscall FUN_0057d120(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  void *pvVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar2 = (*(int *)((int)this + 4) - iVar5) / 0x14;
  if (iVar2 == 0xccccccc) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar2 + 1;
  uVar3 = (*(int *)((int)this + 8) - iVar5) / 0x14;
  uVar9 = uVar6;
  if ((uVar3 <= 0xccccccc - (uVar3 >> 1)) && (uVar9 = (uVar3 >> 1) + uVar3, uVar9 < uVar6)) {
    uVar9 = uVar6;
  }
  uVar6 = uVar9 * 0x14;
  if (uVar9 < 0xccccccd) {
    if (0xfff < uVar6) goto LAB_0057d1e4;
    if (uVar6 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)FUN_005adb0f(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_0057d1e4:
    uVar3 = uVar6 + 0x23;
    if (uVar3 <= uVar6) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_0057d207;
    pvVar7 = (void *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)((int)pvVar7 - 4) = iVar4;
  }
  local_8 = 0;
  iVar5 = (((int)param_1 - iVar5) / 0x14) * 0x14;
  _eh_vector_copy_constructor_iterator_
            ((void *)(iVar5 + (int)pvVar7),param_2,8,2,Vec2_exref,~Vec2_exref);
  *(undefined4 *)((int)pvVar7 + iVar5 + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
  pvVar1 = *(void **)((int)this + 4);
  if (param_1 == pvVar1) {
    pvVar10 = *(void **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pvVar8 = pvVar7;
    for (; pvVar10 != pvVar1; pvVar10 = (void *)((int)pvVar10 + 0x14)) {
      _eh_vector_copy_constructor_iterator_(pvVar8,pvVar10,8,2,Vec2_exref,~Vec2_exref);
      *(undefined4 *)((int)pvVar8 + 0x10) = *(undefined4 *)((int)pvVar10 + 0x10);
      pvVar8 = (void *)((int)pvVar8 + 0x14);
    }
    FUN_0057d3b0(pvVar8,pvVar8);
  }
  else {
    FUN_0057d420(*(void **)this,param_1,pvVar7);
    FUN_0057d420(param_1,*(void **)((int)this + 4),(void *)(iVar5 + (int)pvVar7 + 0x14));
  }
  if (*(void **)this != (void *)0x0) {
    FUN_0057d3b0(*(void **)this,*(void **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar10 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - *(int *)this) / 0x14) * 0x14)) &&
       (pvVar10 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar10)))) {
LAB_0057d207:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  *(void **)this = pvVar7;
  *(void **)((int)this + 4) = (void *)((int)pvVar7 + (iVar2 * 5 + 5) * 4);
  *(void **)((int)this + 8) = (void *)((int)pvVar7 + uVar9 * 0x14);
  ExceptionList = local_10;
  return *(int *)this + iVar5;
}


void __fastcall FUN_0057d3b0(void *param_1,void *param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0980;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = (void *)((int)param_1 + 0x14)) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(param_1,8,2,~Vec2_exref);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


void * FUN_0057d420(void *param_1,void *param_2,void *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c98a8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = (void *)((int)param_1 + 0x14)) {
    _eh_vector_copy_constructor_iterator_(param_3,param_1,8,2,Vec2_exref,~Vec2_exref);
    *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x14);
    ppvVar1 = ExceptionList;
  }
  FUN_0057d3b0(param_3,param_3);
  ExceptionList = local_10;
  return param_3;
}


void __fastcall FUN_0057d4c0(undefined4 *param_1)

{
  FUN_0057d3b0((void *)*param_1,(void *)param_1[1]);
  return;
}


Node * __thiscall FUN_0057d4d0(void *this,byte param_1)

{
  FUN_0057d500(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0057d500(Node *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_NewsTicker::vftable;
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x43c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x438) + uVar6 * 4) = 0;
      }
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x438);
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x43c) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x43c) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x42c);
  if (*(int *)(param_1 + 0x430) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x42c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x430) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x430) = iVar5;
  pvVar2 = *(void **)(param_1 + 0x438);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x440) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0057d6aa;
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x42c);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x434) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_0057d6aa:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0057d6c0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x43c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x438);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x43c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x43c) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x42c);
  if (*(int *)(param_1 + 0x430) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x42c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x430) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x430) = iVar2;
  return;
}


void __fastcall FUN_0057d770(Ref *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *in_stack_ffffff94;
  undefined *puVar8;
  int local_44;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  Ref *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c98e9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  bVar1 = false;
  local_30 = param_1;
  FUN_004b5070(*(void **)(DAT_0065b444 + 0xc),&local_44);
  local_8._0_1_ = 1;
  uVar6 = 0;
  iVar7 = local_40 - local_44 >> 0x1f;
  if ((local_40 - local_44) / 0x18 + iVar7 != iVar7) {
    iVar7 = 0;
    do {
      if (0 < (int)uVar6) {
        FUN_00403640(local_2c,"      ",6);
      }
      if (bVar1) {
        puVar8 = &DAT_005e6758;
      }
      else {
        puVar8 = &DAT_00618b34;
      }
      FUN_00403640(local_2c,puVar8,2);
      bVar1 = (bool)(bVar1 ^ 1);
      puVar2 = (undefined4 *)(local_44 + iVar7);
      puVar4 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar4 = (undefined4 *)*puVar2;
      }
      FUN_00403640(local_2c,puVar4,puVar2[4]);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x18;
      param_1 = local_30;
    } while (uVar6 < (uint)((local_40 - local_44) / 0x18));
  }
  FUN_004024e0(&stack0xffffff94,local_2c);
  pRVar3 = FUN_0055cb00((Node)0x0,in_stack_ffffff94);
  local_38 = 0;
  local_34 = 0;
  *(float *)(param_1 + 0x428) = (float)*(int *)(*(int *)(param_1 + 0x278) + 0x68);
  local_8._0_1_ = 2;
  local_30 = pRVar3;
  (**(code **)(*(int *)pRVar3 + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)pRVar3 + 0x48))();
  (**(code **)(*(int *)param_1 + 0x10c))();
  puVar4 = *(undefined4 **)(param_1 + 0x430);
  if (*(undefined4 **)(param_1 + 0x434) == puVar4) {
    FUN_00414080(param_1 + 0x42c,puVar4,&local_30);
  }
  else {
    *puVar4 = pRVar3;
    *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 4;
  }
  **(undefined1 **)(param_1 + 0x288) = 1;
  FUN_004025a0(&local_44);
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar5 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0057d980(void *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  
  if ((*(int *)((int)this + 0x430) - *(int *)((int)this + 0x42c) & 0xfffffffcU) != 0) {
    *(float *)((int)this + 0x428) = *(float *)((int)this + 0x428) - param_1 * 24.0;
    pfVar1 = (float *)(**(code **)(*(int *)**(undefined4 **)((int)this + 0x42c) + 0xb0))();
    fVar2 = *(float *)((int)this + 0x428);
    if (fVar2 < 0.0 - *pfVar1) {
      fVar2 = (float)*(int *)(*(int *)((int)this + 0x278) + 0x68);
      *(float *)((int)this + 0x428) = fVar2;
    }
    (**(code **)(*(int *)**(undefined4 **)((int)this + 0x42c) + 0x68))((float)(int)fVar2);
    **(undefined1 **)((int)this + 0x288) = 1;
  }
  return;
}


Node * __thiscall FUN_0057da30(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_PowerDetailScreen::vftable;
  if (*(int *)((int)this + 0x444) != 0) {
    FUN_00562610(*(int *)((int)this + 0x444));
    if (*(int **)((int)this + 0x444) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x444) + 0x138))(1);
      *(undefined4 *)((int)this + 0x444) = 0;
    }
  }
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x43c)) {
    pvVar1 = *(void **)((int)this + 0x428);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x43c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0xf;
  *(undefined1 *)((int)this + 0x428) = 0;
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0057db50(int param_1)

{
  if (*(int *)(param_1 + 0x444) != 0) {
    FUN_00562610(*(int *)(param_1 + 0x444));
    if (*(int **)(param_1 + 0x444) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
      *(undefined4 *)(param_1 + 0x444) = 0;
    }
  }
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  return;
}


void __fastcall FUN_0057dba0(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  undefined3 *puVar3;
  Node *pNVar4;
  undefined4 uVar5;
  Size local_24 [8];
  undefined4 local_1c;
  void *local_18;
  Color3B local_13 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c992b;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = (void *)FUN_005adb0f(0x290);
  local_8 = 0;
  local_18 = this;
  puVar3 = (undefined3 *)cocos2d::Color3B::Color3B(local_13,'X',0xa1,'^');
  pNVar4 = FUN_00562280(this,param_1[0xa8],param_1[0xa9],*puVar3);
  param_1[0x111] = (int)pNVar4;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_8 = 1;
  (**(code **)(*(int *)pNVar4 + 0xa0))(&local_1c,uVar2);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x111] + 0x48))(0,0);
  (**(code **)(*param_1 + 0x10c))(param_1[0x111]);
  FUN_0057e970(param_1);
  *(undefined1 *)param_1[0xa2] = 1;
  iVar1 = *param_1;
  uVar5 = cocos2d::Size::Size(local_24,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))(uVar5);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0057dcd0(int *param_1)

{
  (**(code **)(*param_1 + 0x290))();
  if (DAT_0065b3d4 != 0) {
    FUN_0057dd00((int)param_1);
    FUN_0057e970(param_1);
  }
  return;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_0057dd00(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *this;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *puVar10;
  void *pvVar11;
  float fVar12;
  int local_78;
  void *local_6c [5];
  uint local_58;
  undefined4 *******local_54 [4];
  uint local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c99b8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar2 = *(uint *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e8);
  if ((uVar2 == 0xffffffff) ||
     (iVar8 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40), iVar3 = *(int *)(iVar8 + 0x3c),
     (uint)(*(int *)(iVar8 + 0x40) - iVar3 >> 2) <= uVar2)) {
    FUN_00402690((void *)(param_1 + 0x428),&PTR_005ce008,0);
    goto LAB_0057e947;
  }
  piVar4 = *(int **)(iVar3 + uVar2 * 4);
  puStack_20 = &stack0xfffffffc;
  piVar6 = (int *)FUN_00591e00((undefined1 *)local_3c,"`%%%s %s\n");
  this = (int *)(param_1 + 0x428);
  if (this != piVar6) {
    FUN_00401b20(this);
    iVar8 = piVar6[1];
    iVar3 = piVar6[2];
    iVar5 = piVar6[3];
    *this = *piVar6;
    *(int *)(param_1 + 0x42c) = iVar8;
    *(int *)(param_1 + 0x430) = iVar3;
    *(int *)(param_1 + 0x434) = iVar5;
    *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_28) {
    pvVar11 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar11 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
LAB_0057de02:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  fVar12 = 0.0;
  if (0.0 < *(float *)(piVar4[2] + 200)) {
    if ((*(char *)((int)piVar4 + 99) != '\0') &&
       (FUN_004ae5e0((int)piVar4), *(char *)((int)piVar4 + 99) != '\0')) {
      FUN_004ae5e0((int)piVar4);
    }
    fVar12 = 0.0;
    puVar7 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_3c,"`2Generating: `%c%.2f `2/ `$%.2f kW/s\n");
    local_14 = 0;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
  }
  FUN_004ae1b0((int)piVar4);
  if (0.0 < fVar12) {
    FUN_004ae1b0((int)piVar4);
    puVar7 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_3c,"`2Draining  : `$%.2f `2/ `$%.2f kW/s\n");
    local_14 = 1;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  iVar8 = piVar4[2];
  if (*(int *)(iVar8 + 4) == 0xd) {
    FUN_00520260(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24));
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`2Solar Collection: `%c%.0f`2%%\n");
    local_14 = 2;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    iVar8 = piVar4[2];
  }
  if (0.0 < *(float *)(iVar8 + 0xc4)) {
    FUN_004ae590(piVar4);
    puVar7 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_3c,"`2Stored: `%c%.2f `2/ `%c%.2f kW%s\n");
    local_14 = 3;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
  }
  fVar12 = (float)piVar4[0x1e];
  if (0.0 < fVar12) {
    puVar7 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_3c,"`2Emission: `$%.2fdBw`2 @ `!%d `2hz\n");
    local_14 = 4;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
  }
  FUN_00403640(this,&DAT_005e75f8,1);
  if (*(int *)(piVar4[2] + 0xd4) != 0) {
    if (*(int *)(piVar4[2] + 0xcc) == 0) {
      puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Poss. Em: %ddBw\n");
      local_14 = 6;
      puVar10 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar10 = (undefined4 *)*puVar7;
      }
      FUN_00403640(this,puVar10,puVar7[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar11 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar11 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_0057e352;
      }
    }
    else {
      puVar7 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_3c,"`7Poss. Em: Std %ddBw, HF %ddBw\n");
      local_14 = 5;
      puVar10 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar10 = (undefined4 *)*puVar7;
      }
      FUN_00403640(this,puVar10,puVar7[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar11 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar11 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_0057e352:
        local_14 = 0xffffffff;
        FUN_005adb3f(pvVar11);
      }
    }
  }
  iVar8 = piVar4[2];
  if (*(float *)(iVar8 + 0xc0) == 0.0) {
    if (*(float *)(iVar8 + 0xbc) != 0.0) {
      puVar7 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_3c,"`7Max. Drain (when active): %.2fkW/s\n");
      local_14 = 9;
      puVar10 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar10 = (undefined4 *)*puVar7;
      }
      FUN_00403640(this,puVar10,puVar7[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar11 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar11 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_0057e4f8;
      }
    }
  }
  else if (*(float *)(iVar8 + 0xbc) == 0.0) {
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Max. Drain: %.2fkW/s\n");
    local_14 = 8;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_0057e4f8;
    }
  }
  else {
    puVar7 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_3c,"`7Max. Drain: Std %.2fkW/s, HF %.2fkW/s\n");
    local_14 = 7;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(this,puVar10,puVar7[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_0057e4f8:
      local_14 = 0xffffffff;
      FUN_005adb3f(pvVar11);
    }
  }
  if (*(int *)(piVar4[2] + 4) == 8) {
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (undefined4 *******)((uint)local_54[0] & 0xffffff00);
    local_14 = 10;
    FUN_00403640(local_54,"`7Tubes:     ",0xd);
    local_78 = 0;
    if (0.0 < *(float *)(piVar4[2] + 0x104)) {
      do {
        puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`%%[`%c%c`%%]");
        local_14._0_1_ = 0xb;
        puVar10 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar10 = (undefined4 *)*puVar7;
        }
        FUN_00403640(local_54,puVar10,puVar7[4]);
        local_14 = CONCAT31(local_14._1_3_,10);
        if (0xf < local_28) {
          pvVar11 = local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pvVar11 = *(void **)((int)local_3c[0] + -4),
             0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) goto LAB_0057de02;
          FUN_005adb3f(pvVar11);
        }
        local_78 = local_78 + 1;
      } while ((float)local_78 < *(float *)(piVar4[2] + 0x104));
    }
    FUN_00403640(local_54,&DAT_005e75f8,1);
    if (fVar12 == 0.0) {
      fVar12 = 0.0;
      if ((piVar4[0xf] != 0) && (fVar1 = *(float *)(piVar4[0xf] + 0xdc), 0.0 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x10] != 0) && (fVar1 = *(float *)(piVar4[0x10] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x11] != 0) && (fVar1 = *(float *)(piVar4[0x11] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x12] != 0) && (fVar1 = *(float *)(piVar4[0x12] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x13] != 0) && (fVar1 = *(float *)(piVar4[0x13] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x14] != 0) && (fVar1 = *(float *)(piVar4[0x14] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x15] != 0) && (fVar1 = *(float *)(piVar4[0x15] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if ((piVar4[0x16] != 0) && (fVar1 = *(float *)(piVar4[0x16] + 0xdc), fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      if (fVar12 == 0.0) {
        FUN_00403640(local_54,"`7Emissions: `8nil\n",0x13);
      }
      else {
        puVar7 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_6c,"`7Emissions: `$%.2fdBw`2 @ `!%d `2hz\n");
        local_14._0_1_ = 0xc;
        puVar10 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar10 = (undefined4 *)*puVar7;
        }
        FUN_00403640(local_54,puVar10,puVar7[4]);
        local_14 = CONCAT31(local_14._1_3_,10);
        if (0xf < local_58) {
          pvVar11 = local_6c[0];
          if ((0xfff < local_58 + 1) &&
             (pvVar11 = *(void **)((int)local_6c[0] + -4),
             0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar11);
        }
      }
    }
    pppppppuVar9 = local_54;
    if (0xf < local_40) {
      pppppppuVar9 = local_54[0];
    }
    FUN_00403640(this,pppppppuVar9,local_44);
    if (0xf < local_40) {
      pppppppuVar9 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pppppppuVar9 = (undefined4 *******)local_54[0][-1],
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pppppppuVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppuVar9);
    }
  }
LAB_0057e947:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0057e970(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  Ref *pRVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c99e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = param_1[0x110];
  if (iVar2 == 0) {
    FUN_004024e0(&stack0xffffffbc,param_1 + 0x10a);
    pRVar3 = FUN_0055ca10(param_1[0xa8] + -4,param_1[0xa9] + -4,(Node)0x0,in_stack_ffffffbc);
    param_1[0x110] = (int)pRVar3;
    local_8 = 0;
    (**(code **)(*(int *)pRVar3 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)param_1[0x110] + 0x48))();
    (**(code **)(*param_1 + 0x10c))();
  }
  else {
    pbVar1 = (byte *)(param_1 + 0x10a);
    pbVar6 = (byte *)(iVar2 + 0x2c0);
    if (0xf < *(uint *)(iVar2 + 0x2d4)) {
      pbVar6 = *(byte **)(iVar2 + 0x2c0);
    }
    pbVar5 = pbVar1;
    if (0xf < (uint)param_1[0x10f]) {
      pbVar5 = *(byte **)pbVar1;
    }
    uVar4 = FUN_004031f0(pbVar5,param_1[0x10e],pbVar6,*(uint *)(iVar2 + 0x2d0));
    if ((char)uVar4 != '\0') {
      ExceptionList = local_10;
      return;
    }
    FUN_004024e0(&stack0xffffffbc,(undefined4 *)pbVar1);
    FUN_0055ce90((void *)param_1[0x110],'\x01','\0',in_stack_ffffffbc);
  }
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  return;
}


Node * __thiscall FUN_0057eab0(void *this,byte param_1)

{
  FUN_0057eae0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0057eae0(Node *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c8ab0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_PowerScreen::vftable;
  puVar6 = *(uint **)(param_1 + 0x434);
  puVar4 = *(uint **)(param_1 + 0x430);
  local_14 = 0;
  iVar5 = (int)puVar6 - (int)puVar4 >> 0x1f;
  if (((int)puVar6 - (int)puVar4) / 0x38 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      if (*(int *)((int)puVar4 + iVar5) != 0) {
        FUN_00562610(*(int *)((int)puVar4 + iVar5));
        puVar4 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)((int)puVar4 + iVar5 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x430) + 4 + iVar5) = 0;
        puVar4 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)((int)puVar4 + iVar5 + 0x20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x20 + iVar5) = 0;
        puVar4 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)((int)puVar4 + iVar5 + 0x2c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x2c + iVar5) = 0;
        puVar4 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)((int)puVar4 + iVar5 + 0x30);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x30 + iVar5) = 0;
      }
      puVar4 = *(uint **)(param_1 + 0x430);
      iVar5 = iVar5 + 0x38;
      local_14 = local_14 + 1;
    } while (local_14 < (uint)((*(int *)(param_1 + 0x434) - (int)puVar4) / 0x38));
    puVar6 = *(uint **)(param_1 + 0x434);
  }
  FUN_00580720(puVar4,puVar6);
  *(uint **)(param_1 + 0x434) = *(uint **)(param_1 + 0x430);
  if (*(uint **)(param_1 + 0x430) != (uint *)0x0) {
    FUN_00580720(*(uint **)(param_1 + 0x430),*(uint **)(param_1 + 0x430));
    pvVar2 = *(void **)(param_1 + 0x430);
    pvVar7 = pvVar2;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x438) - (int)pvVar2) / 0x38) * 0x38)) &&
       (pvVar7 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0057ecf0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 local_8;
  
  local_8 = 0;
  puVar4 = *(uint **)(param_1 + 0x434);
  puVar2 = *(uint **)(param_1 + 0x430);
  iVar3 = (int)puVar4 - (int)puVar2 >> 0x1f;
  if (((int)puVar4 - (int)puVar2) / 0x38 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + (int)puVar2) != 0) {
        FUN_00562610(*(int *)(iVar3 + (int)puVar2));
        puVar2 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)(iVar3 + 4 + (int)puVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0x430)) = 0;
        puVar2 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)(iVar3 + 0x20 + (int)puVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar3 + 0x20 + *(int *)(param_1 + 0x430)) = 0;
        puVar2 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)(iVar3 + 0x2c + (int)puVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar3 + 0x2c + *(int *)(param_1 + 0x430)) = 0;
        puVar2 = *(uint **)(param_1 + 0x430);
      }
      piVar1 = *(int **)(iVar3 + 0x30 + (int)puVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar3 + 0x30 + *(int *)(param_1 + 0x430)) = 0;
      }
      puVar2 = *(uint **)(param_1 + 0x430);
      iVar3 = iVar3 + 0x38;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)(param_1 + 0x434) - (int)puVar2) / 0x38));
    puVar4 = *(uint **)(param_1 + 0x434);
  }
  FUN_00580720(puVar2,puVar4);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x430);
  return;
}


void __fastcall FUN_0057ee30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Size aSStack_10 [12];
  
  (**(code **)(*param_1 + 0x290))();
  iVar5 = 0;
  uVar4 = 0;
  param_1[0x10a] = param_1[0xa8] / 6;
  iVar6 = 0;
  param_1[0x10b] = param_1[0xa9] / 2;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  iVar3 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(iVar1 + 0x40) - iVar3 >> 2 != 0) {
    do {
      FUN_0057ef30(param_1,*(int **)(iVar3 + uVar4 * 4),iVar5);
      iVar5 = iVar5 + 1;
      if (iVar5 == 6) {
        iVar6 = iVar6 + 1;
        iVar5 = 0;
        if (iVar6 == 2) break;
      }
      uVar4 = uVar4 + 1;
      iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
      iVar3 = *(int *)(iVar1 + 0x3c);
    } while (uVar4 < (uint)(*(int *)(iVar1 + 0x40) - iVar3 >> 2));
  }
  *(undefined1 *)param_1[0xa2] = 1;
  iVar1 = *param_1;
  uVar2 = cocos2d::Size::Size(aSStack_10,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))(uVar2);
  return;
}


void __thiscall FUN_0057ef30(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined2 *puVar8;
  void *pvVar9;
  Node *pNVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  Ref *pRVar14;
  int *piVar15;
  uint uVar16;
  undefined4 extraout_ECX;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  void *in_stack_fffffd7c;
  void *in_stack_fffffd94;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  undefined4 local_20c;
  undefined2 local_208;
  undefined1 local_206;
  int *local_204;
  undefined4 local_200 [4];
  int local_1f0;
  int local_1ec;
  Node *local_74;
  int *local_70;
  void *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  Ref *local_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *local_44;
  undefined1 local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005c9aaa;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar5 = *(int *)((int)this + 0x428) * param_2;
  local_74 = (Node *)0x0;
  local_70 = (int *)0x0;
  local_5c = 0xf00000000;
  local_6c = (void *)((uint)local_6c & 0xffffff00);
  local_54 = (Ref *)0x0;
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  piStack_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_14 = 0;
  local_204 = this;
  cocos2d::Color3B::Color3B((Color3B *)&local_208,'X',0xa1,'^');
  uVar16 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  piVar7 = *(int **)(iVar1 + 0x3c);
  uVar6 = *(int *)(iVar1 + 0x40) - (int)piVar7 >> 2;
  piVar12 = piVar7;
  if (uVar6 != 0) {
    do {
      this = local_204;
      if (*(int *)(*piVar12 + 0x10) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e8)) {
        piVar7 = (int *)piVar7[uVar16];
        goto LAB_0057f05d;
      }
      uVar16 = uVar16 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar16 < uVar6);
  }
  piVar7 = (int *)0x0;
LAB_0057f05d:
  if (piVar7 == param_1) {
    uVar22 = 0xff;
LAB_0057f0a9:
    uVar21 = 0xff;
LAB_0057f0ae:
    uVar20 = 0xff;
LAB_0057f0b3:
    puVar8 = (undefined2 *)
             cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),uVar20,uVar21,uVar22);
    local_208 = *puVar8;
    local_206 = *(undefined1 *)(puVar8 + 1);
  }
  else {
    if (*(char *)((int)param_1 + 99) == '\0') {
      uVar22 = '@';
      uVar21 = '@';
      uVar20 = '@';
      goto LAB_0057f0b3;
    }
    cVar4 = (**(code **)(*param_1 + 0x14))();
    if (cVar4 != '\0') {
      uVar22 = '\0';
      uVar21 = '\0';
      goto LAB_0057f0ae;
    }
    cVar4 = (**(code **)(*param_1 + 0x18))();
    if (cVar4 != '\0') {
      uVar22 = '\0';
      goto LAB_0057f0a9;
    }
  }
  pvVar9 = (void *)FUN_005adb0f(0x290);
  local_14._0_1_ = 1;
  pNVar10 = FUN_00562280(pvVar9,*(int *)((int)this + 0x428),*(int *)((int)this + 0x42c),
                         CONCAT12(local_206,local_208));
  local_14._0_1_ = 2;
  (**(code **)(*(int *)pNVar10 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*(int *)pNVar10 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  FUN_00591e00((undefined1 *)&local_3c,(&PTR_s_Unknown_005e0cb8)[*(int *)(param_1[2] + 4)]);
  FUN_00401b20((int *)&local_6c);
  local_6c = local_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  local_5c = local_2c;
  FUN_004024e0(&stack0xfffffd94,&local_6c);
  piVar11 = (int *)FUN_00591910(in_stack_fffffd94);
  local_14._0_1_ = 3;
  (**(code **)(*piVar11 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*piVar11 + 0x48))();
  piVar12 = local_204;
  local_70 = piVar11;
  (**(code **)(*local_204 + 0x10c))();
  if (piVar7 == (int *)0x0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (char)piVar7[5];
  }
  piVar12 = (int *)FUN_005802b0(piVar12,cVar4);
  (**(code **)(*piVar12 + 0x48))();
  pvVar9 = (void *)0x57f31e;
  FUN_00591e00(&stack0xfffffd7c,"%c_Power_EmissionIcon.png");
  piVar13 = (int *)FUN_00591910(in_stack_fffffd7c);
  local_14._0_1_ = 4;
  (**(code **)(*piVar13 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*piVar13 + 0x48))();
  (**(code **)(*local_204 + 0x10c))();
  FUN_004024e0(&stack0xfffffd6c,(undefined4 *)(param_1[2] + 0x20));
  uVar19 = 0x57f3f2;
  pRVar14 = FUN_0055ca10(-1,0xffffffff,(Node)0x0,pvVar9);
  local_20c = (void *)0x0;
  local_14._0_1_ = 5;
  (**(code **)(*(int *)pRVar14 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*(int *)pRVar14 + 0x48))();
  piVar7 = local_204;
  (**(code **)(*local_204 + 0x10c))();
  FUN_0057fe10(piVar13,(float)param_1);
  FUN_0043d780((int)local_200);
  local_14._0_1_ = 6;
  uVar3 = (undefined1)local_14;
  local_14._0_1_ = 6;
  fVar17 = *(float *)(param_1[2] + 0xc4);
  if (0.0 < fVar17) {
    local_1f0 = (int)(piVar7[0x10a] + (piVar7[0x10a] >> 0x1f & 3U)) >> 2;
    local_1ec = piVar7[0x10b] + -0x10;
    local_20c = (void *)FUN_005adb0f(0x460);
    local_14._0_1_ = 7;
    piVar15 = FUN_0058b5d0(local_20c,piVar7[0x9e],local_200,piVar7[0xa2],uVar19,0x42c80000,local_1f0
                           ,local_1ec);
    local_20c = (void *)0x0;
    local_14._0_1_ = 8;
    (**(code **)(*piVar15 + 0xa0))();
    local_14._0_1_ = 6;
    fVar17 = (float)(iVar5 + 3);
    (**(code **)(*piVar15 + 0x48))(fVar17);
    puVar8 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),'@','@','@');
    *(undefined2 *)(piVar15 + 0x111) = *puVar8;
    *(undefined1 *)((int)piVar15 + 0x446) = *(undefined1 *)(puVar8 + 1);
    (**(code **)(*local_204 + 0x10c))(piVar15);
    piVar7 = local_204;
    piStack_4c = piVar15;
    uVar3 = (undefined1)local_14;
  }
  local_14._0_1_ = uVar3;
  local_1f0 = (int)(piVar7[0x10a] + (piVar7[0x10a] >> 0x1f & 3U)) >> 2;
  local_1ec = piVar7[0x10b] + -0x10;
  if (*(char *)((int)param_1 + 99) == '\0') {
    fVar17 = 0.0;
    cVar4 = '\0';
  }
  else {
    FUN_004ae5e0((int)param_1);
    cVar4 = *(char *)((int)param_1 + 99);
  }
  if (cVar4 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = *(float *)(param_1[2] + 200);
  }
  if (fVar18 < fVar17) {
    if (cVar4 == '\0') goto LAB_0057f643;
    fVar17 = *(float *)(param_1[2] + 200);
  }
  if ((fVar17 == 0.0) && (cVar4 != '\0')) {
    FUN_00438020((int *)param_1[3]);
  }
LAB_0057f643:
  local_20c = (void *)FUN_005adb0f(0x458);
  local_14._0_1_ = 9;
  piVar15 = (int *)FUN_00562c00(local_20c,piVar7[0x9e],local_200,piVar7[0xa2],extraout_ECX,local_1f0
                                ,local_1ec);
  local_20c = (void *)0x0;
  local_14._0_1_ = 10;
  (**(code **)(*piVar15 + 0xa0))();
  local_14 = CONCAT31(local_14._1_3_,6);
  (**(code **)(*piVar15 + 0x48))((float)(local_204[0x10a] + iVar5 + -3));
  puVar8 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),'@','@','@');
  *(undefined2 *)(piVar15 + 0x112) = *puVar8;
  *(undefined1 *)((int)piVar15 + 0x44a) = *(undefined1 *)(puVar8 + 1);
  (**(code **)(*piVar15 + 0x294))();
  (**(code **)(*local_204 + 0x10c))(piVar15);
  piVar7 = local_204;
  local_40 = (undefined1)param_1[5];
  puVar2 = (undefined4 *)local_204[0x10d];
  local_74 = pNVar10;
  local_54 = pRVar14;
  piStack_50 = piVar15;
  piStack_48 = piVar13;
  local_44 = piVar12;
  if ((undefined4 *)local_204[0x10e] == puVar2) {
    local_70 = piVar11;
    FUN_005804c0(local_204 + 0x10c,puVar2,(uint *)&local_74);
  }
  else {
    puVar2[1] = piVar11;
    *puVar2 = pNVar10;
    local_70 = piVar11;
    FUN_004024e0(puVar2 + 2,&local_6c);
    puVar2[8] = local_54;
    puVar2[9] = piStack_50;
    puVar2[10] = piStack_4c;
    puVar2[0xb] = piStack_48;
    puVar2[0xc] = local_44;
    *(undefined1 *)(puVar2 + 0xd) = local_40;
    piVar7[0x10d] = piVar7[0x10d] + 0x38;
  }
  FUN_00465e40((int)local_200);
  if (0xf < local_5c._4_4_) {
    pvVar9 = local_6c;
    if ((0xfff < local_5c._4_4_ + 1) &&
       (pvVar9 = *(void **)((int)local_6c + -4), 0x1f < (uint)((int)local_6c + (-4 - (int)pvVar9))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0057f830(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  uint uVar6;
  byte ****ppppbVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  Color3B *this;
  undefined2 extraout_var;
  byte ****ppppbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  float fVar16;
  void *in_stack_ffffff6c;
  uchar uVar17;
  undefined8 uVar18;
  Color3B local_68 [3];
  Color3B local_65 [3];
  Color3B local_62 [3];
  Color3B local_5f [3];
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  byte ***local_38;
  byte *local_34;
  undefined2 local_30;
  undefined1 local_2e;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c9afa;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  local_4c = 0;
  local_34 = *(byte **)(DAT_0065b5cc + 0xd0);
  if (*(int *)(*(int *)(local_34 + 0x40) + 0x40) - *(int *)(*(int *)(local_34 + 0x40) + 0x3c) >> 2
      != 0) {
    local_48 = 1;
    local_44 = 0;
    do {
      iVar13 = local_44;
      piVar1 = *(int **)(*(int *)(*(int *)(local_34 + 0x40) + 0x3c) + local_4c * 4);
      if (*(int *)(local_34 + 0x1e8) < 0) {
        local_38 = (byte ***)0x0;
      }
      else {
        local_38 = *(byte ****)
                    (*(int *)(*(int *)(local_34 + 0x40) + 0x3c) + *(int *)(local_34 + 0x1e8) * 4);
      }
      cocos2d::Color3B::Color3B((Color3B *)&local_30,'X',0xa1,'^');
      if (local_38 == (byte ***)piVar1) {
        uVar8 = 0xff;
        this = local_5f;
LAB_0057f920:
        uVar18 = CONCAT44(uVar8,0xff);
LAB_0057f925:
        uVar17 = 0xff;
LAB_0057f92a:
        puVar5 = (undefined2 *)
                 cocos2d::Color3B::Color3B
                           (this,uVar17,(uchar)uVar18,(uchar)((ulonglong)uVar18 >> 0x20));
        local_30 = *puVar5;
        local_2e = *(undefined1 *)(puVar5 + 1);
      }
      else {
        if (*(char *)((int)piVar1 + 99) == '\0') {
          uVar18 = 0x4000000040;
          uVar17 = '@';
          this = local_62;
          goto LAB_0057f92a;
        }
        cVar3 = (**(code **)(*piVar1 + 0x14))();
        if (cVar3 != '\0') {
          uVar18 = 0;
          this = local_65;
          goto LAB_0057f925;
        }
        cVar3 = (**(code **)(*piVar1 + 0x18))();
        if (cVar3 != '\0') {
          uVar8 = 0;
          this = local_68;
          goto LAB_0057f920;
        }
      }
      bVar4 = cocos2d::Color3B::operator!=
                        ((Color3B *)(*(int *)(param_1[0x10c] + iVar13) + 0x288),(Color3B *)&local_30
                        );
      if (bVar4) {
        FUN_00562690(*(void **)(param_1[0x10c] + iVar13),
                     (int)(CONCAT17((char)((ushort)extraout_var >> 8),
                                    CONCAT16(local_2e,(uint6)CONCAT22(extraout_var,local_30) << 0x20
                                            )) >> 0x20));
        *(undefined1 *)param_1[0xa2] = 1;
      }
      FUN_00591e00((undefined1 *)local_2c,(&PTR_s_Unknown_005e0cb8)[*(int *)(piVar1[2] + 4)]);
      local_8 = 0;
      pbVar11 = (byte *)(param_1[0x10c] + 8 + iVar13);
      local_34 = pbVar11;
      if (0xf < *(uint *)(pbVar11 + 0x14)) {
        local_34 = *(byte **)pbVar11;
      }
      ppppbVar10 = local_2c;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_2c[0];
      }
      local_38 = local_2c[0];
      uVar6 = FUN_004031f0((byte *)ppppbVar10,local_1c,local_34,*(uint *)(pbVar11 + 0x10));
      if ((char)uVar6 == '\0') {
        iVar12 = param_1[0x10c];
        ppppbVar10 = (byte ****)(iVar12 + 8 + iVar13);
        if (ppppbVar10 != local_2c) {
          ppppbVar7 = local_2c;
          if (0xf < local_18) {
            ppppbVar7 = (byte ****)local_38;
          }
          FUN_00402690(ppppbVar10,ppppbVar7,local_1c);
          iVar12 = param_1[0x10c];
          local_38 = local_2c[0];
        }
        local_3c = (float)(param_1[0x10a] * local_40);
        piVar2 = *(int **)(iVar13 + 4 + iVar12);
        local_34 = (byte *)(param_1[0x10b] * local_48);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x138))();
          *(undefined4 *)(param_1[0x10c] + 4 + iVar13) = 0;
          iVar12 = param_1[0x10c];
        }
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(iVar12 + 8 + iVar13));
        uVar8 = FUN_00591910(in_stack_ffffff6c);
        local_54 = 0x3f000000;
        local_50 = 0x3f000000;
        *(undefined4 *)(param_1[0x10c] + 4 + iVar13) = uVar8;
        local_8._0_1_ = 1;
        (**(code **)(**(int **)(param_1[0x10c] + 4 + iVar13) + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        in_XMM0 = ZEXT416((uint)(float)(param_1[0x10a] / 2 + (int)local_3c));
        (**(code **)(**(int **)(param_1[0x10c] + 4 + iVar13) + 0x48))();
        iVar13 = local_44;
        (**(code **)(*param_1 + 0x10c))();
        *(undefined1 *)param_1[0xa2] = 1;
      }
      if (0.0 < *(float *)(piVar1[2] + 0xc4)) {
        piVar2 = *(int **)(param_1[0x10c] + 0x28 + iVar13);
        in_XMM0 = ZEXT416((uint)piVar2[0x10d]);
        fVar16 = (float)(int)((float)piVar1[0x17] / (*(float *)(piVar1[2] + 0xc4) / 100.0));
        if ((float)piVar2[0x10d] != fVar16) {
          piVar2[0x10d] = (int)fVar16;
          (**(code **)(*piVar2 + 0x294))();
        }
      }
      if (*(char *)((int)piVar1 + 99) == '\0') {
        fVar16 = 0.0;
        fVar14 = 0.0;
        cVar3 = '\0';
      }
      else {
        FUN_004ae5e0((int)piVar1);
        fVar16 = in_XMM0._0_4_;
        cVar3 = *(char *)((int)piVar1 + 99);
        if (cVar3 == '\0') {
          fVar14 = 0.0;
        }
        else {
          fVar14 = *(float *)(piVar1[2] + 200);
        }
      }
      if (fVar16 <= fVar14) {
LAB_0057fbc8:
        if (fVar16 == 0.0) {
          if (cVar3 == '\0') goto LAB_0057fbd5;
          if (*(char *)((int)piVar1 + 0x62) == '\0') {
            local_3c = *(float *)(piVar1[2] + 0xc0);
            auVar15 = ZEXT416((uint)local_3c);
            FUN_00438020((int *)piVar1[3]);
            fVar16 = auVar15._0_4_ * local_3c + local_3c;
          }
          else {
            local_34 = (byte *)((float)piVar1[0x19] / 100.0);
            local_3c = *(float *)(piVar1[2] + 0xbc);
            auVar15 = ZEXT416((uint)local_3c);
            FUN_00438020((int *)piVar1[3]);
            fVar16 = (auVar15._0_4_ * local_3c + local_3c) * (float)local_34;
          }
          goto LAB_0057fc40;
        }
      }
      else {
        if (cVar3 != '\0') {
          fVar16 = *(float *)(piVar1[2] + 200);
          goto LAB_0057fbc8;
        }
LAB_0057fbd5:
        fVar16 = 0.0;
LAB_0057fc40:
        fVar16 = fVar16 * -1.0;
      }
      in_XMM0._0_8_ = (double)fVar16;
      in_XMM0._8_8_ = 0;
      (**(code **)(**(int **)(param_1[0x10c] + 0x24 + iVar13) + 0x298))();
      uVar8 = FUN_0057fe10(*(int **)(param_1[0x10c] + 0x2c + iVar13),(float)piVar1);
      if ((char)uVar8 != '\0') {
        *(undefined1 *)param_1[0xa2] = 1;
      }
      if (*(char *)(param_1[0x10c] + 0x34 + iVar13) != (char)piVar1[5]) {
        puVar9 = (undefined4 *)(**(code **)(**(int **)(param_1[0x10c] + 0x30 + iVar13) + 0x5c))();
        local_5c = *puVar9;
        local_58 = puVar9[1];
        in_XMM0 = ZEXT416(local_58);
        local_8._0_1_ = 2;
        iVar12 = param_1[0x10c];
        piVar2 = *(int **)(iVar12 + 0x30 + iVar13);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x138))();
          *(undefined4 *)(param_1[0x10c] + 0x30 + iVar13) = 0;
          iVar12 = param_1[0x10c];
        }
        *(char *)(iVar12 + 0x34 + iVar13) = (char)piVar1[5];
        iVar12 = param_1[0x10c] + local_44;
        uVar8 = FUN_005802b0(param_1,(char)piVar1[5]);
        iVar13 = local_44;
        *(undefined4 *)(iVar12 + 0x30) = uVar8;
        (**(code **)(**(int **)(param_1[0x10c] + 0x30 + local_44) + 0x4c))();
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined1 *)param_1[0xa2] = 1;
      }
      local_40 = local_40 + 1;
      if (local_40 == 6) {
        local_48 = local_48 + -1;
        local_40 = 0;
        if (local_48 == -1) {
          if (0xf < local_18) {
            ppppbVar10 = (byte ****)local_38;
            if ((0xfff < local_18 + 1) &&
               (ppppbVar10 = (byte ****)local_38[-1],
               (byte *)0x1f < (byte *)((int)local_38 + (-4 - (int)ppppbVar10)))) goto LAB_0057fdd8;
            FUN_005adb3f(ppppbVar10);
          }
          break;
        }
      }
      local_8 = -1;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_38;
        if ((0xfff < local_18 + 1) &&
           (ppppbVar10 = (byte ****)local_38[-1],
           (byte *)0x1f < (byte *)((int)local_38 + (-4 - (int)ppppbVar10)))) {
LAB_0057fdd8:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar10);
      }
      local_44 = iVar13 + 0x38;
      local_4c = local_4c + 1;
      local_34 = *(byte **)(DAT_0065b5cc + 0xd0);
    } while (local_4c <
             (uint)(*(int *)(*(int *)(local_34 + 0x40) + 0x40) -
                    *(int *)(*(int *)(local_34 + 0x40) + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 FUN_0057fe10(int *param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint in_EAX;
  undefined3 *puVar5;
  Color3B *this;
  undefined4 uVar6;
  float in_XMM0_Da;
  float fVar7;
  float fVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  Color3B *pCVar12;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) goto LAB_0057ff94;
  if (*(char *)((int)param_2 + 99) != '\0') {
    if (*(char *)((int)param_2 + 0x62) == '\0') {
      iVar2 = *(int *)(*(int *)((int)param_2 + 8) + 0xd4);
      FUN_00437ea0(*(int **)((int)param_2 + 0xc));
      fVar7 = (float)iVar2;
      param_1 = (int *)(in_XMM0_Da * fVar7 + fVar7);
    }
    else {
      puVar1 = (undefined4 *)((int)param_2 + 0xc);
      iVar2 = *(int *)(*(int *)((int)param_2 + 8) + 0xcc);
      fVar7 = (float)*(int *)((int)param_2 + 100) / 100.0;
      param_2 = fVar7;
      FUN_00437ea0((int *)*puVar1);
      fVar8 = (float)iVar2;
      param_1 = (int *)((fVar7 * fVar8 + fVar8) * param_2);
    }
    if ((float)param_1 != 0.0) {
      cocos2d::Color3B::Color3B((Color3B *)&param_2,'\0',0xff,'\0');
      if ((float)param_1 < 250.0) {
        if (150.0 <= (float)param_1) {
          uVar11 = '\0';
          uVar10 = '\0';
          uVar9 = 0xff;
          goto LAB_0057ff12;
        }
        if (50.0 <= (float)param_1) {
          uVar11 = '\0';
          uVar10 = 0xff;
          uVar9 = 0xff;
          goto LAB_0057ff12;
        }
        if (5.0 <= (float)param_1) {
          uVar11 = '\0';
          uVar10 = 0xff;
          uVar9 = '\0';
          goto LAB_0057ff12;
        }
      }
      else {
        uVar11 = '_';
        uVar10 = '_';
        uVar9 = 0xe8;
LAB_0057ff12:
        puVar5 = (undefined3 *)
                 cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),uVar9,uVar10,uVar11);
        param_2 = (float)CONCAT13(param_2._3_1_,*puVar5);
      }
      pCVar12 = (Color3B *)&param_2;
      this = (Color3B *)(**(code **)(*piVar3 + 0x254))();
      bVar4 = cocos2d::Color3B::operator!=(this,pCVar12);
      if (bVar4) {
LAB_0057ff4e:
        (**(code **)(*piVar3 + 0xb4))(1);
        uVar6 = (**(code **)(*piVar3 + 0x25c))(&param_2);
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      in_EAX = (**(code **)(*piVar3 + 0xb8))();
      if ((char)in_EAX == '\0') goto LAB_0057ff4e;
      goto LAB_0057ff94;
    }
  }
  in_EAX = (**(code **)(*piVar3 + 0xb8))();
  if ((char)in_EAX == '\x01') {
    uVar6 = (**(code **)(*piVar3 + 0xb4))(0);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
LAB_0057ff94:
  return in_EAX & 0xffffff00;
}


void __fastcall FUN_0057ffa0(int *param_1)

{
  if (DAT_0065b3d4 != 0) {
    FUN_0057f830(param_1);
  }
  return;
}


void __thiscall FUN_0057ffc0(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (int)(param_1 / (float)*(int *)((int)this + 0x428));
  iVar1 = (int)(param_2 / (float)*(int *)((int)this + 0x42c));
  if ((5 < iVar2) || (1 < iVar1)) {
    FUN_00591070("DETAIL","Invalid location for click.");
    ExceptionList = local_10;
    return;
  }
  uVar3 = iVar2 + iVar1 * 6;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  if ((uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2) <= uVar3) {
    FUN_00591070("DETAIL","invalid module clicked on");
    uVar3 = 0xffffffff;
  }
  if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    FUN_0041c620(0x7b,0);
    FUN_0057f830(this);
    ExceptionList = local_10;
    return;
  }
  FUN_004e0ce0(*(int *)(DAT_0065b5cc + 0xd0),uVar3);
  FUN_0057f830(this);
  ExceptionList = local_10;
  return;
}
