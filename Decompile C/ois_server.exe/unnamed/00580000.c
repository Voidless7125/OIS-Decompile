#include "../ois_server.exe.h"


void __thiscall FUN_00580120(void *this,float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = (int)(param_1 / (float)*(int *)((int)this + 0x428));
  iVar1 = (int)(param_2 / (float)*(int *)((int)this + 0x42c));
  if ((iVar3 < 6) && (iVar1 < 2)) {
    uVar2 = iVar3 + iVar1 * 6;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    iVar3 = *(int *)(iVar1 + 0x3c);
    if ((uint)(*(int *)(iVar1 + 0x40) - iVar3 >> 2) <= uVar2) {
      FUN_005542e0(*(int *)((int)this + 0x278));
      ExceptionList = local_10;
      return;
    }
    (**(code **)(**(int **)(iVar3 + uVar2 * 4) + 0x18))();
    FUN_00591e00(&stack0xffffffbc,"%s %s%s");
    FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffbc);
    ExceptionList = local_10;
    return;
  }
  iVar1 = *(int *)((int)this + 0x278);
  pbVar5 = (byte *)(iVar1 + 0xfc);
  pbVar4 = pbVar5;
  if (0xf < *(uint *)(iVar1 + 0x110)) {
    pbVar4 = *(byte **)pbVar5;
  }
  uVar2 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      pbVar5 = *(byte **)pbVar5;
    }
    *pbVar5 = 0;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005802b0(void *this,char param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  bool bVar4;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c9b5b;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  bVar4 = param_1 == '\0';
  if (bVar4) {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"%c_Power_EmConIcon_Off.png");
  }
  else {
    puStack_20 = &stack0xfffffffc;
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"%c_Power_EmConIcon_On.png");
  }
  local_14 = (uint)bVar4;
  pvVar3 = (void *)*puVar1;
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  piVar2 = (int *)FUN_00591910(pvVar3);
  local_14 = 0;
  if (bVar4) {
    if (0xf < local_28) {
      pvVar3 = local_3c[0];
      if (0xfff < local_28 + 1) {
        pvVar3 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  local_14 = 0xffffffff;
  if (!bVar4) {
    if (0xf < local_40) {
      pvVar3 = local_54[0];
      if (0xfff < local_40 + 1) {
        pvVar3 = *(void **)((int)local_54[0] + -4);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
  }
  local_14 = 2;
  (**(code **)(*piVar2 + 0xa0))();
  local_14 = 0xffffffff;
  (**(code **)(*(int *)this + 0x10c))(piVar2);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_005804a0(uint *param_1,uint *param_2)

{
  FUN_00580720(param_1,param_2);
  return;
}


int __thiscall FUN_005804c0(void *this,undefined4 *param_1,uint *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  uint *puVar10;
  uint *puVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = ((int)param_1 - *(int *)this) / 0x38;
  iVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0x38;
  if (iVar3 == 0x4924924) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar3 + 1;
  uVar5 = (*(int *)((int)this + 8) - *(int *)this) / 0x38;
  uVar4 = uVar6;
  if ((uVar5 <= 0x4924924 - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar6)) {
    uVar4 = uVar6;
  }
  uVar6 = uVar4 * 0x38;
  if (uVar4 < 0x4924925) {
    if (0xfff < uVar6) goto LAB_0058058d;
    if (uVar6 == 0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)FUN_005adb0f(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_0058058d:
    uVar5 = uVar6 + 0x23;
    if (uVar5 <= uVar6) {
      uVar5 = 0xffffffff;
    }
    uVar6 = FUN_005adb0f(uVar5);
    if (uVar6 == 0) goto LAB_005805b0;
    puVar10 = (uint *)(uVar6 + 0x23 & 0xffffffe0);
    puVar10[-1] = uVar6;
  }
  local_8 = 0;
  puVar10[iVar2 * 0xe] = *param_2;
  puVar10[iVar2 * 0xe + 1] = param_2[1];
  FUN_004024e0(puVar10 + iVar2 * 0xe + 2,param_2 + 2);
  puVar10[iVar2 * 0xe + 8] = param_2[8];
  puVar10[iVar2 * 0xe + 9] = param_2[9];
  puVar10[iVar2 * 0xe + 10] = param_2[10];
  puVar10[iVar2 * 0xe + 0xb] = param_2[0xb];
  puVar10[iVar2 * 0xe + 0xc] = param_2[0xc];
  *(char *)(puVar10 + iVar2 * 0xe + 0xd) = (char)param_2[0xd];
  puVar8 = *(undefined4 **)((int)this + 4);
  puVar7 = *(undefined4 **)this;
  puVar11 = puVar10;
  if (param_1 != puVar8) {
    FUN_00580790(*(undefined4 **)this,param_1,puVar10);
    puVar8 = *(undefined4 **)((int)this + 4);
    puVar7 = param_1;
    puVar11 = puVar10 + iVar2 * 0xe + 0xe;
  }
  FUN_00580790(puVar7,puVar8,puVar11);
  if (*(uint **)this != (uint *)0x0) {
    FUN_00580720(*(uint **)this,*(uint **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar9 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x38) * 0x38)) &&
       (pvVar9 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar9)))) {
LAB_005805b0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  *(uint **)this = puVar10;
  *(uint **)((int)this + 4) = puVar10 + (iVar3 + 1) * 0xe;
  *(uint **)((int)this + 8) = puVar10 + uVar4 * 0xe;
  ExceptionList = local_10;
  return *(int *)this + iVar2 * 0x38;
}


void __fastcall FUN_00580720(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 7;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 7;
      puVar4 = puVar4 + 0xe;
    } while (puVar1 != param_2);
  }
  return;
}


uint * __fastcall FUN_00580790(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  
  puVar5 = param_3;
  if (param_1 != param_2) {
    puVar6 = param_1 + 7;
    do {
      *puVar5 = puVar6[-7];
      puVar5[1] = puVar6[-6];
      puVar5[6] = 0;
      *(undefined4 *)((int)param_3 + (-0x38 - (int)param_1) + (int)(puVar6 + 0xe)) = 0;
      uVar2 = puVar6[-4];
      uVar3 = puVar6[-3];
      uVar4 = puVar6[-2];
      puVar5[2] = puVar6[-5];
      puVar5[3] = uVar2;
      puVar5[4] = uVar3;
      puVar5[5] = uVar4;
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar6 + -1);
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar5[8] = puVar6[1];
      puVar5[9] = puVar6[2];
      puVar5[10] = puVar6[3];
      puVar5[0xb] = puVar6[4];
      puVar5[0xc] = puVar6[5];
      *(undefined1 *)(puVar5 + 0xd) = *(undefined1 *)(puVar6 + 6);
      puVar1 = puVar6 + 7;
      puVar5 = puVar5 + 0xe;
      puVar6 = puVar6 + 0xe;
    } while (puVar1 != param_2);
  }
  FUN_00580720(puVar5,puVar5);
  return puVar5;
}


Node * __thiscall FUN_00580830(void *this,byte param_1)

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
  *(undefined ***)this = UI_SelectedObjectSummary::vftable;
  if (*(int **)((int)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x444) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x444) = 0;
  }
  if (*(int **)((int)this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x448) + 0x138))(1);
    *(undefined4 *)((int)this + 0x448) = 0;
  }
  if (*(int **)((int)this + 0x44c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x44c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x44c) = 0;
  }
  if (*(int **)((int)this + 0x450) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x450) + 0x138))(1);
    *(undefined4 *)((int)this + 0x450) = 0;
  }
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1);
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


void __fastcall FUN_005809a0(int param_1)

{
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  if (*(int **)(param_1 + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x448) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  if (*(int **)(param_1 + 0x44c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  if (*(int **)(param_1 + 0x450) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x450) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  return;
}


void __fastcall FUN_00580a40(int *param_1)

{
  int iVar1;
  Ref *pRVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  void *in_stack_ffffffac;
  void *in_stack_ffffffbc;
  Size local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9bcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  FUN_004024e0(&stack0xffffffbc,param_1 + 0x10a);
  pRVar2 = FUN_0055ca10(param_1[0xa8] + -6,param_1[0xa9] + -6,(Node)0x0,in_stack_ffffffbc);
  param_1[0x110] = (int)pRVar2;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  (**(code **)(*(int *)pRVar2 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x110] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  pvVar5 = (void *)0x580b20;
  FUN_00591e00(&stack0xffffffac,"%c_BrokenCorner_TopLeft.png");
  piVar3 = (int *)FUN_00591910(in_stack_ffffffac);
  param_1[0x111] = (int)piVar3;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_8 = 1;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x111] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  pvVar4 = (void *)0x580bb1;
  FUN_00591e00(&stack0xffffff9c,"%c_BrokenCorner_TopRight.png");
  piVar3 = (int *)FUN_00591910(pvVar5);
  param_1[0x112] = (int)piVar3;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_8 = 2;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x112] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  pvVar5 = (void *)0x580c4e;
  FUN_00591e00(&stack0xffffff8c,"%c_BrokenCorner_BottomLeft.png");
  piVar3 = (int *)FUN_00591910(pvVar4);
  param_1[0x113] = (int)piVar3;
  local_18 = 0;
  local_14 = 0;
  local_8 = 3;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x113] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff7c,"%c_BrokenCorner_BottomRight.png");
  piVar3 = (int *)FUN_00591910(pvVar5);
  param_1[0x114] = (int)piVar3;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_8 = 4;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x114] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  iVar1 = *param_1;
  cocos2d::Size::Size(local_20,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_00580db0(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte *******pppppppbVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  void *pvVar13;
  byte *******pppppppbVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  byte *******pppppppbVar20;
  byte *******this;
  float fVar21;
  byte *in_stack_ffffff00;
  float local_d8;
  float local_d4;
  int *local_d0;
  float local_cc;
  undefined1 *local_c8;
  undefined1 local_c1;
  undefined1 *local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c9ed3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar17 = 0;
  local_c0 = (undefined1 *)0x0;
  local_d0 = param_1;
  if (DAT_0065b3d4 == 0) goto LAB_00582845;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (DAT_00655098 == 0) {
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Cur. Sect: `7%s\n");
    local_8._0_1_ = 1;
    puVar7 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar7 = (undefined4 *)*puVar4;
    }
    FUN_00403640(local_2c,puVar7,puVar4[4]);
    local_8._0_1_ = 0;
    if (0xf < local_48) {
      pvVar5 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar5 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe8) -
             *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe4);
    iVar17 = iVar10 >> 0x1f;
    if (iVar10 / 0x18 + iVar17 == iVar17) {
      FUN_00403640(local_2c,"`2  Affil. : `7none",0x13);
    }
    else {
      FUN_00403640(local_2c,"`2  Affil. : ",0xd);
      uVar15 = 0;
      piVar19 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe4);
      iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe8) - *piVar19;
      iVar17 = iVar10 >> 0x1f;
      if (iVar10 / 0x18 + iVar17 != iVar17) {
        iVar17 = 0;
        do {
          local_c0 = &stack0xffffff00;
          FUN_004024e0(&stack0xffffff00,(undefined4 *)(*piVar19 + iVar17));
          local_8._0_1_ = 2;
          pvVar5 = (void *)FUN_00412490();
          local_8._0_1_ = 0;
          iVar10 = FUN_004a0d10(pvVar5,in_stack_ffffff00);
          if (0 < (int)uVar15) {
            FUN_00403640(local_2c,&DAT_0062adc8,3);
          }
          pcVar16 = (char *)(iVar10 + 0x50);
          if (0xf < *(uint *)(iVar10 + 100)) {
            pcVar16 = *(char **)pcVar16;
          }
          pcVar12 = pcVar16;
          do {
            cVar3 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar3 != '\0');
          FUN_00403640(local_2c,pcVar16,(int)pcVar12 - (int)(pcVar16 + 1));
          uVar15 = uVar15 + 1;
          iVar17 = iVar17 + 0x18;
          piVar19 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe4);
        } while (uVar15 < (uint)((*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xe8) - *piVar19) / 0x18)
                );
      }
    }
    FUN_00403640(local_2c,&DAT_005e75f8,1);
    iVar17 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d0);
    if (iVar17 != -1) {
      for (puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
          puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar7 = puVar7 + 1) {
        piVar19 = (int *)*puVar7;
        if (*piVar19 == iVar17) goto LAB_00580fff;
      }
      piVar19 = (int *)0x0;
LAB_00580fff:
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Sel. Sect  `7%s\n");
      local_8._0_1_ = 3;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_48) {
        pvVar5 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar5 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      uVar15 = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      piVar11 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
      uVar18 = *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0) - (int)piVar11 >> 2;
      if (uVar18 != 0) {
        do {
          if ((*(int *)(*(int *)(*piVar11 + 0x254) + 0x158) == 2) &&
             (*(int *)(*piVar11 + 0x38c) == *piVar19)) {
            local_c1 = 1;
            goto LAB_005810da;
          }
          uVar15 = uVar15 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar15 < uVar18);
      }
      local_c1 = 0;
LAB_005810da:
      iVar17 = piVar19[0x3a] - piVar19[0x39] >> 0x1f;
      if ((piVar19[0x3a] - piVar19[0x39]) / 0x18 + iVar17 == iVar17) {
        FUN_00403640(local_2c,"`2  Affil. : `7none",0x13);
      }
      else {
        FUN_00403640(local_2c,"`2  Affil. : ",0xd);
        iVar17 = piVar19[0x39];
        uVar15 = 0;
        iVar10 = piVar19[0x3a] - iVar17 >> 0x1f;
        if ((piVar19[0x3a] - iVar17) / 0x18 + iVar10 != iVar10) {
          local_c0 = (undefined1 *)0x0;
          do {
            local_c8 = &stack0xffffff00;
            FUN_004024e0(&stack0xffffff00,(undefined4 *)(local_c0 + iVar17));
            local_8._0_1_ = 4;
            pvVar5 = (void *)FUN_00412490();
            local_8 = (uint)local_8._1_3_ << 8;
            iVar17 = FUN_004a0d10(pvVar5,in_stack_ffffff00);
            if (0 < (int)uVar15) {
              FUN_00403640(local_2c,&DAT_0062adc8,3);
            }
            pcVar16 = (char *)(iVar17 + 0x50);
            if (0xf < *(uint *)(iVar17 + 100)) {
              pcVar16 = *(char **)pcVar16;
            }
            pcVar12 = pcVar16;
            do {
              cVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar3 != '\0');
            FUN_00403640(local_2c,pcVar16,(int)pcVar12 - (int)(pcVar16 + 1));
            iVar17 = piVar19[0x39];
            uVar15 = uVar15 + 1;
            local_c0 = local_c0 + 0x18;
          } while (uVar15 < (uint)((piVar19[0x3a] - iVar17) / 0x18));
        }
      }
      FUN_00403640(local_2c,&DAT_005e75f8,1);
      iVar17 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24);
      local_c8 = (undefined1 *)(float)*(int *)(iVar17 + 0x80);
      local_cc = (float)*(int *)(iVar17 + 0x7c);
      local_d4 = (float)piVar19[0x20];
      local_d8 = (float)piVar19[0x1f];
      local_8._0_1_ = 6;
      fVar21 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_d8,(Vec2 *)&local_cc);
      fVar6 = (float)(0x5f3759df - ((uint)fVar21 >> 1));
      local_8 = (uint)local_8._1_3_ << 8;
      piVar19 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x14);
      local_c0 = (undefined1 *)((1.5 - fVar21 * 0.5 * fVar6 * fVar6) * fVar6 * fVar21);
      if (piVar19 != (int *)0x0) {
        (**(code **)(*piVar19 + 0x10))();
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2   Dist. : `%c%.2f`2ly");
      local_8._0_1_ = 7;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2\nJumpgate : %s\n");
      local_8._0_1_ = 8;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      pvVar5 = local_44[0];
      uVar15 = local_30;
      goto joined_r0x00581be8;
    }
  }
  else {
    pvVar5 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x19c);
    if (pvVar5 == (void *)0x0) {
      iVar17 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4);
      if (iVar17 == 0) {
        FUN_00402690(local_2c,"`8no object selected\n",0x15);
        goto LAB_005827b3;
      }
      iVar10 = *(int *)(iVar17 + 0x54);
      if (iVar10 == 1) {
        uVar15 = 0xf;
        pcVar16 = "`2Type: `$Star\n";
LAB_00581482:
        FUN_00402690(local_2c,pcVar16,uVar15);
      }
      else {
        if (iVar10 == 2) {
          pcVar16 = "`2Type: `7Moon\n";
          uVar15 = 0xf;
          goto LAB_00581482;
        }
        if (iVar10 == 0) {
          if (*(float *)(iVar17 + 0xc0) <= 0.0) {
            pcVar16 = "`2Type: `7Planet\n";
            uVar15 = 0x11;
          }
          else {
            pcVar16 = "`2Type: `0Planet\n";
            uVar15 = 0x11;
          }
          goto LAB_00581482;
        }
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Name: `!%s\n");
      local_8._0_1_ = 0x35;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      local_8._0_1_ = 0;
      FUN_00401b20((int *)local_8c);
      if (*(int *)(iVar17 + 0x58) != 0) {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Orb.: `7%s\n");
        local_8._0_1_ = 0x36;
        puVar7 = (undefined4 *)0x581500;
        FUN_00403490(local_2c,puVar4);
        local_8._0_1_ = 0;
        FUN_00401b20((int *)local_44);
      }
      if (*(int *)(iVar17 + 0x54) == 0) {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Cat.: `7%s\n");
        local_8._0_1_ = 0x37;
        puVar7 = (undefined4 *)0x58153d;
        FUN_00403490(local_2c,puVar4);
        local_8._0_1_ = 0;
        FUN_00401b20((int *)local_74);
      }
      if (0.0 < *(float *)(iVar17 + 0xc0)) {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Pop.: `7%0.1fk\n");
        local_8._0_1_ = 0x38;
        puVar7 = (undefined4 *)0x581582;
        FUN_00403490(local_2c,puVar4);
        local_8._0_1_ = 0;
        FUN_00401b20((int *)local_5c);
      }
      if (*(int *)(iVar17 + 0x54) != 1) {
        if (*(int *)(iVar17 + 0xc4) == 0) {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_a4,"`2Hab.: `8%s\n");
          local_8._0_1_ = 0x39;
        }
        else {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_a4,"`2Hab.: `7%s\n");
          local_8._0_1_ = 0x3b;
        }
        puVar7 = (undefined4 *)0x5815e6;
        FUN_00403490(local_2c,puVar4);
        local_8._0_1_ = 0;
        FUN_00401b20((int *)local_a4);
      }
      local_c8 = &stack0xffffff10;
      iVar17 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4);
      fVar6 = (float)*(double *)(iVar17 + 0x28);
      fVar21 = (float)*(double *)(iVar17 + 0x20);
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff10,fVar21,fVar6);
      local_8._0_1_ = 0x3c;
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff08,
                          (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28),
                          (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30));
      local_8._0_1_ = 0;
      FUN_00592f80(fVar21,fVar6,(float)puVar7);
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Brg.: `%%%.2f^\n");
      local_8._0_1_ = 0x3d;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      local_8._0_1_ = 0;
      FUN_00401b20((int *)local_8c);
      iVar17 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4);
      cocos2d::Vec2::Vec2((Vec2 *)&local_cc,(float)*(double *)(iVar17 + 0x20),
                          (float)*(double *)(iVar17 + 0x28));
      local_8._0_1_ = 0x3e;
      cocos2d::Vec2::Vec2((Vec2 *)&local_d8,(float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28)
                          ,(float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30));
      local_8._0_1_ = 0x3f;
      cocos2d::Vec2::getDistance((Vec2 *)&local_d8,(Vec2 *)&local_cc);
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Dist: `7%.2fGm");
      local_8._0_1_ = 0x40;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      FUN_00401b20((int *)local_8c);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_d8);
      local_8._0_1_ = 0;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_cc);
    }
    else {
      FUN_00403640(local_2c,"`2Sns.: ",8);
      puVar4 = (undefined4 *)FUN_00509160(pvVar5,(undefined1 *)local_44);
      local_8._0_1_ = 9;
      puVar7 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar7 = (undefined4 *)*puVar4;
      }
      FUN_00403640(local_2c,puVar7,puVar4[4]);
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pvVar13 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar13 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar13);
      }
      FUN_00403640(local_2c,&DAT_005e75f8,1);
      if (((*(char *)((int)pvVar5 + 0x45) == '\0') ||
          (iVar10 = *(int *)((int)pvVar5 + 0xe0), iVar10 == 0)) || (iVar10 == 1)) {
        FUN_00591e00((undefined1 *)local_44,&DAT_005ce00c);
        local_8._0_1_ = 10;
        FUN_00591e00((undefined1 *)local_5c,&DAT_005ce00c);
        local_8._0_1_ = 0xb;
        FUN_00591e00((undefined1 *)local_a4,&DAT_005ce00c);
        local_8._0_1_ = 0xc;
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Name: `0%s\n");
        local_8._0_1_ = 0xd;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_2c,puVar7,puVar4[4]);
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Reg.: %s\n");
        local_8._0_1_ = 0xe;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_2c,puVar7,puVar4[4]);
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Clss: %s\n");
        local_8._0_1_ = 0xf;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_2c,puVar7,puVar4[4]);
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        local_ac = 0;
        local_a8 = 0xf;
        local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
        FUN_00402690(local_bc,"`%unknown",9);
        local_8._0_1_ = 0x10;
        if (*(float *)((int)pvVar5 + 0x128) == -1.0) {
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Sol.: n/a\n");
          local_8._0_1_ = 0x11;
          uVar15 = puVar7[5];
        }
        else {
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Sol.: %.0f%%\n");
          local_8._0_1_ = 0x12;
          uVar15 = puVar7[5];
        }
        puVar4 = puVar7;
        if (0xf < uVar15) {
          puVar4 = (undefined4 *)*puVar7;
        }
        FUN_00403640(local_2c,puVar4,puVar7[4]);
        local_8._0_1_ = 0x10;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        if ((*(int *)((int)pvVar5 + 0x130) == 0) ||
           (uVar8 = FUN_0050c5f0(*(int *)((int)pvVar5 + 0x130)), (char)uVar8 == '\0')) {
          if ((*(int *)((int)pvVar5 + 0x130) != 0) &&
             (uVar8 = FUN_0050c5f0(*(int *)((int)pvVar5 + 0x130)), (char)uVar8 == '\0')) {
            pcVar16 = "inactive";
            uVar15 = 8;
            goto LAB_00582472;
          }
        }
        else {
          uVar15 = 6;
          pcVar16 = "active";
LAB_00582472:
          FUN_00402690(local_bc,pcVar16,uVar15);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2RCTR: %s\n");
        local_8._0_1_ = 0x13;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_2c,puVar7,puVar4[4]);
        local_8._0_1_ = 0x10;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        if (*(char *)((int)pvVar5 + 0x10c) == '\0') {
          uVar15 = 0xd;
          pcVar16 = "`2IFF : `@no\n";
        }
        else {
          uVar15 = 0xc;
          pcVar16 = "`2IFF : yes\n";
        }
        FUN_00403640(local_2c,pcVar16,uVar15);
        bVar2 = 1.0 <= *(float *)((int)pvVar5 + 0x40);
        if (bVar2) {
          FUN_00591e00((undefined1 *)local_8c,"%.0f`2s ago");
          local_8._0_1_ = 0x14;
          local_c0 = (undefined1 *)0x1;
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2LDT.: %s\n");
        local_8 = 0x15;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_2c,puVar7,puVar4[4]);
        local_8._0_1_ = 0x14;
        if (0xf < local_60) {
          pvVar13 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar13 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        local_8._0_1_ = 0x10;
        local_8._1_3_ = 0;
        if ((bVar2) && (0xf < local_78)) {
          pvVar13 = local_8c[0];
          if ((0xfff < local_78 + 1) &&
             (pvVar13 = *(void **)((int)local_8c[0] + -4),
             0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
          FUN_005adb3f(pvVar13);
        }
        if ((((*(float *)((int)pvVar5 + 0x118) == 0.0) &&
             (iVar17 = *(int *)((int)pvVar5 + 0x130), iVar17 != 0)) &&
            (*(char *)(*(int *)(iVar17 + 0x40) + 0x34) != '\0')) &&
           (iVar17 = *(int *)(iVar17 + 0x44), iVar17 != 0)) {
          iVar10 = *(int *)(iVar17 + 0x124);
          if (((iVar10 == 0) || (*(int *)(iVar10 + 0x248) != 1)) &&
             (iVar17 = *(int *)(iVar17 + 0x70), iVar17 != 8)) {
            if (((iVar10 == 0) || (*(int *)(iVar10 + 0x248) != 2)) && (iVar17 != 7)) {
              if ((iVar17 != 1) && (iVar17 != 2)) goto LAB_005826a8;
              pcVar16 = "`2Typ.: `0Merchant\n";
              uVar15 = 0x13;
            }
            else {
              pcVar16 = "`2Typ.: `!Authority\n";
              uVar15 = 0x14;
            }
          }
          else {
            pcVar16 = "`2Typ.: `!Military\n";
            uVar15 = 0x13;
          }
          FUN_00403640(local_2c,pcVar16,uVar15);
        }
LAB_005826a8:
        local_8._0_1_ = 0xc;
        if (0xf < local_a8) {
          pvVar5 = local_bc[0];
          if ((0xfff < local_a8 + 1) &&
             (pvVar5 = *(void **)((int)local_bc[0] + -4),
             0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar5)))) goto LAB_00581409;
          FUN_005adb3f(pvVar5);
        }
        local_8._0_1_ = 0xb;
        local_ac = 0;
        local_a8 = 0xf;
        local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
        if (0xf < local_90) {
          pvVar5 = local_a4[0];
          if ((0xfff < local_90 + 1) &&
             (pvVar5 = *(void **)((int)local_a4[0] + -4),
             0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar5)))) goto LAB_00581409;
          FUN_005adb3f(pvVar5);
        }
        local_8._0_1_ = 10;
        local_94 = 0;
        local_90 = 0xf;
        local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
        if (0xf < local_48) {
          pvVar5 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar5 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) goto LAB_00581409;
          FUN_005adb3f(pvVar5);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        pvVar5 = local_44[0];
        uVar15 = local_30;
      }
      else if (iVar10 == 2) {
        FUN_00403640(local_2c,"`2Type: `$Explosion\n",0x14);
        bVar2 = 1.0 <= *(float *)((int)pvVar5 + 0x40);
        if (bVar2) {
          FUN_00591e00((undefined1 *)local_44,"`7%.0f`2s ago");
          local_8._0_1_ = 0x16;
          local_c0 = (undefined1 *)0x2;
        }
        puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2LDT.: %s\n");
        local_8 = 0x17;
        FUN_00403490(local_2c,puVar7);
        local_8 = CONCAT31(local_8._1_3_,0x16);
        if (0xf < local_48) {
          pvVar5 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar5 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_8._0_1_ = 0;
        local_8._1_3_ = 0;
        pvVar5 = local_44[0];
        uVar15 = local_30;
        if (!bVar2) goto LAB_005827b3;
      }
      else {
        iVar1 = *(int *)((int)pvVar5 + 0xd8);
        if (iVar1 == 2) {
          FUN_00403640(local_2c,"`2Type: `%Jumpgate\n",0x13);
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Name: `%%%s\n");
          local_8._0_1_ = 0x18;
          FUN_00403490(local_2c,puVar7);
          pvVar5 = local_44[0];
          uVar15 = local_30;
        }
        else {
          if (iVar10 != 5) {
            if (iVar10 == 6) {
              FUN_00403640(local_2c,"`2Type: `!Cargo Pods\n",0x15);
              FUN_00591e00((undefined1 *)local_44,&DAT_005ce00c);
              local_8._0_1_ = 0x1f;
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Reg.: %s\n");
              local_8._0_1_ = 0x20;
              FUN_00403490(local_2c,puVar7);
              local_8._0_1_ = 0x1f;
              if (0xf < local_60) {
                pvVar13 = local_74[0];
                if ((0xfff < local_60 + 1) &&
                   (pvVar13 = *(void **)((int)local_74[0] + -4),
                   0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
                FUN_005adb3f(pvVar13);
              }
              FUN_00508e80(pvVar5,(undefined1 *)local_74);
              local_8._0_1_ = 0x21;
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Sol.: %s\n");
              local_8._0_1_ = 0x22;
              FUN_00403490(local_2c,puVar7);
              FUN_00401b20((int *)local_8c);
              local_8._0_1_ = 0x1f;
              FUN_00401b20((int *)local_74);
              if (1.0 <= *(float *)((int)pvVar5 + 0x40)) {
                FUN_00591e00((undefined1 *)local_74,"`7%.0f`2s ago");
                local_8._0_1_ = 0x23;
                iVar17 = 8;
                local_c0 = (undefined1 *)0x8;
              }
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2LDT.: %s\n");
              local_8 = 0x24;
              FUN_00403490(local_2c,puVar7);
              FUN_00401b20((int *)local_8c);
              local_8._0_1_ = 0x1f;
            }
            else {
              if (iVar10 != 4) {
                if (iVar10 == 7) {
                  FUN_00403640(local_2c,"`2Type: `^Derelict\n",0x13);
                  if (*(float *)((int)pvVar5 + 0x128) <= 63.0) {
                    FUN_00403640(local_2c,"`2Reg.: `%unknown\n",0x12);
                  }
                  else {
                    FUN_00591e00((undefined1 *)local_44,&DAT_005ce00c);
                    local_8._0_1_ = 0x2b;
                    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Reg.: %s\n");
                    local_8._0_1_ = 0x2c;
                    FUN_00403490(local_2c,puVar7);
                    FUN_00401b20((int *)local_8c);
                    local_8._0_1_ = 0;
                    FUN_00401b20((int *)local_44);
                  }
                  FUN_00508e80(pvVar5,(undefined1 *)local_44);
                  local_8._0_1_ = 0x2d;
                  puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Sol.: %s\n");
                  local_8._0_1_ = 0x2e;
                  FUN_00403490(local_2c,puVar7);
                  FUN_00401b20((int *)local_8c);
                  local_8._0_1_ = 0;
                  FUN_00401b20((int *)local_44);
                  if (1.0 <= *(float *)((int)pvVar5 + 0x40)) {
                    FUN_00591e00((undefined1 *)local_44,"`7%.0f`2s ago");
                    local_8._0_1_ = 0x2f;
                    iVar17 = 0x20;
                    local_c0 = (undefined1 *)0x20;
                  }
                  puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2LDT.: %s\n");
                  local_8 = 0x30;
                  FUN_00403490(local_2c,puVar7);
                  FUN_00401b20((int *)local_8c);
                  local_8._0_1_ = 0;
                  local_8._1_3_ = 0;
                  if (iVar17 != 0) {
                    FUN_00401b20((int *)local_44);
                  }
                }
                else {
                  if (iVar1 == 1) {
                    iVar17 = *(int *)((int)pvVar5 + 0x130);
                    if ((iVar17 == 0) || (*(char *)(iVar17 + 0x388) == '\0')) {
                      if ((*(char *)(*(int *)(iVar17 + 0x40) + 0x34) == '\0') &&
                         (cVar3 = FUN_00509940((int)pvVar5), cVar3 == '\0')) {
                        uVar15 = 0x14;
                        pcVar16 = "`2Type  : `%Unknown\n";
                      }
                      else {
                        pcVar16 = "`2Type  : `%Starbase\n";
                        uVar15 = 0x15;
                      }
                      FUN_00403640(local_2c,pcVar16,uVar15);
                      puVar7 = (undefined4 *)
                               FUN_00591e00((undefined1 *)local_8c,"`2Name  : `%%%s\n");
                      local_8._0_1_ = 0x33;
                    }
                    else {
                      FUN_00403640(local_2c,"`2Type  : `!Colony Vessel\n",0x1a);
                      puVar7 = (undefined4 *)
                               FUN_00591e00((undefined1 *)local_8c,"`2Name  : `%%%s\n");
                      local_8._0_1_ = 0x31;
                      FUN_00403490(local_2c,puVar7);
                      local_8._0_1_ = 0;
                      FUN_00401b20((int *)local_8c);
                      puVar7 = (undefined4 *)
                               FUN_00591e00((undefined1 *)local_8c,"`2Class : `%%%s\n");
                      local_8._0_1_ = 0x32;
                    }
                  }
                  else {
                    if (iVar1 != 3) goto LAB_005827b3;
                    FUN_00403640(local_2c,"`2Type  : `%Depot\n",0x12);
                    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Name  : `%%%s\n");
                    local_8._0_1_ = 0x34;
                  }
                  FUN_00403490(local_2c,puVar7);
                  local_8._0_1_ = 0;
                  FUN_00401b20((int *)local_8c);
                }
                goto LAB_005827b3;
              }
              FUN_00403640(local_2c,"`2Type: `^Debris\n",0x11);
              FUN_00591e00((undefined1 *)local_44,&DAT_005ce00c);
              local_8._0_1_ = 0x25;
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Reg.: %s\n");
              local_8._0_1_ = 0x26;
              FUN_00403490(local_2c,puVar7);
              local_8._0_1_ = 0x25;
              FUN_00401b20((int *)local_8c);
              FUN_00508e80(pvVar5,(undefined1 *)local_74);
              local_8._0_1_ = 0x27;
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Sol.: %s\n");
              local_8._0_1_ = 0x28;
              FUN_00403490(local_2c,puVar7);
              FUN_00401b20((int *)local_8c);
              local_8._0_1_ = 0x25;
              FUN_00401b20((int *)local_74);
              if (1.0 <= *(float *)((int)pvVar5 + 0x40)) {
                FUN_00591e00((undefined1 *)local_74,"`7%.0f`2s ago");
                iVar17 = 0x10;
                local_8._0_1_ = 0x29;
                local_c0 = (undefined1 *)0x10;
              }
              puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2LDT.: %s\n");
              local_8 = 0x2a;
              FUN_00403490(local_2c,puVar7);
              FUN_00401b20((int *)local_8c);
              local_8._0_1_ = 0x25;
            }
            local_8._1_3_ = 0;
            if (iVar17 != 0) {
              FUN_00401b20((int *)local_74);
            }
            local_8._0_1_ = 0;
            FUN_00401b20((int *)local_44);
            goto LAB_005827b3;
          }
          FUN_00403640(local_2c,"`2Type: `$Beacon\n",0x11);
          FUN_00591e00((undefined1 *)local_a4,&DAT_005ce00c);
          local_8._0_1_ = 0x19;
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Reg.: %s\n");
          local_8._0_1_ = 0x1a;
          FUN_00403490(local_2c,puVar7);
          local_8._0_1_ = 0x19;
          if (0xf < local_30) {
            pvVar13 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar13 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
            FUN_005adb3f(pvVar13);
          }
          FUN_00508e80(pvVar5,(undefined1 *)local_44);
          local_8._0_1_ = 0x1b;
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Sol.: %s\n");
          local_8._0_1_ = 0x1c;
          FUN_00403490(local_2c,puVar7);
          local_8._0_1_ = 0x1b;
          if (0xf < local_48) {
            pvVar13 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar13 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
            FUN_005adb3f(pvVar13);
          }
          local_8._0_1_ = 0x19;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          if (0xf < local_30) {
            pvVar13 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar13 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) goto LAB_00581409;
            FUN_005adb3f(pvVar13);
          }
          bVar2 = 1.0 <= *(float *)((int)pvVar5 + 0x40);
          if (bVar2) {
            FUN_00591e00((undefined1 *)local_44,"`7%.0f`2s ago");
            local_8._0_1_ = 0x1d;
            local_c0 = &DAT_00000004;
          }
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2LDT.: %s\n");
          local_8 = 0x1e;
          FUN_00403490(local_2c,puVar7);
          local_8._0_1_ = 0x1d;
          if (0xf < local_48) {
            pvVar5 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar5 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) goto LAB_00581409;
            FUN_005adb3f(pvVar5);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          local_8._0_1_ = 0x19;
          local_8._1_3_ = 0;
          pvVar5 = local_a4[0];
          uVar15 = local_90;
          if ((bVar2) && (0xf < local_30)) {
            pvVar5 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar5 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_00581409;
            FUN_005adb3f(pvVar5);
            pvVar5 = local_a4[0];
            uVar15 = local_90;
          }
        }
      }
joined_r0x00581be8:
      local_8._0_1_ = 0;
      if (0xf < uVar15) {
        local_8._0_1_ = 0;
        pvVar13 = pvVar5;
        if ((0xfff < uVar15 + 1) &&
           (pvVar13 = *(void **)((int)pvVar5 + -4), 0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar13))
           )) goto LAB_00581409;
        FUN_005adb3f(pvVar13);
      }
    }
  }
LAB_005827b3:
  uVar15 = local_18;
  pppppppbVar20 = local_2c[0];
  this = (byte *******)(local_d0 + 0x10a);
  pppppppbVar9 = this;
  if (0xf < (uint)local_d0[0x10f]) {
    pppppppbVar9 = (byte *******)*this;
  }
  pppppppbVar14 = (byte *******)local_2c;
  if (0xf < local_18) {
    pppppppbVar14 = local_2c[0];
  }
  uVar18 = FUN_004031f0((byte *)pppppppbVar14,local_1c,(byte *)pppppppbVar9,local_d0[0x10e]);
  if ((char)uVar18 == '\0') {
    if ((byte ********)this != local_2c) {
      pppppppbVar9 = (byte *******)local_2c;
      if (0xf < uVar15) {
        pppppppbVar9 = pppppppbVar20;
      }
      FUN_00402690(this,pppppppbVar9,local_1c);
    }
    (**(code **)(*local_d0 + 0x294))();
    uVar15 = local_18;
    pppppppbVar20 = local_2c[0];
  }
  if (0xf < uVar15) {
    pppppppbVar9 = pppppppbVar20;
    if ((0xfff < uVar15 + 1) &&
       (pppppppbVar9 = (byte *******)pppppppbVar20[-1],
       (byte *)0x1f < (byte *)((int)pppppppbVar20 + (-4 - (int)pppppppbVar9)))) {
LAB_00581409:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppbVar9);
  }
LAB_00582845:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_00582870(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Selector::vftable;
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0x138))(1);
    *(undefined4 *)((int)this + 0x430) = 0;
  }
  if (*(int **)((int)this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x434) + 0x138))(1);
    *(undefined4 *)((int)this + 0x434) = 0;
  }
  if (*(int **)((int)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x438) + 0x138))(1);
    *(undefined4 *)((int)this + 0x438) = 0;
  }
  if (*(int **)((int)this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x43c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x43c) = 0;
  }
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1);
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_005829a0(int param_1)

{
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int **)(param_1 + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x434) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x438) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  return;
}


void __fastcall FUN_00582a60(int *param_1)

{
  int iVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  Scale9Sprite *pSVar4;
  Ref *pRVar5;
  char *pcVar6;
  void *pvVar7;
  void *in_stack_ffffff84;
  void *pvVar8;
  Size local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  char local_2e;
  char local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9f66;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  uVar2 = FUN_004dd820(param_1[0xfd]);
  local_2d = (char)uVar2;
  local_2e = FUN_004dd980(param_1[0xfd]);
  if ((char)uVar2 == '\0') {
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 1;
  }
  else {
    pcVar6 = "%c_Button_Depressed.png";
    if ((char)param_1[0x112] == '\0') {
      pcVar6 = "%c_Button_Undepressed.png";
    }
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar6);
    local_8 = 0;
  }
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8 = 0xffffffff;
  param_1[0x10b] = (int)pSVar4;
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_00582b29;
    FUN_005adb3f(pvVar8);
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 2;
  (**(code **)(*(int *)param_1[0x10b] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10b] + 0x48))();
  iVar1 = *(int *)param_1[0x10b];
  cocos2d::Size::Size((Size *)&local_38,11.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff84,"`%c`a3");
  pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff84);
  param_1[0x10c] = (int)pRVar5;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 3;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10c] + 0x48))();
  pvVar8 = (void *)0x582c8c;
  (**(code **)(*param_1 + 0x108))();
  if ((local_2e == '\0') && (local_2d == '\0')) {
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_TextBox_Greyed.png");
    local_8 = 4;
  }
  else {
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_TextBox_Unselected.png");
    local_8 = 5;
  }
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8 = 0xffffffff;
  param_1[0x10f] = (int)pSVar4;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00582b29;
    FUN_005adb3f(pvVar7);
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 6;
  (**(code **)(*(int *)param_1[0x10f] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10f] + 0x48))();
  iVar1 = *(int *)param_1[0x10f];
  cocos2d::Size::Size((Size *)&local_38,(float)param_1[0x113],12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_004024e0(&stack0xffffff84,(undefined4 *)param_1[0x111]);
  pRVar5 = FUN_0055cb00((Node)0x0,pvVar8);
  param_1[0x110] = (int)pRVar5;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 7;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x110] + 0x48))();
  pvVar8 = (void *)0x582e3e;
  (**(code **)(*param_1 + 0x108))();
  if (local_2e == '\0') {
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 9;
    pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
    local_8 = 0xffffffff;
    param_1[0x10d] = (int)pSVar4;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00582b29;
      FUN_005adb3f(pvVar7);
    }
  }
  else {
    pcVar6 = "%c_Button_Depressed.png";
    if (*(char *)((int)param_1 + 0x449) == '\0') {
      pcVar6 = "%c_Button_Undepressed.png";
    }
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar6);
    local_8 = 8;
    pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
    local_8 = 0xffffffff;
    param_1[0x10d] = (int)pSVar4;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
LAB_00582b29:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 10;
  (**(code **)(*(int *)param_1[0x10d] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10d] + 0x48))();
  iVar1 = *(int *)param_1[0x10d];
  cocos2d::Size::Size((Size *)&local_38,11.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff84,"`%c`a4");
  pRVar5 = FUN_0055cb00((Node)0x0,pvVar8);
  param_1[0x10e] = (int)pRVar5;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 0xb;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10e] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  iVar1 = *param_1;
  cocos2d::Size::Size(local_40,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005830f0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_004dd820(param_1[0xfd]);
  bVar1 = FUN_004dd980(param_1[0xfd]);
  if (((char)uVar2 != (char)param_1[0x10a]) || (bVar1 != (bool)*(char *)((int)param_1 + 0x429))) {
    *(bool *)((int)param_1 + 0x429) = bVar1;
    *(char *)(param_1 + 0x10a) = (char)uVar2;
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


void __thiscall FUN_00583140(void *this,float param_1)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_005832a0(this,param_1);
  if ((char)iVar2 != '\0') {
    (**(code **)(*(int *)this + 0x294))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005831b0(void *this,float param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7329;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_005832a0(this,param_1);
  uVar3 = FUN_004dd820(*(undefined4 *)((int)this + 0x3f4));
  bVar1 = FUN_004dd980(*(undefined4 *)((int)this + 0x3f4));
  if ((*(char *)((int)this + 0x448) == '\0') || ((char)uVar3 == '\0')) {
    if ((*(char *)((int)this + 0x449) == '\0') || (!bVar1)) goto LAB_00583264;
    FUN_004ddcd0(*(undefined4 *)((int)this + 0x3f4));
    iVar5 = 8;
  }
  else {
    FUN_004ddb20(*(undefined4 *)((int)this + 0x3f4));
    iVar5 = 9;
  }
  iVar6 = -1;
  iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
  this_00 = (void *)FUN_00402f60();
  FUN_00557fb0(this_00,iVar4,iVar5,iVar6);
LAB_00583264:
  *(undefined2 *)((int)this + 0x448) = 0;
  (**(code **)(*(int *)this + 0x294))(uVar2);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00583290(int param_1)

{
  *(undefined2 *)(param_1 + 0x448) = 0;
  return;
}


int __thiscall FUN_005832a0(void *this,float param_1)

{
  bool bVar1;
  uint uVar2;
  uint3 uVar3;
  char cVar4;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  uVar2 = FUN_004dd820(*(undefined4 *)((int)this + 0x3f4));
  bVar1 = FUN_004dd980(*(undefined4 *)((int)this + 0x3f4));
  cVar4 = '\0';
  if ((((char)uVar2 != '\0') && (0.0 <= param_1)) && (param_1 < 11.0)) {
    cVar4 = '\x01';
  }
  if ((bVar1) && ((float)(*(int *)((int)this + 0x2a0) + -0xb) <= param_1)) {
    local_18 = (uint)(param_1 <= (float)*(int *)((int)this + 0x2a0));
  }
  uVar3 = (uint3)(local_18 >> 8);
  if ((cVar4 == *(char *)((int)this + 0x448)) && ((char)local_18 == *(char *)((int)this + 0x449))) {
    ExceptionList = local_10;
    return (uint)uVar3 << 8;
  }
  *(char *)((int)this + 0x449) = (char)local_18;
  *(char *)((int)this + 0x448) = cVar4;
  ExceptionList = local_10;
  return CONCAT31(uVar3,1);
}


Node * __thiscall FUN_005833a0(void *this,byte param_1)

{
  FUN_005833d0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_005833d0(Node *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_SelectTray::vftable;
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x438) + 0x138))(1,uVar3);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  if (*(int **)(param_1 + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x448) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x44c);
  if (*(int *)(param_1 + 0x450) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x44c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x44c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x450) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x450) = iVar5;
  FUN_004025a0((int *)(param_1 + 0x45c));
  pvVar2 = *(void **)(param_1 + 0x44c);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x454) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x44c) = 0;
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00583580(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x438) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  if (*(int **)(param_1 + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x448) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x44c);
  if (*(int *)(param_1 + 0x450) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x44c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x44c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x450) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x450) = iVar2;
  return;
}


void __fastcall FUN_00583670(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  basic_string<> *pbVar7;
  Scale9Sprite *pSVar8;
  Ref *pRVar9;
  byte *pbVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  void *in_stack_ffffff68;
  void *pvVar14;
  char *pcVar15;
  void *in_stack_ffffff7c;
  Size local_48 [4];
  byte *local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  Ref *local_34;
  char local_2e;
  char local_2d;
  void *local_2c [3];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9fee;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  piVar5 = FUN_004dd090(&local_20,param_1[0xfd]);
  piVar4 = param_1 + 0x117;
  if (piVar4 != piVar5) {
    FUN_004025a0(piVar4);
    *piVar4 = *piVar5;
    param_1[0x118] = piVar5[1];
    param_1[0x119] = piVar5[2];
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
  }
  FUN_004025a0(&local_20);
  param_1[0x10a] = (int)(param_1[0xa9] + -6 + (param_1[0xa9] + -6 >> 0x1f & 7U)) >> 3;
  param_1[0x10d] = param_1[0xa8] + -0xd;
  uVar6 = FUN_004dd820(param_1[0xfd]);
  local_2d = (char)uVar6;
  local_2e = FUN_004dd980(param_1[0xfd]);
  pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_TextBox_Unselected.png");
  local_8 = 0;
  pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar7);
  local_8 = 0xffffffff;
  param_1[0x112] = (int)pSVar8;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_38 = 0;
  local_34 = (Ref *)0x0;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x112] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x112] + 0x48))();
  iVar12 = *(int *)param_1[0x112];
  cocos2d::Size::Size((Size *)&local_1c,(float)param_1[0x10d],(float)param_1[0xa9]);
  (**(code **)(iVar12 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  iVar12 = *piVar4;
  local_3c = 0;
  iVar13 = param_1[0x118] - iVar12 >> 0x1f;
  if ((param_1[0x118] - iVar12) / 0x18 + iVar13 != iVar13) {
    iVar13 = 0;
    local_40 = 0;
    do {
      if ((param_1[0x10c] <= (int)local_3c) && ((int)local_3c <= param_1[0x10a] + param_1[0x10c])) {
        pbVar2 = (byte *)param_1[0x116];
        pbVar1 = (byte *)(iVar13 + iVar12);
        local_44 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          local_44 = *(byte **)pbVar2;
        }
        local_34 = *(Ref **)(pbVar1 + 0x14);
        pbVar10 = pbVar1;
        if ((Ref *)&DAT_0000000f < local_34) {
          pbVar10 = *(byte **)pbVar1;
        }
        uVar6 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),local_44,*(uint *)(pbVar2 + 0x10));
        if ((char)uVar6 == '\0') {
          pcVar15 = "`7%s";
        }
        else {
          pcVar15 = "`%%`a4%s";
        }
        FUN_00591e00(&stack0xffffff7c,pcVar15);
        pRVar9 = FUN_0055cb00((Node)0x0,in_stack_ffffff7c);
        local_1c = 0;
        local_18 = 0x3f800000;
        local_8 = 2;
        local_34 = pRVar9;
        (**(code **)(*(int *)pRVar9 + 0xa0))();
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar9 + 0x48))();
        in_stack_ffffff7c = (void *)0x583979;
        (**(code **)(*param_1 + 0x108))();
        local_40 = local_40 + 8;
        puVar3 = (undefined4 *)param_1[0x114];
        if ((undefined4 *)param_1[0x115] == puVar3) {
          FUN_00414080(param_1 + 0x113,puVar3,&local_34);
        }
        else {
          *puVar3 = pRVar9;
          param_1[0x114] = param_1[0x114] + 4;
        }
      }
      iVar12 = param_1[0x117];
      local_3c = local_3c + 1;
      iVar13 = iVar13 + 0x18;
    } while (local_3c < (uint)((param_1[0x118] - iVar12) / 0x18));
  }
  if (local_2d == '\0') {
    pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 4;
  }
  else {
    pcVar15 = "%c_Button_Depressed.png";
    if ((char)param_1[0x11a] == '\0') {
      pcVar15 = "%c_Button_Undepressed.png";
    }
    pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar15);
    local_8 = 3;
  }
  pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar7);
  local_8 = 0xffffffff;
  param_1[0x10e] = (int)pSVar8;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00583a47;
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0x3f800000;
  local_8 = 5;
  (**(code **)(*(int *)param_1[0x10e] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10e] + 0x48))();
  iVar12 = *(int *)param_1[0x10e];
  cocos2d::Size::Size((Size *)&local_1c,12.0,12.0);
  (**(code **)(iVar12 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff68,"`%c`a1");
  pRVar9 = FUN_0055cb00((Node)0x0,in_stack_ffffff68);
  param_1[0x10f] = (int)pRVar9;
  local_1c = 0x3f000000;
  local_18 = 0x3f000000;
  local_8 = 6;
  (**(code **)(*(int *)pRVar9 + 0xa0))();
  local_8 = 0xffffffff;
  piVar4 = (int *)param_1[0x10e];
  iVar12 = *(int *)param_1[0x10f];
  (**(code **)(*(int *)param_1[0x10e] + 0x74))();
  (**(code **)(*piVar4 + 0x6c))();
  (**(code **)(iVar12 + 0x48))();
  pvVar14 = (void *)0x583bd8;
  (**(code **)(*param_1 + 0x108))();
  if (local_2e == '\0') {
    pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 8;
    pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar7);
    local_8 = 0xffffffff;
    param_1[0x110] = (int)pSVar8;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_00583a47;
      FUN_005adb3f(pvVar11);
    }
  }
  else {
    pcVar15 = "%c_Button_Depressed.png";
    if (*(char *)((int)param_1 + 0x469) == '\0') {
      pcVar15 = "%c_Button_Undepressed.png";
    }
    pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar15);
    local_8 = 7;
    pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar7);
    local_8 = 0xffffffff;
    param_1[0x110] = (int)pSVar8;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_00583a47:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0;
  local_8 = 9;
  (**(code **)(*(int *)param_1[0x110] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x110] + 0x48))();
  iVar12 = *(int *)param_1[0x110];
  cocos2d::Size::Size((Size *)&local_1c,12.0,12.0);
  (**(code **)(iVar12 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff68,"`%c`a2");
  pRVar9 = FUN_0055cb00((Node)0x0,pvVar14);
  param_1[0x111] = (int)pRVar9;
  local_1c = 0x3f000000;
  local_18 = 0x3f000000;
  local_8 = 10;
  (**(code **)(*(int *)pRVar9 + 0xa0))();
  local_8 = 0xffffffff;
  piVar4 = (int *)param_1[0x110];
  iVar12 = *(int *)param_1[0x111];
  (**(code **)(*(int *)param_1[0x110] + 0x74))();
  (**(code **)(*piVar4 + 0x6c))();
  (**(code **)(iVar12 + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  iVar12 = *param_1;
  cocos2d::Size::Size(local_48,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar12 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00583e80(void *this,float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_00584160(this,param_1,param_2);
  if ((char)iVar2 != '\0') {
    (**(code **)(*(int *)this + 0x294))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00583ef0(void *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *this_00;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005ca029;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00584160(this,param_1,param_2);
  uVar4 = FUN_004dd820(*(undefined4 *)((int)this + 0x3f4));
  bVar3 = FUN_004dd980(*(undefined4 *)((int)this + 0x3f4));
  if ((*(char *)((int)this + 0x468) == '\0') || ((char)uVar4 == '\0')) {
    if ((*(char *)((int)this + 0x469) == '\0') || (!bVar3)) {
      if (((((param_1 < 2.0) || ((float)(*(int *)((int)this + 0x46c) + 2) < param_1)) ||
           (param_2 < 3.0)) ||
          (((float)(*(int *)((int)this + 0x2a4) + -3) < param_2 ||
           (uVar4 = (uint)((param_2 - 3.0) * 0.125), (int)uVar4 < 0)))) ||
         ((uint)((*(int *)((int)this + 0x460) - *(int *)((int)this + 0x45c)) / 0x18) <= uVar4))
      goto LAB_00584064;
      FUN_00591070("DETAIL","Clicked on option %d");
      FUN_004dded0(*(undefined4 *)((int)this + 0x3f4),*(int *)((int)this + 0x430) + uVar4);
    }
    else {
      FUN_004ddcd0(*(undefined4 *)((int)this + 0x3f4));
    }
    iVar11 = 8;
  }
  else {
    FUN_004ddb20(*(undefined4 *)((int)this + 0x3f4));
    iVar11 = 9;
  }
  iVar12 = -1;
  iVar10 = *(int *)(DAT_0065b5cc + 0xd0);
  this_00 = (void *)FUN_00402f60();
  FUN_00557fb0(this_00,iVar10,iVar11,iVar12);
LAB_00584064:
  if (*(int *)((int)this + 0x458) != 0) {
    uVar9 = 0;
    uVar4 = (*(int *)((int)this + 0x460) - *(int *)((int)this + 0x45c)) / 0x18;
    if (uVar4 != 0) {
      pbVar5 = *(byte **)((int)this + 0x458);
      iVar11 = 0;
      uVar1 = *(uint *)(pbVar5 + 0x14);
      uVar2 = *(uint *)(pbVar5 + 0x10);
      do {
        pbVar8 = (byte *)(*(int *)((int)this + 0x45c) + iVar11);
        if (0xf < uVar1) {
          pbVar5 = *(byte **)pbVar5;
        }
        pbVar7 = pbVar8;
        if (0xf < *(uint *)(pbVar8 + 0x14)) {
          pbVar7 = *(byte **)pbVar8;
        }
        uVar6 = FUN_004031f0(pbVar7,*(uint *)(pbVar8 + 0x10),pbVar5,uVar2);
        if ((char)uVar6 != '\0') {
          if (uVar9 == 0xffffffff) break;
          iVar11 = *(int *)((int)this + 0x430);
          if (iVar11 <= (int)uVar9) {
            iVar10 = *(int *)((int)this + 0x428);
            if (((int)uVar9 < iVar10 - iVar11) || ((int)uVar9 < iVar10 + iVar11)) break;
            uVar9 = uVar9 - iVar10;
          }
          *(uint *)((int)this + 0x430) = uVar9;
          break;
        }
        pbVar5 = *(byte **)((int)this + 0x458);
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 0x18;
      } while (uVar9 < uVar4);
    }
  }
  *(undefined2 *)((int)this + 0x468) = 0;
  (**(code **)(*(int *)this + 0x294))();
  ExceptionList = local_10;
  return;
}
