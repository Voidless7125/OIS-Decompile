#include "../ois_server.exe.h"


void FUN_00420110(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  int in_stack_00000014;
  uint in_stack_ffffff74;
  void *pvVar6;
  undefined1 local_74 [12];
  undefined4 uStack_68;
  undefined1 local_5c [12];
  undefined4 uStack_50;
  uint local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b13a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_0065b3d3 != '\0') &&
     (FUN_00591070("NETWORK","RECEIVED SHIP ADD REQUEST"), DAT_0065b3d3 != '\0')) {
    local_44 = 0x42017a;
    FUN_00591070("NETWORK","Ship name: %s, rego: %s, class: %s");
  }
  local_44 = local_44 & 0xffffff00;
  uStack_50 = 0x4201ad;
  FUN_00402690(&local_44,&PTR_005ce008,0);
  local_8 = 0;
  local_5c[0] = 0;
  pcVar4 = (char *)(in_stack_00000014 + 1);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uStack_68 = 0x4201e8;
  FUN_00402690(local_5c,(char *)(in_stack_00000014 + 1),(int)pcVar4 - (in_stack_00000014 + 2));
  local_8._0_1_ = 1;
  local_74[0] = 0;
  pcVar4 = (char *)(in_stack_00000014 + 0x53);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_74,(char *)(in_stack_00000014 + 0x53),(int)pcVar4 - (in_stack_00000014 + 0x54))
  ;
  local_8 = CONCAT31(local_8._1_3_,2);
  pvVar6 = (void *)(in_stack_ffffff74 & 0xffffff00);
  pcVar4 = (char *)(in_stack_00000014 + 0x21);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffff74,(char *)(in_stack_00000014 + 0x21),
               (int)pcVar4 - (in_stack_00000014 + 0x22));
  local_8 = 0xffffffff;
  puVar3 = FUN_0040e040(0,*(undefined1 **)(in_stack_00000014 + 0x5d),pvVar6);
  iVar2 = DAT_0065b5cc;
  bVar5 = DAT_0065b3d3 != '\0';
  puVar3[0xde] = 0;
  *(undefined4 *)(iVar2 + 0xd8) = puVar3[9];
  *(undefined4 **)(iVar2 + 0xd0) = puVar3;
  if (bVar5) {
    FUN_00591070("NETWORK","Added ship \'%s\' to sector \'%s\' for player.");
  }
  ExceptionList = local_10;
  return;
}


void FUN_004202d0(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  uint extraout_EDX;
  uint uVar8;
  undefined4 uStackY_8c;
  char *pcVar9;
  undefined1 local_54 [36];
  int *local_30;
  void *local_2c [2];
  int local_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b13e0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = FUN_0052b280(*(undefined4 *)(param_5 + 1));
  if ((char)uVar3 == '\0') {
    local_24 = param_1;
    iStack_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    puVar4 = FUN_00402de0();
    uVar8 = 0;
    piVar7 = *(int **)(puVar4 + 0x3c);
    uVar3 = *(int *)(puVar4 + 0x40) - (int)piVar7 >> 2;
    if (uVar3 != 0) {
      do {
        piVar2 = (int *)*piVar7;
        if ((*piVar2 == local_24) && (piVar2[1] == iStack_20)) {
          if ((piVar2 != (int *)0x0) && (puVar4 = FUN_00402de0(), *(int *)(puVar4 + 0x1c) == 3)) {
            if (DAT_0065b3d3 != '\0') {
              uStackY_8c = 0x420450;
              FUN_00591070("NETWORK","Server: Executing command: %s (%f, %f, %f)");
            }
            FUN_004ea270(&uStackY_8c,*(undefined4 *)(param_5 + 1));
            FUN_00417860(local_54);
            local_8 = 1;
            if (local_30 != (int *)0x0) {
              FUN_00417820((int)local_54);
            }
            local_8 = 2;
            if (local_30 != (int *)0x0) {
              (**(code **)(*local_30 + 0x10))();
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar8 < uVar3);
    }
  }
  else {
    uStack_1c = 0;
    uStack_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (extraout_EDX < 0xd7) {
      pcVar9 = (&PTR_DAT_005defa0)[extraout_EDX];
      pcVar5 = pcVar9;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar5 - (int)(pcVar9 + 1);
    }
    else {
      pcVar9 = "invalid command";
      uVar3 = 0xf;
    }
    FUN_00402690(local_2c,pcVar9,uVar3);
    local_8 = 0;
    FUN_00591070("MULTI","ERROR: Local command \'%s\' is sent through to the server.");
    if (0xf < uStack_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004204e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  
  pvVar2 = DAT_0065b5cc;
  switch(*(undefined4 *)(param_1 + 1)) {
  case 5:
    bVar7 = DAT_0065b3d3 != '\0';
    *(undefined8 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x28) = *(undefined8 *)(param_1 + 5);
    if (bVar7) {
      FUN_00591070("NETWORK","new x pos = %f");
      return;
    }
    break;
  case 6:
    bVar7 = DAT_0065b3d3 != '\0';
    *(undefined8 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x30) = *(undefined8 *)(param_1 + 5);
    if (bVar7) {
      FUN_00591070("NETWORK","new y pos = %f");
      return;
    }
    break;
  case 7:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x20) = *(undefined4 *)(param_1 + 5);
    piVar3 = FUN_004a7280(pvVar2,*(int *)(param_1 + 5));
    *(int **)(*(int *)((int)pvVar2 + 0xd0) + 0x24) = piVar3;
    return;
  case 8:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x48) = *(undefined4 *)(param_1 + 5);
    return;
  case 9:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x4c) = *(undefined4 *)(param_1 + 5);
    return;
  case 10:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x50) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xb:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x54) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xc:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x5c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xd:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x58) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xe:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x60) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xf:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xd4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x10:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xd8) = *(undefined1 *)(param_1 + 5);
    return;
  default:
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","Unknown numerical sync identifier: %d");
    }
    break;
  case 0x12:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xdc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x13:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xe0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x14:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xe4) = *(undefined1 *)(param_1 + 5);
    cVar8 = *(char *)(*(int *)((int)pvVar2 + 0xd0) + 0xe4);
    pvVar2 = (void *)FUN_004023e0();
    FUN_00531430(pvVar2,cVar8);
    return;
  case 0x15:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xe8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x16:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xec) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x17:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xf0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x18:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xf4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x19:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xf8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1a:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x104) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x1b:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x108) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1c:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x10c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1d:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x118) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1e:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x11c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1f:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x120) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x20:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x128) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x21:
  case 0x22:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 300) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x23:
    *(undefined8 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x138) = *(undefined8 *)(param_1 + 5);
    return;
  case 0x24:
    *(undefined8 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x140) = *(undefined8 *)(param_1 + 5);
    return;
  case 0x25:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x148) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x26:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x168) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x27:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x28:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1bc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x29:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 400) = *(undefined4 *)(param_1 + 5);
    pvVar2 = *(void **)((int)pvVar2 + 0xd0);
    piVar3 = FUN_0050c7a0(pvVar2,*(int *)(param_1 + 5));
    *(int **)((int)pvVar2 + 0x194) = piVar3;
    return;
  case 0x2a:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1a8) = *(undefined4 *)(param_1 + 5);
    if (*(int *)(param_1 + 5) != -1) {
      iVar4 = *(int *)(*(int *)((int)pvVar2 + 0xd0) + 0x24);
      uVar5 = 0;
      iVar1 = *(int *)(iVar4 + 0x84);
      uVar6 = *(int *)(iVar4 + 0x88) - iVar1 >> 2;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(iVar1 + uVar5 * 4);
          if (*(int *)(iVar4 + 0x38) == *(int *)(param_1 + 5)) goto LAB_00420a92;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    iVar4 = 0;
LAB_00420a92:
    *(int *)(*(int *)((int)pvVar2 + 0xd0) + 0x1ac) = iVar4;
    return;
  case 0x2b:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x198) = *(undefined4 *)(param_1 + 5);
    pvVar2 = *(void **)((int)pvVar2 + 0xd0);
    piVar3 = FUN_0050c7a0(pvVar2,*(int *)(param_1 + 5));
    *(int **)((int)pvVar2 + 0x19c) = piVar3;
    return;
  case 0x2c:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1a0) = *(undefined4 *)(param_1 + 5);
    if (*(int *)(param_1 + 5) != -1) {
      iVar4 = *(int *)(*(int *)((int)pvVar2 + 0xd0) + 0x24);
      uVar5 = 0;
      iVar1 = *(int *)(iVar4 + 0x84);
      uVar6 = *(int *)(iVar4 + 0x88) - iVar1 >> 2;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(iVar1 + uVar5 * 4);
          if (*(int *)(iVar4 + 0x38) == *(int *)(param_1 + 5)) goto LAB_00420a37;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    iVar4 = 0;
LAB_00420a37:
    *(int *)(*(int *)((int)pvVar2 + 0xd0) + 0x1a4) = iVar4;
    return;
  case 0x2d:
  case 0x2e:
    break;
  case 0x30:
    *(undefined1 *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x34) =
         *(undefined1 *)(param_1 + 5);
    return;
  case 0x31:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x188) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x32:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x18c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x33:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b0) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x34:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b1) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x35:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xfc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x36:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b2) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x37:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x38:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 100) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x39:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1d0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3a:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1d8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3b:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1dc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3c:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1e0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3d:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1e4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3e:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1e8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3f:
    *(float *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 500) = (float)*(int *)(param_1 + 5);
    return;
  case 0x40:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x15c) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x41:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x160) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x43:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1ec) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x44:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1f0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x45:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x100) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x47:
    *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x318) = *(undefined1 *)(param_1 + 5);
    return;
  case 0x48:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x31c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x49:
    *(undefined4 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1d4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4a:
    *(undefined4 *)(DAT_0065b444 + 0x180) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4b:
    *(undefined4 *)(DAT_0065b444 + 0x184) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4c:
    *(undefined4 *)(DAT_0065b444 + 0x188) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4d:
    *(undefined4 *)(DAT_0065b444 + 0x18c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4e:
    *(undefined4 *)(DAT_0065b444 + 400) = *(undefined4 *)(param_1 + 5);
    return;
  }
  return;
}


int __thiscall FUN_00420f00(void *this,int param_1)

{
  return param_1 * 0x20 + *(int *)this;
}


int __fastcall FUN_00420f10(int *param_1)

{
  return param_1[1] - *param_1 >> 5;
}


void __fastcall FUN_00420f30(undefined4 *param_1)

{
  param_1[1] = *param_1;
  return;
}


int * __thiscall FUN_00420f40(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (piVar2[4] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (piVar3[4] <= *param_1)) {
      return piVar3 + 5;
    }
  }
  piVar2 = (int *)FUN_00421370(this,param_1,&param_1);
  FUN_004213a0(this,&param_1,piVar3,piVar2 + 4,piVar2);
  return param_1 + 5;
}


int __thiscall FUN_00420fb0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar3 = *(int *)this;
  iVar6 = *(int *)((int)this + 4) - iVar3 >> 5;
  if (iVar6 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar6 + 1;
  uVar11 = *(int *)((int)this + 8) - iVar3 >> 5;
  uVar7 = uVar1;
  if ((uVar11 <= 0x7ffffff - (uVar11 >> 1)) && (uVar7 = (uVar11 >> 1) + uVar11, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar11 = uVar7 * 0x20;
  if (uVar7 < 0x8000000) {
    if (0xfff < uVar11) goto LAB_0042101d;
    if (uVar11 == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)FUN_005adb0f(uVar11);
    }
  }
  else {
    uVar11 = 0xffffffff;
LAB_0042101d:
    uVar8 = uVar11 + 0x23;
    if (uVar8 <= uVar11) {
      uVar8 = 0xffffffff;
    }
    iVar6 = FUN_005adb0f(uVar8);
    if (iVar6 == 0) goto LAB_00421153;
    puVar13 = (undefined4 *)(iVar6 + 0x23U & 0xffffffe0);
    puVar13[-1] = iVar6;
  }
  uVar11 = (int)param_1 - iVar3 & 0xffffffe0;
  *(undefined4 *)(uVar11 + (int)puVar13) = *param_2;
  *(undefined4 *)(uVar11 + 4 + (int)puVar13) = param_2[1];
  *(undefined4 *)(uVar11 + 8 + (int)puVar13) = param_2[2];
  *(undefined4 *)(uVar11 + 0xc + (int)puVar13) = param_2[3];
  *(undefined4 *)(uVar11 + 0x10 + (int)puVar13) = param_2[4];
  *(undefined4 *)(uVar11 + 0x14 + (int)puVar13) = param_2[5];
  *(undefined1 *)(uVar11 + 0x18 + (int)puVar13) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(uVar11 + 0x1c + (int)puVar13) = param_2[7];
  puVar4 = *(undefined4 **)((int)this + 4);
  puVar10 = *(undefined4 **)this;
  if (param_1 == puVar4) {
    if (puVar10 != puVar4) {
      puVar12 = puVar13 + 1;
      do {
        puVar12[-1] = *puVar10;
        *puVar12 = puVar10[1];
        puVar12[1] = puVar10[2];
        puVar12[2] = puVar10[3];
        puVar12[3] = puVar10[4];
        puVar12[4] = puVar10[5];
        *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(puVar10 + 6);
        puVar2 = puVar10 + 7;
        puVar10 = puVar10 + 8;
        puVar12[6] = *puVar2;
        puVar12 = puVar12 + 8;
      } while (puVar10 != puVar4);
    }
  }
  else {
    FUN_00421300(puVar10,param_1,puVar13);
    FUN_00421300(param_1,*(undefined4 **)((int)this + 4),
                 (undefined4 *)(uVar11 + 0x20 + (int)puVar13));
  }
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pvVar9 = pvVar5;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar5 & 0xffffffe0U)) &&
       (pvVar9 = *(void **)((int)pvVar5 + -4), 0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar9)))) {
LAB_00421153:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  *(undefined4 **)this = puVar13;
  *(undefined4 **)((int)this + 4) = puVar13 + uVar1 * 8;
  *(undefined4 **)((int)this + 8) = puVar13 + uVar7 * 8;
  return *(int *)this + uVar11;
}


int __thiscall FUN_00421160(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar7 = *(int *)this;
  iVar13 = (int)param_1 - iVar7 >> 3;
  iVar3 = *(int *)((int)this + 4) - iVar7 >> 3;
  if (iVar3 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar4 = iVar3 + 1;
  uVar9 = *(int *)((int)this + 8) - iVar7 >> 3;
  uVar5 = uVar4;
  if ((uVar9 <= 0x1fffffff - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar9 = uVar5 * 8;
  if (uVar5 < 0x20000000) {
    if (0xfff < uVar9) goto LAB_004211d2;
    if (uVar9 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)FUN_005adb0f(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_004211d2:
    uVar6 = uVar9 + 0x23;
    if (uVar6 <= uVar9) {
      uVar6 = 0xffffffff;
    }
    iVar7 = FUN_005adb0f(uVar6);
    if (iVar7 == 0) goto LAB_004212ed;
    puVar11 = (undefined4 *)(iVar7 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar7;
  }
  puVar1 = puVar11 + iVar13 * 2;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar14 = *(undefined4 **)((int)this + 4);
  puVar10 = *(undefined4 **)this;
  puVar12 = puVar11;
  if (param_1 == puVar14) {
    for (; puVar10 != puVar14; puVar10 = puVar10 + 2) {
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      puVar12 = puVar12 + 2;
    }
  }
  else {
    if (puVar10 != param_1) {
      do {
        *puVar12 = *puVar10;
        puVar14 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        puVar12[1] = *puVar14;
        puVar12 = puVar12 + 2;
      } while (puVar10 != param_1);
      puVar14 = *(undefined4 **)((int)this + 4);
    }
    for (; param_1 != puVar14; param_1 = param_1 + 2) {
      puVar1[2] = *param_1;
      puVar1[3] = param_1[1];
      puVar1 = puVar1 + 2;
    }
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar8 = pvVar2;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar2 & 0xfffffff8U)) &&
       (pvVar8 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar8)))) {
LAB_004212ed:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)((int)this + 4) = puVar11 + uVar4 * 2;
  *(undefined4 **)((int)this + 8) = puVar11 + uVar5 * 2;
  return *(int *)this + iVar13 * 8;
}


undefined4 * FUN_00421300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3;
  if (param_1 != param_2) {
    puVar2 = param_1 + 1;
    do {
      *puVar3 = puVar2[-1];
      *(undefined4 *)((int)param_3 + (-0x20 - (int)param_1) + (int)(puVar2 + 8)) = *puVar2;
      puVar3[2] = puVar2[1];
      puVar3[3] = puVar2[2];
      puVar3[4] = puVar2[3];
      puVar3[5] = puVar2[4];
      *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(puVar2 + 5);
      puVar3[7] = puVar2[6];
      puVar1 = puVar2 + 7;
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return puVar3;
}


void __thiscall FUN_00421370(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00421600(this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}


undefined4 * __thiscall
FUN_004213a0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uStack_30;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1410;
  local_10 = ExceptionList;
  uStack_30 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_00421640(this,param_1,'\x01',*(undefined4 **)this,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar7 = *(int **)this;
  piVar6 = param_3;
  if (param_2 == (int *)*piVar7) {
    puVar3 = &uStack_30;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00421640(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar7) {
    puVar3 = &uStack_30;
    if ((int)((undefined4 *)piVar7[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00421640(this,param_1,'\0',(undefined4 *)piVar7[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_18 = (int *)*param_3;
    piVar6 = (int *)param_2[4];
    iVar2 = (int)piVar6 - (int)local_18;
    if ((int)local_18 < (int)piVar6) {
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        piVar4 = (int *)*param_2;
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar1 = *(char *)(piVar4[2] + 0xd);
          piVar6 = (int *)piVar4[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(piVar6[2] + 0xd);
            piVar4 = piVar6;
            piVar6 = (int *)piVar6[2];
          }
        }
        else {
          piVar6 = (int *)param_2[1];
          piVar4 = param_2;
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            do {
              piVar7 = piVar6;
              piVar6 = piVar7;
              if (piVar4 != (int *)*piVar7) break;
              piVar6 = (int *)piVar7[1];
              piVar4 = piVar7;
            } while (*(char *)((int)piVar6 + 0xd) == '\0');
            piVar7 = *(int **)this;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            piVar4 = piVar6;
          }
        }
        piVar6 = (int *)param_2[4];
      }
      else {
        piVar4 = (int *)param_2[2];
      }
      if (piVar4[4] < (int)local_18) {
        iVar2 = piVar4[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          local_14 = (undefined1 *)&uStack_30;
          FUN_00421640(this,param_1,'\0',piVar4,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_30;
        FUN_00421640(this,param_1,'\x01',param_2,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      iVar2 = (int)piVar6 - (int)local_18;
    }
    puVar3 = &uStack_30;
    if (SBORROW4((int)piVar6,(int)local_18) != iVar2 < 0) {
      local_1c = param_2;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_1c);
      if ((local_1c == piVar7) ||
         (piVar6 = local_18, puVar3 = (uint *)local_14, (int)local_18 < local_1c[4])) {
        iVar2 = param_2[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          FUN_00421640(this,param_1,'\0',param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00421640(this,param_1,'\x01',local_1c,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00421870(this,&local_20,piVar6,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_00421600(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x18);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}


void FUN_00421620(void *param_1)

{
  FUN_005adb3f(param_1);
  return;
}


void __thiscall
FUN_00421640(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
    FUN_00421620(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar7 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar8 = (int *)piVar7[1];
    piVar6 = piVar7 + 1;
    piVar9 = piVar8 + 1;
    iVar4 = *(int *)piVar8[1];
    if (piVar8 == (int *)iVar4) {
      iVar4 = ((int *)piVar8[1])[2];
      if (*(char *)(iVar4 + 0xc) != '\0') {
        piVar2 = (int *)piVar8[2];
        if (piVar7 == piVar2) {
          piVar8[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar8;
          }
          piVar2[1] = *piVar9;
          if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar2;
            *piVar2 = (int)piVar8;
            *piVar9 = (int)piVar2;
            piVar7 = piVar8;
            piVar8 = piVar2;
            piVar6 = piVar9;
          }
          else {
            piVar7 = (int *)*piVar9;
            if (piVar8 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
          }
        }
        *(undefined1 *)(piVar8 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
        piVar6 = *(int **)(*piVar6 + 4);
        piVar9 = (int *)*piVar6;
        *piVar6 = piVar9[2];
        if (*(char *)(piVar9[2] + 0xd) == '\0') {
          *(int **)(piVar9[2] + 4) = piVar6;
        }
        piVar9[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar9;
          piVar9[2] = (int)piVar6;
        }
        else {
          piVar8 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar8[2]) {
            piVar8[2] = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
          else {
            *piVar8 = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
        }
        goto LAB_00421835;
      }
LAB_0042178c:
      *(undefined1 *)(piVar8 + 3) = 1;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (*(char *)(iVar4 + 0xc) == '\0') goto LAB_0042178c;
      piVar2 = (int *)*piVar8;
      piVar5 = piVar8;
      if (piVar7 == piVar2) {
        *piVar8 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar8;
        }
        piVar2[1] = *piVar9;
        if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar9;
          if (piVar8 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar8;
        *piVar9 = (int)piVar2;
        piVar5 = piVar2;
        piVar7 = piVar8;
        piVar6 = piVar9;
      }
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar6 = *(int **)(*piVar6 + 4);
      piVar9 = (int *)piVar6[2];
      piVar6[2] = *piVar9;
      if (*(char *)(*piVar9 + 0xd) == '\0') {
        *(int **)(*piVar9 + 4) = piVar6;
      }
      piVar9[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar9;
      }
      else {
        piVar8 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar8) {
          *piVar8 = (int)piVar9;
        }
        else {
          piVar8[2] = (int)piVar9;
        }
      }
      *piVar9 = (int)piVar6;
LAB_00421835:
      piVar6[1] = (int)piVar9;
    }
    cVar1 = *(char *)(piVar7[1] + 0xc);
  } while( true );
}


void __thiscall
FUN_00421870(void *this,undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar6 = *(int **)this;
  local_18 = true;
  piVar5 = piVar6;
  if (*(char *)(piVar6[1] + 0xd) == '\0') {
    piVar4 = (int *)piVar6[1];
    do {
      piVar5 = piVar4;
      local_18 = *param_3 < piVar5[4];
      if (*param_3 < piVar5[4]) {
        piVar4 = (int *)*piVar5;
      }
      else {
        piVar4 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
  }
  piVar4 = piVar5;
  if (local_18) {
    if (piVar5 == (int *)*piVar6) {
      local_18 = true;
      piVar6 = this;
      goto LAB_004218f5;
    }
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      piVar4 = (int *)*piVar5;
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        cVar1 = *(char *)(piVar4[2] + 0xd);
        piVar6 = (int *)piVar4[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(piVar6[2] + 0xd);
          piVar4 = piVar6;
          piVar6 = (int *)piVar6[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0xd);
        piVar6 = (int *)piVar5[1];
        piVar4 = piVar5;
        while ((piVar2 = piVar6, cVar1 == '\0' && (piVar4 == (int *)*piVar2))) {
          cVar1 = *(char *)(piVar2[1] + 0xd);
          piVar6 = (int *)piVar2[1];
          piVar4 = piVar2;
        }
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          piVar4 = piVar2;
        }
      }
    }
    else {
      piVar4 = (int *)piVar5[2];
    }
  }
  piVar6 = param_3;
  if (*param_3 <= piVar4[4]) {
    FUN_005adb3f(param_4);
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004218f5:
  puVar3 = (undefined4 *)FUN_00421640(this,&param_3,local_18,piVar5,piVar6,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


void __fastcall
FUN_004219e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)FUN_004156e0();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,uVar2,param_4);
  return;
}


void __thiscall FUN_00421a10(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0x00000008;
  uVar1 = __acrt_iob_func(1,this,puVar2,this);
  FUN_004219e0(uVar1,param_1,this,puVar2);
  return;
}


undefined4 * __thiscall
FUN_00421a40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_005b145b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 0x24);
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined1 *)this_00 = 0;
  local_8 = 0;
  switch(*(undefined4 *)((int)this + 4)) {
  case 0:
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)this + 8);
    ExceptionList = pvVar2;
    return this;
  case 1:
    *(undefined4 *)((int)this + 0xc) = **(undefined4 **)((int)this + 8);
    ExceptionList = pvVar2;
    return this;
  case 2:
    *(undefined8 *)((int)this + 0x18) = **(undefined8 **)((int)this + 8);
    ExceptionList = pvVar2;
    return this;
  case 3:
    puVar1 = *(undefined4 **)((int)this + 8);
    if (this_00 != puVar1) {
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00402690(this_00,puVar3,puVar1[4]);
    }
    break;
  case 4:
    *(undefined1 *)((int)this + 0x20) = **(undefined1 **)((int)this + 8);
    ExceptionList = pvVar2;
    return this;
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00421b60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  param_1[1] = *param_1;
  iVar1 = *(int *)(param_1[3] + 0x1c8);
  for (iVar3 = *(int *)(param_1[3] + 0x1c4); iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
    local_10 = *(undefined4 *)(iVar3 + 0x14);
    local_1c = *(undefined4 *)(iVar3 + 8);
    local_18 = *(undefined4 *)(iVar3 + 0xc);
    local_14 = *(undefined4 *)(iVar3 + 0x10);
    local_c = *(undefined1 *)(iVar3 + 0x18);
    local_8 = *(undefined4 *)(iVar3 + 0x1c);
    puVar2 = (undefined4 *)param_1[1];
    if ((undefined4 *)param_1[2] == puVar2) {
      FUN_0042b0a0(param_1,puVar2,&local_1c);
    }
    else {
      *puVar2 = local_1c;
      puVar2[1] = local_18;
      param_1[1] = puVar2 + 2;
    }
  }
  return;
}


uint __fastcall FUN_00421c00(undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  
  pfVar7 = (float *)*param_1;
  iVar3 = *(int *)(param_1[3] + 0x1c4);
  uVar9 = *(int *)(param_1[3] + 0x1c8) - iVar3 >> 5;
  uVar4 = param_1[1] - (int)pfVar7 >> 3;
  if (uVar9 == uVar4) {
    uVar8 = 0;
    if (uVar9 != 0) {
      pfVar6 = (float *)(iVar3 + 8);
      do {
        if (*pfVar6 != *pfVar7) goto LAB_00421c67;
        fVar2 = pfVar6[1];
        pfVar1 = pfVar7 + 1;
        uVar4 = (uint)CONCAT21((short)(uVar4 >> 0x10),
                               (fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                               fVar2 < *pfVar1) << 8;
        if (fVar2 != *pfVar1) goto LAB_00421c67;
        uVar8 = uVar8 + 1;
        pfVar7 = pfVar7 + 2;
        pfVar6 = pfVar6 + 8;
      } while (uVar8 < uVar9);
    }
    return uVar4 & 0xffffff00;
  }
LAB_00421c67:
  uVar5 = FUN_00421b60(param_1);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


void __fastcall FUN_00421c80(uint *param_1)

{
  uint *this;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *local_c [2];
  
  uVar2 = 0;
  puVar3 = (undefined4 *)*param_1;
  uVar1 = (param_1[1] - (int)puVar3) + 3 >> 2;
  if ((undefined4 *)param_1[1] < puVar3) {
    uVar1 = 0;
  }
  local_c[0] = param_1;
  if (uVar1 != 0) {
    do {
      FUN_005adb3f((void *)*puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
    puVar3 = (undefined4 *)*local_c[0];
  }
  this = local_c[0];
  local_c[0][1] = (uint)puVar3;
  uVar1 = 0;
  if (*(int *)(*(int *)(local_c[0][3] + 0x1f8) + 0x48) -
      *(int *)(*(int *)(local_c[0][3] + 0x1f8) + 0x44) >> 2 != 0) {
    do {
      local_c[0] = (uint *)FUN_005adb0f(8);
      local_c[0][0] = 0;
      local_c[0][1] = 0;
      *local_c[0] = **(uint **)(*(int *)(*(int *)(*(int *)(this[3] + 0x1f8) + 0x44) + uVar1 * 4) + 4
                               );
      local_c[0][1] = **(uint **)(*(int *)(*(int *)(this[3] + 0x1f8) + 0x44) + uVar1 * 4);
      puVar3 = (undefined4 *)this[1];
      if ((undefined4 *)this[2] == puVar3) {
        FUN_00414080(this,puVar3,local_c);
      }
      else {
        *puVar3 = local_c[0];
        this[1] = this[1] + 4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(*(int *)(this[3] + 0x1f8) + 0x48) -
                            *(int *)(*(int *)(this[3] + 0x1f8) + 0x44) >> 2));
  }
  return;
}


undefined1 __fastcall FUN_00421d60(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined1 uVar8;
  int iVar9;
  byte *local_8;
  
  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 4);
  pbVar7 = (byte *)(param_1 + 0xc);
  if (iVar9 != 0) {
    iVar1 = *(int *)(iVar9 + 0x254);
    pbVar3 = (byte *)(iVar1 + 0x60);
    if (0xf < *(uint *)(param_1 + 0x20)) {
      pbVar7 = *(byte **)pbVar7;
    }
    local_8 = pbVar3;
    if (0xf < *(uint *)(iVar1 + 0x74)) {
      local_8 = *(byte **)pbVar3;
    }
    uVar2 = *(uint *)(iVar1 + 0x70);
    uVar4 = FUN_004031f0(local_8,uVar2,pbVar7,*(uint *)(param_1 + 0x1c));
    if ((char)uVar4 == '\0') {
      if ((byte *)(param_1 + 0xc) != pbVar3) {
        if (0xf < *(uint *)(iVar1 + 0x74)) {
          pbVar3 = *(byte **)pbVar3;
        }
        FUN_00402690((byte *)(param_1 + 0xc),pbVar3,uVar2);
        iVar9 = *(int *)(param_1 + 4);
      }
      uVar8 = 1;
    }
    if (*(float *)(param_1 + 0x6c) != *(float *)(iVar9 + 0x41c)) {
      *(float *)(param_1 + 0x6c) = *(float *)(iVar9 + 0x41c);
      uVar8 = 1;
    }
    if ((*(float *)(param_1 + 0x24) != *(float *)(iVar9 + 0x390)) ||
       (*(float *)(param_1 + 0x28) != *(float *)(iVar9 + 0x394))) {
      uVar8 = 1;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar9 + 0x390);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar9 + 0x394);
    }
    uVar2 = *(uint *)(iVar9 + 0x414);
    local_8 = (byte *)(iVar9 + 0x400);
    if (0xf < uVar2) {
      local_8 = *(byte **)local_8;
    }
    pbVar7 = (byte *)(param_1 + 0x2c);
    if (0xf < *(uint *)(param_1 + 0x40)) {
      pbVar7 = *(byte **)(param_1 + 0x2c);
    }
    uVar4 = *(uint *)(iVar9 + 0x410);
    uVar5 = FUN_004031f0(pbVar7,*(uint *)(param_1 + 0x3c),local_8,uVar4);
    if ((char)uVar5 == '\0') {
      puVar6 = (undefined4 *)(iVar9 + 0x400);
      if ((undefined4 *)(param_1 + 0x2c) != puVar6) {
        if (0xf < uVar2) {
          puVar6 = (undefined4 *)*puVar6;
        }
        FUN_00402690((undefined4 *)(param_1 + 0x2c),puVar6,uVar4);
        iVar9 = *(int *)(param_1 + 4);
      }
      uVar8 = 1;
    }
    uVar2 = *(uint *)(iVar9 + 0x3b4);
    local_8 = (byte *)(iVar9 + 0x3a0);
    if (0xf < uVar2) {
      local_8 = *(byte **)local_8;
    }
    pbVar7 = (byte *)(param_1 + 0x44);
    if (0xf < *(uint *)(param_1 + 0x58)) {
      pbVar7 = *(byte **)(param_1 + 0x44);
    }
    uVar4 = *(uint *)(iVar9 + 0x3b0);
    uVar5 = FUN_004031f0(pbVar7,*(uint *)(param_1 + 0x54),local_8,uVar4);
    if ((char)uVar5 == '\0') {
      puVar6 = (undefined4 *)(iVar9 + 0x3a0);
      if ((undefined4 *)(param_1 + 0x44) != puVar6) {
        if (0xf < uVar2) {
          puVar6 = (undefined4 *)*puVar6;
        }
        FUN_00402690((undefined4 *)(param_1 + 0x44),puVar6,uVar4);
        iVar9 = *(int *)(param_1 + 4);
      }
      uVar8 = 1;
    }
    if (*(int *)(param_1 + 0x60) != *(int *)(iVar9 + 0x3b8)) {
      *(int *)(param_1 + 0x60) = *(int *)(iVar9 + 0x3b8);
      uVar8 = 1;
    }
    if (*(int *)(param_1 + 0x5c) != *(int *)(iVar9 + 0x3d0)) {
      *(int *)(param_1 + 0x5c) = *(int *)(iVar9 + 0x3d0);
      uVar8 = 1;
    }
    if (*(char *)(param_1 + 100) != *(char *)(iVar9 + 0x3bc)) {
      *(char *)(param_1 + 100) = *(char *)(iVar9 + 0x3bc);
      uVar8 = 1;
    }
    if (*(float *)(param_1 + 0x68) != *(float *)(iVar9 + 0x3c0)) {
      *(float *)(param_1 + 0x68) = *(float *)(iVar9 + 0x3c0);
      uVar8 = 1;
    }
    if (*(char *)(param_1 + 0x70) != *(char *)(iVar9 + 0x3c4)) {
      *(char *)(param_1 + 0x70) = *(char *)(iVar9 + 0x3c4);
      uVar8 = 1;
    }
    if (*(char *)(param_1 + 0x71) != *(char *)(iVar9 + 0x3c5)) {
      *(char *)(param_1 + 0x71) = *(char *)(iVar9 + 0x3c5);
      uVar8 = 1;
    }
    if (*(char *)(param_1 + 0x72) != *(char *)(iVar9 + 0x3fc)) {
      *(char *)(param_1 + 0x72) = *(char *)(iVar9 + 0x3fc);
      uVar8 = 1;
    }
    if (*(float *)(param_1 + 0x74) != *(float *)(iVar9 + 0x418)) {
      *(float *)(param_1 + 0x74) = *(float *)(iVar9 + 0x418);
      uVar8 = 1;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(iVar9 + 0x420)) {
      *(int *)(param_1 + 0x78) = *(int *)(iVar9 + 0x420);
      uVar8 = 1;
    }
    return uVar8;
  }
  pbVar3 = pbVar7;
  if (0xf < *(uint *)(param_1 + 0x20)) {
    pbVar3 = *(byte **)pbVar7;
  }
  uVar2 = FUN_004031f0(pbVar3,*(uint *)(param_1 + 0x1c),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    FUN_00402690(pbVar7,&PTR_005ce008,0);
    return 1;
  }
  return 0;
}


uint __fastcall FUN_00422000(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined3 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  iVar11 = *param_1;
  iVar8 = *(int *)(iVar11 + 0xec);
  uVar12 = *(int *)(iVar11 + 0xf0) - iVar8 >> 3;
  if (uVar12 == param_1[0x44] - param_1[0x43] >> 2) {
    uVar9 = *(int *)(iVar11 + 0xfc) - *(int *)(*param_1 + 0xf8) >> 3;
    uVar6 = param_1[0x4a] - param_1[0x49] >> 2;
    if (uVar9 == uVar6) {
      uVar10 = 0;
      if (uVar12 != 0) {
        do {
          if (*(int *)(iVar8 + uVar10 * 8) != *(int *)(param_1[0x46] + uVar10 * 4))
          goto LAB_00422102;
          fVar2 = *(float *)(iVar8 + 4 + uVar10 * 8);
          pfVar1 = (float *)(param_1[0x43] + uVar10 * 4);
          uVar6 = (uint)CONCAT21((short)((uint)param_1[0x43] >> 0x10),
                                 (fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                                 fVar2 < *pfVar1) << 8;
          if (fVar2 != *pfVar1) goto LAB_00422102;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      uVar12 = 0;
      if (uVar9 == 0) {
        return uVar6 & 0xffffff00;
      }
      iVar8 = param_1[0x4c];
      do {
        iVar3 = *(int *)(*(int *)(iVar11 + 0xf8) + uVar12 * 8);
        if (iVar3 != *(int *)(iVar8 + uVar12 * 4)) goto LAB_00422102;
        fVar2 = *(float *)(*(int *)(iVar11 + 0xf8) + 4 + uVar12 * 8);
        pfVar1 = (float *)(param_1[0x49] + uVar12 * 4);
        uVar5 = CONCAT21((short)((uint)iVar3 >> 0x10),
                         (fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                         fVar2 < *pfVar1);
        if (fVar2 != *pfVar1) goto LAB_00422102;
        iVar8 = param_1[0x4c];
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9);
      goto LAB_004220e9;
    }
  }
LAB_00422102:
  param_1[0x44] = param_1[0x43];
  uVar12 = 0;
  param_1[0x47] = param_1[0x46];
  iVar11 = *param_1;
  if (*(int *)(iVar11 + 0xf0) - *(int *)(iVar11 + 0xec) >> 3 != 0) {
    do {
      puVar4 = (undefined4 *)param_1[0x44];
      puVar7 = (undefined4 *)(*(int *)(iVar11 + 0xec) + uVar12 * 8 + 4);
      if ((undefined4 *)param_1[0x45] == puVar4) {
        FUN_00414080(param_1 + 0x43,puVar4,puVar7);
      }
      else {
        *puVar4 = *puVar7;
        param_1[0x44] = (int)(puVar4 + 1);
      }
      puVar7 = (undefined4 *)(*(int *)(*param_1 + 0xec) + uVar12 * 8);
      puVar4 = (undefined4 *)param_1[0x47];
      if ((undefined4 *)param_1[0x48] == puVar4) {
        FUN_004141e0(param_1 + 0x46,puVar4,puVar7);
      }
      else {
        *puVar4 = *puVar7;
        param_1[0x47] = param_1[0x47] + 4;
      }
      iVar11 = *param_1;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(iVar11 + 0xf0) - *(int *)(iVar11 + 0xec) >> 3));
  }
  param_1[0x4a] = param_1[0x49];
  param_1[0x4d] = param_1[0x4c];
  iVar11 = *param_1;
  local_c = 0;
  local_5 = 1;
  uVar5 = 0;
  if (*(int *)(iVar11 + 0xfc) - *(int *)(iVar11 + 0xf8) >> 3 != 0) {
    do {
      puVar4 = (undefined4 *)param_1[0x4a];
      puVar7 = (undefined4 *)(*(int *)(iVar11 + 0xf8) + local_c * 8 + 4);
      if ((undefined4 *)param_1[0x4b] == puVar4) {
        FUN_00414080(param_1 + 0x49,puVar4,puVar7);
      }
      else {
        *puVar4 = *puVar7;
        param_1[0x4a] = (int)(puVar4 + 1);
      }
      puVar7 = (undefined4 *)(*(int *)(*param_1 + 0xf8) + local_c * 8);
      puVar4 = (undefined4 *)param_1[0x4d];
      if ((undefined4 *)param_1[0x4e] == puVar4) {
        FUN_004141e0(param_1 + 0x4c,puVar4,puVar7);
      }
      else {
        *puVar4 = *puVar7;
        param_1[0x4d] = param_1[0x4d] + 4;
      }
      iVar11 = *param_1;
      local_c = local_c + 1;
      iVar8 = *(int *)(iVar11 + 0xfc) - *(int *)(iVar11 + 0xf8);
    } while (local_c < (uint)(iVar8 >> 3));
    return CONCAT31((int3)(iVar8 >> 0xb),1);
  }
LAB_004220e9:
  return CONCAT31(uVar5,local_5);
}


undefined4 __fastcall FUN_00422260(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  undefined3 uVar7;
  int iVar8;
  bool bVar9;
  byte *local_c;
  byte *local_8;
  
  iVar8 = *param_1;
  bVar9 = param_1[2] != *(int *)(iVar8 + 0x124);
  if (bVar9) {
    param_1[2] = *(int *)(iVar8 + 0x124);
  }
  pbVar4 = (byte *)(iVar8 + 0x48);
  local_c = (byte *)(param_1 + 0x13);
  local_8 = pbVar4;
  if (0xf < *(uint *)(iVar8 + 0x5c)) {
    local_8 = *(byte **)pbVar4;
  }
  if (0xf < (uint)param_1[0x18]) {
    local_c = *(byte **)local_c;
  }
  uVar1 = *(uint *)(iVar8 + 0x58);
  uVar3 = FUN_004031f0(local_c,param_1[0x17],local_8,uVar1);
  if ((char)uVar3 == '\0') {
    if ((byte *)(param_1 + 0x13) != pbVar4) {
      if (0xf < *(uint *)(iVar8 + 0x5c)) {
        pbVar4 = *(byte **)pbVar4;
      }
      FUN_00402690(param_1 + 0x13,pbVar4,uVar1);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  if (param_1[0x38] != *(int *)(iVar8 + 0xe4)) {
    param_1[0x38] = *(int *)(iVar8 + 0xe4);
    bVar9 = true;
  }
  if (param_1[0x39] != *(int *)(iVar8 + 0xe8)) {
    param_1[0x39] = *(int *)(iVar8 + 0xe8);
    bVar9 = true;
  }
  uVar1 = *(uint *)(iVar8 + 0x74);
  local_c = (byte *)(iVar8 + 0x60);
  if (0xf < uVar1) {
    local_c = *(byte **)local_c;
  }
  pbVar4 = (byte *)(param_1 + 0x19);
  if (0xf < (uint)param_1[0x1e]) {
    pbVar4 = (byte *)param_1[0x19];
  }
  uVar3 = *(uint *)(iVar8 + 0x70);
  uVar5 = FUN_004031f0(pbVar4,param_1[0x1d],local_c,uVar3);
  if ((char)uVar5 == '\0') {
    piVar6 = (int *)(iVar8 + 0x60);
    if (param_1 + 0x19 != piVar6) {
      if (0xf < uVar1) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(param_1 + 0x19,piVar6,uVar3);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  if (*(double *)(param_1 + 10) != *(double *)(iVar8 + 0x28)) {
    *(double *)(param_1 + 10) = *(double *)(iVar8 + 0x28);
    bVar9 = true;
  }
  if (*(double *)(param_1 + 0xc) != *(double *)(iVar8 + 0x20)) {
    *(double *)(param_1 + 0xc) = *(double *)(iVar8 + 0x20);
    bVar9 = true;
  }
  uVar1 = *(uint *)(iVar8 + 0x8c);
  local_c = (byte *)(iVar8 + 0x78);
  if (0xf < uVar1) {
    local_c = *(byte **)local_c;
  }
  pbVar4 = (byte *)(param_1 + 0x1f);
  if (0xf < (uint)param_1[0x24]) {
    pbVar4 = (byte *)param_1[0x1f];
  }
  uVar3 = *(uint *)(iVar8 + 0x88);
  uVar5 = FUN_004031f0(pbVar4,param_1[0x23],local_c,uVar3);
  if ((char)uVar5 == '\0') {
    piVar6 = (int *)(iVar8 + 0x78);
    if (param_1 + 0x1f != piVar6) {
      if (0xf < uVar1) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(param_1 + 0x1f,piVar6,uVar3);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  uVar1 = *(uint *)(iVar8 + 0xa4);
  local_c = (byte *)(iVar8 + 0x90);
  if (0xf < uVar1) {
    local_c = *(byte **)local_c;
  }
  pbVar4 = (byte *)(param_1 + 0x25);
  if (0xf < (uint)param_1[0x2a]) {
    pbVar4 = (byte *)param_1[0x25];
  }
  uVar3 = *(uint *)(iVar8 + 0xa0);
  uVar5 = FUN_004031f0(pbVar4,param_1[0x29],local_c,uVar3);
  if ((char)uVar5 == '\0') {
    piVar6 = (int *)(iVar8 + 0x90);
    if (param_1 + 0x25 != piVar6) {
      if (0xf < uVar1) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(param_1 + 0x25,piVar6,uVar3);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  uVar1 = *(uint *)(iVar8 + 0xbc);
  local_c = (byte *)(iVar8 + 0xa8);
  if (0xf < uVar1) {
    local_c = *(byte **)local_c;
  }
  pbVar4 = (byte *)(param_1 + 0x2b);
  if (0xf < (uint)param_1[0x30]) {
    pbVar4 = (byte *)param_1[0x2b];
  }
  uVar3 = *(uint *)(iVar8 + 0xb8);
  uVar5 = FUN_004031f0(pbVar4,param_1[0x2f],local_c,uVar3);
  if ((char)uVar5 == '\0') {
    piVar6 = (int *)(iVar8 + 0xa8);
    if (param_1 + 0x2b != piVar6) {
      if (0xf < uVar1) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(param_1 + 0x2b,piVar6,uVar3);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  uVar1 = *(uint *)(iVar8 + 0xd4);
  local_c = (byte *)(iVar8 + 0xc0);
  pbVar4 = (byte *)(param_1 + 0x31);
  if (0xf < uVar1) {
    local_c = *(byte **)local_c;
  }
  if (0xf < (uint)param_1[0x36]) {
    pbVar4 = *(byte **)pbVar4;
  }
  uVar3 = *(uint *)(iVar8 + 0xd0);
  uVar5 = FUN_004031f0(pbVar4,param_1[0x35],local_c,uVar3);
  if ((char)uVar5 == '\0') {
    piVar6 = (int *)(iVar8 + 0xc0);
    if (param_1 + 0x31 != piVar6) {
      if (0xf < uVar1) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(param_1 + 0x31,piVar6,uVar3);
      iVar8 = *param_1;
    }
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xfb) != *(char *)(iVar8 + 0x45)) {
    *(char *)((int)param_1 + 0xfb) = *(char *)(iVar8 + 0x45);
    bVar9 = true;
  }
  if (param_1[0x41] != *(int *)(iVar8 + 0xdc)) {
    param_1[0x41] = *(int *)(iVar8 + 0xdc);
    bVar9 = true;
  }
  if (param_1[0x37] != *(int *)(iVar8 + 0xe0)) {
    param_1[0x37] = *(int *)(iVar8 + 0xe0);
    bVar9 = true;
  }
  if (param_1[0x3f] != *(int *)(iVar8 + 0x11c)) {
    param_1[0x3f] = *(int *)(iVar8 + 0x11c);
    bVar9 = true;
  }
  if ((char)param_1[0x3d] != *(char *)(iVar8 + 0x10c)) {
    *(char *)(param_1 + 0x3d) = *(char *)(iVar8 + 0x10c);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xf5) != *(char *)(iVar8 + 0x10f)) {
    *(char *)((int)param_1 + 0xf5) = *(char *)(iVar8 + 0x10f);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xf6) != *(char *)(iVar8 + 0x10e)) {
    *(char *)((int)param_1 + 0xf6) = *(char *)(iVar8 + 0x10e);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xf7) != *(char *)(iVar8 + 0x10d)) {
    *(char *)((int)param_1 + 0xf7) = *(char *)(iVar8 + 0x10d);
    bVar9 = true;
  }
  if ((char)param_1[0x3e] != *(char *)(iVar8 + 0x110)) {
    *(char *)(param_1 + 0x3e) = *(char *)(iVar8 + 0x110);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xfa) != *(char *)(iVar8 + 0x112)) {
    *(char *)((int)param_1 + 0xfa) = *(char *)(iVar8 + 0x112);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0xf9) != *(char *)(iVar8 + 0x111)) {
    *(char *)((int)param_1 + 0xf9) = *(char *)(iVar8 + 0x111);
    bVar9 = true;
  }
  if (param_1[0x40] != *(int *)(iVar8 + 0xd8)) {
    param_1[0x40] = *(int *)(iVar8 + 0xd8);
    bVar9 = true;
  }
  iVar2 = *(int *)(iVar8 + 300);
  if (param_1[0x50] != iVar2) {
    param_1[0x50] = iVar2;
    bVar9 = true;
  }
  uVar7 = (undefined3)((uint)iVar2 >> 8);
  if ((char)param_1[0x42] != *(char *)(iVar8 + 0x120)) {
    *(char *)(param_1 + 0x42) = *(char *)(iVar8 + 0x120);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0x109) != *(char *)(iVar8 + 0x121)) {
    *(char *)((int)param_1 + 0x109) = *(char *)(iVar8 + 0x121);
    bVar9 = true;
  }
  if (*(char *)((int)param_1 + 0x10a) != *(char *)(iVar8 + 0x122)) {
    *(char *)((int)param_1 + 0x10a) = *(char *)(iVar8 + 0x122);
    return CONCAT31(uVar7,1);
  }
  return CONCAT31(uVar7,bVar9);
}


void __fastcall FUN_004226c0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  uint *this;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  void **ppvVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  void *pvVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  byte *in_stack_ffffff5c;
  undefined4 *local_74;
  uint local_70;
  uint *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  byte *local_60;
  void *local_5c [5];
  uint local_48;
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
  
  local_8 = -1;
  puStack_c = &LAB_005b14b9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar5 = false;
  bVar4 = false;
  puVar19 = (undefined4 *)0x0;
  local_60 = (byte *)0x0;
  piVar15 = *(int **)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
  local_68 = (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - (int)piVar15 >> 2);
  pbVar12 = (byte *)0x0;
  if (local_68 != (undefined4 *)0x0) {
    do {
      iVar8 = *piVar15;
      piVar15 = piVar15 + 1;
      local_60 = pbVar12 + 1;
      if (*(int *)(iVar8 + 0xe8) != 0) {
        local_60 = pbVar12;
      }
      puVar19 = (undefined4 *)((int)puVar19 + 1);
      pbVar12 = local_60;
    } while (puVar19 < local_68);
  }
  this = param_1 + 9;
  iVar8 = param_1[10];
  uVar7 = *this;
  local_64 = param_1;
  puVar6 = FUN_00402de0();
  local_6c = local_64 + 0xc;
  local_70 = (uint)(local_60 != (byte *)((int)(iVar8 - uVar7) >> 2));
  if (*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2 !=
      (int)(local_64[0xd] - *local_6c) >> 2) {
    local_70 = 1;
  }
  puVar6 = FUN_00402de0();
  if (*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2 == (int)(local_6c[1] - *local_6c) >> 2)
  {
    local_64 = (undefined4 *)0x0;
    local_74 = *(undefined4 **)(DAT_0065b5cc + 0xcc);
    iVar8 = local_74[0x1e];
    if (local_74[0x1f] - iVar8 >> 2 != 0) {
      puVar19 = (undefined4 *)0x0;
      local_68 = (undefined4 *)0x0;
      do {
        iVar16 = *(int *)(iVar8 + (int)local_64 * 4);
        if (*(int *)(iVar16 + 0xe8) == 0) {
          pbVar13 = *(byte **)((int)puVar19 + *this);
          pbVar12 = (byte *)(iVar16 + 4);
          if (0xf < *(uint *)(iVar16 + 0x18)) {
            pbVar12 = *(byte **)pbVar12;
          }
          pbVar11 = pbVar13;
          if (0xf < *(uint *)(pbVar13 + 0x14)) {
            pbVar11 = *(byte **)pbVar13;
          }
          uVar7 = FUN_004031f0(pbVar11,*(uint *)(pbVar13 + 0x10),pbVar12,*(uint *)(iVar16 + 0x14));
          if ((char)uVar7 != '\0') {
            iVar16 = *(int *)(iVar8 + (int)local_64 * 4);
            local_60 = (byte *)(iVar16 + 0x1c);
            if (0xf < *(uint *)(iVar16 + 0x30)) {
              local_60 = *(byte **)local_60;
            }
            pbVar12 = pbVar13 + 0x18;
            if (0xf < *(uint *)(pbVar13 + 0x2c)) {
              pbVar12 = *(byte **)(pbVar13 + 0x18);
            }
            uVar7 = FUN_004031f0(pbVar12,*(uint *)(pbVar13 + 0x28),local_60,*(uint *)(iVar16 + 0x2c)
                                );
            if ((char)uVar7 != '\0') {
              iVar16 = *(int *)(iVar8 + (int)local_64 * 4);
              local_60 = (byte *)(iVar16 + 0x34);
              if (0xf < *(uint *)(iVar16 + 0x48)) {
                local_60 = *(byte **)local_60;
              }
              pbVar12 = pbVar13 + 0x30;
              if (0xf < *(uint *)(pbVar13 + 0x44)) {
                pbVar12 = *(byte **)(pbVar13 + 0x30);
              }
              uVar7 = FUN_004031f0(pbVar12,*(uint *)(pbVar13 + 0x40),local_60,
                                   *(uint *)(iVar16 + 0x44));
              if (((char)uVar7 != '\0') &&
                 (*(int *)(pbVar13 + 100) == *(int *)(*(int *)(iVar8 + (int)local_64 * 4) + 0xd4)))
              {
                puVar19 = local_68 + 1;
                local_68 = puVar19;
                goto LAB_004228a3;
              }
            }
          }
          local_70 = CONCAT31(local_70._1_3_,1);
          break;
        }
LAB_004228a3:
        local_64 = (undefined4 *)((int)local_64 + 1);
      } while (local_64 < (undefined4 *)(local_74[0x1f] - iVar8 >> 2));
    }
  }
  puVar6 = FUN_00402de0();
  if (*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2 == (int)(local_6c[1] - *local_6c) >> 2)
  {
    puVar19 = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    puVar6 = FUN_00402de0();
    if (*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2 != 0) {
      do {
        iVar8 = (int)puVar19 * 4;
        uVar7 = *local_6c;
        puVar6 = FUN_00402de0();
        iVar16 = *(int *)(iVar8 + *(int *)(puVar6 + 0x3c));
        pbVar12 = *(byte **)(uVar7 + iVar8);
        pbVar13 = pbVar12;
        if (0xf < *(uint *)(pbVar12 + 0x14)) {
          pbVar13 = *(byte **)pbVar12;
        }
        pbVar11 = (byte *)(iVar16 + 0x28);
        if (0xf < *(uint *)(iVar16 + 0x3c)) {
          pbVar11 = *(byte **)(iVar16 + 0x28);
        }
        uVar7 = FUN_004031f0(pbVar11,*(uint *)(iVar16 + 0x38),pbVar13,*(uint *)(pbVar12 + 0x10));
        if ((char)uVar7 == '\0') {
          local_70 = CONCAT31(local_70._1_3_,1);
          puVar18 = local_6c;
          goto LAB_00422a4b;
        }
        puVar6 = FUN_00402de0();
        puVar18 = local_6c;
        if (*(int *)(*(int *)(*(int *)(puVar6 + 0x3c) + iVar8) + 100) == 0) {
          iVar16 = *(int *)(iVar8 + *local_6c);
          pbVar12 = (byte *)(iVar16 + 0x18);
          if (0xf < *(uint *)(iVar16 + 0x2c)) {
            pbVar12 = *(byte **)(iVar16 + 0x18);
          }
          uVar7 = FUN_004031f0(pbVar12,*(uint *)(iVar16 + 0x28),(byte *)&PTR_005ce008,0);
          if ((char)uVar7 != '\0') goto LAB_00422986;
LAB_00422f67:
          local_70 = CONCAT31(local_70._1_3_,1);
          goto LAB_00422a4b;
        }
LAB_00422986:
        puVar6 = FUN_00402de0();
        if (*(int *)(*(int *)(*(int *)(puVar6 + 0x3c) + iVar8) + 100) != 0) {
          uVar7 = *puVar18;
          puVar6 = FUN_00402de0();
          iVar16 = *(int *)(*(int *)(iVar8 + *(int *)(puVar6 + 0x3c)) + 100);
          iVar1 = *(int *)(uVar7 + iVar8);
          pbVar12 = (byte *)(iVar1 + 0x18);
          if (0xf < *(uint *)(iVar1 + 0x2c)) {
            pbVar12 = *(byte **)(iVar1 + 0x18);
          }
          pbVar13 = (byte *)(iVar16 + 0x238);
          if (0xf < *(uint *)(iVar16 + 0x24c)) {
            pbVar13 = *(byte **)(iVar16 + 0x238);
          }
          uVar7 = FUN_004031f0(pbVar13,*(uint *)(iVar16 + 0x248),pbVar12,*(uint *)(iVar1 + 0x28));
          puVar18 = local_6c;
          if ((char)uVar7 == '\0') goto LAB_00422f67;
        }
        puVar6 = FUN_00402de0();
        if ((*(char *)(*(int *)(*(int *)(puVar6 + 0x3c) + iVar8) + 0x42) !=
             *(char *)(*(int *)(iVar8 + *puVar18) + 0x30)) ||
           (puVar6 = FUN_00402de0(),
           *(char *)(*(int *)(*(int *)(puVar6 + 0x3c) + iVar8) + 0x41) !=
           *(char *)(*(int *)(iVar8 + *puVar18) + 0x31))) goto LAB_00422f67;
        puVar19 = (undefined4 *)((int)local_68 + 1);
        local_68 = puVar19;
        puVar6 = FUN_00402de0();
      } while (puVar19 < (undefined4 *)(*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2));
    }
  }
  puVar18 = local_6c;
  if ((char)local_70 != '\0') {
LAB_00422a4b:
    puVar20 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)*puVar18;
    puVar14 = (undefined4 *)((uint)((int)local_6c[1] + (3 - (int)puVar19)) >> 2);
    if ((undefined4 *)local_6c[1] < puVar19) {
      puVar14 = (undefined4 *)0x0;
    }
    local_74 = puVar14;
    if (puVar14 != (undefined4 *)0x0) {
      do {
        if ((int *)*puVar19 != (int *)0x0) {
          FUN_0041ff50((int *)*puVar19);
          puVar14 = local_74;
        }
        puVar20 = (undefined4 *)((int)puVar20 + 1);
        puVar19 = puVar19 + 1;
      } while (puVar20 != puVar14);
    }
    local_6c[1] = *local_6c;
    puVar19 = (undefined4 *)*this;
    local_68 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)((param_1[10] - (int)puVar19) + 3U >> 2);
    if ((undefined4 *)param_1[10] < puVar19) {
      puVar14 = (undefined4 *)0x0;
    }
    local_74 = puVar14;
    if (puVar14 != (undefined4 *)0x0) {
      do {
        piVar15 = (int *)*puVar19;
        if (piVar15 != (int *)0x0) {
          FUN_0041fff0(piVar15);
          FUN_005adb3f(piVar15);
          puVar14 = local_74;
        }
        local_68 = (undefined4 *)((int)local_68 + 1);
        puVar19 = puVar19 + 1;
      } while (local_68 != puVar14);
    }
    param_1[10] = *this;
    local_60 = (byte *)0x0;
    piVar15 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar15 >> 2 != 0) {
      do {
        if (*(int *)(*(int *)(*piVar15 + (int)local_60 * 4) + 0xe8) == 0) {
          local_64 = (undefined4 *)FUN_005adb0f(0x68);
          memset(local_64,0,0x68);
          iVar16 = DAT_0065b5cc;
          puVar19 = local_64 + 6;
          puVar14 = local_64 + 0xc;
          local_68 = local_64;
          local_64[5] = 0xf;
          local_64[10] = 0;
          local_64[0xb] = 0xf;
          *(undefined1 *)puVar19 = 0;
          local_64[0x10] = 0;
          local_64[0x11] = 0xf;
          *(undefined1 *)puVar14 = 0;
          local_64[0x16] = 0;
          local_64[0x17] = 0xf;
          *(undefined1 *)(local_64 + 0x12) = 0;
          iVar8 = *(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)local_60 * 4);
          puVar20 = (undefined4 *)(iVar8 + 4);
          if (local_64 != puVar20) {
            if (0xf < *(uint *)(iVar8 + 0x18)) {
              puVar20 = (undefined4 *)*puVar20;
            }
            FUN_00402690(local_64,puVar20,*(uint *)(iVar8 + 0x14));
            iVar16 = DAT_0065b5cc;
          }
          iVar8 = *(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)local_60 * 4);
          puVar20 = (undefined4 *)(iVar8 + 0x1c);
          if (puVar19 != puVar20) {
            if (0xf < *(uint *)(iVar8 + 0x30)) {
              puVar20 = (undefined4 *)*puVar20;
            }
            FUN_00402690(puVar19,puVar20,*(uint *)(iVar8 + 0x2c));
            iVar16 = DAT_0065b5cc;
          }
          pbVar12 = local_60;
          iVar8 = *(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)local_60 * 4);
          puVar19 = (undefined4 *)(iVar8 + 0x34);
          if (puVar14 != puVar19) {
            if (0xf < *(uint *)(iVar8 + 0x48)) {
              puVar19 = (undefined4 *)*puVar19;
            }
            FUN_00402690(puVar14,puVar19,*(uint *)(iVar8 + 0x44));
            iVar16 = DAT_0065b5cc;
          }
          local_64[0x19] =
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)pbVar12 * 4) + 0xd4);
          iVar8 = *(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)pbVar12 * 4);
          puVar19 = (undefined4 *)(iVar8 + 0x34);
          if (puVar14 != puVar19) {
            if (0xf < *(uint *)(iVar8 + 0x48)) {
              puVar19 = (undefined4 *)*puVar19;
            }
            FUN_00402690(puVar14,puVar19,*(uint *)(iVar8 + 0x44));
          }
          puVar19 = local_64 + 0x12;
          FUN_00402690(puVar19,&PTR_005ce008,0);
          iVar16 = DAT_0065b5cc;
          iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78) + (int)local_60 * 4);
          local_64[0x18] = (*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec)) / 0x18;
          iVar8 = *(int *)(*(int *)(*(int *)(iVar16 + 0xcc) + 0x78) + (int)local_60 * 4);
          iVar16 = *(int *)(iVar8 + 0x234) - *(int *)(iVar8 + 0x230);
          iVar8 = iVar16 >> 0x1f;
          if (iVar16 / 0x18 + iVar8 != iVar8) {
            FUN_00402690(puVar19,&DAT_005e6758,2);
            iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78) + (int)local_60 * 4);
            puVar14 = *(undefined4 **)(iVar8 + 0x224);
            local_74 = *(undefined4 **)(iVar8 + 0x228);
            if (puVar14 != local_74) {
              do {
                FUN_004024e0(local_5c,puVar14);
                local_8 = 0;
                FUN_004024e0(&stack0xffffff5c,local_5c);
                iVar8 = FUN_004a8020(in_stack_ffffff5c);
                if (iVar8 != 0) {
                  in_stack_ffffff5c = (byte *)0x422d6e;
                  puVar9 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"\n - %s %s (%s)");
                  local_8._0_1_ = 1;
                  puVar20 = puVar9;
                  if (0xf < (uint)puVar9[5]) {
                    puVar20 = (undefined4 *)*puVar9;
                  }
                  FUN_00403640(puVar19,puVar20,puVar9[4]);
                  local_8 = (uint)local_8._1_3_ << 8;
                  if (0xf < local_18) {
                    pvVar17 = local_2c[0];
                    if ((0xfff < local_18 + 1) &&
                       (pvVar17 = *(void **)((int)local_2c[0] + -4),
                       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17)))) goto LAB_00423080;
                    FUN_005adb3f(pvVar17);
                  }
                  local_1c = 0;
                  local_18 = 0xf;
                  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
                }
                local_8 = -1;
                if (0xf < local_48) {
                  pvVar17 = local_5c[0];
                  if ((0xfff < local_48 + 1) &&
                     (pvVar17 = *(void **)((int)local_5c[0] + -4),
                     0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar17)))) goto LAB_00423080;
                  FUN_005adb3f(pvVar17);
                }
                puVar14 = puVar14 + 6;
              } while (puVar14 != local_74);
            }
            iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78) + (int)local_60 * 4);
            puVar14 = *(undefined4 **)(iVar8 + 0x234);
            for (puVar19 = *(undefined4 **)(iVar8 + 0x230); puVar19 != puVar14;
                puVar19 = puVar19 + 6) {
              FUN_004024e0(local_5c,puVar19);
              local_8 = 2;
              FUN_004024e0(&stack0xffffff5c,local_5c);
              iVar8 = FUN_004a8020(in_stack_ffffff5c);
              if (iVar8 != 0) {
                in_stack_ffffff5c = (byte *)0x422e9e;
                puVar9 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n + %s %s (%s)");
                local_8._0_1_ = 3;
                puVar20 = puVar9;
                if (0xf < (uint)puVar9[5]) {
                  puVar20 = (undefined4 *)*puVar9;
                }
                FUN_00403640(local_64 + 0x12,puVar20,puVar9[4]);
                local_8 = CONCAT31(local_8._1_3_,2);
                if (0xf < local_30) {
                  pvVar17 = local_44[0];
                  if ((0xfff < local_30 + 1) &&
                     (pvVar17 = *(void **)((int)local_44[0] + -4),
                     0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar17)))) goto LAB_00423080;
                  FUN_005adb3f(pvVar17);
                }
                local_34 = 0;
                local_30 = 0xf;
                local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
              }
              local_8 = -1;
              if (0xf < local_48) {
                pvVar17 = local_5c[0];
                if ((0xfff < local_48 + 1) &&
                   (pvVar17 = *(void **)((int)local_5c[0] + -4),
                   0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar17)))) goto LAB_00423080;
                FUN_005adb3f(pvVar17);
              }
            }
          }
          puVar19 = (undefined4 *)param_1[10];
          if ((undefined4 *)param_1[0xb] == puVar19) {
            FUN_00414080(this,puVar19,&local_68);
          }
          else {
            *puVar19 = local_64;
            param_1[10] = param_1[10] + 4;
          }
        }
        local_60 = local_60 + 1;
        piVar15 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
      } while (local_60 < (byte *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar15 >> 2));
    }
    puVar19 = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    puVar6 = FUN_00402de0();
    if (*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2 != 0) {
      do {
        puVar20 = (undefined4 *)FUN_005adb0f(0x34);
        memset(puVar20,0,0x34);
        puVar20[5] = 0xf;
        puVar20[10] = 0;
        puVar20[0xb] = 0xf;
        *(undefined1 *)(puVar20 + 6) = 0;
        *(undefined1 *)((int)puVar20 + 0x32) = 0;
        local_74 = puVar20;
        puVar6 = FUN_00402de0();
        iVar8 = *(int *)(*(int *)(puVar6 + 0x3c) + (int)puVar19 * 4);
        puVar14 = (undefined4 *)(iVar8 + 0x28);
        if (puVar20 != puVar14) {
          if (0xf < *(uint *)(iVar8 + 0x3c)) {
            puVar14 = (undefined4 *)*puVar14;
          }
          FUN_00402690(puVar20,puVar14,*(uint *)(iVar8 + 0x38));
        }
        puVar6 = FUN_00402de0();
        *(undefined1 *)(puVar20 + 0xc) =
             *(undefined1 *)(*(int *)(*(int *)(puVar6 + 0x3c) + (int)puVar19 * 4) + 0x42);
        puVar6 = FUN_00402de0();
        *(undefined1 *)((int)puVar20 + 0x31) =
             *(undefined1 *)(*(int *)(*(int *)(puVar6 + 0x3c) + (int)puVar19 * 4) + 0x41);
        puVar6 = FUN_00402de0();
        if (*(int *)(*(int *)(*(int *)(puVar6 + 0x3c) + (int)puVar19 * 4) + 100) == 0) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,&PTR_005ce008,0);
          bVar4 = true;
          ppvVar10 = local_2c;
        }
        else {
          puVar6 = FUN_00402de0();
          ppvVar10 = (void **)FUN_004024e0(local_44,(undefined4 *)
                                                    (*(int *)(*(int *)(*(int *)(puVar6 + 0x3c) +
                                                                      (int)puVar19 * 4) + 100) +
                                                    0x238));
          local_8 = 4;
          bVar5 = true;
        }
        if ((void **)(puVar20 + 6) != ppvVar10) {
          FUN_00401b20(puVar20 + 6);
          pvVar17 = ppvVar10[1];
          pvVar2 = ppvVar10[2];
          pvVar3 = ppvVar10[3];
          puVar20[6] = *ppvVar10;
          puVar20[7] = pvVar17;
          puVar20[8] = pvVar2;
          puVar20[9] = pvVar3;
          pvVar17 = ppvVar10[5];
          puVar20[10] = ppvVar10[4];
          puVar20[0xb] = pvVar17;
          ppvVar10[4] = (void *)0x0;
          ppvVar10[5] = (void *)0xf;
          *(undefined1 *)ppvVar10 = 0;
        }
        if ((bVar4) && (bVar4 = false, 0xf < local_18)) {
          pvVar17 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar17 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17)))) goto LAB_00423080;
          FUN_005adb3f(pvVar17);
        }
        local_8 = -1;
        if (bVar5) {
          bVar5 = false;
          if (0xf < local_30) {
            pvVar17 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar17 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar17)))) {
LAB_00423080:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar17);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        puVar19 = (undefined4 *)local_6c[1];
        if ((undefined4 *)local_6c[2] == puVar19) {
          FUN_00414080(local_6c,puVar19,&local_74);
        }
        else {
          *puVar19 = puVar20;
          local_6c[1] = local_6c[1] + 4;
        }
        puVar19 = (undefined4 *)((int)local_68 + 1);
        local_68 = puVar19;
        puVar6 = FUN_00402de0();
      } while (puVar19 < (undefined4 *)(*(int *)(puVar6 + 0x40) - *(int *)(puVar6 + 0x3c) >> 2));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void * __fastcall FUN_004231d0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x5c)) {
    pvVar1 = *(void **)((int)param_1 + 0x48);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x5c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004232ae;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0xf;
  *(undefined1 *)((int)param_1 + 0x48) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x3c)) {
    pvVar1 = *(void **)((int)param_1 + 0x28);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x3c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004232ae;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0xf;
  *(undefined1 *)((int)param_1 + 0x28) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
    pvVar1 = *(void **)((int)param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004232ae:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


undefined1 __thiscall FUN_004232c0(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_5;
  
  pbVar3 = param_1;
  iVar1 = *(int *)((int)this + 0x3c);
  uVar7 = 0;
  uVar8 = *(int *)((int)this + 0x40) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x48);
      if (0xf < *(uint *)(iVar2 + 0x5c)) {
        pbVar6 = *(byte **)(iVar2 + 0x48);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x58),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        local_5 = 1;
        goto LAB_00423318;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  local_5 = 0;
LAB_00423318:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return local_5;
}


void __thiscall FUN_00423360(void *this,undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int *piVar1;
  byte **ppbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte **ppbVar9;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined1 auStack_9c [28];
  undefined4 uStack_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  undefined4 *local_3c;
  int *local_38;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 local_2b;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b14eb;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 0;
  iVar7 = *(int *)((int)this + 0x3c);
  local_34 = 0;
  ppbVar9 = (byte **)param_3;
  uVar6 = in_stack_00000020;
  local_40 = this;
  puVar5 = &stack0xfffffffc;
  if (*(int *)((int)this + 0x40) - iVar7 >> 2 != 0) {
    do {
      local_38 = (int *)(iVar7 + local_34 * 4);
      local_3c = (undefined4 *)*local_38;
      ppbVar2 = &param_3;
      if (0xf < uVar6) {
        ppbVar2 = ppbVar9;
      }
      pbVar8 = (byte *)(local_3c + 0x12);
      if (0xf < (uint)local_3c[0x17]) {
        pbVar8 = (byte *)local_3c[0x12];
      }
      uVar3 = FUN_004031f0(pbVar8,local_3c[0x16],(byte *)ppbVar2,in_stack_0000001c);
      if ((char)uVar3 != '\0') {
        puVar4 = local_3c;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
          puVar4 = (undefined4 *)*local_38;
        }
        local_60 = *puVar4;
        uStack_5c = puVar4[1];
        uStack_58 = puVar4[2];
        uStack_54 = puVar4[3];
        local_2f = param_1;
        local_30 = 0x99;
        local_50 = *puVar4;
        uStack_4c = puVar4[1];
        uStack_48 = puVar4[2];
        uStack_44 = puVar4[3];
        local_2b = param_2;
        FUN_00402de0();
        puVar5 = FUN_00402de0();
        piVar1 = *(int **)(puVar5 + 0x90);
        FUN_0041ab70(auStack_9c,&local_50);
        (**(code **)(*piVar1 + 0x50))(&local_30,9,1,3,0);
        ppbVar9 = (byte **)param_3;
        uVar6 = in_stack_00000020;
        if (DAT_0065b3d3 != '\0') {
          uVar6 = (uint)DAT_0065c30c;
          DAT_0065c30c = DAT_0065c30c + 1;
          FUN_0059d520(&local_60,(undefined4 *)(&DAT_00660428 + (uVar6 & 7) * 0x40));
          uStack_80 = 0x4234be;
          FUN_00591070("NETWORK","Sent sound \'%s\' to client %s");
          ppbVar9 = (byte **)param_3;
          uVar6 = in_stack_00000020;
        }
      }
      local_34 = local_34 + 1;
      iVar7 = *(int *)((int)local_40 + 0x3c);
      puVar5 = puStack_20;
    } while (local_34 < (uint)(*(int *)((int)local_40 + 0x40) - iVar7 >> 2));
  }
  puStack_20 = puVar5;
  if (0xf < uVar6) {
    ppbVar2 = ppbVar9;
    if ((0xfff < uVar6 + 1) &&
       (ppbVar2 = (byte **)ppbVar9[-1], (byte *)0x1f < (byte *)((int)ppbVar9 + (-4 - (int)ppbVar2)))
       ) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppbVar2);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_00423540(void *this,undefined4 *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte **ppbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_005b151b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_14 = 0;
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Sending log line \'%s\' to ship rego \'%s\'...");
  }
  iVar5 = *(int *)((int)this + 0x3c);
  local_28 = 0;
  if (*(int *)((int)this + 0x40) - iVar5 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_28 * 4 + iVar5);
      pbVar6 = (byte *)(iVar1 + 0x48);
      ppbVar3 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar3 = (byte **)param_2;
      }
      if (0xf < *(uint *)(iVar1 + 0x5c)) {
        pbVar6 = *(byte **)pbVar6;
      }
      uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar1 + 0x58),(byte *)ppbVar3,in_stack_00000018);
      if ((char)uVar4 == '\0') {
        ppbVar3 = &param_2;
        if (0xf < in_stack_0000001c) {
          ppbVar3 = (byte **)param_2;
        }
        uVar4 = FUN_004031f0((byte *)ppbVar3,in_stack_00000018,(byte *)&PTR_005ce008,0);
        if ((char)uVar4 != '\0') goto LAB_0042363a;
      }
      else {
LAB_0042363a:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Sent log line to %s");
          iVar5 = *(int *)((int)this + 0x3c);
        }
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        puVar2 = *(undefined4 **)(local_28 * 4 + iVar5);
        FUN_0041d890(*puVar2,puVar2[1],puVar2[2],puVar2[3],param_1);
      }
      local_28 = local_28 + 1;
      iVar5 = *(int *)((int)this + 0x3c);
    } while (local_28 < (uint)(*(int *)((int)this + 0x40) - iVar5 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pbVar6 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar6 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_1c;
  return;
}


void __thiscall
FUN_00423700(void *this,void *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
            void *param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint in_stack_00000028;
  void *pvVar13;
  byte *in_stack_ffffff74;
  void *local_68 [5];
  uint local_54;
  uint *local_50;
  int local_4c;
  int *local_48;
  undefined1 local_41;
  int *local_40;
  uint local_3c;
  void *local_38;
  byte *pbStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_28;
  byte *pbStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b1568;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_40 = *(int **)((int)this + 0x3c);
  uVar8 = *(int *)((int)this + 0x40) - (int)local_40 >> 2;
  piVar7 = local_40;
  if (uVar8 != 0) {
    do {
      if ((*(void **)*piVar7 == param_1) && ((byte *)((int *)*piVar7)[1] == param_2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) break;
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar3 < uVar8);
  }
  FUN_00591070("MULTI","Sending fresh ship details (%s) to client %s");
  local_48 = (int *)&stack0xffffff74;
  FUN_004024e0(&stack0xffffff74,&param_5);
  local_8._0_1_ = 1;
  if (DAT_0065c2c8 == 0) {
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041c6d0(param_1,param_2,param_3,param_4,in_stack_ffffff74);
  FUN_004024e0(&stack0xffffff74,&param_5);
  pvVar13 = (void *)0x4237ea;
  iVar4 = FUN_004a7100(in_stack_ffffff74);
  local_3c = 0;
  iVar12 = *(int *)(iVar4 + 0x40);
  local_4c = iVar4;
  if (*(int *)(iVar12 + 0x40) - *(int *)(iVar12 + 0x3c) >> 2 != 0) {
    do {
      iVar11 = local_3c * 4;
      local_48 = (int *)&stack0xffffff70;
      FUN_004024e0(&stack0xffffff70,
                   (undefined4 *)(*(int *)(*(int *)(*(int *)(iVar12 + 0x3c) + iVar11) + 8) + 0x50));
      local_8._0_1_ = 2;
      local_40 = (int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x3c) + iVar11);
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0041ca10((int)param_1,(int)param_2,param_3,param_4,
                   *(undefined4 *)(*(int *)(*local_40 + 8) + 4),*(undefined4 *)(*local_40 + 0x10),
                   pvVar13);
      local_40 = (int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x3c) + iVar11);
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      iVar12 = *local_40;
      FUN_0041cb90((int)param_1,(int)param_2,param_3,param_4,
                   *(undefined4 *)(*(int *)(iVar12 + 8) + 4),*(undefined4 *)(iVar12 + 0x10),iVar12);
      local_40 = (int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x3c) + iVar11);
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      iVar12 = *local_40;
      pvVar13 = param_1;
      in_stack_ffffff74 = param_2;
      FUN_0041ccb0((int)param_1,(int)param_2,param_3,param_4,
                   *(undefined4 *)(*(int *)(iVar12 + 8) + 4),*(undefined4 *)(iVar12 + 0x10),iVar12);
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Sent module: %s, slot %d");
      }
      iVar12 = *(int *)(iVar4 + 0x40);
      local_3c = local_3c + 1;
    } while (local_3c < (uint)(*(int *)(iVar12 + 0x40) - *(int *)(iVar12 + 0x3c) >> 2));
  }
  if (*(int *)(iVar12 + 0x20) != 0) {
    local_3c = 0;
    iVar12 = 0x3c;
    do {
      iVar11 = *(int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x20) + iVar12);
      if (iVar11 != 0) {
        FUN_004024e0(local_68,(undefined4 *)(*(int *)(iVar11 + 0x388) + 0x60));
        local_8._0_1_ = 3;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8._0_1_ = 4;
        uStack_20._0_1_ = (undefined1)(local_3c >> 0x18);
        local_28 = (void *)0x9b;
        pbStack_24 = (byte *)(local_3c << 8);
        FUN_004024e0(&stack0xffffff74,local_68);
        FUN_00591630((int)&uStack_20 + 1,10,(char *)in_stack_ffffff74);
        local_38 = param_1;
        pbStack_34 = param_2;
        uStack_30 = param_3;
        uStack_2c = param_4;
        FUN_00402de0();
        puVar5 = FUN_00402de0();
        piVar7 = *(int **)(puVar5 + 0x90);
        FUN_0041ab70(&stack0xffffff5c,&local_38);
        (**(code **)(*piVar7 + 0x50))(&local_28,0x13,1,3,0);
        local_8 = (uint)local_8._1_3_ << 8;
        iVar4 = local_4c;
        if (0xf < local_54) {
          pvVar13 = local_68[0];
          if ((0xfff < local_54 + 1) &&
             (pvVar13 = *(void **)((int)local_68[0] + -4),
             0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar13)))) goto LAB_00423c0e;
          FUN_005adb3f(pvVar13);
          iVar4 = local_4c;
        }
      }
      local_3c = local_3c + 1;
      iVar12 = iVar12 + 4;
    } while (iVar12 < 0x5c);
  }
  local_3c = 0;
  iVar11 = *(int *)(*(int *)(iVar4 + 0x254) + 0x11c) - *(int *)(*(int *)(iVar4 + 0x254) + 0x118);
  iVar12 = iVar11 >> 0x1f;
  if (iVar11 / 0xc + iVar12 != iVar12) {
    local_40 = (int *)(iVar4 + 0x14c);
    do {
      piVar7 = (int *)*local_40;
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar10 = piVar7;
      piVar9 = (int *)piVar7[1];
      while (cVar1 == '\0') {
        if (piVar9[4] < (int)local_3c) {
          piVar6 = (int *)piVar9[2];
          piVar9 = piVar10;
        }
        else {
          piVar6 = (int *)*piVar9;
        }
        piVar10 = piVar9;
        piVar9 = piVar6;
        cVar1 = *(char *)((int)piVar6 + 0xd);
      }
      if ((piVar10 == piVar7) || ((int)local_3c < piVar10[4])) {
        local_50 = &local_3c;
        piVar7 = (int *)FUN_00421370(local_40,piVar7,&local_50);
        FUN_004213a0(local_40,&local_48,piVar10,piVar7 + 4,piVar7);
        piVar10 = local_48;
      }
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      pbStack_34 = (byte *)CONCAT31((int3)local_3c,0xa0);
      uStack_30._1_3_ = (undefined3)piVar10[5];
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(local_3c >> 0x18));
      uStack_2c._0_1_ = (undefined1)((uint)piVar10[5] >> 0x18);
      local_28 = param_1;
      pbStack_24 = param_2;
      uStack_20 = param_3;
      uStack_1c = param_4;
      FUN_00402de0();
      puVar5 = FUN_00402de0();
      piVar7 = *(int **)(puVar5 + 0x90);
      FUN_0041ab70(&stack0xffffff5c,&local_28);
      (**(code **)(*piVar7 + 0x50))(&pbStack_34,9,1,3,0);
      local_3c = local_3c + 1;
    } while (local_3c <
             (uint)((*(int *)(*(int *)(local_4c + 0x254) + 0x11c) -
                    *(int *)(*(int *)(local_4c + 0x254) + 0x118)) / 0xc));
  }
  if (DAT_0065c2c8 == 0) {
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  local_41 = 0x89;
  local_28 = param_1;
  pbStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_00402de0();
  puVar5 = FUN_00402de0();
  piVar7 = *(int **)(puVar5 + 0x90);
  FUN_0041ab70(&stack0xffffff5c,&local_28);
  (**(code **)(*piVar7 + 0x50))(&local_41,1,1,3,0);
  if (0xf < in_stack_00000028) {
    pvVar13 = param_5;
    if ((0xfff < in_stack_00000028 + 1) &&
       (pvVar13 = *(void **)((int)param_5 + -4), 0x1f < (uint)((int)param_5 + (-4 - (int)pvVar13))))
    {
LAB_00423c0e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00423c40(void *param_1)

{
  byte *pbVar1;
  byte ***pppbVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte ****ppppbVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  byte *in_stack_ffffff88;
  byte ***local_50 [4];
  uint local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  undefined4 *local_20;
  int *local_1c;
  void *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar9 = (undefined4 *)0x0;
  local_1c = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_8 = 0;
  uVar11 = 0;
  iVar10 = *(int *)((int)param_1 + 0x48);
  local_18 = param_1;
  if (*(int *)((int)param_1 + 0x4c) - iVar10 >> 2 != 0) {
    do {
      FUN_004024e0(&stack0xffffff88,*(undefined4 **)(iVar10 + uVar11 * 4));
      cVar3 = FUN_004232c0(param_1,in_stack_ffffff88);
      if (cVar3 == '\0') {
        puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x48) + uVar11 * 4);
        if (local_20 == piVar9) {
          FUN_00414080(&local_38,piVar9,puVar4);
          local_20 = local_30;
          piVar9 = local_34;
        }
        else {
          *piVar9 = *puVar4;
          local_34 = piVar9 + 1;
          piVar9 = local_34;
        }
      }
      uVar11 = uVar11 + 1;
      iVar10 = *(int *)((int)param_1 + 0x48);
    } while (uVar11 < (uint)(*(int *)((int)param_1 + 0x4c) - iVar10 >> 2));
    local_1c = local_38;
  }
  iVar10 = (int)piVar9 - (int)local_1c >> 2;
  piVar9 = local_1c;
  local_38 = local_1c;
  local_24 = iVar10;
  if (iVar10 != 0) {
    do {
      local_24 = iVar10;
      local_14 = piVar9;
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","No longer syncing to ship %s / %s");
      }
      local_2c = *(int **)((int)param_1 + 0x4c);
      piVar9 = *(int **)((int)param_1 + 0x48);
      if (piVar9 != local_2c) {
        do {
          if (*piVar9 == *local_14) break;
          piVar9 = piVar9 + 1;
        } while (piVar9 != local_2c);
        if (piVar9 != local_2c) {
          piVar5 = piVar9 + 1;
          uVar11 = 0;
          local_28 = (uint)((int)local_2c + (3 - (int)piVar5)) >> 2;
          if (local_2c < piVar5) {
            local_28 = 0;
          }
          if (local_28 != 0) {
            do {
              if (*piVar5 != *local_14) {
                *piVar9 = *piVar5;
                piVar9 = piVar9 + 1;
              }
              uVar11 = uVar11 + 1;
              piVar5 = piVar5 + 1;
              iVar10 = local_24;
            } while (uVar11 != local_28);
          }
          param_1 = local_18;
          if (piVar9 != local_2c) {
            _Size = *(int *)((int)local_18 + 0x4c) - (int)local_2c;
            memmove(piVar9,local_2c,_Size);
            *(size_t *)((int)local_18 + 0x4c) = _Size + (int)piVar9;
            param_1 = local_18;
          }
        }
      }
      piVar9 = (int *)*local_14;
      if (piVar9 != (int *)0x0) {
        FUN_00423fb0(piVar9);
        FUN_005adb3f(piVar9);
      }
      local_14 = local_14 + 1;
      iVar10 = iVar10 + -1;
      piVar9 = local_14;
    } while (iVar10 != 0);
    local_24 = 0;
  }
  iVar10 = *(int *)((int)param_1 + 0x3c);
  local_18 = (void *)0x0;
  local_34 = local_1c;
  if (*(int *)((int)param_1 + 0x40) - iVar10 >> 2 != 0) {
    do {
      local_24 = (int)local_18 * 4;
      FUN_004024e0(local_50,(undefined4 *)(*(int *)(local_24 + iVar10) + 0x48));
      pppbVar2 = local_50[0];
      uVar11 = 0;
      iVar10 = *(int *)((int)param_1 + 0x48);
      if (*(int *)((int)param_1 + 0x4c) - iVar10 >> 2 != 0) {
        do {
          pbVar1 = *(byte **)(iVar10 + uVar11 * 4);
          ppppbVar6 = local_50;
          if (0xf < local_3c) {
            ppppbVar6 = (byte ****)pppbVar2;
          }
          pbVar8 = pbVar1;
          if (0xf < *(uint *)(pbVar1 + 0x14)) {
            pbVar8 = *(byte **)pbVar1;
          }
          uVar7 = FUN_004031f0(pbVar8,*(uint *)(pbVar1 + 0x10),(byte *)ppppbVar6,local_40);
          if ((char)uVar7 != '\0') {
            if (local_3c < 0x10) goto LAB_00423f0c;
            ppppbVar6 = (byte ****)pppbVar2;
            if ((0xfff < local_3c + 1) &&
               (ppppbVar6 = (byte ****)pppbVar2[-1],
               (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar6)))) goto LAB_00423f4f;
            FUN_005adb3f(ppppbVar6);
            goto LAB_00423f0c;
          }
          uVar11 = uVar11 + 1;
          iVar10 = *(int *)((int)param_1 + 0x48);
        } while (uVar11 < (uint)(*(int *)((int)param_1 + 0x4c) - iVar10 >> 2));
      }
      if (0xf < local_3c) {
        ppppbVar6 = (byte ****)pppbVar2;
        if ((0xfff < local_3c + 1) &&
           (ppppbVar6 = (byte ****)pppbVar2[-1],
           (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar6)))) goto LAB_00423f4f;
        FUN_005adb3f(ppppbVar6);
      }
      iVar10 = local_24;
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Need to begin syncing to ship \'%s\'");
      }
      FUN_004024e0(&stack0xffffff88,
                   (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x3c) + iVar10) + 0x48));
      FUN_004241c0(param_1,(int *)in_stack_ffffff88);
LAB_00423f0c:
      iVar10 = *(int *)((int)param_1 + 0x3c);
      local_18 = (void *)((int)local_18 + 1);
    } while (local_18 < (uint)(*(int *)((int)param_1 + 0x40) - iVar10 >> 2));
  }
  if (local_1c != (int *)0x0) {
    piVar9 = local_1c;
    if ((0xfff < ((int)local_20 - (int)local_1c & 0xfffffffcU)) &&
       (piVar9 = (int *)local_1c[-1], 0x1f < (uint)((int)local_1c + (-4 - (int)piVar9)))) {
LAB_00423f4f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar9);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00423fb0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[0x16];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x18] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  pvVar1 = (void *)param_1[0x13];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x15] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  pvVar1 = (void *)param_1[0x10];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x12] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0xf] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0xc] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[9] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004241b9;
    FUN_005adb3f(pvVar2);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004241b9:
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
