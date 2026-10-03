#include "../ois_server.exe.h"


uint __cdecl FUN_004e8020(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),3,'\0');
  uVar1 = 0;
  if (this != (int *)0x0) {
    if (*(char *)((int)this + 99) == '\0') {
      uVar2 = FUN_004e7620(param_1,this);
      return uVar2;
    }
    uVar1 = (**(code **)(*this + 0x14))();
    if ((char)uVar1 == '\0') {
      FUN_004ae7b0(this,param_1);
      iVar4 = -1;
      iVar3 = 9;
      this_00 = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this_00,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8080(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x28);
  if (this != (int *)0x0) {
    uVar1 = (**(code **)(*this + 0x14))();
    if ((char)uVar1 == '\0') {
      FUN_004ae7b0(this,param_1);
      iVar4 = -1;
      iVar3 = 9;
      this_00 = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this_00,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


void __cdecl FUN_004e80d0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),3,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e80f0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),4,'\0');
  uVar1 = 0;
  if (this != (int *)0x0) {
    if (*(char *)((int)this + 99) == '\0') {
      uVar2 = FUN_004e7620(param_1,this);
      return uVar2;
    }
    uVar1 = (**(code **)(*this + 0x14))();
    if ((char)uVar1 == '\0') {
      FUN_004ae7b0(this,param_1);
      iVar4 = -1;
      iVar3 = 9;
      this_00 = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this_00,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8150(int param_1)

{
  int *this;
  undefined4 *puVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  this = (int *)*puVar1;
  if (this != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*this + 0x14))();
    if ((char)puVar1 == '\0') {
      FUN_004ae7b0(this,param_1);
      iVar4 = -1;
      iVar3 = 9;
      this_00 = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this_00,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return (uint)puVar1 & 0xffffff00;
}


void __cdecl FUN_004e81a0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),4,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


undefined4 __cdecl FUN_004e81c0(int param_1)

{
  uint in_EAX;
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0xd0) == '\0')) {
    *(undefined1 *)(param_1 + 0xd0) = 1;
    FUN_005229d0(*(void **)(param_1 + 0x40),100);
    iVar5 = -1;
    iVar3 = 8;
    iVar4 = param_1;
    pvVar1 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar1,iVar4,iVar3,iVar5);
    iVar3 = -1;
    iVar4 = 0xc;
    pvVar1 = (void *)FUN_00402f60();
    uVar2 = FUN_00557fb0(pvVar1,param_1,iVar4,iVar3);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e8220(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = -1;
  iVar2 = 9;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8250(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0065c2dc == (undefined4 *)0x0) {
    DAT_0065c2dc = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2dc = SensorManager::vftable;
  }
  FUN_0043d0c0(param_1);
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e82a0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0065c2dc == (undefined4 *)0x0) {
    DAT_0065c2dc = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2dc = SensorManager::vftable;
  }
  FUN_0043d120(param_1);
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e82f0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: sensor select right");
  if (DAT_0065c2dc == (undefined4 *)0x0) {
    DAT_0065c2dc = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2dc = SensorManager::vftable;
  }
  FUN_0043d1e0(param_1);
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8360(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: sensor select left");
  if (DAT_0065c2dc == (undefined4 *)0x0) {
    DAT_0065c2dc = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2dc = SensorManager::vftable;
  }
  FUN_0043d180(param_1);
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e83d0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: set nav and sensor linked.");
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8420(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: set nav and sensor unlinked.");
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  iVar3 = -1;
  iVar2 = 9;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8470(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 8;
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e84a0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 9;
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e84d0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: sensors set to auto.");
  *(undefined1 *)(param_1 + 0x1b2) = 1;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8530(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00591070("DETAIL","%s: sensors turned off auto.");
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  iVar3 = -1;
  iVar2 = 9;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e8580(int param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      if ((0 < param_2) &&
         (pfVar1 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104),
         (float)param_2 < *pfVar1 || (float)param_2 == *pfVar1)) {
        iVar7 = -1;
        iVar5 = 8;
        iVar6 = param_1;
        pvVar3 = (void *)FUN_00402f60();
        uVar4 = FUN_00557fb0(pvVar3,iVar6,iVar5,iVar7);
        *(int *)(param_1 + 0x1b4) = param_2;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      iVar5 = -1;
      iVar6 = 10;
      pvVar3 = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar5);
      return uVar2 & 0xffffff00;
    }
  }
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8600(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = 9;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e8630(int param_1)

{
  float fVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this = (void *)FUN_00402f60();
      if (1.0 <= fVar1) {
        uVar3 = FUN_00557fb0(this,param_1,8,-1);
        *(undefined4 *)(param_1 + 0x1b4) = 1;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_00557fb0(this,param_1,10,-1);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e86a0(int param_1)

{
  float fVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this = (void *)FUN_00402f60();
      if (2.0 <= fVar1) {
        uVar3 = FUN_00557fb0(this,param_1,8,-1);
        *(undefined4 *)(param_1 + 0x1b4) = 2;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_00557fb0(this,param_1,10,-1);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e8710(int param_1)

{
  float fVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this = (void *)FUN_00402f60();
      if (3.0 <= fVar1) {
        uVar3 = FUN_00557fb0(this,param_1,8,-1);
        *(undefined4 *)(param_1 + 0x1b4) = 3;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_00557fb0(this,param_1,10,-1);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e8780(int param_1)

{
  float fVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this = (void *)FUN_00402f60();
      if (4.0 <= fVar1) {
        uVar3 = FUN_00557fb0(this,param_1,8,-1);
        *(undefined4 *)(param_1 + 0x1b4) = 4;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_00557fb0(this,param_1,10,-1);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e87f0(int param_1)

{
  float fVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x20) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x20) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 8) + 0x104);
      this = (void *)FUN_00402f60();
      if (5.0 <= fVar1) {
        uVar3 = FUN_00557fb0(this,param_1,8,-1);
        *(undefined4 *)(param_1 + 0x1b4) = 5;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar2 = FUN_00557fb0(this,param_1,10,-1);
    }
  }
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8860(int param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  iVar4 = -1;
  iVar3 = 9;
  *(undefined4 *)(DAT_0065c288 + 0x10c) = 0;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e88f0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_004954b0(DAT_0065c288);
  if ((char)uVar2 != '\0') {
    iVar7 = -1;
    iVar6 = 0x2d;
    iVar4 = param_1;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,iVar4,iVar6,iVar7);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar4 = uVar2 + 1;
    iVar6 = 0x18;
    pvVar3 = (void *)FUN_00402f60();
    uVar5 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar4);
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e89b0(int param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  uint in_stack_ffffffc8;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be592;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
  cVar1 = FUN_004d6580(param_1,0,pvVar4);
  uVar3 = CONCAT31(extraout_var,cVar1);
  if (cVar1 != '\0') {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = 0xffffffff;
    }
    uVar3 = DAT_0065c288;
    if ((*(int *)(DAT_0065c288 + 0x10c) == 2) &&
       (iVar5 = *(int *)(DAT_0065c288 + 0x114), iVar5 != -1)) {
      uVar3 = *(uint *)(DAT_0065b5cc + 0xd0);
      puVar2 = (undefined4 *)(uVar3 + 0x1f8);
      if ((*(int *)((int)*puVar2 + iVar5 * 4 + 0xc) == 0) &&
         (uVar3 = *(uint *)(DAT_0065b5cc + 0x124), 99 < *(int *)(uVar3 + 0x1c))) {
        uVar3 = FUN_005070d0((void *)*puVar2,iVar5);
        if ((char)uVar3 != '\0') {
          pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,&DAT_0060c504,3);
          FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffff9c,pvVar4);
          iVar8 = -1;
          iVar7 = 0x2d;
          iVar5 = param_1;
          pvVar4 = (void *)FUN_00402f60();
          FUN_00557fb0(pvVar4,iVar5,iVar7,iVar8);
          iVar8 = -1;
          iVar7 = 8;
          iVar5 = param_1;
          pvVar4 = (void *)FUN_00402f60();
          FUN_00557fb0(pvVar4,iVar5,iVar7,iVar8);
          uVar3 = rand();
          uVar3 = uVar3 & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          iVar5 = uVar3 + 1;
          iVar7 = 0x18;
          pvVar4 = (void *)FUN_00402f60();
          uVar6 = FUN_00557fb0(pvVar4,param_1,iVar7,iVar5);
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)uVar6 >> 8),1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8b40(int param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_stack_ffffffcc;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be5c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
  cVar1 = FUN_004d6750(param_1,0,pvVar4);
  uVar3 = CONCAT31(extraout_var,cVar1);
  if (cVar1 != '\0') {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = 0xffffffff;
    }
    uVar3 = FUN_00495670(DAT_0065c288);
    if ((char)uVar3 != '\0') {
      iVar8 = -1;
      iVar7 = 0x2d;
      iVar5 = param_1;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,iVar5,iVar7,iVar8);
      iVar8 = -1;
      iVar7 = 9;
      iVar5 = param_1;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,iVar5,iVar7,iVar8);
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      iVar5 = uVar3 + 1;
      iVar7 = 0x18;
      pvVar4 = (void *)FUN_00402f60();
      uVar6 = FUN_00557fb0(pvVar4,param_1,iVar7,iVar5);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8c50(int param_1,int param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_stack_ffffffcc;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be5c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
  cVar1 = FUN_004d6910(param_1,param_2,pvVar4);
  uVar3 = CONCAT31(extraout_var,cVar1);
  if (cVar1 != '\0') {
    if (DAT_0065c288 == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = (void *)FUN_00485f60(puVar2);
      local_8 = 0xffffffff;
    }
    uVar3 = FUN_00495ad0(DAT_0065c288,param_2);
    if ((char)uVar3 != '\0') {
      iVar8 = -1;
      iVar7 = 0x2d;
      iVar5 = param_1;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,iVar5,iVar7,iVar8);
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      iVar5 = uVar3 + 1;
      iVar7 = 0x18;
      pvVar4 = (void *)FUN_00402f60();
      uVar6 = FUN_00557fb0(pvVar4,param_1,iVar7,iVar5);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8d50(int param_1,int param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_ffffffd0;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,&PTR_005ce008,0);
  cVar1 = FUN_004d6910(param_1,param_2,pvVar3);
  uVar5 = CONCAT31(extraout_var,cVar1);
  if (cVar1 != '\0') {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = 0xffffffff;
    }
    uVar5 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0x118) != -1) {
      iVar7 = -1;
      iVar6 = 9;
      *(undefined4 *)(DAT_0065c288 + 0x118) = 0xffffffff;
      pvVar3 = (void *)FUN_00402f60();
      uVar4 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar7);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8e30(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint in_stack_ffffffcc;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be5c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar5 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
  cVar1 = FUN_004d6ae0(param_1,0,pvVar5);
  if (cVar1 == '\0') {
    pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    bVar2 = FUN_004d6cc0(param_1,0,pvVar5);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (!bVar2) goto LAB_004e8f2a;
  }
  if (DAT_0065c288 == 0) {
    puVar3 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar3);
    local_8 = 0xffffffff;
  }
  uVar4 = FUN_00495760(DAT_0065c288);
  if ((char)uVar4 != '\0') {
    iVar9 = -1;
    iVar7 = 0x2d;
    iVar8 = param_1;
    pvVar5 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar5,iVar8,iVar7,iVar9);
    iVar7 = -1;
    iVar8 = 8;
    pvVar5 = (void *)FUN_00402f60();
    uVar6 = FUN_00557fb0(pvVar5,param_1,iVar8,iVar7);
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
LAB_004e8f2a:
  ExceptionList = local_10;
  return uVar4 & 0xffffff00;
}


undefined4 __cdecl FUN_004e8f40(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcVar8;
  undefined4 extraout_ECX_01;
  undefined4 in_stack_ffffffc4;
  uint3 uVar10;
  byte *pbVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005beb8c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == (void *)0x0) {
    puVar4 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar4);
  }
  local_8 = 0xffffffff;
  uVar5 = FUN_00494bf0(DAT_0065c288,param_1,param_2);
  if ((char)uVar5 != '\0') {
    if (DAT_0065c288 == (void *)0x0) {
      puVar4 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar4);
      local_8 = 0xffffffff;
    }
    uVar10 = (uint3)((uint)in_stack_ffffffc4 >> 8);
    if (param_2 == -1) {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8) + 0x68);
      *piVar1 = *piVar1 + 1;
      pvVar6 = (void *)((uint)uVar10 << 8);
      FUN_00402690(&stack0xffffffc4,&DAT_0060c3d8,2);
      local_8 = 2;
      uVar7 = extraout_ECX;
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
        uVar7 = extraout_ECX_00;
      }
      local_8 = 0xffffffff;
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),uVar7,0xffffffe7,pvVar6);
    }
    else {
      pcVar3 = (&PTR_DAT_005dd9f4)[param_2];
      pbVar9 = (byte *)((uint)uVar10 << 8);
      pcVar8 = pcVar3;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_00402690(&stack0xffffffc4,pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
      puVar4 = (undefined4 *)FUN_004a8180(pbVar9);
      FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),(int)puVar4,0xffffffff);
      FUN_004024e0(&stack0xffffffc4,puVar4);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_01,-puVar4[0x68],pbVar9);
      FUN_00591070("WORLD","Bought weapon from tube %d");
      if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
        FUN_004127d0();
        FUN_004b8550();
      }
    }
    iVar13 = -1;
    iVar11 = 0x2d;
    iVar12 = param_1;
    pvVar6 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar6,iVar12,iVar11,iVar13);
    iVar11 = -1;
    iVar12 = 8;
    pvVar6 = (void *)FUN_00402f60();
    uVar7 = FUN_00557fb0(pvVar6,param_1,iVar12,iVar11);
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


undefined4 __cdecl FUN_004e9170(int param_1)

{
  void **ppvVar1;
  uint uVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  void **local_8;
  
  ppvVar1 = DAT_0065c288;
  local_8 = (void **)0xffffffff;
  puStack_c = &LAB_005bebd4;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ppvVar4 = &local_10;
  ExceptionList = ppvVar4;
  if (DAT_0065c288 == (void **)0x0) {
    puVar3 = (undefined4 *)FUN_005adb0f(300);
    local_8 = ppvVar1;
    ppvVar4 = (void **)FUN_00485f60(puVar3);
    DAT_0065c288 = ppvVar4;
  }
  ppvVar1 = DAT_0065c288;
  local_8 = (void **)0xffffffff;
  if (((param_1 != 0) && (DAT_0065c288[0x43] == (void *)0x4)) &&
     (DAT_0065c288[0x3d] != (void *)0xffffffff)) {
    ppvVar4 = *(void ***)(param_1 + 0x40);
    if (ppvVar4[8] != (int *)0x0) {
      ppvVar4 = (void **)(**(code **)(*(int *)ppvVar4[8] + 0x10))(0,uVar2);
      if (((char)ppvVar4 != '\0') &&
         (ppvVar4 = *(void ***)(*(int *)(param_1 + 0x40) + 0x20),
         ppvVar4[(int)ppvVar1[0x3d] + 0xf] != (void *)0x0)) {
        if (DAT_0065c288 == (void **)0x0) {
          puVar3 = (undefined4 *)FUN_005adb0f(300);
          local_8 = (void **)0x1;
          DAT_0065c288 = (void **)FUN_00485f60(puVar3);
          local_8 = (void **)0xffffffff;
        }
        ppvVar4 = (void **)FUN_00494d60((int)DAT_0065c288);
        if ((char)ppvVar4 != '\0') {
          iVar9 = -1;
          iVar7 = 0x2d;
          iVar8 = param_1;
          pvVar5 = (void *)FUN_00402f60();
          FUN_00557fb0(pvVar5,iVar8,iVar7,iVar9);
          iVar7 = -1;
          iVar8 = 9;
          pvVar5 = (void *)FUN_00402f60();
          uVar6 = FUN_00557fb0(pvVar5,param_1,iVar8,iVar7);
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)uVar6 >> 8),1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)ppvVar4 & 0xffffff00;
}


undefined4 __cdecl FUN_004e92b0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *in_stack_ffffffd0;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00498cd0(DAT_0065c288);
  FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x68));
  FUN_004a79d0(1,*(byte *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x280),in_stack_ffffffd0);
  FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x68));
  FUN_004a79d0(2,*(byte *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x281),in_stack_ffffffd0);
  iVar6 = -1;
  iVar4 = 0x2d;
  iVar5 = param_1;
  pvVar2 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar2,iVar5,iVar4,iVar6);
  iVar4 = -1;
  iVar5 = 8;
  pvVar2 = (void *)FUN_00402f60();
  uVar3 = FUN_00557fb0(pvVar2,param_1,iVar5,iVar4);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


undefined4 __cdecl FUN_004e93b0(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00402f60();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0x41200000;
  FUN_00558290(iVar1);
  iVar3 = -1;
  iVar1 = 8;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar1,iVar3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e93f0(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00402f60();
  if (*(uint *)(iVar1 + 100) != 0) {
    if (*(int *)(iVar1 + 0x48) == 0) {
      FUN_00558290(iVar1);
    }
    else {
      FMOD::Channel::setPosition(*(uint *)(iVar1 + 100),0);
      FMOD::ChannelControl::setPaused(SUB41(*(undefined4 *)(iVar1 + 100),0));
    }
    FMOD::ChannelControl::setVolume(*(float *)(iVar1 + 100));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0x41200000;
  }
  iVar3 = -1;
  iVar1 = 8;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar1,iVar3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e9470(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00402f60();
  *(undefined1 *)(iVar1 + 0x44) = 0;
  if (*(int *)(iVar1 + 100) != 0) {
    FMOD::ChannelControl::setPaused(SUB41(*(int *)(iVar1 + 100),0));
  }
  iVar3 = -1;
  iVar1 = 8;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar1,iVar3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e94b0(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00402f60();
  FUN_00558210(iVar1);
  iVar3 = -1;
  iVar1 = 8;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar1,iVar3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


int FUN_004e94e0(void)

{
  Layer *pLVar1;
  uint3 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bec02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
  }
  pLVar1 = DAT_0065c25c;
  uVar2 = (uint3)((uint)DAT_0065c25c >> 8);
  if (0.0 <= *(float *)(DAT_0065c25c + 0x2ac)) {
    ExceptionList = local_10;
    return (uint)uVar2 << 8;
  }
  *(undefined4 *)(DAT_0065c25c + 0x2a4) = 0xb;
  *(undefined2 *)(pLVar1 + 0x2a0) = 0x101;
  *(undefined4 *)(pLVar1 + 0x29c) = 1;
  *(undefined4 *)(pLVar1 + 0x2ac) = 0x3f19999a;
  *(undefined4 *)(pLVar1 + 0x2a8) = 0x3f19999a;
  ExceptionList = local_10;
  return CONCAT31(uVar2,1);
}


undefined4 FUN_004e95a0(void)

{
  Layer *pLVar1;
  int iVar2;
  Director *this;
  undefined4 extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af532;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
  }
  local_8 = 0xffffffff;
  iVar2 = FUN_00402f60();
  FUN_00557990(iVar2);
  this = cocos2d::Director::getInstance();
  cocos2d::Director::end(this);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}


undefined4 FUN_004e9630(void)

{
  Layer *pLVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bec44;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_00532810((int)DAT_0065c25c);
  if ((char)uVar2 == '\0') {
    if (DAT_0065c25c == (Layer *)0x0) {
      pLVar1 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 1;
      DAT_0065c25c = FUN_0052b7a0(pLVar1);
      local_8 = 0xffffffff;
    }
    uVar2 = FUN_0052de30(DAT_0065c25c,-1);
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 FUN_004e96e0(void)

{
  Layer *pLVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bec44;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_00532810((int)DAT_0065c25c);
  if ((char)uVar2 == '\0') {
    if (DAT_0065c25c == (Layer *)0x0) {
      pLVar1 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 1;
      DAT_0065c25c = FUN_0052b7a0(pLVar1);
      local_8 = 0xffffffff;
    }
    uVar2 = FUN_0052de30(DAT_0065c25c,1);
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


int __cdecl FUN_004e9790(int param_1)

{
  int *piVar1;
  uint3 uVar3;
  void *this;
  undefined4 uVar2;
  undefined4 *in_stack_ffffff68;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0065b444;
  uVar3 = (uint3)((uint)DAT_0065b444 >> 8);
  if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
    return (uint)uVar3 << 8;
  }
  piVar1 = (int *)(DAT_0065b444 + 100);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(iVar4 + 100) = 0;
    return CONCAT31(uVar3,1);
  }
  FUN_00591e00(&stack0xffffff68,"Time compression: %.0fx");
  FUN_004111b0(in_stack_ffffff68);
  iVar5 = -1;
  iVar4 = 10;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar4,iVar5);
  uVar2 = FUN_00591070(&DAT_005cdc70,"Time compression set to %fx");
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


int __cdecl FUN_004e9840(int param_1)

{
  uint3 uVar2;
  void *this;
  undefined4 uVar1;
  undefined4 *in_stack_ffffff68;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0065b444;
  uVar2 = (uint3)((uint)DAT_0065b444 >> 8);
  if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
    return (uint)uVar2 << 8;
  }
  *(int *)(DAT_0065b444 + 100) = *(int *)(DAT_0065b444 + 100) + 1;
  if (2 < *(int *)(iVar3 + 100)) {
    *(undefined4 *)(iVar3 + 100) = 2;
    return CONCAT31(uVar2,1);
  }
  FUN_00591e00(&stack0xffffff68,"Time compression: %.0fx");
  FUN_004111b0(in_stack_ffffff68);
  iVar4 = -1;
  iVar3 = 10;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar3,iVar4);
  uVar1 = FUN_00591070(&DAT_005cdc70,"Time compression set to %fx");
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 FUN_004e98f0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *in_stack_ffffffd8;
  
  FUN_004024e0(&stack0xffffffd8,(undefined4 *)(DAT_0065b5cc + 0xb4));
  piVar1 = (int *)FUN_004a82e0(in_stack_ffffffd8);
  piVar2 = piVar1;
  if (((piVar1[0x1b] == 0) || (piVar1[0x1b] == 1)) && (*(char *)(DAT_0065b444 + 0x118) == '\0')) {
    FUN_004127d0();
    piVar2 = (int *)FUN_004b7390();
    if ((char)piVar2 != '\0') goto LAB_004e9988;
    piVar2 = FUN_00402690((void *)(DAT_0065b5cc + 0xb4),"tutorial",8);
  }
  else {
LAB_004e9988:
    if (piVar1[0x1b] == 1) {
      FUN_004127d0();
      piVar2 = (int *)FUN_004b7390();
      iVar3 = DAT_0065b444;
      *(char *)(DAT_0065b444 + 0x1c5) = (char)piVar2;
      goto LAB_004e996a;
    }
  }
  iVar3 = DAT_0065b444;
  *(undefined1 *)(DAT_0065b444 + 0x1c5) = 0;
LAB_004e996a:
  *(undefined2 *)(iVar3 + 0x71) = 0x100;
  *(undefined1 *)(iVar3 + 0x70) = 0;
  *(undefined1 *)(iVar3 + 0x1c6) = 1;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


void __cdecl FUN_004e99b0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  LPCSTR ***ppppCVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bec70;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(DAT_0065b444 + 0x1c4) == '\0') {
    iVar6 = -1;
    iVar7 = 8;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,param_1,iVar7,iVar6);
    *(undefined1 *)(DAT_0065b444 + 0x1c4) = 1;
  }
  else {
    FUN_004127d0();
    cVar1 = FUN_004b7390();
    if (cVar1 != '\0') {
      FUN_004127d0();
      FUN_0058f2c0((int *)local_2c);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"/objects%02d.sav");
      local_8._0_1_ = 1;
      puVar5 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar5 = (undefined4 *)*puVar2;
      }
      FUN_00403640(local_2c,puVar5,puVar2[4]);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pvVar4 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar4 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      local_34 = 0;
      ppppCVar3 = local_2c;
      if (0xf < local_18) {
        ppppCVar3 = (LPCSTR ***)local_2c[0];
      }
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      DeleteFileA((LPCSTR)ppppCVar3);
      FUN_00591070("DETAIL","Deleted: %s");
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        ppppCVar3 = (LPCSTR ***)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppCVar3 = (LPCSTR ***)local_2c[0][-1],
           (LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppCVar3);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (LPCSTR **)((uint)local_2c[0] & 0xffffff00);
    }
    iVar7 = DAT_0065b444;
    iVar8 = -1;
    iVar6 = 8;
    *(undefined1 *)(DAT_0065b444 + 0x60) = 1;
    *(undefined1 *)(iVar7 + 0x1c4) = 0;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,param_1,iVar6,iVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __cdecl FUN_004e9b80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0065b444;
  *(undefined4 *)(DAT_0065b444 + 0x144) = param_2;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


undefined1 __cdecl FUN_004e9ba0(undefined4 param_1)

{
  char cVar1;
  char *_Str;
  void *pvVar2;
  uint in_stack_ffffffdc;
  
  pvVar2 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,&PTR_005ce008,0);
  cVar1 = FUN_004d97e0(param_1,0,pvVar2);
  if (cVar1 == '\0') {
    return 0;
  }
  _Str = (char *)&DAT_0065b610;
  if (0xf < DAT_0065b624) {
    _Str = DAT_0065b610;
  }
  atoi(_Str);
  pvVar2 = (void *)FUN_00402370();
  FUN_0041ad30(pvVar2);
  *(undefined4 *)(DAT_0065b444 + 0x144) = 0xc;
  return 1;
}


undefined1 __cdecl FUN_004e9c40(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint in_stack_ffffffdc;
  void *pvVar4;
  
  pvVar4 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,&PTR_005ce008,0);
  cVar2 = FUN_004d9a60(param_1,0,pvVar4);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = FUN_00402370();
  if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 0x30) + 0x38))();
    iVar1 = DAT_0065b444;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x71) = 0x100;
    FUN_00591070("MULTI","Disconnected from server.");
  }
  *(undefined4 *)(DAT_0065b444 + 0x144) = 0;
  return 1;
}


uint __cdecl FUN_004e9cd0(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint in_stack_ffffffd0;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b03b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar6 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,&PTR_005ce008,0);
  cVar2 = FUN_004d9dc0(param_1,0,pvVar6);
  uVar3 = CONCAT31(extraout_var,cVar2);
  if (cVar2 != '\0') {
    uVar3 = FUN_00402370();
    if (*(int *)(uVar3 + 0x20) != 0) {
      iVar4 = FUN_00402370();
      if ((*(int *)(DAT_0065b5cc + 0x200) != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
        FUN_004024e0(&stack0xffffffd0,(undefined4 *)(DAT_0065b5cc + 0x1f0));
        local_8 = 0;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8 = 0xffffffff;
        FUN_0041d990(pvVar6);
        puVar5 = (undefined4 *)(DAT_0065b5cc + 0x1f0);
        puVar1 = (uint *)(DAT_0065b5cc + 0x204);
        *(undefined4 *)(DAT_0065b5cc + 0x200) = 0;
        if (0xf < *puVar1) {
          puVar5 = (undefined4 *)*puVar5;
        }
        *(undefined1 *)puVar5 = 0;
      }
      iVar8 = -1;
      iVar4 = 0x2c;
      pvVar6 = (void *)FUN_00402f60();
      uVar7 = FUN_00557fb0(pvVar6,param_1,iVar4,iVar8);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


uint __cdecl FUN_004e9de0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *this;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_44 [40];
  undefined4 uStack_1c;
  undefined1 local_8;
  bool local_7;
  undefined2 uStack_6;
  
  uVar2 = FUN_00402370();
  if (*(int *)(uVar2 + 0x20) == 0) {
    return uVar2 & 0xffffff00;
  }
  iVar3 = FUN_00402370();
  if (DAT_0065c2c8 == 0) {
    uStack_1c = 0x4e9e19;
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  _local_8 = CONCAT11(param_2 == 1,0xa6);
  iVar4 = FUN_00402370();
  uStack_1c = 1;
  piVar1 = *(int **)(iVar4 + 0x30);
  FUN_0041ab70(auStack_44,(undefined4 *)&DAT_00655688);
  (**(code **)(*piVar1 + 0x50))(&local_8,2,1,3,0);
  iVar6 = -1;
  iVar4 = 0x2c;
  *(bool *)(iVar3 + 0x1c) = param_2 == 1;
  this = (void *)FUN_00402f60();
  uVar5 = FUN_00557fb0(this,param_1,iVar4,iVar6);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


undefined4 __cdecl FUN_004e9e80(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = DAT_0065b5cc;
  iVar10 = param_3 * 4 + 0xc;
  iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
  pvVar7 = *(void **)(*(int *)(iVar6 + 0x1f8) + iVar10);
  if ((pvVar7 != (void *)0x0) && (*(int *)((int)pvVar7 + 8) == 0)) {
    iVar1 = param_2 * 4 + 0xc;
    iVar2 = *(int *)(*(int *)(iVar6 + 0x1f8) + iVar1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
      iVar6 = *(int *)(iVar2 + 4);
      piVar4 = FUN_004a84a0(iVar6);
      if (piVar4 != (int *)0x0) {
        if (piVar4[0x17] != 0) {
          cVar3 = FUN_00506870(pvVar7,piVar4[0x17]);
          if (cVar3 == '\0') goto LAB_004e9fb6;
        }
        *(int *)((int)pvVar7 + 4) = iVar6;
        iVar6 = *(int *)(*(int *)(iVar9 + 0xd0) + 0x1f8);
        *(undefined4 *)(*(int *)(iVar6 + iVar10) + 8) = *(undefined4 *)(*(int *)(iVar6 + iVar1) + 8)
        ;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0xd0) + 0x1f8) + iVar1) + 4) = 0xffffffff
        ;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0xd0) + 0x1f8) + iVar1) + 8) = 0;
        FUN_004eb5a0();
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
        }
        iVar6 = uVar5 + 1;
        iVar9 = 0x18;
        iVar10 = DAT_0065b3d4;
        pvVar7 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar7,iVar10,iVar9,iVar6);
        uVar8 = FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Cargo moved.");
        return CONCAT31((int3)((uint)uVar8 >> 8),1);
      }
LAB_004e9fb6:
      uVar5 = FUN_004eb5e0();
      return uVar5 & 0xffffff00;
    }
  }
  iVar9 = -1;
  iVar10 = 10;
  pvVar7 = (void *)FUN_00402f60();
  uVar5 = FUN_00557fb0(pvVar7,iVar6,iVar10,iVar9);
  return uVar5 & 0xffffff00;
}


void __cdecl FUN_004e9fe0(undefined4 param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte ***pppbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte ****ppppbVar8;
  int *piVar9;
  byte ****ppppbVar10;
  void *in_stack_ffffff74;
  undefined4 *in_stack_ffffff8c;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005becc0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((*(char *)(DAT_0065b444 + 0x71) != '\0') &&
       (iVar4 = FUN_00402370(), *(int *)(iVar4 + 0x20) != 0)) && (param_2 == 1)) &&
     (*(int *)(DAT_0065b5cc + 0x274) != -1)) {
    FUN_004024e0(&stack0xffffff8c,(undefined4 *)(DAT_0065b5cc + 0x25c));
    FUN_0055eaf0(local_44,in_stack_ffffff8c);
    ppppbVar8 = (byte ****)local_44[0];
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 1;
    uStack_7 = 0;
    piVar1 = *(int **)(DAT_0065b5cc + 0x254);
    for (piVar9 = *(int **)(DAT_0065b5cc + 0x250); piVar9 != piVar1; piVar9 = piVar9 + 1) {
      pbVar2 = (byte *)*piVar9;
      ppppbVar10 = local_44;
      if (0xf < local_30) {
        ppppbVar10 = ppppbVar8;
      }
      pbVar7 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar7 = *(byte **)pbVar2;
      }
      uVar5 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)ppppbVar10,local_34);
      if ((char)uVar5 != '\0') {
        ppppbVar10 = (byte ****)(pbVar2 + 0x18);
        if (local_2c != ppppbVar10) {
          if (0xf < *(uint *)(pbVar2 + 0x2c)) {
            ppppbVar10 = (byte ****)*ppppbVar10;
          }
          FUN_00402690(local_2c,ppppbVar10,*(uint *)(pbVar2 + 0x28));
          ppppbVar8 = (byte ****)local_44[0];
        }
        break;
      }
    }
    uVar5 = local_18;
    pppbVar3 = local_2c[0];
    ppppbVar10 = local_2c;
    if (0xf < local_18) {
      ppppbVar10 = (byte ****)local_2c[0];
    }
    uVar6 = FUN_004031f0((byte *)ppppbVar10,local_1c,(byte *)&PTR_005ce008,0);
    if ((char)uVar6 == '\0') {
      FUN_004024e0(&stack0xffffff8c,local_2c);
      local_8 = 2;
      FUN_004024e0(&stack0xffffff74,&DAT_006557b0);
      local_8 = 3;
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      local_8 = 1;
      FUN_0041c4e0(in_stack_ffffff74);
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppbVar8 = (byte ****)local_2c[0][-1],
           (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
      if (0xf < local_30) {
        ppppbVar8 = (byte ****)local_44[0];
        if ((0xfff < local_30 + 1) &&
           (ppppbVar8 = (byte ****)local_44[0][-1],
           (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
    }
    else {
      if (0xf < uVar5) {
        ppppbVar8 = (byte ****)pppbVar3;
        if ((0xfff < uVar5 + 1) &&
           (ppppbVar8 = (byte ****)pppbVar3[-1],
           (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
        ppppbVar8 = (byte ****)local_44[0];
      }
      if (0xf < local_30) {
        ppppbVar10 = ppppbVar8;
        if ((0xfff < local_30 + 1) &&
           (ppppbVar10 = (byte ****)ppppbVar8[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar8 + (-4 - (int)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar10);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __fastcall FUN_004ea270(undefined4 *param_1,undefined4 param_2)

{
  undefined4 auStackY_38 [8];
  undefined4 uStackY_18;
  
  switch(param_2) {
  case 0:
    uStackY_18 = 0x4eb14f;
    FUN_004eb640(param_1,0x4e50f0);
    return param_1;
  default:
    FUN_0052b380(auStackY_38,param_2);
    FUN_004eb670(param_1);
    return param_1;
  case 2:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004de650;
    param_1[9] = param_1;
    return param_1;
  case 3:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004de7e0;
    param_1[9] = param_1;
    return param_1;
  case 4:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004de890;
    param_1[9] = param_1;
    return param_1;
  case 5:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004deb90;
    param_1[9] = param_1;
    return param_1;
  case 6:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004dea70;
    param_1[9] = param_1;
    return param_1;
  case 7:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004deb20;
    param_1[9] = param_1;
    return param_1;
  case 0xf:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004df2b0;
    param_1[9] = param_1;
    return param_1;
  case 0x10:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004df5a0;
    param_1[9] = param_1;
    return param_1;
  case 0x11:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004df7c0;
    param_1[9] = param_1;
    return param_1;
  case 0x12:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004df9d0;
    param_1[9] = param_1;
    return param_1;
  case 0x13:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004dfc00;
    param_1[9] = param_1;
    return param_1;
  case 0x14:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004dfd90;
    param_1[9] = param_1;
    return param_1;
  case 0x15:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004dfeb0;
    param_1[9] = param_1;
    return param_1;
  case 0x16:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004de940;
    param_1[9] = param_1;
    return param_1;
  case 0x17:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e2db0;
    param_1[9] = param_1;
    return param_1;
  case 0x18:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e2f30;
    param_1[9] = param_1;
    return param_1;
  case 0x19:
    uStackY_18 = 0x4eaced;
    FUN_004eb640(param_1,0x4e8580);
    return param_1;
  case 0x1a:
    uStackY_18 = 0x4eacfe;
    FUN_004eb640(param_1,0x4e8600);
    return param_1;
  case 0x1b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3290;
    param_1[9] = param_1;
    return param_1;
  case 0x1c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3390;
    param_1[9] = param_1;
    return param_1;
  case 0x1d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3410;
    param_1[9] = param_1;
    return param_1;
  case 0x1e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3770;
    param_1[9] = param_1;
    return param_1;
  case 0x1f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e35d0;
    param_1[9] = param_1;
    return param_1;
  case 0x20:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3640;
    param_1[9] = param_1;
    return param_1;
  case 0x21:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e36b0;
    param_1[9] = param_1;
    return param_1;
  case 0x22:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004df6f0;
    param_1[9] = param_1;
    return param_1;
  case 0x23:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004dfd10;
    param_1[9] = param_1;
    return param_1;
  case 0x25:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e30f0;
    param_1[9] = param_1;
    return param_1;
  case 0x26:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3140;
    param_1[9] = param_1;
    return param_1;
  case 0x27:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e31b0;
    param_1[9] = param_1;
    return param_1;
  case 0x28:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3220;
    param_1[9] = param_1;
    return param_1;
  case 0x29:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3cd0;
    param_1[9] = param_1;
    return param_1;
  case 0x2a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3e00;
    param_1[9] = param_1;
    return param_1;
  case 0x2b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e4c40;
    param_1[9] = param_1;
    return param_1;
  case 0x2c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e4c80;
    param_1[9] = param_1;
    return param_1;
  case 0x2d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e4cc0;
    param_1[9] = param_1;
    return param_1;
  case 0x2e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e51b0;
    param_1[9] = param_1;
    return param_1;
  case 0x2f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e5530;
    param_1[9] = param_1;
    return param_1;
  case 0x30:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e3fa0;
    param_1[9] = param_1;
    return param_1;
  case 0x31:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e40b0;
    param_1[9] = param_1;
    return param_1;
  case 0x32:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e46b0;
    param_1[9] = param_1;
    return param_1;
  case 0x33:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e43d0;
    param_1[9] = param_1;
    return param_1;
  case 0x34:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e41a0;
    param_1[9] = param_1;
    return param_1;
  case 0x35:
    uStackY_18 = 0x4ead0f;
    FUN_004eb640(param_1,0x4e8630);
    return param_1;
  case 0x36:
    uStackY_18 = 0x4ead20;
    FUN_004eb640(param_1,0x4e86a0);
    return param_1;
  case 0x37:
    uStackY_18 = 0x4ead31;
    FUN_004eb640(param_1,0x4e8710);
    return param_1;
  case 0x38:
    uStackY_18 = 0x4ead42;
    FUN_004eb640(param_1,0x4e8780);
    return param_1;
  case 0x39:
    uStackY_18 = 0x4ead53;
    FUN_004eb640(param_1,0x4e87f0);
    return param_1;
  case 0x3a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e72a0;
    param_1[9] = param_1;
    return param_1;
  case 0x3b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0690;
    param_1[9] = param_1;
    return param_1;
  case 0x3c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e05f0;
    param_1[9] = param_1;
    return param_1;
  case 0x3d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e06f0;
    param_1[9] = param_1;
    return param_1;
  case 0x3e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0770;
    param_1[9] = param_1;
    return param_1;
  case 0x3f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e07b0;
    param_1[9] = param_1;
    return param_1;
  case 0x40:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1a10;
    param_1[9] = param_1;
    return param_1;
  case 0x41:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1b40;
    param_1[9] = param_1;
    return param_1;
  case 0x42:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1d40;
    param_1[9] = param_1;
    return param_1;
  case 0x43:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1e70;
    param_1[9] = param_1;
    return param_1;
  case 0x44:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1c80;
    param_1[9] = param_1;
    return param_1;
  case 0x45:
    uStackY_18 = 0x4eab55;
    FUN_004eb640(param_1,0x4e08e0);
    return param_1;
  case 0x46:
    uStackY_18 = 0x4eab66;
    FUN_004eb640(param_1,0x4e0970);
    return param_1;
  case 0x47:
    uStackY_18 = 0x4eab77;
    FUN_004eb640(param_1,0x4e0a20);
    return param_1;
  case 0x48:
    uStackY_18 = 0x4eab88;
    FUN_004eb640(param_1,0x4e0b80);
    return param_1;
  case 0x49:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e77d0;
    param_1[9] = param_1;
    return param_1;
  case 0x4a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7850;
    param_1[9] = param_1;
    return param_1;
  case 0x4b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7740;
    param_1[9] = param_1;
    return param_1;
  case 0x4c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7900;
    param_1[9] = param_1;
    return param_1;
  case 0x4d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7950;
    param_1[9] = param_1;
    return param_1;
  case 0x4e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e78a0;
    param_1[9] = param_1;
    return param_1;
  case 0x4f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e79d0;
    param_1[9] = param_1;
    return param_1;
  case 0x50:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7a20;
    param_1[9] = param_1;
    return param_1;
  case 0x51:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7970;
    param_1[9] = param_1;
    return param_1;
  case 0x52:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7aa0;
    param_1[9] = param_1;
    return param_1;
  case 0x53:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7af0;
    param_1[9] = param_1;
    return param_1;
  case 0x54:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7a40;
    param_1[9] = param_1;
    return param_1;
  case 0x55:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7b70;
    param_1[9] = param_1;
    return param_1;
  case 0x56:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7bc0;
    param_1[9] = param_1;
    return param_1;
  case 0x57:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7b10;
    param_1[9] = param_1;
    return param_1;
  case 0x58:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7c40;
    param_1[9] = param_1;
    return param_1;
  case 0x59:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7c90;
    param_1[9] = param_1;
    return param_1;
  case 0x5a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7be0;
    param_1[9] = param_1;
    return param_1;
  case 0x5b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7d10;
    param_1[9] = param_1;
    return param_1;
  case 0x5c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7d60;
    param_1[9] = param_1;
    return param_1;
  case 0x5d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7cb0;
    param_1[9] = param_1;
    return param_1;
  case 0x5e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7de0;
    param_1[9] = param_1;
    return param_1;
  case 0x5f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7e30;
    param_1[9] = param_1;
    return param_1;
  case 0x60:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7d80;
    param_1[9] = param_1;
    return param_1;
  case 0x61:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7ec0;
    param_1[9] = param_1;
    return param_1;
  case 0x62:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7f10;
    param_1[9] = param_1;
    return param_1;
  case 99:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7e60;
    param_1[9] = param_1;
    return param_1;
  case 100:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7fa0;
    param_1[9] = param_1;
    return param_1;
  case 0x65:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7ff0;
    param_1[9] = param_1;
    return param_1;
  case 0x66:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e7f40;
    param_1[9] = param_1;
    return param_1;
  case 0x67:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e8080;
    param_1[9] = param_1;
    return param_1;
  case 0x68:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e80d0;
    param_1[9] = param_1;
    return param_1;
  case 0x69:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e8020;
    param_1[9] = param_1;
    return param_1;
  case 0x6a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e8150;
    param_1[9] = param_1;
    return param_1;
  case 0x6b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e81a0;
    param_1[9] = param_1;
    return param_1;
  case 0x6c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e80f0;
    param_1[9] = param_1;
    return param_1;
  case 0x6d:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e81c0;
    param_1[9] = param_1;
    return param_1;
  case 0x6e:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e8220;
    param_1[9] = param_1;
    return param_1;
  case 0x6f:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e4ba0;
    param_1[9] = param_1;
    return param_1;
  case 0x70:
    uStackY_18 = 0x4eabbb;
    FUN_004eb640(param_1,0x4e8250);
    return param_1;
  case 0x71:
    uStackY_18 = 0x4eabcc;
    FUN_004eb640(param_1,0x4e82a0);
    return param_1;
  case 0x72:
    uStackY_18 = 0x4eabaa;
    FUN_004eb640(param_1,0x4e82f0);
    return param_1;
  case 0x73:
    uStackY_18 = 0x4eab99;
    FUN_004eb640(param_1,0x4e8360);
    return param_1;
  case 0x74:
    uStackY_18 = 0x4eabdd;
    FUN_004eb640(param_1,0x4e1a00);
    return param_1;
  case 0x75:
    uStackY_18 = 0x4eabee;
    FUN_004eb640(param_1,0x4e83d0);
    return param_1;
  case 0x76:
    uStackY_18 = 0x4eabff;
    FUN_004eb640(param_1,0x4e8420);
    return param_1;
  case 0x77:
    uStackY_18 = 0x4eac10;
    FUN_004eb640(param_1,0x4e8470);
    return param_1;
  case 0x78:
    uStackY_18 = 0x4eac21;
    FUN_004eb640(param_1,0x4e84a0);
    return param_1;
  case 0x79:
    uStackY_18 = 0x4eac32;
    FUN_004eb640(param_1,0x4e84d0);
    return param_1;
  case 0x7a:
    uStackY_18 = 0x4eac43;
    FUN_004eb640(param_1,0x4e8530);
    return param_1;
  case 0x7b:
    uStackY_18 = 0x4eac54;
    FUN_004eb640(param_1,0x4e0ce0);
    return param_1;
  case 0x7c:
    uStackY_18 = 0x4eac65;
    FUN_004eb640(param_1,0x4e0d20);
    return param_1;
  case 0x7d:
    uStackY_18 = 0x4eac76;
    FUN_004eb640(param_1,0x4e17b0);
    return param_1;
  case 0x7e:
    uStackY_18 = 0x4eac87;
    FUN_004eb640(param_1,0x4e1290);
    return param_1;
  case 0x7f:
    uStackY_18 = 0x4eaca9;
    FUN_004eb640(param_1,0x4e0d60);
    return param_1;
  case 0x80:
    uStackY_18 = 0x4eac98;
    FUN_004eb640(param_1,0x4e0fa0);
    return param_1;
  case 0x81:
    uStackY_18 = 0x4ead64;
    FUN_004eb640(param_1,0x4e1900);
    return param_1;
  case 0x82:
    uStackY_18 = 0x4ead75;
    FUN_004eb640(param_1,0x4e1980);
    return param_1;
  case 0x83:
    uStackY_18 = 0x4eacdc;
    FUN_004eb640(param_1,0x4e1710);
    return param_1;
  case 0x84:
    uStackY_18 = 0x4eacba;
    FUN_004eb640(param_1,0x4e1a00);
    return param_1;
  case 0x85:
    uStackY_18 = 0x4eaccb;
    FUN_004eb640(param_1,0x4e1a00);
    return param_1;
  case 0x86:
    uStackY_18 = 0x4eab22;
    FUN_004eb640(param_1,0x4dfff0);
    return param_1;
  case 0x87:
    uStackY_18 = 0x4eab33;
    FUN_004eb640(param_1,0x4e0040);
    return param_1;
  case 0x88:
    uStackY_18 = 0x4eab44;
    FUN_004eb640(param_1,0x4e0090);
    return param_1;
  case 0x89:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0430;
    param_1[9] = param_1;
    return param_1;
  case 0x8a:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0490;
    param_1[9] = param_1;
    return param_1;
  case 0x8b:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e04f0;
    param_1[9] = param_1;
    return param_1;
  case 0x8c:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0570;
    param_1[9] = param_1;
    return param_1;
  case 0x8d:
    uStackY_18 = 0x4ead86;
    FUN_004eb640(param_1,0x4e00e0);
    return param_1;
  case 0x8e:
    uStackY_18 = 0x4ead97;
    FUN_004eb640(param_1,0x4e0130);
    return param_1;
  case 0x8f:
    uStackY_18 = 0x4eada8;
    FUN_004eb640(param_1,0x4e0180);
    return param_1;
  case 0x90:
    uStackY_18 = 0x4eadb9;
    FUN_004eb640(param_1,0x4e01d0);
    return param_1;
  case 0x91:
    uStackY_18 = 0x4eadca;
    FUN_004eb640(param_1,0x4e55d0);
    return param_1;
  case 0x92:
    uStackY_18 = 0x4eaddb;
    FUN_004eb640(param_1,0x4e5680);
    return param_1;
  case 0x93:
    uStackY_18 = 0x4eadec;
    FUN_004eb640(param_1,0x4e56f0);
    return param_1;
  case 0x94:
    uStackY_18 = 0x4eadfd;
    FUN_004eb640(param_1,0x4e5b30);
    return param_1;
  case 0x95:
    uStackY_18 = 0x4eae0e;
    FUN_004eb640(param_1,0x4e5b80);
    return param_1;
  case 0x96:
    uStackY_18 = 0x4eae1f;
    FUN_004eb640(param_1,0x4e5ce0);
    return param_1;
  case 0x97:
    uStackY_18 = 0x4eae30;
    FUN_004eb640(param_1,0x4e6520);
    return param_1;
  case 0x98:
    uStackY_18 = 0x4eae41;
    FUN_004eb640(param_1,0x4e5bc0);
    return param_1;
  case 0x99:
    uStackY_18 = 0x4eae52;
    FUN_004eb640(param_1,0x4e5c50);
    return param_1;
  case 0x9a:
    uStackY_18 = 0x4eae63;
    FUN_004eb640(param_1,0x4e69c0);
    return param_1;
  case 0x9b:
    uStackY_18 = 0x4eae74;
    FUN_004eb640(param_1,0x4e68f0);
    return param_1;
  case 0x9c:
    uStackY_18 = 0x4eae85;
    FUN_004eb640(param_1,0x4e6a90);
    return param_1;
  case 0x9d:
    uStackY_18 = 0x4eae96;
    FUN_004eb640(param_1,0x4e6c30);
    return param_1;
  case 0x9e:
    uStackY_18 = 0x4eaea7;
    FUN_004eb640(param_1,0x4e6d40);
    return param_1;
  case 0x9f:
    uStackY_18 = 0x4eaeb8;
    FUN_004eb640(param_1,0x4e6f50);
    return param_1;
  case 0xa0:
    uStackY_18 = 0x4eaec9;
    FUN_004eb640(param_1,0x4e71b0);
    return param_1;
  case 0xa1:
    uStackY_18 = 0x4eaeda;
    FUN_004eb640(param_1,0x4e2000);
    return param_1;
  case 0xa2:
    uStackY_18 = 0x4eaeeb;
    FUN_004eb640(param_1,0x4e22c0);
    return param_1;
  case 0xa3:
    uStackY_18 = 0x4eaefc;
    FUN_004eb640(param_1,0x4e2350);
    return param_1;
  case 0xa4:
    uStackY_18 = 0x4eaf0d;
    FUN_004eb640(param_1,0x4e23f0);
    return param_1;
  case 0xa5:
    uStackY_18 = 0x4eaf1e;
    FUN_004eb640(param_1,0x4e2470);
    return param_1;
  case 0xa6:
    uStackY_18 = 0x4eaf2f;
    FUN_004eb640(param_1,0x4e24f0);
    return param_1;
  case 0xa7:
    uStackY_18 = 0x4eaf40;
    FUN_004eb640(param_1,0x4e2590);
    return param_1;
  case 0xa8:
    uStackY_18 = 0x4eaf51;
    FUN_004eb640(param_1,0x4e2620);
    return param_1;
  case 0xa9:
    uStackY_18 = 0x4eaf62;
    FUN_004eb640(param_1,0x4e2700);
    return param_1;
  case 0xaa:
    uStackY_18 = 0x4eaf73;
    FUN_004eb640(param_1,0x4e2850);
    return param_1;
  case 0xab:
    uStackY_18 = 0x4eafa6;
    FUN_004eb640(param_1,0x4e2d10);
    return param_1;
  case 0xac:
    uStackY_18 = 0x4eafb7;
    FUN_004eb640(param_1,0x4e8860);
    return param_1;
  case 0xad:
    uStackY_18 = 0x4eafc8;
    FUN_004eb640(param_1,0x4e88f0);
    return param_1;
  case 0xae:
    uStackY_18 = 0x4eafd9;
    FUN_004eb640(param_1,0x4e89b0);
    return param_1;
  case 0xaf:
    uStackY_18 = 0x4eafea;
    FUN_004eb640(param_1,0x4e8b40);
    return param_1;
  case 0xb0:
    uStackY_18 = 0x4eaffb;
    FUN_004eb640(param_1,0x4e8c50);
    return param_1;
  case 0xb1:
    uStackY_18 = 0x4eb00c;
    FUN_004eb640(param_1,0x4e8d50);
    return param_1;
  case 0xb2:
    uStackY_18 = 0x4eb01d;
    FUN_004eb640(param_1,0x4e8e30);
    return param_1;
  case 0xb3:
    uStackY_18 = 0x4eb02e;
    FUN_004eb640(param_1,0x4e8f40);
    return param_1;
  case 0xb4:
    uStackY_18 = 0x4eb03f;
    FUN_004eb640(param_1,0x4e9170);
    return param_1;
  case 0xb5:
    uStackY_18 = 0x4eb050;
    FUN_004eb640(param_1,0x4e92b0);
    return param_1;
  case 0xb6:
    uStackY_18 = 0x4eb061;
    FUN_004eb640(param_1,0x4e5740);
    return param_1;
  case 0xb7:
    uStackY_18 = 0x4eb072;
    FUN_004eb640(param_1,0x4e5920);
    return param_1;
  case 0xb8:
    uStackY_18 = 0x4eb094;
    FUN_004eb640(param_1,0x4e5100);
    return param_1;
  case 0xb9:
    uStackY_18 = 0x4eb083;
    FUN_004eb640(param_1,0x4e50f0);
    return param_1;
  case 0xba:
    uStackY_18 = 0x4eaf84;
    FUN_004eb640(param_1,0x4e2940);
    return param_1;
  case 0xbb:
    uStackY_18 = 0x4eb0a5;
    FUN_004eb640(param_1,0x4e4d20);
    return param_1;
  case 0xbc:
    uStackY_18 = 0x4eb0b6;
    FUN_004eb640(param_1,0x4e50c0);
    return param_1;
  case 0xc1:
    uStackY_18 = 0x4eaf95;
    FUN_004eb640(param_1,0x4e2bb0);
    return param_1;
  case 0xc2:
    uStackY_18 = 0x4eb0c7;
    FUN_004eb640(param_1,0x4e94e0);
    return param_1;
  case 0xc3:
    uStackY_18 = 0x4eb0d8;
    FUN_004eb640(param_1,0x4e95a0);
    return param_1;
  case 0xca:
    uStackY_18 = 0x4eb0e9;
    FUN_004eb640(param_1,0x4e4800);
    return param_1;
  case 0xcb:
    uStackY_18 = 0x4eb11c;
    FUN_004eb640(param_1,0x4e98f0);
    return param_1;
  case 0xcc:
    uStackY_18 = 0x4eb12d;
    FUN_004eb640(param_1,0x4e99b0);
    return param_1;
  case 0xcd:
    uStackY_18 = 0x4eb0fa;
    FUN_004eb640(param_1,0x4e6440);
    return param_1;
  case 0xce:
    uStackY_18 = 0x4eb10b;
    FUN_004eb640(param_1,0x4e6240);
    return param_1;
  case 0xd5:
    uStackY_18 = 0x4eb13e;
    FUN_004eb640(param_1,0x4e9e80);
    return param_1;
  }
}


int __cdecl FUN_004eb4d0(byte *param_1)

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
    pbVar8 = (&PTR_DAT_005defa0)[iVar7];
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
    if ((char)uVar5 != '\0') goto LAB_004eb521;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xd7);
  iVar7 = 0;
LAB_004eb521:
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


void FUN_004eb560(void)

{
  void *this;
  int extraout_var;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 0x2b;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,extraout_var,iVar1,iVar2);
  return;
}


void FUN_004eb580(void)

{
  void *this;
  int extraout_var;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 0x2d;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,extraout_var,iVar1,iVar2);
  return;
}


void FUN_004eb5a0(void)

{
  void *this;
  int extraout_var;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 8;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,extraout_var,iVar1,iVar2);
  return;
}


void FUN_004eb5c0(void)

{
  void *this;
  int extraout_var;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 9;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,extraout_var,iVar1,iVar2);
  return;
}


void FUN_004eb5e0(void)

{
  void *this;
  int extraout_var;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 10;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,extraout_var,iVar1,iVar2);
  return;
}


void __thiscall FUN_004eb600(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)((int)this + 4);
  puVar5 = param_2 + 8;
  puVar6 = param_2;
  if (puVar5 != puVar7) {
    do {
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar1 = puVar5 + 4;
      uVar2 = puVar5[5];
      uVar3 = puVar5[6];
      uVar4 = puVar5[7];
      puVar5 = puVar5 + 8;
      puVar6[4] = *puVar1;
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar6 = puVar6 + 8;
    } while (puVar5 != puVar7);
    puVar7 = *(undefined4 **)((int)this + 4);
  }
  *(undefined4 **)((int)this + 4) = puVar7 + -8;
  *param_1 = param_2;
  return;
}


undefined4 * __thiscall FUN_004eb640(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_1 != 0) {
    *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
    *(int *)((int)this + 4) = param_1;
    *(void **)((int)this + 0x24) = this;
  }
  return this;
}


int __thiscall FUN_004eb670(void *this)

{
  uint uVar1;
  void *pvVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0ca0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_8 = 1;
  if (in_stack_00000028 != (int *)0x0) {
    pvVar2 = FUN_004eb960((int *)&stack0x00000004);
    *(void **)((int)this + 0x24) = pvVar2;
  }
  local_8 = 2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004,uVar1);
  }
  ExceptionList = local_10;
  return (int)this;
}


TypeDescriptor * FUN_004eb700(void)

{
  return &std::function<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_004eb710(void *this,void *param_1)

{
  FUN_004eb820(param_1,(int *)((int)this + 8));
  return;
}


void __fastcall FUN_004eb730(int param_1)

{
  FUN_004eb8c0(param_1 + 8);
  return;
}


TypeDescriptor * FUN_004eb740(void)

{
  return &.P6A_NPAVShip@@HHH@Z::RTTI_Type_Descriptor;
}


void __thiscall FUN_004eb750(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall
FUN_004eb770(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  (**(code **)((int)this + 4))(*param_1,*param_2,*param_3,*param_4);
  return;
}


void __thiscall FUN_004eb7a0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 local_24;
  double local_20;
  double local_18;
  double local_10;
  
  local_24 = *param_1;
  local_10 = (double)*param_2;
  local_18 = (double)*param_3;
  local_20 = (double)*param_4;
  if (*(int **)((int)this + 0x2c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)((int)this + 0x2c) + 8))(&local_24,&local_10,&local_18,&local_20);
  return;
}


undefined4 * __thiscall FUN_004eb820(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0d38;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_8 = 0;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1) {
      uVar3 = (**(code **)(*piVar1 + 4))((int)this + 8,uVar2);
      *(undefined4 *)((int)this + 0x2c) = uVar3;
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar1 = (int *)param_1[9];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    }
    else {
      *(int **)((int)this + 0x2c) = piVar1;
    }
    param_1[9] = 0;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_004eb8c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005becf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_005adb0f(0x30);
  *puVar1 = std::_Func_impl_no_alloc<>::vftable;
  puVar1[0xb] = 0;
  local_8 = 1;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x24))(puVar1 + 2);
    puVar1[0xb] = uVar2;
  }
  ExceptionList = local_10;
  return puVar1;
}


void * __fastcall FUN_004eb960(int *param_1)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bed20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_005adb0f(0x30);
  local_8 = 0;
  FUN_004eb820(this,param_1);
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_004eb9e0(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  default:
    param_1[1] = &LAB_004ec100;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 1:
    param_1[1] = FUN_004ebdf0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 2:
    param_1[1] = FUN_004ebe10;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 3:
    param_1[1] = FUN_004ebd60;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 4:
    param_1[1] = FUN_004ebda0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 5:
    param_1[1] = FUN_004ebe40;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 6:
    param_1[1] = FUN_004ebe60;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 7:
    param_1[1] = FUN_004ebef0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 8:
    param_1[1] = FUN_004ebf10;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 9:
    param_1[1] = FUN_004ec050;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 10:
    param_1[1] = FUN_004ebfc0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0xb:
    param_1[1] = FUN_004ebfa0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0xc:
    param_1[1] = FUN_004ec070;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0xd:
    param_1[1] = FUN_004ec0b0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0xe:
    param_1[1] = FUN_004ec130;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0xf:
    param_1[1] = FUN_004ec110;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x10:
    param_1[1] = FUN_004ec150;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x11:
    param_1[1] = FUN_004ec500;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x12:
    param_1[1] = FUN_004ec170;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x13:
    param_1[1] = FUN_004ec370;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x14:
    param_1[1] = FUN_004ec470;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x15:
    param_1[1] = FUN_004ec470;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x16:
    param_1[1] = FUN_004ec4d0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x17:
    param_1[1] = FUN_004ec520;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x18:
    param_1[1] = FUN_004ec590;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1a:
    param_1[1] = FUN_004ec6e0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1b:
    param_1[1] = FUN_004ec600;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1c:
    param_1[1] = FUN_004ec710;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1d:
    param_1[1] = FUN_004ec750;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1e:
    param_1[1] = FUN_004ec7e0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x1f:
    param_1[1] = FUN_004ec770;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x20:
    param_1[1] = FUN_004ec790;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x21:
    param_1[1] = FUN_004ec820;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x22:
    param_1[1] = FUN_004ec8b0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x23:
    param_1[1] = FUN_004ec970;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x24:
    param_1[1] = FUN_004eca20;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x25:
    param_1[1] = FUN_004ec9a0;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  case 0x26:
    param_1[1] = FUN_004eca50;
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[9] = param_1;
    return param_1;
  }
}


float10 __cdecl FUN_004ebd60(int param_1)

{
  float in_XMM0_Da;
  float fVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00522c50(*(int *)(param_1 + 0x40));
  fVar1 = in_XMM0_Da;
  FUN_00522be0(*(int *)(param_1 + 0x40));
  return (float10)(fVar1 - in_XMM0_Da);
}


float10 __cdecl FUN_004ebda0(int param_1)

{
  float10 fVar1;
  float in_XMM0_Da;
  float fVar2;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00522c50(*(int *)(param_1 + 0x40));
  fVar2 = in_XMM0_Da;
  FUN_00522be0(*(int *)(param_1 + 0x40));
  if (in_XMM0_Da < fVar2) {
    fVar1 = FUN_004ebe60(param_1);
    return fVar1;
  }
  fVar1 = FUN_004ebf10(param_1);
  return (float10)0 - fVar1;
}


float10 __cdecl FUN_004ebdf0(int param_1)

{
  float in_XMM0_Da;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_005228c0(*(int *)(param_1 + 0x40));
  return (float10)in_XMM0_Da;
}


float10 __cdecl FUN_004ebe10(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar1 = FUN_00522850(*(int *)(param_1 + 0x40));
  return (float10)iVar1;
}


float10 __cdecl FUN_004ebe40(int param_1)

{
  float in_XMM0_Da;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00522c50(*(int *)(param_1 + 0x40));
  return (float10)in_XMM0_Da;
}


float10 __cdecl FUN_004ebe60(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float in_XMM0_Da;
  float fVar5;
  float fVar6;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  fVar5 = 0.0;
  piVar3 = *(int **)(iVar1 + 0x3c);
  for (iVar4 = *(int *)(iVar1 + 0x40) - (int)piVar3 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    fVar5 = *(float *)(*(int *)(iVar2 + 8) + 200) + fVar5;
    in_XMM0_Da = fVar5;
  }
  FUN_00522c50(iVar1);
  fVar5 = (in_XMM0_Da / fVar5) * 100.0;
  if (fVar5 < 0.0) {
    return (float10)0.0;
  }
  fVar6 = 100.0;
  if (fVar5 <= 100.0) {
    fVar6 = fVar5;
  }
  return (float10)fVar6;
}


float10 __cdecl FUN_004ebef0(int param_1)

{
  float in_XMM0_Da;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00522be0(*(int *)(param_1 + 0x40));
  return (float10)in_XMM0_Da;
}


float10 __cdecl FUN_004ebf10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float in_XMM0_Da;
  float fVar5;
  float fVar6;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  uVar3 = 0;
  fVar6 = 0.0;
  fVar5 = 0.0;
  uVar4 = *(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x3c) + iVar1) + 8);
      in_XMM0_Da = *(float *)(iVar1 + 0xc0) + fVar5 + *(float *)(iVar1 + 0xbc);
      fVar5 = in_XMM0_Da;
    } while (uVar3 < uVar4);
  }
  FUN_00522be0(iVar2);
  fVar5 = (in_XMM0_Da / fVar5) * 100.0;
  if (fVar6 <= fVar5) {
    fVar6 = 100.0;
    if (fVar5 <= 100.0) {
      fVar6 = fVar5;
    }
    return (float10)fVar6;
  }
  return (float10)0.0;
}


float10 __cdecl FUN_004ebfa0(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(float *)(param_1 + 0x120);
}


float10 __cdecl FUN_004ebfc0(int param_1)

{
  int *piVar1;
  char cVar2;
  float in_XMM0_Da;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      if ((*(float *)(param_1 + 0x118) == 0.0) &&
         (in_XMM0_Da = *(float *)(param_1 + 0x11c), in_XMM0_Da == 0.0)) {
        return (float10)*(float *)(param_1 + 0x120);
      }
      FUN_00592f80(0.0,0,*(float *)(param_1 + 0x118));
      return (float10)in_XMM0_Da;
    }
  }
  return (float10)0;
}
