#include "../ois_server.exe.h"


void __thiscall FUN_0054c300(void *this,char param_1,undefined4 *param_2,int param_3)

{
  byte *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  int iVar8;
  byte *pbVar9;
  byte *in_stack_ffffff9c;
  void *pvVar10;
  char *pcVar11;
  int local_34;
  char local_2d;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6cc0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != '\0') {
    pvVar10 = (void *)((uint)in_stack_ffffff9c & 0xffffff00);
    FUN_00402690(&stack0xffffff9c,
                 "`3INFO [identifier, number]`2: get info on a specific item or passenger",0x47);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
    goto LAB_0054c869;
  }
  iVar2 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) {
    FUN_0054c300(this,'\x01',(undefined4 *)0x0,0);
    goto LAB_0054c869;
  }
  FUN_004024e0(local_2c,param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  ppppbVar6 = local_2c;
  if (0xf < local_18) {
    ppppbVar6 = (byte ****)local_2c[0];
  }
  ppppbVar7 = local_2c;
  if (0xf < local_18) {
    ppppbVar7 = (byte ****)local_2c[0];
  }
  FUN_00413ec0(&local_34,tolower_exref,(char *)ppppbVar7,(char *)((int)ppppbVar6 + local_1c),
               (undefined1 *)ppppbVar6);
  FUN_004024e0(&stack0xffffff9c,local_2c);
  piVar1 = (int *)FUN_004a8380(in_stack_ffffff9c);
  if (piVar1 == (int *)0x0) {
    ppppbVar6 = local_2c;
    if (0xf < local_18) {
      ppppbVar6 = (byte ****)local_2c[0];
    }
    iVar2 = atoi((char *)ppppbVar6);
    uVar3 = iVar2 - 1;
    if (((int)uVar3 < 0) ||
       ((uint)(*(int *)(DAT_0065b3d4 + 0x40c) - *(int *)(DAT_0065b3d4 + 0x408) >> 2) <= uVar3)) {
      pcVar11 = "`^Error: unknown good or passenger, \'%s\'";
LAB_0054c4bc:
      FUN_0042de40(*(void **)((int)this + 0x20),pcVar11);
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_0065b3d4 + 0x408) + uVar3 * 4);
      FUN_0042de40(*(void **)((int)this + 0x20),"`2Passenger: `0%s");
      FUN_004024e0(&stack0xffffff9c,(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x18));
      FUN_004a6de0(in_stack_ffffff9c);
      FUN_004024e0(&stack0xffffff9c,(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x18));
      FUN_004a6f80(in_stack_ffffff9c);
      FUN_0042de40(*(void **)((int)this + 0x20),"`2Destination: `0%s `2(`0%s`2)");
      FUN_0042de40(*(void **)((int)this + 0x20),"`2Fee        : `$%dc");
    }
  }
  else {
    this_00 = *(byte **)(DAT_0065b3d4 + 0x398);
    FUN_0042de40(*(void **)((int)this + 0x20),"`7Good   : `0%s");
    FUN_0042de40(*(void **)((int)this + 0x20),"`7Desc   : `2%s");
    FUN_0042de40(*(void **)((int)this + 0x20),"`7Cat.   : `2%s");
    FUN_0042dcd0(*(int *)((int)this + 0x20));
    FUN_0042de40(*(void **)((int)this + 0x20),"`%%**Aboard %s**");
    pvVar10 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    FUN_00507200(pvVar10,piVar1);
    FUN_005073a0(pvVar10,*piVar1);
    pvVar10 = *(void **)((int)this + 0x20);
    FUN_0042de40(pvVar10,"`7Hold   : `%c%d`7/`%c%d");
    FUN_0042dcd0(*(int *)((int)this + 0x20));
    pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
    FUN_00402690(&stack0xffffff9c,"`%**Station Information**",0x19);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
    local_34 = FUN_0049cf60(this_00,*piVar1);
    local_2d = '\0';
    iVar2 = *(int *)(DAT_0065b5cc + 0x13c);
    iVar8 = *(int *)(DAT_0065b5cc + 0x140) - iVar2 >> 2;
    if (iVar8 == 0) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`7Amt.   : `%c%d");
LAB_0054c794:
      uVar3 = FUN_0049e520(this_00,*piVar1);
      if ((char)uVar3 == '\0') {
        pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
        FUN_00402690(&stack0xffffff9c,"`7None for sale here.",0x15);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
      }
      else {
        FUN_0049d160(this_00,*piVar1,'\x01');
        FUN_0042de40(*(void **)((int)this + 0x20),"`7We Sell: `$%dc");
      }
    }
    else {
      uVar3 = 0;
      if (iVar8 == 0) goto LAB_0054c794;
      do {
        local_34 = *(int *)(iVar2 + uVar3 * 4);
        pbVar9 = (byte *)(local_34 + 0x38);
        pbVar4 = this_00;
        if (0xf < *(uint *)(this_00 + 0x14)) {
          pbVar4 = *(byte **)this_00;
        }
        if (0xf < *(uint *)(local_34 + 0x4c)) {
          pbVar9 = *(byte **)pbVar9;
        }
        uVar5 = FUN_004031f0(pbVar9,*(uint *)(local_34 + 0x48),pbVar4,*(uint *)(this_00 + 0x10));
        if ((char)uVar5 != '\0') {
          ppppbVar6 = local_2c;
          if (0xf < local_18) {
            ppppbVar6 = (byte ****)local_2c[0];
          }
          pbVar9 = *(byte **)(local_34 + 0x58);
          pbVar4 = pbVar9;
          if (0xf < *(uint *)(pbVar9 + 0x14)) {
            pbVar4 = *(byte **)pbVar9;
          }
          uVar5 = FUN_004031f0(pbVar4,*(uint *)(pbVar9 + 0x10),(byte *)ppppbVar6,local_1c);
          if ((char)uVar5 != '\0') {
            FUN_0042de40(*(void **)((int)this + 0x20),"`7Amt.   : `!%d");
            if (local_2d == '\0') {
              local_2d = '\x01';
            }
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar3 * 4) + 0x58) +
                            0x28);
            if (iVar2 == -1) {
              iVar2 = piVar1[0x16];
            }
            if (iVar2 == 0) {
              pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
              FUN_00402690(&stack0xffffff9c,"`7Pickup : `0free",0x11);
              FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
            }
            else {
              FUN_0042de40(*(void **)((int)this + 0x20),"`7We Sell: `$%dc");
            }
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = *(int *)(DAT_0065b5cc + 0x13c);
      } while (uVar3 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar2 >> 2));
      if (local_2d == '\0') goto LAB_0054c794;
    }
    uVar3 = FUN_0049e520(this_00,*piVar1);
    if ((char)uVar3 != '\0') {
      FUN_0049d160(this_00,*piVar1,'\0');
      pcVar11 = "`7We Buy : `$%dc";
      goto LAB_0054c4bc;
    }
    pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
    FUN_00402690(&stack0xffffff9c,"`7Does not buy here.",0x14);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
  }
  if (0xf < local_18) {
    ppppbVar6 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar6 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar6);
  }
LAB_0054c869:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054c890(void *this,char param_1,char *param_2,int param_3)

{
  byte *this_00;
  int *piVar1;
  char *_Str;
  int iVar2;
  void *this_01;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  char ****ppppcVar6;
  byte *pbVar7;
  char ****ppppcVar8;
  byte *in_stack_ffffff90;
  void *pvVar9;
  int iVar10;
  int local_40;
  void *local_3c;
  int *local_38;
  uint local_34;
  int local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6d00;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != '\0') {
    pvVar9 = (void *)((uint)in_stack_ffffff90 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"`3BUY [amount] [identifier]`2: buy goods",0x28);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar9);
    goto LAB_0054cc11;
  }
  if ((uint)((param_3 - (int)param_2) / 0x18) < 2) {
    FUN_0054c890(this,'\x01',(char *)0x0,0);
    goto LAB_0054cc11;
  }
  FUN_004024e0(local_2c,(undefined4 *)(param_2 + 0x18));
  local_8 = CONCAT31(local_8._1_3_,1);
  ppppcVar8 = local_2c;
  if (0xf < local_18) {
    ppppcVar8 = (char ****)local_2c[0];
  }
  ppppcVar6 = local_2c;
  if (0xf < local_18) {
    ppppcVar6 = (char ****)local_2c[0];
  }
  FUN_00413ec0(&local_40,tolower_exref,(char *)ppppcVar6,(char *)((int)ppppcVar8 + local_1c),
               (undefined1 *)ppppcVar8);
  FUN_004024e0(&stack0xffffff90,local_2c);
  piVar1 = (int *)FUN_004a8380(in_stack_ffffff90);
  local_38 = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: unknown good, \'%s\'");
  }
  else {
    _Str = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      _Str = *(char **)param_2;
    }
    local_30 = atoi(_Str);
    if (local_30 < 1) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: invalid amount to purchase");
    }
    else {
      iVar10 = *piVar1;
      iVar2 = FUN_00412d40();
      iVar2 = *(int *)(iVar2 + 0x11c);
      *(int *)(iVar2 + 0x18) = iVar10;
      *(int *)(iVar2 + 0x1c) = local_30;
      *(undefined4 *)(iVar2 + 4) = 1;
      pvVar9 = *(void **)((int)this + 0x20);
      iVar10 = 0;
      this_01 = (void *)FUN_00412d40();
      uVar3 = FUN_0048aee0(this_01,iVar10,pvVar9);
      iVar10 = DAT_0065b5cc;
      if ((char)uVar3 != '\0') {
        local_3c = (void *)0x0;
        local_34 = local_34 & 0xffffff00;
        this_00 = *(byte **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
        uVar3 = 0;
        *(int *)((int)this + 0x40) = *piVar1;
        *(int *)((int)this + 0x44) = local_30;
        iVar2 = *(int *)(iVar10 + 0x13c);
        if (*(int *)(iVar10 + 0x140) - iVar2 >> 2 == 0) {
LAB_0054caf4:
          piVar1 = local_38;
          local_3c = (void *)FUN_0049d2f0(this_00,*local_38,local_30,'\x01');
        }
        else {
          do {
            local_40 = *(int *)(iVar2 + uVar3 * 4);
            pbVar7 = (byte *)(local_40 + 0x38);
            pbVar4 = this_00;
            if (0xf < *(uint *)(this_00 + 0x14)) {
              pbVar4 = *(byte **)this_00;
            }
            if (0xf < *(uint *)(local_40 + 0x4c)) {
              pbVar7 = *(byte **)pbVar7;
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(local_40 + 0x48),pbVar4,*(uint *)(this_00 + 0x10))
            ;
            if ((char)uVar5 != '\0') {
              FUN_004024e0(&stack0xffffff90,*(undefined4 **)(local_40 + 0x58));
              piVar1 = (int *)FUN_004a8380(in_stack_ffffff90);
              local_34 = local_34 & 0xff;
              iVar10 = DAT_0065b5cc;
              if (piVar1 == local_38) {
                local_34 = 1;
              }
            }
            uVar3 = uVar3 + 1;
            iVar2 = *(int *)(iVar10 + 0x13c);
          } while (uVar3 < (uint)(*(int *)(iVar10 + 0x140) - iVar2 >> 2));
          piVar1 = local_38;
          if ((char)local_34 == '\0') goto LAB_0054caf4;
        }
        *(int *)((int)this + 0x40) = *piVar1;
        *(int *)((int)this + 0x44) = local_30;
        FUN_0049d160(this_00,*piVar1,'\x01');
        pvVar9 = (void *)((uint)in_stack_ffffff90 & 0xffffff00);
        FUN_00402690(&stack0xffffff90,"`!Transaction details:",0x16);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar9);
        if (local_3c == (void *)0x0) {
          FUN_0042de40(*(void **)((int)this + 0x20)," `3Taking `%%%s`3 x `7%d `3@ `0no cost");
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x20)," `3Buying `%%%s`3 x `7%d `3@ `0%d`$c");
          pvVar9 = local_3c;
          FUN_0042de40(*(void **)((int)this + 0x20)," `3Total cost: `$%dc");
        }
        *(undefined1 *)((int)this + 0x48) = 0;
        FUN_0042dcd0(*(int *)((int)this + 0x20));
        pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
        FUN_00402690(&stack0xffffff90,
                     "`%TRANSACTION READY. Type `!CONFIRM`% to perform, `@CANCEL`% to ignore.",0x47)
        ;
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar9);
      }
    }
  }
  if (0xf < local_18) {
    ppppcVar8 = (char ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppcVar8 = (char ****)local_2c[0][-1],
       (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar8);
  }
LAB_0054cc11:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0054cc40(int param_1)

{
  undefined4 *puVar1;
  uint in_stack_ffffffcc;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c6d5c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x40) == -1) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"`7No active transaction to confirm.",0x23);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar2);
    goto LAB_0054ccff;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 2;
      goto LAB_0054ccdc;
    }
  }
  else if (DAT_0065c288 == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8._0_1_ = 1;
LAB_0054ccdc:
    DAT_0065c288 = (void *)FUN_00485f60(puVar1);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  FUN_0048ed40(DAT_0065c288,0,*(void **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
LAB_0054ccff:
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0054cd20(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint in_stack_ffffffcc;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x40) == -1) {
    uVar2 = 0x22;
    pcVar1 = "`7No active transaction to cancel.";
  }
  else {
    uVar2 = 0x17;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0;
    pcVar1 = "`!Transaction cancelled";
  }
  pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,pcVar1,uVar2);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar3);
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054cdb0(void *this,char param_1,byte *param_2,int param_3)

{
  byte ***pppbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined3 extraout_var;
  int iVar7;
  byte ****ppppbVar8;
  undefined4 extraout_ECX;
  byte ****ppppbVar9;
  int extraout_EDX;
  int iVar10;
  byte *pbVar11;
  byte *in_stack_ffffffa0;
  uint in_stack_ffffffa4;
  void *pvVar12;
  byte *local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6d90;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != '\0') {
    pvVar12 = (void *)(in_stack_ffffffa4 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`3WEAP [buy] [amount] [identifier]`2: buy a weapon",0x32);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`3WEAP [list] `2: list available weapons",0x28);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    goto LAB_0054d1e7;
  }
  iVar6 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar6 == iVar6) {
LAB_0054d1c5:
    FUN_0054cdb0(this,'\x01',(byte *)0x0,0);
    goto LAB_0054d1e7;
  }
  uVar4 = *(uint *)(param_2 + 0x14);
  pbVar5 = param_2;
  if (0xf < uVar4) {
    pbVar5 = *(byte **)param_2;
  }
  local_30 = param_2;
  if (0xf < uVar4) {
    local_30 = *(byte **)param_2;
  }
  pbVar11 = param_2;
  if (0xf < uVar4) {
    pbVar11 = *(byte **)param_2;
  }
  FUN_00413ec0(&local_30,tolower_exref,(char *)pbVar11,(char *)(local_30 + *(int *)(param_2 + 0x10))
               ,pbVar5);
  pbVar11 = param_2;
  uVar4 = *(uint *)(param_2 + 0x14);
  pbVar5 = param_2;
  if (0xf < uVar4) {
    pbVar5 = *(byte **)param_2;
  }
  uVar3 = FUN_004031f0(pbVar5,*(uint *)(param_2 + 0x10),&DAT_00622210,4);
  if ((char)uVar3 != '\0') {
    pvVar12 = (void *)(in_stack_ffffffa4 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`3Weapons available:",0x14);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`2  m10`3: M-10 Explosive-tipped Shipkiller: `$600c",0x33);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`2  e10`3: E-10 EMP torpedo: `$300c",0x23);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    goto LAB_0054d1e7;
  }
  pbVar5 = pbVar11;
  if (0xf < uVar4) {
    pbVar5 = *(byte **)pbVar11;
  }
  uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar11 + 0x10),&DAT_00621b20,3);
  if ((char)uVar4 == '\0') goto LAB_0054d1c5;
  FUN_004024e0(local_2c,(undefined4 *)(pbVar11 + 0x30));
  local_8 = CONCAT31(local_8._1_3_,1);
  ppppbVar9 = local_2c;
  if (0xf < local_18) {
    ppppbVar9 = (byte ****)local_2c[0];
  }
  ppppbVar8 = local_2c;
  if (0xf < local_18) {
    ppppbVar8 = (byte ****)local_2c[0];
  }
  FUN_00413ec0(&local_30,tolower_exref,(char *)ppppbVar8,(char *)((int)ppppbVar9 + local_1c),
               (undefined1 *)ppppbVar9);
  uVar4 = local_18;
  pppbVar1 = local_2c[0];
  ppppbVar9 = local_2c;
  if (0xf < local_18) {
    ppppbVar9 = (byte ****)local_2c[0];
  }
  pvVar12 = (void *)0x54cfcd;
  uVar3 = FUN_004031f0((byte *)ppppbVar9,local_1c,&DAT_0060a970,3);
  if ((char)uVar3 == '\0') {
    ppppbVar9 = local_2c;
    if (0xf < uVar4) {
      ppppbVar9 = (byte ****)pppbVar1;
    }
    uVar4 = FUN_004031f0((byte *)ppppbVar9,local_1c,&DAT_005eb58c,3);
    if ((char)uVar4 != '\0') {
      local_30 = (byte *)0x12c;
      goto LAB_0054d007;
    }
    pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"`^Error: unknown weapon.",0x18);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
LAB_0054d199:
    if (local_18 < 0x10) goto LAB_0054d1e7;
    ppppbVar9 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar9 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)local_2c[0][-1])))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    local_30 = (byte *)0x258;
LAB_0054d007:
    pbVar5 = param_2 + 0x18;
    if (0xf < *(uint *)(param_2 + 0x2c)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar6 = atoi((char *)pbVar5);
    if (iVar6 < 1) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: invalid amount");
      goto LAB_0054d199;
    }
    iVar10 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      cVar2 = FUN_004ae510(iVar10);
      iVar10 = CONCAT31(extraout_var,cVar2);
    }
    iVar7 = FUN_0050f5d0(*(int *)(DAT_0065b5cc + 0xd0));
    if (iVar7 - iVar10 < iVar6) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: not enough free weapon slots");
      goto LAB_0054d199;
    }
    local_30 = (byte *)(iVar6 * (int)local_30);
    iVar10 = *(int *)(*(int *)(extraout_EDX + 0x124) + 0x1c);
    if ((int)local_30 - iVar10 != 0 && iVar10 <= (int)local_30) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: not enough credit in your account");
      goto LAB_0054d199;
    }
    if (0 < iVar6) {
      do {
        uVar4 = 0xffffffff;
        FUN_004024e0(&stack0xffffffa0,local_2c);
        iVar10 = FUN_004a8180(in_stack_ffffffa0);
        FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar10,uVar4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    pbVar5 = local_30;
    FUN_004024e0(&stack0xffffffa4,local_2c);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-(int)pbVar5,pvVar12);
    FUN_00591e00(&stack0xffffffa4,"`2  %dx %s bought for `$%dc");
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    if (local_18 < 0x10) goto LAB_0054d1e7;
    ppppbVar9 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar9 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_005adb3f(ppppbVar9);
LAB_0054d1e7:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054d210(void *this,char param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *_Str;
  int iVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  byte *in_stack_ffffffa8;
  void *pvVar8;
  undefined4 *local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5870;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    if ((uint)((param_3 - (int)param_2) / 0x18) < 2) {
      FUN_0054d210(this,'\x01',(char *)0x0,0);
    }
    else {
      FUN_004024e0(local_2c,(undefined4 *)(param_2 + 0x18));
      local_8 = CONCAT31(local_8._1_3_,1);
      ppppcVar7 = local_2c;
      if (0xf < local_18) {
        ppppcVar7 = (char ****)local_2c[0];
      }
      ppppcVar6 = local_2c;
      if (0xf < local_18) {
        ppppcVar6 = (char ****)local_2c[0];
      }
      FUN_00413ec0(&local_30,tolower_exref,(char *)ppppcVar6,(char *)((int)ppppcVar7 + local_1c),
                   (undefined1 *)ppppcVar7);
      FUN_004024e0(&stack0xffffffa8,local_2c);
      puVar2 = (undefined4 *)FUN_004a8380(in_stack_ffffffa8);
      local_30 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: unknown good, \'%s\'");
      }
      else {
        _Str = param_2;
        if (0xf < *(uint *)(param_2 + 0x14)) {
          _Str = *(char **)param_2;
        }
        iVar3 = atoi(_Str);
        if (iVar3 < 1) {
          FUN_0042de40(*(void **)((int)this + 0x20),"`^Error: invalid amount");
        }
        else {
          uVar1 = *puVar2;
          iVar4 = FUN_00412d40();
          iVar4 = *(int *)(iVar4 + 0x11c);
          *(undefined4 *)(iVar4 + 0x18) = uVar1;
          *(int *)(iVar4 + 0x1c) = iVar3;
          *(undefined4 *)(iVar4 + 4) = 2;
          pvVar8 = *(void **)((int)this + 0x20);
          iVar4 = 0;
          this_00 = (void *)FUN_00412d40();
          uVar5 = FUN_0048b800(this_00,iVar4,pvVar8);
          if ((char)uVar5 != '\0') {
            *(undefined4 *)((int)this + 0x40) = *local_30;
            *(int *)((int)this + 0x44) = iVar3;
            *(undefined1 *)((int)this + 0x48) = 1;
            FUN_0042dcd0(*(int *)((int)this + 0x20));
            pvVar8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
            FUN_00402690(&stack0xffffffa8,"`%TRANSACTION READY. Type `!CONFIRM`% to perform.",0x31);
            FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
          }
        }
      }
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
    }
  }
  else {
    pvVar8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,"`3SELL [amount] [identifier]`2: sell goods",0x2a);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
  }
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054d440(void *this,char param_1)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_stack_ffffff88;
  uint3 uVar8;
  void *pvVar6;
  void *pvVar7;
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
  
  puStack_c = &LAB_005c5758;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar8 = (uint3)((uint)in_stack_ffffff88 >> 8);
  if (param_1 == '\0') {
    pvVar6 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    pvVar7 = (void *)((uint)uVar8 << 8);
    FUN_00402690(&stack0xffffff88,"`%Cargo:",8);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
    bVar1 = false;
    uVar3 = 0;
    piVar4 = (int *)((int)pvVar6 + 0xc);
    do {
      if ((int)uVar3 < *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4)) {
        if (((int)uVar3 < 0) ||
           (((0 < *(int *)((int)pvVar6 + 8) && (*(int *)((int)pvVar6 + 8) <= (int)uVar3)) ||
            (iVar5 = *piVar4, iVar5 == 0)))) {
          FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d - `8no pod");
        }
        else {
          bVar1 = true;
          if (*(int *)(iVar5 + 8) < 1) {
            FUN_005069b0(pvVar6,(undefined1 *)local_44,uVar3,'\0');
            local_8._0_1_ = 2;
            FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d - `7[empty]`7 (%s)");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pvVar2 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar2 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) goto LAB_0054d72a;
              FUN_005adb3f(pvVar2);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
          else {
            FUN_004a84a0(*(int *)(iVar5 + 4));
            FUN_005069b0(pvVar6,(undefined1 *)local_2c,uVar3,'\0');
            local_8._0_1_ = 1;
            pvVar7 = *(void **)((int)this + 0x20);
            FUN_0042de40(pvVar7,"`7%02d - %dx `0%s`7 (%s)");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pvVar2 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar2 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
LAB_0054d72a:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar2);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
        }
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < 0xe);
    if (!bVar1) {
      pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
      FUN_00402690(&stack0xffffff88," `7** no cargo pods **",0x16);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
    }
    FUN_0042dcd0(*(int *)((int)this + 0x20));
    iVar5 = 1;
    do {
      FUN_005073f0(pvVar6,iVar5);
      FUN_00507270(pvVar6,iVar5);
      FUN_0042de40(*(void **)((int)this + 0x20),"`7%s: `%c%d`7/`%c%d");
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    pvVar6 = (void *)((uint)uVar8 << 8);
    FUN_00402690(&stack0xffffff88,"`3CARGO`2: view the cargo and free space on your ship",0x35);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar6);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054d740(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *in_stack_ffffffc8;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
    if ((*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) & 0xfffffffcU) == 0) {
      uVar4 = 0x2b;
      pcVar3 = "`$** no passenger listings at the moment **";
    }
    else {
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      uVar4 = 0;
      iVar2 = *(int *)(iVar1 + 0x408);
      if (*(int *)(iVar1 + 0x40c) - iVar2 >> 2 != 0) {
        do {
          FUN_004024e0(&stack0xffffffc8,
                       (undefined4 *)(*(int *)(*(int *)(iVar2 + uVar4 * 4) + 0xc) + 0x18));
          FUN_004a6de0(in_stack_ffffffc8);
          uVar4 = uVar4 + 1;
          in_stack_ffffffc8 = (byte *)0x54d829;
          FUN_0042de40(*(void **)((int)this + 0x20),"`2[`$%d`2] `%%%s`2 to `0%s");
          iVar2 = *(int *)(iVar1 + 0x408);
        } while (uVar4 < (uint)(*(int *)(iVar1 + 0x40c) - iVar2 >> 2));
      }
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      uVar4 = 0x56;
      pcVar3 = 
      "`2Use `0info`2 to find out more information and `0take`2 to agree to take a passenger.";
    }
  }
  else {
    uVar4 = 0x31;
    pcVar3 = "`3PASSENGERS`2: view the passenger bulletin board";
  }
  pvVar5 = (void *)((uint)in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,pcVar3,uVar4);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054d890(void *this,char param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  byte *in_stack_ffffffc0;
  void *pvVar8;
  char *in_stack_ffffffcc;
  int in_stack_ffffffd0;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar1 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar1 == iVar1) {
      FUN_0042b900(&stack0xffffffcc,(int *)&param_2);
      FUN_0054d890(this,'\x01',in_stack_ffffffcc,in_stack_ffffffd0);
      goto LAB_0054da9d;
    }
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
    pcVar6 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pcVar6 = *(char **)param_2;
    }
    iVar4 = atoi(pcVar6);
    uVar7 = iVar4 - 1;
    if (((int)uVar7 < 0) || ((*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) >> 2) - 1U < uVar7))
    {
      uVar7 = 0x1b;
      pcVar6 = "`$Invalid passenger number.";
    }
    else {
      cVar3 = FUN_0040fd70();
      if (cVar3 == '\0') {
        if (iVar1 == 0) {
          uVar7 = 0x31;
          pcVar6 = "`^Error: unable to pick up passenger from station";
        }
        else {
          iVar4 = *(int *)(*(int *)(iVar1 + 0x408) + uVar7 * 4);
          local_14 = iVar4;
          if (iVar4 != 0) {
            FUN_004853c0(iVar4);
            piVar2 = *(int **)(iVar1 + 0x40c);
            puVar5 = FUN_00414000(&local_18,&local_14,*(int **)(iVar1 + 0x408),piVar2);
            FUN_00412ba0((void *)(iVar1 + 0x408),&local_14,(void *)*puVar5,piVar2);
            *(int *)(DAT_0065b5cc + 0x128) = iVar4;
            FUN_0042de40(*(void **)((int)this + 0x20),"`0%s`2 has boarded your ship.");
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x18));
            FUN_004a6de0(in_stack_ffffffc0);
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x18));
            FUN_004a6f80(in_stack_ffffffc0);
            FUN_0042de40(*(void **)((int)this + 0x20),"`2Destination: `0%s `2(`0%s`2)");
            FUN_0042de40(*(void **)((int)this + 0x20),"`2Fee        : `$%dc");
            goto LAB_0054da9d;
          }
          uVar7 = 0x24;
          pcVar6 = "`^Error: unable to pick up passenger";
        }
      }
      else {
        uVar7 = 0x29;
        pcVar6 = "`$You have no free cabin for a passenger.";
      }
    }
  }
  else {
    uVar7 = 0x3b;
    pcVar6 = "`3TAKE [passenger number]`2: admit a passenger to your ship";
  }
  pvVar8 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,pcVar6,uVar7);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
LAB_0054da9d:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0054dac0(int param_1)

{
  void *pvVar1;
  uint in_stack_ffffffa8;
  undefined4 *puVar2;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`%Trade Terminal 2.1.0 `7(c) by Purchase Tech",0x2d);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  puVar2 = (undefined4 *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`0Valid commands:",0x11);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),puVar2);
  local_14 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6 != 0) {
    do {
      FUN_00591e00((undefined1 *)local_30,&DAT_005e7500);
      pvVar1 = *(void **)(param_1 + 0x20);
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar1 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar1 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_0054dc82;
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"`3HELP",6);
  pvVar1 = *(void **)(param_1 + 0x20);
  local_8 = 1;
  FUN_004024e0(&stack0xffffffa8,local_30);
  FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
LAB_0054dc82:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0054dcb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  puVar2 = (undefined4 *)piVar1[2];
  FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
  puVar2[1] = *puVar2;
  FUN_0042d280(piVar1);
  FUN_0054b910(param_1);
  FUN_0054ba50(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __thiscall FUN_0054dcf0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_33 = *(undefined1 *)((int)param_1 + 5);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054dd90(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = param_1[1];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


TypeDescriptor * FUN_0054de20(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_0054de30(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


TypeDescriptor * FUN_0054de60(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_0054de70(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_0054de90(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_0054dea0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


undefined4 * __thiscall FUN_0054ded0(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_UpgradeTerminal::vftable;
  if (*(Ref **)((int)this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  FUN_004025a0((int *)((int)this + 0x34));
  piVar1 = *(int **)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x2c);
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x28);
    }
    piVar2 = piVar1;
    if ((0xfff < (*(int *)((int)this + 0x30) - (int)piVar1 & 0xffffffc0U)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0054dfd0(int param_1)

{
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x290))();
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x138))(1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    FUN_0053cfb0(*(void **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


void __fastcall FUN_0054e010(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffdb4;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  uint in_stack_fffffdec;
  byte *pbVar6;
  code *local_1ec;
  code *local_1e8;
  undefined4 *local_1e4;
  void *local_1e0;
  undefined4 local_1dc [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6c2f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0x2a;
  *(undefined4 *)(param_1 + 0x18) = 0x18;
  FUN_0043d780((int)local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(param_1 + 0x14);
  local_1c8 = *(undefined4 *)(param_1 + 0x18);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffdec & 0xffffff00);
  local_1e0 = pvVar1;
  FUN_00402690(&stack0xfffffdec,&PTR_005ce008,0);
  uStack_22c = 0x54e0c6;
  piVar2 = (int *)FUN_0055f500(pvVar1,*(int *)(param_1 + 0xc),local_1dc,
                               *(int *)(param_1 + 0xc) + 0x70,*(int *)(param_1 + 0x14),
                               *(int *)(param_1 + 0x18),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x1c) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x1c));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  local_1e0 = *(void **)(iVar3 + 4);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  FUN_00591070("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(param_1 + 0xc);
  local_1e0 = *(void **)(param_1 + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 0x194);
  if (*(undefined4 **)(iVar3 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar3 + 400),puVar4,&local_1e0);
  }
  else {
    *puVar4 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = (undefined4 *)FUN_005adb0f(0xa8);
  puVar4 = FUN_0042b260(local_1e4);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  local_1ec = FUN_0054e870;
  local_1e4 = (undefined4 *)param_1;
  FUN_00551580(puVar4 + 6,&local_1ec);
  local_1e8 = FUN_0054edd0;
  local_1e4 = (undefined4 *)param_1;
  FUN_00551620((void *)(*(int *)(param_1 + 0x24) + 0x68),&local_1e8);
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd) = 1;
  local_1e4 = (undefined4 *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar4 = FUN_0042bc30(local_1e4,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x34,
                        *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        param_1 + 0x34);
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  FUN_0054ed20(param_1);
  FUN_0054edf0(param_1);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054f720;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  pvVar1 = (void *)(in_stack_fffffdb4 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006204f4,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar5,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00550cc0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621c38,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_005506b0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621c54,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,9);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_005512d0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"COMPONENTS",10);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00551430;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"MODULES",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00551000;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xe;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CONFIRM",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00551240;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CANCEL",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054fe20;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x12;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620518,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054f9f0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x14;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"REPAIR",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00550080;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x16;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006224fc,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0053d810(local_54);
  FUN_0054edf0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  FUN_00465e40((int)local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054e870(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff84;
  void *local_50 [3];
  int local_44 [3];
  byte *local_38;
  void *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c57c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  FUN_004024e0(local_2c,&param_1);
  local_8._0_1_ = 2;
  uVar11 = 0;
  iVar9 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      pbVar2 = in_stack_0000001c + iVar9;
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(byte **)pbVar2;
      }
      FUN_00403640(local_2c,pbVar10,*(uint *)(pbVar2 + 0x10));
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar11 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_0042de40(*(void **)((int)this + 0x20),"`!MCH>`2 %s");
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  uVar11 = 0;
  iVar9 = *(int *)((int)this + 0x2c);
  pbVar10 = *(byte **)((int)local_34 + 0x28);
  local_38 = pbVar10;
  if (iVar9 - (int)pbVar10 >> 6 != 0) {
    do {
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      pbVar2 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar2 = *(byte **)pbVar10;
      }
      uVar4 = FUN_004031f0(pbVar2,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        FUN_0042b900(local_44,(int *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
        if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar7 + 8))();
        FUN_004025a0(local_44);
        goto LAB_0054ebca;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x40;
      iVar9 = *(int *)((int)local_34 + 0x2c);
    } while (uVar11 < (uint)(iVar9 - (int)local_38 >> 6));
  }
  pvVar8 = local_34;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar11 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_00620618,4);
  pbVar10 = local_38;
  if ((char)uVar11 == '\0') {
    local_44[1] = 0;
    local_44[2] = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    FUN_00402690(local_50,"Unknown command.",0x10);
    pvVar8 = *(void **)((int)pvVar8 + 0x20);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff84,local_50);
    FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < (uint)local_44[2]) {
      pvVar8 = local_50[0];
      if ((0xfff < local_44[2] + 1U) &&
         (pvVar8 = *(void **)((int)local_50[0] + -4),
         0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
LAB_0054ec8b:
    piVar7 = *(int **)((int)local_34 + 0x20);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      FUN_0054ef70((int)pvVar8);
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
    else {
      uVar11 = 0;
      if (iVar9 - (int)local_38 >> 6 == 0) goto LAB_0054ec8b;
      uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      pbVar2 = local_38;
      do {
        pbVar6 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pbVar6 = *(byte **)in_stack_0000001c;
        }
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),pbVar6,uVar4);
        if ((char)uVar4 != '\0') {
          FUN_0042b900(local_44,(int *)&stack0x0000001c);
          pvVar8 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
          if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar7 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0(local_44);
          piVar7 = *(int **)((int)pvVar8 + 0x20);
          goto LAB_0054ebc5;
        }
        uVar11 = uVar11 + 1;
        pbVar2 = pbVar2 + 0x40;
        uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar11 < (uint)(*(int *)((int)local_34 + 0x2c) - (int)pbVar10 >> 6));
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
  }
LAB_0054ebc5:
  FUN_0042d280(piVar7);
LAB_0054ebca:
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0054ebfc;
    FUN_005adb3f(pvVar8);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
LAB_0054ebfc:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0054ed20(int param_1)

{
  int iVar1;
  uint in_stack_ffffffd0;
  void *pvVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    FUN_0042de40(*(void **)(param_1 + 0x20),"`7Welcome to `$%s");
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0," `!** Ship Mechanic Terminal",0x1c);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar2);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(iVar1 + 0x398) + 0x18));
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar2);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
  }
  return;
}


void __fastcall FUN_0054edd0(int param_1)

{
  FUN_0054edf0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __fastcall FUN_0054edf0(int param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  void *pvVar3;
  int iVar4;
  Color3B local_47 [3];
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5800;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591e00((undefined1 *)local_44,"MCH> `%%%s%c");
  local_8 = 0;
  ppppuVar2 = local_2c;
  FUN_00591e00((undefined1 *)ppppuVar2,"`$%dc ");
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)(param_1 + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      FUN_00403640(local_44,&DAT_005e7468,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppuVar1 = local_2c;
  if (0xf < local_18) {
    ppppuVar1 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_44,ppppuVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  FUN_004024e0(&stack0xffffff8c,local_44);
  FUN_0042dec0(*(void **)(param_1 + 0x20),(byte *)ppppuVar2);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0054ef70(int param_1)

{
  void *pvVar1;
  uint in_stack_ffffffa8;
  undefined4 *puVar2;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`%Upgrade Terminal 1.9.1",0x18);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`7(c) by Purchase Tech",0x16);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  puVar2 = (undefined4 *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`0Valid commands:",0x11);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),puVar2);
  local_14 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6 != 0) {
    do {
      FUN_00591e00((undefined1 *)local_30,&DAT_005e7500);
      pvVar1 = *(void **)(param_1 + 0x20);
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar1 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar1 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_0054f15e;
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"`3HELP",6);
  pvVar1 = *(void **)(param_1 + 0x20);
  local_8 = 1;
  FUN_004024e0(&stack0xffffffa8,local_30);
  FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
LAB_0054f15e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0054f180(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  puVar2 = (undefined4 *)piVar1[2];
  FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
  puVar2[1] = *puVar2;
  FUN_0042d280(piVar1);
  FUN_0054ed20(param_1);
  FUN_0054edf0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __thiscall FUN_0054f1c0(void *this,int *param_1)

{
  char *pcVar1;
  
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Module   : `0%s");
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Manufact.: `!%s");
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Type     : `7%s");
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Cost     : `$%dc");
  FUN_00437210(*(int *)(*param_1 + 0xc));
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Comp. Ct.: `7%d`8/`7%d");
  FUN_0042dcd0(*(int *)((int)this + 0x20));
  switch(*(undefined4 *)(*(int *)(*param_1 + 8) + 4)) {
  case 1:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Boot Time: `#%ds");
    pcVar1 = "`3Pwr Gen. : `$%.0f";
    goto LAB_0054f2a5;
  case 2:
    pcVar1 = "`3Pwr Strge: `$%.0f";
    goto LAB_0054f2a5;
  case 3:
    pcVar1 = "`3Plot Time: `!%.0fs";
    break;
  case 4:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Sensitv. : `!%c%d%%");
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Analysis : `!~%ds");
    goto LAB_0054f409;
  case 5:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Tubes    : `$%.0f");
    pcVar1 = "`3Reload   : `!%.0fs";
LAB_0054f2a5:
    FUN_0042de40(*(void **)((int)this + 0x20),pcVar1);
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz");
    return;
  default:
    goto switchD_0054f286_caseD_6;
  case 7:
LAB_0054f409:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Boot Time: `#%ds");
    goto LAB_0054f643;
  case 8:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Tubes    : `!%.0fs");
    pcVar1 = "`3Spinup   : `!%.0fs";
    break;
  case 9:
    pcVar1 = "`3Rotation : `!%.0f^/s";
    break;
  case 10:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Spinup Tm: `!%.0fs");
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Calc Time: `!%.0fs");
    pcVar1 = "`3Range    : `0%.0fly";
    break;
  case 0xb:
    pcVar1 = "`3Thrust   : `@%.0fgm/s";
    break;
  case 0xc:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Hit Chce : `!%d%%");
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Reload Tm: `!%.0fs");
    pcVar1 = "`3Range    : `0%.0fgm";
    break;
  case 0xe:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Boot Time: `#%ds");
    pcVar1 = "`3Sync Time: `!%.0fs";
    goto LAB_0054f346;
  case 0xf:
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Boot Time: `#%ds");
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Range    : `!%.0fs");
    pcVar1 = "`3Radius   : `!%.0fs";
LAB_0054f346:
    FUN_0042de40(*(void **)((int)this + 0x20),pcVar1);
    FUN_0042de40(*(void **)((int)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz");
    goto LAB_0054f664;
  }
  FUN_0042de40(*(void **)((int)this + 0x20),pcVar1);
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Boot Time: `#%ds");
LAB_0054f643:
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Emissions: `$%d`3 @ `$%dhz");
LAB_0054f664:
  FUN_0042de40(*(void **)((int)this + 0x20),"`3Pwr Drain: `^%.0f");
  FUN_0042de40(*(void **)((int)this + 0x20),"`3High Em. : `$%d`3 @ `$%dhz");
  FUN_0042de40(*(void **)((int)this + 0x20),"`3High Drn.: `^%.0f");
switchD_0054f286_caseD_6:
  return;
}


void __thiscall FUN_0054f720(void *this,byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint in_stack_ffffffc4;
  void *pvVar5;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 != '\0') {
    pvVar5 = (void *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,
                 "`3LIST [components|module|pods]`2: list all components, modules or pods available for sale"
                 ,0x5a);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
    goto LAB_0054f9cf;
  }
  iVar4 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar4 != iVar4) {
    uVar2 = *(uint *)(param_2 + 0x14);
    local_14 = param_2;
    iVar4 = *(int *)(DAT_0065b3d4 + 0x398);
    if (0xf < uVar2) {
      local_14 = *(byte **)param_2;
    }
    param_1 = param_2;
    if (0xf < uVar2) {
      param_1 = *(byte **)param_2;
    }
    pbVar3 = param_2;
    if (0xf < uVar2) {
      pbVar3 = *(byte **)param_2;
    }
    FUN_00413ec0(&param_1,tolower_exref,(char *)pbVar3,(char *)(param_1 + *(int *)(param_2 + 0x10)),
                 local_14);
    pbVar1 = param_2;
    pbVar3 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar3 = *(byte **)param_2;
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(param_2 + 0x10),(byte *)"components",10);
    if ((char)uVar2 != '\0') {
      uVar2 = 0;
      if (*(int *)(iVar4 + 0x68) - *(int *)(iVar4 + 100) >> 2 != 0) {
        do {
          uVar2 = uVar2 + 1;
          FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7%2d`3] `7%s `3(`!%s`3) `$%dc");
        } while (uVar2 < (uint)(*(int *)(iVar4 + 0x68) - *(int *)(iVar4 + 100) >> 2));
      }
      goto LAB_0054f9cf;
    }
    pbVar3 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar3 = *(byte **)pbVar1;
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(pbVar1 + 0x10),(byte *)"module",6);
    if ((char)uVar2 != '\0') {
      uVar2 = 0;
      if (*(int *)(iVar4 + 0x5c) - *(int *)(iVar4 + 0x58) >> 2 != 0) {
        do {
          uVar2 = uVar2 + 1;
          FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7%2d`3] `7%s `3(`!%s`3) `$%dc");
        } while (uVar2 < (uint)(*(int *)(iVar4 + 0x5c) - *(int *)(iVar4 + 0x58) >> 2));
      }
      goto LAB_0054f9cf;
    }
    pbVar3 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar3 = *(byte **)pbVar1;
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(pbVar1 + 0x10),&DAT_00622690,4);
    if ((char)uVar2 != '\0') {
      pvVar5 = (void *)(in_stack_ffffffc4 & 0xffffff00);
      FUN_00402690(&stack0xffffffc4,"`!Pods available:",0x11);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      iVar4 = 0;
      do {
        if (iVar4 == 0) {
          FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7normal`3] `!new, standard pod`3 - `$%dc")
          ;
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7%s`3] `!%s");
          FUN_0042de40(*(void **)((int)this + 0x20),"   `3%s - `$%dc");
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      goto LAB_0054f9cf;
    }
  }
  FUN_0054f720(this,(byte *)0x1,(byte *)0x0,0);
LAB_0054f9cf:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054f9f0(void *this,byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte ****ppppbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  undefined **ppuVar9;
  char *pcVar10;
  uint uVar11;
  byte *in_stack_ffffffa4;
  void *pvVar12;
  byte ***local_34 [4];
  uint local_24;
  uint local_20;
  void *local_1c;
  byte ***local_18;
  byte ***local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c6dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if ((char)param_1 == '\0') {
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 != iVar2) {
      uVar11 = *(uint *)(param_2 + 0x14);
      pbVar6 = param_2;
      if (0xf < uVar11) {
        pbVar6 = *(byte **)param_2;
      }
      param_1 = param_2;
      if (0xf < uVar11) {
        param_1 = *(byte **)param_2;
      }
      pbVar5 = param_2;
      if (0xf < uVar11) {
        pbVar5 = *(byte **)param_2;
      }
      FUN_00413ec0(&param_1,tolower_exref,(char *)pbVar5,
                   (char *)(param_1 + *(int *)(param_2 + 0x10)),pbVar6);
      pbVar5 = param_2;
      pbVar6 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar6 = *(byte **)param_2;
      }
      uVar11 = FUN_004031f0(pbVar6,*(uint *)(param_2 + 0x10),(byte *)"status",6);
      if ((char)uVar11 != '\0') {
        if (DAT_0065c2ec == (byte *)0x0) {
          DAT_0065c2ec = (byte *)FUN_005adb0f(1);
          param_1 = DAT_0065c2ec;
        }
        FUN_0051a7e0(*(void **)(DAT_0065b5cc + 0xd0),*(void **)((int)this + 0x20));
        goto LAB_0054fdfd;
      }
      pbVar6 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar6 = *(byte **)pbVar5;
      }
      uVar11 = FUN_004031f0(pbVar6,*(uint *)(pbVar5 + 0x10),&DAT_00622988,3);
      if ((char)uVar11 != '\0') {
        pvVar12 = *(void **)(DAT_0065b5cc + 0xd0);
        FUN_0049b6c0();
        iVar2 = FUN_0051a690(pvVar12);
        if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2 * 5) {
LAB_0054fdd3:
          uVar11 = 0x28;
          pcVar10 = "`$ ** not enough credits for this repair";
        }
        else {
          FUN_0049b6c0();
          FUN_0051a720(*(void **)(DAT_0065b5cc + 0xd0));
          in_stack_ffffffa4 = (byte *)((uint)in_stack_ffffffa4 & 0xffffff00);
          FUN_00402690(&stack0xffffffa4,"Repair",6);
          FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar2 * -5,in_stack_ffffffa4);
          uVar11 = 0x15;
          pcVar10 = "`0 ** repair complete";
        }
        goto LAB_0054fddf;
      }
      FUN_004024e0(local_34,(undefined4 *)pbVar5);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = (byte ***)local_34;
      if (0xf < local_20) {
        local_14 = local_34[0];
      }
      ppppbVar3 = local_34;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_34[0];
      }
      local_18 = (byte ***)local_34;
      if (0xf < local_20) {
        local_18 = local_34[0];
      }
      iVar8 = 0;
      iVar2 = (int)((int)ppppbVar3 + local_24) - (int)local_18;
      if ((byte ****)((int)ppppbVar3 + local_24) < local_18) {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        do {
          iVar4 = tolower((int)(char)*(byte *)((int)local_18 + iVar8));
          *(byte *)((int)local_14 + iVar8) = (byte)iVar4;
          iVar8 = iVar8 + 1;
          this = local_1c;
        } while (iVar8 != iVar2);
      }
      ppuVar9 = &PTR_DAT_005df7c4;
      do {
        pbVar6 = *ppuVar9;
        param_1 = pbVar6 + 1;
        pbVar5 = pbVar6;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        ppppbVar3 = local_34;
        if (0xf < local_20) {
          ppppbVar3 = (byte ****)local_34[0];
        }
        uVar11 = FUN_004031f0((byte *)ppppbVar3,local_24,pbVar6,(int)pbVar5 - (int)param_1);
        if ((char)uVar11 != '\0') {
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_20) {
            ppppbVar3 = (byte ****)local_34[0];
            if ((0xfff < local_20 + 1) &&
               (ppppbVar3 = (byte ****)local_34[0][-1],
               (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar3)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar3);
          }
          FUN_004024e0(&stack0xffffffa4,(undefined4 *)param_2);
          pbVar6 = (byte *)FUN_00519b40(in_stack_ffffffa4);
          FUN_0049b6c0();
          iVar2 = FUN_0051a630(*(void **)(DAT_0065b5cc + 0xd0),(int)pbVar6);
          if (iVar2 == 0) {
            uVar11 = 0x19;
            pcVar10 = "`$ ** no damage to repair";
          }
          else {
            if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2) goto LAB_0054fdd3;
            in_stack_ffffffa4 = (byte *)((uint)in_stack_ffffffa4 & 0xffffff00);
            FUN_00402690(&stack0xffffffa4,"Repair",6);
            FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-iVar2,in_stack_ffffffa4);
            param_1 = pbVar6;
            piVar7 = FUN_00420f40((void *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x14c),(int *)&param_1);
            *piVar7 = 0;
            uVar11 = 0x15;
            pcVar10 = "`0 ** repair complete";
          }
          goto LAB_0054fddf;
        }
        ppuVar9 = ppuVar9 + 1;
      } while ((int)ppuVar9 < 0x5df7d8);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_34[0];
        if ((0xfff < local_20 + 1) &&
           (ppppbVar3 = (byte ****)local_34[0][-1],
           (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar3);
      }
      pvVar12 = (void *)((uint)in_stack_ffffffa4 & 0xffffff00);
      FUN_00402690(&stack0xffffffa4,"`$ ** unknown hull section",0x1a);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
    }
    FUN_0054f9f0(this,(byte *)0x1,(byte *)0x0,0);
  }
  else {
    uVar11 = 0x4c;
    pcVar10 = "`3REPAIR [status|all|hull section]`2: repair, or show the current hull state";
LAB_0054fddf:
    pvVar12 = (void *)((uint)in_stack_ffffffa4 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,pcVar10,uVar11);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar12);
  }
LAB_0054fdfd:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054fe20(void *this,byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint in_stack_ffffffc4;
  void *pvVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 != '\0') {
    pvVar7 = (void *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,
                 "`3INFO [component|module|pod] [number]`2: describe a module, component or pod for sale"
                 ,0x56);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
    goto LAB_0055005a;
  }
  if ((uint)((param_3 - (int)param_2) / 0x18) < 2) {
LAB_00550038:
    FUN_0054fe20(this,(byte *)0x1,(byte *)0x0,0);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x14);
    iVar2 = *(int *)(DAT_0065b3d4 + 0x398);
    pbVar3 = param_2;
    if (0xf < uVar1) {
      pbVar3 = *(byte **)param_2;
    }
    param_1 = param_2;
    if (0xf < uVar1) {
      param_1 = *(byte **)param_2;
    }
    pbVar6 = param_2;
    if (0xf < uVar1) {
      pbVar6 = *(byte **)param_2;
    }
    FUN_00413ec0(&param_1,tolower_exref,(char *)pbVar6,(char *)(param_1 + *(int *)(param_2 + 0x10)),
                 pbVar3);
    pbVar3 = param_2 + 0x18;
    if (0xf < *(uint *)(param_2 + 0x2c)) {
      pbVar3 = *(byte **)pbVar3;
    }
    iVar4 = atoi((char *)pbVar3);
    pbVar6 = param_2;
    uVar1 = iVar4 - 1;
    pbVar3 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar3 = *(byte **)param_2;
    }
    uVar5 = FUN_004031f0(pbVar3,*(uint *)(param_2 + 0x10),(byte *)"component",9);
    if ((char)uVar5 == '\0') {
      pbVar3 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar3 = *(byte **)pbVar6;
      }
      uVar5 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),(byte *)"module",6);
      if ((char)uVar5 == '\0') goto LAB_00550038;
      if ((-1 < (int)uVar1) &&
         (uVar1 < (uint)(*(int *)(iVar2 + 0x5c) - *(int *)(iVar2 + 0x58) >> 2))) {
        FUN_0054f1c0(this,*(int **)(*(int *)(iVar2 + 0x58) + uVar1 * 4));
        goto LAB_0055005a;
      }
    }
    else if ((-1 < (int)uVar1) &&
            (uVar1 < (uint)(*(int *)(iVar2 + 0x68) - *(int *)(iVar2 + 100) >> 2))) {
      FUN_0042de40(*(void **)((int)this + 0x20),"`3Component: `0%s");
      FUN_0042de40(*(void **)((int)this + 0x20),"`3Manufact.: `!%s");
      FUN_0042de40(*(void **)((int)this + 0x20),"`3Type     : `7%s");
      FUN_0042de40(*(void **)((int)this + 0x20),"`3Cost     : `$%dc");
      goto LAB_0055005a;
    }
    pvVar7 = (void *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,"`$Error:`3 invalid module.",0x1a);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar7);
  }
LAB_0055005a:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}
