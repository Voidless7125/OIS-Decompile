#include "../ois_server.exe.h"


void FUN_005cc030(void)

{
  undefined4 local_8;
  
  FUN_00419300(&DAT_0065b530,&local_8,(int *)*DAT_0065b530,DAT_0065b530);
  FUN_005adb3f(DAT_0065b530);
  return;
}


void FUN_005cc060(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_0065b544;
  puStack_c = &LAB_005b36e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0047d790((int *)DAT_0065b544[1]);
  DAT_0065b544[1] = (int)piVar1;
  *DAT_0065b544 = (int)piVar1;
  DAT_0065b544[2] = (int)piVar1;
  DAT_0065b548 = 0;
  FUN_005adb3f(DAT_0065b544);
  ExceptionList = local_10;
  return;
}


void FUN_005cc0e0(void)

{
  FUN_004025a0(&DAT_0065b538);
  return;
}


void FUN_005cc0f0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006557c4) {
    pvVar1 = DAT_006557b0;
    if ((0xfff < DAT_006557c4 + 1) &&
       (pvVar1 = *(void **)((int)DAT_006557b0 + -4),
       0x1f < (uint)((int)DAT_006557b0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc141. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_006557c0 = 0;
  DAT_006557c4 = 0xf;
  DAT_006557b0 = (void *)((uint)DAT_006557b0 & 0xffffff00);
  return;
}


void FUN_005cc1b0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006557ac) {
    pvVar1 = DAT_00655798;
    if ((0xfff < DAT_006557ac + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655798 + -4),
       0x1f < (uint)((int)DAT_00655798 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc201. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_006557a8 = 0;
  DAT_006557ac = 0xf;
  DAT_00655798 = (void *)((uint)DAT_00655798 & 0xffffff00);
  return;
}


void FUN_005cc210(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655794) {
    pvVar1 = DAT_00655780;
    if ((0xfff < DAT_00655794 + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655780 + -4),
       0x1f < (uint)((int)DAT_00655780 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc261. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_00655790 = 0;
  DAT_00655794 = 0xf;
  DAT_00655780 = (void *)((uint)DAT_00655780 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc270(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065b624) {
    pvVar1 = DAT_0065b610;
    if ((0xfff < DAT_0065b624 + 1) &&
       (pvVar1 = *(void **)((int)DAT_0065b610 + -4),
       0x1f < (uint)((int)DAT_0065b610 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc2c1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_0065b620 = 0;
  DAT_0065b624 = 0xf;
  DAT_0065b610 = (void *)((uint)DAT_0065b610 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc2d0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065574c) {
    pvVar1 = DAT_00655738;
    if ((0xfff < DAT_0065574c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655738 + -4),
       0x1f < (uint)((int)DAT_00655738 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc321. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655748 = 0;
  DAT_0065574c = 0xf;
  DAT_00655738 = (void *)((uint)DAT_00655738 & 0xffffff00);
  return;
}


void FUN_005cc330(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065577c) {
    pvVar1 = DAT_00655768;
    if ((0xfff < DAT_0065577c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655768 + -4),
       0x1f < (uint)((int)DAT_00655768 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc381. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_00655778 = 0;
  DAT_0065577c = 0xf;
  DAT_00655768 = (void *)((uint)DAT_00655768 & 0xffffff00);
  return;
}


void FUN_005cc390(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006557dc) {
    pvVar1 = DAT_006557c8;
    if ((0xfff < DAT_006557dc + 1) &&
       (pvVar1 = *(void **)((int)DAT_006557c8 + -4),
       0x1f < (uint)((int)DAT_006557c8 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc3e1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_006557d8 = 0;
  DAT_006557dc = 0xf;
  DAT_006557c8 = (void *)((uint)DAT_006557c8 & 0xffffff00);
  return;
}


void FUN_005cc3f0(void)

{
  void *pvVar1;
  
  if (DAT_0065b628 != (void *)0x0) {
    pvVar1 = DAT_0065b628;
    if ((0xfff < (DAT_0065b630 - (int)DAT_0065b628 & 0xfffffff8U)) &&
       (pvVar1 = *(void **)((int)DAT_0065b628 + -4),
       0x1f < (uint)((int)DAT_0065b628 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc447. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
    DAT_0065b628 = (void *)0x0;
    DAT_0065b62c = 0;
    DAT_0065b630 = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc450(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065580c) {
    pvVar1 = DAT_006557f8;
    if ((0xfff < DAT_0065580c + 1) &&
       (pvVar1 = *(void **)((int)DAT_006557f8 + -4),
       0x1f < (uint)((int)DAT_006557f8 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc4a1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655808 = 0;
  DAT_0065580c = 0xf;
  DAT_006557f8 = (void *)((uint)DAT_006557f8 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc4b0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655824) {
    pvVar1 = DAT_00655810;
    if ((0xfff < DAT_00655824 + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655810 + -4),
       0x1f < (uint)((int)DAT_00655810 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc501. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655820 = 0;
  DAT_00655824 = 0xf;
  DAT_00655810 = (void *)((uint)DAT_00655810 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc510(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006557f4) {
    pvVar1 = DAT_006557e0;
    if ((0xfff < DAT_006557f4 + 1) &&
       (pvVar1 = *(void **)((int)DAT_006557e0 + -4),
       0x1f < (uint)((int)DAT_006557e0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc561. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_006557f0 = 0;
  DAT_006557f4 = 0xf;
  DAT_006557e0 = (void *)((uint)DAT_006557e0 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc570(void)

{
  void *pvVar1;
  
  if (DAT_0065b7bc != (void *)0x0) {
    pvVar1 = DAT_0065b7bc;
    if ((0xfff < (DAT_0065b7c4 - (int)DAT_0065b7bc & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)DAT_0065b7bc + -4),
       0x1f < (uint)((int)DAT_0065b7bc + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc5c7. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
    DAT_0065b7bc = (void *)0x0;
    _DAT_0065b7c0 = 0;
    DAT_0065b7c4 = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc5d0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655854) {
    pvVar1 = DAT_00655840;
    if ((0xfff < DAT_00655854 + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655840 + -4),
       0x1f < (uint)((int)DAT_00655840 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc621. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655850 = 0;
  DAT_00655854 = 0xf;
  DAT_00655840 = (void *)((uint)DAT_00655840 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc630(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065583c) {
    pvVar1 = DAT_00655828;
    if ((0xfff < DAT_0065583c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655828 + -4),
       0x1f < (uint)((int)DAT_00655828 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc681. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655838 = 0;
  DAT_0065583c = 0xf;
  DAT_00655828 = (void *)((uint)DAT_00655828 & 0xffffff00);
  return;
}


void FUN_005cc690(void)

{
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc6a0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655884) {
    pvVar1 = DAT_00655870;
    if ((0xfff < DAT_00655884 + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655870 + -4),
       0x1f < (uint)((int)DAT_00655870 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc6f1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655880 = 0;
  DAT_00655884 = 0xf;
  DAT_00655870 = (void *)((uint)DAT_00655870 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc700(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006558b4) {
    pvVar1 = DAT_006558a0;
    if ((0xfff < DAT_006558b4 + 1) &&
       (pvVar1 = *(void **)((int)DAT_006558a0 + -4),
       0x1f < (uint)((int)DAT_006558a0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc751. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_006558b0 = 0;
  DAT_006558b4 = 0xf;
  DAT_006558a0 = (void *)((uint)DAT_006558a0 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc760(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065589c) {
    pvVar1 = DAT_00655888;
    if ((0xfff < DAT_0065589c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655888 + -4),
       0x1f < (uint)((int)DAT_00655888 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc7b1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655898 = 0;
  DAT_0065589c = 0xf;
  DAT_00655888 = (void *)((uint)DAT_00655888 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cc7c0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065586c) {
    pvVar1 = DAT_00655858;
    if ((0xfff < DAT_0065586c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655858 + -4),
       0x1f < (uint)((int)DAT_00655858 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc811. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655868 = 0;
  DAT_0065586c = 0xf;
  DAT_00655858 = (void *)((uint)DAT_00655858 & 0xffffff00);
  return;
}


void FUN_005cc820(void)

{
  return;
}


void FUN_005cc830(void)

{
  void *pvVar1;
  
  if (DAT_0065b97c != (void *)0x0) {
    pvVar1 = DAT_0065b97c;
    if ((0xfff < (DAT_0065b984 - (int)DAT_0065b97c & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)DAT_0065b97c + -4),
       0x1f < (uint)((int)DAT_0065b97c + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc887. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
    DAT_0065b97c = (void *)0x0;
    DAT_0065b980 = 0;
    DAT_0065b984 = 0;
  }
  return;
}


void FUN_005cc8a0(void)

{
  FileUtils *pFVar1;
  
  if (0xf < DAT_006558cc) {
    pFVar1 = this_006558b8;
    if ((0xfff < DAT_006558cc + 1) &&
       (pFVar1 = *(FileUtils **)(this_006558b8 + -4),
       (FileUtils *)0x1f < this_006558b8 + (-4 - (int)pFVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cc8f1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pFVar1);
  }
  DAT_006558c8 = 0;
  DAT_006558cc = 0xf;
  this_006558b8 = (FileUtils *)((uint)this_006558b8 & 0xffffff00);
  return;
}


void FUN_005cc900(void)

{
  return;
}


void FUN_005cc910(void)

{
  if (DAT_0065ba5c != 0) {
    free(DAT_0065ba54);
  }
  return;
}
