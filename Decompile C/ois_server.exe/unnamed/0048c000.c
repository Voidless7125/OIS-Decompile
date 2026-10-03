#include "../ois_server.exe.h"


undefined1 * __thiscall FUN_0048d1b0(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *in_stack_ffffffdc;
  
  iVar2 = *(int *)((int)this + 0x11c) + param_2 * 0x44;
  if ((param_2 == 0) || (param_2 == 2)) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((iVar1 == 4) || (iVar1 == 3)) {
      iVar2 = *(int *)(iVar2 + 0x20);
      if (999 < iVar2) {
        FUN_004a84a0(iVar2 + -1000);
        FUN_00591e00(param_1,"%s_Detail.png");
        return param_1;
      }
      if (iVar2 != -1) {
        FUN_004a84a0(iVar2);
        FUN_00591e00(param_1,"%s_Detail.png");
        return param_1;
      }
    }
    else if (((iVar1 == 2) || (iVar1 == 1)) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != -1)) {
      if (iVar2 < 1000) {
        FUN_004a84a0(iVar2);
      }
      else {
        FUN_004024e0(&stack0xffffffdc,
                     *(undefined4 **)
                      (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar2 * 4) + 0x58));
        FUN_004a8380(in_stack_ffffffdc);
      }
      FUN_00591e00(param_1,"%s_Detail.png");
      return param_1;
    }
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((iVar1 == 4) || (iVar1 == 3)) {
      FUN_004024e0(param_1,(undefined4 *)(iVar2 + 0x28));
      return param_1;
    }
    if (iVar1 == 2) {
      if (*(int *)(iVar2 + 0x18) != -1) {
        iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0x44) +
                        *(int *)(iVar2 + 0x18) * 4);
LAB_0048d21f:
        FUN_00437150(*(int *)(iVar2 + 4));
        FUN_00591e00(param_1,"%s%s.png");
        return param_1;
      }
    }
    else if ((iVar1 == 1) && (*(int *)(iVar2 + 0x18) != -1)) {
      iVar2 = **(int **)(*(int *)(*(int *)(DAT_0065b3d4 + 0x398) + 100) + *(int *)(iVar2 + 0x18) * 4
                        );
      goto LAB_0048d21f;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  return param_1;
}


void __thiscall FUN_0048d3b0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar11;
  undefined4 extraout_ECX_03;
  void *pvVar12;
  uint extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  uint uVar13;
  uint in_stack_ffffff38;
  byte *in_stack_ffffff54;
  byte *in_stack_ffffff6c;
  int *local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9cc6;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar1 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar1 + 4) == 1) {
    iVar9 = *(int *)(iVar1 + 0x18);
    puVar8 = *(undefined4 **)(DAT_0065b3d4 + 0x398);
    if (iVar9 < 1000) {
      puStack_20 = &stack0xfffffffc;
      local_58 = FUN_004a84a0(iVar9);
    }
    else {
      puStack_20 = &stack0xfffffffc;
      FUN_004024e0(&stack0xffffff6c,
                   *(undefined4 **)
                    (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar9 * 4) + 0x58));
      local_58 = (int *)FUN_004a8380(in_stack_ffffff6c);
      iVar9 = *local_58;
    }
    iVar5 = FUN_0049d2f0(puVar8,iVar9,*(int *)(iVar1 + 0x1c),'\x01');
    *(int *)(iVar1 + 0x40) = iVar5;
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)local_58[7]);
    local_14 = 0;
    FUN_004024e0(&stack0xffffff54,puVar8);
    local_14 = 0xffffffff;
    FUN_00410140(*(int *)(iVar1 + 0x1c),in_stack_ffffff54);
    uVar6 = FUN_00506db0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar9,
                         *(int *)(iVar1 + 0x1c));
    if ((char)uVar6 == '\0') {
      if (param_1 != (void *)0x0) {
        pvVar12 = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
        FUN_00402690(&stack0xffffff6c,"`^Error: unable to put cargo in hold. Cancelling.",0x31);
        FUN_0042ddb0(param_1,pvVar12);
      }
    }
    else {
      FUN_0049c860(puVar8,iVar9,*(int *)(iVar1 + 0x1c));
      FUN_004024e0(&stack0xffffff6c,local_58 + 1);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-*(int *)(iVar1 + 0x40),
                   in_stack_ffffff6c);
      piVar7 = (int *)FUN_00591e00((undefined1 *)local_54,
                                   "`!Transaction complete: `$%dc `7debited.\n\n`!%d`7x `0%s`7 transfered to your hold."
                                  );
      if ((int *)((int)this + 0xc) != piVar7) {
        FUN_00401b20((int *)((int)this + 0xc));
        iVar5 = piVar7[1];
        iVar2 = piVar7[2];
        iVar3 = piVar7[3];
        *(int *)((int)this + 0xc) = *piVar7;
        *(int *)((int)this + 0x10) = iVar5;
        *(int *)((int)this + 0x14) = iVar2;
        *(int *)((int)this + 0x18) = iVar3;
        *(undefined8 *)((int)this + 0x1c) = *(undefined8 *)(piVar7 + 4);
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
      }
      if (0xf < local_40) {
        pvVar12 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar12 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`!Transaction complete: `$%dc `7transfered");
        FUN_0042de40(param_1,"`!%d`7x `0%s`7 transfered to your hold.");
      }
      FUN_00591070("DETAIL","Bought %dx%s for %dc");
      pvVar12 = (void *)(extraout_ECX_00 & 0xffffff00);
      FUN_00402690(&stack0xffffff6c,"non_contract_trades",0x13);
      local_14 = 1;
      uVar6 = extraout_ECX_01;
      if (DAT_0065c294 == 0) {
        puVar8 = (undefined4 *)FUN_005adb0f(0x28);
        local_14 = CONCAT31(local_14._1_3_,2);
        DAT_0065c294 = FUN_0051e500(puVar8);
        uVar6 = extraout_ECX_02;
      }
      local_14 = 0xffffffff;
      FUN_0051e750(uVar6,pvVar12);
      FUN_00402690(&stack0xffffff68,&PTR_005ce008,0);
      local_14 = 3;
      FUN_00402690(&stack0xffffff50,"non_contract_trades",0x13);
      local_14 = CONCAT31(local_14._1_3_,4);
      pvVar12 = (void *)(in_stack_ffffff38 & 0xffffff00);
      FUN_00402690(&stack0xffffff38,"commerce",8);
      local_14 = 0xffffffff;
      FUN_00401a50(pvVar12);
      *(int *)(iVar1 + 0x20) = iVar9;
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4) = 3;
    }
  }
  else {
    puVar4 = &stack0xfffffffc;
    if (*(int *)(iVar1 + 4) != 2) goto LAB_0048d9e4;
    iVar9 = *(int *)(iVar1 + 0x18);
    pvVar12 = *(void **)(DAT_0065b3d4 + 0x398);
    piVar7 = FUN_004a84a0(iVar9);
    iVar9 = FUN_0049d2f0(pvVar12,iVar9,*(int *)(iVar1 + 0x1c),'\0');
    *(int *)(iVar1 + 0x40) = iVar9;
    FUN_0049c8d0(pvVar12,*piVar7,*(int *)(iVar1 + 0x1c));
    uVar13 = *(int *)(DAT_0065b5cc + 0x88) - *(int *)(DAT_0065b5cc + 0x84) >> 2;
    uVar10 = 0;
    if (uVar13 != 0) {
      do {
        piVar11 = *(int **)(*(int *)(DAT_0065b5cc + 0x84) + uVar10 * 4);
        if (*piVar11 == *(int *)(iVar1 + 0x18)) goto LAB_0048d7b4;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar13);
    }
    piVar11 = (int *)0x0;
LAB_0048d7b4:
    FUN_00506f20(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar11,*(int *)(iVar1 + 0x1c));
    FUN_004024e0(&stack0xffffff6c,piVar7 + 1);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_03,*(uint *)(iVar1 + 0x40),
                 in_stack_ffffff6c);
    piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,
                                 "`!Transaction complete: `$%dc `7transfered.\n\n`!%d`7x `0%s`7 transfered from your hold."
                                );
    if ((int *)((int)this + 0x24) != piVar7) {
      FUN_00401b20((int *)((int)this + 0x24));
      iVar9 = piVar7[1];
      iVar5 = piVar7[2];
      iVar2 = piVar7[3];
      *(int *)((int)this + 0x24) = *piVar7;
      *(int *)((int)this + 0x28) = iVar9;
      *(int *)((int)this + 0x2c) = iVar5;
      *(int *)((int)this + 0x30) = iVar2;
      *(undefined8 *)((int)this + 0x34) = *(undefined8 *)(piVar7 + 4);
      piVar7[4] = 0;
      piVar7[5] = 0xf;
      *(undefined1 *)piVar7 = 0;
    }
    if (0xf < local_28) {
      pvVar12 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar12 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    if (param_1 != (void *)0x0) {
      FUN_0042de40(param_1,"`!Transaction complete: `$%dc `7transfered");
      FUN_0042de40(param_1,"`!%d`7x `0%s`7 transfered from your hold.");
    }
    FUN_00591070("DETAIL","Sold %dx%s for %dc");
    pvVar12 = (void *)(extraout_ECX_04 & 0xffffff00);
    FUN_00402690(&stack0xffffff6c,"non_contract_sales",0x12);
    local_14 = 5;
    uVar6 = extraout_ECX_05;
    if (DAT_0065c294 == 0) {
      puVar8 = (undefined4 *)FUN_005adb0f(0x28);
      local_14 = CONCAT31(local_14._1_3_,6);
      DAT_0065c294 = FUN_0051e500(puVar8);
      uVar6 = extraout_ECX_06;
    }
    local_14 = 0xffffffff;
    FUN_0051e750(uVar6,pvVar12);
    FUN_00402690(&stack0xffffff68,&PTR_005ce008,0);
    local_14 = 7;
    FUN_00402690(&stack0xffffff50,"non_contract_sales",0x12);
    local_14 = CONCAT31(local_14._1_3_,8);
    pvVar12 = (void *)(in_stack_ffffff38 & 0xffffff00);
    FUN_00402690(&stack0xffffff38,"commerce",8);
    local_14 = 0xffffffff;
    FUN_00401a50(pvVar12);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 4) = 4;
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  puVar4 = puStack_20;
LAB_0048d9e4:
  puStack_20 = puVar4;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_0048da10(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar9;
  undefined4 extraout_ECX_01;
  void *pvVar10;
  uint uVar11;
  byte *in_stack_ffffffa0;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar1 + 0x8c) == 1) {
    iVar2 = *(int *)(iVar1 + 0xa0);
    pvVar10 = *(void **)(DAT_0065b3d4 + 0x398);
    if (999 < iVar2) {
      FUN_004024e0(&stack0xffffffa0,
                   *(undefined4 **)
                    (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar2 * 4 + -4000) + 0x58));
      piVar3 = (int *)FUN_004a8380(in_stack_ffffffa0);
      iVar5 = DAT_0065b5cc;
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar2 * 4) + 0x58)
                      + 0x28);
      if (iVar8 == -1) {
        iVar8 = piVar3[0x16];
      }
      iVar8 = *(int *)(iVar1 + 0xa4) * iVar8;
      *(int *)(iVar1 + 200) = iVar8;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x124) + 0x1c);
      if (iVar8 - iVar5 != 0 && iVar5 <= iVar8) {
        if (param_1 != (void *)0x0) {
          FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough credit in your account",0x2a)
          ;
          FUN_0042de40(param_1,"`^Error: not enough credit in your account");
          __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_0048e025;
      }
      uVar4 = FUN_00506db0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar3,
                           *(int *)(iVar1 + 0xa4));
      iVar8 = DAT_0065b5cc;
      if ((char)uVar4 == '\0') {
        if (param_1 != (void *)0x0) {
          pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
          FUN_00402690(&stack0xffffffa0,"`^Error: unable to put cargo in hold. Cancelling.",0x31);
          FUN_0042ddb0(param_1,pvVar10);
          __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_0048e025;
      }
      iVar5 = *(int *)(DAT_0065b5cc + 0x13c);
      if (*(int *)(*(int *)(*(int *)(iVar5 + -4000 + iVar2 * 4) + 0x54) + 0x18) == 0) {
        piVar9 = (int *)(*(int *)(*(int *)(iVar5 + -4000 + iVar2 * 4) + 0x58) + 0x18);
        *piVar9 = *piVar9 - *(int *)(iVar1 + 0xa4);
        piVar9 = (int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x13c) + -4000 + iVar2 * 4) + 0x58) +
                        0x20);
        *piVar9 = *piVar9 - *(int *)(iVar1 + 0xa4);
        iVar5 = *(int *)(iVar8 + 0x13c);
      }
      iVar8 = *(int *)(iVar5 + -4000 + iVar2 * 4);
      if (*(int *)(*(int *)(iVar8 + 0x54) + 0x18) == 2) {
        piVar9 = (int *)(*(int *)(iVar8 + 0x58) + 0x18);
        *piVar9 = *piVar9 - *(int *)(iVar1 + 0xa4);
      }
      if (0 < *(int *)(iVar1 + 200)) {
        FUN_004024e0(&stack0xffffffa0,piVar3 + 1);
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-*(int *)(iVar1 + 200),
                     in_stack_ffffffa0);
      }
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`!Transaction complete: `$%dc `7transfered");
        FUN_0042de40(param_1,"`!%d`7x `0%s`7 transfered to your hold.");
      }
      *(int *)(iVar1 + 0xa8) = iVar2;
      *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x8c) = 3;
      goto LAB_0048e00f;
    }
    piVar3 = FUN_004a84a0(iVar2);
    iVar8 = *(int *)(iVar1 + 0xa4);
    iVar5 = FUN_0049d5b0(pvVar10,iVar2,iVar8,'\x01');
    *(int *)(iVar1 + 200) = iVar5;
    uVar4 = FUN_00506db0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar2,iVar8);
    if ((char)uVar4 == '\0') {
      if (param_1 != (void *)0x0) {
        pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
        FUN_00402690(&stack0xffffffa0,"`^Error: unable to put cargo in hold. Cancelling.",0x31);
        FUN_0042ddb0(param_1,pvVar10);
      }
    }
    else {
      if (-1 < *(int *)(iVar1 + 0xa4)) {
        uVar6 = 0;
        uVar11 = *(int *)((int)pvVar10 + 0x8c) - *(int *)((int)pvVar10 + 0x88) >> 2;
        if (uVar11 != 0) {
          do {
            iVar8 = *(int *)(*(int *)((int)pvVar10 + 0x88) + uVar6 * 4);
            if (*(int *)(iVar8 + 0x14) == iVar2) {
              piVar9 = (int *)(iVar8 + 0x10);
              *piVar9 = *piVar9 - *(int *)(iVar1 + 0xa4);
              iVar8 = *(int *)((int)pvVar10 + 0x88);
              iVar5 = *(int *)(iVar8 + uVar6 * 4);
              if (*(int *)(iVar5 + 0x10) < 0) {
                *(undefined4 *)(iVar5 + 0x10) = 0;
                iVar8 = *(int *)((int)pvVar10 + 0x88);
              }
              *(undefined4 *)(*(int *)(uVar6 * 4 + iVar8) + 0x30) = 0xffffffff;
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar11);
        }
      }
      FUN_004024e0(&stack0xffffffa0,piVar3 + 1);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-*(int *)(iVar1 + 200),
                   in_stack_ffffffa0);
      piVar3 = (int *)FUN_00591e00((undefined1 *)local_24,
                                   "`!Transaction complete: `$%dc `7debited.\n\n`!%d`7x `0%s`7 transfered to your hold."
                                  );
      FUN_00413230((void *)((int)this + 0xc),piVar3);
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
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`!Transaction complete: `$%dc `7transfered");
        FUN_0042de40(param_1,"`!%d`7x `0%s`7 transfered to your hold.");
      }
      *(int *)(iVar1 + 0xa8) = iVar2;
      *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar1 + 0xa4);
      *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x8c) = 3;
    }
  }
  else {
    if (*(int *)(iVar1 + 0x8c) != 2) goto LAB_0048e025;
    iVar2 = *(int *)(iVar1 + 0xa0);
    pvVar10 = *(void **)(DAT_0065b3d4 + 0x398);
    piVar3 = FUN_004a84a0(iVar2);
    iVar8 = FUN_0049d5b0(pvVar10,iVar2,*(int *)(iVar1 + 0xa4),'\0');
    iVar2 = DAT_0065b5cc;
    uVar6 = 0;
    *(int *)(iVar1 + 200) = iVar8;
    puVar7 = *(undefined4 **)(iVar2 + 0x84);
    uVar11 = *(int *)(iVar2 + 0x88) - (int)puVar7 >> 2;
    if (uVar11 != 0) {
      do {
        piVar9 = (int *)*puVar7;
        if (*piVar9 == *(int *)(iVar1 + 0xa0)) goto LAB_0048ded9;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar11);
    }
    piVar9 = (int *)0x0;
LAB_0048ded9:
    FUN_00506f20(*(void **)(*(int *)(iVar2 + 0xd0) + 0x1f8),piVar9,*(int *)(iVar1 + 0xa4));
    FUN_0049c8d0(pvVar10,*piVar3,*(int *)(iVar1 + 0xa4));
    FUN_004024e0(&stack0xffffffa0,piVar3 + 1);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_01,*(uint *)(iVar1 + 200),
                 in_stack_ffffffa0);
    piVar3 = (int *)FUN_00591e00((undefined1 *)local_24,
                                 "`!Transaction complete: `$%dc `7transfered.\n\n`!%d`7x `0%s`7 transfered from your hold."
                                );
    if ((int *)((int)this + 0x24) != piVar3) {
      FUN_00401b20((int *)((int)this + 0x24));
      iVar2 = piVar3[1];
      iVar8 = piVar3[2];
      iVar5 = piVar3[3];
      *(int *)((int)this + 0x24) = *piVar3;
      *(int *)((int)this + 0x28) = iVar2;
      *(int *)((int)this + 0x2c) = iVar8;
      *(int *)((int)this + 0x30) = iVar5;
      *(undefined8 *)((int)this + 0x34) = *(undefined8 *)(piVar3 + 4);
      piVar3[4] = 0;
      piVar3[5] = 0xf;
      *(undefined1 *)piVar3 = 0;
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
    if (param_1 != (void *)0x0) {
      FUN_0042de40(param_1,"`!Transaction complete: `$%dc `7transfered");
      FUN_0042de40(param_1,"`!%d`7x `0%s`7 transfered from your hold.");
    }
    *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)(iVar1 + 0x90) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x8c) = 4;
LAB_0048e00f:
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(iVar1 + 0xa4);
  }
  *(undefined4 *)(iVar1 + 0xa0) = 0xffffffff;
LAB_0048e025:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0048e040(void *this,void *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *_Src;
  float fVar4;
  float ****ppppfVar5;
  float **ppfVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  undefined4 extraout_ECX_01;
  void *pvVar18;
  uint uVar19;
  size_t _Size;
  void *pvVar20;
  float fVar21;
  uint in_stack_ffffff38;
  undefined1 local_b0 [12];
  undefined4 uStack_a4;
  void *in_stack_ffffff6c;
  char *pcVar22;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9d87;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar1 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar1 + 0x48) != 1) {
    puVar10 = &stack0xfffffffc;
    if ((*(int *)(iVar1 + 0x48) != 2) ||
       (uVar11 = FUN_0048b800(this,1,(void *)0x0), puVar10 = puStack_20, (char)uVar11 == '\0'))
    goto LAB_0048ed17;
    pfVar2 = *(float **)
              (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0x44) +
              *(int *)(iVar1 + 0x5c) * 4);
    fVar4 = pfVar2[1];
    if ((float)*(int *)((int)fVar4 + 0x10) <= *pfVar2) {
      fVar21 = 1.0;
      if (*pfVar2 < (float)*(int *)((int)fVar4 + 0x14)) {
        fVar21 = 1.0 - (float)*(int *)((int)fVar4 + 0x18) / 100.0;
      }
    }
    else {
      fVar21 = 0.0;
    }
    uVar11 = (uint)((float)*(int *)((int)fVar4 + 0x20) * 0.5 * fVar21);
    if ((int)uVar11 < 1) {
      uVar11 = 1;
    }
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)((int)pfVar2[1] + 0x38));
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_01,uVar11,in_stack_ffffff6c);
    ppppfVar5 = *(float *****)
                 (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0x44) +
                 *(int *)(iVar1 + 0x5c) * 4);
    if (param_1 != (void *)0x0) {
      FUN_0042de40(param_1,"`0Selling `3Component `!%s `3for `$%dc");
    }
    pvVar20 = (void *)((int)this + 0x24);
    FUN_00402690(pvVar20,&PTR_005ce008,0);
    if ((ppppfVar5[1][0x20] == (float **)0xa) || (ppppfVar5[1][0x20] == (float **)0xb)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`!Addon : `%%%s\n");
      local_14 = 0xb;
      puVar13 = puVar12;
      if (0xf < (uint)puVar12[5]) {
        puVar13 = (undefined4 *)*puVar12;
      }
      FUN_00403640(pvVar20,puVar13,puVar12[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar18 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar18 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_0048e9b7:
        local_14 = 0xffffffff;
        FUN_005adb3f(pvVar18);
      }
    }
    else {
      puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Comp. : `%%%s\n");
      local_14 = 0xc;
      puVar13 = puVar12;
      if (0xf < (uint)puVar12[5]) {
        puVar13 = (undefined4 *)*puVar12;
      }
      FUN_00403640(pvVar20,puVar13,puVar12[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar18 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar18 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_0048e9b7;
      }
    }
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Manu. : `%%%s\n");
    local_14 = 0xd;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar18);
    }
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Type  : `%%%s\n");
    local_14 = 0xe;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar18);
    }
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Socket: `%%%s\n");
    local_14 = 0xf;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar18);
    }
    ppfVar6 = ppppfVar5[1][0x20];
    if ((ppfVar6 == (float **)0xa) || (ppfVar6 == (float **)0xb)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (ppfVar6 == (float **)0xa)) {
      puVar13 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Adapts: `%%%s\n");
      local_14 = 0x10;
      FUN_00403490(pvVar20,puVar13);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar18 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar18 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar18);
      }
    }
    if ((float)(int)ppppfVar5[1][5] <= (float)*ppppfVar5) {
      if ((float)(int)ppppfVar5[1][4] <= (float)*ppppfVar5) {
        uVar11 = 0x16;
        pcVar22 = "`7State : `0undamaged\n";
      }
      else {
        uVar11 = 0x1b;
        pcVar22 = "`7State : `@non-functional\n";
      }
    }
    else {
      uVar11 = 0x14;
      pcVar22 = "`7State : `^damaged\n";
    }
    FUN_00403640(pvVar20,pcVar22,uVar11);
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`%%- sold for `$%dc `%%-");
    local_14 = 0x11;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar20 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar20 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar20);
    }
    piVar14 = (int *)FUN_0048d1b0(this,(undefined1 *)local_54,1);
    FUN_00413230((void *)(iVar1 + 0x6c),piVar14);
    if (0xf < local_40) {
      pvVar20 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar20 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar20);
    }
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x60);
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    FUN_005076c0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),ppppfVar5);
    *(undefined4 *)(iVar1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x48) = 4;
    *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
    puVar10 = puStack_20;
    goto LAB_0048ed17;
  }
  iVar17 = *(int *)(DAT_0065b3d4 + 0x398);
  puStack_20 = &stack0xfffffffc;
  uVar11 = FUN_0048aee0(this,1,(void *)0x0);
  puVar10 = puStack_20;
  if ((char)uVar11 == '\0') goto LAB_0048ed17;
  FUN_004024e0(&stack0xffffff6c,
               (undefined4 *)
               (*(int *)(**(int **)(*(int *)(iVar17 + 100) + *(int *)(iVar1 + 0x5c) * 4) + 4) + 0x38
               ));
  pfVar2 = (float *)**(undefined4 **)(*(int *)(iVar17 + 100) + *(int *)(iVar1 + 0x5c) * 4);
  fVar21 = (float)*(int *)((int)pfVar2[1] + 0x20) * (*pfVar2 / 100.0);
  fVar4 = 1.0;
  if (1.0 <= fVar21) {
    fVar4 = fVar21;
  }
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),pfVar2,-(int)fVar4,in_stack_ffffff6c);
  FUN_005074d0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),
               (float *)**(undefined4 **)(*(int *)(iVar17 + 100) + *(int *)(iVar1 + 0x5c) * 4));
  if (param_1 != (void *)0x0) {
    FUN_0042de40(param_1,"`0Bought `3Component `!%s `3for `$%dc");
  }
  pvVar20 = (void *)((int)this + 0xc);
  FUN_00402690(pvVar20,&PTR_005ce008,0);
  piVar14 = *(int **)(*(int *)(iVar17 + 100) + *(int *)(iVar1 + 0x5c) * 4);
  iVar3 = *(int *)(*(int *)(*piVar14 + 4) + 0x80);
  if ((iVar3 == 10) || (iVar3 == 0xb)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`!Addon : `%%%s\n");
    local_14 = 0;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_0048e2b8:
      local_14 = 0xffffffff;
      FUN_005adb3f(pvVar18);
    }
  }
  else {
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Comp. : `%%%s\n");
    local_14 = 1;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_0048e2b8;
    }
  }
  puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Manu. : `%%%s\n");
  local_14 = 2;
  puVar13 = puVar12;
  if (0xf < (uint)puVar12[5]) {
    puVar13 = (undefined4 *)*puVar12;
  }
  FUN_00403640(pvVar20,puVar13,puVar12[4]);
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pvVar18 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar18 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
  puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Type  : `%%%s\n");
  local_14 = 3;
  puVar13 = puVar12;
  if (0xf < (uint)puVar12[5]) {
    puVar13 = (undefined4 *)*puVar12;
  }
  FUN_00403640(pvVar20,puVar13,puVar12[4]);
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pvVar18 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar18 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
  puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Socket: `%%%s\n");
  local_14 = 4;
  puVar13 = puVar12;
  if (0xf < (uint)puVar12[5]) {
    puVar13 = (undefined4 *)*puVar12;
  }
  FUN_00403640(pvVar20,puVar13,puVar12[4]);
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pvVar18 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar18 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
  iVar3 = *(int *)(*(int *)(*piVar14 + 4) + 0x80);
  if ((iVar3 == 10) || (iVar3 == 0xb)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((bVar9) && (iVar3 == 10)) {
    puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7Adapts: `%%%s\n");
    local_14 = 5;
    puVar13 = puVar12;
    if (0xf < (uint)puVar12[5]) {
      puVar13 = (undefined4 *)*puVar12;
    }
    FUN_00403640(pvVar20,puVar13,puVar12[4]);
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pvVar18 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar18 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar18);
    }
  }
  puVar12 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"\n`%%- purchased, `$%dc`%% -");
  local_14 = 6;
  puVar13 = puVar12;
  if (0xf < (uint)puVar12[5]) {
    puVar13 = (undefined4 *)*puVar12;
  }
  FUN_00403640(pvVar20,puVar13,puVar12[4]);
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pvVar20 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar20 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  in_stack_ffffff6c = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
  FUN_00402690(&stack0xffffff6c,"components_purchased",0x14);
  local_14 = 7;
  uVar15 = extraout_ECX;
  if (DAT_0065c294 == 0) {
    puVar13 = (undefined4 *)FUN_005adb0f(0x28);
    local_14 = CONCAT31(local_14._1_3_,8);
    DAT_0065c294 = FUN_0051e500(puVar13);
    uVar15 = extraout_ECX_00;
  }
  local_14 = 0xffffffff;
  FUN_0051e750(uVar15,in_stack_ffffff6c);
  uStack_a4 = 0x48e5ce;
  FUN_00402690(&stack0xffffff68,&PTR_005ce008,0);
  local_14 = 9;
  local_b0[0] = 0;
  FUN_00402690(local_b0,"components_purchased",0x14);
  local_14 = CONCAT31(local_14._1_3_,10);
  pvVar20 = (void *)(in_stack_ffffff38 & 0xffffff00);
  FUN_00402690(&stack0xffffff38,"commerce",8);
  local_14 = 0xffffffff;
  FUN_00401a50(pvVar20);
  piVar14 = (int *)FUN_0048d1b0(this,(undefined1 *)local_3c,1);
  if ((int *)(iVar1 + 0x6c) != piVar14) {
    FUN_00401b20((int *)(iVar1 + 0x6c));
    iVar3 = piVar14[1];
    iVar7 = piVar14[2];
    iVar8 = piVar14[3];
    *(int *)(iVar1 + 0x6c) = *piVar14;
    *(int *)(iVar1 + 0x70) = iVar3;
    *(int *)(iVar1 + 0x74) = iVar7;
    *(int *)(iVar1 + 0x78) = iVar8;
    *(undefined8 *)(iVar1 + 0x7c) = *(undefined8 *)(piVar14 + 4);
    piVar14[4] = 0;
    piVar14[5] = 0xf;
    *(undefined1 *)piVar14 = 0;
  }
  if (0xf < local_28) {
    pvVar20 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar20 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  *(int *)(iVar1 + 100) = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x60);
  piVar14 = *(int **)(iVar17 + 100);
  _Src = *(int **)(iVar17 + 0x68);
  iVar3 = piVar14[*(int *)(iVar1 + 0x5c)];
  if (piVar14 != _Src) {
    do {
      if (*piVar14 == iVar3) break;
      piVar14 = piVar14 + 1;
    } while (piVar14 != _Src);
    if (piVar14 != _Src) {
      piVar16 = piVar14 + 1;
      uVar11 = 0;
      uVar19 = (uint)((int)_Src + (3 - (int)piVar16)) >> 2;
      if (_Src < piVar16) {
        uVar19 = 0;
      }
      if (uVar19 != 0) {
        do {
          if (*piVar16 != iVar3) {
            *piVar14 = *piVar16;
            piVar14 = piVar14 + 1;
          }
          uVar11 = uVar11 + 1;
          piVar16 = piVar16 + 1;
        } while (uVar11 != uVar19);
      }
      if (piVar14 != _Src) {
        _Size = *(int *)(iVar17 + 0x68) - (int)_Src;
        memmove(piVar14,_Src,_Size);
        *(size_t *)(iVar17 + 0x68) = _Size + (int)piVar14;
      }
    }
  }
  *(undefined4 *)(iVar1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
  puVar10 = puStack_20;
  if ((*(int *)(iVar17 + 0x68) - *(int *)(iVar17 + 100) >> 2 == 0) || (*(int *)(iVar1 + 0x50) != 0))
  {
    *(undefined4 *)(iVar1 + 0x48) = 3;
  }
  else {
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 1;
    iVar1 = *(int *)((int)this + 0x11c);
    iVar17 = *(int *)(iVar1 + 0x50);
    if (iVar17 < 0) {
      iVar17 = *(int *)(iVar1 + 0x5c);
    }
    else {
      *(int *)(iVar1 + 0x5c) = iVar17;
      *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    }
    if (iVar17 < 0) {
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x48) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
    }
  }
LAB_0048ed17:
  puStack_20 = puVar10;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_0048ed40(void *this,int param_1,void *param_2)

{
  if (param_1 == 0) {
    FUN_0048d3b0(this,param_2);
  }
  else if (param_1 == 2) {
    FUN_0048da10(this,param_2);
  }
  else if (param_1 == 1) {
    FUN_0048e040(this,param_2);
  }
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
    FUN_004127d0();
    FUN_004b8550();
  }
  return;
}


int __fastcall FUN_0048eda0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  if (iVar2 == -1) {
    return 0;
  }
  uVar5 = 0;
  piVar1 = (int *)FUN_00412490();
  puVar3 = (undefined4 *)*piVar1;
  uVar4 = piVar1[1] - (int)puVar3 >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)*puVar3;
      if (*piVar1 == iVar2) goto LAB_0048ede0;
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  piVar1 = (int *)0x0;
LAB_0048ede0:
  if (*(char *)(param_1 + 0xe9) == '\0') {
    iVar2 = FUN_004a09a0((int)piVar1);
    return iVar2;
  }
  return (int)(float)piVar1[0x34];
}


void FUN_0048ee10(void *param_1)

{
  undefined4 *puVar1;
  void *this;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint in_stack_fffffec0;
  void *pvVar11;
  byte *in_stack_fffffedc;
  Color3B local_e7 [3];
  undefined1 *local_e4;
  void *local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9e1d;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0 = param_1;
  cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
  uVar8 = 0;
  local_dc = 0;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  do {
    while( true ) {
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      this = local_e0;
      if ((uint)(DAT_0065c290[1] - *DAT_0065c290 >> 2) <= uVar8) {
        pcVar9 = "`!Licenses";
        if (local_dc < 1) {
          pcVar9 = "Licenses";
        }
        local_e4 = &stack0xfffffedc;
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xfffffedc,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8 = 1;
        pvVar11 = (void *)(in_stack_fffffec0 & 0xffffff00);
        FUN_00402690(&stack0xfffffec0,&PTR_005ce008,0);
        local_8 = 0xffffffff;
        puVar3 = FUN_0043b590(local_78,1,pvVar11);
        local_8 = 2;
        puVar1 = *(undefined4 **)((int)this + 4);
        if (*(undefined4 **)((int)this + 8) == puVar1) {
          FUN_0043ce10(this,puVar1,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX,puVar1,puVar3);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x60;
        }
        local_8 = 0xffffffff;
        FUN_0043bfa0((int)local_78);
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        uVar8 = 0;
        local_dc = 0;
        piVar4 = DAT_0065c290;
        while( true ) {
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)FUN_005adb0f(0x18);
            piVar4[4] = 0;
            piVar4[5] = 0;
            *piVar4 = 0;
            piVar4[1] = 0;
            piVar4[2] = 0;
            piVar4[3] = 0;
            piVar4[4] = 0;
            piVar4[5] = 0;
            DAT_0065c290 = piVar4;
          }
          if ((uint)(piVar4[1] - *piVar4 >> 2) <= uVar8) break;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)FUN_005adb0f(0x18);
            piVar4[4] = 0;
            piVar4[5] = 0;
            *piVar4 = 0;
            piVar4[1] = 0;
            piVar4[2] = 0;
            piVar4[3] = 0;
            piVar4[4] = 0;
            piVar4[5] = 0;
            DAT_0065c290 = piVar4;
          }
          iVar5 = *(int *)(*piVar4 + uVar8 * 4);
          if ((*(int *)(iVar5 + 0x90) - *(int *)(iVar5 + 0x8c) >> 2 == 0) ||
             (iVar5 = FUN_004a09a0(iVar5), iVar5 < 1)) {
            uVar8 = uVar8 + 1;
          }
          else {
            local_dc = local_dc + 1;
            uVar8 = uVar8 + 1;
          }
        }
        pcVar9 = "`!Loans";
        if (local_dc < 1) {
          pcVar9 = "Loans";
        }
        local_e4 = &stack0xfffffedc;
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xfffffedc,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8 = 3;
        pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
        FUN_00402690(&stack0xfffffec0,&PTR_005ce008,0);
        local_8 = 0xffffffff;
        puVar3 = FUN_0043b590(local_78,2,pvVar11);
        local_8 = 4;
        puVar1 = *(undefined4 **)((int)this + 4);
        if (*(undefined4 **)((int)this + 8) == puVar1) {
          FUN_0043ce10(this,puVar1,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX_00,puVar1,puVar3);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x60;
        }
        local_8 = 0xffffffff;
        FUN_0043bfa0((int)local_78);
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        uVar8 = 0;
        iVar7 = 0;
        iVar5 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
        uVar10 = *(int *)(iVar5 + 0x98) - *(int *)(iVar5 + 0x94) >> 2;
        if (uVar10 != 0) {
          do {
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 1;
          } while (uVar8 < uVar10);
        }
        pcVar9 = "`!Contracts";
        if (iVar7 < 1) {
          pcVar9 = "Contracts";
        }
        local_e4 = &stack0xfffffedc;
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xfffffedc,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8 = 5;
        pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
        FUN_00402690(&stack0xfffffec0,&PTR_005ce008,0);
        local_8 = 0xffffffff;
        puVar3 = FUN_0043b590(local_78,3,pvVar11);
        local_8 = 6;
        puVar1 = *(undefined4 **)((int)this + 4);
        if (*(undefined4 **)((int)this + 8) == puVar1) {
          FUN_0043ce10(this,puVar1,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX_01,puVar1,puVar3);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x60;
        }
        local_8 = 0xffffffff;
        FUN_0043bfa0((int)local_78);
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        pcVar9 = "`!Passengers";
        iVar5 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
        if (*(int *)(iVar5 + 0x40c) - *(int *)(iVar5 + 0x408) >> 2 < 1) {
          pcVar9 = "Passengers";
        }
        local_e4 = &stack0xfffffedc;
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xfffffedc,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8 = 7;
        pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
        FUN_00402690(&stack0xfffffec0,&PTR_005ce008,0);
        local_8 = 0xffffffff;
        puVar3 = FUN_0043b590(local_78,4,pvVar11);
        local_8 = 8;
        puVar1 = *(undefined4 **)((int)this + 4);
        if (*(undefined4 **)((int)this + 8) == puVar1) {
          FUN_0043ce10(this,puVar1,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX_02,puVar1,puVar3);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x60;
        }
        local_8 = 0xffffffff;
        FUN_0043bfa0((int)local_78);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_dc + 1),'\0','\0','\0');
        pcVar9 = "`!Bounties";
        if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x120) -
            *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x11c) >> 2 < 1) {
          pcVar9 = "Bounties";
        }
        local_e4 = &stack0xfffffedc;
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xfffffedc,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8 = 9;
        pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
        FUN_00402690(&stack0xfffffec0,&PTR_005ce008,0);
        local_8 = 0xffffffff;
        puVar3 = FUN_0043b590(local_d8,5,pvVar11);
        local_8 = 10;
        puVar1 = *(undefined4 **)((int)this + 4);
        if (*(undefined4 **)((int)this + 8) == puVar1) {
          FUN_0043ce10(this,puVar1,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX_03,puVar1,puVar3);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x60;
        }
        FUN_0043bfa0((int)local_d8);
        ExceptionList = local_10;
        __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_e4 = &stack0xfffffedc;
      FUN_004024e0(&stack0xfffffedc,puVar1);
      local_8 = 0;
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      local_8 = 0xffffffff;
      cVar2 = FUN_004a0420(*(void **)(*DAT_0065c290 + uVar8 * 4),in_stack_fffffedc);
      if (cVar2 != '\0') break;
LAB_0048eff9:
      uVar8 = uVar8 + 1;
    }
    if (DAT_0065c290 == (int *)0x0) {
      DAT_0065c290 = (int *)FUN_005adb0f(0x18);
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
      *DAT_0065c290 = 0;
      DAT_0065c290[1] = 0;
      DAT_0065c290[2] = 0;
      DAT_0065c290[3] = 0;
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
    }
    if (*(char *)(*(int *)(*DAT_0065c290 + uVar8 * 4) + 0xe0) != '\0') goto LAB_0048eff9;
    local_dc = local_dc + 1;
    uVar8 = uVar8 + 1;
  } while( true );
}


void FUN_0048f5c0(void *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  Color3B *this;
  undefined4 extraout_ECX;
  void *pvVar5;
  uint uVar6;
  void *in_stack_fffffec4;
  undefined1 auStack_120 [4];
  undefined4 uStack_11c;
  byte *in_stack_fffffeec;
  uchar uVar7;
  uchar uVar8;
  Color3B local_ea [3];
  Color3B local_e7 [3];
  undefined1 *local_e4;
  void *local_e0;
  undefined4 *local_dc;
  uint local_d8;
  code *local_d4;
  undefined1 local_d0 [100];
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
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
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9e84;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar6 = 0;
  local_e0 = param_1;
  local_dc = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  local_d4 = Color3B_exref;
  do {
    local_d8 = uVar6;
    if (DAT_0065c290 == (int *)0x0) {
      DAT_0065c290 = (int *)FUN_005adb0f(0x18);
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
      *DAT_0065c290 = 0;
      DAT_0065c290[1] = 0;
      DAT_0065c290[2] = 0;
      DAT_0065c290[3] = 0;
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
    }
    if ((uint)(DAT_0065c290[1] - *DAT_0065c290 >> 2) <= uVar6) {
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    local_e4 = &stack0xfffffeec;
    uStack_11c = 0x48f6b4;
    FUN_004024e0(&stack0xfffffeec,local_dc);
    local_14 = 0;
    if (DAT_0065c290 == (int *)0x0) {
      uStack_11c = 0x48f6cb;
      DAT_0065c290 = (int *)FUN_005adb0f(0x18);
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
      *DAT_0065c290 = 0;
      DAT_0065c290[1] = 0;
      DAT_0065c290[2] = 0;
      DAT_0065c290[3] = 0;
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
    }
    local_14 = 0xffffffff;
    cVar2 = FUN_004a0420(*(void **)(*DAT_0065c290 + uVar6 * 4),in_stack_fffffeec);
    if (cVar2 != '\0') {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 1;
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      if (*(char *)(*(int *)(*DAT_0065c290 + uVar6 * 4) + 0xe0) == '\0') {
        ppvVar3 = (void **)FUN_00591e00((undefined1 *)local_6c,"`!%s\n`%%Cost: `$%dc");
        if (&local_3c != ppvVar3) {
          FUN_00401b20((int *)&local_3c);
          local_3c = *ppvVar3;
          pvStack_38 = ppvVar3[1];
          pvStack_34 = ppvVar3[2];
          pvStack_30 = ppvVar3[3];
          local_2c = ppvVar3[4];
          pvStack_28 = ppvVar3[5];
          ppvVar3[4] = (void *)0x0;
          ppvVar3[5] = (void *)0xf;
          *(undefined1 *)ppvVar3 = 0;
        }
        if (0xf < local_58) {
          pvVar5 = local_6c[0];
          if ((0xfff < local_58 + 1) &&
             (pvVar5 = *(void **)((int)local_6c[0] + -4),
             0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5)))) {
LAB_0048faf9:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
        local_5c = 0;
        local_58 = 0xf;
        local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
      }
      else {
        ppvVar3 = (void **)FUN_00591e00((undefined1 *)local_54,"`!%s\n`!- licensed -");
        if (&local_3c != ppvVar3) {
          FUN_00401b20((int *)&local_3c);
          local_3c = *ppvVar3;
          pvStack_38 = ppvVar3[1];
          pvStack_34 = ppvVar3[2];
          pvStack_30 = ppvVar3[3];
          local_2c = ppvVar3[4];
          pvStack_28 = ppvVar3[5];
          ppvVar3[4] = (void *)0x0;
          ppvVar3[5] = (void *)0xf;
          *(undefined1 *)ppvVar3 = 0;
        }
        if (0xf < local_40) {
          pvVar5 = local_54[0];
          if ((0xfff < local_40 + 1) &&
             (pvVar5 = *(void **)((int)local_54[0] + -4),
             0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar5)))) goto LAB_0048faf9;
          FUN_005adb3f(pvVar5);
        }
        local_44 = 0;
        local_40 = 0xf;
        local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      }
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      if (*(char *)(*(int *)(*DAT_0065c290 + uVar6 * 4) + 0xe0) == '\0') {
        uVar8 = ' ';
        uVar7 = '@';
        this = local_ea;
      }
      else {
        uVar8 = '@';
        uVar7 = 0x80;
        this = local_e7;
      }
      cocos2d::Color3B::Color3B(this,'@',uVar7,uVar8);
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      local_e4 = auStack_120;
      FUN_004024e0(auStack_120,&local_3c);
      local_14._0_1_ = 2;
      in_stack_fffffec4 = (void *)((uint)in_stack_fffffec4 & 0xffffff00);
      FUN_00402690(&stack0xfffffec4,&PTR_005ce008,0);
      local_14._0_1_ = 3;
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      local_14._0_1_ = 1;
      puVar4 = FUN_0043b590(local_d0,**(undefined4 **)(*DAT_0065c290 + uVar6 * 4),in_stack_fffffec4)
      ;
      pvVar5 = local_e0;
      local_14 = CONCAT31(local_14._1_3_,4);
      puVar1 = *(undefined4 **)((int)local_e0 + 4);
      if (*(undefined4 **)((int)local_e0 + 8) == puVar1) {
        FUN_0043ce10(local_e0,puVar1,puVar4);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar1,puVar4);
        *(int *)((int)pvVar5 + 4) = *(int *)((int)pvVar5 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_d0);
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar5 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar5 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5)))) goto LAB_0048faf9;
        FUN_005adb3f(pvVar5);
      }
    }
    uVar6 = local_d8 + 1;
  } while( true );
}


void __thiscall FUN_0048fb20(void *this,undefined1 *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *in_stack_ffffff80;
  char *pcVar11;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005b9ef1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  iVar6 = *(int *)((int)this + 0xd0);
  if (iVar6 == -1) {
    uVar3 = 0xf0;
    pcVar11 = 
    "Use this screen to acquire licenses which allow you to work for new employers.\n\nOnce a license is acquired, any contracts available from that employer will appear in the contracts section. Completing contracts makes more become available.\n\n"
    ;
  }
  else {
    piVar2 = (int *)FUN_00412490();
    uVar10 = 0;
    puVar9 = (undefined4 *)*piVar2;
    uVar3 = piVar2[1] - (int)puVar9 >> 2;
    if (uVar3 != 0) {
      do {
        piVar2 = (int *)*puVar9;
        if (*piVar2 == iVar6) goto LAB_0048fbb0;
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 < uVar3);
    }
    piVar2 = (int *)0x0;
LAB_0048fbb0:
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Name: `%%%s\n\n");
    local_8 = 1;
    puVar9 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar9 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar9,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_0048fc13:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!%s\n\n");
    local_8 = 2;
    puVar9 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar9 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar9,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
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
    FUN_00403640(param_1,"`7Offices: ",0xb);
    iVar6 = 0xb0;
    bVar1 = true;
    if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
      iVar6 = 0xbc;
    }
    puVar9 = *(undefined4 **)(iVar6 + 4 + (int)piVar2);
    for (puVar4 = *(undefined4 **)(iVar6 + (int)piVar2); puVar4 != puVar9; puVar4 = puVar4 + 6) {
      FUN_004024e0(local_2c,puVar4);
      local_8 = 3;
      FUN_004024e0(&stack0xffffff80,local_2c);
      FUN_004a6de0(in_stack_ffffff80);
      if (!bVar1) {
        FUN_00403640(param_1,&DAT_0060b624,4);
      }
      bVar1 = false;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%%s");
      local_8._0_1_ = 4;
      puVar7 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar7 = (undefined4 *)*puVar5;
      }
      FUN_00403640(param_1,puVar7,puVar5[4]);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_30) {
        pvVar8 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar8 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_0048fc13;
        FUN_005adb3f(pvVar8);
      }
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0048fc13;
        FUN_005adb3f(pvVar8);
      }
    }
    FUN_00403640(param_1,&DAT_005e310c,2);
    if ((char)piVar2[0x38] == '\0') {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7License Cost: `$%dc");
      local_8 = 5;
      puVar9 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar9 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar9,puVar4[4]);
      if (0xf < local_30) {
        pvVar8 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar8 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      goto LAB_0048fe62;
    }
    uVar3 = 0xe;
    pcVar11 = "`!- licensed -";
  }
  FUN_00403640(param_1,pcVar11,uVar3);
LAB_0048fe62:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 __fastcall FUN_0048fe90(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined1 uVar6;
  uint uVar7;
  uint in_stack_ffffffd0;
  int iVar8;
  int iVar9;
  
  uVar6 = 0;
  uVar1 = FUN_0048ffb0(param_1);
  if ((char)uVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0xd0);
    uVar7 = 0;
    piVar2 = (int *)FUN_00412490();
    puVar5 = (undefined4 *)*piVar2;
    uVar1 = piVar2[1] - (int)puVar5 >> 2;
    if (uVar1 != 0) {
      do {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar3) goto LAB_0048fed6;
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar7 < uVar1);
    }
    piVar2 = (int *)0x0;
LAB_0048fed6:
    FUN_004a00e0((int)piVar2);
    puVar5 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    FUN_0049e7b0((int)puVar5);
    FUN_0049e810(puVar5);
    pvVar4 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"License",7);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-piVar2[0x33],pvVar4);
    uVar6 = 1;
    FUN_00591070("WORLD","Player was given a license for %s");
    iVar3 = DAT_0065b3d4;
    if (DAT_0065b3d4 == 0) {
      iVar3 = *(int *)(DAT_0065b5cc + 0xd0);
    }
    iVar9 = -1;
    iVar8 = 0x2a;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,iVar3,iVar8,iVar9);
  }
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
    FUN_004127d0();
    FUN_004b8550();
  }
  return uVar6;
}


uint __fastcall FUN_0048ffb0(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0xcc) == 1) && (iVar1 = *(int *)(param_1 + 0xd0), iVar1 != -1)) {
    uVar4 = 0;
    piVar2 = (int *)FUN_00412490();
    puVar3 = (undefined4 *)*piVar2;
    in_EAX = piVar2[1] - (int)puVar3 >> 2;
    if (in_EAX != 0) {
      do {
        piVar2 = (int *)*puVar3;
        if (*piVar2 == iVar1) goto LAB_0048fff0;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 < in_EAX);
    }
    piVar2 = (int *)0x0;
LAB_0048fff0:
    if (((char)piVar2[0x38] == '\0') &&
       (in_EAX = *(uint *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c), piVar2[0x33] <= (int)in_EAX)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
