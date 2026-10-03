#include "../ois_server.exe.h"


void __thiscall FUN_00494810(void *this,undefined1 *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba539;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x10c) == 1) {
    iVar4 = *(int *)((int)this + 0x110);
    if (iVar4 == -1) {
      FUN_00403640(param_1,"`%Select a hull segment on the left to repair specific subsections.\n",
                   0x44);
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      FUN_0051a690(*(void **)(DAT_0065b5cc + 0xd0));
      FUN_0050bf30(*(void **)(DAT_0065b5cc + 0xd0));
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Damage : `^%d%%\n");
      local_8 = 5;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar5,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_004949e5;
        FUN_005adb3f(pvVar7);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost   : `$%dc\n");
      local_8 = 6;
      uVar1 = puVar5[5];
    }
    else {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
        iVar4 = *(int *)((int)this + 0x110);
      }
      FUN_0051a630(*(void **)(DAT_0065b5cc + 0xd0),iVar4);
      FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),*(int *)((int)this + 0x110));
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Segment: `%%%s\n");
      local_8 = 1;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar5,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
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
      iVar4 = FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),*(int *)((int)this + 0x110));
      if (iVar4 < 100) {
        iVar4 = *(int *)((int)this + 0x110);
        pvVar7 = *(void **)(DAT_0065b5cc + 0xd0);
        iVar6 = FUN_0050bff0(pvVar7,iVar4);
        if ((iVar6 < 100) && (iVar4 = FUN_0050bff0(pvVar7,iVar4), 0 < iVar4)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          FUN_00403640(param_1,"`7Damage : `8none\n",0x12);
          FUN_00403640(param_1,"`7Cost   : `8n/a\n",0x11);
          goto LAB_00494bc1;
        }
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Damage : `^%d%%\n");
        local_8 = 3;
        puVar5 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar5 = (undefined4 *)*puVar3;
        }
        FUN_00403640(param_1,puVar5,puVar3[4]);
        local_8 = local_8 & 0xffffff00;
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
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost   : `$%dc\n");
        local_8 = 4;
        uVar1 = puVar5[5];
      }
      else {
        FUN_00403640(param_1,"`7Damage : `@TOTAL\n",0x13);
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost   : `$%d\n");
        local_8 = 2;
        uVar1 = puVar5[5];
      }
    }
    puVar3 = puVar5;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_00403640(param_1,puVar3,puVar5[4]);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
LAB_004949e5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
LAB_00494bc1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __thiscall FUN_00494bf0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  byte *in_stack_ffffffd4;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0x10c) == 4)) {
    if (param_2 == -1) {
      in_EAX = *(uint *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
      if (*(int **)(in_EAX + 8) != (int *)0x0) {
        in_EAX = (**(code **)(**(int **)(in_EAX + 8) + 0x18))();
        if (((char)in_EAX == '\0') &&
           (iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8),
           in_EAX = *(uint *)(iVar1 + 8), (float)*(int *)(iVar1 + 0x68) < *(float *)(in_EAX + 0x104)
           )) {
          FUN_0049b6c0();
          in_EAX = *(uint *)(DAT_0065b5cc + 0x124);
          if (0x18 < *(int *)(in_EAX + 0x1c)) {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
      }
    }
    else if (*(int *)((int)this + 0xf4) != -1) {
      in_EAX = *(uint *)(param_1 + 0x40);
      if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
        in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))();
        if (((char)in_EAX != '\0') &&
           (in_EAX = *(uint *)(*(int *)(param_1 + 0x40) + 0x20),
           *(int *)(in_EAX + 0x3c + *(int *)((int)this + 0xf4) * 4) == 0)) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffffd4,(&PTR_DAT_005dd9f4)[param_2]);
          in_EAX = FUN_004a8180(in_stack_ffffffd4);
          if ((in_EAX != 0) &&
             (*(int *)(in_EAX + 0x1a0) <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


uint __thiscall FUN_00494d00(void *this,int param_1)

{
  uint in_EAX;
  
  if (((param_1 != 0) && (*(int *)((int)this + 0x10c) == 4)) && (*(int *)((int)this + 0xf4) != -1))
  {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))(0);
      if (((char)in_EAX != '\0') &&
         (in_EAX = *(uint *)(*(int *)(param_1 + 0x40) + 0x20),
         *(int *)(in_EAX + 0x3c + *(int *)((int)this + 0xf4) * 4) != 0)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __fastcall FUN_00494d60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  void *in_stack_ffffffd0;
  
  puVar1 = *(undefined4 **)
            (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) + 0x3c +
            *(int *)(param_1 + 0xf4) * 4);
  FUN_004024e0(&stack0xffffffd0,(undefined4 *)puVar1[0xe2]);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,*(int *)(puVar1[0xe2] + 0x1a0) / 2,
               in_stack_ffffffd0);
  FUN_0050f370(*(void **)(DAT_0065b5cc + 0xd0),(int)puVar1);
  FUN_00494e20(puVar1);
  FUN_005adb3f(puVar1);
  FUN_00591070("WORLD","Sold weapon from tube %d");
  iVar2 = *(int *)(DAT_0065b5cc + 0xcc);
  if (*(int *)(iVar2 + 0x70) == 2) {
    FUN_004127d0();
    iVar2 = FUN_004b8550();
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


void __fastcall FUN_00494e20(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0x105]) {
    pvVar1 = (void *)param_1[0x100];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x105] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00494f87;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0xf;
  *(undefined1 *)(param_1 + 0x100) = 0;
  pvVar1 = (void *)param_1[0xfc];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0xfe] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00494f87;
    FUN_005adb3f(pvVar2);
    param_1[0xfc] = 0;
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
  }
  pvVar1 = (void *)param_1[0xf9];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0xfb] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00494f87;
    FUN_005adb3f(pvVar2);
    param_1[0xf9] = 0;
    param_1[0xfa] = 0;
    param_1[0xfb] = 0;
  }
  if (0xf < (uint)param_1[0xed]) {
    pvVar1 = (void *)param_1[0xe8];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xed] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00494f87:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0xf;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_0050a400(param_1);
  return;
}


void __thiscall FUN_00494f90(void *this,undefined1 *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  void **in_stack_ffffff9c;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba5b1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x10c) == 4) {
    if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8) == 0) {
      FUN_00403640(param_1,"`7No countermeasure system installed.",0x25);
    }
    else {
      in_stack_ffffff9c = local_2c;
      puVar4 = (undefined4 *)
               FUN_00591e00((undefined1 *)in_stack_ffffff9c,"`7Countermeasures: `%c%d`2/`!%.0f\n");
      local_8 = 1;
      puVar6 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar6 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar6,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
LAB_00495092:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
    }
    FUN_00403640(param_1,&DAT_005e75f8,1);
    bVar2 = false;
    if ((*(int *)((int)this + 0xf4) == -1) ||
       (iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20), iVar8 == 0)) {
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
      if (piVar1 == (int *)0x0) {
        uVar11 = 0x2a;
        pcVar10 = "`@Probe Launcher / Weapon System required.";
      }
      else {
        cVar3 = (**(code **)(*piVar1 + 0x10))();
        if (cVar3 == '\0') {
          pcVar10 = "`$Weapon System damaged. Must be functional.";
          uVar11 = 0x2c;
        }
        else {
          pcVar10 = "`8[Select tube for armament options]\n\n";
          uVar11 = 0x26;
        }
      }
      FUN_00403640(param_1,pcVar10,uVar11);
    }
    else if (*(int *)(iVar8 + 0x3c + *(int *)((int)this + 0xf4) * 4) == 0) {
      FUN_00403640(param_1,"`%Tube:`0 empty.\n\n",0x12);
      iVar8 = 0;
      do {
        if (iVar8 == 4) {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`9CM  : `$%dc\n");
          local_8 = 2;
          puVar6 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar6 = (undefined4 *)*puVar4;
          }
          FUN_00403640(param_1,puVar6,puVar4[4]);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_18) {
            pvVar7 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar7 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00495092;
            FUN_005adb3f(pvVar7);
          }
          bVar2 = true;
        }
        else {
          pcVar10 = (&PTR_DAT_005dd9f4)[iVar8];
          pbVar9 = (byte *)((uint)in_stack_ffffff9c & 0xffffff00);
          pcVar5 = pcVar10;
          do {
            cVar3 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
          FUN_00402690(&stack0xffffff9c,pcVar10,(int)pcVar5 - (int)(pcVar10 + 1));
          FUN_004a8180(pbVar9);
          in_stack_ffffff9c = (void **)0x4951ee;
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%c%s: `$%dc\n");
          local_8 = 3;
          puVar6 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar6 = (undefined4 *)*puVar4;
          }
          FUN_00403640(param_1,puVar6,puVar4[4]);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_18) {
            pvVar7 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar7 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00495092;
            FUN_005adb3f(pvVar7);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      if (bVar2) goto LAB_00495487;
    }
    else {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Tube :`%c %s\n");
      local_8 = 4;
      puVar6 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar6 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar6,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Type : `7%s %s\n");
      local_8 = 5;
      puVar6 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar6 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar6,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Value: `$%dc\n\n");
      local_8 = 6;
      puVar6 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar6 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar6,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
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
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"\n`9CM  : `$%dc\n");
    local_8 = 7;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
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
LAB_00495487:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __fastcall FUN_004954b0(int param_1)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_stack_ffffffd0;
  void *pvVar5;
  
  if (*(int *)(param_1 + 0x10c) == 1) {
    iVar2 = *(int *)(param_1 + 0x110);
    piVar1 = (int *)(param_1 + 0x110);
    if (iVar2 == -1) {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a690(*(void **)(DAT_0065b5cc + 0xd0));
      in_EAX = *(uint *)(DAT_0065b5cc + 0x124);
      if (iVar2 * 5 <= *(int *)(in_EAX + 0x1c)) {
        if (DAT_0065c2ec == 0) {
          DAT_0065c2ec = FUN_005adb0f(1);
        }
        FUN_0051a720(*(void **)(DAT_0065b5cc + 0xd0));
        FUN_00511350(*(int *)(DAT_0065b5cc + 0xd0));
        pvVar5 = (void *)(in_stack_ffffffd0 & 0xffffff00);
        FUN_00402690(&stack0xffffffd0,"Repair",6);
        uVar3 = FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar2 * -5,pvVar5);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    else {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
        iVar2 = *piVar1;
      }
      in_EAX = FUN_0051a630(*(void **)(DAT_0065b5cc + 0xd0),iVar2);
      if ((in_EAX != 0) && ((int)in_EAX <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
        pvVar5 = (void *)(in_stack_ffffffd0 & 0xffffff00);
        FUN_00402690(&stack0xffffffd0,"Repair",6);
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-in_EAX,pvVar5);
        piVar4 = FUN_00420f40((void *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x14c),piVar1);
        iVar2 = DAT_0065b5cc;
        *piVar4 = 0;
        uVar3 = FUN_00511350(*(int *)(iVar2 + 0xd0));
        *piVar1 = -1;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __fastcall FUN_00495670(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  uint in_stack_ffffffd0;
  void *pvVar5;
  
  if ((*(int *)(param_1 + 0x10c) == 2) && (iVar3 = *(int *)(param_1 + 0x114), iVar3 != -1)) {
    in_EAX = *(uint *)(DAT_0065b5cc + 0xd0);
    if (*(int *)((int)*(void **)(in_EAX + 0x1f8) + iVar3 * 4 + 0xc) != 0) {
      uVar2 = FUN_00507060(*(void **)(in_EAX + 0x1f8),iVar3);
      pvVar5 = (void *)(in_stack_ffffffd0 & 0xffffff00);
      FUN_00402690(&stack0xffffffd0,&DAT_0060c504,3);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,uVar2,pvVar5);
      iVar3 = *(int *)(param_1 + 0x114);
      iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
      iVar4 = DAT_0065b5cc;
      if ((-1 < iVar3) &&
         (((*(int *)(iVar1 + 8) < 1 || (iVar3 < *(int *)(iVar1 + 8))) &&
          (pvVar5 = *(void **)(iVar1 + 0xc + iVar3 * 4), pvVar5 != (void *)0x0)))) {
        FUN_005adb3f(pvVar5);
        iVar4 = DAT_0065b5cc;
        *(undefined4 *)(iVar1 + 0xc + iVar3 * 4) = 0;
      }
      iVar3 = *(int *)(iVar4 + 0xcc);
      if (*(int *)(iVar3 + 0x70) == 2) {
        FUN_004127d0();
        iVar3 = FUN_004b8550();
      }
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __fastcall FUN_00495760(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void **ppvVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar9;
  uint in_stack_ffffff80;
  void *pvVar10;
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  void *in_stack_ffffffb4;
  undefined4 local_24;
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba5f8;
  local_10 = ExceptionList;
  ppvVar7 = &local_10;
  if (*(int *)(param_1 + 0x118) != -1) {
    ExceptionList = ppvVar7;
    local_18 = param_1;
    if (*(char *)(param_1 + 0x109) == '\0') {
      ppvVar7 = (void **)FUN_00492650(param_1);
      if ((char)ppvVar7 != '\0') {
        iVar4 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
        piVar1 = *(int **)(*(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x118) * 4);
        local_1c = piVar1;
        FUN_00521d10(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),(undefined1 *)*piVar1,-1);
        FUN_004024e0(&stack0xffffffb4,(undefined4 *)(*(int *)(*piVar1 + 8) + 8));
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-piVar1[1],in_stack_ffffffb4);
        piVar2 = *(int **)(iVar4 + 0x5c);
        puVar8 = FUN_00414000(&local_24,(int *)&local_1c,*(int **)(iVar4 + 0x58),piVar2);
        FUN_00412ba0((void *)(iVar4 + 0x58),&local_20,(void *)*puVar8,piVar2);
        *piVar1 = 0;
        FUN_005adb3f(piVar1);
        local_20 = (undefined4 *)&stack0xffffffb4;
        in_stack_ffffffb4 = (void *)((uint)in_stack_ffffffb4 & 0xffffff00);
        FUN_00402690(&stack0xffffffb4,"modules_purchased",0x11);
        local_8 = 0;
        FUN_00412770();
        local_8 = 0xffffffff;
        FUN_0051e750(extraout_ECX_01,in_stack_ffffffb4);
        local_20 = (undefined4 *)&stack0xffffffb0;
        uStack_5c = 0x495a28;
        FUN_00402690(&stack0xffffffb0,&PTR_005ce008,0);
        local_1c = (int *)local_68;
        local_8 = 1;
        local_68[0] = 0;
        FUN_00402690(local_68,"modules_purchased",0x11);
        local_8 = CONCAT31(local_8._1_3_,2);
        pvVar10 = (void *)(in_stack_ffffff80 & 0xffffff00);
        FUN_00402690(&stack0xffffff80,"commerce",8);
        local_8 = 0xffffffff;
        FUN_00401a50(pvVar10);
        goto LAB_00495a86;
      }
    }
    else if (*(int *)(param_1 + 0x10c) == 3) {
      pvVar10 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
      puVar8 = *(undefined4 **)(*(int *)((int)pvVar10 + 0x3c) + *(int *)(param_1 + 0x118) * 4);
      local_1c = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      local_14 = puVar8;
      FUN_00522090(pvVar10,(undefined1 *)puVar8);
      FUN_004024e0(&stack0xffffffb4,(undefined4 *)(puVar8[2] + 8));
      iVar4 = FUN_004ae3d0((int)puVar8);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar4 / 2,in_stack_ffffffb4);
      FUN_004ae4d0((int)puVar8);
      iVar4 = 0x14;
      puVar3 = (undefined4 *)puVar8[3];
      do {
        puVar9 = puVar3 + 1;
        if ((void *)*puVar9 != (void *)0x0) {
          FUN_005adb3f((void *)*puVar9);
          *puVar9 = 0;
        }
        if ((void *)puVar3[0x15] != (void *)0x0) {
          FUN_005adb3f((void *)puVar3[0x15]);
          puVar3[0x15] = 0;
        }
        iVar4 = iVar4 + -1;
        puVar3 = puVar9;
      } while (iVar4 != 0);
      iVar4 = *(int *)(puVar8[2] + 0x124);
      iVar6 = *(int *)(puVar8[2] + 0x120);
      iVar5 = rand();
      puVar3 = local_14;
      puVar8 = *(undefined4 **)(*(int *)(puVar8[2] + 0x120) + (iVar5 % (iVar4 - iVar6 >> 2)) * 4);
      FUN_00437260((void *)local_14[3],(int)puVar8);
      iVar4 = FUN_004ae3d0((int)puVar3);
      iVar6 = rand();
      local_20 = (undefined4 *)FUN_005adb0f(0xc);
      local_20[2] = *puVar8;
      *local_20 = local_14;
      local_20[1] = (int)((((float)(iVar6 % 100) / 100.0) * 0.5 + 0.75) * (float)iVar4);
      puVar8 = (undefined4 *)local_1c[0x17];
      local_14 = local_20;
      if ((undefined4 *)local_1c[0x18] == puVar8) {
        FUN_00414080(local_1c + 0x16,puVar8,&local_14);
      }
      else {
        *puVar8 = local_20;
        local_1c[0x17] = local_1c[0x17] + 4;
      }
LAB_00495a86:
      *(undefined4 *)(local_18 + 0x118) = 0xffffffff;
      iVar4 = *(int *)(DAT_0065b5cc + 0xcc);
      if (*(int *)(iVar4 + 0x70) == 2) {
        FUN_004127d0();
        iVar4 = FUN_004b8550();
      }
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return (uint)ppvVar7 & 0xffffff00;
}


uint __thiscall FUN_00495ad0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  uint in_stack_ffffffd0;
  void *pvVar7;
  
  uVar4 = FUN_004925e0(this,param_1);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  pcVar2 = (&PTR_DAT_005dd8c4)[param_1];
  pvVar7 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffffd0,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-*(int *)(&DAT_005df604 + param_1 * 4),
               pvVar7);
  iVar5 = *(int *)((int)this + 0x114);
  pvVar7 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if ((iVar5 < 0) ||
     (((0 < *(int *)((int)pvVar7 + 8) && (*(int *)((int)pvVar7 + 8) <= iVar5)) ||
      (*(int *)((int)pvVar7 + iVar5 * 4 + 0xc) == 0)))) {
    FUN_005070d0(pvVar7,iVar5);
  }
  iVar3 = DAT_0065b5cc;
  if ((param_1 != 0) && (param_1 - 1U < 3)) {
    *(undefined1 *)(param_1 + *(int *)((int)pvVar7 + iVar5 * 4 + 0xc)) = 1;
  }
  iVar5 = *(int *)(iVar3 + 0xcc);
  if (*(int *)(iVar5 + 0x70) == 2) {
    FUN_004127d0();
    iVar5 = FUN_004b8550();
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}


void FUN_00495bc0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint in_stack_fffffec8;
  void *pvVar3;
  undefined1 local_11c [12];
  undefined4 uStack_110;
  Color3B local_e7 [3];
  undefined1 *local_e4;
  undefined1 *local_e0;
  Color3B local_db [3];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba66f;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_110 = 0x495c0b;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e0 = local_11c;
  local_11c[0] = 0;
  FUN_00402690(local_11c,"Repairs",7);
  local_8 = 0;
  pvVar3 = (void *)(in_stack_fffffec8 & 0xffffff00);
  FUN_00402690(&stack0xfffffec8,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar2 = FUN_0043b590(local_78,1,pvVar3);
  local_8 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
    FUN_0043ce10(param_1,puVar1,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX,puVar1,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  local_8 = 0xffffffff;
  FUN_0043bfa0((int)local_78);
  uStack_110 = 0x495cc8;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = 0;
  FUN_00402690(local_11c,&DAT_0060c4c4,4);
  local_8 = 2;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffec8,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar2 = FUN_0043b590(local_78,2,pvVar3);
  local_8 = 3;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
    FUN_0043ce10(param_1,puVar1,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX_00,puVar1,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  local_8 = 0xffffffff;
  FUN_0043bfa0((int)local_78);
  uStack_110 = 0x495d85;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = 0;
  FUN_00402690(local_11c,"Modules",7);
  local_8 = 4;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffec8,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar2 = FUN_0043b590(local_78,3,pvVar3);
  local_8 = 5;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
    FUN_0043ce10(param_1,puVar1,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX_01,puVar1,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  local_8 = 0xffffffff;
  FUN_0043bfa0((int)local_78);
  uStack_110 = 0x495e42;
  cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = 0;
  FUN_00402690(local_11c,"Armaments",9);
  local_8 = 6;
  pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
  FUN_00402690(&stack0xfffffec8,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar2 = FUN_0043b590(local_d8,4,pvVar3);
  local_8 = 7;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
    FUN_0043ce10(param_1,puVar1,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX_02,puVar1,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  FUN_0043bfa0((int)local_d8);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00495f10(void *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 extraout_ECX;
  uint uVar10;
  code *pcVar11;
  void *in_stack_fffffef0;
  char acStack_f4 [20];
  undefined4 uStack_e0;
  char *pcVar12;
  uint uVar13;
  Color3B local_b9 [3];
  Color3B local_b6 [6];
  char *local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005ba6c6;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar10 = 0;
  iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
  iVar7 = *(int *)(iVar4 + 0x11c) - *(int *)(iVar4 + 0x118);
  iVar4 = iVar7 >> 0x1f;
  pcVar11 = Color3B_exref;
  if (iVar7 / 0xc + iVar4 != iVar4) {
    do {
      uStack_e0 = 0x495f8e;
      (*pcVar11)();
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      uStack_7 = 0;
      pcVar12 = (&PTR_DAT_005dd9cc)[uVar10];
      local_b0 = pcVar12 + 1;
      pcVar3 = pcVar12;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00403640(local_30,pcVar12,(int)pcVar3 - (int)local_b0);
      FUN_00403640(local_30,&DAT_005e75f8,1);
      iVar4 = FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),uVar10);
      if (iVar4 < 100) {
        pvVar9 = *(void **)(DAT_0065b5cc + 0xd0);
        iVar4 = FUN_0050bff0(pvVar9,uVar10);
        if ((99 < iVar4) ||
           (iVar4 = FUN_0050bff0(pvVar9,uVar10), pcVar11 = Color3B_exref, iVar4 < 1)) {
          pcVar11 = Color3B_exref;
          uStack_e0 = 0x4960f5;
          puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_b9,' ','@',' ');
          uVar13 = 0xc;
          pcVar12 = "`0undamaged\n";
          goto LAB_004960fc;
        }
        uStack_e0 = 0x496056;
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_b6,'@','@',' ');
        local_ac = *puVar5;
        local_aa = *(undefined1 *)(puVar5 + 1);
        FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),uVar10);
        uStack_e0 = 0x49608a;
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7damage: `$%d%%\n");
        local_8 = 1;
        puVar8 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar8 = (undefined4 *)*puVar6;
        }
        FUN_00403640(local_30,puVar8,puVar6[4]);
        local_8 = 0;
        uVar2 = local_8;
        local_8 = 0;
        if (0xf < local_34) {
          pvVar9 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar9 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9)))) goto LAB_0049624b;
          FUN_005adb3f(pvVar9);
        }
      }
      else {
        uStack_e0 = 0x49600a;
        puVar5 = (undefined2 *)(*pcVar11)();
        uVar13 = 0x12;
        pcVar12 = "`@-- destroyed --\n";
LAB_004960fc:
        local_ac = *puVar5;
        local_aa = *(undefined1 *)(puVar5 + 1);
        FUN_00403640(local_30,pcVar12,uVar13);
      }
      local_b0 = acStack_f4;
      FUN_004024e0(acStack_f4,local_30);
      local_8 = 2;
      in_stack_fffffef0 = (void *)((uint)in_stack_fffffef0 & 0xffffff00);
      FUN_00402690(&stack0xfffffef0,&PTR_005ce008,0);
      local_8 = 0;
      puVar6 = FUN_0043b590(local_a8,uVar10,in_stack_fffffef0);
      _local_8 = CONCAT31(uStack_7,3);
      puVar8 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar8) {
        FUN_0043ce10(param_1,puVar8,puVar6);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar8,puVar6);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_a8);
      local_8 = 0xff;
      uStack_7 = 0xffffff;
      if (0xf < local_1c) {
        pvVar9 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar9 = *(void **)((int)local_30[0] + -4), uVar2 = local_8,
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9)))) {
LAB_0049624b:
          local_8 = uVar2;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      uVar10 = uVar10 + 1;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
    } while (uVar10 < (uint)((*(int *)(iVar4 + 0x11c) - *(int *)(iVar4 + 0x118)) / 0xc));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00496260(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  byte ****ppppbVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint *puVar11;
  byte ****ppppbVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  Color3B local_61 [3];
  Color3B local_5e [3];
  Color3B local_5b [3];
  char *local_58;
  int local_54;
  int *local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [5];
  uint local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005ba700;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
  iVar8 = *(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118);
  iVar2 = iVar8 >> 0x1f;
  iVar8 = iVar8 / 0xc + iVar2;
  if (((param_1[1] - *param_1) / 0x60 == iVar8 - iVar2) && (uVar14 = 0, iVar8 != iVar2)) {
    local_54 = 0;
    do {
      iVar2 = local_54;
      cocos2d::Color3B::Color3B((Color3B *)&local_4c,' ',' ',' ');
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      pcVar15 = (&PTR_DAT_005dd9cc)[uVar14];
      local_58 = pcVar15 + 1;
      pcVar4 = pcVar15;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00403640(local_30,pcVar15,(int)pcVar4 - (int)local_58);
      FUN_00403640(local_30,&DAT_005e75f8,1);
      iVar8 = FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),uVar14);
      if (iVar8 < 100) {
        pvVar10 = *(void **)(DAT_0065b5cc + 0xd0);
        iVar8 = FUN_0050bff0(pvVar10,uVar14);
        if ((99 < iVar8) || (iVar8 = FUN_0050bff0(pvVar10,uVar14), iVar8 < 1)) {
          puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_61,' ','@',' ');
          uVar16 = 0xc;
          pcVar15 = "`0undamaged\n";
          goto LAB_0049644c;
        }
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_5e,'@','@',' ');
        local_4c = *puVar5;
        local_4a = *(undefined1 *)(puVar5 + 1);
        FUN_0050bff0(*(void **)(DAT_0065b5cc + 0xd0),uVar14);
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7damage: `$%d%%\n");
        local_8._0_1_ = 1;
        puVar9 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar9 = (undefined4 *)*puVar6;
        }
        FUN_00403640(local_30,puVar9,puVar6[4]);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_34) {
          pvVar10 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar10 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_004965d7;
          FUN_005adb3f(pvVar10);
        }
      }
      else {
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_5b,'@',' ',' ');
        uVar16 = 0x12;
        pcVar15 = "`@-- destroyed --\n";
LAB_0049644c:
        local_4c = *puVar5;
        local_4a = *(undefined1 *)(puVar5 + 1);
        FUN_00403640(local_30,pcVar15,uVar16);
      }
      puVar13 = (uint *)(*local_50 + iVar2);
      ppppbVar12 = (byte ****)local_30[0];
      if (*puVar13 != uVar14) {
LAB_004965b2:
        if (0xf < local_1c) {
          ppppbVar7 = ppppbVar12;
          if ((0xfff < local_1c + 1) &&
             (ppppbVar7 = (byte ****)ppppbVar12[-1],
             (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)ppppbVar7)))) {
LAB_004965d7:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar7);
        }
        break;
      }
      puVar11 = puVar13 + 1;
      if (0xf < puVar13[6]) {
        puVar11 = (uint *)puVar13[1];
      }
      uVar16 = FUN_004031f0((byte *)puVar11,puVar13[5],(byte *)&PTR_005ce008,0);
      ppppbVar12 = (byte ****)local_30[0];
      if (((char)uVar16 == '\0') || (puVar13[7] != 0xffffffff)) goto LAB_004965b2;
      puVar11 = puVar13 + 8;
      ppppbVar7 = local_30;
      if (0xf < local_1c) {
        ppppbVar7 = (byte ****)local_30[0];
      }
      if (0xf < puVar13[0xd]) {
        puVar11 = (uint *)puVar13[8];
      }
      uVar16 = FUN_004031f0((byte *)puVar11,puVar13[0xc],(byte *)ppppbVar7,local_20);
      if (((((char)uVar16 == '\0') ||
           (bVar3 = cocos2d::Color3B::operator!=((Color3B *)(puVar13 + 0x16),(Color3B *)&local_4c),
           iVar2 = local_54, ppppbVar12 = (byte ****)local_30[0], bVar3)) ||
          (*(int *)(*local_50 + 0x50 + local_54) != -999)) ||
         (*(char *)(*local_50 + 0x5e + local_54) != '\0')) goto LAB_004965b2;
      local_8 = -1;
      if (0xf < local_1c) {
        if ((0xfff < local_1c + 1) &&
           (ppppbVar12 = (byte ****)local_30[0][-1],
           (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar12)))) goto LAB_004965d7;
        FUN_005adb3f(ppppbVar12);
      }
      uVar14 = uVar14 + 1;
      local_20 = 0;
      local_54 = iVar2 + 0x60;
      local_1c = 0xf;
      local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
      iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
    } while (uVar14 < (uint)((*(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118)) / 0xc));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004965f0(void *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 extraout_ECX_00;
  undefined1 *puVar8;
  int iVar9;
  void *in_stack_fffffe88;
  undefined1 auStack_15c [12];
  undefined4 uStack_150;
  char *pcVar10;
  uint uVar11;
  Color3B local_127 [3];
  Color3B local_124 [3];
  Color3B local_121 [3];
  Color3B local_11e [3];
  Color3B local_11b [3];
  undefined1 *local_118;
  int local_114;
  undefined1 *local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005ba774;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = 0;
  piVar4 = (int *)(DAT_0065b5cc + 0xd0);
  if (*(int *)(*(int *)(*piVar4 + 0x254) + 0xe4) < 1) {
LAB_004969ed:
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00496650:
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  if (*(int *)(*(int *)(*piVar4 + 0x1f8) + 0xc + iVar9 * 4) != 0) {
    cocos2d::Color3B::Color3B((Color3B *)&local_10c,'@','@','@');
    local_114 = iVar9 + 1;
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7Pod : `%%%d\n`7Cat.: `%%");
    local_8._0_1_ = 4;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(local_30,puVar5,puVar2[4]);
    local_8._0_1_ = 0;
    if (0xf < local_34) {
      pvVar6 = local_48[0];
      if ((0xfff < local_34 + 1) &&
         (pvVar6 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
         0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_00496a0b;
      FUN_005adb3f(pvVar6);
    }
    iVar7 = 1;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_110 = *(undefined1 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    do {
      if (*(char *)(*(int *)(local_110 + iVar9 * 4 + 0xc) + iVar7) == '\0') {
        iVar7 = 1;
        goto LAB_00496870;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_11e,'@',0x80,'@');
    uVar11 = 0xe;
    pcVar10 = "fully upgraded";
    goto LAB_004968de;
  }
  local_114 = iVar9 + 1;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7Pod : `%%%d\n`8- none -");
  local_8._0_1_ = 1;
  puVar5 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar5 = (undefined4 *)*puVar2;
  }
  FUN_00403640(local_30,puVar5,puVar2[4]);
  local_8._0_1_ = 0;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_34) {
    pvVar6 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar6 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_00496a0b;
    FUN_005adb3f(pvVar6);
  }
  uStack_150 = 0x4966fe;
  cocos2d::Color3B::Color3B(local_11b,'\0','\0','\0');
  local_110 = auStack_15c;
  FUN_004024e0(auStack_15c,local_30);
  local_8._0_1_ = 2;
  in_stack_fffffe88 = (void *)((uint)in_stack_fffffe88 & 0xffffff00);
  FUN_00402690(&stack0xfffffe88,&PTR_005ce008,0);
  local_8._0_1_ = 0;
  puVar2 = FUN_0043b590(local_a8,iVar9,in_stack_fffffe88);
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar5 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
    FUN_0043ce10(param_1,puVar5,puVar2);
    puVar8 = local_a8;
  }
  else {
    FUN_0043cd30(extraout_ECX,puVar5,puVar2);
    puVar8 = local_a8;
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  goto LAB_0049698b;
  while (iVar7 = iVar7 + 1, iVar7 < 3) {
LAB_00496870:
    if (*(char *)(*(int *)(local_110 + iVar9 * 4 + 0xc) + iVar7) != '\0') {
      if (*(char *)(*(int *)(local_110 + iVar9 * 4 + 0xc) + 1) == '\0') {
        if (*(char *)(*(int *)(local_110 + iVar9 * 4 + 0xc) + 2) == '\0') goto LAB_004968f9;
        puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_127,0x80,'@',0x80);
        uVar11 = 0x12;
        pcVar10 = "radiation shielded";
      }
      else {
        puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_124,0x80,'@','@');
        uVar11 = 0x16;
        pcVar10 = "temperature controlled";
      }
      goto LAB_004968de;
    }
  }
  puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_121,'@','@','@');
  uVar11 = 0xb;
  pcVar10 = "no upgrades";
LAB_004968de:
  local_10c = *puVar3;
  local_10a = *(undefined1 *)(puVar3 + 1);
  FUN_00403640(local_30,pcVar10,uVar11);
LAB_004968f9:
  local_118 = auStack_15c;
  FUN_004024e0(auStack_15c,local_30);
  local_8._0_1_ = 5;
  in_stack_fffffe88 = (void *)((uint)in_stack_fffffe88 & 0xffffff00);
  FUN_00402690(&stack0xfffffe88,&PTR_005ce008,0);
  local_8._0_1_ = 0;
  puVar2 = FUN_0043b590(local_108,iVar9,in_stack_fffffe88);
  local_8 = CONCAT31(local_8._1_3_,6);
  puVar5 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
    FUN_0043ce10(param_1,puVar5,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX_00,puVar5,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  puVar8 = local_108;
LAB_0049698b:
  FUN_0043bfa0((int)puVar8);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_1c) {
    pvVar6 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar6 = *(void **)((int)local_30[0] + -4), uVar1 = (undefined1)local_8,
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
LAB_00496a0b:
      local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  piVar4 = (int *)(DAT_0065b5cc + 0xd0);
  iVar9 = local_114;
  if (*(int *)(*(int *)(*piVar4 + 0x254) + 0xe4) <= local_114) goto LAB_004969ed;
  goto LAB_00496650;
}


void FUN_00496a20(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  byte ****ppppbVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  byte ****ppppbVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  Color3B local_67 [3];
  Color3B local_64 [3];
  Color3B local_61 [3];
  Color3B local_5e [3];
  Color3B local_5b [3];
  int local_58;
  int *local_54;
  int local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005ba138;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = param_1;
  iVar13 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4);
  if (((param_1[1] - *param_1) / 0x60 != iVar13) || (iVar13 < 1)) {
LAB_00496d85:
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_50 = 0;
  iVar13 = 0;
LAB_00496a93:
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)&local_4c,'@','@','@');
  local_58 = iVar13 + 1;
  if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc + iVar13 * 4) != 0) {
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7Pod : `%%%d\n`7Cat.: `%%");
    local_8._0_1_ = 2;
    puVar7 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar7 = (undefined4 *)*puVar3;
    }
    FUN_00403640(local_30,puVar7,puVar3[4]);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
      pvVar8 = local_48[0];
      if ((0xfff < local_34 + 1) &&
         (pvVar8 = *(void **)((int)local_48[0] + -4),
         0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_00496dc9;
      FUN_005adb3f(pvVar8);
    }
    iVar9 = 1;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc + iVar13 * 4);
    do {
      if (*(char *)(iVar1 + iVar9) == '\0') {
        iVar9 = 1;
        goto LAB_00496c10;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_5e,'@',0x80,'@');
    uVar15 = 0xe;
    pcVar14 = "fully upgraded";
    goto LAB_00496c6d;
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`7Pod : `%%%d\n`8- none -");
  local_8._0_1_ = 1;
  puVar7 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar7 = (undefined4 *)*puVar3;
  }
  FUN_00403640(local_30,puVar7,puVar3[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_34) {
    pvVar8 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar8 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_00496dc9;
    FUN_005adb3f(pvVar8);
  }
  puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_5b,'\0','\0','\0');
  local_4c = *puVar4;
  local_4a = *(undefined1 *)(puVar4 + 1);
  goto LAB_00496c82;
  while (iVar9 = iVar9 + 1, iVar9 < 3) {
LAB_00496c10:
    if (*(char *)(iVar1 + iVar9) != '\0') {
      if (*(char *)(iVar1 + 1) == '\0') {
        if (*(char *)(iVar1 + 2) == '\0') goto LAB_00496c82;
        puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_67,0x80,'@',0x80);
        uVar15 = 0x12;
        pcVar14 = "radiation shielded";
      }
      else {
        puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_64,0x80,'@','@');
        uVar15 = 0x16;
        pcVar14 = "temperature controlled";
      }
      goto LAB_00496c6d;
    }
  }
  puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_61,'@','@','@');
  uVar15 = 0xb;
  pcVar14 = "no upgrades";
LAB_00496c6d:
  local_4c = *puVar4;
  local_4a = *(undefined1 *)(puVar4 + 1);
  FUN_00403640(local_30,pcVar14,uVar15);
LAB_00496c82:
  piVar12 = (int *)(*local_54 + local_50);
  uVar15 = local_1c;
  ppppbVar11 = (byte ****)local_30[0];
  if (*piVar12 == iVar13) {
    pbVar10 = (byte *)(piVar12 + 1);
    if (0xf < (uint)piVar12[6]) {
      pbVar10 = (byte *)piVar12[1];
    }
    uVar5 = FUN_004031f0(pbVar10,piVar12[5],(byte *)&PTR_005ce008,0);
    uVar15 = local_1c;
    ppppbVar11 = (byte ****)local_30[0];
    if (((char)uVar5 != '\0') && (piVar12[7] == -1)) {
      pbVar10 = (byte *)(piVar12 + 8);
      ppppbVar6 = local_30;
      if (0xf < local_1c) {
        ppppbVar6 = (byte ****)local_30[0];
      }
      if (0xf < (uint)piVar12[0xd]) {
        pbVar10 = (byte *)piVar12[8];
      }
      uVar5 = FUN_004031f0(pbVar10,piVar12[0xc],(byte *)ppppbVar6,local_20);
      if (((((char)uVar5 != '\0') &&
           (bVar2 = cocos2d::Color3B::operator!=((Color3B *)(piVar12 + 0x16),(Color3B *)&local_4c),
           iVar13 = local_50, uVar15 = local_1c, ppppbVar11 = (byte ****)local_30[0], !bVar2)) &&
          (*(int *)(*local_54 + 0x50 + local_50) == -999)) &&
         (*(char *)(*local_54 + 0x5e + local_50) == '\0')) {
        local_8 = -1;
        if (local_1c < 0x10) {
LAB_00496d5d:
          local_50 = iVar13 + 0x60;
          iVar13 = local_58;
          if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4) <= local_58)
          goto LAB_00496d85;
          goto LAB_00496a93;
        }
        if ((local_1c + 1 < 0x1000) ||
           (ppppbVar11 = (byte ****)local_30[0][-1],
           (byte *)((int)local_30[0] + (-4 - (int)ppppbVar11)) < (byte *)0x20)) {
          FUN_005adb3f(ppppbVar11);
          goto LAB_00496d5d;
        }
        goto LAB_00496dc9;
      }
    }
  }
  if (uVar15 < 0x10) goto LAB_00496d85;
  ppppbVar6 = ppppbVar11;
  if ((uVar15 + 1 < 0x1000) ||
     (ppppbVar6 = (byte ****)ppppbVar11[-1],
     (byte *)((int)ppppbVar11 + (-4 - (int)ppppbVar6)) < (byte *)0x20)) {
    FUN_005adb3f(ppppbVar6);
    goto LAB_00496d85;
  }
LAB_00496dc9:
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


void __thiscall FUN_00496de0(void *this,void *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  Color3B *this_00;
  undefined4 extraout_ECX;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 extraout_ECX_00;
  uint uVar9;
  int iVar10;
  void *in_stack_fffffef0;
  undefined1 auStack_f4 [8];
  undefined4 uStack_ec;
  uchar uVar11;
  Color3B local_b7 [3];
  undefined4 local_b4;
  int local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005ba7f4;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar10 = *(int *)((int)this + 0x11c);
  local_b0 = iVar10;
  if (*(char *)((int)this + 0x109) == '\0') {
    uVar9 = 0;
    local_b4 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    iVar6 = *(int *)(local_b4 + 0x58);
    if (*(int *)(local_b4 + 0x5c) - iVar6 >> 2 != 0) {
      do {
        if (((*(int *)(iVar10 + 0xdc) == -1) ||
            (*(int *)(*(int *)(iVar6 + uVar9 * 4) + 8) == *(int *)(iVar10 + 0xdc))) &&
           ((*(int *)(iVar10 + 0xe0) == -1 ||
            (*(int *)(*(int *)(**(int **)(iVar6 + uVar9 * 4) + 8) + 4) ==
             *(int *)(&DAT_005ddc54 + *(int *)(iVar10 + 0xe0) * 4))))) {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          local_8._0_1_ = 4;
          local_8._1_3_ = 0;
          iVar10 = *(int *)(*(int *)(iVar6 + uVar9 * 4) + 8);
          if (iVar10 == -1) {
            uStack_ec = 0x497184;
            puVar4 = (undefined4 *)
                     FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\nCost: `$%dc\n`7State: %s");
            local_8._0_1_ = 5;
            puVar7 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar7 = (undefined4 *)*puVar4;
            }
            FUN_00403640(local_30,puVar7,puVar4[4]);
            local_8._0_1_ = 4;
            uVar2 = (undefined1)local_8;
            local_8._0_1_ = 4;
            if (0xf < local_34) {
              pvVar8 = local_48[0];
              if ((0xfff < local_34 + 1) &&
                 (pvVar8 = *(void **)((int)local_48[0] + -4),
                 0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_004970b2;
              FUN_005adb3f(pvVar8);
            }
          }
          else if (iVar10 < 6) {
            uStack_ec = 0x49721e;
            puVar4 = (undefined4 *)
                     FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\nCost: `$%dc\n`7State: %s");
            local_8._0_1_ = 6;
            puVar7 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar7 = (undefined4 *)*puVar4;
            }
            FUN_00403640(local_30,puVar7,puVar4[4]);
            local_8._0_1_ = 4;
            if (0xf < local_34) {
              pvVar8 = local_48[0];
              if ((0xfff < local_34 + 1) &&
                 (pvVar8 = *(void **)((int)local_48[0] + -4), uVar2 = (undefined1)local_8,
                 0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_004970b2;
              FUN_005adb3f(pvVar8);
            }
          }
          else {
            FUN_00403640(local_30,"ERROR: invalid module rating",0x1c);
          }
          cocos2d::Color3B::Color3B(local_b7,'@','@','@');
          FUN_004024e0(auStack_f4,local_30);
          local_8._0_1_ = 7;
          in_stack_fffffef0 = (void *)((uint)in_stack_fffffef0 & 0xffffff00);
          FUN_00402690(&stack0xfffffef0,&PTR_005ce008,0);
          local_8._0_1_ = 4;
          puVar4 = FUN_0043b590(local_a8,uVar9,in_stack_fffffef0);
          local_8 = CONCAT31(local_8._1_3_,8);
          puVar7 = *(undefined4 **)((int)param_1 + 4);
          if (*(undefined4 **)((int)param_1 + 8) == puVar7) {
            FUN_0043ce10(param_1,puVar7,puVar4);
          }
          else {
            FUN_0043cd30(extraout_ECX_00,puVar7,puVar4);
            *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
          }
          FUN_0043bfa0((int)local_a8);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          iVar10 = local_b0;
          if (0xf < local_1c) {
            pvVar8 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar8 = *(void **)((int)local_30[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) goto LAB_004970b2;
            FUN_005adb3f(pvVar8);
            iVar10 = local_b0;
          }
        }
        uVar9 = uVar9 + 1;
        iVar6 = *(int *)(local_b4 + 0x58);
      } while (uVar9 < (uint)(*(int *)(local_b4 + 0x5c) - iVar6 >> 2));
    }
  }
  else {
    uVar9 = 0;
    iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    iVar6 = DAT_0065b5cc;
    if (*(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x3c) >> 2 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(iVar6 + 0xd0) + 0x40) + 0x3c) + uVar9 * 4);
        if ((*(int *)(local_b0 + 0xe0) == -1) ||
           (*(int *)(piVar1[2] + 4) == *(int *)(&DAT_005ddc54 + *(int *)(local_b0 + 0xe0) * 4))) {
          FUN_004ae3d0((int)piVar1);
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          local_8 = 0;
          puVar4 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\nSell Value: `$%dc\n`7State: ");
          local_8._0_1_ = 1;
          puVar7 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar7 = (undefined4 *)*puVar4;
          }
          FUN_00403640(local_30,puVar7,puVar4[4]);
          local_8._0_1_ = 0;
          if (0xf < local_34) {
            pvVar8 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar8 = *(void **)((int)local_48[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) {
LAB_004970b2:
              local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          cocos2d::Color3B::Color3B((Color3B *)&local_ac,' ','@',' ');
          cVar3 = (**(code **)(*piVar1 + 0x14))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*piVar1 + 0x18))();
            if (cVar3 != '\0') {
              FUN_00403640(local_30,"`^- damaged -",0xd);
              uVar11 = '@';
              this_00 = local_b7;
              goto LAB_00496f85;
            }
            FUN_00403640(local_30,"`0- nominal -",0xd);
          }
          else {
            FUN_00403640(local_30,"`@- non-functional -",0x14);
            uVar11 = ' ';
            this_00 = (Color3B *)((int)&local_b4 + 1);
LAB_00496f85:
            puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,'@',uVar11,' ');
            local_ac = *puVar5;
            local_aa = *(undefined1 *)(puVar5 + 1);
          }
          FUN_004024e0(auStack_f4,local_30);
          local_8._0_1_ = 2;
          in_stack_fffffef0 = (void *)((uint)in_stack_fffffef0 & 0xffffff00);
          FUN_00402690(&stack0xfffffef0,&PTR_005ce008,0);
          local_8._0_1_ = 0;
          puVar4 = FUN_0043b590(local_a8,uVar9,in_stack_fffffef0);
          local_8 = CONCAT31(local_8._1_3_,3);
          puVar7 = *(undefined4 **)((int)param_1 + 4);
          if (*(undefined4 **)((int)param_1 + 8) == puVar7) {
            FUN_0043ce10(param_1,puVar7,puVar4);
          }
          else {
            FUN_0043cd30(extraout_ECX,puVar7,puVar4);
            *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
          }
          FUN_0043bfa0((int)local_a8);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pvVar8 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar8 = *(void **)((int)local_30[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) goto LAB_004970b2;
            FUN_005adb3f(pvVar8);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          iVar6 = DAT_0065b5cc;
        }
        uVar9 = uVar9 + 1;
        iVar10 = *(int *)(*(int *)(iVar6 + 0xd0) + 0x40);
      } while (uVar9 < (uint)(*(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x3c) >> 2));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004973a0(void *this,int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  byte ****ppppbVar5;
  Color3B *pCVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  uint *puVar10;
  byte ****ppppbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  Color3B local_63 [3];
  undefined4 local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  undefined2 local_50;
  undefined1 local_4e;
  uint local_4c;
  void *local_48 [5];
  uint local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005ba840;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = *(int *)((int)this + 0x11c);
  local_58 = param_1;
  if (*(char *)((int)this + 0x109) == '\0') {
    local_5c = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    iVar13 = *(int *)(local_5c + 0x5c) - *(int *)(local_5c + 0x58) >> 2;
    if (((param_1[1] - *param_1) / 0x60 == iVar13) && (uVar12 = 0, iVar13 != 0)) {
      local_4c = 0;
      do {
        uVar14 = local_4c;
        piVar7 = local_58;
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
        local_8 = 2;
        puVar3 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\nCost: `$%dc\n`7Rating: `%%*****")
        ;
        local_8._0_1_ = 3;
        puVar8 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar8 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_30,puVar8,puVar3[4]);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_34) {
          pvVar9 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar9 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9)))) goto LAB_0049774f;
          FUN_005adb3f(pvVar9);
        }
        puVar16 = (uint *)(uVar14 + *piVar7);
        ppppbVar11 = (byte ****)local_30[0];
        if (*puVar16 != uVar12) {
LAB_00497960:
          if (0xf < local_1c) {
            ppppbVar5 = ppppbVar11;
            if ((0xfff < local_1c + 1) &&
               (ppppbVar5 = (byte ****)ppppbVar11[-1],
               (byte *)0x1f < (byte *)((int)ppppbVar11 + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar5);
          }
          break;
        }
        puVar10 = puVar16 + 1;
        if (0xf < puVar16[6]) {
          puVar10 = (uint *)puVar16[1];
        }
        uVar14 = FUN_004031f0((byte *)puVar10,puVar16[5],(byte *)&PTR_005ce008,0);
        ppppbVar11 = (byte ****)local_30[0];
        if (((char)uVar14 == '\0') || (puVar16[7] != 0xffffffff)) goto LAB_00497960;
        puVar10 = puVar16 + 8;
        ppppbVar5 = local_30;
        if (0xf < local_1c) {
          ppppbVar5 = (byte ****)local_30[0];
        }
        if (0xf < puVar16[0xd]) {
          puVar10 = (uint *)puVar16[8];
        }
        uVar14 = FUN_004031f0((byte *)puVar10,puVar16[0xc],(byte *)ppppbVar5,local_20);
        if ((char)uVar14 == '\0') goto LAB_00497960;
        pCVar6 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),'@','@','@');
        bVar2 = cocos2d::Color3B::operator!=((Color3B *)(puVar16 + 0x16),pCVar6);
        uVar14 = local_4c;
        ppppbVar11 = (byte ****)local_30[0];
        if (((bVar2) || (*(int *)(local_4c + 0x50 + *local_58) != -999)) ||
           (*(char *)(local_4c + 0x5e + *local_58) != '\0')) goto LAB_00497960;
        local_8 = -1;
        if (0xf < local_1c) {
          if ((0xfff < local_1c + 1) &&
             (ppppbVar11 = (byte ****)local_30[0][-1],
             (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar11)))) goto LAB_0049774f;
          FUN_005adb3f(ppppbVar11);
        }
        uVar12 = uVar12 + 1;
        local_4c = uVar14 + 0x60;
      } while (uVar12 < (uint)(*(int *)(local_5c + 0x5c) - *(int *)(local_5c + 0x58) >> 2));
    }
  }
  else {
    uVar12 = 0;
    iVar15 = 0;
    iVar13 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    local_60 = *(int **)(iVar13 + 0x3c);
    local_54 = *(int **)(iVar13 + 0x40);
    uVar14 = (uint)((int)local_54 + (3 - (int)local_60)) >> 2;
    if (local_54 < local_60) {
      uVar14 = 0;
    }
    if (uVar14 != 0) {
      piVar7 = local_60;
      do {
        if ((*(int *)(local_5c + 0xe0) == -1) ||
           (*(int *)(*(int *)(*piVar7 + 8) + 4) ==
            *(int *)(&DAT_005ddc54 + *(int *)(local_5c + 0xe0) * 4))) {
          iVar15 = iVar15 + 1;
        }
        uVar12 = uVar12 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar12 != uVar14);
    }
    if ((iVar15 == (param_1[1] - *param_1) / 0x60) &&
       (local_4c = 0, (int)local_54 - (int)local_60 >> 2 != 0)) {
      local_54 = (int *)0x0;
      iVar13 = DAT_0065b5cc;
      do {
        uVar12 = local_4c;
        piVar7 = *(int **)(*(int *)(*(int *)(*(int *)(iVar13 + 0xd0) + 0x40) + 0x3c) + local_4c * 4)
        ;
        if ((*(int *)(local_5c + 0xe0) == -1) ||
           (*(int *)(piVar7[2] + 4) == *(int *)(&DAT_005ddc54 + *(int *)(local_5c + 0xe0) * 4))) {
          FUN_004ae3d0((int)piVar7);
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
          local_8 = 0;
          puVar3 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\nSell Value: `$%dc\n`7State: ");
          local_8._0_1_ = 1;
          puVar8 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar8 = (undefined4 *)*puVar3;
          }
          FUN_00403640(local_30,puVar8,puVar3[4]);
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_34) {
            pvVar9 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar9 = *(void **)((int)local_48[0] + -4),
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9)))) goto LAB_0049774f;
            FUN_005adb3f(pvVar9);
          }
          cocos2d::Color3B::Color3B((Color3B *)&local_50,' ','@',' ');
          cVar1 = (**(code **)(*piVar7 + 0x14))();
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*piVar7 + 0x18))();
            if (cVar1 == '\0') {
              FUN_00403640(local_30,"`0- nominal -",0xd);
            }
            else {
              FUN_00403640(local_30,"`^- damaged -",0xd);
              puVar4 = (undefined2 *)
                       cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),'@','@',' ');
              local_50 = *puVar4;
              local_4e = *(undefined1 *)(puVar4 + 1);
            }
          }
          else {
            FUN_00403640(local_30,"`@- non-functional -",0x14);
            puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_63,'@',' ',' ');
            local_50 = *puVar4;
            local_4e = *(undefined1 *)(puVar4 + 1);
          }
          puVar16 = (uint *)((int)local_54 + *local_58);
          uVar14 = local_1c;
          ppppbVar11 = (byte ****)local_30[0];
          if (*puVar16 == uVar12) {
            puVar10 = puVar16 + 1;
            if (0xf < puVar16[6]) {
              puVar10 = (uint *)puVar16[1];
            }
            uVar12 = FUN_004031f0((byte *)puVar10,puVar16[5],(byte *)&PTR_005ce008,0);
            uVar14 = local_1c;
            ppppbVar11 = (byte ****)local_30[0];
            if (((char)uVar12 != '\0') && (puVar16[7] == 0xffffffff)) {
              puVar10 = puVar16 + 8;
              ppppbVar5 = local_30;
              if (0xf < local_1c) {
                ppppbVar5 = (byte ****)local_30[0];
              }
              if (0xf < puVar16[0xd]) {
                puVar10 = (uint *)puVar16[8];
              }
              uVar12 = FUN_004031f0((byte *)puVar10,puVar16[0xc],(byte *)ppppbVar5,local_20);
              if (((((char)uVar12 != '\0') &&
                   (bVar2 = cocos2d::Color3B::operator!=
                                      ((Color3B *)(puVar16 + 0x16),(Color3B *)&local_50),
                   piVar7 = local_54, uVar14 = local_1c, ppppbVar11 = (byte ****)local_30[0], !bVar2
                   )) && (*(int *)((int)local_54 + *local_58 + 0x50) == -999)) &&
                 (*(char *)((int)local_54 + *local_58 + 0x5e) == '\0')) {
                local_8 = -1;
                if (0xf < local_1c) {
                  if ((0xfff < local_1c + 1) &&
                     (ppppbVar11 = (byte ****)local_30[0][-1],
                     (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar11))))
                  goto LAB_0049774f;
                  FUN_005adb3f(ppppbVar11);
                }
                local_20 = 0;
                local_1c = 0xf;
                local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
                local_54 = piVar7;
                iVar13 = DAT_0065b5cc;
                goto LAB_004976e1;
              }
            }
          }
          if (0xf < uVar14) {
            ppppbVar5 = ppppbVar11;
            if ((0xfff < uVar14 + 1) &&
               (ppppbVar5 = (byte ****)ppppbVar11[-1],
               (byte *)0x1f < (byte *)((int)ppppbVar11 + (-4 - (int)ppppbVar5)))) {
LAB_0049774f:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar5);
          }
          break;
        }
LAB_004976e1:
        local_4c = local_4c + 1;
        local_54 = local_54 + 0x18;
        iVar15 = *(int *)(*(int *)(iVar13 + 0xd0) + 0x40);
      } while (local_4c < (uint)(*(int *)(iVar15 + 0x40) - *(int *)(iVar15 + 0x3c) >> 2));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004979a0(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  int iVar5;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  void *in_stack_fffffe60;
  undefined1 local_184 [12];
  undefined4 uStack_178;
  Color3B local_14f [3];
  undefined1 *local_14c;
  undefined1 *local_148;
  Color3B local_143 [4];
  Color3B local_13f [3];
  undefined1 *local_13c;
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba8d5;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
  if (piVar7 == (int *)0x0) {
    uStack_178 = 0x497a03;
    cocos2d::Color3B::Color3B(local_13f,'@','@',' ');
    local_13c = local_184;
    local_184[0] = 0;
    FUN_00402690(local_184,"`$no weapon system",0x12);
    local_8 = 0;
    in_stack_fffffe60 = (void *)((uint)in_stack_fffffe60 & 0xffffff00);
    FUN_00402690(&stack0xfffffe60,&PTR_005ce008,0);
    local_8 = 0xffffffff;
    puVar2 = FUN_0043b590(local_78,0xffffffff,in_stack_fffffe60);
    local_8 = 1;
    uVar4 = extraout_ECX;
  }
  else {
    cVar1 = (**(code **)(*piVar7 + 0x10))();
    if (cVar1 != '\0') {
      iVar8 = 0;
      piVar7 = (int *)(DAT_0065b5cc + 0xd0);
      iVar5 = *(int *)(*(int *)(*piVar7 + 0x40) + 0x20);
      if (0.0 < *(float *)(*(int *)(iVar5 + 8) + 0x104)) {
        local_13c = (undefined1 *)0x3c;
        do {
          if (*(int *)(local_13c + iVar5) == 0) {
            uStack_178 = 0x497bc3;
            cocos2d::Color3B::Color3B(local_13f,'\0','\0','\0');
            local_148 = local_184;
            FUN_00591e00(local_184,"`7Tube %d\n`8empty tube");
            local_8 = 4;
            in_stack_fffffe60 = (void *)((uint)in_stack_fffffe60 & 0xffffff00);
            FUN_00402690(&stack0xfffffe60,&PTR_005ce008,0);
            local_8 = 0xffffffff;
            puVar3 = FUN_0043b590(local_78,iVar8,in_stack_fffffe60);
            local_8 = 5;
            puVar2 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar2) {
              FUN_0043ce10(param_1,puVar2,puVar3);
              puVar6 = local_78;
            }
            else {
              FUN_0043cd30(extraout_ECX_01,puVar2,puVar3);
              puVar6 = local_78;
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            }
          }
          else if (*(int *)(*(int *)(*(int *)(local_13c + *(int *)(*(int *)(*piVar7 + 0x40) + 0x20))
                                    + 0x388) + 0x1b4) == 4) {
            uStack_178 = 0x497c92;
            cocos2d::Color3B::Color3B(local_143,'@','@',0x80);
            local_14c = local_184;
            FUN_00591e00(local_184,"`7Tube %d\n`!Probe\n%s %s");
            local_8 = 6;
            in_stack_fffffe60 = (void *)((uint)in_stack_fffffe60 & 0xffffff00);
            FUN_00402690(&stack0xfffffe60,&PTR_005ce008,0);
            local_8 = 0xffffffff;
            puVar3 = FUN_0043b590(local_d8,iVar8,in_stack_fffffe60);
            local_8 = 7;
            puVar2 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar2) {
              FUN_0043ce10(param_1,puVar2,puVar3);
              puVar6 = local_d8;
            }
            else {
              FUN_0043cd30(extraout_ECX_02,puVar2,puVar3);
              puVar6 = local_d8;
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            }
          }
          else {
            uStack_178 = 0x497d78;
            cocos2d::Color3B::Color3B(local_14f,'@',0x80,'@');
            local_14c = local_184;
            FUN_00591e00(local_184,"`7Tube %d\n`!Torpedo\n%s %s");
            local_8 = 8;
            in_stack_fffffe60 = (void *)((uint)in_stack_fffffe60 & 0xffffff00);
            FUN_00402690(&stack0xfffffe60,&PTR_005ce008,0);
            local_8 = 0xffffffff;
            puVar3 = FUN_0043b590(local_138,iVar8,in_stack_fffffe60);
            local_8 = 9;
            puVar2 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar2) {
              FUN_0043ce10(param_1,puVar2,puVar3);
            }
            else {
              FUN_0043cd30(extraout_ECX_03,puVar2,puVar3);
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            }
            puVar6 = local_138;
          }
          iVar8 = iVar8 + 1;
          local_8 = 0xffffffff;
          FUN_0043bfa0((int)puVar6);
          piVar7 = (int *)(DAT_0065b5cc + 0xd0);
          local_13c = local_13c + 4;
          iVar5 = *(int *)(*(int *)(*piVar7 + 0x40) + 0x20);
        } while ((float)iVar8 < *(float *)(*(int *)(iVar5 + 8) + 0x104));
      }
      goto LAB_00497e8b;
    }
    uStack_178 = 0x497ade;
    cocos2d::Color3B::Color3B(local_13f,'@',' ',' ');
    local_13c = local_184;
    local_184[0] = 0;
    FUN_00402690(local_184,"`@weapon system non-functional",0x1e);
    local_8 = 2;
    in_stack_fffffe60 = (void *)((uint)in_stack_fffffe60 & 0xffffff00);
    FUN_00402690(&stack0xfffffe60,&PTR_005ce008,0);
    local_8 = 0xffffffff;
    puVar2 = FUN_0043b590(local_78,0xffffffff,in_stack_fffffe60);
    local_8 = 3;
    uVar4 = extraout_ECX_00;
  }
  puVar3 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar3) {
    FUN_0043ce10(param_1,puVar3,puVar2);
    FUN_0043bfa0((int)local_78);
  }
  else {
    FUN_0043cd30(uVar4,puVar3,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
    FUN_0043bfa0((int)local_78);
  }
LAB_00497e8b:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00497eb0(void *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  Color3B *this;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 extraout_ECX;
  void *pvVar10;
  uint uVar11;
  void *in_stack_fffffee8;
  undefined1 auStack_fc [8];
  undefined4 uStack_f4;
  uchar uVar12;
  Color3B local_be [3];
  Color3B local_bb [3];
  void *local_b8;
  undefined1 *local_b4;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005ba926;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar11 = 0;
  local_b8 = param_1;
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  if (*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2 != 0) {
    do {
      cocos2d::Color3B::Color3B((Color3B *)&local_ac);
      iVar1 = uVar11 * 4;
      pbVar3 = *(byte **)(*(int *)(iVar1 + *(int *)(iVar2 + 0x3c)) + 0x328);
      if (pbVar3 != (byte *)0x0) {
        pbVar8 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar8 = *(byte **)pbVar3;
        }
        uVar5 = FUN_004031f0(pbVar8,*(uint *)(pbVar3 + 0x10),(byte *)"secondhand",10);
        if ((char)uVar5 == '\0') {
          uVar12 = '\0';
          this = local_be;
        }
        else {
          uVar12 = '@';
          this = local_bb;
        }
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(this,uVar12,'@','\0');
        local_ac = *puVar6;
        local_aa = *(undefined1 *)(puVar6 + 1);
        local_b4 = (undefined1 *)FUN_00511770(*(void **)(*(int *)(iVar2 + 0x3c) + iVar1));
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        local_8 = 0;
        pbVar3 = *(byte **)(*(int *)(*(int *)(iVar2 + 0x3c) + iVar1) + 0x328);
        pbVar8 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar8 = *(byte **)pbVar3;
        }
        uVar5 = FUN_004031f0(pbVar8,*(uint *)(pbVar3 + 0x10),(byte *)"secondhand",10);
        local_ad = (undefined1)uVar5;
        uStack_f4 = 0x498026;
        puVar7 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_48,"`%%%s\n`7%s\n%s\n`7Price: `$%dc");
        local_8._0_1_ = 1;
        puVar9 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar9 = (undefined4 *)*puVar7;
        }
        FUN_00403640(local_30,puVar9,puVar7[4]);
        local_8._0_1_ = 0;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (0xf < local_34) {
          pvVar10 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar10 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_0049817f;
          FUN_005adb3f(pvVar10);
        }
        local_b4 = auStack_fc;
        FUN_004024e0(auStack_fc,local_30);
        local_8._0_1_ = 2;
        in_stack_fffffee8 = (void *)((uint)in_stack_fffffee8 & 0xffffff00);
        FUN_00402690(&stack0xfffffee8,&PTR_005ce008,0);
        local_8._0_1_ = 0;
        puVar7 = FUN_0043b590(local_a8,uVar11,in_stack_fffffee8);
        pvVar10 = local_b8;
        local_8 = CONCAT31(local_8._1_3_,3);
        puVar9 = *(undefined4 **)((int)local_b8 + 4);
        if (*(undefined4 **)((int)local_b8 + 8) == puVar9) {
          FUN_0043ce10(local_b8,puVar9,puVar7);
        }
        else {
          FUN_0043cd30(extraout_ECX,puVar9,puVar7);
          *(int *)((int)pvVar10 + 4) = *(int *)((int)pvVar10 + 4) + 0x60;
        }
        FUN_0043bfa0((int)local_a8);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_1c) {
          pvVar10 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar10 = *(void **)((int)local_30[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) {
LAB_0049817f:
            local_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar10);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
