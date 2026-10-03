#include "../ois_server.exe.h"


void __fastcall FUN_00500690(int param_1)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  void *pvVar3;
  undefined4 *in_stack_ffffff74;
  uint in_stack_ffffff88;
  undefined4 *puVar4;
  undefined1 auStack_74 [8];
  undefined4 uStack_6c;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c;
  undefined4 **ppuStack_28;
  undefined4 **ppuStack_24;
  undefined4 **ppuStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c04d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)(in_stack_ffffff88 & 0xffffff00);
  FUN_00402690(&stack0xffffff88,"Entering scan mode to scan vessel %s.",0x25);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar4);
  local_1c = 0xf00000000;
  local_2c = (undefined4 ***)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x34) + 0x40) + 0x34) == '\0') {
    uStack_6c = 0x5007c8;
    ppppuVar2 = (undefined4 ****)
                FUN_00591e00((undefined1 *)local_44,
                             "Attention unknown %s - you are travelling with IFF off and will be scanned."
                            );
    if (&local_2c != ppppuVar2) {
      FUN_00401b20((int *)&local_2c);
      local_2c = *ppppuVar2;
      ppuStack_28 = ppppuVar2[1];
      ppuStack_24 = ppppuVar2[2];
      ppuStack_20 = ppppuVar2[3];
      local_1c = *(undefined8 *)(ppppuVar2 + 4);
      ppppuVar2[4] = (undefined4 ***)0x0;
      ppppuVar2[5] = (undefined4 ***)0xf;
      *(undefined1 *)ppppuVar2 = 0;
    }
    if (local_30 < 0x10) goto LAB_00500833;
    pvVar3 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar3 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    uStack_6c = 0x50073b;
    ppppuVar2 = (undefined4 ****)
                FUN_00591e00((undefined1 *)local_44,"Attention freighter %s. Prepare to be scanned."
                            );
    if (&local_2c != ppppuVar2) {
      FUN_00401b20((int *)&local_2c);
      local_2c = *ppppuVar2;
      ppuStack_28 = ppppuVar2[1];
      ppuStack_24 = ppppuVar2[2];
      ppuStack_20 = ppppuVar2[3];
      local_1c = *(undefined8 *)(ppppuVar2 + 4);
      ppppuVar2[4] = (undefined4 ***)0x0;
      ppppuVar2[5] = (undefined4 ***)0xf;
      *(undefined1 *)ppppuVar2 = 0;
    }
    if (local_30 < 0x10) goto LAB_00500833;
    pvVar3 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar3 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4))))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_005adb3f(pvVar3);
LAB_00500833:
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(iVar1 + 900) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  FUN_004024e0(auStack_74,&local_2c);
  local_8._0_1_ = 1;
  FUN_004024e0(&stack0xffffff74,(undefined4 *)(*(int *)(param_1 + 0x24) + 0x238));
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_005199a0(*(void **)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x3c),1,in_stack_ffffff74);
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x234) != '\0') {
    ppppuVar2 = &local_2c;
    if (0xf < local_1c._4_4_) {
      ppppuVar2 = (undefined4 ****)local_2c;
    }
    uStack_6c = 0x5008c7;
    FUN_00527550(*(int **)(*(int *)(param_1 + 0x34) + 0x224),2,ppppuVar2);
  }
  if (0xf < local_1c._4_4_) {
    ppppuVar2 = (undefined4 ****)local_2c;
    if ((0xfff < local_1c._4_4_ + 1) &&
       (ppppuVar2 = (undefined4 ****)local_2c[-1],
       0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00500920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
  *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar1 + 900) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


undefined1 * __thiscall FUN_00500970(void *this,undefined1 *param_1)

{
  if (*(int *)((int)this + 0x34) != 0) {
    FUN_00591e00(param_1,"Scanning %s (%.0f%%)");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"Scanning nothing.",0x11);
  return param_1;
}


void __fastcall FUN_005009f0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c0568;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar8 = *(int *)(param_1 + 0x24);
    uVar12 = 0;
    if (*(int *)(*(int *)(iVar8 + 0x44) + 0x148) - *(int *)(*(int *)(iVar8 + 0x44) + 0x144) >> 2 !=
        0) {
      do {
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == 0) {
LAB_00500b93:
          bVar6 = true;
        }
        else {
          local_28 = (float)*(double *)(iVar8 + 0x28);
          local_24 = (float)*(double *)(iVar8 + 0x30);
          local_30 = (float)*(double *)(iVar1 + 0x28);
          local_2c = (float)*(double *)(iVar1 + 0x30);
          local_38 = (float)*(double *)(iVar8 + 0x28);
          local_34 = (float)*(double *)(iVar8 + 0x30);
          local_40 = (float)*(double *)(iVar1 + 0x28);
          local_3c = (float)*(double *)(iVar1 + 0x30);
          local_8 = 3;
          bVar5 = true;
          bVar4 = true;
          bVar3 = true;
          bVar2 = true;
          local_18 = 0xf;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
          local_20 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_40,(Vec2 *)&local_38);
          fVar7 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
          if ((1.5 - fVar13 * 0.5 * fVar7 * fVar7) * fVar7 * fVar13 <
              (1.5 - local_20 * local_14 * local_14) * local_14 * local_1c) goto LAB_00500b93;
          bVar6 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        if (bVar3) {
          bVar3 = false;
        }
        if (bVar4) {
          bVar4 = false;
        }
        if (bVar5) {
          bVar5 = false;
        }
        if (bVar6) {
          uVar10 = 0;
          iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0x24);
          piVar9 = *(int **)(iVar8 + 0x9c);
          uVar11 = *(int *)(iVar8 + 0xa0) - (int)piVar9 >> 2;
          if (uVar11 == 0) goto LAB_00500c35;
          goto LAB_00500c26;
        }
        iVar8 = *(int *)(param_1 + 0x24);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(*(int *)(iVar8 + 0x44) + 0x148) -
                               *(int *)(*(int *)(iVar8 + 0x44) + 0x144) >> 2));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    ExceptionList = local_10;
    return;
  }
  goto LAB_00500c3a;
  while( true ) {
    uVar10 = uVar10 + 1;
    piVar9 = piVar9 + 1;
    if (uVar11 <= uVar10) break;
LAB_00500c26:
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x44) ==
        *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x144) + uVar12 * 4)
                + 4)) goto LAB_00500c37;
  }
LAB_00500c35:
  iVar8 = 0;
LAB_00500c37:
  *(int *)(param_1 + 0x38) = iVar8;
LAB_00500c3a:
  *(undefined4 *)(param_1 + 0x20) = 0x40400000;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00500c60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar1 + 0xd4) == 1) {
    FUN_005179b0(iVar1);
    *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar1 + 0x1c4);
    iVar1 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 0x2c0) = 0;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x40c00000;
  return;
}


void __fastcall FUN_00500cc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(iVar1 + 0xd4) == 1) {
    FUN_005179b0(iVar1);
    *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar1 + 0x1c4);
    iVar1 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 0x2c0) = 0;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
  }
  return;
}


void __thiscall FUN_00500d20(void *this,float param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 *in_stack_ffffff64;
  undefined4 *in_stack_ffffff7c;
  float local_5c;
  undefined1 *local_58;
  float local_54;
  undefined1 *local_50;
  float local_4c;
  float local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c0617;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = (undefined1 *)0x0;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x58) = 0;
  iVar11 = *(int *)((int)this + 0x38);
  local_58 = this;
  if (iVar11 == 0) goto LAB_005014a1;
  if ((*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x174) == iVar11) &&
     (*(char *)((int)this + 0x30) == '\0')) {
    *(undefined1 *)((int)this + 0x30) = 1;
    in_stack_ffffff7c = (undefined4 *)((uint)in_stack_ffffff7c & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,"Warned target.",0xe);
    FUN_0050ae50(*(undefined4 *)((int)this + 0x24),in_stack_ffffff7c);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    iVar11 = *(int *)(DAT_0065b5cc + 0xd0);
    pbVar7 = (byte *)(iVar11 + 8);
    if (0xf < *(uint *)(iVar11 + 0x1c)) {
      pbVar7 = *(byte **)pbVar7;
    }
    uVar2 = FUN_004031f0(pbVar7,*(uint *)(iVar11 + 0x18),(byte *)"Unknown",7);
    if ((char)uVar2 == '\0') {
      puVar3 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,
                            "Attention %s! Unmoore and leave that cargo immediately!");
      local_8._0_1_ = 2;
      uVar2 = puVar3[5];
    }
    else {
      puVar3 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,
                            "Attention unknown %s class vessel - unmoore and leave that cargo immediately!"
                           );
      local_8._0_1_ = 1;
      uVar2 = puVar3[5];
    }
    puVar8 = puVar3;
    if (0xf < uVar2) {
      puVar8 = (undefined4 *)*puVar3;
    }
    FUN_00403640(local_2c,puVar8,puVar3[4]);
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pvVar9 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar9 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) goto LAB_00500e76;
      FUN_005adb3f(pvVar9);
    }
    local_50 = &stack0xffffff7c;
    FUN_004024e0(&stack0xffffff7c,local_2c);
    local_8._0_1_ = 3;
    in_stack_ffffff64 = (undefined4 *)((uint)in_stack_ffffff64 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"XX-XXX",6);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005199a0(*(void **)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x3c),3,in_stack_ffffff64)
    ;
    iVar4 = DAT_0065b5cc;
    iVar11 = *(int *)(DAT_0065b5cc + 0xd0);
    pbVar10 = (byte *)(iVar11 + 0x238);
    pbVar7 = pbVar10;
    if (0xf < *(uint *)(iVar11 + 0x24c)) {
      pbVar7 = *(byte **)pbVar10;
      pbVar10 = *(byte **)pbVar10;
    }
    uVar2 = FUN_004031f0(pbVar10,*(uint *)(iVar11 + 0x248),pbVar7,*(uint *)(iVar11 + 0x248));
    if ((char)uVar2 != '\0') {
      FUN_00527550(*(int **)(*(int *)(iVar4 + 0xd0) + 0x224),4,"PIRATE: UNMOORE FROM OUR CARGO.");
      iVar4 = DAT_0065b5cc;
    }
    FUN_00503100(*(void **)(*(int *)((int)this + 0x24) + 0x44),*(int *)(iVar4 + 0xd0));
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00500e76;
      FUN_005adb3f(pvVar9);
    }
    iVar11 = *(int *)((int)this + 0x38);
  }
  local_54 = (float)*(double *)(*(int *)((int)this + 0x24) + 0x28);
  local_50 = (undefined1 *)(float)*(double *)(*(int *)((int)this + 0x24) + 0x30);
  local_4c = (float)*(double *)(iVar11 + 0x28);
  local_48 = (float)*(double *)(iVar11 + 0x30);
  local_8 = 5;
  fVar14 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_4c,(Vec2 *)&local_54);
  local_48 = (float)(0x5f3759df - ((uint)fVar14 >> 1));
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  iVar11 = *(int *)((int)this + 0x24);
  if ((*(char *)(iVar11 + 0x2ec) != '\0') || (*(int *)(iVar11 + 0xd4) == 1)) goto LAB_005014a1;
  fVar13 = 5.0;
  if (5.0 < (1.5 - fVar14 * 0.5 * local_48 * local_48) * local_48 * fVar14) {
    FUN_00593120(&local_4c,(float)*(double *)(*(int *)((int)this + 0x38) + 0x28),
                 (float)*(double *)(*(int *)((int)this + 0x38) + 0x30));
    pvVar9 = *(void **)((int)this + 0x24);
    local_8._0_1_ = 0xb;
    local_8._1_3_ = 0;
    FUN_005179b0((int)pvVar9);
    *(undefined4 *)((int)pvVar9 + 0x1c8) = *(undefined4 *)((int)pvVar9 + 0x1c4);
    FUN_00517bc0(pvVar9,local_4c,local_48);
    goto LAB_005014a1;
  }
  FUN_00403cb0(iVar11);
  if (fVar13 != 0.0) {
    FUN_00403cb0(*(int *)((int)this + 0x24));
    if ((0.0 < fVar13) && (*(int *)(*(int *)((int)this + 0x24) + 0xd4) != 1)) {
      FUN_00518af0(*(int *)((int)this + 0x24));
    }
    goto LAB_005014a1;
  }
  fVar14 = *(float *)((int)this + 0x34) - param_1;
  *(float *)((int)this + 0x34) = fVar14;
  if (0.0 < fVar14) goto LAB_005014a1;
  iVar11 = 0xc;
  do {
    local_48 = *(float *)(*(int *)((int)this + 0x38) + 0xe8);
    if (*(int *)(iVar11 + (int)local_48) != 0) {
      iVar4 = *(int *)((int)this + 0x24);
      uVar2 = FUN_005118b0(iVar4);
      if ((char)uVar2 == '\0') {
        uVar2 = 0;
        puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x84);
        uVar12 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar3 >> 2;
        if (uVar12 != 0) {
          local_50 = *(undefined1 **)(*(int *)((int)local_48 + iVar11) + 4);
          do {
            piVar5 = (int *)*puVar3;
            this = local_58;
            if ((undefined1 *)*piVar5 == local_50) goto LAB_005011b9;
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (uVar2 < uVar12);
        }
        piVar5 = (int *)0x0;
LAB_005011b9:
        pvVar9 = *(void **)(*(int *)((int)this + 0x24) + 0x1f8);
        iVar6 = FUN_00507200(pvVar9,piVar5);
        iVar4 = *(int *)(*(int *)(iVar11 + (int)local_48) + 8);
        if (iVar4 <= iVar6) {
          FUN_00506db0(pvVar9,*(int *)(*(int *)(iVar11 + (int)local_48) + 4),iVar4);
        }
      }
      else {
        iVar4 = FUN_00511900(iVar4);
        FUN_005070d0(*(void **)(*(int *)((int)this + 0x24) + 0x1f8),iVar4);
        **(undefined1 **)(*(int *)(*(int *)((int)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) =
             **(undefined1 **)(iVar11 + *(int *)(*(int *)((int)this + 0x38) + 0xe8));
        *(undefined1 *)
         (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 1) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)((int)this + 0x38) + 0xe8) + iVar11) + 1);
        *(undefined1 *)
         (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 2) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)((int)this + 0x38) + 0xe8) + iVar11) + 2);
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 4) =
             *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)this + 0x38) + 0xe8) + iVar11) + 4);
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x1f8) + 0xc + iVar4 * 4) + 8) =
             *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)this + 0x38) + 0xe8) + iVar11) + 8);
      }
    }
    iVar11 = iVar11 + 4;
  } while (iVar11 < 0x44);
  pbVar7 = (byte *)((uint)in_stack_ffffff7c & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"Done gone and grabbed us some cargo.",0x24);
  FUN_0050ae50(*(undefined4 *)((int)this + 0x24),(undefined4 *)pbVar7);
  FUN_004024e0(local_44,(undefined4 *)(*(int *)((int)this + 0x38) + 0x68));
  local_8 = 6;
  FUN_004024e0(&stack0xffffff7c,local_44);
  iVar11 = FUN_004a7100(pbVar7);
  FUN_0051f460(*(void **)(*(int *)((int)this + 0x24) + 0x24),*(undefined4 **)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = 0;
  if (iVar11 == 0) {
LAB_005012ee:
    bVar1 = false;
  }
  else {
    pvVar9 = *(void **)((int)this + 0x24);
    uVar2 = FUN_0050c850(pvVar9,iVar11);
    if (((char)uVar2 == '\0') || (uVar2 = FUN_00511860(iVar11), (char)uVar2 == '\0'))
    goto LAB_005012ee;
    local_5c = (float)*(double *)((int)pvVar9 + 0x28);
    local_58 = (undefined1 *)(float)*(double *)((int)pvVar9 + 0x30);
    local_4c = (float)*(double *)(iVar11 + 0x28);
    fVar14 = (float)*(double *)(iVar11 + 0x30);
    local_8 = 8;
    local_50 = (undefined1 *)0x3;
    local_48 = fVar14;
    FUN_00591010((Vec2 *)&local_4c,(Vec2 *)&local_5c);
    if (*(float *)(&DAT_005df5d8 + *(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x74) * 4)
        < fVar14) goto LAB_005012ee;
    bVar1 = true;
  }
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  if (bVar1) {
    FUN_00503100(*(void **)(*(int *)((int)this + 0x24) + 0x44),iVar11);
    FUN_00591e00((undefined1 *)local_2c,
                 "Attention %s - we know you didn\'t drop all your cargo. Do not disobey us again.")
    ;
    local_58 = &stack0xffffff7c;
    local_8._0_1_ = 9;
    FUN_004024e0(&stack0xffffff7c,local_2c);
    local_8._0_1_ = 10;
    in_stack_ffffff64 = (undefined4 *)((uint)in_stack_ffffff64 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"XX-XXX",6);
    local_8._0_1_ = 9;
    FUN_005199a0(*(void **)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x3c),3,in_stack_ffffff64)
    ;
    if (*(char *)(iVar11 + 0x234) != '\0') {
      FUN_00527550(*(int **)(iVar11 + 0x224),4,"PIRATE: You did not drop all your cargo.");
    }
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00500e76;
      FUN_005adb3f(pvVar9);
    }
  }
  if (0xf < local_30) {
    pvVar9 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar9 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_00500e76:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
LAB_005014a1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005014c0(void *this,int param_1)

{
  int iVar1;
  
  if ((((*(int *)((int)this + 0x38) != 0) &&
       (iVar1 = *(int *)(*(int *)((int)this + 0x38) + 0x44), iVar1 != -1)) &&
      (*(int *)(param_1 + 0x30) == 2)) && (*(int *)(param_1 + 0x3c) == iVar1)) {
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x28) == param_1) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}


void __fastcall FUN_00501500(int param_1)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  float fVar6;
  float fVar7;
  uint in_stack_ffffffa8;
  undefined4 *puVar8;
  uint in_stack_ffffffac;
  uint3 uVar9;
  Vec2 *pVVar10;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c0686;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0.0;
  iVar5 = *(int *)(param_1 + 0x24);
  if (*(char *)(*(int *)(iVar5 + 0x44) + 0x58) != '\0') {
    *(undefined1 *)(*(int *)(iVar5 + 0x44) + 0x58) = 0;
    iVar5 = *(int *)(param_1 + 0x24);
  }
  if ((*(int *)(*(int *)(iVar5 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar5 + 0x44) + 0x10) == 0)) {
    local_18 = 0;
    local_14 = 0.0;
    local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(iVar5 + 0x118),(Vec2 *)&local_18);
    local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) != 1)) {
      FUN_00518af0(*(int *)(param_1 + 0x24));
    }
  }
  iVar5 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(*(int *)(iVar5 + 0x44) + 0x10);
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int *)(iVar5 + 0x44) + 0x34);
    if (iVar4 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_28 = (float)*(double *)(iVar5 + 0x28);
    local_24 = (float)*(double *)(iVar5 + 0x30);
    local_8 = 3;
    fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar4 + 8),(Vec2 *)&local_28);
    local_14 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
    local_8 = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0x24);
    fVar6 = (1.5 - local_14 * fVar7 * 0.5 * local_14) * local_14;
    if (*(int *)(iVar5 + 0xd4) == 1) {
      iVar4 = *(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) >> 5;
      if ((iVar4 != 0) && (iVar4 * 0x20 + -0x20 + *(int *)(iVar5 + 0x1c4) != 0)) {
        pVVar10 = (Vec2 *)(param_1 + 0x38);
        iVar5 = FUN_005177f0(iVar5);
        bVar2 = cocos2d::Vec2::equals((Vec2 *)(iVar5 + 8),pVVar10);
        if (bVar2) {
          ExceptionList = local_10;
          return;
        }
      }
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x34) == 0) {
      ExceptionList = local_10;
      return;
    }
    if (fVar6 * fVar7 <= 5.0) {
      puVar8 = (undefined4 *)(in_stack_ffffffa8 & 0xffffff00);
      FUN_00402690(&stack0xffffffa8,
                   "Arrived at destination, nav point %d. %d destinations remaining in pool.",0x48);
      FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 4) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) == 1) {
      ExceptionList = local_10;
      return;
    }
    puVar8 = (undefined4 *)(in_stack_ffffffac & 0xffffff00);
    FUN_00402690(&stack0xffffffac,"Beginning transit to nav point %d",0x21);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
    FUN_00517b40(*(void **)(param_1 + 0x24),
                 *(int *)(*(int *)((int)*(void **)(param_1 + 0x24) + 0x44) + 0x34));
    iVar5 = *(int *)(param_1 + 0x24);
    dVar1 = *(double *)(iVar5 + 0x30);
    *(float *)(param_1 + 0x30) = (float)*(double *)(iVar5 + 0x28);
    *(float *)(param_1 + 0x34) = (float)dVar1;
    iVar5 = *(int *)(*(int *)(iVar5 + 0x44) + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar5 + 8);
    fVar6 = *(float *)(iVar5 + 0xc);
  }
  else {
    if (*(int *)(iVar5 + 0xd4) == 1) {
      iVar3 = *(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) >> 5;
      if (((iVar3 != 0) &&
          (iVar3 = *(int *)(iVar3 * 0x20 + -0xc + *(int *)(iVar5 + 0x1c4)), iVar3 != 0)) &&
         (iVar3 == iVar4)) {
        ExceptionList = local_10;
        return;
      }
    }
    local_20 = (float)*(double *)(iVar5 + 0x28);
    local_1c = (float)*(double *)(iVar5 + 0x30);
    local_28 = (float)*(double *)(iVar4 + 0x20);
    local_24 = (float)*(double *)(iVar4 + 0x28);
    local_8 = 2;
    local_14 = 4.2039e-45;
    bVar2 = cocos2d::Vec2::equals((Vec2 *)&local_28,(Vec2 *)&local_20);
    local_8 = 0xffffffff;
    uVar9 = (uint3)(in_stack_ffffffac >> 8);
    if (bVar2) {
      puVar8 = (undefined4 *)((uint)uVar9 << 8);
      FUN_00402690(&stack0xffffffac,"Arrived at destination, \'%s\'.",0x1d);
      FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 4) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x10) == 0) {
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) == 1) {
      ExceptionList = local_10;
      return;
    }
    puVar8 = (undefined4 *)((uint)uVar9 << 8);
    FUN_00402690(&stack0xffffffac,"Beginning transit to %s",0x17);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar8);
    this = *(void **)(param_1 + 0x24);
    iVar5 = *(int *)(*(int *)((int)this + 0x44) + 0x10);
    if (iVar5 != 0) {
      FUN_005179b0((int)this);
      *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1c4);
      *(int *)(*(int *)((int)this + 0x44) + 0x10) = iVar5;
      FUN_00517dd0(this,iVar5 + -8);
      this = *(void **)(param_1 + 0x24);
    }
    dVar1 = *(double *)((int)this + 0x30);
    *(float *)(param_1 + 0x30) = (float)*(double *)((int)this + 0x28);
    *(float *)(param_1 + 0x34) = (float)dVar1;
    iVar5 = *(int *)(*(int *)((int)this + 0x44) + 0x10);
    fVar6 = (float)*(double *)(iVar5 + 0x28);
    *(float *)(param_1 + 0x38) = (float)*(double *)(iVar5 + 0x20);
  }
  *(float *)(param_1 + 0x3c) = fVar6;
  ExceptionList = local_10;
  return;
}


undefined1 __thiscall FUN_00501980(void *this,float param_1,float param_2,byte *param_3)

{
  byte *pbVar1;
  byte **ppbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  char in_stack_00000024;
  
  pbVar1 = param_3;
  if ((param_1 == *(float *)this) && (param_2 == *(float *)((int)this + 4))) {
    pbVar4 = (byte *)((int)this + 8);
    ppbVar2 = &param_3;
    if (0xf < in_stack_00000020) {
      ppbVar2 = (byte **)param_3;
    }
    if (0xf < *(uint *)((int)this + 0x1c)) {
      pbVar4 = *(byte **)((int)this + 8);
    }
    uVar3 = FUN_004031f0(pbVar4,*(uint *)((int)this + 0x18),(byte *)ppbVar2,in_stack_0000001c);
    if (((char)uVar3 != '\0') && (*(char *)((int)this + 0x20) == in_stack_00000024)) {
      uVar5 = 1;
      goto LAB_005019df;
    }
  }
  uVar5 = 0;
LAB_005019df:
  if (0xf < in_stack_00000020) {
    pbVar4 = pbVar1;
    if (0xfff < in_stack_00000020 + 1) {
      pbVar4 = *(byte **)(pbVar1 + -4);
      if ((byte *)0x1f < pbVar1 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar4);
  }
  return uVar5;
}


undefined4 * __thiscall FUN_00501a20(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c06b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = AIDesire::vftable;
  FUN_004024e0((void *)((int)this + 8),&param_2);
  *(undefined4 *)((int)this + 0x24) = in_stack_00000020;
  *(undefined1 *)((int)this + 0x2c) = 0;
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
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_00501ac0(undefined4 *param_1)

{
  uint in_stack_ffffffd8;
  void *pvVar1;
  
  pvVar1 = (void *)(in_stack_ffffffd8 & 0xffffff00);
  FUN_00402690(&stack0xffffffd8,"Travel",6);
  FUN_00501a20(param_1,0,pvVar1);
  *param_1 = AITravel::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}


undefined4 * __thiscall FUN_00501b30(void *this,byte param_1)

{
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __thiscall FUN_00501b60(void *this,byte param_1)

{
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __thiscall FUN_00501b90(void *this,byte param_1)

{
  FUN_004025a0((int *)((int)this + 0x50));
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __thiscall FUN_00501bc0(void *this,byte param_1)

{
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __thiscall FUN_00501bf0(void *this,byte param_1)

{
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __fastcall FUN_00501c20(undefined4 *param_1)

{
  uint in_stack_ffffffd8;
  void *pvVar1;
  
  pvVar1 = (void *)(in_stack_ffffffd8 & 0xffffff00);
  FUN_00402690(&stack0xffffffd8,"Attack",6);
  FUN_00501a20(param_1,2,pvVar1);
  *param_1 = AIAttack::vftable;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}


int __cdecl FUN_00501c80(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_cautious_005df5ac)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00501cce;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
LAB_00501cce:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


int __cdecl FUN_00501d10(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_green_005df5cc)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00501d61;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 1;
LAB_00501d61:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


int __cdecl FUN_00501da0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_normal_005df548)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00501dee;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
LAB_00501dee:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


undefined4 * __thiscall FUN_00501e30(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c073c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = ShipBehaviour::vftable;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  iVar1 = FUN_005adb0f(0x34);
  iVar5 = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0xbf800000;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  iVar4 = 6;
  do {
    iVar2 = rand();
    iVar5 = iVar5 + iVar2 % 10 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 2;
  iVar2 = 0;
  *(float *)(iVar1 + 0x1c) = (float)(iVar5 + 0x1e);
  do {
    iVar5 = rand();
    iVar2 = iVar2 + iVar5 % 0xc + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(iVar1 + 0x24) = 0xbf800000;
  *(float *)(iVar1 + 0x20) = (float)(iVar2 + 5);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)((int)this + 0x6c) = param_1;
  *(int *)((int)this + 0x3c) = iVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xbf800000;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xbf800000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = param_2;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xf;
  *(undefined1 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0xf;
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0xd8) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0xf;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined2 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  uVar3 = FUN_004136c0();
  *(undefined4 *)((int)this + 0x118) = uVar3;
  *(undefined1 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  **(undefined4 **)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x6c);
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00502170(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x30) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050229d;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x1c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x24) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050229d;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x18) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050229d;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0xc) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0050229d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


void __fastcall FUN_005022b0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd930;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ShipBehaviour::vftable;
  uVar7 = 0;
  piVar6 = (int *)param_1[0x31];
  uVar5 = (uint)((int)param_1[0x32] + (3 - (int)piVar6)) >> 2;
  if ((int *)param_1[0x32] < piVar6) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1,uVar3);
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != uVar5);
  }
  param_1[0x32] = param_1[0x31];
  FUN_00502170((int)(param_1 + 0x4a));
  iVar1 = param_1[0x46];
  piVar6 = param_1 + 0x46;
  local_8 = 0;
  FUN_004132d0(*(int **)(iVar1 + 4));
  *(int *)(*piVar6 + 4) = iVar1;
  *(int *)*piVar6 = iVar1;
  *(int *)(*piVar6 + 8) = iVar1;
  param_1[0x47] = 0;
  FUN_005adb3f((void *)*piVar6);
  if ((uint *)param_1[0x43] != (uint *)0x0) {
    FUN_00480020((uint *)param_1[0x43],(uint *)param_1[0x44]);
    pvVar2 = (void *)param_1[0x43];
    pvVar4 = pvVar2;
    if ((0xfff < (uint)(((param_1[0x45] - (int)pvVar2) / 0x24) * 0x24)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  if (0xf < (uint)param_1[0x3c]) {
    pvVar2 = (void *)param_1[0x37];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[0x3c] + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xf;
  *(undefined1 *)(param_1 + 0x37) = 0;
  pvVar2 = (void *)param_1[0x31];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x33] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  if (0xf < (uint)param_1[0x30]) {
    pvVar2 = (void *)param_1[0x2b];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[0x30] + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0xf;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  if (0xf < (uint)param_1[0x2a]) {
    pvVar2 = (void *)param_1[0x25];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[0x2a] + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0xf;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (0xf < (uint)param_1[0x24]) {
    pvVar2 = (void *)param_1[0x1f];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[0x24] + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_005025ef;
    FUN_005adb3f(pvVar4);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (0xf < (uint)param_1[10]) {
    pvVar2 = (void *)param_1[5];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[10] + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_005025ef:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00502600(int param_1)

{
  int *this;
  undefined4 *this_00;
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint in_stack_ffffffbc;
  void *pvVar6;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0814;
  local_10 = ExceptionList;
  this = (int *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 200) - *this >> 2 == 0) {
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 1) {
      ExceptionList = &local_10;
      local_14 = (undefined4 *)FUN_005adb0f(0x40);
      local_8 = 0;
      local_14 = FUN_00501ac0(local_14);
      local_8 = 0xffffffff;
      puVar1 = *(undefined4 **)(param_1 + 200);
      if (*(undefined4 **)(param_1 + 0xcc) != puVar1) {
        *puVar1 = local_14;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
        ExceptionList = local_10;
        return;
      }
      FUN_00414080(this,puVar1,&local_14);
      ExceptionList = local_10;
      return;
    }
    if (iVar2 == 7) {
      ExceptionList = &local_10;
      local_14 = (undefined4 *)FUN_005adb0f(0x40);
      local_8 = 1;
      local_14 = FUN_00501ac0(local_14);
      local_8 = 0xffffffff;
      puVar1 = *(undefined4 **)(param_1 + 200);
      if (*(undefined4 **)(param_1 + 0xcc) == puVar1) {
        FUN_00414080(this,puVar1,&local_14);
      }
      else {
        *puVar1 = local_14;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
      }
      this_00 = (undefined4 *)FUN_005adb0f(0x38);
      local_8 = 2;
      pvVar6 = (void *)(in_stack_ffffffbc & 0xffffff00);
      local_14 = this_00;
      FUN_00402690(&stack0xffffffbc,&DAT_0061a0f8,4);
      FUN_00501a20(this_00,1,pvVar6);
      local_8 = 0xffffffff;
      *this_00 = AIScan::vftable;
      this_00[0xc] = 0xbf800000;
      this_00[0xd] = 0;
      puVar1 = *(undefined4 **)(param_1 + 200);
      if (*(undefined4 **)(param_1 + 0xcc) == puVar1) {
        local_14 = this_00;
        FUN_00414080(this,puVar1,&local_14);
      }
      else {
        *puVar1 = this_00;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
        local_14 = this_00;
      }
      puVar1 = (undefined4 *)FUN_005adb0f(0x38);
      local_8 = 3;
      local_14 = FUN_00501c20(puVar1);
      local_8 = 0xffffffff;
      puVar1 = *(undefined4 **)(param_1 + 200);
      if (*(undefined4 **)(param_1 + 0xcc) == puVar1) {
        FUN_00414080(this,puVar1,&local_14);
      }
      else {
        *puVar1 = local_14;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x40);
      if (*(char *)(iVar2 + 0x34) == '\0') {
        *(undefined1 *)(iVar2 + 0x34) = 1;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if (iVar2 == 2) {
        ExceptionList = &local_10;
        puVar1 = (undefined4 *)FUN_005adb0f(0x50);
        local_8 = 4;
        pvVar6 = (void *)(in_stack_ffffffbc & 0xffffff00);
        FUN_00402690(&stack0xffffffbc,&DAT_00603a54,4);
        FUN_00501a20(puVar1,3,pvVar6);
        *puVar1 = AIHunt::vftable;
        puVar1[0xc] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        local_8 = 0xffffffff;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        local_14 = puVar1;
        FUN_00412900(this,&local_14);
        puVar1 = (undefined4 *)FUN_005adb0f(0x5c);
        local_8 = 5;
        pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
        FUN_00402690(&stack0xffffffbc,"Piracy",6);
        FUN_00501a20(puVar1,4,pvVar6);
        *puVar1 = AIPiracy::vftable;
        puVar1[0xc] = 0;
        *(undefined1 *)(puVar1 + 0xf) = 0;
        *(undefined1 *)((int)puVar1 + 0x3e) = 0;
        puVar1[0x12] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        puVar1[0x16] = 0;
        local_8 = 0xffffffff;
        *(undefined1 *)(puVar1 + 0xb) = 1;
        local_14 = puVar1;
        FUN_00412900(this,&local_14);
        puVar1 = (undefined4 *)FUN_005adb0f(0x3c);
        local_8 = 6;
        pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
        FUN_00402690(&stack0xffffffbc,"Scavenge",8);
        FUN_00501a20(puVar1,5,pvVar6);
        *puVar1 = AIScavenge::vftable;
        puVar1[0xe] = 0;
      }
      else {
        if (iVar2 == 3) {
          return;
        }
        if (iVar2 == 4) {
          return;
        }
        if (iVar2 == 8) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x40);
          ExceptionList = &local_10;
          if (*(char *)(iVar2 + 0x34) == '\0') {
            *(undefined1 *)(iVar2 + 0x34) = 1;
          }
          puVar1 = (undefined4 *)FUN_005adb0f(0x5c);
          local_8 = 7;
          pvVar6 = (void *)(in_stack_ffffffbc & 0xffffff00);
          FUN_00402690(&stack0xffffffbc,"Patrol",6);
          FUN_00501a20(puVar1,6,pvVar6);
          *puVar1 = AIPatrol::vftable;
          puVar1[0xf] = 0;
          puVar1[0x10] = 0;
          puVar1[0x11] = 0;
          local_8 = 0xffffffff;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x16] = 0;
          local_14 = puVar1;
          FUN_00412900(this,&local_14);
          puVar1 = (undefined4 *)FUN_005adb0f(0x38);
          local_8 = 8;
          local_14 = FUN_00501c20(puVar1);
          local_8 = 0xffffffff;
          FUN_00412900(this,&local_14);
          uVar5 = 0;
          iVar2 = *(int *)(DAT_0065b5cc + 0x9c);
          iVar4 = DAT_0065b5cc;
          if (*(int *)(DAT_0065b5cc + 0xa0) - iVar2 >> 2 == 0) {
            ExceptionList = local_10;
            return;
          }
          do {
            iVar2 = *(int *)(iVar2 + uVar5 * 4);
            if (((*(int *)(iVar2 + 0x1c) == *(int *)(iVar4 + 0xd8)) &&
                (*(char *)(iVar2 + 0x18) != '\0')) && (*(char *)(iVar2 + 0x20) != '\0')) {
              std::basic_string<>::operator=
                        ((basic_string<> *)(param_1 + 0x14),(basic_string<> *)(iVar2 + 0x24));
              iVar4 = DAT_0065b5cc;
            }
            uVar5 = uVar5 + 1;
            iVar2 = *(int *)(iVar4 + 0x9c);
          } while (uVar5 < (uint)(*(int *)(iVar4 + 0xa0) - iVar2 >> 2));
          ExceptionList = local_10;
          return;
        }
        if (iVar2 != 6) {
          return;
        }
        ExceptionList = &local_10;
        puVar1 = (undefined4 *)FUN_005adb0f(0x40);
        local_8 = 9;
        local_14 = FUN_00501ac0(puVar1);
        local_8 = 0xffffffff;
        FUN_00412900(this,&local_14);
        puVar1 = (undefined4 *)FUN_005adb0f(0x38);
        local_8 = 10;
        local_14 = FUN_00501c20(puVar1);
        local_8 = 0xffffffff;
        FUN_00412900(this,&local_14);
        iVar2 = *(int *)(param_1 + 0x124);
        if (iVar2 == 0) {
          ExceptionList = local_10;
          return;
        }
        pbVar3 = (byte *)(iVar2 + 0x1dc);
        if (0xf < *(uint *)(iVar2 + 0x1f0)) {
          pbVar3 = *(byte **)(iVar2 + 0x1dc);
        }
        uVar5 = FUN_004031f0(pbVar3,*(uint *)(iVar2 + 0x1ec),(byte *)&PTR_005ce008,0);
        if (((char)uVar5 != '\0') &&
           (iVar4 = *(int *)(iVar2 + 0x1fc) - *(int *)(iVar2 + 0x1f8), iVar2 = iVar4 >> 0x1f,
           iVar4 / 0x30 + iVar2 == iVar2)) {
          ExceptionList = local_10;
          return;
        }
        puVar1 = (undefined4 *)FUN_005adb0f(0x68);
        local_8 = 0xb;
        pvVar6 = (void *)(in_stack_ffffffbc & 0xffffff00);
        FUN_00402690(&stack0xffffffbc,"Follow",6);
        FUN_00501a20(puVar1,7,pvVar6);
        *puVar1 = AIFollow::vftable;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
        puVar1[0x11] = 0x41f00000;
        puVar1[0x16] = 0;
        puVar1[0x17] = 0xf;
        *(undefined1 *)(puVar1 + 0x12) = 0;
        puVar1[0x19] = 0;
      }
      local_8 = 0xffffffff;
      local_14 = puVar1;
      FUN_00412900(this,&local_14);
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00502c50(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *****pppppuVar6;
  int extraout_ECX;
  void *pvVar7;
  byte *pbVar8;
  char *****pppppcVar9;
  int iVar10;
  char *****pppppcVar11;
  undefined4 *****pppppuVar12;
  undefined4 *in_stack_ffffff3c;
  void *in_stack_ffffff54;
  char *pcVar13;
  undefined1 *local_7c;
  undefined1 *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [5];
  uint local_48;
  undefined4 ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0878;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((*(int *)((int)this + 0x70) == 7) || (*(int *)((int)this + 0x70) == 8)) &&
      (*(int *)(param_1 + 0x44) != 0)) &&
     ((iVar10 = *(int *)(*(int *)(param_1 + 0x44) + 0x70), iVar10 != 7 && (iVar10 != 8)))) {
    FUN_004024e0(local_5c,(undefined4 *)(param_1 + 0x238));
    local_8 = 0;
    puVar2 = FUN_004122d0();
    local_8 = 1;
    pbVar3 = FUN_00412f20(puVar2 + 5,(byte *)local_5c);
    local_78 = *(undefined1 **)pbVar3;
    local_8 = 0xffffffff;
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
    if (local_78 == (undefined1 *)0x1) goto LAB_005030de;
    local_78 = &stack0xffffff54;
    FUN_004024e0(&stack0xffffff54,(undefined4 *)(param_1 + 0x238));
    cVar1 = '\0';
    local_8 = 2;
    puVar2 = FUN_004122d0();
    local_8 = 0xffffffff;
    FUN_004a8a20(puVar2,cVar1,in_stack_ffffff54);
    local_78 = (undefined1 *)FUN_0050c720(*(void **)((int)this + 0x6c),*(int *)(param_1 + 0x250));
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ****)((uint)local_44[0] & 0xffffff00);
    local_8 = 3;
    iVar10 = 0;
    if ((local_78 == (undefined1 *)0x0) ||
       (cVar1 = FUN_00509940((int)local_78), iVar10 = extraout_ECX, cVar1 == '\0')) {
      FUN_004024e0(local_2c,(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x130) + 0x254) + 0x48));
      local_8 = CONCAT31(local_8._1_3_,7);
      pppppcVar11 = local_2c;
      if (0xf < local_18) {
        pppppcVar11 = (char *****)local_2c[0];
      }
      pppppcVar9 = local_2c;
      if (0xf < local_18) {
        pppppcVar9 = (char *****)local_2c[0];
      }
      FUN_00413ec0(&local_7c,toupper_exref,(char *)pppppcVar9,(char *)((int)pppppcVar11 + local_1c),
                   (undefined1 *)pppppcVar11);
      piVar4 = (int *)FUN_00591e00((undefined1 *)local_74,
                                   "ATTENTION UNKNOWN %s: Weapons fire will not be tolerated in this system."
                                  );
      FUN_00413230(local_44,piVar4);
    }
    else {
      iVar10 = *(int *)(extraout_ECX + 0x130);
      if (*(char *)(*(int *)(iVar10 + 0x40) + 0x34) == '\0') {
        pbVar3 = (byte *)(extraout_ECX + 0x48);
        pbVar8 = pbVar3;
        if (0xf < *(uint *)(extraout_ECX + 0x5c)) {
          pbVar8 = *(byte **)pbVar3;
        }
        uVar5 = FUN_004031f0(pbVar8,*(uint *)(extraout_ECX + 0x58),(byte *)"Unknown",7);
        if ((char)uVar5 == '\0') {
          FUN_004024e0(local_2c,(undefined4 *)pbVar3);
          local_8 = CONCAT31(local_8._1_3_,6);
          pppppcVar11 = local_2c;
          if (0xf < local_18) {
            pppppcVar11 = (char *****)local_2c[0];
          }
          pppppcVar9 = local_2c;
          if (0xf < local_18) {
            pppppcVar9 = (char *****)local_2c[0];
          }
          FUN_00413ec0(&local_7c,toupper_exref,(char *)pppppcVar9,
                       (char *)((int)pppppcVar11 + local_1c),(undefined1 *)pppppcVar11);
          pcVar13 = "ATTENTION %s: Weapons fire will not be tolerated in this system.";
        }
        else {
          FUN_004024e0(local_2c,(undefined4 *)(*(int *)(iVar10 + 0x254) + 0x48));
          local_8 = CONCAT31(local_8._1_3_,5);
          pppppcVar11 = local_2c;
          if (0xf < local_18) {
            pppppcVar11 = (char *****)local_2c[0];
          }
          pppppcVar9 = local_2c;
          if (0xf < local_18) {
            pppppcVar9 = (char *****)local_2c[0];
          }
          FUN_00413ec0(&local_7c,toupper_exref,(char *)pppppcVar9,
                       (char *)((int)pppppcVar11 + local_1c),(undefined1 *)pppppcVar11);
          pcVar13 = "ATTENTION UNKNOWN %s: Weapons fire will not be tolerated in this system.";
        }
      }
      else {
        FUN_004024e0(local_2c,(undefined4 *)(iVar10 + 8));
        local_8 = CONCAT31(local_8._1_3_,4);
        pppppcVar11 = local_2c;
        if (0xf < local_18) {
          pppppcVar11 = (char *****)local_2c[0];
        }
        pppppcVar9 = local_2c;
        if (0xf < local_18) {
          pppppcVar9 = (char *****)local_2c[0];
        }
        FUN_00413ec0(&local_7c,toupper_exref,(char *)pppppcVar9,
                     (char *)((int)pppppcVar11 + local_1c),(undefined1 *)pppppcVar11);
        pcVar13 = "ATTENTION VESSEL %s: Weapons fire will not be tolerated in this system.";
      }
      piVar4 = (int *)FUN_00591e00((undefined1 *)local_5c,pcVar13);
      FUN_00413230(local_44,piVar4);
      local_74[0] = local_5c[0];
      local_60 = local_48;
    }
    if (0xf < local_60) {
      pvVar7 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar7 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar7)))) goto LAB_00502e40;
      FUN_005adb3f(pvVar7);
    }
    local_8._0_1_ = 3;
    if (0xf < local_18) {
      pppppcVar11 = (char *****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppcVar11 = (char *****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppcVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppcVar11);
    }
    local_7c = &stack0xffffff54;
    pppppuVar12 = local_44;
    FUN_004024e0(&stack0xffffff54,pppppuVar12);
    local_8._0_1_ = 8;
    FUN_004024e0(&stack0xffffff3c,(undefined4 *)(*(int *)((int)this + 0x6c) + 0x238));
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_005199a0(*(void **)((int)this + 0x3c),3,in_stack_ffffff3c);
    iVar10 = *(int *)((int)local_78 + 0x130);
    if ((iVar10 != 0) && (*(char *)(iVar10 + 0x234) != '\0')) {
      pppppuVar6 = local_44;
      if (0xf < local_30) {
        pppppuVar6 = (undefined4 *****)local_44[0];
      }
      FUN_00527550(*(int **)(iVar10 + 0x224),4,pppppuVar6);
    }
    if (*(int *)((int)this + 0x40) != param_1) {
      *(int *)((int)this + 0x40) = param_1;
      puVar2 = (undefined4 *)((uint)pppppuVar12 & 0xffffff00);
      FUN_00402690(&stack0xffffff50,"Engaging a belligerant, the %s",0x1e);
      FUN_0050ae50(*(undefined4 *)((int)this + 0x6c),puVar2);
    }
    if (0xf < local_30) {
      pppppuVar12 = (undefined4 *****)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pppppuVar12 = (undefined4 *****)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pppppuVar12)))) {
LAB_00502e40:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppuVar12);
    }
  }
LAB_005030de:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00503100(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *in_stack_ffffffcc;
  undefined4 local_c;
  int local_8;
  
  if (param_1 != 0) {
    uVar6 = 0;
    iVar4 = *(int *)((int)this + 0xc4);
    if (*(int *)((int)this + 200) - iVar4 >> 2 != 0) {
      do {
        iVar4 = *(int *)(iVar4 + uVar6 * 4);
        pbVar5 = (byte *)(iVar4 + 8);
        if (0xf < *(uint *)(iVar4 + 0x1c)) {
          pbVar5 = *(byte **)(iVar4 + 8);
        }
        local_8 = iVar4;
        uVar1 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0x18),(byte *)"Piracy",6);
        if ((char)uVar1 != '\0') {
          pbVar5 = *(byte **)(iVar4 + 0x54);
          puVar2 = (undefined4 *)
                   FUN_00413f20(&local_c,(byte *)(param_1 + 0x238),*(byte **)(local_8 + 0x50),pbVar5
                               );
          local_8 = *(int *)(*(int *)((int)this + 0xc4) + uVar6 * 4);
          if ((byte *)*puVar2 != pbVar5) {
            piVar3 = FUN_00414300((int *)pbVar5,*(int **)(local_8 + 0x54),(int *)*puVar2);
            FUN_004028b0(piVar3,*(int **)(local_8 + 0x54));
            *(int **)(local_8 + 0x54) = piVar3;
          }
          in_stack_ffffffcc = (undefined4 *)((uint)in_stack_ffffffcc & 0xffffff00);
          FUN_00402690(&stack0xffffffcc,
                       "As they haven\'t dropped all their cargo, I\'m going to try pirating from %s again."
                       ,0x51);
          FUN_0050ae50(*(undefined4 *)((int)this + 0x6c),in_stack_ffffffcc);
        }
        uVar6 = uVar6 + 1;
        iVar4 = *(int *)((int)this + 0xc4);
      } while (uVar6 < (uint)(*(int *)((int)this + 200) - iVar4 >> 2));
    }
  }
  return;
}


void __fastcall FUN_00503210(void *param_1)

{
  float fVar1;
  int *piVar2;
  void *this;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  uint in_stack_ffffffb8;
  undefined4 *puVar14;
  byte *pbVar15;
  byte *in_stack_ffffffbc;
  char *pcVar16;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bda20;
  local_10 = ExceptionList;
  if ((*(int *)(DAT_0065b5cc + 0xd0) == 0) && (*(char *)(DAT_0065b444 + 0x70) == '\0')) {
    return;
  }
  iVar6 = *(int *)((int)param_1 + 200);
  uVar11 = 0;
  iVar10 = *(int *)((int)param_1 + 0xc4);
  ExceptionList = &local_10;
  if (iVar6 - iVar10 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0xc4) + uVar11 * 4) + 0x10))();
      iVar6 = *(int *)((int)param_1 + 200);
      uVar11 = uVar11 + 1;
      iVar10 = *(int *)((int)param_1 + 0xc4);
    } while (uVar11 < (uint)(iVar6 - iVar10 >> 2));
  }
  piVar12 = (int *)0x0;
  uVar9 = iVar6 - iVar10 >> 2;
  uVar11 = 0;
  if (uVar9 == 0) {
    ExceptionList = local_10;
    return;
  }
  do {
    piVar2 = *(int **)(iVar10 + uVar11 * 4);
    fVar1 = (float)piVar2[8];
    if (piVar12 == (int *)0x0) {
      if (0.0 < fVar1) {
LAB_005032c9:
        piVar12 = piVar2;
      }
    }
    else if ((float)piVar12[8] <= fVar1 && fVar1 != (float)piVar12[8]) goto LAB_005032c9;
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar9);
  if (piVar12 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  piVar2 = *(int **)((int)param_1 + 0xd0);
  if (piVar12 != piVar2) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))();
    }
    *(int **)((int)param_1 + 0xd0) = piVar12;
    (**(code **)(*piVar12 + 0x20))();
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"Switching to desire - %s",0x18);
    in_stack_ffffffb8 = *(uint *)((int)param_1 + 0x6c);
    FUN_0050ae50(in_stack_ffffffb8,(undefined4 *)in_stack_ffffffbc);
  }
  switch(*(undefined4 *)((int)param_1 + 0x70)) {
  case 1:
    FUN_00504030((int)param_1);
    break;
  case 7:
  case 8:
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(char *)(iVar6 + 0x34) == '\0') {
      *(undefined1 *)(iVar6 + 0x34) = 1;
    }
  case 2:
  case 6:
    FUN_00504a00(param_1);
  }
  (**(code **)(**(int **)((int)param_1 + 0xd0) + 0x14))();
  if (*(char *)((int)param_1 + 0x50) == '\0') {
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(int *)((int)param_1 + 0x4c) == -1) {
      iVar10 = *(int *)((int)param_1 + 0x74);
      iVar6 = FUN_00522850(iVar6);
      if (iVar6 < *(int *)(&DAT_005df584 + iVar10 * 4)) {
        *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)(&DAT_005df5bc + iVar10 * 4);
      }
    }
    else {
      iVar6 = FUN_00522850(iVar6);
      if (*(int *)((int)param_1 + 0x4c) <= iVar6) {
        *(undefined4 *)((int)param_1 + 0x4c) = 0xffffffff;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x58) != '\0') {
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(int *)((int)param_1 + 0x54) == -1) {
      iVar10 = *(int *)((int)param_1 + 0x74);
      iVar6 = FUN_00522850(iVar6);
      if (iVar6 < *(int *)(&DAT_005df584 + iVar10 * 4)) {
        *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(&DAT_005df5bc + iVar10 * 4);
      }
    }
    else {
      iVar6 = FUN_00522850(iVar6);
      if (*(int *)((int)param_1 + 0x54) <= iVar6) {
        *(undefined4 *)((int)param_1 + 0x54) = 0xffffffff;
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x50) == '\0') && (*(int *)((int)param_1 + 0x4c) == -1)) {
    this = *(void **)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if ((this == (void *)0x0) || (iVar6 = FUN_005224c0(this,1,'\x01'), iVar6 == 0))
    goto LAB_00503492;
    FUN_00522570(*(int *)(*(int *)((int)param_1 + 0x6c) + 0x40));
    pcVar16 = "%s: Turning my reactors off.";
  }
  else {
    iVar6 = *(int *)((int)param_1 + 0x6c);
    if (*(void **)(iVar6 + 0x40) != (void *)0x0) {
      iVar6 = FUN_005224c0(*(void **)(iVar6 + 0x40),1,'\x01');
      if (iVar6 != 0) goto LAB_00503492;
      iVar6 = *(int *)((int)param_1 + 0x6c);
    }
    FUN_00522530(*(int *)(iVar6 + 0x40));
    pcVar16 = "%s: Turning my reactors on.";
  }
  FUN_00591070(&DAT_005cdc70,pcVar16);
LAB_00503492:
  iVar10 = *(int *)((int)param_1 + 0x6c);
  iVar6 = *(int *)(*(int *)(iVar10 + 0x40) + 0x20);
  if ((iVar6 != 0) && (*(char *)((int)param_1 + 0x58) != '\0')) {
    if (*(int *)((int)param_1 + 0x54) == -1) {
      uVar11 = *(uint *)((int)param_1 + 0x5c);
      if (uVar11 < 8) {
        bVar13 = *(int *)(iVar6 + 0x3c + uVar11 * 4) != 0;
      }
      else {
        bVar13 = false;
      }
      if (!bVar13) {
        uVar11 = FUN_00505e40((int)param_1);
        iVar10 = *(int *)((int)param_1 + 0x6c);
        *(uint *)((int)param_1 + 0x5c) = uVar11;
      }
      iVar6 = *(int *)(*(int *)(iVar10 + 0x40) + 0x20);
      if (*(uint *)(iVar6 + 0x30) != uVar11) {
        *(uint *)(iVar6 + 0x30) = uVar11;
        iVar10 = *(int *)((int)param_1 + 0x6c);
      }
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x40) + 0x20) + 0x62) == '\0') {
        puVar14 = (undefined4 *)(in_stack_ffffffb8 & 0xffffff00);
        FUN_00402690(&stack0xffffffb8,"Attempting to spin up tube %d",0x1d);
        FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x6c),puVar14);
        *(undefined1 *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x6c) + 0x40) + 0x20) + 0x62) = 1;
      }
    }
    else if (*(char *)(iVar6 + 0x62) != '\0') {
      puVar14 = (undefined4 *)(in_stack_ffffffb8 & 0xffffff00);
      FUN_00402690(&stack0xffffffb8,"Pausing weapon spin-up of tube %d",0x21);
      FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x6c),puVar14);
      *(undefined1 *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x6c) + 0x40) + 0x20) + 0x62) = 0;
    }
  }
  iVar6 = *(int *)((int)param_1 + 0x124);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x208) != 0)) &&
     (uVar11 = FUN_00515560(*(int *)((int)param_1 + 0x6c)), (char)uVar11 != '\0')) {
    puVar14 = *(undefined4 **)(iVar6 + 0x204);
    puVar3 = (undefined4 *)*puVar14;
    while (puVar3 != puVar14) {
      pbVar8 = (byte *)(puVar3 + 4);
      local_14 = puVar3;
      FUN_004024e0(&stack0xffffffbc,(undefined4 *)pbVar8);
      cVar4 = FUN_005036b0(param_1,in_stack_ffffffbc);
      if (cVar4 == '\0') {
        FUN_004024e0(&stack0xffffffbc,(undefined4 *)pbVar8);
        local_8 = 0;
        puVar7 = FUN_00412df0();
        local_8 = 0xffffffff;
        pbVar15 = (byte *)0x503605;
        bVar5 = FUN_004a1150(puVar7,in_stack_ffffffbc);
        if (bVar5 != 0) {
          FUN_004024e0(&stack0xffffffb8,(undefined4 *)pbVar8);
          local_8 = 1;
          puVar7 = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(puVar7,pbVar15);
          pbVar8 = FUN_004a2bf0((void *)((int)param_1 + 0x118),pbVar8);
          *pbVar8 = 1;
          piVar12 = puVar3 + 10;
          if (0xf < (uint)puVar3[0xf]) {
            piVar12 = (int *)*piVar12;
          }
          FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),4,piVar12);
        }
      }
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
      puVar3 = local_14;
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005036b0(void *this,byte *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte ***pppbVar3;
  uint uVar4;
  void **ppvVar5;
  byte **ppbVar6;
  uint uVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *local_38;
  char local_31;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  char local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c08a8;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  puVar1 = *(undefined4 **)((int)this + 0x118);
  ppvVar5 = &local_10;
  puVar2 = (undefined4 *)*puVar1;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar5;
    local_38 = puVar2;
    if (puVar2 == puVar1) {
LAB_0050377e:
      if (0xf < in_stack_00000018) {
        pbVar9 = param_1;
        if ((0xfff < in_stack_00000018 + 1) &&
           (pbVar9 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pbVar9);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004024e0(local_30,puVar2 + 4);
    uVar4 = local_1c;
    pppbVar3 = local_30[0];
    local_31 = *(char *)(puVar2 + 10);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)param_1;
    }
    ppppbVar8 = local_30;
    if (0xf < local_1c) {
      ppppbVar8 = (byte ****)local_30[0];
    }
    local_18 = local_31;
    uVar7 = FUN_004031f0((byte *)ppppbVar8,local_20,(byte *)ppbVar6,in_stack_00000014);
    if (((char)uVar7 != '\0') && (local_31 == '\x01')) {
      if (0xf < uVar4) {
        ppppbVar8 = (byte ****)pppbVar3;
        if ((0xfff < uVar4 + 1) &&
           (ppppbVar8 = (byte ****)pppbVar3[-1],
           (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar8)))) {
LAB_005037ca:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
      goto LAB_0050377e;
    }
    if (0xf < uVar4) {
      ppppbVar8 = (byte ****)pppbVar3;
      if ((0xfff < uVar4 + 1) &&
         (ppppbVar8 = (byte ****)pppbVar3[-1],
         (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar8)))) goto LAB_005037ca;
      FUN_005adb3f(ppppbVar8);
    }
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_38)
    ;
    ppvVar5 = ExceptionList;
    puVar2 = local_38;
  } while( true );
}


void __fastcall FUN_00503810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c0953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = 0.0;
  local_1c = 0.0;
  if (*(char *)(*(int *)(param_1 + 0x6c) + 0x234) == '\0') {
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 300);
    iVar3 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x128) = 0;
    iVar9 = *(int *)(iVar3 + 0x184);
    if (iVar9 == 0) {
      *(undefined2 *)(param_1 + 0x15c) = 0;
    }
    else if (*(char *)(iVar9 + 4) == '\0') {
      if (0 < *(int *)(iVar9 + 0x40)) {
        *(undefined2 *)(param_1 + 0x15c) = 0x100;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x15c) = 1;
    }
    local_28 = 0;
    if (*(int *)(iVar3 + 0x218) - *(int *)(iVar3 + 0x214) >> 2 != 0) {
      do {
        fVar11 = local_1c;
        iVar9 = *(int *)(*(int *)(iVar3 + 0x214) + local_28 * 4);
        if ((iVar9 != 0) && (*(float *)(iVar9 + 0x118) == 0.0)) {
          local_34 = (float)*(double *)(iVar3 + 0x28);
          local_30 = (float)*(double *)(iVar3 + 0x30);
          local_3c = (float)((double)*(float *)(iVar9 + 0x104) + *(double *)(iVar9 + 0x10));
          local_38 = (float)((double)*(float *)(iVar9 + 0x108) + *(double *)(iVar9 + 0x18));
          local_8 = 1;
          local_18 = iVar9;
          local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&local_34);
          local_14 = (float)(0x5f3759df - ((uint)local_24 >> 1));
          local_8 = 0xffffffff;
          iVar3 = *(int *)(iVar9 + 0x130);
          fVar13 = (1.5 - local_24 * 0.5 * local_14 * local_14) * local_14 * local_24;
          if (iVar3 == 0) {
LAB_00503bbf:
            if ((*(int *)(iVar9 + 0xe0) == 6) &&
               (iVar3 = FUN_0051f2d0(*(void **)(*(int *)(param_1 + 0x6c) + 0x24),*(int *)(iVar9 + 4)
                                    ), iVar3 != 0)) {
              pbVar7 = (byte *)(iVar3 + 0x98);
              if (0xf < *(uint *)(iVar3 + 0xac)) {
                pbVar7 = *(byte **)(iVar3 + 0x98);
              }
              uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0xa8),(byte *)&PTR_005ce008,0);
              if ((char)uVar5 != '\0') {
                pbVar7 = (byte *)(iVar3 + 0xb0);
                if (0xf < *(uint *)(iVar3 + 0xc4)) {
                  pbVar7 = *(byte **)(iVar3 + 0xb0);
                }
                uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0xc0),(byte *)&PTR_005ce008,0);
                if ((char)uVar5 != '\0') {
                  pbVar7 = (byte *)(iVar3 + 0x48);
                  if (0xf < *(uint *)(iVar3 + 0x5c)) {
                    pbVar7 = *(byte **)(iVar3 + 0x48);
                  }
                  uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0x58),(byte *)&PTR_005ce008,0);
                  if ((char)uVar5 != '\0') {
                    piVar4 = *(int **)(param_1 + 0x148);
                    if (*(int **)(param_1 + 0x14c) == piVar4) {
                      this = (void *)(param_1 + 0x144);
                      goto LAB_00503c85;
                    }
                    *piVar4 = iVar9;
                    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 4;
                  }
                }
              }
            }
          }
          else {
            bVar10 = false;
            if (*(int *)(iVar3 + 0x254) != 0) {
              bVar10 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 0;
            }
            if (!bVar10) goto LAB_00503bbf;
            iVar1 = *(int *)(iVar3 + 0x44);
            if ((iVar1 == 0) || (*(int *)(iVar1 + 0x70) != 7)) {
              if ((*(char *)(iVar3 + 0x234) == '\0') &&
                 ((iVar1 == 0 || ((*(int *)(iVar1 + 0x70) != 1 && (*(int *)(iVar1 + 0x70) != 0))))))
              {
                if ((*(char *)(*(int *)(iVar3 + 0x40) + 0x34) == '\0') &&
                   (fVar13 <= *(float *)(&DAT_005df554 + *(int *)(param_1 + 0x74) * 4))) {
                  piVar4 = *(int **)(param_1 + 0x13c);
                  if (*(int **)(param_1 + 0x140) == piVar4) {
                    this = (void *)(param_1 + 0x138);
                    goto LAB_00503c85;
                  }
                  *piVar4 = iVar9;
                  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 4;
                }
                goto LAB_00503c8e;
              }
              piVar4 = *(int **)(param_1 + 0x130);
              if (*(int **)(param_1 + 0x134) != piVar4) {
                *piVar4 = iVar9;
                *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 4;
                goto LAB_00503c8e;
              }
              this = (void *)(param_1 + 300);
LAB_00503c85:
              FUN_00414080(this,piVar4,&local_18);
              iVar9 = local_18;
            }
            else {
              if (*(float *)(&DAT_005df5a0 + *(int *)(param_1 + 0x74) * 4) < fVar13) {
LAB_00503ae3:
                bVar10 = false;
              }
              else {
                iVar1 = *(int *)(param_1 + 0x128);
                if (iVar1 != 0) {
                  iVar2 = *(int *)(param_1 + 0x6c);
                  local_44 = (float)*(double *)(iVar2 + 0x28);
                  local_40 = (float)*(double *)(iVar2 + 0x30);
                  local_4c = (float)*(double *)(iVar3 + 0x28);
                  local_48 = (float)*(double *)(iVar3 + 0x30);
                  local_54 = (float)*(double *)(iVar2 + 0x28);
                  local_50 = (float)*(double *)(iVar2 + 0x30);
                  local_5c = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
                  fVar13 = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
                  local_8 = 5;
                  local_24 = (float)((uint)fVar11 | 0xf);
                  local_58 = fVar13;
                  local_1c = local_24;
                  FUN_00591010((Vec2 *)&local_4c,(Vec2 *)&local_44);
                  local_20 = fVar13;
                  FUN_00591010((Vec2 *)&local_5c,(Vec2 *)&local_54);
                  if (fVar13 <= local_20) goto LAB_00503ae3;
                }
                bVar10 = true;
              }
              if (((uint)local_1c & 8) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffff7);
              }
              if (((uint)local_1c & 4) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffb);
              }
              if (((uint)local_1c & 2) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffd);
              }
              local_8 = 0xffffffff;
              if (((uint)local_1c & 1) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffe);
              }
              if (bVar10) {
                *(int *)(param_1 + 0x128) = iVar9;
              }
            }
          }
LAB_00503c8e:
          if ((*(int *)(iVar9 + 0x130) != 0) && (*(char *)(*(int *)(iVar9 + 0x130) + 0x234) != '\0')
             ) {
            pbVar7 = (byte *)(param_1 + 0x14);
            if (0xf < *(uint *)(param_1 + 0x28)) {
              pbVar7 = *(byte **)(param_1 + 0x14);
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(param_1 + 0x24),(byte *)&PTR_005ce008,0);
            if ((char)uVar5 == '\0') {
              iVar3 = *(int *)(param_1 + 0x6c);
              uVar12 = 0xbf800000;
              local_24 = 0.0;
              local_14 = 0.0;
              local_20 = -1.0;
              if (*(int *)(*(int *)(iVar3 + 0x24) + 0x138) -
                  *(int *)(*(int *)(iVar3 + 0x24) + 0x134) >> 2 != 0) {
                do {
                  uVar6 = FUN_004105f0(*(char **)(*(int *)(*(int *)(iVar3 + 0x24) + 0x134) +
                                                 (int)local_14 * 4));
                  if ((char)uVar6 != '\0') {
                    pbVar7 = (byte *)(param_1 + 0x14);
                    if (0xf < *(uint *)(param_1 + 0x28)) {
                      pbVar7 = *(byte **)(param_1 + 0x14);
                    }
                    uVar5 = FUN_004031f0(pbVar7,*(uint *)(param_1 + 0x24),(byte *)&PTR_005ce008,0);
                    if ((char)uVar5 == '\0') {
                      local_2c = *(int *)(*(int *)(param_1 + 0x6c) + 0x24);
                      iVar3 = *(int *)(*(int *)(local_2c + 0x134) + (int)local_14 * 4);
                      pbVar7 = (byte *)(iVar3 + 4);
                      if (0xf < *(uint *)(iVar3 + 0x18)) {
                        pbVar7 = *(byte **)(iVar3 + 4);
                      }
                      pbVar8 = (byte *)(param_1 + 0x14);
                      if (0xf < *(uint *)(param_1 + 0x28)) {
                        pbVar8 = *(byte **)(param_1 + 0x14);
                      }
                      uVar5 = FUN_004031f0(pbVar8,*(uint *)(param_1 + 0x24),pbVar7,
                                           *(uint *)(iVar3 + 0x14));
                      if ((char)uVar5 != '\0') {
                        local_64 = (float)*(double *)(*(int *)(iVar9 + 0x130) + 0x28);
                        fVar11 = (float)*(double *)(*(int *)(iVar9 + 0x130) + 0x30);
                        local_8 = 6;
                        local_60 = fVar11;
                        FUN_00591010((Vec2 *)(*(int *)(*(int *)(local_2c + 0x134) +
                                                      (int)local_14 * 4) + 0xe8),(Vec2 *)&local_64);
                        uVar12 = (ulonglong)(uint)local_20;
                        local_8 = 0xffffffff;
                        if ((local_20 == -1.0) || (fVar11 < local_20)) {
                          uVar12 = (ulonglong)(uint)fVar11;
                          local_24 = *(float *)((int)local_14 * 4 +
                                               *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x24) +
                                                       0x134));
                          local_20 = fVar11;
                        }
                      }
                    }
                  }
                  iVar3 = *(int *)(param_1 + 0x6c);
                  local_14 = (float)((int)local_14 + 1);
                } while ((uint)local_14 <
                         (uint)(*(int *)(*(int *)(iVar3 + 0x24) + 0x138) -
                                *(int *)(*(int *)(iVar3 + 0x24) + 0x134) >> 2));
                if (((float)uVar12 != -1.0) &&
                   ((float)uVar12 <= *(float *)((int)local_24 + 0x38) * 1.5)) {
                  piVar4 = *(int **)(param_1 + 0x154);
                  if (*(int **)(param_1 + 0x158) == piVar4) {
                    FUN_00414080((void *)(param_1 + 0x150),piVar4,&local_18);
                  }
                  else {
                    *piVar4 = iVar9;
                    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 4;
                  }
                }
              }
            }
          }
        }
        iVar3 = *(int *)(param_1 + 0x6c);
        local_28 = local_28 + 1;
      } while (local_28 < (uint)(*(int *)(iVar3 + 0x218) - *(int *)(iVar3 + 0x214) >> 2));
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00503ed0(void *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c09a4;
  local_10 = ExceptionList;
  local_14 = 0.0;
  if (*(int *)((int)this + 4) != 1) {
    return;
  }
  iVar1 = *(int *)((int)this + 0x10);
  ExceptionList = &local_10;
  if (iVar1 != 0) {
    local_1c = (float)*(double *)(*(int *)((int)this + 0x6c) + 0x28);
    local_18 = (float)*(double *)(*(int *)((int)this + 0x6c) + 0x30);
    local_24 = (float)*(double *)(iVar1 + 0x20);
    local_20 = (float)*(double *)(iVar1 + 0x28);
    local_8 = 1;
    local_14 = 4.2039e-45;
    fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_1c);
    local_14 = (float)(0x5f3759df - ((uint)fVar3 >> 1));
    if ((1.5 - fVar3 * 0.5 * local_14 * local_14) * local_14 * fVar3 <= 0.1) {
      bVar2 = true;
      goto LAB_00503fc5;
    }
  }
  bVar2 = false;
LAB_00503fc5:
  local_8 = 0xffffffff;
  if (bVar2) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x10);
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00591070(&DAT_0060dfc4,"%s: Travelling to %s");
  ExceptionList = local_10;
  return;
}
