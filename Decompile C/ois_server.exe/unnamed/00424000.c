#include "../ois_server.exe.h"


int * __thiscall FUN_004241c0(void *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  int iVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffffc0;
  int **local_18;
  int **local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b19d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppiVar1 = (int **)FUN_005adb0f(0x6c);
  ppiVar1[4] = (int *)0x0;
  ppiVar1[5] = (int *)&DAT_0000000f;
  *(undefined1 *)ppiVar1 = 0;
  ppiVar1[6] = (int *)0x0;
  ppiVar1[7] = (int *)0x0;
  ppiVar1[8] = (int *)0x0;
  ppiVar1[9] = (int *)0x0;
  ppiVar1[10] = (int *)0x0;
  ppiVar1[0xb] = (int *)0x0;
  ppiVar1[0xc] = (int *)0x0;
  ppiVar1[0xd] = (int *)0x0;
  ppiVar1[0xe] = (int *)0x0;
  ppiVar1[0xf] = (int *)0x0;
  ppiVar1[0x10] = (int *)0x0;
  ppiVar1[0x11] = (int *)0x0;
  ppiVar1[0x12] = (int *)0x0;
  ppiVar1[0x13] = (int *)0x0;
  ppiVar1[0x14] = (int *)0x0;
  ppiVar1[0x15] = (int *)0x0;
  ppiVar1[0x16] = (int *)0x0;
  ppiVar1[0x17] = (int *)0x0;
  ppiVar1[0x18] = (int *)0x0;
  ppiVar1[0x1a] = (int *)0x0;
  local_18 = ppiVar1;
  local_14 = ppiVar1;
  if (ppiVar1 != &param_1) {
    ppiVar2 = &param_1;
    if (0xf < in_stack_00000018) {
      ppiVar2 = (int **)param_1;
    }
    FUN_00402690(ppiVar1,ppiVar2,in_stack_00000014);
  }
  FUN_004024e0(&stack0xffffffc0,&param_1);
  piVar3 = (int *)FUN_004a7100(in_stack_ffffffc0);
  ppiVar1[6] = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_00423fb0((int *)ppiVar1);
    FUN_005adb3f(ppiVar1);
  }
  FUN_00591070("MULTI","Have begun syncing ship \'%s / %s\'");
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 1;
  local_14 = (int **)FUN_00421a40(local_14,5,2,ppiVar1[6] + 10);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 2;
  local_14 = (int **)FUN_00421a40(local_14,6,2,ppiVar1[6] + 0xc);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 3;
  local_14 = (int **)FUN_00421a40(local_14,7,0,ppiVar1[6] + 8);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 4;
  local_14 = (int **)FUN_00421a40(local_14,8,1,ppiVar1[6] + 0x12);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 5;
  local_14 = (int **)FUN_00421a40(local_14,9,1,ppiVar1[6] + 0x13);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 6;
  local_14 = (int **)FUN_00421a40(local_14,10,0,ppiVar1[6] + 0x14);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 7;
  local_14 = (int **)FUN_00421a40(local_14,0xb,1,ppiVar1[6] + 0x15);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 8;
  local_14 = (int **)FUN_00421a40(local_14,0xc,1,ppiVar1[6] + 0x15);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 9;
  local_14 = (int **)FUN_00421a40(local_14,0xd,1,ppiVar1[6] + 0x16);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 10;
  local_14 = (int **)FUN_00421a40(local_14,0xe,0,ppiVar1[6] + 0x18);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0xb;
  local_14 = (int **)FUN_00421a40(local_14,0xf,0,ppiVar1[6] + 0x35);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0xc;
  local_14 = (int **)FUN_00421a40(local_14,0x10,4,ppiVar1[6] + 0x36);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0xd;
  local_14 = (int **)FUN_00421a40(local_14,0x12,1,ppiVar1[6] + 0x37);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0xe;
  local_14 = (int **)FUN_00421a40(local_14,0x13,1,ppiVar1[6] + 0x38);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0xf;
  local_14 = (int **)FUN_00421a40(local_14,0x14,4,ppiVar1[6] + 0x39);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x10;
  local_14 = (int **)FUN_00421a40(local_14,0x15,0,ppiVar1[6] + 0x3a);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x11;
  local_14 = (int **)FUN_00421a40(local_14,0x16,0,ppiVar1[6] + 0x3b);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x12;
  local_14 = (int **)FUN_00421a40(local_14,0x17,0,ppiVar1[6] + 0x3c);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x13;
  local_14 = (int **)FUN_00421a40(local_14,0x18,1,ppiVar1[6] + 0x3d);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x14;
  local_14 = (int **)FUN_00421a40(local_14,0x19,0,ppiVar1[6] + 0x3e);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x15;
  local_14 = (int **)FUN_00421a40(local_14,0x1a,4,ppiVar1[6] + 0x41);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x16;
  local_14 = (int **)FUN_00421a40(local_14,0x1b,1,ppiVar1[6] + 0x42);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x17;
  local_14 = (int **)FUN_00421a40(local_14,0x1c,1,ppiVar1[6] + 0x43);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x18;
  local_14 = (int **)FUN_00421a40(local_14,0x1d,1,ppiVar1[6] + 0x46);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x19;
  local_14 = (int **)FUN_00421a40(local_14,0x1e,1,ppiVar1[6] + 0x47);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1a;
  local_14 = (int **)FUN_00421a40(local_14,0x1f,1,ppiVar1[6] + 0x48);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1b;
  local_14 = (int **)FUN_00421a40(local_14,0x20,1,ppiVar1[6] + 0x4a);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1c;
  local_14 = (int **)FUN_00421a40(local_14,0x21,1,ppiVar1[6] + 0x4b);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1d;
  local_14 = (int **)FUN_00421a40(local_14,0x22,1,ppiVar1[6] + 0x4c);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1e;
  local_14 = (int **)FUN_00421a40(local_14,0x23,2,ppiVar1[6] + 0x4e);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x1f;
  local_14 = (int **)FUN_00421a40(local_14,0x24,2,ppiVar1[6] + 0x50);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x20;
  local_14 = (int **)FUN_00421a40(local_14,0x25,1,ppiVar1[6] + 0x52);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x21;
  local_14 = (int **)FUN_00421a40(local_14,0x26,4,ppiVar1[6] + 0x5a);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x22;
  local_14 = (int **)FUN_00421a40(local_14,0x27,1,ppiVar1[6] + 0x6e);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x23;
  local_14 = (int **)FUN_00421a40(local_14,0x28,1,ppiVar1[6] + 0x6f);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x24;
  local_14 = (int **)FUN_00421a40(local_14,0x29,0,ppiVar1[6] + 100);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x25;
  local_14 = (int **)FUN_00421a40(local_14,0x2b,0,ppiVar1[6] + 0x66);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x26;
  local_14 = (int **)FUN_00421a40(local_14,0x2a,0,ppiVar1[6] + 0x6a);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x27;
  local_14 = (int **)FUN_00421a40(local_14,0x2c,0,ppiVar1[6] + 0x68);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x28;
  local_14 = (int **)FUN_00421a40(local_14,0x30,4,ppiVar1[6][0x10] + 0x34);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x29;
  local_14 = (int **)FUN_00421a40(local_14,0x31,0,ppiVar1[6] + 0x62);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2a;
  local_14 = (int **)FUN_00421a40(local_14,0x32,0,ppiVar1[6] + 99);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2b;
  local_14 = (int **)FUN_00421a40(local_14,0x33,4,ppiVar1[6] + 0x6c);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2c;
  local_14 = (int **)FUN_00421a40(local_14,0x34,4,(int)ppiVar1[6] + 0x1b1);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2d;
  local_14 = (int **)FUN_00421a40(local_14,0x35,0,ppiVar1[6] + 0x3f);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2e;
  local_14 = (int **)FUN_00421a40(local_14,0x36,4,(int)ppiVar1[6] + 0x1b2);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x2f;
  local_14 = (int **)FUN_00421a40(local_14,0x37,0,ppiVar1[6] + 0x6d);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x30;
  local_14 = (int **)FUN_00421a40(local_14,0x39,0,ppiVar1[6] + 0x74);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x31;
  local_14 = (int **)FUN_00421a40(local_14,0x3a,0,ppiVar1[6] + 0x76);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x32;
  local_14 = (int **)FUN_00421a40(local_14,0x3b,0,ppiVar1[6] + 0x77);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x33;
  local_14 = (int **)FUN_00421a40(local_14,0x3c,0,ppiVar1[6] + 0x78);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x34;
  local_14 = (int **)FUN_00421a40(local_14,0x3d,0,ppiVar1[6] + 0x79);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x35;
  local_14 = (int **)FUN_00421a40(local_14,0x3e,0,ppiVar1[6] + 0x7a);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x36;
  local_14 = (int **)FUN_00421a40(local_14,0x38,0,ppiVar1[6] + 0x19);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x37;
  local_14 = (int **)FUN_00421a40(local_14,0x3f,0,ppiVar1[6] + 0x7d);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x38;
  local_14 = (int **)FUN_00421a40(local_14,0x40,4,ppiVar1[6] + 0x57);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x39;
  local_14 = (int **)FUN_00421a40(local_14,0x41,1,ppiVar1[6] + 0x58);
  local_8._0_1_ = 0;
  piVar3 = ppiVar1[0xb];
  if (ppiVar1[0xc] == piVar3) {
    FUN_00414080(ppiVar1 + 10,piVar3,&local_14);
  }
  else {
    *piVar3 = (int)local_14;
    ppiVar1[0xb] = ppiVar1[0xb] + 1;
  }
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3a;
  local_14 = (int **)FUN_00421a40(local_14,0x45,1,ppiVar1[6] + 0x40);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3b;
  local_14 = (int **)FUN_00421a40(local_14,0x42,1,ppiVar1[6] + 0x59);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3c;
  local_14 = (int **)FUN_00421a40(local_14,0x43,0,ppiVar1[6] + 0x7b);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3d;
  local_14 = (int **)FUN_00421a40(local_14,0x44,0,ppiVar1[6] + 0x7c);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3e;
  local_14 = (int **)FUN_00421a40(local_14,0x47,4,ppiVar1[6] + 0xc6);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x3f;
  local_14 = (int **)FUN_00421a40(local_14,0x48,1,ppiVar1[6] + 199);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x40;
  local_14 = (int **)FUN_00421a40(local_14,0x49,0,ppiVar1[6] + 0x75);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x41;
  local_14 = (int **)FUN_00421a40(local_14,0x4a,0,DAT_0065b444 + 0x180);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x42;
  local_14 = (int **)FUN_00421a40(local_14,0x4b,0,DAT_0065b444 + 0x184);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x43;
  local_14 = (int **)FUN_00421a40(local_14,0x4c,0,DAT_0065b444 + 0x188);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x44;
  local_14 = (int **)FUN_00421a40(local_14,0x4d,0,DAT_0065b444 + 0x18c);
  local_8._0_1_ = 0;
  FUN_00412900(ppiVar1 + 10,&local_14);
  local_14 = (int **)FUN_005adb0f(0x40);
  local_8._0_1_ = 0x45;
  local_14 = (int **)FUN_00421a40(local_14,0x4e,0,DAT_0065b444 + 400);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00412900(ppiVar1 + 10,&local_14);
  FUN_00412900((void *)((int)this + 0x48),&local_18);
  ppiVar1 = local_18;
  uVar8 = 0;
  piVar3 = local_18[6];
  iVar4 = *(int *)(piVar3[0x10] + 0x3c);
  if (*(int *)(piVar3[0x10] + 0x40) - iVar4 >> 2 != 0) {
    do {
      FUN_00425c00((int)ppiVar1,*(undefined4 **)(iVar4 + uVar8 * 4));
      piVar3 = ppiVar1[6];
      uVar8 = uVar8 + 1;
      iVar4 = *(int *)(piVar3[0x10] + 0x3c);
    } while (uVar8 < (uint)(*(int *)(piVar3[0x10] + 0x40) - iVar4 >> 2));
  }
  uVar8 = 0;
  iVar4 = piVar3[0x85];
  if (piVar3[0x86] - iVar4 >> 2 != 0) {
    do {
      FUN_00426550((int)ppiVar1,*(undefined4 **)(iVar4 + uVar8 * 4));
      piVar3 = ppiVar1[6];
      uVar8 = uVar8 + 1;
      iVar4 = piVar3[0x85];
    } while (uVar8 < (uint)(piVar3[0x86] - iVar4 >> 2));
  }
  uVar8 = 0;
  iVar4 = FUN_0042b020((int *)(piVar3[0x95] + 0x118));
  this_00 = extraout_ECX;
  if (iVar4 != 0) {
    do {
      piVar3 = (int *)FUN_0042b000(this_00,uVar8);
      FUN_00425ee0((int)ppiVar1,*piVar3);
      uVar8 = uVar8 + 1;
      uVar5 = FUN_0042b020((int *)(ppiVar1[6][0x95] + 0x118));
      this_00 = extraout_ECX_00;
    } while (uVar8 < uVar5);
  }
  FUN_00425b50((int)ppiVar1);
  FUN_00425bc0((int)ppiVar1);
  iVar7 = 0;
  iVar4 = 0x3c;
  do {
    if (*(int *)(ppiVar1[6][0x10] + 0x20) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar4 + *(int *)(ppiVar1[6][0x10] + 0x20));
    }
    FUN_004263a0((int)ppiVar1,iVar7,iVar6);
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar4 < 0x5c);
  FUN_00401b20((int *)&param_1);
  ExceptionList = local_10;
  return (int *)ppiVar1;
}


void __thiscall FUN_00425750(void *this,byte *param_1)

{
  int *piVar1;
  byte **ppbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  byte **ppbVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b19f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar8 = 0;
  iVar4 = *(int *)((int)this + 0x3c);
  ppbVar7 = (byte **)param_1;
  if (*(int *)((int)this + 0x40) - iVar4 >> 2 != 0) {
    do {
      piVar1 = (int *)(iVar4 + uVar8 * 4);
      piVar6 = (int *)*piVar1;
      pbVar5 = (byte *)(piVar6 + 0x12);
      ppbVar2 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar2 = ppbVar7;
      }
      if (0xf < (uint)piVar6[0x17]) {
        pbVar5 = *(byte **)pbVar5;
      }
      uVar3 = FUN_004031f0(pbVar5,piVar6[0x16],(byte *)ppbVar2,in_stack_00000014);
      if ((char)uVar3 != '\0') {
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
          piVar6 = (int *)*piVar1;
        }
        FUN_0041cdf0(*piVar6,piVar6[1],piVar6[2],piVar6[3],in_stack_0000001c,in_stack_00000020);
        ppbVar7 = (byte **)param_1;
      }
      uVar8 = uVar8 + 1;
      iVar4 = *(int *)((int)this + 0x3c);
    } while (uVar8 < (uint)(*(int *)((int)this + 0x40) - iVar4 >> 2));
  }
  if (0xf < in_stack_00000018) {
    ppbVar2 = ppbVar7;
    if ((0xfff < in_stack_00000018 + 1) &&
       (ppbVar2 = (byte **)ppbVar7[-1], (byte *)0x1f < (byte *)((int)ppbVar7 + (-4 - (int)ppbVar2)))
       ) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppbVar2);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00425870(void *this,int param_1,byte *param_2)

{
  byte **ppbVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1a28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = *(int *)((int)this + 0x48);
  local_14 = 0;
  if (*(int *)((int)this + 0x4c) - iVar4 >> 2 != 0) {
    do {
      pbVar6 = *(byte **)(local_14 * 4 + iVar4);
      ppbVar1 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar1 = (byte **)param_2;
      }
      pbVar5 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar5 = *(byte **)pbVar6;
      }
      uVar2 = FUN_004031f0(pbVar5,*(uint *)(pbVar6 + 0x10),(byte *)ppbVar1,in_stack_00000018);
      if ((char)uVar2 != '\0') {
        uVar7 = 0;
        piVar3 = *(int **)(pbVar6 + 0x40);
        uVar2 = *(int *)(pbVar6 + 0x44) - (int)piVar3 >> 2;
        if (uVar2 != 0) {
          do {
            if (*(int *)(*piVar3 + 4) == param_1) {
              if (DAT_0065b3d3 != '\0') {
                FUN_00591070("NETWORK","Stopped sync\'ing weapon \'%s\' for ship %s");
              }
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(local_14 * 4 + *(int *)((int)this + 0x48)) + 0x40) +
                        uVar7 * 4) + 4) = 0;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar3 = piVar3 + 1;
          } while (uVar7 < uVar2);
        }
      }
      local_14 = local_14 + 1;
      iVar4 = *(int *)((int)this + 0x48);
    } while (local_14 < (uint)(*(int *)((int)this + 0x4c) - iVar4 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pbVar6 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar6 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004259d0(void *this,int param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  int iVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1a28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar7 = *(int *)((int)this + 0x48);
  local_14 = 0;
  ppbVar6 = (byte **)param_2;
  if (*(int *)((int)this + 0x4c) - iVar7 >> 2 != 0) {
    do {
      pbVar1 = *(byte **)(iVar7 + local_14 * 4);
      ppbVar5 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar5 = ppbVar6;
      }
      pbVar4 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar4 = *(byte **)pbVar1;
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),(byte *)ppbVar5,in_stack_00000018);
      if (((char)uVar3 != '\0') &&
         (uVar3 = 0, ppbVar6 = (byte **)param_2,
         *(int *)(pbVar1 + 0x20) - *(int *)(pbVar1 + 0x1c) >> 2 != 0)) {
        do {
          if (**(int **)(*(int *)(*(int *)(iVar7 + local_14 * 4) + 0x1c) + uVar3 * 4) == param_1) {
            if (DAT_0065b3d3 != '\0') {
              FUN_00591070("NETWORK","Stopped sync\'ing module \'%s\' for ship %s");
              iVar7 = *(int *)((int)this + 0x48);
            }
            **(undefined4 **)(*(int *)(*(int *)(iVar7 + local_14 * 4) + 0x1c) + uVar3 * 4) = 0;
          }
          uVar3 = uVar3 + 1;
          iVar7 = *(int *)((int)this + 0x48);
          iVar2 = *(int *)(iVar7 + local_14 * 4);
          ppbVar6 = (byte **)param_2;
        } while (uVar3 < (uint)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2));
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((int)this + 0x4c) - iVar7 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    ppbVar5 = ppbVar6;
    if ((0xfff < in_stack_0000001c + 1) &&
       (ppbVar5 = (byte **)ppbVar6[-1], (byte *)0x1f < (byte *)((int)ppbVar6 + (-4 - (int)ppbVar5)))
       ) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppbVar5);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00425b50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 **)(param_1 + 0x68) = puVar1;
  puVar1[3] = *(undefined4 *)(param_1 + 0x18);
  FUN_00421c80(*(uint **)(param_1 + 0x68));
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Starting syncing cargo for ship %s");
  }
  return;
}


void FUN_00425bc0(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_0065b3d3 != '\0';
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
  if (bVar1) {
    FUN_00591070("NETWORK","Starting syncing waypoints for ship %s");
  }
  return;
}


void FUN_00425c00(int param_1,undefined4 *param_2)

{
  int *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *_Dst;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  
  _Dst = (int *)FUN_005adb0f(0x70);
  memset(_Dst,0,0x70);
  puVar2 = param_2;
  this = _Dst + 3;
  _Dst[7] = 0;
  _Dst[8] = 0xf;
  *(undefined1 *)this = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0;
  *_Dst = (int)param_2;
  _Dst[1] = *(int *)(param_2[2] + 4);
  _Dst[2] = param_2[4];
  iVar5 = param_2[2];
  piVar3 = (int *)(iVar5 + 0x50);
  local_8 = _Dst;
  if (this != piVar3) {
    if (0xf < *(uint *)(iVar5 + 100)) {
      piVar3 = (int *)*piVar3;
    }
    FUN_00402690(this,piVar3,*(uint *)(iVar5 + 0x60));
  }
  _Dst[9] = puVar2[0x17];
  *(undefined1 *)(_Dst + 10) = *(undefined1 *)(puVar2 + 0x18);
  *(undefined1 *)((int)_Dst + 0x29) = *(undefined1 *)((int)puVar2 + 0x61);
  *(undefined1 *)((int)_Dst + 0x2a) = *(undefined1 *)((int)puVar2 + 0x62);
  *(undefined1 *)((int)_Dst + 0x2b) = *(undefined1 *)((int)puVar2 + 99);
  _Dst[0xc] = puVar2[0xd];
  _Dst[0xb] = puVar2[0x19];
  _Dst[0xe] = puVar2[0x1a];
  *(undefined1 *)(_Dst + 0x10) = *(undefined1 *)(puVar2 + 7);
  *(undefined1 *)((int)_Dst + 0x41) = *(undefined1 *)((int)puVar2 + 0x1d);
  _Dst[0xd] = puVar2[0xe];
  *(undefined1 *)((int)_Dst + 0x46) = *(undefined1 *)(puVar2 + 5);
  *(undefined1 *)((int)_Dst + 0x42) = *(undefined1 *)((int)puVar2 + 0x1e);
  *(undefined1 *)((int)_Dst + 0x43) = *(undefined1 *)((int)puVar2 + 0x1f);
  *(undefined1 *)(_Dst + 0x11) = *(undefined1 *)(puVar2 + 8);
  *(undefined1 *)((int)_Dst + 0x45) = *(undefined1 *)((int)puVar2 + 0x21);
  _Dst[0x12] = puVar2[9];
  _Dst[0x13] = puVar2[10];
  *(undefined1 *)(_Dst + 0x14) = *(undefined1 *)(puVar2 + 0xb);
  _Dst[0x15] = puVar2[0xc];
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (*(undefined4 **)(param_1 + 0x24) == puVar1) {
    FUN_00414080((void *)(param_1 + 0x1c),puVar1,&local_8);
    _Dst = local_8;
  }
  else {
    *puVar1 = _Dst;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Syncing module: %s");
  }
  iVar5 = 0;
  do {
    iVar4 = puVar2[3];
    if (*(int *)(iVar4 + 4 + iVar5 * 4) != 0) {
      param_2 = (undefined4 *)FUN_005adb0f(0x18);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *param_2 = *(undefined4 *)(puVar2[2] + 4);
      param_2[2] = iVar5;
      param_2[3] = **(undefined4 **)(*(int *)(puVar2[3] + 4 + iVar5 * 4) + 4);
      param_2[4] = (int)**(float **)(puVar2[3] + 4 + iVar5 * 4);
      param_2[5] = *(undefined4 *)(puVar2[3] + 4 + iVar5 * 4);
      puVar1 = (undefined4 *)_Dst[0x17];
      if ((undefined4 *)_Dst[0x18] == puVar1) {
        FUN_00414080(_Dst + 0x16,puVar1,&param_2);
      }
      else {
        *puVar1 = param_2;
        _Dst[0x17] = _Dst[0x17] + 4;
      }
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Syncing slot %d of module with %s");
      }
      iVar4 = puVar2[3];
    }
    if (*(int *)(iVar4 + 0x54 + iVar5 * 4) != 0) {
      param_2 = (undefined4 *)FUN_005adb0f(0x18);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *param_2 = *(undefined4 *)(puVar2[2] + 4);
      param_2[2] = iVar5;
      param_2[3] = **(undefined4 **)(*(int *)(puVar2[3] + 0x54 + iVar5 * 4) + 4);
      param_2[4] = (int)**(float **)(puVar2[3] + 0x54 + iVar5 * 4);
      param_2[5] = *(undefined4 *)(puVar2[3] + 0x54 + iVar5 * 4);
      puVar1 = (undefined4 *)_Dst[0x1a];
      if ((undefined4 *)_Dst[0x1b] == puVar1) {
        FUN_00414080(_Dst + 0x19,puVar1,&param_2);
      }
      else {
        *puVar1 = param_2;
        _Dst[0x1a] = _Dst[0x1a] + 4;
      }
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Syncing addon slot %d of module with %s");
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x14);
  return;
}


void FUN_00425ee0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *local_c [2];
  
  piVar2 = (int *)FUN_005adb0f(0xc);
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[2] = *(int *)(param_1 + 0x18);
  *piVar2 = param_2;
  local_c[0] = piVar2;
  piVar3 = FUN_00420f40((void *)(*(int *)(param_1 + 0x18) + 0x14c),&param_2);
  piVar2[1] = *piVar3;
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (*(undefined4 **)(param_1 + 0x54) == puVar1) {
    FUN_00414080((void *)(param_1 + 0x4c),puVar1,local_c);
  }
  else {
    *puVar1 = piVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Syncing hull state \'%d\', starting at \'%d\'");
  }
  return;
}


void __fastcall FUN_00425f80(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  uint uVar11;
  void **ppvVar12;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
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
  puStack_18 = &LAB_005b1a69;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_58 = 0;
  puVar4 = &stack0xfffffffc;
  if (param_1 + 0x15 != param_1) {
    puVar6 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar6 = (undefined4 *)*param_1;
    }
    FUN_00402690(param_1 + 0x15,puVar6,param_1[4]);
    puVar4 = puStack_20;
  }
  puStack_20 = puVar4;
  iVar8 = DAT_0065b5cc;
  param_1[0x1b] = (int)(param_1[0x10] - param_1[0xf]) >> 2;
  param_1[0x1c] = param_1[10];
  piVar10 = (int *)(*(int *)(iVar8 + 0xcc) + 0x78);
  local_60 = (undefined4 *)0x0;
  uVar11 = 0;
  if (*(int *)(*(int *)(iVar8 + 0xcc) + 0x7c) - *piVar10 >> 2 != 0) {
    do {
      puVar6 = local_60;
      if (*(int *)(*(int *)(*piVar10 + (int)local_60 * 4) + 0xe8) == 0) {
        local_64 = (undefined4 *)FUN_005adb0f(0x68);
        memset(local_64,0,0x68);
        iVar8 = DAT_0065b5cc;
        local_5c = local_64 + 6;
        local_68 = local_64;
        local_64[5] = 0xf;
        local_64[10] = 0;
        local_64[0xb] = 0xf;
        *(undefined1 *)local_5c = 0;
        local_64[0x10] = 0;
        local_64[0x11] = 0xf;
        *(undefined1 *)(local_64 + 0xc) = 0;
        local_64[0x16] = 0;
        local_64[0x17] = 0xf;
        *(undefined1 *)(local_64 + 0x12) = 0;
        iVar1 = *(int *)(*(int *)(*(int *)(iVar8 + 0xcc) + 0x78) + (int)puVar6 * 4);
        puVar5 = (undefined4 *)(iVar1 + 4);
        if (local_64 != puVar5) {
          if (0xf < *(uint *)(iVar1 + 0x18)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          FUN_00402690(local_64,puVar5,*(uint *)(iVar1 + 0x14));
          iVar8 = DAT_0065b5cc;
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar8 + 0xcc) + 0x78) + (int)puVar6 * 4);
        puVar5 = (undefined4 *)(iVar1 + 0x1c);
        if (local_5c != puVar5) {
          if (0xf < *(uint *)(iVar1 + 0x30)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          FUN_00402690(local_5c,puVar5,*(uint *)(iVar1 + 0x2c));
          iVar8 = DAT_0065b5cc;
        }
        local_64[0x19] =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(iVar8 + 0xcc) + 0x78) + (int)puVar6 * 4) + 0xd4);
        puVar6 = (undefined4 *)param_1[0x1f];
        if ((undefined4 *)param_1[0x20] == puVar6) {
          FUN_00414080(param_1 + 0x1e,puVar6,&local_68);
          iVar8 = DAT_0065b5cc;
        }
        else {
          *puVar6 = local_64;
          param_1[0x1f] = param_1[0x1f] + 4;
        }
      }
      local_60 = (undefined4 *)((int)local_60 + 1);
      piVar10 = (int *)(*(int *)(iVar8 + 0xcc) + 0x78);
      uVar11 = local_58;
    } while (local_60 < (undefined4 *)(*(int *)(*(int *)(iVar8 + 0xcc) + 0x7c) - *piVar10 >> 2));
  }
  local_5c = (undefined4 *)0x0;
  if ((int)(param_1[0x10] - param_1[0xf]) >> 2 != 0) {
    do {
      local_60 = (undefined4 *)FUN_005adb0f(0x34);
      memset(local_60,0,0x34);
      local_68 = local_60;
      local_60[5] = 0xf;
      local_60[10] = 0;
      local_60[0xb] = 0xf;
      *(undefined1 *)(local_60 + 6) = 0;
      iVar8 = param_1[0xf];
      iVar1 = *(int *)(iVar8 + (int)local_5c * 4);
      puVar6 = (undefined4 *)(iVar1 + 0x28);
      if (local_60 != puVar6) {
        if (0xf < *(uint *)(iVar1 + 0x3c)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        FUN_00402690(local_60,puVar6,*(uint *)(iVar1 + 0x38));
        iVar8 = param_1[0xf];
      }
      *(undefined1 *)(local_60 + 0xc) = *(undefined1 *)(*(int *)(iVar8 + (int)local_5c * 4) + 0x42);
      *(undefined1 *)((int)local_60 + 0x31) =
           *(undefined1 *)(*(int *)(param_1[0xf] + (int)local_5c * 4) + 0x41);
      iVar8 = *(int *)(*(int *)(param_1[0xf] + (int)local_5c * 4) + 100);
      if (iVar8 == 0) {
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        FUN_00402690(local_3c,&PTR_005ce008,0);
        ppvVar7 = local_3c;
        local_58 = uVar11 | 2;
      }
      else {
        ppvVar7 = (void **)FUN_004024e0(local_54,(undefined4 *)(iVar8 + 0x238));
        local_14 = 0;
        local_58 = uVar11 | 1;
      }
      puVar6 = local_60;
      ppvVar12 = (void **)(local_60 + 6);
      if (ppvVar12 != ppvVar7) {
        FUN_00401b20((int *)ppvVar12);
        pvVar9 = ppvVar7[1];
        pvVar2 = ppvVar7[2];
        pvVar3 = ppvVar7[3];
        *ppvVar12 = *ppvVar7;
        puVar6[7] = pvVar9;
        puVar6[8] = pvVar2;
        puVar6[9] = pvVar3;
        pvVar9 = ppvVar7[5];
        puVar6[10] = ppvVar7[4];
        puVar6[0xb] = pvVar9;
        ppvVar7[4] = (void *)0x0;
        ppvVar7[5] = (void *)0xf;
        *(undefined1 *)ppvVar7 = 0;
      }
      if (((local_58 & 2) != 0) && (local_58 = local_58 & 0xfffffffd, 0xf < local_28)) {
        pvVar9 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar9 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9)))) goto LAB_00426353;
        FUN_005adb3f(pvVar9);
      }
      local_14 = 0xffffffff;
      if ((local_58 & 1) != 0) {
        local_58 = local_58 & 0xfffffffe;
        if (0xf < local_40) {
          pvVar9 = local_54[0];
          if ((0xfff < local_40 + 1) &&
             (pvVar9 = *(void **)((int)local_54[0] + -4),
             0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9)))) {
LAB_00426353:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        local_44 = 0;
        local_40 = 0xf;
        local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      }
      puVar6 = (undefined4 *)param_1[0x22];
      if ((undefined4 *)param_1[0x23] == puVar6) {
        FUN_00414080(param_1 + 0x21,puVar6,&local_68);
      }
      else {
        *puVar6 = local_60;
        param_1[0x22] = param_1[0x22] + 4;
      }
      local_5c = (undefined4 *)((int)local_5c + 1);
      uVar11 = local_58;
    } while (local_5c < (uint)((int)(param_1[0x10] - param_1[0xf]) >> 2));
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Syncing server state");
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_004263a0(int param_1,undefined4 param_2,int param_3)

{
  undefined **this;
  undefined4 *puVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  int iVar3;
  undefined **this_00;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 *local_8;
  
  _Dst = (undefined4 *)FUN_005adb0f(0x7c);
  local_8 = _Dst;
  memset(_Dst,0,0x7c);
  this = (undefined **)(_Dst + 3);
  puVar1 = _Dst + 0xb;
  _Dst[7] = 0;
  this_00 = (undefined **)(_Dst + 0x11);
  _Dst[8] = 0xf;
  *(undefined1 *)this = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0xf;
  *(undefined1 *)this_00 = 0;
  _Dst[1] = param_3;
  _Dst[2] = param_2;
  *_Dst = *(undefined4 *)(param_1 + 0x18);
  if (param_3 == 0) {
    ppuVar4 = &PTR_005ce008;
    uVar5 = 0;
    this_00 = this;
    local_8 = _Dst;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x254);
    ppuVar4 = (undefined **)(iVar3 + 0x60);
    local_8 = _Dst;
    if (this != ppuVar4) {
      if (0xf < *(uint *)(iVar3 + 0x74)) {
        ppuVar4 = (undefined **)*ppuVar4;
      }
      FUN_00402690(this,ppuVar4,*(uint *)(iVar3 + 0x70));
    }
    _Dst[9] = *(undefined4 *)(_Dst[1] + 0x390);
    _Dst[10] = *(undefined4 *)(_Dst[1] + 0x394);
    iVar3 = _Dst[1];
    _Dst[0x1b] = *(undefined4 *)(iVar3 + 0x41c);
    puVar2 = (undefined4 *)(iVar3 + 0x400);
    if (puVar1 != puVar2) {
      if (0xf < *(uint *)(iVar3 + 0x414)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_00402690(puVar1,puVar2,*(uint *)(iVar3 + 0x410));
      iVar3 = _Dst[1];
    }
    _Dst[0x18] = *(undefined4 *)(iVar3 + 0x3b8);
    *(undefined1 *)(_Dst + 0x19) = *(undefined1 *)(_Dst[1] + 0x3bc);
    _Dst[0x1a] = *(undefined4 *)(_Dst[1] + 0x3c0);
    _Dst[0x17] = *(undefined4 *)(_Dst[1] + 0x3d0);
    *(undefined1 *)(_Dst + 0x1c) = *(undefined1 *)(_Dst[1] + 0x3c4);
    *(undefined1 *)((int)_Dst + 0x71) = *(undefined1 *)(_Dst[1] + 0x3c5);
    *(undefined1 *)((int)_Dst + 0x72) = *(undefined1 *)(_Dst[1] + 0x3fc);
    _Dst[0x1d] = *(undefined4 *)(_Dst[1] + 0x418);
    _Dst[0x1e] = *(undefined4 *)(_Dst[1] + 0x420);
    iVar3 = _Dst[1];
    ppuVar4 = (undefined **)(iVar3 + 0x3a0);
    if (this_00 == ppuVar4) goto LAB_0042651b;
    if (0xf < *(uint *)(iVar3 + 0x3b4)) {
      ppuVar4 = (undefined **)*ppuVar4;
    }
    uVar5 = *(uint *)(iVar3 + 0x3b0);
  }
  FUN_00402690(this_00,ppuVar4,uVar5);
LAB_0042651b:
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (*(undefined4 **)(param_1 + 0x48) != puVar1) {
    *puVar1 = _Dst;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
    return;
  }
  FUN_00414080((void *)(param_1 + 0x40),puVar1,&local_8);
  return;
}


void FUN_00426550(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar3 = param_2;
  local_8 = (undefined4 *)FUN_005adb0f(0x148);
  memset(local_8,0,0x148);
  puVar4 = local_8;
  local_8[0x17] = 0;
  local_c = local_8 + 0x13;
  local_8[0x18] = 0xf;
  local_10 = local_8 + 0x19;
  *(undefined1 *)local_c = 0;
  puVar6 = local_8 + 0x46;
  local_8[0x1d] = 0;
  puVar9 = local_8 + 0x4c;
  local_8[0x1e] = 0xf;
  *(undefined1 *)local_10 = 0;
  local_8[0x23] = 0;
  local_8[0x24] = 0xf;
  *(undefined1 *)(local_8 + 0x1f) = 0;
  local_8[0x29] = 0;
  local_8[0x2a] = 0xf;
  *(undefined1 *)(local_8 + 0x25) = 0;
  local_8[0x2f] = 0;
  local_8[0x30] = 0xf;
  *(undefined1 *)(local_8 + 0x2b) = 0;
  local_8[0x35] = 0;
  local_8[0x36] = 0xf;
  *(undefined1 *)(local_8 + 0x31) = 0;
  local_14 = local_8 + 0x1f;
  local_18 = local_8 + 0x25;
  local_8[0x43] = 0;
  local_8[0x44] = 0;
  local_8[0x45] = 0;
  local_1c = local_8 + 0x2b;
  *puVar6 = 0;
  local_8[0x47] = 0;
  local_8[0x48] = 0;
  local_8[0x49] = 0;
  local_8[0x4a] = 0;
  local_8[0x4b] = 0;
  local_20 = local_8 + 0x31;
  local_8[0x3b] = 0;
  local_8[0x3c] = 0;
  *puVar9 = 0;
  local_8[0x4d] = 0;
  local_8[0x4e] = 0;
  local_24 = local_8 + 0x43;
  local_8[1] = *param_2;
  *local_8 = param_2;
  local_8[2] = param_2[0x49];
  local_8[0x50] = param_2[0x4b];
  *(undefined8 *)(local_8 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(local_8 + 6) = *(undefined8 *)(param_2 + 6);
  local_8[0xe] = param_2[0xc];
  local_8[0xf] = param_2[0xd];
  local_8[0x10] = param_2[0xe];
  local_2c = local_8;
  local_8[0x11] = param_2[0xf];
  local_8[0x12] = param_2[0x10];
  puVar8 = param_2 + 0x12;
  *(undefined8 *)(local_8 + 0xc) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(local_8 + 10) = *(undefined8 *)(param_2 + 10);
  local_28 = puVar9;
  if (local_c != puVar8) {
    if (0xf < (uint)param_2[0x17]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_c,puVar8,param_2[0x16]);
  }
  puVar8 = param_2 + 0x18;
  if (local_10 != puVar8) {
    if (0xf < (uint)param_2[0x1d]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_10,puVar8,param_2[0x1c]);
  }
  puVar8 = param_2 + 0x1e;
  if (local_14 != puVar8) {
    if (0xf < (uint)param_2[0x23]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_14,puVar8,param_2[0x22]);
  }
  puVar8 = param_2 + 0x24;
  if (local_18 != puVar8) {
    if (0xf < (uint)param_2[0x29]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_18,puVar8,param_2[0x28]);
  }
  puVar8 = param_2 + 0x2a;
  if (local_1c != puVar8) {
    if (0xf < (uint)param_2[0x2f]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_1c,puVar8,param_2[0x2e]);
  }
  puVar8 = param_2 + 0x30;
  if (local_20 != puVar8) {
    if (0xf < (uint)param_2[0x35]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(local_20,puVar8,param_2[0x34]);
  }
  puVar8 = local_24;
  local_8[0x37] = param_2[0x38];
  local_8[0x3b] = param_2[0x41];
  local_8[0x3c] = param_2[0x42];
  *(undefined1 *)(local_8 + 0x3d) = *(undefined1 *)(param_2 + 0x43);
  *(undefined1 *)((int)local_8 + 0xf5) = *(undefined1 *)((int)param_2 + 0x10f);
  *(undefined1 *)((int)local_8 + 0xf6) = *(undefined1 *)((int)param_2 + 0x10e);
  *(undefined1 *)((int)local_8 + 0xf7) = *(undefined1 *)((int)param_2 + 0x10d);
  *(undefined1 *)((int)local_8 + 0xf9) = *(undefined1 *)((int)param_2 + 0x111);
  *(undefined1 *)(local_8 + 0x3e) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)((int)local_8 + 0xfa) = *(undefined1 *)((int)param_2 + 0x112);
  local_8[0x3f] = param_2[0x47];
  local_8[0x4f] = param_2[0x4a];
  local_8[0x50] = param_2[0x4b];
  local_8[0x41] = param_2[0x37];
  local_8[0x39] = param_2[0x3a];
  local_8[0x38] = param_2[0x39];
  local_8[0x3a] = param_2[0x45];
  *(undefined1 *)((int)local_8 + 0xfb) = *(undefined1 *)((int)param_2 + 0x45);
  *(undefined1 *)(local_8 + 0x42) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)((int)local_8 + 0x109) = *(undefined1 *)((int)param_2 + 0x121);
  *(undefined1 *)((int)local_8 + 0x10a) = *(undefined1 *)((int)param_2 + 0x122);
  piVar1 = param_2 + 0x3c;
  iVar7 = param_2[0x3b];
  param_2 = (undefined4 *)0x0;
  if (*piVar1 - iVar7 >> 3 != 0) {
    do {
      local_24 = (undefined4 *)((int)param_2 * 8);
      puVar9 = (undefined4 *)puVar8[1];
      puVar5 = (undefined4 *)((int)local_24 + iVar7 + 4);
      if ((undefined4 *)puVar8[2] == puVar9) {
        FUN_00414080(puVar8,puVar9,puVar5);
      }
      else {
        uVar2 = *puVar5;
        puVar8[1] = puVar8[1] + 4;
        *puVar9 = uVar2;
      }
      puVar9 = (undefined4 *)puVar4[0x47];
      if ((undefined4 *)puVar4[0x48] == puVar9) {
        FUN_004141e0(puVar6,puVar9,(undefined4 *)(puVar3[0x3b] + (int)local_24));
      }
      else {
        *puVar9 = *(undefined4 *)(puVar3[0x3b] + (int)local_24);
        puVar4[0x47] = puVar4[0x47] + 4;
      }
      iVar7 = puVar3[0x3b];
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar9 = local_28;
    } while (param_2 < (undefined4 *)(puVar3[0x3c] - iVar7 >> 3));
  }
  uVar10 = 0;
  iVar7 = puVar3[0x3e];
  if (puVar3[0x3f] - iVar7 >> 3 != 0) {
    do {
      puVar6 = (undefined4 *)(uVar10 * 8 + iVar7 + 4);
      puVar8 = (undefined4 *)local_8[0x4a];
      if ((undefined4 *)local_8[0x4b] == puVar8) {
        FUN_00414080(local_8 + 0x49,puVar8,puVar6);
      }
      else {
        uVar2 = *puVar6;
        local_8[0x4a] = local_8[0x4a] + 4;
        *puVar8 = uVar2;
      }
      puVar6 = (undefined4 *)(puVar3[0x3e] + uVar10 * 8);
      puVar8 = (undefined4 *)puVar9[1];
      if ((undefined4 *)puVar9[2] == puVar8) {
        FUN_004141e0(puVar9,puVar8,puVar6);
      }
      else {
        *puVar8 = *puVar6;
        puVar9[1] = puVar9[1] + 4;
      }
      uVar10 = uVar10 + 1;
      iVar7 = puVar3[0x3e];
    } while (uVar10 < (uint)(puVar3[0x3f] - iVar7 >> 3));
  }
  puVar8 = *(undefined4 **)(param_1 + 0x38);
  if (*(undefined4 **)(param_1 + 0x3c) == puVar8) {
    FUN_00414080((void *)(param_1 + 0x34),puVar8,&local_2c);
  }
  else {
    *puVar8 = local_8;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
  }
  if (DAT_0065b3d3 != '\0') {
    FUN_00591070("NETWORK","Syncing sensor data: %d");
  }
  return;
}


void __fastcall FUN_00426a50(void *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *_Dst;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  char *pcVar7;
  uint uVar8;
  undefined4 extraout_ECX_02;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  float fVar13;
  float in_XMM1_Da;
  void *pvVar14;
  uint in_stack_ffffff4c;
  void *in_stack_ffffff50;
  char *pcVar15;
  uint local_6c;
  void *local_64;
  undefined1 local_5d;
  void *local_5c;
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  short local_40;
  short local_3e;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b [3];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1afe;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = param_1;
  if (*(int *)((int)param_1 + 0x24) != -1) {
    DAT_0065c424 = (uint *)(**(code **)(**(int **)((int)param_1 + 0x90) + 0x5c))();
    uVar2 = extraout_ECX;
    while (DAT_0065c424 != (uint *)0x0) {
      pvVar14 = (void *)CONCAT31((int3)((uint)uVar2 >> 8),DAT_0065b3d3);
      DAT_0065c420 = (uint)*(byte *)DAT_0065c424[0xc];
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","PACKET INCOMING: ID %d");
        pvVar14 = (void *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_0065b3d3);
      }
      cVar6 = (char)pvVar14;
      switch(DAT_0065c420) {
      case 0x13:
        if (cVar6 != '\0') {
          uVar8 = (uint)DAT_0065c30c;
          DAT_0065c30c = DAT_0065c30c + 1;
          FUN_0059d520(DAT_0065c424 + 6,(undefined4 *)(&DAT_00660428 + (uVar8 & 7) * 0x40));
          uVar8 = (uint)DAT_0065c30d;
          DAT_0065c30d = DAT_0065c30d + 1;
          FUN_0059d0f0(DAT_0065c424,'\x01',&DAT_00660628 + (uVar8 & 7) * 0x1c);
          FUN_00591070("NETWORK","ID_NEW_INCOMING_CONNECTION from %s with GUID %s\n");
          pvVar14 = extraout_ECX_01;
        }
        FUN_00421a10(pvVar14,"Remote internal IDs:\n");
        iVar3 = 0;
        do {
          uVar8 = *DAT_0065c424;
          (**(code **)(**(int **)((int)local_5c + 0x90) + 0xbc))();
          if (local_3e == DAT_006556ae) {
            if ((local_40 == 2) && (local_3c == DAT_006556b0)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            if (!bVar12) goto LAB_00426bdd;
            bVar12 = true;
          }
          else {
LAB_00426bdd:
            bVar12 = false;
          }
          if (!bVar12) {
            uVar10 = (uint)DAT_0065c30d;
            DAT_0065c30d = DAT_0065c30d + 1;
            FUN_0059d0f0(&local_40,'\x01',&DAT_00660628 + (uVar10 & 7) * 0x1c);
            FUN_00421a10(this,"%i. %s\n");
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 10);
        uVar10 = (uint)DAT_0065c30d;
        DAT_0065c30d = DAT_0065c30d + 1;
        iVar3 = (uVar10 & 7) * 0x1c;
        pcVar15 = &DAT_00660628 + iVar3;
        FUN_0059d0f0(DAT_0065c424,'\x01',pcVar15);
        piVar9 = (int *)(uVar8 & 0xffffff00);
        pcVar7 = pcVar15;
        do {
          cVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar6 != '\0');
        FUN_00402690(&stack0xffffff68,pcVar15,(int)pcVar7 - (int)(&DAT_00660629 + iVar3));
        param_1 = local_5c;
        FUN_0042a620(local_5c,DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],piVar9
                    );
        local_3c = DAT_0065c424[6];
        uStack_38 = DAT_0065c424[7];
        uStack_34 = DAT_0065c424[8];
        uStack_30 = DAT_0065c424[9];
        uVar8 = (uint)DAT_0065c30c;
        DAT_0065c30c = DAT_0065c30c + 1;
        local_28 = local_3c;
        uStack_24 = uStack_38;
        uStack_20 = uStack_34;
        uStack_1c = uStack_30;
        FUN_0059d520(&local_28,(undefined4 *)(&DAT_00660428 + (uVar8 & 7) * 0x40));
        FUN_00591070("MULTI","Sending scenario identifier to client %s");
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_2c = 0x8b;
        FUN_004024e0(&stack0xffffff68,*(undefined4 **)(DAT_0065b5cc + 0xcc));
        FUN_00591630((int)local_2b,0x14,(char *)piVar9);
        FUN_00402de0();
        puVar4 = FUN_00402de0();
        piVar9 = *(int **)(puVar4 + 0x90);
        FUN_0041ab70(&stack0xffffff50,&local_3c);
        in_stack_ffffff4c = 0;
        pvVar14 = (void *)0x1;
        (**(code **)(*piVar9 + 0x50))(&local_2c,0x15);
        uVar8 = 0;
        local_28 = DAT_0065c424[6];
        uStack_24 = DAT_0065c424[7];
        uStack_20 = DAT_0065c424[8];
        uStack_1c = DAT_0065c424[9];
        piVar9 = *(int **)((int)param_1 + 0x3c);
        uVar10 = *(int *)((int)param_1 + 0x40) - (int)piVar9 >> 2;
        if (uVar10 != 0) {
          do {
            if ((*(uint *)*piVar9 == local_28) && (((uint *)*piVar9)[1] == uStack_24)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            param_1 = local_5c;
            if (bVar12) {
              local_64 = *(void **)(*(int *)((int)local_5c + 0x3c) + uVar8 * 4);
              goto LAB_00426dcb;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < uVar10);
        }
        local_64 = (void *)0x0;
LAB_00426dcb:
        _Dst = (undefined4 *)FUN_005adb0f(0x3c);
        memset(_Dst,0,0x3c);
        iVar3 = DAT_0065b5cc;
        bVar12 = DAT_0065b3d3 != '\0';
        *_Dst = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x388);
        _Dst[3] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x394);
        _Dst[6] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3a0);
        _Dst[9] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3ac);
        _Dst[0xc] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3b8);
        _Dst[1] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x38c);
        _Dst[4] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x398);
        _Dst[7] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3a4);
        _Dst[10] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3b0);
        _Dst[0xd] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3bc);
        _Dst[2] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x390);
        _Dst[5] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x39c);
        _Dst[8] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3a8);
        _Dst[0xb] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3b4);
        _Dst[0xe] = *(undefined4 *)(*(int *)(iVar3 + 0xcc) + 0x3c0);
        *(undefined4 **)((int)local_64 + 0x68) = _Dst;
        if (bVar12) {
          uVar8 = (uint)DAT_0065c30c;
          DAT_0065c30c = DAT_0065c30c + 1;
          FUN_0059d520(local_64,(undefined4 *)(&DAT_00660428 + (uVar8 & 7) * 0x40));
          FUN_00591070("NETWORK","Syncing scenario state with %s");
        }
        FUN_004024e0(&stack0xffffff44,(undefined4 *)((int)param_1 + 0x54));
        local_8 = 0;
        FUN_0042af40(&stack0xffffff68,(int *)((int)param_1 + 0x78));
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042af40(&stack0xffffff74,(int *)((int)param_1 + 0x84));
        local_8 = 2;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8 = 0xffffffff;
        FUN_0041cf30(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],pvVar14);
        FUN_004024e0(&stack0xffffff44,(undefined4 *)((int)param_1 + 0x54));
        local_8 = 3;
        FUN_0042af40(&stack0xffffff68,(int *)((int)param_1 + 0x78));
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0042af40(&stack0xffffff74,(int *)((int)param_1 + 0x84));
        local_8 = 5;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8 = 0xffffffff;
        FUN_0041d0d0(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],pvVar14);
        break;
      default:
        uVar8 = (uint)DAT_0065c30d;
        DAT_0065c30d = DAT_0065c30d + 1;
        FUN_0059d0f0(DAT_0065c424,'\x01',&DAT_00660628 + (uVar8 & 7) * 0x1c);
        FUN_00591070("ERROR","Unknown packet from %s");
        break;
      case 0x15:
        uVar8 = (uint)DAT_0065c30d;
        DAT_0065c30d = DAT_0065c30d + 1;
        FUN_0059d0f0(DAT_0065c424,'\x01',&DAT_00660628 + (uVar8 & 7) * 0x1c);
        FUN_00591070("MULTI","Disconnect notification from client %s");
        uVar8 = 0;
        local_28 = DAT_0065c424[6];
        uStack_24 = DAT_0065c424[7];
        uStack_20 = DAT_0065c424[8];
        uStack_1c = DAT_0065c424[9];
        piVar9 = *(int **)((int)param_1 + 0x3c);
        uVar10 = *(int *)((int)param_1 + 0x40) - (int)piVar9 >> 2;
        if (uVar10 != 0) {
          do {
            if ((*(uint *)*piVar9 == local_28) && (((uint *)*piVar9)[1] == uStack_24)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            param_1 = local_5c;
            if (bVar12) {
              iVar3 = *(int *)(*(int *)((int)local_5c + 0x3c) + uVar8 * 4);
              goto LAB_004270cb;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < uVar10);
        }
        iVar3 = 0;
LAB_004270cb:
        local_48 = 0;
        local_44 = 0xf;
        local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
        local_8 = 6;
        if (iVar3 == 0) {
          uVar8 = 9;
          pcVar15 = "[unknown]";
LAB_00427114:
          FUN_00402690(local_58,pcVar15,uVar8);
        }
        else {
          pcVar15 = (char *)(iVar3 + 0x28);
          if (local_58 != (void **)pcVar15) {
            if (0xf < *(uint *)(iVar3 + 0x3c)) {
              pcVar15 = *(char **)pcVar15;
            }
            uVar8 = *(uint *)(iVar3 + 0x38);
            goto LAB_00427114;
          }
        }
        FUN_0042a840(param_1,DAT_0065c424[6],DAT_0065c424[7]);
        FUN_00591e00(&stack0xffffff68,"`$\'`!%s`$\' has left");
        local_8._0_1_ = 7;
        in_stack_ffffff50 = (void *)((uint)in_stack_ffffff50 & 0xffffff00);
        FUN_00402690(&stack0xffffff50,"system",6);
        local_8._0_1_ = 8;
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        in_stack_ffffff4c = 0x42719f;
        FUN_0041dc50(in_stack_ffffff50);
        local_8 = 0xffffffff;
        if (0xf < local_44) {
          pvVar14 = local_58[0];
          if ((0xfff < local_44 + 1) &&
             (pvVar14 = *(void **)((int)local_58[0] + -4),
             0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar14);
        }
        local_48 = 0;
        local_44 = 0xf;
        local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
        break;
      case 0x86:
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041ed30(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],
                     DAT_0065c424[0xc]);
        break;
      case 0x87:
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041f0f0((void *)DAT_0065c424[6],(byte *)DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9]
                     ,DAT_0065c424[0xc]);
        break;
      case 0x88:
        break;
      case 0x8a:
        FUN_00591070("MULTI","Client going live.");
        break;
      case 0x90:
        if (cVar6 != '\0') {
          FUN_00591070("NETWORK","ID_RUN_COMMAND");
        }
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_004202d0(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],
                     DAT_0065c424[0xc]);
        break;
      case 0xa3:
        if (cVar6 != '\0') {
          uVar8 = (uint)DAT_0065c30c;
          DAT_0065c30c = DAT_0065c30c + 1;
          FUN_0059d520(DAT_0065c424 + 6,(undefined4 *)(&DAT_00660428 + (uVar8 & 7) * 0x40));
          FUN_00591070("NETWORK","Message received from client %s");
        }
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041f8f0(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],
                     DAT_0065c424[0xc]);
        break;
      case 0xa4:
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041ee70(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],
                     DAT_0065c424[0xc]);
        break;
      case 0xa6:
        FUN_00591070("MULTI","ID_SET_GO_LIVE received");
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041ef40(DAT_0065c424[6],DAT_0065c424[7],DAT_0065c424[8],DAT_0065c424[9],
                     DAT_0065c424[0xc]);
      }
      (**(code **)(**(int **)((int)param_1 + 0x90) + 0x60))();
      DAT_0065c424 = (uint *)(**(code **)(**(int **)((int)param_1 + 0x90) + 0x5c))();
      uVar2 = extraout_ECX_02;
    }
    fVar13 = in_XMM1_Da + *(float *)((int)param_1 + 0x20);
    *(float *)((int)param_1 + 0x20) = fVar13;
    if (0.083333336 <= fVar13) {
      *(float *)((int)param_1 + 0x20) = fVar13 - 0.083333336;
      FUN_00427850(param_1,'\0');
    }
  }
  (**(code **)(**(int **)((int)param_1 + 0x90) + 0x60))();
  if (*(int *)((int)param_1 + 0x1c) == 1) {
    piVar9 = *(int **)((int)param_1 + 0x3c);
    uVar8 = *(int *)((int)param_1 + 0x40) - (int)piVar9 >> 2;
    if (uVar8 == 0) {
LAB_004276d7:
      if (DAT_0065c2d8 == '\0') goto LAB_0042776b;
      *(undefined4 *)((int)param_1 + 0x18) = 0xbf800000;
      DAT_0065c2d8 = '\0';
      FUN_00402690(&stack0xffffff64,"Game launch cancelled.",0x16);
      local_8 = 0xb;
      pvVar14 = (void *)(in_stack_ffffff4c & 0xffffff00);
      FUN_00402690(&stack0xffffff4c,"system",6);
      local_8 = CONCAT31(local_8._1_3_,0xc);
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        do {
          if (*(char *)(*piVar9 + 0x41) == '\0') goto LAB_004276d7;
          uVar10 = uVar10 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar10 < uVar8);
      }
      DAT_0065c2d8 = '\x01';
      if (*(float *)((int)param_1 + 0x18) != -1.0) {
        fVar13 = *(float *)((int)param_1 + 0x18) - in_XMM1_Da;
        *(float *)((int)param_1 + 0x18) = fVar13;
        if (fVar13 <= 0.0) {
          *(undefined4 *)((int)param_1 + 0x18) = 0xbf800000;
          FUN_00591070("MULTI","ALL CLIENTS READY and timer complete - running simulation.");
          FUN_004085b0();
          iVar3 = DAT_0065b444;
          *(undefined4 *)((int)param_1 + 0x1c) = 3;
          local_6c = 0;
          *(undefined1 *)(iVar3 + 0x62) = 1;
          iVar3 = *(int *)((int)param_1 + 0x3c);
          if (*(int *)((int)param_1 + 0x40) - iVar3 >> 2 != 0) {
            do {
              if (DAT_0065b3d3 != '\0') {
                FUN_00591070("NETWORK","Setting %s live...");
                iVar3 = *(int *)((int)param_1 + 0x3c);
              }
              puVar1 = *(uint **)(iVar3 + local_6c * 4);
              local_3c = *puVar1;
              uStack_38 = puVar1[1];
              uStack_34 = puVar1[2];
              uStack_30 = puVar1[3];
              local_28 = local_3c;
              uStack_24 = uStack_38;
              uStack_20 = uStack_34;
              uStack_1c = uStack_30;
              puVar4 = FUN_00402de0();
              puVar5 = FUN_00402de0();
              pvVar14 = local_5c;
              uVar8 = 0;
              piVar9 = *(int **)(puVar5 + 0x3c);
              uVar10 = *(int *)(puVar5 + 0x40) - (int)piVar9 >> 2;
              piVar11 = piVar9;
              if (uVar10 != 0) {
                do {
                  if ((*(uint *)*piVar11 == local_28) && (((uint *)*piVar11)[1] == uStack_24)) {
                    bVar12 = true;
                  }
                  else {
                    bVar12 = false;
                  }
                  param_1 = local_5c;
                  if (bVar12) {
                    iVar3 = piVar9[uVar8];
                    if (iVar3 != 0) {
                      if (DAT_0065c2c8 == 0) {
                        DAT_0065c2c8 = FUN_005adb0f(1);
                      }
                      local_5d = 0x8d;
                      FUN_00402de0();
                      puVar5 = FUN_00402de0();
                      piVar9 = *(int **)(puVar5 + 0x90);
                      FUN_0041ab70(&stack0xffffff4c,&local_3c);
                      (**(code **)(*piVar9 + 0x50))(&local_5d,1,1);
                      *(undefined1 *)(iVar3 + 0x40) = 1;
                      FUN_00423c40(puVar4);
                      FUN_00427850(puVar4,'\x01');
                      goto LAB_00427634;
                    }
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  piVar11 = piVar11 + 1;
                } while (uVar8 < uVar10);
              }
              pvVar14 = param_1;
              if (DAT_0065b3d3 != '\0') {
                FUN_00591070("NETWORK","Unknown client set live.");
              }
LAB_00427634:
              iVar3 = *(int *)((int)pvVar14 + 0x3c);
              local_6c = local_6c + 1;
              param_1 = pvVar14;
            } while (local_6c < (uint)(*(int *)((int)pvVar14 + 0x40) - iVar3 >> 2));
          }
        }
        goto LAB_0042776b;
      }
      *(undefined4 *)((int)param_1 + 0x18) = 0x41000000;
      FUN_00402690(&stack0xffffff64,"Game launching in 8 seconds...",0x1e);
      local_8 = 9;
      pvVar14 = (void *)(in_stack_ffffff4c & 0xffffff00);
      FUN_00402690(&stack0xffffff4c,"system",6);
      local_8 = CONCAT31(local_8._1_3_,10);
    }
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    local_8 = 0xffffffff;
    FUN_0041dc50(pvVar14);
  }
LAB_0042776b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00427850(void *this,char param_1)

{
  byte *this_00;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  void *pvVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  void *pvVar22;
  int *piVar23;
  int iVar24;
  size_t sVar25;
  bool bVar26;
  void *in_stack_fffffd1c;
  void *in_stack_fffffd3c;
  char *in_stack_fffffd40;
  int local_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  undefined1 local_28c;
  undefined4 local_28b;
  int local_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  uint *local_274;
  uint *local_270;
  uint *local_26c;
  void *local_268;
  int *local_264;
  int *local_260;
  undefined4 *local_25c;
  uint *local_258;
  uint *local_254;
  uint *local_250;
  int local_24c;
  undefined1 *local_248;
  uint *local_244;
  int *local_240;
  void *local_23c;
  int local_238;
  char local_231;
  undefined4 *local_230;
  void *local_22c;
  int *local_228;
  byte *local_224;
  uint *local_220;
  uint *local_21c;
  uint *local_218;
  uint *local_214;
  uint *local_210;
  char local_209;
  uint *local_208;
  bool local_202;
  bool local_201;
  undefined1 local_200;
  undefined4 auStack_1ff [20];
  undefined4 auStack_1af [19];
  undefined1 local_160;
  undefined4 local_15f [40];
  undefined1 local_bc;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined1 local_af [10];
  undefined1 local_a5 [30];
  undefined1 local_87 [10];
  undefined4 local_7d;
  undefined4 local_79;
  undefined1 local_75;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005b1ba4;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_23c = this;
  if (*(int *)((int)this + 0x24) == -1) goto LAB_0042a29c;
  iVar9 = *(int *)((int)this + 0x3c);
  local_22c = (void *)0x0;
  if (*(int *)((int)this + 0x40) - iVar9 >> 2 != 0) {
    do {
      iVar24 = DAT_0065b5cc;
      local_220 = (uint *)((int)local_22c * 4);
      iVar9 = *(int *)(*(int *)((int)local_220 + iVar9) + 0x68);
      if (iVar9 != 0) {
        piVar23 = (int *)(iVar9 + 0x18);
        iVar9 = -iVar9;
        bVar26 = false;
        local_210 = (uint *)(iVar9 + 0x370);
        local_248 = (undefined1 *)(iVar9 + 0x37c);
        local_244 = (uint *)(iVar9 + 0x388);
        local_224 = (byte *)(iVar9 + 0x394);
        local_21c = (uint *)(iVar9 + 0x3a0);
        iVar9 = 3;
        do {
          iVar6 = *(int *)((byte *)(*(int *)(iVar24 + 0xcc) + (int)local_210) + (int)piVar23);
          if (piVar23[-6] != iVar6) {
            piVar23[-6] = iVar6;
            bVar26 = true;
          }
          iVar6 = *(int *)(*(int *)(iVar24 + 0xcc) + (int)local_248 + (int)piVar23);
          if (piVar23[-3] != iVar6) {
            piVar23[-3] = iVar6;
            bVar26 = true;
          }
          iVar6 = *(int *)((byte *)(*(int *)(iVar24 + 0xcc) + (int)local_244) + (int)piVar23);
          if (*piVar23 != iVar6) {
            *piVar23 = iVar6;
            bVar26 = true;
          }
          iVar6 = *(int *)(*(int *)(iVar24 + 0xcc) + (int)local_224 + (int)piVar23);
          if (piVar23[3] != iVar6) {
            piVar23[3] = iVar6;
            bVar26 = true;
          }
          iVar6 = *(int *)(*(int *)(iVar24 + 0xcc) + (int)local_21c + (int)piVar23);
          if (piVar23[6] != iVar6) {
            piVar23[6] = iVar6;
            bVar26 = true;
          }
          piVar23 = piVar23 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        this = local_23c;
        if ((bVar26) || (param_1 != '\0')) {
          piVar23 = (int *)(*(int *)((int)local_23c + 0x3c) + (int)local_220);
          if (DAT_0065c2c8 == 0) {
            DAT_0065c2c8 = FUN_005adb0f(1);
          }
          local_60 = 0x8c;
          local_5f = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x388);
          local_53 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x394);
          local_47 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3a0);
          local_3b = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3ac);
          local_2f = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3b8);
          local_5b = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x38c);
          local_4f = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x398);
          local_43 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3a4);
          local_37 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3b0);
          local_2b = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3bc);
          local_57 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x390);
          local_4b = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x39c);
          local_3f = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3a8);
          local_33 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3b4);
          local_27 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3c0);
          piVar23 = (int *)*piVar23;
          local_29c = *piVar23;
          iStack_298 = piVar23[1];
          iStack_294 = piVar23[2];
          iStack_290 = piVar23[3];
          FUN_00402de0();
          puVar10 = FUN_00402de0();
          piVar23 = *(int **)(puVar10 + 0x90);
          FUN_0041ab70(&stack0xfffffd28,&local_29c);
          in_stack_fffffd1c = (void *)0x1;
          (**(code **)(*piVar23 + 0x50))(&local_60,0x3d);
        }
      }
      local_22c = (void *)((int)local_22c + 1);
      iVar9 = *(int *)((int)this + 0x3c);
    } while (local_22c < (void *)(*(int *)((int)this + 0x40) - iVar9 >> 2));
  }
  iVar9 = *(int *)((int)this + 0x48);
  local_248 = (undefined1 *)0x0;
  if (*(int *)((int)this + 0x4c) - iVar9 >> 2 != 0) {
    do {
      iVar24 = (int)local_248 * 4;
      local_218 = (uint *)0x0;
      local_238 = iVar24;
      if (*(int *)(*(int *)(iVar9 + iVar24) + 0x2c) - *(int *)(*(int *)(iVar9 + iVar24) + 0x28) >> 2
          != 0) {
        do {
          iVar9 = *(int *)(*(int *)(*(int *)(iVar24 + iVar9) + 0x28) + (int)local_218 * 4);
          switch(*(undefined4 *)(iVar9 + 4)) {
          case 0:
            iVar6 = **(int **)(iVar9 + 8);
            iVar7 = *(int *)(iVar9 + 0x10);
            *(int *)(iVar9 + 0x10) = iVar6;
            cVar8 = iVar7 != iVar6;
            break;
          case 1:
            cVar8 = *(float *)(iVar9 + 0xc) != **(float **)(iVar9 + 8);
            *(float *)(iVar9 + 0xc) = **(float **)(iVar9 + 8);
            local_202 = (bool)cVar8;
            break;
          case 2:
            cVar8 = *(double *)(iVar9 + 0x18) != **(double **)(iVar9 + 8);
            *(double *)(iVar9 + 0x18) = **(double **)(iVar9 + 8);
            local_202 = (bool)cVar8;
            break;
          case 3:
            local_210 = *(uint **)(iVar9 + 8);
            local_244 = (uint *)(iVar9 + 0x24);
            uVar15 = FUN_00413e90((byte *)local_244,*(byte **)(iVar9 + 8));
            local_202 = SUB41(uVar15,0);
            cVar8 = local_202;
            if (local_244 != local_210) {
              puVar12 = local_210;
              if (0xf < local_210[5]) {
                puVar12 = (uint *)*local_210;
              }
              FUN_00402690(local_244,puVar12,local_210[4]);
              cVar8 = local_202;
            }
            break;
          case 4:
            cVar8 = **(char **)(iVar9 + 8);
            cVar5 = *(char *)(iVar9 + 0x20);
            *(char *)(iVar9 + 0x20) = cVar8;
            cVar8 = cVar5 != cVar8;
            break;
          default:
            goto switchD_00427b8c_default;
          }
          if (cVar8 == '\0') {
switchD_00427b8c_default:
            if (param_1 != '\0') goto LAB_00427c69;
          }
          else {
LAB_00427c69:
            local_244 = *(uint **)((int)this + 0x3c);
            local_22c = (void *)0x0;
            if (*(int *)((int)this + 0x40) - (int)local_244 >> 2 != 0) {
              do {
                pvVar22 = local_23c;
                puVar16 = (undefined4 *)local_244[(int)local_22c];
                local_210 = *(uint **)(iVar24 + *(int *)((int)this + 0x48));
                if (puVar16[0x11] == *(int *)(local_210[6] + 0x250)) {
                  local_210 = (uint *)(local_210[10] + (int)local_218 * 4);
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                    puVar16 = (undefined4 *)local_244[(int)local_22c];
                  }
                  in_stack_fffffd40 = (char *)0x427d10;
                  FUN_0041c810(*puVar16,puVar16[1],puVar16[2],puVar16[3],(undefined4 *)*local_210);
                  this = pvVar22;
                }
                local_244 = *(uint **)((int)this + 0x3c);
                local_22c = (void *)((int)local_22c + 1);
              } while (local_22c < (void *)(*(int *)((int)this + 0x40) - (int)local_244 >> 2));
            }
          }
          iVar9 = *(int *)((int)this + 0x48);
          local_218 = (uint *)((int)local_218 + 1);
        } while (local_218 <
                 (uint)(*(int *)(*(int *)(iVar9 + iVar24) + 0x2c) -
                        *(int *)(*(int *)(iVar9 + iVar24) + 0x28) >> 2));
      }
      uVar11 = FUN_00421c00((undefined4 *)(*(int *)(iVar24 + iVar9) + 0x58));
      local_231 = (char)uVar11;
      local_210 = (uint *)0x0;
      local_274 = (uint *)0x0;
      local_218 = (uint *)0x0;
      local_270 = (uint *)0x0;
      local_244 = (uint *)0x0;
      local_26c = (uint *)0x0;
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      iVar9 = *(int *)((int)this + 0x48);
      local_228 = (undefined4 *)0x0;
      if (*(int *)(*(int *)(iVar9 + iVar24) + 0x20) - *(int *)(*(int *)(iVar9 + iVar24) + 0x1c) >> 2
          != 0) {
        do {
          puVar12 = (uint *)((int)local_228 * 4);
          local_208 = puVar12;
          if (**(int **)((int)puVar12 + *(int *)(*(int *)(iVar24 + iVar9) + 0x1c)) == 0) {
            if (DAT_0065b3d3 != '\0') {
              FUN_00591070("NETWORK","Module has been removed. Syncing this to clients.");
            }
            puVar12 = local_208;
            iVar9 = *(int *)((int)this + 0x3c);
            local_21c = (uint *)0x0;
            if (*(int *)((int)this + 0x40) - iVar9 >> 2 != 0) {
              do {
                local_224 = (byte *)((int)local_21c * 4);
                if (*(int *)(*(int *)((int)local_224 + iVar9) + 0x44) ==
                    *(int *)(*(int *)(*(int *)(local_238 + *(int *)((int)this + 0x48)) + 0x18) +
                            0x250)) {
                  local_240 = (int *)&stack0xfffffd3c;
                  in_stack_fffffd3c = (void *)((uint)in_stack_fffffd3c & 0xffffff00);
                  FUN_00402690(&stack0xfffffd3c,&PTR_005ce008,0);
                  local_8._0_1_ = 1;
                  local_224 = (byte *)(*(int *)((int)this + 0x3c) + (int)local_224);
                  local_210 = (uint *)(*(int *)(*(int *)(*(int *)((int)this + 0x48) + local_238) +
                                               0x1c) + (int)puVar12);
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                  }
                  piVar23 = *(int **)local_224;
                  local_8._0_1_ = 0;
                  FUN_0041ca10(*piVar23,piVar23[1],piVar23[2],piVar23[3],
                               *(undefined4 *)(*local_210 + 4),*(undefined4 *)(*local_210 + 8),
                               in_stack_fffffd3c);
                }
                iVar9 = *(int *)((int)this + 0x3c);
                local_21c = (uint *)((int)local_21c + 1);
              } while (local_21c < (uint *)(*(int *)((int)this + 0x40) - iVar9 >> 2));
            }
            puVar12 = (uint *)(*(int *)(*(int *)(local_238 + *(int *)((int)this + 0x48)) + 0x1c) +
                              (int)puVar12);
            if (local_244 == local_218) {
              FUN_00414080(&local_274,local_218,puVar12);
              local_244 = local_26c;
              local_218 = local_270;
              iVar24 = local_238;
            }
            else {
              *local_218 = *puVar12;
              local_270 = local_218 + 1;
              iVar24 = local_238;
              local_218 = local_270;
            }
          }
          else {
            piVar23 = *(int **)(*(int *)(*(int *)(iVar24 + iVar9) + 0x1c) + (int)puVar12);
            fVar1 = (float)piVar23[9];
            fVar2 = *(float *)(*piVar23 + 0x5c);
            if (fVar1 != fVar2) {
              piVar23[9] = (int)fVar2;
            }
            iVar9 = *piVar23;
            cVar8 = *(char *)(iVar9 + 0x60);
            bVar26 = (char)piVar23[10] != cVar8;
            if (bVar26) {
              *(char *)(piVar23 + 10) = cVar8;
            }
            local_202 = bVar26 || fVar1 != fVar2;
            if (*(char *)((int)piVar23 + 0x29) != *(char *)(iVar9 + 0x61)) {
              *(char *)((int)piVar23 + 0x29) = *(char *)(iVar9 + 0x61);
              local_202 = true;
            }
            if (*(char *)((int)piVar23 + 0x2a) != *(char *)(iVar9 + 0x62)) {
              *(char *)((int)piVar23 + 0x2a) = *(char *)(iVar9 + 0x62);
              local_202 = true;
            }
            if (*(char *)((int)piVar23 + 0x2b) != *(char *)(iVar9 + 99)) {
              *(undefined1 *)((int)piVar23 + 0x2b) = *(undefined1 *)(iVar9 + 99);
              local_202 = true;
            }
            if ((float)piVar23[0xf] != *(float *)(iVar9 + 0x6c)) {
              piVar23[0xf] = (int)*(float *)(iVar9 + 0x6c);
              local_202 = true;
            }
            iVar9 = *piVar23;
            if (piVar23[0xb] != *(int *)(iVar9 + 100)) {
              piVar23[0xb] = *(int *)(iVar9 + 100);
              local_202 = true;
            }
            if (piVar23[0xc] != *(int *)(iVar9 + 0x34)) {
              piVar23[0xc] = *(int *)(iVar9 + 0x34);
              local_202 = true;
            }
            piVar23 = *(int **)(*(int *)(*(int *)(*(int *)((int)local_23c + 0x48) + iVar24) + 0x1c)
                               + (int)puVar12);
            fVar1 = (float)piVar23[0x12];
            fVar2 = *(float *)(*piVar23 + 0x24);
            if (fVar1 != fVar2) {
              piVar23[0x12] = (int)fVar2;
            }
            iVar9 = *piVar23;
            iVar6 = *(int *)(iVar9 + 0x28);
            iVar7 = piVar23[0x13];
            if (iVar7 != iVar6) {
              piVar23[0x13] = iVar6;
            }
            local_201 = iVar7 != iVar6 || fVar1 != fVar2;
            if ((char)piVar23[0x14] != *(char *)(iVar9 + 0x2c)) {
              *(char *)(piVar23 + 0x14) = *(char *)(iVar9 + 0x2c);
              local_201 = true;
            }
            if (piVar23[0x15] != *(int *)(iVar9 + 0x30)) {
              piVar23[0x15] = *(int *)(iVar9 + 0x30);
              local_201 = true;
            }
            if (piVar23[0xe] != *(int *)(iVar9 + 0x68)) {
              piVar23[0xe] = *(int *)(iVar9 + 0x68);
              local_201 = true;
            }
            if ((char)piVar23[0x10] != *(char *)(iVar9 + 0x1c)) {
              *(char *)(piVar23 + 0x10) = *(char *)(iVar9 + 0x1c);
              local_201 = true;
            }
            if (*(char *)((int)piVar23 + 0x41) != *(char *)(iVar9 + 0x1d)) {
              *(char *)((int)piVar23 + 0x41) = *(char *)(iVar9 + 0x1d);
              local_201 = true;
            }
            if (piVar23[0xd] != *(int *)(iVar9 + 0x38)) {
              piVar23[0xd] = *(int *)(iVar9 + 0x38);
              local_201 = true;
            }
            if (*(char *)((int)piVar23 + 0x46) != *(char *)(iVar9 + 0x14)) {
              *(char *)((int)piVar23 + 0x46) = *(char *)(iVar9 + 0x14);
              local_201 = true;
            }
            if (*(char *)((int)piVar23 + 0x42) != *(char *)(iVar9 + 0x1e)) {
              *(char *)((int)piVar23 + 0x42) = *(char *)(iVar9 + 0x1e);
              local_201 = true;
            }
            iVar9 = *piVar23;
            if (*(char *)((int)piVar23 + 0x43) != *(char *)(iVar9 + 0x1f)) {
              local_201 = true;
              *(char *)((int)piVar23 + 0x43) = *(char *)(iVar9 + 0x1f);
              iVar9 = *piVar23;
            }
            if ((char)piVar23[0x11] != *(char *)(iVar9 + 0x20)) {
              *(undefined1 *)(piVar23 + 0x11) = *(undefined1 *)(iVar9 + 0x20);
              iVar9 = *piVar23;
              local_201 = true;
            }
            if (*(char *)((int)piVar23 + 0x45) != *(char *)(iVar9 + 0x21)) {
              *(char *)((int)piVar23 + 0x45) = *(char *)(iVar9 + 0x21);
              local_201 = true;
            }
            this = local_23c;
            if ((((local_202 != false) || (local_201 != false)) || (local_231 != '\0')) ||
               (param_1 != '\0')) {
              local_230 = *(undefined4 **)((int)local_23c + 0x3c);
              local_214 = (uint *)0x0;
              if (*(int *)((int)local_23c + 0x40) - (int)local_230 >> 2 != 0) {
                do {
                  local_224 = *(byte **)(iVar24 + *(int *)((int)this + 0x48));
                  puVar13 = *(uint **)((int)local_230 + (int)local_214 * 4);
                  if (puVar13[0x11] == *(uint *)(*(int *)(local_224 + 0x18) + 0x250)) {
                    local_21c = puVar13;
                    if ((local_202 != false) || (param_1 != '\0')) {
                      local_210 = (uint *)(*(int *)(local_224 + 0x1c) + (int)puVar12);
                      if (DAT_0065c2c8 == 0) {
                        DAT_0065c2c8 = FUN_005adb0f(1);
                        puVar13 = *(uint **)((int)local_230 + (int)local_214 * 4);
                      }
                      piVar23 = (int *)*local_210;
                      in_stack_fffffd3c = (void *)*puVar13;
                      in_stack_fffffd40 = (char *)puVar13[1];
                      FUN_0041cb90((int)in_stack_fffffd3c,(int)in_stack_fffffd40,puVar13[2],
                                   puVar13[3],piVar23[1],piVar23[2],*piVar23);
                      puVar12 = local_208;
                    }
                    if ((local_201 != false) || (param_1 != '\0')) {
                      local_224 = (byte *)(*(int *)(*(int *)(*(int *)((int)this + 0x48) + iVar24) +
                                                   0x1c) + (int)puVar12);
                      local_210 = (uint *)(*(int *)((int)this + 0x3c) + (int)local_214 * 4);
                      if (DAT_0065c2c8 == 0) {
                        DAT_0065c2c8 = FUN_005adb0f(1);
                      }
                      piVar23 = *(int **)local_224;
                      puVar12 = (uint *)*local_210;
                      in_stack_fffffd3c = (void *)*puVar12;
                      in_stack_fffffd40 = (char *)puVar12[1];
                      FUN_0041ccb0((int)in_stack_fffffd3c,(int)in_stack_fffffd40,puVar12[2],
                                   puVar12[3],piVar23[1],piVar23[2],*piVar23);
                    }
                    if ((local_231 != '\0') || (puVar12 = local_208, param_1 != '\0')) {
                      local_210 = (uint *)(*(int *)((int)this + 0x3c) + (int)local_214 * 4);
                      if (DAT_0065c2c8 == 0) {
                        DAT_0065c2c8 = FUN_005adb0f(1);
                      }
                      piVar23 = (int *)*local_210;
                      local_200 = 0xa7;
                      local_284 = *piVar23;
                      iStack_280 = piVar23[1];
                      iStack_27c = piVar23[2];
                      iStack_278 = piVar23[3];
                      local_29c = *piVar23;
                      iStack_298 = piVar23[1];
                      iStack_294 = piVar23[2];
                      iStack_290 = piVar23[3];
                      puVar10 = FUN_00402de0();
                      uVar15 = 0;
                      local_224 = *(byte **)(puVar10 + 0x3c);
                      uVar19 = *(int *)(puVar10 + 0x40) - (int)local_224 >> 2;
                      puVar12 = local_208;
                      if (uVar19 != 0) {
                        do {
                          piVar23 = *(int **)((int)local_224 + uVar15 * 4);
                          if ((*piVar23 == local_29c) && (piVar23[1] == iStack_298)) {
                            bVar26 = true;
                          }
                          else {
                            bVar26 = false;
                          }
                          iVar24 = local_238;
                          if (bVar26) {
                            if ((piVar23 != (int *)0x0) && (piVar23[0x19] != 0)) {
                              uVar15 = 0;
                              iVar9 = 0;
                              do {
                                local_210 = *(uint **)(piVar23[0x19] + 0x1c4);
                                if (uVar15 < (uint)(*(int *)(piVar23[0x19] + 0x1c8) - (int)local_210
                                                   >> 5)) {
                                  auStack_1ff[uVar15] = *(undefined4 *)(iVar9 + 8 + (int)local_210);
                                  auStack_1af[uVar15] =
                                       *(undefined4 *)
                                        (*(int *)(piVar23[0x19] + 0x1c4) + 0xc + iVar9);
                                  local_15f[uVar15] =
                                       *(undefined4 *)(iVar9 + *(int *)(piVar23[0x19] + 0x1c4));
                                  local_15f[uVar15 + 0x14] =
                                       *(undefined4 *)(iVar9 + 4 + *(int *)(piVar23[0x19] + 0x1c4));
                                }
                                else {
                                  auStack_1ff[uVar15] = 0xc61c3c00;
                                  auStack_1af[uVar15] = 0xc61c3c00;
                                  local_15f[uVar15] = 0xc61c3c00;
                                  local_15f[uVar15 + 0x14] = 0xc61c3c00;
                                }
                                iVar9 = iVar9 + 0x20;
                                uVar15 = uVar15 + 1;
                              } while (iVar9 < 0x280);
                              FUN_00402de0();
                              puVar10 = FUN_00402de0();
                              piVar23 = *(int **)(puVar10 + 0x90);
                              FUN_0041ab70(&stack0xfffffd28,&local_284);
                              in_stack_fffffd1c = (void *)0x1;
                              (**(code **)(*piVar23 + 0x50))(&local_200,0x141);
                              puVar12 = local_208;
                              iVar24 = local_238;
                              this = local_23c;
                            }
                            break;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < uVar19);
                      }
                    }
                  }
                  local_230 = *(undefined4 **)((int)this + 0x3c);
                  local_214 = (uint *)((int)local_214 + 1);
                } while (local_214 < (uint)(*(int *)((int)this + 0x40) - (int)local_230 >> 2));
              }
            }
            puVar13 = *(uint **)((int)this + 0x48);
            local_230 = (undefined4 *)0x0;
            iVar9 = *(int *)((int)puVar12 + *(int *)(*(int *)(iVar24 + (int)puVar13) + 0x1c));
            local_214 = puVar13;
            if (*(int *)(iVar9 + 0x5c) - *(int *)(iVar9 + 0x58) >> 2 != 0) {
              do {
                local_21c = (uint *)((int)local_230 * 4);
                iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar24 + (int)puVar13) + 0x1c)
                                                  + (int)puVar12) + 0x58) + (int)local_21c);
                if ((int)**(float **)(iVar9 + 0x14) == *(int *)(iVar9 + 0x10)) {
                  if (param_1 != '\0') goto LAB_00428563;
                }
                else {
                  *(int *)(iVar9 + 0x10) = (int)**(float **)(iVar9 + 0x14);
LAB_00428563:
                  local_224 = *(byte **)((int)this + 0x3c);
                  uVar15 = 0;
                  iVar24 = local_238;
                  if (*(int *)((int)this + 0x40) - (int)local_224 >> 2 != 0) {
                    do {
                      iVar9 = *(int *)(local_238 + *(int *)((int)this + 0x48));
                      puVar12 = *(uint **)((int)local_224 + uVar15 * 4);
                      if (puVar12[0x11] == *(uint *)(*(int *)(iVar9 + 0x18) + 0x250)) {
                        local_210 = *(uint **)(iVar9 + 0x1c);
                        piVar23 = *(int **)((int)local_208 + (int)local_210);
                        local_220 = (uint *)(piVar23[0x16] + (int)local_21c);
                        if (DAT_0065c2c8 == 0) {
                          DAT_0065c2c8 = FUN_005adb0f(1);
                          piVar23 = *(int **)((int)local_208 + (int)local_210);
                          puVar12 = *(uint **)((int)local_224 + uVar15 * 4);
                        }
                        in_stack_fffffd40 = (char *)*puVar12;
                        in_stack_fffffd3c = (void *)0x428617;
                        FUN_0041cdf0((int)in_stack_fffffd40,puVar12[1],puVar12[2],puVar12[3],
                                     *piVar23,*(int *)(*local_220 + 8));
                      }
                      local_224 = *(byte **)((int)this + 0x3c);
                      uVar15 = uVar15 + 1;
                      puVar12 = local_208;
                      iVar24 = local_238;
                    } while (uVar15 < (uint)(*(int *)((int)this + 0x40) - (int)local_224 >> 2));
                  }
                }
                local_214 = *(uint **)((int)this + 0x48);
                local_230 = (undefined4 *)((int)local_230 + 1);
                iVar9 = *(int *)((int)puVar12 + *(int *)(*(int *)(iVar24 + (int)local_214) + 0x1c));
                puVar13 = *(uint **)((int)this + 0x48);
              } while (local_230 < (uint)(*(int *)(iVar9 + 0x5c) - *(int *)(iVar9 + 0x58) >> 2));
            }
            local_230 = (undefined4 *)0x0;
            iVar9 = *(int *)((int)puVar12 + *(int *)(*(int *)(iVar24 + (int)local_214) + 0x1c));
            puVar13 = local_214;
            if (*(int *)(iVar9 + 0x68) - *(int *)(iVar9 + 100) >> 2 != 0) {
              do {
                local_21c = (uint *)((int)local_230 * 4);
                iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar24 + (int)puVar13) + 0x1c)
                                                  + (int)puVar12) + 100) + (int)local_21c);
                if ((int)**(float **)(iVar9 + 0x14) == *(int *)(iVar9 + 0x10)) {
                  if (param_1 != '\0') goto LAB_004286e3;
                }
                else {
                  *(int *)(iVar9 + 0x10) = (int)**(float **)(iVar9 + 0x14);
LAB_004286e3:
                  local_224 = *(byte **)((int)this + 0x3c);
                  uVar15 = 0;
                  iVar24 = local_238;
                  if (*(int *)((int)this + 0x40) - (int)local_224 >> 2 != 0) {
                    do {
                      iVar9 = *(int *)(local_238 + *(int *)((int)this + 0x48));
                      puVar12 = *(uint **)((int)local_224 + uVar15 * 4);
                      if (puVar12[0x11] == *(uint *)(*(int *)(iVar9 + 0x18) + 0x250)) {
                        local_210 = *(uint **)(iVar9 + 0x1c);
                        piVar23 = *(int **)((int)local_208 + (int)local_210);
                        local_220 = (uint *)(piVar23[0x19] + (int)local_21c);
                        if (DAT_0065c2c8 == 0) {
                          DAT_0065c2c8 = FUN_005adb0f(1);
                          piVar23 = *(int **)((int)local_208 + (int)local_210);
                          puVar12 = *(uint **)((int)local_224 + uVar15 * 4);
                        }
                        in_stack_fffffd40 = (char *)*puVar12;
                        in_stack_fffffd3c = (void *)0x428797;
                        FUN_0041d3c0(in_stack_fffffd40,puVar12[1],puVar12[2],puVar12[3],*piVar23,
                                     *(int *)(*local_220 + 8));
                      }
                      local_224 = *(byte **)((int)this + 0x3c);
                      uVar15 = uVar15 + 1;
                      puVar12 = local_208;
                      iVar24 = local_238;
                    } while (uVar15 < (uint)(*(int *)((int)this + 0x40) - (int)local_224 >> 2));
                  }
                }
                local_214 = *(uint **)((int)this + 0x48);
                local_230 = (undefined4 *)((int)local_230 + 1);
                iVar9 = *(int *)((int)puVar12 + *(int *)(*(int *)(iVar24 + (int)local_214) + 0x1c));
                puVar13 = *(uint **)((int)this + 0x48);
              } while (local_230 <
                       (undefined4 *)(*(int *)(iVar9 + 0x68) - *(int *)(iVar9 + 100) >> 2));
            }
            local_21c = *(uint **)(*(int *)(iVar24 + (int)local_214) + 0x68);
            local_224 = (byte *)*local_21c;
            local_210 = *(uint **)(*(int *)(local_21c[3] + 0x1f8) + 0x44);
            local_220 = (uint *)(*(int *)(*(int *)(local_21c[3] + 0x1f8) + 0x48) - (int)local_210 >>
                                2);
            if ((uint *)((int)(local_21c[1] - (int)local_224) >> 2) == local_220) {
              puVar12 = (uint *)0x0;
              if (local_220 != (uint *)0x0) {
                do {
                  this = local_23c;
                  if ((**(int **)((int)local_224 + puVar12 * 4) !=
                       **(int **)(local_210[(int)puVar12] + 4)) ||
                     (*(float *)(*(int *)((int)local_224 + puVar12 * 4) + 4) !=
                      *(float *)local_210[(int)puVar12])) goto LAB_00428835;
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while (puVar12 < local_220);
              }
              if (param_1 == '\0') goto LAB_00428a3a;
            }
            else {
LAB_00428835:
              FUN_00421c80(local_21c);
            }
            local_21c = *(uint **)((int)this + 0x3c);
            local_22c = (void *)0x0;
            if (*(int *)((int)this + 0x40) - (int)local_21c >> 2 != 0) {
              do {
                local_210 = *(uint **)((int)this + 0x48);
                local_224 = (byte *)local_21c[(int)local_22c];
                puVar12 = *(uint **)(iVar24 + (int)local_210);
                local_220 = puVar12;
                if (*(int *)((int)local_224 + 0x44) == *(int *)(puVar12[6] + 0x250)) {
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                    puVar12 = *(uint **)(iVar24 + (int)local_210);
                    local_224 = (byte *)local_21c[(int)local_22c];
                  }
                  uVar15 = 0;
                  local_15f[0] = 0xffffffff;
                  local_15f[1] = 0xffffffff;
                  local_15f[2] = 0xffffffff;
                  local_15f[3] = 0xffffffff;
                  local_160 = 0x9f;
                  local_15f[4] = 0xffffffff;
                  local_15f[5] = 0xffffffff;
                  local_15f[6] = 0xffffffff;
                  local_15f[7] = 0xffffffff;
                  local_15f[8] = 0xffffffff;
                  local_15f[9] = 0xffffffff;
                  local_15f[10] = 0xffffffff;
                  local_15f[0xb] = 0xffffffff;
                  iVar9 = *(int *)(*(int *)(puVar12[6] + 0x1f8) + 0x44);
                  local_15f[0xc] = 0xffffffff;
                  local_15f[0xd] = 0xffffffff;
                  local_15f[0xe] = 0xffffffff;
                  local_15f[0xf] = 0xffffffff;
                  uVar19 = *(int *)(*(int *)(puVar12[6] + 0x1f8) + 0x48) - iVar9 >> 2;
                  local_15f[0x10] = 0xffffffff;
                  local_15f[0x11] = 0xffffffff;
                  local_15f[0x12] = 0xffffffff;
                  local_15f[0x13] = 0xffffffff;
                  local_15f[0x14] = 0xbf800000;
                  local_15f[0x15] = 0xbf800000;
                  local_15f[0x16] = 0xbf800000;
                  local_15f[0x17] = 0xbf800000;
                  local_15f[0x18] = 0xbf800000;
                  local_15f[0x19] = 0xbf800000;
                  local_15f[0x1a] = 0xbf800000;
                  local_15f[0x1b] = 0xbf800000;
                  local_15f[0x1c] = 0xbf800000;
                  local_15f[0x1d] = 0xbf800000;
                  local_15f[0x1e] = 0xbf800000;
                  local_15f[0x1f] = 0xbf800000;
                  local_15f[0x20] = 0xbf800000;
                  local_15f[0x21] = 0xbf800000;
                  local_15f[0x22] = 0xbf800000;
                  local_15f[0x23] = 0xbf800000;
                  local_15f[0x24] = 0xbf800000;
                  local_15f[0x25] = 0xbf800000;
                  local_15f[0x26] = 0xbf800000;
                  local_15f[0x27] = 0xbf800000;
                  if (uVar19 != 0) {
                    do {
                      local_15f[uVar15] = **(undefined4 **)(*(int *)(iVar9 + uVar15 * 4) + 4);
                      local_15f[uVar15 + 0x14] = **(undefined4 **)(iVar9 + uVar15 * 4);
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < uVar19);
                  }
                  local_284 = *(int *)local_224;
                  iStack_280 = *(int *)((int)local_224 + 4);
                  iStack_27c = *(int *)((int)local_224 + 8);
                  iStack_278 = *(int *)((int)local_224 + 0xc);
                  FUN_00402de0();
                  puVar10 = FUN_00402de0();
                  piVar23 = *(int **)(puVar10 + 0x90);
                  FUN_0041ab70(&stack0xfffffd28,&local_284);
                  in_stack_fffffd1c = (void *)0x1;
                  (**(code **)(*piVar23 + 0x50))(&local_160,0xa1);
                  iVar24 = local_238;
                }
                local_21c = *(uint **)((int)this + 0x3c);
                local_22c = (void *)((int)local_22c + 1);
              } while (local_22c < (void *)(*(int *)((int)this + 0x40) - (int)local_21c >> 2));
            }
          }
LAB_00428a3a:
          iVar9 = *(int *)((int)this + 0x48);
          local_228 = (int *)((int)local_228 + 1);
        } while (local_228 <
                 (undefined4 *)
                 (*(int *)(*(int *)(iVar9 + iVar24) + 0x20) -
                  *(int *)(*(int *)(iVar9 + iVar24) + 0x1c) >> 2));
        local_210 = local_274;
      }
      local_224 = (byte *)0x0;
      local_218 = (uint *)((int)local_218 - (int)local_210 >> 2);
      puVar12 = local_210;
      local_274 = local_210;
      if (local_218 != (uint *)0x0) {
        do {
          local_208 = puVar12;
          if (DAT_0065b3d3 != '\0') {
            FUN_00591070("NETWORK","Stopped syncing module: %d, %d");
          }
          iVar9 = *(int *)(*(int *)((int)this + 0x48) + iVar24);
          local_220 = *(uint **)(iVar9 + 0x20);
          local_214 = *(uint **)(iVar9 + 0x1c);
          if (local_214 != local_220) {
            do {
              if (*local_214 == *local_208) break;
              local_214 = local_214 + 1;
            } while (local_214 != local_220);
            if (local_214 != local_220) {
              puVar12 = local_214 + 1;
              local_22c = (void *)0x0;
              pvVar22 = (void *)((uint)((int)local_220 + (3 - (int)puVar12)) >> 2);
              if (local_220 < puVar12) {
                pvVar22 = (void *)0x0;
              }
              this = local_23c;
              if (pvVar22 != (void *)0x0) {
                do {
                  if (*puVar12 != *local_208) {
                    *local_214 = *puVar12;
                    local_214 = local_214 + 1;
                  }
                  local_22c = (void *)((int)local_22c + 1);
                  puVar12 = puVar12 + 1;
                } while (local_22c != pvVar22);
              }
            }
          }
          local_21c = *(uint **)(iVar24 + *(int *)((int)this + 0x48));
          if (local_214 != local_220) {
            sVar25 = local_21c[8] - (int)local_220;
            memmove(local_214,local_220,sVar25);
            local_21c[8] = (int)local_214 + sVar25;
            iVar24 = local_238;
          }
          local_22c = (void *)*local_208;
          if (local_22c != (void *)0x0) {
            puVar12 = *(uint **)((int)local_22c + 100);
            if (puVar12 != (uint *)0x0) {
              puVar13 = puVar12;
              if ((0xfff < (uint)((*(int *)((int)local_22c + 0x6c) - (int)puVar12 >> 2) * 4)) &&
                 (puVar13 = (uint *)puVar12[-1], local_21c = puVar13,
                 0x1f < (uint)((int)puVar12 + (-4 - (int)puVar13)))) goto LAB_0042a067;
              FUN_005adb3f(puVar13);
              *(undefined4 *)((int)local_22c + 100) = 0;
              *(undefined4 *)((int)local_22c + 0x68) = 0;
              *(undefined4 *)((int)local_22c + 0x6c) = 0;
            }
            puVar12 = *(uint **)((int)local_22c + 0x58);
            if (puVar12 != (uint *)0x0) {
              puVar13 = puVar12;
              if ((0xfff < (uint)((*(int *)((int)local_22c + 0x60) - (int)puVar12 >> 2) * 4)) &&
                 (puVar13 = (uint *)puVar12[-1], local_21c = puVar13,
                 0x1f < (uint)((int)puVar12 + (-4 - (int)puVar13)))) goto LAB_0042a067;
              FUN_005adb3f(puVar13);
              *(undefined4 *)((int)local_22c + 0x58) = 0;
              *(undefined4 *)((int)local_22c + 0x5c) = 0;
              *(undefined4 *)((int)local_22c + 0x60) = 0;
            }
            if (0xf < *(uint *)((int)local_22c + 0x20)) {
              pvVar22 = *(void **)((int)local_22c + 0xc);
              pvVar14 = pvVar22;
              if ((0xfff < *(uint *)((int)local_22c + 0x20) + 1) &&
                 (pvVar14 = *(void **)((int)pvVar22 + -4),
                 0x1f < (uint)((int)pvVar22 + (-4 - (int)pvVar14)))) goto LAB_0042a067;
              FUN_005adb3f(pvVar14);
            }
            *(undefined4 *)((int)local_22c + 0x1c) = 0;
            *(undefined4 *)((int)local_22c + 0x20) = 0xf;
            *(undefined1 *)((int)local_22c + 0xc) = 0;
            FUN_005adb3f(local_22c);
          }
          local_224 = (byte *)((int)local_224 + 1);
          local_208 = local_208 + 1;
          puVar12 = local_208;
        } while (local_224 < local_218);
      }
      puVar12 = (uint *)0x0;
      local_22c = (void *)0x0;
      local_268 = (void *)0x0;
      local_214 = (uint *)0x0;
      local_264 = (int *)0x0;
      local_224 = (byte *)0x0;
      local_260 = (int *)0x0;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_218 = (uint *)0x0;
      iVar9 = *(int *)(*(int *)(*(int *)((int)this + 0x48) + iVar24) + 0x18);
      if (*(int *)(iVar9 + 0x218) - *(int *)(iVar9 + 0x214) >> 2 != 0) {
        do {
          iVar9 = *(int *)(iVar24 + *(int *)((int)this + 0x48));
          local_220 = *(uint **)(iVar9 + 0x18);
          local_22c = *(void **)(iVar9 + 0x38);
          local_21c = *(uint **)(iVar9 + 0x34);
          uVar19 = 0;
          uVar15 = (int)local_22c - (int)local_21c >> 2;
          if (uVar15 != 0) {
            local_228 = (int *)**(uint **)(local_220[0x85] + (int)local_218 * 4);
            local_22c = (void *)((int)local_22c - (int)local_21c);
            do {
              this = local_23c;
              if (*(undefined4 **)(local_21c[uVar19] + 4) == local_228) goto LAB_00428e96;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar15);
          }
          if (DAT_0065b3d3 != '\0') {
            FUN_00591070("NETWORK","Preparing to sync new sensorID: %d (%s)");
          }
          piVar23 = *(int **)(*(int *)(*(int *)(*(int *)(iVar24 + *(int *)((int)this + 0x48)) + 0x18
                                               ) + 0x214) + (int)local_218 * 4);
          if ((uint *)local_224 == local_214) {
            FUN_004141e0(&local_268,local_214,piVar23);
            local_224 = (byte *)local_260;
            local_214 = (uint *)local_264;
          }
          else {
            *local_214 = *piVar23;
            local_264 = (int *)(local_214 + 1);
            local_214 = (uint *)local_264;
          }
LAB_00428e96:
          local_218 = (uint *)((int)local_218 + 1);
          iVar9 = *(int *)(*(int *)(*(int *)((int)this + 0x48) + iVar24) + 0x18);
        } while (local_218 < (uint)(*(int *)(iVar9 + 0x218) - *(int *)(iVar9 + 0x214) >> 2));
        local_22c = local_268;
        puVar12 = local_214;
      }
      local_214 = (uint *)((int)puVar12 - (int)local_22c >> 2);
      local_228 = (undefined4 *)0x0;
      local_268 = local_22c;
      if (local_214 != (undefined4 *)0x0) {
        do {
          local_208 = *(uint **)(iVar24 + *(int *)((int)this + 0x48));
          if (*(int *)((int)local_22c + (int)local_228 * 4) != -1) {
            local_230 = *(undefined4 **)(*(int *)((int)local_208 + 0x18) + 0x214);
            local_21c = (uint *)0x0;
            local_220 = (uint *)(*(int *)(*(int *)((int)local_208 + 0x18) + 0x218) - (int)local_230
                                >> 2);
            if (local_220 != (uint *)0x0) {
              do {
                local_218 = (uint *)local_230[(int)local_21c];
                this = local_23c;
                if (*local_218 == *(int *)((int)local_22c + (int)local_228 * 4)) goto LAB_00428f77;
                local_21c = (uint *)((int)local_21c + 1);
              } while (local_21c < local_220);
            }
          }
          local_218 = (uint *)0x0;
LAB_00428f77:
          FUN_00426550((int)local_208,local_218);
          local_21c = *(uint **)((int)this + 0x3c);
          local_208 = (uint *)0x0;
          if (*(int *)((int)this + 0x40) - (int)local_21c >> 2 != 0) {
            do {
              puVar16 = (undefined4 *)local_21c[(int)local_208];
              if (puVar16[0x11] ==
                  *(int *)(*(int *)(*(int *)(iVar24 + *(int *)((int)this + 0x48)) + 0x18) + 0x250))
              {
                if (DAT_0065c2c8 == 0) {
                  DAT_0065c2c8 = FUN_005adb0f(1);
                  puVar16 = (undefined4 *)local_21c[(int)local_208];
                }
                FUN_0041d470(*puVar16,puVar16[1],puVar16[2],puVar16[3],local_218);
                local_21c = (uint *)(*(int *)((int)this + 0x3c) + (int)local_208 * 4);
                if (DAT_0065c2c8 == 0) {
                  DAT_0065c2c8 = FUN_005adb0f(1);
                }
                puVar16 = (undefined4 *)*local_21c;
                FUN_0041d520(*puVar16,puVar16[1],puVar16[2],puVar16[3],local_218);
                local_21c = (uint *)(*(int *)((int)this + 0x3c) + (int)local_208 * 4);
                if (DAT_0065c2c8 == 0) {
                  DAT_0065c2c8 = FUN_005adb0f(1);
                }
                puVar16 = (undefined4 *)*local_21c;
                in_stack_fffffd40 = (char *)0x4290ab;
                FUN_0041d720(*puVar16,puVar16[1],puVar16[2],puVar16[3],local_218);
              }
              local_21c = *(uint **)((int)this + 0x3c);
              local_208 = (uint *)((int)local_208 + 1);
            } while (local_208 < (uint)(*(int *)((int)this + 0x40) - (int)local_21c >> 2));
          }
          local_228 = (int *)((int)local_228 + 1);
        } while (local_228 < local_214);
      }
      local_230 = (undefined4 *)0x0;
      local_25c = (undefined4 *)0x0;
      local_218 = (uint *)0x0;
      local_258 = (uint *)0x0;
      local_21c = (uint *)0x0;
      local_254 = (uint *)0x0;
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar9 = *(int *)((int)this + 0x48);
      local_208 = (uint *)0x0;
      if (*(int *)(*(int *)(iVar9 + iVar24) + 0x38) - *(int *)(*(int *)(iVar9 + iVar24) + 0x34) >> 2
          != 0) {
        do {
          pvVar22 = local_23c;
          local_220 = *(uint **)((int)local_208 * 4 + *(int *)(*(int *)(iVar24 + iVar9) + 0x34));
          iVar9 = *(int *)(*(int *)(iVar24 + iVar9) + 0x18);
          if (local_220[1] != 0xffffffff) {
            local_230 = *(undefined4 **)(iVar9 + 0x214);
            puVar16 = (undefined4 *)0x0;
            local_228 = (int *)(*(int *)(iVar9 + 0x218) - (int)local_230 >> 2);
            if (local_228 != (undefined4 *)0x0) {
              do {
                this = local_23c;
                if (*(uint *)local_230[(int)puVar16] == local_220[1]) {
                  if ((uint *)local_230[(int)puVar16] != (uint *)0x0) {
                    piVar23 = *(int **)(*(int *)(*(int *)(*(int *)((int)local_23c + 0x48) + iVar24)
                                                + 0x34) + (int)local_208 * 4);
                    iVar9 = *piVar23;
                    iVar6 = *(int *)(iVar9 + 0x124);
                    iVar7 = piVar23[2];
                    if (iVar7 != iVar6) {
                      piVar23[2] = iVar6;
                    }
                    dVar3 = *(double *)(iVar9 + 0x10);
                    dVar4 = *(double *)(piVar23 + 4);
                    if (dVar4 != dVar3) {
                      *(double *)(piVar23 + 4) = dVar3;
                    }
                    local_201 = dVar4 != dVar3 || iVar7 != iVar6;
                    if ((float)piVar23[0x3a] != *(float *)(iVar9 + 0x114)) {
                      piVar23[0x3a] = (int)*(float *)(iVar9 + 0x114);
                      local_201 = true;
                    }
                    if (*(double *)(piVar23 + 6) != *(double *)(iVar9 + 0x18)) {
                      *(double *)(piVar23 + 6) = *(double *)(iVar9 + 0x18);
                      local_201 = true;
                    }
                    if (piVar23[0xe] != *(int *)(iVar9 + 0x30)) {
                      piVar23[0xe] = *(int *)(iVar9 + 0x30);
                      local_201 = true;
                    }
                    if ((float)piVar23[0xf] != *(float *)(iVar9 + 0x34)) {
                      piVar23[0xf] = (int)*(float *)(iVar9 + 0x34);
                      local_201 = true;
                    }
                    if ((float)piVar23[0x10] != *(float *)(iVar9 + 0x38)) {
                      piVar23[0x10] = (int)*(float *)(iVar9 + 0x38);
                      local_201 = true;
                    }
                    if ((float)piVar23[0x11] != *(float *)(iVar9 + 0x3c)) {
                      piVar23[0x11] = (int)*(float *)(iVar9 + 0x3c);
                      local_201 = true;
                    }
                    if ((float)piVar23[0x12] != *(float *)(iVar9 + 0x40)) {
                      piVar23[0x12] = (int)*(float *)(iVar9 + 0x40);
                      local_201 = true;
                    }
                    if (((float)piVar23[0x3b] == *(float *)(iVar9 + 0x104)) &&
                       ((float)piVar23[0x3c] == *(float *)(iVar9 + 0x108))) {
                      bVar26 = false;
                    }
                    else {
                      bVar26 = true;
                    }
                    if (bVar26) {
                      piVar23[0x3b] = *(int *)(iVar9 + 0x104);
                      piVar23[0x3c] = *(int *)(iVar9 + 0x108);
                      local_201 = true;
                    }
                    if ((float)piVar23[0x4f] != *(float *)(iVar9 + 0x128)) {
                      piVar23[0x4f] = (int)*(float *)(iVar9 + 0x128);
                      local_201 = true;
                    }
                    uVar11 = FUN_00422260(*(int **)(*(int *)(*(int *)(*(int *)((int)local_23c + 0x48
                                                                              ) + iVar24) + 0x34) +
                                                   (int)local_208 * 4));
                    local_231 = (char)uVar11;
                    uVar15 = FUN_00422000(*(int **)(*(int *)(*(int *)(*(int *)((int)pvVar22 + 0x48)
                                                                     + iVar24) + 0x34) +
                                                   (int)local_208 * 4));
                    local_209 = (char)uVar15;
                    if ((((local_201 != false) || (local_231 != '\0')) || (local_209 != '\0')) ||
                       (param_1 != '\0')) {
                      local_228 = *(int **)((int)pvVar22 + 0x3c);
                      local_214 = (undefined4 *)0x0;
                      if (*(int *)((int)pvVar22 + 0x40) - (int)local_228 >> 2 != 0) {
                        do {
                          pvVar14 = local_23c;
                          local_220 = *(uint **)(iVar24 + *(int *)((int)pvVar22 + 0x48));
                          puVar16 = (undefined4 *)local_228[(int)local_214];
                          local_230 = puVar16;
                          if ((puVar16[0x11] == *(int *)(local_220[6] + 0x250)) &&
                             (*(char *)((int)puVar16 + 0x61) != '\0')) {
                            if ((local_201 != false) || (param_1 != '\0')) {
                              local_220 = (uint *)(local_220[0xd] + (int)local_208 * 4);
                              if (DAT_0065c2c8 == 0) {
                                DAT_0065c2c8 = FUN_005adb0f(1);
                                puVar16 = (undefined4 *)local_228[(int)local_214];
                              }
                              in_stack_fffffd40 = (char *)0x4294e6;
                              FUN_0041d470(*puVar16,puVar16[1],puVar16[2],puVar16[3],
                                           *(undefined4 **)*local_220);
                              pvVar22 = pvVar14;
                            }
                            pvVar14 = local_23c;
                            if ((local_231 != '\0') || (param_1 != '\0')) {
                              local_220 = (uint *)(*(int *)(*(int *)(*(int *)((int)pvVar22 + 0x48) +
                                                                    iVar24) + 0x34) +
                                                  (int)local_208 * 4);
                              local_228 = (int *)(*(int *)((int)pvVar22 + 0x3c) + (int)local_214 * 4
                                                 );
                              if (DAT_0065c2c8 == 0) {
                                DAT_0065c2c8 = FUN_005adb0f(1);
                              }
                              puVar16 = (undefined4 *)*local_228;
                              in_stack_fffffd40 = (char *)0x42956c;
                              FUN_0041d520(*puVar16,puVar16[1],puVar16[2],puVar16[3],
                                           *(undefined4 **)*local_220);
                              pvVar22 = pvVar14;
                            }
                            pvVar14 = local_23c;
                            if ((local_209 != '\0') || (param_1 != '\0')) {
                              local_220 = (uint *)(*(int *)(*(int *)(*(int *)((int)pvVar22 + 0x48) +
                                                                    iVar24) + 0x34) +
                                                  (int)local_208 * 4);
                              local_228 = (int *)(*(int *)((int)pvVar22 + 0x3c) + (int)local_214 * 4
                                                 );
                              if (DAT_0065c2c8 == 0) {
                                DAT_0065c2c8 = FUN_005adb0f(1);
                              }
                              puVar16 = (undefined4 *)*local_228;
                              in_stack_fffffd40 = (char *)0x4295f2;
                              FUN_0041d720(*puVar16,puVar16[1],puVar16[2],puVar16[3],
                                           *(undefined4 **)*local_220);
                              pvVar22 = pvVar14;
                            }
                          }
                          local_228 = *(int **)((int)pvVar22 + 0x3c);
                          local_214 = (uint *)((int)local_214 + 1);
                        } while (local_214 <
                                 (undefined4 *)(*(int *)((int)pvVar22 + 0x40) - (int)local_228 >> 2)
                                );
                      }
                    }
                    goto LAB_004296a4;
                  }
                  break;
                }
                puVar16 = (undefined4 *)((int)puVar16 + 1);
              } while (puVar16 < local_228);
            }
          }
          if (local_21c == local_218) {
            FUN_004141e0(&local_25c,local_218,local_220 + 1);
            local_21c = local_254;
          }
          else {
            *local_218 = local_220[1];
            local_258 = local_218 + 1;
          }
          pvVar22 = this;
          local_218 = local_258;
          if (DAT_0065b3d3 != '\0') {
            in_stack_fffffd40 = (char *)0x42969b;
            FUN_00591070("NETWORK","Expunging sensor data %d (%s) for ship %s");
            pvVar22 = local_23c;
          }
LAB_004296a4:
          iVar9 = *(int *)((int)pvVar22 + 0x48);
          local_208 = (uint *)((int)local_208 + 1);
          this = pvVar22;
        } while (local_208 <
                 (uint *)(*(int *)(*(int *)(iVar9 + iVar24) + 0x38) -
                          *(int *)(*(int *)(iVar9 + iVar24) + 0x34) >> 2));
        local_230 = local_25c;
      }
      local_214 = (uint *)0x0;
      local_218 = (uint *)((int)local_218 - (int)local_230 >> 2);
      local_25c = local_230;
      if (local_218 != (uint *)0x0) {
        do {
          iVar9 = *(int *)((int)this + 0x3c);
          local_220 = (uint *)0x0;
          pvVar22 = this;
          if (*(int *)((int)this + 0x40) - iVar9 >> 2 != 0) {
LAB_00429713:
            local_228 = *(int **)((int)local_220 * 4 + iVar9);
            this = pvVar22;
            if (local_228[0x11] ==
                *(int *)(*(int *)(*(int *)(*(int *)((int)pvVar22 + 0x48) + iVar24) + 0x18) + 0x250))
            {
              if (DAT_0065b3d3 != '\0') {
                uVar15 = (uint)DAT_0065c30c;
                DAT_0065c30c = DAT_0065c30c + 1;
                FUN_0059d520(local_228,(undefined4 *)(&DAT_00660428 + (uVar15 & 7) * 0x40));
                FUN_00591070("NETWORK","Sent removeSensorData for sensorID %d to client %s");
              }
              iVar24 = *(int *)((int)pvVar22 + 0x3c);
              iVar9 = (int)local_220 * 4;
              if (DAT_0065c2c8 == 0) {
                DAT_0065c2c8 = FUN_005adb0f(1);
              }
              local_28c = 0x97;
              local_28b = local_230[(int)local_214];
              piVar23 = *(int **)(iVar24 + iVar9);
              local_284 = *piVar23;
              iStack_280 = piVar23[1];
              iStack_27c = piVar23[2];
              iStack_278 = piVar23[3];
              FUN_00402de0();
              puVar10 = FUN_00402de0();
              piVar23 = *(int **)(puVar10 + 0x90);
              FUN_0041ab70(&stack0xfffffd28,&local_284);
              in_stack_fffffd1c = (void *)0x1;
              (**(code **)(*piVar23 + 0x50))(&local_28c,5);
              this = local_23c;
              uVar19 = 0;
              local_208 = *(uint **)(local_238 + *(int *)((int)pvVar22 + 0x48));
              local_228 = (int *)local_208[0xd];
              uVar15 = (int)(local_208[0xe] - (int)local_228) >> 2;
              if (uVar15 != 0) {
                do {
                  local_240 = (int *)local_228[uVar19];
                  pvVar22 = local_23c;
                  if (local_240[1] == local_230[(int)local_214]) {
                    if (local_240 != (int *)0x0) {
                      puVar16 = (undefined4 *)local_208[0xe];
                      local_228 = (int *)local_208[0xd];
                      if (local_228 == puVar16) goto LAB_004299f3;
                      goto LAB_00429970;
                    }
                    break;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar15);
              }
              this = pvVar22;
              FUN_00591070("DETAIL",
                           "WARNING: Told to remove sensor data locally, but failed to find it for removal."
                          );
              iVar24 = local_238;
            }
            goto LAB_00429895;
          }
LAB_004298b5:
          local_214 = (uint *)((int)local_214 + 1);
        } while (local_214 < local_218);
      }
      iVar9 = *(int *)((int)this + 0x48);
      local_218 = (uint *)0x0;
      if (*(int *)(*(int *)(iVar24 + iVar9) + 0x50) - *(int *)(*(int *)(iVar24 + iVar9) + 0x4c) >> 2
          != 0) {
        do {
          local_220 = *(uint **)(*(int *)(*(int *)(iVar24 + iVar9) + 0x4c) + (int)local_218 * 4);
          puVar12 = (uint *)FUN_00420f40((void *)(local_220[2] + 0x14c),(int *)local_220);
          if (*puVar12 == local_220[1]) {
            if (param_1 != '\0') goto LAB_00429a69;
          }
          else {
            puVar12 = (uint *)FUN_00420f40((void *)(local_220[2] + 0x14c),(int *)local_220);
            local_220[1] = *puVar12;
LAB_00429a69:
            local_228 = *(int **)((int)this + 0x3c);
            local_220 = (uint *)0x0;
            if (*(int *)((int)this + 0x40) - (int)local_228 >> 2 != 0) {
              do {
                piVar23 = (int *)local_228[(int)local_220];
                local_240 = *(int **)(iVar24 + *(int *)((int)this + 0x48));
                if (piVar23[0x11] == *(int *)(local_240[6] + 0x250)) {
                  iVar24 = local_240[0x13];
                  iVar9 = (int)local_218 * 4;
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                    piVar23 = (int *)local_228[(int)local_220];
                  }
                  puVar16 = *(undefined4 **)(iVar24 + iVar9);
                  local_284 = *piVar23;
                  iStack_280 = piVar23[1];
                  iStack_27c = piVar23[2];
                  iStack_278 = piVar23[3];
                  local_20 = 0xa0;
                  local_1b = puVar16[1];
                  local_1f = *puVar16;
                  FUN_00402de0();
                  puVar10 = FUN_00402de0();
                  piVar23 = *(int **)(puVar10 + 0x90);
                  FUN_0041ab70(&stack0xfffffd28,&local_284);
                  in_stack_fffffd1c = (void *)0x1;
                  (**(code **)(*piVar23 + 0x50))(&local_20,9);
                  iVar24 = local_238;
                }
                local_228 = *(int **)((int)this + 0x3c);
                local_220 = (uint *)((int)local_220 + 1);
              } while (local_220 < (uint *)(*(int *)((int)this + 0x40) - (int)local_228 >> 2));
            }
          }
          iVar9 = *(int *)((int)this + 0x48);
          local_218 = (uint *)((int)local_218 + 1);
        } while (local_218 <
                 (int *)(*(int *)(*(int *)(iVar24 + iVar9) + 0x50) -
                         *(int *)(*(int *)(iVar24 + iVar9) + 0x4c) >> 2));
      }
      local_214 = (uint *)0x0;
      if (*(int *)(*(int *)(iVar24 + iVar9) + 0x44) - *(int *)(*(int *)(iVar24 + iVar9) + 0x40) >> 2
          != 0) {
        do {
          cVar8 = FUN_00421d60(*(int *)(*(int *)(*(int *)(iVar24 + iVar9) + 0x40) +
                                       (int)local_214 * 4));
          if ((cVar8 != '\0') || (param_1 != '\0')) {
            iVar9 = *(int *)((int)this + 0x3c);
            local_218 = (uint *)0x0;
            if (*(int *)((int)this + 0x40) - iVar9 >> 2 != 0) {
              do {
                local_220 = *(uint **)((int)local_218 * 4 + iVar9);
                if ((local_220[0x11] ==
                     *(uint *)(*(int *)(*(int *)(iVar24 + *(int *)((int)this + 0x48)) + 0x18) +
                              0x250)) &&
                   (local_240 = *(int **)(iVar9 + (int)local_218 * 4),
                   *(char *)((int)local_220 + 0x61) != '\0')) {
                  if (DAT_0065b3d3 != '\0') {
                    uVar15 = (uint)DAT_0065c30c;
                    DAT_0065c30c = DAT_0065c30c + 1;
                    FUN_0059d520(local_240,(undefined4 *)(&DAT_00660428 + (uVar15 & 7) * 0x40));
                    FUN_00591070("NETWORK"," ...sending weapon data to %s");
                    iVar24 = local_238;
                  }
                  iVar24 = *(int *)(*(int *)(*(int *)((int)this + 0x48) + iVar24) + 0x40);
                  iVar9 = (int)local_214 * 4;
                  local_240 = (int *)(*(int *)((int)this + 0x3c) + (int)local_218 * 4);
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                  }
                  piVar23 = (int *)*local_240;
                  iVar9 = *(int *)(iVar24 + iVar9);
                  local_284 = *piVar23;
                  iStack_280 = piVar23[1];
                  iStack_27c = piVar23[2];
                  iStack_278 = piVar23[3];
                  cocos2d::Vec2::Vec2((Vec2 *)&local_b7);
                  local_bb = *(undefined4 *)(iVar9 + 8);
                  local_b7 = *(undefined4 *)(iVar9 + 0x24);
                  local_b3 = *(undefined4 *)(iVar9 + 0x28);
                  local_bc = 0x9c;
                  FUN_004024e0(&stack0xfffffd40,(undefined4 *)(iVar9 + 0x2c));
                  FUN_00591630((int)local_a5,0x1e,in_stack_fffffd40);
                  FUN_004024e0(&stack0xfffffd40,(undefined4 *)(iVar9 + 0xc));
                  FUN_00591630((int)local_af,10,in_stack_fffffd40);
                  FUN_004024e0(&stack0xfffffd40,(undefined4 *)(iVar9 + 0x44));
                  in_stack_fffffd3c = (void *)0x429d67;
                  FUN_00591630((int)local_87,0x1e,in_stack_fffffd40);
                  local_7d = *(undefined4 *)(iVar9 + 0x5c);
                  local_74 = *(undefined4 *)(iVar9 + 0x68);
                  local_79 = *(undefined4 *)(iVar9 + 0x60);
                  local_75 = *(undefined1 *)(iVar9 + 100);
                  local_70 = *(undefined1 *)(iVar9 + 0x70);
                  local_6f = *(undefined1 *)(iVar9 + 0x71);
                  local_6d = *(undefined4 *)(iVar9 + 0x6c);
                  local_6e = *(undefined1 *)(iVar9 + 0x72);
                  local_69 = *(undefined4 *)(iVar9 + 0x74);
                  local_65 = *(undefined4 *)(iVar9 + 0x78);
                  if (DAT_0065b3d3 != '\0') {
                    FUN_00591070("NETWORK","Packed weapon data: %d");
                  }
                  FUN_00402de0();
                  puVar10 = FUN_00402de0();
                  piVar23 = *(int **)(puVar10 + 0x90);
                  FUN_0041ab70(&stack0xfffffd28,&local_284);
                  in_stack_fffffd1c = (void *)0x1;
                  (**(code **)(*piVar23 + 0x50))(&local_bc,0x5b);
                  cocos2d::Vec2::~Vec2((Vec2 *)&local_b7);
                  iVar24 = local_238;
                }
                local_218 = (uint *)((int)local_218 + 1);
                iVar9 = *(int *)((int)this + 0x3c);
              } while (local_218 < (int *)(*(int *)((int)this + 0x40) - iVar9 >> 2));
            }
          }
          iVar9 = *(int *)((int)this + 0x48);
          local_214 = (uint *)((int)local_214 + 1);
        } while (local_214 <
                 (uint *)(*(int *)(*(int *)(iVar9 + iVar24) + 0x44) -
                          *(int *)(*(int *)(iVar9 + iVar24) + 0x40) >> 2));
      }
      local_8._0_1_ = 2;
      if (local_230 != (undefined4 *)0x0) {
        puVar16 = local_230;
        if ((0xfff < (uint)(((int)local_21c - (int)local_230 >> 2) * 4)) &&
           (puVar16 = (undefined4 *)local_230[-1],
           0x1f < (uint)((int)local_230 + (-4 - (int)puVar16)))) goto LAB_0042a067;
        FUN_005adb3f(puVar16);
        local_25c = (undefined4 *)0x0;
        local_258 = (uint *)0x0;
        local_254 = (uint *)0x0;
      }
      local_8._0_1_ = 0;
      if (local_22c != (void *)0x0) {
        pvVar22 = local_22c;
        if ((0xfff < (uint)(((int)local_224 - (int)local_22c >> 2) * 4)) &&
           (pvVar22 = *(void **)((int)local_22c - 4),
           0x1f < (uint)((int)local_22c + (-4 - (int)pvVar22)))) goto LAB_0042a067;
        FUN_005adb3f(pvVar22);
        local_268 = (void *)0x0;
        local_264 = (int *)0x0;
        local_260 = (int *)0x0;
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (local_210 != (uint *)0x0) {
        puVar12 = local_210;
        if ((0xfff < (uint)(((int)local_244 - (int)local_210 >> 2) * 4)) &&
           (puVar12 = (uint *)local_210[-1],
           (byte *)0x1f < (byte *)((int)local_210 + (-4 - (int)puVar12)))) {
LAB_0042a067:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(puVar12);
        local_274 = (uint *)0x0;
        local_270 = (uint *)0x0;
        local_26c = (uint *)0x0;
      }
      iVar9 = *(int *)((int)this + 0x48);
      local_248 = local_248 + 1;
    } while (local_248 < (undefined1 *)(*(int *)((int)this + 0x4c) - iVar9 >> 2));
  }
  this_00 = (byte *)((int)this + 0x54);
  local_202 = false;
  pbVar17 = FUN_00402de0();
  pbVar18 = pbVar17;
  if (0xf < *(uint *)(pbVar17 + 0x14)) {
    pbVar18 = *(byte **)pbVar17;
  }
  pbVar21 = this_00;
  if (0xf < *(uint *)((int)this + 0x68)) {
    pbVar21 = *(byte **)this_00;
  }
  uVar15 = FUN_004031f0(pbVar21,*(uint *)((int)this + 100),pbVar18,*(uint *)(pbVar17 + 0x10));
  if ((char)uVar15 == '\0') {
    pbVar18 = FUN_00402de0();
    if (this_00 != pbVar18) {
      pbVar17 = pbVar18;
      if (0xf < *(uint *)(pbVar18 + 0x14)) {
        pbVar17 = *(byte **)pbVar18;
      }
      FUN_00402690(this_00,pbVar17,*(uint *)(pbVar18 + 0x10));
    }
    local_202 = true;
  }
  puVar10 = FUN_00402de0();
  if (*(int *)((int)this + 0x6c) != *(int *)(puVar10 + 0x40) - *(int *)(puVar10 + 0x3c) >> 2) {
    puVar10 = FUN_00402de0();
    local_202 = true;
    *(int *)((int)this + 0x6c) = *(int *)(puVar10 + 0x40) - *(int *)(puVar10 + 0x3c) >> 2;
  }
  puVar10 = FUN_00402de0();
  cVar8 = local_202;
  if (*(int *)((int)this + 0x70) != *(int *)(puVar10 + 0x28)) {
    puVar10 = FUN_00402de0();
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(puVar10 + 0x28);
    cVar8 = '\x01';
  }
  if (*(int *)((int)this + 0x74) == *(int *)(DAT_0065b444 + 0xa0)) {
    if ((cVar8 != '\0') || (param_1 != '\0')) goto LAB_0042a095;
  }
  else {
    *(int *)((int)this + 0x74) = *(int *)(DAT_0065b444 + 0xa0);
LAB_0042a095:
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","Server info basic updated. Sending.");
    }
    local_210 = (uint *)0x0;
    if (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2 != 0) {
      local_240 = (int *)((int)this + 0x84);
      do {
        local_250 = (uint *)&stack0xfffffd1c;
        local_248 = &stack0xfffffd1c;
        FUN_004024e0(&stack0xfffffd1c,(undefined4 *)((int)this + 0x54));
        local_8 = 4;
        FUN_0042af40(&stack0xfffffd40,(int *)((int)this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_0042af40(&stack0xfffffd4c,local_240);
        local_8 = 6;
        local_24c = *(int *)((int)this + 0x3c);
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        puVar12 = local_210;
        puVar16 = *(undefined4 **)(local_24c + (int)local_210 * 4);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_0041cf30(*puVar16,puVar16[1],puVar16[2],puVar16[3],in_stack_fffffd1c);
        local_210 = (uint *)((int)puVar12 + 1);
      } while (local_210 < (uint *)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2));
    }
  }
  cVar8 = FUN_004226c0((undefined4 *)((int)this + 0x54));
  if ((cVar8 != '\0') || (param_1 != '\0')) {
    if (DAT_0065b3d3 != '\0') {
      FUN_00591070("NETWORK","Server info advanced updated. Sending.");
    }
    local_210 = (uint *)0x0;
    if (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2 != 0) {
      local_240 = (int *)((int)this + 0x84);
      do {
        local_250 = (uint *)&stack0xfffffd1c;
        local_248 = &stack0xfffffd1c;
        FUN_004024e0(&stack0xfffffd1c,(undefined4 *)((int)this + 0x54));
        local_8 = 7;
        FUN_0042af40(&stack0xfffffd40,(int *)((int)this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_0042af40(&stack0xfffffd4c,local_240);
        local_8 = 9;
        local_24c = *(int *)((int)this + 0x3c);
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        puVar12 = local_210;
        puVar16 = *(undefined4 **)(local_24c + (int)local_210 * 4);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_0041d0d0(*puVar16,puVar16[1],puVar16[2],puVar16[3],in_stack_fffffd1c);
        local_210 = (uint *)((int)puVar12 + 1);
      } while (local_210 < (uint *)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2));
    }
  }
LAB_0042a29c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while (local_228 = local_228 + 1, local_228 != puVar16) {
LAB_00429970:
    if ((int *)*local_228 == local_240) break;
  }
  if (local_228 != puVar16) {
    puVar20 = local_228 + 1;
    local_208 = (uint *)0x0;
    local_250 = (uint *)((uint)((int)puVar16 + (3 - (int)puVar20)) >> 2);
    if (puVar16 < puVar20) {
      local_250 = (uint *)0x0;
    }
    if (local_250 != (uint *)0x0) {
      do {
        if ((int *)*puVar20 != local_240) {
          *local_228 = (int)*puVar20;
          local_228 = local_228 + 1;
        }
        local_208 = (uint *)((int)local_208 + 1);
        puVar20 = puVar20 + 1;
      } while (local_208 != local_250);
    }
  }
LAB_004299f3:
  local_24c = *(int *)(*(int *)((int)local_23c + 0x48) + (int)local_248 * 4);
  if (local_228 != puVar16) {
    sVar25 = *(int *)(local_24c + 0x38) - (int)puVar16;
    memmove(local_228,puVar16,sVar25);
    *(size_t *)(local_24c + 0x38) = (int)local_228 + sVar25;
  }
  piVar23 = local_240;
  FUN_0042a2d0((int)local_240);
  FUN_005adb3f(piVar23);
  FUN_00591070("DETAIL","Removed sensor data sync node on server.");
  iVar24 = local_238;
LAB_00429895:
  iVar9 = *(int *)((int)this + 0x3c);
  local_220 = (uint *)((int)local_220 + 1);
  pvVar22 = this;
  if ((uint *)(*(int *)((int)this + 0x40) - iVar9 >> 2) <= local_220) goto LAB_004298b5;
  goto LAB_00429713;
}
