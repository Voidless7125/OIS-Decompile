#include "../ois_server.exe.h"


void __fastcall FUN_0047c010(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 0x28),DAT_0065500c ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pvVar2 = *(void **)(param_1 + 0x10);
    pvVar3 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x24) + 1) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0047c0c0(byte *param_1)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *this;
  int *piVar7;
  basic_string<> *this_00;
  void *pvVar8;
  uint uVar9;
  undefined4 uVar10;
  byte **ppbVar11;
  int iVar12;
  basic_string<> *pbVar13;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar7 = DAT_0065b530;
  uVar3 = DAT_00655704;
  uVar5 = DAT_00655700;
  pbVar6 = DAT_006556f0;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b889f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar12 = 0;
  if (DAT_0065b399 == '\0') {
    do {
      if ("begin"[iVar12] == '\0') {
        local_8 = 1;
        FUN_004197d0((int *)DAT_0065b530[1]);
        DAT_0065b530[1] = (int)piVar7;
        *DAT_0065b530 = (int)piVar7;
        DAT_0065b530[2] = (int)piVar7;
        piVar7 = DAT_0065b544;
        _DAT_0065b534 = 0;
        local_8 = 2;
        FUN_0047d790((int *)DAT_0065b544[1]);
        DAT_0065b544[1] = (int)piVar7;
        *DAT_0065b544 = (int)piVar7;
        local_8 = 0xffffffff;
        DAT_0065b544[2] = (int)piVar7;
        DAT_0065b548 = 0;
        FUN_00402690(&DAT_006556f0,&PTR_005ce008,0);
        iVar12 = 6;
        while( true ) {
          bVar1 = param_1[iVar12];
          if (bVar1 == 0) {
            DAT_0065b399 = '\x01';
            ExceptionList = local_10;
            return;
          }
          if ((((bVar1 < 0x41) || (0x5a < bVar1)) && ((bVar1 < 0x61 || (0x7a < bVar1)))) &&
             ((bVar1 != 0x5f && (bVar1 != 0x2d)))) break;
          local_18 = (int *)CONCAT31(local_18._1_3_,bVar1);
          if (DAT_00655704 == DAT_00655700) {
            local_14 = (int *)((uint)local_14 & 0xffffff00);
            FUN_0047f0e0(&DAT_006556f0);
          }
          else {
            ppbVar11 = &DAT_006556f0;
            if (0xf < DAT_00655704) {
              ppbVar11 = (byte **)DAT_006556f0;
            }
            pbVar6 = (byte *)((int)ppbVar11 + DAT_00655700);
            DAT_00655700 = DAT_00655700 + 1;
            *pbVar6 = bVar1;
            pbVar6[1] = 0;
          }
          iVar12 = iVar12 + 1;
          if (0x1fff < iVar12) {
            DAT_0065b399 = '\x01';
            ExceptionList = local_10;
            return;
          }
        }
        DAT_0065b399 = '\x01';
        ExceptionList = local_10;
        return;
      }
    } while (((int)"begin"[iVar12] == (uint)param_1[iVar12]) &&
            (iVar12 = iVar12 + 1, iVar12 < 0x2000));
    uVar10 = FUN_0043dce0(param_1,0x5eb53c);
    if ((char)uVar10 == '\0') {
      ExceptionList = local_10;
      return;
    }
    FUN_00402690(&DAT_006556f0,&PTR_005ce008,0);
    iVar12 = 8;
    do {
      bVar1 = param_1[iVar12];
      if ((bVar1 == 10) || (bVar1 == 0)) break;
      local_14 = (int *)CONCAT31(local_14._1_3_,bVar1);
      if (DAT_00655704 == DAT_00655700) {
        local_18 = (int *)((uint)local_18 & 0xffffff00);
        FUN_0047f0e0(&DAT_006556f0);
      }
      else {
        ppbVar11 = &DAT_006556f0;
        if (0xf < DAT_00655704) {
          ppbVar11 = (byte **)DAT_006556f0;
        }
        pbVar6 = (byte *)((int)ppbVar11 + DAT_00655700);
        DAT_00655700 = DAT_00655700 + 1;
        *pbVar6 = bVar1;
        pbVar6[1] = 0;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x2000);
    ppbVar11 = &DAT_006556f0;
    if (0xf < DAT_00655704) {
      ppbVar11 = (byte **)DAT_006556f0;
    }
    FUN_0043de90(ppbVar11,'\0');
    ExceptionList = local_10;
    return;
  }
  do {
    if ((&DAT_005eb348)[iVar12] == '\0') {
      ppbVar11 = &DAT_006556f0;
      if (0xf < DAT_00655704) {
        ppbVar11 = (byte **)DAT_006556f0;
      }
      DAT_0065b399 = '\0';
      uVar9 = FUN_004031f0((byte *)ppbVar11,DAT_00655700,(byte *)"sector",6);
      if ((char)uVar9 != '\0') {
        FUN_00440270();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"planet",6);
      if ((char)uVar9 != '\0') {
        FUN_004429a0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"asteroidfield",0xd);
      if ((char)uVar9 != '\0') {
        FUN_00443c50();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"nebula",6);
      if ((char)uVar9 != '\0') {
        FUN_00443760();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"textmarker",10);
      if ((char)uVar9 != '\0') {
        FUN_004433b0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"navpoint",8);
      if ((char)uVar9 != '\0') {
        FUN_00449350();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"spawnpoint",10);
      if ((char)uVar9 != '\0') {
        FUN_00447ab0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"jumppoint",9);
      if ((char)uVar9 != '\0') {
        FUN_004477a0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3bc,4);
      if ((char)uVar9 != '\0') {
        FUN_00449ce0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3b4,4);
      if ((char)uVar9 != '\0') {
        FUN_00444090();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"module",6);
      if ((char)uVar9 != '\0') {
        FUN_0044ac60();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"shipclass",9);
      if ((char)uVar9 != '\0') {
        FUN_0044ff40();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"jumpgate",8);
      if ((char)uVar9 != '\0') {
        FUN_00463110();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3a4,4);
      if ((char)uVar9 != '\0') {
        FUN_00446750();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"station",7);
      if ((char)uVar9 != '\0') {
        FUN_00461560();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"depot",5);
      if ((char)uVar9 != '\0') {
        FUN_00460ca0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"weapon",6);
      if ((char)uVar9 != '\0') {
        FUN_0045fb00();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"componentinterface",0x12);
      if ((char)uVar9 != '\0') {
        FUN_00452db0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"component",9);
      if ((char)uVar9 != '\0') {
        FUN_004539e0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3cc,4);
      if ((char)uVar9 != '\0') {
        FUN_0044d360();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"hazard",6);
      if ((char)uVar9 != '\0') {
        FUN_0044cc10();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3c4,4);
      if ((char)uVar9 != '\0') {
        FUN_00477240();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"roomobject",10);
      if ((char)uVar9 != '\0') {
        FUN_004787e0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"faction",7);
      if ((char)uVar9 != '\0') {
        FUN_00475690();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"storynote",9);
      if ((char)uVar9 != '\0') {
        FUN_00476b90();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"screen",6);
      if ((char)uVar9 != '\0') {
        FUN_004661f0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"tradelocation",0xd);
      if ((char)uVar9 != '\0') {
        FUN_0044db90();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"scenario",8);
      if ((char)uVar9 != '\0') {
        FUN_00467ac0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb3f0,4);
      if ((char)uVar9 != '\0') {
        FUN_0046adc0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"navmarker",9);
      if ((char)uVar9 != '\0') {
        FUN_0046a530();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"characterclass",0xe);
      if ((char)uVar9 != '\0') {
        FUN_00456220();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"character",9);
      if ((char)uVar9 != '\0') {
        FUN_00456c00();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"conversation",0xc);
      if ((char)uVar9 != '\0') {
        FUN_00458780();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"conversationelement",0x13);
      if ((char)uVar9 != '\0') {
        FUN_00459510();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"conversationoption",0x12);
      if ((char)uVar9 != '\0') {
        FUN_0045b960();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"contract",8);
      if ((char)uVar9 != '\0') {
        FUN_0045e0c0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"email",5);
      if ((char)uVar9 != '\0') {
        FUN_0046f410();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"draftset",8);
      if ((char)uVar9 != '\0') {
        FUN_00471910();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"draft",5);
      if ((char)uVar9 != '\0') {
        FUN_00471fb0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"emailfile",9);
      if ((char)uVar9 != '\0') {
        FUN_0046f290();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"animationset",0xc);
      if ((char)uVar9 != '\0') {
        FUN_0046d740();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"timedflag",9);
      if ((char)uVar9 != '\0') {
        FUN_0046e930();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"timedflags",10);
      if ((char)uVar9 != '\0') {
        FUN_0046dfb0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"synthetic",9);
      if ((char)uVar9 != '\0') {
        FUN_00473f80();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"passengers",10);
      if ((char)uVar9 != '\0') {
        FUN_00446480();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"passengerquirk",0xe);
      if ((char)uVar9 != '\0') {
        FUN_00444fb0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"stats",5);
      if ((char)uVar9 != '\0') {
        FUN_0046db10();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"junkspawn",9);
      if ((char)uVar9 != '\0') {
        FUN_00442420();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"animationframes",0xf);
      if ((char)uVar9 != '\0') {
        FUN_00455df0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"emotes",6);
      if ((char)uVar9 != '\0') {
        FUN_004559f0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005eb508,3);
      if ((char)uVar9 != '\0') {
        FUN_004555e0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"track",5);
      if ((char)uVar9 != '\0') {
        FUN_00455370();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar9 = FUN_004031f0((byte *)ppbVar11,uVar5,&DAT_005e9584,4);
      if ((char)uVar9 != '\0') {
        FUN_00447ed0();
        ExceptionList = local_10;
        return;
      }
      ppbVar11 = &DAT_006556f0;
      if (0xf < uVar3) {
        ppbVar11 = (byte **)pbVar6;
      }
      uVar5 = FUN_004031f0((byte *)ppbVar11,uVar5,(byte *)"gamestate",9);
      if ((char)uVar5 != '\0') {
        FUN_00441bd0();
        ExceptionList = local_10;
        return;
      }
      ExceptionList = local_10;
      return;
    }
  } while (((int)(char)(&DAT_005eb348)[iVar12] == (uint)param_1[iVar12]) &&
          (iVar12 = iVar12 + 1, iVar12 < 0x2000));
  local_18 = (int *)FUN_005adb0f(0x30);
  local_8 = 0;
  pbVar4 = (byte *)FUN_0043dd10(local_18,(int)param_1);
  local_8 = 0xffffffff;
  pbVar6 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar6 = *(byte **)pbVar4;
  }
  uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar4 + 0x10),(byte *)&PTR_005ce008,0);
  if ((char)uVar5 != '\0') {
    ExceptionList = local_10;
    return;
  }
  iVar12 = FUN_0047d0f0(pbVar4);
  if (iVar12 == 0) {
    iVar12 = FUN_00419130(&DAT_0065b530,pbVar4);
    if (iVar12 == 0) {
      pbVar13 = (basic_string<> *)(pbVar4 + 0x18);
      this_00 = (basic_string<> *)FUN_0047d6a0(&DAT_0065b530,pbVar4);
      std::basic_string<>::operator=(this_00,pbVar13);
    }
    else {
      pbVar6 = FUN_0047d6a0(&DAT_0065b530,pbVar4);
      this = FUN_0047d4e0(pbVar4);
      piVar7 = *(int **)(this + 4);
      if (*(int **)(this + 8) == piVar7) {
        FUN_00403840(this,piVar7,(undefined4 *)pbVar6);
      }
      else {
        FUN_004024e0(piVar7,(undefined4 *)pbVar6);
        *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
      }
      FUN_00419820(&DAT_0065b530,(int *)&local_1c,pbVar4);
      piVar7 = local_18;
      local_14 = local_1c;
      while (local_14 != piVar7) {
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_14);
      }
      FUN_00419300(&DAT_0065b530,&local_18,local_1c,piVar7);
      pbVar6 = FUN_0047d4e0(pbVar4);
      piVar7 = *(int **)(pbVar6 + 4);
      if (*(int **)(pbVar6 + 8) == piVar7) goto LAB_0047c23f;
      FUN_004024e0(piVar7,(undefined4 *)(pbVar4 + 0x18));
      *(int *)(pbVar6 + 4) = *(int *)(pbVar6 + 4) + 0x18;
    }
  }
  else {
    pbVar6 = FUN_0047d4e0(pbVar4);
    piVar7 = *(int **)(pbVar6 + 4);
    if (*(int **)(pbVar6 + 8) == piVar7) {
LAB_0047c23f:
      FUN_00403840(pbVar6,piVar7,(undefined4 *)(pbVar4 + 0x18));
    }
    else {
      FUN_004024e0(piVar7,(undefined4 *)(pbVar4 + 0x18));
      *(int *)(pbVar6 + 4) = *(int *)(pbVar6 + 4) + 0x18;
    }
  }
  if (0xf < *(uint *)(pbVar4 + 0x2c)) {
    pvVar2 = *(void **)(pbVar4 + 0x18);
    pvVar8 = pvVar2;
    if ((0xfff < *(uint *)(pbVar4 + 0x2c) + 1) &&
       (pvVar8 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar8))))
    goto LAB_0047c2fb;
    FUN_005adb3f(pvVar8);
  }
  pbVar4[0x28] = 0;
  pbVar4[0x29] = 0;
  pbVar4[0x2a] = 0;
  pbVar4[0x2b] = 0;
  pbVar4[0x2c] = 0xf;
  pbVar4[0x2d] = 0;
  pbVar4[0x2e] = 0;
  pbVar4[0x2f] = 0;
  pbVar4[0x18] = 0;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pvVar2 = *(void **)pbVar4;
    pvVar8 = pvVar2;
    if ((0xfff < *(uint *)(pbVar4 + 0x14) + 1) &&
       (pvVar8 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar8)))) {
LAB_0047c2fb:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  pbVar4[0x10] = 0;
  pbVar4[0x11] = 0;
  pbVar4[0x12] = 0;
  pbVar4[0x13] = 0;
  pbVar4[0x14] = 0xf;
  pbVar4[0x15] = 0;
  pbVar4[0x16] = 0;
  pbVar4[0x17] = 0;
  *pbVar4 = 0;
  FUN_005adb3f(pbVar4);
  ExceptionList = local_10;
  return;
}


int FUN_0047d0f0(byte *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_c;
  int *local_8;
  
  FUN_0047f230(&local_c,param_1);
  iVar4 = 0;
  while (local_c != local_8) {
    piVar2 = (int *)local_c[2];
    iVar4 = iVar4 + 1;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      local_c = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        local_c = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(local_c[1] + 0xd);
      piVar3 = (int *)local_c[1];
      piVar2 = local_c;
      while ((local_c = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_c[2]))) {
        cVar1 = *(char *)(local_c[1] + 0xd);
        piVar3 = (int *)local_c[1];
        piVar2 = local_c;
      }
    }
  }
  return iVar4;
}


void FUN_0047d160(void)

{
  if (DAT_0065c2e8 == (undefined4 *)0x0) {
    DAT_0065c2e8 = (undefined4 *)FUN_005adb0f(0x18);
    DAT_0065c2e8[4] = 0;
    DAT_0065c2e8[5] = 0;
    *DAT_0065c2e8 = 0;
    DAT_0065c2e8[1] = 0;
    DAT_0065c2e8[2] = 0;
    DAT_0065c2e8[3] = 0;
    DAT_0065c2e8[4] = 0;
    DAT_0065c2e8[5] = 0;
  }
  return;
}


void FUN_0047d1b0(void)

{
  if (DAT_0065c2e0 == (undefined4 *)0x0) {
    DAT_0065c2e0 = (undefined4 *)FUN_005adb0f(0x3c);
    DAT_0065c2e0[4] = 0;
    DAT_0065c2e0[5] = 0;
    DAT_0065c2e0[7] = 0;
    DAT_0065c2e0[8] = 0;
    DAT_0065c2e0[10] = 0;
    DAT_0065c2e0[0xb] = 0;
    DAT_0065c2e0[0xd] = 0;
    DAT_0065c2e0[0xe] = 0;
    *DAT_0065c2e0 = 0;
    DAT_0065c2e0[1] = 0;
    DAT_0065c2e0[2] = 0;
    DAT_0065c2e0[3] = 0;
    DAT_0065c2e0[4] = 0;
    DAT_0065c2e0[5] = 0;
    DAT_0065c2e0[6] = 0;
    DAT_0065c2e0[7] = 0;
    DAT_0065c2e0[8] = 0;
    DAT_0065c2e0[9] = 0;
    DAT_0065c2e0[10] = 0;
    DAT_0065c2e0[0xb] = 0;
    DAT_0065c2e0[0xc] = 0;
    DAT_0065c2e0[0xd] = 0;
    DAT_0065c2e0[0xe] = 0;
  }
  return;
}


undefined4 * FUN_0047d270(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b88e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = DAT_0065c2e4;
  if (DAT_0065c2e4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    local_8 = 2;
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = FUN_0047d950();
    puVar1[6] = uVar2;
  }
  ExceptionList = local_10;
  DAT_0065c2e4 = puVar1;
  return puVar1;
}


void __thiscall FUN_0047d320(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    FUN_0047dc10(this,puVar1,param_1);
    *(int *)(extraout_ECX + 4) = *(int *)(extraout_ECX + 4) + 0x30;
    return;
  }
  FUN_0047dc80(this,puVar1,param_1);
  return;
}


void __thiscall FUN_0047d350(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  
  this_00 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != this_00) {
    FUN_0047f480(this_00,param_1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x50;
    return;
  }
  FUN_0047e090(this,this_00,param_1);
  return;
}


void __thiscall FUN_0047d380(void *this,uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)((int)this + 4);
  if (*(uint **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    puVar1[2] = param_1[2];
    puVar1[3] = uVar2;
    puVar1[4] = uVar3;
    puVar1[5] = uVar4;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 2) = 0;
    *(char *)(puVar1 + 8) = (char)param_1[8];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x24;
    return;
  }
  FUN_0047e460(this,puVar1,param_1);
  return;
}


void __thiscall FUN_0047d3f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    uVar2 = param_1[4];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
    puVar1[4] = uVar2;
    puVar1[5] = param_1[5];
    return;
  }
  FUN_0047e880(this,puVar1,param_1);
  return;
}


void __fastcall thunk_FUN_0047d7d0(int *param_1)

{
  Rect *pRVar1;
  Rect *pRVar2;
  
  pRVar1 = (Rect *)*param_1;
  if (pRVar1 != (Rect *)0x0) {
    pRVar2 = (Rect *)param_1[1];
    if (pRVar1 != pRVar2) {
      do {
        FUN_00467a60(pRVar1);
        pRVar1 = pRVar1 + 0x28;
      } while (pRVar1 != pRVar2);
      pRVar1 = (Rect *)*param_1;
    }
    pRVar2 = pRVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pRVar1) / 0x28) * 0x28)) &&
       (pRVar2 = *(Rect **)(pRVar1 + -4), (Rect *)0x1f < pRVar1 + (-4 - (int)pRVar2))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __fastcall FUN_0047d450(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar1 != pvVar2) {
      do {
        FUN_00465e40((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0x188);
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x188) * 0x188)) &&
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


byte * FUN_0047d4e0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  void *this;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  FUN_004803f0(&param_1,param_1);
  pbVar4 = param_1;
  pbVar7 = extraout_ECX;
  if (param_1 == DAT_0065b544) goto LAB_0047d589;
  pbVar8 = param_1 + 0x10;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_0047d546;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d57a:
    uVar5 = 0;
  }
  else {
LAB_0047d546:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_0047d57a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d5b4:
      return param_1 + 0x28;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d5b4;
LAB_0047d589:
  param_1 = pbVar3;
  piVar6 = (int *)FUN_00480bc0(pbVar7,&param_1);
  FUN_004805e0(this,&param_1,pbVar4,(byte *)(piVar6 + 4),piVar6);
  return param_1 + 0x28;
}


byte * FUN_0047d5c0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  void *this;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  FUN_004803f0(&param_1,param_1);
  pbVar4 = param_1;
  pbVar7 = extraout_ECX;
  if (param_1 == DAT_0065b544) goto LAB_0047d669;
  pbVar8 = param_1 + 0x10;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_0047d626;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d65a:
    uVar5 = 0;
  }
  else {
LAB_0047d626:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_0047d65a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d694:
      return param_1 + 0x28;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d694;
LAB_0047d669:
  param_1 = pbVar3;
  piVar6 = (int *)FUN_00480580(pbVar7,&param_1);
  FUN_004805e0(this,&param_1,pbVar4,(byte *)(piVar6 + 4),piVar6);
  return param_1 + 0x28;
}


byte * __thiscall FUN_0047d6a0(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  FUN_00419d50(this,(int *)&param_1,param_1);
  pbVar4 = param_1;
  pbVar7 = extraout_ECX;
  if (param_1 == *(byte **)this) goto LAB_0047d74b;
  pbVar8 = param_1 + 0x10;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_0047d706;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d73a:
    uVar5 = 0;
  }
  else {
LAB_0047d706:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_0047d73a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d77d:
      return param_1 + 0x28;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d77d;
LAB_0047d74b:
  param_1 = pbVar3;
  piVar6 = (int *)FUN_00480c50(this,pbVar7,&param_1);
  FUN_0041a070(this,&param_1,(int *)pbVar4,(byte *)(piVar6 + 4),piVar6);
  return param_1 + 0x28;
}


void FUN_0047d790(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0047d790((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_0047f780(param_1 + 4);
    FUN_005adb3f(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


void __fastcall FUN_0047d7d0(int *param_1)

{
  Rect *pRVar1;
  Rect *pRVar2;
  
  pRVar1 = (Rect *)*param_1;
  if (pRVar1 != (Rect *)0x0) {
    pRVar2 = (Rect *)param_1[1];
    if (pRVar1 != pRVar2) {
      do {
        FUN_00467a60(pRVar1);
        pRVar1 = pRVar1 + 0x28;
      } while (pRVar1 != pRVar2);
      pRVar1 = (Rect *)*param_1;
    }
    pRVar2 = pRVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pRVar1) / 0x28) * 0x28)) &&
       (pRVar2 = *(Rect **)(pRVar1 + -4), (Rect *)0x1f < pRVar1 + (-4 - (int)pRVar2))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_0047d850(Rect *param_1,Rect *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_00467a60(param_1);
  }
  return;
}


void FUN_0047d8c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x188) {
    FUN_00465e40(param_1);
  }
  return;
}


void FUN_0047d8f0(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x188)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void FUN_0047d930(void)

{
  int iVar1;
  
  iVar1 = FUN_005adb0f(0x34);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}


void FUN_0047d950(void)

{
  int iVar1;
  
  iVar1 = FUN_005adb0f(0x40);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}


int __thiscall FUN_0047d970(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005b891a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar5 = ((int)param_1 - iVar2) / 0x28;
  iVar6 = (*(int *)((int)this + 4) - iVar2) / 0x28;
  if (iVar6 == 0x6666666) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar6 + 1;
  uVar9 = (*(int *)((int)this + 8) - iVar2) / 0x28;
  uVar11 = uVar1;
  if ((uVar9 <= 0x6666666 - (uVar9 >> 1)) && (uVar11 = (uVar9 >> 1) + uVar9, uVar11 < uVar1)) {
    uVar11 = uVar1;
  }
  uVar9 = uVar11 * 0x28;
  if (uVar11 < 0x6666667) {
    if (0xfff < uVar9) goto LAB_0047da34;
    if (uVar9 == 0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)FUN_005adb0f(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_0047da34:
    uVar7 = uVar9 + 0x23;
    if (uVar7 <= uVar9) {
      uVar7 = 0xffffffff;
    }
    uVar9 = FUN_005adb0f(uVar7);
    if (uVar9 == 0) goto LAB_0047da57;
    puVar10 = (uint *)(uVar9 + 0x23 & 0xffffffe0);
    puVar10[-1] = uVar9;
  }
  puVar13 = puVar10 + iVar5 * 10;
  *puVar13 = *param_2;
  puVar13[1] = param_2[1];
  local_8 = 1;
  uStack_7 = 0;
  FUN_004024e0(puVar13 + 2,param_2 + 2);
  puVar10[iVar5 * 10 + 8] = param_2[8];
  puVar10[iVar5 * 10 + 9] = param_2[9];
  local_8 = 0;
  puVar3 = *(uint **)((int)this + 4);
  if (param_1 == puVar3) {
    puVar12 = puVar10;
    for (puVar13 = *(uint **)this; local_8 = 2, puVar13 != puVar3; puVar13 = puVar13 + 10) {
      *puVar12 = *puVar13;
      puVar12[1] = puVar13[1];
      local_8 = 3;
      FUN_004024e0(puVar12 + 2,puVar13 + 2);
      puVar12[8] = puVar13[8];
      puVar12[9] = puVar13[9];
      puVar12 = puVar12 + 10;
    }
    FUN_0047ffb0(puVar12,puVar12);
  }
  else {
    FUN_0047f800(*(undefined4 **)this,param_1,puVar10);
    FUN_0047f800(param_1,*(undefined4 **)((int)this + 4),puVar13 + 10);
  }
  if (*(uint **)this != (uint *)0x0) {
    FUN_0047ffb0(*(uint **)this,*(uint **)((int)this + 4));
    pvVar4 = *(void **)this;
    pvVar8 = pvVar4;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - *(int *)this) / 0x28) * 0x28)) &&
       (pvVar8 = *(void **)((int)pvVar4 + -4), 0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar8)))) {
LAB_0047da57:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  *(uint **)this = puVar10;
  *(uint **)((int)this + 4) = puVar10 + uVar1 * 10;
  *(uint **)((int)this + 8) = puVar10 + uVar11 * 10;
  ExceptionList = local_10;
  return *(int *)this + iVar5 * 0x28;
}


void __fastcall FUN_0047dc10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  param_3[4] = 0;
  param_3[5] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = param_3[7];
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  param_2[6] = param_3[6];
  param_2[7] = uVar1;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 6) = 0;
  return;
}


int __thiscall FUN_0047dc80(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  int extraout_ECX_01;
  undefined4 *puVar9;
  int extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  
  iVar6 = *(int *)this;
  iVar1 = ((int)param_1 - iVar6) / 0x30;
  iVar2 = (*(int *)((int)this + 4) - iVar6) / 0x30;
  if (iVar2 == 0x5555555) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar3 = iVar2 + 1;
  uVar7 = (*(int *)((int)this + 8) - iVar6) / 0x30;
  uVar4 = uVar3;
  if ((uVar7 <= 0x5555555 - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar3)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar4 * 0x30;
  if (uVar4 < 0x5555556) {
    if (0xfff < uVar7) goto LAB_0047dd21;
    if (uVar7 == 0) {
      puVar11 = (undefined4 *)0x0;
      uVar8 = 0;
    }
    else {
      puVar11 = (undefined4 *)FUN_005adb0f(uVar7);
      uVar8 = extraout_ECX_00;
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0047dd21:
    uVar5 = uVar7 + 0x23;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffff;
    }
    iVar6 = FUN_005adb0f(uVar5);
    if (iVar6 == 0) goto LAB_0047de7b;
    puVar11 = (undefined4 *)(iVar6 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar6;
    uVar8 = extraout_ECX;
  }
  FUN_0047dc10(uVar8,puVar11 + iVar1 * 0xc,param_2);
  puVar14 = *(undefined4 **)((int)this + 4);
  puVar9 = *(undefined4 **)this;
  puVar10 = puVar11;
  if (param_1 == puVar14) {
    while (puVar9 != puVar14) {
      FUN_0047dc10(puVar9,puVar10,puVar9);
      puVar10 = (undefined4 *)(extraout_EDX + 0x30);
      puVar9 = (undefined4 *)(extraout_ECX_01 + 0x30);
    }
  }
  else {
    if (puVar9 != param_1) {
      do {
        FUN_0047dc10(puVar9,puVar10,puVar9);
        puVar9 = (undefined4 *)(extraout_ECX_02 + 0x30);
        puVar10 = (undefined4 *)(extraout_EDX_00 + 0x30);
      } while (puVar9 != param_1);
      puVar14 = *(undefined4 **)((int)this + 4);
    }
    if (param_1 != puVar14) {
      puVar10 = param_1;
      do {
        FUN_0047dc10(puVar9,(undefined4 *)
                            ((int)(puVar11 + iVar1 * 0xc) + (0x30 - (int)param_1) + (int)puVar10),
                     puVar10);
        puVar10 = puVar10 + 0xc;
        puVar9 = extraout_ECX_03;
      } while (puVar10 != puVar14);
    }
  }
  piVar12 = *(int **)this;
  if (piVar12 != (int *)0x0) {
    piVar13 = *(int **)((int)this + 4);
    if (piVar12 != piVar13) {
      do {
        FUN_00419bc0(piVar12);
        piVar12 = piVar12 + 0xc;
      } while (piVar12 != piVar13);
      piVar12 = *(int **)this;
    }
    piVar13 = piVar12;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)piVar12) / 0x30) * 0x30)) &&
       (piVar13 = (int *)piVar12[-1], 0x1f < (uint)((int)piVar12 + (-4 - (int)piVar13)))) {
LAB_0047de7b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar13);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)((int)this + 4) = puVar11 + uVar3 * 0xc;
  *(undefined4 **)((int)this + 8) = puVar11 + uVar4 * 0xc;
  return *(int *)this + iVar1 * 0x30;
}


int __thiscall FUN_0047de90(void *this,undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  
  iVar8 = *(int *)this;
  iVar5 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (iVar5 == 0x15555555) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar5 + 1;
  uVar7 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  uVar3 = uVar1;
  if ((uVar7 <= 0x15555555 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 * 0xc;
  if (uVar3 < 0x15555556) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_0047df2b;
    if (uVar7 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_0047df2b:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_005adb0f(uVar4);
    if (iVar5 == 0) goto LAB_0047e075;
    puVar10 = (undefined8 *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)puVar10 + -4) = iVar5;
  }
  iVar8 = (((int)param_1 - iVar8) / 0xc) * 0xc;
  *(undefined8 *)(iVar8 + (int)puVar10) = *param_2;
  *(undefined4 *)(iVar8 + 8 + (int)puVar10) = *(undefined4 *)(param_2 + 1);
  puVar12 = *(undefined8 **)((int)this + 4);
  puVar6 = *(undefined8 **)this;
  puVar9 = puVar10;
  if (param_1 == puVar12) {
    for (; puVar6 != puVar12; puVar6 = (undefined8 *)((int)puVar6 + 0xc)) {
      *puVar9 = *puVar6;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
      puVar9 = (undefined8 *)((int)puVar9 + 0xc);
    }
  }
  else {
    if (puVar6 != param_1) {
      do {
        *puVar9 = *puVar6;
        puVar12 = puVar6 + 1;
        puVar6 = (undefined8 *)((int)puVar6 + 0xc);
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)puVar12;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      } while (puVar6 != param_1);
      puVar12 = *(undefined8 **)((int)this + 4);
    }
    if (param_1 != puVar12) {
      puVar6 = (undefined8 *)(iVar8 + 0xc + (int)puVar10);
      do {
        *puVar6 = *param_1;
        puVar9 = param_1 + 1;
        param_1 = (undefined8 *)((int)param_1 + 0xc);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)puVar9;
        puVar6 = (undefined8 *)((int)puVar6 + 0xc);
      } while (param_1 != puVar12);
    }
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar11 = pvVar2;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar2) / 0xc) * 0xc)) &&
       (pvVar11 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11)))) {
LAB_0047e075:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  *(undefined8 **)this = puVar10;
  *(uint *)((int)this + 4) = (int)puVar10 + uVar1 * 0xc;
  *(uint *)((int)this + 8) = uVar7 + (int)puVar10;
  return *(int *)this + iVar8;
}


int __thiscall FUN_0047e090(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *this_00;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8948;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)this;
  iVar3 = ((int)param_1 - iVar7) / 0x50;
  iVar4 = (*(int *)((int)this + 4) - iVar7) / 0x50;
  if (iVar4 == 0x3333333) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar8 = (*(int *)((int)this + 8) - iVar7) / 0x50;
  uVar5 = uVar1;
  if ((uVar8 <= 0x3333333 - (uVar8 >> 1)) && (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar8 = uVar5 * 0x50;
  if (uVar5 < 0x3333334) {
    if (0xfff < uVar8) goto LAB_0047e150;
    if (uVar8 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)FUN_005adb0f(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_0047e150:
    uVar6 = uVar8 + 0x23;
    if (uVar6 <= uVar8) {
      uVar6 = 0xffffffff;
    }
    iVar7 = FUN_005adb0f(uVar6);
    if (iVar7 == 0) goto LAB_0047e173;
    puVar11 = (undefined4 *)(iVar7 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar7;
  }
  local_8 = 0;
  FUN_0047f480(puVar11 + iVar3 * 0x14,param_2);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar2) {
    puVar12 = *(undefined4 **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    this_00 = puVar11;
    for (; puVar12 != puVar2; puVar12 = puVar12 + 0x14) {
      FUN_0047f480(this_00,puVar12);
      this_00 = this_00 + 0x14;
    }
  }
  else {
    FUN_0047f8e0(*(undefined4 **)this,param_1,puVar11);
    FUN_0047f8e0(param_1,*(undefined4 **)((int)this + 4),puVar11 + iVar3 * 0x14 + 0x14);
  }
  pvVar9 = *(void **)this;
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)((int)this + 4);
    if (pvVar9 != pvVar10) {
      do {
        FUN_0047c010((int)pvVar9);
        pvVar9 = (void *)((int)pvVar9 + 0x50);
      } while (pvVar9 != pvVar10);
      pvVar9 = *(void **)this;
    }
    pvVar10 = pvVar9;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar9) / 0x50) * 0x50)) &&
       (pvVar10 = *(void **)((int)pvVar9 + -4), 0x1f < (uint)((int)pvVar9 + (-4 - (int)pvVar10)))) {
LAB_0047e173:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)((int)this + 4) = puVar11 + uVar1 * 0x14;
  *(undefined4 **)((int)this + 8) = puVar11 + uVar5 * 0x14;
  ExceptionList = local_10;
  return *(int *)this + iVar3 * 0x50;
}


undefined4 * FUN_0047e2f0(void *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  
  iVar3 = (int)DAT_0065b4d4 - (int)DAT_0065b4d0 >> 2;
  iVar8 = (int)param_1 - (int)DAT_0065b4d0;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar3 + 1;
  uVar7 = (int)DAT_0065b4d8 - (int)DAT_0065b4d0 >> 2;
  uVar4 = uVar1;
  if ((uVar7 <= 0x3fffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0047e366;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0047e366:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    iVar3 = FUN_005adb0f(uVar5);
    if (iVar3 == 0) goto LAB_0047e44f;
    _Dst = (void *)(iVar3 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar3;
  }
  puVar2 = (undefined4 *)((int)_Dst + (iVar8 >> 2) * 4);
  *puVar2 = *param_2;
  if (param_1 == DAT_0065b4d4) {
    memmove(_Dst,DAT_0065b4d0,(int)DAT_0065b4d4 - (int)DAT_0065b4d0);
  }
  else {
    memmove(_Dst,DAT_0065b4d0,(int)param_1 - (int)DAT_0065b4d0);
    memmove(puVar2 + 1,param_1,(int)DAT_0065b4d4 - (int)param_1);
  }
  if (DAT_0065b4d0 != (void *)0x0) {
    pvVar6 = DAT_0065b4d0;
    if ((0xfff < ((int)DAT_0065b4d8 - (int)DAT_0065b4d0 & 0xfffffffcU)) &&
       (pvVar6 = *(void **)((int)DAT_0065b4d0 + -4),
       0x1f < (uint)((int)DAT_0065b4d0 + (-4 - (int)pvVar6)))) {
LAB_0047e44f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  DAT_0065b4d0 = _Dst;
  DAT_0065b4d4 = (void *)((int)_Dst + uVar1 * 4);
  DAT_0065b4d8 = (void *)(uVar7 + (int)_Dst);
  return puVar2;
}


int __thiscall FUN_0047e460(void *this,undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = ((int)param_1 - *(int *)this) / 0x24;
  iVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0x24;
  if (iVar3 == 0x71c71c7) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = (*(int *)((int)this + 8) - *(int *)this) / 0x24;
  uVar8 = iVar3 + 1;
  if (uVar6 <= 0x71c71c7 - (uVar6 >> 1)) {
    uVar8 = (uVar6 >> 1) + uVar6;
    if (uVar8 < iVar3 + 1U) {
      uVar8 = iVar3 + 1U;
    }
  }
  uVar6 = uVar8 * 0x24;
  if (uVar8 < 0x71c71c8) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = (uint *)FUN_005adb0f(uVar6);
      }
      goto LAB_0047e561;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar5 = uVar6 + 0x23;
  if (uVar5 <= uVar6) {
    uVar5 = 0xffffffff;
  }
  uVar6 = FUN_005adb0f(uVar5);
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  puVar7 = (uint *)(uVar6 + 0x23 & 0xffffffe0);
  puVar7[-1] = uVar6;
LAB_0047e561:
  local_8 = 0;
  puVar1 = puVar7 + iVar2 * 9;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar6 = param_2[3];
  uVar5 = param_2[4];
  uVar4 = param_2[5];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar6;
  puVar1[4] = uVar5;
  puVar1[5] = uVar4;
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  *(char *)(puVar1 + 8) = (char)param_2[8];
  if (param_1 == *(undefined4 **)((int)this + 4)) {
    FUN_0047fb00(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar7);
  }
  else {
    FUN_0047fba0(*(undefined4 **)this,param_1,puVar7);
    FUN_0047fba0(param_1,*(undefined4 **)((int)this + 4),puVar1 + 9);
  }
  FUN_0047fa50(this,(int)puVar7,iVar3 + 1,uVar8);
  ExceptionList = local_10;
  return *(int *)this + iVar2 * 0x24;
}


int __thiscall FUN_0047e650(void *this,undefined4 *param_1,uint *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint *puVar11;
  uint *puVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  iVar3 = ((int)param_1 - iVar1) / 0x2c;
  iVar4 = (*(int *)((int)this + 4) - iVar1) / 0x2c;
  if (iVar4 == 0x5d1745d) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar7 = iVar4 + 1;
  uVar6 = (*(int *)((int)this + 8) - iVar1) / 0x2c;
  uVar5 = uVar7;
  if ((uVar6 <= 0x5d1745d - (uVar6 >> 1)) && (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < uVar7)) {
    uVar5 = uVar7;
  }
  uVar7 = uVar5 * 0x2c;
  if (uVar5 < 0x5d1745e) {
    if (0xfff < uVar7) goto LAB_0047e710;
    if (uVar7 == 0) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0047e710:
    uVar6 = uVar7 + 0x23;
    if (uVar6 <= uVar7) {
      uVar6 = 0xffffffff;
    }
    uVar7 = FUN_005adb0f(uVar6);
    if (uVar7 == 0) goto LAB_0047e733;
    puVar11 = (uint *)(uVar7 + 0x23 & 0xffffffe0);
    puVar11[-1] = uVar7;
  }
  local_8 = 0;
  puVar11[iVar3 * 0xb] = *param_2;
  puVar11[iVar3 * 0xb + 1] = param_2[1];
  puVar11[iVar3 * 0xb + 2] = param_2[2];
  FUN_004024e0(puVar11 + iVar3 * 0xb + 3,param_2 + 3);
  puVar11[iVar3 * 0xb + 9] = param_2[9];
  *(char *)(puVar11 + iVar3 * 0xb + 10) = (char)param_2[10];
  puVar9 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)this;
  puVar12 = puVar11;
  if (param_1 != puVar9) {
    FUN_00480100(*(undefined4 **)this,param_1,puVar11);
    puVar9 = *(undefined4 **)((int)this + 4);
    puVar12 = puVar11 + iVar3 * 0xb + 0xb;
    puVar8 = param_1;
  }
  FUN_00480100(puVar8,puVar9,puVar12);
  if (*(uint **)this != (uint *)0x0) {
    FUN_00480090(*(uint **)this,*(uint **)((int)this + 4));
    pvVar2 = *(void **)this;
    pvVar10 = pvVar2;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar2) / 0x2c) * 0x2c)) &&
       (pvVar10 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar10)))) {
LAB_0047e733:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  *(uint **)this = puVar11;
  *(uint **)((int)this + 4) = puVar11 + (iVar4 + 1) * 0xb;
  *(uint **)((int)this + 8) = puVar11 + uVar5 * 0xb;
  ExceptionList = local_10;
  return *(int *)this + iVar3 * 0x2c;
}


int __thiscall FUN_0047e880(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  
  iVar8 = *(int *)this;
  iVar4 = ((int)param_1 - iVar8) / 0x18;
  iVar5 = (*(int *)((int)this + 4) - iVar8) / 0x18;
  if (iVar5 == 0xaaaaaaa) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar9 = iVar5 + 1;
  uVar7 = (*(int *)((int)this + 8) - iVar8) / 0x18;
  uVar6 = uVar9;
  if ((uVar7 <= 0xaaaaaaa - (uVar7 >> 1)) && (uVar6 = (uVar7 >> 1) + uVar7, uVar6 < uVar9)) {
    uVar6 = uVar9;
  }
  uVar9 = uVar6 * 0x18;
  if (uVar6 < 0xaaaaaab) {
    if (0xfff < uVar9) goto LAB_0047e91b;
    if (uVar9 == 0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)FUN_005adb0f(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_0047e91b:
    uVar7 = uVar9 + 0x23;
    if (uVar7 <= uVar9) {
      uVar7 = 0xffffffff;
    }
    iVar8 = FUN_005adb0f(uVar7);
    if (iVar8 == 0) goto LAB_0047ea58;
    puVar12 = (undefined4 *)(iVar8 + 0x23U & 0xffffffe0);
    puVar12[-1] = iVar8;
  }
  puVar12[iVar4 * 6] = *param_2;
  puVar12[iVar4 * 6 + 1] = param_2[1];
  puVar12[iVar4 * 6 + 2] = param_2[2];
  puVar12[iVar4 * 6 + 3] = param_2[3];
  puVar12[iVar4 * 6 + 4] = param_2[4];
  puVar10 = *(undefined4 **)this;
  puVar12[iVar4 * 6 + 5] = param_2[5];
  puVar2 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar2) {
    if (puVar10 != puVar2) {
      puVar11 = puVar12 + 1;
      do {
        puVar11[-1] = *puVar10;
        *puVar11 = puVar10[1];
        puVar11[1] = puVar10[2];
        puVar11[2] = puVar10[3];
        puVar11[3] = puVar10[4];
        puVar1 = puVar10 + 5;
        puVar10 = puVar10 + 6;
        puVar11[4] = *puVar1;
        puVar11 = puVar11 + 6;
      } while (puVar10 != puVar2);
    }
  }
  else {
    FUN_0047fcd0(puVar10,param_1,puVar12);
    FUN_0047fcd0(param_1,*(undefined4 **)((int)this + 4),puVar12 + iVar4 * 6 + 6);
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    pvVar13 = pvVar3;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar3) / 0x18) * 0x18)) &&
       (pvVar13 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar13)))) {
LAB_0047ea58:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)((int)this + 4) = puVar12 + (iVar5 * 3 + 3) * 2;
  *(undefined4 **)((int)this + 8) = puVar12 + uVar6 * 6;
  return *(int *)this + iVar4 * 0x18;
}


int __thiscall FUN_0047ea70(void *this,Rect *param_1,Rect *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Rect *pRVar7;
  Rect *pRVar8;
  Rect *pRVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005b89b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar1 = (*(int *)((int)this + 4) - iVar5) / 0x28;
  if (iVar1 == 0x6666666) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar1 + 1;
  uVar3 = (*(int *)((int)this + 8) - iVar5) / 0x28;
  uVar2 = uVar6;
  if ((uVar3 <= 0x6666666 - (uVar3 >> 1)) && (uVar2 = (uVar3 >> 1) + uVar3, uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  uVar6 = uVar2 * 0x28;
  if (uVar2 < 0x6666667) {
    uVar2 = uVar6;
    if (0xfff < uVar6) goto LAB_0047eb33;
    if (uVar6 == 0) {
      pRVar9 = (Rect *)0x0;
    }
    else {
      pRVar9 = (Rect *)FUN_005adb0f(uVar6);
    }
  }
  else {
    uVar2 = 0xffffffff;
LAB_0047eb33:
    uVar3 = uVar2 + 0x23;
    if (uVar3 <= uVar2) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_0047eb56;
    pRVar9 = (Rect *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)(pRVar9 + -4) = iVar4;
  }
  local_8 = 0;
  iVar5 = (((int)param_1 - iVar5) / 0x28) * 0x28;
  pRVar7 = pRVar9 + iVar5;
  cocos2d::Rect::Rect(pRVar7,param_2);
  local_8._0_1_ = 1;
  FUN_004024e0(pRVar7 + 0x10,(undefined4 *)(param_2 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 == *(Rect **)((int)this + 4)) {
    FUN_00480360(*(Rect **)this,*(Rect **)((int)this + 4),pRVar9);
  }
  else {
    FUN_0047fd30(*(undefined4 **)this,(undefined4 *)param_1,pRVar9);
    FUN_0047fd30((undefined4 *)param_1,*(undefined4 **)((int)this + 4),pRVar7 + 0x28);
  }
  pRVar7 = *(Rect **)this;
  if (pRVar7 != (Rect *)0x0) {
    pRVar8 = *(Rect **)((int)this + 4);
    if (pRVar7 != pRVar8) {
      do {
        FUN_00467a60(pRVar7);
        pRVar7 = pRVar7 + 0x28;
      } while (pRVar7 != pRVar8);
      pRVar7 = *(Rect **)this;
    }
    pRVar8 = pRVar7;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pRVar7) / 0x28) * 0x28)) &&
       (pRVar8 = *(Rect **)(pRVar7 + -4), (Rect *)0x1f < pRVar7 + (-4 - (int)pRVar8))) {
LAB_0047eb56:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar8);
  }
  *(Rect **)this = pRVar9;
  *(Rect **)((int)this + 4) = pRVar9 + (iVar1 * 5 + 5) * 8;
  *(Rect **)((int)this + 8) = pRVar9 + uVar6;
  ExceptionList = local_10;
  return *(int *)this + iVar5;
}


int __thiscall FUN_0047ecb0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b89e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar5 = (*(int *)((int)this + 4) - iVar6) / 0x188;
  if (iVar5 == 0xa72f05) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar5 + 1;
  uVar7 = (*(int *)((int)this + 8) - iVar6) / 0x188;
  uVar3 = uVar1;
  if ((uVar7 <= 0xa72f05 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 * 0x188;
  if (uVar3 < 0xa72f06) {
    if (0xfff < uVar7) goto LAB_0047ed70;
    if (uVar7 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0047ed70:
    uVar4 = uVar7 + 0x23;
    if (uVar4 <= uVar7) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_005adb0f(uVar4);
    if (iVar5 == 0) goto LAB_0047ed93;
    pvVar10 = (void *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)pvVar10 - 4) = iVar5;
  }
  iVar6 = (((int)param_1 - iVar6) / 0x188) * 0x188;
  local_8 = 0;
  pvVar8 = (void *)(iVar6 + (int)pvVar10);
  FUN_0047f520(pvVar8,param_2);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar2) {
    puVar11 = *(undefined4 **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pvVar8 = pvVar10;
    for (; puVar11 != puVar2; puVar11 = puVar11 + 0x62) {
      FUN_0047f520(pvVar8,puVar11);
      pvVar8 = (void *)((int)pvVar8 + 0x188);
    }
  }
  else {
    FUN_0047fde0(*(undefined4 **)this,param_1,pvVar10);
    FUN_0047fde0(param_1,*(undefined4 **)((int)this + 4),(void *)((int)pvVar8 + 0x188));
  }
  pvVar8 = *(void **)this;
  if (pvVar8 != (void *)0x0) {
    pvVar9 = *(void **)((int)this + 4);
    if (pvVar8 != pvVar9) {
      do {
        FUN_00465e40((int)pvVar8);
        pvVar8 = (void *)((int)pvVar8 + 0x188);
      } while (pvVar8 != pvVar9);
      pvVar8 = *(void **)this;
    }
    pvVar9 = pvVar8;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar8) / 0x188) * 0x188)) &&
       (pvVar9 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar9)))) {
LAB_0047ed93:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  *(void **)this = pvVar10;
  *(void **)((int)this + 4) = (void *)(uVar1 * 0x188 + (int)pvVar10);
  *(void **)((int)this + 8) = (void *)(uVar3 * 0x188 + (int)pvVar10);
  ExceptionList = local_10;
  return *(int *)this + iVar6;
}


int __thiscall FUN_0047ef10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8a10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 5;
  if (iVar4 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar9 = *(int *)((int)this + 8) - iVar2 >> 5;
  uVar5 = uVar1;
  if ((uVar9 <= 0x7ffffff - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar9 = uVar5 * 0x20;
  if (uVar5 < 0x8000000) {
    if (0xfff < uVar9) goto LAB_0047efa2;
    if (uVar9 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = (uint *)FUN_005adb0f(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_0047efa2:
    uVar6 = uVar9 + 0x23;
    if (uVar6 <= uVar9) {
      uVar6 = 0xffffffff;
    }
    uVar9 = FUN_005adb0f(uVar6);
    if (uVar9 == 0) goto LAB_0047efc5;
    puVar12 = (uint *)(uVar9 + 0x23 & 0xffffffe0);
    puVar12[-1] = uVar9;
  }
  uVar9 = (int)param_1 - iVar2 & 0xffffffe0;
  local_8 = 0;
  *(undefined4 *)(uVar9 + (int)puVar12) = *param_2;
  *(undefined4 *)(uVar9 + 4 + (int)puVar12) = param_2[1];
  FUN_004024e0((void *)(uVar9 + 8 + (int)puVar12),param_2 + 2);
  puVar11 = *(undefined4 **)((int)this + 4);
  puVar10 = *(undefined4 **)this;
  puVar7 = puVar12;
  if (param_1 != puVar11) {
    FUN_00480200(*(undefined4 **)this,param_1,puVar12);
    puVar11 = *(undefined4 **)((int)this + 4);
    puVar7 = (uint *)(uVar9 + 0x20 + (int)puVar12);
    puVar10 = param_1;
  }
  FUN_00480200(puVar10,puVar11,puVar7);
  if (*(uint **)this != (uint *)0x0) {
    FUN_00480190(*(uint **)this,*(uint **)((int)this + 4));
    pvVar3 = *(void **)this;
    pvVar8 = pvVar3;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar3 & 0xffffffe0U)) &&
       (pvVar8 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar8)))) {
LAB_0047efc5:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  *(uint **)this = puVar12;
  *(uint **)((int)this + 4) = puVar12 + uVar1 * 8;
  *(uint **)((int)this + 8) = puVar12 + uVar5 * 8;
  ExceptionList = local_10;
  return *(int *)this + uVar9;
}


undefined4 * __thiscall FUN_0047f0e0(void *this)

{
  undefined1 *puVar1;
  size_t _Size;
  uint uVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *_Dst;
  undefined1 in_stack_00000010;
  
  _Size = *(size_t *)((int)this + 0x10);
  if (_Size == 0x7fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00402940();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  uVar6 = _Size + 1 | 0xf;
  if (uVar6 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar3 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar3) {
        uVar6 = uVar3;
      }
    }
  }
  else {
    uVar6 = 0x7fffffff;
  }
  uVar3 = uVar6 + 1;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar3);
    }
  }
  else {
    uVar4 = uVar6 + 0x24;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_005adb0f(uVar4);
    if (iVar5 == 0) goto LAB_0047f1ee;
    _Dst = (void *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar5;
  }
  *(size_t *)((int)this + 0x10) = _Size + 1;
  *(uint *)((int)this + 0x14) = uVar6;
  puVar1 = (undefined1 *)((int)_Dst + _Size);
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,_Size);
    *puVar1 = in_stack_00000010;
    puVar1[1] = 0;
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  *puVar1 = in_stack_00000010;
  puVar1[1] = 0;
  pvVar7 = _Src;
  if ((uVar2 + 1 < 0x1000) ||
     (pvVar7 = *(void **)((int)_Src + -4), (uint)((int)_Src + (-4 - (int)pvVar7)) < 0x20)) {
    FUN_005adb3f(pvVar7);
    *(void **)this = _Dst;
    return this;
  }
LAB_0047f1ee:
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


void FUN_0047f230(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 *local_18;
  undefined4 *local_8;
  
  local_18 = DAT_0065b544;
  local_8 = DAT_0065b544;
  if (*(char *)((int)DAT_0065b544[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x10);
    puVar7 = (undefined4 *)DAT_0065b544[1];
    do {
      pbVar6 = (byte *)(puVar7 + 4);
      pbVar5 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar5 = *(byte **)param_2;
      }
      pbVar9 = pbVar6;
      if (0xf < (uint)puVar7[9]) {
        pbVar9 = *(byte **)pbVar6;
      }
      uVar3 = puVar7[8];
      if (*(uint *)(param_2 + 0x10) < (uint)puVar7[8]) {
        uVar3 = *(uint *)(param_2 + 0x10);
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar9 != *(int *)pbVar5) goto LAB_0047f2a6;
        pbVar9 = pbVar9 + 4;
        pbVar5 = pbVar5 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0047f2da:
        uVar3 = 0;
      }
      else {
LAB_0047f2a6:
        bVar10 = *pbVar9 < *pbVar5;
        if ((*pbVar9 == *pbVar5) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar10 = pbVar9[1] < pbVar5[1], pbVar9[1] == pbVar5[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar10 = pbVar9[2] < pbVar5[2], pbVar9[2] == pbVar5[2] &&
               ((uVar4 == 0xffffffff || (bVar10 = pbVar9[3] < pbVar5[3], pbVar9[3] == pbVar5[3])))))
              ))))))) goto LAB_0047f2da;
        uVar3 = -(uint)bVar10 | 1;
      }
      if (uVar3 == 0) {
        uVar3 = puVar7[8];
        if (uVar3 < uVar1) {
          puVar8 = (undefined4 *)puVar7[2];
        }
        else {
LAB_0047f302:
          if (*(char *)((int)local_8 + 0xd) != '\0') {
            if (0xf < (uint)puVar7[9]) {
              pbVar6 = *(byte **)pbVar6;
            }
            pbVar5 = param_2;
            if (0xf < *(uint *)(param_2 + 0x14)) {
              pbVar5 = *(byte **)param_2;
            }
            uVar4 = uVar1;
            if (uVar3 < uVar1) {
              uVar4 = uVar3;
            }
            while (uVar2 = uVar4 - 4, 3 < uVar4) {
              if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_0047f346;
              pbVar5 = pbVar5 + 4;
              pbVar6 = pbVar6 + 4;
              uVar4 = uVar2;
            }
            if (uVar2 == 0xfffffffc) {
LAB_0047f37a:
              uVar4 = 0;
            }
            else {
LAB_0047f346:
              bVar10 = *pbVar5 < *pbVar6;
              if ((*pbVar5 == *pbVar6) &&
                 ((uVar2 == 0xfffffffd ||
                  ((bVar10 = pbVar5[1] < pbVar6[1], pbVar5[1] == pbVar6[1] &&
                   ((uVar2 == 0xfffffffe ||
                    ((bVar10 = pbVar5[2] < pbVar6[2], pbVar5[2] == pbVar6[2] &&
                     ((uVar2 == 0xffffffff ||
                      (bVar10 = pbVar5[3] < pbVar6[3], pbVar5[3] == pbVar6[3]))))))))))))
              goto LAB_0047f37a;
              uVar4 = -(uint)bVar10 | 1;
            }
            if (uVar4 == 0) {
              if (*(uint *)(param_2 + 0x10) < uVar3) {
LAB_0047f38c:
                local_8 = puVar7;
              }
            }
            else if ((int)uVar4 < 0) goto LAB_0047f38c;
          }
          puVar8 = (undefined4 *)*puVar7;
          local_18 = puVar7;
        }
      }
      else {
        if (-1 < (int)uVar3) {
          uVar3 = puVar7[8];
          goto LAB_0047f302;
        }
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  puVar7 = DAT_0065b544 + 1;
  if (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar7 = local_8;
  }
  if (*(char *)((int)*puVar7 + 0xd) == '\0') {
    puVar7 = (undefined4 *)*puVar7;
    do {
      pbVar6 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar6 = (byte *)puVar7[4];
      }
      pbVar5 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar5 = *(byte **)param_2;
      }
      uVar1 = puVar7[8];
      uVar3 = *(uint *)(param_2 + 0x10);
      if (uVar1 < *(uint *)(param_2 + 0x10)) {
        uVar3 = uVar1;
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_0047f40d;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0047f441:
        uVar3 = 0;
      }
      else {
LAB_0047f40d:
        bVar10 = *pbVar5 < *pbVar6;
        if ((*pbVar5 == *pbVar6) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar10 = pbVar5[1] < pbVar6[1], pbVar5[1] == pbVar6[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar10 = pbVar5[2] < pbVar6[2], pbVar5[2] == pbVar6[2] &&
               ((uVar4 == 0xffffffff || (bVar10 = pbVar5[3] < pbVar6[3], pbVar5[3] == pbVar6[3])))))
              ))))))) goto LAB_0047f441;
        uVar3 = -(uint)bVar10 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= *(uint *)(param_2 + 0x10)) goto LAB_0047f44e;
LAB_0047f477:
        puVar8 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      else {
        if ((int)uVar3 < 0) goto LAB_0047f477;
LAB_0047f44e:
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *param_1 = local_18;
  param_1[1] = local_8;
  return;
}


undefined4 * __thiscall FUN_0047f480(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8a43;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  FUN_004024e0((void *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_8 = 1;
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x13])((int)this + 0x28,uVar1);
    *(undefined4 *)((int)this + 0x4c) = uVar2;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __thiscall FUN_0047f520(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8aef;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined1 *)((int)this + 0x18) = *(undefined1 *)(param_1 + 6);
  FUN_004024e0((void *)((int)this + 0x1c),param_1 + 7);
  local_8 = 0;
  FUN_004024e0((void *)((int)this + 0x34),param_1 + 0xd);
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x13);
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_8._0_1_ = 2;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x1f])((int)this + 0x58,uVar3);
    *(undefined4 *)((int)this + 0x7c) = uVar4;
  }
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0xac) = 0;
  local_8._0_1_ = 4;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x2b])((int)this + 0x88);
    *(undefined4 *)((int)this + 0xac) = uVar4;
  }
  local_8._0_1_ = 5;
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)((int)param_1 + 0xb1);
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  FUN_004024e0((void *)((int)this + 0xb8),param_1 + 0x2e);
  *(undefined4 *)((int)this + 0xf4) = 0;
  local_8._0_1_ = 7;
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x3d])((int)this + 0xd0);
    *(undefined4 *)((int)this + 0xf4) = uVar4;
  }
  *(undefined1 *)((int)this + 0xf8) = *(undefined1 *)(param_1 + 0x3e);
  *(undefined4 *)((int)this + 0x124) = 0;
  local_8._0_1_ = 9;
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x49])((int)this + 0x100);
    *(undefined4 *)((int)this + 0x124) = uVar4;
  }
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x154) = 0;
  local_8._0_1_ = 0xb;
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x55])((int)this + 0x130);
    *(undefined4 *)((int)this + 0x154) = uVar4;
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  FUN_00480280((void *)((int)this + 0x168),param_1 + 0x5a);
  *(undefined1 *)((int)this + 0x170) = *(undefined1 *)(param_1 + 0x5c);
  uVar4 = param_1[0x5e];
  uVar1 = param_1[0x5f];
  uVar2 = param_1[0x60];
  *(undefined4 *)((int)this + 0x174) = param_1[0x5d];
  *(undefined4 *)((int)this + 0x178) = uVar4;
  *(undefined4 *)((int)this + 0x17c) = uVar1;
  *(undefined4 *)((int)this + 0x180) = uVar2;
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0047f780(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_004025a0(param_1 + 6);
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


void FUN_0047f7e0(uint *param_1,uint *param_2)

{
  FUN_0047ffb0(param_1,param_2);
  return;
}


uint * FUN_0047f800(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_3 - (int)param_1;
    puVar5 = param_1 + 7;
    do {
      *param_3 = puVar5[-7];
      param_3[1] = puVar5[-6];
      param_3[6] = 0;
      *(undefined4 *)(iVar6 + (int)puVar5) = 0;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      param_3[2] = puVar5[-5];
      param_3[3] = uVar2;
      param_3[4] = uVar3;
      param_3[5] = uVar4;
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      param_3[8] = puVar5[1];
      param_3[9] = puVar5[2];
      param_3 = param_3 + 10;
      puVar1 = puVar5 + 3;
      puVar5 = puVar5 + 10;
    } while (puVar1 != param_2);
  }
  FUN_0047ffb0(param_3,param_3);
  return param_3;
}


int __fastcall FUN_0047f890(int *param_1)

{
  return (param_1[1] - *param_1) / 0x28;
}


void FUN_0047f8b0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_0047c010(param_1);
  }
  return;
}


undefined4 * FUN_0047f8e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b8b2b;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    puVar7 = param_1 + 0x13;
    do {
      *param_3 = puVar7[-0x13];
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar7 + -0x12);
      *(undefined1 *)((int)param_3 + 5) = *(undefined1 *)((int)puVar7 + -0x47);
      param_3[2] = puVar7[-0x11];
      param_3[3] = puVar7[-0x10];
      param_3[8] = 0;
      param_3[9] = 0;
      uVar6 = puVar7[-0xe];
      uVar3 = puVar7[-0xd];
      uVar4 = puVar7[-0xc];
      param_3[4] = puVar7[-0xf];
      param_3[5] = uVar6;
      param_3[6] = uVar3;
      param_3[7] = uVar4;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar7 + -0xb);
      puVar7[-0xb] = 0;
      puVar7[-10] = 0xf;
      *(undefined1 *)(puVar7 + -0xf) = 0;
      param_3[0x13] = 0;
      local_8 = 2;
      piVar2 = (int *)*puVar7;
      if (piVar2 != (int *)0x0) {
        if (piVar2 == puVar7 + -9) {
          uVar6 = (**(code **)(*piVar2 + 4))(param_3 + 10,uVar5);
          param_3[0x13] = uVar6;
          local_8 = 3;
          piVar2 = (int *)*puVar7;
          if (piVar2 == (int *)0x0) goto LAB_0047f9d3;
          (**(code **)(*piVar2 + 0x10))(piVar2 != puVar7 + -9);
        }
        else {
          param_3[0x13] = piVar2;
        }
        *puVar7 = 0;
      }
LAB_0047f9d3:
      param_3 = param_3 + 0x14;
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 0x14;
    } while (puVar1 != param_2);
  }
  ExceptionList = local_10;
  return param_3;
}


void __thiscall FUN_0047fa50(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(uint **)this != (uint *)0x0) {
    FUN_00480020(*(uint **)this,*(uint **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x24) * 0x24)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x24;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x24;
  return;
}


void FUN_0047fae0(uint *param_1,uint *param_2)

{
  FUN_00480020(param_1,param_2);
  return;
}


void FUN_0047fb00(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b8b61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      *param_3 = puVar2[-2];
      param_3[1] = puVar2[-1];
      local_8 = 1;
      FUN_004024e0(param_3 + 2,puVar2);
      *(undefined1 *)(param_3 + 8) = *(undefined1 *)(puVar2 + 6);
      param_3 = param_3 + 9;
      puVar1 = puVar2 + 7;
      puVar2 = puVar2 + 9;
    } while (puVar1 != param_2);
  }
  local_8 = 0;
  FUN_00480020(param_3,param_3);
  ExceptionList = local_10;
  return;
}


uint * FUN_0047fba0(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_3 - (int)param_1;
    puVar5 = param_1 + 7;
    do {
      *param_3 = puVar5[-7];
      param_3[1] = puVar5[-6];
      param_3[6] = 0;
      *(undefined4 *)(iVar6 + (int)puVar5) = 0;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      param_3[2] = puVar5[-5];
      param_3[3] = uVar2;
      param_3[4] = uVar3;
      param_3[5] = uVar4;
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      *(undefined1 *)(param_3 + 8) = *(undefined1 *)(puVar5 + 1);
      param_3 = param_3 + 9;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 9;
    } while (puVar1 != param_2);
  }
  FUN_00480020(param_3,param_3);
  return param_3;
}


void FUN_0047fc70(uint *param_1,uint *param_2)

{
  FUN_00480090(param_1,param_2);
  return;
}


void FUN_0047fc90(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x2c)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


undefined4 * FUN_0047fcd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3;
  if (param_1 != param_2) {
    puVar2 = param_1 + 1;
    do {
      *puVar3 = puVar2[-1];
      *(undefined4 *)((int)param_3 + (-0x18 - (int)param_1) + (int)(puVar2 + 6)) = *puVar2;
      puVar3[2] = puVar2[1];
      puVar3[3] = puVar2[2];
      puVar3[4] = puVar2[3];
      puVar3[5] = puVar2[4];
      puVar1 = puVar2 + 5;
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
  }
  return puVar3;
}


Rect * FUN_0047fd30(undefined4 *param_1,undefined4 *param_2,Rect *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b8b88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != param_2) {
    puVar5 = param_1 + 4;
    do {
      cocos2d::Rect::Rect(param_3,(Rect *)(puVar5 + -4));
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      puVar1 = puVar5 + 6;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_3 + 0x10) = *puVar5;
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      *(undefined4 *)(param_3 + 0x18) = uVar3;
      *(undefined4 *)(param_3 + 0x1c) = uVar4;
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(puVar5 + 4);
      param_3 = param_3 + 0x28;
      puVar5[4] = 0;
      puVar5[5] = 0xf;
      *(undefined1 *)puVar5 = 0;
      puVar5 = puVar5 + 10;
    } while (puVar1 != param_2);
  }
  ExceptionList = local_10;
  return param_3;
}


void * FUN_0047fde0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b8bb8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x62) {
    FUN_00481300(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x188);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


void FUN_0047fe60(uint *param_1,uint *param_2)

{
  FUN_00480190(param_1,param_2);
  return;
}


void FUN_0047fe80(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x20)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void FUN_0047fec0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  void *this;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_2;
  FUN_004803f0(&param_2,param_2);
  pbVar4 = param_2;
  pbVar7 = extraout_ECX;
  if (param_2 == DAT_0065b544) goto LAB_0047ff69;
  pbVar8 = param_2 + 0x10;
  if (0xf < *(uint *)(param_2 + 0x24)) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_0047ff26;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047ff5a:
    uVar5 = 0;
  }
  else {
LAB_0047ff26:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_0047ff5a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047ff9a:
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047ff9a;
LAB_0047ff69:
  param_2 = pbVar3;
  piVar6 = (int *)FUN_00480580(pbVar7,&param_2);
  FUN_004805e0(this,&param_2,pbVar4,(byte *)(piVar6 + 4),piVar6);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


void __fastcall FUN_0047ffb0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 7;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 10;
    } while (puVar1 != param_2);
  }
  return;
}
