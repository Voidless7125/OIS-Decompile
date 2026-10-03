#include "../ois_server.exe.h"


undefined4 __cdecl FUN_004e40b0(int param_1)

{
  void *this;
  int *piVar1;
  bool bVar2;
  uint in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  if (((param_1 == 0) || (this = *(void **)(param_1 + 0x178), this == (void *)0x0)) ||
     ((in_EAX = *(uint *)(*(int *)((int)this + 0x254) + 0x158), in_EAX != 1 &&
      ((in_EAX != 2 && (in_EAX != 3)))))) {
LAB_004e418e:
    return in_EAX & 0xffffff00;
  }
  if (*(int *)((int)this + 0x3dc) != 0) {
    local_14 = FUN_0051b8a0(this,param_1);
    if ((local_14 == (int *)0x0) || (local_14[2] != 2)) {
      bVar2 = false;
    }
    else {
      piVar1 = *(int **)((int)this + 0x3c8);
      puVar3 = FUN_00414000(&local_10,(int *)&local_14,*(int **)((int)this + 0x3c4),piVar1);
      FUN_00412ba0((void *)((int)this + 0x3c4),local_c,(void *)*puVar3,piVar1);
      FUN_005adb3f(local_14);
      bVar2 = true;
    }
    if (!bVar2) {
      in_EAX = FUN_00527550(*(int **)(param_1 + 0x224),1,"No undocking permission found.");
      goto LAB_004e418e;
    }
  }
  uVar4 = FUN_00527550(*(int **)(param_1 + 0x224),1,"Permission to undock rescinded.");
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


int __cdecl FUN_004e41a0(int param_1)

{
  void *this;
  int *this_00;
  char cVar1;
  uint3 extraout_var;
  void *pvVar2;
  uint3 extraout_var_00;
  uint3 uVar4;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint in_stack_ffffffac;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb0a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)(in_stack_ffffffac & 0xffffff00);
  FUN_00402690(&stack0xffffffac,&PTR_005ce008,0);
  cVar1 = FUN_004cc320(param_1,0,pvVar2);
  uVar4 = extraout_var;
  if (cVar1 == '\0') {
LAB_004e423e:
    ExceptionList = local_10;
    return (uint)uVar4 << 8;
  }
  this = *(void **)(param_1 + 0x178);
  if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < *(int *)((int)this + 0x3e0)) {
    FUN_00527550(*(int **)(param_1 + 0x224),2,"`^Warning: `%%Not enough money in your account.");
    iVar7 = -1;
    iVar6 = 0x2c;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,param_1,iVar6,iVar7);
    uVar4 = extraout_var_00;
    goto LAB_004e423e;
  }
  pbVar5 = (byte *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffffac,"Jumpgate",8);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-*(int *)((int)this + 0x3e0),pbVar5);
  FUN_004024e0(local_2c,(undefined4 *)(param_1 + 0x238));
  local_8 = 0;
  FUN_004024e0(&stack0xffffffac,local_2c);
  cVar1 = FUN_0051ae20(this,pbVar5);
  if (cVar1 == '\0') {
    this_00 = *(int **)((int)this + 0x418);
    if (*(int **)((int)this + 0x41c) == this_00) {
      FUN_00403840((void *)((int)this + 0x414),this_00,local_2c);
    }
    else {
      FUN_004024e0(this_00,local_2c);
      *(int *)((int)this + 0x418) = *(int *)((int)this + 0x418) + 0x18;
    }
    local_8 = 0xffffffff;
    if (local_18 < 0x10) goto LAB_004e4360;
    pvVar2 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar2 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    local_8 = 0xffffffff;
    if (local_18 < 0x10) goto LAB_004e4360;
    pvVar2 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar2 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_005adb3f(pvVar2);
LAB_004e4360:
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  FUN_00527550(*(int **)(param_1 + 0x224),1,"`$%dc`%% paid.");
  iVar8 = -1;
  iVar7 = 0x2d;
  iVar6 = param_1;
  pvVar2 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar2,iVar6,iVar7,iVar8);
  iVar7 = -1;
  iVar6 = 0x2b;
  pvVar2 = (void *)FUN_00402f60();
  uVar3 = FUN_00557fb0(pvVar2,param_1,iVar6,iVar7);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


int __cdecl FUN_004e43d0(void *param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar6;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint in_stack_ffffffa4;
  byte *pbVar12;
  undefined4 uVar13;
  void *local_34 [5];
  uint local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b23f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)(in_stack_ffffffa4 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,&PTR_005ce008,0);
  cVar1 = FUN_004cef80((int)param_1,0,pvVar3);
  uVar6 = extraout_var;
  if (cVar1 != '\0') {
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,&PTR_005ce008,0);
    cVar1 = FUN_004cc320((int)param_1,0,pvVar3);
    uVar6 = extraout_var_00;
    if (cVar1 == '\0') {
      pbVar12 = (byte *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffa4,&PTR_005ce008,0);
      cVar1 = FUN_004cc410((int)param_1,0,pbVar12);
      uVar6 = extraout_var_01;
      if (cVar1 != '\0') {
        local_14 = *(int *)(*(int *)((int)param_1 + 0x178) + 0x38c);
        for (puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
            puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar4 = puVar4 + 1) {
          piVar2 = (int *)*puVar4;
          if (*piVar2 == local_14) goto LAB_004e44cf;
        }
        piVar2 = (int *)0x0;
LAB_004e44cf:
        uVar8 = 0;
        piVar7 = (int *)piVar2[0x33];
        uVar11 = piVar2[0x34] - (int)piVar7 >> 2;
        if (uVar11 != 0) {
          do {
            iVar9 = *piVar7;
            if ((*(int *)(*(int *)(iVar9 + 0x254) + 0x158) == 2) &&
               (*(int *)(iVar9 + 0x38c) == *(int *)((int)param_1 + 0x20))) goto LAB_004e4516;
            uVar8 = uVar8 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar8 < uVar11);
        }
        iVar9 = 0;
LAB_004e4516:
        FUN_00591070(&DAT_005cdc70,"Jumping from sector %d to jumpgate, \'%s\'");
        FUN_00512ae0(param_1,local_14,(float)*(double *)(iVar9 + 0x28),
                     (float)*(double *)(iVar9 + 0x30));
        uVar8 = 0xffffffff;
        pvVar3 = (void *)FUN_004023e0();
        FUN_00530750(pvVar3,uVar8);
        uVar13 = 1;
        pvVar3 = (void *)FUN_004023e0();
        FUN_005313a0(pvVar3,uVar13);
        local_18 = &stack0xffffffa4;
        pcVar10 = (char *)((int)param_1 + 0x238);
        FUN_004024e0(&stack0xffffffa4,(undefined4 *)pcVar10);
        local_8 = 0;
        pvVar3 = (void *)FUN_004023e0();
        local_8 = 0xffffffff;
        FUN_00531140(pvVar3,pbVar12);
        pvVar3 = (void *)((uint)pbVar12 & 0xffffff00);
        local_18 = &stack0xffffffa4;
        FUN_00402690(&stack0xffffffa4,"jumpgates_used",0xe);
        local_8 = 1;
        FUN_00412770();
        local_8 = 0xffffffff;
        FUN_0051e750(extraout_ECX,pvVar3);
        iVar9 = *(int *)((int)param_1 + 0x178);
        if (0xf < *(uint *)((int)param_1 + 0x24c)) {
          pcVar10 = *(char **)pcVar10;
        }
        std::basic_string<>::basic_string<>((basic_string<> *)local_34,pcVar10);
        pbVar12 = *(byte **)(iVar9 + 0x418);
        puVar4 = (undefined4 *)
                 FUN_00413f20(&local_1c,(byte *)local_34,*(byte **)(iVar9 + 0x414),pbVar12);
        pbVar5 = (byte *)*puVar4;
        if (pbVar5 != pbVar12) {
          piVar2 = FUN_00414300((int *)pbVar12,*(int **)(iVar9 + 0x418),(int *)pbVar5);
          pbVar5 = (byte *)FUN_004028b0(piVar2,*(int **)(iVar9 + 0x418));
          *(int **)(iVar9 + 0x418) = piVar2;
        }
        if (0xf < local_20) {
          pvVar3 = local_34[0];
          if ((0xfff < local_20 + 1) &&
             (pvVar3 = *(void **)((int)local_34[0] + -4),
             0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          pbVar5 = (byte *)FUN_005adb3f(pvVar3);
        }
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)pbVar5 >> 8),1);
      }
    }
  }
  ExceptionList = local_10;
  return (uint)uVar6 << 8;
}


undefined4 __cdecl FUN_004e46b0(int param_1)

{
  void *this;
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  uint in_stack_ffffffd0;
  void *pvVar4;
  
  if (((param_1 != 0) && (this = *(void **)(param_1 + 0x178), this != (void *)0x0)) &&
     ((in_EAX = *(uint *)(*(int *)((int)this + 0x254) + 0x158), in_EAX == 1 ||
      ((in_EAX == 2 || (in_EAX == 3)))))) {
    if ((*(int *)((int)this + 0x390) != 0) &&
       (iVar3 = (int)*(float *)(*(int *)((int)this + 0x390) + 0xd0), iVar3 != 0)) {
      FUN_00591070(&DAT_005cdc70,"Player amount = %d, cost = %d");
      if (iVar3 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
        pvVar4 = (void *)(in_stack_ffffffd0 & 0xffffff00);
        FUN_00402690(&stack0xffffffd0,"Station Services",0x10);
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-iVar3,pvVar4);
        FUN_0051baa0(this,iVar3);
        FUN_00527550(*(int **)(param_1 + 0x224),1,"`$%dc`%% paid.");
        FUN_004eb580();
        FUN_004eb560();
        FUN_004127d0();
        uVar1 = FUN_004b8550();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      FUN_00527550(*(int **)(param_1 + 0x224),2,"`^Warning: `%%Not enough money in your account.");
      uVar2 = FUN_004eb5e0();
      return uVar2 & 0xffffff00;
    }
    in_EAX = FUN_00527550(*(int **)(param_1 + 0x224),1,"No amount is owed.");
  }
  return in_EAX & 0xffffff00;
}


void __cdecl FUN_004e4800(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  bool bVar6;
  undefined4 *in_stack_ffffff5c;
  undefined1 local_8c [12];
  undefined4 uStack_80;
  uint in_stack_ffffff8c;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005be848;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x178) != 0)) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
    bVar6 = false;
    if (iVar8 != 0) {
      bVar6 = *(int *)(iVar8 + 0x158) == 1;
    }
    if (bVar6) {
      pvVar4 = (void *)(in_stack_ffffff8c & 0xffffff00);
      uStack_80 = 0x4e4883;
      FUN_00402690(&stack0xffffff8c,&PTR_005ce008,0);
      uStack_80 = 0x4e488b;
      cVar1 = FUN_004cc6c0(param_1,0,pvVar4);
      if (cVar1 != '\0') {
        iVar8 = *(int *)(param_1 + 0x178);
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_8 = 0;
        puVar2 = (undefined4 *)(DAT_0065b5cc + 0xf4);
        puVar5 = (undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 4);
        if (puVar5 != puVar2) {
          if (0xf < *(uint *)(DAT_0065b5cc + 0x108)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_00402690(puVar5,puVar2,*(uint *)(DAT_0065b5cc + 0x104));
        }
        puVar2 = (undefined4 *)(DAT_0065b5cc + 0xf4);
        puVar5 = (undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x80);
        if (puVar5 != puVar2) {
          if (0xf < *(uint *)(DAT_0065b5cc + 0x108)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_00402690(puVar5,puVar2,*(uint *)(DAT_0065b5cc + 0x104));
        }
        puVar2 = (undefined4 *)(DAT_0065b5cc + 0x10c);
        puVar5 = (undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 8);
        if (puVar5 != puVar2) {
          if (0xf < *(uint *)(DAT_0065b5cc + 0x120)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_00402690(puVar5,puVar2,*(uint *)(DAT_0065b5cc + 0x11c));
        }
        pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
        uStack_80 = 0x4e4958;
        FUN_00402690(&stack0xffffff8c,"Registration change.",0x14);
        uStack_80 = 0x4e496f;
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffff38,pvVar4);
        piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,
                                     "Your details have been changed per your request, at a fee of %d credits.\n\nNew account name: %s\n\nNew ship name: %s"
                                    );
        FUN_00413230(local_2c,piVar3);
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
        if (*(int *)(iVar8 + 0x390) == 0) {
          FUN_004024e0(&stack0xffffff8c,local_2c);
          local_8._0_1_ = 4;
          local_8c[0] = 0;
          FUN_00402690(local_8c,"Rego Details Changed",0x14);
          local_8._0_1_ = 5;
          in_stack_ffffff5c = (undefined4 *)((uint)in_stack_ffffff5c & 0xffffff00);
          FUN_00402690(&stack0xffffff5c,&DAT_00614bcc,3);
          local_8._0_1_ = 6;
        }
        else {
          FUN_004024e0(&stack0xffffff8c,local_2c);
          local_8._0_1_ = 1;
          local_8c[0] = 0;
          FUN_00402690(local_8c,"Rego Details Changed",0x14);
          local_8._0_1_ = 2;
          FUN_004024e0(&stack0xffffff5c,(undefined4 *)(*(int *)(iVar8 + 0x390) + 0x20));
          local_8._0_1_ = 3;
        }
        pvVar4 = (void *)FUN_00412700();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0043aad0(pvVar4,in_stack_ffffff5c);
        iVar9 = -1;
        iVar7 = 0x2d;
        iVar8 = param_1;
        pvVar4 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar4,iVar8,iVar7,iVar9);
        iVar7 = -1;
        iVar8 = 0x2b;
        pvVar4 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar4,param_1,iVar8,iVar7);
        if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
          FUN_004127d0();
          FUN_004b8550();
        }
        FUN_00591070(&DAT_005cdc70,"Changed player details to %s, captain of the %s");
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
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_004e4ba0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0xf;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  piVar1 = FUN_00402690(local_20,&PTR_005ce008,0);
  pvVar2 = local_20[0];
  if (param_1 == 0) {
    if (local_c < 0x10) goto LAB_004e4c05;
    if (0xfff < local_c + 1) {
      pvVar2 = *(void **)((int)local_20[0] + -4);
joined_r0x004e4c2c:
      if (0x1f < (uint)((int)local_20[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (local_c < 0x10) goto LAB_004e4c05;
    if (0xfff < local_c + 1) {
      pvVar2 = *(void **)((int)local_20[0] + -4);
      goto joined_r0x004e4c2c;
    }
  }
  piVar1 = (int *)FUN_005adb3f(pvVar2);
LAB_004e4c05:
  return (uint)piVar1 & 0xffffff00;
}


uint __cdecl FUN_004e4c40(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(uint *)(DAT_0065b5cc + 0xcc) + 0x30c) != '\0') {
    return *(uint *)(DAT_0065b5cc + 0xcc) & 0xffffff00;
  }
  iVar3 = -1;
  iVar2 = 8;
  iVar1 = param_1;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,iVar1,iVar2,iVar3);
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(iVar1 + 0x34) = 1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


uint __cdecl FUN_004e4c80(int param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(DAT_0065b5cc + 0xcc);
  if (*(char *)(uVar1 + 0x30c) == '\0') {
    iVar4 = -1;
    iVar3 = 9;
    iVar2 = param_1;
    this = (void *)FUN_00402f60();
    FUN_00557fb0(this,iVar2,iVar3,iVar4);
    uVar1 = *(uint *)(param_1 + 0x40);
    *(undefined1 *)(uVar1 + 0x34) = 0;
  }
  return uVar1 & 0xffffff00;
}


uint __cdecl FUN_004e4cc0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *this;
  
  if (*(char *)(*(uint *)(DAT_0065b5cc + 0xcc) + 0x30c) != '\0') {
    return *(uint *)(DAT_0065b5cc + 0xcc) & 0xffffff00;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x40) + 0x34);
  this = (void *)FUN_00402f60();
  if (cVar1 != '\0') {
    FUN_00557fb0(this,param_1,9,-1);
    uVar2 = *(uint *)(param_1 + 0x40);
    *(undefined1 *)(uVar2 + 0x34) = 0;
    return uVar2 & 0xffffff00;
  }
  FUN_00557fb0(this,param_1,8,-1);
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(iVar3 + 0x34) = 1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


uint __cdecl FUN_004e4d20(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  float fVar8;
  uint in_stack_ffffff6c;
  undefined1 local_7c [12];
  undefined4 uStack_70;
  uint in_stack_ffffffa0;
  int iVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be8bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar1 = *(byte **)(DAT_0065b5cc + 0xcc);
  pbVar6 = pbVar1;
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar6 = *(byte **)pbVar1;
  }
  uVar2 = FUN_004031f0(pbVar6,*(uint *)(pbVar1 + 0x10),(byte *)"objectsinspace",0xe);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_10;
    return uVar2;
  }
  iVar9 = -1;
  iVar7 = 8;
  iVar4 = param_1;
  pvVar3 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar3,iVar4,iVar7,iVar9);
  if (*(char *)(param_1 + 0x318) == '\0') {
    local_18 = &stack0xffffffa0;
    pvVar3 = (void *)(in_stack_ffffffa0 & 0xffffff00);
    FUN_00402690(&stack0xffffffa0,"sos_sent",8);
    local_8 = 0;
    uVar5 = extraout_ECX;
    if (DAT_0065c294 == 0) {
      local_14 = (undefined4 *)FUN_005adb0f(0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c294 = FUN_0051e500(local_14);
      uVar5 = extraout_ECX_00;
    }
    local_8 = 0xffffffff;
    FUN_0051e750(uVar5,pvVar3);
    local_18 = &stack0xffffff9c;
    uStack_70 = 0x4e4e2e;
    FUN_00402690(&stack0xffffff9c,&PTR_005ce008,0);
    local_14 = (undefined4 *)local_7c;
    local_8 = 2;
    local_7c[0] = 0;
    FUN_00402690(local_7c,"sos_sent",8);
    local_8 = CONCAT31(local_8._1_3_,3);
    pvVar3 = (void *)(in_stack_ffffff6c & 0xffffff00);
    FUN_00402690(&stack0xffffff6c,&DAT_0060d818,4);
    local_8 = 0xffffffff;
    FUN_00401a50(pvVar3);
  }
  *(undefined1 *)(param_1 + 0x318) = 1;
  local_18 = (undefined1 *)FUN_00404c20();
  if (local_18 == (undefined1 *)0x0) {
    iVar4 = -1;
  }
  else {
    local_20 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
    local_1c = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
    local_28 = (float)*(double *)((int)local_18 + 0x28);
    local_24 = (float)*(double *)((int)local_18 + 0x30);
    local_8 = 5;
    fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
    local_14 = (undefined4 *)(0x5f3759df - ((uint)fVar8 >> 1));
    fVar8 = ((1.5 - fVar8 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar8) /
            10.0;
    local_8 = 0xffffffff;
    if (fVar8 < 30.0) {
      iVar7 = 0;
      iVar4 = 2;
      do {
        uVar2 = rand();
        uVar2 = uVar2 & 0x80000007;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
        }
        iVar7 = iVar7 + 1 + uVar2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      fVar8 = (float)(iVar7 + 0x16);
    }
    iVar4 = *(int *)((int)local_18 + 0x24);
    if (iVar4 != *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24)) {
      local_30 = (float)*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x7c);
      local_2c = (float)*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x80);
      local_38 = (float)*(int *)(iVar4 + 0x7c);
      local_34 = (float)*(int *)(iVar4 + 0x80);
      local_8 = 7;
      local_18 = (undefined1 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
      local_14 = (undefined4 *)(0x5f3759df - ((uint)local_18 >> 1));
      fVar8 = (1.5 - (float)local_18 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
              (float)local_18 + 60.0;
      local_8 = 0xffffffff;
    }
    iVar4 = (int)fVar8;
  }
  *(float *)(param_1 + 0x31c) = (float)iVar4;
  FUN_00527550(*(int **)(param_1 + 0x224),4,"`$EMERGENCY BEACON ACTIVATED.\n`!Requesting Tow...");
  uVar5 = FUN_00591070(&DAT_005cdc70,
                       "Vessel fired SOS beacon - will be taken back to a starbase via tow in %f seconds"
                      );
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


uint __cdecl FUN_004e50c0(int param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = 9;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  *(undefined1 *)(param_1 + 0x318) = 0;
  return uVar1 & 0xffffff00;
}


undefined1 FUN_004e50f0(void)

{
  return 0;
}


undefined4 __cdecl FUN_004e5100(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be8f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  iVar6 = -1;
  if (*(int *)(DAT_0065c288 + 0xf8) != -1) {
    iVar5 = 8;
    *(int *)(DAT_0065c288 + 0xfc) = *(int *)(DAT_0065c288 + 0xf8);
    pvVar2 = (void *)FUN_00402f60();
    uVar3 = FUN_00557fb0(pvVar2,param_1,iVar5,iVar6);
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  iVar5 = 10;
  pvVar2 = (void *)FUN_00402f60();
  uVar4 = FUN_00557fb0(pvVar2,param_1,iVar5,iVar6);
  ExceptionList = local_10;
  return uVar4 & 0xffffff00;
}


void __cdecl FUN_004e51b0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *pvVar7;
  int extraout_EDX;
  uint in_stack_ffffffac;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be930;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8) = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x174);
  if (iVar4 == 0) {
LAB_004e53f4:
    if ((((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0xd4) != 3)) ||
        (*(int *)(param_1 + 0xf8) != 2)) ||
       ((*(char *)(param_1 + 0x280) != '\0' || (*(char *)(param_1 + 0x281) != '\0'))))
    goto LAB_004e5337;
    pvVar7 = (void *)(in_stack_ffffffac & 0xffffff00);
    FUN_00402690(&stack0xffffffac,"cannot_board_vessel",0x13);
    local_8 = 3;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    bVar1 = FUN_004a1150(puVar3,pvVar7);
    if (bVar1 != 0) goto LAB_004e5337;
    if (DAT_0065b3d4 == param_1) {
      if ((((*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1) &&
           (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) != '\0')) &&
          (uVar2 = FUN_00403c90(*(int *)(param_1 + 0x178)), (char)uVar2 != '\0')) &&
         (*(char *)(extraout_EDX + 0x388) == '\0')) {
        iVar4 = FUN_004023e0();
        *(undefined4 *)(iVar4 + 0x2a4) = 7;
      }
      else {
        iVar4 = FUN_004023e0();
        *(undefined4 *)(iVar4 + 0x2a4) = 4;
      }
    }
    else {
      if (((*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1) &&
          (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) != '\0')) &&
         (*(char *)(DAT_0065b444 + 0x11d) == '\0')) goto LAB_004e5337;
      iVar4 = FUN_004023e0();
      *(undefined4 *)(iVar4 + 0x2a4) = 3;
    }
  }
  else {
    pbVar5 = (byte *)(iVar4 + 200);
    if (0xf < *(uint *)(iVar4 + 0xdc)) {
      pbVar5 = *(byte **)(iVar4 + 200);
    }
    uVar2 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0xd8),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 != '\0') goto LAB_004e53f4;
    pbVar5 = (byte *)(param_1 + 0x68);
    if (0xf < *(uint *)(param_1 + 0x7c)) {
      pbVar5 = *(byte **)(param_1 + 0x68);
    }
    pbVar6 = _DstBuf_0065b3dc;
    if (0xf < *(uint *)((int)_DstBuf_0065b3dc + 0x14)) {
      pbVar6 = *(byte **)_DstBuf_0065b3dc;
    }
    uVar2 = FUN_004031f0(pbVar6,*(uint *)((int)_DstBuf_0065b3dc + 0x10),pbVar5,
                         *(uint *)(param_1 + 0x78));
    if ((char)uVar2 == '\0') {
      iVar4 = FUN_004023e0();
      *(undefined4 *)(iVar4 + 0x2a4) = 6;
    }
    else {
      pvVar7 = (void *)(in_stack_ffffffac & 0xffffff00);
      FUN_00402690(&stack0xffffffac,"cannot_board_structure",0x16);
      local_8 = 0;
      puVar3 = FUN_00412df0();
      local_8 = 0xffffffff;
      bVar1 = FUN_004a1150(puVar3,pvVar7);
      if (bVar1 != 0) goto LAB_004e5337;
      FUN_004024e0(local_2c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0x80));
      local_8 = 1;
      FUN_00591e00(&stack0xffffffac,"cannot_board_structure_%s");
      local_8._0_1_ = 2;
      puVar3 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,1);
      bVar1 = FUN_004a1150(puVar3,pvVar7);
      if (bVar1 != 0) {
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
        goto LAB_004e5337;
      }
      iVar4 = FUN_004023e0();
      local_8 = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x2a4) = 5;
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
    }
  }
  iVar4 = FUN_004023e0();
  *(undefined2 *)(iVar4 + 0x2a0) = 0x100;
  *(undefined4 *)(iVar4 + 0x29c) = 1;
  *(undefined4 *)(iVar4 + 0x2ac) = 0x3ecccccd;
  *(undefined4 *)(iVar4 + 0x2a8) = 0x3ecccccd;
LAB_004e5337:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_004e5530(int param_1)

{
  int iVar1;
  undefined4 *this;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x19c) == 0) {
    pcVar7 = "No object selected.";
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x130);
    if (iVar1 != 0) {
      this = FUN_004125d0();
      uVar2 = 0;
      piVar5 = (int *)this[0x1d];
      uVar6 = this[0x1e] - (int)piVar5 >> 2;
      if (uVar6 != 0) {
        do {
          if ((*(int *)(*piVar5 + 8) == iVar1) && (iVar1 != 0)) {
            FUN_00430f60(this,uVar2);
            pvVar3 = (void *)FUN_004023e0();
            uVar4 = FUN_0052f6a0(pvVar3);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          uVar2 = uVar2 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar2 < uVar6);
      }
    }
    pcVar7 = "No communication channel available.";
  }
  uVar2 = FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar7);
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e55d0(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x1c) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x1c) + 0x10))(0);
      if (((char)in_EAX != '\0') && (*(float *)(param_1 + 0x160) <= 0.0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
        iVar2 = FUN_00437c60(*(int **)(iVar1 + 0xc));
        iVar5 = -1;
        iVar4 = 8;
        *(float *)(param_1 + 0x160) =
             (((float)iVar2 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
             *(float *)(*(int *)(iVar1 + 8) + 0x104);
        this = (void *)FUN_00402f60();
        uVar3 = FUN_00557fb0(this,param_1,iVar4,iVar5);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e5680(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x1c) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x1c) + 0x10))(0);
      if ((char)in_EAX != '\0') {
        *(undefined1 *)(param_1 + 0x15c) = 1;
        if (*(float *)(param_1 + 0x160) == -1.0) {
          *(undefined4 *)(param_1 + 0x164) = 0x43340000;
        }
        iVar3 = -1;
        iVar2 = 8;
        this = (void *)FUN_00402f60();
        uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e56f0(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x1c) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x1c) + 0x10))(0);
      if ((char)in_EAX != '\0') {
        iVar3 = -1;
        iVar2 = 9;
        *(undefined1 *)(param_1 + 0x15c) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0xbf800000;
        this = (void *)FUN_00402f60();
        uVar1 = FUN_00557fb0(this,param_1,iVar2,iVar3);
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


void __cdecl FUN_004e5740(int param_1)

{
  char cVar1;
  undefined4 *this;
  void *pvVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  byte *pbVar5;
  uint in_stack_ffffff90;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *local_48;
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
  puStack_c = &LAB_005be978;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = (void *)(in_stack_ffffff90 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,&PTR_005ce008,0);
  cVar1 = FUN_004d8310(param_1,0,pvVar2);
  if (cVar1 == '\0') {
    FUN_004024e0(local_2c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8 = 0;
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar3,(char *)((int)ppppcVar4 + local_1c),
                 (undefined1 *)ppppcVar4);
    pbVar5 = (byte *)0x4e580c;
    FUN_00591e00((undefined1 *)local_44,"%s_has_unclamped_cargo");
    local_48 = &stack0xffffff8c;
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff8c,local_44);
    local_8._0_1_ = 2;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004a0ee0(this,pbVar5);
    FUN_00591070("WORLD","Unlocked magnetic clamps on cargo for %s");
    FUN_00527550(*(int **)(param_1 + 0x224),1,"Unlocked magnetic clamps.");
    iVar8 = -1;
    iVar6 = 8;
    iVar7 = param_1;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar7,iVar6,iVar8);
    iVar6 = -1;
    iVar7 = 0x12;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,param_1,iVar7,iVar6);
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
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar4 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004e5920(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  byte *pbVar6;
  uint in_stack_ffffff90;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *local_48;
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
  puStack_c = &LAB_005be9c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar3 = (void *)(in_stack_ffffff90 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,&PTR_005ce008,0);
  cVar1 = FUN_004d8120(param_1,0,pvVar3);
  if (cVar1 == '\0') {
    FUN_004024e0(local_2c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8 = 0;
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                 (undefined1 *)ppppcVar5);
    pbVar6 = (byte *)0x4e59ec;
    FUN_00591e00((undefined1 *)local_44,"%s_has_downloaded_data");
    local_48 = &stack0xffffff8c;
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff8c,local_44);
    local_8._0_1_ = 2;
    puVar2 = FUN_00412df0();
    local_8._0_1_ = 1;
    FUN_004a0ee0(puVar2,pbVar6);
    local_48 = &stack0xffffff8c;
    FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0xb0));
    local_8._0_1_ = 3;
    puVar2 = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004a0ee0(puVar2,pbVar6);
    FUN_00591070("WORLD","Downloaded data for wreck %s");
    FUN_00527550(*(int **)(param_1 + 0x224),1,"Forced data download from computer.");
    iVar9 = -1;
    iVar7 = 9;
    iVar8 = param_1;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,iVar8,iVar7,iVar9);
    iVar7 = -1;
    iVar8 = 0x2d;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,param_1,iVar8,iVar7);
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
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar5 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_004e5b30(int param_1)

{
  uint in_EAX;
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x1ec) == *(int *)(*(int *)(param_1 + 0x254) + 0xe4) + -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1ec) + 1;
  }
  iVar4 = -1;
  iVar3 = 9;
  *(int *)(param_1 + 0x1ec) = iVar1;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


uint __cdecl FUN_004e5b80(int param_1)

{
  uint in_EAX;
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
  }
  iVar4 = -1;
  iVar3 = 8;
  *(int *)(param_1 + 0x1ec) = iVar1 + -1;
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e5bc0(int param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x174) + 0xe8), iVar2 != 0)) {
    iVar4 = 0;
    iVar6 = -1;
    do {
      if ((iVar4 < 0) || ((0 < *(int *)(iVar2 + 8) && (*(int *)(iVar2 + 8) <= iVar4)))) {
        bVar5 = false;
      }
      else {
        bVar5 = *(int *)(iVar2 + 0xc + iVar4 * 4) != 0;
      }
      iVar1 = iVar4;
      if (!bVar5) {
        iVar1 = iVar6;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar1;
    } while (iVar4 < 0xe);
    if (*(int *)(param_1 + 0x1f0) == iVar1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1f0) + 1;
    }
    iVar4 = -1;
    iVar6 = 9;
    *(int *)(param_1 + 0x1f0) = iVar2;
    this = (void *)FUN_00402f60();
    uVar3 = FUN_00557fb0(this,param_1,iVar6,iVar4);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e5c50(int param_1)

{
  uint in_EAX;
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (iVar5 = *(int *)(*(int *)(param_1 + 0x174) + 0xe8), iVar5 != 0)) {
    iVar3 = 0;
    iVar6 = -1;
    do {
      if ((iVar3 < 0) || ((0 < *(int *)(iVar5 + 8) && (*(int *)(iVar5 + 8) <= iVar3)))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(iVar5 + 0xc + iVar3 * 4) != 0;
      }
      iVar1 = iVar3;
      if (!bVar4) {
        iVar1 = iVar6;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar1;
    } while (iVar3 < 0xe);
    if (*(int *)(param_1 + 0x1f0) != 0) {
      iVar1 = *(int *)(param_1 + 0x1f0) + -1;
    }
    iVar6 = -1;
    iVar5 = 8;
    *(int *)(param_1 + 0x1f0) = iVar1;
    this = (void *)FUN_00402f60();
    uVar2 = FUN_00557fb0(this,param_1,iVar5,iVar6);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


void __cdecl FUN_004e5ce0(undefined1 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 extraout_ECX;
  undefined4 *puVar9;
  uint uVar10;
  float fVar11;
  uint in_stack_ffffff4c;
  undefined1 local_9c [12];
  undefined4 uStack_90;
  uint in_stack_ffffff80;
  undefined1 *puVar12;
  int iVar13;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  void *local_2c [3];
  undefined8 local_20;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bea3c;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  local_30 = (undefined4 *)0x0;
  local_38 = param_1;
  iVar7 = *(int *)(param_1 + 0x1ec);
  if (((((iVar7 != -1) && (iVar7 < *(int *)(*(int *)(param_1 + 0x254) + 0xe4))) && (-1 < iVar7)) &&
      ((iVar13 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar13 < 1 || (iVar7 < iVar13)))) &&
     (*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + iVar7 * 4) != 0)) {
    local_3c = *(float *)(param_1 + 0x24);
    local_48 = (float)*(double *)(param_1 + 0x28);
    local_44 = (float)*(double *)(param_1 + 0x30);
    puVar9 = (undefined4 *)0x0;
    iVar7 = *(int *)((int)local_3c + 0x9c);
    local_30 = (undefined4 *)0x0;
    puVar6 = local_30;
    if (*(int *)((int)local_3c + 0xa0) - iVar7 >> 2 != 0) {
      uVar10 = 0;
      do {
        iVar7 = *(int *)(iVar7 + uVar10 * 4);
        local_50 = (float)*(double *)(iVar7 + 0x28);
        local_4c = (float)*(double *)(iVar7 + 0x30);
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_50,(Vec2 *)&local_48);
        local_30 = (undefined4 *)(0x5f3759df - ((uint)fVar11 >> 1));
        local_34 = (undefined1 *)
                   ((1.5 - fVar11 * 0.5 * (float)local_30 * (float)local_30) * (float)local_30 *
                   fVar11);
        if (5.0 < (float)local_34) {
LAB_004e5ecf:
          bVar5 = false;
        }
        else {
          if (puVar9 != (undefined4 *)0x0) {
            local_58 = (float)*(double *)(puVar9 + 10);
            local_54 = (float)*(double *)(puVar9 + 0xc);
            local_8 = CONCAT31(local_8._1_3_,2);
            bVar4 = true;
            local_30 = (undefined4 *)0x1;
            fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_58,(Vec2 *)&local_48);
            local_30 = (undefined4 *)(0x5f3759df - ((uint)fVar11 >> 1));
            if ((float)local_34 <=
                (1.5 - fVar11 * 0.5 * (float)local_30 * (float)local_30) * (float)local_30 * fVar11)
            goto LAB_004e5ecf;
          }
          bVar5 = true;
        }
        if (bVar4) {
          bVar4 = false;
        }
        if (bVar5) {
          puVar9 = *(undefined4 **)(*(int *)((int)local_3c + 0x9c) + uVar10 * 4);
        }
        uVar10 = uVar10 + 1;
        iVar7 = *(int *)((int)local_3c + 0x9c);
        puVar6 = puVar9;
      } while (uVar10 < (uint)(*(int *)((int)local_3c + 0xa0) - iVar7 >> 2));
    }
    local_30 = puVar6;
    local_8 = 0xffffffff;
    if ((local_30 == (undefined4 *)0x0) || (local_30[0x18] != 1)) {
      local_30 = FUN_0051f310(*(void **)(local_38 + 0x24),(undefined4 *)0x1);
      rand();
      rand();
      FUN_00593000((Vec2 *)&local_40);
      *(double *)(local_30 + 10) = (double)local_40;
      *(double *)(local_30 + 0xc) = (double)local_3c;
    }
    puVar12 = local_38;
    iVar7 = FUN_00521910((int)local_30);
    puVar6 = local_30;
    FUN_005070d0((void *)local_30[0x3a],iVar7);
    puVar2 = *(ulonglong **)(*(int *)(puVar12 + 0x1f8) + 0xc + *(int *)(puVar12 + 0x1ec) * 4);
    puVar3 = *(undefined2 **)(puVar6[0x3a] + 0xc + iVar7 * 4);
    local_18 = (uint)puVar2[1];
    uVar1 = *puVar2;
    local_20._0_2_ = (undefined2)uVar1;
    *puVar3 = (undefined2)local_20;
    local_20._2_1_ = (undefined1)(uVar1 >> 0x10);
    *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
    *(undefined4 *)(*(int *)(puVar6[0x3a] + 0xc + iVar7 * 4) + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(puVar12 + 0x1f8) + 0xc + *(int *)(puVar12 + 0x1ec) * 4) + 4);
    *(undefined4 *)(*(int *)(puVar6[0x3a] + 0xc + iVar7 * 4) + 8) =
         *(undefined4 *)
          (*(int *)(*(int *)(puVar12 + 0x1f8) + 0xc + *(int *)(puVar12 + 0x1ec) * 4) + 8);
    puVar9 = (undefined4 *)(puVar12 + 0x238);
    local_20 = uVar1;
    if (puVar6 + 0x1a != puVar9) {
      if (0xf < *(uint *)(puVar12 + 0x24c)) {
        puVar9 = (undefined4 *)*puVar9;
      }
      FUN_00402690(puVar6 + 0x1a,puVar9,*(uint *)(puVar12 + 0x248));
    }
    iVar7 = *(int *)(*(int *)((int)*(void **)(puVar12 + 0x1f8) +
                             *(uint *)(puVar12 + 0x1ec) * 4 + 0xc) + 4);
    if (iVar7 == -1) {
      FUN_005069b0(*(void **)(puVar12 + 0x1f8),(undefined1 *)local_2c,*(uint *)(puVar12 + 0x1ec),
                   '\0');
      local_8 = 3;
      FUN_00527550(*(int **)(puVar12 + 0x224),2,"empty %s pod jettisoned");
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_20 = local_20 & 0xffffffff;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    else {
      FUN_004a84a0(iVar7);
      in_stack_ffffff80 = 0x4e6134;
      FUN_00527550(*(int **)(puVar12 + 0x224),2,"%dx %s in pod jettisoned");
    }
    FUN_00507170(*(void **)(puVar12 + 0x1f8),*(int *)(puVar12 + 0x1ec));
    iVar13 = -1;
    iVar7 = 0x22;
    pvVar8 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar8,(int)puVar12,iVar7,iVar13);
    local_34 = &stack0xffffff80;
    pvVar8 = (void *)(in_stack_ffffff80 & 0xffffff00);
    FUN_00402690(&stack0xffffff80,"cargo_jettisons",0xf);
    local_8 = 4;
    FUN_00412770();
    local_8 = 0xffffffff;
    FUN_0051e750(extraout_ECX,pvVar8);
    local_34 = &stack0xffffff7c;
    uStack_90 = 0x4e61bc;
    FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
    local_38 = local_9c;
    local_8 = 5;
    local_9c[0] = 0;
    FUN_00402690(local_9c,"cargo_jettisons",0xf);
    local_8 = CONCAT31(local_8._1_3_,6);
    pvVar8 = (void *)(in_stack_ffffff4c & 0xffffff00);
    FUN_00402690(&stack0xffffff4c,&DAT_0060d818,4);
    local_8 = 0xffffffff;
    FUN_00401a50(pvVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_004e6240(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint in_EAX;
  void *pvVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (((param_2 != -1) && (param_3 != -1)) &&
     ((in_EAX = *(uint *)(DAT_0065b5cc + 0xcc), in_EAX == 0 || (*(int *)(in_EAX + 0x70) != 1)))) {
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      uVar8 = 0;
      piVar1 = *(int **)(*(int *)(param_1 + 0x254) + 0x13c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x254) + 0x140) - (int)piVar1;
      iVar9 = iVar5 >> 0x1f;
      iVar5 = iVar5 / 0x18 + iVar9;
      piVar7 = piVar1;
      if (iVar5 != iVar9) {
        do {
          if (*piVar7 == param_2) {
            piVar7 = piVar1 + uVar8 * 6;
            goto LAB_004e62de;
          }
          uVar8 = uVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (uVar8 < (uint)(iVar5 - iVar9));
      }
      piVar7 = (int *)0x0;
LAB_004e62de:
      piVar6 = (int *)0x0;
      uVar8 = 0;
      if (iVar5 != iVar9) {
        piVar6 = piVar1 + 2;
        do {
          if (*piVar6 == param_3) {
            piVar6 = piVar1 + uVar8 * 6;
            goto LAB_004e6316;
          }
          uVar8 = uVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (uVar8 < (uint)(iVar5 - iVar9));
        piVar6 = (int *)0x0;
      }
LAB_004e6316:
      if ((piVar7 == (int *)0x0) || (piVar6 == (int *)0x0)) {
        iVar9 = 10;
LAB_004e63f7:
        pvVar2 = (void *)FUN_00402f60();
        uVar4 = FUN_00557fb0(pvVar2,param_1,iVar9,-1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      if (piVar7[1] != piVar6[1]) {
        iVar10 = -1;
        iVar5 = 10;
        iVar9 = param_1;
        pvVar2 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar2,iVar9,iVar5,iVar10);
        uVar8 = FUN_00527550(*(int **)(param_1 + 0x224),1,"Invalid slot type.");
        return uVar8 & 0xffffff00;
      }
      iVar9 = piVar6[2];
      iVar5 = FUN_005225b0(*(void **)(param_1 + 0x40),iVar9);
      iVar10 = FUN_005225b0(*(void **)(param_1 + 0x40),piVar7[2]);
      if (iVar5 != iVar10) {
        *(int *)(iVar10 + 0x10) = iVar9;
        if (iVar5 == 0) {
          pcVar3 = "Module moved.";
        }
        else {
          *(int *)(iVar5 + 0x10) = piVar7[2];
          pcVar3 = "Module positions swapped.";
        }
        FUN_00527550(*(int **)(param_1 + 0x224),1,pcVar3);
        uVar8 = rand();
        uVar8 = uVar8 & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        iVar5 = uVar8 + 1;
        iVar10 = 0x18;
        iVar9 = DAT_0065b3d4;
        pvVar2 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar2,iVar9,iVar10,iVar5);
        iVar9 = 0x2d;
        param_1 = DAT_0065b3d4;
        goto LAB_004e63f7;
      }
    }
    else {
      FUN_00527550(*(int **)(param_1 + 0x224),1,"Station machinery required to move modules.");
    }
    iVar5 = -1;
    iVar9 = 10;
    pvVar2 = (void *)FUN_00402f60();
    in_EAX = FUN_00557fb0(pvVar2,param_1,iVar9,iVar5);
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e6440(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  size_t _Size;
  uint in_stack_ffffffcc;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
  cVar3 = FUN_004d8dd0(param_1,0,pvVar4);
  if (cVar3 == '\0') {
    iVar9 = -1;
    iVar8 = 10;
    pvVar4 = (void *)FUN_00402f60();
    uVar5 = FUN_00557fb0(pvVar4,param_1,iVar8,iVar9);
    return uVar5 & 0xffffff00;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x1f8) + 0x48);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1f8) + 0x44);
  local_8 = piVar1;
  puVar6 = FUN_00414000(&local_10,piVar2 + *(int *)(param_1 + 0x1d4),piVar2,piVar1);
  piVar2 = (int *)*puVar6;
  local_c = *(int *)(param_1 + 0x1f8);
  if (piVar2 != piVar1) {
    _Size = *(int *)(local_c + 0x48) - (int)local_8;
    memmove(piVar2,local_8,_Size);
    *(size_t *)(local_c + 0x48) = _Size + (int)piVar2;
  }
  iVar10 = -1;
  iVar9 = 0x22;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  iVar8 = param_1;
  pvVar4 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar4,iVar8,iVar9,iVar10);
  iVar9 = -1;
  iVar8 = 8;
  pvVar4 = (void *)FUN_00402f60();
  uVar7 = FUN_00557fb0(pvVar4,param_1,iVar8,iVar9);
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}


void __cdecl FUN_004e6520(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  double dVar11;
  float fVar12;
  uint in_stack_ffffff50;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  uint in_stack_ffffff88;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined1 *local_38;
  undefined4 *local_34;
  float local_30;
  void *local_2c [3];
  undefined8 local_20;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005beaba;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar9 = (void *)(in_stack_ffffff88 & 0xffffff00);
  FUN_00402690(&stack0xffffff88,&PTR_005ce008,0);
  cVar5 = FUN_004d8ec0(param_1,0,pvVar9);
  if (cVar5 != '\0') {
    local_34 = FUN_0051f310(*(void **)(param_1 + 0x24),(undefined4 *)0x1);
    local_48 = (float)*(double *)(param_1 + 0x28);
    local_44 = (float)*(double *)(param_1 + 0x30);
    iVar6 = rand();
    iVar7 = rand();
    fVar12 = (float)(iVar7 % 100) / 100.0;
    local_30 = fVar12 + fVar12 + 1.0;
    local_8 = 0;
    dVar11 = (double)(iVar6 % 0x168 + -1) * 0.017453292519943295;
    local_40 = dVar11;
    libm_sse2_sin_precise();
    local_38 = (undefined1 *)(float)(dVar11 * (double)local_30);
    libm_sse2_cos_precise();
    local_40._4_4_ = (undefined4 *)(float)(local_40 * (double)local_30);
    local_40._0_4_ = (float)local_38;
    local_8 = CONCAT31(local_8._1_3_,1);
    cocos2d::Vec2::operator+((Vec2 *)&local_48,(Vec2 *)&local_50);
    puVar8 = (undefined4 *)(param_1 + 0x238);
    local_8 = 2;
    *(double *)(local_34 + 10) = (double)local_50;
    *(double *)(local_34 + 0xc) = (double)local_4c;
    if (local_34 + 0x1a != puVar8) {
      if (0xf < *(uint *)(param_1 + 0x24c)) {
        puVar8 = (undefined4 *)*puVar8;
      }
      FUN_00402690(local_34 + 0x1a,puVar8,*(uint *)(param_1 + 0x248));
    }
    FUN_00527550(*(int **)(param_1 + 0x224),2,"all cargo pods jettisoned");
    iVar6 = 0;
    iVar7 = 0xc;
    local_38 = (undefined1 *)0x0;
    iVar10 = 0;
    local_30 = 1.68156e-44;
    do {
      if ((-1 < iVar10) &&
         (((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar2 < 1 || (iVar10 < iVar2)) &&
          (*(int *)(iVar7 + *(int *)(param_1 + 0x1f8)) != 0)))) {
        FUN_005070d0((void *)local_34[0x3a],iVar6);
        puVar3 = *(ulonglong **)(iVar7 + *(int *)(param_1 + 0x1f8));
        uVar1 = *puVar3;
        puVar4 = *(undefined2 **)((int)local_30 + local_34[0x3a]);
        local_18 = (uint)puVar3[1];
        local_20._0_2_ = (undefined2)uVar1;
        *puVar4 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)(uVar1 >> 0x10);
        *(undefined1 *)(puVar4 + 1) = local_20._2_1_;
        *(undefined4 *)(*(int *)((int)local_30 + local_34[0x3a]) + 4) =
             *(undefined4 *)(*(int *)(iVar7 + *(int *)(param_1 + 0x1f8)) + 4);
        *(undefined4 *)(*(int *)((int)local_30 + local_34[0x3a]) + 8) =
             *(undefined4 *)(*(int *)(iVar7 + *(int *)(param_1 + 0x1f8)) + 8);
        local_40._4_4_ = *(undefined4 **)(param_1 + 0x1f8);
        local_20 = uVar1;
        if ((((int)local_40._4_4_[2] < 1) || (iVar10 < (int)local_40._4_4_[2])) &&
           (*(void **)(iVar7 + (int)local_40._4_4_) != (void *)0x0)) {
          FUN_005adb3f(*(void **)(iVar7 + (int)local_40._4_4_));
          *(undefined4 *)(iVar7 + (int)local_40._4_4_) = 0;
        }
        iVar6 = (int)local_38 + 1;
        local_30 = (float)((int)local_30 + 4);
        local_38 = (undefined1 *)iVar6;
      }
      iVar7 = iVar7 + 4;
      iVar10 = iVar10 + 1;
    } while (iVar7 < 0x44);
    local_20 = local_20 & 0xffffffff;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cargo_jettisons",0xf);
    local_8._0_1_ = 3;
    if (DAT_0065c294 == 0) {
      local_40._4_4_ = (undefined4 *)FUN_005adb0f(0x28);
      local_8._0_1_ = 4;
      DAT_0065c294 = FUN_0051e500(local_40._4_4_);
    }
    local_8._0_1_ = 2;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar9);
    }
    local_40 = (double)CONCAT44(&stack0xffffff80,(float)local_40);
    uStack_8c = 0x4e6868;
    FUN_00402690(&stack0xffffff80,&PTR_005ce008,0);
    local_38 = local_98;
    local_8._0_1_ = 6;
    local_98[0] = 0;
    FUN_00402690(local_98,"cargo_jettisons",0xf);
    local_8._0_1_ = 7;
    pvVar9 = (void *)(in_stack_ffffff50 & 0xffffff00);
    FUN_00402690(&stack0xffffff50,&DAT_0060d818,4);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00401a50(pvVar9);
    iVar7 = -1;
    iVar6 = 0x22;
    pvVar9 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar9,param_1,iVar6,iVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 __cdecl FUN_004e68f0(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint in_stack_ffffffdc;
  int iVar4;
  
  pvVar3 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,&PTR_005ce008,0);
  cVar1 = FUN_004d7e30(param_1,0,pvVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00437c60(*(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0xc));
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c);
  *(float *)(iVar4 + 0x6c) =
       *(float *)(*(int *)(iVar4 + 8) + 0x104) * (((float)iVar2 / 100.0 - 1.0) * -1.0 + 1.0);
  *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x34) = *(int *)(param_1 + 0x1ec) + 1;
  FUN_00591070(&DAT_005cdc70,"Beginning transfer from ship cargo slot %d to moored vessel");
  iVar2 = -1;
  iVar4 = 8;
  pvVar3 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar3,param_1,iVar4,iVar2);
  return 1;
}


undefined1 __cdecl FUN_004e69c0(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint in_stack_ffffffdc;
  int iVar4;
  
  pvVar3 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,&PTR_005ce008,0);
  cVar1 = FUN_004d7cd0(param_1,0,pvVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00437c60(*(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0xc));
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c);
  *(float *)(iVar4 + 0x6c) =
       *(float *)(*(int *)(iVar4 + 8) + 0x104) * (((float)iVar2 / 100.0 - 1.0) * -1.0 + 1.0);
  *(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x34) = ~*(uint *)(param_1 + 0x1f0);
  FUN_00591070(&DAT_005cdc70,"Beginning transfer from moored cargo slot %d to vessel");
  iVar2 = -1;
  iVar4 = 8;
  pvVar3 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar3,param_1,iVar4,iVar2);
  return 1;
}


void __cdecl FUN_004e6a90(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  uint in_stack_ffffffb0;
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
  pvVar4 = (void *)(in_stack_ffffffb0 & 0xffffff00);
  FUN_00402690(&stack0xffffffb0,&PTR_005ce008,0);
  cVar2 = FUN_004d7500(param_1,0,pvVar4);
  if (cVar2 != '\0') {
    iVar3 = FUN_00437c60(*(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0xc));
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x30);
    *(float *)(iVar1 + 0x6c) =
         *(float *)(*(int *)(iVar1 + 8) + 0x104) * (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x62) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x18) =
         *(undefined4 *)(*(int *)(param_1 + 0x194) + 0x130);
    FUN_005095f0(*(void **)(param_1 + 0x194),(undefined1 *)local_2c,'\0',-1);
    local_8 = 0;
    FUN_00527550(*(int **)(param_1 + 0x224),2,"Security attack on %s begun");
    local_8 = 0xffffffff;
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00591070("DETAIL","Security attack begun, time to completion %f seconds");
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_004e6c30(void *param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  void *this;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  uint in_stack_ffffffd8;
  int iVar5;
  int iVar6;
  
  pvVar2 = (void *)(in_stack_ffffffd8 & 0xffffff00);
  FUN_00402690(&stack0xffffffd8,&PTR_005ce008,0);
  cVar1 = FUN_004cd750(param_1,0,pvVar2);
  if (cVar1 != '\0') {
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
    }
    iVar5 = FUN_0051a690(param_1);
    if (iVar5 * 5 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      FUN_0051a720(param_1);
      pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
      FUN_00402690(&stack0xffffffd8,"Repair",6);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar5 * -5,pvVar2);
      iVar6 = -1;
      iVar5 = 8;
      pvVar2 = param_1;
      this = (void *)FUN_00402f60();
      FUN_00557fb0(this,(int)pvVar2,iVar5,iVar6);
      uVar4 = FUN_00527550(*(int **)((int)param_1 + 0x224),1,"Hull repairs complete.");
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  iVar6 = -1;
  iVar5 = 10;
  pvVar2 = (void *)FUN_00402f60();
  uVar3 = FUN_00557fb0(pvVar2,(int)param_1,iVar5,iVar6);
  return uVar3 & 0xffffff00;
}


uint __cdecl FUN_004e6d40(void *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *this;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  uint in_stack_ffffffd0;
  int iVar8;
  int iVar9;
  
  pvVar3 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,&PTR_005ce008,0);
  cVar2 = FUN_004cd750(param_1,0,pvVar3);
  if (cVar2 != '\0') {
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
    }
    iVar8 = DAT_0065c2ec;
    iVar9 = FUN_0051a960((int)param_1);
    if (iVar9 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
      if (iVar8 == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      uVar4 = 0;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x3c);
      if (*(int *)(*(int *)((int)param_1 + 0x40) + 0x40) - iVar8 >> 2 != 0) {
        do {
          iVar8 = *(int *)(iVar8 + uVar4 * 4);
          iVar7 = 0xc;
          do {
            iVar5 = *(int *)(iVar8 + 0xc);
            puVar1 = *(undefined4 **)(iVar5 + -8 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + -4 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            if (*(undefined4 **)(iVar7 + iVar5) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar7 + iVar5) = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 4 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 8 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0xc + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x10 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x14 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x18 + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
              iVar5 = *(int *)(iVar8 + 0xc);
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x1c + iVar7);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0x42c80000;
            }
            iVar7 = iVar7 + 0x28;
          } while (iVar7 < 0x5c);
          uVar4 = uVar4 + 1;
          iVar8 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x3c);
        } while (uVar4 < (uint)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x40) - iVar8 >> 2));
      }
      pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffd0,"Repair",6);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-iVar9,pvVar3);
      iVar9 = -1;
      iVar8 = 8;
      pvVar3 = param_1;
      this = (void *)FUN_00402f60();
      FUN_00557fb0(this,(int)pvVar3,iVar8,iVar9);
      uVar6 = FUN_00527550(*(int **)((int)param_1 + 0x224),1,"Hull repairs complete.");
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  iVar9 = -1;
  iVar8 = 10;
  pvVar3 = (void *)FUN_00402f60();
  uVar4 = FUN_00557fb0(pvVar3,(int)param_1,iVar8,iVar9);
  return uVar4 & 0xffffff00;
}


uint __cdecl FUN_004e6f50(void *param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  byte *pbVar7;
  uint in_stack_ffffffb0;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005beaf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)(in_stack_ffffffb0 & 0xffffff00);
  FUN_00402690(&stack0xffffffb0,&PTR_005ce008,0);
  uVar6 = 0;
  bVar1 = FUN_004cdb10((int)param_1,0,pvVar3);
  if (bVar1) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_0060a970,3);
    local_8 = 0;
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
      local_14 = DAT_0065c2ec;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar5);
    }
    if (0x4f < *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_0060a970,3);
      local_8 = 1;
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
        local_14 = DAT_0065c2ec;
      }
      local_8 = 2;
      if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x40) != 0)) {
        iVar8 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x20);
        iVar9 = *(int *)(iVar8 + 8);
        if (*(int *)(iVar9 + 4) == 8) {
          cVar2 = FUN_004ae510(iVar8);
          if (0 < (int)(*(float *)(iVar9 + 0x104) - (float)CONCAT31(extraout_var,cVar2))) {
            uVar10 = 0xffffffff;
            pbVar7 = (byte *)(uVar6 & 0xffffff00);
            FUN_00402690(&stack0xffffffac,&DAT_0060a970,3);
            iVar8 = FUN_004a8180(pbVar7);
            FUN_0050f740(param_1,iVar8,uVar10);
          }
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if (0xfff < local_18 + 1) {
          pvVar5 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar5);
      }
      pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffb0,&DAT_0060a970,3);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffffb0,pvVar3);
      iVar9 = -1;
      iVar8 = 8;
      pvVar3 = (void *)FUN_00402f60();
      uVar4 = FUN_00557fb0(pvVar3,(int)param_1,iVar8,iVar9);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  iVar9 = -1;
  iVar8 = 10;
  pvVar3 = (void *)FUN_00402f60();
  uVar6 = FUN_00557fb0(pvVar3,(int)param_1,iVar8,iVar9);
  ExceptionList = local_10;
  return uVar6 & 0xffffff00;
}


uint __cdecl FUN_004e71b0(int param_1)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  uint in_stack_ffffffdc;
  int iVar6;
  int iVar7;
  
  pvVar3 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,&PTR_005ce008,0);
  bVar2 = FUN_004cddd0(param_1,0,pvVar3);
  if (bVar2) {
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
    }
    if (0x18 < *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 8) + 0x68);
      *piVar1 = *piVar1 + 1;
      pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffdc,&DAT_0060c3d8,2);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffffe7,pvVar3);
      iVar7 = -1;
      iVar6 = 8;
      pvVar3 = (void *)FUN_00402f60();
      uVar5 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar7);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  iVar7 = -1;
  iVar6 = 10;
  pvVar3 = (void *)FUN_00402f60();
  uVar4 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar7);
  return uVar4 & 0xffffff00;
}


undefined4 __cdecl FUN_004e72a0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  Node *pNVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005beb3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (float)param_2;
  local_14 = (float)param_3;
  local_8 = 0;
  FUN_00591070(&DAT_005cdc70,"World pos = %.2f, %.2f");
  local_20 = 0;
  local_1c = 0;
  local_8._0_1_ = 1;
  cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_20);
  FUN_00591070(&DAT_005cdc70,"dist from origin = %f");
  local_8._0_1_ = 0;
  iVar6 = 0;
  puVar1 = (undefined4 *)FUN_0050c610(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    pNVar2 = FUN_00412990();
    iVar6 = FUN_004a84f0(*(int *)(param_1 + 0x20),local_18,local_14,
                         (float)(uint)(pNVar2[0x285] == (Node)0x0));
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x54) != 1) {
        local_8._0_1_ = 2;
        fVar7 = local_18;
        fVar8 = local_14;
        piVar3 = FUN_00420f40((void *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x348),
                              (int *)(param_1 + 0x20));
        local_8._0_1_ = 0;
        uVar4 = FUN_0051eeb0((void *)*piVar3,fVar7,fVar8);
        if ((char)uVar4 != '\0') {
          iVar6 = 0;
          goto LAB_004e755c;
        }
      }
      FUN_00591070(&DAT_005cdc70,"Selected stellar object.");
      *(int *)(param_1 + 0x1a4) = iVar6;
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar6 + 0x38);
      local_20 = 0xc61c3c00;
      local_1c = 0xc61c3c00;
      *(undefined4 *)(param_1 + 0x1b8) = 0xc61c3c00;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1bc) = 0xc61c3c00;
      if (*(char *)(param_1 + 0x1b0) != '\0') {
        *(undefined4 *)(param_1 + 0x194) = 0;
        *(undefined4 *)(param_1 + 400) = 0xffffffff;
        *(int *)(param_1 + 0x1ac) = iVar6;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(iVar6 + 0x38);
      }
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x19c) = puVar1;
    *(undefined4 *)(param_1 + 0x198) = *puVar1;
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      *(undefined4 **)(param_1 + 0x194) = puVar1;
      *(undefined4 *)(param_1 + 400) = *puVar1;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
    }
    local_20 = 0xc61c3c00;
    local_1c = 0xc61c3c00;
    *(undefined4 *)(param_1 + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = 0xc61c3c00;
  }
LAB_004e755c:
  uVar5 = FUN_00591070(&DAT_005cdc70,"Clicked on %f, %f");
  if ((iVar6 == 0) && (puVar1 == (undefined4 *)0x0)) {
    *(float *)(param_1 + 0x1b8) = local_18;
    *(float *)(param_1 + 0x1bc) = local_14;
    uVar5 = CONCAT31((int3)((uint)local_14 >> 8),1);
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      *(undefined4 *)(param_1 + 400) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
      ExceptionList = local_10;
      return uVar5;
    }
  }
  else {
    uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar5;
}


uint __fastcall FUN_004e7620(int param_1,int *param_2)

{
  char cVar1;
  void *pvVar2;
  void **ppvVar3;
  undefined4 *this;
  undefined4 uVar4;
  uint in_stack_ffffffc4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b93b8;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  if (param_2 != (int *)0x0) {
    ExceptionList = ppvVar3;
    if ((*(int *)(param_2[2] + 4) == 1) && (*(int *)(param_1 + 0xd4) == 3)) {
      iVar8 = -1;
      iVar6 = 10;
      iVar7 = param_1;
      pvVar2 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar2,iVar7,iVar6,iVar8);
      ppvVar3 = (void **)FUN_00527550(*(int **)(param_1 + 0x224),2,
                                      "Cannot start reactor when docked.");
    }
    else {
      ppvVar3 = (void **)(**(code **)(*param_2 + 0x14))();
      if ((char)ppvVar3 == '\0') {
        FUN_004ae9f0(param_2,param_1);
        if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
           (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
          cVar1 = (**(code **)(*param_2 + 0x10))();
          if (cVar1 != '\0') {
            pbVar5 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
            FUN_00402690(&stack0xffffffc4,"reconnected_working_module",0x1a);
            local_8 = 0;
            this = FUN_00412df0();
            local_8 = 0xffffffff;
            FUN_004a0ee0(this,pbVar5);
          }
        }
        iVar6 = -1;
        iVar7 = 8;
        pvVar2 = (void *)FUN_00402f60();
        uVar4 = FUN_00557fb0(pvVar2,param_1,iVar7,iVar6);
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  ExceptionList = local_10;
  return (uint)ppvVar3 & 0xffffff00;
}


uint __cdecl FUN_004e7740(int param_1)

{
  int *this;
  char cVar1;
  uint in_EAX;
  void *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    uVar4 = 0;
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2 != 0) {
      do {
        this = *(int **)(*(int *)(iVar3 + 0x3c) + uVar4 * 4);
        if (*(int *)(this[2] + 4) == 1) {
          if (*(char *)((int)this + 99) == '\0') {
            FUN_004e7620(param_1,this);
          }
          else if ((this != (int *)0x0) && (cVar1 = (**(code **)(*this + 0x14))(), cVar1 == '\0')) {
            FUN_004ae7b0(this,param_1);
            iVar6 = -1;
            iVar5 = 9;
            iVar3 = param_1;
            this_00 = (void *)FUN_00402f60();
            FUN_00557fb0(this_00,iVar3,iVar5,iVar6);
          }
        }
        iVar3 = *(int *)(param_1 + 0x40);
        uVar4 = uVar4 + 1;
        uVar2 = *(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2;
      } while (uVar4 < uVar2);
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e77d0(int param_1)

{
  int *this;
  char cVar1;
  uint in_EAX;
  void *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    uVar4 = 0;
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2 != 0) {
      do {
        this = *(int **)(*(int *)(iVar3 + 0x3c) + uVar4 * 4);
        if (((*(int *)(this[2] + 4) == 1) && (this != (int *)0x0)) &&
           (cVar1 = (**(code **)(*this + 0x14))(), cVar1 == '\0')) {
          FUN_004ae7b0(this,param_1);
          iVar6 = -1;
          iVar5 = 9;
          iVar3 = param_1;
          this_00 = (void *)FUN_00402f60();
          FUN_00557fb0(this_00,iVar3,iVar5,iVar6);
        }
        iVar3 = *(int *)(param_1 + 0x40);
        uVar4 = uVar4 + 1;
        uVar2 = *(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2;
      } while (uVar4 < uVar2);
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e7850(int param_1)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  uVar4 = 0;
  uVar2 = 0;
  if (*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar3 + 0x3c) + uVar4 * 4);
      if (*(int *)(piVar1[2] + 4) == 1) {
        FUN_004e7620(param_1,piVar1);
        iVar3 = *(int *)(param_1 + 0x40);
      }
      uVar4 = uVar4 + 1;
      uVar2 = *(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2;
    } while (uVar4 < uVar2);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


uint __cdecl FUN_004e78a0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),7,'\0');
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


undefined4 __cdecl FUN_004e7900(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x24);
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


void __cdecl FUN_004e7950(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),7,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7970(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),9,'\0');
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


undefined4 __cdecl FUN_004e79d0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x18);
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


void __cdecl FUN_004e7a20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),9,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7a40(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),0xb,'\0');
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


undefined4 __cdecl FUN_004e7aa0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x10);
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


void __cdecl FUN_004e7af0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),0xb,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7b10(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),0xe,'\0');
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


undefined4 __cdecl FUN_004e7b70(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x1c);
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


void __cdecl FUN_004e7bc0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),0xe,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7be0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),8,'\0');
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


undefined4 __cdecl FUN_004e7c40(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x20);
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


void __cdecl FUN_004e7c90(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),8,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7cb0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),10,'\0');
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


undefined4 __cdecl FUN_004e7d10(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  this = *(int **)(uVar1 + 0x14);
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


void __cdecl FUN_004e7d60(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005224c0(*(void **)(param_1 + 0x40),10,'\0');
  FUN_004e7620(param_1,piVar1);
  return;
}


uint __cdecl FUN_004e7d80(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),0);
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


undefined4 __cdecl FUN_004e7de0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),0);
  uVar1 = 0;
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


undefined4 __cdecl FUN_004e7e30(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_004e7620(param_1,piVar1);
  return uVar2;
}


uint __cdecl FUN_004e7e60(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),1);
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


undefined4 __cdecl FUN_004e7ec0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),1);
  uVar1 = 0;
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


undefined4 __cdecl FUN_004e7f10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_004e7620(param_1,piVar1);
  return uVar2;
}


uint __cdecl FUN_004e7f40(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),2);
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


undefined4 __cdecl FUN_004e7fa0(int param_1)

{
  int *this;
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),2);
  uVar1 = 0;
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


undefined4 __cdecl FUN_004e7ff0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_005227f0(*(void **)(param_1 + 0x40),2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_004e7620(param_1,piVar1);
  return uVar2;
}
