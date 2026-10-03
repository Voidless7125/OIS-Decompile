#include "../ois_server.exe.h"


void __fastcall FUN_00590500(int param_1)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_00590570(param_1);
  free(*(void **)(param_1 + 0x20));
  FUN_00590770((void *)(param_1 + 0x14),&local_14,(int *)**(int **)(param_1 + 0x14),
               *(int **)(param_1 + 0x14));
  FUN_005adb3f(*(void **)(param_1 + 0x14));
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00590570(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = param_1;
  FUN_00590610((int *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  iVar3 = 0;
  iVar2 = FUN_00412ea0();
  if (0 < *(int *)(iVar2 + 0x74)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4) != 0) {
        iVar2 = FUN_00412ea0();
        local_8 = *(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4);
        if (local_8 != 0) {
          piVar1 = *(int **)(iVar2 + 0x88);
          if (*(int **)(iVar2 + 0x8c) == piVar1) {
            FUN_004141e0((void *)(iVar2 + 0x84),piVar1,&local_8);
          }
          else {
            *piVar1 = local_8;
            *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + 4;
          }
        }
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = FUN_00412ea0();
    } while (iVar3 < *(int *)(iVar2 + 0x74));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


void __fastcall FUN_00590610(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c8ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  piVar4 = *(int **)(iVar1 + 4);
  iVar3 = iVar1;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      FUN_00590730((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_005adb3f(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005906a0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  
  uVar5 = param_1 * 4;
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (param_1 < 0x40000000) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_005adb0f(uVar5);
      }
      goto LAB_0059070a;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar3 = uVar5 + 0x23;
  if (uVar3 <= uVar5) {
    uVar3 = 0xffffffff;
  }
  iVar4 = FUN_005adb0f(uVar3);
  if (iVar4 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(iVar4 + 0x23U & 0xffffffe0);
  *(int *)((int)_Dst - 4) = iVar4;
LAB_0059070a:
  memmove(_Dst,*(void **)this,*(int *)((int)this + 4) - (int)*(void **)this);
  FUN_00414350(this,(int)_Dst,iVar1 - iVar2 >> 2,param_1);
  return;
}


void FUN_00590730(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00590730((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_005adb3f(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


undefined4 * __thiscall FUN_00590770(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_2;
  if ((param_2 == (int *)**(int **)this) && (param_3 == *(int **)this)) {
    FUN_00590610(this);
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar5 != param_3) {
    param_2 = (int *)piVar5[2];
    if (*(char *)((int)param_2 + 0xd) == '\0') {
      cVar1 = *(char *)(*param_2 + 0xd);
      piVar2 = (int *)*param_2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar4 = (int *)piVar5[1];
      piVar2 = piVar5;
      while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar4 = (int *)param_2[1];
        piVar2 = param_2;
      }
    }
    if (*(char *)(piVar5[2] + 0xd) == '\0') {
      piVar2 = *(int **)piVar5[2];
      cVar1 = *(char *)((int)piVar2 + 0xd);
      while (cVar1 == '\0') {
        piVar2 = (int *)*piVar2;
        cVar1 = *(char *)((int)piVar2 + 0xd);
      }
    }
    else {
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar4 = (int *)piVar5[1];
      piVar2 = piVar5;
      while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
      }
    }
    piVar5 = FUN_004136e0(this,piVar5);
    FUN_005adb3f(piVar5);
    piVar5 = param_2;
  }
  *param_1 = piVar5;
  return param_1;
}


void FUN_00590860(void)

{
  int iVar1;
  
  iVar1 = FUN_005adb0f(0x14);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}


void __fastcall FUN_00590880(uint *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  puVar4 = (undefined4 *)*param_1;
  uVar3 = (param_1[1] - (int)puVar4) + 3 >> 2;
  if ((undefined4 *)param_1[1] < puVar4) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      FUN_005adb3f((void *)*puVar4);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != uVar3);
    puVar4 = (undefined4 *)*param_1;
  }
  param_1[1] = (uint)puVar4;
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffc)) &&
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


undefined4 * __fastcall FUN_00590920(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *local_8;
  
  if (*param_1 == param_1[1]) {
    FUN_00591070("DETAIL","POOL: insufficient objects in pool");
    if ((char)param_1[3] != '\0') {
      return (undefined4 *)0x0;
    }
    FUN_00591070("DETAIL","POOL: doubling capacity, consider increasing the default capacity");
    uVar3 = param_1[4];
    uVar2 = uVar3 * 2;
    param_1[4] = uVar2;
    if ((uint)(param_1[2] - *param_1 >> 2) < uVar2) {
      if (0x3fffffff < uVar2) {
                    // WARNING: Subroutine does not return
        FUN_00403b30();
      }
      FUN_005906a0(param_1,uVar2);
      uVar2 = param_1[4];
    }
    if (uVar3 < uVar2) {
      do {
        local_8 = (undefined4 *)FUN_005adb0f(0x18);
        *local_8 = 0;
        local_8[1] = 0;
        local_8[2] = 0;
        local_8[3] = 0;
        *(undefined8 *)(local_8 + 4) = 0;
        puVar1 = (undefined4 *)param_1[1];
        if ((undefined4 *)param_1[2] == puVar1) {
          FUN_004141e0(param_1,puVar1,&local_8);
        }
        else {
          *puVar1 = local_8;
          param_1[1] = param_1[1] + 4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[4]);
    }
  }
  puVar1 = *(undefined4 **)(param_1[1] + -4);
  param_1[1] = param_1[1] + -4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  return puVar1;
}


undefined4 * __thiscall
FUN_00590a10(void *this,undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uStack_30;
  undefined4 local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cada0;
  local_10 = ExceptionList;
  uStack_30 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = local_1c >> 8;
  local_1c = local_1c & 0xffffff00;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_00590d80(this,param_1,'\x01',*(undefined4 **)this,param_3);
    ExceptionList = local_10;
    return param_1;
  }
  piVar3 = *(int **)this;
  if (param_2 == (int *)*piVar3) {
    if (*(float *)(*param_3 + 0x10) < *(float *)(param_2[4] + 0x10) ||
        *(float *)(*param_3 + 0x10) == *(float *)(param_2[4] + 0x10)) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00590d80(this,param_1,'\x01',param_2,param_3);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if (param_2 == piVar3) {
      fVar1 = *(float *)(((undefined4 *)piVar3[2])[4] + 0x10);
      if (fVar1 < *(float *)(*param_3 + 0x10) || fVar1 == *(float *)(*param_3 + 0x10)) {
        local_14 = (undefined1 *)&uStack_30;
        FUN_00590d80(this,param_1,'\0',(undefined4 *)piVar3[2],param_3);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_00590c7f;
    }
    fVar1 = *(float *)(*param_3 + 0x10);
    if (fVar1 <= *(float *)(param_2[4] + 0x10)) {
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        piVar7 = (int *)*param_2;
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar2 = *(char *)(piVar7[2] + 0xd);
          piVar4 = (int *)piVar7[2];
          while (cVar2 == '\0') {
            cVar2 = *(char *)(piVar4[2] + 0xd);
            piVar7 = piVar4;
            piVar4 = (int *)piVar4[2];
          }
        }
        else {
          cVar2 = *(char *)(param_2[1] + 0xd);
          piVar6 = (int *)param_2[1];
          piVar4 = param_2;
          while ((piVar7 = piVar6, cVar2 == '\0' && (piVar4 == (int *)*piVar7))) {
            cVar2 = *(char *)(piVar7[1] + 0xd);
            piVar6 = (int *)piVar7[1];
            piVar4 = piVar7;
          }
          if (*(char *)((int)piVar4 + 0xd) != '\0') {
            piVar7 = piVar4;
          }
        }
      }
      else {
        piVar7 = (int *)param_2[2];
      }
      if (*(float *)(piVar7[4] + 0x10) <= fVar1) {
        if (*(char *)(piVar7[2] + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_30;
          FUN_00590d80(this,param_1,'\x01',param_2,param_3);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_30;
        FUN_00590d80(this,param_1,'\0',piVar7,param_3);
        ExceptionList = local_10;
        return param_1;
      }
    }
    if (*(float *)(param_2[4] + 0x10) <= fVar1) {
      piVar7 = (int *)param_2[2];
      local_15 = *(char *)((int)piVar7 + 0xd);
      if (local_15 == '\0') {
        cVar2 = *(char *)(*piVar7 + 0xd);
        piVar4 = (int *)*piVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*piVar4 + 0xd);
          piVar7 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar2 = *(char *)(param_2[1] + 0xd);
        piVar6 = (int *)param_2[1];
        piVar4 = param_2;
        while ((piVar7 = piVar6, cVar2 == '\0' && (piVar4 == (int *)piVar7[2]))) {
          cVar2 = *(char *)(piVar7[1] + 0xd);
          piVar6 = (int *)piVar7[1];
          piVar4 = piVar7;
        }
      }
      if ((piVar7 == piVar3) ||
         (fVar1 < *(float *)(piVar7[4] + 0x10) || fVar1 == *(float *)(piVar7[4] + 0x10))) {
        if (local_15 == '\0') {
          FUN_00590d80(this,param_1,'\x01',piVar7,param_3);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_30;
        FUN_00590d80(this,param_1,'\0',param_2,param_3);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_1c = CONCAT31((int3)uVar5,1);
LAB_00590c7f:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_30;
  puVar8 = (undefined4 *)FUN_00590cc0(this,&local_20,(char)local_1c,param_3,param_4);
  *param_1 = *puVar8;
  ExceptionList = local_10;
  return param_1;
}


void __thiscall
FUN_00590cc0(void *this,undefined4 *param_1,char param_2,int *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cadc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar3 = *(undefined4 **)this;
  local_18 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    fVar2 = *(float *)(*param_3 + 0x10);
    puVar4 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar4;
      if (param_2 == '\0') {
        local_18 = fVar2 < *(float *)(puVar3[4] + 0x10);
      }
      else {
        pfVar1 = (float *)(puVar3[4] + 0x10);
        local_18 = fVar2 < *pfVar1 || fVar2 == *pfVar1;
      }
      if (local_18 == false) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  puVar3 = (undefined4 *)FUN_00590d80(this,(undefined4 *)&param_2,local_18,puVar3,param_3);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


void __thiscall
FUN_00590d80(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  if (0xcccccca < *(uint *)((int)this + 4)) {
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  piVar4 = (int *)FUN_00590fb0(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar4[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar4;
    **(undefined4 **)this = piVar4;
    iVar5 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar4;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar4;
      }
      goto LAB_00590de5;
    }
    param_3[2] = piVar4;
    iVar5 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar5 + 8)) goto LAB_00590de5;
  }
  *(int **)(iVar5 + 8) = piVar4;
LAB_00590de5:
  cVar1 = *(char *)(piVar4[1] + 0xc);
  piVar8 = piVar4;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = piVar4;
      return;
    }
    piVar9 = (int *)piVar8[1];
    piVar7 = piVar8 + 1;
    piVar10 = piVar9 + 1;
    iVar5 = *(int *)piVar9[1];
    if (piVar9 == (int *)iVar5) {
      iVar5 = ((int *)piVar9[1])[2];
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar2 = (int *)piVar9[2];
        if (piVar8 == piVar2) {
          piVar9[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar9;
          }
          piVar2[1] = *piVar10;
          if (piVar9 == (int *)*(int *)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar2;
            *piVar2 = (int)piVar9;
            *piVar10 = (int)piVar2;
            piVar8 = piVar9;
            piVar9 = piVar2;
            piVar7 = piVar10;
          }
          else {
            piVar8 = (int *)*piVar10;
            if (piVar9 == (int *)*piVar8) {
              *piVar8 = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
            else {
              piVar8[2] = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
          }
        }
        *(undefined1 *)(piVar9 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*piVar7 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar9 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar9[2]) {
            piVar9[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar9 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00590f77;
      }
LAB_00590ecb:
      *(undefined1 *)(piVar9 + 3) = 1;
      *(undefined1 *)(iVar5 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar8 = *(int **)(*piVar7 + 4);
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_00590ecb;
      piVar2 = (int *)*piVar9;
      piVar6 = piVar9;
      if (piVar8 == piVar2) {
        *piVar9 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar9;
        }
        piVar2[1] = *piVar10;
        if (piVar9 == (int *)*(int *)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar10;
          if (piVar9 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar9;
        *piVar10 = (int)piVar2;
        piVar6 = piVar2;
        piVar8 = piVar9;
        piVar7 = piVar10;
      }
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar7 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar10;
      }
      else {
        piVar9 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar9) {
          *piVar9 = (int)piVar10;
        }
        else {
          piVar9[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00590f77:
      piVar7[1] = (int)piVar10;
    }
    cVar1 = *(char *)(piVar8[1] + 0xc);
  } while( true );
}


void __thiscall FUN_00590fb0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00590fd0(this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *param_1;
  return;
}


void __fastcall FUN_00590fd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x14);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}


void __thiscall FUN_00590ff0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_004219e0(param_1,param_2,this,&stack0x0000000c);
  return;
}


void __fastcall FUN_00591010(Vec2 *param_1,Vec2 *param_2)

{
  cocos2d::Vec2::getDistanceSq(param_1,param_2);
  return;
}


void __cdecl FUN_00591070(undefined4 param_1,char *param_2)

{
  uint uVar1;
  DWORD DVar2;
  char ****ppppcVar3;
  FileUtils **ppFVar4;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  code *pcVar5;
  __time64_t local_43c;
  undefined4 local_430;
  char ***local_42c [4];
  undefined4 local_41c;
  uint local_418;
  wchar_t local_414 [256];
  wchar_t local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cae02;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_430 = 0;
  local_43c = _time64((__time64_t *)0x0);
  _localtime64(&local_43c);
  pcVar5 = log_exref;
  if (_File_0065b3f8 == (FILE *)0x0) {
    ppFVar4 = &this_006558b8;
    if (0xf < DAT_006558cc) {
      ppFVar4 = (FileUtils **)this_006558b8;
    }
    uVar1 = FUN_004031f0((byte *)ppFVar4,DAT_006558c8,(byte *)&PTR_005ce008,0);
    if ((char)uVar1 != '\0') {
      FUN_0058ebc0();
    }
    local_8 = 0;
    FUN_0058f040((int *)local_42c);
    local_430 = 1;
    FUN_00403640(local_42c,&DAT_0062dd78,4);
    ppppcVar3 = local_42c;
    if (0xf < local_418) {
      ppppcVar3 = (char ****)local_42c[0];
    }
    mbstowcs(local_214,(char *)ppppcVar3,0x100);
    DVar2 = GetFileAttributesW(local_214);
    if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
      ppppcVar3 = local_42c;
      if (0xf < local_418) {
        ppppcVar3 = (char ****)local_42c[0];
      }
      mbstowcs(local_414,(char *)ppppcVar3,0x100);
      CreateDirectoryW(local_414,(LPSECURITY_ATTRIBUTES)0x0);
    }
    FUN_00403640(local_42c,"DebugLog_Server.txt",0x13);
    ppppcVar3 = local_42c;
    if (0xf < local_418) {
      ppppcVar3 = (char ****)local_42c[0];
    }
    _File_0065b3f8 = fopen((char *)ppppcVar3,(char *)&_Mode_0060eae0);
    pcVar5 = log_exref;
    ppppcVar3 = local_42c;
    if (0xf < local_418) {
      ppppcVar3 = (char ****)local_42c[0];
    }
    cocos2d::log("Opened debug log at \'%s\'",ppppcVar3);
    FUN_00590ff0(this,_File_0065b3f8,"Objects in Space\n");
    FUN_00590ff0(this_00,_File_0065b3f8,"Build %s (windows)\n");
    FUN_00590ff0(this_01,_File_0065b3f8,"(c) 2019 Flat Earth Games Pty Ltd\n");
    FUN_00590ff0(this_02,_File_0065b3f8,"SERVER mode\n");
    FUN_00590ff0(this_03,_File_0065b3f8,"Play began: %04d-%02d-%02d %02d:%02d:%02d\n\n");
    local_8 = 0xffffffff;
    if (0xf < local_418) {
      ppppcVar3 = (char ****)local_42c[0];
      if (0xfff < local_418 + 1) {
        ppppcVar3 = (char ****)local_42c[0][-1];
        if ((char *)0x1f < (char *)((int)local_42c[0] + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppppcVar3);
    }
    local_41c = 0;
    local_418 = 0xf;
    local_42c[0] = (char ***)((uint)local_42c[0] & 0xffffff00);
  }
  if (*param_2 != '\0') {
    FUN_0042bbf0(param_2,&stack0x0000000c);
    FUN_00590ff0(this_04,_File_0065b3f8,"[%02d:%02d:%02d] [%s]: %s\n");
    (*pcVar5)("[%s]: %s",param_1,&DAT_0065c428);
    fflush(_File_0065b3f8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_00591360(int param_1)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % param_1;
}


int __fastcall FUN_00591370(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  if ((iVar4 == 0) && (param_1[2] == 0)) {
    return 0;
  }
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  iVar5 = 0;
  if ((0 < iVar2) && (0 < iVar4)) {
    do {
      iVar3 = rand();
      iVar5 = iVar5 + iVar3 % iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1 + iVar5;
}


int __fastcall FUN_005913c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((0 < param_2) && (0 < param_1)) {
    do {
      iVar1 = rand();
      iVar2 = iVar2 + iVar1 % param_2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return param_3 + iVar2;
}


int * __thiscall FUN_005913f0(void *this,byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  byte **ppbVar6;
  int iVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff98;
  byte *pbVar8;
  int local_40 [3];
  char *local_34 [3];
  int local_28;
  char *local_24;
  int local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = in_stack_00000018;
  pbVar1 = param_1;
  puStack_c = &LAB_005cae48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar6 = (byte **)param_1;
  }
  uVar3 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    ppbVar6 = &param_1;
    if (0xf < uVar2) {
      ppbVar6 = (byte **)pbVar1;
    }
    uVar3 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,&DAT_0061aa70,3);
    if ((char)uVar3 == '\0') {
      FUN_004024e0(&stack0xffffff98,&param_1);
      FUN_00592d70(local_34,'d',in_stack_ffffff98);
      local_8._0_1_ = 1;
      pcVar5 = local_34[0];
      if (0xf < *(uint *)(local_34[0] + 0x14)) {
        pcVar5 = *(char **)local_34[0];
      }
      local_28 = atoi(pcVar5);
      iVar7 = 0;
      FUN_004024e0(&stack0xffffff98,(undefined4 *)(local_34[0] + 0x18));
      FUN_00592d70(&local_24,'+',in_stack_ffffff98);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_11 = '\0';
      if ((uint)((local_20 - (int)local_24) / 0x18) < 2) {
        local_11 = '\x01';
        FUN_004024e0(&stack0xffffff98,(undefined4 *)(local_34[0] + 0x18));
        piVar4 = (int *)FUN_00592d70(local_40,'-',in_stack_ffffff98);
        FUN_0042b8c0(&local_24,piVar4);
        FUN_004025a0(local_40);
      }
      pcVar5 = local_24;
      if (0xf < *(uint *)(local_24 + 0x14)) {
        pcVar5 = *(char **)local_24;
      }
      local_18 = atoi(pcVar5);
      if (1 < (uint)((local_20 - (int)local_24) / 0x18)) {
        pcVar5 = local_24 + 0x18;
        if (local_11 == '\0') {
          if (0xf < *(uint *)(local_24 + 0x2c)) {
            pcVar5 = *(char **)pcVar5;
          }
          iVar7 = atoi(pcVar5);
        }
        else {
          if (0xf < *(uint *)(local_24 + 0x2c)) {
            pcVar5 = *(char **)pcVar5;
          }
          iVar7 = atoi(pcVar5);
          iVar7 = -iVar7;
        }
      }
      *(int *)this = local_28;
      *(int *)((int)this + 4) = local_18;
      *(int *)((int)this + 8) = iVar7;
      FUN_004025a0((int *)&local_24);
      FUN_004025a0((int *)local_34);
      if (in_stack_00000018 < 0x10) {
        ExceptionList = local_10;
        return this;
      }
      pbVar8 = param_1;
      if ((0xfff < in_stack_00000018 + 1) &&
         (pbVar8 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_00591611;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (uVar2 < 0x10) {
    ExceptionList = local_10;
    return this;
  }
  pbVar8 = pbVar1;
  if ((0xfff < uVar2 + 1) &&
     (pbVar8 = *(byte **)(pbVar1 + -4), (byte *)0x1f < pbVar1 + (-4 - (int)*(byte **)(pbVar1 + -4)))
     ) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
LAB_00591611:
  FUN_005adb3f(pbVar8);
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00591630(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  char ****ppppcVar4;
  char *pcVar5;
  int iVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cae80;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_stack_00000014 < param_2) {
    ppcVar2 = &param_3;
    if (0xf < in_stack_00000018) {
      ppcVar2 = (char **)param_3;
    }
    iVar6 = param_1 - (int)ppcVar2;
    do {
      cVar1 = *(char *)ppcVar2;
      ppcVar2 = (char **)((int)ppcVar2 + 1);
      *(char *)(iVar6 + -1 + (int)ppcVar2) = cVar1;
    } while (cVar1 != '\0');
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    uVar3 = param_2 - 4;
    if (in_stack_00000014 < param_2 - 4) {
      uVar3 = in_stack_00000014;
    }
    ppcVar2 = &param_3;
    if (0xf < in_stack_00000018) {
      ppcVar2 = (char **)param_3;
    }
    FUN_00402690(local_2c,ppcVar2,uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00403640(local_2c,&DAT_005e74f4,3);
    uVar3 = local_18;
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    iVar6 = param_1 - (int)ppppcVar4;
    do {
      cVar1 = *(char *)ppppcVar4;
      ppppcVar4 = (char ****)((int)ppppcVar4 + 1);
      *(char *)((int)ppppcVar4 + iVar6 + -1) = cVar1;
    } while (cVar1 != '\0');
    if (0xf < uVar3) {
      ppppcVar4 = (char ****)local_2c[0];
      if ((0xfff < uVar3 + 1) &&
         (ppppcVar4 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar4);
    }
  }
  if (0xf < in_stack_00000018) {
    pcVar5 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pcVar5 = *(char **)(param_3 + -4), (char *)0x1f < param_3 + (-4 - (int)pcVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00591780(void **param_1,uint param_2,void **param_3)

{
  undefined1 *puVar1;
  void ***pppvVar2;
  uint uVar3;
  void *pvVar4;
  void **ppvVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005caed4;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 1;
  param_1[4] = (void *)0x0;
  param_1[5] = &DAT_0000000f;
  *(undefined1 *)param_1 = 0;
  if (in_stack_00000014 < param_2) {
    puVar1 = &stack0xfffffffc;
    if (param_1 != &param_3) {
      pppvVar2 = &param_3;
      if (0xf < in_stack_00000018) {
        pppvVar2 = param_3;
      }
      FUN_00402690(param_1,pppvVar2,in_stack_00000014);
      puVar1 = puStack_20;
    }
  }
  else {
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    uVar3 = param_2 - 4;
    if (in_stack_00000014 < param_2 - 4) {
      uVar3 = in_stack_00000014;
    }
    pppvVar2 = &param_3;
    if (0xf < in_stack_00000018) {
      pppvVar2 = param_3;
    }
    puStack_20 = &stack0xfffffffc;
    FUN_00402690(&local_3c,pppvVar2,uVar3);
    if (param_1 == &local_3c) {
      if (0xf < uStack_28) {
        pvVar4 = local_3c;
        if (0xfff < uStack_28 + 1) {
          pvVar4 = *(void **)((int)local_3c + -4);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar4);
      }
      FUN_00403640(param_1,&DAT_005e74f4,3);
      puVar1 = puStack_20;
    }
    else {
      FUN_00401b20((int *)param_1);
      *param_1 = local_3c;
      param_1[1] = pvStack_38;
      param_1[2] = pvStack_34;
      param_1[3] = pvStack_30;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_28,local_2c);
      FUN_00403640(param_1,&DAT_005e74f4,3);
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  if (0xf < in_stack_00000018) {
    ppvVar5 = param_3;
    if (0xfff < in_stack_00000018 + 1) {
      ppvVar5 = param_3[-1];
      if (0x1f < (uint)((int)param_3 + (-4 - (int)ppvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppvVar5);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __cdecl FUN_00591910(void *param_1)

{
  char cVar1;
  bool bVar2;
  Texture2D *pTVar3;
  Sprite *pSVar4;
  Texture2D *this;
  char ****ppppcVar5;
  char ****ppppcVar6;
  void *pvVar7;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff94;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005caf21;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (this_0065b3fc == (Texture2D *)0x0) {
    pTVar3 = (Texture2D *)FUN_005adb0f(0x10);
    this_0065b3fc = pTVar3;
    *(undefined4 *)(pTVar3 + 4) = 0x2600;
    *(undefined4 *)pTVar3 = 0x2600;
    *(undefined4 *)(pTVar3 + 8) = 0x812f;
    *(undefined4 *)(pTVar3 + 0xc) = 0x812f;
  }
  FUN_004024e0(&stack0xffffff94,&param_1);
  FUN_0058ed50(local_2c,in_stack_ffffff94);
  local_8._0_1_ = 1;
  local_34 = 0;
  ppppcVar6 = local_2c;
  if (0xf < local_18) {
    ppppcVar6 = (char ****)local_2c[0];
  }
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  ppppcVar5 = ppppcVar6;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  FUN_00402690(local_44,ppppcVar6,(int)ppppcVar5 - (int)((int)ppppcVar6 + 1));
  local_8._0_1_ = 2;
  pSVar4 = cocos2d::Sprite::create((basic_string<> *)local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (pSVar4 == (Sprite *)0x0) {
    FUN_00591070("ERROR","loading file: \'%s\'");
    bVar2 = cc_assert_script_compatible("ERROR loading file");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  pTVar3 = this_0065b3fc;
  this = (Texture2D *)(**(code **)(*(int *)(pSVar4 + 0x278) + 0xc))();
  cocos2d::Texture2D::setTexParameters(this,(_TexParams *)pTVar3);
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  if (0xf < local_18) {
    ppppcVar6 = (char ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppcVar6 = (char ****)local_2c[0][-1],
       (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pvVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar7 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_00591b50(void *param_1)

{
  char cVar1;
  bool bVar2;
  Texture2D *pTVar3;
  char *pcVar4;
  Sprite *pSVar5;
  Texture2D *this;
  char *pcVar6;
  void *pvVar7;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff94;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005caf7a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (this_0065b3fc == (Texture2D *)0x0) {
    pTVar3 = (Texture2D *)FUN_005adb0f(0x10);
    this_0065b3fc = pTVar3;
    *(undefined4 *)(pTVar3 + 4) = 0x2600;
    *(undefined4 *)pTVar3 = 0x2600;
    *(undefined4 *)(pTVar3 + 8) = 0x812f;
    *(undefined4 *)(pTVar3 + 0xc) = 0x812f;
  }
  FUN_004024e0(&stack0xffffff94,&param_1);
  pcVar4 = FUN_0058ed50(local_44,in_stack_ffffff94);
  local_8._0_1_ = 2;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar4 = *(char **)pcVar4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_2c,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  local_8._0_1_ = 3;
  pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c,(Rect *)&stack0x0000001c);
  local_8._0_1_ = 2;
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
  local_8 = CONCAT31(local_8._1_3_,1);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (pSVar5 == (Sprite *)0x0) {
    bVar2 = cc_assert_script_compatible("ERROR loading file");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
    FUN_00591070("ERROR","loading file: \'%s\'");
  }
  pTVar3 = this_0065b3fc;
  this = (Texture2D *)(**(code **)(*(int *)(pSVar5 + 0x278) + 0xc))();
  cocos2d::Texture2D::setTexParameters(this,(_TexParams *)pTVar3);
  local_8 = CONCAT31(local_8._1_3_,4);
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  if (0xf < in_stack_00000018) {
    pvVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar7 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  cocos2d::Rect::~Rect((Rect *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00591db0(Texture2D *param_1)

{
  Texture2D *pTVar1;
  
  pTVar1 = this_0065b3fc;
  if (this_0065b3fc == (Texture2D *)0x0) {
    pTVar1 = (Texture2D *)FUN_005adb0f(0x10);
    this_0065b3fc = pTVar1;
    *(undefined4 *)(pTVar1 + 4) = 0x2600;
    *(undefined4 *)pTVar1 = 0x2600;
    *(undefined4 *)(pTVar1 + 8) = 0x812f;
    *(undefined4 *)(pTVar1 + 0xc) = 0x812f;
  }
  cocos2d::Texture2D::setTexParameters(param_1,(_TexParams *)pTVar1);
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_00591e00(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_400c [16388];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_0042bbf0(param_2,&stack0x0000000c);
  pcVar2 = local_400c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(param_1,local_400c,(int)pcVar2 - (int)(local_400c + 1));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __thiscall FUN_00591e80(void *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char **ppcVar6;
  int iVar7;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cafc1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  bVar2 = false;
  bVar3 = false;
  ppcVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    ppcVar6 = (char **)param_1;
  }
  iVar7 = 0;
  iVar4 = (in_stack_00000014 + (int)ppcVar6) - (int)ppcVar6;
  if ((char **)(in_stack_00000014 + (int)ppcVar6) < ppcVar6) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    do {
      cVar1 = *(char *)ppcVar6;
      if (bVar2) {
LAB_00591f25:
        bVar2 = bVar3;
        FUN_004034f0(this,cVar1);
        bVar3 = bVar2;
      }
      else if ((cVar1 != '\t') && (cVar1 != ' ')) {
        bVar3 = true;
        goto LAB_00591f25;
      }
      iVar7 = iVar7 + 1;
      ppcVar6 = (char **)((int)ppcVar6 + 1);
    } while (iVar7 != iVar4);
  }
  if (0xf < in_stack_00000018) {
    pcVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pcVar5 = *(char **)(param_1 + -4), (char *)0x1f < param_1 + (-4 - (int)pcVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar5);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00591f90(undefined4 *param_1,char param_2,void *param_3)

{
  undefined4 uVar1;
  char ****ppppcVar2;
  int iVar3;
  undefined **this;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  uint in_stack_00000018;
  char *in_stack_ffffff5c;
  undefined **ppuVar10;
  uint uVar11;
  undefined4 *local_78;
  undefined4 *local_74;
  byte *local_6c;
  int local_68;
  undefined4 local_60;
  byte *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb021;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  local_8 = 1;
  local_58 = param_1;
  local_4c = param_1;
  local_45 = param_2;
  FUN_004024e0(&stack0xffffff5c,&param_3);
  FUN_00592340(&local_78,in_stack_ffffff5c);
  local_8._0_1_ = 2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0047d950();
  *param_1 = uVar1;
  local_60 = 1;
  local_50 = local_78;
  local_58 = local_74;
  puVar8 = local_78;
  if (local_78 != local_74) {
    do {
      local_50 = puVar8;
      FUN_004024e0(local_44,puVar8);
      local_8._0_1_ = 3;
      FUN_004024e0(&stack0xffffff5c,local_44);
      FUN_00591e80(local_2c,in_stack_ffffff5c);
      local_8._0_1_ = 4;
      if (local_1c == 0) {
        local_8._0_1_ = 3;
        if (0xf < local_18) {
          ppppcVar2 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar2 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2)))) goto LAB_0059230d;
          FUN_005adb3f(ppppcVar2);
        }
        local_8._0_1_ = 2;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pvVar5 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_0059230d;
          FUN_005adb3f(pvVar5);
        }
      }
      else {
        ppppcVar2 = local_2c;
        if (0xf < local_18) {
          ppppcVar2 = (char ****)local_2c[0];
        }
        if (*(char *)ppppcVar2 == '#') {
          local_8._0_1_ = 3;
          if (0xf < local_18) {
            ppppcVar2 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar2 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))))
            goto LAB_0059230d;
            FUN_005adb3f(ppppcVar2);
          }
          local_8._0_1_ = 2;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
          if (0xf < local_30) {
            pvVar5 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar5 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_0059230d;
            FUN_005adb3f(pvVar5);
          }
        }
        else {
          FUN_004024e0(&stack0xffffff5c,local_2c);
          FUN_00592d70(&local_6c,'=',(undefined4 *)in_stack_ffffff5c);
          local_8 = CONCAT31(local_8._1_3_,5);
          if (local_45 != '\0') {
            local_5c = local_6c;
            pbVar6 = local_6c;
            if (0xf < *(uint *)(local_6c + 0x14)) {
              local_5c = *(byte **)local_6c;
              pbVar6 = *(byte **)local_6c;
            }
            pbVar7 = local_6c;
            if (0xf < *(uint *)(local_6c + 0x14)) {
              pbVar7 = *(byte **)local_6c;
            }
            iVar4 = (int)(pbVar6 + *(int *)(local_6c + 0x10)) - (int)pbVar7;
            iVar9 = 0;
            if (pbVar6 + *(int *)(local_6c + 0x10) < pbVar7) {
              iVar4 = 0;
            }
            puVar8 = local_50;
            param_1 = local_4c;
            local_54 = iVar4;
            if (iVar4 != 0) {
              do {
                iVar3 = tolower((int)(char)pbVar7[iVar9]);
                local_5c[iVar9] = (byte)iVar3;
                iVar9 = iVar9 + 1;
                puVar8 = local_50;
                param_1 = local_4c;
              } while (iVar9 != iVar4);
            }
          }
          pbVar6 = local_6c;
          uVar11 = (local_68 - (int)local_6c) / 0x18;
          if (uVar11 == 1) {
            this = (undefined **)FUN_0047d6a0(param_1,local_6c);
            uVar11 = 0;
            ppuVar10 = &PTR_005ce008;
LAB_00592252:
            FUN_00402690(this,ppuVar10,uVar11);
          }
          else if (1 < uVar11) {
            ppuVar10 = (undefined **)(local_6c + 0x18);
            this = (undefined **)FUN_0047d6a0(local_4c,local_6c);
            if (this != ppuVar10) {
              if (0xf < *(uint *)(pbVar6 + 0x2c)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
              uVar11 = *(uint *)(pbVar6 + 0x28);
              goto LAB_00592252;
            }
          }
          FUN_004025a0((int *)&local_6c);
          local_8._0_1_ = 3;
          if (0xf < local_18) {
            ppppcVar2 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar2 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))))
            goto LAB_0059230d;
            FUN_005adb3f(ppppcVar2);
          }
          local_8._0_1_ = 2;
          param_1 = local_4c;
          if (0xf < local_30) {
            pvVar5 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar5 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_0059230d;
            FUN_005adb3f(pvVar5);
            param_1 = local_4c;
          }
        }
      }
      puVar8 = puVar8 + 6;
      local_50 = puVar8;
    } while (puVar8 != local_58);
  }
  FUN_004025a0((int *)&local_78);
  if (0xf < in_stack_00000018) {
    pvVar5 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar5 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5)))) {
LAB_0059230d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __thiscall FUN_00592340(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  void *_Memory;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffdf5c;
  undefined4 *in_stack_ffffdf74;
  uint local_205c;
  int local_2058;
  int local_2054;
  int *local_2050;
  int *local_204c;
  void *local_2048;
  char local_2041;
  void *local_2040 [5];
  uint local_202c;
  char local_2028 [8196];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005cb07c;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2054 = 0;
  local_2050 = (int *)0x0;
  local_204c = (int *)0x0;
  local_14 = 1;
  local_2058 = 0;
  local_2048 = this;
  FUN_004024e0(&stack0xffffdf5c,&param_1);
  FUN_0058ed50(&stack0xffffdf74,in_stack_ffffdf5c);
  _Memory = (void *)FUN_0058ee00(&local_2058,'\x01',in_stack_ffffdf74);
  iVar2 = local_2058;
  local_205c = 0;
  pvVar7 = (void *)0x0;
  cVar4 = '\x01';
  if (local_2058 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    FUN_004025a0(&local_2054);
    if (0xf < in_stack_00000018) {
      pvVar7 = param_1;
      if ((0xfff < in_stack_00000018 + 1) &&
         (pvVar7 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))))
      {
LAB_00592448:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  else {
    iVar9 = 0;
    uVar8 = 0;
    piVar5 = (int *)0x0;
    if (0 < local_2058) {
      local_2048 = (void *)0x1;
      do {
        cVar1 = *(char *)(iVar9 + (int)_Memory);
        if (cVar1 == '\0') break;
        if ((cVar4 == '\0') || ((cVar1 != '\t' && (cVar1 != ' ')))) {
          cVar4 = '\0';
          if ((iVar9 == 0) && (pvVar7 = (void *)((uint)pvVar7 & 0xff), cVar1 == '#')) {
            pvVar7 = local_2048;
          }
          if (cVar1 == '\n') {
            local_2041 = '\x01';
            if (0x1fff < local_205c) goto LAB_005926f7;
            local_2028[local_205c] = '\0';
            piVar5 = (int *)FUN_00591e00((undefined1 *)local_2040,&DAT_005ce00c);
            local_14._0_1_ = 2;
            FUN_00403330(&local_2054,piVar5);
            local_14 = CONCAT31(local_14._1_3_,1);
            if (0xf < local_202c) {
              pvVar7 = local_2040[0];
              if ((0xfff < local_202c + 1) &&
                 (pvVar7 = *(void **)((int)local_2040[0] + -4),
                 0x1f < (uint)((int)local_2040[0] + (-4 - (int)pvVar7)))) goto LAB_00592448;
              FUN_005adb3f(pvVar7);
            }
            local_205c = 0;
            pvVar7 = (void *)0x0;
            cVar4 = local_2041;
          }
          else if ((char)pvVar7 == '\0') {
            local_2028[local_205c] = cVar1;
            local_205c = local_205c + 1;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
      uVar8 = local_205c;
      piVar5 = local_2050;
      if (0x1fff < local_205c) {
LAB_005926f7:
                    // WARNING: Subroutine does not return
        ___report_rangecheckfailure();
      }
    }
    local_2028[uVar8] = '\0';
    piVar6 = local_204c;
    if (local_2028[0] != '\0') {
      piVar6 = (int *)FUN_00591e00((undefined1 *)local_2040,&DAT_005ce00c);
      local_14 = CONCAT31(local_14._1_3_,3);
      if (local_204c == piVar5) {
        FUN_004036d0(&local_2054,piVar5,piVar6);
        piVar5 = local_2050;
      }
      else {
        piVar5[4] = 0;
        piVar5[5] = 0;
        iVar2 = piVar6[1];
        iVar9 = piVar6[2];
        iVar3 = piVar6[3];
        *piVar5 = *piVar6;
        piVar5[1] = iVar2;
        piVar5[2] = iVar9;
        piVar5[3] = iVar3;
        *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(piVar6 + 4);
        piVar6[4] = 0;
        piVar6[5] = 0xf;
        *(undefined1 *)piVar6 = 0;
        piVar5 = piVar5 + 6;
      }
      piVar6 = local_204c;
      if (0xf < local_202c) {
        pvVar7 = local_2040[0];
        if ((0xfff < local_202c + 1) &&
           (pvVar7 = *(void **)((int)local_2040[0] + -4),
           0x1f < (uint)((int)local_2040[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
    }
    free(_Memory);
    iVar2 = local_2054;
    local_2054 = 0;
    local_2050 = (int *)0x0;
    *(int *)this = iVar2;
    *(int **)((int)this + 4) = piVar5;
    *(int **)((int)this + 8) = piVar6;
    local_204c = (int *)0x0;
    FUN_004025a0(&local_2054);
    if (0xf < in_stack_00000018) {
      pvVar7 = param_1;
      if ((0xfff < in_stack_00000018 + 1) &&
         (pvVar7 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))))
      {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


int * __thiscall FUN_00592700(void *this,void *param_1)

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
  
  puStack_c = &LAB_005b19f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_004024e0(&stack0xffffffbc,&param_1);
  FUN_00592d70(&local_1c,',',in_stack_ffffffbc);
  if ((local_18 - (int)local_1c) - 0x30U < 0x18) {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *(int *)this = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 4) = iVar1;
  }
  else if ((local_18 - (int)local_1c) - 0x48U < 0x18) {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *(int *)this = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 4) = iVar1;
    pcVar2 = local_1c + 0x30;
    if (0xf < *(uint *)(local_1c + 0x44)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((int)this + 8) = iVar1;
  }
  FUN_004025a0((int *)&local_1c);
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
  return this;
}


int * __thiscall FUN_00592840(void *this,void *param_1)

{
  int iVar1;
  char **ppcVar2;
  char *pcVar3;
  void *pvVar4;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffac;
  int local_2c [4];
  char *local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb0c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_004024e0(&stack0xffffffac,&param_1);
  FUN_00592d70(&local_1c,'d',in_stack_ffffffac);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar3 = local_1c;
  if (0xf < *(uint *)(local_1c + 0x14)) {
    pcVar3 = *(char **)local_1c;
  }
  iVar1 = atoi(pcVar3);
  *(int *)this = iVar1;
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(local_1c + 0x18));
  ppcVar2 = (char **)FUN_00592d70(local_2c,'+',in_stack_ffffffac);
  if (&local_1c != ppcVar2) {
    FUN_004025a0((int *)&local_1c);
    local_1c = *ppcVar2;
    local_18 = ppcVar2[1];
    local_14 = ppcVar2[2];
    *ppcVar2 = (char *)0x0;
    ppcVar2[1] = (char *)0x0;
    ppcVar2[2] = (char *)0x0;
  }
  FUN_004025a0(local_2c);
  if (local_18 + (-0x30 - (int)local_1c) < (char *)0x18) {
    pcVar3 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar3 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar3);
    *(int *)((int)this + 4) = iVar1;
    pcVar3 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar1 = atoi(pcVar3);
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    pcVar3 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar3 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar3);
    *(int *)((int)this + 4) = iVar1;
  }
  FUN_004025a0((int *)&local_1c);
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar4 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return this;
}


bool __cdecl FUN_005929b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  uVar5 = in_stack_00000030;
  pbVar6 = in_stack_0000001c;
  puVar1 = param_1;
  pbVar2 = (byte *)&stack0x0000001c;
  if (0xf < in_stack_00000030) {
    pbVar2 = in_stack_0000001c;
  }
  ppuVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppuVar4 = (undefined4 **)param_1;
  }
  uVar3 = FUN_0042eeb0((int)ppuVar4,in_stack_00000014,0,pbVar2,in_stack_0000002c);
  if (0xf < in_stack_00000018) {
    puVar7 = puVar1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar7 = (undefined4 *)puVar1[-1];
      if (0x1f < (uint)((int)puVar1 + (-4 - (int)puVar7))) goto LAB_00592a54;
    }
    FUN_005adb3f(puVar7);
    uVar5 = in_stack_00000030;
    pbVar6 = in_stack_0000001c;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < uVar5) {
    pbVar2 = pbVar6;
    if (0xfff < uVar5 + 1) {
      pbVar2 = *(byte **)(pbVar6 + -4);
      if ((byte *)0x1f < pbVar6 + (-4 - (int)pbVar2)) {
LAB_00592a54:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar2);
  }
  return uVar3 != 0xffffffff;
}


undefined1 * __fastcall FUN_00592a70(undefined1 *param_1,char param_2,undefined4 *param_3)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined1 uStack0000001c;
  undefined1 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb101;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  uVar3 = 0;
  if (in_stack_00000014 != 0) {
    do {
      ppuVar1 = &param_3;
      if (0xf < in_stack_00000018) {
        ppuVar1 = (undefined4 **)param_3;
      }
      uVar4 = uStack0000001c;
      if (*(char *)((int)ppuVar1 + uVar3) != param_2) {
        ppuVar1 = &param_3;
        if (0xf < in_stack_00000018) {
          ppuVar1 = (undefined4 **)param_3;
        }
        uVar4 = *(undefined1 *)((int)ppuVar1 + uVar3);
      }
      FUN_004034f0(param_1,uVar4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_stack_00000014);
  }
  if (0xf < in_stack_00000018) {
    puVar2 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar2 = (undefined4 *)param_3[-1], 0x1f < (uint)((int)param_3 + (-4 - (int)puVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar2);
  }
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_00592b60(void *this,char *param_1)

{
  char cVar1;
  int *this_00;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte ****ppppbVar5;
  byte *****pppppbVar6;
  char *pcVar7;
  char **ppcVar8;
  int iVar9;
  int in_stack_00000014;
  uint in_stack_00000018;
  byte ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb151;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
  local_8 = 3;
  ppcVar8 = &param_1;
  if (0xf < in_stack_00000018) {
    ppcVar8 = (char **)param_1;
  }
  bVar2 = false;
  iVar4 = (in_stack_00000014 + (int)ppcVar8) - (int)ppcVar8;
  iVar9 = 0;
  if ((char **)(in_stack_00000014 + (int)ppcVar8) < ppcVar8) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    do {
      cVar1 = *(char *)ppcVar8;
      if (bVar2) {
        pppppbVar6 = (byte *****)local_44;
LAB_00592c3c:
        FUN_004034f0(pppppbVar6,cVar1);
      }
      else {
        pppppbVar6 = local_2c;
        if (0xf < local_18) {
          pppppbVar6 = (byte *****)local_2c[0];
        }
        uVar3 = FUN_004031f0((byte *)pppppbVar6,local_1c,(byte *)&PTR_005ce008,0);
        if ((char)uVar3 == '\0') {
          if ((cVar1 != ' ') && (cVar1 != '\t')) {
LAB_00592c39:
            pppppbVar6 = local_2c;
            goto LAB_00592c3c;
          }
          bVar2 = true;
        }
        else if ((cVar1 != ' ') && (cVar1 != '\t')) goto LAB_00592c39;
      }
      iVar9 = iVar9 + 1;
      ppcVar8 = (char **)((int)ppcVar8 + 1);
    } while (iVar9 != iVar4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00403840(this,(int *)0x0,local_2c);
  this_00 = *(int **)((int)this + 4);
  if (*(int **)((int)this + 8) == this_00) {
    FUN_00403840(this,this_00,local_44);
  }
  else {
    FUN_004024e0(this_00,local_44);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  }
  if (0xf < local_30) {
    ppppbVar5 = (byte ****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppbVar5 = (byte ****)local_44[0][-1],
       0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar5);
  }
  if (0xf < local_18) {
    pppppbVar6 = (byte *****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppbVar6 = (byte *****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar6);
  }
  if (0xf < in_stack_00000018) {
    pcVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pcVar7 = *(char **)(param_1 + -4), (char *)0x1f < param_1 + (-4 - (int)pcVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00592d70(undefined4 *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 **ppuVar2;
  byte ****ppppbVar3;
  uint uVar4;
  byte ****ppppbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb1a9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  uVar8 = 0;
  local_8 = 2;
  if (in_stack_00000014 != 0) {
    do {
      ppuVar2 = &param_3;
      if (0xf < in_stack_00000018) {
        ppuVar2 = (undefined4 **)param_3;
      }
      if (*(char *)((int)ppuVar2 + uVar8) == param_2) {
        piVar1 = (int *)param_1[1];
        if ((int *)param_1[2] == piVar1) {
          FUN_00403840(param_1,piVar1,local_2c);
          FUN_00402690(local_2c,&PTR_005ce008,0);
        }
        else {
          FUN_004024e0(piVar1,local_2c);
          param_1[1] = param_1[1] + 0x18;
          FUN_00402690(local_2c,&PTR_005ce008,0);
        }
      }
      else {
        ppuVar2 = &param_3;
        if (0xf < in_stack_00000018) {
          ppuVar2 = (undefined4 **)param_3;
        }
        if (local_18 == local_1c) {
          FUN_0047f0e0(local_2c);
        }
        else {
          ppppbVar3 = local_2c;
          if (0xf < local_18) {
            ppppbVar3 = (byte ****)local_2c[0];
          }
          pbVar7 = (byte *)((int)ppppbVar3 + local_1c);
          local_1c = local_1c + 1;
          *pbVar7 = *(byte *)((int)ppuVar2 + uVar8);
          pbVar7[1] = 0;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < in_stack_00000014);
  }
  uVar8 = local_18;
  ppppbVar3 = (byte ****)local_2c[0];
  ppppbVar5 = local_2c;
  if (0xf < local_18) {
    ppppbVar5 = (byte ****)local_2c[0];
  }
  uVar4 = FUN_004031f0((byte *)ppppbVar5,local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar4 == '\0') {
    piVar1 = (int *)param_1[1];
    if ((int *)param_1[2] == piVar1) {
      FUN_00403840(param_1,piVar1,local_2c);
      uVar8 = local_18;
      ppppbVar3 = (byte ****)local_2c[0];
    }
    else {
      FUN_004024e0(piVar1,local_2c);
      param_1[1] = param_1[1] + 0x18;
      uVar8 = local_18;
      ppppbVar3 = (byte ****)local_2c[0];
    }
  }
  if (0xf < uVar8) {
    ppppbVar5 = ppppbVar3;
    if ((0xfff < uVar8 + 1) &&
       (ppppbVar5 = (byte ****)ppppbVar3[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar3 + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar5);
  }
  if (0xf < in_stack_00000018) {
    puVar6 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar6 = (undefined4 *)param_3[-1], 0x1f < (uint)((int)param_3 + (-4 - (int)puVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_00592f80(float param_1,undefined4 param_2,float param_3)

{
  _CIatan2((double)(param_1 - param_3));
  return;
}


Vec2 * __fastcall FUN_00593000(Vec2 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb1e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  libm_sse2_sin_precise(DAT_0065500c ^ (uint)&stack0xfffffffc);
  libm_sse2_cos_precise();
  local_8 = CONCAT31(local_8._1_3_,1);
  cocos2d::Vec2::operator+((Vec2 *)&stack0x00000004,param_1);
  ExceptionList = local_10;
  return param_1;
}


float * __fastcall FUN_005930b0(float *param_1)

{
  double dVar1;
  float in_XMM1_Da;
  double dVar2;
  float in_XMM2_Da;
  
  dVar2 = (double)in_XMM1_Da * 0.017453292519943295;
  dVar1 = dVar2;
  libm_sse2_sin_precise();
  *param_1 = (float)(dVar1 * (double)in_XMM2_Da);
  libm_sse2_cos_precise();
  param_1[1] = (float)(dVar2 * (double)in_XMM2_Da);
  return param_1;
}


Vec2 * __thiscall FUN_00593120(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  float in_XMM1_Da;
  double dVar4;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  void *local_20;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb21b;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = param_1;
  local_28 = param_2;
  local_20 = this;
  local_1c._4_4_ = in_XMM1_Da;
  iVar2 = rand();
  local_20 = (void *)(iVar2 % 0x168);
  iVar2 = 0;
  if (0 < (int)local_1c._4_4_) {
    iVar2 = rand();
    iVar2 = iVar2 % (int)local_1c._4_4_ + 1;
  }
  local_1c = (double)(iVar2 + -1);
  dVar4 = (double)(int)local_20 * 0.017453292519943295;
  dVar3 = dVar4;
  libm_sse2_sin_precise(uVar1);
  local_20 = (void *)(float)(dVar3 * local_1c);
  libm_sse2_cos_precise();
  local_24 = (float)local_20;
  local_20 = (void *)(float)(dVar4 * local_1c);
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Vec2::operator+((Vec2 *)&local_2c,this);
  ExceptionList = local_10;
  return this;
}


void FUN_00593220(void)

{
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  _CIfmod((double)ABS(in_XMM0_Da - in_XMM1_Da));
  return;
}


undefined1 * __fastcall FUN_00593280(undefined1 *param_1)

{
  FUN_00591e00(param_1,"%dm %ds");
  return param_1;
}


void __fastcall FUN_005932d0(char *param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(param_3 + 1)) < param_2) {
      strcpy_s(param_1,param_2,param_3);
      return;
    }
    strncpy_s(param_1,param_2,param_3,param_2);
    param_1[param_2 - 1] = '\0';
  }
  return;
}


undefined4 * __thiscall FUN_00593320(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return this;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __thiscall FUN_005933a0(void *this,char *param_1)

{
  DWORD DVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD local_2818;
  char *local_2814;
  WCHAR local_2810 [4096];
  undefined1 local_810 [1024];
  CHAR local_410 [1028];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x5933ad;
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_2814 = param_1;
  if (*(int *)this != 0) {
    DVar1 = GetModuleFileNameW((HMODULE)0x0,local_2810,0x1000);
    if (DVar1 != 0) {
      wcscat_s(local_2810,0x1000,L".local");
      DVar1 = GetFileAttributesW(local_2810);
      param_1 = local_2814;
      if ((DVar1 == 0xffffffff) && (*(int *)((int)this + 4) == 0)) {
        DVar1 = GetEnvironmentVariableW(L"ProgramFiles",local_2810,0x1000);
        if (DVar1 != 0) {
          wcscat_s(local_2810,0x1000,L"\\Debugging Tools for Windows (x86)\\dbghelp.dll");
          DVar1 = GetFileAttributesW(local_2810);
          if (DVar1 != 0xffffffff) {
            pHVar2 = LoadLibraryW(local_2810);
            *(HMODULE *)((int)this + 4) = pHVar2;
          }
        }
        param_1 = local_2814;
        if ((*(int *)((int)this + 4) == 0) &&
           (DVar1 = GetEnvironmentVariableW(L"ProgramFiles",local_2810,0x1000), param_1 = local_2814
           , DVar1 != 0)) {
          wcscat_s(local_2810,0x1000,L"\\Debugging Tools for Windows\\dbghelp.dll");
          DVar1 = GetFileAttributesW(local_2810);
          param_1 = local_2814;
          if (DVar1 != 0xffffffff) {
            pHVar2 = LoadLibraryW(local_2810);
            *(HMODULE *)((int)this + 4) = pHVar2;
            param_1 = local_2814;
          }
        }
      }
    }
    pHVar2 = *(HMODULE *)((int)this + 4);
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = LoadLibraryW(L"dbghelp.dll");
      *(HMODULE *)((int)this + 4) = pHVar2;
      if (pHVar2 == (HMODULE)0x0) goto LAB_00593725;
    }
    pFVar3 = GetProcAddress(pHVar2,"SymInitialize");
    *(FARPROC *)((int)this + 0x2c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymCleanup");
    *(FARPROC *)((int)this + 0x10) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"StackWalk64");
    *(FARPROC *)((int)this + 0x38) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetOptions");
    *(FARPROC *)((int)this + 0x24) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymSetOptions");
    *(FARPROC *)((int)this + 0x34) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymFunctionTableAccess64");
    *(FARPROC *)((int)this + 0x14) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetLineFromAddr64");
    *(FARPROC *)((int)this + 0x18) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetModuleBase64");
    *(FARPROC *)((int)this + 0x1c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetModuleInfo64");
    *(FARPROC *)((int)this + 0x20) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetSymFromAddr64");
    *(FARPROC *)((int)this + 0x28) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"UnDecorateSymbolName");
    *(FARPROC *)((int)this + 0x3c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymLoadModule64");
    *(FARPROC *)((int)this + 0x30) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 4),"SymGetSearchPath");
    *(FARPROC *)((int)this + 0x40) = pFVar3;
    if ((((((*(int *)((int)this + 0x10) != 0) && (*(int *)((int)this + 0x14) != 0)) &&
          (*(int *)((int)this + 0x1c) != 0)) &&
         ((*(int *)((int)this + 0x20) != 0 && (*(int *)((int)this + 0x24) != 0)))) &&
        ((*(int *)((int)this + 0x28) != 0 &&
         ((pcVar5 = *(code **)((int)this + 0x2c), pcVar5 != (code *)0x0 &&
          (*(int *)((int)this + 0x34) != 0)))))) &&
       ((*(int *)((int)this + 0x38) != 0 &&
        ((*(int *)((int)this + 0x3c) != 0 && (*(int *)((int)this + 0x30) != 0)))))) {
      if (param_1 != (char *)0x0) {
        pcVar4 = _strdup(param_1);
        *(char **)((int)this + 0xc) = pcVar4;
        pcVar5 = *(code **)((int)this + 0x2c);
      }
      iVar6 = (*pcVar5)(*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),0);
      if (iVar6 == 0) {
        uVar9 = 0;
        uVar8 = 0;
        iVar6 = **(int **)this;
        DVar1 = GetLastError();
        (**(code **)(iVar6 + 0x10))("SymInitialize",DVar1,uVar8,uVar9);
      }
      uVar7 = (**(code **)((int)this + 0x24))();
      local_2814 = (char *)(**(code **)((int)this + 0x34))(uVar7 | 0x210);
      memset(local_810,0,0x400);
      if ((*(code **)((int)this + 0x40) != (code *)0x0) &&
         (iVar6 = (**(code **)((int)this + 0x40))(*(undefined4 *)((int)this + 8),local_810,0x400),
         iVar6 == 0)) {
        uVar9 = 0;
        uVar8 = 0;
        iVar6 = **(int **)this;
        DVar1 = GetLastError();
        (**(code **)(iVar6 + 0x10))("SymGetSearchPath",DVar1,uVar8,uVar9);
      }
      memset(local_410,0,0x400);
      local_2818 = 0x400;
      GetUserNameA(local_410,&local_2818);
      (**(code **)(**(int **)this + 4))(local_810,local_2814,local_410);
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    FreeLibrary(*(HMODULE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
LAB_00593725:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


bool FUN_00593740(undefined4 param_1)

{
  char *pcVar1;
  HMODULE hModule;
  int iVar2;
  uint uVar3;
  char *_Memory;
  int iVar4;
  int local_38;
  undefined4 local_34;
  HMODULE local_2c;
  FARPROC local_28;
  uint local_24;
  undefined4 *local_20;
  FARPROC local_1c;
  FARPROC local_18;
  FARPROC local_14;
  char *local_10;
  void *local_c;
  char *local_8;
  
  iVar4 = 0;
  hModule = LoadLibraryW(L"psapi.dll");
  if (hModule != (HMODULE)0x0) {
    local_2c = hModule;
    local_14 = GetProcAddress(hModule,"EnumProcessModules");
    local_18 = GetProcAddress(hModule,"GetModuleFileNameExA");
    local_1c = GetProcAddress(hModule,"GetModuleBaseNameA");
    local_28 = GetProcAddress(hModule,"GetModuleInformation");
    if ((((local_14 != (FARPROC)0x0) && (local_18 != (FARPROC)0x0)) && (local_1c != (FARPROC)0x0))
       && (local_28 != (FARPROC)0x0)) {
      local_c = malloc(0x1fa0);
      local_8 = malloc(0x1fa0);
      local_10 = malloc(0x1fa0);
      _Memory = local_8;
      if ((((local_c != (void *)0x0) && (local_8 != (char *)0x0)) &&
          ((local_10 != (char *)0x0 &&
           ((iVar2 = (*local_14)(param_1,local_c,0x1fa0,&local_24), pcVar1 = local_8, iVar2 != 0 &&
            (local_24 < 0x1fa1)))))) && (uVar3 = 0, _Memory = local_8, (local_24 & 0xfffffffc) != 0)
         ) {
        do {
          (*local_28)(param_1,*(undefined4 *)((int)local_c + uVar3 * 4),&local_38,0xc);
          *pcVar1 = '\0';
          (*local_18)(param_1,*(undefined4 *)((int)local_c + uVar3 * 4),pcVar1,0x1fa0);
          *local_10 = '\0';
          (*local_1c)(param_1,*(undefined4 *)((int)local_c + uVar3 * 4),local_10,0x1fa0);
          iVar2 = FUN_00593920(param_1,pcVar1,local_10,local_38,local_38 >> 0x1f,local_34);
          if (iVar2 != 0) {
            (**(code **)(*(int *)*local_20 + 0x10))("LoadModule",iVar2,0,0);
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 1;
          hModule = local_2c;
          _Memory = local_8;
        } while (uVar3 < local_24 >> 2);
      }
      FreeLibrary(hModule);
      if (local_10 != (char *)0x0) {
        free(local_10);
      }
      if (_Memory != (char *)0x0) {
        free(_Memory);
      }
      if (local_c != (void *)0x0) {
        free(local_c);
      }
      return iVar4 != 0;
    }
    FreeLibrary(hModule);
  }
  return false;
}


void FUN_00593920(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *lptstrFilename;
  char *pcVar1;
  void *lpData;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  DWORD DVar5;
  longlong lVar6;
  uint local_6c0;
  char *local_6bc;
  char *local_6b8;
  char *local_6b4;
  DWORD local_6b0;
  undefined8 local_6ac;
  undefined4 local_6a4;
  DWORD local_6a0;
  LPVOID local_69c;
  int *local_698;
  undefined4 local_694 [8];
  undefined4 local_674;
  char local_550 [256];
  char local_450 [1096];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_6a4 = param_1;
  local_6b8 = param_2;
  local_6b4 = param_3;
  lptstrFilename = _strdup(param_2);
  pcVar1 = _strdup(param_3);
  DVar5 = 0;
  local_6bc = pcVar1;
  if ((lptstrFilename == (char *)0x0) || (pcVar1 == (char *)0x0)) {
    DVar5 = 8;
  }
  else {
    lVar6 = (*(code *)local_698[0xc])(local_6a4,0,lptstrFilename,pcVar1,param_4,param_5,param_6);
    if (lVar6 == 0) {
      DVar5 = GetLastError();
    }
  }
  local_6ac = 0;
  if (*local_698 != 0) {
    if (lptstrFilename == (char *)0x0) goto LAB_00593b53;
    if ((*(byte *)(*local_698 + 0x18) & 8) != 0) {
      local_69c = (LPVOID)0x0;
      local_6a0 = GetFileVersionInfoSizeA(lptstrFilename,&local_6b0);
      if ((local_6a0 != 0) && (lpData = malloc(local_6a0), lpData != (void *)0x0)) {
        BVar2 = GetFileVersionInfoA(lptstrFilename,local_6b0,local_6a0,lpData);
        if (BVar2 != 0) {
          local_6a0 = 0x5c;
          BVar2 = VerQueryValueW(lpData,(LPCWSTR)&local_6a0,&local_69c,&local_6c0);
          if (BVar2 == 0) {
            local_69c = (LPVOID)0x0;
          }
          else {
            local_6ac = CONCAT44(*(undefined4 *)((int)local_69c + 8),
                                 *(undefined4 *)((int)local_69c + 0xc));
          }
        }
        free(lpData);
      }
    }
    pcVar1 = "-unknown-";
    iVar3 = FUN_00593ba0(local_698,local_6a4,param_4,param_5,local_694);
    if (iVar3 != 0) {
      switch(local_674) {
      case 0:
        pcVar1 = "-nosymbols-";
        break;
      case 1:
        pcVar1 = "COFF";
        break;
      case 2:
        pcVar1 = "CV";
        break;
      case 3:
        pcVar1 = "PDB";
        break;
      case 4:
        pcVar1 = "-exported-";
        break;
      case 5:
        pcVar1 = "-deferred-";
        break;
      case 6:
        pcVar1 = "SYM";
        break;
      case 7:
        pcVar1 = "DIA";
        break;
      case 8:
        pcVar1 = "Virtual";
      }
    }
    pcVar4 = local_450;
    if (local_450[0] == '\0') {
      pcVar4 = local_550;
    }
    (**(code **)(*(int *)*local_698 + 8))
              (local_6b8,local_6b4,param_4,param_5,param_6,DVar5,pcVar1,pcVar4,(undefined4)local_6ac
               ,local_6ac._4_4_);
    pcVar1 = local_6bc;
  }
  if (lptstrFilename != (char *)0x0) {
    free(lptstrFilename);
  }
LAB_00593b53:
  if (pcVar1 != (char *)0x0) {
    free(pcVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __thiscall
FUN_00593ba0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  undefined4 *_Memory;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  memset(param_4,0,0x688);
  if (*(int *)((int)this + 0x20) != 0) {
    *param_4 = 0x688;
    _Memory = malloc(0x1000);
    if (_Memory == (undefined4 *)0x0) {
      SetLastError(8);
      return 0;
    }
    bVar4 = DAT_00656310 != '\0';
    puVar2 = param_4;
    puVar3 = _Memory;
    for (iVar1 = 0x1a2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (bVar4) {
      iVar1 = (**(code **)((int)this + 0x20))(param_1,param_2,param_3,_Memory);
      if (iVar1 != 0) {
        puVar2 = _Memory;
        puVar3 = param_4;
        for (iVar1 = 0x1a2; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        *param_4 = 0x688;
        free(_Memory);
        return 1;
      }
      DAT_00656310 = '\0';
    }
    *param_4 = 0x248;
    puVar2 = param_4;
    puVar3 = _Memory;
    for (iVar1 = 0x92; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = (**(code **)((int)this + 0x20))(param_1,param_2,param_3,_Memory);
    if (iVar1 != 0) {
      puVar2 = _Memory;
      puVar3 = param_4;
      for (iVar1 = 0x92; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *param_4 = 0x248;
      free(_Memory);
      return 1;
    }
    free(_Memory);
  }
  SetLastError(0x45a);
  return 0;
}


void __fastcall FUN_00593d00(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StackWalker::vftable;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar1 = (undefined4 *)param_1[1];
  param_1[5] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = 0;
    if ((code *)puVar1[4] != (code *)0x0) {
      (*(code *)puVar1[4])(puVar1[2],uVar2);
    }
    if ((HMODULE)puVar1[1] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar1[1]);
    }
    puVar1[1] = 0;
    *puVar1 = 0;
    if ((void *)puVar1[3] != (void *)0x0) {
      free((void *)puVar1[3]);
    }
    puVar1[3] = 0;
    FUN_005adb3f(puVar1);
  }
  param_1[1] = 0;
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_00593dd0(int *param_1)

{
  char cVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  HMODULE hLibModule;
  HANDLE hObject;
  undefined3 extraout_var;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  code *pcVar8;
  int *piVar9;
  char *_Dst;
  uint uVar10;
  undefined1 auStack_664 [4];
  code *local_660;
  code *local_65c;
  code *local_658;
  HMODULE local_654;
  int *local_650;
  int local_64c;
  int local_648;
  int local_644;
  wchar_t *local_640 [7];
  int iStack_624;
  undefined4 uStack_620;
  char acStack_618 [256];
  char acStack_518 [264];
  CHAR local_410 [1023];
  undefined1 local_11;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_664;
  local_650 = param_1;
  if (param_1[1] == 0) {
LAB_0059413d:
    SetLastError(0x45a);
    __security_check_cookie(local_c ^ (uint)auStack_664);
    return;
  }
  if (param_1[4] != 0) {
    __security_check_cookie(local_c ^ (uint)auStack_664);
    return;
  }
  _Dst = (char *)0x0;
  if ((*(byte *)(param_1 + 6) & 0x10) != 0) {
    _Dst = malloc(0x1000);
    if (_Dst == (char *)0x0) {
      SetLastError(8);
      __security_check_cookie(local_c ^ (uint)auStack_664);
      return;
    }
    *_Dst = '\0';
    if ((char *)param_1[5] != (char *)0x0) {
      strcat_s(_Dst,0x1000,(char *)param_1[5]);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
    }
    strcat_s(_Dst,0x1000,(char *)&_Src_0062e638);
    DVar3 = GetCurrentDirectoryA(0x400,local_410);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
    }
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      pcVar6 = local_410;
      do {
        pcVar5 = pcVar6;
        pcVar6 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      pcVar5 = pcVar5 + -1;
      if (local_410 <= pcVar5) {
        do {
          cVar1 = *pcVar5;
          if (((cVar1 == '\\') || (cVar1 == '/')) || (cVar1 == ':')) {
            *pcVar5 = '\0';
            break;
          }
          pcVar5 = pcVar5 + -1;
        } while (local_410 <= pcVar5);
      }
      pcVar6 = local_410;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != local_410 + 1) {
        strcat_s(_Dst,0x1000,local_410);
        strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
      }
    }
    DVar3 = GetEnvironmentVariableA("_NT_SYMBOL_PATH",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
    }
    DVar3 = GetEnvironmentVariableA("_NT_ALTERNATE_SYMBOL_PATH",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
    }
    DVar3 = GetEnvironmentVariableA("SYSTEMROOT",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
      strcat_s(local_410,0x400,"\\system32");
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,(char *)&_Src_0061e3bc);
    }
    if ((*(byte *)(param_1 + 6) & 0x20) != 0) {
      DVar3 = GetEnvironmentVariableA("SYSTEMDRIVE",local_410,0x400);
      if (DVar3 == 0) {
        pcVar6 = "SRV*c:\\websymbols*http://msdl.microsoft.com/download/symbols;";
      }
      else {
        local_11 = 0;
        strcat_s(_Dst,0x1000,(char *)&_Src_0062e3b8);
        strcat_s(_Dst,0x1000,local_410);
        strcat_s(_Dst,0x1000,"\\websymbols");
        pcVar6 = "*http://msdl.microsoft.com/download/symbols;";
      }
      strcat_s(_Dst,0x1000,pcVar6);
    }
  }
  iVar4 = FUN_005933a0((void *)param_1[1],_Dst);
  if (_Dst != (char *)0x0) {
    free(_Dst);
  }
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x10))("Error while initializing dbghelp.dll");
    goto LAB_0059413d;
  }
  local_644 = param_1[3];
  uVar10 = 0;
  local_64c = param_1[2];
  local_648 = param_1[1];
  local_640[0] = L"kernel32.dll";
  local_640[1] = L"tlhelp32.dll";
  local_660 = (code *)0x0;
  local_65c = (code *)0x0;
  local_658 = (code *)0x0;
  local_640[2] = (wchar_t *)0x224;
  pcVar7 = GetProcAddress_exref;
  do {
    hLibModule = LoadLibraryW(local_640[uVar10]);
    local_654 = hLibModule;
    if (hLibModule != (HMODULE)0x0) {
      (*pcVar7)();
      (*pcVar7)(hLibModule);
      local_658 = (code *)(*pcVar7)(hLibModule,"Module32Next");
      if (((local_660 != (code *)0x0) && (local_65c != (code *)0x0)) && (local_658 != (code *)0x0))
      break;
      FreeLibrary(hLibModule);
      local_654 = (HMODULE)0x0;
      pcVar7 = GetProcAddress_exref;
    }
    uVar10 = uVar10 + 1;
    hLibModule = local_654;
  } while (uVar10 < 2);
  piVar9 = local_650;
  if (hLibModule == (HMODULE)0x0) {
LAB_00594238:
    bVar2 = FUN_00593740(local_64c);
    if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_00594250;
  }
  else {
    hObject = (HANDLE)(*local_660)();
    if (hObject == (HANDLE)0xffffffff) {
      FreeLibrary(hLibModule);
      goto LAB_00594238;
    }
    local_660 = (code *)0x0;
    iVar4 = (*local_65c)();
    pcVar7 = local_658;
    pcVar8 = local_660;
    if (iVar4 != 0) {
      pcVar8 = (code *)0x0;
      do {
        FUN_00593920(local_64c,acStack_518,acStack_618,iStack_624,iStack_624 >> 0x1f,uStack_620);
        pcVar8 = pcVar8 + 1;
        iVar4 = (*pcVar7)();
        piVar9 = local_650;
        hLibModule = local_654;
      } while (iVar4 != 0);
    }
    local_660 = pcVar8;
    CloseHandle(hObject);
    FreeLibrary(hLibModule);
    if ((int)local_660 < 1) goto LAB_00594238;
  }
  piVar9[4] = 1;
LAB_00594250:
  __security_check_cookie(local_c ^ (uint)auStack_664);
  return;
}
