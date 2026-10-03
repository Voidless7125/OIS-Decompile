#include "../ois_server.exe.h"


float10 __cdecl FUN_004ec050(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(float *)(param_1 + 0x128);
}


float10 __cdecl FUN_004ec070(int param_1)

{
  int *piVar1;
  char cVar2;
  float in_XMM0_Da;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      FUN_00403cb0(param_1);
      return (float10)in_XMM0_Da;
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec0b0(int param_1)

{
  int *piVar1;
  char cVar2;
  float in_XMM0_Da;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      FUN_00403cb0(param_1);
      return (float10)((in_XMM0_Da / 1.2) * 100.0);
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec110(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(double *)(param_1 + 0x290);
}


float10 __cdecl FUN_004ec130(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(double *)(param_1 + 0x288);
}


float10 __cdecl FUN_004ec150(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(double *)(param_1 + 0x298);
}


float10 __cdecl FUN_004ec170(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bed6d;
  local_10 = ExceptionList;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 != 0) {
      local_18 = (float)*(double *)(iVar1 + 0x20);
      local_14 = (float)*(double *)(iVar1 + 0x28);
      local_20 = (float)*(double *)(param_1 + 0x28);
      local_1c = (float)*(double *)(param_1 + 0x30);
      local_8 = 1;
      ExceptionList = &local_10;
      fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
      fVar2 = (float)(0x5f3759df - ((uint)fVar3 >> 1));
      ExceptionList = local_10;
      return (float10)((1.5 - fVar3 * 0.5 * fVar2 * fVar2) * fVar2 * fVar3);
    }
    iVar1 = *(int *)(param_1 + 0x19c);
    if (iVar1 != 0) {
      local_20 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
      local_1c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
      local_18 = (float)*(double *)(param_1 + 0x28);
      fVar2 = (float)*(double *)(param_1 + 0x30);
      local_8 = 3;
      ExceptionList = &local_10;
      local_14 = fVar2;
      FUN_00591010((Vec2 *)&local_18,(Vec2 *)&local_20);
      ExceptionList = local_10;
      return (float10)fVar2;
    }
    if ((*(float *)(param_1 + 0x1b8) != -9999.0) || (*(float *)(param_1 + 0x1bc) != -9999.0)) {
      local_20 = (float)*(double *)(param_1 + 0x28);
      fVar2 = (float)*(double *)(param_1 + 0x30);
      local_8 = 4;
      ExceptionList = &local_10;
      local_1c = fVar2;
      FUN_00591010((Vec2 *)&local_20,(Vec2 *)(param_1 + 0x1b8));
      ExceptionList = local_10;
      return (float10)fVar2;
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec370(void *param_1)

{
  int iVar1;
  float fVar2;
  double in_XMM0_Qa;
  double dVar3;
  
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x1a4) != 0) {
      fVar2 = (float)*(double *)(*(int *)((int)param_1 + 0x1a4) + 0x20);
      dVar3 = (double)(ulonglong)(uint)fVar2;
      FUN_0050b390(param_1,fVar2);
      return (float10)dVar3;
    }
    iVar1 = *(int *)((int)param_1 + 0x19c);
    if (iVar1 != 0) {
      fVar2 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
      dVar3 = (double)(ulonglong)(uint)fVar2;
      FUN_0050b390(param_1,fVar2);
      return (float10)dVar3;
    }
    if ((*(float *)((int)param_1 + 0x1b8) != -9999.0) ||
       (in_XMM0_Qa = (double)(ulonglong)(uint)*(float *)((int)param_1 + 0x1bc),
       *(float *)((int)param_1 + 0x1bc) != -9999.0)) {
      FUN_0050b390(param_1,*(float *)((int)param_1 + 0x1b8));
      return (float10)in_XMM0_Qa;
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec470(int param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  dVar1 = (double)((int)((*(double *)(param_1 + 0x140) * 100.0) / 5.0) * 5);
  dVar2 = 5.0;
  if (5.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return (float10)dVar2;
}


float10 __cdecl FUN_004ec4d0(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(int *)(param_1 + 0x1b4);
}


float10 __cdecl FUN_004ec500(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(float *)(param_1 + 0x2a4);
}


float10 __cdecl FUN_004ec520(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x178), iVar1 != 0)) &&
     ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 == 1 ||
      ((iVar2 == 2 || (iVar2 == 3)))))) {
    if (*(int *)(iVar1 + 0x390) == 0) {
      return (float10)0;
    }
    return (float10)(int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0);
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec590(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x17c), iVar1 != 0)) &&
     ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 == 1 ||
      ((iVar2 == 2 || (iVar2 == 3)))))) {
    if (*(int *)(iVar1 + 0x390) == 0) {
      return (float10)0;
    }
    return (float10)(int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0);
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec600(int param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if ((cVar2 != '\0') && (param_2 < 8)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
      iVar3 = *(int *)(iVar4 + 0x38 + param_2 * 4);
      if (iVar3 == 0) {
        return (float10)-2.0;
      }
      if (*(char *)(iVar3 + 0x3bc) != '\0') {
        return (float10)100.0;
      }
      iVar3 = FUN_00437c60(*(int **)(iVar4 + 0xc));
      iVar4 = FUN_0051c5f0(*(void **)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + param_2 * 4
                                     ),
                           (int)(((float)iVar3 / 100.0) * 0.5 *
                                *(float *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 0x20) + 8) +
                                          0x108)));
      return (float10)iVar4;
    }
  }
  return (float10)-1.0;
}


float10 __cdecl FUN_004ec6e0(int param_1)

{
  float10 fVar1;
  
  if (param_1 == 0) {
    return (float10)-1.0;
  }
  fVar1 = FUN_004ec600(param_1,*(uint *)(param_1 + 0x1b4));
  return fVar1;
}


float10 __cdecl FUN_004ec710(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)(100.0 - *(float *)(param_1 + 0x154) * 0.25 * 100.0);
}


float10 __cdecl FUN_004ec750(int param_1)

{
  float fVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x5c)) {
    fVar1 = *(float *)(param_1 + 0x5c);
  }
  return (float10)fVar1;
}


float10 __cdecl FUN_004ec770(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  return (float10)*(float *)(param_1 + 500);
}


float10 __cdecl FUN_004ec790(int param_1)

{
  float fVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  fVar1 = (float)*(double *)(param_1 + 0x28);
  FUN_00520260(*(int *)(param_1 + 0x24));
  return (float10)(fVar1 * 100.0);
}


float10 __cdecl FUN_004ec7e0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      return (float10)*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec820(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  
  if ((param_1 != 0) && (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar2 != (int *)0x0))
  {
    cVar4 = (**(code **)(*piVar2 + 0x10))(0);
    if ((cVar4 != '\0') &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c), *(int *)(iVar3 + 0x34) != 0)) {
      fVar1 = *(float *)(iVar3 + 0x6c);
      fVar5 = fVar1;
      FUN_004ae460(iVar3);
      return (float10)(int)(100.0 - (fVar1 / (fVar5 * *(float *)(*(int *)(*(int *)(*(int *)(param_1 
                                                  + 0x40) + 0x2c) + 8) + 0x104))) * 100.0);
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec8b0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float in_XMM0_Da;
  uint in_stack_ffffffd0;
  void *pvVar4;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 != '\0') {
      pvVar4 = (void *)(in_stack_ffffffd0 & 0xffffff00);
      FUN_00402690(&stack0xffffffd0,&PTR_005ce008,0);
      cVar3 = FUN_004d77e0(param_1,0,pvVar4);
      if (cVar3 != '\0') {
        iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x30);
        FUN_004ae460(iVar2);
        return (float10)(int)(100.0 - (*(float *)(iVar2 + 0x6c) /
                                      (in_XMM0_Da *
                                      *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30)
                                                         + 8) + 0x104))) * 100.0);
      }
    }
  }
  return (float10)0;
}


float10 __cdecl FUN_004ec970(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar1 = FUN_00412700();
  iVar1 = FUN_0043a5a0(iVar1);
  return (float10)iVar1;
}


float10 __cdecl FUN_004ec9a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00412700();
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) == '\0') {
    piVar1 = (int *)**(int **)(DAT_0065b5cc + 300);
    iVar3 = 0;
    for (iVar5 = (*(int **)(DAT_0065b5cc + 300))[1] - (int)piVar1 >> 2; iVar5 != 0;
        iVar5 = iVar5 + -1) {
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
      iVar4 = iVar3 + 1;
      if (*(char *)(iVar2 + 100) == '\0') {
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
    }
    return (float10)iVar3;
  }
  return (float10)0.0;
}


float10 __cdecl FUN_004eca20(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00412700();
  iVar1 = FUN_0043a610();
  return (float10)iVar1;
}


float10 __cdecl FUN_004eca50(int param_1)

{
  if (param_1 == 0) {
    return (float10)0;
  }
  if (*(int *)(DAT_0065b5cc + 0x124) != 0) {
    return (float10)*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
  }
  return (float10)0.0;
}


TypeDescriptor * FUN_004ecaa0(void)

{
  return &.P6ANPAVShip@@H@Z::RTTI_Type_Descriptor;
}


void __thiscall FUN_004ecab0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall FUN_004ecad0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  (**(code **)((int)this + 4))(*param_1,*param_2);
  return;
}


int __fastcall FUN_004ecaf0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x388) + 0x1b4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 3) && (iVar1 != 5)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


undefined * __fastcall FUN_004ecb20(undefined *param_1,undefined4 param_2)

{
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  code *local_8;
  
  switch(param_2) {
  case 0:
    local_8 = (code *)param_1;
    FUN_004fb9a0(param_1,0x4ed590);
    return extraout_ECX_00;
  case 1:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed590;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 2:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed5c0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 3:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed610;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 4:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f0020;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 5:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f6060;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 6:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f7440;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 7:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f07a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 8:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f0d50;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 9:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f0630;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 10:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed760;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0xb:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed6f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0xc:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2440;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0xd:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2770;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0xe:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f1340;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0xf:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f1680;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x10:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f12f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x11:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2150;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x12:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f1cd0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x13:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2dd0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x14:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2df0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x15:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8590;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x16:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f87a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x17:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f87f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x18:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2a40;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x19:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f4c10;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1a:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f2e10;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1b:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004efd30;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1c:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ef3a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1d:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ee670;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1e:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed7d0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x1f:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed9e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x20:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed8e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x21:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004edfc0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x22:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004eeb20;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x23:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004eed90;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x24:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ee360;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x25:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ee7c0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x26:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ee8f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x27:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ee870;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x28:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004eea10;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x29:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3190;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2a:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3450;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2b:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f5c90;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2c:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3520;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2d:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f37d0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2e:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3a40;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x2f:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3b30;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x30:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3be0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x31:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3c60;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x32:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3ce0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x33:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f40a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x34:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f3ea0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x35:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f44a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x36:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f47e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x37:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f5870;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x38:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f50f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x39:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f56e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3a:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f54d0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3b:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f5690;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3c:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8840;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3d:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f89f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3e:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f88f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x3f:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8aa0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x40:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8b50;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x41:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8c00;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x42:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8cb0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x43:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8d60;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x44:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8e10;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x45:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8f70;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x46:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9020;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x47:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f90d0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x48:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9180;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x49:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9230;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4a:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f92e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4b:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9410;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4c:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f94c0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4d:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8ec0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4e:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f84a0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x4f:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f84f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x50:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8540;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x51:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f85e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x52:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8690;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x53:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f86e0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x54:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f8750;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x55:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed570;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x56:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9960;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x57:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9990;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x58:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f99b0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x59:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed550;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5a:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004f9b00;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5b:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004fa420;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5c:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004fa460;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5d:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed590;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5e:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004ed590;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x5f:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004fab90;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x60:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004fa5f0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x61:
    *(undefined ***)param_1 = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(param_1 + 4) = FUN_004fb1c0;
    *(undefined **)(param_1 + 0x24) = param_1;
    return param_1;
  case 0x62:
    local_8 = FUN_004fb1e0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_004fb9d0(param_1,(int *)&local_8);
    return extraout_ECX;
  default:
    *(undefined4 *)(param_1 + 0x24) = 0;
    return param_1;
  }
}


undefined1 * __cdecl FUN_004ed550(undefined1 *param_1)

{
  FUN_00591e00(param_1,"`%%(c) 2019 by Flat Earth Games\n`7Objects in Space `%%%s");
  return param_1;
}


undefined1 * __cdecl FUN_004ed570(undefined1 *param_1)

{
  FUN_00591e00(param_1,
               "`7Hi and welcome to Objects in Space!\n\n`7For direct support, including sending along bug or crash reports - or just feedback - please email us at `%%objects@flatearthgames.com.au`7.\n\n%s\n\nLog files, mod folders and configuration can be found in your game data folder (PC) or Documents folder (Mac / Linux).\n\nYou can also suggest improvements on the forums at `%%objectsgame.com`7.\n\nThanks for playing - and happy flying!"
              );
  return param_1;
}


undefined1 * __cdecl FUN_004ed590(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  return param_1;
}


undefined1 * __cdecl FUN_004ed5c0(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  FUN_00591e00(param_1,"`%%%s");
  return param_1;
}


undefined1 * __cdecl FUN_004ed610(undefined1 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 0x254);
  pbVar5 = (byte *)(iVar1 + 0x78);
  uVar7 = *(uint *)(iVar1 + 0x8c);
  pbVar4 = pbVar5;
  if (0xf < uVar7) {
    pbVar4 = *(byte **)pbVar5;
  }
  uVar2 = *(uint *)(iVar1 + 0x88);
  uVar3 = FUN_004031f0(pbVar4,uVar2,(byte *)"Ventarii",8);
  if ((char)uVar3 == '\0') {
    pbVar4 = pbVar5;
    if (0xf < uVar7) {
      pbVar4 = *(byte **)pbVar5;
    }
    uVar3 = FUN_004031f0(pbVar4,uVar2,(byte *)"Harris-Wilson",0xd);
    if ((char)uVar3 == '\0') {
      if (0xf < uVar7) {
        pbVar5 = *(byte **)pbVar5;
      }
      uVar7 = FUN_004031f0(pbVar5,uVar2,(byte *)"Utopia Engineering",0x12);
      if ((char)uVar7 == '\0') {
        uVar7 = 0;
        pcVar6 = (char *)&PTR_005ce008;
      }
      else {
        uVar7 = 0x1b;
        pcVar6 = "CorpLogo_CassandraSmall.png";
      }
    }
    else {
      uVar7 = 0xf;
      pcVar6 = "CorpLogo_HW.png";
    }
  }
  else {
    uVar7 = 0x15;
    pcVar6 = "CorpLogo_Ventarii.png";
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,pcVar6,uVar7);
  return param_1;
}


undefined1 * __cdecl FUN_004ed6f0(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  pcVar3 = (&PTR_s_Standard_005dec9c)[iVar2];
  *param_1 = 0;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  return param_1;
}


undefined1 * __cdecl FUN_004ed760(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  pcVar3 = (&PTR_s_Standard_005dec9c)[iVar2];
  *param_1 = 0;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  return param_1;
}


void __cdecl FUN_004ed7d0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af588;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if ((*(int *)(param_2 + 0x1e4) == -1) || (iVar1 = *(int *)(param_2 + 0x1dc), iVar1 == -1)) {
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      param_1[4] = 0;
      param_1[5] = 0xf;
    }
    else {
      iVar3 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      iVar1 = *(int *)(iVar1 * 4 + 4 + *(int *)(iVar3 + 0xc));
      if (iVar1 == 0) {
        FUN_00591e00((undefined1 *)param_1,"%s_Empty");
      }
      else {
        FUN_004024e0(param_1,(undefined4 *)(*(int *)(iVar1 + 4) + 0x68));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004ed8e0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af588;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if ((*(int *)(param_2 + 0x1e4) == -1) || (iVar1 = *(int *)(param_2 + 0x1dc), iVar1 == -1)) {
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      param_1[4] = 0;
      param_1[5] = 0xf;
    }
    else {
      iVar3 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      iVar1 = *(int *)(*(int *)(iVar3 + 0xc) + 0x54 + iVar1 * 4);
      if (iVar1 == 0) {
        param_1[4] = 0;
        param_1[5] = 0xf;
        *(undefined1 *)param_1 = 0;
        FUN_00402690(param_1,"Slot_Addon_Empty",0x10);
      }
      else {
        FUN_004024e0(param_1,(undefined4 *)(*(int *)(iVar1 + 4) + 0x68));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004ed9e0(uint *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  float *pfVar9;
  char *pcVar10;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bedd0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004edf99;
  }
  local_4c = 0;
  uStack_48 = 0xf;
  local_5c = local_5c & 0xffffff00;
  local_8 = 0;
  uVar8 = *(uint *)(param_2 + 0x1dc);
  if (uVar8 == 0xffffffff) {
    FUN_00402690(&local_5c,&PTR_005ce008,0);
LAB_004eda6b:
    if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
      pcVar10 = "`&Comp.: `7empty\n";
      uVar8 = 0x11;
    }
    else {
      uVar8 = 0x4b;
      pcVar10 = "`*No component selected`& - unscrew then open module to access components.\n";
    }
    FUN_00403640(&local_5c,pcVar10,uVar8);
  }
  else {
    if ((int)uVar8 < 100) {
      iVar3 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      if ((((iVar3 == 0) || ((int)uVar8 < 0)) ||
          (iVar2 = *(int *)(*(int *)(iVar3 + 8) + 0xd8),
          (uint)(*(int *)(iVar2 + 0x54) - *(int *)(iVar2 + 0x50) >> 2) <= uVar8)) ||
         (*(int *)(*(int *)(**(int **)(iVar3 + 0xc) + 0x50) + uVar8 * 4) == 0)) goto LAB_004eda6b;
      piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,"`&Slot : `*%s\n");
      FUN_00413230(&local_5c,piVar4);
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
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pfVar9 = *(float **)(*(int *)(iVar3 + 0xc) + 4 + *(int *)(param_2 + 0x1dc) * 4);
    }
    else {
      uVar8 = uVar8 - 100;
      if (((int)uVar8 < 0) ||
         (iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8), iVar2 = *(int *)(iVar3 + 0x44),
         (uint)(*(int *)(iVar3 + 0x48) - iVar2 >> 2) <= uVar8)) {
        pfVar9 = (float *)0x0;
        FUN_00402690(&local_5c,"`&Slot : `7n/a\n",0xf);
      }
      else {
        pfVar9 = *(float **)(iVar2 + uVar8 * 4);
        FUN_00402690(&local_5c,"`&Slot : `7n/a\n",0xf);
      }
    }
    if (pfVar9 == (float *)0x0) goto LAB_004eda6b;
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`&Comp.: `%%%s %s\n");
    local_8._0_1_ = 1;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
    local_8._0_1_ = 0;
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
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`&Eff. : `%c+%.2f%%\n");
    local_8._0_1_ = 2;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
    local_8._0_1_ = 0;
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
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`&Pow. : `%c+%.2f%%\n");
    local_8._0_1_ = 3;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
    local_8._0_1_ = 0;
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
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`&Emm. : `%c+%.2f%%\n");
    local_8._0_1_ = 4;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
    local_8._0_1_ = 0;
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
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`&S.R. : `*%.2f\n");
    local_8._0_1_ = 5;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
    local_8._0_1_ = 0;
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8._0_1_ = 6;
    fVar1 = *pfVar9;
    if ((float)*(int *)((int)pfVar9[1] + 0x10) <= fVar1) {
      uVar8 = 9;
      if (fVar1 < (float)*(int *)((int)pfVar9[1] + 0x14)) {
        if (25.0 < fVar1) {
          pcVar10 = "`$damaged";
          uVar8 = 9;
        }
        else {
          pcVar10 = "`^damaged";
          uVar8 = 9;
        }
      }
      else {
        pcVar10 = "`0nominal";
      }
    }
    else {
      uVar8 = 8;
      pcVar10 = "`@broken";
    }
    FUN_00402690(local_2c,pcVar10,uVar8);
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2State: %s\n");
    local_8 = CONCAT31(local_8._1_3_,7);
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_5c,puVar6,puVar5[4]);
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
  *param_1 = local_5c;
  param_1[1] = uStack_58;
  param_1[2] = uStack_54;
  param_1[3] = uStack_50;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,local_4c);
LAB_004edf99:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004edfc0(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bee28;
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
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    uStack_7 = 0;
    if (*(int *)(param_2 + 0x1dc) == -1) {
      FUN_00402690(&local_44,&PTR_005ce008,0);
    }
    else if ((*(int *)(param_2 + 0x1dc) < 100) &&
            (iVar1 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4)), iVar1 != 0)
            ) {
      piVar2 = (int *)FUN_00591e00((undefined1 *)local_2c,"`&Slot : `*%s Addon\n");
      FUN_00413230(&local_44,piVar2);
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
      iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 0x54 + *(int *)(param_2 + 0x1dc) * 4);
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Comp.: `*%s\n");
        local_8 = 1;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(&local_44,puVar4,puVar3[4]);
        local_8 = 0;
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
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Manu.: `!%s\n");
        local_8 = 2;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(&local_44,puVar4,puVar3[4]);
        local_8 = 0;
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
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&State: `%c%.0f%%\n");
        local_8 = 3;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(&local_44,puVar4,puVar3[4]);
        local_8 = 0;
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
        if (*(int *)(*(int *)(iVar1 + 4) + 0x80) == 10) {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Adap.: `*%s\n");
          local_8 = 4;
          puVar4 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar4 = (undefined4 *)*puVar3;
          }
          FUN_00403640(&local_44,puVar4,puVar3[4]);
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
        }
      }
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_44;
    param_1[1] = uStack_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004ee360(uint *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bee78;
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
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0Components in storage: %d/%d\n");
    local_8._0_1_ = 1;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_44,puVar6,puVar5[4]);
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
    uVar9 = *(uint *)(param_2 + 0x1d4);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (((-1 < (int)uVar9) &&
        (iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8), iVar3 = *(int *)(iVar2 + 0x44),
        uVar9 < (uint)(*(int *)(iVar2 + 0x48) - iVar3 >> 2))) &&
       (pfVar4 = *(float **)(iVar3 + uVar9 * 4), pfVar4 != (float *)0x0)) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`!%s %s `%%(%s)\n");
      local_8._0_1_ = 2;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
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
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8._0_1_ = 3;
      fVar1 = *pfVar4;
      if ((float)*(int *)((int)pfVar4[1] + 0x10) <= fVar1) {
        uVar9 = 9;
        if (fVar1 < (float)*(int *)((int)pfVar4[1] + 0x14)) {
          if (25.0 < fVar1) {
            pcVar8 = "`$damaged";
          }
          else {
            pcVar8 = "`^damaged";
          }
        }
        else {
          pcVar8 = "`0nominal";
        }
      }
      else {
        uVar9 = 8;
        pcVar8 = "`@broken";
      }
      FUN_00402690(local_2c,pcVar8,uVar9);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2State: %s\n");
      local_8._0_1_ = 4;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
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
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004ee670(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005beeb0;
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
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if ((*(int *)(param_2 + 0x1e4) == -1) ||
       (iVar1 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4)), iVar1 == 0)) {
      FUN_00403640(&local_2c,"`7n/a",5);
    }
    else {
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7%s %s");
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_2c,puVar3,puVar2[4]);
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
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_2c;
    param_1[1] = uStack_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __cdecl FUN_004ee7c0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  if (*(int *)(param_2 + 0x50) != -1) {
    for (puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        (puVar1 != *(undefined4 **)(DAT_0065b5cc + 0x40) &&
        (*(int *)*puVar1 != *(int *)(param_2 + 0x50))); puVar1 = puVar1 + 1) {
    }
    FUN_00591e00(param_1,"`2Dst: `7%s");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"`2Dst: `8none",0xd);
  return param_1;
}


undefined1 * __cdecl FUN_004ee870(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  if (*(float *)(param_2 + 0x5c) <= 0.0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,"`2Sol.: `80%",0xc);
    return param_1;
  }
  FUN_00591e00(param_1,"`2Sol.: `%c%.0f%%");
  return param_1;
}


undefined1 * __cdecl FUN_004ee8f0(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  if ((0.0 <= *(float *)(param_2 + 0x58)) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x14), iVar1 != 0)) {
    FUN_00437c60(*(int **)(*(int *)(*(int *)(iVar1 + 4) + 0x14) + 0xc));
    FUN_00591e00(param_1,"`2Spin: `%c%d%%");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"`2Spin: `80%",0xc);
  return param_1;
}


void __cdecl FUN_004eea10(undefined1 *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2608;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_0050bf30(param_2);
  if (iVar1 < 4) {
    uVar4 = 9;
    pcVar3 = "`0nominal";
  }
  else if (iVar1 < 0x15) {
    uVar4 = 0xc;
    pcVar3 = "`3light dmg.";
  }
  else if (iVar1 < 0x33) {
    uVar4 = 0xb;
    pcVar3 = "`$med. dmg.";
  }
  else if (iVar1 < 0x4c) {
    uVar4 = 0xc;
    pcVar3 = "`^heavy dmg.";
  }
  else {
    uVar4 = 10;
    pcVar3 = "`@CRITICAL";
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,pcVar3,uVar4);
  local_8 = 0;
  FUN_00591e00(param_1,"`%%Hull: %s");
  if (0xf < local_18) {
    pvVar2 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar2 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004eeb20(uint *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bef09;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x1dc) < 100)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004eed69;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  pfVar2 = *(float **)
            (*(int *)(*(int *)(param_2 + 0x1f8) + 0x44) + -400 + *(int *)(param_2 + 0x1dc) * 4);
  if (*pfVar2 == 100.0) {
    FUN_00403640(&local_44,"`2State: `7no repair needed",0x1b);
  }
  else if (*(float *)(param_2 + 0x154) == 0.0) {
    local_8 = 1;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"`0nominal",9);
    fVar1 = *pfVar2;
    if ((float)*(int *)((int)pfVar2[1] + 0x10) <= fVar1) {
      if (fVar1 < 25.0) {
        uVar7 = 0xe;
        pcVar6 = "`@heavy damage";
        goto LAB_004eec8d;
      }
      if (fVar1 < 50.0) {
        uVar7 = 8;
        pcVar6 = "`^damage";
        goto LAB_004eec8d;
      }
      if (fVar1 < (float)*(int *)((int)pfVar2[1] + 0x14)) {
        uVar7 = 0xe;
        pcVar6 = "`$light damage";
        goto LAB_004eec8d;
      }
    }
    else {
      uVar7 = 0x10;
      pcVar6 = "`4non-functional";
LAB_004eec8d:
      FUN_00402690(local_2c,pcVar6,uVar7);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2State: %s");
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
  }
  else {
    FUN_00403640(&local_44,"`2State: `$repairing",0x14);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_44;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
LAB_004eed69:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004eed90(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  float fVar8;
  float fVar9;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bef80;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x1e4) == -1)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004ef37f;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  iVar3 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Model: `0%s %s\n");
    local_8 = 1;
    puVar5 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar5 = (undefined4 *)*puVar4;
    }
    FUN_00403640(&local_44,puVar5,puVar4[4]);
    local_8 = 0;
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
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Type : `%%%s\n");
    local_8 = 2;
    puVar5 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar5 = (undefined4 *)*puVar4;
    }
    FUN_00403640(&local_44,puVar5,puVar4[4]);
    local_8 = 0;
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
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Slot : `!%s\n");
    local_8 = 3;
    puVar5 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar5 = (undefined4 *)*puVar4;
    }
    FUN_00403640(&local_44,puVar5,puVar4[4]);
    local_8 = 0;
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
    fVar8 = *(float *)(*(int *)(iVar3 + 8) + 0xbc);
    fVar9 = fVar8;
    FUN_00438020(*(int **)(iVar3 + 0xc));
    if (fVar9 * fVar8 + fVar8 <= 0.0) {
      fVar8 = *(float *)(*(int *)(iVar3 + 8) + 0xc0);
      fVar9 = fVar8;
      FUN_00438020(*(int **)(iVar3 + 0xc));
      fVar8 = fVar9 * fVar8 + fVar8;
      if (fVar8 <= 0.0) {
        FUN_004ae5e0(iVar3);
        if (fVar8 <= 0.0) goto LAB_004ef16d;
        FUN_004ae5e0(iVar3);
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Gen. : `$%.2fkW/s\n");
        local_8 = 6;
      }
      else {
        FUN_00438020(*(int **)(iVar3 + 0xc));
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Draw : `$%.2fkW/s\n");
        local_8 = 5;
      }
      FUN_00403490(&local_44,puVar5);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4), uVar2 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_004ef124;
        goto LAB_004ef163;
      }
    }
    else {
      FUN_00438020(*(int **)(iVar3 + 0xc));
      FUN_00438020(*(int **)(iVar3 + 0xc));
      puVar4 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`&Draw : `$%.2fkW/s`2/`$%.2fkW/s\n");
      local_8 = 4;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_004ef163:
        local_8 = 0;
        FUN_005adb3f(pvVar7);
      }
    }
LAB_004ef16d:
    fVar9 = (float)*(int *)(*(int *)(iVar3 + 8) + 0xcc);
    fVar8 = fVar9;
    FUN_00437ea0(*(int **)(iVar3 + 0xc));
    if (fVar8 * fVar9 + fVar9 <= 0.0) {
      FUN_00437ea0(*(int **)(iVar3 + 0xc));
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Emm. : `$%.2fdBw\n");
      local_8 = 8;
      uVar1 = puVar5[5];
    }
    else {
      FUN_00437ea0(*(int **)(iVar3 + 0xc));
      FUN_00437ea0(*(int **)(iVar3 + 0xc));
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Emm. : `$%.2fdBw`2/`$%.2fdBw\n")
      ;
      local_8 = 7;
      uVar1 = puVar5[5];
    }
    puVar4 = puVar5;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_44,puVar4,puVar5[4]);
    local_8 = 0;
    uVar2 = local_8;
    local_8 = 0;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_004ef124;
      FUN_005adb3f(pvVar7);
    }
    iVar6 = FUN_00437c60(*(int **)(iVar3 + 0xc));
    if (iVar6 < 0x65) {
      FUN_00437c60(*(int **)(iVar3 + 0xc));
    }
    FUN_00437c60(*(int **)(iVar3 + 0xc));
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Eff. : `%c%d%%\n");
    local_8 = 9;
    puVar5 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar5 = (undefined4 *)*puVar4;
    }
    FUN_00403640(&local_44,puVar5,puVar4[4]);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4), uVar2 = local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
LAB_004ef124:
        local_8 = uVar2;
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
LAB_004ef37f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004ef3a0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  uint uVar9;
  uint local_48;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf018;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004efd11;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  if ((*(int *)(param_2 + 0x1e4) == -1) ||
     (iVar2 = FUN_005225b0(*(void **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4)), iVar2 == 0)) {
    FUN_00403640(&local_2c,"`7n/a",5);
  }
  else {
    if (*(char *)(iVar2 + 99) == '\0') {
      pcVar8 = "`0PM: `8off\n";
      uVar9 = 0xc;
    }
    else if (*(char *)(iVar2 + 0x62) == '\0') {
      uVar9 = 0xf;
      pcVar8 = "`0PM: `7normal\n";
    }
    else {
      uVar9 = 0xd;
      pcVar8 = "`0PM: `$high\n";
    }
    FUN_00403640(&local_2c,pcVar8,uVar9);
    FUN_00403640(&local_2c,"\n`7`aq\n",7);
    if (*(float *)(iVar2 + 0x78) == 0.0) {
      FUN_00403640(&local_2c,"`0Em: `7nil\n",0xc);
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Em: `!%.2f`2dBw\n");
      local_8 = 1;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004ef4fe:
          local_8 = 0;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
    FUN_00437ea0(*(int **)(iVar2 + 0xc));
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0NE: `!%.2f`2dBw\n");
    local_8 = 2;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_2c,puVar4,puVar3[4]);
    local_8 = 0;
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
    fVar6 = (float)*(int *)(*(int *)(iVar2 + 8) + 0xcc);
    fVar7 = fVar6;
    FUN_00437ea0(*(int **)(iVar2 + 0xc));
    if (fVar7 * fVar6 + fVar6 <= 0.0) {
      FUN_00403640(&local_2c,"`0HE: `8n/a\n",0xc);
    }
    else {
      FUN_00437ea0(*(int **)(iVar2 + 0xc));
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0HE: `!%.2f`2dBw\n");
      local_8 = 3;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
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
    }
    if (*(float *)(iVar2 + 0x78) == 0.0) {
      FUN_00403640(&local_2c,"`0Fq: `7n/a\n",0xc);
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Fq: `#%d`2hz\n");
      local_8 = 4;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
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
    }
    FUN_00403640(&local_2c,"\n`7`ap\n",7);
    fVar7 = *(float *)(*(int *)(iVar2 + 8) + 200);
    if (fVar7 <= 0.0) {
      pcVar8 = "`0Pg: `7n/a\n";
LAB_004ef815:
      FUN_00403640(&local_2c,pcVar8,0xc);
    }
    else {
      if ((*(char *)(iVar2 + 99) == '\0') || (FUN_004ae5e0(iVar2), fVar7 == 0.0)) {
        pcVar8 = "`0Pg: `7nil\n";
        goto LAB_004ef815;
      }
      if (*(char *)(iVar2 + 99) == '\0') {
        fVar7 = 0.0;
      }
      else {
        FUN_004ae5e0(iVar2);
        if (*(char *)(iVar2 + 99) == '\0') {
          fVar7 = 0.0;
        }
        else {
          FUN_004ae5e0(iVar2);
        }
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Pg: `%c%.2f`2kW/s\n");
      local_8 = 5;
      FUN_00403490(&local_2c,puVar4);
      local_8 = 0;
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
    }
    FUN_004ae1b0(iVar2);
    if (fVar7 == 0.0) {
      FUN_00403640(&local_2c,"`0Pd: `7nil\n",0xc);
    }
    else {
      FUN_004ae1b0(iVar2);
      FUN_004ae1b0(iVar2);
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Pd: `%c%.2f`2kW/s\n");
      local_8 = 6;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
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
    }
    FUN_00403640(&local_2c,"\n`7`ao\n",7);
    if (*(float *)(*(int *)(iVar2 + 8) + 0xc4) == 0.0) {
      FUN_00403640(&local_2c,"`0Cp: `7n/a\n",0xc);
      FUN_00403640(&local_2c,"`0Mp: `7n/a\n",0xc);
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Cp: `%c%.2f`2kw\n");
      local_8 = 7;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
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
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Mp: `$%.2f`2kw\n");
      local_8 = 8;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar4,puVar3[4]);
      local_8 = 0;
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
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`0Sh: `%c%d%%\n");
    local_8 = 9;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_2c,puVar4,puVar3[4]);
    local_8 = 0;
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
    FUN_00403640(&local_2c,"\n`7`ar\n",7);
    local_48 = 0;
    iVar1 = *(int *)(*(int *)(iVar2 + 8) + 0xd8);
    if (*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50) >> 2 != 0) {
      do {
        if (*(int *)(local_48 * 4 + 4 + *(int *)(iVar2 + 0xc)) == 0) {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%%02d: `8%s");
          local_8 = 10;
        }
        else if (*(char *)(iVar2 + 99) == '\0') {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%%02d: `%c%s");
          local_8 = 0xb;
        }
        else {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%%02d: `7%s");
          local_8 = 0xc;
        }
        puVar3 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar3 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_2c,puVar3,puVar4[4]);
        local_8 = 0;
        if (0xf < local_30) {
          pvVar5 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004ef4fe;
          FUN_005adb3f(pvVar5);
        }
        iVar1 = *(int *)(local_48 * 4 + 0x54 + *(int *)(iVar2 + 0xc));
        if (iVar1 == 0) {
          pcVar8 = "\n";
          uVar9 = 1;
LAB_004efcc6:
          FUN_00403640(&local_2c,pcVar8,uVar9);
        }
        else {
          iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x80);
          if (iVar1 == 5) {
            uVar9 = 7;
            pcVar8 = " `!(b)\n";
            goto LAB_004efcc6;
          }
          if (iVar1 == 10) {
            pcVar8 = " `!(a)\n";
            uVar9 = 7;
            goto LAB_004efcc6;
          }
          if (iVar1 == 0xb) {
            pcVar8 = " `!(s)\n";
            uVar9 = 7;
            goto LAB_004efcc6;
          }
        }
        local_48 = local_48 + 1;
        iVar1 = *(int *)(*(int *)(iVar2 + 8) + 0xd8);
      } while (local_48 < (uint)(*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50) >> 2));
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004efd11:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004efd30(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bf060;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    iVar5 = *(int *)(param_2 + 0x1e4);
    if (iVar5 == -1) {
      FUN_00403640(&local_44,"`0**no module selected**",0x18);
    }
    else {
      piVar3 = (int *)FUN_005225b0(*(void **)(param_2 + 0x40),iVar5);
      if (piVar3 == (int *)0x0) {
        if (iVar5 < 0) {
          FUN_00403640(&local_44,"`0**No module selected**",0x18);
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`0Module: `2%s %s%s\n");
        local_8._0_1_ = 1;
        puVar6 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar6 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_44,puVar6,puVar4[4]);
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
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (*(char *)((int)piVar3 + 99) == '\0') {
          iVar5 = FUN_00437440((int *)piVar3[3]);
          if (*(int *)(piVar3[2] + 0xdc) < iVar5) {
            FUN_00403640(local_2c,&DAT_005e746c,2);
          }
          else if (iVar5 < 0x33) {
            if (*(int *)(piVar3[2] + 0xe0) < iVar5) {
              FUN_00403640(local_2c,&DAT_00616638,2);
            }
            else {
              FUN_00403640(local_2c,&DAT_0061663c,2);
            }
          }
          else {
            FUN_00403640(local_2c,&DAT_005e6754,2);
          }
        }
        else {
          cVar1 = (**(code **)(*piVar3 + 0x18))(uVar2);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*piVar3 + 0x14))();
            if (cVar1 == '\0') {
              uVar2 = 0x12;
              pcVar8 = "`!fully functional";
            }
            else {
              uVar2 = 0x10;
              pcVar8 = "`@non-functional";
            }
          }
          else {
            uVar2 = 9;
            pcVar8 = "`$damaged";
          }
          FUN_00402690(local_2c,pcVar8,uVar2);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`0State: %s");
        local_8 = CONCAT31(local_8._1_3_,3);
        puVar6 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar6 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_44,puVar6,puVar4[4]);
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
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_44;
    param_1[1] = uStack_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
