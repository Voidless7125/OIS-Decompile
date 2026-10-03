#include "../ois_server.exe.h"


void __fastcall FUN_00438020(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_10 [4];
  int local_c;
  int local_8;
  
  iVar5 = *param_1;
  uVar6 = 0;
  if (*(int *)(iVar5 + 0x54) - *(int *)(iVar5 + 0x50) >> 2 != 0) {
    local_c = -4 - (int)param_1;
    local_8 = iVar5;
    do {
      param_1 = param_1 + 1;
      if (0x13 < (int)uVar6) {
        FUN_00591070(&DAT_005cdc70,"ERROR: Too many components.");
        return;
      }
      iVar1 = *(int *)(iVar5 + 0x50);
      iVar2 = *(int *)((int)param_1 + iVar1 + local_c);
      if (*(char *)(iVar2 + 8) == '\0') {
        uVar3 = *(uint *)(iVar2 + 4);
        pfVar4 = (float *)*param_1;
        if (uVar3 == 0) {
          if (pfVar4 == (float *)0x0) {
            return;
          }
          iVar5 = local_8;
          if (*pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10)) {
            return;
          }
        }
        else if ((int)uVar3 < 1) {
          if ((pfVar4 == (float *)0x0) ||
             (iVar5 = local_8, *pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10))) {
            if (3 < ~uVar3) goto LAB_00438140;
            auStack_10[~uVar3] = 0;
          }
        }
        else if ((pfVar4 == (float *)0x0) ||
                (iVar5 = local_8, *pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10))) {
          if (3 < uVar3 - 1) {
LAB_00438140:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          (&stack0xffffffef)[uVar3] = 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(iVar5 + 0x54) - iVar1 >> 2));
  }
  return;
}


void __fastcall FUN_00438150(int param_1)

{
  void *this;
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *local_74 [5];
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
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2ec0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar2 = puVar4;
  if (0xf < *(uint *)(param_1 + 0x38)) {
    puVar2 = (undefined4 *)*puVar4;
  }
  *(undefined1 *)puVar2 = 0;
  this = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640(puVar4,"`%Cargo:\n",9);
  bVar1 = false;
  uVar8 = 0;
  piVar3 = (int *)((int)this + 0xc);
  do {
    if ((-1 < (int)uVar8) &&
       (((*(int *)((int)this + 8) < 1 || ((int)uVar8 < *(int *)((int)this + 8))) &&
        (iVar9 = *piVar3, iVar9 != 0)))) {
      bVar1 = true;
      if ((*(int *)(iVar9 + 8) < 1) || (*(int *)(iVar9 + 4) < 0)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        FUN_005069b0(this,(undefined1 *)local_5c,uVar8,'\0');
        local_8 = 1;
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7%02d - `8[empty]`7 (%s)\n");
        local_8._0_1_ = 2;
        puVar4 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar4 = (undefined4 *)*puVar2;
        }
        FUN_00403640((void *)(param_1 + 0x24),puVar4,puVar2[4]);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_30) {
          pvVar5 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004384f8;
          FUN_005adb3f(pvVar5);
        }
        local_8 = 0xffffffff;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_48) {
          pvVar5 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar5 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) goto LAB_004384f8;
          FUN_005adb3f(pvVar5);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      }
      else {
        uVar6 = 0;
        puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x84);
        uVar7 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar4 >> 2;
        if (uVar7 != 0) {
          do {
            if (*(int *)*puVar4 == *(int *)(((int *)((int)this + 0xc))[uVar8] + 4)) break;
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 < uVar7);
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7%02d - %dx `0%s`7 (%s)\n");
        local_8 = 0;
        puVar4 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar4 = (undefined4 *)*puVar2;
        }
        FUN_00403640((void *)(param_1 + 0x24),puVar4,puVar2[4]);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar5 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_004384f8;
          FUN_005adb3f(pvVar5);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
    }
    uVar8 = uVar8 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar8 < 0xe);
  if (!bVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    FUN_00403640((void *)(param_1 + 0x24)," `7** no cargo pods **\n",0x17);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  iVar9 = 1;
  do {
    FUN_005073f0(this,iVar9);
    FUN_00507270(this,iVar9);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`7%s: `%c%d`7/`%c%d\n");
    local_8 = 3;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640((void *)(param_1 + 0x24),puVar4,puVar2[4]);
    local_8 = 0xffffffff;
    if (0xf < local_60) {
      pvVar5 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar5 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar5)))) {
LAB_004384f8:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


void FUN_00438500(void)

{
  FUN_00591070(&DAT_005cdc70,"Cargo manager key hit");
  return;
}


void __thiscall FUN_00438520(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_2 + -8;
  return;
}


undefined4 * __thiscall FUN_00438540(void *this,void *param_1)

{
  int *this_00;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_00000024;
  uint in_stack_00000034;
  uint in_stack_00000038;
  byte *in_stack_ffffffc0;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_0000001c;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc0,&param_1);
  iVar2 = FUN_00438ed0(this,(int)in_stack_0000001c,'\x01',in_stack_ffffffc0);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    this_00 = (int *)(iVar2 + 0xa0);
    puVar4 = (undefined4 *)*this_00;
    uVar6 = 0;
    uVar7 = *(int *)(iVar2 + 0xa4) - (int)puVar4 >> 2;
    if (uVar7 != 0) {
      do {
        if (*(int *)*puVar4 == in_stack_00000020) {
          if (*(int *)(*this_00 + uVar6 * 4) != 0) {
            FUN_00591070("ERROR",
                         "ERROR: Duplicate conversation element ID \'%d\' for person %s, conversation %d"
                        );
            bVar1 = cc_assert_script_compatible
                              ("Duplicate conversation element ID for this person.");
            if (!bVar1) {
              cocos2d::log("Assert failed: %s");
            }
          }
          break;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar7);
    }
    pvVar3 = (void *)FUN_005adb0f(0x6c);
    puVar4 = FUN_0049fe60(pvVar3,local_14,in_stack_00000020);
    local_14 = puVar4;
    if ((undefined4 **)(puVar4 + 0xf) != &stack0x00000024) {
      puVar5 = &stack0x00000024;
      if (0xf < in_stack_00000038) {
        puVar5 = in_stack_00000024;
      }
      FUN_00402690(puVar4 + 0xf,puVar5,in_stack_00000034);
    }
    puVar5 = *(undefined4 **)(iVar2 + 0xa4);
    if (*(undefined4 **)(iVar2 + 0xa8) == puVar5) {
      FUN_00414080(this_00,puVar5,&local_14);
      puVar4 = local_14;
    }
    else {
      *puVar5 = puVar4;
      *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar3 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    puVar5 = in_stack_00000024;
    if ((0xfff < in_stack_00000038 + 1) &&
       (puVar5 = (undefined4 *)in_stack_00000024[-1],
       0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)puVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  return puVar4;
}


void __thiscall FUN_00438710(void *this,void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  byte *in_stack_ffffffc4;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2f3f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc4,&param_1);
  iVar2 = FUN_00438ed0(this,in_stack_0000001c,'\x01',in_stack_ffffffc4);
  if (iVar2 != 0) {
    pvVar3 = (void *)FUN_005adb0f(0x40);
    local_8._0_1_ = 2;
    local_14 = pvVar3;
    FUN_004024e0(&stack0xffffffc4,&stack0x00000020);
    local_14 = (void *)FUN_004a1a40(pvVar3,(undefined4 *)in_stack_ffffffc4);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar1 = *(undefined4 **)(iVar2 + 0x98);
    if (*(undefined4 **)(iVar2 + 0x9c) == puVar1) {
      FUN_004141e0((void *)(iVar2 + 0x94),puVar1,&local_14);
    }
    else {
      *puVar1 = local_14;
      *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar3 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pvVar3 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pvVar3 = *(void **)((int)in_stack_00000020 + -4);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_00438840(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  undefined4 *in_stack_00000040;
  void *pvVar6;
  byte *in_stack_ffffffc0;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2f7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000040;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc0,&param_1);
  pvVar6 = (void *)0x1;
  iVar1 = FUN_00438ed0(this,in_stack_0000001c,'\x01',in_stack_ffffffc0);
  if (iVar1 != 0) {
    uVar2 = 0;
    puVar5 = *(undefined4 **)(iVar1 + 0xa0);
    uVar4 = *(int *)(iVar1 + 0xa4) - (int)puVar5 >> 2;
    puVar3 = puVar5;
    if (uVar4 != 0) {
      do {
        if (*(int *)*puVar3 == in_stack_00000020) {
          iVar1 = puVar5[uVar2];
          if (iVar1 != 0) {
            this_00 = (void *)FUN_005adb0f(0x70);
            local_8._0_1_ = 2;
            FUN_004024e0(&stack0xffffffbc,&stack0x00000028);
            local_14 = FUN_00430610(this_00,in_stack_00000024,in_stack_00000020,pvVar6);
            local_8 = CONCAT31(local_8._1_3_,1);
            puVar5 = *(undefined4 **)(iVar1 + 100);
            if (*(undefined4 **)(iVar1 + 0x68) == puVar5) {
              FUN_00414080((void *)(iVar1 + 0x60),puVar5,&local_14);
              puVar5 = local_14;
            }
            else {
              *puVar5 = local_14;
              *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 4;
              puVar5 = local_14;
            }
            goto LAB_004388c2;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < uVar4);
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_004388c2:
  if (0xf < in_stack_00000018) {
    pvVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar6 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pvVar6 = in_stack_00000028;
    if ((0xfff < in_stack_0000003c + 1) &&
       (pvVar6 = *(void **)((int)in_stack_00000028 + -4),
       0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  return puVar5;
}


void __thiscall FUN_004389d0(void *this,void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  byte *in_stack_ffffffc0;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2fbf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000024;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc0,&param_1);
  iVar3 = FUN_00438ed0(this,in_stack_0000001c,'\x01',in_stack_ffffffc0);
  if (iVar3 != 0) {
    uVar6 = 0;
    puVar1 = *(undefined4 **)(iVar3 + 0xa0);
    uVar8 = *(int *)(iVar3 + 0xa4) - (int)puVar1 >> 2;
    puVar7 = puVar1;
    if (uVar8 != 0) {
      do {
        if (*(int *)*puVar7 == in_stack_00000020) {
          if (((void *)puVar1[uVar6] != (void *)0x0) &&
             (piVar4 = FUN_004a00a0((void *)puVar1[uVar6],local_14), piVar4 != (int *)0x0)) {
            pvVar5 = (void *)FUN_005adb0f(0x40);
            local_8._0_1_ = 2;
            FUN_004024e0(&stack0xffffffc0,&stack0x00000028);
            local_14 = FUN_004a1a40(pvVar5,(undefined4 *)in_stack_ffffffc0);
            local_8 = CONCAT31(local_8._1_3_,1);
            piVar2 = (int *)piVar4[0x1a];
            if ((int *)piVar4[0x1b] == piVar2) {
              FUN_004141e0(piVar4 + 0x19,piVar2,&local_14);
            }
            else {
              *piVar2 = local_14;
              piVar4[0x1a] = piVar4[0x1a] + 4;
            }
          }
          break;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar8);
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar5 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pvVar5 = in_stack_00000028;
    if ((0xfff < in_stack_0000003c + 1) &&
       (pvVar5 = *(void **)((int)in_stack_00000028 + -4),
       0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00438b50(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  basic_string<> *this_00;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  basic_string<> *in_stack_00000024;
  int in_stack_00000028;
  void *in_stack_0000002c;
  uint in_stack_00000040;
  basic_string<> *in_stack_ffffffc0;
  char *pcVar7;
  basic_string<> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2fff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000024;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffc0,&param_1);
  iVar1 = FUN_00438ed0(this,in_stack_0000001c,'\x01',(byte *)in_stack_ffffffc0);
  if (iVar1 == 0) {
    FUN_00591070(&DAT_005cdc70,"Invalid conversationID \'%d\'");
  }
  else {
    uVar3 = 0;
    puVar5 = *(undefined4 **)(iVar1 + 0xa0);
    uVar6 = *(int *)(iVar1 + 0xa4) - (int)puVar5 >> 2;
    if (uVar6 != 0) {
      do {
        if (*(int *)*puVar5 == in_stack_00000020) {
          pvVar4 = *(void **)(*(int *)(iVar1 + 0xa0) + uVar3 * 4);
          if (pvVar4 != (void *)0x0) {
            piVar2 = FUN_004a00a0(pvVar4,(int)local_14);
            if (piVar2 == (int *)0x0) {
              pcVar7 = "Invalid optionID \'%d\' in conversationID \'%d\'";
              goto LAB_00438bf5;
            }
            this_00 = (basic_string<> *)FUN_005adb0f(0x24);
            local_8._0_1_ = 2;
            local_14 = this_00;
            FUN_004024e0(&stack0xffffffc0,&stack0x0000002c);
            local_14 = FUN_004a3a90(this_00,in_stack_00000028,in_stack_ffffffc0);
            local_8 = CONCAT31(local_8._1_3_,1);
            puVar5 = (undefined4 *)piVar2[0x17];
            if ((undefined4 *)piVar2[0x18] == puVar5) {
              FUN_004141e0(piVar2 + 0x16,puVar5,&local_14);
            }
            else {
              *puVar5 = local_14;
              piVar2[0x17] = piVar2[0x17] + 4;
            }
            goto LAB_00438c02;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 < uVar6);
    }
    pcVar7 = "Invalid elementID \'%d\' in conversationID \'%d\'";
LAB_00438bf5:
    FUN_00591070(&DAT_005cdc70,pcVar7);
  }
LAB_00438c02:
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar4 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000040) {
    pvVar4 = in_stack_0000002c;
    if ((0xfff < in_stack_00000040 + 1) &&
       (pvVar4 = *(void **)((int)in_stack_0000002c + -4),
       0x1f < (uint)((int)in_stack_0000002c + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00438d20(void *this,void *param_1)

{
  basic_string<> *this_00;
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  basic_string<> *in_stack_ffffffbc;
  basic_string<> *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b303f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(&stack0xffffffbc,&param_1);
  local_14 = FUN_00438ed0(this,in_stack_0000001c,'\x01',(byte *)in_stack_ffffffbc);
  if (local_14 == 0) {
    FUN_00591070(&DAT_005cdc70,"Invalid conversationID \'%d\'");
  }
  else {
    uVar1 = 0;
    puVar3 = *(undefined4 **)(local_14 + 0xa0);
    uVar4 = *(int *)(local_14 + 0xa4) - (int)puVar3 >> 2;
    if (uVar4 != 0) {
      do {
        if (*(int *)*puVar3 == in_stack_00000020) {
          local_14 = *(int *)(*(int *)(local_14 + 0xa0) + uVar1 * 4);
          if (local_14 != 0) {
            this_00 = (basic_string<> *)FUN_005adb0f(0x24);
            local_8._0_1_ = 2;
            local_18 = this_00;
            FUN_004024e0(&stack0xffffffbc,&stack0x00000028);
            local_18 = FUN_004a3a90(this_00,in_stack_00000024,in_stack_ffffffbc);
            local_8 = CONCAT31(local_8._1_3_,1);
            puVar3 = *(undefined4 **)(local_14 + 0x58);
            if (*(undefined4 **)(local_14 + 0x5c) == puVar3) {
              FUN_004141e0((void *)(local_14 + 0x54),puVar3,&local_18);
            }
            else {
              *puVar3 = local_18;
              *(int *)(local_14 + 0x58) = *(int *)(local_14 + 0x58) + 4;
            }
            goto LAB_00438dc8;
          }
          break;
        }
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar1 < uVar4);
    }
    FUN_00591070(&DAT_005cdc70,"Invalid elementID \'%d\' in conversationID \'%d\'");
  }
LAB_00438dc8:
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar2 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pvVar2 = in_stack_00000028;
    if ((0xfff < in_stack_0000003c + 1) &&
       (pvVar2 = *(void **)((int)in_stack_00000028 + -4),
       0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


undefined4 __thiscall FUN_00438ed0(void *this,int param_1,char param_2,byte *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  byte **ppbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar8 = *(int *)((int)this + 0x3c);
  local_18 = 0;
  if (*(int *)((int)this + 0x40) - iVar8 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar8 + local_18 * 4);
      if ((*piVar1 == param_1) || (param_1 == -1)) {
        pbVar7 = (byte *)(piVar1 + 1);
        ppbVar4 = &param_3;
        if (0xf < in_stack_00000020) {
          ppbVar4 = (byte **)param_3;
        }
        if (0xf < (uint)piVar1[6]) {
          pbVar7 = *(byte **)pbVar7;
        }
        uVar5 = FUN_004031f0(pbVar7,piVar1[5],(byte *)ppbVar4,in_stack_0000001c);
        if ((char)uVar5 != '\0') {
          uVar5 = 0;
          bVar2 = true;
          iVar6 = piVar1[0x26] - piVar1[0x25] >> 2;
          if ((char)piVar1[0x24] == '\0') {
            if (iVar6 != 0) {
              do {
                if (param_2 == '\0') {
                  cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar8 + local_18 * 4) + 0x94) +
                                                 uVar5 * 4),
                                       *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                  bVar2 = (bool)(bVar2 & cVar3 != '\0');
                }
                uVar5 = uVar5 + 1;
                iVar8 = *(int *)((int)this + 0x3c);
                iVar6 = *(int *)(iVar8 + local_18 * 4);
              } while (uVar5 < (uint)(*(int *)(iVar6 + 0x98) - *(int *)(iVar6 + 0x94) >> 2));
            }
          }
          else {
            bVar2 = false;
            if (iVar6 != 0) {
              do {
                if ((param_2 != '\0') ||
                   (cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar8 + local_18 * 4) + 0x94)
                                                   + uVar5 * 4),
                                         *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8)),
                   cVar3 != '\0')) {
                  bVar2 = true;
                }
                uVar5 = uVar5 + 1;
                iVar8 = *(int *)((int)this + 0x3c);
                iVar6 = *(int *)(iVar8 + local_18 * 4);
              } while (uVar5 < (uint)(*(int *)(iVar6 + 0x98) - *(int *)(iVar6 + 0x94) >> 2));
            }
          }
          if (bVar2) {
            uVar9 = *(undefined4 *)(iVar8 + local_18 * 4);
            goto LAB_0043901c;
          }
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(*(int *)((int)this + 0x40) - iVar8 >> 2));
  }
  uVar9 = 0;
LAB_0043901c:
  if (0xf < in_stack_00000020) {
    pbVar7 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pbVar7 = *(byte **)(param_3 + -4), (byte *)0x1f < param_3 + (-4 - (int)pbVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_10;
  return uVar9;
}


undefined4 __thiscall FUN_004390e0(void *this,byte *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte **ppbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar8 = *(int *)((int)this + 0x3c);
  local_14 = 0;
  if (*(int *)((int)this + 0x40) - iVar8 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar8 + local_14 * 4);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        local_18 = (byte *)(iVar1 + 4);
        ppbVar6 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar6 = (byte **)param_1;
        }
        if (0xf < *(uint *)(iVar1 + 0x18)) {
          local_18 = *(byte **)local_18;
        }
        uVar4 = FUN_004031f0(local_18,*(uint *)(iVar1 + 0x14),(byte *)ppbVar6,in_stack_00000014);
        if ((char)uVar4 != '\0') {
          bVar2 = true;
          iVar5 = *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2;
          if (*(char *)(iVar1 + 0x90) == '\0') {
            if (iVar5 != 0) {
              uVar4 = 0;
              do {
                cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar8 + local_14 * 4) + 0x94) +
                                               uVar4 * 4),
                                     *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                uVar4 = uVar4 + 1;
                bVar2 = (bool)(bVar2 & cVar3 != '\0');
                iVar8 = *(int *)((int)this + 0x3c);
                iVar1 = *(int *)(iVar8 + local_14 * 4);
              } while (uVar4 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
            }
          }
          else {
            bVar2 = false;
            if (iVar5 != 0) {
              uVar4 = 0;
              do {
                cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar8 + local_14 * 4) + 0x94) +
                                               uVar4 * 4),
                                     *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                if (cVar3 != '\0') {
                  bVar2 = true;
                }
                uVar4 = uVar4 + 1;
                iVar8 = *(int *)((int)this + 0x3c);
                iVar1 = *(int *)(iVar8 + local_14 * 4);
              } while (uVar4 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
            }
          }
          if (bVar2) {
            uVar9 = **(undefined4 **)(iVar8 + local_14 * 4);
            goto LAB_00439296;
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((int)this + 0x40) - iVar8 >> 2));
  }
  uVar9 = 0xffffffff;
LAB_00439296:
  if (0xf < in_stack_00000018) {
    pbVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar7 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_10;
  return uVar9;
}


void FUN_004392f0(void)

{
  return;
}


void FUN_00439300(void)

{
  FUN_00591070(&DAT_005cdc70,"Conversation manager key hit");
  return;
}


void FUN_00439320(int param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2 != 0))
  {
    do {
      FUN_004a3f20(*(int **)(*(int *)(param_1 + 0x54) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2));
  }
  return;
}


undefined4 * __thiscall FUN_00439360(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 uStack00000030;
  uint in_stack_00000034;
  void *in_stack_00000038;
  undefined4 uStack00000048;
  uint in_stack_0000004c;
  void *in_stack_00000050;
  uint in_stack_00000064;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3101;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  *(undefined4 *)this = 0xffffffff;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  local_8._0_1_ = 4;
  FUN_004024e0((void *)((int)this + 0x1c),&stack0x00000020);
  local_8._0_1_ = 5;
  FUN_004024e0((void *)((int)this + 0x34),&stack0x00000050);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_004024e0((void *)((int)this + 0x4c),&stack0x00000038);
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar1 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pvVar1 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000020 + -4);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000030 = 0;
  in_stack_00000034 = 0xf;
  in_stack_00000020 = (void *)((uint)in_stack_00000020 & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pvVar1 = in_stack_00000038;
    if (0xfff < in_stack_0000004c + 1) {
      pvVar1 = *(void **)((int)in_stack_00000038 + -4);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000048 = 0;
  in_stack_0000004c = 0xf;
  in_stack_00000038 = (void *)((uint)in_stack_00000038 & 0xffffff00);
  if (0xf < in_stack_00000064) {
    pvVar1 = in_stack_00000050;
    if (0xfff < in_stack_00000064 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000050 + -4);
      if (0x1f < (uint)((int)in_stack_00000050 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


void * __thiscall FUN_00439500(void *this,void *param_1)

{
  undefined4 extraout_ECX;
  void *pvVar1;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  undefined4 uStack0000002c;
  uint in_stack_00000030;
  void *in_stack_00000034;
  undefined4 uStack00000044;
  uint in_stack_00000048;
  void *in_stack_0000004c;
  undefined4 uStack0000005c;
  uint in_stack_00000060;
  void *in_stack_00000064;
  uint in_stack_00000078;
  void *in_stack_ffffff74;
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  undefined1 auStack_5c [16];
  undefined4 uStack_4c;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3168;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 4;
  uStack_4c = 0x439546;
  FUN_004024e0(auStack_44,&stack0x00000064);
  local_8._0_1_ = 5;
  uStack_64 = 0x43955b;
  FUN_004024e0(auStack_5c,&stack0x0000004c);
  local_8._0_1_ = 6;
  FUN_004024e0(auStack_74,&stack0x00000034);
  local_8._0_1_ = 7;
  FUN_004024e0(&stack0xffffff74,&param_1);
  local_8._0_1_ = 4;
  FUN_00439360(this,extraout_ECX,in_stack_ffffff74);
  local_8 = CONCAT31(local_8._1_3_,8);
  *(undefined2 *)((int)this + 100) = 0;
  FUN_004024e0((void *)((int)this + 0x68),&stack0x0000001c);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xbf800000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0xf;
  *(undefined1 *)((int)this + 0xa0) = 0;
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x439642;
    FUN_005adb3f(pvVar1);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar1 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pvVar1 = *(void **)((int)in_stack_0000001c + -4);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x43968a;
    FUN_005adb3f(pvVar1);
  }
  uStack0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (void *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_00000048) {
    pvVar1 = in_stack_00000034;
    if (0xfff < in_stack_00000048 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000034 + -4);
      if (0x1f < (uint)((int)in_stack_00000034 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x4396d2;
    FUN_005adb3f(pvVar1);
  }
  uStack00000044 = 0;
  in_stack_00000048 = 0xf;
  in_stack_00000034 = (void *)((uint)in_stack_00000034 & 0xffffff00);
  if (0xf < in_stack_00000060) {
    pvVar1 = in_stack_0000004c;
    if (0xfff < in_stack_00000060 + 1) {
      pvVar1 = *(void **)((int)in_stack_0000004c + -4);
      if (0x1f < (uint)((int)in_stack_0000004c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x43971a;
    FUN_005adb3f(pvVar1);
  }
  uStack0000005c = 0;
  in_stack_00000060 = 0xf;
  in_stack_0000004c = (void *)((uint)in_stack_0000004c & 0xffffff00);
  if (0xf < in_stack_00000078) {
    pvVar1 = in_stack_00000064;
    if (0xfff < in_stack_00000078 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000064 + -4);
      if (0x1f < (uint)((int)in_stack_00000064 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x439762;
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00439780(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x60)) {
    pvVar1 = *(void **)(param_1 + 0x4c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x60) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00439895;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (0xf < *(uint *)(param_1 + 0x48)) {
    pvVar1 = *(void **)(param_1 + 0x34);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x48) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00439895;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (0xf < *(uint *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00439895;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00439895:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


int __fastcall FUN_004398a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xf;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return param_1;
}


void * __fastcall FUN_00439930(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x94)) {
    pvVar1 = *(void **)((int)param_1 + 0x80);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x94) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004399e5;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x94) = 0xf;
  *(undefined1 *)((int)param_1 + 0x80) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x7c)) {
    pvVar1 = *(void **)((int)param_1 + 0x68);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x7c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004399e5:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0xf;
  *(undefined1 *)((int)param_1 + 0x68) = 0;
  FUN_00439780((int)param_1);
  FUN_005adb3f(param_1);
  return param_1;
}


void __fastcall FUN_004399f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + uVar2 * 4) + 100) = 0;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + uVar2 * 4) + 0x65) = 0;
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + iVar1) + 0x98) = 0xbf800000;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2));
  }
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  uVar4 = 0;
  uVar2 = (*(int *)(param_1 + 0x18) - (int)puVar3) + 3U >> 2;
  if (*(undefined4 **)(param_1 + 0x18) < puVar3) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        FUN_00439930((void *)*puVar3);
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  return;
}


undefined4 __thiscall FUN_00439a90(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)((int)this + 8);
  uVar7 = 0;
  uVar9 = *(int *)((int)this + 0xc) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0xa0);
      if (0xf < *(uint *)(iVar2 + 0xb4)) {
        pbVar6 = *(byte **)(iVar2 + 0xa0);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0xb0),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_00439af2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_00439af2:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


undefined4 __thiscall FUN_00439b40(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar1 = *(int *)((int)this + 0x20);
  uVar6 = *(int *)((int)this + 0x24) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pbVar9 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar5 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar9 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_00439b94;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_00439b94:
  if (0xf < in_stack_00000018) {
    pbVar9 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar9 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar9);
  }
  return uVar8;
}


void __thiscall FUN_00439be0(void *this,byte *param_1)

{
  bool bVar1;
  byte **ppbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte **ppbVar6;
  uint uVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3198;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00591070(&DAT_005cdc70,"Attempting to mark email \'%s\' as fired...");
  iVar4 = *(int *)((int)this + 8);
  uVar7 = 0;
  bVar1 = false;
  ppbVar6 = (byte **)param_1;
  if (*(int *)((int)this + 0xc) - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + uVar7 * 4);
      ppbVar2 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar2 = ppbVar6;
      }
      pbVar5 = (byte *)(iVar4 + 0xa0);
      if (0xf < *(uint *)(iVar4 + 0xb4)) {
        pbVar5 = *(byte **)(iVar4 + 0xa0);
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0xb0),(byte *)ppbVar2,in_stack_00000014);
      if ((char)uVar3 != '\0') {
        FUN_00591070(&DAT_005cdc70,"...marked");
        bVar1 = true;
        *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + uVar7 * 4) + 0x65) = 1;
        *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + uVar7 * 4) + 100) = 0;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 8) + uVar7 * 4) + 0x98) = 0xbf800000;
        ppbVar6 = (byte **)param_1;
      }
      uVar7 = uVar7 + 1;
      iVar4 = *(int *)((int)this + 8);
    } while (uVar7 < (uint)(*(int *)((int)this + 0xc) - iVar4 >> 2));
    if (bVar1) goto LAB_00439cf7;
  }
  FUN_00591070(&DAT_005cdc70,"...NOT FOUND.");
  ppbVar6 = (byte **)param_1;
LAB_00439cf7:
  if (0xf < in_stack_00000018) {
    ppbVar2 = ppbVar6;
    if ((0xfff < in_stack_00000018 + 1) &&
       (ppbVar2 = (byte **)ppbVar6[-1], (byte *)0x1f < (byte *)((int)ppbVar6 + (-4 - (int)ppbVar2)))
       ) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppbVar2);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00439d40(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *this;
  int local_8;
  
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) == '\0') {
    *(undefined1 *)(param_2 + 0x65) = 1;
    local_8 = FUN_005adb0f(0xa0);
    iVar3 = FUN_004398a0(local_8);
    puVar4 = (undefined4 *)(param_2 + 0x68);
    local_8 = iVar3;
    if ((undefined4 *)(iVar3 + 0x68) != puVar4) {
      if (0xf < *(uint *)(param_2 + 0x7c)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0x68),puVar4,*(uint *)(param_2 + 0x78));
    }
    pbVar6 = (byte *)(param_2 + 4);
    this = (byte *)(iVar3 + 4);
    if (this != pbVar6) {
      if (0xf < *(uint *)(param_2 + 0x18)) {
        pbVar6 = *(byte **)pbVar6;
      }
      FUN_00402690(this,pbVar6,*(uint *)(param_2 + 0x14));
    }
    puVar4 = (undefined4 *)(param_2 + 0x1c);
    if ((undefined4 *)(iVar3 + 0x1c) != puVar4) {
      if (0xf < *(uint *)(param_2 + 0x30)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0x1c),puVar4,*(uint *)(param_2 + 0x2c));
    }
    puVar4 = (undefined4 *)(param_2 + 0x4c);
    if ((undefined4 *)(iVar3 + 0x4c) != puVar4) {
      if (0xf < *(uint *)(param_2 + 0x60)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0x4c),puVar4,*(uint *)(param_2 + 0x5c));
    }
    puVar4 = (undefined4 *)(param_2 + 0x34);
    if ((undefined4 *)(iVar3 + 0x34) != puVar4) {
      if (0xf < *(uint *)(param_2 + 0x48)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0x34),puVar4,*(uint *)(param_2 + 0x44));
    }
    puVar4 = (undefined4 *)(param_2 + 0xa0);
    if ((undefined4 *)(iVar3 + 0x80) != puVar4) {
      if (0xf < *(uint *)(param_2 + 0xb4)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0x80),puVar4,*(uint *)(param_2 + 0xb0));
    }
    iVar1 = *(int *)(DAT_0065b5cc + 0x124);
    pbVar6 = (byte *)(iVar1 + 4);
    if (0xf < *(uint *)(iVar1 + 0x18)) {
      pbVar6 = *(byte **)(iVar1 + 4);
    }
    if (0xf < *(uint *)(iVar3 + 0x18)) {
      this = *(byte **)this;
    }
    uVar5 = FUN_004031f0(this,*(uint *)(iVar3 + 0x14),pbVar6,*(uint *)(iVar1 + 0x14));
    if ((char)uVar5 != '\0') {
      FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Email sent to %s");
      FUN_00591070("WORLD","Email sent to player from %s: %s");
    }
    piVar2 = *(int **)((int)param_1 + 4);
    if (*(int **)((int)param_1 + 8) != piVar2) {
      *piVar2 = iVar3;
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 4;
      return;
    }
    FUN_00414080(param_1,piVar2,&local_8);
  }
  return;
}


void __thiscall FUN_00439f00(void *this,uint *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
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
  puStack_c = &LAB_005b31f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
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
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x1c);
    if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x10))(0,local_14), cVar4 == '\0')
       ) {
      FUN_00403640(&local_44,"`$NO COMMS",10);
    }
    else {
      FUN_00403640(&local_44,"`%*MESSAGES*\n",0xd);
      iVar5 = FUN_0043a5a0((int)this);
      if (iVar5 < 1) {
        FUN_00403640(&local_44,"`3New   : `80\n",0xe);
      }
      else {
        FUN_0043a5a0((int)this);
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%cNew   : %d\n");
        local_8 = 1;
        puVar7 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar7 = (undefined4 *)*puVar6;
        }
        FUN_00403640(&local_44,puVar7,puVar6[4]);
        local_8 = 0;
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
      }
      iVar5 = FUN_0043a730((int)this);
      if (iVar5 < 1) {
        FUN_0043a730((int)this);
        FUN_0043a730((int)this);
        puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Drafts: `%c%d\n");
        local_8 = 3;
        uVar2 = puVar7[5];
      }
      else {
        FUN_0043a730((int)this);
        puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Drafts: `%c%d\n");
        local_8 = 2;
        uVar2 = puVar7[5];
      }
      puVar6 = puVar7;
      if (0xf < uVar2) {
        puVar6 = (undefined4 *)*puVar7;
      }
      FUN_00403640(&local_44,puVar6,puVar7[4]);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0043a0bd;
        FUN_005adb3f(pvVar8);
      }
      FUN_0043a610();
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Inbox : `%c%d\n");
      local_8 = 4;
      puVar7 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar7 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_44,puVar7,puVar6[4]);
      local_8 = 0;
      uVar3 = local_8;
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0043a0bd;
        FUN_005adb3f(pvVar8);
      }
      FUN_0043a660();
      FUN_0043a660();
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3News  : `%c%d\n");
      local_8 = 5;
      puVar7 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar7 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_44,puVar7,puVar6[4]);
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_0043a0bd:
          local_8 = uVar3;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
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


// WARNING: Removing unreachable block (ram,0x0043a54b)
// WARNING: Removing unreachable block (ram,0x0043a559)
// WARNING: Removing unreachable block (ram,0x0043a569)
// WARNING: Removing unreachable block (ram,0x0043a56f)

void __thiscall FUN_0043a250(void *this,int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float in_XMM2_Da;
  char *pcVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2018;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = DAT_0065630c;
  if (param_1 != 0) {
    fVar9 = *(float *)((int)this + 4) + in_XMM2_Da;
    *(float *)((int)this + 4) = fVar9;
    if (1.0 <= fVar9) {
      *(bool *)this = *(char *)this == '\0';
      *(float *)((int)this + 4) = fVar9 - 1.0;
    }
    local_8 = 0;
    iVar4 = DAT_0065630c;
    if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
      iVar5 = *(int *)((int)this + 0xc);
      uVar8 = 0;
      iVar6 = *(int *)((int)this + 8);
      if (iVar5 - iVar6 >> 2 != 0) {
        do {
          iVar4 = *(int *)(iVar6 + uVar8 * 4);
          if (((*(char *)(iVar4 + 0x65) == '\0') && (0.0 < *(float *)(iVar4 + 0x98))) &&
             (fVar9 = *(float *)(iVar4 + 0x98) - ((in_XMM2_Da * 24.0) / 60.0) / 60.0,
             *(float *)(iVar4 + 0x98) = fVar9, fVar9 <= 0.0)) {
            *(undefined4 *)(iVar4 + 0x98) = 0;
            *(undefined1 *)(iVar4 + 100) = 1;
            *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + uVar8 * 4) + 100) = 1;
            FUN_00591070("WORLD","Email ready to receive: %s");
          }
          iVar5 = *(int *)((int)this + 0xc);
          uVar8 = uVar8 + 1;
          iVar6 = *(int *)((int)this + 8);
        } while (uVar8 < (uint)(iVar5 - iVar6 >> 2));
      }
      iVar4 = DAT_0065630c;
      if (param_2 != '\0') {
        if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) && (uVar8 = 0, iVar5 - iVar6 >> 2 != 0)) {
          do {
            iVar4 = *(int *)(iVar6 + uVar8 * 4);
            if ((*(char *)(iVar4 + 0x65) == '\0') && (*(float *)(iVar4 + 0x98) == -1.0)) {
              uVar7 = 0;
              bVar1 = true;
              if (*(int *)(iVar4 + 0x84) - *(int *)(iVar4 + 0x80) >> 2 != 0) {
                do {
                  cVar2 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar6 + uVar8 * 4) + 0x80) +
                                                 uVar7 * 4),
                                       *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                  iVar6 = *(int *)((int)this + 8);
                  uVar7 = uVar7 + 1;
                  bVar1 = (bool)(bVar1 & cVar2 != '\0');
                  iVar4 = *(int *)(iVar6 + uVar8 * 4);
                } while (uVar7 < (uint)(*(int *)(iVar4 + 0x84) - *(int *)(iVar4 + 0x80) >> 2));
                if (!bVar1) goto LAB_0043a4dc;
              }
              iVar4 = *(int *)(iVar6 + uVar8 * 4);
              if (*(float *)(iVar4 + 0x9c) <= 0.0) {
                *(undefined4 *)(iVar4 + 0x98) = 0;
                *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + uVar8 * 4) + 100) = 1;
                pcVar10 = "Email requirements hit, no delay before sending: %s";
              }
              else {
                *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x9c);
                pcVar10 = "Email requirements hit, setting timer before sending it: %s";
              }
              FUN_00591070("WORLD",pcVar10);
            }
LAB_0043a4dc:
            uVar8 = uVar8 + 1;
            iVar6 = *(int *)((int)this + 8);
          } while (uVar8 < (uint)(*(int *)((int)this + 0xc) - iVar6 >> 2));
        }
        iVar4 = DAT_0065630c;
        if (((*(char *)(DAT_0065b444 + 0x72) != '\0') &&
            (iVar4 = FUN_0043a5a0((int)this), DAT_0065630c != -1)) &&
           ((DAT_0065630c < iVar4 &&
            (((DAT_0065630c != 0 && (iVar4 != 0)) &&
             (pcVar10 = (char *)FUN_00402f60(), *pcVar10 != '\0')))))) {
          FUN_00557af0(pcVar10,6,0x31,-1,0,'\x01',1.0);
        }
      }
    }
  }
  DAT_0065630c = iVar4;
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_0043a5a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) == '\0') {
    iVar3 = 0;
    if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
      uVar2 = 0;
      uVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
      if (uVar4 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
          if ((*(char *)(iVar1 + 0x65) == '\0') && (*(char *)(iVar1 + 100) != '\0')) {
            iVar3 = iVar3 + 1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
    }
    return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) + iVar3;
  }
  return 0;
}


int FUN_0043a610(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) == '\0') {
    iVar3 = 0;
    piVar1 = (int *)**(int **)(DAT_0065b5cc + 300);
    for (iVar2 = (*(int **)(DAT_0065b5cc + 300))[1] - (int)piVar1 >> 2; iVar2 != 0;
        iVar2 = iVar2 + -1) {
      if ((*(char *)(*piVar1 + 100) == '\0') && (*(char *)(*piVar1 + 0x9c) == '\0')) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 1;
    }
    return iVar3;
  }
  return 0;
}


void FUN_0043a660(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *local_28;
  void *local_24 [5];
  uint local_10;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_0065b5cc + 300) == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar1 = *(undefined4 **)(*(int *)(DAT_0065b5cc + 300) + 0xc);
  local_28 = (undefined4 *)*puVar1;
  do {
    if (local_28 == puVar1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004024e0(local_24,local_28 + 4);
    if (0xf < local_10) {
      pvVar2 = local_24[0];
      if ((0xfff < local_10 + 1) &&
         (pvVar2 = *(void **)((int)local_24[0] + -4),
         0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_28)
    ;
  } while( true );
}


int __fastcall FUN_0043a730(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_14;
  uint local_10;
  
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) != '\0') {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  local_14 = 0;
  local_10 = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x24) - iVar5 >> 2 != 0) {
    do {
      pbVar1 = *(byte **)(*(int *)(DAT_0065b5cc + 300) + 0x24);
      pbVar4 = FUN_004143f0(*(byte **)(*(int *)(DAT_0065b5cc + 300) + 0x20),pbVar1,
                            *(byte **)(iVar5 + local_10 * 4));
      if (pbVar4 == pbVar1) {
        iVar5 = FUN_00412700();
        uVar7 = 0;
        iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + local_10 * 4);
        iVar6 = *(int *)(iVar5 + 0x48);
        if (*(int *)(iVar5 + 0x4c) - iVar6 >> 2 != 0) {
          do {
            cVar3 = FUN_004a23b0(*(void **)(iVar6 + uVar7 * 4),
                                 *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
            if (cVar3 == '\0') goto LAB_0043a8a8;
            uVar7 = uVar7 + 1;
            iVar6 = *(int *)(iVar5 + 0x48);
          } while (uVar7 < (uint)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2));
        }
        uVar7 = 0;
        iVar6 = *(int *)(iVar5 + 0x54);
        if (*(int *)(iVar5 + 0x58) - iVar6 >> 2 != 0) {
          do {
            iVar9 = *(int *)(iVar6 + uVar7 * 4);
            uVar8 = 0;
            bVar2 = true;
            if (*(int *)(iVar9 + 0x68) - *(int *)(iVar9 + 100) >> 2 != 0) {
              do {
                cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar6 + uVar7 * 4) + 100) +
                                               uVar8 * 4),
                                     *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                if (cVar3 == '\0') {
                  bVar2 = false;
                  break;
                }
                iVar6 = *(int *)(iVar5 + 0x54);
                uVar8 = uVar8 + 1;
                iVar9 = *(int *)(iVar6 + uVar7 * 4);
              } while (uVar8 < (uint)(*(int *)(iVar9 + 0x68) - *(int *)(iVar9 + 100) >> 2));
            }
            iVar6 = *(int *)(iVar5 + 0x54);
            iVar9 = local_14 + 1;
            if (!bVar2) {
              iVar9 = local_14;
            }
            uVar7 = uVar7 + 1;
            local_14 = iVar9;
          } while (uVar7 < (uint)(*(int *)(iVar5 + 0x58) - iVar6 >> 2));
        }
      }
LAB_0043a8a8:
      local_10 = local_10 + 1;
      iVar5 = *(int *)(param_1 + 0x20);
      iVar6 = local_14;
    } while (local_10 < (uint)(*(int *)(param_1 + 0x24) - iVar5 >> 2));
  }
  return iVar6;
}


void __thiscall FUN_0043a8d0(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  int local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3228;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) != '\0') goto LAB_0043aaa3;
  local_34 = 0;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
    uVar7 = 0;
    iVar5 = *(int *)((int)this + 8);
    if (*(int *)((int)this + 0xc) - iVar5 >> 2 != 0) {
      do {
        iVar5 = *(int *)(iVar5 + uVar7 * 4);
        if ((*(char *)(iVar5 + 0x65) == '\0') && (*(char *)(iVar5 + 100) != '\0')) {
          *(undefined1 *)(iVar5 + 100) = 0;
          FUN_00439d40(param_1,*(int *)(*(int *)((int)this + 8) + uVar7 * 4));
          local_34 = local_34 + 1;
          iVar5 = *(int *)(*(int *)((int)this + 8) + uVar7 * 4);
          ppvVar4 = (void **)(iVar5 + 4);
          if (local_30 != ppvVar4) {
            if (0xf < *(uint *)(iVar5 + 0x18)) {
              ppvVar4 = *ppvVar4;
            }
            FUN_00402690(local_30,ppvVar4,*(uint *)(iVar5 + 0x14));
          }
        }
        uVar7 = uVar7 + 1;
        iVar5 = *(int *)((int)this + 8);
      } while (uVar7 < (uint)(*(int *)((int)this + 0xc) - iVar5 >> 2));
    }
  }
  uVar7 = 0;
  iVar5 = *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 0x18) - iVar5 >> 2 != 0) {
    do {
      puVar1 = (undefined4 *)(iVar5 + uVar7 * 4);
      puVar2 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar2) {
        FUN_00414080(param_1,puVar2,puVar1);
      }
      else {
        *puVar2 = *puVar1;
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 4;
      }
      iVar5 = *(int *)(*(int *)((int)this + 0x14) + uVar7 * 4);
      ppvVar4 = (void **)(iVar5 + 4);
      if (local_30 != ppvVar4) {
        if (0xf < *(uint *)(iVar5 + 0x18)) {
          ppvVar4 = *ppvVar4;
        }
        FUN_00402690(local_30,ppvVar4,*(uint *)(iVar5 + 0x14));
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)((int)this + 0x14);
      local_34 = local_34 + 1;
    } while (uVar7 < (uint)(*(int *)((int)this + 0x18) - iVar5 >> 2));
  }
  iVar3 = DAT_0065b5cc;
  *(int *)((int)this + 0x18) = iVar5;
  iVar5 = *(int *)(iVar3 + 0xcc);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x70) != 1)) {
    if (local_34 == 1) {
      pcVar8 = "Email received from %s";
    }
    else {
      if (local_34 < 2) goto LAB_0043aa6d;
      pcVar8 = "%d emails received";
    }
    FUN_00527550(*(int **)(*(int *)(iVar3 + 0xd0) + 0x224),1,pcVar8);
  }
LAB_0043aa6d:
  if (0xf < local_1c) {
    pvVar6 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar6 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
LAB_0043aaa3:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0043aad0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  undefined4 *in_stack_00000034;
  uint in_stack_00000044;
  uint in_stack_00000048;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3268;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  local_14 = this;
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x74) == '\0') {
    local_14 = (void *)FUN_005adb0f(0xa0);
    pvVar3 = (void *)FUN_004398a0((int)local_14);
    iVar1 = *(int *)(DAT_0065b5cc + 0x124);
    puVar4 = (undefined4 *)(iVar1 + 4);
    local_14 = pvVar3;
    if ((undefined4 *)((int)pvVar3 + 0x68) != puVar4) {
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)((int)pvVar3 + 0x68),puVar4,*(uint *)(iVar1 + 0x14));
    }
    if ((undefined4 **)((int)pvVar3 + 4) != &param_1) {
      ppuVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        ppuVar5 = (undefined4 **)param_1;
      }
      FUN_00402690((undefined4 **)((int)pvVar3 + 4),ppuVar5,in_stack_00000014);
    }
    if ((undefined4 **)((int)pvVar3 + 0x1c) != &stack0x0000001c) {
      puVar4 = &stack0x0000001c;
      if (0xf < in_stack_00000030) {
        puVar4 = in_stack_0000001c;
      }
      FUN_00402690((undefined4 *)((int)pvVar3 + 0x1c),puVar4,in_stack_0000002c);
    }
    if ((undefined4 **)((int)pvVar3 + 0x4c) != &stack0x0000001c) {
      puVar4 = &stack0x0000001c;
      if (0xf < in_stack_00000030) {
        puVar4 = in_stack_0000001c;
      }
      FUN_00402690((undefined4 *)((int)pvVar3 + 0x4c),puVar4,in_stack_0000002c);
    }
    if ((undefined4 **)((int)pvVar3 + 0x34) != &stack0x00000034) {
      puVar4 = &stack0x00000034;
      if (0xf < in_stack_00000048) {
        puVar4 = in_stack_00000034;
      }
      FUN_00402690((undefined4 *)((int)pvVar3 + 0x34),puVar4,in_stack_00000044);
    }
    *(undefined1 *)((int)pvVar3 + 100) = 0;
    piVar2 = *(int **)((int)this + 0x18);
    if (*(int **)((int)this + 0x1c) == piVar2) {
      FUN_00414080((void *)((int)this + 0x14),piVar2,&local_14);
    }
    else {
      *piVar2 = (int)pvVar3;
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 4;
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
    puVar4 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      puVar4 = (undefined4 *)in_stack_0000001c[-1];
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (undefined4 *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_00000048) {
    puVar4 = in_stack_00000034;
    if (0xfff < in_stack_00000048 + 1) {
      puVar4 = (undefined4 *)in_stack_00000034[-1];
      if (0x1f < (uint)((int)in_stack_00000034 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0043acc0(void *this,int param_1)

{
  undefined1 *puVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined1 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x34) = 0;
  if (0xf < *(uint *)((int)this + 0x38)) {
    puVar1 = *(undefined1 **)((int)this + 0x24);
  }
  *puVar1 = 0;
  if (param_1 == 4) {
    FUN_0043ad40((int)this);
    return;
  }
  if (param_1 == 5) {
    FUN_0043b410((int)this);
    return;
  }
  if (param_1 == 6) {
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    FUN_00403640((void *)((int)this + 0x24),&DAT_005e8d5c,4);
  }
  return;
}


void FUN_0043ad20(void)

{
  FUN_00591070(&DAT_005cdc70,"Multiplayer tablet manager key hit");
  return;
}


void __fastcall FUN_0043ad40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  undefined4 *in_stack_ffffff64;
  char *pcVar12;
  undefined4 *local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b32d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar11 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x388 +
                   *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100) * 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`!%s\n");
  local_8 = 0;
  puVar9 = puVar4;
  if (0xf < (uint)puVar4[5]) {
    puVar9 = (undefined4 *)*puVar4;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_30) {
    pvVar10 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar10 = *(void **)((int)local_44[0] + -4), uVar3 = (undefined1)local_8,
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
LAB_0043adfc:
      local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  local_70 = (undefined4 *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_004024e0(&stack0xffffff64,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x48));
  FUN_0055d140((int *)&local_70,0xb4,in_stack_ffffff64);
  local_60 = 0;
  local_64 = (local_6c - (int)local_70) / 0x18;
  puVar9 = local_70;
  if (local_64 != 0) {
    do {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar6 = puVar9[4];
      if (uVar6 != 0) {
        uVar1 = puVar9[5];
        puVar4 = puVar9;
        if (0xf < uVar1) {
          puVar4 = (undefined4 *)*puVar9;
        }
        if (*(char *)((int)puVar4 + (uVar6 - 1)) == ' ') {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
          uVar7 = uVar6 - 1;
          if (uVar6 < uVar6 - 1) {
            uVar7 = uVar6;
          }
          puVar4 = puVar9;
          if (0xf < uVar1) {
            puVar4 = (undefined4 *)*puVar9;
          }
          FUN_00402690(local_2c,puVar4,uVar7);
          local_8._0_1_ = 2;
          ppppuVar5 = local_2c;
          if (0xf < local_18) {
            ppppuVar5 = (undefined4 ****)local_2c[0];
          }
          FUN_00403640((void *)(param_1 + 0x24),ppppuVar5,local_1c);
          local_8._0_1_ = 1;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 1;
          if (0xf < local_18) {
            ppppuVar5 = (undefined4 ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppuVar5 = (undefined4 ****)local_2c[0][-1],
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5)))) goto LAB_0043adfc;
            FUN_005adb3f(ppppuVar5);
          }
        }
        else {
          puVar4 = puVar9;
          if (0xf < uVar1) {
            puVar4 = (undefined4 *)*puVar9;
          }
          FUN_00403640((void *)(param_1 + 0x24),puVar4,uVar6);
        }
      }
      FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
      puVar9 = puVar9 + 6;
      local_60 = local_60 + 1;
    } while (local_60 < local_64);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  iVar2 = *(int *)(DAT_0065b5cc + 0xcc);
  if (*(int *)(iVar2 + 0x70) == 3) {
    pbVar8 = (byte *)(iVar2 + 0x84);
    if (0xf < *(uint *)(iVar2 + 0x98)) {
      pbVar8 = *(byte **)(iVar2 + 0x84);
    }
    uVar6 = FUN_004031f0(pbVar8,*(uint *)(iVar2 + 0x94),(byte *)&PTR_005ce008,0);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if ((char)uVar6 == '\0') {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`!Goal: `@Destroy `!%s\n");
      local_8._0_1_ = 3;
      puVar9 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar9 = (undefined4 *)*puVar4;
      }
      FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
      local_8._0_1_ = 1;
      if (0xf < local_30) {
        pvVar10 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar10 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
    else {
      FUN_00403640((void *)(param_1 + 0x24),"`3Goal: `%Combat\n",0x11);
    }
  }
  if (iVar11 == 1) {
    uVar6 = 0x15;
    pcVar12 = "`!Status: `%Complete\n";
  }
  else if (iVar11 == 2) {
    uVar6 = 0x13;
    pcVar12 = "`!Status: `@Failed\n";
  }
  else {
    uVar6 = 0x17;
    pcVar12 = "`!Status: `$Incomplete\n";
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),pcVar12,uVar6);
  iVar11 = 0;
  iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100);
  if (iVar2 == 1) {
    iVar11 = 2;
  }
  else if (iVar2 == 2) {
    iVar11 = 1;
  }
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x316) != '\0') {
    if (iVar11 != 0) {
      if (0 < *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3b8 + iVar11 * 4)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        puVar4 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,"`!Targets remaining: `%c%d`3/`!%d\n");
        local_8._0_1_ = 4;
        puVar9 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar9 = (undefined4 *)*puVar4;
        }
        FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          ppppuVar5 = (undefined4 ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppuVar5 = (undefined4 ****)local_2c[0][-1],
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppuVar5);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      }
      if (0 < *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x394 + iVar11 * 4)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        puVar4 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_5c,"`!Opposing vessels: `%c%d`3/`!%d\n");
        local_8._0_1_ = 5;
        puVar9 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar9 = (undefined4 *)*puVar4;
        }
        FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
        local_8._0_1_ = 1;
        if (0xf < local_48) {
          pvVar10 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar10 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar10);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      }
    }
    if (0 < *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3b8 +
                    *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100) * 4)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      puVar4 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,"`!Priority friendlies: `%c%d`3/`!%d\n");
      local_8._0_1_ = 6;
      puVar9 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar9 = (undefined4 *)*puVar4;
      }
      FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
      local_8._0_1_ = 1;
      if (0xf < local_30) {
        pvVar10 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar10 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
    if (0 < *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x394 +
                    *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100) * 4)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      puVar4 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_5c,"`!Friendly vessels: `%c%d`3/`!%d\n");
      local_8._0_1_ = 7;
      puVar9 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar9 = (undefined4 *)*puVar4;
      }
      FUN_00403640((void *)(param_1 + 0x24),puVar9,puVar4[4]);
      local_8._0_1_ = 1;
      if (0xf < local_48) {
        pvVar10 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar10 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),"`![`3press `$tab`3 to close tablet`!]",0x25);
  FUN_004025a0((int *)&local_70);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0043b410(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int local_40 [4];
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005b3310;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x14) = 1;
  local_40[3] = param_1;
  FUN_004028b0(*(int **)(param_1 + 0x18),*(int **)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x14) != '\0') {
    this = (undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x34) = 0;
    puVar1 = this;
    if (0xf < *(uint *)(param_1 + 0x38)) {
      puVar1 = (undefined4 *)*this;
    }
    *(undefined1 *)puVar1 = 0;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_8 = 0;
    local_30 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x18;
    iVar4 = local_30 - *(int *)(param_1 + 0xc);
    if (iVar4 < local_30) {
      do {
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"%02d: %s");
        local_8._0_1_ = 1;
        puVar1 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar1 = (undefined4 *)*puVar2;
        }
        FUN_00403640(this,puVar1,puVar2[4]);
        local_8 = (uint)local_8._1_3_ << 8;
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
        if (iVar4 != local_30) {
          FUN_00403640(this,&DAT_005e75f8,1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_30);
    }
    FUN_004025a0(local_40);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_0043b590(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  undefined2 in_stack_0000003c;
  undefined1 in_stack_0000003e;
  undefined4 in_stack_00000040;
  undefined1 in_stack_00000044;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3371;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)this = param_1;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  local_8._0_1_ = 2;
  *(undefined4 *)((int)this + 0x1c) = in_stack_00000020;
  FUN_004024e0((void *)((int)this + 0x20),&stack0x00000024);
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined1 *)((int)this + 0x38) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)((int)this + 0x50) = in_stack_00000040;
  *(undefined2 *)((int)this + 0x58) = in_stack_0000003c;
  *(undefined4 *)((int)this + 0x54) = 0xbf800000;
  *(undefined1 *)((int)this + 0x5a) = in_stack_0000003e;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0x5b));
  *(undefined1 *)((int)this + 0x5e) = in_stack_00000044;
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar1 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
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


void FUN_0043b6c0(void *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  void *pvVar9;
  uint uVar10;
  void *in_stack_fffffd84;
  undefined4 uStack_260;
  byte *in_stack_fffffdac;
  Color3B local_226 [3];
  Color3B local_223 [3];
  undefined1 *local_220;
  Color3B local_21b [3];
  code *local_218;
  undefined1 *local_214;
  undefined4 local_210;
  char local_209;
  undefined1 local_208 [96];
  undefined1 local_1a8 [96];
  undefined1 local_148 [96];
  undefined1 local_e8 [100];
  void *local_84 [5];
  uint local_70;
  void *local_6c;
  void *pvStack_68;
  void *pvStack_64;
  void *pvStack_60;
  void *local_5c;
  void *pvStack_58;
  void *local_54;
  void *pvStack_50;
  void *pvStack_4c;
  void *pvStack_48;
  void *local_44;
  void *pvStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &LAB_005b3413;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar10 = 0;
  local_218 = Color3B_exref;
  puVar5 = DAT_0065c290;
  while( true ) {
    local_210 = uVar10;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)FUN_005adb0f(0x18);
      puVar5[4] = 0;
      puVar5[5] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      DAT_0065c290 = puVar5;
    }
    if (((uint)((int)(puVar5[4] - puVar5[3]) >> 2) <= uVar10) ||
       (*(char *)(DAT_0065b444 + 0x11b) != '\0')) break;
    local_209 = '\x01';
    uVar10 = 0;
    while( true ) {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_005adb0f(0x18);
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        DAT_0065c290 = puVar5;
      }
      local_214 = (undefined1 *)(local_210 * 4);
      if ((uint)(*(int *)(*(int *)(local_214 + puVar5[3]) + 0x34) -
                 *(int *)(*(int *)(local_214 + puVar5[3]) + 0x30) >> 2) <= uVar10)
      goto LAB_0043b896;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_005adb0f(0x18);
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        DAT_0065c290 = puVar5;
      }
      cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(local_214 + puVar5[3]) + 0x30) + uVar10 * 4)
                           ,*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
      puVar5 = DAT_0065c290;
      if (cVar3 == '\0') break;
      uVar10 = uVar10 + 1;
    }
    local_209 = '\0';
LAB_0043b896:
    if (local_209 == '\0') {
      uVar10 = local_210 + 1;
    }
    else {
      in_stack_fffffdac = (byte *)0x43b8c2;
      cocos2d::Color3B::Color3B(local_223,0x80,'@',0x80);
      if (DAT_0065c290 == (undefined4 *)0x0) {
        DAT_0065c290 = (undefined4 *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      uVar10 = local_210;
      local_214 = (undefined1 *)&uStack_260;
      FUN_00591e00((undefined1 *)&uStack_260,"`%%%s");
      local_14 = 0;
      in_stack_fffffd84 = (void *)((uint)in_stack_fffffd84 & 0xffffff00);
      FUN_00402690(&stack0xfffffd84,&PTR_005ce008,0);
      local_14 = 0xffffffff;
      puVar6 = FUN_0043b590(local_e8,uVar10 + 3000,in_stack_fffffd84);
      local_14 = 1;
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
        FUN_0043ce10(param_1,puVar5,puVar6);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar5,puVar6);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      FUN_0043bfa0((int)local_e8);
      uVar10 = uVar10 + 1;
      puVar5 = DAT_0065c290;
    }
  }
  if (*(int *)(DAT_0065b5cc + 0x128) == 0) {
    local_214 = &stack0xfffffdac;
    in_stack_fffffdac = (byte *)((uint)in_stack_fffffdac & 0xffffff00);
    uStack_260 = 0x43ba17;
    FUN_00402690(&stack0xfffffdac,"has_passenger",0xd);
    local_14 = 2;
    puVar5 = FUN_00412df0();
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    bVar4 = FUN_004a1150(puVar5,in_stack_fffffdac);
    bVar1 = false;
    if (bVar4 == 0) goto LAB_0043ba37;
  }
  bVar1 = true;
LAB_0043ba37:
  if (bVar1) {
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    FUN_00402690(local_3c,"PASSENGER\n",10);
    local_14._0_1_ = 3;
    local_14._1_3_ = 0;
    if (*(int *)(DAT_0065b5cc + 0x128) != 0) {
      FUN_004024e0(&stack0xfffffdac,
                   (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) + 0x18));
      FUN_004a6de0(in_stack_fffffdac);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_84,"To %s");
      local_14._0_1_ = 4;
      puVar5 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar5 = (undefined4 *)*puVar6;
      }
      FUN_00403640(local_3c,puVar5,puVar6[4]);
      local_14._0_1_ = 3;
      if (0xf < local_70) {
        pvVar9 = local_84[0];
        if ((0xfff < local_70 + 1) &&
           (pvVar9 = *(void **)((int)local_84[0] + -4),
           0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar9)))) {
LAB_0043baf1:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
    }
    cocos2d::Color3B::Color3B(local_226,'@','@',0x80);
    local_214 = (undefined1 *)&uStack_260;
    FUN_004024e0(&uStack_260,local_3c);
    local_14._0_1_ = 5;
    in_stack_fffffd84 = (void *)((uint)in_stack_fffffd84 & 0xffffff00);
    FUN_00402690(&stack0xfffffd84,&PTR_005ce008,0);
    local_14._0_1_ = 3;
    puVar6 = FUN_0043b590(local_148,1000,in_stack_fffffd84);
    local_14 = CONCAT31(local_14._1_3_,6);
    puVar5 = *(undefined4 **)((int)param_1 + 4);
    if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
      FUN_0043ce10(param_1,puVar5,puVar6);
    }
    else {
      FUN_0043cd30(extraout_ECX_00,puVar5,puVar6);
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
    }
    FUN_0043bfa0((int)local_148);
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    if (0xf < local_28) {
      pvVar9 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar9 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  piVar8 = (int *)(DAT_0065b5cc + 0x13c);
  local_210 = 0;
  if (*(int *)(DAT_0065b5cc + 0x140) - *piVar8 >> 2 != 0) {
    do {
      local_44 = (void *)0x0;
      pvStack_40 = (void *)0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      local_14._0_1_ = 7;
      local_14._1_3_ = 0;
      ppvVar7 = (void **)FUN_004827c0(*(void **)(*piVar8 + local_210 * 4),local_84,piVar8,'\x01');
      if (&local_54 != ppvVar7) {
        FUN_00401b20((int *)&local_54);
        local_54 = *ppvVar7;
        pvStack_50 = ppvVar7[1];
        pvStack_4c = ppvVar7[2];
        pvStack_48 = ppvVar7[3];
        local_44 = ppvVar7[4];
        pvStack_40 = ppvVar7[5];
        ppvVar7[4] = (void *)0x0;
        ppvVar7[5] = (void *)0xf;
        *(undefined1 *)ppvVar7 = 0;
      }
      if (0xf < local_70) {
        pvVar9 = local_84[0];
        if ((0xfff < local_70 + 1) &&
           (pvVar9 = *(void **)((int)local_84[0] + -4),
           0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar9)))) goto LAB_0043baf1;
        FUN_005adb3f(pvVar9);
      }
      cocos2d::Color3B::Color3B(local_21b,'@',0x80,'D');
      local_214 = (undefined1 *)&uStack_260;
      FUN_004024e0(&uStack_260,&local_54);
      local_14._0_1_ = 8;
      in_stack_fffffd84 = (void *)((uint)in_stack_fffffd84 & 0xffffff00);
      FUN_00402690(&stack0xfffffd84,&PTR_005ce008,0);
      uVar10 = local_210;
      local_14._0_1_ = 7;
      puVar6 = FUN_0043b590(local_1a8,local_210,in_stack_fffffd84);
      local_14 = CONCAT31(local_14._1_3_,9);
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
        FUN_0043ce10(param_1,puVar5,puVar6);
      }
      else {
        FUN_0043cd30(extraout_ECX_01,puVar5,puVar6);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_1a8);
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      if ((void *)0xf < pvStack_40) {
        pvVar9 = local_54;
        if ((0xfff < (int)pvStack_40 + 1U) &&
           (pvVar9 = *(void **)((int)local_54 + -4),
           0x1f < (uint)((int)local_54 + (-4 - (int)pvVar9)))) goto LAB_0043baf1;
        FUN_005adb3f(pvVar9);
      }
      local_210 = uVar10 + 1;
      piVar8 = (int *)(DAT_0065b5cc + 0x13c);
    } while (local_210 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *piVar8 >> 2));
  }
  piVar8 = (int *)(DAT_0065b5cc + 0x130);
  local_214 = (undefined1 *)0x0;
  if (*(int *)(DAT_0065b5cc + 0x134) - *piVar8 >> 2 != 0) {
    do {
      local_5c = (void *)0x0;
      pvStack_58 = (void *)0xf;
      local_6c = (void *)((uint)local_6c & 0xffffff00);
      local_14._0_1_ = 10;
      local_14._1_3_ = 0;
      ppvVar7 = (void **)FUN_00481ff0(*(void **)(*piVar8 + (int)local_214 * 4),
                                      (undefined1 *)local_84);
      if (&local_6c != ppvVar7) {
        FUN_00401b20((int *)&local_6c);
        local_6c = *ppvVar7;
        pvStack_68 = ppvVar7[1];
        pvStack_64 = ppvVar7[2];
        pvStack_60 = ppvVar7[3];
        local_5c = ppvVar7[4];
        pvStack_58 = ppvVar7[5];
        ppvVar7[4] = (void *)0x0;
        ppvVar7[5] = (void *)0xf;
        *(undefined1 *)ppvVar7 = 0;
      }
      if (0xf < local_70) {
        pvVar9 = local_84[0];
        if ((0xfff < local_70 + 1) &&
           (pvVar9 = *(void **)((int)local_84[0] + -4),
           0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar9)))) goto LAB_0043baf1;
        FUN_005adb3f(pvVar9);
      }
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_210 + 1),0x80,'@','D');
      local_220 = (undefined1 *)&uStack_260;
      FUN_004024e0(&uStack_260,&local_6c);
      local_14._0_1_ = 0xb;
      in_stack_fffffd84 = (void *)((uint)in_stack_fffffd84 & 0xffffff00);
      FUN_00402690(&stack0xfffffd84,&PTR_005ce008,0);
      puVar2 = local_214;
      local_14._0_1_ = 10;
      puVar6 = FUN_0043b590(local_208,local_214 + 2000,in_stack_fffffd84);
      local_14 = CONCAT31(local_14._1_3_,0xc);
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
        FUN_0043ce10(param_1,puVar5,puVar6);
      }
      else {
        FUN_0043cd30(extraout_ECX_02,puVar5,puVar6);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_208);
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      if ((void *)0xf < pvStack_58) {
        pvVar9 = local_6c;
        if ((0xfff < (int)pvStack_58 + 1U) &&
           (pvVar9 = *(void **)((int)local_6c + -4),
           0x1f < (uint)((int)local_6c + (-4 - (int)pvVar9)))) goto LAB_0043baf1;
        FUN_005adb3f(pvVar9);
      }
      local_214 = puVar2 + 1;
      piVar8 = (int *)(DAT_0065b5cc + 0x130);
    } while (local_214 < (undefined1 *)(*(int *)(DAT_0065b5cc + 0x134) - *piVar8 >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0043bfa0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x4c)) {
    pvVar1 = *(void **)(param_1 + 0x38);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x4c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0043c06f;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pvVar1 = *(void **)(param_1 + 0x20);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x34) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0043c06f;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0043c06f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}
