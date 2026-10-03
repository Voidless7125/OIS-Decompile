#include "../ois_server.exe.h"


void __fastcall FUN_0053c760(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x65c);
  if (*(int *)(param_1 + 0x660) - iVar1 >> 2 != 0) {
    do {
      cocos2d::Ref::autorelease(*(Ref **)(*(int *)(*(int *)(param_1 + 0x65c) + uVar2 * 4) + 0x18));
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x65c);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x660) - iVar1 >> 2));
  }
  *(int *)(param_1 + 0x660) = iVar1;
  return;
}


void __thiscall FUN_0053c7b0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint in_stack_0000001c;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c554f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar2 = (void *)FUN_005adb0f(0x1c);
  local_8._0_1_ = 1;
  local_18[0] = pvVar2;
  FUN_004024e0(local_30,&param_2);
  local_8._0_1_ = 2;
  FUN_004024e0(pvVar2,local_30);
  *(undefined4 *)((int)pvVar2 + 0x18) = param_1;
  local_8._0_1_ = 1;
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar1 = *(undefined4 **)((int)this + 0x660);
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  if (*(undefined4 **)((int)this + 0x664) == puVar1) {
    local_18[0] = pvVar2;
    FUN_00414080((void *)((int)this + 0x65c),puVar1,local_18);
  }
  else {
    *puVar1 = pvVar2;
    *(int *)((int)this + 0x660) = *(int *)((int)this + 0x660) + 4;
    local_18[0] = pvVar2;
  }
  FUN_00591070("DETAIL","Added element \'%s\'");
  if (0xf < in_stack_0000001c) {
    pvVar2 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar2 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


undefined4 __thiscall FUN_0053c8f0(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar1 = *(int *)((int)this + 0x65c);
  uVar6 = *(int *)((int)this + 0x660) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pbVar9 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar5 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar9 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + uVar7 * 4) + 0x18) + 0x2ec);
        goto LAB_0053c948;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_0053c948:
  if (0xf < in_stack_00000018) {
    pbVar9 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar9 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar9);
  }
  return uVar8;
}


void __fastcall FUN_0053c9a0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = *(void **)(param_1 + 0x100);
  if (pvVar2 != (void *)0x0) {
    iVar3 = *(int *)((int)pvVar2 + 0x20);
    piVar1 = (int *)((int)pvVar2 + 0x20);
    local_8 = 0;
    FUN_004132d0(*(int **)(iVar3 + 4));
    *(int *)(*piVar1 + 4) = iVar3;
    *(int *)*piVar1 = iVar3;
    *(int *)(*piVar1 + 8) = iVar3;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    FUN_005adb3f((void *)*piVar1);
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0053ca40(void *this,int param_1,void *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  uint in_stack_0000001c;
  int iVar10;
  char cVar11;
  byte *in_stack_ffffffb8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c558f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0053c9a0((int)this);
  pvVar3 = (void *)FUN_005adb0f(0x7c);
  local_8._0_1_ = 1;
  FUN_004024e0(&stack0xffffffb8,&param_2);
  puVar4 = FUN_00535e70(pvVar3,in_stack_ffffffb8);
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x100) = puVar4;
  FUN_004024e0(&stack0xffffffb8,&param_2);
  cVar11 = '\0';
  iVar10 = -1;
  local_8._0_1_ = 2;
  puVar4 = FUN_00412870();
  local_8 = (uint)local_8._1_3_ << 8;
  iVar10 = FUN_00438ed0(puVar4,iVar10,cVar11,in_stack_ffffffb8);
  if (iVar10 != 0) {
    pbVar1 = (byte *)(iVar10 + 0x74);
    pbVar8 = pbVar1;
    if (0xf < *(uint *)(iVar10 + 0x88)) {
      pbVar8 = *(byte **)pbVar1;
    }
    uVar5 = FUN_004031f0(pbVar8,*(uint *)(iVar10 + 0x84),(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      FUN_004024e0(&stack0xffffffb8,(undefined4 *)pbVar1);
      iVar6 = FUN_00535d50(in_stack_ffffffb8);
      *(int *)(*(int *)(*(int *)((int)this + 0x100) + 0x1c) + 0x58) = iVar6;
    }
    pbVar1 = (byte *)(iVar10 + 0x5c);
    pbVar8 = pbVar1;
    if (0xf < *(uint *)(iVar10 + 0x70)) {
      pbVar8 = *(byte **)pbVar1;
    }
    uVar5 = FUN_004031f0(pbVar8,*(uint *)(iVar10 + 0x6c),(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      FUN_004024e0(&stack0xffffffb8,(undefined4 *)pbVar1);
      iVar10 = FUN_00535cc0(in_stack_ffffffb8);
      *(int *)(*(int *)(*(int *)((int)this + 0x100) + 0x1c) + 0x54) = iVar10;
    }
  }
  puVar4 = (undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0xa8) = 0;
  puVar7 = puVar4;
  if (0xf < *(uint *)((int)this + 0xac)) {
    puVar7 = (undefined4 *)*puVar4;
  }
  *(undefined1 *)puVar7 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xe4) = 4;
    pcVar2 = "lying";
    do {
      pcVar9 = pcVar2;
      pcVar2 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    FUN_00403640(puVar4,"lying",(uint)(pcVar9 + -0x5e9554));
    FUN_00403640(puVar4,&DAT_0061bc80,1);
    *(undefined4 *)((int)this + 0xe8) = 3;
    pcVar2 = "dead";
    do {
      pcVar9 = pcVar2;
      pcVar2 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    FUN_00403640(puVar4,&DAT_0061fdbc,(uint)(pcVar9 + -0x61fdbc));
  }
  else {
    pcVar2 = (&PTR_s_standing_005dfce4)[*(int *)((int)this + 0xe4)];
    pcVar9 = pcVar2;
    do {
      cVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar11 != '\0');
    FUN_00403640(puVar4,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
    FUN_00403640(puVar4,&DAT_0061bc80,1);
    if (*(int *)((int)this + 0xe4) == 4) {
      pcVar2 = "dead";
      do {
        pcVar9 = pcVar2;
        pcVar2 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      FUN_00403640(puVar4,&DAT_0061fdbc,(uint)(pcVar9 + -0x61fdbc));
    }
    else {
      pcVar2 = (&PTR_s_normal_005dfd04)[*(int *)(param_1 + 0x3c)];
      pcVar9 = pcVar2;
      do {
        cVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar11 != '\0');
      FUN_00403640(puVar4,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
    }
    *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  }
  *(undefined4 *)((int)this + 0x69c) =
       *(undefined4 *)(*(int *)(*(int *)((int)this + 0x100) + 0x1c) + 0x40);
  if (0xf < in_stack_0000001c) {
    pvVar3 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar3 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0053cce0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar1 != pvVar2) {
      do {
        FUN_0047c010((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0x50);
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x50) * 0x50)) &&
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


TypeDescriptor * FUN_0053cd60(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_0053cd70(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


undefined1 * FUN_0053cd90(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  return param_1;
}


void * __thiscall FUN_0053cdc0(void *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c55d0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(this,&param_1);
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_8._0_1_ = 3;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)((int)this + 0x18,uVar1);
    *(undefined4 *)((int)this + 0x3c) = uVar2;
  }
  local_8 = (uint)local_8._1_3_ << 8;
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
  local_8 = 4;
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __thiscall FUN_0053ceb0(void *this,byte param_1)

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
  *(undefined ***)this = Screen_ContractTerminal::vftable;
  if (*(Ref **)((int)this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x24));
  }
  FUN_004025a0((int *)((int)this + 0x34));
  piVar1 = *(int **)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x2c);
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x28);
    }
    piVar2 = piVar1;
    if ((0xfff < (*(int *)((int)this + 0x30) - (int)piVar1 & 0xffffffc0U)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void * __fastcall FUN_0053cfb0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5610;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (0xf < *(uint *)((int)param_1 + 0xa4)) {
    pvVar1 = *(void **)((int)param_1 + 0x90);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0xa4) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0xf;
  *(undefined1 *)((int)param_1 + 0x90) = 0;
  local_8 = 0;
  piVar2 = *(int **)((int)param_1 + 0x8c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)param_1 + 0x68),uVar3);
    *(undefined4 *)((int)param_1 + 0x8c) = 0;
  }
  local_8 = 1;
  piVar2 = *(int **)((int)param_1 + 100);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)param_1 + 0x40));
    *(undefined4 *)((int)param_1 + 100) = 0;
  }
  local_8 = 2;
  piVar2 = *(int **)((int)param_1 + 0x3c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)param_1 + 0x18));
    *(undefined4 *)((int)param_1 + 0x3c) = 0;
  }
  FUN_005adb3f(param_1);
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_0053d0d0(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffdb4;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  uint in_stack_fffffdec;
  byte *pbVar6;
  code *local_1ec;
  code *local_1e8;
  undefined4 *local_1e4;
  void *local_1e0;
  undefined4 local_1dc [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5709;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0x2a;
  *(undefined4 *)(param_1 + 0x18) = 0x18;
  FUN_0043d780((int)local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(param_1 + 0x14);
  local_1c8 = *(undefined4 *)(param_1 + 0x18);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffdec & 0xffffff00);
  local_1e0 = pvVar1;
  FUN_00402690(&stack0xfffffdec,&PTR_005ce008,0);
  uStack_22c = 0x53d186;
  piVar2 = (int *)FUN_0055f500(pvVar1,*(int *)(param_1 + 0xc),local_1dc,
                               *(int *)(param_1 + 0xc) + 0x70,*(int *)(param_1 + 0x14),
                               *(int *)(param_1 + 0x18),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x1c) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x1c));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  local_1e0 = *(void **)(iVar3 + 4);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  FUN_00591070("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(param_1 + 0xc);
  local_1e0 = *(void **)(param_1 + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 0x194);
  if (*(undefined4 **)(iVar3 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar3 + 400),puVar4,&local_1e0);
  }
  else {
    *puVar4 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = (undefined4 *)FUN_005adb0f(0xa8);
  puVar4 = FUN_0042b260(local_1e4);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  local_1ec = FUN_0053dc00;
  local_1e4 = (undefined4 *)param_1;
  FUN_0053fc10(puVar4 + 6,&local_1ec);
  local_1e8 = FUN_0053e200;
  local_1e4 = (undefined4 *)param_1;
  FUN_0053fcb0((void *)(*(int *)(param_1 + 0x24) + 0x68),&local_1e8);
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd) = 1;
  local_1e4 = (undefined4 *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar4 = FUN_0042bc30(local_1e4,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x34,
                        *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        param_1 + 0x34);
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  FUN_0053e0b0(param_1);
  FUN_0053e220(param_1);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053e5b0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  pvVar1 = (void *)(in_stack_fffffdb4 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006204f4,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar5,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053f5a0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620518,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053ee10;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620510,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,9);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053e720;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CANCEL",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053f080;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CURRENT",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053d8c0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xe;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CARGO",5);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053ea30;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"LICENSE",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0053e820;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x12;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"FACTION",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0053d810(local_54);
  FUN_0053e220(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  FUN_00465e40((int)local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053d810(int *param_1)

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
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 6,DAT_0065500c ^ (uint)&stack0xfffffffc);
    param_1[0xf] = 0;
  }
  if (0xf < (uint)param_1[5]) {
    pvVar2 = (void *)*param_1;
    pvVar3 = pvVar2;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3)))) {
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


void __thiscall FUN_0053d8c0(void *this,char param_1)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_stack_ffffff88;
  uint3 uVar8;
  void *pvVar6;
  void *pvVar7;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c5758;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar8 = (uint3)((uint)in_stack_ffffff88 >> 8);
  if (param_1 == '\0') {
    pvVar6 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    pvVar7 = (void *)((uint)uVar8 << 8);
    FUN_00402690(&stack0xffffff88,"`%Cargo:",8);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
    bVar1 = false;
    uVar3 = 0;
    piVar4 = (int *)((int)pvVar6 + 0xc);
    do {
      if ((int)uVar3 < *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4)) {
        if (((int)uVar3 < 0) ||
           (((0 < *(int *)((int)pvVar6 + 8) && (*(int *)((int)pvVar6 + 8) <= (int)uVar3)) ||
            (iVar5 = *piVar4, iVar5 == 0)))) {
          FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d - `8no pod");
        }
        else {
          bVar1 = true;
          if (*(int *)(iVar5 + 8) < 1) {
            FUN_005069b0(pvVar6,(undefined1 *)local_44,uVar3,'\0');
            local_8._0_1_ = 2;
            FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d - `7[empty]`7 (%s)");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pvVar2 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar2 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) goto LAB_0053dbaa;
              FUN_005adb3f(pvVar2);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
          else {
            FUN_004a84a0(*(int *)(iVar5 + 4));
            FUN_005069b0(pvVar6,(undefined1 *)local_2c,uVar3,'\0');
            local_8._0_1_ = 1;
            pvVar7 = *(void **)((int)this + 0x20);
            FUN_0042de40(pvVar7,"`7%02d - %dx `0%s`7 (%s)");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pvVar2 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar2 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
LAB_0053dbaa:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar2);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
        }
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < 0xe);
    if (!bVar1) {
      pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
      FUN_00402690(&stack0xffffff88," `7** no cargo pods **",0x16);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
    }
    FUN_0042dcd0(*(int *)((int)this + 0x20));
    iVar5 = 1;
    do {
      FUN_005073f0(pvVar6,iVar5);
      FUN_00507270(pvVar6,iVar5);
      FUN_0042de40(*(void **)((int)this + 0x20),"`7%s: `%c%d`7/`%c%d");
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    pvVar6 = (void *)((uint)uVar8 << 8);
    FUN_00402690(&stack0xffffff88,"`3CARGO`2: view the cargo and free space on your ship",0x35);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar6);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 FUN_0053dbc0(void)

{
  return 0;
}


void __thiscall FUN_0053dbd0(void *this,int param_1)

{
  FUN_0042b4d0(*(void **)((int)this + 0x24),param_1);
  return;
}


void __thiscall FUN_0053dc00(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff84;
  void *local_50 [3];
  int local_44 [3];
  byte *local_38;
  void *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c57c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  FUN_004024e0(local_2c,&param_1);
  local_8._0_1_ = 2;
  uVar11 = 0;
  iVar9 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      pbVar2 = in_stack_0000001c + iVar9;
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(byte **)pbVar2;
      }
      FUN_00403640(local_2c,pbVar10,*(uint *)(pbVar2 + 0x10));
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar11 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_0042de40(*(void **)((int)this + 0x20),"`!CTR>`2 %s");
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  uVar11 = 0;
  iVar9 = *(int *)((int)this + 0x2c);
  pbVar10 = *(byte **)((int)local_34 + 0x28);
  local_38 = pbVar10;
  if (iVar9 - (int)pbVar10 >> 6 != 0) {
    do {
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      pbVar2 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar2 = *(byte **)pbVar10;
      }
      uVar4 = FUN_004031f0(pbVar2,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        FUN_0042b900(local_44,(int *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
        if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar7 + 8))();
        FUN_004025a0(local_44);
        goto LAB_0053df5a;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x40;
      iVar9 = *(int *)((int)local_34 + 0x2c);
    } while (uVar11 < (uint)(iVar9 - (int)local_38 >> 6));
  }
  pvVar8 = local_34;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar11 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_00620618,4);
  pbVar10 = local_38;
  if ((char)uVar11 == '\0') {
    local_44[1] = 0;
    local_44[2] = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    FUN_00402690(local_50,"Unknown command.",0x10);
    pvVar8 = *(void **)((int)pvVar8 + 0x20);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff84,local_50);
    FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < (uint)local_44[2]) {
      pvVar8 = local_50[0];
      if ((0xfff < local_44[2] + 1U) &&
         (pvVar8 = *(void **)((int)local_50[0] + -4),
         0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
LAB_0053e01b:
    piVar7 = *(int **)((int)local_34 + 0x20);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      FUN_0053e3a0((int)pvVar8);
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
    else {
      uVar11 = 0;
      if (iVar9 - (int)local_38 >> 6 == 0) goto LAB_0053e01b;
      uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      pbVar2 = local_38;
      do {
        pbVar6 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pbVar6 = *(byte **)in_stack_0000001c;
        }
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),pbVar6,uVar4);
        if ((char)uVar4 != '\0') {
          FUN_0042b900(local_44,(int *)&stack0x0000001c);
          pvVar8 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
          if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar7 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0(local_44);
          piVar7 = *(int **)((int)pvVar8 + 0x20);
          goto LAB_0053df55;
        }
        uVar11 = uVar11 + 1;
        pbVar2 = pbVar2 + 0x40;
        uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar11 < (uint)(*(int *)((int)local_34 + 0x2c) - (int)pbVar10 >> 6));
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
  }
LAB_0053df55:
  FUN_0042d280(piVar7);
LAB_0053df5a:
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0053df8c;
    FUN_005adb3f(pvVar8);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
LAB_0053df8c:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053e0b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint in_stack_ffffffd0;
  void *pvVar5;
  
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    FUN_0042de40(*(void **)(param_1 + 0x20),"`7Welcome to `$%s");
    pvVar5 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0," `!** Mercantile Contract Terminal",0x22);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar5);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(iVar1 + 0x398) + 0x18));
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar5);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 0x4c);
      uVar3 = 0;
      uVar4 = *(int *)(iVar1 + 0x50) - (int)piVar2 >> 2;
      if (uVar4 != 0) {
        do {
          if (*(char *)(*piVar2 + 0xe0) != '\0') {
            return;
          }
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (uVar3 < uVar4);
      }
    }
    pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"`%NOTE: You have no license for any factions here.",0x32);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar5);
    pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"`7Use the `%license`7 command to purchase licenses.",0x33);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar5);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
  }
  return;
}


void __fastcall FUN_0053e200(int param_1)

{
  FUN_0053e220(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __fastcall FUN_0053e220(int param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  void *pvVar3;
  int iVar4;
  Color3B local_47 [3];
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5800;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591e00((undefined1 *)local_44,"CTR> `%%%s%c");
  local_8 = 0;
  ppppuVar2 = local_2c;
  FUN_00591e00((undefined1 *)ppppuVar2,"`$%dc ");
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)(param_1 + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      FUN_00403640(local_44,&DAT_005e7468,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppuVar1 = local_2c;
  if (0xf < local_18) {
    ppppuVar1 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_44,ppppuVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  FUN_004024e0(&stack0xffffff8c,local_44);
  FUN_0042dec0(*(void **)(param_1 + 0x20),(byte *)ppppuVar2);
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar2 = (undefined4 ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar2);
  }
  if (0xf < local_30) {
    pvVar3 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar3 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053e3a0(int param_1)

{
  void *pvVar1;
  uint in_stack_ffffffa8;
  undefined4 *puVar2;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042dcd0(*(int *)(param_1 + 0x20));
  pvVar1 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`%Contract Terminal 3.2.2 `7(c) by Collier Industries",0x35);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  puVar2 = (undefined4 *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`0Valid commands:",0x11);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),puVar2);
  local_14 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6 != 0) {
    do {
      FUN_00591e00((undefined1 *)local_30,&DAT_005e7500);
      pvVar1 = *(void **)(param_1 + 0x20);
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar1 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar1 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_0053e540;
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"`3HELP",6);
  pvVar1 = *(void **)(param_1 + 0x20);
  local_8 = 1;
  FUN_004024e0(&stack0xffffffa8,local_30);
  FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
LAB_0053e540:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0053e570(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  puVar2 = (undefined4 *)piVar1[2];
  FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
  puVar2[1] = *puVar2;
  FUN_0042d280(piVar1);
  FUN_0053e0b0(param_1);
  FUN_0053e220(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __thiscall FUN_0053e5b0(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  uint in_stack_ffffffa8;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c5870;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (iVar1 == 0) goto LAB_0053e6ec;
    iVar3 = *(int *)(iVar1 + 0x94);
    iVar2 = *(int *)(iVar1 + 0x98) - iVar3 >> 2;
    if (iVar2 == 0) {
      uVar6 = 0x2b;
      pcVar5 = "`$** no contracts available at this time **";
    }
    else {
      uVar6 = 0;
      if (iVar2 != 0) {
        do {
          FUN_00482e50(*(void **)(iVar3 + uVar6 * 4),(int *)local_2c);
          local_8._0_1_ = 1;
          uVar6 = uVar6 + 1;
          FUN_0042de40(*(void **)((int)this + 0x20)," `$% 2d`2] `%%%s");
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pvVar4 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar4 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar4);
          }
          iVar3 = *(int *)(iVar1 + 0x94);
        } while (uVar6 < (uint)(*(int *)(iVar1 + 0x98) - iVar3 >> 2));
      }
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      uVar6 = 0x25;
      pcVar5 = "`! type `%info [number]`! for details";
    }
  }
  else {
    uVar6 = 0x3b;
    pcVar5 = "`3LIST`2: list all contracts being promoted on this station";
  }
  pvVar4 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,pcVar5,uVar6);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar4);
LAB_0053e6ec:
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0053e720(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint in_stack_ffffffd0;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c58a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398) == 0) goto LAB_0053e806;
    if ((*(int *)(DAT_0065b5cc + 0x140) - (int)*(undefined4 **)(DAT_0065b5cc + 0x13c) & 0xfffffffcU)
        == 0) {
      uVar4 = 0x20;
      pcVar3 = "`$ You have no current contract.";
    }
    else {
      piVar1 = (int *)**(undefined4 **)(DAT_0065b5cc + 0x13c);
      if (piVar1 != (int *)0x0) {
        FUN_0040fae0(piVar1);
      }
      iVar2 = DAT_0065b5cc;
      *(undefined4 *)(DAT_0065b5cc + 0x140) = *(undefined4 *)(DAT_0065b5cc + 0x13c);
      FUN_0049ea50(*(byte **)(*(int *)(*(int *)(iVar2 + 0xd0) + 0x178) + 0x398));
      uVar4 = 0x17;
      pcVar3 = "`0 Contract terminated.";
    }
  }
  else {
    uVar4 = 0x28;
    pcVar3 = "`3CANCEL`2: cancel your current contract";
  }
  pvVar5 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,pcVar3,uVar4);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
LAB_0053e806:
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0053e820(void *this,char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte *in_stack_ffffffc4;
  void *pvVar8;
  char *in_stack_ffffffd0;
  int in_stack_ffffffd4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c58e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) {
      FUN_0042b900(&stack0xffffffd0,(int *)&param_2);
      FUN_0053e820(this,(char *)0x1,in_stack_ffffffd0,in_stack_ffffffd4);
      goto LAB_0053ea06;
    }
    uVar7 = *(uint *)(param_2 + 0x14);
    pcVar6 = param_2;
    if (0xf < uVar7) {
      pcVar6 = *(char **)param_2;
    }
    param_1 = param_2;
    if (0xf < uVar7) {
      param_1 = *(char **)param_2;
    }
    pcVar5 = param_2;
    if (0xf < uVar7) {
      pcVar5 = *(char **)param_2;
    }
    FUN_00413ec0(&param_1,tolower_exref,pcVar5,param_1 + *(int *)(param_2 + 0x10),pcVar6);
    param_1 = &stack0xffffffc4;
    FUN_004024e0(&stack0xffffffc4,(undefined4 *)param_2);
    local_8._0_1_ = 1;
    pvVar4 = (void *)FUN_00412490();
    local_8 = (uint)local_8._1_3_ << 8;
    pvVar4 = (void *)FUN_004a0d10(pvVar4,in_stack_ffffffc4);
    if (pvVar4 != (void *)0x0) {
      FUN_0042de40(*(void **)((int)this + 0x20),&DAT_0061ceb0);
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      FUN_0042de40(*(void **)((int)this + 0x20),&DAT_005ce00c);
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      FUN_004024e0(&stack0xffffffc4,puVar1);
      cVar3 = FUN_004a0420(pvVar4,in_stack_ffffffc4);
      if (cVar3 != '\0') {
        pvVar8 = (void *)((uint)in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,"`$** has office here",0x14);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
      }
      if (*(char *)((int)pvVar4 + 0xe0) == '\0') {
        FUN_0042de40(*(void **)((int)this + 0x20),"`$%c  you have no contract license with them");
      }
      else {
        FUN_0042de40(*(void **)((int)this + 0x20),"`!%c  you have a contract license with them");
      }
      goto LAB_0053ea06;
    }
    uVar7 = 0x12;
    pcVar6 = "`$Unknown faction.";
  }
  else {
    uVar7 = 0x49;
    pcVar6 = "`3FACTION [factionID]`2: information about a faction who issues contracts";
  }
  pvVar4 = (void *)((uint)in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,pcVar6,uVar7);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar4);
LAB_0053ea06:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0053ea30(void *this,byte *param_1,byte *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  byte *in_stack_ffffffc0;
  void *pvVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (puVar1 == (undefined4 *)0x0) goto LAB_0053ec93;
    iVar8 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar8 != iVar8) {
      uVar11 = *(uint *)(param_2 + 0x14);
      pbVar9 = param_2;
      if (0xf < uVar11) {
        pbVar9 = *(byte **)param_2;
      }
      param_1 = param_2;
      if (0xf < uVar11) {
        param_1 = *(byte **)param_2;
      }
      pbVar6 = param_2;
      if (0xf < uVar11) {
        pbVar6 = *(byte **)param_2;
      }
      FUN_00413ec0(&param_1,tolower_exref,(char *)pbVar6,
                   (char *)(param_1 + *(int *)(param_2 + 0x10)),pbVar9);
      iVar8 = puVar1[0x13];
      uVar4 = 0;
      uVar11 = puVar1[0x14] - iVar8 >> 2;
      if (uVar11 != 0) {
        param_1 = *(byte **)(param_2 + 0x14);
        uVar2 = *(uint *)(param_2 + 0x10);
        do {
          iVar8 = *(int *)(iVar8 + uVar4 * 4);
          pbVar9 = (byte *)(iVar8 + 8);
          if (0xf < *(uint *)(iVar8 + 0x1c)) {
            pbVar9 = *(byte **)(iVar8 + 8);
          }
          pbVar6 = param_2;
          if (&DAT_0000000f < param_1) {
            pbVar6 = *(byte **)param_2;
          }
          uVar5 = FUN_004031f0(pbVar6,uVar2,pbVar9,*(uint *)(iVar8 + 0x18));
          if ((char)uVar5 != '\0') {
            FUN_004024e0(&stack0xffffffc0,puVar1);
            cVar3 = FUN_004a0420(*(void **)(puVar1[0x13] + uVar4 * 4),in_stack_ffffffc0);
            if (cVar3 == '\0') {
              FUN_0042de40(*(void **)((int)this + 0x20),"`$%s has no office here.");
              goto LAB_0053ec93;
            }
            iVar8 = *(int *)(puVar1[0x13] + uVar4 * 4);
            if (*(char *)(iVar8 + 0xe0) != '\0') {
              uVar11 = 0x29;
              pcVar10 = "`$You already have this contract license.";
              goto LAB_0053ec75;
            }
            if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < *(int *)(iVar8 + 0xcc)) {
              FUN_0042de40(*(void **)((int)this + 0x20),
                           "`$You need %d credits for this contract license.");
            }
            else {
              pvVar7 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
              FUN_00402690(&stack0xffffffc0,"License",7);
              FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,
                           -*(int *)(*(int *)(puVar1[0x13] + uVar4 * 4) + 0xcc),pvVar7);
              FUN_004a00e0(*(int *)(puVar1[0x13] + uVar4 * 4));
              FUN_0042de40(*(void **)((int)this + 0x20),"`0Contract license obtained for:\n   %s");
              pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
              FUN_00402690(&stack0xffffffc0,"`7Cost: `$100c",0xe);
              FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
              pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
              FUN_00402690(&stack0xffffffc0,
                           "`7Type `%LIST`7 to view contracts from your new employer.",0x39);
              FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
              FUN_0049e7b0((int)puVar1);
              FUN_0049e810(puVar1);
            }
            goto LAB_0053ec93;
          }
          uVar4 = uVar4 + 1;
          iVar8 = puVar1[0x13];
        } while (uVar4 < uVar11);
      }
      uVar11 = 0x23;
      pcVar10 = "`$Cannot buy license for that here.";
      goto LAB_0053ec75;
    }
    pbVar9 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`2Factions you need licenses for at this base:",0x2e);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pbVar9);
    uVar11 = 0;
    if ((int)(puVar1[0x14] - puVar1[0x13]) >> 2 != 0) {
      do {
        FUN_004024e0(&stack0xffffffc0,puVar1);
        cVar3 = FUN_004a0420(*(void **)(puVar1[0x13] + uVar11 * 4),pbVar9);
        if (cVar3 != '\0') {
          iVar8 = *(int *)(uVar11 * 4 + puVar1[0x13]);
          if (*(char *)(iVar8 + 0xe0) == '\0') {
LAB_0053eb65:
            pcVar10 = "`0%s`2: %s";
          }
          else {
            uVar4 = FUN_004a0960(iVar8);
            if (uVar4 != 0) {
              if (*(char *)(iVar8 + 0xe0) != '\0') goto LAB_0053eb90;
              goto LAB_0053eb65;
            }
            pcVar10 = "`8%s`8: %s";
          }
          FUN_0042de40(*(void **)((int)this + 0x20),pcVar10);
        }
LAB_0053eb90:
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)((int)(puVar1[0x14] - puVar1[0x13]) >> 2));
    }
    pvVar12 = (void *)((uint)pbVar9 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`2To purchase a license, type `3LICENSE [faction]",0x31);
    pvVar7 = *(void **)((int)this + 0x20);
  }
  else {
    uVar11 = 0x51;
    pcVar10 = "`3LICENSE [faction]`2: list licenses, or obtain a contract license with a faction";
LAB_0053ec75:
    pvVar12 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,pcVar10,uVar11);
    pvVar7 = *(void **)((int)this + 0x20);
  }
  FUN_0042ddb0(pvVar7,pvVar12);
LAB_0053ec93:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void FUN_0053ecaf(void)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  void *pvVar3;
  byte *in_stack_ffffffe8;
  uint3 uVar4;
  
  FUN_004024e0(&stack0xffffffe8,unaff_EDI);
  cVar2 = FUN_004a0420(*(void **)(unaff_EDI[0x13] + unaff_ESI * 4),in_stack_ffffffe8);
  if (cVar2 == '\0') {
    FUN_0042de40(*(void **)(unaff_EBX + 0x20),"`$%s has no office here.");
  }
  else {
    iVar1 = *(int *)(unaff_EDI[0x13] + unaff_ESI * 4);
    uVar4 = (uint3)((uint)in_stack_ffffffe8 >> 8);
    if (*(char *)(iVar1 + 0xe0) == '\0') {
      if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < *(int *)(iVar1 + 0xcc)) {
        FUN_0042de40(*(void **)(unaff_EBX + 0x20),"`$You need %d credits for this contract license."
                    );
      }
      else {
        pvVar3 = (void *)((uint)uVar4 << 8);
        FUN_00402690(&stack0xffffffe8,"License",7);
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,
                     -*(int *)(*(int *)(unaff_EDI[0x13] + unaff_ESI * 4) + 0xcc),pvVar3);
        FUN_004a00e0(*(int *)(unaff_EDI[0x13] + unaff_ESI * 4));
        FUN_0042de40(*(void **)(unaff_EBX + 0x20),"`0Contract license obtained for:\n   %s");
        pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
        FUN_00402690(&stack0xffffffe8,"`7Cost: `$100c",0xe);
        FUN_0042ddb0(*(void **)(unaff_EBX + 0x20),pvVar3);
        pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
        FUN_00402690(&stack0xffffffe8,"`7Type `%LIST`7 to view contracts from your new employer.",
                     0x39);
        FUN_0042ddb0(*(void **)(unaff_EBX + 0x20),pvVar3);
        FUN_0049e7b0((int)unaff_EDI);
        FUN_0049e810(unaff_EDI);
      }
    }
    else {
      pvVar3 = (void *)((uint)uVar4 << 8);
      FUN_00402690(&stack0xffffffe8,"`$You already have this contract license.",0x29);
      FUN_0042ddb0(*(void **)(unaff_EBX + 0x20),pvVar3);
    }
  }
  FUN_004025a0((int *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


void __thiscall FUN_0053ee10(void *this,int param_1,char *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_EDX;
  char *pcVar8;
  uint uVar9;
  uint in_stack_ffffffc0;
  void *pvVar10;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) {
      FUN_0053ee10(this,1,(char *)0x0,0);
      goto LAB_0053f05c;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (iVar2 == 0) goto LAB_0053f05c;
    pcVar8 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pcVar8 = *(char **)param_2;
    }
    iVar4 = atoi(pcVar8);
    if (((int)(iVar4 - 1U) < 0) ||
       (iVar6 = *(int *)(iVar2 + 0x94), (uint)(*(int *)(iVar2 + 0x98) - iVar6 >> 2) <= iVar4 - 1U))
    {
      uVar9 = 0x1d;
      pcVar8 = "`$ Invalid contract specified";
    }
    else {
      uVar5 = FUN_0040fbe0();
      if ((char)uVar5 == '\0') {
        iVar4 = *(int *)(iVar6 + extraout_EDX * 4);
        local_18[0] = iVar4;
        iVar6 = FUN_0040d7c0();
        *(float *)(iVar4 + 0x18) = (float)iVar6;
        FUN_00591070("DETAIL","Begin time in hours: %f");
        fVar1 = *(float *)(*(int *)(iVar4 + 0x54) + 0x9c);
        if (fVar1 != 0.0) {
          *(float *)(*(int *)(iVar4 + 0x54) + 0xa8) = fVar1;
        }
        iVar6 = DAT_0065b5cc;
        piVar3 = *(int **)(DAT_0065b5cc + 0x140);
        param_1 = iVar4;
        if (*(int **)(DAT_0065b5cc + 0x144) == piVar3) {
          FUN_004141e0((void *)(DAT_0065b5cc + 0x13c),piVar3,&param_1);
        }
        else {
          *piVar3 = iVar4;
          *(int *)(iVar6 + 0x140) = *(int *)(iVar6 + 0x140) + 4;
        }
        piVar3 = *(int **)(iVar2 + 0x98);
        puVar7 = FUN_00414000(&param_1,local_18,*(int **)(iVar2 + 0x94),piVar3);
        FUN_00412ba0((void *)(iVar2 + 0x94),local_18,(void *)*puVar7,piVar3);
        pvVar10 = (void *)(in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"`! Contract taken.",0x12);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
        FUN_0042dcd0(*(int *)((int)this + 0x20));
        pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"`! Go to trade terminal to buy goods at agreed price",0x34);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
        FUN_0049ea50(*(byte **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398));
        goto LAB_0053f05c;
      }
      uVar9 = 0x1a;
      pcVar8 = "`$ Contract already taken.";
    }
  }
  else {
    uVar9 = 0x3c;
    pcVar8 = "`3TAKE [contract number]`2: request to take a given contract";
  }
  pvVar10 = (void *)(in_stack_ffffffc0 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,pcVar8,uVar9);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
LAB_0053f05c:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0053f080(void *this,char param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *in_stack_ffffffc4;
  uint3 uVar9;
  void *pvVar8;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar9 = (uint3)((uint)in_stack_ffffffc4 >> 8);
  if (param_1 == '\0') {
    if ((*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) & 0xfffffffcU) == 0) {
      in_stack_ffffffc4 = (byte *)((uint)uVar9 << 8);
      FUN_00402690(&stack0xffffffc4,"`%%No current contracts.",0x18);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
    }
    local_14 = 0;
    iVar6 = *(int *)(DAT_0065b5cc + 0x13c);
    if (*(int *)(DAT_0065b5cc + 0x140) - iVar6 >> 2 != 0) {
      do {
        iVar3 = *(int *)(iVar6 + local_14 * 4);
        iVar6 = local_14 * 4;
        iVar4 = *(int *)(*(int *)(iVar3 + 0x54) + 0x18);
        if (iVar4 == 1) {
          in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,"`2From : `7anywhere",0x13);
          FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        }
        else if ((iVar4 == 0) || (iVar4 == 2)) {
          iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
          _param_1 = (byte *)(iVar4 + 0x238);
          if (0xf < *(uint *)(iVar4 + 0x24c)) {
            _param_1 = *(byte **)_param_1;
          }
          pbVar7 = (byte *)(iVar3 + 0x38);
          if (0xf < *(uint *)(iVar3 + 0x4c)) {
            pbVar7 = *(byte **)(iVar3 + 0x38);
          }
          uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0x48),_param_1,*(uint *)(iVar4 + 0x248));
          if ((char)uVar5 == '\0') {
            FUN_004024e0(&stack0xffffffc4,(undefined4 *)(iVar3 + 0x38));
            FUN_004a7100(in_stack_ffffffc4);
            FUN_0042de40(*(void **)((int)this + 0x20),"`2From : `%%%s");
          }
          else {
            in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
            FUN_00402690(&stack0xffffffc4,"`2From : `$here",0xf);
            FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
          }
        }
        iVar3 = *(int *)(iVar6 + *(int *)(DAT_0065b5cc + 0x13c));
        iVar4 = *(int *)(*(int *)(iVar3 + 0x54) + 0x18);
        if ((iVar4 == 1) || (iVar4 == 2)) {
          iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
          _param_1 = (byte *)(iVar4 + 0x238);
          if (0xf < *(uint *)(iVar4 + 0x24c)) {
            _param_1 = *(byte **)_param_1;
          }
          pbVar7 = (byte *)(iVar3 + 0x20);
          if (0xf < *(uint *)(iVar3 + 0x34)) {
            pbVar7 = *(byte **)(iVar3 + 0x20);
          }
          uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0x30),_param_1,*(uint *)(iVar4 + 0x248));
          if ((char)uVar5 == '\0') {
            FUN_004024e0(&stack0xffffffc4,(undefined4 *)(iVar3 + 0x20));
            FUN_004a7100(in_stack_ffffffc4);
            FUN_0042de40(*(void **)((int)this + 0x20),"`2To   : `%%%s");
          }
          else {
            in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
            FUN_00402690(&stack0xffffffc4,"`2To   : `$here",0xf);
            FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
          }
        }
        else if (iVar4 == 0) {
          in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,"`2To   : `7anywhere",0x13);
          FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        }
        in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,"`2Cargo:",8);
        FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        FUN_004024e0(&stack0xffffffc4,
                     *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar6) + 0x58));
        FUN_004a8380(in_stack_ffffffc4);
        FUN_0042de40(*(void **)((int)this + 0x20),"         `7%d`8x`!%s");
        if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar6) + 0x58) + 0x28) == -1
           ) {
          in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,"            `7buy at: `9market value",0x24);
          FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x20),"            `7buy at: `$%dc");
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar6) + 0x58) + 0x24) == -1
           ) {
          in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,"            `7sell at: `9market value",0x25);
          FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x20),"           `7sell at: `$%dc");
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar6) + 0x58) + 0x2c) < 1)
        {
          in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,"            `7bonus: `0none",0x1b);
          FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x20),"           `7bonus  : `$%dc");
        }
        iVar6 = *(int *)(iVar6 + *(int *)(DAT_0065b5cc + 0x13c));
        fVar1 = *(float *)(iVar6 + 0x1c);
        if (fVar1 != -1.0) {
          fVar2 = *(float *)(iVar6 + 0x18);
          if ((fVar2 == -1.0) ||
             ((int)(fVar1 - ((float)(*(int *)(DAT_0065b444 + 0x184) +
                                    ((*(int *)(DAT_0065b444 + 0x18c) +
                                     *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f +
                                    *(int *)(DAT_0065b444 + 0x188)) * 0x18) - fVar2)) < 1)) {
            in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
            FUN_00402690(&stack0xffffffc4,"`2Time : `@expired",0x12);
            FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc4);
          }
          else {
            FUN_0042de40(*(void **)((int)this + 0x20),"`2Time : `!%.0f `7hours remaining");
          }
        }
        local_14 = local_14 + 1;
        iVar6 = *(int *)(DAT_0065b5cc + 0x13c);
      } while (local_14 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar6 >> 2));
    }
  }
  else {
    pvVar8 = (void *)((uint)uVar9 << 8);
    FUN_00402690(&stack0xffffffc4,"`3CURRENT`2: see your current contracts",0x27);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0053f5a0(void *this,char param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c5970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar1 == iVar1) {
      FUN_0053f5a0(this,'\x01',(char *)0x0,0);
      goto LAB_0053fb0f;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (iVar1 == 0) goto LAB_0053fb0f;
    pcVar7 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pcVar7 = *(char **)param_2;
    }
    iVar4 = atoi(pcVar7);
    uVar8 = iVar4 - 1;
    if (((int)uVar8 < 0) || ((uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2) <= uVar8))
    {
      uVar8 = 0x1d;
      pcVar7 = "`$ Invalid contract specified";
      goto LAB_0053faf1;
    }
    iVar4 = uVar8 * 4;
    FUN_004024e0(&stack0xffffffc0,
                 (undefined4 *)(*(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x54) + 0x48));
    local_8._0_1_ = 1;
    pvVar5 = (void *)FUN_00412490();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0d10(pvVar5,in_stack_ffffffc0);
    iVar2 = *(int *)(iVar4 + *(int *)(iVar1 + 0x94));
    iVar3 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
    if (iVar3 == 1) {
      in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"`2From : `7anywhere",0x13);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    }
    else if ((iVar3 == 0) || (iVar3 == 2)) {
      pbVar6 = (byte *)(iVar2 + 0x38);
      iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
      _param_1 = (byte *)(iVar3 + 0x238);
      if (0xf < *(uint *)(iVar3 + 0x24c)) {
        _param_1 = *(byte **)_param_1;
      }
      if (0xf < *(uint *)(iVar2 + 0x4c)) {
        pbVar6 = *(byte **)pbVar6;
      }
      uVar8 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x48),_param_1,*(uint *)(iVar3 + 0x248));
      if ((char)uVar8 == '\0') {
        FUN_004024e0(&stack0xffffffc0,(undefined4 *)(iVar2 + 0x38));
        FUN_004a7100(in_stack_ffffffc0);
        FUN_0042de40(*(void **)((int)this + 0x20),"`2From : `%%%s");
      }
      else {
        in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"`2From : `$here",0xf);
        FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
      }
    }
    iVar2 = *(int *)(iVar4 + *(int *)(iVar1 + 0x94));
    iVar3 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
    if ((iVar3 == 1) || (iVar3 == 2)) {
      pbVar6 = (byte *)(iVar2 + 0x20);
      iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
      _param_1 = (byte *)(iVar3 + 0x238);
      if (0xf < *(uint *)(iVar3 + 0x24c)) {
        _param_1 = *(byte **)_param_1;
      }
      if (0xf < *(uint *)(iVar2 + 0x34)) {
        pbVar6 = *(byte **)pbVar6;
      }
      uVar8 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x30),_param_1,*(uint *)(iVar3 + 0x248));
      if ((char)uVar8 == '\0') {
        FUN_004024e0(&stack0xffffffc0,(undefined4 *)(iVar2 + 0x20));
        FUN_004a7100(in_stack_ffffffc0);
        FUN_0042de40(*(void **)((int)this + 0x20),"`2To   : `%%%s `2(`0%s`2)");
      }
      else {
        in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"`2To   : `$here",0xf);
        FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
      }
    }
    else if (iVar3 == 0) {
      in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"`2To   : `7anywhere",0x13);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    }
    in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`2Cargo:",8);
    FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    FUN_004024e0(&stack0xffffffc0,*(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x94) + iVar4) + 0x58))
    ;
    FUN_004a8380(in_stack_ffffffc0);
    FUN_0042de40(*(void **)((int)this + 0x20),"         `7%d`8x`!%s");
    iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x58) + 0x28);
    if (iVar2 == -1) {
      uVar8 = 0x24;
      pcVar7 = "            `7buy at: `0market value";
LAB_0053f95a:
      in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,pcVar7,uVar8);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    }
    else if (iVar2 < 1) {
      if (iVar2 == 0) {
        uVar8 = 0x22;
        pcVar7 = "            `%no buy or sell price";
        goto LAB_0053f95a;
      }
    }
    else {
      FUN_0042de40(*(void **)((int)this + 0x20),"            `7buy at: `$%dc");
    }
    iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x58) + 0x24);
    if (iVar2 == -1) {
      in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"           `7sell at: `0market value",0x24);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    }
    else if (0 < iVar2) {
      FUN_0042de40(*(void **)((int)this + 0x20),"           `7sell at: `$%dc");
    }
    iVar2 = *(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x58);
    if (0 < *(int *)(iVar2 + 0x2c)) {
      if (*(int *)(iVar2 + 0x24) < 1) {
        pcVar7 = "           `7payment: `$%dc";
      }
      else {
        pcVar7 = "           `7bonus  : `$%dc";
      }
      FUN_0042de40(*(void **)((int)this + 0x20),pcVar7);
    }
    FUN_0042de40(*(void **)((int)this + 0x20),"`2By   : `!%s");
    if (*(float *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x1c) == -1.0) {
      in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"`2Time : `7none",0xf);
      FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffc0);
    }
    else {
      FUN_0042de40(*(void **)((int)this + 0x20),"`2Time : `!%.0f `7hours");
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 0x94)) + 0x54) + 0x68);
    if (iVar1 == 1) {
      uVar8 = 0xf;
      pcVar7 = "`2Diff.: `0easy";
      goto LAB_0053faf1;
    }
    if (iVar1 == 2) {
      uVar8 = 0x11;
      pcVar7 = "`2Diff.: `2medium";
      goto LAB_0053faf1;
    }
    if (iVar1 == 3) {
      uVar8 = 0xf;
      pcVar7 = "`2Diff.: `$hard";
      goto LAB_0053faf1;
    }
    pvVar5 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
    if (iVar1 == 4) {
      uVar8 = 0x12;
      pcVar7 = "`2Diff.: `^v. hard";
    }
    else {
      uVar8 = 0x14;
      pcVar7 = "`2Diff.: `@nightmare";
    }
  }
  else {
    uVar8 = 0x3a;
    pcVar7 = "`3INFO [contract number]`2: see full details of a contract";
LAB_0053faf1:
    pvVar5 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
  }
  FUN_00402690(&stack0xffffffc0,pcVar7,uVar8);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
LAB_0053fb0f:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0053fb30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = (int *)*param_1;
    }
    piVar2 = piVar1;
    if ((0xfff < (param_1[2] - (int)piVar1 & 0xffffffc0U)) &&
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


void FUN_0053fba0(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0053d810(param_1);
  }
  return;
}


void FUN_0053fbd0(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x40)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void __thiscall FUN_0053fc10(void *this,undefined4 *param_1)

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


void __thiscall FUN_0053fcb0(void *this,undefined4 *param_1)

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


void __fastcall FUN_0053fd40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
  
  puStack_c = &LAB_005c59a0;
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
  param_2[0xf] = 0;
  local_8 = 1;
  uStack_7 = 0;
  piVar1 = (int *)param_3[0xf];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_3 + 6) {
      uVar5 = (**(code **)(*piVar1 + 4))(param_2 + 6,uVar4);
      param_2[0xf] = uVar5;
      _local_8 = CONCAT31(uStack_7,2);
      piVar1 = (int *)param_3[0xf];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_3 + 6);
    }
    else {
      param_2[0xf] = piVar1;
    }
    param_3[0xf] = 0;
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_0053fe10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
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
  puStack_c = &LAB_005c59d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)this;
  iVar3 = (int)param_1 - iVar7 >> 6;
  iVar4 = *(int *)((int)this + 4) - iVar7 >> 6;
  if (iVar4 == 0x3ffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar9 = *(int *)((int)this + 8) - iVar7 >> 6;
  uVar5 = uVar1;
  if ((uVar9 <= 0x3ffffff - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar9 = uVar5 << 6;
  if (uVar5 < 0x4000000) {
    if (0xfff < uVar9) goto LAB_0053feaa;
    if (uVar9 == 0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)FUN_005adb0f(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_0053feaa:
    uVar6 = uVar9 + 0x23;
    if (uVar6 <= uVar9) {
      uVar6 = 0xffffffff;
    }
    iVar7 = FUN_005adb0f(uVar6);
    if (iVar7 == 0) goto LAB_0053fecd;
    puVar12 = (undefined4 *)(iVar7 + 0x23U & 0xffffffe0);
    puVar12[-1] = iVar7;
  }
  puVar13 = puVar12 + iVar3 * 0x10;
  local_8 = 0;
  uStack_7 = 0;
  FUN_0053fd40(puVar13 + 0x10,puVar13,param_2);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar2) {
    this_00 = puVar12;
    for (puVar13 = *(undefined4 **)this; local_8 = 1, puVar13 != puVar2; puVar13 = puVar13 + 0x10) {
      FUN_004024e0(this_00,puVar13);
      this_00[0xf] = 0;
      local_8 = 3;
      if ((undefined4 *)puVar13[0xf] != (undefined4 *)0x0) {
        uVar8 = (*(code *)**(undefined4 **)puVar13[0xf])(this_00 + 6);
        this_00[0xf] = uVar8;
      }
      this_00 = this_00 + 0x10;
    }
  }
  else {
    FUN_00540050(this,*(undefined4 **)this,param_1,puVar12);
    FUN_00540050(this,param_1,*(undefined4 **)((int)this + 4),puVar13 + 0x10);
  }
  piVar10 = *(int **)this;
  if (piVar10 != (int *)0x0) {
    piVar11 = *(int **)((int)this + 4);
    if (piVar10 != piVar11) {
      do {
        FUN_0053d810(piVar10);
        piVar10 = piVar10 + 0x10;
      } while (piVar10 != piVar11);
      piVar10 = *(int **)this;
    }
    piVar11 = piVar10;
    if ((0xfff < (*(int *)((int)this + 8) - (int)piVar10 & 0xffffffc0U)) &&
       (piVar11 = (int *)piVar10[-1], 0x1f < (uint)((int)piVar10 + (-4 - (int)piVar11)))) {
LAB_0053fecd:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar11);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)((int)this + 4) = puVar12 + uVar1 * 0x10;
  *(undefined4 **)((int)this + 8) = puVar12 + uVar5 * 0x10;
  ExceptionList = local_10;
  return *(int *)this + iVar3 * 0x40;
}
