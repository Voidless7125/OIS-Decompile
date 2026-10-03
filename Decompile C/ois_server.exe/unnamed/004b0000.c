#include "../ois_server.exe.h"


int __cdecl FUN_004b0240(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005ddc30)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_004b028e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
LAB_004b028e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


undefined4 * __thiscall FUN_004b02d0(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uStack0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  undefined4 uStack00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc4a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  FUN_004024e0((void *)((int)this + 8),&param_3);
  local_8._0_1_ = 3;
  FUN_004024e0((void *)((int)this + 0x20),&stack0x00000024);
  local_8._0_1_ = 4;
  FUN_004024e0((void *)((int)this + 0x38),&stack0x0000003c);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xf;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xf;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined4 *)((int)this + 0x84) = 1;
  *(undefined4 *)((int)this + 0x88) = in_stack_00000054;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0xf;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = in_stack_00000058;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = in_stack_0000005c;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 2) || (iVar1 == 9)) || (iVar1 == 0xe)) {
    *(undefined1 *)((int)this + 0x94) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x94) = 0;
  }
  uVar2 = FUN_004b05d0(iVar1);
  *(undefined4 *)((int)this + 0x110) = uVar2;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack0000001c = 0;
  in_stack_00000020 = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pvVar3 = in_stack_00000024;
    if (0xfff < in_stack_00000038 + 1) {
      pvVar3 = *(void **)((int)in_stack_00000024 + -4);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pvVar3 = in_stack_0000003c;
    if (0xfff < in_stack_00000050 + 1) {
      pvVar3 = *(void **)((int)in_stack_0000003c + -4);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return this;
}


undefined4 __fastcall FUN_004b05d0(undefined4 param_1)

{
  bool bVar1;
  
  switch(param_1) {
  case 0:
  case 0x12:
    bVar1 = cc_assert_script_compatible("Module error: invalid module type.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","Module error: invalid module type.");
    }
    break;
  case 1:
  case 10:
    return 2;
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
    return 1;
  case 0xb:
    return 3;
  }
  return 0;
}


int * __fastcall FUN_004b0650(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 0x124) - (int)*(undefined4 **)(param_1 + 0x120) >> 2;
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      iVar4 = 100;
      do {
        if (iVar4 < 1) {
          return (int *)0x0;
        }
        iVar2 = *(int *)(param_1 + 0x124);
        iVar4 = iVar4 + -1;
        iVar3 = *(int *)(param_1 + 0x120);
        iVar5 = rand();
        piVar1 = *(int **)(*(int *)(param_1 + 0x120) + (iVar5 % (iVar2 - iVar3 >> 2)) * 4);
        piVar6 = (int *)0x0;
        if (*piVar1 == 0) {
          piVar6 = piVar1;
        }
      } while (piVar6 == (int *)0x0);
      return piVar6;
    }
    piVar1 = (int *)**(undefined4 **)(param_1 + 0x120);
    if (*piVar1 == 0) {
      return piVar1;
    }
  }
  return (int *)0x0;
}


void __fastcall FUN_004b06c0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((uint *)*param_1 != (uint *)0x0) {
    FUN_00480190((uint *)*param_1,(uint *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xffffffe0U)) &&
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


void __thiscall FUN_004b0720(void *this,undefined4 *param_1)

{
  undefined4 **_Str;
  undefined4 *puVar1;
  size_t in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00403640(&param_1,&DAT_005e75f8,1);
  _Str = &param_1;
  if (0xf < in_stack_00000018) {
    _Str = (undefined4 **)param_1;
  }
  fwrite(_Str,in_stack_00000014,1,this);
  if (0xf < in_stack_00000018) {
    puVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar1 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004b07c0(void *this,void *param_1)

{
  void *pvVar1;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined4 *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_00591e00(&stack0xffffffcc,"%s=%s");
  FUN_004b0720(this,in_stack_ffffffcc);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000014 = 0;
  if (0xf < in_stack_00000030) {
    pvVar1 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pvVar1 = *(void **)((int)in_stack_0000001c + -4),
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004b08b0(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  uint in_stack_0000001c;
  undefined4 *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00591e00(&stack0xffffffc0,"%s=%s");
  FUN_004b0720(this,in_stack_ffffffc0);
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar1 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void FUN_004b0970(void)

{
  DWORD *pDVar1;
  undefined1 *this;
  int iVar2;
  DWORD iModeNum;
  DWORD local_ec [2];
  DEVMODEW local_e4;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  this = FUN_00402de0();
  FUN_00402690(this,"Objects in Space",0x10);
  DAT_0065b62c = DAT_0065b628;
  memset(&local_e4,0,0xdc);
  iModeNum = 0;
  local_e4.dmSize = 0xdc;
  iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_e4);
  pDVar1 = DAT_0065b62c;
  while (DAT_0065b62c = pDVar1, iVar2 != 0) {
    if (DAT_0065b630 == pDVar1) {
      FUN_004b3300(pDVar1,local_ec);
    }
    else {
      *pDVar1 = local_e4.dmPelsWidth;
      pDVar1[1] = local_e4.dmPelsHeight;
      DAT_0065b62c = DAT_0065b62c + 2;
    }
    iModeNum = iModeNum + 1;
    iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_e4);
    pDVar1 = DAT_0065b62c;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004b0a40(void)

{
  HWND hWnd;
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  tagRECT local_24;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&local_24;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,&local_24);
  FUN_00591070(&DAT_005cdc70,"Default monitor res: %dx%d");
  if (((local_24.bottom < 0x438) || (iVar4 = 0x438, iVar5 = 0x780, local_24.right < 0x780)) &&
     ((local_24.right < 0x500 ||
      (iVar4 = local_24.bottom, iVar5 = local_24.right, local_24.bottom < 0x2d0)))) {
    iVar5 = 0x500;
    iVar4 = 0x2d0;
  }
  DAT_00655074 = 0;
  uVar3 = DAT_0065b62c - DAT_0065b628 >> 3;
  if (uVar3 != 0) {
    do {
      if ((*(int *)(DAT_0065b628 + DAT_00655074 * 8) == iVar5) &&
         (*(int *)(DAT_0065b628 + 4 + DAT_00655074 * 8) == iVar4)) {
        puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)&local_24,"%dx%d");
        if (puVar1 != &DAT_006557c8) {
          FUN_00401b20(&DAT_006557c8);
          DAT_006557c8 = *puVar1;
          uRam006557cc = puVar1[1];
          uRam006557d0 = puVar1[2];
          uRam006557d4 = puVar1[3];
          _DAT_006557d8 = *(undefined8 *)(puVar1 + 4);
          puVar1[4] = 0;
          puVar1[5] = 0xf;
          *(undefined1 *)puVar1 = 0;
        }
        if (local_10 < 0x10) goto LAB_004b0c12;
        pvVar2 = (void *)local_24.left;
        if ((0xfff < local_10 + 1) &&
           (pvVar2 = *(void **)(local_24.left + -4),
           0x1f < (uint)(local_24.left + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_004b0c08;
      }
      DAT_00655074 = DAT_00655074 + 1;
    } while (DAT_00655074 < uVar3);
  }
  DAT_00655074 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)&local_24,"%dx%d");
  if (puVar1 != &DAT_006557c8) {
    FUN_00401b20(&DAT_006557c8);
    DAT_006557c8 = *puVar1;
    uRam006557cc = puVar1[1];
    uRam006557d0 = puVar1[2];
    uRam006557d4 = puVar1[3];
    _DAT_006557d8 = *(undefined8 *)(puVar1 + 4);
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  if (0xf < local_10) {
    pvVar2 = (void *)local_24.left;
    if ((0xfff < local_10 + 1) &&
       (pvVar2 = *(void **)(local_24.left + -4),
       0x1f < (uint)(local_24.left + (-4 - (int)*(void **)(local_24.left + -4))))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
LAB_004b0c08:
    FUN_005adb3f(pvVar2);
  }
LAB_004b0c12:
  FUN_00591070(&DAT_005cdc70,"Setting res to %s");
  DAT_0065b39b = 1;
  __security_check_cookie(local_c ^ (uint)&local_24);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004b0c60(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)local_24;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_24,"%dx%d");
  if (puVar1 != &DAT_006557c8) {
    FUN_00401b20(&DAT_006557c8);
    DAT_006557c8 = *puVar1;
    uRam006557cc = puVar1[1];
    uRam006557d0 = puVar1[2];
    uRam006557d4 = puVar1[3];
    _DAT_006557d8 = *(undefined8 *)(puVar1 + 4);
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  if (0xf < local_10) {
    pvVar2 = local_24[0];
    if (0xfff < local_10 + 1) {
      pvVar2 = *(void **)((int)local_24[0] + -4);
      if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  FUN_004b2910();
  __security_check_cookie(local_c ^ (uint)local_24);
  return;
}


void FUN_004b0d30(void)

{
  undefined4 *puVar1;
  undefined4 ****ppppuVar2;
  char ****ppppcVar3;
  FILE *_File;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *in_stack_ffffff50;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  char ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc5d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"SERIAL OUTPUT COMMAND LIST - %s\n\n");
  local_8._0_1_ = 1;
  puVar4 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar4 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_8c,puVar4,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar5 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004b0ddf:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00403640(local_2c,"Numerical commands:\n\n",0x15);
  iVar6 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"COMMAND: %s\n");
    local_8._0_1_ = 3;
    puVar4 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar4 = (undefined4 *)*puVar1;
    }
    FUN_00403640(local_2c,puVar4,puVar1[4]);
    local_8._0_1_ = 2;
    if (0xf < local_60) {
      pvVar5 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar5 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar5)))) goto LAB_004b0ddf;
      FUN_005adb3f(pvVar5);
    }
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"DESCRIPTION: %s\n\n");
    local_8._0_1_ = 4;
    puVar4 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar4 = (undefined4 *)*puVar1;
    }
    FUN_00403640(local_2c,puVar4,puVar1[4]);
    local_8._0_1_ = 2;
    if (0xf < local_30) {
      pvVar5 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar5 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004b0ddf;
      FUN_005adb3f(pvVar5);
    }
    iVar6 = iVar6 + 4;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  } while (iVar6 < 0x98);
  FUN_00403640(local_2c,&DAT_005e75f8,1);
  ppppuVar2 = local_2c;
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_8c,ppppuVar2,local_1c);
  local_8._0_1_ = 0;
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
  local_8._0_1_ = 5;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00403640(local_2c,"Boolean check functions:\n\n",0x1a);
  iVar6 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"FUNCTION: %s\n");
    local_8._0_1_ = 6;
    puVar4 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar4 = (undefined4 *)*puVar1;
    }
    FUN_00403640(local_2c,puVar4,puVar1[4]);
    local_8._0_1_ = 5;
    if (0xf < local_30) {
      pvVar5 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar5 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004b0ddf;
      FUN_005adb3f(pvVar5);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"DESCRIPTION: %s\n\n");
    local_8._0_1_ = 7;
    puVar4 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar4 = (undefined4 *)*puVar1;
    }
    FUN_00403640(local_2c,puVar4,puVar1[4]);
    local_8._0_1_ = 5;
    if (0xf < local_60) {
      pvVar5 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar5 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar5)))) goto LAB_004b0ddf;
      FUN_005adb3f(pvVar5);
    }
    iVar6 = iVar6 + 4;
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  } while (iVar6 < 0x548);
  FUN_00403640(local_2c,&DAT_005e75f8,1);
  ppppuVar2 = local_2c;
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_8c,ppppuVar2,local_1c);
  local_8._0_1_ = 0;
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
  local_8._0_1_ = 8;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00403640(local_2c,"Ship commands:\n\n",0x10);
  ppuVar7 = &PTR_s__TOGGLE_005defa4;
  do {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"COMMAND: %s\n");
    local_8._0_1_ = 9;
    puVar4 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar4 = (undefined4 *)*puVar1;
    }
    FUN_00403640(local_2c,puVar4,puVar1[4]);
    local_8._0_1_ = 8;
    if (0xf < local_30) {
      pvVar5 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar5 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004b0ddf;
      FUN_005adb3f(pvVar5);
    }
    ppuVar7 = ppuVar7 + 1;
    if (0x5df2fb < (int)ppuVar7) {
      FUN_00403640(local_2c,&DAT_005e75f8,1);
      ppppuVar2 = local_2c;
      if (0xf < local_18) {
        ppppuVar2 = (undefined4 ****)local_2c[0];
      }
      FUN_00403640(local_8c,ppppuVar2,local_1c);
      local_8._0_1_ = 0;
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
      FUN_0058f040((int *)local_5c);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00403640(local_5c,"serial_commands.txt",0x13);
      ppppcVar3 = local_5c;
      if (0xf < local_48) {
        ppppcVar3 = (char ****)local_5c[0];
      }
      _File = fopen((char *)ppppcVar3,(char *)&_Mode_0060eae0);
      if (_File == (FILE *)0x0) {
        FUN_00591070("ERROR","Can\'t open %s for writing.");
      }
      else {
        FUN_004024e0(&stack0xffffff50,local_8c);
        FUN_004b0720(_File,in_stack_ffffff50);
        fclose(_File);
      }
      if (0xf < local_48) {
        ppppcVar3 = (char ****)local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (ppppcVar3 = (char ****)local_5c[0][-1],
           (char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar3);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_78) {
        pvVar5 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar5 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void FUN_004b1350(void)

{
  char cVar1;
  char cVar2;
  byte ****ppppbVar3;
  uint uVar4;
  FileUtils *pFVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  byte *****pppppbVar9;
  void *pvVar10;
  byte **ppbVar11;
  FileUtils **ppFVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  byte **ppbVar16;
  char *pcVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *in_stack_ffffdf10;
  undefined4 local_20c0;
  undefined4 local_20bc;
  undefined4 local_20b8;
  undefined4 local_20b4;
  undefined4 local_20b0;
  undefined4 local_20ac;
  undefined4 local_20a8;
  undefined4 local_20a4;
  undefined4 local_20a0;
  undefined4 local_209c;
  undefined4 local_2098;
  undefined4 local_2094;
  undefined4 local_2090;
  undefined4 local_208c;
  undefined4 local_2088;
  uint local_2084;
  int local_2080;
  char *local_207c;
  int local_2078;
  int local_2070;
  int *local_206c;
  int *local_2068;
  uint local_2064;
  byte *local_2060;
  int local_205c;
  undefined4 *local_2054;
  int local_2050;
  char *local_204c;
  char local_2045;
  void *local_2044 [5];
  uint local_2030;
  byte ****local_202c;
  int iStack_2028;
  int iStack_2024;
  int iStack_2020;
  uint local_201c;
  uint uStack_2018;
  char local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc64d;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppFVar12 = &this_006558b8;
  if (0xf < DAT_006558cc) {
    ppFVar12 = (FileUtils **)this_006558b8;
  }
  uVar4 = FUN_004031f0((byte *)ppFVar12,DAT_006558c8,(byte *)&PTR_005ce008,0);
  if ((char)uVar4 != '\0') {
    FUN_0058ebc0();
  }
  FUN_0058f040((int *)local_2044);
  local_8 = 0;
  FUN_00403640(local_2044,"objectsinspace.cfg",0x12);
  local_2050 = 0;
  pFVar5 = cocos2d::FileUtils::getInstance();
  local_204c = (char *)(**(code **)(*(int *)pFVar5 + 0x1c))();
  uVar13 = 0;
  local_2070 = 0;
  cVar2 = '\x01';
  local_206c = (int *)0x0;
  uVar4 = 0;
  local_2068 = (int *)0x0;
  local_8._0_1_ = 1;
  if (local_2050 < 1) {
    FUN_004b0970();
    FUN_00591070(&DAT_005cdc70,"Config file not found. Writing defaults to file.");
    FUN_004b0a40();
    FUN_004b2910();
  }
  else {
    iVar18 = 0;
    if (0 < local_2050) {
      local_2064 = 1;
      do {
        cVar1 = *(char *)(iVar18 + (int)local_204c);
        if (cVar1 == '\0') break;
        if ((cVar1 != '\r') && ((cVar2 == '\0' || ((cVar1 != '\t' && (cVar1 != ' ')))))) {
          cVar2 = '\0';
          if ((iVar18 == 0) && (uVar4 = uVar4 & 0xff, cVar1 == '#')) {
            uVar4 = local_2064;
          }
          if (cVar1 == '\n') {
            local_2045 = '\x01';
            if (0x1fff < uVar13) goto LAB_004b2900;
            local_2014[uVar13] = '\0';
            pcVar14 = local_2014;
            local_201c = 0;
            uStack_2018 = 0xf;
            local_202c = (byte ****)((uint)local_202c & 0xffffff00);
            do {
              cVar2 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar2 != '\0');
            FUN_00402690(&local_202c,local_2014,(int)pcVar14 - (int)(local_2014 + 1));
            local_8._0_1_ = 2;
            FUN_00403330(&local_2070,(int *)&local_202c);
            local_8._0_1_ = 1;
            if (0xf < uStack_2018) {
              pppppbVar9 = (byte *****)local_202c;
              if ((0xfff < uStack_2018 + 1) &&
                 (pppppbVar9 = (byte *****)local_202c[-1],
                 (byte *)0x1f < (byte *)((int)local_202c + (-4 - (int)pppppbVar9))))
              goto LAB_004b1662;
              FUN_005adb3f(pppppbVar9);
            }
            uVar13 = 0;
            uVar4 = 0;
            cVar2 = local_2045;
          }
          else if ((char)uVar4 == '\0') {
            local_2014[uVar13] = cVar1;
            uVar13 = uVar13 + 1;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < local_2050);
      if (0x1fff < uVar13) {
LAB_004b2900:
                    // WARNING: Subroutine does not return
        ___report_rangecheckfailure();
      }
    }
    piVar8 = local_206c;
    local_2014[uVar13] = '\0';
    pcVar14 = local_2014;
    local_201c = 0;
    uStack_2018 = 0xf;
    local_202c = (byte ****)((uint)local_202c & 0xffffff00);
    do {
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    FUN_00402690(&local_202c,local_2014,(int)pcVar14 - (int)(local_2014 + 1));
    local_8._0_1_ = 3;
    if (local_2068 == piVar8) {
      FUN_004036d0(&local_2070,piVar8,(int *)&local_202c);
      uVar4 = uStack_2018;
    }
    else {
      piVar8[4] = 0;
      piVar8[5] = 0;
      *piVar8 = (int)local_202c;
      piVar8[1] = iStack_2028;
      piVar8[2] = iStack_2024;
      piVar8[3] = iStack_2020;
      local_202c = (byte ****)((uint)local_202c & 0xffffff00);
      *(ulonglong *)(piVar8 + 4) = CONCAT44(uStack_2018,local_201c);
      local_206c = piVar8 + 6;
      uVar4 = 0xf;
    }
    piVar8 = local_206c;
    local_8._0_1_ = 1;
    if (0xf < uVar4) {
      pppppbVar9 = (byte *****)local_202c;
      if ((0xfff < uVar4 + 1) &&
         (pppppbVar9 = (byte *****)local_202c[-1],
         (byte *)0x1f < (byte *)((int)local_202c + (-4 - (int)pppppbVar9)))) {
LAB_004b1662:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppbVar9);
    }
    free(local_204c);
    local_2064 = 0;
    local_2084 = ((int)piVar8 - local_2070) / 0x18;
    if (local_2084 != 0) {
LAB_004b16b0:
      FUN_004024e0(&stack0xffffdf10,(undefined4 *)(local_2070 + local_2064 * 0x18));
      FUN_00592d70(&local_2060,'=',(undefined4 *)in_stack_ffffdf10);
      pbVar7 = local_2060;
      local_8._0_1_ = 4;
      if ((local_205c - (int)local_2060) / 0x18 == 2) {
        pbVar19 = local_2060;
        if (0xf < *(uint *)(local_2060 + 0x14)) {
          pbVar19 = *(byte **)local_2060;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(local_2060 + 0x10),&DAT_005e431c,4);
        if ((char)uVar4 != '\0') {
          pbVar19 = pbVar7 + 0x18;
          if (pbVar19 != (byte *)&DAT_006557b0) {
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            FUN_00402690(&DAT_006557b0,pbVar19,*(uint *)(pbVar7 + 0x28));
          }
          pcVar14 = "Configuration::username = \'%s\'";
          goto LAB_004b27aa;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"serverip",8);
        if ((char)uVar4 != '\0') {
          pbVar19 = pbVar7 + 0x18;
          if (pbVar19 != (byte *)&DAT_00655750) {
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            FUN_00402690(&DAT_00655750,pbVar19,*(uint *)(pbVar7 + 0x28));
          }
          pcVar14 = "Configuration::serverIP = %s";
          goto LAB_004b27aa;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),&DAT_0060ea74,4);
        if ((char)uVar4 != '\0') {
          pbVar19 = pbVar7 + 0x18;
          if (pbVar19 != (byte *)&DAT_0065b610) {
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            FUN_00402690(&DAT_0065b610,pbVar19,*(uint *)(pbVar7 + 0x28));
          }
          pcVar14 = "Configuration::serverPort = %s";
          goto LAB_004b27aa;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"scenario",8);
        if ((char)uVar4 != '\0') {
          pbVar19 = pbVar7 + 0x18;
          if (pbVar19 != (byte *)&DAT_00655798) {
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            FUN_00402690(&DAT_00655798,pbVar19,*(uint *)(pbVar7 + 0x28));
          }
          pcVar14 = "Configuration::scenario = \'%s\'";
          goto LAB_004b27aa;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"servername",10);
        if ((char)uVar4 != '\0') {
          pbVar19 = pbVar7 + 0x18;
          pbVar6 = FUN_00402de0();
          if (pbVar6 != pbVar19) {
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            FUN_00402690(pbVar6,pbVar19,*(uint *)(pbVar7 + 0x28));
          }
          FUN_00402de0();
          pcVar14 = "Configuration::servername = \'%s\'";
          goto LAB_004b27aa;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"difficulty",10);
        if ((char)uVar4 != '\0') {
          FUN_004024e0(&stack0xffffdf10,(undefined4 *)(pbVar7 + 0x18));
          DAT_00655078 = FUN_0040f990(in_stack_ffffdf10);
          FUN_00591070(&DAT_005cdc70,"Configuration::difficulty = \'%s\'");
          uVar4 = DAT_00655074;
          goto LAB_004b27b7;
        }
        pbVar19 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar19 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"fullscreen",10);
        if ((char)uVar4 == '\0') {
          pbVar19 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar19 = *(byte **)pbVar7;
          }
          uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"resolution",10);
          if ((char)uVar4 != '\0') {
            std::basic_string<>::operator=
                      ((basic_string<> *)&DAT_006557c8,(basic_string<> *)(pbVar7 + 0x18));
            FUN_00591070(&DAT_005cdc70,"Configuration::displayRes = \'%s\'");
            uVar4 = 0;
            if (DAT_0065b62c - DAT_0065b628 >> 3 != 0) {
              do {
                pbVar7 = (byte *)FUN_00591e00((undefined1 *)&local_202c,"%dx%d");
                ppbVar11 = &DAT_006557c8;
                if (0xf < DAT_006557dc) {
                  ppbVar11 = (byte **)DAT_006557c8;
                }
                pbVar19 = pbVar7;
                if (0xf < *(uint *)(pbVar7 + 0x14)) {
                  pbVar19 = *(byte **)pbVar7;
                }
                uVar13 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar11,DAT_006557d8
                                     );
                local_2045 = (char)uVar13;
                if (0xf < uStack_2018) {
                  pppppbVar9 = (byte *****)local_202c;
                  if ((0xfff < uStack_2018 + 1) &&
                     (pppppbVar9 = (byte *****)local_202c[-1],
                     (byte *)0x1f < (byte *)((int)local_202c + (-4 - (int)pppppbVar9))))
                  goto LAB_004b1662;
                  FUN_005adb3f(pppppbVar9);
                }
                if (local_2045 != '\0') goto LAB_004b27b7;
                uVar4 = uVar4 + 1;
              } while (uVar4 < (uint)(DAT_0065b62c - DAT_0065b628 >> 3));
            }
            DAT_00655074 = 0;
            piVar8 = (int *)FUN_00591e00((undefined1 *)&local_202c,"%dx%d");
            FUN_00413230(&DAT_006557c8,piVar8);
            if (0xf < uStack_2018) {
              pppppbVar9 = (byte *****)local_202c;
              if ((0xfff < uStack_2018 + 1) &&
                 (pppppbVar9 = (byte *****)local_202c[-1],
                 (byte *)0x1f < (byte *)((int)local_202c + (-4 - (int)pppppbVar9))))
              goto LAB_004b1662;
              FUN_005adb3f(pppppbVar9);
            }
            FUN_00591070(&DAT_005cdc70,"WARNING: Invalid resolution. Setting to default.");
            uVar4 = DAT_00655074;
            goto LAB_004b27b7;
          }
          pbVar19 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar19 = *(byte **)pbVar7;
          }
          uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"soundvolume",0xb);
          if ((char)uVar4 == '\0') {
            pbVar19 = pbVar7;
            if (0xf < *(uint *)(pbVar7 + 0x14)) {
              pbVar19 = *(byte **)pbVar7;
            }
            uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"musicvolume",0xb);
            if ((char)uVar4 == '\0') {
              pbVar19 = pbVar7;
              if (0xf < *(uint *)(pbVar7 + 0x14)) {
                pbVar19 = *(byte **)pbVar7;
              }
              uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"sendanalytics",0xd);
              if ((char)uVar4 != '\0') {
                pbVar20 = pbVar7 + 0x18;
                pbVar6 = pbVar20;
                pbVar19 = pbVar20;
                if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                  pbVar19 = *(byte **)pbVar20;
                  pbVar6 = *(byte **)pbVar20;
                }
                if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                  pbVar20 = *(byte **)pbVar20;
                }
                FUN_00413ec0(&local_208c,tolower_exref,(char *)pbVar20,
                             (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                pbVar7 = local_2060 + 0x18;
                if (0xf < *(uint *)(local_2060 + 0x2c)) {
                  pbVar7 = *(byte **)(local_2060 + 0x18);
                }
                uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                DAT_00655069 = (char)uVar4 != '\0';
                pcVar14 = "Configuration::sendAnalytics = \'%s\'";
                goto LAB_004b27aa;
              }
              pbVar19 = pbVar7;
              if (0xf < *(uint *)(pbVar7 + 0x14)) {
                pbVar19 = *(byte **)pbVar7;
              }
              uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"keysounds",9);
              if ((char)uVar4 == '\0') {
                pbVar19 = pbVar7;
                if (0xf < *(uint *)(pbVar7 + 0x14)) {
                  pbVar19 = *(byte **)pbVar7;
                }
                uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                     (byte *)"multiplayerverbosedebug",0x17);
                if ((char)uVar4 == '\0') {
                  pbVar19 = pbVar7;
                  if (0xf < *(uint *)(pbVar7 + 0x14)) {
                    pbVar19 = *(byte **)pbVar7;
                  }
                  uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"scrollwheel",0xb);
                  if ((char)uVar4 == '\0') {
                    pbVar19 = pbVar7;
                    if (0xf < *(uint *)(pbVar7 + 0x14)) {
                      pbVar19 = *(byte **)pbVar7;
                    }
                    uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"alwaysshowmenu",
                                         0xe);
                    if ((char)uVar4 == '\0') {
                      pbVar19 = pbVar7;
                      if (0xf < *(uint *)(pbVar7 + 0x14)) {
                        pbVar19 = *(byte **)pbVar7;
                      }
                      uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                           (byte *)"alternatetextrendering",0x16);
                      if ((char)uVar4 == '\0') {
                        pbVar19 = pbVar7;
                        if (0xf < *(uint *)(pbVar7 + 0x14)) {
                          pbVar19 = *(byte **)pbVar7;
                        }
                        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),&DAT_0060ee18,3);
                        if ((char)uVar4 != '\0') {
                          FUN_004024e0(&stack0xffffdf10,(undefined4 *)(pbVar7 + 0x18));
                          pbVar7 = (byte *)0x4b20e1;
                          FUN_00592d70(&local_207c,',',(undefined4 *)in_stack_ffffdf10);
                          local_8._0_1_ = 5;
                          if (1 < (uint)((local_2078 - (int)local_207c) / 0x18)) {
                            uVar4 = *(uint *)(local_207c + 0x14);
                            pcVar14 = local_207c;
                            if (0xf < uVar4) {
                              pcVar14 = *(char **)local_207c;
                            }
                            local_204c = local_207c;
                            if (0xf < uVar4) {
                              local_204c = *(char **)local_207c;
                            }
                            pcVar17 = local_207c;
                            if (0xf < uVar4) {
                              pcVar17 = *(char **)local_207c;
                            }
                            FUN_00413ec0(&local_20a4,toupper_exref,pcVar17,
                                         local_204c + *(int *)(local_207c + 0x10),pcVar14);
                            pcVar15 = local_207c + 0x18;
                            pcVar17 = pcVar15;
                            pcVar14 = pcVar15;
                            if (0xf < *(uint *)(local_207c + 0x2c)) {
                              pcVar14 = *(char **)pcVar15;
                              pcVar17 = *(char **)pcVar15;
                            }
                            if (0xf < *(uint *)(local_207c + 0x2c)) {
                              pcVar15 = *(char **)pcVar15;
                            }
                            FUN_00413ec0(&local_20a8,tolower_exref,pcVar15,
                                         pcVar17 + *(int *)(local_207c + 0x28),pcVar14);
                            FUN_004024e0(&local_202c,(undefined4 *)(local_207c + 0x18));
                            local_8._0_1_ = 6;
                            local_204c = (char *)FUN_004b32a0();
                            ppppbVar3 = local_202c;
                            local_8._0_1_ = 5;
                            uVar4 = 0;
                            local_2080 = *(int *)((int)local_204c + 0x18);
                            if (*(int *)((int)local_204c + 0x1c) - local_2080 >> 2 != 0) {
                              do {
                                local_2054 = *(undefined4 **)(local_2080 + uVar4 * 4);
                                pbVar19 = (byte *)(local_2054 + 7);
                                pppppbVar9 = &local_202c;
                                if (0xf < uStack_2018) {
                                  pppppbVar9 = (byte *****)ppppbVar3;
                                }
                                if (0xf < (uint)local_2054[0xc]) {
                                  pbVar19 = *(byte **)pbVar19;
                                }
                                uVar13 = FUN_004031f0(pbVar19,local_2054[0xb],(byte *)pppppbVar9,
                                                      local_201c);
                                if ((char)uVar13 != '\0') {
                                  pcVar14 = (char *)*local_2054;
                                  if (uStack_2018 < 0x10) goto LAB_004b2272;
                                  pppppbVar9 = (byte *****)ppppbVar3;
                                  if ((0xfff < uStack_2018 + 1) &&
                                     (pppppbVar9 = (byte *****)ppppbVar3[-1],
                                     (byte *)0x1f <
                                     (byte *)((int)ppppbVar3 + (-4 - (int)pppppbVar9))))
                                  goto LAB_004b1662;
                                  FUN_005adb3f(pppppbVar9);
                                  goto LAB_004b2272;
                                }
                                uVar4 = uVar4 + 1;
                              } while (uVar4 < (uint)(*(int *)((int)local_204c + 0x1c) -
                                                      *(int *)((int)local_204c + 0x18) >> 2));
                            }
                            if (0xf < uStack_2018) {
                              pppppbVar9 = (byte *****)ppppbVar3;
                              if ((0xfff < uStack_2018 + 1) &&
                                 (pppppbVar9 = (byte *****)ppppbVar3[-1],
                                 (byte *)0x1f < (byte *)((int)ppppbVar3 + (-4 - (int)pppppbVar9))))
                              goto LAB_004b1662;
                              FUN_005adb3f(pppppbVar9);
                            }
                            pcVar14 = (char *)0x0;
LAB_004b2272:
                            local_202c = (byte ****)((uint)local_202c & 0xffffff00);
                            uStack_2018 = 0xf;
                            local_201c = 0;
                            FUN_004024e0(&stack0xffffdf0c,(undefined4 *)local_207c);
                            iVar18 = FUN_004eb4d0(pbVar7);
                            pvVar10 = (void *)FUN_004b32a0();
                            FUN_00526c90(pvVar10,iVar18,pcVar14);
                            FUN_00591070(&DAT_005cdc70,"Configuration::key = \'%s\' = \'%s\'");
                          }
                          FUN_004025a0((int *)&local_207c);
                          uVar4 = DAT_00655074;
                          goto LAB_004b27b7;
                        }
                        pbVar19 = pbVar7;
                        if (0xf < *(uint *)(pbVar7 + 0x14)) {
                          pbVar19 = *(byte **)pbVar7;
                        }
                        uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),(byte *)"hardware",8);
                        if ((char)uVar4 == '\0') {
                          pbVar19 = pbVar7;
                          if (0xf < *(uint *)(pbVar7 + 0x14)) {
                            pbVar19 = *(byte **)pbVar7;
                          }
                          uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                               (byte *)"hardwarecrlf",0xc);
                          if ((char)uVar4 == '\0') {
                            pbVar19 = pbVar7;
                            if (0xf < *(uint *)(pbVar7 + 0x14)) {
                              pbVar19 = *(byte **)pbVar7;
                            }
                            uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                                 (byte *)"ignorecom12",0xb);
                            if ((char)uVar4 == '\0') {
                              pbVar19 = pbVar7;
                              if (0xf < *(uint *)(pbVar7 + 0x14)) {
                                pbVar19 = *(byte **)pbVar7;
                              }
                              uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                                   (byte *)"lastverplayed",0xd);
                              if ((char)uVar4 == '\0') {
                                pbVar19 = pbVar7;
                                if (0xf < *(uint *)(pbVar7 + 0x14)) {
                                  pbVar19 = *(byte **)pbVar7;
                                }
                                uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                                     (byte *)"nocameramotion",0xe);
                                if ((char)uVar4 == '\0') {
                                  pbVar19 = pbVar7;
                                  if (0xf < *(uint *)(pbVar7 + 0x14)) {
                                    pbVar19 = *(byte **)pbVar7;
                                  }
                                  uVar4 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                                       (byte *)"tooltips",8);
                                  if ((char)uVar4 == '\0') {
                                    pbVar19 = pbVar7;
                                    if (0xf < *(uint *)(pbVar7 + 0x14)) {
                                      pbVar19 = *(byte **)pbVar7;
                                    }
                                    uVar13 = FUN_004031f0(pbVar19,*(uint *)(pbVar7 + 0x10),
                                                          (byte *)"skipintro",9);
                                    uVar4 = DAT_00655074;
                                    if ((char)uVar13 == '\0') goto LAB_004b27b7;
                                    pbVar20 = pbVar7 + 0x18;
                                    pbVar6 = pbVar20;
                                    pbVar19 = pbVar20;
                                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                      pbVar19 = *(byte **)pbVar20;
                                      pbVar6 = *(byte **)pbVar20;
                                    }
                                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                      pbVar20 = *(byte **)pbVar20;
                                    }
                                    FUN_00413ec0(&local_20c0,tolower_exref,(char *)pbVar20,
                                                 (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19)
                                    ;
                                    pbVar7 = local_2060 + 0x18;
                                    if (0xf < *(uint *)(local_2060 + 0x2c)) {
                                      pbVar7 = *(byte **)(local_2060 + 0x18);
                                    }
                                    uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),
                                                         &DAT_005e425c,4);
                                    DAT_0065b3d1 = (char)uVar4 != '\0';
                                    pcVar14 = "Configuration::skipIntro = \'%s\'";
                                  }
                                  else {
                                    pbVar20 = pbVar7 + 0x18;
                                    pbVar6 = pbVar20;
                                    pbVar19 = pbVar20;
                                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                      pbVar19 = *(byte **)pbVar20;
                                      pbVar6 = *(byte **)pbVar20;
                                    }
                                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                      pbVar20 = *(byte **)pbVar20;
                                    }
                                    FUN_00413ec0(&local_20bc,tolower_exref,(char *)pbVar20,
                                                 (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19)
                                    ;
                                    pbVar7 = local_2060 + 0x18;
                                    if (0xf < *(uint *)(local_2060 + 0x2c)) {
                                      pbVar7 = *(byte **)(local_2060 + 0x18);
                                    }
                                    uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),
                                                         &DAT_005e425c,4);
                                    DAT_0065506b = (char)uVar4 != '\0';
                                    pcVar14 = "Configuration::tooltips = \'%s\'";
                                  }
                                }
                                else {
                                  pbVar20 = pbVar7 + 0x18;
                                  pbVar6 = pbVar20;
                                  pbVar19 = pbVar20;
                                  if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                    pbVar19 = *(byte **)pbVar20;
                                    pbVar6 = *(byte **)pbVar20;
                                  }
                                  if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                    pbVar20 = *(byte **)pbVar20;
                                  }
                                  FUN_00413ec0(&local_20b8,tolower_exref,(char *)pbVar20,
                                               (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                                  pbVar7 = local_2060 + 0x18;
                                  if (0xf < *(uint *)(local_2060 + 0x2c)) {
                                    pbVar7 = *(byte **)(local_2060 + 0x18);
                                  }
                                  uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),
                                                       &DAT_005e425c,4);
                                  DAT_0065b3cf = (char)uVar4 != '\0';
                                  pcVar14 = "Configuration::noCameraMotion = \'%s\'";
                                }
                              }
                              else {
                                std::basic_string<>::operator=
                                          ((basic_string<> *)&DAT_00655738,
                                           (basic_string<> *)(pbVar7 + 0x18));
                                pcVar14 = "Configuration::lastVersionPlayed = \'%s\'";
                              }
                            }
                            else {
                              pbVar20 = pbVar7 + 0x18;
                              pbVar6 = pbVar20;
                              pbVar19 = pbVar20;
                              if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                pbVar19 = *(byte **)pbVar20;
                                pbVar6 = *(byte **)pbVar20;
                              }
                              if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                                pbVar20 = *(byte **)pbVar20;
                              }
                              FUN_00413ec0(&local_20b4,tolower_exref,(char *)pbVar20,
                                           (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                              pbVar7 = local_2060 + 0x18;
                              if (0xf < *(uint *)(local_2060 + 0x2c)) {
                                pbVar7 = *(byte **)(local_2060 + 0x18);
                              }
                              uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c
                                                   ,4);
                              DAT_0065507c = (char)uVar4 != '\0';
                              pcVar14 = "Configuration::ignoreCom12 = \'%s\'";
                            }
                          }
                          else {
                            pbVar20 = pbVar7 + 0x18;
                            pbVar6 = pbVar20;
                            pbVar19 = pbVar20;
                            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                              pbVar19 = *(byte **)pbVar20;
                              pbVar6 = *(byte **)pbVar20;
                            }
                            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                              pbVar20 = *(byte **)pbVar20;
                            }
                            FUN_00413ec0(&local_20b0,tolower_exref,(char *)pbVar20,
                                         (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                            pbVar7 = local_2060 + 0x18;
                            if (0xf < *(uint *)(local_2060 + 0x2c)) {
                              pbVar7 = *(byte **)(local_2060 + 0x18);
                            }
                            uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4
                                                );
                            DAT_0065b3d2 = (char)uVar4 != '\0';
                            pcVar14 = "Configuration::hardwareCRLF = \'%s\'";
                          }
                        }
                        else {
                          pbVar20 = pbVar7 + 0x18;
                          pbVar6 = pbVar20;
                          pbVar19 = pbVar20;
                          if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                            pbVar19 = *(byte **)pbVar20;
                            pbVar6 = *(byte **)pbVar20;
                          }
                          if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                            pbVar20 = *(byte **)pbVar20;
                          }
                          FUN_00413ec0(&local_20ac,tolower_exref,(char *)pbVar20,
                                       (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                          pbVar7 = local_2060 + 0x18;
                          if (0xf < *(uint *)(local_2060 + 0x2c)) {
                            pbVar7 = *(byte **)(local_2060 + 0x18);
                          }
                          uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                          DAT_0065b39a = (char)uVar4 != '\0';
                          pcVar14 = "Configuration::hardwareEnabled = \'%s\'";
                        }
                      }
                      else {
                        pbVar20 = pbVar7 + 0x18;
                        pbVar6 = pbVar20;
                        pbVar19 = pbVar20;
                        if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                          pbVar19 = *(byte **)pbVar20;
                          pbVar6 = *(byte **)pbVar20;
                        }
                        if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                          pbVar20 = *(byte **)pbVar20;
                        }
                        FUN_00413ec0(&local_20a0,tolower_exref,(char *)pbVar20,
                                     (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                        pbVar7 = local_2060 + 0x18;
                        if (0xf < *(uint *)(local_2060 + 0x2c)) {
                          pbVar7 = *(byte **)(local_2060 + 0x18);
                        }
                        uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                        DAT_0065b3d0 = (char)uVar4 != '\0';
                        pcVar14 = "Configuration::alernateTextRendering = \'%s\'";
                      }
                    }
                    else {
                      pbVar20 = pbVar7 + 0x18;
                      pbVar6 = pbVar20;
                      pbVar19 = pbVar20;
                      if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                        pbVar19 = *(byte **)pbVar20;
                        pbVar6 = *(byte **)pbVar20;
                      }
                      if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                        pbVar20 = *(byte **)pbVar20;
                      }
                      FUN_00413ec0(&local_209c,tolower_exref,(char *)pbVar20,
                                   (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                      pbVar7 = local_2060 + 0x18;
                      if (0xf < *(uint *)(local_2060 + 0x2c)) {
                        pbVar7 = *(byte **)(local_2060 + 0x18);
                      }
                      uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                      DAT_0065b3ce = (char)uVar4 != '\0';
                      pcVar14 = "Configuration::alwaysShowMenu = \'%s\'";
                    }
                  }
                  else {
                    pbVar20 = pbVar7 + 0x18;
                    pbVar6 = pbVar20;
                    pbVar19 = pbVar20;
                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                      pbVar19 = *(byte **)pbVar20;
                      pbVar6 = *(byte **)pbVar20;
                    }
                    if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                      pbVar20 = *(byte **)pbVar20;
                    }
                    FUN_00413ec0(&local_2098,tolower_exref,(char *)pbVar20,
                                 (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                    pbVar7 = local_2060 + 0x18;
                    if (0xf < *(uint *)(local_2060 + 0x2c)) {
                      pbVar7 = *(byte **)(local_2060 + 0x18);
                    }
                    uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                    DAT_00655068 = (char)uVar4 != '\0';
                    pcVar14 = "Configuration::scrollWheel = \'%s\'";
                  }
                }
                else {
                  pbVar20 = pbVar7 + 0x18;
                  pbVar6 = pbVar20;
                  pbVar19 = pbVar20;
                  if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                    pbVar19 = *(byte **)pbVar20;
                    pbVar6 = *(byte **)pbVar20;
                  }
                  if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                    pbVar20 = *(byte **)pbVar20;
                  }
                  FUN_00413ec0(&local_2094,tolower_exref,(char *)pbVar20,
                               (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                  pbVar7 = local_2060 + 0x18;
                  if (0xf < *(uint *)(local_2060 + 0x2c)) {
                    pbVar7 = *(byte **)(local_2060 + 0x18);
                  }
                  uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                  DAT_0065b3d3 = (char)uVar4 != '\0';
                  pcVar14 = "Configuration::multiDebug = \'%s\'";
                }
              }
              else {
                pbVar20 = pbVar7 + 0x18;
                pbVar6 = pbVar20;
                pbVar19 = pbVar20;
                if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                  pbVar19 = *(byte **)pbVar20;
                  pbVar6 = *(byte **)pbVar20;
                }
                if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                  pbVar20 = *(byte **)pbVar20;
                }
                FUN_00413ec0(&local_2090,tolower_exref,(char *)pbVar20,
                             (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
                pbVar7 = local_2060 + 0x18;
                if (0xf < *(uint *)(local_2060 + 0x2c)) {
                  pbVar7 = *(byte **)(local_2060 + 0x18);
                }
                uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
                DAT_0065506a = (char)uVar4 != '\0';
                pcVar14 = "Configuration::keySounds = \'%s\'";
              }
            }
            else {
              pbVar19 = pbVar7 + 0x18;
              if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                pbVar19 = *(byte **)pbVar19;
              }
              DAT_00655070 = atoi((char *)pbVar19);
              local_204c = (char *)((float)DAT_00655070 / 100.0);
              iVar18 = FUN_00402f60();
              FUN_005585b0(iVar18);
              pcVar14 = "Configuration::musicVolume = \'%d\'";
            }
          }
          else {
            pbVar19 = pbVar7 + 0x18;
            if (0xf < *(uint *)(pbVar7 + 0x2c)) {
              pbVar19 = *(byte **)pbVar19;
            }
            DAT_0065506c = atoi((char *)pbVar19);
            iVar18 = FUN_00402f60();
            FUN_00558540(iVar18);
            pcVar14 = "Configuration::soundVolume = \'%d\'";
          }
        }
        else {
          pbVar20 = pbVar7 + 0x18;
          pbVar6 = pbVar20;
          pbVar19 = pbVar20;
          if (0xf < *(uint *)(pbVar7 + 0x2c)) {
            pbVar19 = *(byte **)pbVar20;
            pbVar6 = *(byte **)pbVar20;
          }
          if (0xf < *(uint *)(pbVar7 + 0x2c)) {
            pbVar20 = *(byte **)pbVar20;
          }
          FUN_00413ec0(&local_2088,tolower_exref,(char *)pbVar20,
                       (char *)(pbVar6 + *(int *)(pbVar7 + 0x28)),pbVar19);
          pbVar7 = local_2060 + 0x18;
          if (0xf < *(uint *)(local_2060 + 0x2c)) {
            pbVar7 = *(byte **)(local_2060 + 0x18);
          }
          uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2060 + 0x28),&DAT_005e425c,4);
          DAT_0065b39b = (char)uVar4 != '\0';
          pcVar14 = "Configuration::displayFullscreen = \'%s\'";
        }
      }
      else {
        pcVar14 = "Unable to parse line \'%s\' in config file";
      }
LAB_004b27aa:
      FUN_00591070(&DAT_005cdc70,pcVar14);
      uVar4 = DAT_00655074;
LAB_004b27b7:
      DAT_00655074 = uVar4;
      local_8._0_1_ = 1;
      FUN_004025a0((int *)&local_2060);
      local_2064 = local_2064 + 1;
      if (local_2084 <= local_2064) goto LAB_004b27e6;
      goto LAB_004b16b0;
    }
LAB_004b27e6:
    FUN_004b0970();
  }
  DAT_0065b3cc = DAT_0065b39b;
  ppbVar11 = &DAT_006557c8;
  if (0xf < DAT_006557dc) {
    ppbVar11 = (byte **)DAT_006557c8;
  }
  FUN_00402690(&DAT_00655768,ppbVar11,DAT_006557d8);
  if (DAT_0065b3cc == DAT_0065b39b) {
    ppbVar11 = &DAT_006557c8;
    if (0xf < DAT_006557dc) {
      ppbVar11 = (byte **)DAT_006557c8;
    }
    ppbVar16 = &DAT_00655768;
    if (0xf < DAT_0065577c) {
      ppbVar16 = (byte **)DAT_00655768;
    }
    uVar4 = FUN_004031f0((byte *)ppbVar16,DAT_00655778,(byte *)ppbVar11,DAT_006557d8);
    DAT_0065b3cd = 0;
    if ((char)uVar4 != '\0') goto LAB_004b289e;
  }
  DAT_0065b3cd = 1;
LAB_004b289e:
  FUN_004025a0(&local_2070);
  if (0xf < local_2030) {
    pvVar10 = local_2044[0];
    if ((0xfff < local_2030 + 1) &&
       (pvVar10 = *(void **)((int)local_2044[0] + -4),
       0x1f < (uint)((int)local_2044[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004b2910(void)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *this;
  char ****ppppcVar7;
  FILE *_File;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  byte **ppbVar11;
  byte *pbVar12;
  void *pvVar13;
  char *pcVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  uint uVar15;
  void *pvVar16;
  byte **ppbVar17;
  int *piVar18;
  uint in_stack_ffffff64;
  undefined4 *in_stack_ffffff7c;
  char ***local_44 [5];
  uint local_30;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc706;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppbVar11 = &DAT_00655798;
  if (0xf < DAT_006557ac) {
    ppbVar11 = (byte **)DAT_00655798;
  }
  uVar5 = FUN_004031f0((byte *)ppbVar11,DAT_006557a8,(byte *)&PTR_005ce008,0);
  if ((char)uVar5 != '\0') {
    FUN_00402690(&DAT_00655798,"coop_pirate_hunt",0x10);
  }
  pbVar6 = FUN_00402de0();
  pbVar12 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar12 = *(byte **)pbVar6;
  }
  uVar5 = FUN_004031f0(pbVar12,*(uint *)(pbVar6 + 0x10),(byte *)&PTR_005ce008,0);
  if ((char)uVar5 != '\0') {
    this = FUN_00402de0();
    FUN_00402690(this,"Objects in Space",0x10);
  }
  FUN_0058f040((int *)local_44);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_00403640(local_44,"objectsinspace.cfg",0x12);
  FUN_00591070("DETAIL","Loading config from \'%s\'");
  ppppcVar7 = local_44;
  if (0xf < local_30) {
    ppppcVar7 = (char ****)local_44[0];
  }
  _File = fopen((char *)ppppcVar7,(char *)&_Mode_0060eae0);
  if (_File == (FILE *)0x0) {
    FUN_00591070("ERROR","Can\'t open %s for writing.");
  }
  else {
    FUN_004024e0(&stack0xffffff7c,&DAT_006557c8);
    local_8._0_1_ = 1;
    pvVar16 = (void *)(in_stack_ffffff64 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"resolution",10);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"fullscreen",10);
    local_8._0_1_ = 2;
    FUN_00591e00(&stack0xffffff7c,"%s=%s");
    FUN_004b0720(_File,in_stack_ffffff7c);
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
LAB_004b2b05:
        local_8._0_1_ = 0;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
    FUN_004024e0(&stack0xffffff7c,&DAT_00655738);
    local_8._0_1_ = 3;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"lastverplayed",0xd);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    FUN_004024e0(&stack0xffffff7c,&DAT_006557b0);
    local_8._0_1_ = 4;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,&DAT_005e431c,4);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    FUN_004024e0(&stack0xffffff7c,&DAT_00655750);
    local_8._0_1_ = 5;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"serverip",8);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    FUN_004024e0(&stack0xffffff7c,&DAT_0065b610);
    local_8._0_1_ = 6;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,&DAT_0060ea74,4);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    FUN_004024e0(&stack0xffffff7c,&DAT_00655798);
    local_8._0_1_ = 7;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"scenario",8);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    pcVar2 = *(char **)(&UNK_005ddc90 + DAT_00655078 * 4);
    pcVar14 = pcVar2;
    do {
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    FUN_00402690(&stack0xffffff7c,pcVar2,(int)pcVar14 - (int)(pcVar2 + 1));
    local_8._0_1_ = 8;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"difficulty",10);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    puVar8 = (undefined4 *)FUN_00402de0();
    FUN_004024e0(&stack0xffffff7c,puVar8);
    local_8._0_1_ = 9;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"servername",10);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    FUN_00591e00(&stack0xffffff7c,&DAT_005e1d38);
    local_8._0_1_ = 10;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"soundvolume",0xb);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    iVar9 = FUN_00402f60();
    FUN_00558540(iVar9);
    FUN_00591e00(&stack0xffffff7c,&DAT_005e1d38);
    local_8._0_1_ = 0xb;
    uVar5 = 0;
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"musicvolume",0xb);
    local_8._0_1_ = 0;
    FUN_004b07c0(_File,pvVar16);
    iVar9 = FUN_00402f60();
    FMOD::ChannelControl::isPlaying(*(bool **)(iVar9 + 100));
    FMOD::ChannelControl::setVolume(*(float *)(iVar9 + 100));
    pvVar16 = (void *)(uVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"keysounds",9);
    FUN_004b08b0(_File,extraout_ECX,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"scrollwheel",0xb);
    FUN_004b08b0(_File,extraout_ECX_00,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"alwaysshowmenu",0xe);
    FUN_004b08b0(_File,extraout_ECX_01,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"sendanalytics",0xd);
    FUN_004b08b0(_File,extraout_ECX_02,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"hardware",8);
    FUN_004b08b0(_File,extraout_ECX_03,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"hardwarecrlf",0xc);
    FUN_004b08b0(_File,extraout_ECX_04,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"ignorecom12",0xb);
    FUN_004b08b0(_File,extraout_ECX_05,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"nocameramotion",0xe);
    FUN_004b08b0(_File,extraout_ECX_06,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"tooltips",8);
    FUN_004b08b0(_File,extraout_ECX_07,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"skipintro",9);
    FUN_004b08b0(_File,extraout_ECX_08,pvVar16);
    pvVar16 = (void *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"multiplayerverbosedebug",0x17);
    FUN_004b08b0(_File,extraout_ECX_09,pvVar16);
    puVar8 = (undefined4 *)((uint)pvVar16 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"alternatetextrendering",0x16);
    FUN_004b08b0(_File,extraout_ECX_10,puVar8);
    if (DAT_0065c2fc == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)FUN_005adb0f(0x24);
      local_8._0_1_ = 0xc;
      DAT_0065c2fc = FUN_00524b00(puVar10);
      local_8._0_1_ = 0;
    }
    piVar3 = (int *)DAT_0065c2fc[4];
    puVar10 = DAT_0065c2fc;
    for (piVar18 = (int *)DAT_0065c2fc[3]; piVar18 != piVar3; piVar18 = piVar18 + 1) {
      iVar9 = *piVar18;
      if ((*(char *)(iVar9 + 0x18) != '\0') || (*(int *)(iVar9 + 0x1c) != *(int *)(iVar9 + 0x20))) {
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)FUN_005adb0f(0x24);
          local_8._0_1_ = 0xd;
          puVar10 = FUN_00524b00(puVar10);
          local_8._0_1_ = 0;
          DAT_0065c2fc = puVar10;
        }
        iVar9 = *(int *)(iVar9 + 0x1c);
        if (iVar9 == 0) {
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0]._1_3_ << 8);
          local_1c = iVar9;
          FUN_00402690(local_2c,&PTR_005ce008,0);
        }
        else {
          uVar5 = 0;
          uVar15 = (int)(puVar10[7] - puVar10[6]) >> 2;
          if (uVar15 != 0) {
            do {
              piVar4 = *(int **)(puVar10[6] + uVar5 * 4);
              if (*piVar4 == iVar9) {
                FUN_004024e0(local_2c,piVar4 + 7);
                goto LAB_004b3134;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar15);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0]._1_3_ << 8);
          FUN_00402690(local_2c,"ERROR",5);
        }
LAB_004b3134:
        local_8._0_1_ = 0xe;
        FUN_00591e00(&stack0xffffff74,"key=%s,%s");
        FUN_004b0720(_File,puVar8);
        local_8._0_1_ = 0;
        puVar10 = DAT_0065c2fc;
        if (0xf < local_18) {
          pvVar16 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar16 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) goto LAB_004b2b05;
          FUN_005adb3f(pvVar16);
          puVar10 = DAT_0065c2fc;
        }
      }
    }
    fclose(_File);
    FUN_00591070(&DAT_005cdc70,"Wrote config file data to %s");
    if (DAT_0065b3cc == DAT_0065b39b) {
      ppbVar11 = &DAT_006557c8;
      if (0xf < DAT_006557dc) {
        ppbVar11 = (byte **)DAT_006557c8;
      }
      ppbVar17 = &DAT_00655768;
      if (0xf < DAT_0065577c) {
        ppbVar17 = (byte **)DAT_00655768;
      }
      uVar5 = FUN_004031f0((byte *)ppbVar17,DAT_00655778,(byte *)ppbVar11,DAT_006557d8);
      DAT_0065b3cd = 0;
      if ((char)uVar5 != '\0') goto LAB_004b323d;
    }
    DAT_0065b3cd = 1;
  }
LAB_004b323d:
  if (0xf < local_30) {
    ppppcVar7 = (char ****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppcVar7 = (char ****)local_44[0][-1],
       (char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004b32a0(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc73f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c2fc == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x24);
    local_8 = 0;
    DAT_0065c2fc = FUN_00524b00(puVar1);
  }
  ExceptionList = local_10;
  return;
}


undefined4 * FUN_004b3300(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  
  iVar6 = (int)DAT_0065b62c - (int)DAT_0065b628 >> 3;
  iVar12 = (int)param_1 - (int)DAT_0065b628;
  if (iVar6 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar6 + 1;
  uVar10 = (int)DAT_0065b630 - (int)DAT_0065b628 >> 3;
  uVar7 = uVar1;
  if ((uVar10 <= 0x1fffffff - (uVar10 >> 1)) && (uVar7 = (uVar10 >> 1) + uVar10, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar10 = uVar7 * 8;
  if (uVar7 < 0x20000000) {
    if (0xfff < uVar10) goto LAB_004b3378;
    if (uVar10 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)FUN_005adb0f(uVar10);
    }
  }
  else {
    uVar10 = 0xffffffff;
LAB_004b3378:
    uVar8 = uVar10 + 0x23;
    if (uVar8 <= uVar10) {
      uVar8 = 0xffffffff;
    }
    iVar6 = FUN_005adb0f(uVar8);
    if (iVar6 == 0) goto LAB_004b349b;
    puVar11 = (undefined4 *)(iVar6 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar6;
  }
  puVar2 = puVar11 + (iVar12 >> 3) * 2;
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar4 = DAT_0065b62c;
  puVar9 = puVar11;
  puVar3 = DAT_0065b628;
  if (param_1 == DAT_0065b62c) {
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      *puVar9 = *puVar3;
      puVar9[1] = puVar3[1];
      puVar9 = puVar9 + 2;
    }
  }
  else {
    for (; puVar5 = puVar2, DAT_0065b62c = puVar4, puVar3 != param_1; puVar3 = puVar3 + 2) {
      *puVar9 = *puVar3;
      puVar9[1] = puVar3[1];
      puVar9 = puVar9 + 2;
      puVar4 = DAT_0065b62c;
    }
    for (; param_1 != puVar4; param_1 = param_1 + 2) {
      puVar5[2] = *param_1;
      puVar5[3] = param_1[1];
      puVar5 = puVar5 + 2;
    }
  }
  if (DAT_0065b628 != (undefined4 *)0x0) {
    puVar9 = DAT_0065b628;
    if ((0xfff < ((int)DAT_0065b630 - (int)DAT_0065b628 & 0xfffffff8U)) &&
       (puVar9 = (undefined4 *)DAT_0065b628[-1],
       0x1f < (uint)((int)DAT_0065b628 + (-4 - (int)puVar9)))) {
LAB_004b349b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar9);
  }
  DAT_0065b628 = puVar11;
  DAT_0065b62c = puVar11 + uVar1 * 2;
  DAT_0065b630 = puVar11 + uVar7 * 2;
  return puVar2;
}


void __thiscall FUN_004b34b0(void *this,void *param_1)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff94;
  void *local_44 [5];
  uint local_30;
  undefined4 *local_2c;
  int local_28;
  char *local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff94,&param_1);
  FUN_00592d70(&local_2c,' ',in_stack_ffffff94);
  local_8._0_1_ = 1;
  iVar1 = local_28 - (int)local_2c >> 0x1f;
  iVar4 = (local_28 - (int)local_2c) / 0x18 + iVar1;
  if (iVar4 == iVar1) {
    FUN_00591070("DETAIL","Warning: null data attempting to be parsed as DateTime");
  }
  else if (iVar4 - iVar1 == 1) {
    FUN_004024e0(&stack0xffffff94,local_2c);
    FUN_004b36b0(this,in_stack_ffffff94);
  }
  else {
    FUN_004024e0(&stack0xffffff94,local_2c);
    FUN_004b36b0(this,in_stack_ffffff94);
    FUN_004024e0(local_44,local_2c + 6);
    local_8._0_1_ = 2;
    FUN_004024e0(&stack0xffffff94,local_44);
    FUN_00592d70(&local_20,':',in_stack_ffffff94);
    local_8._0_1_ = 3;
    if ((uint)((local_1c - (int)local_20) / 0x18) < 2) {
      FUN_00591070("DETAIL","Warning: bad data attempting to be parsed as date in DateTime");
      FUN_004025a0((int *)&local_20);
      if (local_30 < 0x10) goto LAB_004b365c;
      pvVar3 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar3 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      pcVar2 = local_20;
      if (0xf < *(uint *)(local_20 + 0x14)) {
        pcVar2 = *(char **)local_20;
      }
      iVar1 = atoi(pcVar2);
      *(int *)((int)this + 8) = iVar1;
      pcVar2 = local_20 + 0x18;
      if (0xf < *(uint *)(local_20 + 0x2c)) {
        pcVar2 = *(char **)pcVar2;
      }
      iVar1 = atoi(pcVar2);
      *(int *)((int)this + 4) = iVar1;
      FUN_004025a0((int *)&local_20);
      if (local_30 < 0x10) goto LAB_004b365c;
      pvVar3 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar3 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
LAB_004b365c:
  FUN_004025a0((int *)&local_2c);
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
  return;
}


void __thiscall FUN_004b36b0(void *this,void *param_1)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffbc;
  char *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc7b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffbc,&param_1);
  FUN_00592d70(&local_1c,'-',in_stack_ffffffbc);
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((uint)((local_18 - (int)local_1c) / 0x18) < 3) {
    FUN_00591070("DETAIL","Warning: bad data attempting to be parsed as date in DateTime");
  }
  else {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 0x14) = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 0x10) = iVar1 + -1;
    pcVar2 = local_1c + 0x30;
    if (0xf < *(uint *)(local_1c + 0x44)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 0xc) = iVar1;
  }
  FUN_004025a0((int *)&local_1c);
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
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004b37d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_48 [5];
  uint local_34;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc7e0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591070("DETAIL","Decrementing date/time by %d hours");
  FUN_00591e00((undefined1 *)local_30,"%02d-%02d-%02d %d:%d");
  local_8 = 0;
  FUN_00591070("DETAIL","Beginning date - %s");
  local_8 = 0xffffffff;
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
  iVar2 = *(int *)((int)this + 8);
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        iVar2 = 0x17;
        if (*(int *)((int)this + 0xc) < 1) {
          iVar1 = *(int *)((int)this + 0x10) + -1;
          *(int *)((int)this + 0x10) = iVar1;
          if (iVar1 < 0) {
            *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
            iVar1 = 0xb;
            *(undefined4 *)((int)this + 0x10) = 0xb;
          }
          *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(&DAT_005de00c + iVar1 * 4);
        }
      }
    } while (0 < param_1);
    *(int *)((int)this + 8) = iVar2;
  }
  FUN_00591e00((undefined1 *)local_48,"%02d-%02d-%02d %d:%d");
  local_8 = 1;
  FUN_00591070("DETAIL","New date - %s");
  if (0xf < local_34) {
    pvVar3 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar3 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004b3980(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = 0;
  puVar2 = (undefined4 *)*param_1;
  uVar1 = (uint)((int)param_1[1] + (3 - (int)puVar2)) >> 2;
  if ((undefined4 *)param_1[1] < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_00439930((void *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
    puVar2 = (undefined4 *)*param_1;
  }
  param_1[1] = (uint)puVar2;
  FUN_004028b0((int *)param_1[8],(int *)param_1[9]);
  param_1[9] = param_1[8];
  FUN_004028b0((int *)param_1[5],(int *)param_1[6]);
  param_1[6] = param_1[5];
  local_8 = 0;
  uVar1 = param_1[3];
  FUN_004132d0(*(int **)(uVar1 + 4));
  *(uint *)(param_1[3] + 4) = uVar1;
  *(uint *)param_1[3] = uVar1;
  *(uint *)(param_1[3] + 8) = uVar1;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}


int __fastcall FUN_004b3a50(int param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_10;
  
  uVar8 = 0;
  local_10 = 0;
  puVar3 = DAT_0065c270;
  do {
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar3;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 0x28) = 0;
    }
    if ((uint)(*(int *)(puVar3 + 0x24) - *(int *)(puVar3 + 0x20) >> 2) <= uVar8) {
      return local_10;
    }
    pbVar1 = *(byte **)(param_1 + 0x24);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar3;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 0x28) = 0;
    }
    pbVar4 = FUN_004143f0(*(byte **)(param_1 + 0x20),*(byte **)(param_1 + 0x24),
                          *(byte **)(*(int *)(puVar3 + 0x20) + uVar8 * 4));
    if (pbVar4 == pbVar1) {
      iVar5 = FUN_00412700();
      uVar9 = 0;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + uVar8 * 4);
      iVar6 = *(int *)(iVar5 + 0x48);
      if (*(int *)(iVar5 + 0x4c) - iVar6 >> 2 != 0) {
        do {
          cVar2 = FUN_004a23b0(*(void **)(iVar6 + uVar9 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          puVar3 = DAT_0065c270;
          if (cVar2 == '\0') goto LAB_004b3c47;
          uVar9 = uVar9 + 1;
          iVar6 = *(int *)(iVar5 + 0x48);
        } while (uVar9 < (uint)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2));
      }
      uVar9 = 0;
      iVar6 = *(int *)(iVar5 + 0x54);
      puVar3 = DAT_0065c270;
      if (*(int *)(iVar5 + 0x58) - iVar6 >> 2 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + uVar9 * 4);
          uVar10 = 0;
          iVar7 = *(int *)(iVar6 + 100);
          if (*(int *)(iVar6 + 0x68) - iVar7 >> 2 != 0) {
            do {
              cVar2 = FUN_004a23b0(*(void **)(iVar7 + uVar10 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              if (cVar2 == '\0') goto LAB_004b3c2d;
              uVar10 = uVar10 + 1;
              iVar6 = *(int *)(*(int *)(iVar5 + 0x54) + uVar9 * 4);
              iVar7 = *(int *)(iVar6 + 100);
            } while (uVar10 < (uint)(*(int *)(iVar6 + 0x68) - iVar7 >> 2));
          }
          local_10 = local_10 + 1;
LAB_004b3c2d:
          uVar9 = uVar9 + 1;
          iVar6 = *(int *)(iVar5 + 0x54);
          puVar3 = DAT_0065c270;
        } while (uVar9 < (uint)(*(int *)(iVar5 + 0x58) - iVar6 >> 2));
      }
    }
LAB_004b3c47:
    uVar8 = uVar8 + 1;
  } while( true );
}


byte __thiscall FUN_004b3c60(void *this,void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  uint in_stack_00000018;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b19f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00419820((void *)((int)this + 0xc),&local_1c,(byte *)&param_1);
  iVar4 = 0;
  local_14 = local_1c;
  if (local_1c != local_18) {
    do {
      iVar4 = iVar4 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
    } while (local_14 != local_18);
    if (iVar4 != 0) {
      pbVar1 = FUN_004a2bf0((void *)((int)this + 0xc),(byte *)&param_1);
      bVar3 = *pbVar1;
      goto LAB_004b3cd3;
    }
  }
  bVar3 = 0;
LAB_004b3cd3:
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
  return bVar3;
}


void __thiscall FUN_004b3d20(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *in_stack_ffffff2c;
  uint in_stack_ffffff38;
  undefined4 uStack_bc;
  undefined1 local_b0 [12];
  undefined **local_a4;
  byte *in_stack_ffffff6c;
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
  puStack_c = &LAB_005bc88f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(void **)((int)this + 100) != (void *)0x0) {
    if (param_2 < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18)) {
      FUN_004024e0(local_5c,(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 0x18));
      local_8 = 0;
      FUN_004024e0(&stack0xffffff6c,local_5c);
      uVar1 = FUN_004b4a70(this,in_stack_ffffff6c);
      puVar6 = (undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x40) = uVar1;
      *(undefined4 *)((int)this + 0x54) = 0;
      puVar3 = puVar6;
      if (0xf < *(uint *)((int)this + 0x58)) {
        puVar3 = (undefined4 *)*puVar6;
      }
      *(undefined1 *)puVar3 = 0;
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%s`7, by `!%s^");
      local_8._0_1_ = 1;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(puVar6,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`8originally published by `7%s^");
      local_8._0_1_ = 2;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(puVar6,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      if (*(char *)(*(int *)((int)this + 0x40) + 0xec) == '\0') {
        FUN_00403640(puVar6,&DAT_005ea510,1);
      }
      else {
        in_stack_ffffff6c = (byte *)0x4b3f10;
        FUN_00591e00((undefined1 *)local_2c,"%d %s, %d");
        local_8._0_1_ = 3;
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7on %s^");
        local_8._0_1_ = 4;
        puVar3 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar3 = (undefined4 *)*puVar2;
        }
        FUN_00403640(puVar6,puVar3,puVar2[4]);
        local_8._0_1_ = 3;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        local_8._0_1_ = 0;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_18) {
          pvVar7 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar7 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
      }
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2---^");
      local_8._0_1_ = 5;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(puVar6,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x40) + 0x34);
      if (0xf < *(uint *)(*(int *)((int)this + 0x40) + 0x48)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,puVar3);
      local_8._0_1_ = 6;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(puVar6,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"^---^");
      local_8._0_1_ = 7;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(puVar6,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      FUN_0042dcd0(*(int *)((int)this + 100));
      FUN_0042de40(*(void **)((int)this + 100),"`2Displaying `0\"%s\"`2...");
      FUN_0042dcd0(*(int *)((int)this + 100));
      local_a4 = std::_Func_impl_no_alloc<>::vftable;
      local_8._0_1_ = 8;
      FUN_004024e0(&uStack_bc,(undefined4 *)(*(int *)((int)this + 0x40) + 0x1c));
      local_8._0_1_ = 9;
      FUN_004024e0(&stack0xffffff2c,puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0042bdf0(*(void **)((int)this + 100),in_stack_ffffff2c);
      FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 0x18));
      iVar4 = FUN_004b4a70(this,in_stack_ffffff6c);
      uVar8 = 0;
      if (*(int *)(iVar4 + 0xe4) - *(int *)(iVar4 + 0xe0) >> 2 != 0) {
        do {
          FUN_004a3f20(*(int **)(*(int *)(iVar4 + 0xe0) + uVar8 * 4));
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(iVar4 + 0xe4) - *(int *)(iVar4 + 0xe0) >> 2));
      }
      pbVar5 = FUN_004a2bf0((void *)(param_1 + 0xc),(byte *)(iVar4 + 0x6c));
      local_1c = 0;
      *pbVar5 = 1;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"articles_read",0xd);
      local_8._0_1_ = 10;
      if (DAT_0065c294 == 0) {
        puVar6 = (undefined4 *)FUN_005adb0f(0x28);
        local_8._0_1_ = 0xb;
        DAT_0065c294 = FUN_0051e500(puVar6);
      }
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_a4 = (undefined **)0x4b42ab;
      FUN_00402690(&stack0xffffff68,&PTR_005ce008,0);
      local_8._0_1_ = 0xd;
      local_b0[0] = 0;
      uStack_bc = 0x4b42d4;
      FUN_00402690(local_b0,"articles_read",0xd);
      local_8._0_1_ = 0xe;
      pvVar7 = (void *)(in_stack_ffffff38 & 0xffffff00);
      FUN_00402690(&stack0xffffff38,&DAT_0060d818,4);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401a50(pvVar7);
      if (0xf < local_48) {
        pvVar7 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar7 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
    }
    else {
      FUN_0042de40(*(void **)((int)this + 100),"Invalid article number: %d");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
