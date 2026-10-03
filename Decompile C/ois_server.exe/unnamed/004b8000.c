#include "../ois_server.exe.h"


void FUN_004b8550(void)

{
  FILE *_File;
  undefined4 *puVar1;
  LPCSTR ***ppppCVar2;
  char ****ppppcVar3;
  void *pvVar4;
  undefined4 *puVar5;
  char *local_64;
  int local_60;
  void *local_5c [5];
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcd78;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(DAT_0065b5cc + 0xd0) == 0) || (*(int *)(DAT_0065b5cc + 0xcc) == 0)) ||
     (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 2)) {
    FUN_00591070("SAVEHANDLER","Game not loaded; not saving.");
  }
  else {
    FUN_0058f2c0((int *)local_2c);
    local_8 = 0;
    FUN_00403640(local_2c,"temp.sav",8);
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    _File = fopen((char *)ppppcVar3,(char *)&_Mode_0060f6d4);
    if (_File == (FILE *)0x0) {
      FUN_00591070("ERROR","trying to open %s for writing.");
    }
    else {
      FUN_00591070("SAVEHANDLER","Writing game state to %s...");
      local_64 = "elphine";
      local_60 = 0xc;
      fwrite(&local_64,4,1,_File);
      puVar5 = (undefined4 *)0x1;
      fwrite(&local_60,4,1,_File);
      FUN_004024e0(&stack0xffffff74,*(undefined4 **)(DAT_0065b5cc + 0xcc));
      FUN_004b8810(_File,puVar5);
      FUN_004b78b0(_File);
      if (local_60 == 0xc) {
        FUN_004b89d0(_File);
      }
      else {
        FUN_00591070("SAVEHANDLER","Unknown save version. Cancelling load.");
      }
      fclose(_File);
      FUN_00591070("SAVEHANDLER","Game saved to temp file. Renaming.");
      FUN_0058f2c0((int *)local_44);
      local_8._0_1_ = 1;
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"/objects%02d.sav");
      local_8._0_1_ = 2;
      puVar5 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar5 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar5,puVar1[4]);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_48) {
        pvVar4 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar4 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      ppppCVar2 = local_44;
      if (0xf < local_30) {
        ppppCVar2 = (LPCSTR ***)local_44[0];
      }
      DeleteFileA((LPCSTR)ppppCVar2);
      ppppCVar2 = local_44;
      if (0xf < local_30) {
        ppppCVar2 = (LPCSTR ***)local_44[0];
      }
      ppppcVar3 = local_2c;
      if (0xf < local_18) {
        ppppcVar3 = (char ****)local_2c[0];
      }
      rename((char *)ppppcVar3,(char *)ppppCVar2);
      FUN_00591070("SAVEHANDLER","Renamed.");
      if (0xf < local_30) {
        ppppCVar2 = (LPCSTR ***)local_44[0];
        if ((0xfff < local_30 + 1) &&
           (ppppCVar2 = (LPCSTR ***)local_44[0][-1],
           (LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppCVar2);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    }
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar3 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar3);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004b8810(void *this,undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_stack_00000014;
  uint in_stack_00000018;
  int local_c;
  undefined1 local_5;
  
  local_c = in_stack_00000014;
  fwrite(&local_c,4,1,this);
  iVar3 = 0;
  local_5 = 0;
  if (0 < local_c) {
    do {
      ppuVar1 = &param_1;
      if (0xf < in_stack_00000018) {
        ppuVar1 = (undefined4 **)param_1;
      }
      local_5 = *(undefined1 *)((int)ppuVar1 + iVar3);
      fwrite(&local_5,1,1,this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_c);
  }
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar2 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar2);
  }
  return;
}


void __fastcall FUN_004b88b0(undefined1 *param_1,FILE *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int local_34;
  undefined1 local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcdc1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  fread(&local_34,4,1,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  iVar4 = 0;
  if (0 < local_34) {
    do {
      fread(&local_2d,1,1,param_2);
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005ce018);
      local_8 = 1;
      puVar2 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar2 = (undefined4 *)*puVar1;
      }
      FUN_00403640(param_1,puVar2,puVar1[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar3 = local_2c[0];
        if (0xfff < local_18 + 1) {
          pvVar3 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004b89d0(FILE *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_18;
  undefined4 *local_14;
  undefined4 local_10 [3];
  
  fwrite((void *)(DAT_0065b444 + 0xa8),4,1,param_1);
  fwrite((void *)(DAT_0065b444 + 0xc4),4,1,param_1);
  fwrite((void *)(DAT_0065b444 + 0x11c),1,1,param_1);
  fwrite((void *)(DAT_0065b444 + 0x11b),1,1,param_1);
  fwrite((void *)(DAT_0065b444 + 0x11d),1,1,param_1);
  FUN_004bba70();
  puVar6 = (undefined4 *)0x1;
  local_10[0] = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
  fwrite(local_10,4,1,param_1);
  FUN_004beae0(param_1,*(int *)(DAT_0065b5cc + 0xd0));
  fwrite(&_DstBuf_0065b3ec,4,1,param_1);
  fwrite(&_DstBuf_0065b3dc,4,1,param_1);
  FUN_004b94d0(param_1);
  FUN_004bcf70(param_1);
  FUN_004bc350(param_1);
  local_18 = *(int *)(DAT_0065b5cc + 0x134) - *(int *)(DAT_0065b5cc + 0x130) >> 2;
  fwrite(&local_18,4,1,param_1);
  uVar4 = 0;
  iVar3 = *(int *)(DAT_0065b5cc + 0x130);
  if (*(int *)(DAT_0065b5cc + 0x134) - iVar3 >> 2 != 0) {
    do {
      FUN_004bca30(param_1,*(void **)(iVar3 + uVar4 * 4));
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(DAT_0065b5cc + 0x130);
    } while (uVar4 < (uint)(*(int *)(DAT_0065b5cc + 0x134) - iVar3 >> 2));
  }
  FUN_00591070("SAVEHANDLER","...saved %d current bounties for the player");
  FUN_004be5e0(param_1,*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
  FUN_004b9e40(param_1);
  FUN_004b9a30(param_1);
  local_18 = (*(int *)(DAT_0065b5cc + 0x14c) - *(int *)(DAT_0065b5cc + 0x148)) / 0x18;
  fwrite(&local_18,4,1,param_1);
  iVar3 = 0;
  if (0 < local_18) {
    iVar5 = 0;
    do {
      FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x148) + iVar5));
      FUN_004b8810(param_1,puVar6);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar3 < local_18);
  }
  FUN_00591070("SAVEHANDLER","Saved %d completed synthetics");
  local_10[0] = *(undefined4 *)(DAT_0065b444 + 0x4c);
  fwrite(local_10,4,1,param_1);
  puVar1 = *(undefined4 **)(DAT_0065b444 + 0x48);
  puVar2 = (undefined4 *)*puVar1;
  while (local_14 = puVar2, puVar2 != puVar1) {
    FUN_004024e0(&stack0xffffffc0,puVar2 + 4);
    FUN_004b8810(param_1,puVar6);
    local_18 = puVar2[10];
    fwrite(&local_18,4,1,param_1);
    FUN_00591070("SAVEHANDLER","...saved rego %s with state %d");
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_14)
    ;
    puVar2 = local_14;
  }
  FUN_00591070("SAVEHANDLER","Saved %d completed ship instance states");
  FUN_004bbfd0(param_1);
  local_18 = *(int *)(DAT_0065b5cc + 0xa0) - *(int *)(DAT_0065b5cc + 0x9c) >> 2;
  fwrite(&local_18,4,1,param_1);
  iVar3 = 0;
  if (0 < local_18) {
    do {
      iVar5 = iVar3 * 4;
      FUN_004024e0(&stack0xffffffc0,*(undefined4 **)(*(int *)(DAT_0065b5cc + 0x9c) + iVar5));
      FUN_004b8810(param_1,puVar6);
      fwrite((void *)(*(int *)(*(int *)(DAT_0065b5cc + 0x9c) + iVar5) + 0x18),1,1,param_1);
      fwrite((void *)(*(int *)(*(int *)(DAT_0065b5cc + 0x9c) + iVar5) + 0x19),1,1,param_1);
      FUN_00591070("SAVEHANDLER","..state %s saved");
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_18);
  }
  FUN_00591070("SAVEHANDLER","..saved %d game states");
  FUN_004bfca0(param_1);
  return;
}


void FUN_004b8d80(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  FILE *pFVar15;
  char *pcVar16;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  FILE *local_58;
  code *local_54;
  undefined4 *local_50;
  undefined1 local_49;
  int local_48;
  int local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bce00;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_58 = param_1;
  local_54 = fread_exref;
  fread(&local_44,4,1,param_1);
  fread(&local_40,4,1,param_1);
  fread((void *)(DAT_0065b444 + 0x11c),1,1,param_1);
  fread((void *)(DAT_0065b444 + 0x11b),1,1,param_1);
  fread((void *)(DAT_0065b444 + 0x11d),1,1,param_1);
  iVar5 = DAT_0065b444;
  *(int *)(DAT_0065b444 + 0xa8) = local_44;
  local_50 = (undefined4 *)(iVar5 + 0xac);
  iVar12 = local_44 * 0x18;
  puVar11 = (undefined4 *)(&DAT_00655598 + iVar12);
  if (local_50 != puVar11) {
    if (0xf < *(uint *)(&DAT_006555ac + iVar12)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    FUN_00402690(local_50,puVar11,*(uint *)(&DAT_006555a8 + iVar12));
    iVar5 = DAT_0065b444;
  }
  *(undefined4 **)(iVar5 + 0xc4) = local_40;
  iVar12 = (int)local_40 * 0x18;
  puVar11 = (undefined4 *)(&DAT_00655610 + iVar12);
  if ((undefined4 *)(iVar5 + 200) != puVar11) {
    if (0xf < *(uint *)(&DAT_00655624 + iVar12)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    FUN_00402690((undefined4 *)(iVar5 + 200),puVar11,*(uint *)(&DAT_00655620 + iVar12));
  }
  FUN_004bbbf0(param_1);
  fread(&local_44,4,1,param_1);
  *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) = local_44;
  iVar5 = FUN_004befa0(param_1);
  *(int *)(DAT_0065b5cc + 0xd0) = iVar5;
  iVar12 = *(int *)(local_48 + *(int *)(DAT_0065b444 + 0x74) * 4);
  puVar11 = (undefined4 *)(iVar12 + 0x30);
  if ((undefined4 *)(iVar5 + 0x80) != puVar11) {
    if (0xf < *(uint *)(iVar12 + 0x44)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    FUN_00402690((undefined4 *)(iVar5 + 0x80),puVar11,*(uint *)(iVar12 + 0x40));
  }
  fread(&_DstBuf_0065b3ec,4,1,param_1);
  fread(&_DstBuf_0065b3dc,4,1,param_1);
  iVar12 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1a8) = 0xffffffff;
  FUN_004b9780(param_1);
  FUN_004bd530(param_1);
  FUN_004bc5c0(param_1);
  FUN_0040fa20();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,param_1);
  iVar12 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = FUN_004bcb30(param_1);
      iVar5 = DAT_0065b5cc;
      if (local_44 != 0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x134);
        if (*(int **)(DAT_0065b5cc + 0x138) == piVar1) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x130),piVar1,&local_44);
        }
        else {
          *piVar1 = local_44;
          *(int *)(iVar5 + 0x134) = *(int *)(iVar5 + 0x134) + 4;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current bounties for the player");
  pvVar9 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (pvVar9 != (void *)0x0) {
    FUN_004b9460(pvVar9);
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = 0;
  }
  uVar6 = FUN_004be750();
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = uVar6;
  FUN_004bac60(param_1);
  FUN_004b9bb0(param_1);
  iVar12 = DAT_0065b5cc;
  FUN_004028b0(*(int **)(DAT_0065b5cc + 0x148),*(int **)(DAT_0065b5cc + 0x14c));
  *(undefined4 *)(iVar12 + 0x14c) = *(undefined4 *)(iVar12 + 0x148);
  (*local_54)(&local_40,4,1,param_1);
  iVar12 = 0;
  if (0 < (int)local_40) {
    do {
      piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      iVar5 = DAT_0065b5cc;
      local_14 = 0;
      piVar1 = *(int **)(DAT_0065b5cc + 0x14c);
      if (*(int **)(DAT_0065b5cc + 0x150) == piVar1) {
        FUN_004036d0((void *)(DAT_0065b5cc + 0x148),piVar1,piVar7);
      }
      else {
        piVar1[4] = 0;
        piVar1[5] = 0;
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        *piVar1 = *piVar7;
        piVar1[1] = iVar2;
        piVar1[2] = iVar3;
        piVar1[3] = iVar4;
        iVar2 = piVar7[5];
        piVar1[4] = piVar7[4];
        piVar1[5] = iVar2;
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
        *(int *)(iVar5 + 0x14c) = *(int *)(iVar5 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar9 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar9 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9)))) goto LAB_004b9403;
        FUN_005adb3f(pvVar9);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed synthetics");
  iVar5 = DAT_0065b444;
  local_14 = 1;
  iVar12 = *(int *)(DAT_0065b444 + 0x48);
  FUN_004132d0(*(int **)(iVar12 + 4));
  pcVar13 = local_54;
  pFVar15 = local_58;
  *(int *)(*(int *)(iVar5 + 0x48) + 4) = iVar12;
  **(int **)(iVar5 + 0x48) = iVar12;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = iVar12;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  (*local_54)(&local_44,4,1,local_58);
  local_48 = 0;
  if (0 < local_44) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar15);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar13)(&local_40,4,1,pFVar15);
      pbVar8 = FUN_00412f20((void *)(DAT_0065b444 + 0x48),(byte *)local_3c);
      *(undefined4 **)pbVar8 = local_40;
      FUN_00591070("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar9 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar9 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9)))) {
LAB_004b9403:
          local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      local_48 = local_48 + 1;
    } while (local_48 < local_44);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed ship instance states");
  local_48 = 0;
  (*pcVar13)(&local_48,4,1,pFVar15);
  local_44 = 0;
  if (0 < local_48) {
    do {
      (*pcVar13)(&local_50,4,1,pFVar15);
      (*pcVar13)(&local_49,1,1,pFVar15);
      (*pcVar13)(&local_5c,4,1,pFVar15);
      (*pcVar13)(&local_60,4,1,pFVar15);
      (*pcVar13)(&local_64,4,1,pFVar15);
      (*pcVar13)(&local_68,4,1,pFVar15);
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
      uVar10 = 0;
      uVar14 = DAT_0065c290[1] - *DAT_0065c290 >> 2;
      if (uVar14 != 0) {
        local_40 = (undefined4 *)*DAT_0065c290;
        puVar11 = local_40;
        do {
          pFVar15 = local_58;
          if (*(undefined4 **)*puVar11 == local_50) {
            iVar12 = local_40[uVar10];
            if (iVar12 != 0) {
              *(undefined1 *)(iVar12 + 0xe0) = local_49;
              *(undefined4 *)(iVar12 + 0xd8) = local_5c;
              *(undefined4 *)(iVar12 + 0xd4) = local_60;
              *(undefined4 *)(iVar12 + 0xd0) = local_64;
              *(undefined4 *)(iVar12 + 0xdc) = local_68;
              pcVar16 = "..faction %s loaded";
              goto LAB_004b93a0;
            }
            break;
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar10 < uVar14);
      }
      pcVar16 = "Invalid faction \'%d\' loaded";
LAB_004b93a0:
      FUN_00591070("SAVEHANDLER",pcVar16);
      local_44 = local_44 + 1;
      pcVar13 = local_54;
    } while (local_44 < local_48);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004bbde0(pFVar15);
  FUN_004bfe80(pFVar15);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void * __fastcall FUN_004b9460(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)((int)param_1 + 0x44);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)param_1 + 0x4c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)param_1 + 0x44) = 0;
    *(undefined4 *)((int)param_1 + 0x48) = 0;
    *(undefined4 *)((int)param_1 + 0x4c) = 0;
  }
  FUN_005adb3f(param_1);
  return param_1;
}


void __fastcall FUN_004b94d0(FILE *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_stack_ffffffac;
  int local_28 [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcea1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 0;
    DAT_0065c294 = FUN_0051e500(local_18);
  }
  local_8 = 0xffffffff;
  fwrite((void *)DAT_0065c294,4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 1;
    DAT_0065c294 = FUN_0051e500(local_18);
    local_8 = 0xffffffff;
  }
  fwrite((void *)(DAT_0065c294 + 4),4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 2;
    DAT_0065c294 = FUN_0051e500(local_18);
    local_8 = 0xffffffff;
  }
  fwrite((void *)(DAT_0065c294 + 8),4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 3;
    DAT_0065c294 = FUN_0051e500(local_18);
  }
  fwrite((void *)(DAT_0065c294 + 0xc),4,1,param_1);
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8._0_1_ = 5;
    DAT_0065c294 = FUN_0051e500(local_18);
  }
  local_8._0_1_ = 4;
  local_14 = *(undefined4 *)(DAT_0065c294 + 0x14);
  fwrite(&local_14,4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8._0_1_ = 6;
    DAT_0065c294 = FUN_0051e500(local_18);
    local_8._0_1_ = 4;
  }
  piVar2 = (int *)**(undefined4 **)(DAT_0065c294 + 0x10);
  do {
    do {
      while( true ) {
        piVar4 = piVar2;
        if (DAT_0065c294 == 0) {
          local_18 = (undefined4 *)FUN_005adb0f(0x28);
          local_8._0_1_ = 7;
          DAT_0065c294 = FUN_0051e500(local_18);
          local_8._0_1_ = 4;
        }
        if (piVar4 == *(int **)(DAT_0065c294 + 0x10)) {
          FUN_00591070("SAVEHANDLER","Saved %d custom stats.");
          FUN_004025a0(local_28);
          ExceptionList = local_10;
          return;
        }
        FUN_004024e0(&stack0xffffffac,piVar4 + 4);
        FUN_004b8810(param_1,in_stack_ffffffac);
        fwrite(piVar4 + 10,4,1,param_1);
        in_stack_ffffffac = (undefined4 *)0x4b96f6;
        FUN_00591070("SAVEHANDLER","  Stat: %s, %f");
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0xd) != '\0') break;
        cVar1 = *(char *)(*piVar2 + 0xd);
        piVar4 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0xd);
          piVar2 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      piVar2 = (int *)piVar4[1];
    } while (*(char *)((int)piVar2 + 0xd) != '\0');
    do {
      piVar3 = piVar2;
      piVar2 = piVar3;
      if (piVar4 != (int *)piVar3[2]) break;
      piVar2 = (int *)piVar3[1];
      piVar4 = piVar3;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


void __fastcall FUN_004b9780(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  void *pvVar5;
  int iVar6;
  int local_34;
  undefined4 *local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcf22;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0065c294 == 0) {
    local_30 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 0;
    DAT_0065c294 = FUN_0051e500(local_30);
  }
  local_8 = 0xffffffff;
  fread((void *)DAT_0065c294,4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_30 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 1;
    DAT_0065c294 = FUN_0051e500(local_30);
    local_8 = 0xffffffff;
  }
  fread((void *)(DAT_0065c294 + 4),4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_30 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 2;
    DAT_0065c294 = FUN_0051e500(local_30);
    local_8 = 0xffffffff;
  }
  fread((void *)(DAT_0065c294 + 8),4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_30 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 3;
    DAT_0065c294 = FUN_0051e500(local_30);
    local_8 = 0xffffffff;
  }
  fread((void *)(DAT_0065c294 + 0xc),4,1,param_1);
  if (DAT_0065c294 == 0) {
    local_30 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 4;
    DAT_0065c294 = FUN_0051e500(local_30);
  }
  iVar2 = DAT_0065c294;
  piVar1 = (int *)(DAT_0065c294 + 0x10);
  local_8 = 5;
  iVar6 = *piVar1;
  FUN_004132d0(*(int **)(iVar6 + 4));
  *(int *)(*piVar1 + 4) = iVar6;
  *(int *)*piVar1 = iVar6;
  local_8 = 0xffffffff;
  *(int *)(*piVar1 + 8) = iVar6;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  fread(&local_34,4,1,param_1);
  iVar6 = 0;
  if (0 < local_34) {
    do {
      FUN_004b88b0((undefined1 *)local_2c,param_1);
      local_8 = 6;
      fread(&local_30,4,1,param_1);
      if (DAT_0065c294 == 0) {
        puVar3 = (undefined4 *)FUN_005adb0f(0x28);
        local_8._0_1_ = 7;
        DAT_0065c294 = FUN_0051e500(puVar3);
        local_8 = CONCAT31(local_8._1_3_,6);
      }
      pbVar4 = FUN_004a2a30((void *)(DAT_0065c294 + 0x10),(byte *)local_2c);
      *(undefined4 **)pbVar4 = local_30;
      FUN_00591070("SAVEHANDLER","  Stat: %s, %f");
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
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_34);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d custom stats.");
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004b9a30(FILE *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = *(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2;
  FUN_00591070("SAVEHANDLER","Saving out %d sectors worth of fog");
  fwrite(&local_1c,4,1,param_1);
  local_18 = 0;
  iVar3 = *(int *)(DAT_0065b5cc + 0x3c);
  if (*(int *)(DAT_0065b5cc + 0x40) - iVar3 >> 2 != 0) {
    do {
      iVar1 = local_18 * 4;
      fwrite(*(void **)(iVar1 + iVar3),4,1,param_1);
      piVar2 = FUN_00420f40((void *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x348),
                            *(int **)(*(int *)(DAT_0065b5cc + 0x3c) + iVar1));
      local_14 = 8;
      piVar2 = (int *)*piVar2;
      do {
        local_10 = 8;
        do {
          local_c = piVar2[1] - *piVar2 >> 2;
          fwrite(&local_c,4,1,param_1);
          local_8 = 0;
          if (0 < local_c) {
            do {
              fwrite(*(void **)(*piVar2 + local_8 * 4),4,1,param_1);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 4),4,1,param_1);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 8),4,1,param_1);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 0xc),4,1,param_1);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 0x10),4,1,param_1);
              local_8 = local_8 + 1;
            } while (local_8 < local_c);
          }
          piVar2 = piVar2 + 3;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
      iVar3 = *(int *)(DAT_0065b5cc + 0x3c);
      local_10 = 0;
      local_14 = 0;
    } while (local_18 < (uint)(*(int *)(DAT_0065b5cc + 0x40) - iVar3 >> 2));
  }
  return;
}


void __fastcall FUN_004b9bb0(FILE *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  FILE *_File;
  uint uVar3;
  void *_Dst;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  void *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  FILE *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcf50;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_0050b120(*(int *)(DAT_0065b5cc + 0xd0));
  pcVar8 = fread_exref;
  local_18 = 0;
  fread(&local_18,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading in %d sectors worth of fog");
  local_34 = 0;
  if (0 < local_18) {
    do {
      local_24 = -1;
      (*pcVar8)(&local_24,4,1,param_1,uVar3);
      _Dst = (void *)FUN_005adb0f(0x300);
      local_30 = _Dst;
      memset(_Dst,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_(_Dst,0xc,0x40,FUN_0042b080,FUN_00412930);
      local_8 = 0xffffffff;
      local_20 = 0;
      do {
        local_2c = 0;
        do {
          iVar6 = local_2c;
          local_1c = 0;
          (*pcVar8)(&local_1c,4,1,param_1);
          local_28 = 0;
          if (0 < local_1c) {
            local_3c = (int *)((int)local_30 + (local_20 + iVar6) * 0xc);
            do {
              local_40 = (int *)FUN_005adb0f(0x14);
              piVar5 = local_40 + 1;
              *piVar5 = 0;
              piVar7 = local_40 + 2;
              piVar4 = local_40 + 3;
              *local_40 = 0;
              *piVar7 = 0;
              *piVar4 = 0;
              local_40[4] = 0;
              local_38 = local_40;
              fread(local_40,4,1,local_14);
              fread(piVar5,4,1,local_14);
              _File = local_14;
              pcVar8 = fread_exref;
              fread(piVar7,4,1,local_14);
              fread(piVar4,4,1,_File);
              piVar5 = local_38;
              fread(local_38 + 4,4,1,_File);
              puVar2 = (undefined4 *)local_3c[1];
              if ((undefined4 *)local_3c[2] == puVar2) {
                FUN_00414080(local_3c,puVar2,&local_40);
              }
              else {
                *puVar2 = piVar5;
                local_3c[1] = local_3c[1] + 4;
              }
              local_28 = local_28 + 1;
              param_1 = local_14;
              iVar6 = local_2c;
            } while (local_28 < local_1c);
          }
          local_2c = iVar6 + 1;
        } while (local_2c < 8);
        local_20 = local_20 + 8;
      } while (local_20 < 0x40);
      local_3c = (int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x348);
      piVar5 = (int *)((int *)*local_3c)[1];
      cVar1 = *(char *)((int)piVar5 + 0xd);
      piVar7 = (int *)*local_3c;
      while (cVar1 == '\0') {
        if (piVar5[4] < local_24) {
          piVar4 = (int *)piVar5[2];
          piVar5 = piVar7;
        }
        else {
          piVar4 = (int *)*piVar5;
        }
        piVar7 = piVar5;
        piVar5 = piVar4;
        cVar1 = *(char *)((int)piVar4 + 0xd);
      }
      if ((piVar7 == (int *)*local_3c) || (local_24 < piVar7[4])) {
        local_40 = &local_24;
        piVar5 = (int *)FUN_00421370(local_3c,local_24,&local_40);
        FUN_004213a0(local_3c,&local_44,piVar7,piVar5 + 4,piVar5);
        piVar7 = local_44;
      }
      piVar7[5] = (int)local_30;
      local_34 = local_34 + 1;
    } while (local_34 < local_18);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004b9e40(FILE *param_1)

{
  void *pvVar1;
  FILE *_File;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  FILE *pFVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *local_44;
  int *local_40;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
  int *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  FILE *local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (*(int **)(DAT_0065b5cc + 300))[1] - **(int **)(DAT_0065b5cc + 300) >> 2;
  local_20 = param_1;
  fwrite(&local_18,4,1,param_1);
  pcVar11 = "Writing %d emails...";
  FUN_00591070("SAVEHANDLER","Writing %d emails...");
  local_1c = 0;
  piVar10 = *(int **)(DAT_0065b5cc + 300);
  if (piVar10[1] - *piVar10 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(*piVar10 + local_1c * 4);
      fwrite(pvVar1,4,1,param_1);
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 4));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x68));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x1c));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x34));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x80));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      fwrite((void *)((int)pvVar1 + 0x98),4,1,param_1);
      fwrite((void *)((int)pvVar1 + 100),1,1,param_1);
      fwrite((void *)((int)pvVar1 + 0x9c),1,1,param_1);
      local_1c = local_1c + 1;
      piVar10 = *(int **)(DAT_0065b5cc + 300);
    } while (local_1c < (uint)(piVar10[1] - *piVar10 >> 2));
  }
  puVar2 = DAT_0065c270;
  if (DAT_0065c270 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
    DAT_0065c270 = puVar2;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    local_28 = puVar2;
  }
  local_18 = *(int *)(puVar2 + 0x18) - *(int *)(puVar2 + 0x14) >> 2;
  fwrite(&local_18,4,1,param_1);
  pcVar11 = "Writing %d non-synced emails...";
  FUN_00591070("SAVEHANDLER","Writing %d non-synced emails...");
  uVar6 = 0;
  while( true ) {
    puVar2 = DAT_0065c270;
    local_1c = uVar6;
    if (DAT_0065c270 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    if ((uint)(*(int *)(puVar2 + 0x18) - *(int *)(puVar2 + 0x14) >> 2) <= uVar6) break;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    pvVar1 = *(void **)(*(int *)(puVar2 + 0x14) + uVar6 * 4);
    fwrite(pvVar1,4,1,param_1);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 4));
    FUN_004b8810(param_1,(undefined4 *)pcVar11);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x68));
    FUN_004b8810(param_1,(undefined4 *)pcVar11);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x1c));
    FUN_004b8810(param_1,(undefined4 *)pcVar11);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x34));
    FUN_004b8810(param_1,(undefined4 *)pcVar11);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)pvVar1 + 0x80));
    FUN_004b8810(param_1,(undefined4 *)pcVar11);
    fwrite((void *)((int)pvVar1 + 0x98),4,1,param_1);
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    *(undefined1 *)((int)pvVar1 + 0x9c) = 0;
    uVar6 = local_1c + 1;
  }
  piVar7 = (int *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  local_8 = 0;
  piVar10 = *(int **)(*(int *)(DAT_0065b5cc + 300) + 0xc);
  local_1c = *piVar10;
  if ((int *)local_1c != piVar10) {
    piVar10 = (int *)0x0;
    do {
      if (*(char *)(local_1c + 0x28) != '\0') {
        if (piVar10 == piVar7) {
          FUN_00403840(&local_44,piVar7,(undefined4 *)(local_1c + 0x10));
          piVar7 = local_40;
          piVar10 = local_3c;
        }
        else {
          FUN_004024e0(piVar7,(undefined4 *)(local_1c + 0x10));
          local_40 = piVar7 + 6;
          piVar7 = local_40;
        }
      }
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_1c);
      param_1 = local_20;
    } while (local_1c != *(int *)(*(int *)(DAT_0065b5cc + 300) + 0xc));
  }
  puVar3 = local_44;
  local_1c = ((int)piVar7 - (int)local_44) / 0x18;
  local_18 = local_1c;
  FUN_00591070("SAVEHANDLER","Writing %d \'articles read\'...");
  pcVar9 = fwrite_exref;
  fwrite(&local_18,4,1,param_1);
  if (local_1c != 0) {
    uVar6 = 0;
    do {
      FUN_004024e0(&stack0xffffff94,puVar3);
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 6;
      pcVar9 = fwrite_exref;
    } while (uVar6 < local_1c);
  }
  local_18 = (*(int *)(*(int *)(DAT_0065b5cc + 300) + 0x24) -
             *(int *)(*(int *)(DAT_0065b5cc + 300) + 0x20)) / 0x18;
  FUN_00591070("SAVEHANDLER","Writing %d \'drafts sent\'...");
  (*pcVar9)();
  local_1c = 0;
  piVar10 = (int *)(*(int *)(DAT_0065b5cc + 300) + 0x20);
  iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 300) + 0x24) - *piVar10;
  iVar8 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar8 != iVar8) {
    iVar8 = 0;
    do {
      FUN_004024e0(&stack0xffffff94,(undefined4 *)(*piVar10 + iVar8));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      local_1c = local_1c + 1;
      iVar8 = iVar8 + 0x18;
      piVar10 = (int *)(*(int *)(DAT_0065b5cc + 300) + 0x20);
      pcVar9 = fwrite_exref;
    } while (local_1c < (uint)((*(int *)(*(int *)(DAT_0065b5cc + 300) + 0x24) - *piVar10) / 0x18));
  }
  local_18 = (*(int *)(*(int *)(DAT_0065b5cc + 300) + 0x18) -
             *(int *)(*(int *)(DAT_0065b5cc + 300) + 0x14)) / 0x18;
  FUN_00591070("SAVEHANDLER","Writing %d \'articles downloaded\'...");
  (*pcVar9)();
  local_1c = 0;
  piVar10 = (int *)(*(int *)(DAT_0065b5cc + 300) + 0x14);
  iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 300) + 0x18) - *piVar10;
  iVar8 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar8 != iVar8) {
    iVar8 = 0;
    do {
      FUN_004024e0(&stack0xffffff94,(undefined4 *)(*piVar10 + iVar8));
      FUN_004b8810(param_1,(undefined4 *)pcVar11);
      local_1c = local_1c + 1;
      iVar8 = iVar8 + 0x18;
      piVar10 = (int *)(*(int *)(DAT_0065b5cc + 300) + 0x14);
    } while (local_1c < (uint)((*(int *)(*(int *)(DAT_0065b5cc + 300) + 0x18) - *piVar10) / 0x18));
  }
  piVar10 = (int *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar6 = 0;
  piVar7 = (int *)0x0;
  puVar2 = DAT_0065c270;
  while( true ) {
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    puVar3 = local_38;
    if ((uint)(*(int *)(puVar2 + 0xc) - *(int *)(puVar2 + 8) >> 2) <= uVar6) break;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    if (*(char *)(*(int *)(*(int *)(puVar2 + 8) + uVar6 * 4) + 0x65) == '\0') {
LAB_004ba59b:
      uVar6 = uVar6 + 1;
    }
    else {
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      puVar3 = (undefined4 *)(*(int *)(*(int *)(puVar2 + 8) + uVar6 * 4) + 0xa0);
      if (piVar7 == piVar10) {
        FUN_00403840(&local_38,piVar10,puVar3);
        puVar2 = DAT_0065c270;
        piVar10 = local_34;
        piVar7 = local_30;
        goto LAB_004ba59b;
      }
      FUN_004024e0(piVar10,puVar3);
      piVar10 = piVar10 + 6;
      uVar6 = uVar6 + 1;
      puVar2 = DAT_0065c270;
      local_34 = piVar10;
    }
  }
  local_1c = ((int)piVar10 - (int)local_38) / 0x18;
  local_18 = local_1c;
  FUN_00591070("SAVEHANDLER","Writing %d \'sent emails\'...");
  _File = local_20;
  fwrite(&local_18,4,1,local_20);
  uVar6 = 0;
  if (local_1c != 0) {
    do {
      FUN_004024e0(&stack0xffffff94,puVar3);
      FUN_004b8810(_File,(undefined4 *)pcVar11);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 6;
    } while (uVar6 < local_1c);
  }
  local_11 = 1;
  pFVar5 = (FILE *)0x0;
  local_1c = 0;
  puVar2 = DAT_0065c270;
  do {
    local_20 = pFVar5;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    if ((uint)(*(int *)(puVar2 + 0xc) - *(int *)(puVar2 + 8) >> 2) <= pFVar5) {
      local_11 = 0;
      fwrite(&local_11,1,1,_File);
      FUN_00591070("SAVEHANDLER","Wrote out %d emails with RTF or has fired status...");
      FUN_004025a0((int *)&local_38);
      FUN_004025a0((int *)&local_44);
      ExceptionList = local_10;
      return;
    }
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      local_28 = puVar2;
    }
    iVar8 = (int)pFVar5 * 4;
    if (*(char *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 0x65) == '\0') {
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      if (*(char *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 100) != '\0') goto LAB_004ba801;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      if (*(float *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 0x98) != -1.0) goto LAB_004ba801;
    }
    else {
LAB_004ba801:
      local_1c = local_1c + 1;
      fwrite(&local_11,1,1,_File);
      puVar2 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      FUN_004024e0(&stack0xffffff94,(undefined4 *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 0xa0));
      FUN_004b8810(_File,(undefined4 *)pcVar11);
      puVar2 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 0x98),4,1,_File);
      puVar2 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 100),1,1,_File);
      puVar2 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(puVar2 + 8) + iVar8) + 0x65),1,1,_File);
      puVar2 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_28 = puVar2;
      }
      local_24 = *(int *)(puVar2 + 8) + iVar8;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
      }
      local_28 = (undefined1 *)(*(int *)(puVar2 + 8) + iVar8);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        local_2c = puVar2;
      }
      if (puVar2 == (undefined1 *)0x0) {
        local_2c = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = local_2c;
        *local_2c = 0;
        *(undefined4 *)(local_2c + 4) = 0;
        *(undefined4 *)(local_2c + 8) = 0;
        *(undefined4 *)(local_2c + 0xc) = 0;
        *(undefined4 *)(local_2c + 0x10) = 0;
        *(undefined4 *)(local_2c + 0x14) = 0;
        *(undefined4 *)(local_2c + 0x18) = 0;
        *(undefined4 *)(local_2c + 0x1c) = 0;
        *(undefined4 *)(local_2c + 0x20) = 0;
        *(undefined4 *)(local_2c + 0x24) = 0;
        *(undefined4 *)(local_2c + 0x28) = 0;
      }
      pcVar11 = "Wrote out email %s with RTF states (%f, %s, %s";
      FUN_00591070("SAVEHANDLER","Wrote out email %s with RTF states (%f, %s, %s");
      puVar2 = DAT_0065c270;
      pFVar5 = local_20;
    }
    pFVar5 = (FILE *)((int)pFVar5 + 1);
  } while( true );
}


void __fastcall FUN_004bac60(FILE *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_6c;
  void *local_68;
  void *local_64;
  char local_5f;
  char local_5e;
  char local_5d;
  int local_5c;
  int *local_58;
  void *local_54 [5];
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
  puStack_18 = &LAB_005bcfe0;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar2 = FUN_00412700();
  FUN_004399f0(iVar2);
  FUN_004b3980(*(uint **)(DAT_0065b5cc + 300));
  local_5c = 0;
  fread(&local_5c,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d emails...");
  local_64 = (void *)0x0;
  if (0 < local_5c) {
    do {
      local_58 = (int *)FUN_005adb0f(0xa0);
      pvVar3 = (void *)FUN_004398a0((int)local_58);
      local_68 = pvVar3;
      fread(pvVar3,4,1,param_1);
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 4) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 4));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 4) = *local_58;
        *(int *)((int)pvVar3 + 8) = iVar2;
        *(int *)((int)pvVar3 + 0xc) = iVar5;
        *(int *)((int)pvVar3 + 0x10) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x14) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x68) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x68));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x68) = *local_58;
        *(int *)((int)pvVar3 + 0x6c) = iVar2;
        *(int *)((int)pvVar3 + 0x70) = iVar5;
        *(int *)((int)pvVar3 + 0x74) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x78) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x1c) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x1c));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x1c) = *local_58;
        *(int *)((int)pvVar3 + 0x20) = iVar2;
        *(int *)((int)pvVar3 + 0x24) = iVar5;
        *(int *)((int)pvVar3 + 0x28) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x2c) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      puVar7 = (undefined4 *)((int)pvVar3 + 0x1c);
      if ((undefined4 *)((int)pvVar3 + 0x4c) != puVar7) {
        if (0xf < *(uint *)((int)pvVar3 + 0x30)) {
          puVar7 = (undefined4 *)*puVar7;
        }
        FUN_00402690((undefined4 *)((int)pvVar3 + 0x4c),puVar7,*(uint *)((int)pvVar3 + 0x2c));
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x34) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x34));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x34) = *local_58;
        *(int *)((int)pvVar3 + 0x38) = iVar2;
        *(int *)((int)pvVar3 + 0x3c) = iVar5;
        *(int *)((int)pvVar3 + 0x40) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x44) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x80) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x80));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x80) = *local_58;
        *(int *)((int)pvVar3 + 0x84) = iVar2;
        *(int *)((int)pvVar3 + 0x88) = iVar5;
        *(int *)((int)pvVar3 + 0x8c) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x90) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      fread((void *)((int)pvVar3 + 0x98),4,1,param_1);
      pbVar8 = (byte *)0x1;
      fread((void *)((int)pvVar3 + 100),1,1,param_1);
      fread((void *)((int)pvVar3 + 0x9c),1,1,param_1);
      pvVar6 = *(void **)(DAT_0065b5cc + 300);
      puVar7 = *(undefined4 **)((int)pvVar6 + 4);
      if (*(undefined4 **)((int)pvVar6 + 8) == puVar7) {
        FUN_00414080(pvVar6,puVar7,&local_68);
        pvVar3 = local_68;
      }
      else {
        *puVar7 = pvVar3;
        *(int *)((int)pvVar6 + 4) = *(int *)((int)pvVar6 + 4) + 4;
      }
      local_58 = (int *)&stack0xffffff6c;
      FUN_004024e0(&stack0xffffff6c,(undefined4 *)((int)pvVar3 + 0x80));
      local_14 = 0;
      piVar4 = DAT_0065c270;
      if (DAT_0065c270 == (int *)0x0) {
        piVar4 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar4;
        *(undefined1 *)piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4[7] = 0;
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        local_58 = piVar4;
      }
      local_14 = 0xffffffff;
      FUN_00439be0(piVar4,pbVar8);
      FUN_00591070("SAVEHANDLER"," - Loaded: \'%s\'");
      local_64 = (void *)((int)local_64 + 1);
    } while ((int)local_64 < local_5c);
  }
  local_5c = 0;
  fread(&local_5c,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d non-synced...");
  local_68 = (void *)0x0;
  if (0 < local_5c) {
    do {
      local_58 = (int *)FUN_005adb0f(0xa0);
      pvVar3 = (void *)FUN_004398a0((int)local_58);
      local_64 = pvVar3;
      fread(pvVar3,4,1,param_1);
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 4) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 4));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 4) = *local_58;
        *(int *)((int)pvVar3 + 8) = iVar2;
        *(int *)((int)pvVar3 + 0xc) = iVar5;
        *(int *)((int)pvVar3 + 0x10) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x14) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x68) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x68));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x68) = *local_58;
        *(int *)((int)pvVar3 + 0x6c) = iVar2;
        *(int *)((int)pvVar3 + 0x70) = iVar5;
        *(int *)((int)pvVar3 + 0x74) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x78) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x1c) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x1c));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x1c) = *local_58;
        *(int *)((int)pvVar3 + 0x20) = iVar2;
        *(int *)((int)pvVar3 + 0x24) = iVar5;
        *(int *)((int)pvVar3 + 0x28) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x2c) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      puVar7 = (undefined4 *)((int)pvVar3 + 0x1c);
      if ((undefined4 *)((int)pvVar3 + 0x4c) != puVar7) {
        if (0xf < *(uint *)((int)pvVar3 + 0x30)) {
          puVar7 = (undefined4 *)*puVar7;
        }
        FUN_00402690((undefined4 *)((int)pvVar3 + 0x4c),puVar7,*(uint *)((int)pvVar3 + 0x2c));
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x34) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x34));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x34) = *local_58;
        *(int *)((int)pvVar3 + 0x38) = iVar2;
        *(int *)((int)pvVar3 + 0x3c) = iVar5;
        *(int *)((int)pvVar3 + 0x40) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x44) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      local_58 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar3 + 0x80) != local_58) {
        FUN_00401b20((int *)((int)pvVar3 + 0x80));
        iVar2 = local_58[1];
        iVar5 = local_58[2];
        iVar1 = local_58[3];
        *(int *)((int)pvVar3 + 0x80) = *local_58;
        *(int *)((int)pvVar3 + 0x84) = iVar2;
        *(int *)((int)pvVar3 + 0x88) = iVar5;
        *(int *)((int)pvVar3 + 0x8c) = iVar1;
        *(undefined8 *)((int)pvVar3 + 0x90) = *(undefined8 *)(local_58 + 4);
        local_58[4] = 0;
        local_58[5] = 0xf;
        *(undefined1 *)local_58 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar6);
      }
      fread((void *)((int)pvVar3 + 0x98),4,1,param_1);
      piVar4 = DAT_0065c270;
      *(undefined1 *)((int)pvVar3 + 100) = 0;
      *(undefined1 *)((int)pvVar3 + 0x9c) = 0;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar4;
        *(undefined1 *)piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4[7] = 0;
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        local_58 = piVar4;
      }
      puVar7 = (undefined4 *)piVar4[6];
      if ((undefined4 *)piVar4[7] == puVar7) {
        FUN_00414080(piVar4 + 5,puVar7,&local_64);
      }
      else {
        *puVar7 = pvVar3;
        piVar4[6] = piVar4[6] + 4;
      }
      FUN_00591070("SAVEHANDLER"," - Loaded: \'%s\'");
      local_68 = (void *)((int)local_68 + 1);
    } while ((int)local_68 < local_5c);
  }
  fread(&local_5c,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar2 = 0;
  if (0 < local_5c) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 1;
      pbVar8 = FUN_004a2bf0((void *)(*(int *)(DAT_0065b5cc + 300) + 0xc),(byte *)local_3c);
      *pbVar8 = 1;
      FUN_00591070("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar3 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_5c);
  }
  fread(&local_5c,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d \'drafts sent\'...");
  local_64 = (void *)0x0;
  if (0 < local_5c) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 2;
      iVar2 = *(int *)(DAT_0065b5cc + 300);
      piVar4 = *(int **)(iVar2 + 0x24);
      if (*(int **)(iVar2 + 0x28) == piVar4) {
        FUN_00403840((void *)(iVar2 + 0x20),piVar4,local_3c);
      }
      else {
        FUN_004024e0(piVar4,local_3c);
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 0x18;
      }
      FUN_00591070("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar3 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar3);
      }
      local_64 = (void *)((int)local_64 + 1);
    } while ((int)local_64 < local_5c);
  }
  fread(&local_5c,4,1,param_1);
  pcVar9 = "Loading %d \'articles downloaded\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_64 = (void *)0x0;
  if (0 < local_5c) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 3;
      iVar2 = *(int *)(DAT_0065b5cc + 300);
      piVar4 = *(int **)(iVar2 + 0x18);
      if (*(int **)(iVar2 + 0x1c) == piVar4) {
        FUN_00403840((void *)(iVar2 + 0x14),piVar4,local_3c);
      }
      else {
        FUN_004024e0(piVar4,local_3c);
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 0x18;
      }
      FUN_004024e0(&stack0xffffff6c,local_3c);
      iVar2 = FUN_004b4a70(*(void **)(DAT_0065b444 + 0xc),(byte *)pcVar9);
      if (iVar2 == 0) {
        pcVar10 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0x88);
        *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0x8c);
        *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(iVar2 + 0x90);
        *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar2 + 0x94);
        *(undefined8 *)(iVar2 + 0xb0) = *(undefined8 *)(iVar2 + 0x98);
        pcVar10 = "Loaded article downloaded \'%s\'";
      }
      FUN_00591070("SAVEHANDLER",pcVar10);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar3 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar3);
      }
      local_64 = (void *)((int)local_64 + 1);
    } while ((int)local_64 < local_5c);
  }
  fread(&local_5c,4,1,param_1);
  pcVar9 = "Loading %d \'sent emails\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar2 = 0;
  if (0 < local_5c) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_58 = (int *)&stack0xffffff6c;
      local_14 = 4;
      FUN_004024e0(&stack0xffffff6c,local_3c);
      local_14._0_1_ = 5;
      piVar4 = DAT_0065c270;
      if (DAT_0065c270 == (int *)0x0) {
        piVar4 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar4;
        *(undefined1 *)piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4[7] = 0;
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        local_58 = piVar4;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      iVar5 = FUN_00439a90(piVar4,(byte *)pcVar9);
      if (iVar5 == 0) {
        pcVar11 = "ERROR: invalid email \'%s\' loaded";
        pcVar10 = "ERROR";
      }
      else {
        *(undefined2 *)(iVar5 + 100) = 0x100;
        *(undefined4 *)(iVar5 + 0x98) = 0;
        pcVar11 = "Email \'%s\' marked as sent";
        pcVar10 = "SAVEHANDLER";
      }
      FUN_00591070(pcVar10,pcVar11);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar3 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3)))) goto LAB_004bb40a;
        FUN_005adb3f(pvVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_5c);
  }
  fread(&local_5d,1,1,param_1);
  do {
    if (local_5d == '\0') {
      FUN_00591070("SAVEHANDLER","Set %d emails to fired or ready to fire.");
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    FUN_004b88b0((undefined1 *)local_54,param_1);
    local_14 = 6;
    fread(&local_6c,4,1,param_1);
    pbVar8 = (byte *)0x1;
    fread(&local_5f,1,1,param_1);
    fread(&local_5e,1,1,param_1);
    local_58 = (int *)&stack0xffffff6c;
    FUN_004024e0(&stack0xffffff6c,local_54);
    local_14._0_1_ = 7;
    piVar4 = DAT_0065c270;
    if (DAT_0065c270 == (int *)0x0) {
      piVar4 = (int *)FUN_005adb0f(0x2c);
      DAT_0065c270 = piVar4;
      *(undefined1 *)piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar4[8] = 0;
      piVar4[9] = 0;
      piVar4[10] = 0;
      local_58 = piVar4;
    }
    local_14 = CONCAT31(local_14._1_3_,6);
    iVar2 = FUN_00439a90(piVar4,pbVar8);
    if (iVar2 == 0) {
      FUN_00591070("ERROR","ERROR: invalid email \'%s\' loaded");
    }
    else {
      *(undefined4 *)(iVar2 + 0x98) = local_6c;
      *(char *)(iVar2 + 100) = local_5f;
      *(char *)(iVar2 + 0x65) = local_5e;
      FUN_00591070("SAVEHANDLER","Set email %s with RTF states (%f, %s, %s)");
    }
    local_14 = 0xffffffff;
    if (0xf < local_40) {
      pvVar3 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar3 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3)))) {
LAB_004bb40a:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    fread(&local_5d,1,1,param_1);
  } while( true );
}


void FUN_004bba70(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *this;
  undefined4 *in_stack_ffffff8c;
  undefined4 *in_stack_ffffffa4;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 *local_20;
  FILE *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bd020;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)0x0;
  this = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_8 = 0;
  puVar2 = FUN_00412df0();
  iVar5 = *(int *)puVar2[3];
  local_14 = iVar5;
  puVar2 = FUN_00412df0();
  piVar4 = piVar3;
  if (iVar5 != puVar2[3]) {
    do {
      puVar2 = (undefined4 *)(iVar5 + 0x10);
      if (*(char *)(iVar5 + 0x28) != '\0') {
        local_20 = &stack0xffffffa4;
        in_stack_ffffffa4 = (undefined4 *)((uint)in_stack_ffffffa4 & 0xffffff00);
        FUN_00402690(&stack0xffffffa4,"can_detect",10);
        local_8._0_1_ = 1;
        FUN_004024e0(&stack0xffffff8c,puVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        bVar1 = FUN_005929b0(in_stack_ffffff8c);
        if (!bVar1) {
          if (piVar3 == this) {
            FUN_00403840(&local_30,this,puVar2);
            piVar3 = local_28;
            this = local_2c;
          }
          else {
            FUN_004024e0(this,puVar2);
            local_2c = this + 6;
            this = local_2c;
          }
        }
      }
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
      puVar2 = FUN_00412df0();
      piVar4 = local_30;
      iVar5 = local_14;
    } while (local_14 != puVar2[3]);
  }
  iVar5 = ((int)this - (int)piVar4) / 0x18;
  local_18 = iVar5;
  fwrite(&local_18,4,1,local_1c);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_00591070("SAVEHANDLER"," flag: %s");
    FUN_004024e0(&stack0xffffffa4,piVar4);
    FUN_004b8810(local_1c,in_stack_ffffffa4);
    piVar4 = piVar4 + 6;
  }
  FUN_00591070("SAVEHANDLER","..saved %d flags");
  FUN_004025a0((int *)&local_30);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004bbbf0(FILE *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *this;
  int iVar6;
  FILE *pFVar7;
  char *pcVar8;
  int *local_40;
  int *local_3c;
  int *local_38;
  FILE *local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005bd06f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = (int *)0x0;
  this = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_8 = 0;
  local_30 = 0;
  local_34 = param_1;
  fread(&local_30,4,1,param_1);
  pcVar8 = "SAVEHANDLER";
  FUN_00591070("SAVEHANDLER","Loading %d flags...");
  iVar6 = 0;
  piVar5 = piVar4;
  if (0 < local_30) {
    do {
      FUN_004b88b0((undefined1 *)local_2c,local_34);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (piVar4 == this) {
        FUN_00403840(&local_40,this,local_2c);
        piVar4 = local_38;
      }
      else {
        FUN_004024e0(this,local_2c);
        local_3c = this + 6;
      }
      this = local_3c;
      local_8 = local_8 & 0xffffff00;
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
      iVar6 = iVar6 + 1;
      piVar5 = local_40;
    } while (iVar6 < local_30);
  }
  puVar1 = FUN_00412df0();
  FUN_004a11f0(puVar1);
  for (pFVar7 = (FILE *)(((int)this - (int)piVar5) / 0x18); local_34 = pFVar7, pFVar7 != (FILE *)0x0
      ; pFVar7 = (FILE *)((int)pFVar7 + -1)) {
    FUN_004024e0(&stack0xffffff88,piVar5);
    local_8._0_1_ = 2;
    if (DAT_0065c274 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_8._0_1_ = 4;
      puVar1[3] = 0;
      puVar1[4] = 0;
      uVar2 = FUN_004136c0();
      puVar1[3] = uVar2;
      puVar1[9] = 0;
      puVar1[10] = 0xf;
      *(undefined1 *)(puVar1 + 5) = 0;
      pFVar7 = local_34;
      DAT_0065c274 = puVar1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0ee0(DAT_0065c274,(byte *)pcVar8);
    FUN_00591070("SAVEHANDLER","...loaded flag: %s");
    piVar5 = piVar5 + 6;
  }
  FUN_004025a0((int *)&local_40);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004bbde0(FILE *param_1)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  byte *in_stack_ffffff7c;
  int local_58;
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
  puStack_18 = &LAB_005bd0a8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_004a86f0();
  local_58 = 0;
  fread(&local_58,4,1,param_1);
  iVar4 = 0;
  if (0 < local_58) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar1 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar1) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar1;
        pvStack_38 = ppvVar1[1];
        pvStack_34 = ppvVar1[2];
        pvStack_30 = ppvVar1[3];
        local_2c = ppvVar1[4];
        pvStack_28 = ppvVar1[5];
        ppvVar1[4] = (void *)0x0;
        ppvVar1[5] = (void *)0xf;
        *(undefined1 *)ppvVar1 = 0;
      }
      if (0xf < local_40) {
        pvVar3 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar3 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3)))) goto LAB_004bbf8e;
        FUN_005adb3f(pvVar3);
      }
      local_44 = 0;
      local_40 = 0xf;
      local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      FUN_004024e0(&stack0xffffff7c,&local_3c);
      iVar2 = FUN_004a8640(in_stack_ffffff7c);
      if (iVar2 != 0) {
        fread((void *)(iVar2 + 0x18),1,1,param_1);
        in_stack_ffffff7c = (byte *)0x1;
        fread((void *)(iVar2 + 0x19),1,1,param_1);
      }
      FUN_00591070("SAVEHANDLER","..state %s loaded");
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar3 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar3 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3)))) {
LAB_004bbf8e:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_58);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d game states");
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004bbfd0(FILE *param_1)

{
  int *piVar1;
  uint uVar2;
  FILE *local_8;
  
  local_8 = param_1;
  piVar1 = (int *)FUN_00412490();
  local_8 = (FILE *)(piVar1[1] - *piVar1 >> 2);
  fwrite(&local_8,4,1,param_1);
  uVar2 = 0;
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
    if ((uint)(DAT_0065c290[1] - *DAT_0065c290 >> 2) <= uVar2) break;
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
    fwrite(*(void **)(*DAT_0065c290 + uVar2 * 4),4,1,param_1);
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
    fwrite((void *)(*(int *)(*DAT_0065c290 + uVar2 * 4) + 0xe0),1,1,param_1);
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
    fwrite((void *)(*(int *)(*DAT_0065c290 + uVar2 * 4) + 0xd8),4,1,param_1);
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
    fwrite((void *)(*(int *)(*DAT_0065c290 + uVar2 * 4) + 0xd4),4,1,param_1);
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
    fwrite((void *)(*(int *)(*DAT_0065c290 + uVar2 * 4) + 0xd0),4,1,param_1);
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
    fwrite((void *)(*(int *)(*DAT_0065c290 + uVar2 * 4) + 0xdc),4,1,param_1);
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
    FUN_00591070("SAVEHANDLER","..faction %s saved");
    uVar2 = uVar2 + 1;
  }
  FUN_00591070("SAVEHANDLER","..saved %d faction states");
  return;
}
