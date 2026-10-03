#include "../ois_server.exe.h"


void FUN_005cbdb0(void)

{
  int local_8;
  
  FUN_00413450(&local_8,(int *)*DAT_0065b448,DAT_0065b448);
  FUN_005adb3f(DAT_0065b448);
  return;
}


void FUN_005cbde0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006556d4) {
    pvVar1 = DAT_006556c0;
    if ((0xfff < DAT_006556d4 + 1) &&
       (pvVar1 = *(void **)((int)DAT_006556c0 + -4),
       0x1f < (uint)((int)DAT_006556c0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cbe31. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_006556d0 = 0;
  DAT_006556d4 = 0xf;
  DAT_006556c0 = (void *)((uint)DAT_006556c0 & 0xffffff00);
  return;
}


void FUN_005cbe40(void)

{
  void *pvVar1;
  
  if (DAT_0065b4d0 != (void *)0x0) {
    pvVar1 = DAT_0065b4d0;
    if ((0xfff < (DAT_0065b4d8 - (int)DAT_0065b4d0 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)DAT_0065b4d0 + -4),
       0x1f < (uint)((int)DAT_0065b4d0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cbe97. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
    DAT_0065b4d0 = (void *)0x0;
    DAT_0065b4d4 = 0;
    DAT_0065b4d8 = 0;
  }
  return;
}


void FUN_005cbea0(void)

{
  FUN_004025a0(&DAT_0065b524);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cbeb0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_006556ec) {
    pvVar1 = DAT_006556d8;
    if ((0xfff < DAT_006556ec + 1) &&
       (pvVar1 = *(void **)((int)DAT_006556d8 + -4),
       0x1f < (uint)((int)DAT_006556d8 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cbf01. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_006556e8 = 0;
  DAT_006556ec = 0xf;
  DAT_006556d8 = (void *)((uint)DAT_006556d8 & 0xffffff00);
  return;
}


void FUN_005cbf10(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655704) {
    pvVar1 = DAT_006556f0;
    if ((0xfff < DAT_00655704 + 1) &&
       (pvVar1 = *(void **)((int)DAT_006556f0 + -4),
       0x1f < (uint)((int)DAT_006556f0 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cbf61. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  DAT_00655700 = 0;
  DAT_00655704 = 0xf;
  DAT_006556f0 = (void *)((uint)DAT_006556f0 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cbf70(void)

{
  void *pvVar1;
  
  if (0xf < DAT_0065571c) {
    pvVar1 = DAT_00655708;
    if ((0xfff < DAT_0065571c + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655708 + -4),
       0x1f < (uint)((int)DAT_00655708 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cbfc1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655718 = 0;
  DAT_0065571c = 0xf;
  DAT_00655708 = (void *)((uint)DAT_00655708 & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cbfd0(void)

{
  void *pvVar1;
  
  if (0xf < DAT_00655734) {
    pvVar1 = DAT_00655720;
    if ((0xfff < DAT_00655734 + 1) &&
       (pvVar1 = *(void **)((int)DAT_00655720 + -4),
       0x1f < (uint)((int)DAT_00655720 + (-4 - (int)pvVar1)))) {
                    // WARNING: Could not recover jumptable at 0x005cc021. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_005adb3f(pvVar1);
  }
  _DAT_00655730 = 0;
  DAT_00655734 = 0xf;
  DAT_00655720 = (void *)((uint)DAT_00655720 & 0xffffff00);
  return;
}
