#include "../ois_server.exe.h"


undefined1 * __cdecl FUN_004f84a0(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_004123f0();
  FUN_00558ae0(param_1);
  return param_1;
}


undefined4 * __cdecl FUN_004f84f0(undefined4 *param_1,int param_2)

{
  void *this;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  puVar1 = param_1;
  this = (void *)FUN_004123f0();
  FUN_005598a0(this,puVar1);
  return param_1;
}


undefined1 * __cdecl FUN_004f8540(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_004123f0();
  FUN_00559070(param_1);
  return param_1;
}


undefined1 * __cdecl FUN_004f8590(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_004024e0(param_1,&DAT_00655870);
  return param_1;
}


undefined1 * __cdecl FUN_004f85e0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_0049a040(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


uint * __cdecl FUN_004f8690(uint *param_1,int param_2)

{
  void *this;
  uint *puVar1;
  
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  puVar1 = param_1;
  this = (void *)FUN_00412700();
  FUN_00439f00(this,puVar1);
  return param_1;
}


undefined4 * __cdecl FUN_004f86e0(undefined4 *param_1,int param_2)

{
  undefined4 *this;
  
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  this = DAT_0065c2b4;
  if (DAT_0065c2b4 == (undefined4 *)0x0) {
    this = (undefined4 *)FUN_005adb0f(4);
    DAT_0065c2b4 = this;
    *this = 0xffffffff;
  }
  FUN_0043c080(this,param_1);
  return param_1;
}


undefined1 * __cdecl FUN_004f8750(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  iVar1 = FUN_00402f60();
  FUN_004024e0(param_1,(undefined4 *)(iVar1 + 0xc));
  return param_1;
}


undefined1 * __cdecl FUN_004f87a0(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_004024e0(param_1,&DAT_006558a0);
  return param_1;
}


undefined1 * __cdecl FUN_004f87f0(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_004024e0(param_1,&DAT_00655888);
  return param_1;
}


uint * __cdecl FUN_004f8840(uint *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00486550(param_1,param_3);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f88f0(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = DAT_0065c288;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = iVar1;
      DAT_0065c288 = FUN_00485f60(puVar2);
    }
    local_8 = 0xffffffff;
    if (param_3 != 1) {
      iVar1 = *(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_3 * 0x44);
      if (iVar1 == 1) {
        FUN_004024e0(param_1,(undefined4 *)(DAT_0065c288 + 0x54));
        ExceptionList = local_10;
        return param_1;
      }
      if (iVar1 == 2) {
        FUN_004024e0(param_1,(undefined4 *)(DAT_0065c288 + 0x3c));
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  ExceptionList = local_10;
  return param_1;
}


uint * __cdecl FUN_004f89f0(uint *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_0048bef0(DAT_0065c288,param_1,param_3);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8aa0(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if (*(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_3 * 0x44) == 0) {
      uVar3 = 0x6f;
      pcVar2 = 
      "Welcome to one of many `0Omega Automated Trading Screens`7.\n\nYour items are on the left, ours are on the right."
      ;
      goto LAB_004f8b22;
    }
  }
  uVar3 = 0;
  pcVar2 = (char *)&PTR_005ce008;
LAB_004f8b22:
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,pcVar2,uVar3);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8b50(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_0048d1b0(DAT_0065c288,param_1,param_3);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8c00(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_0048fb20(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8cb0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00491d30(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined4 * __cdecl FUN_004f8d60(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00490570(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8e10(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_0049b140(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8ec0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00499a70(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f8f70(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_004926d0(param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f9020(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00492db0(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f90d0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_004932c0(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f9180(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00494810(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f9230(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00494f90(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f92e0(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = FUN_00485f60(puVar3);
    }
    if ((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                      *(int *)(DAT_0065c288 + 0x114) * 4);
      if (iVar2 == 0) {
        uVar6 = 0x11;
        pcVar5 = "cargopod_none.png";
      }
      else {
        iVar4 = 1;
        do {
          if (*(char *)(iVar2 + iVar4) == '\0') {
            if (*(char *)(iVar2 + 2) != '\0') {
              uVar6 = 0x15;
              pcVar5 = "cargopod_shielded.png";
              goto LAB_004f93da;
            }
            cVar1 = *(char *)(iVar2 + 1);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *param_1 = 0;
            if (cVar1 == '\0') {
              uVar6 = 0x13;
              pcVar5 = "cargopod_normal.png";
            }
            else {
              uVar6 = 0x11;
              pcVar5 = "cargopod_temp.png";
            }
            goto LAB_004f93f0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        uVar6 = 0x10;
        pcVar5 = "cargopod_all.png";
      }
      goto LAB_004f93da;
    }
  }
  uVar6 = 0;
  pcVar5 = (char *)&PTR_005ce008;
LAB_004f93da:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
LAB_004f93f0:
  local_8 = 0xffffffff;
  FUN_00402690(param_1,pcVar5,uVar6);
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __cdecl FUN_004f9410(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfbe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00498190(DAT_0065c288,param_1);
  ExceptionList = local_10;
  return param_1;
}


void __cdecl FUN_004f94c0(uint *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined3 extraout_var;
  uint uVar5;
  undefined4 *puVar6;
  char ****ppppcVar7;
  byte *pbVar8;
  void *pvVar9;
  char ****ppppcVar10;
  void **ppvVar11;
  undefined1 *local_7c;
  byte local_75;
  void *local_74 [5];
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bfc48;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 0x174);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == 4)) {
      FUN_004024e0(local_2c,(undefined4 *)(iVar1 + 0x80));
      local_8._0_1_ = 1;
      ppppcVar10 = local_2c;
      if (0xf < local_18) {
        ppppcVar10 = (char ****)local_2c[0];
      }
      ppppcVar7 = local_2c;
      if (0xf < local_18) {
        ppppcVar7 = (char ****)local_2c[0];
      }
      FUN_00413ec0(&local_7c,tolower_exref,(char *)ppppcVar7,(char *)((int)ppppcVar10 + local_1c),
                   (undefined1 *)ppppcVar10);
      ppvVar11 = local_74;
      FUN_00591e00((undefined1 *)ppvVar11,"%s_has_unclamped_cargo");
      local_8._0_1_ = 2;
      local_7c = &stack0xffffff58;
      FUN_004024e0(&stack0xffffff58,local_74);
      local_8._0_1_ = 3;
      puVar3 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,2);
      local_75 = FUN_004a1150(puVar3,ppvVar11);
      piVar4 = (int *)FUN_00591e00((undefined1 *)local_44,"%s_has_downloaded_data");
      FUN_00413230(local_74,piVar4);
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      local_7c = &stack0xffffff58;
      FUN_004024e0(&stack0xffffff58,local_74);
      local_8._0_1_ = 4;
      puVar3 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,2);
      bVar2 = FUN_004a1150(puVar3,ppvVar11);
      local_7c = (undefined1 *)CONCAT31(extraout_var,bVar2);
      if (bVar2 == 0) {
        iVar1 = *(int *)(param_2 + 0x174);
        pbVar8 = (byte *)(iVar1 + 0xb0);
        if (0xf < *(uint *)(iVar1 + 0xc4)) {
          pbVar8 = *(byte **)(iVar1 + 0xb0);
        }
        uVar5 = FUN_004031f0(pbVar8,*(uint *)(iVar1 + 0xc0),(byte *)&PTR_005ce008,0);
        local_7c = (undefined1 *)((uint)local_7c & 0xff);
        if ((char)uVar5 != '\0') {
          local_7c = (undefined1 *)0x1;
        }
      }
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%VESSEL : `!%s\n");
      local_8._0_1_ = 5;
      puVar3 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_5c,puVar3,puVar6[4]);
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%REGO   : `!%s\n\n");
      local_8._0_1_ = 6;
      puVar3 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_5c,puVar3,puVar6[4]);
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      FUN_00403640(&local_5c,"`%Power: `@OFFLINE\n",0x13);
      FUN_00403640(&local_5c,"`%REACT: `@OFFLINE\n",0x13);
      FUN_00403640(&local_5c,"`%IFF  : `^EMERGENCY POWER ONLY\n",0x20);
      FUN_00403640(&local_5c,"`%LIFE.: `$Minimum\n\n",0x14);
      puVar6 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,"`%%CARGO MAGNETIC CLAMPS  : `%s\n");
      local_8._0_1_ = 7;
      puVar3 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_5c,puVar3,puVar6[4]);
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      puVar6 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,"`%%EMERGENCY LOG DATA     : `%s\n");
      local_8 = CONCAT31(local_8._1_3_,8);
      puVar3 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_5c,puVar3,puVar6[4]);
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      if (0xf < local_60) {
        pvVar9 = local_74[0];
        if ((0xfff < local_60 + 1) &&
           (pvVar9 = *(void **)((int)local_74[0] + -4),
           0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      if (0xf < local_18) {
        ppppcVar10 = (char ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar10 = (char ****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar10);
      }
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_5c;
    param_1[1] = uStack_58;
    param_1[2] = uStack_54;
    param_1[3] = uStack_50;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __cdecl FUN_004f9960(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,
               "`%Objects in Space`7\n\nElissa Harris - Designer, Lead Programmer\nLeigh Harris - Producer, Lead Designer\nMathew Purchase - Lead Artist\nJennifer Scheurle - Concept Artist / Physical Spaceship Controller Designer\n\n`%Writers`7\n\nLeigh Harris\nC B Johnson\nDaniel McMahon\nNikolai Goundry\nElissa Harris\nLouise Bennett\nShay Leighton\nImogen Dall\nRebecca Cheers\nTalia Enright\nJay Mitra\nAlli Reed\nCharlotte Bradley\nDavid Hollingworth\nLucy O\'Brien\n\n`%Additional Sound by`7\n\nPiers Gilbertson - Sound Designer\nMichael Bates - Sound Designer\n\n`%Additional Art by`7\n\nAri Sim\nKyle McKellar\n\n`%Physical Spaceship Controller Construction`7\n\nElizabeth Wilkie\n\n`%Music`7\n\nBohsef - Pulse / Sailor\nEliot Fish - Hash Key / Afternoon Moon\nAdin Milo - Space Love / No Return\nTamara Violet Partridge - Objects in Space\nMaize Wallin - Tinker\nMaskedsound - Endless Void\nDanii Johnstone - Dichromatic / Cassandra Voyage\nLuke Murray and Zachary Carlsson - Deep Horizon\nEdwin Montgomery - Synth Light\nEdFokks - Station 55\nSpooky Castle Music - Asteroids\n\n`%Testers`7\n\nAll our amazing beta testers\nAndrew Karvelis\nErvin Nunez\nMartijn de Reeper\nNicholas Amzallag\nTaylor Tilbury\nXavier Hancock\nSydney Academy of Interactive Entertainment Design Class of 2015\n\n`%Expo Helpers`7\n\nKatie Williams\nBrenna Anderson\nBrett Morris\nRyan McGlinn\nRyan Sturges\nSophie Mackey\n\n`%Special Thanks`7\n\nChris Smoak\nKrister Collin\nJasmine Marshman\nGuy Blomberg\nNatasha Wolf\nMatt Ditton\nKurtis Wakefield\nTony Reed\nDan Hindes\nKamina Vincent\nMarc Chee\nTor Sovik\nJohn Kane\nAnthea Freshwater\nClaire Hosking\nIGDA Sydney\nPaul Nunes\nNel Wolf\nGrant Barrie\nSMG Studio\nSurprise Attack Games\nReedPOP\nThe Australian Centre for the Moving Image\nHelen Stuckey\nSerena Bentley\nThe Academy of Interactive Entertainment\nJeff Lockhart\nJohn Polson\nEpiphany Games\n\n`%All our dedicated fans, friends and family`7\n\n`%Made possible with funding from Screen NSW`7\n\n`%505 Games`7\n"
               ,0x766);
  return param_1;
}


void * __cdecl FUN_004f9990(void *param_1)

{
  FUN_004024e0(param_1,(undefined4 *)(DAT_0065b5cc + 0x158));
  return param_1;
}


void __cdecl FUN_004f99b0(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  bool bVar5;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005bfc89;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar5 = param_2 == 0;
  if (bVar5) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&PTR_005ce008,0);
    ppvVar3 = local_2c;
  }
  else {
    ppvVar3 = (void **)FUN_005279e0(*(void **)(param_2 + 0x224),(undefined1 *)local_44);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar4 = ppvVar3[1];
  pvVar1 = ppvVar3[2];
  pvVar2 = ppvVar3[3];
  *param_1 = *ppvVar3;
  param_1[1] = pvVar4;
  param_1[2] = pvVar1;
  param_1[3] = pvVar2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(ppvVar3 + 4);
  ppvVar3[4] = (void *)0x0;
  ppvVar3[5] = (void *)0xf;
  *(undefined1 *)ppvVar3 = 0;
  if (bVar5) {
    if (0xf < uStack_18) {
      pvVar4 = local_2c[0];
      if (0xfff < uStack_18 + 1) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar4);
    }
  }
  if ((!bVar5) && (0xf < local_30)) {
    pvVar4 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar4 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
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


void __cdecl FUN_004f9b00(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *in_stack_ffffff78;
  void *local_5c [5];
  uint local_48;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bfd40;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_8 = 0;
  if (*(char *)(DAT_0065b444 + 0xa4) == '\0') {
    pbVar8 = (byte *)((int)DAT_0065b5cc + 0xb4);
    pbVar6 = pbVar8;
    if (0xf < *(uint *)((int)DAT_0065b5cc + 200)) {
      pbVar6 = *(byte **)pbVar8;
    }
    uVar2 = FUN_004031f0(pbVar6,*(uint *)((int)DAT_0065b5cc + 0xc4),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar8);
      iVar3 = FUN_004a82e0(in_stack_ffffff78);
      if ((*(int *)(DAT_0065b444 + 0x74) == -1) || (*(int *)(iVar3 + 0x6c) != 1)) {
LAB_004fa1a8:
        pvVar7 = (void *)(iVar3 + 0x48);
        if (0xf < *(uint *)(iVar3 + 0x5c)) {
          pvVar7 = *(void **)(iVar3 + 0x48);
        }
        FUN_00403640(&local_44,pvVar7,*(uint *)(iVar3 + 0x58));
        FUN_00403640(&local_44,&DAT_005e310c,2);
        if ((*(int *)(iVar3 + 0x6c) == 2) && (*(int *)(iVar3 + 0x68) != 0)) {
          if (*(float *)(iVar3 + 0x3c4) == -1.0) {
            FUN_00403640(&local_44,"`!Scenario never completed",0x1a);
          }
          else {
            FUN_00593280((undefined1 *)local_5c);
            local_8._0_1_ = 0xe;
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!Best time  : %s\n");
            local_8._0_1_ = 0xf;
            puVar4 = puVar5;
            if (0xf < (uint)puVar5[5]) {
              puVar4 = (undefined4 *)*puVar5;
            }
            FUN_00403640(&local_44,puVar4,puVar5[4]);
            local_8._0_1_ = 0xe;
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
            local_8._0_1_ = 0;
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
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
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Hull Damage: %d%%\n");
            local_8._0_1_ = 0x10;
            puVar4 = puVar5;
            if (0xf < (uint)puVar5[5]) {
              puVar4 = (undefined4 *)*puVar5;
            }
            FUN_00403640(&local_44,puVar4,puVar5[4]);
            local_8._0_1_ = 0;
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
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Torps Fired: %d\n");
            local_8 = CONCAT31(local_8._1_3_,0x11);
            puVar4 = puVar5;
            if (0xf < (uint)puVar5[5]) {
              puVar4 = (undefined4 *)*puVar5;
            }
            FUN_00403640(&local_44,puVar4,puVar5[4]);
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
        }
      }
      else {
        FUN_004127d0();
        cVar1 = FUN_004b7390();
        if (cVar1 == '\0') goto LAB_004fa1a8;
        iVar3 = *(int *)(DAT_0065b444 + 0x74);
        FUN_004127d0();
        iVar3 = FUN_004b7d60(iVar3);
        if (*(int *)(iVar3 + 0x100) < 10) {
          FUN_00403640(&local_44,
                       "`$Note: This update changes the balance of a lot of engineering components. Your ships from old save games may handle differently than you expect.\n\n"
                       ,0x94);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0%s\n");
        local_8._0_1_ = 1;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Name  : `0%s\n");
        local_8._0_1_ = 2;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Ship  : `%%%s\n");
        local_8._0_1_ = 3;
        FUN_00403490(&local_44,puVar4);
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
        FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar3 + 100));
        FUN_004a80d0(in_stack_ffffff78);
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Class : `%%%s\n");
        local_8._0_1_ = 4;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Game  : `%%%s\n");
        local_8._0_1_ = 5;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Sandbx: `%%%s\n");
        local_8._0_1_ = 6;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Econ. : `%%%s\n");
        local_8._0_1_ = 7;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Combat: `%%%s\n");
        local_8._0_1_ = 8;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Game  : `%%%s\n");
        local_8._0_1_ = 9;
        FUN_00403490(&local_44,puVar4);
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
        FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar3 + 0xc4));
        FUN_004a6de0(in_stack_ffffff78);
        FUN_004a7280(DAT_0065b5cc,*(int *)(iVar3 + 0x104));
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Docked: `!%s\n");
        local_8._0_1_ = 10;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Sector: `!%s\n");
        local_8._0_1_ = 0xb;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Money : `$%d\n");
        local_8._0_1_ = 0xc;
        FUN_00403490(&local_44,puVar4);
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
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Ver.  : `!%s\n");
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_00403490(&local_44,puVar4);
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
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_44;
      param_1[1] = uStack_40;
      param_1[2] = uStack_3c;
      param_1[3] = uStack_38;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
      goto LAB_004fa3f7;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  if (0xf < uStack_30) {
    pvVar7 = local_44;
    if ((0xfff < uStack_30 + 1) &&
       (pvVar7 = *(void **)((int)local_44 + -4), 0x1f < (uint)((int)local_44 + (-4 - (int)pvVar7))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
LAB_004fa3f7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __cdecl FUN_004fa420(undefined1 *param_1)

{
  if (DAT_0065c2b0 == (undefined4 *)0x0) {
    DAT_0065c2b0 = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2b0 = 0xffffffff;
  }
  FUN_004ac610(param_1);
  return param_1;
}


undefined1 * __cdecl FUN_004fa460(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bfd89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    puVar1 = DAT_0065c258;
    if (DAT_0065c258 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)FUN_005adb0f(0x38);
      DAT_0065c258 = puVar1;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0xf;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      *(undefined4 *)(puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 0x30) = 0;
      *(undefined4 *)(puVar1 + 0x34) = 0;
    }
    if ((uint)((*(int *)(puVar1 + 0x28) - *(int *)(puVar1 + 0x24)) / 0x18) <= uVar5) break;
    if (0 < (int)uVar5) {
      FUN_004034f0(param_1,10);
      puVar1 = DAT_0065c258;
    }
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)FUN_005adb0f(0x38);
      DAT_0065c258 = puVar1;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0xf;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      *(undefined4 *)(puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 0x30) = 0;
      *(undefined4 *)(puVar1 + 0x34) = 0;
    }
    puVar2 = (undefined4 *)(*(int *)(puVar1 + 0x24) + iVar4);
    puVar3 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar3,puVar2[4]);
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x18;
  }
  ExceptionList = local_10;
  return param_1;
}


void __cdecl FUN_004fa5f0(uint *param_1,int param_2)

{
  undefined1 uVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  float local_5c;
  float local_58;
  uint *local_54;
  float local_50;
  uint *local_4c;
  float local_48;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bfdfd;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_1;
  local_54 = param_1;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xd4) == 1)) {
    if (*(int *)(param_2 + 0x1c8) - *(int *)(param_2 + 0x1c4) >> 5 == 0) {
      local_48 = -1.0;
    }
    else {
      local_50 = (float)*(double *)(param_2 + 0x28);
      local_4c = (uint *)(float)*(double *)(param_2 + 0x30);
      local_8 = 0;
      local_4c = (uint *)cocos2d::Vec2::getDistanceSq
                                   ((Vec2 *)(*(int *)(param_2 + 0x1c4) + 8),(Vec2 *)&local_50);
      fVar2 = (float)(0x5f3759df - ((uint)local_4c >> 1));
      local_48 = (1.5 - (float)local_4c * 0.5 * fVar2 * fVar2) * fVar2 * (float)local_4c;
    }
    fVar2 = 0.0;
    if (0.0 < local_48) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      FUN_00403cb0(param_2);
      local_48 = local_48 / fVar2;
      FUN_00403cb0(param_2);
      if (fVar2 == 0.0) {
        FUN_00402690(&local_2c,"`7WP ETA: `8n/a",0xf);
      }
      else if (2.0 <= local_48) {
        if (120.0 <= local_48) {
          piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,"`7WP ETA: ~%dm %.0fs");
        }
        else {
          piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,"`7WP ETA: ~%.0fs");
        }
        FUN_00413230(&local_2c,piVar3);
        if (0xf < local_30) {
          pvVar5 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004fa7d0;
          FUN_005adb3f(pvVar5);
        }
      }
      else {
        FUN_00402690(&local_2c,"`7WP ETA: <2s",0xd);
      }
      if (1 < (uint)(*(int *)(param_2 + 0x1c8) - *(int *)(param_2 + 0x1c4) >> 5)) {
        FUN_00403640(&local_2c,&DAT_005e75f8,1);
        iVar7 = *(int *)(param_2 + 0x1c4);
        local_48 = 0.0;
        if (*(int *)(param_2 + 0x1c8) - iVar7 >> 5 != 0) {
          uVar8 = 0;
          do {
            if (uVar8 == 0) {
              local_5c = (float)*(double *)(param_2 + 0x28);
              local_58 = (float)*(double *)(param_2 + 0x30);
              local_8._0_1_ = 2;
              fVar2 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_5c,(Vec2 *)(iVar7 + 8));
              local_8._0_1_ = 1;
            }
            else {
              fVar2 = cocos2d::Vec2::getDistanceSq
                                ((Vec2 *)(uVar8 * 0x20 + iVar7 + -0x18),
                                 (Vec2 *)(iVar7 + 8 + uVar8 * 0x20));
            }
            uVar8 = uVar8 + 1;
            local_4c = (uint *)(0x5f3759df - ((uint)fVar2 >> 1));
            iVar7 = *(int *)(param_2 + 0x1c4);
            local_48 = (1.5 - fVar2 * 0.5 * (float)local_4c * (float)local_4c) * (float)local_4c *
                       fVar2 + local_48;
            param_1 = local_54;
          } while (uVar8 < (uint)(*(int *)(param_2 + 0x1c8) - iVar7 >> 5));
        }
        local_5c = 0.0;
        local_58 = 0.0;
        local_8._0_1_ = 3;
        local_54 = (uint *)cocos2d::Vec2::getDistance((Vec2 *)(param_2 + 0x118),(Vec2 *)&local_5c);
        local_48 = local_48 / (float)local_54;
        local_5c = 0.0;
        local_58 = 0.0;
        local_8._0_1_ = 4;
        local_54 = (uint *)cocos2d::Vec2::getDistance((Vec2 *)(param_2 + 0x118),(Vec2 *)&local_5c);
        local_8._0_1_ = 1;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 1;
        if ((float)local_54 == 0.0) {
          FUN_00402690(&local_2c,"`7Dest ETA: `8n/a",0x11);
        }
        else if (2.0 <= local_48) {
          if (120.0 <= local_48) {
            local_8._0_1_ = uVar1;
            puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Dest ETA: ~%.0fm %.0fs");
            local_8._0_1_ = 6;
            puVar6 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar6 = (undefined4 *)*puVar4;
            }
            FUN_00403640(&local_2c,puVar6,puVar4[4]);
            if (0xf < local_30) {
              if (0xfff < local_30 + 1) {
                uVar8 = (int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4));
                local_44[0] = *(void **)((int)local_44[0] + -4);
                goto joined_r0x004fab1e;
              }
              goto LAB_004fab24;
            }
          }
          else {
            puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Dest ETA: ~%.0fs");
            local_8._0_1_ = 5;
            puVar6 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar6 = (undefined4 *)*puVar4;
            }
            FUN_00403640(&local_2c,puVar6,puVar4[4]);
            if (0xf < local_30) {
              if (0xfff < local_30 + 1) {
                uVar8 = (int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4));
                local_44[0] = *(void **)((int)local_44[0] + -4);
joined_r0x004fab1e:
                if (0x1f < uVar8) {
LAB_004fa7d0:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
LAB_004fab24:
              FUN_005adb3f(local_44[0]);
            }
          }
        }
        else {
          FUN_00403640(&local_2c,"`7Dest ETA: <2s",0xf);
        }
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
      goto LAB_004fab6e;
    }
  }
  local_8._1_3_ = 0xffffff;
  local_8._0_1_ = 0xff;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
LAB_004fab6e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004fab90(undefined1 *param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  Vec2 *pVVar5;
  float fVar6;
  uint in_stack_ffffff90;
  void *pvVar7;
  Vec2 local_48 [8];
  undefined1 *local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005bfec6;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  local_3c = 1;
  pvVar7 = (void *)(in_stack_ffffff90 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,&PTR_005ce008,0);
  cVar2 = FUN_004cd270((int)param_2,0,pvVar7);
  if (cVar2 == '\0') goto LAB_004fb19d;
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cur. Ang.: `0%.0f^\n");
  local_8 = 1;
  puVar4 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar4 = (undefined4 *)*puVar3;
  }
  FUN_00403640(param_1,puVar4,puVar3[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    puVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar4 = (undefined4 *)local_2c[0][-1], 0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4))
       )) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
  local_38 = 0.0;
  local_34 = 0.0;
  local_8 = 2;
  local_30 = cocos2d::Vec2::getDistance((Vec2 *)((int)param_2 + 0x118),(Vec2 *)&local_38);
  local_8 = local_8 & 0xffffff00;
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cur. Spd.: `0%.2fGm/s\n");
  local_8 = 3;
  puVar4 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar4 = (undefined4 *)*puVar3;
  }
  FUN_00403640(param_1,puVar4,puVar3[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    puVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar4 = (undefined4 *)local_2c[0][-1], 0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4))
       )) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
  pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,&PTR_005ce008,0);
  cVar2 = FUN_004cbc80((int)param_2,0,pvVar7);
  if (cVar2 == '\0') {
    if (*(void **)((int)param_2 + 0x194) == (void *)0x0) {
      FUN_00403640(param_1,"`8Sel. Dst.: n/a\n",0x11);
      FUN_00403640(param_1,"`8Sel. Brg.: n/a\n",0x11);
      FUN_00403640(param_1,"`8Sel. Loc.: n/a",0x10);
      goto LAB_004fb19d;
    }
    pVVar5 = FUN_00508ff0(*(void **)((int)param_2 + 0x194),local_48);
    local_38 = (float)*(double *)((int)param_2 + 0x28);
    local_34 = (float)*(double *)((int)param_2 + 0x30);
    local_8._0_1_ = 10;
    local_8._1_3_ = 0;
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,pVVar5);
    local_30 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Dst.: `!%.1fGm\n");
    local_8._0_1_ = 0xb;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = CONCAT31(local_8._1_3_,10);
    if (0xf < local_18) {
      puVar4 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar4 = (undefined4 *)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4)))) goto LAB_004faec9;
      FUN_005adb3f(puVar4);
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00508ff0(*(void **)((int)param_2 + 0x194),(Vec2 *)&stack0xffffffa0);
    FUN_0050b390(param_2,(float)puVar4);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Brg.: `!%.0f^\n");
    local_8 = 0xc;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      puVar4 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar4 = (undefined4 *)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4)))) goto LAB_004faec9;
      FUN_005adb3f(puVar4);
    }
    FUN_00508ff0(*(void **)((int)param_2 + 0x194),local_48);
    local_8 = 0xd;
    FUN_00508ff0(*(void **)((int)param_2 + 0x194),(Vec2 *)&local_38);
    local_8._0_1_ = 0xe;
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Loc.: `!%.0f,%.0f\n");
    local_8 = CONCAT31(local_8._1_3_,0xf);
    uVar1 = puVar4[5];
joined_r0x004fb15c:
    puVar3 = puVar4;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar3,puVar4[4]);
  }
  else {
    FUN_004ec170((int)param_2);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Dst.: `!%.1fGm\n");
    local_8 = 4;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      puVar4 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar4 = (undefined4 *)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar4);
    }
    FUN_004ec370(param_2);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Brg.: `!%.0f^\n");
    local_8 = 5;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      puVar4 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar4 = (undefined4 *)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar4);
    }
    if (*(int *)((int)param_2 + 0x1a4) != 0) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Loc.: `!%.0f,%.0f\n");
      local_8 = 6;
      uVar1 = puVar4[5];
      goto joined_r0x004fb15c;
    }
    if (*(int *)((int)param_2 + 0x19c) != 0) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Loc.: `!%.0f,%.0f\n");
      local_8 = 7;
      uVar1 = puVar4[5];
      goto joined_r0x004fb15c;
    }
    if ((*(float *)((int)param_2 + 0x1b8) == -9999.0) &&
       (*(float *)((int)param_2 + 0x1bc) == -9999.0)) goto LAB_004fb19d;
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sel. Loc.: `!%.0f,%.0f\n");
    local_8 = 8;
    FUN_00403490(param_1,puVar4);
  }
  if (0xf < local_18) {
    puVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar4 = (undefined4 *)local_2c[0][-1], 0x1f < (uint)((int)local_2c[0] + (-4 - (int)puVar4))
       )) {
LAB_004faec9:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
LAB_004fb19d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void * __cdecl FUN_004fb1c0(void *param_1)

{
  FUN_004024e0(param_1,(undefined4 *)(DAT_0065b444 + 0x164));
  return param_1;
}


void __cdecl FUN_004fb1e0(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  byte ***pppbVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int *piVar13;
  int *piVar14;
  byte *pbVar15;
  byte *in_stack_ffffff60;
  undefined *puVar16;
  uint local_6c;
  byte ***local_5c [4];
  uint local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bff48;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (byte ***)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  uStack_7 = 0;
  if ((*(char *)(DAT_0065b444 + 0x71) != '\0') &&
     (iVar4 = FUN_00402370(), *(int *)(iVar4 + 0x20) != 0)) {
    pbVar15 = (byte *)(DAT_0065b5cc + 0x25c);
    pbVar9 = pbVar15;
    if (0xf < *(uint *)(DAT_0065b5cc + 0x270)) {
      pbVar9 = *(byte **)pbVar15;
    }
    uVar5 = FUN_004031f0(pbVar9,*(uint *)(DAT_0065b5cc + 0x26c),(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      FUN_004024e0(&stack0xffffff60,(undefined4 *)pbVar15);
      FUN_0055eaf0(local_5c,(undefined4 *)in_stack_ffffff60);
      local_8 = 1;
      piVar1 = *(int **)(DAT_0065b5cc + 0x254);
      for (piVar13 = *(int **)(DAT_0065b5cc + 0x250); piVar13 != piVar1; piVar13 = piVar13 + 1) {
        pbVar9 = (byte *)*piVar13;
        ppppbVar8 = local_5c;
        if (0xf < local_48) {
          ppppbVar8 = (byte ****)local_5c[0];
        }
        pbVar15 = pbVar9;
        if (0xf < *(uint *)(pbVar9 + 0x14)) {
          pbVar15 = *(byte **)pbVar9;
        }
        uVar5 = FUN_004031f0(pbVar15,*(uint *)(pbVar9 + 0x10),(byte *)ppppbVar8,local_4c);
        if ((char)uVar5 != '\0') {
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Ship : `!%s\n");
          local_8 = 2;
          puVar11 = puVar6;
          if (0xf < (uint)puVar6[5]) {
            puVar11 = (undefined4 *)*puVar6;
          }
          FUN_00403640(&local_2c,puVar11,puVar6[4]);
          local_8 = 1;
          if (0xf < local_30) {
            pvVar12 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar12 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
            FUN_005adb3f(pvVar12);
          }
          FUN_004024e0(&stack0xffffff60,(undefined4 *)(pbVar9 + 0x30));
          FUN_004a80d0(in_stack_ffffff60);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Class: `!%s\n");
          local_8 = 3;
          puVar11 = puVar6;
          if (0xf < (uint)puVar6[5]) {
            puVar11 = (undefined4 *)*puVar6;
          }
          FUN_00403640(&local_2c,puVar11,puVar6[4]);
          local_8 = 1;
          if (0xf < local_30) {
            pvVar12 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar12 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
            FUN_005adb3f(pvVar12);
          }
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Rego : `!%s\n");
          local_8 = 4;
          puVar11 = puVar6;
          if (0xf < (uint)puVar6[5]) {
            puVar11 = (undefined4 *)*puVar6;
          }
          FUN_00403640(&local_2c,puVar11,puVar6[4]);
          local_8 = 1;
          if (0xf < local_30) {
            pvVar12 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar12 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
            FUN_005adb3f(pvVar12);
          }
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Team : `%c%d\n");
          local_8 = 5;
          puVar11 = puVar6;
          if (0xf < (uint)puVar6[5]) {
            puVar11 = (undefined4 *)*puVar6;
          }
          FUN_00403640(&local_2c,puVar11,puVar6[4]);
          local_8 = 1;
          if (0xf < local_30) {
            pvVar12 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar12 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
            FUN_005adb3f(pvVar12);
          }
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Torps: `$%d\n");
          local_8 = 6;
          puVar11 = puVar6;
          if (0xf < (uint)puVar6[5]) {
            puVar11 = (undefined4 *)*puVar6;
          }
          FUN_00403640(&local_2c,puVar11,puVar6[4]);
          local_8 = 1;
          if (0xf < local_30) {
            pvVar12 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar12 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
            FUN_005adb3f(pvVar12);
          }
          bVar2 = false;
          FUN_00403640(&local_2c,"`%Crew : ",9);
          local_6c = 0;
          piVar14 = *(int **)(DAT_0065b5cc + 0x244);
          uVar5 = (uint)((int)*(int **)(DAT_0065b5cc + 0x248) + (3 - (int)piVar14)) >> 2;
          if (*(int **)(DAT_0065b5cc + 0x248) < piVar14) {
            uVar5 = 0;
          }
          if (uVar5 == 0) {
LAB_004fb5dc:
            FUN_00403640(&local_2c,"`8[none]",8);
          }
          else {
            do {
              puVar11 = (undefined4 *)*piVar14;
              pbVar15 = pbVar9 + 0x18;
              if (0xf < *(uint *)(pbVar9 + 0x2c)) {
                pbVar15 = *(byte **)(pbVar9 + 0x18);
              }
              pbVar10 = (byte *)(puVar11 + 6);
              if (0xf < (uint)puVar11[0xb]) {
                pbVar10 = (byte *)puVar11[6];
              }
              uVar7 = FUN_004031f0(pbVar10,puVar11[10],pbVar15,*(uint *)(pbVar9 + 0x28));
              if ((char)uVar7 != '\0') {
                if (bVar2) {
                  puVar16 = &DAT_00618b30;
                }
                else {
                  puVar16 = &DAT_00618b34;
                }
                FUN_00403640(&local_2c,puVar16,2);
                bVar2 = true;
                puVar6 = puVar11;
                if (0xf < (uint)puVar11[5]) {
                  puVar6 = (undefined4 *)*puVar11;
                }
                FUN_00403640(&local_2c,puVar6,puVar11[4]);
              }
              local_6c = local_6c + 1;
              piVar14 = piVar14 + 1;
            } while (local_6c != uVar5);
            if (!bVar2) goto LAB_004fb5dc;
          }
          FUN_00403640(&local_2c,&DAT_005e75f8,1);
          pbVar15 = pbVar9 + 0x48;
          if (0xf < *(uint *)(pbVar9 + 0x5c)) {
            pbVar15 = *(byte **)pbVar15;
          }
          uVar5 = FUN_004031f0(pbVar15,*(uint *)(pbVar9 + 0x58),(byte *)&PTR_005ce008,0);
          if ((char)uVar5 == '\0') {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Cfg. :\n`$%s");
            local_8 = 7;
            puVar11 = puVar6;
            if (0xf < (uint)puVar6[5]) {
              puVar11 = (undefined4 *)*puVar6;
            }
            FUN_00403640(&local_2c,puVar11,puVar6[4]);
            local_8 = 1;
            if (0xf < local_30) {
              pvVar12 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar12 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
              FUN_005adb3f(pvVar12);
            }
          }
          else {
            FUN_00403640(&local_2c,"`%%Cfg. :`!Stock\n",0x11);
          }
        }
      }
      ppppbVar8 = &local_2c;
      if (0xf < uStack_18) {
        ppppbVar8 = (byte ****)local_2c;
      }
      uVar5 = FUN_004031f0((byte *)ppppbVar8,local_1c,(byte *)&PTR_005ce008,0);
      if ((char)uVar5 != '\0') {
        piVar1 = *(int **)(DAT_0065b5cc + 0x248);
        for (piVar13 = *(int **)(DAT_0065b5cc + 0x244); piVar13 != piVar1; piVar13 = piVar13 + 1) {
          pbVar9 = (byte *)*piVar13;
          ppppbVar8 = local_5c;
          if (0xf < local_48) {
            ppppbVar8 = (byte ****)local_5c[0];
          }
          pbVar15 = pbVar9;
          if (0xf < *(uint *)(pbVar9 + 0x14)) {
            pbVar15 = *(byte **)pbVar9;
          }
          uVar5 = FUN_004031f0(pbVar15,*(uint *)(pbVar9 + 0x10),(byte *)ppppbVar8,local_4c);
          if ((char)uVar5 != '\0') {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Name : `7%s\n");
            local_8 = 8;
            puVar11 = puVar6;
            if (0xf < (uint)puVar6[5]) {
              puVar11 = (undefined4 *)*puVar6;
            }
            FUN_00403640(&local_2c,puVar11,puVar6[4]);
            local_8 = 1;
            if (0xf < local_30) {
              pvVar12 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar12 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
              FUN_005adb3f(pvVar12);
            }
            FUN_004024e0(&stack0xffffff60,(undefined4 *)(pbVar9 + 0x18));
            iVar4 = FUN_004a7100(in_stack_ffffff60);
            if (iVar4 == 0) {
              FUN_00403640(&local_2c,"`%Ship : `8none\n",0x10);
            }
            else {
              puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Ship : `7%s\n");
              local_8 = 9;
              puVar11 = puVar6;
              if (0xf < (uint)puVar6[5]) {
                puVar11 = (undefined4 *)*puVar6;
              }
              FUN_00403640(&local_2c,puVar11,puVar6[4]);
              local_8 = 1;
              if (0xf < local_30) {
                pvVar12 = local_44[0];
                if ((0xfff < local_30 + 1) &&
                   (pvVar12 = *(void **)((int)local_44[0] + -4),
                   0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
                FUN_005adb3f(pvVar12);
              }
            }
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Admin: %s\n");
            local_8 = 10;
            puVar11 = puVar6;
            if (0xf < (uint)puVar6[5]) {
              puVar11 = (undefined4 *)*puVar6;
            }
            FUN_00403640(&local_2c,puVar11,puVar6[4]);
            local_8 = 1;
            if (0xf < local_30) {
              pvVar12 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar12 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_004fb8fc;
              FUN_005adb3f(pvVar12);
            }
          }
        }
      }
      pppbVar3 = local_2c;
      local_2c = (byte ***)((uint)local_2c & 0xffffff00);
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = pppbVar3;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
      local_1c = 0;
      uStack_18 = 0xf;
      if (0xf < local_48) {
        ppppbVar8 = (byte ****)local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (ppppbVar8 = (byte ****)local_5c[0][-1],
           (byte *)0x1f < (byte *)((int)local_5c[0] + (-4 - (int)ppppbVar8)))) {
LAB_004fb8fc:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (byte ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < uStack_18) {
        ppppbVar8 = (byte ****)local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar8 = (byte ****)local_2c[-1],
           (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
      goto LAB_004fb97b;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004fb97b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_004fb9a0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_1 != 0) {
    *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
    *(int *)((int)this + 4) = param_1;
    *(void **)((int)this + 0x24) = this;
  }
  return this;
}


void __thiscall FUN_004fb9d0(void *this,int *param_1)

{
  if (*param_1 != 0) {
    *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
    *(int *)((int)this + 4) = *param_1;
    *(void **)((int)this + 0x24) = this;
  }
  return;
}


TypeDescriptor * FUN_004fb9f0(void)

{
  return &.P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShip@@H@Z::
          RTTI_Type_Descriptor;
}


void __thiscall FUN_004fba00(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall FUN_004fba20(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  puVar4 = (undefined4 *)(**(code **)((int)this + 4))(local_20,*param_2,*param_3);
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  if (0xf < local_c) {
    pvVar5 = local_20[0];
    if (0xfff < local_c + 1) {
      pvVar5 = *(void **)((int)local_20[0] + -4);
      if (0x1f < (uint)((int)local_20[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004fbad0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(*(int *)((int)*(void **)(param_1 + 0x24) + 0x44) + 0x40);
  if (iVar1 != 0) {
    uVar2 = FUN_0050c850(*(void **)(param_1 + 0x24),iVar1);
    if ((char)uVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x40400000;
      return;
    }
    *(undefined4 *)(param_1 + 0x20) = 0x40000000;
  }
  return;
}


void __fastcall FUN_004fbb10(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined3 extraout_var;
  Vec2 *pVVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int extraout_EDX;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  uint in_stack_ffffff9c;
  byte *in_stack_ffffffa0;
  byte *pbVar13;
  Vec2 local_38 [8];
  float local_30;
  float local_2c;
  void *local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bff94;
  local_10 = ExceptionList;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x40) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x24) + 0x40) + 0x20);
  ExceptionList = &local_10;
  if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x10))(), cVar4 == '\0')) {
    puVar9 = (undefined4 *)((uint)in_stack_ffffffa0 & 0xffffff00);
    FUN_00402690(&stack0xffffffa0,"No weapon system. Cannot engage.",0x20);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar9);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x40) = 0;
    ExceptionList = local_10;
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x24);
  cVar4 = FUN_004ae510(*(int *)(*(int *)((int)pvVar2 + 0x40) + 0x20));
  if (CONCAT31(extraout_var,cVar4) == 0) {
    puVar9 = (undefined4 *)CONCAT31((int3)((uint)in_stack_ffffffa0 >> 8),cVar4);
    FUN_00402690(&stack0xffffffa0,"No weapons. Cannot engage.",0x1a);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar9);
    ExceptionList = local_10;
    return;
  }
  local_28 = (void *)FUN_0050c720(pvVar2,*(int *)(*(int *)(*(int *)((int)pvVar2 + 0x44) + 0x40) +
                                                 0x250));
  if (local_28 == (void *)0x0) {
    FUN_00591070("ERROR","Error: somehow enemy vessel has no sensor data.");
    ExceptionList = local_10;
    return;
  }
  pVVar6 = FUN_00508ff0(local_28,(Vec2 *)&local_30);
  local_24 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
  fVar11 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
  local_8 = 1;
  local_20 = fVar11;
  FUN_00591010((Vec2 *)&local_24,pVVar6);
  local_8 = 0xffffffff;
  local_1c = (undefined4 *)fVar11;
  bVar5 = FUN_004ae570(*(void **)(*(int *)(*(int *)(param_1 + 0x24) + 0x40) + 0x20),
                       *(uint *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x5c));
  if (!bVar5) {
    iVar7 = FUN_00505e40(extraout_EDX);
    *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x5c) = iVar7;
    puVar9 = (undefined4 *)(in_stack_ffffff9c & 0xffffff00);
    FUN_00402690(&stack0xffffff9c,"Had an invalid weapon selected Changing over to tube %d",0x37);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar9);
  }
  if ((float)local_1c <= 120.0) {
    in_stack_ffffffa0 = (byte *)((uint)in_stack_ffffffa0 & 0xffffff00);
    FUN_00402690(&stack0xffffffa0,&PTR_005ce008,0);
    cVar4 = FUN_0050f630(*(void **)(param_1 + 0x24),in_stack_ffffffa0);
    if (cVar4 == '\0') {
      iVar7 = *(int *)(param_1 + 0x24);
      uVar8 = FUN_0050f5f0(iVar7);
      if ((char)uVar8 == '\0') {
        *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x58) = 1;
        goto LAB_004fbced;
      }
    }
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x58) = 0;
LAB_004fbced:
  if ((float)local_1c <= *(float *)(param_1 + 0x30)) {
    iVar7 = *(int *)(param_1 + 0x24);
    uVar8 = FUN_0050f5f0(iVar7);
    if ((char)uVar8 != '\0') {
      puVar9 = *(undefined4 **)(iVar7 + 0x218);
      puVar10 = *(undefined4 **)(iVar7 + 0x214);
      local_11 = (float)*(int *)(&DAT_005df538 + *(int *)(*(int *)(iVar7 + 0x44) + 0x74) * 4) <=
                 *(float *)((int)local_28 + 0x128);
      fVar11 = -1.0;
      local_20 = -1.0;
      local_1c = puVar9;
      if (puVar10 != puVar9) {
        do {
          pvVar2 = (void *)*puVar10;
          if (((*(int *)((int)pvVar2 + 0xe0) == 0) && (*(int *)((int)pvVar2 + 0xd8) == 4)) &&
             (*(float *)((int)pvVar2 + 0x38) <= 30.0 && *(float *)((int)pvVar2 + 0x38) != 30.0)) {
            local_30 = (float)*(double *)(iVar7 + 0x28);
            local_2c = (float)*(double *)(iVar7 + 0x30);
            local_8 = 2;
            pVVar6 = FUN_00508ff0(pvVar2,local_38);
            local_8 = CONCAT31(local_8._1_3_,3);
            fVar12 = cocos2d::Vec2::getDistanceSq(pVVar6,(Vec2 *)&local_30);
            local_18 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
            local_8 = 0xffffffff;
            fVar12 = (1.5 - fVar12 * 0.5 * local_18 * local_18) * local_18 * fVar12;
            puVar9 = local_1c;
            if ((local_20 == -1.0) || (fVar11 = local_20, fVar12 < local_20)) {
              fVar11 = fVar12;
              local_20 = fVar12;
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar9);
      }
      if (((fVar11 != -1.0) && (fVar11 < 70.0)) || (local_11 != '\0')) {
        pbVar13 = (byte *)((uint)in_stack_ffffffa0 & 0xffffff00);
        FUN_00402690(&stack0xffffffa0,&PTR_005ce008,0);
        cVar4 = FUN_0050f630(*(void **)(param_1 + 0x24),pbVar13);
        if (cVar4 == '\0') {
          iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);
          iVar3 = *(int *)(iVar7 + 0x40);
          *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x40) + 0x20) + 0x3c +
                            *(int *)(iVar7 + 0x5c) * 4) + 0x38c) = -(uint)(iVar3 != 0) & iVar3 + 8U;
          pVVar6 = FUN_00508ff0(local_28,local_38);
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x40) + 0x20) + 0x3c +
                          *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x5c) * 4);
          *(undefined4 *)(iVar7 + 300) = *(undefined4 *)pVVar6;
          *(undefined4 *)(iVar7 + 0x130) = *(undefined4 *)(pVVar6 + 4);
          FUN_0050fa00(*(void **)(param_1 + 0x24),
                       *(int *)(*(int *)((int)*(void **)(param_1 + 0x24) + 0x44) + 0x5c));
          puVar9 = (undefined4 *)((uint)pbVar13 & 0xffffff00);
          FUN_00402690(&stack0xffffffa0,"Fired a torpedo at my target.",0x1d);
          FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar9);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fbf90(int param_1)

{
  float fVar1;
  void *this;
  int iVar2;
  uint uVar3;
  void *this_00;
  Vec2 *pVVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  uint in_stack_ffffffac;
  undefined4 *puVar8;
  Vec2 local_28 [8];
  float local_20;
  float local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bffc2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar8 = (undefined4 *)(in_stack_ffffffac & 0xffffff00);
  FUN_00402690(&stack0xffffffac,"Entering combat with target \'%s\'",0x20);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
  this = *(void **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)((int)this + 0x44);
  if (((*(int *)(iVar2 + 0x70) != 7) && (*(int *)(iVar2 + 0x70) != 8)) &&
     (*(int *)(iVar2 + 0x74) != 3)) {
    if (*(int *)(iVar2 + 0x74) == 2) {
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      bVar5 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar5 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar5) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        goto LAB_004fc18c;
      }
    }
    else {
      this_00 = (void *)FUN_0050c720(this,*(int *)(*(int *)(iVar2 + 0x40) + 0x250));
      if (this_00 == (void *)0x0) {
        FUN_00591070("ERROR","Error: somehow enemy vessel has no sensor data.");
        ExceptionList = local_10;
        return;
      }
      fVar6 = (float)((double)*(float *)((int)this_00 + 0x108) + *(double *)((int)this_00 + 0x18));
      FUN_00592f80((float)((double)*(float *)((int)this_00 + 0x104) +
                          *(double *)((int)this_00 + 0x10)),fVar6,
                   (float)*(double *)((int)this + 0x28));
      fVar1 = *(float *)(*(int *)((int)this_00 + 0x130) + 0x120);
      pVVar4 = FUN_00508ff0(this_00,local_28);
      local_20 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
      fVar7 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
      local_8 = 1;
      local_1c = fVar7;
      FUN_00591010((Vec2 *)&local_20,pVVar4);
      local_8 = 0xffffffff;
      if (fVar7 <= 60.0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        goto LAB_004fc18c;
      }
      if ((int)(fVar1 - (float)(int)fVar6) - 0x5aU < 0xb5) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        goto LAB_004fc18c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
LAB_004fc18c:
  puVar8 = (undefined4 *)((uint)puVar8 & 0xffffff00);
  FUN_00402690(&stack0xffffffac,"Attack pattern chosen: %s",0x19);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0x428c0000;
    *(undefined4 *)(iVar2 + 0x380) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0x43160000;
    *(undefined4 *)(iVar2 + 900) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  ExceptionList = local_10;
  return;
}
