#include "../ois_server.exe.h"


void FUN_0046d740(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_stack_ffffff58;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  void *local_5c [5];
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
  puStack_c = &LAB_005b6f58;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  uStack_84 = 0x46d78c;
  FUN_00402690(local_44,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(local_5c,(undefined4 *)pbVar4);
  local_8._0_1_ = 2;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
LAB_0046d7d4:
      local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_84 = 0x46d7e1;
    FUN_005adb3f(pvVar6);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_84 = 0x46d817;
  FUN_00402690(local_2c,"animation",9);
  uStack_84 = 0x46d829;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar3 = local_64;
  iVar8 = 0;
  local_60 = local_68;
  while (local_60 != puVar3) {
    iVar8 = iVar8 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_84 = 0x46d881;
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_84 = 0x46d8a5;
  FUN_00402690(local_2c,"animation",9);
  if (iVar8 == 0) {
    iVar8 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_84 = 0x46d9a4;
      FUN_005adb3f(pvVar6);
    }
    if (iVar8 != 0) {
      uVar7 = 0;
      iVar8 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_84 = 0x46d9d1;
        FUN_00402690(local_2c,"animation",9);
        local_8._0_1_ = 6;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar4 + 4);
        iVar2 = *(int *)pbVar4;
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0046d7d4;
          uStack_84 = 0x46da29;
          FUN_005adb3f(pvVar6);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar7) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_84 = 0x46da55;
        FUN_00402690(local_2c,"animation",9);
        local_8._0_1_ = 7;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_90;
        FUN_004024e0(auStack_90,(undefined4 *)(*(int *)pbVar4 + iVar8));
        local_60 = &stack0xffffff58;
        local_8._0_1_ = 8;
        FUN_004024e0(&stack0xffffff58,local_5c);
        local_8._0_1_ = 9;
        puVar5 = FUN_0047d270();
        local_8._0_1_ = 7;
        FUN_0042e3a0(puVar5,in_stack_ffffff58);
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0046d7d4;
          uStack_84 = 0x46dad2;
          FUN_005adb3f(pvVar6);
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x18;
      }
    }
  }
  else {
    local_60 = auStack_90;
    local_8._0_1_ = 3;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_90,(undefined4 *)pbVar4);
    local_64 = &stack0xffffff58;
    local_8._0_1_ = 4;
    FUN_004024e0(&stack0xffffff58,local_5c);
    local_8._0_1_ = 5;
    puVar5 = FUN_0047d270();
    local_8._0_1_ = 3;
    FUN_0042e3a0(puVar5,in_stack_ffffff58);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_84 = 0x46d92b;
      FUN_005adb3f(pvVar6);
    }
  }
  if (0xf < local_48) {
    pvVar6 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar6 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_84 = 0x46dae5;
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0046db10(void)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 **in_stack_ffffff68;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 ***local_64;
  undefined4 *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  int local_34;
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b6fd6;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ead58,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_70,(byte *)local_2c);
  puVar7 = local_6c;
  iVar9 = 0;
  local_60 = local_70;
  while (local_60 != puVar7) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    ppppcVar5 = (char ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppcVar5 = (char ****)local_2c[0][-1],
       (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) {
LAB_0046dbb4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar5);
  }
  if (iVar9 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005ead58,4);
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      puVar7 = (undefined4 *)0x0;
      puVar10 = (undefined4 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
        local_68 = puVar10;
        local_60 = puVar7;
        FUN_00402690(local_2c,&DAT_005ead58,4);
        local_8 = 5;
        pbVar1 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar1 + 4);
        iVar11 = *(int *)pbVar1;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          ppppcVar5 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar5 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) goto LAB_0046dbb4;
          FUN_005adb3f(ppppcVar5);
        }
        if ((undefined4 *)((iVar9 - iVar11) / 0x18) <= puVar7) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005ead58,4);
        local_8 = 6;
        pbVar1 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(local_44,(undefined4 *)(*(int *)pbVar1 + (int)puVar10));
        local_8 = CONCAT31(local_8._1_3_,8);
        if (0xf < local_18) {
          ppppcVar5 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar5 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) goto LAB_0046dbb4;
          FUN_005adb3f(ppppcVar5);
        }
        local_64 = local_44;
        if (0xf < local_30) {
          local_64 = local_44[0];
        }
        local_1c = 0;
        ppppuVar6 = local_44;
        if (0xf < local_30) {
          ppppuVar6 = (undefined4 ****)local_44[0];
        }
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
        ppppuVar8 = local_44;
        if (0xf < local_30) {
          ppppuVar8 = (undefined4 ****)local_44[0];
        }
        iVar11 = (local_34 + (int)ppppuVar6) - (int)ppppuVar8;
        iVar9 = 0;
        if ((undefined4 ****)(local_34 + (int)ppppuVar6) < ppppuVar8) {
          iVar11 = 0;
        }
        if (iVar11 != 0) {
          do {
            iVar2 = tolower((int)*(char *)((int)ppppuVar8 + iVar9));
            *(char *)((int)local_64 + iVar9) = (char)iVar2;
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar11);
        }
        local_64 = (undefined4 ***)&stack0xffffff68;
        FUN_004024e0(&stack0xffffff68,local_44);
        local_8._0_1_ = 9;
        if (DAT_0065c294 == (void *)0x0) {
          local_6c = (undefined4 *)FUN_005adb0f(0x28);
          local_8._0_1_ = 10;
          DAT_0065c294 = (void *)FUN_0051e500(local_6c);
        }
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_0051e8b0(DAT_0065c294,in_stack_ffffff68);
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          ppppuVar6 = (undefined4 ****)local_44[0];
          if ((0xfff < local_30 + 1) &&
             (ppppuVar6 = (undefined4 ****)local_44[0][-1],
             0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar6)))) goto LAB_0046dbb4;
          FUN_005adb3f(ppppuVar6);
        }
        puVar7 = (undefined4 *)((int)local_60 + 1);
        local_34 = 0;
        puVar10 = local_68 + 6;
        local_30 = 0xf;
        local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,&DAT_005ead58,4);
    local_8 = 0;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    FUN_004024e0(local_2c,(undefined4 *)pbVar1);
    local_8._0_1_ = 2;
    if (0xf < local_48) {
      pvVar3 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar3 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    local_4c = 0;
    local_48 = 0xf;
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00413ec0(&local_64,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                 (undefined1 *)ppppcVar5);
    local_64 = (undefined4 ***)&stack0xffffff68;
    FUN_004024e0(&stack0xffffff68,local_2c);
    local_8._0_1_ = 3;
    if (DAT_0065c294 == (void *)0x0) {
      local_68 = (undefined4 *)FUN_005adb0f(0x28);
      local_8._0_1_ = 4;
      DAT_0065c294 = (void *)FUN_0051e500(local_68);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0051e8b0(DAT_0065c294,in_stack_ffffff68);
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


void FUN_0046dfb0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined2 *this;
  void *pvVar10;
  byte *pbVar11;
  int iVar12;
  double dVar13;
  byte *in_stack_ffffff4c;
  undefined2 *local_8c;
  undefined2 *local_88;
  void *local_84;
  undefined4 *local_80;
  undefined2 *local_7c;
  undefined2 *local_78;
  int local_74;
  byte *local_70;
  int local_6c;
  undefined2 *local_64;
  undefined2 *local_60;
  void *local_5c [3];
  byte *local_50;
  int local_4c;
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
  puStack_c = &LAB_005b7069;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaa40,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_8c,(byte *)local_2c);
  puVar6 = local_88;
  iVar12 = 0;
  local_60 = local_8c;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_0046e05a:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  if (iVar12 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005eaa40,4);
    iVar12 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar12 != 0) {
      pvVar8 = (void *)0x0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_84 = pvVar8;
        local_74 = iVar12;
        FUN_00402690(local_2c,&DAT_005eaa40,4);
        local_8 = 6;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar4 + 4);
        iVar3 = *(int *)pbVar4;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_0046e05a;
          FUN_005adb3f(pvVar10);
        }
        if ((void *)((iVar2 - iVar3) / 0x18) <= pvVar8) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005eaa40,4);
        local_8 = 7;
        pbVar4 = FUN_0047d5c0((byte *)local_44);
        FUN_004024e0(&stack0xffffff4c,(undefined4 *)(*(int *)pbVar4 + iVar12));
        FUN_00592d70(&local_70,',',(undefined4 *)in_stack_ffffff4c);
        local_8 = CONCAT31(local_8._1_3_,9);
        if (0xf < local_30) {
          pvVar10 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar10 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_0046e05a;
          FUN_005adb3f(pvVar10);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if ((uint)((local_6c - (int)local_70) / 0x18) < 2) {
          FUN_00591070("ERROR","Error: invalid timed flag option");
          local_8 = 0xffffffff;
          FUN_004025a0((int *)&local_70);
          pvVar8 = (void *)((int)pvVar8 + 1);
          iVar12 = iVar12 + 0x18;
        }
        else {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"scenario",8);
          FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
          puVar6 = local_78;
          iVar12 = 0;
          local_60 = local_7c;
          while (local_60 != puVar6) {
            iVar12 = iVar12 + 1;
            std::_Tree_unchecked_const_iterator<>::operator++
                      ((_Tree_unchecked_const_iterator<> *)&local_60);
          }
          if (0xf < local_18) {
            pvVar10 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar10 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_0046e05a;
            FUN_005adb3f(pvVar10);
          }
          if (iVar12 == 0) {
            puVar5 = FUN_00412df0();
            local_64 = (undefined2 *)FUN_005adb0f(0x54);
            local_60 = FUN_0043db80(local_64);
            puVar9 = (undefined4 *)puVar5[1];
            if ((undefined4 *)puVar5[2] == puVar9) goto LAB_0046e796;
            *puVar9 = local_60;
            puVar5[1] = puVar5[1] + 4;
          }
          else {
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            FUN_00402690(local_2c,"scenario",8);
            local_8._0_1_ = 10;
            pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
            FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar4);
            iVar12 = FUN_004a82e0(in_stack_ffffff4c);
            local_8 = CONCAT31(local_8._1_3_,9);
            if (0xf < local_18) {
              pvVar10 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar10 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_0046e05a;
              FUN_005adb3f(pvVar10);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            local_64 = (undefined2 *)FUN_005adb0f(0x54);
            local_60 = FUN_0043db80(local_64);
            puVar5 = (undefined4 *)(iVar12 + 0x3dc);
            puVar9 = *(undefined4 **)(iVar12 + 0x3e0);
            if (*(undefined4 **)(iVar12 + 0x3e4) == puVar9) {
LAB_0046e796:
              FUN_00414080(puVar5,puVar9,&local_60);
            }
            else {
              *puVar9 = local_60;
              *(int *)(iVar12 + 0x3e0) = *(int *)(iVar12 + 0x3e0) + 4;
            }
          }
          puVar6 = local_60;
          piVar1 = *(int **)(local_60 + 0x26);
          if (*(int **)(local_60 + 0x28) == piVar1) {
            FUN_00403840(local_60 + 0x24,piVar1,(undefined4 *)local_70);
          }
          else {
            FUN_004024e0(piVar1,(undefined4 *)local_70);
            *(int *)(puVar6 + 0x26) = *(int *)(puVar6 + 0x26) + 0x18;
          }
          FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_70 + 0x18));
          FUN_004b34b0(puVar6 + 2,in_stack_ffffff4c);
          uVar7 = (local_6c - (int)local_70) / 0x18;
          if ((2 < uVar7) && (local_60 = (undefined2 *)0x2, 2 < uVar7)) {
            iVar12 = 0x30;
            do {
              FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_70 + iVar12));
              FUN_00592d70(&local_50,'=',(undefined4 *)in_stack_ffffff4c);
              pbVar4 = local_50;
              local_8._0_1_ = 0xb;
              if ((local_4c - (int)local_50) / 0x18 == 2) {
                pbVar11 = local_50;
                if (0xf < *(uint *)(local_50 + 0x14)) {
                  pbVar11 = *(byte **)local_50;
                }
                uVar7 = FUN_004031f0(pbVar11,*(uint *)(local_50 + 0x10),(byte *)"delay",5);
                if ((char)uVar7 == '\0') goto LAB_0046e887;
                pbVar11 = pbVar4 + 0x18;
                if (0xf < *(uint *)(pbVar4 + 0x2c)) {
                  pbVar11 = *(byte **)pbVar11;
                }
                dVar13 = atof((char *)pbVar11);
                *(float *)(puVar6 + 0xe) = (float)dVar13;
              }
              else {
LAB_0046e887:
                this = (undefined2 *)FUN_005adb0f(0x40);
                local_8._0_1_ = 0xc;
                local_88 = this;
                FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_70 + iVar12));
                local_64 = (undefined2 *)FUN_004a1a40(this,(undefined4 *)in_stack_ffffff4c);
                local_8._0_1_ = 0xb;
                puVar5 = *(undefined4 **)(puVar6 + 0x20);
                if (*(undefined4 **)(puVar6 + 0x22) == puVar5) {
                  FUN_004141e0(puVar6 + 0x1e,puVar5,&local_64);
                }
                else {
                  *puVar5 = local_64;
                  *(int *)(puVar6 + 0x20) = *(int *)(puVar6 + 0x20) + 4;
                }
              }
              local_8 = CONCAT31(local_8._1_3_,9);
              FUN_004025a0((int *)&local_50);
              iVar12 = iVar12 + 0x18;
              local_60 = (undefined2 *)((int)local_60 + 1);
              pvVar8 = local_84;
            } while (local_60 < (undefined2 *)((local_6c - (int)local_70) / 0x18));
          }
          local_8 = 0xffffffff;
          FUN_004025a0((int *)&local_70);
          pvVar8 = (void *)((int)pvVar8 + 1);
          iVar12 = local_74 + 0x18;
        }
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,&DAT_005eaa40,4);
    local_8 = 0;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar4);
    FUN_00592d70(&local_80,',',(undefined4 *)in_stack_ffffff4c);
    local_8 = CONCAT31(local_8._1_3_,2);
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
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (1 < (uint)(((int)local_7c - (int)local_80) / 0x18)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"scenario",8);
      FUN_00419820(&DAT_0065b530,(int *)&local_8c,(byte *)local_2c);
      puVar6 = local_88;
      iVar12 = 0;
      local_60 = local_8c;
      while (local_60 != puVar6) {
        iVar12 = iVar12 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_60);
      }
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
      if (iVar12 == 0) {
        puVar5 = FUN_00412df0();
        puVar6 = FUN_004a19f0((undefined2 *)puVar5);
      }
      else {
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        FUN_00402690(local_5c,"scenario",8);
        local_8._0_1_ = 3;
        pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
        FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar4);
        iVar12 = FUN_004a82e0(in_stack_ffffff4c);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_48) {
          pvVar8 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar8 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar8);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_64 = (undefined2 *)FUN_005adb0f(0x54);
        local_60 = FUN_0043db80(local_64);
        puVar5 = *(undefined4 **)(iVar12 + 0x3e0);
        if (*(undefined4 **)(iVar12 + 0x3e4) == puVar5) {
          FUN_00414080((void *)(iVar12 + 0x3dc),puVar5,&local_60);
          puVar6 = local_60;
        }
        else {
          *puVar5 = local_60;
          *(int *)(iVar12 + 0x3e0) = *(int *)(iVar12 + 0x3e0) + 4;
          puVar6 = local_60;
        }
      }
      piVar1 = *(int **)(puVar6 + 0x26);
      if (*(int **)(puVar6 + 0x28) == piVar1) {
        FUN_00403840(puVar6 + 0x24,piVar1,local_80);
      }
      else {
        FUN_004024e0(piVar1,local_80);
        *(int *)(puVar6 + 0x26) = *(int *)(puVar6 + 0x26) + 0x18;
      }
      FUN_004024e0(&stack0xffffff4c,local_80 + 6);
      FUN_004b34b0(puVar6 + 2,in_stack_ffffff4c);
      uVar7 = ((int)local_7c - (int)local_80) / 0x18;
      if ((2 < uVar7) && (local_60 = (undefined2 *)0x2, 2 < uVar7)) {
        iVar12 = 0x30;
        do {
          FUN_004024e0(&stack0xffffff4c,(undefined4 *)(iVar12 + (int)local_80));
          FUN_00592d70(&local_70,'=',(undefined4 *)in_stack_ffffff4c);
          pbVar4 = local_70;
          local_8._0_1_ = 4;
          if ((local_6c - (int)local_70) / 0x18 == 2) {
            pbVar11 = local_70;
            if (0xf < *(uint *)(local_70 + 0x14)) {
              pbVar11 = *(byte **)local_70;
            }
            uVar7 = FUN_004031f0(pbVar11,*(uint *)(local_70 + 0x10),(byte *)"delay",5);
            if ((char)uVar7 == '\0') goto LAB_0046e397;
            pbVar11 = pbVar4 + 0x18;
            if (0xf < *(uint *)(pbVar4 + 0x2c)) {
              pbVar11 = *(byte **)pbVar11;
            }
            dVar13 = atof((char *)pbVar11);
            *(float *)(puVar6 + 0xe) = (float)dVar13;
          }
          else {
LAB_0046e397:
            pvVar8 = (void *)FUN_005adb0f(0x40);
            local_8._0_1_ = 5;
            local_84 = pvVar8;
            FUN_004024e0(&stack0xffffff4c,(undefined4 *)((int)local_80 + iVar12));
            local_74 = FUN_004a1a40(pvVar8,(undefined4 *)in_stack_ffffff4c);
            local_8._0_1_ = 4;
            piVar1 = *(int **)(puVar6 + 0x20);
            if (*(int **)(puVar6 + 0x22) == piVar1) {
              FUN_004141e0(puVar6 + 0x1e,piVar1,&local_74);
            }
            else {
              *piVar1 = local_74;
              *(int *)(puVar6 + 0x20) = *(int *)(puVar6 + 0x20) + 4;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0((int *)&local_70);
          iVar12 = iVar12 + 0x18;
          local_60 = (undefined2 *)((int)local_60 + 1);
        } while (local_60 < (undefined2 *)(((int)local_7c - (int)local_80) / 0x18));
      }
    }
    FUN_004025a0((int *)&local_80);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0046e930(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  byte *in_stack_ffffff7c;
  undefined2 *local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
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
  puStack_c = &LAB_005b7120;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (undefined2 *)0x0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"scenario",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_58,(byte *)local_2c);
  puVar6 = local_54;
  iVar9 = 0;
  local_48 = local_58;
  while (local_48 != puVar6) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_0046e9d4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  if (iVar9 == 0) {
    puVar5 = FUN_00412df0();
    local_50 = (undefined2 *)FUN_005adb0f(0x54);
    local_48 = FUN_0043db80(local_50);
    puVar7 = (undefined4 *)puVar5[1];
    if ((undefined4 *)puVar5[2] != puVar7) {
      *puVar7 = local_48;
      puVar5[1] = puVar5[1] + 4;
      goto LAB_0046eaf9;
    }
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"scenario",8);
    local_8 = 0;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff7c,(undefined4 *)pbVar4);
    iVar9 = FUN_004a82e0(in_stack_ffffff7c);
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_50 = (undefined2 *)FUN_005adb0f(0x54);
    local_48 = FUN_0043db80(local_50);
    puVar5 = (undefined4 *)(iVar9 + 0x3dc);
    puVar7 = *(undefined4 **)(iVar9 + 0x3e0);
    if (*(undefined4 **)(iVar9 + 0x3e4) != puVar7) {
      *puVar7 = local_48;
      *(int *)(iVar9 + 0x3e0) = *(int *)(iVar9 + 0x3e0) + 4;
      goto LAB_0046eaf9;
    }
  }
  FUN_00414080(puVar5,puVar7,&local_48);
LAB_0046eaf9:
  puVar3 = local_48;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_58,(byte *)local_2c);
  puVar6 = local_54;
  iVar9 = 0;
  local_48 = local_58;
  while (local_48 != puVar6) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
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
  if (iVar9 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar10 = 0;
      local_48 = (undefined2 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = 4;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar4 + 4);
        iVar2 = *(int *)pbVar4;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0046e9d4;
          FUN_005adb3f(pvVar8);
        }
        if ((uint)((iVar9 - iVar2) / 0x18) <= uVar10) break;
        puVar6 = (undefined2 *)FUN_005adb0f(0x40);
        local_8 = 5;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_54 = puVar6;
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,6);
        local_4c = (undefined2 *)0x2;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)(*(int *)pbVar4 + (int)local_48));
        local_50 = (undefined2 *)FUN_004a1a40(puVar6,(undefined4 *)in_stack_ffffff7c);
        local_8 = 7;
        puVar5 = *(undefined4 **)(puVar3 + 0x20);
        if (*(undefined4 **)(puVar3 + 0x22) == puVar5) {
          FUN_004141e0(puVar3 + 0x1e,puVar5,&local_50);
        }
        else {
          *puVar5 = local_50;
          *(int *)(puVar3 + 0x20) = *(int *)(puVar3 + 0x20) + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0046e9d4;
          FUN_005adb3f(pvVar8);
        }
        uVar10 = uVar10 + 1;
        local_48 = local_48 + 0xc;
      } while( true );
    }
  }
  else {
    puVar6 = (undefined2 *)FUN_005adb0f(0x40);
    local_8 = 1;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_50 = puVar6;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_4c = (undefined2 *)0x1;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff7c,(undefined4 *)pbVar4);
    local_48 = (undefined2 *)FUN_004a1a40(puVar6,(undefined4 *)in_stack_ffffff7c);
    local_8 = 3;
    piVar1 = *(int **)(puVar3 + 0x20);
    if (*(int **)(puVar3 + 0x22) == piVar1) {
      FUN_004141e0(puVar3 + 0x1e,piVar1,&local_48);
    }
    else {
      *piVar1 = (int)local_48;
      *(int *)(puVar3 + 0x20) = *(int *)(puVar3 + 0x20) + 4;
    }
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"delay",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_58,(byte *)local_2c);
  puVar6 = local_54;
  iVar9 = 0;
  local_4c = local_58;
  while (local_4c != puVar6) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
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
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"delay",5);
    local_8 = 8;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    dVar11 = atof((char *)pbVar4);
    *(float *)(puVar3 + 0xe) = (float)dVar11;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaa40,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_58,(byte *)local_2c);
  puVar6 = local_54;
  iVar9 = 0;
  local_4c = local_58;
  while (local_4c != puVar6) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaa40,4);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar10 = 0;
      local_48 = (undefined2 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005eaa40,4);
        local_8 = 10;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar4 + 4);
        iVar2 = *(int *)pbVar4;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0046e9d4;
          FUN_005adb3f(pvVar8);
        }
        if ((uint)((iVar9 - iVar2) / 0x18) <= uVar10) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005eaa40,4);
        local_8 = 0xb;
        pbVar4 = FUN_0047d5c0((byte *)local_44);
        piVar1 = *(int **)(puVar3 + 0x26);
        if (*(int **)(puVar3 + 0x28) == piVar1) {
          FUN_00403840(puVar3 + 0x24,piVar1,(undefined4 *)(*(int *)pbVar4 + (int)local_48));
        }
        else {
          FUN_004024e0(piVar1,(undefined4 *)(*(int *)pbVar4 + (int)local_48));
          *(int *)(puVar3 + 0x26) = *(int *)(puVar3 + 0x26) + 0x18;
        }
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          pvVar8 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar8 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_0046e9d4;
          FUN_005adb3f(pvVar8);
        }
        uVar10 = uVar10 + 1;
        local_34 = 0;
        local_48 = local_48 + 0xc;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    local_8 = 9;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    piVar1 = *(int **)(puVar3 + 0x26);
    if (*(int **)(puVar3 + 0x28) == piVar1) {
      FUN_00403840(puVar3 + 0x24,piVar1,(undefined4 *)pbVar4);
    }
    else {
      FUN_004024e0(piVar1,(undefined4 *)pbVar4);
      *(int *)(puVar3 + 0x26) = *(int *)(puVar3 + 0x26) + 0x18;
    }
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
  }
  iVar9 = *(int *)(puVar3 + 0x24);
  uVar10 = 0;
  iVar2 = *(int *)(puVar3 + 0x26) - iVar9 >> 0x1f;
  if ((*(int *)(puVar3 + 0x26) - iVar9) / 0x18 + iVar2 != iVar2) {
    local_48 = (undefined2 *)0x0;
    do {
      if (0 < (int)uVar10) {
        FUN_00403640(puVar3 + 0x12,&DAT_005ea418,1);
        iVar9 = *(int *)(puVar3 + 0x24);
      }
      puVar7 = (undefined4 *)((int)local_48 + iVar9);
      puVar5 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar5 = (undefined4 *)*puVar7;
      }
      FUN_00403640(puVar3 + 0x12,puVar5,puVar7[4]);
      iVar9 = *(int *)(puVar3 + 0x24);
      uVar10 = uVar10 + 1;
      local_48 = local_48 + 0xc;
    } while (uVar10 < (uint)((*(int *)(puVar3 + 0x26) - iVar9) / 0x18));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0046f290(void)

{
  byte *this;
  bool bVar1;
  undefined4 **ppuVar2;
  byte *pbVar3;
  undefined4 **ppuVar4;
  void *pvVar5;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b7158;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"prefix",6);
  local_8 = 0;
  ppuVar2 = (undefined4 **)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (ppuVar2 != &DAT_00655720) {
    ppuVar4 = ppuVar2;
    if ((undefined4 *)0xf < ppuVar2[5]) {
      ppuVar4 = (undefined4 **)*ppuVar2;
    }
    FUN_00402690(&DAT_00655720,ppuVar4,(uint)ppuVar2[4]);
  }
  local_8 = 0xffffffff;
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
  this = DAT_0065b53c;
  DAT_00655058 = 0;
  DAT_00655054 = 1;
  pbVar3 = FUN_004143f0(DAT_0065b538,DAT_0065b53c,(byte *)&DAT_00655720);
  if (pbVar3 == this) {
    if (DAT_0065b540 == this) {
      FUN_00403840(&DAT_0065b538,(int *)this,&DAT_00655720);
    }
    else {
      FUN_004024e0(this,&DAT_00655720);
      DAT_0065b53c = DAT_0065b53c + 0x18;
    }
  }
  else {
    FUN_00591070("ERROR","ERROR: duplicate prefix \'%s\'.");
    bVar1 = cc_assert_script_compatible("ERROR: duplicate prefix.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","ERROR: duplicate prefix.");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0046f410(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  basic_string<> *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  basic_string<> *pbVar8;
  void *pvVar9;
  undefined1 *puVar10;
  basic_string<> *pbVar11;
  double dVar12;
  void *in_stack_fffffeb4;
  basic_string<> abStack_134 [16];
  undefined4 uStack_124;
  undefined1 auStack_11c [16];
  undefined4 uStack_10c;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  basic_string<> *in_stack_ffffff14;
  basic_string<> *local_c4;
  basic_string<> *local_c0;
  basic_string<> *local_bc;
  basic_string<> *local_b8;
  basic_string<> *local_b4;
  undefined1 *local_b0;
  basic_string<> *local_ac;
  basic_string<> *local_a8;
  basic_string<> local_a4 [24];
  void *local_8c [4];
  undefined4 local_7c;
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
  undefined1 *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b76e0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_bc = (basic_string<> *)0x0;
  pbVar4 = (basic_string<> *)FUN_005adb0f(0xb8);
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  local_b4 = pbVar4;
  FUN_00402690(local_2c,&DAT_005ead74,4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_bc = (basic_string<> *)0x1;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  FUN_00402690(local_8c,"subject",7);
  local_8 = 2;
  local_bc = (basic_string<> *)0x3;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  FUN_00402690(local_74,"subject",7);
  local_8 = 3;
  local_bc = (basic_string<> *)0x7;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,&DAT_005ea63c,2);
  local_8 = 4;
  local_bc = (basic_string<> *)0xf;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005ea634,4);
  local_a8 = (basic_string<> *)&stack0xffffff14;
  local_8 = 5;
  local_bc = (basic_string<> *)0x1f;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
  local_b0 = auStack_104;
  local_8 = 6;
  uStack_10c = 0x46f5a4;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  uStack_10c = 0x46f5ac;
  FUN_004024e0(auStack_104,(undefined4 *)pbVar5);
  local_b8 = (basic_string<> *)auStack_11c;
  local_8._0_1_ = 7;
  uStack_124 = 0x46f5c9;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  uStack_124 = 0x46f5d1;
  FUN_004024e0(auStack_11c,(undefined4 *)pbVar5);
  local_ac = abStack_134;
  local_8._0_1_ = 8;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  FUN_004024e0(abStack_134,(undefined4 *)pbVar5);
  local_8._0_1_ = 9;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(&stack0xfffffeb4,(undefined4 *)pbVar5);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_bc = FUN_00439500(pbVar4,in_stack_fffffeb4);
  local_8 = 0xd;
  local_b8 = local_bc;
  if (0xf < local_30) {
    pvVar9 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar9 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_0046f659:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_8 = 0xc;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar9 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar9 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_8 = 0xb;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar9 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar9 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_8 = 10;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  if (0xf < local_78) {
    pvVar9 = local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (pvVar9 = *(void **)((int)local_8c[0] + -4),
       0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_8 = 0xffffffff;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  local_ac = (basic_string<> *)0x0;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%s_%d");
  local_a8 = local_b8 + 0xa0;
  if (local_a8 != pbVar4) {
    FUN_00401b20((int *)local_a8);
    iVar6 = *(int *)(pbVar4 + 4);
    iVar1 = *(int *)(pbVar4 + 8);
    iVar2 = *(int *)(pbVar4 + 0xc);
    *(int *)local_a8 = *(int *)pbVar4;
    *(int *)(local_a8 + 4) = iVar6;
    *(int *)(local_a8 + 8) = iVar1;
    *(int *)(local_a8 + 0xc) = iVar2;
    *(undefined8 *)(local_a8 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
    *(int *)(pbVar4 + 0x10) = 0;
    *(int *)(pbVar4 + 0x14) = 0xf;
    *pbVar4 = (basic_string<>)0x0;
  }
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  DAT_00655054 = DAT_00655054 + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  iVar6 = *(int *)(DAT_0065b5cc + 0x124);
  pbVar4 = (basic_string<> *)(iVar6 + 4);
  if (local_b8 + 0x68 != pbVar4) {
    if (0xf < *(uint *)(iVar6 + 0x18)) {
      pbVar4 = *(basic_string<> **)pbVar4;
    }
    FUN_00402690(local_b8 + 0x68,pbVar4,*(uint *)(iVar6 + 0x14));
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"delay",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
    } while (local_a8 != pbVar4);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  pbVar4 = local_b8;
  if (local_b0 != (undefined1 *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"delay",5);
    local_8 = 0xf;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar12 = atof((char *)pbVar5);
    pbVar4 = local_b8;
    local_8 = 0xffffffff;
    *(float *)(local_b8 + 0x9c) = (float)dVar12;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  iVar6 = FUN_00412700();
  puVar7 = *(undefined4 **)(iVar6 + 0xc);
  if (*(undefined4 **)(iVar6 + 0x10) == puVar7) {
    FUN_00414080((void *)(iVar6 + 8),puVar7,&local_bc);
    local_b8 = local_bc;
  }
  else {
    *puVar7 = pbVar4;
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"beginquest",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
    } while (local_a8 != pbVar4);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 != (undefined1 *)0x0) {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x10;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"beginquest",10);
    local_8 = CONCAT31(local_8._1_3_,0x11);
    local_bc = (basic_string<> *)0x20;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,0xe,in_stack_ffffff14);
    local_8 = 0x12;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)0x0;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"completequest",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
    } while (local_a8 != pbVar4);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 != (undefined1 *)0x0) {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x13;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"completequest",0xd);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    local_bc = (basic_string<> *)&DAT_00000040;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,0xf,in_stack_ffffff14);
    local_8 = 0x15;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)0x0;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"failquest",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
    } while (local_a8 != pbVar4);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 != (undefined1 *)0x0) {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x16;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"failquest",9);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    local_bc = (basic_string<> *)0x80;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,0x10,in_stack_ffffff14);
    local_8 = 0x18;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)0x0;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"givelicense",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
    } while (local_a8 != pbVar4);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 == (undefined1 *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"givelicense",0xb);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8 = 0x1c;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar6 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        if ((undefined1 *)((iVar6 - iVar1) / 0x18) <= local_b0) break;
        pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8 = 0x1d;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        local_c0 = pbVar4;
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        local_bc = (basic_string<> *)0x200;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff14,(undefined4 *)(local_a8 + *(int *)pbVar5));
        local_ac = FUN_004a3a90(pbVar4,9,in_stack_ffffff14);
        local_8 = 0x1f;
        puVar7 = *(undefined4 **)(local_b8 + 0x90);
        if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
          FUN_004141e0(local_b8 + 0x8c,puVar7,&local_ac);
        }
        else {
          *puVar7 = local_ac;
          *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
        }
        local_8 = 0xffffffff;
        local_ac = (basic_string<> *)0x0;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        local_b0 = local_b0 + 1;
        local_a8 = local_a8 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x19;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"givelicense",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    local_bc = (basic_string<> *)&DAT_00000100;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,9,in_stack_ffffff14);
    local_8 = 0x1b;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)0x0;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"blacklist",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar8 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  pbVar4 = (basic_string<> *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
      pbVar4 = local_ac;
    } while (local_a8 != pbVar8);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 == (undefined1 *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"blacklist",9);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
    if (iVar6 != 0) {
      local_a8 = (basic_string<> *)0x0;
      local_b0 = (undefined1 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"blacklist",9);
        local_8 = 0x23;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar6 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        if ((basic_string<> *)((iVar6 - iVar1) / 0x18) <= local_a8) break;
        pbVar8 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8 = 0x24;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        local_c0 = pbVar8;
        FUN_00402690(local_2c,"blacklist",9);
        local_8 = CONCAT31(local_8._1_3_,0x25);
        local_bc = (basic_string<> *)((uint)pbVar4 | 0x800);
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff14,(undefined4 *)(local_b0 + *(int *)pbVar5));
        local_ac = FUN_004a3a90(pbVar8,10,in_stack_ffffff14);
        local_8 = 0x26;
        puVar7 = *(undefined4 **)(local_b8 + 0x90);
        if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
          FUN_004141e0(local_b8 + 0x8c,puVar7,&local_ac);
        }
        else {
          *puVar7 = local_ac;
          *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
        }
        local_8 = 0xffffffff;
        pbVar4 = (basic_string<> *)((uint)pbVar4 & 0xfffff7ff);
        local_ac = pbVar4;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        local_a8 = local_a8 + 1;
        local_b0 = local_b0 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x20;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"blacklist",9);
    local_8 = CONCAT31(local_8._1_3_,0x21);
    local_bc = (basic_string<> *)((uint)local_ac | 0x400);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,10,in_stack_ffffff14);
    local_8 = 0x22;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pbVar4 = (basic_string<> *)((uint)local_ac & 0xfffffbff);
    local_ac = pbVar4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"setflag",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar8 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
      pbVar4 = local_ac;
    } while (local_a8 != pbVar8);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 == (undefined1 *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"setflag",7);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
    if (iVar6 != 0) {
      local_a8 = (basic_string<> *)0x0;
      local_b0 = (undefined1 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8 = 0x2a;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar6 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        if ((basic_string<> *)((iVar6 - iVar1) / 0x18) <= local_a8) break;
        pbVar8 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8 = 0x2b;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        local_c0 = pbVar8;
        FUN_00402690(local_2c,"setflag",7);
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        local_bc = (basic_string<> *)((uint)pbVar4 | 0x2000);
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff14,(undefined4 *)(local_b0 + *(int *)pbVar5));
        local_ac = FUN_004a3a90(pbVar8,0,in_stack_ffffff14);
        local_8 = 0x2d;
        puVar7 = *(undefined4 **)(local_b8 + 0x90);
        if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
          FUN_004141e0(local_b8 + 0x8c,puVar7,&local_ac);
        }
        else {
          *puVar7 = local_ac;
          *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
        }
        local_8 = 0xffffffff;
        pbVar4 = (basic_string<> *)((uint)pbVar4 & 0xffffdfff);
        local_ac = pbVar4;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        local_a8 = local_a8 + 1;
        local_b0 = local_b0 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x27;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"setflag",7);
    local_8 = CONCAT31(local_8._1_3_,0x28);
    local_bc = (basic_string<> *)((uint)local_ac | 0x1000);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,0,in_stack_ffffff14);
    local_8 = 0x29;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    pbVar4 = (basic_string<> *)((uint)local_ac & 0xffffefff);
    local_ac = pbVar4;
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"addmoney",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar8 = local_c0;
  local_a8 = local_c4;
  local_b0 = (undefined1 *)0x0;
  puVar10 = local_b0;
  if (local_c4 != local_c0) {
    puVar10 = (undefined1 *)0x0;
    do {
      puVar10 = puVar10 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_a8);
      pbVar4 = local_ac;
    } while (local_a8 != pbVar8);
  }
  local_b0 = puVar10;
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (local_b0 == (undefined1 *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"addmoney",8);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
    if (iVar6 != 0) {
      local_a8 = (basic_string<> *)0x0;
      local_b0 = (undefined1 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"addmoney",8);
        local_8 = 0x31;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar6 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        if ((basic_string<> *)((iVar6 - iVar1) / 0x18) <= local_a8) break;
        pbVar8 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8 = 0x32;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
        local_c0 = pbVar8;
        FUN_00402690(local_2c,"addmoney",8);
        local_8 = CONCAT31(local_8._1_3_,0x33);
        local_bc = (basic_string<> *)((uint)pbVar4 | 0x8000);
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff14,(undefined4 *)(local_b0 + *(int *)pbVar5));
        local_ac = FUN_004a3a90(pbVar8,2,in_stack_ffffff14);
        local_8 = 0x34;
        puVar7 = *(undefined4 **)(local_b8 + 0x90);
        if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
          FUN_004141e0(local_b8 + 0x8c,puVar7,&local_ac);
        }
        else {
          *puVar7 = local_ac;
          *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
        }
        local_8 = 0xffffffff;
        pbVar4 = (basic_string<> *)((uint)pbVar4 & 0xffff7fff);
        local_ac = pbVar4;
        if (0xf < local_18) {
          puVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (puVar10 = *(undefined1 **)(local_2c[0] + -4),
             (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) goto LAB_0046f659;
          FUN_005adb3f(puVar10);
        }
        local_a8 = local_a8 + 1;
        local_b0 = local_b0 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x2e;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"addmoney",8);
    local_8 = CONCAT31(local_8._1_3_,0x2f);
    local_bc = (basic_string<> *)((uint)local_ac | 0x4000);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,2,in_stack_ffffff14);
    local_8 = 0x30;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)((uint)local_ac & 0xffffbfff);
    if (0xf < local_18) {
      puVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (puVar10 = *(undefined1 **)(local_2c[0] + -4),
         (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"removemoney",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_c4,(byte *)local_2c);
  pbVar4 = local_c0;
  iVar6 = 0;
  local_a8 = local_c4;
  while (local_a8 != pbVar4) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_a8)
    ;
  }
  if (0xf < local_18) {
    puVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (puVar10 = *(undefined1 **)(local_2c[0] + -4),
       (undefined1 *)0x1f < local_2c[0] + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar10);
  }
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar4 = local_b8;
    pbVar8 = local_ac;
    if (iVar6 != 0) {
      local_b0 = (undefined1 *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
      local_8 = 0x38;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar5);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      pbVar4 = local_b8;
      pbVar8 = local_ac;
      if (iVar6 != 0) {
        local_b4 = local_b8 + 0x8c;
        do {
          pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8 = 0x39;
          local_c0 = pbVar4;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
          local_8 = CONCAT31(local_8._1_3_,0x3a);
          local_bc = (basic_string<> *)((uint)local_ac | 0x20000);
          uStack_f8 = 0x471069;
          puVar10 = local_b0;
          local_ac = local_bc;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar5,(int)puVar10);
          FUN_004024e0(&stack0xffffff14,puVar7);
          local_a8 = FUN_004a3a90(pbVar4,3,in_stack_ffffff14);
          local_8 = 0x3b;
          FUN_004130e0(local_b4,&local_a8);
          local_8 = 0xffffffff;
          pbVar8 = (basic_string<> *)((uint)local_ac & 0xfffdffff);
          local_ac = pbVar8;
          FUN_00401b20((int *)local_2c);
          local_b0 = local_b0 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
          local_8 = 0x38;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar10 = (undefined1 *)FUN_00402460((int *)pbVar5);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          pbVar4 = local_b8;
        } while (local_b0 < puVar10);
      }
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x35;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined1 *)((uint)local_2c[0] & 0xffffff00);
    local_c0 = pbVar4;
    FUN_00402690(local_2c,"removemoney",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x36);
    local_bc = (basic_string<> *)((uint)local_ac | 0x10000);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_a8 = FUN_004a3a90(pbVar4,3,in_stack_ffffff14);
    pbVar4 = local_b8;
    local_8 = 0x37;
    puVar7 = *(undefined4 **)(local_b8 + 0x90);
    if (*(undefined4 **)(local_b8 + 0x94) == puVar7) {
      FUN_004141e0(local_b8 + 0x8c,puVar7,&local_a8);
    }
    else {
      *puVar7 = local_a8;
      *(int *)(local_b8 + 0x90) = *(int *)(local_b8 + 0x90) + 4;
    }
    local_8 = 0xffffffff;
    local_ac = (basic_string<> *)((uint)local_ac & 0xfffeffff);
    pbVar8 = local_ac;
    if (0xf < local_18) {
      local_a8 = (basic_string<> *)(local_18 + 1);
      local_b0 = local_2c[0];
      if ((basic_string<> *)0xfff < local_a8) {
        FUN_00401a30((int *)&local_b0,(int *)&local_a8);
      }
      FUN_005adb3f(local_b0);
      pbVar8 = local_ac;
    }
  }
  local_ac = pbVar8;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar8 = local_b8;
    pbVar11 = local_ac;
    if (iVar6 != 0) {
      local_b0 = (undefined1 *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
      local_8 = 0x3f;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar5);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      pbVar8 = local_b8;
      pbVar11 = local_ac;
      if (iVar6 != 0) {
        local_a8 = pbVar4 + 0x80;
        do {
          pbVar4 = (basic_string<> *)FUN_005adb0f(0x40);
          local_8 = 0x40;
          local_c0 = pbVar4;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
          local_8 = CONCAT31(local_8._1_3_,0x41);
          local_bc = (basic_string<> *)((uint)local_ac | 0x80000);
          uStack_f8 = 0x4712b7;
          puVar10 = local_b0;
          local_ac = local_bc;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar5,(int)puVar10);
          FUN_004024e0(&stack0xffffff14,puVar7);
          local_b4 = (basic_string<> *)FUN_004a1a40(pbVar4,(undefined4 *)in_stack_ffffff14);
          local_8 = 0x42;
          FUN_004130e0(local_a8,&local_b4);
          local_8 = 0xffffffff;
          pbVar11 = (basic_string<> *)((uint)local_ac & 0xfff7ffff);
          local_ac = pbVar11;
          FUN_00401b20((int *)local_2c);
          local_b0 = local_b0 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
          local_8 = 0x3f;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar10 = (undefined1 *)FUN_00402460((int *)pbVar5);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          pbVar8 = local_b8;
        } while (local_b0 < puVar10);
      }
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x40);
    local_8 = 0x3c;
    local_c0 = pbVar4;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"req");
    local_8 = CONCAT31(local_8._1_3_,0x3d);
    local_bc = (basic_string<> *)((uint)local_ac | 0x40000);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_b4 = (basic_string<> *)FUN_004a1a40(pbVar4,(undefined4 *)in_stack_ffffff14);
    pbVar8 = local_b8;
    local_8 = 0x3e;
    FUN_004130e0(local_b8 + 0x80,&local_b4);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pbVar11 = (basic_string<> *)((uint)local_ac & 0xfffbffff);
  }
  local_ac = pbVar11;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar4 = local_ac;
    if (iVar6 != 0) {
      local_b0 = (undefined1 *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
      local_8 = 0x46;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar5);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      pbVar4 = local_ac;
      if (iVar6 != 0) {
        local_a8 = pbVar8 + 0x8c;
        do {
          pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8 = 0x47;
          local_c0 = pbVar4;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_8 = CONCAT31(local_8._1_3_,0x48);
          local_bc = (basic_string<> *)((uint)local_ac | 0x200000);
          uStack_f8 = 0x47150d;
          puVar10 = local_b0;
          local_ac = local_bc;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar5,(int)puVar10);
          FUN_004024e0(&stack0xffffff14,puVar7);
          local_b4 = FUN_004a3a90(pbVar4,0xc,in_stack_ffffff14);
          local_8 = 0x49;
          FUN_004130e0(local_a8,&local_b4);
          local_8 = 0xffffffff;
          pbVar4 = (basic_string<> *)((uint)local_ac & 0xffdfffff);
          local_ac = pbVar4;
          FUN_00401b20((int *)local_2c);
          local_b0 = local_b0 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_8 = 0x46;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar10 = (undefined1 *)FUN_00402460((int *)pbVar5);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
        } while (local_b0 < puVar10);
      }
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x43;
    local_c0 = pbVar4;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
    local_8 = CONCAT31(local_8._1_3_,0x44);
    local_bc = (basic_string<> *)((uint)local_ac | 0x100000);
    local_ac = local_bc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_b4 = FUN_004a3a90(pbVar4,0xc,in_stack_ffffff14);
    local_8 = 0x45;
    FUN_004130e0(local_b8 + 0x8c,&local_b4);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pbVar4 = (basic_string<> *)((uint)local_ac & 0xffefffff);
  }
  local_ac = pbVar4;
  local_a8 = local_ac;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar4 = local_ac;
    pbVar8 = local_ac;
    if (iVar6 != 0) {
      local_b0 = (undefined1 *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
      local_8 = 0x4d;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar5);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      pbVar4 = local_ac;
      pbVar8 = local_ac;
      if (iVar6 != 0) {
        local_a8 = local_b8 + 0x8c;
        do {
          pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8 = 0x4e;
          local_c0 = pbVar4;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_8 = CONCAT31(local_8._1_3_,0x4f);
          local_bc = (basic_string<> *)((uint)local_ac | 0x800000);
          uStack_f8 = 0x471766;
          puVar10 = local_b0;
          local_ac = local_bc;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar5,(int)puVar10);
          FUN_004024e0(&stack0xffffff14,puVar7);
          local_b4 = FUN_004a3a90(pbVar4,0xb,in_stack_ffffff14);
          local_8 = 0x50;
          FUN_004130e0(local_a8,&local_b4);
          local_8 = 0xffffffff;
          pbVar4 = (basic_string<> *)((uint)local_ac & 0xff7fffff);
          local_ac = pbVar4;
          FUN_00401b20((int *)local_2c);
          local_b0 = local_b0 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_8 = 0x4d;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar10 = (undefined1 *)FUN_00402460((int *)pbVar5);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          pbVar8 = pbVar4;
        } while (local_b0 < puVar10);
      }
    }
  }
  else {
    pbVar4 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x4a;
    local_c0 = pbVar4;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
    local_8 = CONCAT31(local_8._1_3_,0x4b);
    local_bc = (basic_string<> *)((uint)local_ac | 0x400000);
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_b4 = FUN_004a3a90(pbVar4,0xb,in_stack_ffffff14);
    local_8 = 0x4c;
    FUN_004130e0(local_b8 + 0x8c,&local_b4);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pbVar4 = (basic_string<> *)((uint)local_a8 & 0xffbfffff);
    pbVar8 = local_ac;
  }
  local_ac = pbVar8;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
  local_8 = 0x51;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar3 = FUN_00403260(pbVar5,&DAT_005e425c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (cVar3 != '\0') {
    pbVar8 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8 = 0x52;
    local_c0 = pbVar8;
    std::basic_string<>::basic_string<>(local_a4,"resetcontracts");
    local_8 = CONCAT31(local_8._1_3_,0x53);
    local_bc = (basic_string<> *)((uint)pbVar4 | 0x1000000);
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_a4);
    FUN_004024e0(&stack0xffffff14,(undefined4 *)pbVar5);
    local_b4 = FUN_004a3a90(pbVar8,0xd,in_stack_ffffff14);
    local_8 = 0x54;
    FUN_004130e0(local_b8 + 0x8c,&local_b4);
    FUN_00401b20((int *)local_a4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
