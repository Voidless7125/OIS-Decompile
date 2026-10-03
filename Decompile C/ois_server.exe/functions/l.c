#include "../ois_server.exe.h"


// WARNING: Type propagation algorithm not settling
// lpTopLevelExceptionFilter parameter of SetUnhandledExceptionFilter
// 

void lpTopLevelExceptionFilter_00594ff0(int param_1)

{
  undefined4 *puVar1;
  char *******pppppppcVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int iVar6;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_06;
  void *this_07;
  void *this_08;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this_09;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *pvVar7;
  void *this_10;
  bool bVar8;
  DWORD *pDVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  __time64_t local_78;
  undefined **local_6c;
  undefined4 *local_68;
  HANDLE local_64;
  DWORD local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  Layer *local_4c;
  char *******local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb28e;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (Layer *)0x0;
  local_78 = _time64((__time64_t *)0x0);
  _localtime64(&local_78);
  FUN_0058f040((int *)local_48);
  local_8 = 0;
  puVar1 = (undefined4 *)
           FUN_00591e00((undefined1 *)local_30,"crash_%04d-%02d-%02d_%02d-%02d-%02d.txt");
  local_8._0_1_ = 1;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_48,puVar5,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
    pvVar7 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar7 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  pppppppcVar2 = (char *******)local_48;
  if (0xf < local_34) {
    pppppppcVar2 = local_48[0];
  }
  _File_0065b400 = fopen((char *)pppppppcVar2,(char *)&_Mode_0060eae0);
  if (_File_0065b400 == (FILE *)0x0) {
    FUN_00591070("CRASH","Game crash. Unable to open separate log file at %s.");
  }
  else {
    FUN_00590ff0(this,_File_0065b400,"WINDOWS Version: %s\n");
  }
  pvVar3 = GetCurrentProcess();
  DVar4 = GetCurrentProcessId();
  local_6c = StackWalker::vftable;
  local_54 = 0x3f;
  local_5c = 0;
  local_64 = pvVar3;
  local_4c = (Layer *)FUN_005adb0f(0x44);
  local_68 = FUN_00593320(local_4c,&local_6c,local_64);
  local_58 = 0;
  local_50 = 1000;
  local_6c = OiSStackWalker::vftable;
  uVar11 = 0;
  uVar10 = 0;
  local_8._0_1_ = 2;
  pDVar9 = *(DWORD **)(param_1 + 4);
  local_60 = DVar4;
  pvVar3 = GetCurrentThread();
  FUN_005942f0(&local_6c,pvVar3,pDVar9,uVar10,uVar11);
  if (_File_0065b400 != (FILE *)0x0) {
    FUN_00591070("CRASH","Game crash. Logged to \'%s\'");
    FUN_00590ff0(this_00,_File_0065b400,"\n\nAdditional details:\n");
    FUN_00590ff0(this_01,_File_0065b400,"Scenario: %s\n");
    fflush(_File_0065b400);
    FUN_00590ff0(this_02,_File_0065b400,"Sector: %s\n");
    fflush(_File_0065b400);
    FUN_00590ff0(this_03,_File_0065b400,"Position: %.0f, %.0f\n");
    fflush(_File_0065b400);
    puVar5 = *(undefined4 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    FUN_00590ff0(puVar5,_File_0065b400,"Ship: %s / %s\n");
    fflush(_File_0065b400);
    FUN_00590ff0(this_04,_File_0065b400,"Boarded: %s\n");
    FUN_00591e00((undefined1 *)local_30,"%02d-%02d-%02d %d:%d");
    FUN_00590ff0(this_05,_File_0065b400,"Game Time: %s\n");
    if (0xf < local_1c) {
      pvVar7 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar7 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    fflush(_File_0065b400);
    pvVar7 = extraout_ECX;
    if (DAT_0065c25c == (Layer *)0x0) {
      local_4c = (Layer *)FUN_005adb0f(0x418);
      local_8._0_1_ = 3;
      DAT_0065c25c = FUN_0052b7a0(local_4c);
      local_8._0_1_ = 2;
      pvVar7 = extraout_ECX_00;
    }
    FUN_00590ff0(pvVar7,_File_0065b400,"Room: %d\n");
    pvVar7 = extraout_ECX_01;
    if (DAT_0065c25c == (Layer *)0x0) {
      local_4c = (Layer *)FUN_005adb0f(0x418);
      local_8._0_1_ = 5;
      DAT_0065c25c = FUN_0052b7a0(local_4c);
      local_8._0_1_ = 2;
      pvVar7 = extraout_ECX_02;
    }
    if ((*(int *)(DAT_0065c25c + 0x350) != 0) &&
       (*(int *)(*(int *)(DAT_0065c25c + 0x350) + 0xc) != 0)) {
      FUN_004023e0();
      pvVar7 = extraout_ECX_03;
    }
    FUN_00590ff0(pvVar7,_File_0065b400,"Active Console Tabname: %s\n");
    fflush(_File_0065b400);
    if (DAT_0065c25c == (Layer *)0x0) {
      local_4c = (Layer *)FUN_005adb0f(0x418);
      local_8._0_1_ = 7;
      DAT_0065c25c = FUN_0052b7a0(local_4c);
      local_8._0_1_ = 2;
    }
    if ((*(int *)(DAT_0065c25c + 0x350) != 0) &&
       (*(int *)(*(int *)(DAT_0065c25c + 0x350) + 0x10) != 0)) {
      FUN_004023e0();
      FUN_00590ff0(this_06,_File_0065b400,"Active Console: Custom/%s\n");
    }
    fflush(_File_0065b400);
    FUN_00590ff0(this_07,_File_0065b400,"Credits: %d\n");
    fflush(_File_0065b400);
    FUN_00412df0();
    FUN_00590ff0(this_08,_File_0065b400,"Flags: %d\n");
    fflush(_File_0065b400);
    puVar5 = FUN_004125d0();
    iVar6 = puVar5[0x23];
    pvVar7 = extraout_ECX_04;
    if (iVar6 != 0) {
      FUN_004125d0();
      FUN_004125d0();
      FUN_00591e00((undefined1 *)local_30,"%s - %s");
      pvVar7 = extraout_ECX_05;
    }
    FUN_00590ff0(pvVar7,_File_0065b400,"PComms Conversation: %s\n");
    if (iVar6 != 0) {
      if (0xf < local_1c) {
        pvVar7 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar7 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    }
    fflush(_File_0065b400);
    puVar5 = FUN_004125d0();
    if (puVar5[0x23] != 0) {
      FUN_004123f0();
      FUN_004125d0();
      FUN_00590ff0(this_09,_File_0065b400,"PComms Conversation Element & option: %d, %d\n");
    }
    fflush(_File_0065b400);
    iVar6 = FUN_004123f0();
    bVar8 = *(int *)(iVar6 + 0x20) != 0;
    pvVar7 = extraout_ECX_06;
    if (bVar8) {
      FUN_004123f0();
      FUN_004123f0();
      FUN_00591e00((undefined1 *)local_30,"%s - %s");
      pvVar7 = extraout_ECX_07;
    }
    FUN_00590ff0(pvVar7,_File_0065b400,"In Person Conversation: %s\n");
    if (bVar8) {
      if (0xf < local_1c) {
        pvVar7 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar7 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    }
    fflush(_File_0065b400);
    iVar6 = FUN_004123f0();
    if (*(int *)(iVar6 + 0x20) != 0) {
      FUN_004123f0();
      FUN_004123f0();
      FUN_00590ff0(this_10,_File_0065b400,"In Person Conversation Element & option: %d, %d\n");
    }
    fflush(_File_0065b400);
    fclose(_File_0065b400);
  }
  FUN_00593d00(&local_6c);
  if (0xf < local_34) {
    pppppppcVar2 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pppppppcVar2 = (char *******)local_48[0][-1],
       (char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)pppppppcVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppcVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// lpTopLevelExceptionFilter parameter of SetUnhandledExceptionFilter
// 

undefined4 lpTopLevelExceptionFilter_005aea80(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}


void __cdecl libm_sse2_cos_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x005af4a3. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_cos_precise();
  return;
}


void __cdecl libm_sse2_sin_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x005af4a9. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_sin_precise();
  return;
}
