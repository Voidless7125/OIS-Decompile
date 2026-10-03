#include "../ois_server.exe.h"


void __fastcall thunk_FUN_00430250(int *param_1)

{
  void *this;
  void *pvVar1;
  
  this = (void *)*param_1;
  if (this != (void *)0x0) {
    pvVar1 = (void *)param_1[1];
    if (this != pvVar1) {
      do {
        FUN_00404000(this,0);
        this = (void *)((int)this + 0x40);
      } while (this != pvVar1);
      this = (void *)*param_1;
    }
    pvVar1 = this;
    if ((0xfff < (param_1[2] - (int)this & 0xffffffc0U)) &&
       (pvVar1 = *(void **)((int)this + -4), 0x1f < (uint)((int)this + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


int __fastcall FUN_00430180(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}


void FUN_00430190(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_00430450(param_1);
  }
  return;
}


void __fastcall FUN_004301c0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar1 != pvVar2) {
      do {
        FUN_004304b0((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0xa8);
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0xa8) * 0xa8)) &&
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


void __fastcall FUN_00430250(int *param_1)

{
  void *this;
  void *pvVar1;
  
  this = (void *)*param_1;
  if (this != (void *)0x0) {
    pvVar1 = (void *)param_1[1];
    if (this != pvVar1) {
      do {
        FUN_00404000(this,0);
        this = (void *)((int)this + 0x40);
      } while (this != pvVar1);
      this = (void *)*param_1;
    }
    pvVar1 = this;
    if ((0xfff < (param_1[2] - (int)this & 0xffffffc0U)) &&
       (pvVar1 = *(void **)((int)this + -4), 0x1f < (uint)((int)this + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_004302c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
    FUN_004304b0(param_1);
  }
  return;
}


void FUN_004302f0(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0xa8)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void __thiscall FUN_00430330(void *this,int *param_1)

{
  int *piVar1;
  int local_6c [9];
  int *local_48;
  int *local_40;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2428;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = local_6c;
  local_48 = (int *)0x0;
  local_8 = 0;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1) {
      local_48 = (int *)(**(code **)(*piVar1 + 4))(local_6c,local_14);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar1 = (int *)param_1[9];
      if (piVar1 == (int *)0x0) goto LAB_004303b5;
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
      piVar1 = local_48;
    }
    local_48 = piVar1;
    param_1[9] = 0;
  }
LAB_004303b5:
  local_18 = (int *)0x0;
  local_8 = 3;
  if (local_48 != (int *)0x0) {
    local_18 = FUN_00417fe0(local_6c);
  }
  local_8 = 4;
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_48 != local_6c);
    local_48 = (int *)0x0;
  }
  FUN_0042e080(local_3c,this);
  local_8 = 5;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))(local_18 != local_3c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00430450(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_004301c0((int *)(param_1 + 0x2c));
  FUN_00430250((int *)(param_1 + 0x20));
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pvVar1 = *(void **)(param_1 + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x1c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


void __fastcall FUN_004304b0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 0x80),DAT_0065500c ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  local_8 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0x7c)) {
    pvVar2 = *(void **)(param_1 + 0x68);
    pvVar3 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x7c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
    goto LAB_00430607;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  local_8 = 1;
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pvVar2 = *(void **)(param_1 + 0x20);
    pvVar3 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x34) + 1) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
    goto LAB_00430607;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pvVar2 = *(void **)(param_1 + 8);
    pvVar3 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x1c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3)))) {
LAB_00430607:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_00430610(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b248e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = in_stack_00000024;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_8 = 2;
  FUN_004024e0((void *)((int)this + 0x3c),&param_3);
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00430710(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0065b5cc;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(iVar1 + 0xd0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 0x374) = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
  return;
}


undefined4 __thiscall FUN_00430770(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  
  if (*(float *)((int)this + 0x18) != -1.0) {
    iVar11 = -1;
    iVar10 = 10;
    iVar8 = *(int *)(DAT_0065b5cc + 0xd0);
    pvVar3 = (void *)FUN_00402f60();
    uVar4 = FUN_00557fb0(pvVar3,iVar8,iVar10,iVar11);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  uVar5 = *(uint *)((int)this + 0x6c);
  if (uVar5 == 1) {
    if (param_1 == 0x1d) {
      iVar8 = *(int *)((int)this + 0x70);
      uVar5 = param_1;
      if (iVar8 == 0) goto LAB_00430a88;
      uVar5 = FUN_0042fdd0(iVar8);
      *(uint *)(iVar8 + 0x24) = uVar5;
      FUN_0042f960(*(void **)((int)this + 0x70),(void *)((int)this + 0x38),
                   (void *)((int)this + 0x50));
      FUN_00432470(this,'\x01','\x01');
    }
    else if (param_1 == 0x1c) {
      uVar5 = param_1;
      if (*(void **)((int)this + 0x70) == (void *)0x0) goto LAB_00430a88;
      FUN_0042fcf0(*(void **)((int)this + 0x70),0xffffffff);
      FUN_0042f960(*(void **)((int)this + 0x70),(void *)((int)this + 0x38),
                   (void *)((int)this + 0x50));
      FUN_00432470(this,'\x01','\x01');
    }
    else {
      if (((param_1 != 0x3b) && (param_1 != 0xa4)) && (uVar5 = param_1, param_1 != 0x23))
      goto LAB_00430a88;
      uVar5 = FUN_0042ff50(*(int *)((int)this + 0x70));
      if (uVar5 != 0xfffffffe) {
        if (uVar5 == 0xffffffff) {
          FUN_00431110(this);
          FUN_00432470(this,'\0','\x01');
          goto LAB_00430c97;
        }
        FUN_00433d70(*(undefined4 **)((int)this + 0x70),
                     (void *)(*(undefined4 **)((int)this + 0x70))[2]);
        *(uint *)(*(int *)((int)this + 0x70) + 0x28) = uVar5;
        *(undefined4 *)(*(int *)((int)this + 0x70) + 0x24) = 0;
        uVar5 = FUN_0042fe90(*(int *)((int)this + 0x70));
        *(uint *)(*(int *)((int)this + 0x70) + 0x24) = uVar5;
      }
      FUN_00432470(this,'\0','\x01');
    }
    goto LAB_00430c97;
  }
  if (uVar5 == 2) {
    if (((param_1 == 0x3b) || (param_1 == 0xa4)) || (uVar5 = param_1, param_1 == 0x23)) {
      if (*(int *)((int)this + 0x8c) == 0) {
        FUN_00431110(this);
        uVar4 = FUN_00432470(this,'\0','\x01');
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      if (*(char *)(*(int *)((int)this + 0x8c) + 0x1d) != '\0') {
        *(undefined4 *)((int)this + 0x10) = 0xbf800000;
      }
      iVar11 = -1;
      iVar10 = 8;
      iVar8 = *(int *)(DAT_0065b5cc + 0xd0);
      pvVar3 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar3,iVar8,iVar10,iVar11);
      iVar8 = DAT_0065b5cc;
      *(undefined4 *)((int)this + 0x6c) = 3;
      *(undefined4 *)(*(int *)(iVar8 + 0xd0) + 0x374) = 0;
      FUN_00412870();
      piVar6 = FUN_004a0060(*(void **)((int)this + 0x8c),*(int *)((int)this + 0x88));
      FUN_00439320((int)piVar6);
      FUN_00432470(this,'\0','\x01');
      uVar4 = FUN_00433490((int)this);
      *(bool *)((int)this + 4) = (char)uVar4 == '\0';
      goto LAB_00430c97;
    }
    goto LAB_00430a88;
  }
  if (uVar5 == 0) {
    if (param_1 == 0x1d) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <=
          *(uint *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0xc) = 0;
        FUN_00432470(this,'\x01','\x01');
        goto LAB_00430c97;
      }
    }
    else {
      if (param_1 != 0x1c) {
        if (((param_1 == 0x3b) || (param_1 == 0xa4)) || (param_1 == 0x23)) {
          if (((*(int *)(DAT_0065b5cc + 0xd0) == 0) ||
              (piVar6 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x1c),
              piVar6 == (int *)0x0)) ||
             ((cVar2 = (**(code **)(*piVar6 + 0x10))(0), cVar2 == '\0' ||
              ((*(int *)((int)this + 0xc) < 0 ||
               (*(char *)(*(int *)(*(int *)((int)this + 0x74) + *(int *)((int)this + 0xc) * 4) + 1)
                == '\0')))))) {
            uVar5 = FUN_004eb5c0();
            goto LAB_00430a88;
          }
          FUN_004eb5a0();
          FUN_00430f60(this,*(int *)((int)this + 0xc));
          FUN_00432470(this,'\0','\x01');
          goto LAB_00430c97;
        }
        bVar9 = param_1 == 7;
LAB_004309ef:
        uVar5 = param_1;
        if (!bVar9) {
LAB_00430a88:
          return uVar5 & 0xffffff00;
        }
LAB_004309f5:
        FUN_00431110(this);
        FUN_004eb5c0();
        goto LAB_00430c97;
      }
      piVar6 = (int *)((int)this + 0xc);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 < 0) {
        *(int *)((int)this + 0xc) =
             (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) + -1;
        FUN_00432470(this,'\x01','\x01');
        goto LAB_00430c97;
      }
    }
  }
  else {
    if (uVar5 != 3) goto LAB_00430a88;
    if (*(char *)((int)this + 0x80) != '\0') {
      if (((param_1 != 7) && (param_1 != 0x3b)) && (param_1 != 0xa4)) {
        bVar9 = param_1 == 0x23;
        goto LAB_004309ef;
      }
      goto LAB_004309f5;
    }
    iVar8 = *(int *)((int)this + 0x8c);
    if (iVar8 == 0) {
      FUN_004eb5c0();
      FUN_00431110(this);
      goto LAB_00430c97;
    }
    if (param_1 == 0x1d) {
      uVar5 = 0;
      uVar7 = *(int *)(iVar8 + 0xa4) - *(int *)(iVar8 + 0xa0) >> 2;
      if (uVar7 != 0) {
        do {
          piVar6 = *(int **)(*(int *)(iVar8 + 0xa0) + uVar5 * 4);
          if (*piVar6 == *(int *)((int)this + 0x88)) goto LAB_00430b2e;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      piVar6 = (int *)0x0;
LAB_00430b2e:
      if ((char)piVar6[2] == '\0') {
        *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 1;
        if ((uint)(piVar6[0x19] - piVar6[0x18] >> 2) <= *(uint *)((int)this + 0x94)) {
          *(undefined4 *)((int)this + 0x94) = 0;
          FUN_00432470(this,'\x01','\x01');
          goto LAB_00430c97;
        }
      }
      else {
        for (iVar8 = 0; iVar8 < 5; iVar8 = iVar8 + 1) {
          uVar5 = *(int *)((int)this + 0x94) + 1;
          *(uint *)((int)this + 0x94) = uVar5;
          iVar10 = piVar6[0x18];
          if ((uint)(piVar6[0x19] - iVar10 >> 2) <= uVar5) {
            *(undefined4 *)((int)this + 0x94) = 0;
            uVar5 = 0;
            iVar10 = piVar6[0x18];
          }
          uVar5 = FUN_0049fdd0(*(void **)(iVar10 + uVar5 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          if ((char)uVar5 != '\0') break;
        }
      }
    }
    else {
      if (param_1 != 0x1c) {
        if (((param_1 != 0x3b) && (param_1 != 0xa4)) && (uVar5 = param_1, param_1 != 0x23))
        goto LAB_00430a88;
        FUN_00430d60(this);
        goto LAB_00430c97;
      }
      uVar5 = 0;
      uVar7 = *(int *)(iVar8 + 0xa4) - *(int *)(iVar8 + 0xa0) >> 2;
      if (uVar7 != 0) {
        do {
          piVar6 = *(int **)(*(int *)(iVar8 + 0xa0) + uVar5 * 4);
          if (*piVar6 == *(int *)((int)this + 0x88)) goto LAB_00430bfe;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      piVar6 = (int *)0x0;
LAB_00430bfe:
      if ((char)piVar6[2] == '\0') {
        piVar1 = (int *)((int)this + 0x94);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(int *)((int)this + 0x94) = (piVar6[0x19] - piVar6[0x18] >> 2) + -1;
        }
      }
      else {
        for (iVar8 = 0; iVar8 < 5; iVar8 = iVar8 + 1) {
          iVar10 = *(int *)((int)this + 0x94) + -1;
          *(int *)((int)this + 0x94) = iVar10;
          if (iVar10 < 0) {
            iVar10 = (piVar6[0x19] - piVar6[0x18] >> 2) + -1;
            *(int *)((int)this + 0x94) = iVar10;
          }
          uVar5 = FUN_0049fdd0(*(void **)(piVar6[0x18] + iVar10 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          if ((char)uVar5 != '\0') break;
        }
      }
    }
  }
  FUN_00432470(this,'\x01','\x01');
LAB_00430c97:
  iVar8 = DAT_0065b3d4;
  if (DAT_0065b3d4 == 0) {
    iVar8 = *(int *)(DAT_0065b5cc + 0xd0);
  }
  pvVar3 = (void *)FUN_00402f60();
  uVar4 = FUN_00558a20(pvVar3,iVar8);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


uint __fastcall FUN_00430cd0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0xa0);
  uVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0xa4) - iVar2 >> 2;
  if (uVar1 != 0) {
    do {
      piVar4 = *(int **)(iVar2 + uVar3 * 4);
      if (*piVar4 == *(int *)(param_1 + 0x88)) goto LAB_00430d03;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  piVar4 = (int *)0x0;
LAB_00430d03:
  uVar1 = 0;
  iVar2 = piVar4[0x18];
  if (piVar4[0x19] - iVar2 >> 2 != 0) {
    do {
      uVar3 = FUN_0049fdd0(*(void **)(iVar2 + uVar1 * 4),
                           *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
      if ((char)uVar3 != '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      iVar2 = piVar4[0x18];
    } while (uVar1 < (uint)(piVar4[0x19] - iVar2 >> 2));
  }
  return 0;
}


void __fastcall FUN_00430d60(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  
  uVar5 = 0;
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x8c) + 0xa0);
  uVar4 = *(int *)(*(int *)((int)param_1 + 0x8c) + 0xa4) - iVar6 >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = *(int **)(iVar6 + uVar5 * 4);
      if (*piVar1 == *(int *)((int)param_1 + 0x88)) goto LAB_00430d96;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar1 = (int *)0x0;
LAB_00430d96:
  pvVar2 = *(void **)(piVar1[0x18] + *(int *)((int)param_1 + 0x94) * 4);
  if (pvVar2 == (void *)0x0) {
    FUN_00591070("WARNING","Invalid conversation option selected in pComms");
    return;
  }
  uVar4 = FUN_0049fdd0(pvVar2,*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
  if ((char)uVar4 == '\0') {
    FUN_00591070("DETAIL","Option invalid.");
    iVar9 = -1;
    iVar7 = 10;
    iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar6,iVar7,iVar9);
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),2,
                   "You must complete a task before proceeding.");
      return;
    }
  }
  else {
    FUN_00412870();
    uVar4 = 0;
    if (*(int *)((int)pvVar2 + 0x5c) - *(int *)((int)pvVar2 + 0x58) >> 2 != 0) {
      do {
        FUN_004a3f20(*(int **)(*(int *)((int)pvVar2 + 0x58) + uVar4 * 4));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)((int)pvVar2 + 0x5c) - *(int *)((int)pvVar2 + 0x58) >> 2));
    }
    if (*(int *)((int)pvVar2 + 8) < 0) {
      if (*(char *)(*(int *)((int)param_1 + 0x8c) + 0x1d) != '\0') {
        FUN_00431110(param_1);
        uVar3 = FUN_00433490((int)param_1);
        *(bool *)((int)param_1 + 4) = (char)uVar3 == '\0';
        return;
      }
      *(undefined1 *)((int)param_1 + 0x80) = 1;
      *(undefined4 *)((int)param_1 + 0x84) = 0x40400000;
      *(undefined4 *)((int)param_1 + 0x94) = 0;
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      cVar8 = '\x01';
    }
    else {
      *(int *)((int)param_1 + 0x88) = *(int *)((int)pvVar2 + 8);
      uVar4 = FUN_00430cd0((int)param_1);
      *(uint *)((int)param_1 + 0x94) = uVar4;
      FUN_00591070("DETAIL","Selected option %d");
      iVar9 = -1;
      iVar7 = 8;
      iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
      pvVar2 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar2,iVar6,iVar7,iVar9);
      *(undefined4 *)((int)param_1 + 0x18) = 0;
      FUN_00412870();
      piVar1 = FUN_004a0060(*(void **)((int)param_1 + 0x8c),*(int *)((int)param_1 + 0x88));
      FUN_00439320((int)piVar1);
      cVar8 = '\0';
    }
    FUN_00432470(param_1,'\x01',cVar8);
    uVar3 = FUN_00433490((int)param_1);
    *(bool *)((int)param_1 + 4) = (char)uVar3 == '\0';
  }
  return;
}


void __thiscall FUN_00430f60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  
  iVar1 = param_1 * 4;
  iVar2 = *(int *)(*(int *)(iVar1 + *(int *)((int)this + 0x74)) + 8);
  if (iVar2 != 0) {
    iVar5 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158);
    if (iVar5 == 1) {
      *(undefined4 *)((int)this + 0x6c) = 1;
      iVar1 = *(int *)(iVar1 + *(int *)((int)this + 0x74));
      *(int *)((int)this + 0x70) = iVar1;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      uVar4 = FUN_0042fe90(*(int *)((int)this + 0x70));
      *(uint *)(*(int *)((int)this + 0x70) + 0x24) = uVar4;
      *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(*(int *)((int)this + 0x70) + 8);
      FUN_00432470(this,'\0','\x01');
      return;
    }
    if ((iVar5 == 0) || (iVar5 == 3)) {
      iVar5 = FUN_00518e40(iVar2);
      *(int *)((int)this + 0x8c) = iVar5;
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x74) + iVar1) + 8);
      pbVar3 = *(byte **)(iVar2 + 0x360);
      pbVar6 = FUN_004143f0(*(byte **)(iVar2 + 0x35c),pbVar3,
                            (byte *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x238));
      if (pbVar6 != pbVar3) {
        *(undefined4 *)((int)this + 0x8c) = 0;
        iVar5 = 0;
      }
      iVar2 = *(int *)(*(int *)(iVar1 + *(int *)((int)this + 0x74)) + 8);
      if (iVar5 == 0) {
        if (*(int *)(*(int *)(iVar2 + 0x254) + 0x158) == 0) {
          return;
        }
      }
      else {
        *(int *)((int)this + 0x90) = iVar2;
      }
      *(undefined4 *)((int)this + 0x6c) = 3;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + *(int *)((int)this + 0x74));
      *(undefined1 *)((int)this + 0x80) = 0;
      *(undefined4 *)((int)this + 0x88) = 0;
      uVar4 = FUN_00430cd0((int)this);
      *(uint *)((int)this + 0x94) = uVar4;
      if (*(int *)((int)this + 0x8c) != 0) {
        FUN_00412870();
        piVar7 = FUN_004a0060(*(void **)((int)this + 0x8c),*(int *)((int)this + 0x88));
        FUN_00439320((int)piVar7);
      }
    }
  }
  FUN_00432470(this,'\0','\x01');
  return;
}


void __fastcall FUN_004310c0(void *param_1)

{
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x374) = 0;
  *(undefined1 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  FUN_00432470(param_1,'\x01','\x01');
  return;
}


void __fastcall FUN_00431110(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  FUN_00432470(param_1,'\x01','\x01');
  return;
}


void __fastcall FUN_00431150(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  float in_XMM1_Da;
  float fVar4;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b24c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar4 = *(float *)(param_1 + 0x10) - in_XMM1_Da;
  *(float *)(param_1 + 0x10) = fVar4;
  if (0.0 < fVar4) {
    puVar3 = (undefined4 *)(param_1 + 0x20);
    if (*(undefined4 **)(param_1 + 0x68) != puVar3) {
      if (0xf < *(uint *)(param_1 + 0x34)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_00402690(*(undefined4 **)(param_1 + 0x68),puVar3,*(uint *)(param_1 + 0x30));
      fVar4 = *(float *)(param_1 + 0x10);
    }
    if (1.4 < fVar4) {
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `^%c");
      local_8 = 1;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      local_8 = 0xffffffff;
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
      rand();
      rand();
      rand();
      rand();
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Syncing : `0[`2%d%d%d%d`0]");
      local_8 = 2;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      if (0xf < local_30) {
        pvVar2 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar2 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `$%c");
      local_8 = 0;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      local_8 = 0xffffffff;
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
      FUN_00403640(*(void **)(param_1 + 0x68),"\n`2Syncing : `0[done]",0x15);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
    **(undefined1 **)(param_1 + 0x70) = 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00431390(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  float in_XMM1_Da;
  float fVar4;
  char *pcVar5;
  uint uVar6;
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
  puStack_c = &LAB_005b2508;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar4 = *(float *)(param_1 + 0x10) - in_XMM1_Da;
  *(float *)(param_1 + 0x10) = fVar4;
  if (0.0 < fVar4) {
    puVar3 = (undefined4 *)(param_1 + 0x20);
    if (*(undefined4 **)(param_1 + 0x68) != puVar3) {
      if (0xf < *(uint *)(param_1 + 0x34)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_00402690(*(undefined4 **)(param_1 + 0x68),puVar3,*(uint *)(param_1 + 0x30));
      fVar4 = *(float *)(param_1 + 0x10);
    }
    if (1.4 < fVar4) {
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `^%c");
      local_8 = 2;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      local_8 = 0xffffffff;
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
      fVar4 = *(float *)(param_1 + 8);
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0.10769231 < fVar4) {
        if (0.21538462 < fVar4) {
          if (0.32307693 < fVar4) {
            if (0.43076923 < fVar4) {
              if (0.53846157 < fVar4) {
                if (0.64615387 < fVar4) {
                  if (0.75384617 < fVar4) {
                    if (0.86153847 < fVar4) {
                      if (0.9692308 < fVar4) {
                        if (1.0769231 < fVar4) {
                          if (1.1846154 < fVar4) {
                            if (1.2923077 < fVar4) {
                              uVar6 = 0x22;
                              pcVar5 = "\n`2Hailing : `0[`8..........`7o`0]";
                            }
                            else {
                              uVar6 = 0x24;
                              pcVar5 = "\n`2Hailing : `0[`8.........`7o`%O`0]";
                            }
                          }
                          else {
                            uVar6 = 0x28;
                            pcVar5 = "\n`2Hailing : `0[`8........`7o`%O`7o`8`0]";
                          }
                        }
                        else {
                          uVar6 = 0x28;
                          pcVar5 = "\n`2Hailing : `0[`8.......`7o`%O`7o`8.`0]";
                        }
                      }
                      else {
                        uVar6 = 0x28;
                        pcVar5 = "\n`2Hailing : `0[`8......`7o`%O`7o`8..`0]";
                      }
                    }
                    else {
                      uVar6 = 0x28;
                      pcVar5 = "\n`2Hailing : `0[`8.....`7o`%O`7o`8...`0]";
                    }
                  }
                  else {
                    uVar6 = 0x28;
                    pcVar5 = "\n`2Hailing : `0[`8....`7o`%O`7o`8....`0]";
                  }
                }
                else {
                  uVar6 = 0x28;
                  pcVar5 = "\n`2Hailing : `0[`8...`7o`%O`7o`8.....`0]";
                }
              }
              else {
                uVar6 = 0x28;
                pcVar5 = "\n`2Hailing : `0[`8..`7o`%O`7o`8......`0]";
              }
            }
            else {
              uVar6 = 0x28;
              pcVar5 = "\n`2Hailing : `0[`8.`7o`%O`7o`8.......`0]";
            }
          }
          else {
            uVar6 = 0x24;
            pcVar5 = "\n`2Hailing : `0[`%O`7o`8.........`0]";
          }
        }
        else {
          uVar6 = 0x22;
          pcVar5 = "\n`2Hailing : `0[`7o`8..........`0]";
        }
      }
      else {
        uVar6 = 0x20;
        pcVar5 = "\n`2Hailing : `0[`8...........`0]";
      }
    }
    else if (*(int *)(param_1 + 0x8c) == 0) {
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44," `$%c");
      local_8 = 1;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pvVar2 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar2 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
      uVar6 = 0x20;
      pcVar5 = "\n`2Hailing : `0[`$no response`0]";
    }
    else {
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44," `$%c");
      local_8 = 0;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pvVar2 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar2 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
      uVar6 = 0x20;
      pcVar5 = "\n`2Hailing : `0[ `%connected`0 ]";
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pcVar5,uVar6);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
    if ((*(int *)(param_1 + 0x8c) != 0) && (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0))
    {
      **(undefined1 **)(param_1 + 0x70) = 1;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004316f0(void *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  char *this;
  undefined4 *this_00;
  undefined4 uVar4;
  uint uVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  float fVar12;
  float in_XMM1_Da;
  float fVar13;
  byte *in_stack_ffffff90;
  byte *in_stack_ffffff94;
  int iVar14;
  int iVar15;
  uint local_40;
  char local_3c;
  undefined1 *local_38;
  int local_34;
  float local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2540;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 0) goto LAB_00431cc9;
  local_30 = in_XMM1_Da;
  if ((((0.0 <= *(float *)((int)param_1 + 0x84)) &&
       (fVar12 = *(float *)((int)param_1 + 0x84) - in_XMM1_Da,
       *(float *)((int)param_1 + 0x84) = fVar12, fVar12 <= 0.0)) &&
      (*(undefined4 *)((int)param_1 + 0x84) = 0xbf800000, *(int *)((int)param_1 + 0x6c) == 3)) &&
     ((*(int *)((int)param_1 + 0x8c) != 0 && (*(char *)((int)param_1 + 0x80) != '\0')))) {
    FUN_00591070("DETAIL","Auto-closing comms.");
    FUN_00431110(param_1);
  }
  if ((*(int *)((int)param_1 + 0x6c) == 0) || (*(int *)((int)param_1 + 0x6c) == 1)) {
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) != 3) {
      puVar11 = *(undefined1 **)(DAT_0065b5cc + 0xd8);
      local_40 = 0;
      local_38 = puVar11;
      if (*(int *)(puVar11 + 0xd0) - *(int *)(puVar11 + 0xcc) >> 2 != 0) {
        do {
          iVar14 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8);
          if ((((iVar14 == 1) || (iVar14 == 2)) || (iVar14 == 3)) ||
             (piVar2 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x1c),
             piVar2 == (int *)0x0)) {
LAB_0043181c:
            local_3c = '\0';
          }
          else {
            cVar1 = (**(code **)(*piVar2 + 0x10))();
            local_3c = '\x01';
            if (cVar1 == '\0') goto LAB_0043181c;
          }
          local_34 = FUN_00518ba0(*(void **)(*(int *)(puVar11 + 0xcc) + local_40 * 4),local_3c);
          if (local_34 != 0) {
            iVar14 = *(int *)(*(int *)(puVar11 + 0xcc) + local_40 * 4);
            if (iVar14 != *(int *)(DAT_0065b5cc + 0xd0)) {
              piVar2 = *(int **)(iVar14 + 0x214);
              uVar5 = 0;
              uVar9 = *(int *)(iVar14 + 0x218) - (int)piVar2 >> 2;
              if (uVar9 != 0) {
                do {
                  if (*(int *)(*piVar2 + 0x130) == *(int *)(DAT_0065b5cc + 0xd0)) {
                    if (*(float *)(*piVar2 + 0x40) <= 0.5) goto LAB_004318d6;
                    break;
                  }
                  uVar5 = uVar5 + 1;
                  piVar2 = piVar2 + 1;
                } while (uVar5 < uVar9);
              }
              iVar14 = *(int *)(*(int *)(iVar14 + 0x254) + 0x158);
              if ((iVar14 != 1) && (puVar11 = local_38, iVar14 != 3)) goto LAB_004318b3;
            }
LAB_004318d6:
            if (*(int *)((int)param_1 + 0x8c) == 0) {
              *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(local_34 + 0x24);
              *(int *)((int)param_1 + 0x8c) = local_34;
            }
            break;
          }
LAB_004318b3:
          local_40 = local_40 + 1;
        } while (local_40 < (uint)(*(int *)(puVar11 + 0xd0) - *(int *)(puVar11 + 0xcc) >> 2));
      }
    }
    iVar14 = *(int *)((int)param_1 + 0x8c);
    if (iVar14 != 0) {
      if (*(char *)(iVar14 + 0x1d) == '\0') {
        FUN_004024e0(&stack0xffffff94,(undefined4 *)(iVar14 + 4));
        in_stack_ffffff90 = (byte *)0x431928;
        iVar14 = FUN_004a7100(in_stack_ffffff94);
        *(int *)((int)param_1 + 0x90) = iVar14;
      }
      else {
        iVar14 = *(int *)(DAT_0065b5cc + 0xd0);
        *(int *)((int)param_1 + 0x90) = iVar14;
      }
      if (iVar14 != 0) {
        *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x374) = iVar14;
        *(undefined4 *)((int)param_1 + 0x88) = 0;
        *(undefined4 *)((int)param_1 + 0x94) = 0;
        *(undefined4 *)((int)param_1 + 8) = 0;
        *(undefined4 *)((int)param_1 + 0x6c) = 2;
        *(undefined4 *)((int)param_1 + 0x70) = 0;
        FUN_004024e0(local_2c,(undefined4 *)(*(int *)((int)param_1 + 0x90) + 8));
        local_8 = 0;
        ppppcVar7 = local_2c;
        if (0xf < local_18) {
          ppppcVar7 = (char ****)local_2c[0];
        }
        ppppcVar6 = local_2c;
        if (0xf < local_18) {
          ppppcVar6 = (char ****)local_2c[0];
        }
        FUN_00413ec0(&local_38,toupper_exref,(char *)ppppcVar6,(char *)((int)ppppcVar7 + local_1c),
                     (undefined1 *)ppppcVar7);
        if (*(char *)(*(int *)((int)param_1 + 0x8c) + 0x1d) == '\0') {
          FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),3,"INCOMING HAIL FROM %s");
        }
        else {
          FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),3,"** INTERCOM **");
        }
        FUN_00591070("DETAIL","HAILING PLAYER");
        if (0xf < local_18) {
          ppppcVar7 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar7 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppcVar7);
        }
        goto LAB_00431cc9;
      }
      *(undefined4 *)((int)param_1 + 0x8c) = 0;
    }
  }
  fVar12 = *(float *)((int)param_1 + 8);
  fVar13 = fVar12 + local_30;
  *(float *)((int)param_1 + 8) = fVar13;
  if (((fVar12 < 0.7) && (0.7 <= fVar13)) && (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x374) != 0))
  {
    if ((*(int *)((int)param_1 + 0x8c) == 0) ||
       (*(char *)(*(int *)((int)param_1 + 0x8c) + 0x1d) == '\0')) {
      this = (char *)FUN_00402f60();
      if (*this != '\0') {
        in_stack_ffffff90 = (byte *)0x431af7;
        FUN_00557af0(this,6,0x27,-1,0,'\x01',1.0);
      }
    }
    else {
      iVar15 = -1;
      iVar14 = 0x2e;
      pvVar3 = (void *)FUN_00402f60();
      FUN_00557f80(pvVar3,iVar14,iVar15);
    }
  }
  if (1.4 <= *(float *)((int)param_1 + 8)) {
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  iVar14 = *(int *)((int)param_1 + 0x6c);
  if (iVar14 == 0) {
    FUN_00433650((int)param_1);
LAB_00431bdc:
    FUN_00432470(param_1,'\x01','\x01');
  }
  else {
    if (iVar14 == 2) {
      if ((0.0 <= *(float *)((int)param_1 + 0x14)) &&
         (local_30 = *(float *)((int)param_1 + 0x14) - local_30,
         *(float *)((int)param_1 + 0x14) = local_30, local_30 < 0.0)) {
        *(undefined4 *)((int)param_1 + 0x14) = 0xbf800000;
        FUN_00591070(&DAT_005cdc70,"Conversation timed out.");
        iVar14 = *(int *)((int)param_1 + 0x8c);
        pbVar10 = (byte *)(iVar14 + 0x2c);
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(iVar14 + 0x40)) {
          pbVar8 = *(byte **)pbVar10;
        }
        uVar5 = FUN_004031f0(pbVar8,*(uint *)(iVar14 + 0x3c),(byte *)&PTR_005ce008,0);
        if ((char)uVar5 == '\0') {
          local_38 = &stack0xffffff90;
          FUN_004024e0(&stack0xffffff90,(undefined4 *)pbVar10);
          local_8 = 1;
          this_00 = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(this_00,in_stack_ffffff90);
        }
        FUN_004310c0(param_1);
      }
      goto LAB_00431bdc;
    }
    if ((iVar14 == 3) && (*(float *)((int)param_1 + 0x18) == -1.0)) goto LAB_00431bdc;
  }
  if (0.0 < *(float *)((int)param_1 + 0x10)) {
    if (*(int *)((int)param_1 + 0x6c) == 1) {
      cVar1 = FUN_00431150((int)param_1);
    }
    else {
      if (*(int *)((int)param_1 + 0x6c) != 3) goto LAB_00431c24;
      cVar1 = FUN_00431390((int)param_1);
    }
    if (cVar1 != '\0') goto LAB_00431cc9;
  }
LAB_00431c24:
  if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
      (*(char *)((int)param_1 + 4) != '\0')) &&
     (uVar4 = FUN_00433490((int)param_1), (char)uVar4 != '\0')) {
    *(undefined1 *)((int)param_1 + 4) = 0;
    FUN_00591070("DETAIL","Just got a valid option in a private comms conversation");
    iVar15 = -1;
    iVar14 = 0x26;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557f80(pvVar3,iVar14,iVar15);
    FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,
                 "Task complete - return to comms monitor.");
  }
  if (*(float *)((int)param_1 + 0x18) != -1.0) {
    if (*(int *)((int)param_1 + 0x6c) == 1) {
      FUN_004320d0((int)param_1);
    }
    else if (*(int *)((int)param_1 + 0x6c) == 3) {
      FUN_00431cf0((int)param_1);
    }
  }
LAB_00431cc9:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00431cf0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *******pppppppuVar4;
  uint uVar5;
  float in_XMM1_Da;
  float fVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  void *local_44 [5];
  uint local_30;
  undefined4 ******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2590;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)(param_1 + 0x20);
  if (*(undefined4 **)(param_1 + 0x68) != puVar3) {
    if (0xf < *(uint *)(param_1 + 0x34)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    FUN_00402690(*(undefined4 **)(param_1 + 0x68),puVar3,*(uint *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `$%c");
    local_8 = 0;
    puVar3 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar3 = (undefined4 *)*puVar1;
    }
    FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppppuVar4 = (undefined4 *******)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppuVar4);
    }
    FUN_00403640(*(void **)(param_1 + 0x68),"\n`2Hailing : `0[`$no response`0]",0x20);
    FUN_00403640(*(void **)(param_1 + 0x68),&DAT_005e75f8,1);
    uVar10 = 0x23;
    pcVar8 = "\n`2[`$backspace`2/`$enter`2] - back";
  }
  else {
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `$%c");
    local_8 = 1;
    puVar3 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar3 = (undefined4 *)*puVar1;
    }
    FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppppuVar4 = (undefined4 *******)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppuVar4);
    }
    uVar10 = 2;
    pcVar8 = "\n\n";
  }
  FUN_00403640(*(void **)(param_1 + 0x68),pcVar8,uVar10);
  fVar6 = in_XMM1_Da * 96.0 + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = fVar6;
  uVar10 = *(uint *)(param_1 + 0x48);
  if (fVar6 <= (float)((double)(int)uVar10 + *(double *)(&DAT_0062f350 + ((int)uVar10 >> 0x1f) * -8)
                      )) {
    puVar3 = (undefined4 *)(param_1 + 0x38);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
    uVar5 = (int)fVar6;
    if (uVar10 < (uint)(int)fVar6) {
      uVar5 = uVar10;
    }
    if (0xf < *(uint *)(param_1 + 0x4c)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    FUN_00402690(local_2c,puVar3,uVar5);
    local_8 = 2;
    pppppppuVar4 = local_2c;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pppppppuVar4,local_1c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppppuVar4 = (undefined4 *******)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppuVar4);
    }
    if (*(int *)(param_1 + 0x1c) != (int)*(float *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x1c) = (int)*(float *)(param_1 + 0x18);
      iVar11 = rand();
      pcVar8 = (char *)FUN_00402f60();
      if (*pcVar8 != '\0') {
        FUN_00557af0(pcVar8,6,7,iVar11 % 3 + 1,0,'\x01',1.0);
      }
    }
    iVar11 = 4;
    fVar6 = (float)((double)*(int *)(param_1 + 0x48) +
                   *(double *)(&DAT_0062f350 + (*(int *)(param_1 + 0x48) >> 0x1f) * -8)) -
            *(float *)(param_1 + 0x18);
    if ((4.0 <= fVar6) || (iVar11 = (int)fVar6, 0 < iVar11)) {
      FUN_00403640(*(void **)(param_1 + 0x68),&DAT_005e7468,1);
      iVar11 = iVar11 + -1;
      if (0 < iVar11) {
        do {
          rand();
          FUN_004323a0(param_1);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005e7a44);
      local_8 = 3;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
      if (0xf < local_30) {
        pvVar2 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar2 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
    }
  }
  else {
    iVar11 = -1;
    if (*(int *)(param_1 + 0x8c) == 0) {
      iVar9 = 10;
    }
    else {
      iVar9 = 8;
    }
    iVar7 = *(int *)(DAT_0065b5cc + 0xd0);
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar7,iVar9,iVar11);
    *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
    pvVar2 = (void *)(param_1 + 0x38);
    if (0xf < *(uint *)(param_1 + 0x4c)) {
      pvVar2 = *(void **)(param_1 + 0x38);
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pvVar2,*(uint *)(param_1 + 0x48));
    FUN_00403640(*(void **)(param_1 + 0x68),&DAT_005e310c,2);
    pvVar2 = (void *)(param_1 + 0x50);
    if (0xf < *(uint *)(param_1 + 100)) {
      pvVar2 = *(void **)(param_1 + 0x50);
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pvVar2,*(uint *)(param_1 + 0x60));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004320d0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *******pppppppuVar4;
  int iVar5;
  char *this;
  undefined4 *puVar6;
  uint uVar7;
  float in_XMM1_Da;
  float fVar8;
  int iVar9;
  int iVar10;
  void *local_44 [5];
  uint local_30;
  undefined4 ******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b25d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar6 = *(undefined4 **)(param_1 + 0x68);
  puVar3 = (undefined4 *)(param_1 + 0x20);
  if (puVar6 != puVar3) {
    if (0xf < *(uint *)(param_1 + 0x34)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    FUN_00402690(puVar6,puVar3,*(uint *)(param_1 + 0x30));
    puVar6 = *(undefined4 **)(param_1 + 0x68);
  }
  FUN_00403640(puVar6,&DAT_005e310c,2);
  fVar8 = in_XMM1_Da * 96.0 + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = fVar8;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (fVar8 <= (float)((double)(int)uVar1 + *(double *)(&DAT_0062f350 + ((int)uVar1 >> 0x1f) * -8)))
  {
    puVar3 = (undefined4 *)(param_1 + 0x38);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
    uVar7 = (int)fVar8;
    if (uVar1 < (uint)(int)fVar8) {
      uVar7 = uVar1;
    }
    if (0xf < *(uint *)(param_1 + 0x4c)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    FUN_00402690(local_2c,puVar3,uVar7);
    local_8 = 0;
    pppppppuVar4 = local_2c;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pppppppuVar4,local_1c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pppppppuVar4 = (undefined4 *******)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppppuVar4 = (undefined4 *******)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppuVar4);
    }
    if (*(int *)(param_1 + 0x1c) != (int)*(float *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x1c) = (int)*(float *)(param_1 + 0x18);
      iVar5 = rand();
      this = (char *)FUN_00402f60();
      if (*this != '\0') {
        FUN_00557af0(this,6,7,iVar5 % 3 + 1,0,'\x01',1.0);
      }
    }
    iVar5 = 4;
    fVar8 = (float)((double)*(int *)(param_1 + 0x48) +
                   *(double *)(&DAT_0062f350 + (*(int *)(param_1 + 0x48) >> 0x1f) * -8)) -
            *(float *)(param_1 + 0x18);
    if ((4.0 <= fVar8) || (iVar5 = (int)fVar8, 0 < iVar5)) {
      FUN_00403640(*(void **)(param_1 + 0x68),&DAT_005e7468,1);
      iVar5 = iVar5 + -1;
      if (0 < iVar5) {
        do {
          rand();
          FUN_004323a0(param_1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005e7a44);
      local_8 = 1;
      puVar3 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar6;
      }
      FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar6[4]);
      if (0xf < local_30) {
        pvVar2 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar2 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
    }
  }
  else {
    iVar10 = -1;
    iVar9 = 8;
    iVar5 = *(int *)(DAT_0065b5cc + 0xd0);
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar5,iVar9,iVar10);
    *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
    pvVar2 = (void *)(param_1 + 0x38);
    if (0xf < *(uint *)(param_1 + 0x4c)) {
      pvVar2 = *(void **)(param_1 + 0x38);
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pvVar2,*(uint *)(param_1 + 0x48));
    FUN_00403640(*(void **)(param_1 + 0x68),&DAT_005e310c,2);
    pvVar2 = (void *)(param_1 + 0x50);
    if (0xf < *(uint *)(param_1 + 100)) {
      pvVar2 = *(void **)(param_1 + 0x50);
    }
    FUN_00403640(*(void **)(param_1 + 0x68),pvVar2,*(uint *)(param_1 + 0x60));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004323a0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_2c [5];
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
  rand();
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%c%c");
  local_8 = 0;
  puVar3 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar3 = (undefined4 *)*puVar1;
  }
  FUN_00403640(*(void **)(param_1 + 0x68),puVar3,puVar1[4]);
  if (0xf < local_18) {
    pvVar2 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar2 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00432470(void *this,char param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b26c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)((int)this + 0x68) == 0) || (*(char *)(DAT_0065b444 + 0x72) == '\0'))
  goto LAB_00432f8e;
  puVar5 = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x30) = 0;
  puVar6 = puVar5;
  if (0xf < *(uint *)((int)this + 0x34)) {
    puVar6 = (undefined4 *)*puVar5;
  }
  *(undefined1 *)puVar6 = 0;
  puVar2 = (undefined1 *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x48) = 0;
  if (0xf < *(uint *)((int)this + 0x4c)) {
    puVar2 = *(undefined1 **)((int)this + 0x38);
  }
  puVar6 = (undefined4 *)((int)this + 0x50);
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  puVar3 = puVar6;
  if (0xf < *(uint *)((int)this + 100)) {
    puVar3 = (undefined4 *)*puVar6;
  }
  *(undefined1 *)puVar3 = 0;
  FUN_00403640(puVar5,"`% StS Comms v`!1.7.2`7 by Purchase Tech\n\n",0x2a);
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 1) {
    if ((*(int *)((int)this + 0x8c) == 0) || (*(char *)(*(int *)((int)this + 0x8c) + 0x1d) == '\0'))
    {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Source  : `!%s\n");
      local_8 = 3;
      puVar3 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar3 = (undefined4 *)*puVar4;
      }
      FUN_00403640(puVar5,puVar3,puVar4[4]);
      local_8 = 0xffffffff;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2ID      : `%c%s\n");
      local_8 = 4;
      puVar3 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar3 = (undefined4 *)*puVar4;
      }
      FUN_00403640(puVar5,puVar3,puVar4[4]);
      local_8 = 0xffffffff;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Encrypt.: `!pby-4");
      local_8 = 5;
      puVar3 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar3 = (undefined4 *)*puVar4;
      }
      FUN_00403640(puVar5,puVar3,puVar4[4]);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_004327de;
      }
    }
    else {
      FUN_0042f900(*(void **)((int)this + 0x70),(undefined1 *)local_2c);
      local_8 = 0;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Source  : `!INTERCOM\n");
      local_8._0_1_ = 1;
      FUN_00403490(puVar5,puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
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
      local_8 = 0xffffffff;
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
      FUN_00403640(puVar5,"`2ID      : `!PASSENGER CABIN\n",0x1e);
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Encrypt.: `$pby-1");
      local_8 = 2;
      FUN_00403490(puVar5,puVar3);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_004327de:
        local_8 = 0xffffffff;
        FUN_005adb3f(pvVar7);
      }
    }
    FUN_0042f960(*(void **)((int)this + 0x70),(void *)((int)this + 0x38),puVar6);
    if (param_1 == '\0') {
      puVar5 = *(undefined4 **)((int)this + 0x68);
      puVar5[4] = 0;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
      pvVar7 = (void *)((int)this + 0x20);
      if (0xf < *(uint *)((int)this + 0x34)) {
        pvVar7 = *(void **)((int)this + 0x20);
      }
      FUN_00403640(*(void **)((int)this + 0x68),pvVar7,*(uint *)((int)this + 0x30));
      FUN_00403640(*(void **)((int)this + 0x68),&DAT_005e310c,2);
      *(undefined4 *)((int)this + 0x18) = 0;
      if (**(char **)((int)this + 0x70) == '\0') {
        *(undefined4 *)((int)this + 0x10) = 0x40a00000;
      }
LAB_00432f17:
      if (*(int *)((int)this + 0x6c) != 0) goto LAB_00432f8e;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        if (*(int *)((int)this + 0x90) == *(int *)(DAT_0065b5cc + 0xd0)) {
          if (*(float *)((int)this + 8) < 0.7) {
            pcVar8 = "\n\n\n                  `@** INTERCOM **";
          }
          else {
            pcVar8 = "\n\n\n                  `$** INTERCOM **";
          }
          FUN_00402690(puVar5,pcVar8,0x25);
          FUN_00403640(puVar5,"\n\n               `2From: `!PASSENGER CABIN",0x2a);
          FUN_00403640(puVar5,"\n\n               `2[`$enter`2 to answer intercom]",0x31);
        }
        else {
          if (*(float *)((int)this + 8) < 0.7) {
            pcVar8 = "\n\n\n                `@** INCOMING HAIL **";
          }
          else {
            pcVar8 = "\n\n\n                `$** INCOMING HAIL **";
          }
          FUN_00402690(puVar5,pcVar8,0x28);
          puVar6 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,"\n\n               `2From: `%c%s");
          local_8 = 0x10;
          FUN_00403490(puVar5,puVar6);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar7 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar7 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
            FUN_005adb3f(pvVar7);
          }
          puVar6 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,"\n               `2Rego: `0%s");
          local_8 = 0x11;
          FUN_00403490(puVar5,puVar6);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar7 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar7 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
            FUN_005adb3f(pvVar7);
          }
          puVar6 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_5c,"\n               `2Cls.: `0%s");
          local_8 = 0x12;
          FUN_00403490(puVar5,puVar6);
          local_8 = 0xffffffff;
          if (0xf < local_48) {
            pvVar7 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar7 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
            FUN_005adb3f(pvVar7);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          FUN_00403640(puVar5,"\n\n               `2[`$enter`2 to answer hail]",0x2d);
        }
      }
      else {
        FUN_00432fb0((int)this);
      }
      if (param_1 == '\0') goto LAB_00432f17;
      goto LAB_00432f1d;
    }
    pvVar7 = *(void **)((int)this + 0x70);
    iVar1 = *(int *)((int)this + 0x8c);
    if (pvVar7 == (void *)0x0) {
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x1d) == '\0')) {
        FUN_00591e00((undefined1 *)local_2c,"%s / %s");
        local_8 = 0xc;
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Source  : `!%s\n");
        local_8._0_1_ = 0xd;
        FUN_00403490(puVar5,puVar6);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
          FUN_005adb3f(pvVar7);
        }
        local_8 = 0xffffffff;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_18) {
          pvVar7 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar7 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
          FUN_005adb3f(pvVar7);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2ID      : `%c%s\n");
        local_8 = 0xe;
        FUN_00403490(puVar5,puVar6);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar7 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar7 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00432aa2;
          FUN_005adb3f(pvVar7);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Encrypt.: `$pby-3");
        local_8 = 0xf;
      }
      else {
        FUN_00403640(puVar5,"`2Source  : `!INTERCOM\n",0x17);
        FUN_00403640(puVar5,"`2ID      : `!PASSENGER CABIN\n",0x1e);
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Encrypt.: `$pby-1");
        local_8 = 0xb;
      }
LAB_00432a61:
      FUN_00403490(puVar5,puVar6);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
LAB_00432aa2:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
    }
    else {
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x1d) == '\0')) {
        FUN_0042f900(pvVar7,(undefined1 *)local_2c);
        local_8 = 8;
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Source  : `!%s\n");
        local_8._0_1_ = 9;
        FUN_00403490(puVar5,puVar6);
        local_8 = CONCAT31(local_8._1_3_,8);
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
        local_8 = 0xffffffff;
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
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2ID      : `%c%s\n");
        local_8 = 10;
        goto LAB_00432a61;
      }
      FUN_0042f900(pvVar7,(undefined1 *)local_2c);
      local_8 = 6;
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Source  : `!INTERCOM\n");
      local_8._0_1_ = 7;
      FUN_00403490(puVar5,puVar6);
      local_8 = CONCAT31(local_8._1_3_,6);
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
      local_8 = 0xffffffff;
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
      FUN_00403640(puVar5,"`2ID      : `!PASSENGER CABIN\n",0x1e);
    }
    if (*(char *)((int)this + 0x80) == '\0') {
      if (*(int *)((int)this + 0x8c) != 0) {
        FUN_00433210((int)this);
      }
    }
    else {
      FUN_00403640((void *)((int)this + 0x38),"`0** CONNECTION TERMINATED **",0x1d);
    }
    if (param_1 == '\0') {
      puVar6 = *(undefined4 **)((int)this + 0x68);
      puVar6[4] = 0;
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      *(undefined1 *)puVar6 = 0;
      FUN_00403490(*(void **)((int)this + 0x68),puVar5);
      FUN_00403640(*(void **)((int)this + 0x68),&DAT_005e310c,2);
      *(undefined4 *)((int)this + 0x18) = 0;
      if (*(char *)(*(int *)((int)this + 0x8c) + 0x1d) == '\0') {
        *(undefined4 *)((int)this + 0x10) = 0x40a00000;
      }
      goto LAB_00432f17;
    }
  }
LAB_00432f1d:
  if (param_2 != '\0') {
    puVar6 = *(undefined4 **)((int)this + 0x68);
    puVar5 = (undefined4 *)((int)this + 0x20);
    if (puVar6 != puVar5) {
      if (0xf < *(uint *)((int)this + 0x34)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      FUN_00402690(puVar6,puVar5,*(uint *)((int)this + 0x30));
      puVar6 = *(undefined4 **)((int)this + 0x68);
    }
    FUN_00403640(puVar6,&DAT_005e310c,2);
    pvVar7 = (void *)((int)this + 0x38);
    if (0xf < *(uint *)((int)this + 0x4c)) {
      pvVar7 = *(void **)((int)this + 0x38);
    }
    FUN_00403640(*(void **)((int)this + 0x68),pvVar7,*(uint *)((int)this + 0x48));
    FUN_00403640(*(void **)((int)this + 0x68),&DAT_005e310c,2);
    pvVar7 = (void *)((int)this + 0x50);
    if (0xf < *(uint *)((int)this + 100)) {
      pvVar7 = *(void **)((int)this + 0x50);
    }
    FUN_00403640(*(void **)((int)this + 0x68),pvVar7,*(uint *)((int)this + 0x60));
  }
LAB_00432f8e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00432fb0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
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
  puStack_c = &LAB_005b2700;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(DAT_0065b5cc + 0xd0) == 0) ||
      (piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x1c),
      piVar1 == (int *)0x0)) || (cVar2 = (**(code **)(*piVar1 + 0x10))(0,local_14), cVar2 == '\0'))
  {
    FUN_00403640((void *)(param_1 + 0x20),"`$NO CONNECTION TO ACTIVE COMMS MODULE",0x26);
  }
  else {
    FUN_00403640((void *)(param_1 + 0x20),"`2Comms Targets:\n",0x11);
    iVar6 = *(int *)(param_1 + 0x78);
    uVar8 = 0;
    iVar7 = *(int *)(param_1 + 0x74);
    if (iVar6 - iVar7 >> 2 != 0) {
      do {
        if (uVar8 != 0) {
          FUN_00403640((void *)(param_1 + 0x20),&DAT_005e75f8,1);
        }
        if (uVar8 == *(uint *)(param_1 + 0xc)) {
          uVar10 = 10;
          pcVar9 = "`2[`$*`2] ";
        }
        else {
          uVar10 = 6;
          pcVar9 = "`2[ ] ";
        }
        FUN_00403640((void *)(param_1 + 0x20),pcVar9,uVar10);
        if (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + uVar8 * 4) + 1) == '\0') {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e7d58);
          local_8 = 1;
          puVar4 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar4 = (undefined4 *)*puVar3;
          }
          FUN_00403640((void *)(param_1 + 0x20),puVar4,puVar3[4]);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar5 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar5 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_004331db;
            FUN_005adb3f(pvVar5);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        }
        else {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005e7d58);
          local_8 = 0;
          puVar4 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar4 = (undefined4 *)*puVar3;
          }
          FUN_00403640((void *)(param_1 + 0x20),puVar4,puVar3[4]);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
            pvVar5 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar5 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004331db:
              local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar5);
          }
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x74) + uVar8 * 4);
        pvVar5 = (void *)(iVar6 + 0xc);
        if (0xf < *(uint *)(iVar6 + 0x20)) {
          pvVar5 = *(void **)(iVar6 + 0xc);
        }
        FUN_00403640((void *)(param_1 + 0x20),pvVar5,*(uint *)(iVar6 + 0x1c));
        iVar6 = *(int *)(param_1 + 0x78);
        uVar8 = uVar8 + 1;
        iVar7 = *(int *)(param_1 + 0x74);
      } while (uVar8 < (uint)(iVar6 - iVar7 >> 2));
    }
    if ((iVar6 - iVar7 & 0xfffffffcU) == 0) {
      FUN_00403640((void *)(param_1 + 0x20),"\n`2 ** no valid comms targets detected **",0x29);
    }
    FUN_00402690((void *)(param_1 + 0x50),"`2[`$arrows`2/`$enter`2]",0x18);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00433210(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *this;
  undefined *puVar13;
  undefined1 auStack_2c [3];
  char local_29;
  int local_28;
  void *local_24 [4];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_2c;
  uVar5 = 0;
  iVar9 = *(int *)(*(int *)(param_1 + 0x8c) + 0xa0);
  uVar11 = *(int *)(*(int *)(param_1 + 0x8c) + 0xa4) - iVar9 >> 2;
  local_28 = param_1;
  if (uVar11 != 0) {
    do {
      piVar1 = *(int **)(iVar9 + uVar5 * 4);
      if (*piVar1 == *(int *)(param_1 + 0x88)) {
        if (piVar1 != (int *)0x0) {
          piVar6 = (int *)FUN_00591e00((undefined1 *)local_24,&DAT_005e3dcc);
          piVar12 = (int *)(param_1 + 0x38);
          if (piVar12 != piVar6) {
            FUN_00401b20(piVar12);
            iVar9 = piVar6[1];
            iVar2 = piVar6[2];
            iVar3 = piVar6[3];
            *piVar12 = *piVar6;
            *(int *)(param_1 + 0x3c) = iVar9;
            *(int *)(param_1 + 0x40) = iVar2;
            *(int *)(param_1 + 0x44) = iVar3;
            iVar9 = piVar6[5];
            *(int *)(param_1 + 0x48) = piVar6[4];
            *(int *)(param_1 + 0x4c) = iVar9;
            piVar6[4] = 0;
            piVar6[5] = 0xf;
            *(undefined1 *)piVar6 = 0;
          }
          if (0xf < local_10) {
            pvVar10 = local_24[0];
            if ((0xfff < local_10 + 1) &&
               (pvVar10 = *(void **)((int)local_24[0] + -4),
               0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          this = (undefined4 *)(local_28 + 0x50);
          local_14 = 0;
          local_10 = 0xf;
          local_24[0] = (void *)((uint)local_24[0] & 0xffffff00);
          *(undefined4 *)(local_28 + 0x60) = 0;
          puVar7 = this;
          if (0xf < *(uint *)(local_28 + 100)) {
            puVar7 = (undefined4 *)*this;
          }
          *(undefined1 *)puVar7 = 0;
          uVar5 = 0;
          iVar9 = piVar1[0x18];
          if (piVar1[0x19] - iVar9 >> 2 == 0) goto LAB_004332a8;
          goto LAB_00433390;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar11);
  }
  FUN_00591070("ERROR","Cannot find conversation element %d in conversation with %s");
  bVar4 = cc_assert_script_compatible("Invalid conversation element.");
  if (!bVar4) {
    cocos2d::log("Assert failed: %s","Invalid conversation element.");
  }
LAB_004332a8:
  __security_check_cookie(local_c ^ (uint)auStack_2c);
  return;
LAB_00433390:
  uVar11 = FUN_0049fdd0(*(void **)(iVar9 + uVar5 * 4),
                        *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
  local_29 = (char)uVar11;
  if ((local_29 != '\0') || ((char)piVar1[2] == '\0')) {
    if (uVar5 != 0) {
      FUN_00403640(this,&DAT_005e75f8,1);
    }
    bVar4 = uVar5 == *(uint *)(local_28 + 0x94);
    pcVar8 = "`2[ ] ";
    if (bVar4) {
      pcVar8 = "`2[`$*`2] ";
    }
    FUN_00403640(this,pcVar8,(uint)bVar4 * 4 + 6);
    if (local_29 == '\0') {
      puVar13 = &DAT_005e7dbc;
LAB_00433445:
      FUN_00403640(this,puVar13,2);
    }
    else if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
            (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      if (*(float *)(local_28 + 8) < 0.7) {
        puVar13 = &DAT_005e6758;
      }
      else {
        puVar13 = &DAT_005e7e24;
      }
      goto LAB_00433445;
    }
    iVar9 = *(int *)(piVar1[0x18] + uVar5 * 4);
    pvVar10 = (void *)(iVar9 + 0x3c);
    if (0xf < *(uint *)(iVar9 + 0x50)) {
      pvVar10 = *(void **)(iVar9 + 0x3c);
    }
    FUN_00403640(this,pvVar10,*(uint *)(iVar9 + 0x4c));
  }
  uVar5 = uVar5 + 1;
  iVar9 = piVar1[0x18];
  if ((uint)(piVar1[0x19] - iVar9 >> 2) <= uVar5) {
    __security_check_cookie(local_c ^ (uint)auStack_2c);
    return;
  }
  goto LAB_00433390;
}


uint __fastcall FUN_00433490(int param_1)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x8c);
  if (iVar4 != 0) {
    in_EAX = 0;
    uVar3 = *(int *)(iVar4 + 0xa4) - *(int *)(iVar4 + 0xa0) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar4 + 0xa0) + in_EAX * 4);
        if (*piVar1 == *(int *)(param_1 + 0x88)) {
          if (piVar1 != (int *)0x0) {
            uVar3 = 0;
            iVar4 = piVar1[0x18];
            in_EAX = 0;
            if (piVar1[0x19] - iVar4 >> 2 != 0) {
              do {
                uVar2 = FUN_0049fdd0(*(void **)(iVar4 + uVar3 * 4),
                                     *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                if ((char)uVar2 != '\0') {
                  return CONCAT31((int3)(uVar2 >> 8),1);
                }
                uVar3 = uVar3 + 1;
                iVar4 = piVar1[0x18];
              } while (uVar3 < (uint)(piVar1[0x19] - iVar4 >> 2));
              return (uint)(uint3)(piVar1[0x19] - iVar4 >> 10) << 8;
            }
          }
          break;
        }
        in_EAX = in_EAX + 1;
      } while (in_EAX < uVar3);
    }
  }
  return in_EAX & 0xffffff00;
}


void __fastcall FUN_00433530(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x44);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x48);
    if (pvVar2 != pvVar1) {
      do {
        FUN_00430450((int)pvVar2);
        pvVar2 = (void *)((int)pvVar2 + 0x38);
      } while (pvVar2 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x44);
    }
    pvVar1 = pvVar2;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x4c) - (int)pvVar2) / 0x38) * 0x38)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_0043363d;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x40)) {
    pvVar2 = *(void **)(param_1 + 0x2c);
    pvVar1 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x40) + 1) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_0043363d;
    FUN_005adb3f(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (0xf < *(uint *)(param_1 + 0x20)) {
    pvVar2 = *(void **)(param_1 + 0xc);
    pvVar1 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x20) + 1) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1)))) {
LAB_0043363d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


void __fastcall FUN_00433650(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *local_80;
  int *local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
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
  puStack_c = &LAB_005b2750;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar9 = *(undefined4 **)(param_1 + 0x74);
  local_7c = (int *)(param_1 + 0x74);
  piVar10 = (int *)0x0;
  piVar4 = (int *)((*(int *)(param_1 + 0x78) - (int)puVar9) + 3U >> 2);
  if (*(undefined4 **)(param_1 + 0x78) < puVar9) {
    piVar4 = (int *)0x0;
  }
  local_80 = piVar4;
  if (piVar4 != (int *)0x0) {
    do {
      pvVar8 = (void *)*puVar9;
      if (pvVar8 != (void *)0x0) {
        FUN_00433530((int)pvVar8);
        FUN_005adb3f(pvVar8);
        piVar4 = local_80;
      }
      piVar10 = (int *)((int)piVar10 + 1);
      puVar9 = puVar9 + 1;
    } while (piVar10 != piVar4);
  }
  iVar11 = DAT_0065b5cc;
  local_7c[1] = *local_7c;
  local_78 = 0;
  iVar1 = *(int *)(iVar11 + 0xd8);
  iVar5 = *(int *)(iVar1 + 0xcc);
  piVar4 = local_7c;
  if (*(int *)(iVar1 + 0xd0) - iVar5 >> 2 != 0) {
    do {
      pvVar8 = *(void **)(iVar5 + local_78 * 4);
      iVar5 = *(int *)(*(int *)((int)pvVar8 + 0x254) + 0x158);
      if (((iVar5 == 1) || (iVar5 == 3)) &&
         ((*(int *)((int)pvVar8 + 0x40) == 0 ||
          (*(char *)(*(int *)((int)pvVar8 + 0x40) + 0x34) != '\0')))) {
        local_80 = (int *)*piVar4;
        uVar6 = 0;
        uVar12 = piVar4[1] - (int)local_80 >> 2;
        piVar4 = local_80;
        if (uVar12 != 0) {
          do {
            if (*(void **)(*piVar4 + 8) == pvVar8) {
              if (local_80[uVar6] != 0) {
                *(undefined1 *)(local_80[uVar6] + 1) = 1;
                piVar4 = local_7c;
                goto LAB_0043385c;
              }
              break;
            }
            uVar6 = uVar6 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar6 < uVar12);
        }
        piVar2 = (int *)FUN_005adb0f(0x50);
        piVar4 = piVar2 + 3;
        *(undefined2 *)piVar2 = 0;
        piVar2[1] = -1;
        piVar2[2] = 0;
        piVar2[7] = 0;
        piVar2[8] = 0xf;
        *(undefined1 *)piVar4 = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[0xf] = 0;
        piVar2[0x10] = 0xf;
        *(undefined1 *)(piVar2 + 0xb) = 0;
        piVar2[0x11] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        local_80 = piVar2;
        FUN_00433d70(piVar2,pvVar8);
        piVar10 = (int *)((int)pvVar8 + 8);
        if (piVar4 != piVar10) {
          if (0xf < *(uint *)((int)pvVar8 + 0x1c)) {
            piVar10 = (int *)*piVar10;
          }
          FUN_00402690(piVar4,piVar10,*(uint *)((int)pvVar8 + 0x18));
        }
        piVar2[1] = *(int *)((int)pvVar8 + 0x250);
        piVar2[2] = (int)pvVar8;
        *(undefined1 *)((int)piVar2 + 1) = 1;
        FUN_00402690(piVar2 + 0xb,&DAT_005e7e28,2);
        puVar9 = (undefined4 *)local_7c[1];
        if ((undefined4 *)local_7c[2] == puVar9) {
          FUN_00414080(local_7c,puVar9,&local_80);
          piVar2 = local_80;
        }
        else {
          *puVar9 = piVar2;
          local_7c[1] = local_7c[1] + 4;
        }
        iVar11 = DAT_0065b5cc;
        piVar4 = local_7c;
        if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
           (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
          *(undefined1 *)((int)piVar2 + 1) = 0;
        }
      }
LAB_0043385c:
      local_78 = local_78 + 1;
      iVar5 = *(int *)(iVar1 + 0xcc);
    } while (local_78 < (uint)(*(int *)(iVar1 + 0xd0) - iVar5 >> 2));
  }
  piVar2 = (int *)(*(int *)(iVar11 + 0xd0) + 0x214);
  local_78 = 0;
  piVar10 = local_7c;
  if (*(int *)(*(int *)(iVar11 + 0xd0) + 0x218) - *piVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(*piVar2 + local_78 * 4);
      piVar10 = local_7c;
      if (((*(int *)(iVar1 + 0xe0) == 0) && (iVar1 = *(int *)(iVar1 + 0x130), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 0)) {
        piVar2 = (int *)*piVar4;
        uVar6 = 0;
        uVar12 = piVar4[1] - (int)piVar2 >> 2;
        piVar4 = piVar2;
        if (uVar12 != 0) {
          do {
            if ((*(int *)(*piVar4 + 8) == iVar1) && (iVar1 != 0)) {
              piVar4 = (int *)piVar2[uVar6];
              goto LAB_00433901;
            }
            uVar6 = uVar6 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar6 < uVar12);
        }
        piVar4 = (int *)0x0;
LAB_00433901:
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)FUN_005adb0f(0x50);
          *(undefined2 *)piVar4 = 0;
          piVar4[1] = -1;
          piVar4[2] = 0;
          piVar4[7] = 0;
          piVar4[8] = 0xf;
          *(undefined1 *)(piVar4 + 3) = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xf] = 0;
          piVar4[0x10] = 0xf;
          *(undefined1 *)(piVar4 + 0xb) = 0;
          piVar4[0x11] = 0;
          piVar4[0x12] = 0;
          piVar4[0x13] = 0;
          local_80 = piVar4;
          FUN_00402690(piVar4 + 0xb,&DAT_005e7e18,2);
          piVar10 = local_7c;
          iVar11 = DAT_0065b5cc;
          iVar1 = *(int *)(local_78 * 4 + *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x214));
          if (*(int *)(iVar1 + 0x130) != 0) {
            piVar4[1] = *(int *)(iVar1 + 0x124);
            piVar4[2] = *(int *)(*(int *)(local_78 * 4 + *(int *)(*(int *)(iVar11 + 0xd0) + 0x214))
                                + 0x130);
          }
          puVar9 = (undefined4 *)local_7c[1];
          if ((undefined4 *)local_7c[2] == puVar9) {
            FUN_00414080(local_7c,puVar9,&local_80);
            iVar11 = DAT_0065b5cc;
            piVar4 = local_80;
          }
          else {
            *puVar9 = piVar4;
            local_7c[1] = local_7c[1] + 4;
          }
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar11 + 0xd0) + 0x214) + local_78 * 4);
        piVar2 = (int *)(iVar1 + 0x48);
        if (piVar4 + 3 != piVar2) {
          if (0xf < *(uint *)(iVar1 + 0x5c)) {
            piVar2 = (int *)*piVar2;
          }
          FUN_00402690(piVar4 + 3,piVar2,*(uint *)(iVar1 + 0x58));
          iVar11 = DAT_0065b5cc;
        }
        iVar1 = *(int *)(iVar11 + 0xd0);
        iVar5 = *(int *)(*(int *)(iVar1 + 0x214) + local_78 * 4);
        pbVar7 = (byte *)(iVar5 + 0x48);
        if (0xf < *(uint *)(iVar5 + 0x5c)) {
          pbVar7 = *(byte **)(iVar5 + 0x48);
        }
        uVar6 = FUN_004031f0(pbVar7,*(uint *)(iVar5 + 0x58),(byte *)"Unknown",7);
        if ((char)uVar6 == '\0') {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_74," (%s)");
          local_8 = 3;
          puVar9 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar9 = (undefined4 *)*puVar3;
          }
          FUN_00403640(piVar4 + 3,puVar9,puVar3[4]);
          local_8 = -1;
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) goto LAB_00433d31;
            FUN_005adb3f(pvVar8);
          }
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar1 + 0x214) + local_78 * 4);
          pbVar7 = (byte *)(iVar5 + 0x60);
          if (0xf < *(uint *)(iVar5 + 0x74)) {
            pbVar7 = *(byte **)(iVar5 + 0x60);
          }
          uVar6 = FUN_004031f0(pbVar7,*(uint *)(iVar5 + 0x70),(byte *)"Unknown",7);
          if ((char)uVar6 == '\0') {
            puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c," (%s)");
            local_8 = 2;
            puVar9 = puVar3;
            if (0xf < (uint)puVar3[5]) {
              puVar9 = (undefined4 *)*puVar3;
            }
            FUN_00403640(piVar4 + 3,puVar9,puVar3[4]);
            local_8 = -1;
            if (0xf < local_48) {
              pvVar8 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar8 = *(void **)((int)local_5c[0] + -4),
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) goto LAB_00433d31;
              FUN_005adb3f(pvVar8);
            }
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          }
          else {
            FUN_005095f0(*(void **)(local_78 * 4 + *(int *)(iVar1 + 0x214)),(undefined1 *)local_44,
                         '\0',-1);
            local_8 = 0;
            puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," (%s)");
            local_8._0_1_ = 1;
            puVar9 = puVar3;
            if (0xf < (uint)puVar3[5]) {
              puVar9 = (undefined4 *)*puVar3;
            }
            FUN_00403640(piVar4 + 3,puVar9,puVar3[4]);
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pvVar8 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar8 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_00433d31;
              FUN_005adb3f(pvVar8);
            }
            local_8 = -1;
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            if (0xf < local_30) {
              pvVar8 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar8 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
LAB_00433d31:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar8);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
        }
        iVar11 = DAT_0065b5cc;
        *(bool *)((int)piVar4 + 1) =
             *(float *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x214) + local_78 * 4) +
                       0x40) <= 0.5;
      }
      piVar2 = (int *)(*(int *)(iVar11 + 0xd0) + 0x214);
      local_78 = local_78 + 1;
      piVar4 = local_7c;
    } while (local_78 < (uint)(*(int *)(*(int *)(iVar11 + 0xd0) + 0x218) - *piVar2 >> 2));
  }
  uVar6 = piVar10[1] - *piVar10 >> 2;
  if (uVar6 <= *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar6 - 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00433d70(undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  void *in_stack_fffffd04;
  uint in_stack_fffffd1c;
  byte *pbVar8;
  undefined4 *local_2bc;
  undefined4 *local_2b8;
  int local_2b0;
  int local_2ac;
  void *local_2a8;
  undefined4 *local_2a4;
  undefined4 *local_2a0;
  uint local_29c;
  undefined1 *local_298;
  undefined4 *local_294;
  uint local_290;
  undefined4 *local_28c;
  undefined4 local_288 [42];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1c0 [24];
  undefined4 local_1a8;
  undefined1 local_138 [172];
  undefined4 ***local_8c [4];
  uint local_7c;
  uint local_78;
  undefined4 ***local_74 [4];
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 **local_54;
  undefined4 **ppuStack_50;
  undefined4 **ppuStack_4c;
  undefined4 **ppuStack_48;
  undefined8 local_44;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b2a3a;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_294 = param_1;
  local_2a8 = param_2;
  local_29c = 0;
  FUN_0042f8b0((int)param_1);
  param_1[2] = param_2;
  local_5c = 0xffffffff;
  local_58 = -1;
  local_44 = 0xf00000000;
  local_54 = (undefined4 **)((uint)local_54 & 0xffffff00);
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  puStack_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_14._0_1_ = 0;
  local_14._1_3_ = 0;
  pppuVar3 = (undefined4 ***)
             FUN_00591e00((undefined1 *)local_74,"Please select your required service.");
  if (&local_54 != pppuVar3) {
    FUN_00401b20((int *)&local_54);
    local_54 = *pppuVar3;
    ppuStack_50 = pppuVar3[1];
    ppuStack_4c = pppuVar3[2];
    ppuStack_48 = pppuVar3[3];
    local_44 = *(undefined8 *)(pppuVar3 + 4);
    pppuVar3[4] = (undefined4 **)0x0;
    pppuVar3[5] = (undefined4 **)0xf;
    *(undefined1 *)pppuVar3 = 0;
  }
  if (0xf < local_60) {
    ppppuVar7 = (undefined4 ****)local_74[0];
    if ((0xfff < local_60 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_74[0][-1],
       0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
LAB_00433e7c:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffffff00);
  if ((*(int *)((int)param_2 + 0x3dc) == 0) ||
     ((piVar4 = FUN_0051b8a0(param_2,*(int *)(DAT_0065b5cc + 0xd0)), piVar4 != (int *)0x0 &&
      (piVar4[2] == 0)))) {
    FUN_00403640(&local_54,"\n\n`#You currently have docking clearance.",0x29);
  }
  if ((*(int *)((int)param_2 + 0x390) != 0) &&
     (0 < (int)*(float *)(*(int *)((int)param_2 + 0x390) + 0xd0))) {
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"\n\n`7Station owed: `$%dc");
    local_14._0_1_ = 1;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_54,puVar6,puVar5[4]);
    local_14._0_1_ = 0;
    if (0xf < local_78) {
      ppppuVar7 = (undefined4 ****)local_8c[0];
      if ((0xfff < local_78 + 1) &&
         (ppppuVar7 = (undefined4 ****)local_8c[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_8c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar7);
    }
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (undefined4 ***)((uint)local_8c[0] & 0xffffff00);
  }
  if ((0 < *(int *)((int)param_2 + 0x3e4)) &&
     (*(char *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x34) == '\0')) {
    puVar5 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_74,
                          "\n\n`^WARNING`7: Please turn on your IFF system before docking, or face a penalty of `$%dc`7."
                         );
    local_14._0_1_ = 2;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_54,puVar6,puVar5[4]);
    local_14._0_1_ = 0;
    if (0xf < local_60) {
      ppppuVar7 = (undefined4 ****)local_74[0];
      if ((0xfff < local_60 + 1) &&
         (ppppuVar7 = (undefined4 ****)local_74[0][-1],
         0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar7);
    }
  }
  local_28c = (undefined4 *)&stack0xfffffd1c;
  local_58 = 0;
  in_stack_fffffd1c = in_stack_fffffd1c & 0xffffff00;
  FUN_00402690(&stack0xfffffd1c,"NEEDS_DOCKING_PERMISSION",0x18);
  local_14._0_1_ = 3;
  FUN_00591e00(&stack0xfffffd04,"Request Docking Permission (`$%dc`7)");
  local_14._0_1_ = 0;
  FUN_0042f570(&local_1e0,2,1,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,4);
  pbVar8 = (byte *)(in_stack_fffffd1c & 0xffffff00);
  FUN_00402690(&stack0xfffffd1c,"REQUEST_DOCKING_PERMISSION",0x1a);
  FUN_0042f6b0(&local_1e0,pbVar8);
  local_1dc = 4;
  if (local_28 == local_2c) {
    FUN_00436730(&puStack_30,local_2c,&local_1e0);
  }
  else {
    FUN_00436a90(local_2c,&local_1e0);
    local_2c = local_2c + 0x2a;
  }
  local_1a8 = 2;
  local_1e0 = 2;
  FUN_00402690(local_1c0,"Cancel Docking Permission",0x19);
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  FUN_00402690(&stack0xfffffd1c,"HAS_DOCKING_PERMISSION",0x16);
  FUN_0042f7b0(&local_1e0,pbVar8);
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  FUN_00402690(&stack0xfffffd1c,"RESCIND_DOCKING_PERMISSION",0x1a);
  FUN_0042f6b0(&local_1e0,pbVar8);
  if (local_28 == local_2c) {
    FUN_00436730(&puStack_30,local_2c,&local_1e0);
  }
  else {
    FUN_00436a90(local_2c,&local_1e0);
    local_2c = local_2c + 0x2a;
  }
  local_28c = (undefined4 *)&stack0xfffffd1c;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 5;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,"View Current Goods for Sale",0x1b);
  local_14._0_1_ = 4;
  puVar6 = FUN_0042f570(local_138,0,3,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,6);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 4;
  FUN_004304b0((int)local_138);
  local_28c = (undefined4 *)&stack0xfffffd1c;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 7;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,"View Current Buy Prices",0x17);
  local_14._0_1_ = 4;
  puVar6 = FUN_0042f570(local_138,0,4,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,8);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 4;
  FUN_004304b0((int)local_138);
  local_28c = (undefined4 *)&stack0xfffffd1c;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 9;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,"View Current Contracts",0x16);
  local_14._0_1_ = 4;
  puVar6 = FUN_0042f570(local_138,0,5,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,10);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 4;
  FUN_004304b0((int)local_138);
  local_28c = (undefined4 *)&stack0xfffffd1c;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0xb;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,"View Current Passengers",0x17);
  local_14._0_1_ = 4;
  puVar6 = FUN_0042f570(local_138,0,6,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0xc);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 4;
  FUN_004304b0((int)local_138);
  local_28c = (undefined4 *)&stack0xfffffd1c;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0xd;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,"Disconnect",10);
  local_14._0_1_ = 4;
  FUN_0042f570(local_288,1,6,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0xe);
  if (local_28 == local_2c) {
    FUN_00436730(&puStack_30,local_2c,local_288);
  }
  else {
    FUN_00436a90(local_2c,local_288);
    local_2c = local_2c + 0x2a;
  }
  puVar1 = local_294;
  puVar5 = local_294 + 0x11;
  puVar6 = (undefined4 *)local_294[0x12];
  local_2a0 = puVar5;
  if ((undefined4 *)local_294[0x13] == puVar6) {
    FUN_00436300(puVar5,puVar6,&local_5c);
  }
  else {
    *puVar6 = local_5c;
    puVar6[1] = local_58;
    local_28c = puVar6;
    FUN_004024e0(puVar6 + 2,&local_54);
    local_14._0_1_ = 0xf;
    FUN_00436e40(puVar6 + 8,&local_3c);
    local_14._0_1_ = 0x10;
    FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
    local_14 = CONCAT31(local_14._1_3_,0xe);
    puVar1[0x12] = puVar1[0x12] + 0x38;
  }
  pppuVar3 = (undefined4 ***)
             FUN_00591e00((undefined1 *)local_74,
                          "`7Docking permission has been granted. You owe `$%dc`7, which can be paid at the docking terminal on board the station.\n\nThank you for choosing to visit `0%s`7."
                         );
  if (&local_54 != pppuVar3) {
    FUN_00401b20((int *)&local_54);
    local_54 = *pppuVar3;
    ppuStack_50 = pppuVar3[1];
    ppuStack_4c = pppuVar3[2];
    ppuStack_48 = pppuVar3[3];
    local_44 = *(undefined8 *)(pppuVar3 + 4);
    pppuVar3[4] = (undefined4 **)0x0;
    pppuVar3[5] = (undefined4 **)0xf;
    *(undefined1 *)pppuVar3 = 0;
  }
  if (0xf < local_60) {
    ppppuVar7 = (undefined4 ****)local_74[0];
    if ((0xfff < local_60 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_74[0][-1],
       0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  puVar1 = local_2c;
  local_58 = 1;
  for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
    FUN_004304b0((int)puVar6);
    puVar5 = local_2a0;
  }
  local_28c = (undefined4 *)&stack0xfffffd1c;
  local_2c = puStack_30;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0x11;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,&DAT_005e7fa0,4);
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0x12);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 0xe;
  FUN_004304b0((int)local_138);
  puVar6 = (undefined4 *)puVar5[1];
  if ((undefined4 *)puVar5[2] == puVar6) {
    FUN_00436300(puVar5,puVar6,&local_5c);
  }
  else {
    *puVar6 = local_5c;
    puVar6[1] = local_58;
    local_28c = puVar6;
    FUN_004024e0(puVar6 + 2,&local_54);
    local_14._0_1_ = 0x13;
    FUN_00436e40(puVar6 + 8,&local_3c);
    local_14._0_1_ = 0x14;
    FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
    local_14._0_1_ = 0xe;
    puVar5[1] = puVar5[1] + 0x38;
  }
  pppuVar3 = (undefined4 ***)
             FUN_00591e00((undefined1 *)local_74,
                          "`7Docking permission has been rescinded at your request. A token fee remains owed, to be paid on your next visit to %s.\n\nAmount owed: `$%dc"
                         );
  if (&local_54 != pppuVar3) {
    FUN_00401b20((int *)&local_54);
    local_54 = *pppuVar3;
    ppuStack_50 = pppuVar3[1];
    ppuStack_4c = pppuVar3[2];
    ppuStack_48 = pppuVar3[3];
    local_44 = *(undefined8 *)(pppuVar3 + 4);
    pppuVar3[4] = (undefined4 **)0x0;
    pppuVar3[5] = (undefined4 **)0xf;
    *(undefined1 *)pppuVar3 = 0;
  }
  if (0xf < local_60) {
    ppppuVar7 = (undefined4 ****)local_74[0];
    if ((0xfff < local_60 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_74[0][-1],
       0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  puVar1 = local_2c;
  local_58 = 2;
  for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
    FUN_004304b0((int)puVar6);
    puVar5 = local_2a0;
  }
  local_28c = (undefined4 *)&stack0xfffffd1c;
  local_2c = puStack_30;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0x15;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,&DAT_005e7fa0,4);
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0x16);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 0xe;
  FUN_004304b0((int)local_138);
  puVar6 = (undefined4 *)puVar5[1];
  if ((undefined4 *)puVar5[2] == puVar6) {
    FUN_00436300(puVar5,puVar6,&local_5c);
  }
  else {
    *puVar6 = local_5c;
    puVar6[1] = local_58;
    local_28c = puVar6;
    FUN_004024e0(puVar6 + 2,&local_54);
    local_14._0_1_ = 0x17;
    FUN_00436e40(puVar6 + 8,&local_3c);
    local_14._0_1_ = 0x18;
    FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
    local_14._0_1_ = 0xe;
    puVar5[1] = puVar5[1] + 0x38;
  }
  if (*(void **)((int)local_2a8 + 0x398) == (void *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffffff00);
    FUN_00402690(local_74,"**no commerce available**",0x19);
    ppppuVar7 = local_74;
    local_290 = 2;
    local_29c = 2;
LAB_00434877:
    FUN_00401b20((int *)&local_54);
    local_54 = *ppppuVar7;
    ppuStack_50 = ppppuVar7[1];
    ppuStack_4c = ppppuVar7[2];
    ppuStack_48 = ppppuVar7[3];
    local_44 = *(undefined8 *)(ppppuVar7 + 4);
    ppppuVar7[4] = (undefined4 ***)0x0;
    ppppuVar7[5] = (undefined4 ***)0xf;
    *(undefined1 *)ppppuVar7 = 0;
  }
  else {
    ppppuVar7 = (undefined4 ****)
                FUN_0049dbb0(*(void **)((int)local_2a8 + 0x398),(undefined1 *)local_8c);
    local_290 = 1;
    local_29c = 1;
    if ((undefined4 ****)&local_54 != ppppuVar7) goto LAB_00434877;
  }
  if ((local_290 & 2) != 0) {
    local_29c = local_290 & 0xfffffffd;
    local_290 = local_29c;
    FUN_00401b20((int *)local_74);
  }
  local_14 = 0xe;
  if ((local_290 & 1) != 0) {
    local_29c = local_290 & 0xfffffffe;
    local_290 = local_29c;
    FUN_00401b20((int *)local_8c);
  }
  puVar1 = local_2c;
  local_58 = 3;
  for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
    FUN_004304b0((int)puVar6);
    puVar5 = local_2a0;
  }
  local_28c = (undefined4 *)&stack0xfffffd1c;
  local_2c = puStack_30;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0x1a;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,&DAT_005e7fa0,4);
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0x1b);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 0xe;
  FUN_004304b0((int)local_138);
  puVar6 = (undefined4 *)puVar5[1];
  if ((undefined4 *)puVar5[2] == puVar6) {
    FUN_00436300(puVar5,puVar6,&local_5c);
  }
  else {
    *puVar6 = local_5c;
    puVar6[1] = local_58;
    local_28c = puVar6;
    FUN_004024e0(puVar6 + 2,&local_54);
    local_14._0_1_ = 0x1c;
    FUN_00436e40(puVar6 + 8,&local_3c);
    local_14._0_1_ = 0x1d;
    FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
    local_14._0_1_ = 0xe;
    puVar5[1] = puVar5[1] + 0x38;
  }
  if (*(void **)((int)local_2a8 + 0x398) == (void *)0x0) {
    FUN_00402690(&local_54,"**no commerce available**",0x19);
    puVar1 = local_2c;
    local_58 = 4;
    for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
      FUN_004304b0((int)puVar6);
      puVar5 = local_2a0;
    }
    local_28c = (undefined4 *)&stack0xfffffd1c;
    local_2c = puStack_30;
    FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
    local_14._0_1_ = 0x1e;
    in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
    FUN_00402690(&stack0xfffffd04,&DAT_005e7fa0,4);
    local_14._0_1_ = 0xe;
    puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
    local_14 = CONCAT31(local_14._1_3_,0x1f);
    if (local_28 == local_2c) {
      FUN_00436570(&puStack_30,local_2c,puVar6);
    }
    else {
      FUN_004368f0(local_2c,puVar6);
      local_2c = local_2c + 0x2a;
    }
    local_14._0_1_ = 0xe;
    FUN_004304b0((int)local_138);
    puVar6 = (undefined4 *)puVar5[1];
    if ((undefined4 *)puVar5[2] == puVar6) {
      FUN_00436300(puVar5,puVar6,&local_5c);
    }
    else {
      *puVar6 = local_5c;
      puVar6[1] = local_58;
      local_28c = puVar6;
      FUN_004024e0(puVar6 + 2,&local_54);
      local_14._0_1_ = 0x20;
      FUN_00436e40(puVar6 + 8,&local_3c);
      local_14._0_1_ = 0x21;
      FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
      local_14._0_1_ = 0xe;
      puVar5[1] = puVar5[1] + 0x38;
    }
  }
  else {
    FUN_0049dde0(*(void **)((int)local_2a8 + 0x398),&local_2bc);
    local_14._0_1_ = 0x22;
    local_2b0 = 0;
    local_2ac = 4;
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (undefined4 ***)((uint)local_8c[0] & 0xffffff00);
    FUN_00402690(local_8c,"`7Current estimated buy prices:\n\n",0x21);
    local_14._0_1_ = 0x23;
    local_294 = local_2bc;
    local_28c = local_2b8;
    puVar6 = local_2bc;
    if (local_2bc != local_2b8) {
      do {
        local_294 = puVar6;
        FUN_004024e0(local_74,puVar6);
        local_14._0_1_ = 0x24;
        ppppuVar7 = local_74;
        if (0xf < local_60) {
          ppppuVar7 = (undefined4 ****)local_74[0];
        }
        FUN_00403640(local_8c,ppppuVar7,local_64);
        FUN_00403640(local_8c,&DAT_005e75f8,1);
        local_2b0 = local_2b0 + 1;
        if (0xb < local_2b0) {
          local_2b0 = 0;
          ppppuVar7 = local_8c;
          if (0xf < local_78) {
            ppppuVar7 = (undefined4 ****)local_8c[0];
          }
          FUN_00402690(&local_54,ppppuVar7,local_7c);
          puVar1 = local_2c;
          iVar2 = local_2ac + 10;
          local_58 = local_2ac;
          for (puVar6 = puStack_30; local_2ac = iVar2, puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
            FUN_004304b0((int)puVar6);
            iVar2 = local_2ac;
            puVar5 = local_2a0;
          }
          local_298 = &stack0xfffffd1c;
          local_2c = puStack_30;
          FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
          local_14._0_1_ = 0x25;
          in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
          FUN_00402690(&stack0xfffffd04,&DAT_005e80e4,4);
          local_14._0_1_ = 0x24;
          puVar6 = FUN_0042f570(local_138,0,local_2ac,in_stack_fffffd04);
          local_14 = CONCAT31(local_14._1_3_,0x26);
          if (local_28 == local_2c) {
            FUN_00436570(&puStack_30,local_2c,puVar6);
          }
          else {
            FUN_004368f0(local_2c,puVar6);
            local_2c = local_2c + 0x2a;
          }
          local_14._0_1_ = 0x24;
          FUN_004304b0((int)local_138);
          puVar6 = (undefined4 *)puVar5[1];
          if ((undefined4 *)puVar5[2] == puVar6) {
            FUN_00436300(puVar5,puVar6,&local_5c);
          }
          else {
            *puVar6 = local_5c;
            puVar6[1] = local_58;
            local_2a4 = puVar6;
            FUN_004024e0(puVar6 + 2,&local_54);
            local_14._0_1_ = 0x27;
            FUN_00436e40(puVar6 + 8,&local_3c);
            local_14._0_1_ = 0x28;
            FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
            puVar5[1] = puVar5[1] + 0x38;
          }
          ppppuVar7 = local_8c;
          if (0xf < local_78) {
            ppppuVar7 = (undefined4 ****)local_8c[0];
          }
          local_7c = 0;
          *(undefined1 *)ppppuVar7 = 0;
          puVar6 = local_294;
        }
        local_14._0_1_ = 0x23;
        if (0xf < local_60) {
          ppppuVar7 = (undefined4 ****)local_74[0];
          if ((0xfff < local_60 + 1) &&
             (ppppuVar7 = (undefined4 ****)local_74[0][-1],
             0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) goto LAB_00433e7c;
          FUN_005adb3f(ppppuVar7);
        }
        local_294 = puVar6 + 6;
        puVar6 = local_294;
      } while (local_294 != local_28c);
    }
    if (local_7c != 0) {
      ppppuVar7 = local_8c;
      if (0xf < local_78) {
        ppppuVar7 = (undefined4 ****)local_8c[0];
      }
      FUN_00402690(&local_54,ppppuVar7,local_7c);
      puVar1 = local_2c;
      local_58 = local_2ac;
      for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
        FUN_004304b0((int)puVar6);
        puVar5 = local_2a0;
      }
      local_2a4 = (undefined4 *)&stack0xfffffd1c;
      local_2c = puStack_30;
      FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
      local_14._0_1_ = 0x29;
      in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
      FUN_00402690(&stack0xfffffd04,&DAT_005e80ec,4);
      local_14._0_1_ = 0x23;
      puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
      local_14 = CONCAT31(local_14._1_3_,0x2a);
      if (local_28 == local_2c) {
        FUN_00436570(&puStack_30,local_2c,puVar6);
      }
      else {
        FUN_004368f0(local_2c,puVar6);
        local_2c = local_2c + 0x2a;
      }
      local_14._0_1_ = 0x23;
      FUN_004304b0((int)local_138);
      puVar6 = (undefined4 *)puVar5[1];
      if ((undefined4 *)puVar5[2] == puVar6) {
        FUN_00436300(puVar5,puVar6,&local_5c);
      }
      else {
        *puVar6 = local_5c;
        puVar6[1] = local_58;
        local_2a4 = puVar6;
        FUN_004024e0(puVar6 + 2,&local_54);
        local_14._0_1_ = 0x2b;
        FUN_00436e40(puVar6 + 8,&local_3c);
        local_14._0_1_ = 0x2c;
        FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
        puVar5[1] = puVar5[1] + 0x38;
      }
    }
    local_14._0_1_ = 0x22;
    if (0xf < local_78) {
      ppppuVar7 = (undefined4 ****)local_8c[0];
      if ((0xfff < local_78 + 1) &&
         (ppppuVar7 = (undefined4 ****)local_8c[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_8c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar7);
    }
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (undefined4 ***)((uint)local_8c[0] & 0xffffff00);
    local_14._0_1_ = 0xe;
    FUN_004025a0((int *)&local_2bc);
  }
  if (*(void **)((int)local_2a8 + 0x398) == (void *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffffff00);
    FUN_00402690(local_74,"**no commerce available**",0x19);
    ppppuVar7 = local_74;
    local_290 = local_290 | 8;
LAB_00434fc9:
    local_29c = local_290;
    FUN_00401b20((int *)&local_54);
    local_54 = *ppppuVar7;
    ppuStack_50 = ppppuVar7[1];
    ppuStack_4c = ppppuVar7[2];
    ppuStack_48 = ppppuVar7[3];
    local_44 = *(undefined8 *)(ppppuVar7 + 4);
    ppppuVar7[4] = (undefined4 ***)0x0;
    ppppuVar7[5] = (undefined4 ***)0xf;
    *(undefined1 *)ppppuVar7 = 0;
  }
  else {
    ppppuVar7 = (undefined4 ****)
                FUN_0049dfe0(*(void **)((int)local_2a8 + 0x398),(undefined1 *)local_8c);
    local_14._0_1_ = 0x2d;
    local_29c = local_290 | 4;
    local_290 = local_29c;
    if ((undefined4 ****)&local_54 != ppppuVar7) goto LAB_00434fc9;
  }
  if (((local_290 & 8) != 0) &&
     (local_29c = local_290 & 0xfffffff7, local_290 = local_29c, 0xf < local_60)) {
    ppppuVar7 = (undefined4 ****)local_74[0];
    if ((0xfff < local_60 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_74[0][-1],
       0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  local_14 = 0xe;
  if (((local_290 & 4) != 0) &&
     (local_29c = local_290 & 0xfffffffb, local_290 = local_29c, 0xf < local_78)) {
    ppppuVar7 = (undefined4 ****)local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_8c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_8c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  puVar1 = local_2c;
  local_58 = 5;
  for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
    FUN_004304b0((int)puVar6);
    puVar5 = local_2a0;
  }
  local_2a4 = (undefined4 *)&stack0xfffffd1c;
  local_2c = puStack_30;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0x2e;
  in_stack_fffffd04 = (void *)((uint)in_stack_fffffd04 & 0xffffff00);
  FUN_00402690(&stack0xfffffd04,&DAT_005e7fa0,4);
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14 = CONCAT31(local_14._1_3_,0x2f);
  if (local_28 == local_2c) {
    FUN_00436570(&puStack_30,local_2c,puVar6);
  }
  else {
    FUN_004368f0(local_2c,puVar6);
    local_2c = local_2c + 0x2a;
  }
  local_14._0_1_ = 0xe;
  FUN_004304b0((int)local_138);
  puVar6 = (undefined4 *)puVar5[1];
  if ((undefined4 *)puVar5[2] == puVar6) {
    FUN_00436300(puVar5,puVar6,&local_5c);
  }
  else {
    *puVar6 = local_5c;
    puVar6[1] = local_58;
    local_2a4 = puVar6;
    FUN_004024e0(puVar6 + 2,&local_54);
    local_14._0_1_ = 0x30;
    FUN_00436e40(puVar6 + 8,&local_3c);
    local_14._0_1_ = 0x31;
    FUN_00436d00(puVar6 + 0xb,(int *)&puStack_30);
    local_14._0_1_ = 0xe;
    puVar5[1] = puVar5[1] + 0x38;
  }
  if (*(void **)((int)local_2a8 + 0x398) == (void *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffffff00);
    FUN_00402690(local_74,"**no commerce info available**",0x1e);
    local_290 = local_290 | 0x20;
    ppppuVar7 = local_74;
  }
  else {
    ppppuVar7 = (undefined4 ****)
                FUN_0049e2e0(*(void **)((int)local_2a8 + 0x398),(undefined1 *)local_8c);
    local_14._0_1_ = 0x32;
    local_290 = local_290 | 0x10;
    if ((undefined4 ****)&local_54 == ppppuVar7) goto LAB_0043524e;
  }
  FUN_00401b20((int *)&local_54);
  local_54 = *ppppuVar7;
  ppuStack_50 = ppppuVar7[1];
  ppuStack_4c = ppppuVar7[2];
  ppuStack_48 = ppppuVar7[3];
  local_44 = *(undefined8 *)(ppppuVar7 + 4);
  ppppuVar7[4] = (undefined4 ***)0x0;
  ppppuVar7[5] = (undefined4 ***)0xf;
  *(undefined1 *)ppppuVar7 = 0;
LAB_0043524e:
  if (((local_290 & 0x20) != 0) && (local_290 = local_290 & 0xffffffdf, 0xf < local_60)) {
    ppppuVar7 = (undefined4 ****)local_74[0];
    if ((0xfff < local_60 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_74[0][-1],
       0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  local_14 = 0xe;
  if (((local_290 & 0x10) != 0) && (0xf < local_78)) {
    ppppuVar7 = (undefined4 ****)local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_8c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_8c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  puVar1 = local_2c;
  local_58 = 6;
  for (puVar6 = puStack_30; puVar6 != puVar1; puVar6 = puVar6 + 0x2a) {
    FUN_004304b0((int)puVar6);
    puVar5 = local_2a0;
  }
  local_2a4 = (undefined4 *)&stack0xfffffd1c;
  local_2c = puStack_30;
  FUN_00402690(&stack0xfffffd1c,&PTR_005ce008,0);
  local_14._0_1_ = 0x33;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffd04,"back");
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14._0_1_ = 0x34;
  FUN_004362d0(&puStack_30,puVar6);
  local_14._0_1_ = 0xe;
  FUN_004304b0((int)local_138);
  FUN_004361e0(puVar5,&local_5c);
  SimpleString::operator=
            ((SimpleString *)&local_54,
             "`7Unfortunately, docking permission has been `@denied`7. Please reverse course immediately."
            );
  local_58 = 9;
  FUN_00436290((int *)&puStack_30);
  local_2a4 = (undefined4 *)&stack0xfffffd1c;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffd1c,(char *)&PTR_005ce008);
  local_14._0_1_ = 0x35;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffd04,"back");
  local_14._0_1_ = 0xe;
  puVar6 = FUN_0042f570(local_138,0,0,in_stack_fffffd04);
  local_14._0_1_ = 0x36;
  FUN_004362d0(&puStack_30,puVar6);
  local_14 = CONCAT31(local_14._1_3_,0xe);
  FUN_004304b0((int)local_138);
  FUN_004361e0(puVar5,&local_5c);
  FUN_004304b0((int)local_288);
  FUN_004304b0((int)&local_1e0);
  FUN_00430450((int)&local_5c);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
