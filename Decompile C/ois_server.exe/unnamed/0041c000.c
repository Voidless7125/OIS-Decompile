#include "../ois_server.exe.h"


void __thiscall FUN_0041c350(void *this,void *param_1)

{
  int *this_00;
  int *this_01;
  void *pvVar1;
  uint in_stack_00000018;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (int *)((int)this + 0x24);
  local_8 = 0;
  this_01 = *(int **)((int)this + 0x28);
  local_14 = this;
  if (*(int **)((int)this + 0x2c) == this_01) {
    FUN_00403840(this_00,this_01,&param_1);
  }
  else {
    FUN_004024e0(this_01,&param_1);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 0x18;
  }
  if (0x50 < (uint)((*(int *)((int)this + 0x28) - *this_00) / 0x18)) {
    FUN_00417680(this_00,&local_14,(int *)*this_00);
  }
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


undefined4 * __thiscall FUN_0041c410(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0((void *)((int)this + 0x18),&param_1);
  iVar1 = DAT_0065b444;
  *(undefined4 *)((int)this + 0x30) = in_stack_0000001c;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 400);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x18c);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar1 + 0x188);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x180);
  *(int *)((int)this + 0x14) = (int)*(float *)(iVar1 + 0x17c);
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}


void FUN_0041c4e0(void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  char *in_stack_ffffffb0;
  undefined1 local_2c;
  undefined1 local_2b [12];
  undefined1 local_1f [11];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1050;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_2c = 0x87;
  uStack_58 = 0x41c522;
  FUN_004024e0(&stack0xffffffb0,&stack0x0000001c);
  FUN_00591630((int)local_1f,10,in_stack_ffffffb0);
  uStack_58 = 0x41c53a;
  FUN_004024e0(&stack0xffffffb0,&param_1);
  FUN_00591630((int)local_2b,0xc,in_stack_ffffffb0);
  iVar2 = FUN_00402370();
  piVar1 = *(int **)(iVar2 + 0x30);
  FUN_0041ab70(auStack_68,(undefined4 *)&DAT_00655688);
  (**(code **)(*piVar1 + 0x50))(&local_2c,0x17,1,3,0);
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
  if (0xf < in_stack_00000030) {
    pvVar3 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pvVar3 = *(void **)((int)in_stack_0000001c + -4);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041c620(undefined4 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_7c [24];
  undefined1 local_64;
  undefined4 local_63;
  undefined8 local_4f;
  uint local_44;
  
  local_44 = DAT_0065500c ^ (uint)auStack_7c;
  local_64 = 0x90;
  local_63 = param_1;
  local_4f = param_2;
  if (DAT_0065b3d3 != '\0') {
    uStack_a8 = 0x41c68b;
    FUN_00591070("NETWORK","Client: Sent run command %d (%f, %f, %f)");
  }
  iVar2 = FUN_00402370();
  piVar1 = *(int **)(iVar2 + 0x30);
  uStack_b8 = 0x41c6a9;
  FUN_0041ab70(auStack_b0,(undefined4 *)&DAT_00655688);
  uStack_b8 = 3;
  uStack_bc = 1;
  uStack_c0 = 0x1d;
  (**(code **)(*piVar1 + 0x50))(&local_64);
  __security_check_cookie((uint)&uStack_c0 ^ 1);
  return;
}


void FUN_0041c6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  uint in_stack_00000028;
  undefined1 auStack_c4 [16];
  undefined4 uStack_b4;
  byte *in_stack_ffffff54;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_78;
  undefined1 local_77 [32];
  undefined1 local_57 [50];
  undefined1 local_25 [10];
  undefined4 local_1b;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1088;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_b4 = 0x41c70e;
  FUN_004024e0(&stack0xffffff54,&param_5);
  iVar2 = FUN_004a7100(in_stack_ffffff54);
  local_78 = 0x88;
  uStack_b4 = 0x41c729;
  FUN_004024e0(&stack0xffffff54,(undefined4 *)(iVar2 + 8));
  FUN_00591630((int)local_57,0x32,(char *)in_stack_ffffff54);
  uStack_b4 = 0x41c744;
  FUN_004024e0(&stack0xffffff54,(undefined4 *)(iVar2 + 0x238));
  FUN_00591630((int)local_25,10,(char *)in_stack_ffffff54);
  uStack_b4 = 0x41c762;
  FUN_004024e0(&stack0xffffff54,(undefined4 *)(*(int *)(iVar2 + 0x254) + 0x60));
  FUN_00591630((int)local_77,0x20,(char *)in_stack_ffffff54);
  local_1b = *(undefined4 *)(iVar2 + 0x20);
  local_8c = param_1;
  uStack_88 = param_2;
  uStack_84 = param_3;
  uStack_80 = param_4;
  FUN_00402de0();
  puVar3 = FUN_00402de0();
  piVar1 = *(int **)(puVar3 + 0x90);
  FUN_0041ab70(auStack_c4,&local_8c);
  (**(code **)(*piVar1 + 0x50))(&local_78,0x61,1,3,0);
  if (0xf < in_stack_00000028) {
    pvVar4 = param_5;
    if (0xfff < in_stack_00000028 + 1) {
      pvVar4 = *(void **)((int)param_5 + -4);
      if (0x1f < (uint)((int)param_5 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041c810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void **ppvVar3;
  int *piVar4;
  undefined1 *puVar5;
  void **ppvVar6;
  void *pvVar7;
  undefined1 auStack_8c [36];
  undefined4 uStack_68;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_43;
  void *local_3f [4];
  undefined4 local_2f;
  uint local_2b;
  undefined4 local_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b10b8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_5[1] == 3) {
    local_2f = 0;
    local_2b = 0xf;
    local_3f[0] = (void *)((uint)local_3f[0] & 0xffffff00);
    local_8 = 0;
    local_43 = *param_5;
    ppvVar3 = (void **)param_5[2];
    local_44 = 0x8f;
    if (local_3f != ppvVar3) {
      ppvVar6 = ppvVar3;
      if ((void *)0xf < ppvVar3[5]) {
        ppvVar6 = *ppvVar3;
      }
      uStack_68 = 0x41c88a;
      FUN_00402690(local_3f,ppvVar6,(uint)ppvVar3[4]);
    }
    local_24 = param_1;
    uStack_20 = (undefined1)param_2;
    uStack_1f = (undefined1)((uint)param_2 >> 8);
    uStack_1e = (undefined2)((uint)param_2 >> 0x10);
    uStack_1c = param_3;
    uStack_18 = param_4;
    FUN_00402de0();
    puVar5 = FUN_00402de0();
    piVar4 = *(int **)(puVar5 + 0x90);
    FUN_0041ab70(auStack_8c,&local_24);
    (**(code **)(*piVar4 + 0x50))(&local_44,0x1d,1,3,0);
    if (0xf < local_2b) {
      pvVar7 = local_3f[0];
      if ((0xfff < local_2b + 1) &&
         (pvVar7 = *(void **)((int)local_3f[0] + -4),
         0x1f < (uint)((int)local_3f[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  else {
    local_24 = CONCAT31((int3)*param_5,0x8e);
    uStack_20 = (undefined1)((uint)*param_5 >> 0x18);
    switch(param_5[1]) {
    case 0:
      uVar1 = *(undefined4 *)param_5[2];
      uStack_1f = (undefined1)uVar1;
      uStack_1e = (undefined2)((uint)uVar1 >> 8);
      uStack_1c._0_1_ = (undefined1)((uint)uVar1 >> 0x18);
      break;
    case 1:
      uVar1 = *(undefined4 *)param_5[2];
      uStack_1f = (undefined1)uVar1;
      uStack_1e = (undefined2)((uint)uVar1 >> 8);
      uStack_1c._0_1_ = (undefined1)((uint)uVar1 >> 0x18);
      break;
    case 2:
      uVar2 = *(undefined8 *)param_5[2];
      uStack_1f = (undefined1)uVar2;
      uStack_1e = (undefined2)((ulonglong)uVar2 >> 8);
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x18);
      uStack_18._0_1_ = (undefined1)((ulonglong)uVar2 >> 0x38);
      break;
    case 4:
      uStack_1f = *(undefined1 *)param_5[2];
    }
    local_54 = param_1;
    uStack_50 = param_2;
    uStack_4c = param_3;
    uStack_48 = param_4;
    FUN_00402de0();
    puVar5 = FUN_00402de0();
    piVar4 = *(int **)(puVar5 + 0x90);
    FUN_0041ab70(auStack_8c,&local_54);
    (**(code **)(*piVar4 + 0x50))(&local_24,0xd,1,3,0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0041c9c0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x19)) {
    pvVar1 = *(void **)(param_1 + 5);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x19) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


void FUN_0041ca10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,void *param_7)

{
  undefined1 *puVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint in_stack_00000030;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  char *in_stack_ffffff9c;
  int local_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined4 local_23;
  undefined1 local_1e [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b10e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_27 = param_5;
  local_23 = param_6;
  local_28 = 0x91;
  uStack_6c = 0x41ca68;
  FUN_004024e0(&stack0xffffff9c,&param_7);
  FUN_00591630((int)local_1e,10,in_stack_ffffff9c);
  local_3c = param_1;
  iStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  FUN_00402de0();
  puVar1 = FUN_00402de0();
  piVar2 = *(int **)(puVar1 + 0x90);
  FUN_0041ab70(auStack_7c,&local_3c);
  (**(code **)(*piVar2 + 0x50))(&local_28,0x14,1,3,0);
  uVar5 = 0;
  local_3c = param_1;
  iStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  puVar1 = FUN_00402de0();
  piVar2 = *(int **)(puVar1 + 0x3c);
  uVar4 = *(int *)(puVar1 + 0x40) - (int)piVar2 >> 2;
  if (uVar4 != 0) {
    do {
      if ((*(int *)*piVar2 == local_3c) && (((int *)*piVar2)[1] == iStack_38)) break;
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar5 < uVar4);
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent set module (%d, %d, %s, %s) to client %s");
  }
  if (0xf < in_stack_00000030) {
    pvVar3 = param_7;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pvVar3 = *(void **)((int)param_7 + -4), 0x1f < (uint)((int)param_7 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041cb90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_74 [40];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_27 = param_5;
  local_1f = *(undefined4 *)(param_7 + 0x5c);
  local_23 = param_6;
  local_1b = *(undefined1 *)(param_7 + 0x62);
  local_1a = *(undefined1 *)(param_7 + 0x60);
  local_19 = *(undefined1 *)(param_7 + 0x61);
  local_f = *(undefined4 *)(param_7 + 0x6c);
  local_13 = *(undefined4 *)(param_7 + 100);
  local_18 = *(undefined1 *)(param_7 + 99);
  local_17 = *(undefined4 *)(param_7 + 0x34);
  local_28 = 0x92;
  local_38 = param_1;
  iStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uStack_48 = 0x41cbff;
  FUN_00402de0();
  uStack_48 = 0x41cc04;
  puVar2 = FUN_00402de0();
  uStack_48 = 0;
  uStack_4c = 0;
  piVar1 = *(int **)(puVar2 + 0x90);
  FUN_0041ab70(auStack_74,&local_38);
  (**(code **)(*piVar1 + 0x50))(&local_28,0x1d,1,3,0);
  uVar4 = 0;
  local_38 = param_1;
  iStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  puVar2 = FUN_00402de0();
  uVar3 = *(int *)(puVar2 + 0x40) - *(int *)(puVar2 + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(puVar2 + 0x3c) + uVar4 * 4);
      if ((*piVar1 == local_38) && (piVar1[1] == iStack_34)) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent set module basic settings (%d, %d) to client %s");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041ccb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_80 [40];
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  undefined1 local_10;
  undefined4 local_f;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_33 = param_5;
  local_2b = *(undefined4 *)(param_7 + 0x24);
  local_2f = param_6;
  local_27 = *(undefined4 *)(param_7 + 0x28);
  local_1e = *(undefined1 *)(param_7 + 0x2c);
  local_1d = *(undefined4 *)(param_7 + 0x30);
  local_19 = *(undefined4 *)(param_7 + 0x68);
  local_34 = 0x93;
  if (*(int *)(param_7 + 0x18) == 0) {
    local_15 = 0xffffffff;
  }
  else {
    local_15 = *(undefined4 *)(*(int *)(param_7 + 0x18) + 0x250);
  }
  local_11 = *(undefined1 *)(param_7 + 0x1c);
  local_10 = *(undefined1 *)(param_7 + 0x1d);
  local_23 = *(undefined4 *)(param_7 + 0x38);
  local_1f = *(undefined1 *)(param_7 + 0x14);
  local_f = *(undefined4 *)(param_7 + 0x1e);
  local_44 = param_1;
  iStack_40 = param_2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  uStack_54 = 0x41cd3f;
  FUN_00402de0();
  uStack_54 = 0x41cd44;
  puVar2 = FUN_00402de0();
  uStack_54 = 0;
  uStack_58 = 0;
  piVar1 = *(int **)(puVar2 + 0x90);
  FUN_0041ab70(auStack_80,&local_44);
  (**(code **)(*piVar1 + 0x50))(&local_34,0x29,1,3,0);
  uVar4 = 0;
  local_44 = param_1;
  iStack_40 = param_2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  puVar2 = FUN_00402de0();
  uVar3 = *(int *)(puVar2 + 0x40) - *(int *)(puVar2 + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(puVar2 + 0x3c) + uVar4 * 4);
      if ((*piVar1 == local_44) && (piVar1[1] == iStack_40)) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent set module details (%d, %d) to client %s");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041cdf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_74 [40];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_17;
  undefined4 local_13;
  int local_f;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_20 = 0x9d;
  local_28 = param_5;
  local_1f = *(undefined4 *)(*(int *)(param_5 + 8) + 4);
  local_1b = *(undefined4 *)(param_5 + 0x10);
  local_17 = param_6;
  iVar1 = *(int *)(*(int *)(param_5 + 0xc) + 4 + param_6 * 4);
  if (iVar1 == 0) {
    local_13 = 0xffffffff;
    local_f = 0;
  }
  else {
    local_13 = **(undefined4 **)(iVar1 + 4);
    local_f = (int)**(float **)(*(int *)(param_5 + 0xc) + 4 + param_6 * 4);
  }
  local_38 = param_1;
  iStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uStack_48 = 0x41ce5d;
  FUN_00402de0();
  uStack_48 = 0x41ce62;
  puVar3 = FUN_00402de0();
  uStack_48 = 0;
  uStack_4c = 0;
  piVar2 = *(int **)(puVar3 + 0x90);
  FUN_0041ab70(auStack_74,&local_38);
  (**(code **)(*piVar2 + 0x50))(&local_20,0x15,1,3,0);
  uVar5 = 0;
  local_38 = param_1;
  iStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  puVar3 = FUN_00402de0();
  local_24 = *(int *)(puVar3 + 0x3c);
  uVar4 = *(int *)(puVar3 + 0x40) - local_24 >> 2;
  if (uVar4 != 0) {
    do {
      piVar2 = *(int **)(local_24 + uVar5 * 4);
      if ((*piVar2 == local_38) && (piVar2[1] == iStack_34)) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK",
                 "Sending SET_COMPONENT packet for module %s, slot %d, class/damage = %d/%d to client %s"
                );
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041cf30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint in_stack_00000028;
  undefined1 auStack_98 [12];
  undefined4 uStack_8c;
  char *in_stack_ffffff80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c;
  undefined1 local_4b [28];
  undefined4 local_2f;
  undefined1 local_2b [23];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1118;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_4c = 0xa1;
  local_2f = *(undefined4 *)(DAT_0065b444 + 0xa0);
  FUN_004024e0(&stack0xffffff80,&param_5);
  FUN_00591630((int)local_4b,0x28,in_stack_ffffff80);
  in_stack_ffffff80 = (char *)((uint)in_stack_ffffff80 & 0xffffff00);
  uStack_8c = 0x41cfb8;
  FUN_00402690(&stack0xffffff80,"1.0.8",5);
  FUN_00591630((int)local_2b,0x14,in_stack_ffffff80);
  local_60 = param_1;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_00402de0();
  puVar2 = FUN_00402de0();
  piVar1 = *(int **)(puVar2 + 0x90);
  FUN_0041ab70(auStack_98,&local_60);
  (**(code **)(*piVar1 + 0x50))(&local_4c,0x35,1,3,0);
  FUN_00412930((int *)&stack0x00000044);
  FUN_00412930((int *)&stack0x00000038);
  if (0xf < in_stack_00000028) {
    pvVar3 = param_5;
    if (0xfff < in_stack_00000028 + 1) {
      pvVar3 = *(void **)((int)param_5 + -4);
      if (0x1f < (uint)((int)param_5 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0041d070(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_00412930(param_1 + 0xc);
  FUN_00412930(param_1 + 9);
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void FUN_0041d0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint in_stack_00000028;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000044;
  int in_stack_00000048;
  undefined1 auStack_12d4 [16];
  undefined4 uStack_12c4;
  char *in_stack_ffffed44;
  undefined4 local_1298;
  undefined4 uStack_1294;
  undefined4 uStack_1290;
  undefined4 uStack_128c;
  uint local_1288;
  byte *local_1280;
  int local_127c;
  undefined1 local_1278;
  undefined1 local_1277 [4524];
  undefined1 local_cb [183];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1148;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1278 = 0xa2;
  puVar6 = local_1277;
  local_1288 = 0;
  puVar7 = local_cb;
  do {
    if (local_1288 < (uint)(in_stack_00000048 - in_stack_00000044 >> 2)) {
      local_127c = local_1288 * 4;
      uStack_12c4 = 0x41d155;
      FUN_004024e0(&stack0xffffed44,*(undefined4 **)(local_127c + in_stack_00000044));
      FUN_00591630((int)(puVar7 + -0xc),0xc,in_stack_ffffed44);
      iVar1 = *(int *)(local_127c + in_stack_00000044);
      local_1280 = (byte *)(iVar1 + 0x18);
      pbVar4 = local_1280;
      if (0xf < *(uint *)(iVar1 + 0x2c)) {
        pbVar4 = *(byte **)local_1280;
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x28),(byte *)&PTR_005ce008,0);
      if ((char)uVar3 == '\0') {
        uStack_12c4 = 0x41d1aa;
        FUN_004024e0(&stack0xffffed44,(undefined4 *)local_1280);
        FUN_00591630((int)puVar7,10,in_stack_ffffed44);
      }
      else {
        *puVar7 = 0;
      }
      puVar7[10] = *(undefined1 *)(*(int *)(local_127c + in_stack_00000044) + 0x30);
      puVar7[0xb] = *(undefined1 *)(*(int *)(local_127c + in_stack_00000044) + 0x31);
    }
    else {
      puVar7[-0xc] = 0;
    }
    if (local_1288 < (uint)(in_stack_0000003c - in_stack_00000038 >> 2)) {
      local_127c = local_1288 * 4;
      uStack_12c4 = 0x41d214;
      FUN_004024e0(&stack0xffffed44,*(undefined4 **)(local_127c + in_stack_00000038));
      FUN_00591630((int)puVar6,0x14,in_stack_ffffed44);
      uStack_12c4 = 0x41d237;
      FUN_004024e0(&stack0xffffed44,(undefined4 *)(*(int *)(local_127c + in_stack_00000038) + 0x30))
      ;
      FUN_00591630((int)(puVar6 + 0x1e),0xc,in_stack_ffffed44);
      uStack_12c4 = 0x41d25b;
      FUN_004024e0(&stack0xffffed44,(undefined4 *)(*(int *)(local_127c + in_stack_00000038) + 0x48))
      ;
      FUN_00591630((int)(puVar6 + 0x2a),0x200,in_stack_ffffed44);
      *(undefined4 *)(puVar6 + 0x22c) =
           *(undefined4 *)(*(int *)(local_127c + in_stack_00000038) + 0x60);
      iVar1 = *(int *)(local_127c + in_stack_00000038);
      local_1280 = (byte *)(iVar1 + 0x18);
      pbVar4 = local_1280;
      if (0xf < *(uint *)(iVar1 + 0x2c)) {
        pbVar4 = *(byte **)local_1280;
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x28),(byte *)&PTR_005ce008,0);
      if ((char)uVar3 == '\0') {
        uStack_12c4 = 0x41d2bc;
        FUN_004024e0(&stack0xffffed44,(undefined4 *)local_1280);
        FUN_00591630((int)(puVar6 + 0x14),10,in_stack_ffffed44);
      }
      else {
        puVar6[0x14] = 0;
      }
      *(undefined4 *)(puVar6 + 0x230) =
           *(undefined4 *)(*(int *)(local_127c + in_stack_00000038) + 100);
    }
    else {
      *puVar6 = 0;
      puVar6[0x14] = 0;
    }
    local_1288 = local_1288 + 1;
    puVar7 = puVar7 + 0x18;
    puVar6 = puVar6 + 0x234;
  } while ((int)local_1288 < 8);
  local_1298 = param_1;
  uStack_1294 = param_2;
  uStack_1290 = param_3;
  uStack_128c = param_4;
  FUN_00402de0();
  puVar6 = FUN_00402de0();
  piVar2 = *(int **)(puVar6 + 0x90);
  FUN_0041ab70(auStack_12d4,&local_1298);
  (**(code **)(*piVar2 + 0x50))(&local_1278,0x1261,1,3,0);
  FUN_00412930(&stack0x00000044);
  FUN_00412930(&stack0x00000038);
  if (0xf < in_stack_00000028) {
    pvVar5 = param_5;
    if (0xfff < in_stack_00000028 + 1) {
      pvVar5 = *(void **)((int)param_5 + -4);
      if (0x1f < (uint)((int)param_5 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041d3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_64 [40];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_17;
  undefined4 local_13;
  int local_f;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_20 = 0x9e;
  local_1f = *(undefined4 *)(*(int *)(param_5 + 8) + 4);
  local_1b = *(undefined4 *)(param_5 + 0x10);
  local_17 = param_6;
  iVar1 = *(int *)(*(int *)(param_5 + 0xc) + 0x54 + param_6 * 4);
  if (iVar1 == 0) {
    local_13 = 0xffffffff;
    local_f = 0;
  }
  else {
    local_13 = **(undefined4 **)(iVar1 + 4);
    local_f = (int)**(float **)(*(int *)(param_5 + 0xc) + 0x54 + param_6 * 4);
  }
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  uStack_38 = 0x41d428;
  FUN_00402de0();
  uStack_38 = 0x41d42d;
  puVar3 = FUN_00402de0();
  uStack_38 = 0;
  uStack_3c = 0;
  piVar2 = *(int **)(puVar3 + 0x90);
  FUN_0041ab70(auStack_64,&local_30);
  (**(code **)(*piVar2 + 0x50))(&local_20,0x15,1,3,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041d470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_8c [40];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_58 = 0x94;
  local_4f = param_5[4];
  uStack_4b = param_5[5];
  uStack_47 = param_5[6];
  uStack_43 = param_5[7];
  local_57 = *param_5;
  local_3b = param_5[0xc];
  local_3f = param_5[0x46];
  local_1f = param_5[0x41];
  local_37 = param_5[0xd];
  uStack_33 = param_5[0xe];
  uStack_2f = param_5[0xf];
  uStack_2b = param_5[0x10];
  local_1b = param_5[0x42];
  local_23 = param_5[0x45];
  local_27 = param_5[0x4a];
  local_14 = param_1;
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  uStack_60 = 0x41d4df;
  FUN_00402de0();
  uStack_60 = 0x41d4e4;
  puVar2 = FUN_00402de0();
  uStack_60 = 0;
  uStack_64 = 0;
  piVar1 = *(int **)(puVar2 + 0x90);
  FUN_0041ab70(auStack_8c,&local_14);
  (**(code **)(*piVar1 + 0x50))(&local_58,0x41,1,3,0);
  return;
}


void FUN_0041d520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  char *in_stack_ffffff08;
  undefined1 auStack_dc [12];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined1 local_af [50];
  undefined1 local_7d [32];
  undefined1 local_5d [5];
  uint uStack_58;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_14;
  
  local_14 = DAT_0065500c ^ (uint)auStack_dc;
  local_b8 = 0x95;
  local_b7 = *param_5;
  uStack_100 = 0x41d557;
  FUN_004024e0(&stack0xffffff08,param_5 + 0x12);
  FUN_00591630((int)local_af,0x32,in_stack_ffffff08);
  uStack_100 = 0x41d570;
  FUN_004024e0(&stack0xffffff08,param_5 + 0x18);
  FUN_00591630((int)local_7d,0x20,in_stack_ffffff08);
  uStack_100 = 0x41d58c;
  FUN_004024e0(&stack0xffffff08,param_5 + 0x24);
  FUN_00591630((int)local_5d,10,in_stack_ffffff08);
  local_53 = param_5[0x38];
  local_4f = param_5[0x39];
  local_4b = param_5[0x3a];
  local_37 = *(undefined1 *)(param_5 + 0x43);
  local_36 = *(undefined1 *)((int)param_5 + 0x10f);
  local_35 = *(undefined1 *)((int)param_5 + 0x10d);
  local_47 = param_5[8];
  uStack_43 = param_5[9];
  uStack_3f = param_5[10];
  uStack_3b = param_5[0xb];
  local_34 = *(undefined1 *)((int)param_5 + 0x10e);
  local_32 = *(undefined1 *)((int)param_5 + 0x112);
  local_33 = *(undefined1 *)(param_5 + 0x44);
  local_31 = *(undefined1 *)((int)param_5 + 0x111);
  local_2c = param_5[0x47];
  local_24 = param_5[0x36];
  local_20 = param_5[0x4b];
  local_28 = param_5[0x37];
  local_2d = *(undefined1 *)((int)param_5 + 0x45);
  local_b3 = param_5[0x49];
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Packed Advanced: %d/ %s");
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","ship type = %d");
    }
  }
  local_d0 = param_1;
  uStack_cc = param_2;
  uStack_c8 = param_3;
  uStack_c4 = param_4;
  FUN_00402de0();
  puVar2 = FUN_00402de0();
  piVar1 = *(int **)(puVar2 + 0x90);
  uStack_118 = 0x41d6f0;
  FUN_0041ab70(auStack_110,&local_d0);
  uStack_118 = 3;
  uStack_11c = 1;
  uStack_120 = 0x9c;
  (**(code **)(*piVar1 + 0x50))(&local_b8);
  __security_check_cookie(uStack_58 ^ (uint)&uStack_120);
  return;
}


void FUN_0041d720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_19c [40];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 local_154;
  undefined4 local_153;
  undefined4 local_14b [80];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_154 = 0x96;
  uVar4 = 0;
  local_14b[0] = 0;
  local_14b[1] = 0;
  local_14b[2] = 0;
  local_14b[3] = 0;
  local_14b[4] = 0;
  local_14b[5] = 0;
  local_14b[6] = 0;
  local_14b[7] = 0;
  local_153 = *param_5;
  uVar5 = (int)(param_5[0x3c] - param_5[0x3b]) >> 3;
  local_14b[8] = 0;
  local_14b[9] = 0;
  local_14b[10] = 0;
  local_14b[0xb] = 0;
  local_14b[0xc] = 0;
  local_14b[0xd] = 0;
  local_14b[0xe] = 0;
  local_14b[0xf] = 0;
  local_14b[0x10] = 0;
  local_14b[0x11] = 0;
  local_14b[0x12] = 0;
  local_14b[0x13] = 0;
  local_14b[0x14] = 0;
  local_14b[0x15] = 0;
  local_14b[0x16] = 0;
  local_14b[0x17] = 0;
  local_14b[0x18] = 0;
  local_14b[0x19] = 0;
  local_14b[0x1a] = 0;
  local_14b[0x1b] = 0;
  local_14b[0x1c] = 0;
  local_14b[0x1d] = 0;
  local_14b[0x1e] = 0;
  local_14b[0x1f] = 0;
  local_14b[0x20] = 0;
  local_14b[0x21] = 0;
  local_14b[0x22] = 0;
  local_14b[0x23] = 0;
  local_14b[0x24] = 0;
  local_14b[0x25] = 0;
  local_14b[0x26] = 0;
  local_14b[0x27] = 0;
  local_14b[0x28] = 0;
  local_14b[0x29] = 0;
  local_14b[0x2a] = 0;
  local_14b[0x2b] = 0;
  local_14b[0x2c] = 0;
  local_14b[0x2d] = 0;
  local_14b[0x2e] = 0;
  local_14b[0x2f] = 0;
  local_14b[0x30] = 0;
  local_14b[0x31] = 0;
  local_14b[0x32] = 0;
  local_14b[0x33] = 0;
  local_14b[0x34] = 0;
  local_14b[0x35] = 0;
  local_14b[0x36] = 0;
  local_14b[0x37] = 0;
  local_14b[0x38] = 0;
  local_14b[0x39] = 0;
  local_14b[0x3a] = 0;
  local_14b[0x3b] = 0;
  local_14b[0x3c] = 0;
  local_14b[0x3d] = 0;
  local_14b[0x3e] = 0;
  local_14b[0x3f] = 0;
  local_14b[0x40] = 0;
  local_14b[0x41] = 0;
  local_14b[0x42] = 0;
  local_14b[0x43] = 0;
  local_14b[0x44] = 0;
  local_14b[0x45] = 0;
  local_14b[0x46] = 0;
  local_14b[0x47] = 0;
  local_14b[0x48] = 0;
  local_14b[0x49] = 0;
  local_14b[0x4a] = 0;
  local_14b[0x4b] = 0;
  local_14b[0x4c] = 0;
  local_14b[0x4d] = 0;
  local_14b[0x4e] = 0;
  local_14b[0x4f] = 0;
  if (uVar5 != 0) {
    do {
      if (0x13 < (int)uVar4) break;
      iVar1 = param_5[0x3b];
      local_14b[uVar4] = *(undefined4 *)(iVar1 + 4 + uVar4 * 8);
      local_14b[uVar4 + 0x14] = *(undefined4 *)(iVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  uVar4 = 0;
  uVar5 = (int)(param_5[0x3f] - param_5[0x3e]) >> 3;
  if (uVar5 != 0) {
    do {
      if (0x13 < (int)uVar4) break;
      iVar1 = param_5[0x3e];
      local_14b[uVar4 + 0x28] = *(undefined4 *)(iVar1 + 4 + uVar4 * 8);
      local_14b[uVar4 + 0x3c] = *(undefined4 *)(iVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  local_164 = param_1;
  uStack_160 = param_2;
  uStack_15c = param_3;
  uStack_158 = param_4;
  uStack_170 = 0x41d842;
  FUN_00402de0();
  uStack_170 = 0x41d847;
  puVar3 = FUN_00402de0();
  uStack_170 = 0;
  uStack_174 = 0;
  piVar2 = *(int **)(puVar3 + 0x90);
  FUN_0041ab70(auStack_19c,&local_164);
  (**(code **)(*piVar2 + 0x50))(&local_154,0x149,1,3,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041d890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  char *in_stack_fffffec8;
  undefined1 auStack_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined1 local_e7 [143];
  uint uStack_58;
  undefined4 local_1f;
  uint local_14;
  
  local_14 = DAT_0065500c ^ (uint)auStack_118;
  local_100 = 0x98;
  local_1f = param_5[0xc];
  uStack_140 = 0x41d8cc;
  FUN_004024e0(&stack0xfffffec8,param_5 + 6);
  FUN_00591630((int)local_e7,200,in_stack_fffffec8);
  local_ff = *param_5;
  local_fb = param_5[1];
  local_f7 = param_5[2];
  local_f3 = param_5[3];
  local_ef = param_5[4];
  local_eb = param_5[5];
  local_110 = param_1;
  uStack_10c = param_2;
  uStack_108 = param_3;
  uStack_104 = param_4;
  FUN_00402de0();
  puVar2 = FUN_00402de0();
  piVar1 = *(int **)(puVar2 + 0x90);
  uStack_158 = 0x41d932;
  FUN_0041ab70(auStack_150,&local_110);
  uStack_158 = 3;
  uStack_15c = 1;
  (**(code **)(*piVar1 + 0x50))(&local_100,0xe5);
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent message \'%s\' to client");
  }
  __security_check_cookie(uStack_58 ^ (uint)&uStack_15c);
  return;
}


void FUN_0041d990(void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint in_stack_00000018;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  char *in_stack_ffffff28;
  undefined2 local_b4 [7];
  undefined1 local_a6 [146];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1178;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_b4[0] = 0xa3;
  uStack_e0 = 0x41d9da;
  FUN_004024e0(&stack0xffffff28,&param_1);
  FUN_00591630((int)local_a6,0x90,in_stack_ffffff28);
  iVar2 = FUN_00402370();
  piVar1 = *(int **)(iVar2 + 0x30);
  FUN_0041ab70(auStack_f0,(undefined4 *)&DAT_00655688);
  (**(code **)(*piVar1 + 0x50))(local_b4,0x9f,1,3,0);
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent message \'%s\' to server");
  }
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar3 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041daa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_24;
  undefined4 local_23;
  undefined4 local_1b;
  uint local_14;
  
  local_14 = DAT_0065500c ^ (uint)auStack_48;
  local_24 = 0x9a;
  local_1b = param_6;
  local_23 = param_5;
  local_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  uStack_54 = 0x41daea;
  FUN_00402de0();
  uStack_54 = 0x41daef;
  puVar2 = FUN_00402de0();
  uStack_54 = 0;
  uStack_58 = 0;
  piVar1 = *(int **)(puVar2 + 0x90);
  uStack_88 = 0x41db08;
  FUN_0041ab70(auStack_80,&local_40);
  uStack_88 = 3;
  uStack_8c = 1;
  (**(code **)(*piVar1 + 0x50))(&local_24,0xd);
  if (DAT_0065b3d3 != '\0') {
    uVar3 = (uint)DAT_0065c30c;
    DAT_0065c30c = DAT_0065c30c + 1;
    FUN_0059d520(&param_1,(undefined4 *)(&DAT_00660428 + (uVar3 & 7) * 0x40));
    FUN_00591070("NETWORK","Sent presentation command \'%d\' (param2 %f, %f) to client %s");
  }
  __security_check_cookie(uStack_58 ^ (uint)&uStack_8c);
  return;
}


void FUN_0041dba0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint in_stack_ffffffd0;
  byte *pbVar5;
  
  pcVar4 = (char *)(param_1 + 1);
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED SET SCENARIO - \'%s\'");
  }
  pcVar2 = pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402690((void *)(DAT_0065b5cc + 0xb4),pcVar4,(int)pcVar2 - (param_1 + 2));
  pbVar5 = (byte *)(in_stack_ffffffd0 & 0xffffff00);
  pcVar2 = pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffffd0,pcVar4,(int)pcVar2 - (param_1 + 2));
  iVar3 = FUN_004a82e0(pbVar5);
  *(int *)(DAT_0065b5cc + 0xcc) = iVar3;
  if (iVar3 == 0) {
    FUN_00591070("ERROR","ERROR: Unknown scenario \'%s\'");
  }
  return;
}


void FUN_0041dc50(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  void *pvVar4;
  uint uVar5;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  char *in_stack_ffffff14;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b4;
  undefined1 local_b3 [13];
  undefined1 local_a6 [146];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b11b0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_b4 = 0xa3;
  if (in_stack_00000014 == 0) {
    in_stack_ffffff14 = (char *)((uint)in_stack_ffffff14 & 0xffffff00);
    uStack_f8 = 0x41dcbe;
    FUN_00402690(&stack0xffffff14,&PTR_005ce008,0);
  }
  else {
    FUN_004024e0(&stack0xffffff14,&param_1);
  }
  FUN_00591630((int)local_b3,0xc,in_stack_ffffff14);
  FUN_004024e0(&stack0xffffff14,&stack0x0000001c);
  FUN_00591630((int)local_a6,0x90,in_stack_ffffff14);
  uVar5 = 0;
  puVar3 = FUN_00402de0();
  if (*(int *)(puVar3 + 0x40) - *(int *)(puVar3 + 0x3c) >> 2 != 0) {
    do {
      puVar3 = FUN_00402de0();
      puVar1 = *(undefined4 **)(*(int *)(puVar3 + 0x3c) + uVar5 * 4);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      uStack_c0 = puVar1[2];
      uStack_bc = puVar1[3];
      FUN_00402de0();
      puVar3 = FUN_00402de0();
      piVar2 = *(int **)(puVar3 + 0x90);
      FUN_0041ab70(auStack_104,&local_c8);
      (**(code **)(*piVar2 + 0x50))(&local_b4,0x9f,1,3,0);
      uVar5 = uVar5 + 1;
      puVar3 = FUN_00402de0();
    } while (uVar5 < (uint)(*(int *)(puVar3 + 0x40) - *(int *)(puVar3 + 0x3c) >> 2));
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent message \'%s\' to all clients");
  }
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar4 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar4 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pvVar4 = *(void **)((int)in_stack_0000001c + -4),
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041de30(undefined4 *param_1,void *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint in_stack_0000001c;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  uint in_stack_ffffff14;
  char *pcVar4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b4;
  undefined1 local_b3 [13];
  undefined1 local_a6 [146];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b11e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_b4 = 0xa3;
  pcVar4 = (char *)(in_stack_ffffff14 & 0xffffff00);
  uStack_f8 = 0x41de90;
  FUN_00402690(&stack0xffffff14,"system",6);
  FUN_00591630((int)local_b3,0xc,pcVar4);
  FUN_004024e0(&stack0xffffff14,&param_2);
  FUN_00591630((int)local_a6,0x90,pcVar4);
  local_c8 = *param_1;
  uStack_c4 = param_1[1];
  uStack_c0 = param_1[2];
  uStack_bc = param_1[3];
  FUN_00402de0();
  puVar2 = FUN_00402de0();
  piVar1 = *(int **)(puVar2 + 0x90);
  FUN_0041ab70(auStack_104,&local_c8);
  (**(code **)(*piVar1 + 0x50))(&local_b4,0x9f,1,3,0);
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sent message \'%s\' to %s");
  }
  if (0xf < in_stack_0000001c) {
    pvVar3 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar3 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041df90(int param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_0065b5cc + 0xcc) == 0) {
    FUN_00591070("ERROR","ERROR: Unknown scenario but a scenariostate is trying to be set");
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED SET SCENARIO STATE");
  }
  iVar1 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x388) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x394) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3a0) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3ac) = *(undefined4 *)(param_1 + 0x25);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3b8) = *(undefined4 *)(param_1 + 0x31);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x38c) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x398) = *(undefined4 *)(param_1 + 0x11);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3a4) = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3b0) = *(undefined4 *)(param_1 + 0x29);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3bc) = *(undefined4 *)(param_1 + 0x35);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x390) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x39c) = *(undefined4 *)(param_1 + 0x15);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3a8) = *(undefined4 *)(param_1 + 0x21);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3b4) = *(undefined4 *)(param_1 + 0x2d);
  *(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x3c0) = *(undefined4 *)(param_1 + 0x39);
  return;
}


void FUN_0041e0d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int local_18;
  
  uVar8 = 0;
  iVar1 = *(int *)(DAT_0065b5cc[0x34] + 0x1f8);
  puVar6 = *(undefined4 **)(iVar1 + 0x44);
  uVar7 = (*(int *)(iVar1 + 0x48) - (int)puVar6) + 3U >> 2;
  if (*(undefined4 **)(iVar1 + 0x48) < puVar6) {
    uVar7 = 0;
  }
  if (uVar7 != 0) {
    do {
      if ((void *)*puVar6 != (void *)0x0) {
        FUN_005adb3f((void *)*puVar6);
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != uVar7);
  }
  *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x44);
  piVar9 = (int *)(param_1 + 1);
  local_18 = 0x14;
  do {
    if (*piVar9 != -1) {
      pfVar4 = (float *)FUN_005adb0f(8);
      piVar2 = DAT_0065b5cc;
      iVar1 = *piVar9;
      uVar7 = 0;
      *pfVar4 = 100.0;
      piVar3 = DAT_0065b5cc;
      uVar8 = piVar2[1] - *piVar2 >> 2;
      if (uVar8 != 0) {
        puVar6 = (undefined4 *)*piVar2;
        do {
          if (*(int *)*puVar6 == iVar1) {
            fVar5 = (float)((undefined4 *)*piVar2)[uVar7];
            goto LAB_0041e198;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < uVar8);
      }
      fVar5 = 0.0;
LAB_0041e198:
      pfVar4[1] = fVar5;
      *pfVar4 = (float)piVar9[0x14];
      FUN_005074d0(*(void **)(piVar3[0x34] + 0x1f8),pfVar4);
    }
    piVar9 = piVar9 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Updated ship component states: %d components in hold");
      }
      return;
    }
  } while( true );
}


void FUN_0041e220(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED SET MODULEBASICDATA REQUEST");
  }
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  iVar2 = *(int *)(iVar1 + 0x3c);
  uVar3 = *(int *)(iVar1 + 0x40) - iVar2 >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(iVar2 + uVar4 * 4);
      if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 5)) {
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 9);
          *(undefined1 *)(iVar1 + 0x62) = *(undefined1 *)(param_1 + 0xd);
          *(undefined1 *)(iVar1 + 0x60) = *(undefined1 *)(param_1 + 0xe);
          *(undefined1 *)(iVar1 + 0x61) = *(undefined1 *)(param_1 + 0xf);
          *(undefined1 *)(iVar1 + 99) = *(undefined1 *)(param_1 + 0x10);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x11);
          *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x15);
          *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_1 + 0x19);
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_00591070("ERROR","Module Type %d / slot %d doesn\'t exist in the player\'s ship.");
  return;
}


void FUN_0041e2e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 local_c [2];
  
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED SET MODULEDETAILS REQUEST");
  }
  uVar6 = 0;
  iVar7 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  iVar4 = *(int *)(iVar7 + 0x3c);
  uVar3 = *(int *)(iVar7 + 0x40) - iVar4 >> 2;
  if (uVar3 != 0) {
    do {
      iVar7 = *(int *)(iVar4 + uVar6 * 4);
      if (*(int *)(iVar7 + 0x10) == *(int *)(param_1 + 5)) goto LAB_0041e33f;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  iVar7 = 0;
LAB_0041e33f:
  local_18 = iVar7;
  if (iVar7 == 0) {
    FUN_00591070("ERROR","Module Type %d / slot %d doesn\'t exist in the player\'s ship.");
    return;
  }
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(param_1 + 0xd);
  *(undefined1 *)(iVar7 + 0x2c) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(param_1 + 0x17);
  *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined1 *)(iVar7 + 0x1c) = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(iVar7 + 0x1d) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(iVar7 + 0x1e) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(iVar7 + 0x1f) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(iVar7 + 0x20) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(iVar7 + 0x21) = *(undefined1 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x1f) == -1) {
    *(undefined4 *)(iVar7 + 0x18) = 0;
  }
  else {
    iVar4 = FUN_004a6d60(*(int *)(param_1 + 0x1f));
    *(int *)(iVar7 + 0x18) = iVar4;
  }
  if (*(int *)(param_1 + 0x11) != *(int *)(iVar7 + 0x38)) {
    *(int *)(iVar7 + 0x38) = *(int *)(param_1 + 0x11);
    iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    piVar1 = *(int **)(iVar4 + 0x40);
    local_14 = piVar1;
    puVar5 = FUN_00414000(local_c,&local_18,*(int **)(iVar4 + 0x3c),piVar1);
    piVar2 = (int *)*puVar5;
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
    local_10 = *(int *)(iVar4 + 0x40);
    if (piVar2 != piVar1) {
      sVar8 = *(int *)(local_10 + 0x40) - (int)local_14;
      memmove(piVar2,local_14,sVar8);
      *(size_t *)(local_10 + 0x40) = sVar8 + (int)piVar2;
      iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
    }
    iVar4 = *(int *)(iVar4 + 0x40);
    piVar1 = (int *)(*(int *)(iVar4 + 0x3c) + *(int *)(iVar7 + 0x38) * 4);
    piVar2 = *(int **)(iVar4 + 0x40);
    if (*(int **)(iVar4 + 0x44) != piVar2) {
      if (piVar1 == piVar2) {
        *piVar2 = iVar7;
        *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 4;
        return;
      }
      *piVar2 = piVar2[-1];
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 4;
      sVar8 = (int)piVar2 + (-4 - (int)piVar1);
      memmove((void *)((int)piVar2 - sVar8),piVar1,sVar8);
      *piVar1 = iVar7;
      return;
    }
    FUN_00414080((void *)(iVar4 + 0x3c),piVar1,&local_18);
  }
  return;
}


void FUN_0041e4c0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  char *pcVar15;
  
  uVar8 = 0;
  piVar1 = *(int **)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x3c);
  uVar12 = *(int *)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar12 != 0) {
    piVar10 = piVar1;
    do {
      if (*(int *)(*piVar10 + 0x10) == *(int *)(param_1 + 5)) {
        iVar13 = piVar1[uVar8];
        goto LAB_0041e50a;
      }
      uVar8 = uVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (uVar8 < uVar12);
  }
  iVar13 = 0;
LAB_0041e50a:
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Unpacking component for module %s");
  }
  cVar4 = DAT_0065b3d3;
  iVar5 = *(int *)(param_1 + 9);
  iVar9 = *(int *)(iVar13 + 0xc);
  pfVar2 = *(float **)(iVar9 + 4 + iVar5 * 4);
  if (*(int *)(param_1 + 0xd) == -1) {
    if (pfVar2 != (float *)0x0) {
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Removing component (%s, %.0f%% damage) from module %s");
        iVar5 = *(int *)(param_1 + 9);
        iVar9 = *(int *)(iVar13 + 0xc);
      }
      pvVar3 = *(void **)(iVar9 + 4 + iVar5 * 4);
      if (pvVar3 != (void *)0x0) {
        FUN_005adb3f(pvVar3);
        iVar5 = *(int *)(param_1 + 9);
        iVar9 = *(int *)(iVar13 + 0xc);
      }
      *(undefined4 *)(iVar9 + 4 + iVar5 * 4) = 0;
      return;
    }
  }
  else {
    if (pfVar2 == (float *)0x0) {
      puVar6 = (undefined4 *)FUN_005adb0f(8);
      piVar1 = DAT_0065b5cc;
      iVar5 = *(int *)(param_1 + 0xd);
      *puVar6 = 0x42c80000;
      uVar8 = 0;
      uVar12 = piVar1[1] - *piVar1 >> 2;
      if (uVar12 != 0) {
        puVar11 = (undefined4 *)*piVar1;
        do {
          if (*(int *)*puVar11 == iVar5) {
            uVar7 = ((undefined4 *)*piVar1)[uVar8];
            goto LAB_0041e677;
          }
          uVar8 = uVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar8 < uVar12);
      }
      uVar7 = 0;
LAB_0041e677:
      bVar14 = DAT_0065b3d3 == '\0';
      puVar6[1] = uVar7;
      *(undefined4 **)(*(int *)(iVar13 + 0xc) + 4 + *(int *)(param_1 + 9) * 4) = puVar6;
      **(float **)(*(int *)(iVar13 + 0xc) + 4 + *(int *)(param_1 + 9) * 4) =
           (float)*(int *)(param_1 + 0x11);
      if (bVar14) {
        return;
      }
      pcVar15 = "Added component (%s, slot %d) with damage %.0f%%";
    }
    else {
      *pfVar2 = (float)*(int *)(param_1 + 0x11);
      if (cVar4 == '\0') {
        return;
      }
      pcVar15 = "Set damage of component (%s, slot %d) to %.0f%%";
    }
    FUN_00591070("NETWORK",pcVar15);
  }
  return;
}


void FUN_0041e700(int param_1)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  char *pcVar15;
  
  uVar8 = 0;
  piVar1 = *(int **)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x3c);
  uVar12 = *(int *)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar12 != 0) {
    piVar10 = piVar1;
    do {
      if (*(int *)(*piVar10 + 0x10) == *(int *)(param_1 + 5)) {
        iVar13 = piVar1[uVar8];
        goto LAB_0041e74a;
      }
      uVar8 = uVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (uVar8 < uVar12);
  }
  iVar13 = 0;
LAB_0041e74a:
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Unpacking addon for module %s");
  }
  cVar4 = DAT_0065b3d3;
  iVar5 = *(int *)(param_1 + 9);
  iVar9 = *(int *)(iVar13 + 0xc);
  pfVar2 = *(float **)(iVar9 + 0x54 + iVar5 * 4);
  if (*(int *)(param_1 + 0xd) == -1) {
    if (pfVar2 != (float *)0x0) {
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Removing component (%s, %.0f%% damage) from module %s");
        iVar5 = *(int *)(param_1 + 9);
        iVar9 = *(int *)(iVar13 + 0xc);
      }
      pvVar3 = *(void **)(iVar9 + 0x54 + iVar5 * 4);
      if (pvVar3 != (void *)0x0) {
        FUN_005adb3f(pvVar3);
        iVar5 = *(int *)(param_1 + 9);
        iVar9 = *(int *)(iVar13 + 0xc);
      }
      *(undefined4 *)(iVar9 + 0x54 + iVar5 * 4) = 0;
      return;
    }
  }
  else {
    if (pfVar2 == (float *)0x0) {
      puVar6 = (undefined4 *)FUN_005adb0f(8);
      piVar1 = DAT_0065b5cc;
      iVar5 = *(int *)(param_1 + 0xd);
      *puVar6 = 0x42c80000;
      uVar8 = 0;
      uVar12 = piVar1[1] - *piVar1 >> 2;
      if (uVar12 != 0) {
        puVar11 = (undefined4 *)*piVar1;
        do {
          if (*(int *)*puVar11 == iVar5) {
            uVar7 = ((undefined4 *)*piVar1)[uVar8];
            goto LAB_0041e8b7;
          }
          uVar8 = uVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar8 < uVar12);
      }
      uVar7 = 0;
LAB_0041e8b7:
      bVar14 = DAT_0065b3d3 == '\0';
      puVar6[1] = uVar7;
      *(undefined4 **)(*(int *)(iVar13 + 0xc) + 0x54 + *(int *)(param_1 + 9) * 4) = puVar6;
      **(float **)(*(int *)(iVar13 + 0xc) + 0x54 + *(int *)(param_1 + 9) * 4) =
           (float)*(int *)(param_1 + 0x11);
      if (bVar14) {
        return;
      }
      pcVar15 = "Added component (%s, slot %d) with damage %.0f%%";
    }
    else {
      *pfVar2 = (float)*(int *)(param_1 + 0x11);
      if (cVar4 == '\0') {
        return;
      }
      pcVar15 = "Set damage of component (%s, slot %d) to %.0f%%";
    }
    FUN_00591070("NETWORK",pcVar15);
  }
  return;
}


void FUN_0041e940(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1222;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)((int)param_1 + 1);
  param_1 = *(undefined4 **)(DAT_0065b5cc + 0xd0);
  if (*piVar1 != -1) {
    uVar5 = 0;
    puVar8 = (undefined4 *)param_1[0x85];
    uVar7 = param_1[0x86] - (int)puVar8 >> 2;
    if (uVar7 != 0) {
      do {
        if (*(int *)*puVar8 == *piVar1) {
          puVar8 = *(undefined4 **)(param_1[0x85] + uVar5 * 4);
          goto LAB_0041e9a7;
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 < uVar7);
    }
    puVar8 = (undefined4 *)0x0;
LAB_0041e9a7:
    if (puVar8 != (undefined4 *)0x0) goto LAB_0041ea3d;
  }
  param_1 = (undefined4 *)FUN_005adb0f(0x138);
  local_8 = 0;
  param_1 = FUN_00508c00(param_1,*(undefined4 *)((int)puVar4 + 5),*(undefined4 *)((int)puVar4 + 1));
  local_8 = 0xffffffff;
  iVar3 = *(int *)(DAT_0065b5cc + 0xd0);
  puVar8 = *(undefined4 **)(iVar3 + 0x218);
  if (*(undefined4 **)(iVar3 + 0x21c) == puVar8) {
    FUN_00414080((void *)(iVar3 + 0x214),puVar8,&param_1);
  }
  else {
    *puVar8 = param_1;
    *(int *)(iVar3 + 0x218) = *(int *)(iVar3 + 0x218) + 4;
  }
  puVar8 = param_1;
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Making new sensordata object: %d");
  }
LAB_0041ea3d:
  puVar8[0x36] = puVar4[0x25];
  pcVar6 = (char *)((int)puVar4 + 9);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00402690(puVar8 + 0x12,(char *)((int)puVar4 + 9),(int)pcVar6 - ((int)puVar4 + 10));
  param_1 = puVar4 + 0xf;
  pcVar6 = (char *)((int)puVar4 + 0x3b);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00402690(puVar8 + 0x18,(char *)((int)puVar4 + 0x3b),(int)pcVar6 - (int)param_1);
  param_1 = puVar4 + 0x17;
  pcVar6 = (char *)((int)puVar4 + 0x5b);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00402690(puVar8 + 0x24,(char *)((int)puVar4 + 0x5b),(int)pcVar6 - (int)param_1);
  puVar8[0x39] = *(undefined4 *)((int)puVar4 + 0x69);
  puVar8[0x3a] = *(undefined4 *)((int)puVar4 + 0x6d);
  puVar8[0x38] = *(undefined4 *)((int)puVar4 + 0x65);
  puVar8[0x4b] = puVar4[0x26];
  *(undefined1 *)(puVar8 + 0x43) = *(undefined1 *)((int)puVar4 + 0x81);
  *(undefined1 *)((int)puVar8 + 0x10f) = *(undefined1 *)((int)puVar4 + 0x82);
  *(undefined1 *)((int)puVar8 + 0x10e) = *(undefined1 *)(puVar4 + 0x21);
  *(undefined1 *)((int)puVar8 + 0x10d) = *(undefined1 *)((int)puVar4 + 0x83);
  puVar8[0x47] = puVar4[0x23];
  *(undefined1 *)((int)puVar8 + 9) = 1;
  puVar8[0x37] = puVar4[0x24];
  param_1 = puVar4 + 0xf;
  pcVar6 = (char *)((int)puVar4 + 0x3b);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00402690(puVar8 + 0x18,(char *)((int)puVar4 + 0x3b),(int)pcVar6 - (int)param_1);
  bVar9 = DAT_0065b3d3 != '\0';
  *(undefined1 *)((int)puVar8 + 0x45) = *(undefined1 *)((int)puVar4 + 0x8b);
  *(undefined8 *)(puVar8 + 10) = *(undefined8 *)((int)puVar4 + 0x79);
  *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((int)puVar4 + 0x71);
  if ((bVar9) && (FUN_00591070("NETWORK","Unpacked Advanced: %d/ %s"), DAT_0065b3d3 != '\0')) {
    FUN_00591070("NETWORK","ship type = %d");
  }
  ExceptionList = local_10;
  return;
}


void FUN_0041ebc0(int param_1)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 1) != -1) {
    uVar5 = 0;
    iVar6 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x214);
    uVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x218) - iVar6 >> 2;
    if (uVar4 != 0) {
      do {
        piVar1 = *(int **)(iVar6 + uVar5 * 4);
        if (*piVar1 == *(int *)(param_1 + 1)) {
          if (piVar1 != (int *)0x0) {
            iVar6 = 0;
            piVar1[0x3c] = piVar1[0x3b];
            pfVar7 = (float *)(param_1 + 9);
            goto LAB_0041ec50;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  if (DAT_0065b3d3 == '\0') {
    return;
  }
  pcVar8 = "No sensordata for sensorID: %d";
  goto LAB_0041ec1f;
  while( true ) {
    local_c = *pfVar7;
    pfVar3 = (float *)piVar1[0x3c];
    local_10 = fVar2;
    if ((float *)piVar1[0x3d] == pfVar3) {
      FUN_00421160(piVar1 + 0x3b,pfVar3,&local_10);
    }
    else {
      *pfVar3 = fVar2;
      pfVar3[1] = local_c;
      piVar1[0x3c] = piVar1[0x3c] + 8;
    }
    iVar6 = iVar6 + 1;
    pfVar7 = pfVar7 + 1;
    if (0x13 < iVar6) break;
LAB_0041ec50:
    fVar2 = pfVar7[0x14];
    if ((fVar2 == 0.0) && (*pfVar7 == 0.0)) break;
  }
  iVar6 = 0;
  pfVar7 = (float *)(param_1 + 0xa9);
  piVar1[0x3f] = piVar1[0x3e];
  do {
    fVar2 = pfVar7[0x14];
    if ((fVar2 == 0.0) && (*pfVar7 == 0.0)) break;
    local_c = *pfVar7;
    pfVar3 = (float *)piVar1[0x3f];
    local_10 = fVar2;
    if ((float *)piVar1[0x40] == pfVar3) {
      FUN_00421160(piVar1 + 0x3e,pfVar3,&local_10);
    }
    else {
      *pfVar3 = fVar2;
      pfVar3[1] = local_c;
      piVar1[0x3f] = piVar1[0x3f] + 8;
    }
    iVar6 = iVar6 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar6 < 0x14);
  if (DAT_0065b3d3 == '\0') {
    return;
  }
  pcVar8 = "Unpacked Waveform for sensorID %d";
LAB_0041ec1f:
  FUN_00591070("NETWORK",pcVar8);
  return;
}


void FUN_0041ed30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *this;
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED DATA REQUEST: %s");
  }
  uVar3 = 0;
  puVar1 = FUN_00402de0();
  uVar2 = *(int *)(puVar1 + 0x40) - *(int *)(puVar1 + 0x3c) >> 2;
  if (uVar2 != 0) {
    do {
      this = *(int **)(*(int *)(puVar1 + 0x3c) + uVar3 * 4);
      if ((*this == param_1) && (this[1] == param_2)) {
        if (this != (int *)0x0) {
          if (*(int *)(param_5 + 1) == 0) {
            bVar4 = DAT_0065b3d3 == '\0';
            *(undefined1 *)(this + 0x18) = 1;
            if (bVar4) {
              return;
            }
            uVar2 = (uint)DAT_0065c30c;
            DAT_0065c30c = DAT_0065c30c + 1;
            FUN_0059d520(this,(undefined4 *)(&DAT_00660428 + (uVar2 & 7) * 0x40));
            FUN_00591070("NETWORK","Enabling ship data from client %s");
            return;
          }
          if (*(int *)(param_5 + 1) != 1) {
            return;
          }
          *(undefined1 *)((int)this + 0x61) = 1;
          if (DAT_0065b3d3 == '\0') {
            return;
          }
          uVar2 = (uint)DAT_0065c30c;
          DAT_0065c30c = DAT_0065c30c + 1;
          FUN_0059d520(this,(undefined4 *)(&DAT_00660428 + (uVar2 & 7) * 0x40));
          FUN_00591070("NETWORK","Enabling ship sensor data from client %s");
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_00591070("ERROR","packet came from unknown client.");
  return;
}


void FUN_0041ee70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar2 = FUN_00402de0();
  uVar3 = *(int *)(puVar2 + 0x40) - *(int *)(puVar2 + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(puVar2 + 0x3c) + uVar4 * 4);
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        if (piVar1 != (int *)0x0) {
          if (*(int *)(param_5 + 1) != 0) {
            return;
          }
          FUN_00591070("MULTI","Received server admin request: SERVER_ADMIN_SET_DIFFICULTY");
          if (*(uint *)(param_5 + 5) < 4) {
            DAT_00655078 = *(uint *)(param_5 + 5);
            FUN_004b2910();
            *(undefined4 *)(DAT_0065b444 + 0xa0) = *(undefined4 *)(param_5 + 5);
            return;
          }
          FUN_00591070("MULTI","Illegal difficulty: %d");
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_00591070("ERROR","packet came from unknown client.");
  return;
}


void FUN_0041ef40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  void *in_stack_ffffff9c;
  undefined1 local_4c [8];
  undefined4 uStack_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = FUN_00402de0();
  uVar4 = 0;
  piVar5 = *(int **)(puVar2 + 0x3c);
  uVar3 = *(int *)(puVar2 + 0x40) - (int)piVar5 >> 2;
  if (uVar3 != 0) {
    do {
      piVar6 = (int *)*piVar5;
      if ((*piVar6 == param_1) && (piVar6[1] == param_2)) goto LAB_0041efa0;
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < uVar3);
  }
  piVar6 = (int *)0x0;
LAB_0041efa0:
  if (DAT_0065b3d3 != '\0') {
    uStack_44 = 0x41efc4;
    FUN_00591070("NETWORK","RECEIVED SET READY STATE REQUEST: %s");
  }
  *(undefined1 *)((int)piVar6 + 0x41) = *(undefined1 *)(param_5 + 1);
  puVar2 = FUN_00402de0();
  piVar1 = *(int **)(puVar2 + 0x40);
  for (piVar5 = *(int **)(puVar2 + 0x3c); piVar5 != piVar1; piVar5 = piVar5 + 1) {
    if ((*(int *)*piVar5 == param_1) && (((int *)*piVar5)[1] == param_2)) {
      local_4c[0] = 0;
      if (*(char *)((int)piVar6 + 0x41) == '\0') {
        FUN_00402690(local_4c,"You are no longer ready to launch.",0x22);
        local_8 = 1;
      }
      else {
        FUN_00402690(local_4c,"You are ready to launch.",0x18);
        local_8 = 0;
      }
    }
    else if (*(char *)((int)piVar6 + 0x41) == '\0') {
      FUN_00591e00(local_4c,"%s is no longer ready to launch.");
      local_8 = 3;
    }
    else {
      FUN_00591e00(local_4c,"%s is ready to launch.");
      local_8 = 2;
    }
    in_stack_ffffff9c = (void *)((uint)in_stack_ffffff9c & 0xffffff00);
    FUN_00402690(&stack0xffffff9c,"system",6);
    local_8 = 0xffffffff;
    FUN_0041dc50(in_stack_ffffff9c);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0041f0f0(void *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  void *this;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 *puVar5;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  void *pvVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  void **this_00;
  void *in_stack_ffffff5c;
  byte *in_stack_ffffff74;
  void **local_48;
  int local_3c;
  char local_2d;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b12c9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED SHIP CLIENT REQUEST: %s");
  }
  puVar5 = FUN_00402de0();
  uVar9 = 0;
  piVar1 = *(int **)(puVar5 + 0x3c);
  uVar16 = *(int *)(puVar5 + 0x40) - (int)piVar1 >> 2;
  piVar15 = piVar1;
  if (uVar16 == 0) {
LAB_0041f18a:
    FUN_00591070("ERROR","packet came from unknown client.");
  }
  else {
    while( true ) {
      if ((*(void **)*piVar15 == param_1) && ((byte *)((int *)*piVar15)[1] == param_2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) break;
      uVar9 = uVar9 + 1;
      piVar15 = piVar15 + 1;
      if (uVar16 <= uVar9) goto LAB_0041f18a;
    }
    this = (void *)piVar1[uVar9];
    if (this == (void *)0x0) goto LAB_0041f18a;
    pbVar14 = (byte *)((int)this + 0x28);
    pbVar10 = pbVar14;
    if (0xf < *(uint *)((int)this + 0x3c)) {
      pbVar10 = *(byte **)pbVar14;
    }
    uVar9 = FUN_004031f0(pbVar10,*(uint *)((int)this + 0x38),(byte *)&PTR_005ce008,0);
    this_00 = (void **)((int)this + 0x48);
    ppvVar6 = this_00;
    if (0xf < *(uint *)((int)this + 0x5c)) {
      ppvVar6 = *this_00;
    }
    uVar16 = FUN_004031f0((byte *)ppvVar6,*(uint *)((int)this + 0x58),(byte *)&PTR_005ce008,0);
    local_2d = (char)uVar16;
    pcVar11 = (char *)(param_5 + 1);
    do {
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    FUN_00402690(pbVar14,(char *)(param_5 + 1),(int)pcVar11 - (param_5 + 2));
    pcVar11 = (char *)(param_5 + 0xd);
    do {
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    FUN_00402690(this_00,(char *)(param_5 + 0xd),(int)pcVar11 - (param_5 + 0xe));
    ppvVar6 = this_00;
    if (0xf < *(uint *)((int)this + 0x5c)) {
      ppvVar6 = *this_00;
    }
    uVar16 = FUN_004031f0((byte *)ppvVar6,*(uint *)((int)this + 0x58),&DAT_005e4690,4);
    if ((char)uVar16 != '\0') {
      puVar5 = FUN_00402de0();
      local_8 = 0;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      piVar1 = *(int **)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c);
      piVar15 = *(int **)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
      uVar16 = 0xf;
      if (piVar15 != piVar1) {
        do {
          iVar7 = *piVar15;
          if (*(int *)(iVar7 + 0xe8) == 0) {
            FUN_004024e0(&stack0xffffff74,(undefined4 *)(iVar7 + 0x1c));
            cVar4 = FUN_004232c0(puVar5,in_stack_ffffff74);
            if (cVar4 != '\0') goto LAB_0041f2e8;
            ppvVar6 = (void **)(iVar7 + 0x1c);
            if (&local_2c != ppvVar6) {
              if (0xf < *(uint *)(iVar7 + 0x30)) {
                ppvVar6 = *ppvVar6;
              }
              FUN_00402690(&local_2c,ppvVar6,*(uint *)(iVar7 + 0x2c));
              uVar16 = uStack_18;
              goto LAB_0041f2f5;
            }
            break;
          }
LAB_0041f2e8:
          piVar15 = piVar15 + 1;
        } while (piVar15 != piVar1);
        uVar16 = 0xf;
      }
LAB_0041f2f5:
      if (this_00 != &local_2c) {
        FUN_00401b20((int *)this_00);
        pvVar12 = local_2c;
        uVar16 = 0xf;
        local_2c = (void *)((uint)local_2c & 0xffffff00);
        *this_00 = pvVar12;
        *(undefined4 *)((int)this + 0x4c) = uStack_28;
        *(undefined4 *)((int)this + 0x50) = uStack_24;
        *(undefined4 *)((int)this + 0x54) = uStack_20;
        *(ulonglong *)((int)this + 0x58) = CONCAT44(uStack_18,local_1c);
      }
      local_8 = 0xffffffff;
      if (0xf < uVar16) {
        pvVar12 = local_2c;
        if ((0xfff < uVar16 + 1) &&
           (pvVar12 = *(void **)((int)local_2c + -4),
           0x1f < (uint)((int)local_2c + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      local_2d = '\x01';
    }
    FUN_004024e0(&stack0xffffff74,this_00);
    iVar7 = FUN_004a7100(in_stack_ffffff74);
    *(int *)((int)this + 100) = iVar7;
    if (iVar7 == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = *(undefined4 *)(iVar7 + 0x250);
    }
    *(undefined4 *)((int)this + 0x44) = uVar13;
    if (iVar7 == 0) {
      uVar16 = (uint)DAT_0065c30c;
      DAT_0065c30c = DAT_0065c30c + 1;
      FUN_0059d520(this,(undefined4 *)(&DAT_00660428 + (uVar16 & 7) * 0x40));
      FUN_00591070("MULTI","Setting client %s to username \'%s\'");
    }
    else {
      uVar16 = (uint)DAT_0065c30c;
      DAT_0065c30c = DAT_0065c30c + 1;
      FUN_0059d520(this,(undefined4 *)(&DAT_00660428 + (uVar16 & 7) * 0x40));
      in_stack_ffffff74 = (byte *)0x41f3eb;
      FUN_00591070("MULTI","Setting client %s to username \'%s\', ship %s");
    }
    if (local_2d != '\0') {
      ppvVar6 = this_00;
      if (0xf < *(uint *)((int)this + 0x5c)) {
        ppvVar6 = *this_00;
      }
      uVar16 = FUN_004031f0((byte *)ppvVar6,*(uint *)((int)this + 0x58),(byte *)&PTR_005ce008,0);
      if ((char)uVar16 == '\0') {
        FUN_004024e0(&stack0xffffff74,this_00);
        local_8 = 1;
        puVar5 = FUN_00402de0();
        local_8 = 0xffffffff;
        FUN_00423700(puVar5,param_1,param_2,param_3,param_4,in_stack_ffffff74);
      }
    }
    if ((char)uVar9 != '\0') {
      FUN_00591e00(&stack0xffffff74,"`$\'`!%s`$\' has joined");
      local_8 = 2;
      in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
      FUN_00402690(&stack0xffffff5c,"system",6);
      local_8 = 0xffffffff;
      FUN_0041dc50(in_stack_ffffff5c);
    }
    if (local_2d != '\0') {
      ppvVar6 = this_00;
      if (0xf < *(uint *)((int)this + 0x5c)) {
        ppvVar6 = *this_00;
      }
      uVar9 = FUN_004031f0((byte *)ppvVar6,*(uint *)((int)this + 0x58),(byte *)&PTR_005ce008,0);
      if ((char)uVar9 == '\0') {
        local_3c = 0;
        iVar7 = *(int *)(DAT_0065b5cc + 0xcc);
        iVar2 = *(int *)(iVar7 + 0x78);
        iVar8 = *(int *)(iVar7 + 0x7c) - iVar2;
        do {
          if (iVar8 >> 2 == 0) {
            FUN_00591e00(&stack0xffffff74,
                         "Error! \'`!%s`$\' will command unknown vessel with rego %s");
            local_8 = 5;
            in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
            FUN_00402690(&stack0xffffff5c,"system",6);
            local_8 = CONCAT31(local_8._1_3_,6);
LAB_0041f65e:
            if (DAT_0065c2c8 == 0) {
              DAT_0065c2c8 = FUN_005adb0f(1);
            }
            local_8 = 0xffffffff;
            FUN_0041dc50(in_stack_ffffff5c);
            break;
          }
          iVar2 = *(int *)(iVar2 + local_3c * 4);
          pbVar14 = (byte *)(iVar2 + 0x1c);
          if (0xf < *(uint *)(iVar2 + 0x30)) {
            pbVar14 = *(byte **)(iVar2 + 0x1c);
          }
          local_48 = this_00;
          if (0xf < *(uint *)((int)this + 0x5c)) {
            local_48 = *this_00;
          }
          uVar9 = FUN_004031f0((byte *)local_48,*(uint *)((int)this + 0x58),pbVar14,
                               *(uint *)(iVar2 + 0x2c));
          if ((char)uVar9 != '\0') {
            puVar5 = &stack0xffffff74;
            FUN_00591e00(&stack0xffffff74,"\'`!%s`$\' will command `%%%s `$(%s, `9%s`$)");
            local_8 = 3;
            in_stack_ffffff5c = (void *)((uint)puVar5 & 0xffffff00);
            FUN_00402690(&stack0xffffff5c,"system",6);
            local_8 = CONCAT31(local_8._1_3_,4);
            goto LAB_0041f65e;
          }
          local_3c = local_3c + 1;
          iVar2 = *(int *)(iVar7 + 0x78);
          iVar8 = *(int *)(iVar7 + 0x7c) - iVar2;
        } while( true );
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041f690(int param_1)

{
  char cVar1;
  uint uVar2;
  byte ****ppppbVar3;
  undefined4 ****ppppuVar4;
  void *pvVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  uint uVar8;
  void *in_stack_ffffff74;
  undefined4 ***local_5c [4];
  uint local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1310;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  pcVar6 = (char *)(param_1 + 1);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_2c,(char *)(param_1 + 1),(int)pcVar6 - (param_1 + 2));
  local_8 = 0;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
  pcVar6 = (char *)(param_1 + 0xe);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_5c,(char *)(param_1 + 0xe),(int)pcVar6 - (param_1 + 0xf));
  uVar8 = local_18;
  ppppbVar7 = (byte ****)local_2c[0];
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,2);
  ppppbVar3 = local_2c;
  if (0xf < local_18) {
    ppppbVar3 = (byte ****)local_2c[0];
  }
  uVar2 = FUN_004031f0((byte *)ppppbVar3,local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    ppppbVar3 = local_2c;
    if (0xf < uVar8) {
      ppppbVar3 = ppppbVar7;
    }
    uVar2 = FUN_004031f0((byte *)ppppbVar3,local_1c,(byte *)"system",6);
    if ((char)uVar2 == '\0') {
      FUN_00402690(local_44,&DAT_005e6758,2);
      ppppbVar3 = local_2c;
      if (0xf < uVar8) {
        ppppbVar3 = ppppbVar7;
      }
      FUN_00403640(local_44,ppppbVar3,local_1c);
      FUN_00403640(local_44,&DAT_005e6ae4,2);
      ppppbVar7 = (byte ****)local_2c[0];
      uVar8 = local_18;
    }
    else {
      FUN_00402690(local_44,&DAT_005e6754,2);
    }
  }
  ppppuVar4 = local_5c;
  if (0xf < local_48) {
    ppppuVar4 = (undefined4 ****)local_5c[0];
  }
  FUN_00403640(local_44,ppppuVar4,local_4c);
  FUN_004024e0(&stack0xffffff74,local_44);
  local_8._0_1_ = 3;
  pvVar5 = (void *)FUN_00402370();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0041c350(pvVar5,in_stack_ffffff74);
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Received chat line from \'%s\': %s");
  }
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar5 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    ppppuVar4 = (undefined4 ****)local_5c[0];
    if (0xfff < local_48 + 1) {
      ppppuVar4 = (undefined4 ****)local_5c[0][-1];
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppuVar4);
  }
  if (0xf < uVar8) {
    ppppbVar3 = ppppbVar7;
    if (0xfff < uVar8 + 1) {
      ppppbVar3 = (byte ****)ppppbVar7[-1];
      if ((byte *)0x1f < (byte *)((int)ppppbVar7 + (-4 - (int)ppppbVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppbVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041f8f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined1 *puVar4;
  char ****ppppcVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  char ****ppppcVar10;
  undefined4 *puVar11;
  void *in_stack_ffffff8c;
  void *in_stack_ffffffa4;
  char ***local_2c [2];
  int local_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1360;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  puVar4 = FUN_00402de0();
  uVar6 = 0;
  piVar2 = *(int **)(puVar4 + 0x3c);
  uVar9 = *(int *)(puVar4 + 0x40) - (int)piVar2 >> 2;
  piVar8 = piVar2;
  if (uVar9 != 0) {
    do {
      if ((*(int *)*piVar8 == local_24) && (((int *)*piVar8)[1] == iStack_20)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        puVar11 = (undefined4 *)piVar2[uVar6];
        goto LAB_0041f96a;
      }
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 < uVar9);
  }
  puVar11 = (undefined4 *)0x0;
LAB_0041f96a:
  FUN_00591070("MULTI","Received chat line from client \'%s\': %s");
  iStack_1c = 0;
  uStack_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  pcVar7 = (char *)(param_5 + 0xe);
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_2c,(char *)(param_5 + 0xe),(int)pcVar7 - (param_5 + 0xf));
  ppppcVar10 = (char ****)local_2c[0];
  local_8 = 0;
  if (iStack_1c != 0) {
    ppppcVar5 = local_2c;
    if (0xf < uStack_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    if (*(char *)ppppcVar5 == '/') {
      FUN_004024e0(&stack0xffffffa4,local_2c);
      local_8._0_1_ = 1;
      FUN_00402de0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0042a960(puVar11,in_stack_ffffffa4);
      ppppcVar10 = (char ****)local_2c[0];
      goto LAB_0041fa8a;
    }
  }
  pcVar7 = (char *)(param_5 + 0xe);
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffffa4,(void *)(param_5 + 0xe),(int)pcVar7 - (param_5 + 0xf));
  local_8._0_1_ = 2;
  FUN_004024e0(&stack0xffffff8c,puVar11 + 10);
  local_8._0_1_ = 3;
  if (DAT_0065c2c8 == 0) {
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041dc50(in_stack_ffffff8c);
LAB_0041fa8a:
  if (0xf < uStack_18) {
    ppppcVar5 = ppppcVar10;
    if ((0xfff < uStack_18 + 1) &&
       (ppppcVar5 = (char ****)ppppcVar10[-1],
       (char *)0x1f < (char *)((int)ppppcVar10 + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0041fae0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_stack_ffffffd0;
  byte *pbVar4;
  
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","RECEIVED WEAPON COMMAND");
  }
  if (*(int *)(param_1 + 1) == 0) {
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","Adding weapon \'%s\' to tube %d");
    }
    pbVar4 = (byte *)(in_stack_ffffffd0 & 0xffffff00);
    pcVar3 = (char *)(param_1 + 9);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00402690(&stack0xffffffd0,(char *)(param_1 + 9),(int)pcVar3 - (param_1 + 10));
    iVar2 = FUN_004a8180(pbVar4);
    FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar2,*(uint *)(param_1 + 5));
  }
  else if (*(int *)(param_1 + 1) == 1) {
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","Removing a weapon from tube \'%d\'");
    }
    iVar2 = *(int *)(*(int *)(*(int *)((int)*(void **)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) + 0x3c +
                    *(int *)(param_1 + 5) * 4);
    if (iVar2 != 0) {
      FUN_0050f370(*(void **)(DAT_0065b5cc + 0xd0),iVar2);
      return;
    }
    FUN_00591070("ERROR","Unable to remove weapon.");
    return;
  }
  return;
}


void FUN_0041fbf0(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = FUN_00420f40((void *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x14c),(int *)(param_1 + 1));
  bVar2 = DAT_0065b3d3 != '\0';
  *piVar1 = *(int *)(param_1 + 5);
  if (bVar2) {
    FUN_00591070("NETWORK","HULL DAMAGE STATE CHANGE: %s is now %d");
  }
  return;
}


void FUN_0041fc50(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *_Dst;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *local_10;
  char *local_c;
  char *local_8;
  
  uVar7 = 0;
  iVar4 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x248) - *(int *)(DAT_0065b5cc + 0x244) >> 2 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(iVar4 + 0x244) + uVar7 * 4);
      if (piVar2 != (int *)0x0) {
        FUN_0041ff50(piVar2);
        iVar4 = DAT_0065b5cc;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar4 + 0x248) - *(int *)(iVar4 + 0x244) >> 2));
  }
  uVar7 = 0;
  *(undefined4 *)(iVar4 + 0x248) = *(undefined4 *)(iVar4 + 0x244);
  if (*(int *)(iVar4 + 0x254) - *(int *)(iVar4 + 0x250) >> 2 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(iVar4 + 0x250) + uVar7 * 4);
      if (piVar2 != (int *)0x0) {
        FUN_0041fff0(piVar2);
        FUN_005adb3f(piVar2);
        iVar4 = DAT_0065b5cc;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar4 + 0x254) - *(int *)(iVar4 + 0x250) >> 2));
  }
  *(undefined4 *)(iVar4 + 0x254) = *(undefined4 *)(iVar4 + 0x250);
  pcVar6 = (char *)(param_1 + 0x11a1);
  pcVar8 = (char *)(param_1 + 1);
  param_1 = 8;
  do {
    local_8 = pcVar6;
    if (*pcVar6 != '\0') {
      pcVar5 = (char *)FUN_005adb0f(0x34);
      memset(pcVar5,0,0x34);
      pcVar5[0x14] = '\x0f';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      pcVar5[0x28] = '\0';
      pcVar5[0x29] = '\0';
      pcVar5[0x2a] = '\0';
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x0f';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = '\0';
      pcVar5[0x18] = '\0';
      local_c = local_8 + 1;
      pcVar6 = local_8;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_10 = pcVar5;
      FUN_00402690(pcVar5,local_8,(int)pcVar6 - (int)local_c);
      local_c = local_8 + 0xd;
      pcVar6 = local_8 + 0xc;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(pcVar5 + 0x18,local_8 + 0xc,(int)pcVar6 - (int)local_c);
      pcVar6 = local_8;
      pcVar5[0x31] = local_8[0x17];
      pcVar5[0x30] = local_8[0x16];
      iVar4 = DAT_0065b5cc;
      puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x248);
      if (*(undefined4 **)(DAT_0065b5cc + 0x24c) == puVar3) {
        FUN_00414080((void *)(DAT_0065b5cc + 0x244),puVar3,&local_10);
      }
      else {
        *puVar3 = pcVar5;
        *(int *)(iVar4 + 0x248) = *(int *)(iVar4 + 0x248) + 4;
      }
    }
    if (*pcVar8 != '\0') {
      _Dst = (char *)FUN_005adb0f(0x68);
      memset(_Dst,0,0x68);
      _Dst[0x14] = '\x0f';
      _Dst[0x15] = '\0';
      _Dst[0x16] = '\0';
      _Dst[0x17] = '\0';
      _Dst[0x28] = '\0';
      _Dst[0x29] = '\0';
      _Dst[0x2a] = '\0';
      _Dst[0x2b] = '\0';
      _Dst[0x2c] = '\x0f';
      _Dst[0x2d] = '\0';
      _Dst[0x2e] = '\0';
      _Dst[0x2f] = '\0';
      _Dst[0x18] = '\0';
      _Dst[0x40] = '\0';
      _Dst[0x41] = '\0';
      _Dst[0x42] = '\0';
      _Dst[0x43] = '\0';
      _Dst[0x44] = '\x0f';
      _Dst[0x45] = '\0';
      _Dst[0x46] = '\0';
      _Dst[0x47] = '\0';
      _Dst[0x30] = '\0';
      _Dst[0x58] = '\0';
      _Dst[0x59] = '\0';
      _Dst[0x5a] = '\0';
      _Dst[0x5b] = '\0';
      _Dst[0x5c] = '\x0f';
      _Dst[0x5d] = '\0';
      _Dst[0x5e] = '\0';
      _Dst[0x5f] = '\0';
      _Dst[0x48] = '\0';
      pcVar5 = pcVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_c = _Dst;
      FUN_00402690(_Dst,pcVar8,(int)pcVar5 - (int)(pcVar8 + 1));
      local_10 = pcVar8 + 0x15;
      pcVar5 = pcVar8 + 0x14;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(_Dst + 0x18,pcVar8 + 0x14,(int)pcVar5 - (int)local_10);
      *(undefined4 *)(_Dst + 100) = *(undefined4 *)(pcVar8 + 0x230);
      *(undefined4 *)(_Dst + 0x60) = *(undefined4 *)(pcVar8 + 0x22c);
      local_10 = pcVar8 + 0x1f;
      pcVar5 = pcVar8 + 0x1e;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(_Dst + 0x30,pcVar8 + 0x1e,(int)pcVar5 - (int)local_10);
      local_10 = pcVar8 + 0x2b;
      pcVar5 = pcVar8 + 0x2a;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(_Dst + 0x48,pcVar8 + 0x2a,(int)pcVar5 - (int)local_10);
      iVar4 = DAT_0065b5cc;
      puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x254);
      if (*(undefined4 **)(DAT_0065b5cc + 600) == puVar3) {
        FUN_00414080((void *)(DAT_0065b5cc + 0x250),puVar3,&local_c);
      }
      else {
        *puVar3 = _Dst;
        *(int *)(iVar4 + 0x254) = *(int *)(iVar4 + 0x254) + 4;
      }
    }
    pcVar6 = pcVar6 + 0x18;
    pcVar8 = pcVar8 + 0x234;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  if (DAT_0065b3d3 != '\0') {
    local_8 = pcVar6;
    FUN_00591070("NETWORK","Advanced server info updated: %d users, %d ships");
  }
  return;
}


int * __fastcall FUN_0041ff50(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0041ffe6;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0041ffe6:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


void __fastcall FUN_0041fff0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0x17]) {
    pvVar1 = (void *)param_1[0x12];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x17] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00420103;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x11] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00420103;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00420103;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00420103:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}
