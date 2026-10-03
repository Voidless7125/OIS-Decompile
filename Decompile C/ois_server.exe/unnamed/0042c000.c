#include "../ois_server.exe.h"


void __fastcall FUN_0042c690(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004028b0((int *)param_1[0x2c],(int *)param_1[0x2d]);
  param_1[0x2d] = param_1[0x2c];
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00402690(param_1 + 0x26,&PTR_005ce008,0);
  puVar1 = (undefined4 *)param_1[2];
  FUN_004028b0((int *)*puVar1,(int *)puVar1[1]);
  puVar1[1] = *puVar1;
  FUN_0042d280(param_1);
  piVar2 = param_1 + 3;
  if ((int *)param_1[2] != piVar2) {
    FUN_0042e210((int *)param_1[2],(undefined4 *)*piVar2,(undefined4 *)param_1[4]);
  }
  FUN_004028b0((int *)*piVar2,(int *)param_1[4]);
  param_1[4] = *piVar2;
  if ((int *)param_1[0x53] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x53] + 8))();
  }
  FUN_0042d280(param_1);
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 8))();
  }
  local_8 = 0;
  piVar2 = (int *)param_1[0x25];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != param_1 + 0x1c);
    param_1[0x25] = 0;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0042c7a0(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_stack_ffffff9c;
  void *local_3c [5];
  uint local_28;
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)param_1[2];
  FUN_004028b0((int *)*puVar1,(int *)puVar1[1]);
  puVar1[1] = *puVar1;
  FUN_0042d280(param_1);
  iVar4 = param_1[0x1a];
  iVar3 = param_1[9] + -1;
  local_1c = (param_1[0x2d] - param_1[0x2c]) / 0x18;
  if ((uint)(iVar4 + iVar3) <= local_1c) {
    local_1c = iVar4 + iVar3;
  }
  local_14 = 0;
  local_18 = iVar4;
  if (iVar4 < (int)local_1c) {
    local_18 = iVar4 * 0x18;
    do {
      FUN_004024e0(local_3c,(undefined4 *)(param_1[0x2c] + local_18));
      local_8 = 0;
      FUN_004024e0(&stack0xffffff9c,local_3c);
      FUN_0042d530(param_1,param_1[8],in_stack_ffffff9c);
      local_8 = 0xffffffff;
      if (0xf < local_28) {
        pvVar2 = local_3c[0];
        if (0xfff < local_28 + 1) {
          pvVar2 = *(void **)((int)local_3c[0] + -4);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar2);
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x18;
    } while (iVar4 < (int)local_1c);
  }
  if ((local_14 < iVar3) && (iVar3 = iVar3 - local_14, 0 < iVar3)) {
    do {
      FUN_0042dcd0((int)param_1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0042c900(param_1);
  FUN_0042d280(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0042c900(void *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  byte *in_stack_ffffff78;
  Color3B local_57 [3];
  void *local_54;
  void *pvStack_50;
  void *pvStack_4c;
  void *pvStack_48;
  undefined8 local_44;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b1f80;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  ppvVar2 = (void **)((int)param_1 + 0x98);
  FUN_00591e00((undefined1 *)&local_54," `$DocView: `%%%s");
  local_14 = 0;
  if (*(int *)((int)param_1 + 0x24) - 1U <
      (uint)((*(int *)((int)param_1 + 0xb4) - *(int *)((int)param_1 + 0xb0)) / 0x18)) {
    if (0xf < *(uint *)((int)param_1 + 0xa8)) {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      ppvVar1 = ppvVar2;
      if (0xf < *(uint *)((int)param_1 + 0xac)) {
        ppvVar1 = *ppvVar2;
      }
      FUN_00402690(&local_3c,ppvVar1,0xf);
      if (ppvVar2 == &local_3c) {
        if (0xf < uStack_28) {
          pvVar5 = local_3c;
          if ((0xfff < uStack_28 + 1) &&
             (pvVar5 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
      }
      else {
        FUN_00401b20((int *)ppvVar2);
        *ppvVar2 = local_3c;
        *(undefined4 *)((int)param_1 + 0x9c) = uStack_38;
        *(undefined4 *)((int)param_1 + 0xa0) = uStack_34;
        *(undefined4 *)((int)param_1 + 0xa4) = uStack_30;
        *(ulonglong *)((int)param_1 + 0xa8) = CONCAT44(uStack_28,local_2c);
      }
    }
    ppvVar2 = (void **)FUN_00591e00((undefined1 *)&local_3c," `$DocView: `%%%s");
    if (&local_54 != ppvVar2) {
      FUN_00401b20((int *)&local_54);
      local_54 = *ppvVar2;
      pvStack_50 = ppvVar2[1];
      pvStack_4c = ppvVar2[2];
      pvStack_48 = ppvVar2[3];
      local_44 = *(undefined8 *)(ppvVar2 + 4);
      ppvVar2[4] = (void *)0x0;
      ppvVar2[5] = (void *)0xf;
      *(undefined1 *)ppvVar2 = 0;
    }
    if (0xf < uStack_28) {
      pvVar5 = local_3c;
      if ((0xfff < uStack_28 + 1) &&
         (pvVar5 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)&local_3c," (`!%d`%%-`!%d`%%/`!%d`%%)");
    local_14._0_1_ = 1;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_54,puVar4,puVar3[4]);
    local_14 = (uint)local_14._1_3_ << 8;
    if (0xf < uStack_28) {
      pvVar5 = local_3c;
      if ((0xfff < uStack_28 + 1) &&
         (pvVar5 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    FUN_00403640(&local_54," `%[`$up`%/`$down`%] [`$ent`%]",0x1e);
  }
  cocos2d::Color3B::Color3B(local_57,'\0','\0',0x80);
  FUN_004024e0(&stack0xffffff78,&local_54);
  FUN_0042dec0(param_1,in_stack_ffffff78);
  if (0xf < local_44._4_4_) {
    pvVar5 = local_54;
    if ((0xfff < local_44._4_4_ + 1) &&
       (pvVar5 = *(void **)((int)local_54 + -4), 0x1f < (uint)((int)local_54 + (-4 - (int)pvVar5))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall
FUN_0042cbe0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            int *param_5)

{
  undefined4 **this_00;
  int iVar1;
  int **ppiVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  void **ppvVar9;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int *in_stack_00000050;
  undefined4 *in_stack_00000054;
  uint in_stack_00000064;
  uint in_stack_00000068;
  void *in_stack_ffffff8c;
  uint local_44;
  int local_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  void *local_2c;
  void *pvStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b1fdc;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 3;
  uStack_13 = 0;
  FUN_0042dfb0((void *)((int)this + 0x100),(int)&stack0x0000002c);
  this_00 = (undefined4 **)((int)this + 0xdc);
  if (this_00 != &param_1) {
    FUN_0042e210(this_00,param_1,param_2);
  }
  if ((int **)((int)this + 0xe8) != &param_5) {
    ppiVar2 = &param_5;
    if (0xf < in_stack_00000028) {
      ppiVar2 = (int **)param_5;
    }
    FUN_00402690((int **)((int)this + 0xe8),ppiVar2,in_stack_00000024);
  }
  if (param_4 != -1) {
    *(int *)((int)this + 0xbc) = param_4;
  }
  *(undefined4 *)((int)this + 100) = 2;
  iVar5 = *(int *)((int)this + 0xe0) - (int)*this_00;
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x18 + iVar1 == iVar1) {
    *(undefined1 *)((int)this + 0xc0) = 1;
    if ((undefined4 **)((int)this + 0xc4) != &stack0x00000054) {
      puVar6 = &stack0x00000054;
      if (0xf < in_stack_00000068) {
        puVar6 = in_stack_00000054;
      }
      FUN_00402690((undefined4 *)((int)this + 0xc4),puVar6,in_stack_00000064);
    }
  }
  else {
    *(undefined1 *)((int)this + 0xc0) = 0;
  }
  uVar3 = *(int *)((int)this + 0x20) - 7;
  local_44 = 0;
  iVar5 = *(int *)((int)this + 0xe0) - (int)*this_00;
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x18 + iVar1 != iVar1) {
    local_40 = 0;
    do {
      FUN_004024e0(&stack0xffffff8c,(undefined4 *)((int)*this_00 + local_40));
      uVar4 = FUN_0055e9e0(in_stack_ffffff8c);
      if ((int)uVar3 <= (int)uVar4) {
        FUN_00591070("DETAIL","Cropping line from \'%s\'...");
        puVar6 = (undefined4 *)((int)*this_00 + local_40);
        local_2c = (void *)0x0;
        pvStack_28 = (void *)0xf;
        local_3c = (void *)((uint)local_3c & 0xffffff00);
        uVar4 = uVar3;
        if ((uint)puVar6[4] < uVar3) {
          uVar4 = puVar6[4];
        }
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        FUN_00402690(&local_3c,puVar6,uVar4);
        ppvVar9 = (void **)((int)*this_00 + local_40);
        if (ppvVar9 == &local_3c) {
          if ((void *)0xf < pvStack_28) {
            pvVar7 = local_3c;
            if ((0xfff < (int)pvStack_28 + 1U) &&
               (pvVar7 = *(void **)((int)local_3c + -4),
               0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7)))) goto LAB_0042ce99;
            FUN_005adb3f(pvVar7);
          }
        }
        else {
          FUN_00401b20((int *)ppvVar9);
          *ppvVar9 = local_3c;
          ppvVar9[1] = pvStack_38;
          ppvVar9[2] = pvStack_34;
          ppvVar9[3] = pvStack_30;
          ppvVar9[4] = local_2c;
          ppvVar9[5] = pvStack_28;
        }
        FUN_00403640((void *)((int)*this_00 + local_40),&DAT_005e74f4,3);
        FUN_00591070("DETAIL","...to this: \'%s\'");
      }
      local_40 = local_40 + 0x18;
      local_44 = local_44 + 1;
    } while (local_44 < (uint)((*(int *)((int)this + 0xe0) - (int)*this_00) / 0x18));
  }
  puVar6 = *(undefined4 **)((int)this + 8);
  if ((undefined4 *)((int)this + 0xc) != puVar6) {
    FUN_0042e210((undefined4 *)((int)this + 0xc),(undefined4 *)*puVar6,(undefined4 *)puVar6[1]);
    puVar6 = *(undefined4 **)((int)this + 8);
  }
  FUN_004028b0((int *)*puVar6,(int *)puVar6[1]);
  puVar6[1] = *puVar6;
  FUN_0042d280(this);
  FUN_0042cf40(this);
  FUN_004025a0((int *)&param_1);
  local_14 = 1;
  if (0xf < in_stack_00000028) {
    piVar8 = param_5;
    if ((0xfff < in_stack_00000028 + 1) &&
       (piVar8 = (int *)param_5[-1], 0x1f < (uint)((int)param_5 + (-4 - (int)piVar8)))) {
LAB_0042ce99:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar8);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  param_5 = (int *)((uint)param_5 & 0xffffff00);
  _local_14 = CONCAT31(uStack_13,4);
  if (in_stack_00000050 != (int *)0x0) {
    (**(code **)(*in_stack_00000050 + 0x10))();
    in_stack_00000050 = (int *)0x0;
  }
  if (0xf < in_stack_00000068) {
    puVar6 = in_stack_00000054;
    if ((0xfff < in_stack_00000068 + 1) &&
       (puVar6 = (undefined4 *)in_stack_00000054[-1],
       0x1f < (uint)((int)in_stack_00000054 + (-4 - (int)puVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar6);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0042cf40(int *param_1)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *in_stack_ffffffa0;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2018;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0;
  uVar4 = param_1[9] - 1;
  if (uVar4 < (uint)((param_1[0x38] - param_1[0x37]) / 0x18)) {
    uVar1 = uVar4;
    while ((int)uVar1 <= param_1[0x2f]) {
      uVar1 = uVar6 + uVar4 * 2;
      uVar6 = uVar6 + uVar4;
    }
  }
  iVar5 = uVar4 + uVar6;
  cVar2 = '\0';
  local_30 = iVar5;
  if ((char)param_1[0x30] != '\0') {
    FUN_0042de40(param_1,&DAT_005e7500);
    cVar2 = (char)param_1[0x30];
  }
  if ((int)uVar6 < (int)(iVar5 - (uint)(cVar2 != '\0'))) {
    do {
      if (uVar6 < (uint)((param_1[0x38] - param_1[0x37]) / 0x18)) {
        FUN_0042de40(param_1,"`3[%s] `7%s");
      }
      else {
        FUN_0042dcd0((int)param_1);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(local_30 - (uint)((char)param_1[0x30] != '\0')));
  }
  FUN_00591e00((undefined1 *)local_2c," `$%s");
  local_8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),0x80,'\0',0x80);
  FUN_004024e0(&stack0xffffffa0,local_2c);
  FUN_0042dec0(param_1,in_stack_ffffffa0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  FUN_0042d280(param_1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0042d130(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004028b0(*(int **)((int)this + 0xdc),*(int **)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0xdc);
  puVar1 = *(undefined4 **)((int)this + 8);
  FUN_004028b0((int *)*puVar1,(int *)puVar1[1]);
  puVar1[1] = *puVar1;
  FUN_0042d280(this);
  puVar1 = (undefined4 *)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    FUN_0042e210(*(undefined4 **)((int)this + 8),(undefined4 *)*puVar1,
                 *(undefined4 **)((int)this + 0x10));
  }
  FUN_004028b0((int *)*puVar1,*(int **)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x10) = *puVar1;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(char *)((int)this + 0xc0) != '\0') {
    *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  }
  if ((char)param_1 != '\0') {
    param_1 = *(int *)((int)this + 0xbc);
    if (*(int **)((int)this + 0x124) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)((int)this + 0x124) + 8))(&param_1);
    local_8 = 0;
    piVar2 = *(int **)((int)this + 0x124);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)this + 0x100));
      *(undefined4 *)((int)this + 0x124) = 0;
    }
    local_8 = 0xffffffff;
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  FUN_00402690((void *)((int)this + 0xe8),&PTR_005ce008,0);
  if (*(int **)((int)this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x14c) + 8))();
  }
  FUN_0042d280(this);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0042d280(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *in_stack_ffffffcc;
  undefined4 *puVar9;
  undefined4 in_stack_ffffffd0;
  undefined1 uVar11;
  undefined4 uVar10;
  undefined4 in_stack_ffffffd4;
  
  uVar11 = (undefined1)((uint)in_stack_ffffffd0 >> 0x18);
  iVar6 = 0x50;
  iVar4 = *param_1;
  puVar5 = (undefined1 *)(iVar4 + 0x43c);
  do {
    iVar3 = 0x32;
    puVar2 = puVar5;
    do {
      puVar2[28000] = 0x20;
      *puVar2 = 0x20;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 0x230;
    } while (iVar3 != 0);
    puVar5 = puVar5 + 7;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined1 *)(iVar4 + 0x428) = 1;
  iVar4 = param_1[9] + -1;
  if ((char)param_1[10] == '\0') {
    iVar4 = param_1[9];
  }
  iVar6 = iVar4 + -1;
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    iVar6 = iVar4;
  }
  if ((char)param_1[10] != '\0') {
    FUN_004024e0(&stack0xffffffcc,param_1 + 0xb);
    FUN_0055fa40((void *)*param_1,extraout_ECX,0,in_stack_ffffffcc);
  }
  uVar10 = CONCAT13(uVar11,(int3)param_1[0x17]);
  puVar9 = (undefined4 *)0x42d330;
  FUN_00560280((void *)*param_1,uVar10,in_stack_ffffffd4,0,param_1[8] + -1);
  uVar11 = (undefined1)((uint)uVar10 >> 0x18);
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    FUN_004024e0(&stack0xffffffcc,param_1 + 0x11);
    FUN_0055fa40((void *)*param_1,extraout_ECX_00,iVar6,puVar9);
  }
  puVar9 = (undefined4 *)0x42d36d;
  FUN_00560280((void *)*param_1,CONCAT13(uVar11,*(undefined3 *)((int)param_1 + 0x5f)),
               in_stack_ffffffd4,iVar6,param_1[8] + -1);
  uVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar4 = *(int *)param_1[2];
      uVar1 = (((int *)param_1[2])[1] - iVar4) / 0x18;
      if (uVar8 < uVar1) {
        uVar7 = uVar8 + 1;
        if (*(char *)((int)param_1 + 0x29) == '\0') {
          uVar7 = uVar8;
        }
        FUN_004024e0(&stack0xffffffcc,(undefined4 *)(iVar4 + ((uVar1 - uVar8) + -1) * 0x18));
        FUN_0055fa40((void *)*param_1,extraout_ECX_01,iVar6 - uVar7,puVar9);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar6);
  }
  FUN_0055fcc0((int *)*param_1);
  return;
}


undefined1 FUN_0042d3e0(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  uVar4 = 1;
  if ((in_stack_00000014 != 0) && (uVar2 = 0, in_stack_00000014 != 0)) {
    do {
      ppuVar1 = &param_1;
      if (0xf < in_stack_00000018) {
        ppuVar1 = (undefined4 **)param_1;
      }
      if (*(char *)((int)ppuVar1 + uVar2) != ' ') {
        ppuVar1 = &param_1;
        if (0xf < in_stack_00000018) {
          ppuVar1 = (undefined4 **)param_1;
        }
        if (*(char *)((int)ppuVar1 + uVar2) != '`') {
LAB_0042d43c:
          uVar4 = 0;
          break;
        }
        if (uVar2 != in_stack_00000014 - 1) {
          uVar2 = uVar2 + 1;
          ppuVar1 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar1 = (undefined4 **)param_1;
          }
          if (*(char *)((int)ppuVar1 + uVar2) == '`') goto LAB_0042d43c;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_00000014);
  }
  if (0xf < in_stack_00000018) {
    puVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar3 = (undefined4 *)param_1[-1], 0x1f < (uint)((int)param_1 + (-4 - (int)puVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar3);
  }
  return uVar4;
}


bool FUN_0042d480(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if (in_stack_00000014 == 0) {
    bVar5 = true;
  }
  else {
    cVar4 = '\0';
    uVar2 = 0;
    if (in_stack_00000014 != 0) {
      do {
        ppuVar1 = &param_1;
        if (0xf < in_stack_00000018) {
          ppuVar1 = (undefined4 **)param_1;
        }
        if (*(char *)((int)ppuVar1 + uVar2) == ' ') {
          cVar4 = ' ';
        }
        else {
          ppuVar1 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar1 = (undefined4 **)param_1;
          }
          if (*(char *)((int)ppuVar1 + uVar2) == '`') {
            if (uVar2 != in_stack_00000014 - 1) {
              uVar2 = uVar2 + 1;
              ppuVar1 = &param_1;
              if (0xf < in_stack_00000018) {
                ppuVar1 = (undefined4 **)param_1;
              }
              if (*(char *)((int)ppuVar1 + uVar2) == '`') goto LAB_0042d4dd;
              cVar4 = '`';
            }
          }
          else {
LAB_0042d4dd:
            ppuVar1 = &param_1;
            if (0xf < in_stack_00000018) {
              ppuVar1 = (undefined4 **)param_1;
            }
            cVar4 = *(char *)((int)ppuVar1 + uVar2);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < in_stack_00000014);
    }
    bVar5 = cVar4 == ' ';
  }
  if (0xf < in_stack_00000018) {
    puVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar3 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  return bVar5;
}


void __thiscall FUN_0042d530(void *this,uint param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined4 ****ppppuVar7;
  undefined4 **ppuVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_ffffff58;
  int local_70;
  int local_68;
  char local_62;
  undefined4 ***local_60 [4];
  uint local_50;
  uint local_4c;
  undefined4 ***local_48 [4];
  int local_38;
  uint local_34;
  undefined4 ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b2080;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 < in_stack_00000018) {
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    iVar14 = 0;
    local_8 = 2;
    uStack_7 = 0;
    local_70 = 0;
    uVar12 = 0;
    local_68 = 0;
    bVar15 = false;
    if (in_stack_00000018 != 0) {
      do {
        iVar2 = local_68;
        ppuVar8 = &param_2;
        if (0xf < in_stack_0000001c) {
          ppuVar8 = (undefined4 **)param_2;
        }
        if (*(char *)((int)ppuVar8 + uVar12) == ' ') {
          if (bVar15) {
            FUN_004024e0(&stack0xffffff58,local_48);
            cVar4 = FUN_0042d3e0(in_stack_ffffff58);
            if (cVar4 != '\0') {
              FUN_004024e0(&stack0xffffff58,local_30);
              cVar4 = FUN_0042d3e0(in_stack_ffffff58);
              if (cVar4 != '\0') goto LAB_0042da5e;
            }
          }
          if ((int)param_1 < local_68 + 1 + iVar14) {
            piVar6 = FUN_004024e0(local_60,local_48);
            local_8 = 3;
            FUN_00403330(*(void **)((int)this + 8),piVar6);
            local_8 = 2;
            uVar3 = local_8;
            local_8 = 2;
            if (0xf < local_4c) {
              ppppuVar7 = (undefined4 ****)local_60[0];
              if ((0xfff < local_4c + 1) &&
                 (ppppuVar7 = (undefined4 ****)local_60[0][-1],
                 0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
              FUN_005adb3f(ppppuVar7);
            }
            uVar10 = local_20;
            ppppuVar7 = local_48;
            if (0xf < local_34) {
              ppppuVar7 = (undefined4 ****)local_48[0];
            }
            bVar15 = 0xf < local_1c;
            local_38 = 0;
            *(undefined1 *)ppppuVar7 = 0;
            ppppuVar7 = local_30;
            if (bVar15) {
              ppppuVar7 = (undefined4 ****)local_30[0];
            }
            FUN_00403640(local_48,ppppuVar7,uVar10);
            local_20 = 0;
            ppppuVar7 = local_30;
            if (0xf < local_1c) {
              ppppuVar7 = (undefined4 ****)local_30[0];
            }
            local_70 = local_68;
            local_68 = 0;
            bVar15 = true;
            *(undefined1 *)ppppuVar7 = 0;
            iVar14 = iVar2;
          }
          else {
            bVar15 = false;
            FUN_004024e0(&stack0xffffff58,local_48);
            bVar5 = FUN_0042d480(in_stack_ffffff58);
            if (!bVar5) {
              FUN_004024e0(local_60,local_30);
              uVar3 = local_8;
              if (local_50 == 0) {
                if (0xf < local_4c) {
                  ppppuVar7 = (undefined4 ****)local_60[0];
                  if ((0xfff < local_4c + 1) &&
                     (ppppuVar7 = (undefined4 ****)local_60[0][-1],
                     0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
                  FUN_005adb3f(ppppuVar7);
                }
              }
              else {
                uVar10 = 0;
                local_62 = '\0';
                if (local_50 != 0) {
                  do {
                    ppppuVar7 = local_60;
                    if (0xf < local_4c) {
                      ppppuVar7 = (undefined4 ****)local_60[0];
                    }
                    if (*(char *)((int)ppppuVar7 + uVar10) == ' ') {
                      local_62 = ' ';
                      break;
                    }
                    ppppuVar7 = local_60;
                    if (0xf < local_4c) {
                      ppppuVar7 = (undefined4 ****)local_60[0];
                    }
                    if (*(char *)((int)ppppuVar7 + uVar10) != '`') {
LAB_0042d782:
                      ppppuVar7 = local_60;
                      if (0xf < local_4c) {
                        ppppuVar7 = (undefined4 ****)local_60[0];
                      }
                      local_62 = *(char *)((int)ppppuVar7 + uVar10);
                      break;
                    }
                    if (uVar10 != local_50 - 1) {
                      uVar10 = uVar10 + 1;
                      ppppuVar7 = local_60;
                      if (0xf < local_4c) {
                        ppppuVar7 = (undefined4 ****)local_60[0];
                      }
                      if (*(char *)((int)ppppuVar7 + uVar10) == '`') goto LAB_0042d782;
                      local_62 = '`';
                      break;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < local_50);
                }
                if (0xf < local_4c) {
                  ppppuVar7 = (undefined4 ****)local_60[0];
                  if ((0xfff < local_4c + 1) &&
                     (ppppuVar7 = (undefined4 ****)local_60[0][-1],
                     0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
                  FUN_005adb3f(ppppuVar7);
                }
                iVar14 = local_70;
                if (local_62 != ' ') {
                  FUN_004034f0(local_48,0x20);
                  iVar14 = local_70 + 1;
                }
              }
            }
            ppppuVar7 = local_30;
            if (0xf < local_1c) {
              ppppuVar7 = (undefined4 ****)local_30[0];
            }
            FUN_00403640(local_48,ppppuVar7,local_20);
            FUN_004034f0(local_48,0x20);
            local_20 = 0;
            iVar14 = iVar14 + local_68 + 1;
            local_68 = 0;
            ppppuVar7 = local_30;
            if (0xf < local_1c) {
              ppppuVar7 = (undefined4 ****)local_30[0];
            }
            *(undefined1 *)ppppuVar7 = 0;
            local_70 = iVar14;
          }
        }
        else {
          ppuVar8 = &param_2;
          if (0xf < in_stack_0000001c) {
            ppuVar8 = (undefined4 **)param_2;
          }
          if (*(char *)((int)ppuVar8 + uVar12) == '`') {
            uVar10 = uVar12 + 1;
            if (in_stack_00000018 <= uVar10) break;
            ppuVar8 = &param_2;
            if (0xf < in_stack_0000001c) {
              ppuVar8 = (undefined4 **)param_2;
            }
            FUN_004034f0(local_30,*(undefined1 *)((int)ppuVar8 + uVar12));
            ppuVar8 = &param_2;
            if (0xf < in_stack_0000001c) {
              ppuVar8 = (undefined4 **)param_2;
            }
            FUN_004034f0(local_30,*(undefined1 *)((int)ppuVar8 + uVar10));
            uVar12 = uVar10;
          }
          else {
            ppuVar8 = &param_2;
            if (0xf < in_stack_0000001c) {
              ppuVar8 = (undefined4 **)param_2;
            }
            if (*(char *)((int)ppuVar8 + uVar12) == '\n') {
              bVar15 = false;
              if (local_20 == 0) {
                local_50 = 0;
                local_4c = 0xf;
                local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
                FUN_00402690(local_60,&PTR_005ce008,0);
                local_8 = 6;
                FUN_00403330(*(void **)((int)this + 8),(int *)local_60);
                local_8 = 2;
                if (0xf < local_4c) {
                  ppppuVar7 = (undefined4 ****)local_60[0];
                  if ((0xfff < local_4c + 1) &&
                     (ppppuVar7 = (undefined4 ****)local_60[0][-1], uVar3 = local_8,
                     0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
                  FUN_005adb3f(ppppuVar7);
                }
              }
              else {
                if ((int)param_1 < local_68 + 1 + iVar14) {
                  piVar6 = FUN_004024e0(local_60,local_48);
                  local_8 = 4;
                  FUN_00403330(*(void **)((int)this + 8),piVar6);
                  local_8 = 2;
                  if (0xf < local_4c) {
                    ppppuVar7 = (undefined4 ****)local_60[0];
                    if ((0xfff < local_4c + 1) &&
                       (ppppuVar7 = (undefined4 ****)local_60[0][-1], uVar3 = local_8,
                       0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
                    FUN_005adb3f(ppppuVar7);
                  }
                  pvVar1 = *(void **)((int)this + 8);
                  piVar6 = *(int **)((int)pvVar1 + 4);
                  if (*(int **)((int)pvVar1 + 8) == piVar6) {
                    FUN_00403840(pvVar1,piVar6,local_30);
                  }
                  else {
                    FUN_004024e0(piVar6,local_30);
                    *(int *)((int)pvVar1 + 4) = *(int *)((int)pvVar1 + 4) + 0x18;
                  }
                }
                else {
                  ppppuVar7 = local_30;
                  if (0xf < local_1c) {
                    ppppuVar7 = (undefined4 ****)local_30[0];
                  }
                  FUN_00403640(local_48,ppppuVar7,local_20);
                  piVar6 = FUN_004024e0(local_60,local_48);
                  local_8 = 5;
                  FUN_00403330(*(void **)((int)this + 8),piVar6);
                  local_8 = 2;
                  if (0xf < local_4c) {
                    ppppuVar7 = (undefined4 ****)local_60[0];
                    if ((0xfff < local_4c + 1) &&
                       (ppppuVar7 = (undefined4 ****)local_60[0][-1], uVar3 = local_8,
                       0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) goto LAB_0042dac4;
                    FUN_005adb3f(ppppuVar7);
                  }
                }
                local_38 = 0;
                ppppuVar7 = local_48;
                if (0xf < local_34) {
                  ppppuVar7 = (undefined4 ****)local_48[0];
                }
                iVar14 = 0;
                bVar5 = 0xf < local_1c;
                local_20 = 0;
                local_70 = 0;
                *(undefined1 *)ppppuVar7 = 0;
                ppppuVar7 = local_30;
                if (bVar5) {
                  ppppuVar7 = (undefined4 ****)local_30[0];
                }
                local_68 = 0;
                *(undefined1 *)ppppuVar7 = 0;
              }
            }
            else {
              bVar15 = false;
              ppuVar8 = &param_2;
              if (0xf < in_stack_0000001c) {
                ppuVar8 = (undefined4 **)param_2;
              }
              FUN_004034f0(local_30,*(undefined1 *)((int)ppuVar8 + uVar12));
              local_68 = local_68 + 1;
            }
          }
        }
LAB_0042da5e:
        uVar12 = uVar12 + 1;
      } while (uVar12 < in_stack_00000018);
      if (local_20 != 0) {
        if ((int)param_1 < local_68 + iVar14) {
          piVar6 = FUN_004024e0(local_60,local_48);
          local_8 = 7;
          FUN_00403330(*(void **)((int)this + 8),piVar6);
          local_8 = 2;
          if (0xf < local_4c) {
            ppppuVar7 = (undefined4 ****)local_60[0];
            if ((0xfff < local_4c + 1) &&
               (ppppuVar7 = (undefined4 ****)local_60[0][-1], uVar3 = local_8,
               0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar7)))) {
LAB_0042dac4:
              local_8 = uVar3;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppuVar7);
          }
          ppppuVar7 = local_30;
          if (0xf < local_1c) {
            ppppuVar7 = (undefined4 ****)local_30[0];
          }
          FUN_00402690(local_48,ppppuVar7,local_20);
        }
        else {
          ppppuVar7 = local_30;
          if (0xf < local_1c) {
            ppppuVar7 = (undefined4 ****)local_30[0];
          }
          FUN_00403640(local_48,ppppuVar7,local_20);
        }
      }
      if (local_38 != 0) {
        pvVar1 = *(void **)((int)this + 8);
        piVar6 = *(int **)((int)pvVar1 + 4);
        if (*(int **)((int)pvVar1 + 8) == piVar6) {
          FUN_00403840(pvVar1,piVar6,local_48);
        }
        else {
          FUN_004024e0(piVar6,local_48);
          *(int *)((int)pvVar1 + 4) = *(int *)((int)pvVar1 + 4) + 0x18;
        }
      }
      if (0xf < local_34) {
        ppppuVar7 = (undefined4 ****)local_48[0];
        if ((0xfff < local_34 + 1) &&
           (ppppuVar7 = (undefined4 ****)local_48[0][-1],
           (undefined1 *)0x1f < (undefined1 *)((int)local_48[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppuVar7);
      }
    }
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    if (0xf < local_1c) {
      ppppuVar7 = (undefined4 ****)local_30[0];
      if ((0xfff < local_1c + 1) &&
         (ppppuVar7 = (undefined4 ****)local_30[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_30[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar7);
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 8);
    piVar6 = *(int **)((int)pvVar1 + 4);
    if (*(int **)((int)pvVar1 + 8) == piVar6) {
      FUN_00403840(pvVar1,piVar6,&param_2);
    }
    else {
      FUN_004024e0(piVar6,&param_2);
      *(int *)((int)pvVar1 + 4) = *(int *)((int)pvVar1 + 4) + 0x18;
    }
  }
  piVar6 = *(int **)((int)this + 8);
  piVar13 = (int *)*piVar6;
  if (*(uint *)((int)this + 0x1c) < (uint)((piVar6[1] - (int)piVar13) / 0x18)) {
    do {
      FUN_00414300(piVar13 + 6,(int *)piVar6[1],piVar13);
      iVar14 = piVar6[1];
      if (0xf < *(uint *)(iVar14 + -4)) {
        pvVar1 = *(void **)(iVar14 + -0x18);
        pvVar9 = pvVar1;
        if ((0xfff < *(uint *)(iVar14 + -4) + 1) &&
           (pvVar9 = *(void **)((int)pvVar1 + -4), uVar3 = local_8,
           0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar9)))) goto LAB_0042dac4;
        FUN_005adb3f(pvVar9);
      }
      *(undefined4 *)(iVar14 + -8) = 0;
      *(undefined4 *)(iVar14 + -4) = 0xf;
      *(undefined1 *)(iVar14 + -0x18) = 0;
      piVar6[1] = piVar6[1] + -0x18;
      piVar6 = *(int **)((int)this + 8);
      piVar13 = (int *)*piVar6;
    } while (*(uint *)((int)this + 0x1c) < (uint)((piVar6[1] - (int)piVar13) / 0x18));
  }
  if (0xf < in_stack_0000001c) {
    puVar11 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (puVar11 = (undefined4 *)param_2[-1], 0x1f < (uint)((int)param_2 + (-4 - (int)puVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042dcd0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b20b8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 0;
  pvVar2 = *(void **)(param_1 + 8);
  piVar1 = *(int **)((int)pvVar2 + 4);
  if (*(int **)((int)pvVar2 + 8) == piVar1) {
    FUN_004036d0(pvVar2,piVar1,(int *)&local_3c);
    if (0xf < uStack_28) {
      pvVar2 = local_3c;
      if (0xfff < uStack_28 + 1) {
        pvVar2 = *(void **)((int)local_3c + -4);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
  }
  else {
    *piVar1 = (int)local_3c;
    piVar1[1] = iStack_38;
    piVar1[2] = iStack_34;
    piVar1[3] = iStack_30;
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(int *)((int)pvVar2 + 4) = *(int *)((int)pvVar2 + 4) + 0x18;
    puStack_20 = &stack0xfffffffc;
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_0042ddb0(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_1);
  FUN_0042d530(this,*(uint *)((int)this + 0x20),in_stack_ffffffcc);
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


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_0042de40(void *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint in_stack_ffffbfd4;
  void *pvVar3;
  char local_400c [16388];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_0042bbf0(param_2,&stack0x0000000c);
  pcVar2 = local_400c;
  pvVar3 = (void *)(in_stack_ffffbfd4 & 0xffffff00);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffbfd4,local_400c,(int)pcVar2 - (int)(local_400c + 1));
  FUN_0042ddb0(param_1,pvVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0042dec0(void *this,byte *param_1)

{
  uint uVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined1 in_stack_0000001e;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_00000018;
  pbVar5 = param_1;
  puStack_c = &LAB_005b20e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  *(undefined2 *)((int)this + 0x5f) = in_stack_0000001c;
  *(undefined1 *)((int)this + 0x61) = in_stack_0000001e;
  uVar1 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,(byte *)&PTR_005ce008,0);
  ppbVar3 = (byte **)((int)this + 0x44);
  if ((char)uVar1 == '\0') {
    if (ppbVar3 != &param_1) {
      ppbVar2 = &param_1;
      if (0xf < uVar4) {
        ppbVar2 = (byte **)pbVar5;
      }
      FUN_00402690(ppbVar3,ppbVar2,in_stack_00000014);
      uVar4 = in_stack_00000018;
      pbVar5 = param_1;
    }
    *(undefined1 *)((int)this + 0x29) = 1;
  }
  else {
    FUN_00402690(ppbVar3,&PTR_005ce008,0);
    *(undefined1 *)((int)this + 0x29) = 0;
    uVar4 = in_stack_00000018;
    pbVar5 = param_1;
  }
  if (0xf < uVar4) {
    pbVar6 = pbVar5;
    if (0xfff < uVar4 + 1) {
      pbVar6 = *(byte **)(pbVar5 + -4);
      if ((byte *)0x1f < pbVar5 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0042dfb0(void *this,int param_1)

{
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2118;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    local_18 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x24))(local_3c,local_14);
  }
  FUN_0042e080(local_3c,this);
  local_8 = 1;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))(local_18 != local_3c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_0042e050(void *this,undefined1 param_1)

{
  undefined1 *puVar1;
  
  *(undefined4 *)((int)this + 0x10) = 1;
  puVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    puVar1 = *(undefined1 **)this;
  }
  *puVar1 = param_1;
  puVar1[1] = 0;
  return this;
}


void __thiscall FUN_0042e080(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40 [9];
  int *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2140;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 0x24);
  if ((piVar1 != this) && ((int *)param_1[9] != param_1)) {
    *(int **)((int)this + 0x24) = (int *)param_1[9];
    param_1[9] = (int)piVar1;
    goto LAB_0042e1cb;
  }
  local_1c = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    if (piVar1 == this) {
      local_1c = (int *)(**(code **)(*piVar1 + 4))(local_40,local_18);
      local_8 = 0;
      piVar1 = *(int **)((int)this + 0x24);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != this);
        *(undefined4 *)((int)this + 0x24) = 0;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x24) = 0;
      local_1c = piVar1;
    }
  }
  local_8 = 0xffffffff;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1) {
      uVar2 = (**(code **)(*piVar1 + 4))(this);
      *(undefined4 *)((int)this + 0x24) = uVar2;
      local_8 = 1;
      piVar1 = (int *)param_1[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
        param_1[9] = 0;
      }
    }
    else {
      *(int **)((int)this + 0x24) = piVar1;
      param_1[9] = 0;
    }
  }
  local_8 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    if (local_1c == local_40) {
      iVar3 = (**(code **)(*local_1c + 4))(param_1);
      param_1[9] = iVar3;
      local_8 = 2;
      if (local_1c == (int *)0x0) goto LAB_0042e1af;
      (**(code **)(*local_1c + 0x10))(local_1c != local_40);
    }
    else {
      param_1[9] = (int)local_1c;
    }
    local_1c = (int *)0x0;
  }
LAB_0042e1af:
  local_8 = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 0x10))(local_1c != local_40);
  }
LAB_0042e1cb:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042e1f0(int param_1)

{
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
  return;
}


void __thiscall FUN_0042e210(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  
  uVar3 = ((int)param_2 - (int)param_1) / 0x18;
  uVar7 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 <= uVar4) {
    puVar2 = *(undefined4 **)this;
    if (uVar3 <= uVar7) {
      FUN_0042e360(param_1,param_2,puVar2);
      FUN_004028b0(puVar2 + uVar3 * 6,*(int **)((int)this + 4));
      *(undefined4 **)((int)this + 4) = puVar2 + uVar3 * 6;
      return;
    }
    FUN_0042e360(param_1,param_1 + uVar7 * 6,puVar2);
    piVar6 = FUN_0042bb70(param_1 + uVar7 * 6,param_2,*(int **)((int)this + 4));
    *(int **)((int)this + 4) = piVar6;
    return;
  }
  if (0xaaaaaaa < uVar3) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar7 = uVar3;
  if ((uVar4 <= 0xaaaaaaa - (uVar4 >> 1)) && (uVar7 = (uVar4 >> 1) + uVar4, uVar7 < uVar3)) {
    uVar7 = uVar3;
  }
  if (*(int **)this != (int *)0x0) {
    FUN_004028b0(*(int **)this,*(int **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar5 = pvVar1;
    if ((0xfff < uVar4 * 0x18) &&
       (pvVar5 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  FUN_0042ba20(this,uVar7);
  piVar6 = FUN_0042bb70(param_1,param_2,*(int **)this);
  *(int **)((int)this + 4) = piVar6;
  return;
}


undefined4 * __fastcall FUN_0042e360(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      FUN_00402690(param_3,puVar1,param_1[4]);
    }
    param_3 = param_3 + 6;
  }
  return param_3;
}


void __thiscall FUN_0042e3a0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 **this_00;
  int *this_01;
  undefined4 **ppuVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  byte *in_stack_ffffffc4;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = this;
  FUN_004024e0(&stack0xffffffc4,&param_1);
  iVar1 = FUN_0042e780(this,in_stack_ffffffc4);
  if (iVar1 == 0) {
    this_00 = (undefined4 **)FUN_005adb0f(0x24);
    piVar3 = (int *)0x0;
    this_01 = (int *)0x0;
    this_00[4] = (undefined4 *)0x0;
    this_00[5] = (undefined4 *)&DAT_0000000f;
    *(undefined1 *)this_00 = 0;
    this_00[6] = (undefined4 *)0x0;
    this_00[7] = (undefined4 *)0x0;
    this_00[8] = (undefined4 *)0x0;
    local_14 = this_00;
    if (this_00 != &param_1) {
      ppuVar2 = &param_1;
      if (0xf < in_stack_00000018) {
        ppuVar2 = (undefined4 **)param_1;
      }
      FUN_00402690(this_00,ppuVar2,in_stack_00000014);
      piVar3 = this_00[8];
      this_01 = this_00[7];
    }
    if (piVar3 == this_01) {
      FUN_00403840(this_00 + 6,this_01,&stack0x0000001c);
    }
    else {
      FUN_004024e0(this_01,&stack0x0000001c);
      this_00[7] = this_00[7] + 6;
    }
    puVar4 = *(undefined4 **)((int)this + 4);
    if (*(undefined4 **)((int)this + 8) == puVar4) {
      FUN_00414080(this,puVar4,&local_14);
    }
    else {
      *puVar4 = this_00;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
    }
  }
  else {
    piVar3 = *(int **)(iVar1 + 0x1c);
    if (*(int **)(iVar1 + 0x20) == piVar3) {
      FUN_00403840((void *)(iVar1 + 0x18),piVar3,&stack0x0000001c);
    }
    else {
      FUN_004024e0(piVar3,&stack0x0000001c);
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 0x18;
    }
  }
  if (0xf < in_stack_00000018) {
    puVar4 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar4 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar5 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pvVar5 = *(void **)((int)in_stack_0000001c + -4);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


undefined1 * __thiscall FUN_0042e540(void *this,undefined1 *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  byte *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b21b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc0,&param_2);
  iVar4 = FUN_0042e780(this,in_stack_ffffffc0);
  if (iVar4 == 0) {
    bVar3 = cc_assert_script_compatible("INVALID ANIMATION");
    if (!bVar3) {
      cocos2d::log("Assert failed: %s");
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    puVar12 = *(undefined4 **)(iVar4 + 0x18);
    if ((*(int *)(iVar4 + 0x1c) - (int)puVar12) - 0x18U < 0x18) {
      FUN_004024e0(param_1,puVar12);
    }
    else {
      iVar11 = -1;
      iVar8 = 0;
      do {
        if (99 < iVar8) {
          if (iVar11 == -1) {
            bVar3 = cc_assert_script_compatible("INVALID ANIMATION");
            if (!bVar3) {
              cocos2d::log("Assert failed: %s");
            }
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *param_1 = 0;
            FUN_00402690(param_1,&PTR_005ce008,0);
            goto LAB_0042e5dd;
          }
          break;
        }
        iVar1 = *(int *)(iVar4 + 0x1c);
        iVar2 = *(int *)(iVar4 + 0x18);
        iVar11 = rand();
        iVar11 = iVar11 % ((iVar1 - iVar2) / 0x18);
        puVar12 = *(undefined4 **)(iVar4 + 0x18);
        pbVar10 = (byte *)(puVar12 + iVar11 * 6);
        pbVar5 = (byte *)&stack0x00000020;
        if (0xf < in_stack_00000034) {
          pbVar5 = in_stack_00000020;
        }
        pbVar9 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar9 = *(byte **)pbVar10;
        }
        uVar6 = FUN_004031f0(pbVar9,*(uint *)(pbVar10 + 0x10),pbVar5,in_stack_00000030);
        if ((char)uVar6 != '\0') {
          iVar11 = -1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar11 == -1);
      FUN_004024e0(param_1,puVar12 + iVar11 * 6);
    }
  }
LAB_0042e5dd:
  if (0xf < in_stack_0000001c) {
    pvVar7 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar7 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pbVar10 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pbVar10 = *(byte **)(in_stack_00000020 + -4);
      if ((byte *)0x1f < in_stack_00000020 + (-4 - (int)pbVar10)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar10);
  }
  ExceptionList = local_10;
  return param_1;
}


undefined4 __thiscall FUN_0042e780(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar1 = *(int *)this;
  uVar7 = 0;
  uVar9 = *(int *)((int)this + 4) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      pbVar6 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar5 = *(byte **)pbVar6;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar6 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_0042e7d4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_0042e7d4:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


byte * __thiscall FUN_0042e820(void *this,void *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  byte ***pppbVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  byte ****ppppbVar10;
  byte *pbVar11;
  undefined **ppuVar12;
  int iVar13;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff80;
  byte ***local_50 [4];
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  byte *local_2c;
  int local_28;
  uint local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b2215;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  pbVar1 = (byte *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *pbVar1 = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_8 = 3;
  uStack_7 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_1c = this;
  local_14 = this;
  FUN_004024e0(&stack0xffffff80,&param_1);
  FUN_00592d70(&local_2c,',',in_stack_ffffff80);
  local_8 = 4;
  uVar6 = local_8;
  local_8 = 4;
  if (1 < (uint)((local_28 - (int)local_2c) / 0x18)) {
    if (local_1c != local_2c) {
      pbVar11 = local_2c;
      if (0xf < *(uint *)(local_2c + 0x14)) {
        pbVar11 = *(byte **)local_2c;
      }
      FUN_00402690(local_1c,pbVar11,*(uint *)(local_2c + 0x10));
    }
    pbVar11 = local_2c + 0x18;
    if (pbVar1 != pbVar11) {
      if (0xf < *(uint *)(local_2c + 0x2c)) {
        pbVar11 = *(byte **)pbVar11;
      }
      FUN_00402690(pbVar1,pbVar11,*(uint *)(local_2c + 0x28));
    }
    if (2 < (uint)((local_28 - (int)local_2c) / 0x18)) {
      FUN_004024e0(&stack0xffffff80,(undefined4 *)(local_2c + 0x30));
      FUN_00592d70(&local_38,':',in_stack_ffffff80);
      local_8 = 5;
      local_20 = 0;
      iVar13 = local_34 - local_38 >> 0x1f;
      if ((local_34 - local_38) / 0x18 + iVar13 != iVar13) {
        local_18 = 0;
        do {
          FUN_004024e0(local_50,(undefined4 *)(local_18 + local_38));
          pppbVar5 = local_50[0];
          ppuVar12 = &PTR_s_drunk_005dfcb4;
          do {
            pbVar1 = *ppuVar12;
            pbVar11 = pbVar1;
            do {
              bVar2 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar2 != 0);
            ppppbVar10 = local_50;
            if (0xf < local_3c) {
              ppppbVar10 = (byte ****)pppbVar5;
            }
            uVar7 = FUN_004031f0((byte *)ppppbVar10,local_40,pbVar1,(int)pbVar11 - (int)(pbVar1 + 1)
                                );
            if ((char)uVar7 != '\0') {
              if (0xf < local_3c) {
                ppppbVar10 = (byte ****)pppbVar5;
                if ((0xfff < local_3c + 1) &&
                   (ppppbVar10 = (byte ****)pppbVar5[-1],
                   (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar10))))
                goto LAB_0042ebf3;
                FUN_005adb3f(ppppbVar10);
              }
              bVar4 = true;
              goto LAB_0042ea42;
            }
            ppuVar12 = ppuVar12 + 1;
          } while ((int)ppuVar12 < 0x5dfcc0);
          if (0xf < local_3c) {
            ppppbVar10 = (byte ****)pppbVar5;
            if ((0xfff < local_3c + 1) &&
               (ppppbVar10 = (byte ****)pppbVar5[-1],
               (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar10)))) goto LAB_0042ebf3;
            FUN_005adb3f(ppppbVar10);
          }
          bVar4 = false;
LAB_0042ea42:
          if (bVar4) {
            FUN_004024e0(local_50,(undefined4 *)(local_38 + local_18));
            uVar7 = local_3c;
            pppbVar5 = local_50[0];
            iVar13 = 0;
            do {
              pbVar1 = (&PTR_s_normal_005dfcb0)[iVar13];
              local_14 = pbVar1 + 1;
              pbVar11 = pbVar1;
              do {
                bVar2 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar2 != 0);
              ppppbVar10 = local_50;
              if (0xf < uVar7) {
                ppppbVar10 = (byte ****)pppbVar5;
              }
              uVar8 = FUN_004031f0((byte *)ppppbVar10,local_40,pbVar1,(int)pbVar11 - (int)local_14);
              if ((char)uVar8 != '\0') {
                if (0xf < uVar7) {
                  ppppbVar10 = (byte ****)pppbVar5;
                  if ((0xfff < uVar7 + 1) &&
                     (ppppbVar10 = (byte ****)pppbVar5[-1],
                     (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar10))))
                  goto LAB_0042ebf3;
                  FUN_005adb3f(ppppbVar10);
                }
                *(int *)(local_1c + 0x3c) = iVar13;
                goto LAB_0042eb5e;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 4);
            if (0xf < uVar7) {
              ppppbVar10 = (byte ****)pppbVar5;
              if ((0xfff < uVar7 + 1) &&
                 (ppppbVar10 = (byte ****)pppbVar5[-1],
                 (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar10))))
              goto LAB_0042ebf3;
              FUN_005adb3f(ppppbVar10);
            }
            local_1c[0x3c] = 0;
            local_1c[0x3d] = 0;
            local_1c[0x3e] = 0;
            local_1c[0x3f] = 0;
          }
          else {
            pvVar9 = (void *)FUN_005adb0f(0x40);
            local_8 = 6;
            FUN_004024e0(&stack0xffffff80,(undefined4 *)(local_18 + local_38));
            local_14 = (byte *)FUN_004a1a40(pvVar9,in_stack_ffffff80);
            local_8 = 5;
            piVar3 = *(int **)(local_1c + 0x34);
            if (*(int **)(local_1c + 0x38) == piVar3) {
              FUN_004141e0(local_1c + 0x30,piVar3,&local_14);
            }
            else {
              *piVar3 = (int)local_14;
              *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 4;
            }
          }
LAB_0042eb5e:
          local_20 = local_20 + 1;
          local_18 = local_18 + 0x18;
        } while (local_20 < (uint)((local_34 - local_38) / 0x18));
      }
      local_8 = 4;
      FUN_004025a0(&local_38);
    }
    FUN_00591070("DETAIL","Unpacked location \'%s\', \'%s\'");
    uVar6 = local_8;
  }
  local_8 = uVar6;
  FUN_004025a0((int *)&local_2c);
  if (0xf < in_stack_00000018) {
    pvVar9 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar9 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar9)))) {
LAB_0042ebf3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  return local_1c;
}


void __thiscall FUN_0042ec20(void *this,void *param_1)

{
  byte *pbVar1;
  byte ****ppppbVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  void *pvVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  byte ***local_34 [4];
  uint local_24;
  uint local_20;
  int local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_18 = this;
  FUN_004024e0(local_34,&param_1);
  uVar9 = 0;
  local_1c = *(int *)(*(int *)((int)this + 4) + 0x34);
  local_14 = *(int *)(*(int *)((int)this + 4) + 0x38) - local_1c >> 2;
  if (local_14 != 0) {
    do {
      pbVar1 = *(byte **)(local_1c + uVar9 * 4);
      ppppbVar2 = local_34;
      if (0xf < local_20) {
        ppppbVar2 = (byte ****)local_34[0];
      }
      pbVar5 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar5 = *(byte **)pbVar1;
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar1 + 0x10),(byte *)ppppbVar2,local_24);
      if ((char)uVar3 != '\0') {
        uVar9 = *(uint *)(local_1c + uVar9 * 4);
        if (0xf < local_20) {
          ppppbVar2 = (byte ****)local_34[0];
          if ((0xfff < local_20 + 1) &&
             (ppppbVar2 = (byte ****)local_34[0][-1],
             (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar2)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar2);
        }
        goto LAB_0042ed1e;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_14);
  }
  if (0xf < local_20) {
    ppppbVar2 = (byte ****)local_34[0];
    if ((0xfff < local_20 + 1) &&
       (ppppbVar2 = (byte ****)local_34[0][-1],
       (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar2);
  }
  uVar9 = 0;
LAB_0042ed1e:
  local_14 = uVar9;
  if (uVar9 == 0) {
    FUN_00591070("ERROR","invalid addition \'%s\'");
  }
  else {
    if ((undefined4 **)(uVar9 + 0x18) != &stack0x0000001c) {
      puVar4 = &stack0x0000001c;
      if (0xf < in_stack_00000030) {
        puVar4 = in_stack_0000001c;
      }
      FUN_00402690((undefined4 *)(uVar9 + 0x18),puVar4,in_stack_0000002c);
    }
    uVar3 = 0;
    puVar8 = *(uint **)((int)local_18 + 100);
    iVar6 = *(int *)((int)local_18 + 0x60);
    uVar10 = (int)puVar8 - iVar6 >> 2;
    if (uVar10 != 0) {
      while( true ) {
        iVar6 = *(int *)(*(int *)(iVar6 + uVar3 * 4) + 0x50);
        if ((iVar6 != 4) && (*(int *)(uVar9 + 0x50) == iVar6)) {
          FUN_00591070("ERROR","CLASH between additions \'%s\' and \'%s\'");
          goto LAB_0042eddd;
        }
        uVar3 = uVar3 + 1;
        if (uVar10 <= uVar3) break;
        iVar6 = *(int *)((int)local_18 + 0x60);
      }
      puVar8 = *(uint **)((int)local_18 + 100);
    }
    if (*(uint **)((int)local_18 + 0x68) == puVar8) {
      FUN_00414080((void *)((int)local_18 + 0x60),puVar8,&local_14);
    }
    else {
      *puVar8 = uVar9;
      *(int *)((int)local_18 + 100) = *(int *)((int)local_18 + 100) + 4;
    }
  }
LAB_0042eddd:
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
  if (0xf < in_stack_00000030) {
    puVar4 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (puVar4 = (undefined4 *)in_stack_0000001c[-1],
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)puVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0042ee70(void *this,byte *param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(void **)this;
  }
  FUN_0042eeb0((int)pvVar2,*(uint *)((int)this + 0x10),0,param_1,(int)pbVar3 - (int)(param_1 + 1));
  return;
}


uint __fastcall FUN_0042eeb0(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    iVar5 = (param_1 - param_5) + param_2 + 1;
    bVar1 = *param_4;
    for (pbVar6 = memchr((void *)(param_1 + param_3),(int)(char)bVar1,
                         iVar5 - (int)(param_1 + param_3)); pbVar3 = param_4, pbVar4 = pbVar6,
        uVar7 = param_5, pbVar6 != (byte *)0x0;
        pbVar6 = memchr(pbVar6 + 1,(int)(char)bVar1,iVar5 - (int)(pbVar6 + 1))) {
      while (uVar2 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_0042ef36;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
        uVar7 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_0042ef6a:
        uVar7 = 0;
      }
      else {
LAB_0042ef36:
        bVar8 = *pbVar4 < *pbVar3;
        if ((*pbVar4 == *pbVar3) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = pbVar4[1] < pbVar3[1], pbVar4[1] == pbVar3[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = pbVar4[2] < pbVar3[2], pbVar4[2] == pbVar3[2] &&
               ((uVar2 == 0xffffffff || (bVar8 = pbVar4[3] < pbVar3[3], pbVar4[3] == pbVar3[3]))))))
             )))))) goto LAB_0042ef6a;
        uVar7 = -(uint)bVar8 | 1;
      }
      if (uVar7 == 0) {
        return (int)pbVar6 - param_1;
      }
    }
  }
  return 0xffffffff;
}


void __fastcall FUN_0042efb0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2280;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar6 = (undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar5 = puVar6;
  if (0xf < *(uint *)(param_1 + 0x30)) {
    puVar5 = (undefined4 *)*puVar6;
  }
  *(undefined1 *)puVar5 = 0;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%c%s: ");
  local_8 = 0;
  puVar5 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar5 = (undefined4 *)*puVar2;
  }
  FUN_00403640(puVar6,puVar5,puVar2[4]);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
LAB_0042f064:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  if (*(int *)(param_1 + 0x34) == 100) {
    pvVar3 = (void *)(param_1 + 0x38);
    if (0xf < *(uint *)(param_1 + 0x4c)) {
      pvVar3 = *(void **)(param_1 + 0x38);
    }
    FUN_00403640(puVar6,pvVar3,*(uint *)(param_1 + 0x48));
  }
  else {
    uVar7 = 0;
    bVar1 = false;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        iVar4 = rand();
        if (*(int *)(param_1 + 0x34) < iVar4 % 100 + 1) {
          bVar1 = true;
          rand();
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%c%c");
          local_8 = 1;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640((void *)(param_1 + 0x1c),puVar6,puVar5[4]);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar3 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar3 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0042f064;
            FUN_005adb3f(pvVar3);
          }
        }
        else if (bVar1) {
          bVar1 = false;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%c%c");
          local_8 = 2;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640((void *)(param_1 + 0x1c),puVar6,puVar5[4]);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar3 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar3 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0042f064;
            FUN_005adb3f(pvVar3);
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005ce018);
          local_8 = 3;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640((void *)(param_1 + 0x1c),puVar6,puVar5[4]);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
            pvVar3 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar3 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) goto LAB_0042f064;
            FUN_005adb3f(pvVar3);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x48));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042f2b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  uVar1 = (*(int *)(param_1 + 0x18) - (int)puVar2) + 3U >> 2;
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 0x18) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_0042f300((void *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


void * __fastcall FUN_0042f300(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x4c)) {
    pvVar1 = *(void **)((int)param_1 + 0x38);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x4c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042f3de;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0xf;
  *(undefined1 *)((int)param_1 + 0x38) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x30)) {
    pvVar1 = *(void **)((int)param_1 + 0x1c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042f3de;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0xf;
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    pvVar1 = *(void **)((int)param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0042f3de:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


void __thiscall FUN_0042f3f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 **this_00;
  undefined4 *_Dst;
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b22c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = this;
  _Dst = (undefined4 *)FUN_005adb0f(0x50);
  memset(_Dst,0,0x50);
  this_00 = (undefined4 **)(_Dst + 1);
  _Dst[5] = 0;
  puVar3 = _Dst + 0xe;
  _Dst[6] = 0xf;
  *(undefined1 *)this_00 = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0xf;
  *(undefined1 *)(_Dst + 7) = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0xf;
  *(undefined1 *)puVar3 = 0;
  _Dst[0xd] = in_stack_00000038;
  local_14 = _Dst;
  if ((undefined4 **)puVar3 != &stack0x00000020) {
    puVar1 = &stack0x00000020;
    if (0xf < in_stack_00000034) {
      puVar1 = in_stack_00000020;
    }
    FUN_00402690(puVar3,puVar1,in_stack_00000030);
  }
  if (this_00 != &param_2) {
    ppuVar2 = &param_2;
    if (0xf < in_stack_0000001c) {
      ppuVar2 = (undefined4 **)param_2;
    }
    FUN_00402690(this_00,ppuVar2,in_stack_00000018);
  }
  *_Dst = param_1;
  FUN_0042efb0((int)_Dst);
  puVar3 = *(undefined4 **)((int)this + 0x18);
  if (*(undefined4 **)((int)this + 0x1c) == puVar3) {
    FUN_00414080((void *)((int)this + 0x14),puVar3,&local_14);
  }
  else {
    *puVar3 = _Dst;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 4;
  }
  *(undefined1 *)((int)this + 0xc) = 1;
  if (0xf < in_stack_0000001c) {
    puVar3 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      puVar3 = (undefined4 *)param_2[-1];
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    puVar3 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      puVar3 = (undefined4 *)in_stack_00000020[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((int)in_stack_00000020 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_0042f570(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined4 uStack0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  byte *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b232a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined1 *)((int)this + 8) = 0;
  local_8 = 2;
  uStack_7 = 0;
  FUN_004024e0((void *)((int)this + 0x20),&param_3);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xf;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  _local_8 = CONCAT31(uStack_7,6);
  FUN_004024e0(&stack0xffffffc4,&stack0x00000024);
  FUN_0042f7b0(this,in_stack_ffffffc4);
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
  uStack0000001c = 0;
  in_stack_00000020 = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pvVar1 = in_stack_00000024;
    if (0xfff < in_stack_00000038 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_0042f6b0(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff94;
  undefined4 local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar7 = in_stack_00000018;
  pbVar5 = param_1;
  puStack_c = &LAB_005b2360;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar4 = (byte **)param_1;
  }
  uVar1 = FUN_004031f0((byte *)ppbVar4,in_stack_00000014,(byte *)&PTR_005ce008,0);
  if ((char)uVar1 == '\0') {
    FUN_004024e0(&stack0xffffff94,&param_1);
    iVar2 = FUN_004eb4d0(in_stack_ffffff94);
    piVar3 = FUN_004ea270(local_3c,iVar2);
    local_8._0_1_ = 1;
    FUN_00430330((void *)((int)this + 0x80),piVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    pbVar5 = param_1;
    uVar7 = in_stack_00000018;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
      pbVar5 = param_1;
      uVar7 = in_stack_00000018;
    }
  }
  if (0xf < uVar7) {
    pbVar6 = pbVar5;
    if ((0xfff < uVar7 + 1) &&
       (pbVar6 = *(byte **)(pbVar5 + -4), (byte *)0x1f < pbVar5 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0042f7b0(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff94;
  undefined local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar7 = in_stack_00000018;
  pbVar5 = param_1;
  puStack_c = &LAB_005b2360;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar4 = (byte **)param_1;
  }
  uVar1 = FUN_004031f0((byte *)ppbVar4,in_stack_00000014,(byte *)&PTR_005ce008,0);
  if ((char)uVar1 == '\0') {
    FUN_004024e0(&stack0xffffff94,&param_1);
    iVar2 = FUN_004dba70(in_stack_ffffff94);
    piVar3 = (int *)FUN_004da1b0(local_3c,iVar2);
    local_8._0_1_ = 1;
    FUN_004175d0((void *)((int)this + 0x40),piVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    pbVar5 = param_1;
    uVar7 = in_stack_00000018;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
      pbVar5 = param_1;
      uVar7 = in_stack_00000018;
    }
  }
  if (0xf < uVar7) {
    pbVar6 = pbVar5;
    if ((0xfff < uVar7 + 1) &&
       (pbVar6 = *(byte **)(pbVar5 + -4), (byte *)0x1f < pbVar5 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042f8b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 != iVar1) {
    do {
      FUN_00430450(iVar2);
      iVar2 = iVar2 + 0x38;
    } while (iVar2 != iVar1);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
    return;
  }
  *(int *)(param_1 + 0x48) = iVar2;
  return;
}


undefined1 * __thiscall FUN_0042f900(void *this,undefined1 *param_1)

{
  if (*(int *)((int)this + 8) != 0) {
    FUN_00591e00(param_1,"%s / %s");
    return param_1;
  }
  FUN_004024e0(param_1,(undefined4 *)((int)this + 0xc));
  return param_1;
}


void __thiscall FUN_0042f960(void *this,void *param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  void *in_stack_ffffff7c;
  uint local_48;
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
  puStack_c = &LAB_005b23b0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar12 = *(int *)((int)this + 0x44) + *(int *)((int)this + 0x28) * 0x38;
  pvVar9 = (void *)(iVar12 + 8);
  if (0xf < *(uint *)(*(int *)((int)this + 0x44) + 0x1c + *(int *)((int)this + 0x28) * 0x38)) {
    pvVar9 = *(void **)(iVar12 + 8);
  }
  FUN_00403640(param_1,pvVar9,*(uint *)(iVar12 + 0x18));
  iVar12 = *(int *)((int)this + 0x28);
  local_48 = 0;
  iVar6 = *(int *)(*(int *)((int)this + 0x44) + 0x30 + iVar12 * 0x38) -
          *(int *)(*(int *)((int)this + 0x44) + 0x2c + iVar12 * 0x38);
  iVar11 = iVar6 >> 0x1f;
  if (iVar6 / 0xa8 + iVar11 != iVar11) {
    iVar11 = 0;
    do {
      if (*(int *)(iVar11 + 100 + *(int *)(*(int *)((int)this + 0x44) + 0x2c + iVar12 * 0x38)) != 0)
      {
        in_stack_ffffff7c = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
        FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
        cVar1 = FUN_00417780((void *)(*(int *)(*(int *)((int)this + 0x44) + 0x2c +
                                              *(int *)((int)this + 0x28) * 0x38) + 0x40 + iVar11),
                             *(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffff7c);
        if (cVar1 != '\0') goto LAB_0042fa5e;
        goto LAB_0042fc76;
      }
LAB_0042fa5e:
      iVar6 = *(int *)(*(int *)((int)this + 0x44) + 0x2c + *(int *)((int)this + 0x28) * 0x38);
      iVar12 = iVar11 + iVar6;
      pbVar7 = (byte *)(iVar12 + 0x68);
      if (0xf < *(uint *)(iVar11 + 0x7c + iVar6)) {
        pbVar7 = *(byte **)(iVar12 + 0x68);
      }
      uVar3 = FUN_004031f0(pbVar7,*(uint *)(iVar12 + 0x78),(byte *)&PTR_005ce008,0);
      if ((char)uVar3 == '\0') {
        pcVar4 = (char *)(iVar6 + 0x68 + iVar11);
        pcVar8 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar8 = *(char **)pcVar4;
        }
        if (*pcVar8 == '!') {
          uVar3 = *(int *)(iVar11 + 0x78 + iVar6) - 1;
          puVar10 = (undefined4 *)(iVar6 + 0x68 + iVar11);
          in_stack_ffffff7c = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
          if ((uint)puVar10[4] < uVar3) {
            uVar3 = puVar10[4];
          }
          if (0xf < (uint)puVar10[5]) {
            puVar10 = (undefined4 *)*puVar10;
          }
          FUN_00402690(&stack0xffffff7c,puVar10,uVar3);
          local_8 = 0;
          puVar10 = FUN_00412df0();
          local_8 = 0xffffffff;
          bVar2 = FUN_004a1150(puVar10,in_stack_ffffff7c);
          if (bVar2 == 0) goto LAB_0042fb44;
        }
        else {
          FUN_004024e0(&stack0xffffff7c,(undefined4 *)pcVar4);
          local_8 = 1;
          puVar10 = FUN_00412df0();
          local_8 = 0xffffffff;
          bVar2 = FUN_004a1150(puVar10,in_stack_ffffff7c);
          if (bVar2 != 0) goto LAB_0042fb44;
        }
      }
      else {
LAB_0042fb44:
        if (local_48 != 0) {
          FUN_00403640(param_2,&DAT_005e75f8,1);
        }
        if (local_48 == *(uint *)((int)this + 0x24)) {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2[`0o`2] %s");
          local_8 = 2;
          puVar10 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar10 = (undefined4 *)*puVar5;
          }
          FUN_00403640(param_2,puVar10,puVar5[4]);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
            pvVar9 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar9 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_0042fcdd:
              local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar9);
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2[ ] %s");
          local_8 = 3;
          puVar10 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar10 = (undefined4 *)*puVar5;
          }
          FUN_00403640(param_2,puVar10,puVar5[4]);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0042fcdd;
            FUN_005adb3f(pvVar9);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        }
      }
LAB_0042fc76:
      iVar12 = *(int *)((int)this + 0x28);
      iVar11 = iVar11 + 0xa8;
      local_48 = local_48 + 1;
    } while (local_48 <
             (uint)((*(int *)(*(int *)((int)this + 0x44) + 0x30 + iVar12 * 0x38) -
                    *(int *)(*(int *)((int)this + 0x44) + 0x2c + iVar12 * 0x38)) / 0xa8));
  }
  FUN_00403640(param_2,"\n\n `2[`$arrows`2/`$enter`2/`$backspace`2]",0x29);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0042fcf0(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  void *in_stack_ffffffd8;
  
  if (0 < (int)param_1) {
    uVar2 = FUN_0042fdd0((int)this);
    *(uint *)((int)this + 0x24) = uVar2;
    return uVar2;
  }
  if ((int)param_1 < 0) {
    iVar3 = *(int *)((int)this + 0x24);
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        iVar3 = *(int *)(*(int *)((int)this + 0x44) + 0x30 + *(int *)((int)this + 0x28) * 0x38) -
                *(int *)(*(int *)((int)this + 0x44) + 0x2c + *(int *)((int)this + 0x28) * 0x38);
        param_1 = iVar3 * 0x30c30c31;
        iVar3 = iVar3 / 0xa8 + -1;
      }
      if (iVar3 == *(int *)((int)this + 0x24)) break;
      param_1 = *(uint *)(*(int *)((int)this + 0x44) + 0x2c + *(int *)((int)this + 0x28) * 0x38);
      if (*(int *)(param_1 + 100 + iVar3 * 0xa8) == 0) break;
      in_stack_ffffffd8 = (void *)((uint)in_stack_ffffffd8 & 0xffffff00);
      FUN_00402690(&stack0xffffffd8,&PTR_005ce008,0);
      cVar1 = FUN_00417780((void *)(*(int *)(*(int *)((int)this + 0x44) + 0x2c +
                                            *(int *)((int)this + 0x28) * 0x38) + 0x40 + iVar3 * 0xa8
                                   ),*(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffffd8);
      param_1 = CONCAT31(extraout_var,cVar1);
    } while (cVar1 == '\0');
    *(int *)((int)this + 0x24) = iVar3;
  }
  return param_1;
}


uint __fastcall FUN_0042fdd0(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *in_stack_ffffffd4;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x2c + *(int *)(param_1 + 0x28) * 0x38);
    uVar3 = -(uint)(uVar3 + 1 <
                   (uint)((*(int *)(*(int *)(param_1 + 0x44) + 0x30 +
                                   *(int *)(param_1 + 0x28) * 0x38) - iVar1) / 0xa8)) & uVar3 + 1;
    if (uVar3 == *(uint *)(param_1 + 0x24)) {
      return uVar3;
    }
    if (*(int *)(uVar3 * 0xa8 + 100 + iVar1) == 0) break;
    in_stack_ffffffd4 = (void *)((uint)in_stack_ffffffd4 & 0xffffff00);
    FUN_00402690(&stack0xffffffd4,&PTR_005ce008,0);
    cVar2 = FUN_00417780((void *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c +
                                          *(int *)(param_1 + 0x28) * 0x38) + 0x40 + uVar3 * 0xa8),
                         *(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffffd4);
    if (cVar2 != '\0') {
      return uVar3;
    }
  }
  return uVar3;
}


uint __fastcall FUN_0042fe90(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint in_stack_ffffffd4;
  void *pvVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x2c + *(int *)(param_1 + 0x28) * 0x38);
  if ((uint)((*(int *)(*(int *)(param_1 + 0x44) + 0x30 + *(int *)(param_1 + 0x28) * 0x38) - iVar1) /
            0xa8) <= *(uint *)(param_1 + 0x24)) {
    return 0;
  }
  if (*(int *)(*(uint *)(param_1 + 0x24) * 0xa8 + 100 + iVar1) != 0) {
    pvVar4 = (void *)(in_stack_ffffffd4 & 0xffffff00);
    FUN_00402690(&stack0xffffffd4,&PTR_005ce008,0);
    cVar2 = FUN_00417780((void *)(*(int *)(param_1 + 0x24) * 0xa8 +
                                  *(int *)(*(int *)(param_1 + 0x44) + 0x2c +
                                          *(int *)(param_1 + 0x28) * 0x38) + 0x40),
                         *(undefined4 *)(DAT_0065b5cc + 0xd0),0,pvVar4);
    if (cVar2 == '\0') {
      uVar3 = FUN_0042fdd0(param_1);
      return uVar3;
    }
  }
  return *(uint *)(param_1 + 0x24);
}


uint __fastcall FUN_0042ff50(int param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *this;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *in_stack_ffffffa0;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b23f0;
  local_10 = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x24) * 0xa8;
  iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 0x2c + *(int *)(param_1 + 0x28) * 0x38);
  iVar7 = *(int *)(iVar5 + 0x38 + iVar4);
  if (iVar7 == 0) {
    iVar5 = -1;
    iVar7 = 8;
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar4,iVar7,iVar5);
    iVar7 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44);
    uVar6 = 0;
    iVar4 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0x38 + iVar4;
    if (iVar7 != iVar4) {
      piVar3 = (int *)(*(int *)(param_1 + 0x44) + 4);
      do {
        if (*piVar3 ==
            *(int *)(*(int *)(param_1 + 0x24) * 0xa8 +
                    *(int *)(*(int *)(param_1 + 0x44) + 0x2c + *(int *)(param_1 + 0x28) * 0x38))) {
          ExceptionList = local_10;
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        piVar3 = piVar3 + 0xe;
      } while (uVar6 < (uint)(iVar7 - iVar4));
    }
    ExceptionList = local_10;
    return 0;
  }
  if (iVar7 == 1) {
    iVar5 = -1;
    iVar7 = 9;
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar4,iVar7,iVar5);
    ExceptionList = local_10;
    return 0xffffffff;
  }
  if (iVar7 == 2) {
    piVar3 = *(int **)(iVar5 + 0xa4 + iVar4);
    if (piVar3 == (int *)0x0) {
      ExceptionList = &local_10;
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    ExceptionList = &local_10;
    cVar1 = (**(code **)(*piVar3 + 8))();
    iVar4 = *(int *)(param_1 + 0x28);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return *(uint *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c + iVar4 * 0x38) + 4 +
                      *(int *)(param_1 + 0x24) * 0xa8);
    }
  }
  else {
    if (iVar7 == 3) {
      ExceptionList = &local_10;
      FUN_004024e0(&stack0xffffffa0,(undefined4 *)(iVar5 + 8 + iVar4));
      local_8 = 0;
    }
    else {
      if (iVar7 != 4) {
        return 0xfffffffe;
      }
      ExceptionList = &local_10;
      FUN_004024e0(&stack0xffffffa0,(undefined4 *)(iVar5 + 8 + iVar4));
      local_8 = 1;
    }
    this = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(this,in_stack_ffffffa0);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  ExceptionList = local_10;
  return *(uint *)(*(int *)(param_1 + 0x24) * 0xa8 +
                  *(int *)(*(int *)(param_1 + 0x44) + 0x2c + iVar4 * 0x38));
}
