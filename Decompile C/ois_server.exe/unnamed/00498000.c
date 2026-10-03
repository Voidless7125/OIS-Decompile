#include "../ois_server.exe.h"


void __thiscall FUN_00498190(void *this,undefined1 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *in_stack_ffffff78;
  char *pcVar9;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005baa09;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xf8) == -1) {
    if (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x325) == '\0') {
      FUN_00402690(param_1,
                   "`7You can trade in your current ship for any vessel for sale on the left. Select a vessel to get information about it."
                   ,0x76);
    }
    else {
      FUN_00403640(param_1,"\n`%Ship purchased - return to airlock to view your ship",0x37);
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    iVar1 = *(int *)(*(int *)(iVar8 + 0x3c) + *(int *)((int)this + 0xf8) * 4);
    pbVar2 = *(byte **)(iVar1 + 0x328);
    pbVar5 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar5 = *(byte **)pbVar2;
    }
    uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),(byte *)"secondhand",10);
    if ((char)uVar3 == '\0') {
      uVar3 = 0x17;
      pcVar9 = "`!FOR SALE - BRAND NEW\n";
    }
    else {
      uVar3 = 0x1b;
      pcVar9 = "`!FOR SALE - `0SECOND HAND\n";
    }
    FUN_00403640(param_1,pcVar9,uVar3);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Name    : `0%s\n");
    local_8 = 1;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Class   : `!%s\n");
    local_8 = 2;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu.   : `%%%s\n");
    local_8 = 3;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    FUN_00403640(param_1,&DAT_005e75f8,1);
    pvVar7 = (void *)(iVar1 + 0x32c);
    if (0xf < *(uint *)(iVar1 + 0x340)) {
      pvVar7 = *(void **)(iVar1 + 0x32c);
    }
    FUN_00403640(param_1,pvVar7,*(uint *)(iVar1 + 0x33c));
    FUN_00403640(param_1,&DAT_005e310c,2);
    FUN_00511770(*(void **)(DAT_0065b5cc + 0xd0));
    FUN_00511770(*(void **)(*(int *)(iVar8 + 0x3c) + *(int *)((int)this + 0xf8) * 4));
    FUN_00403640(param_1,
                 "`$Warning: your existing vessel and all contents and cargo will be sold.\n\n",0x4a
                );
    FUN_00403640(param_1,"`8- Transaction Information -\n",0x1e);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Your Money     : `$%dc\n");
    local_8 = 4;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Ship Cost      : `$%dc\n");
    local_8 = 5;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Trade-in Value : `$%dc\n");
    local_8 = 6;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%TOTAL          : `$%dc\n");
    local_8 = 7;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!Money After    : `$%dc\n");
    local_8 = 8;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    FUN_00403640(param_1,"`8- Registration Info -\n",0x18);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Rego    : `%%%s\n");
    local_8 = 9;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cat.    : `%%%s\n");
    local_8 = 10;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar1 + 0x238));
    local_8 = 0xb;
    FUN_00412bf0();
    local_8 = local_8 & 0xffffff00;
    FUN_004a60b0((undefined1 *)local_44,in_stack_ffffff78);
    local_8 = 0xc;
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Reg. At : `%%%s\n");
    local_8._0_1_ = 0xd;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8._0_1_ = 0xc;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    FUN_00403640(param_1,"`8- Vessel Information -\n",0x19);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Max Spd.: `%%%.1fGm/s\n");
    local_8 = 0xe;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Max Pods: `%%%d\n");
    local_8 = 0xf;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Max Tmp.: `%%%d^\n");
    local_8 = 0x10;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    for (iVar8 = (*(int *)(*(int *)(iVar1 + 0x254) + 0x140) -
                 *(int *)(*(int *)(iVar1 + 0x254) + 0x13c)) / 0x18; iVar8 != 0; iVar8 = iVar8 + -1)
    {
    }
    FUN_00403640(param_1,"`8- Slots -\n",0xc);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Major   : `%%%d\n");
    local_8 = 0x11;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7External: `%%%d\n");
    local_8 = 0x12;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Computer: `%%%d\n");
    local_8 = 0x13;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Drive   : `%%%d\n");
    local_8 = 0x14;
    puVar6 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar6 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar6,puVar4[4]);
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __fastcall FUN_00498c60(int param_1)

{
  float fVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xf8) != -1) {
    iVar3 = *(int *)(*(int *)((int)*(void **)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    iVar2 = FUN_00511770(*(void **)(DAT_0065b5cc + 0xd0));
    fVar1 = *(float *)(iVar3 + 0x48);
    iVar3 = FUN_00511770(*(void **)(*(int *)(iVar3 + 0x3c) + *(int *)(param_1 + 0xf8) * 4));
    in_EAX = iVar3 - (int)(fVar1 * (float)iVar2);
    if (((int)in_EAX < 0) || ((int)in_EAX <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


void __fastcall FUN_00498cd0(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  void *pvVar9;
  int iVar10;
  size_t _Size;
  undefined4 *puVar11;
  uint uVar12;
  uint in_stack_ffffff44;
  undefined1 local_a4 [8];
  undefined4 uStack_9c;
  byte *in_stack_ffffff74;
  byte *pbVar13;
  void *in_stack_ffffff78;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  void *local_38;
  int *local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005baa6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = param_1;
  uVar3 = FUN_00498c60(param_1);
  if ((char)uVar3 != '\0') {
    local_40 = (undefined4 *)&stack0xffffff74;
    uStack_9c = 0x498d3c;
    FUN_00591e00(&stack0xffffff74,"has_%s");
    local_8 = 0;
    puVar4 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar4,in_stack_ffffff74);
    iVar10 = *(int *)(*(int *)((int)*(void **)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    local_18 = iVar10;
    iVar5 = FUN_00511770(*(void **)(DAT_0065b5cc + 0xd0));
    fVar1 = *(float *)(iVar10 + 0x48);
    iVar6 = FUN_00511770(*(void **)(*(int *)(iVar10 + 0x3c) + *(int *)(param_1 + 0xf8) * 4));
    FUN_004024e0(&stack0xffffff78,*(undefined4 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254));
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,(int)(fVar1 * (float)iVar5),
                 in_stack_ffffff78);
    iVar10 = *(int *)(DAT_0065b5cc + 0xd0);
    puVar4 = *(undefined4 **)(*(int *)(local_18 + 0x3c) + *(int *)(local_28 + 0xf8) * 4);
    local_40 = puVar4;
    local_14 = puVar4;
    FUN_004024e0(&stack0xffffff78,(undefined4 *)puVar4[0x95]);
    uVar3 = -iVar6;
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,uVar3,in_stack_ffffff78);
    uVar12 = 0;
    piVar8 = (int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x368);
    iVar5 = DAT_0065b5cc;
    puVar11 = puVar4;
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x36c) - *piVar8 >> 2 != 0) {
      do {
        puVar2 = (undefined4 *)puVar4[0xdb];
        puVar11 = (undefined4 *)(*piVar8 + uVar12 * 4);
        if ((undefined4 *)puVar4[0xdc] == puVar2) {
          FUN_00414080(puVar4 + 0xda,puVar2,puVar11);
          iVar5 = DAT_0065b5cc;
        }
        else {
          *puVar2 = *puVar11;
          puVar4[0xdb] = puVar4[0xdb] + 4;
        }
        uVar12 = uVar12 + 1;
        piVar8 = (int *)(*(int *)(iVar5 + 0xd0) + 0x368);
        puVar11 = local_14;
      } while (uVar12 < (uint)(*(int *)(*(int *)(iVar5 + 0xd0) + 0x36c) - *piVar8 >> 2));
    }
    *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 0x36c) =
         *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 0x368);
    FUN_0050af80((int)puVar11);
    if (*(char *)(DAT_0065b444 + 0x11a) == '\0') {
      local_34 = *(int **)(iVar10 + 0x348);
      local_38 = (void *)(iVar10 + 0x348);
      local_24 = (int *)*local_34;
      puVar11 = local_14;
      if (local_24 != local_34) {
        local_3c = local_14 + 0xd2;
        do {
          pvVar9 = local_38;
          local_48 = local_24[4];
          local_44 = local_24[5];
          piVar8 = FUN_00420f40(local_3c,&local_48);
          iVar10 = *piVar8;
          piVar7 = FUN_00420f40(pvVar9,&local_48);
          piVar8 = (int *)(iVar10 + 4);
          local_20 = 8;
          piVar7 = (int *)*piVar7;
          iVar10 = (int)piVar7 - iVar10;
          local_30 = iVar10;
          do {
            local_1c = 8;
            do {
              uVar12 = 0;
              *piVar8 = piVar8[-1];
              if (*(int *)((int)piVar8 + iVar10) - *piVar7 >> 2 != 0) {
                do {
                  local_2c = (undefined4 *)FUN_005adb0f(0x14);
                  *local_2c = 0;
                  local_2c[1] = 0;
                  local_2c[2] = 0;
                  local_2c[3] = 0;
                  local_2c[4] = 0;
                  puVar4 = *(undefined4 **)(*piVar7 + uVar12 * 4);
                  *local_2c = *puVar4;
                  local_2c[1] = puVar4[1];
                  local_2c[2] = *(undefined4 *)(*(int *)(*piVar7 + uVar12 * 4) + 8);
                  local_2c[3] = *(undefined4 *)(*(int *)(*piVar7 + uVar12 * 4) + 0xc);
                  local_2c[4] = *(undefined4 *)(*(int *)(*piVar7 + uVar12 * 4) + 0x10);
                  puVar4 = (undefined4 *)*piVar8;
                  if ((undefined4 *)piVar8[1] == puVar4) {
                    FUN_00414080(piVar8 + -1,puVar4,&local_2c);
                  }
                  else {
                    *puVar4 = local_2c;
                    *piVar8 = *piVar8 + 4;
                  }
                  uVar12 = uVar12 + 1;
                  iVar10 = local_30;
                } while (uVar12 < (uint)(piVar7[1] - *piVar7 >> 2));
              }
              piVar8 = piVar8 + 3;
              piVar7 = piVar7 + 3;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          std::_Tree_unchecked_const_iterator<>::operator++
                    ((_Tree_unchecked_const_iterator<> *)&local_24);
          puVar11 = local_14;
        } while (local_24 != local_34);
      }
    }
    FUN_0040e240(puVar11);
    iVar10 = local_18;
    *(undefined1 *)(puVar11[0x10] + 0x34) = 1;
    puVar11[0xde] = 0;
    *(undefined2 *)(puVar11 + 0xa0) = 0;
    puVar11[0x19] = 1;
    *(undefined4 *)(local_28 + 0xf8) = 0xffffffff;
    *(undefined1 *)((int)puVar11 + 0x325) = 1;
    piVar8 = *(int **)(local_18 + 0x40);
    puVar4 = FUN_00414000(&local_3c,(int *)&local_40,*(int **)(local_18 + 0x3c),piVar8);
    piVar7 = (int *)*puVar4;
    if (piVar7 != piVar8) {
      _Size = *(int *)(iVar10 + 0x40) - (int)piVar8;
      memmove(piVar7,piVar8,_Size);
      *(size_t *)(local_18 + 0x40) = _Size + (int)piVar7;
    }
    FUN_00591070("WORLD","Player bought new ship.");
    puVar4 = local_14 + 2;
    if ((undefined4 *)(DAT_0065b5cc + 0x10c) != puVar4) {
      if (0xf < (uint)local_14[7]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690((undefined4 *)(DAT_0065b5cc + 0x10c),puVar4,local_14[6]);
    }
    local_50 = 0;
    local_4c = 0xf;
    local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
    FUN_00402690(local_60,"ships_sold",10);
    local_8 = 1;
    if (DAT_0065c294 == 0) {
      local_40 = (undefined4 *)FUN_005adb0f(0x28);
      local_8 = CONCAT31(local_8._1_3_,2);
      DAT_0065c294 = FUN_0051e500(local_40);
    }
    local_8 = 0xffffffff;
    if (0xf < local_4c) {
      pvVar9 = local_60[0];
      if ((0xfff < local_4c + 1) &&
         (pvVar9 = *(void **)((int)local_60[0] + -4),
         0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    local_40 = (undefined4 *)&stack0xffffff74;
    local_50 = 0;
    local_4c = 0xf;
    local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
    pbVar13 = (byte *)(uVar3 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,&PTR_005ce008,0);
    local_3c = (undefined4 *)local_a4;
    local_8 = 4;
    local_a4[0] = 0;
    FUN_00402690(local_a4,"ships_sold",10);
    local_8 = CONCAT31(local_8._1_3_,5);
    pvVar9 = (void *)(in_stack_ffffff44 & 0xffffff00);
    FUN_00402690(&stack0xffffff44,"commerce",8);
    local_8 = 0xffffffff;
    FUN_00401a50(pvVar9);
    local_40 = (undefined4 *)&stack0xffffff74;
    uStack_9c = 0x49920e;
    FUN_00591e00(&stack0xffffff74,"has_%s");
    local_8 = 6;
    puVar4 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar4,pbVar13);
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
      FUN_004127d0();
      FUN_004b8550();
    }
  }
  ExceptionList = local_10;
  return;
}


void FUN_00499260(void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  void *pvVar6;
  undefined4 extraout_ECX_00;
  int iVar7;
  uint uVar8;
  void *in_stack_fffffe98;
  uint local_14c;
  uint in_stack_fffffec0;
  byte *pbVar9;
  Color3B local_113 [3];
  undefined1 *local_110;
  undefined4 local_10c;
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005baae7;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if (3 < (uint)(*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408))) {
    local_10c = (uint *)&stack0xfffffec0;
    pbVar9 = (byte *)(in_stack_fffffec0 & 0xffffff00);
    local_14c = 0x4992df;
    FUN_00402690(&stack0xfffffec0,"no_procgen_passengers",0x15);
    local_8 = 0;
    puVar4 = FUN_00412df0();
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    bVar3 = FUN_004a1150(puVar4,pbVar9);
    if (bVar3 == 0) {
      uVar8 = 0;
      iVar7 = *(int *)(iVar1 + 0x408);
      if (*(int *)(iVar1 + 0x40c) - iVar7 >> 2 != 0) {
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          local_8 = 3;
          FUN_004024e0(&stack0xfffffec0,
                       (undefined4 *)(*(int *)(*(int *)(iVar7 + uVar8 * 4) + 0xc) + 0x18));
          local_10c = (uint *)FUN_004a6de0(pbVar9);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Name : `7%s\n");
          local_8._0_1_ = 4;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 3;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 3;
          if (0xf < local_34) {
            pvVar6 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar6 = *(void **)((int)local_48[0] + -4),
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_004995c4;
            FUN_005adb3f(pvVar6);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Dest.: `7%s\n");
          local_8._0_1_ = 5;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 3;
          if (0xf < local_34) {
            pvVar6 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar6 = *(void **)((int)local_48[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_004995c4;
            FUN_005adb3f(pvVar6);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Offer: `$%dc");
          local_8._0_1_ = 6;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 3;
          if (0xf < local_34) {
            pvVar6 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar6 = *(void **)((int)local_48[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_004995c4;
            FUN_005adb3f(pvVar6);
          }
          pbVar9 = (byte *)0x4994e5;
          cocos2d::Color3B::Color3B(local_113,'@','@',0x80);
          local_10c = &local_14c;
          FUN_004024e0(&local_14c,local_30);
          local_8._0_1_ = 7;
          in_stack_fffffe98 = (void *)((uint)in_stack_fffffe98 & 0xffffff00);
          FUN_00402690(&stack0xfffffe98,&PTR_005ce008,0);
          local_8._0_1_ = 3;
          puVar5 = FUN_0043b590(local_a8,uVar8,in_stack_fffffe98);
          local_8 = CONCAT31(local_8._1_3_,8);
          puVar4 = *(undefined4 **)((int)param_1 + 4);
          if (*(undefined4 **)((int)param_1 + 8) == puVar4) {
            FUN_0043ce10(param_1,puVar4,puVar5);
          }
          else {
            FUN_0043cd30(extraout_ECX,puVar4,puVar5);
            *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
          }
          FUN_0043bfa0((int)local_a8);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pvVar6 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar6 = *(void **)((int)local_30[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
LAB_004995c4:
              local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar6);
          }
          uVar8 = uVar8 + 1;
          iVar7 = *(int *)(iVar1 + 0x408);
        } while (uVar8 < (uint)(*(int *)(iVar1 + 0x40c) - iVar7 >> 2));
      }
      goto LAB_0049968a;
    }
  }
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_10c + 1),'\0','\0','\0');
  local_110 = (undefined1 *)&local_14c;
  local_14c = local_14c & 0xffffff00;
  FUN_00402690(&local_14c,"`8[no passengers here]",0x16);
  local_8 = 1;
  in_stack_fffffe98 = (void *)((uint)in_stack_fffffe98 & 0xffffff00);
  FUN_00402690(&stack0xfffffe98,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar5 = FUN_0043b590(local_108,0xffffffff,in_stack_fffffe98);
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puVar4 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar4) {
    FUN_0043ce10(param_1,puVar4,puVar5);
  }
  else {
    FUN_0043cd30(extraout_ECX_00,puVar4,puVar5);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  FUN_0043bfa0((int)local_108);
LAB_0049968a:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004996b0(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  Color3B *pCVar7;
  int iVar8;
  uint *puVar9;
  void *pvVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint in_stack_ffffff80;
  byte *pbVar14;
  Color3B local_57 [3];
  int local_54;
  int *local_50;
  undefined1 *local_4c;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bab38;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  iVar8 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  local_54 = iVar8;
  if (3 < (uint)(*(int *)(iVar8 + 0x40c) - *(int *)(iVar8 + 0x408))) {
    local_4c = &stack0xffffff80;
    pbVar14 = (byte *)(in_stack_ffffff80 & 0xffffff00);
    FUN_00402690(&stack0xffffff80,"no_procgen_passengers",0x15);
    local_8 = 0;
    puVar4 = FUN_00412df0();
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    bVar2 = FUN_004a1150(puVar4,pbVar14);
    if (bVar2 == 0) {
      iVar11 = *(int *)(iVar8 + 0x408);
      iVar8 = *(int *)(iVar8 + 0x40c) - iVar11 >> 2;
      if (((param_1[1] - *param_1) / 0x60 == iVar8) && (uVar13 = 0, iVar8 != 0)) {
        iVar8 = 0;
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          local_8 = 1;
          FUN_004024e0(&stack0xffffff80,
                       (undefined4 *)(*(int *)(*(int *)(iVar11 + uVar13 * 4) + 0xc) + 0x18));
          local_4c = (undefined1 *)FUN_004a6de0(pbVar14);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Name : `7%s\n");
          local_8._0_1_ = 2;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 1;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 1;
          if (0xf < local_34) {
            pvVar10 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar10 = *(void **)((int)local_48[0] + -4),
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_00499a3c;
            FUN_005adb3f(pvVar10);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Dest.: `7%s\n");
          local_8._0_1_ = 3;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 1;
          if (0xf < local_34) {
            pvVar10 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar10 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_00499a3c;
            FUN_005adb3f(pvVar10);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Offer: `$%dc");
          local_8._0_1_ = 4;
          puVar4 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar4 = (undefined4 *)*puVar5;
          }
          FUN_00403640(local_30,puVar4,puVar5[4]);
          local_8._0_1_ = 1;
          if (0xf < local_34) {
            pvVar10 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar10 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_00499a3c;
            FUN_005adb3f(pvVar10);
          }
          puVar12 = (uint *)(*local_50 + iVar8);
          if (*puVar12 != uVar13) {
LAB_00499a16:
            if (0xf < local_1c) {
              pvVar10 = local_30[0];
              if ((0xfff < local_1c + 1) &&
                 (pvVar10 = *(void **)((int)local_30[0] + -4), uVar1 = (undefined1)local_8,
                 0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) {
LAB_00499a3c:
                local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar10);
            }
            break;
          }
          puVar9 = puVar12 + 1;
          if (0xf < puVar12[6]) {
            puVar9 = (uint *)puVar12[1];
          }
          uVar6 = FUN_004031f0((byte *)puVar9,puVar12[5],(byte *)&PTR_005ce008,0);
          if ((((char)uVar6 == '\0') || (puVar12[7] != 0xffffffff)) ||
             (uVar6 = FUN_00413e90((byte *)(puVar12 + 8),(byte *)local_30), (char)uVar6 != '\0'))
          goto LAB_00499a16;
          pCVar7 = (Color3B *)cocos2d::Color3B::Color3B(local_57,'@','@',0x80);
          bVar3 = cocos2d::Color3B::operator!=((Color3B *)(puVar12 + 0x16),pCVar7);
          if (((bVar3) || (*(int *)(iVar8 + 0x50 + *local_50) != -999)) ||
             (*(char *)(iVar8 + 0x5e + *local_50) != '\0')) goto LAB_00499a16;
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pvVar10 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar10 = *(void **)((int)local_30[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) goto LAB_00499a3c;
            FUN_005adb3f(pvVar10);
          }
          uVar13 = uVar13 + 1;
          iVar8 = iVar8 + 0x60;
          iVar11 = *(int *)(local_54 + 0x408);
        } while (uVar13 < (uint)(*(int *)(local_54 + 0x40c) - iVar11 >> 2));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00499a70(void *this,undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  byte *in_stack_ffffff9c;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005babc1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xcc) == 4) {
    cVar2 = FUN_0040fd70();
    if (cVar2 == '\0') {
      if (*(int *)((int)this + 0xd8) == -1) {
        FUN_00403640(param_1,
                     "Use this screen to take passengers aboard your ship. \n\nYour ship can only take one passenger at once so make sure their destination is achievable for you. Passengers automatically get off and don\'t pay you if you take too long.\n\n"
                     ,0xe5);
        goto LAB_0049a01a;
      }
      FUN_004024e0(&stack0xffffff9c,
                   (undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) +
                                              0x408) + *(int *)((int)this + 0xd8) * 4) + 0xc) + 0x18
                   ));
      iVar3 = FUN_004a6de0(in_stack_ffffff9c);
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Name  : `7%s\n");
      local_8 = 6;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Dest. : `7%s\n");
      local_8 = 7;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(iVar3 + 0x24) == *(int *)(DAT_0065b5cc + 0xd8)) {
        FUN_00403640(param_1,"`%Sector: `#[this sector]\n",0x1a);
      }
      else {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sector: `!%s\n");
        local_8 = 8;
        puVar5 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar5 = (undefined4 *)*puVar4;
        }
        FUN_00403640(param_1,puVar5,puVar4[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Fare  : `$%dc");
      local_8 = 9;
      uVar1 = puVar5[5];
    }
    else {
      FUN_00403640(param_1,"`!Current passenger:\n",0x15);
      if (*(int *)(DAT_0065b5cc + 0x128) == 0) {
        FUN_00403640(param_1,"`!*SPECIAL* `%(not booked through AutoTravel)\n",0x2e);
        goto LAB_0049a01a;
      }
      FUN_004024e0(&stack0xffffff9c,*(undefined4 **)(*(int *)(DAT_0065b5cc + 0x128) + 0xc));
      FUN_004a6de0(in_stack_ffffff9c);
      FUN_004024e0(&stack0xffffff9c,
                   (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) + 0x18));
      iVar3 = FUN_004a6de0(in_stack_ffffff9c);
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Name  : `7%s\n");
      local_8 = 1;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Origin: `7%s\n");
      local_8 = 2;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Dest. : `7%s\n");
      local_8 = 3;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(iVar3 + 0x24) == *(int *)(DAT_0065b5cc + 0xd8)) {
        FUN_00403640(param_1,"`%Sector: `#[this sector]\n",0x1a);
      }
      else {
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sector: `!%s\n");
        local_8 = 4;
        puVar5 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar5 = (undefined4 *)*puVar4;
        }
        FUN_00403640(param_1,puVar5,puVar4[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Fare  : `$%dc");
      local_8 = 5;
      uVar1 = puVar5[5];
    }
    puVar4 = puVar5;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar5;
    }
    FUN_00403640(param_1,puVar4,puVar5[4]);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
LAB_0049a01a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0049a040(void *this,undefined1 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005bac89;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!%s\n`%%Cargo Status\n\n");
  local_8 = 1;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  iVar5 = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  do {
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xe);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Pods   : `%%%d/%d\n");
  local_8 = 2;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar5 = 7;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Solid  : `%%%d units\n");
  local_8 = 3;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar5 = 0xe;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Temp   : `%%%d units\n");
  local_8 = 4;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar5 = 0xe;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Shield : `%%%d units\n");
  local_8 = 5;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  iVar6 = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar5 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xe);
  FUN_00506c20(iVar5);
  FUN_00506c20(iVar5);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cargo  : `%c%d`%%/%d units\n");
  local_8 = 6;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_005072f0(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Value  : `%c%dc\n");
  local_8 = 7;
  puVar4 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar4,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pvVar7 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar7 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (*(int *)((int)this + 0xf0) != -1) {
    iVar5 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                    *(int *)((int)this + 0xf0) * 4);
    FUN_00403640(param_1,&DAT_005e310c,2);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Pod #%d\n\n");
    local_8 = 8;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Type : `8none\n");
      local_8 = 0x10;
      uVar1 = puVar4[5];
    }
    else {
      FUN_005069b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),(undefined1 *)local_2c,
                   *(uint *)((int)this + 0xf0),'\0');
      local_8 = 9;
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Type : %s\n");
      local_8._0_1_ = 10;
      puVar4 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar4 = (undefined4 *)*puVar2;
      }
      FUN_00403640(param_1,puVar4,puVar2[4]);
      local_8._0_1_ = 9;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      piVar3 = FUN_004a84a0(*(int *)(iVar5 + 4));
      if ((*(int *)(iVar5 + 8) < 1) || (piVar3 == (int *)0x0)) {
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Good : `8n/a\n");
        local_8 = 0xe;
        puVar4 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar4 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar4,puVar2[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Amt. : `8n/a\n");
        local_8 = 0xf;
        uVar1 = puVar4[5];
      }
      else {
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Good : `%%%s\n");
        local_8 = 0xb;
        puVar4 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar4 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar4,puVar2[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Amt. : `%%%d/%d\n");
        local_8 = 0xc;
        puVar4 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar4 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar4,puVar2[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Value: `%%Apr. `$%dc");
        local_8 = 0xd;
        uVar1 = puVar4[5];
      }
    }
    puVar2 = puVar4;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar2,puVar4[4]);
    if (0xf < local_30) {
      pvVar7 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar7 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0049a990(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  void *pvVar6;
  uint uVar7;
  void *in_stack_fffffe98;
  undefined1 local_14c [12];
  undefined4 uStack_140;
  Color3B local_117 [3];
  undefined1 *local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bacfc;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_10c = *(int *)(DAT_0065b5cc + 0xd8);
  iVar5 = *(int *)(local_10c + 0x11c);
  iVar2 = *(int *)(local_10c + 0x120) - iVar5 >> 2;
  if (iVar2 == 0) {
    uStack_140 = 0x49aa02;
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_10c + 1),'\0','\0','\0');
    local_110 = local_14c;
    local_14c[0] = 0;
    FUN_00402690(local_14c,"`8[no bounties]",0xf);
    local_8 = 0;
    in_stack_fffffe98 = (void *)((uint)in_stack_fffffe98 & 0xffffff00);
    FUN_00402690(&stack0xfffffe98,&PTR_005ce008,0);
    local_8 = 0xffffffff;
    puVar3 = FUN_0043b590(local_a8,0xffffffff,in_stack_fffffe98);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    puVar4 = *(undefined4 **)((int)param_1 + 4);
    if (*(undefined4 **)((int)param_1 + 8) == puVar4) {
      FUN_0043ce10(param_1,puVar4,puVar3);
    }
    else {
      FUN_0043cd30(extraout_ECX,puVar4,puVar3);
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
    }
    FUN_0043bfa0((int)local_a8);
  }
  else {
    uVar7 = 0;
    if (iVar2 != 0) {
      do {
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        local_8 = 2;
        puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        if (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
          do {
            if (*(int *)*puVar4 == *(int *)(*(int *)(*(int *)(iVar5 + uVar7 * 4) + 0x4c) + 0x18))
            break;
            puVar4 = puVar4 + 1;
          } while (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40));
        }
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Name : `7%s\n");
        local_8._0_1_ = 3;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_30,puVar4,puVar3[4]);
        local_8._0_1_ = 2;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 2;
        if (0xf < local_34) {
          pvVar6 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar6 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_0049ad7c;
          FUN_005adb3f(pvVar6);
        }
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Sect.: `7%s\n");
        local_8._0_1_ = 4;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_30,puVar4,puVar3[4]);
        local_8._0_1_ = 2;
        if (0xf < local_34) {
          pvVar6 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar6 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_0049ad7c;
          FUN_005adb3f(pvVar6);
        }
        iVar2 = local_10c;
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Value: `$%dc");
        local_8._0_1_ = 5;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_30,puVar4,puVar3[4]);
        local_8._0_1_ = 2;
        if (0xf < local_34) {
          pvVar6 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar6 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_0049ad7c;
          FUN_005adb3f(pvVar6);
        }
        uStack_140 = 0x49ac97;
        cocos2d::Color3B::Color3B(local_117,'@','@',' ');
        local_114 = local_14c;
        FUN_004024e0(local_14c,local_30);
        local_8._0_1_ = 6;
        in_stack_fffffe98 = (void *)((uint)in_stack_fffffe98 & 0xffffff00);
        FUN_00402690(&stack0xfffffe98,&PTR_005ce008,0);
        local_8._0_1_ = 2;
        puVar3 = FUN_0043b590(local_108,uVar7,in_stack_fffffe98);
        local_8 = CONCAT31(local_8._1_3_,7);
        puVar4 = *(undefined4 **)((int)param_1 + 4);
        if (*(undefined4 **)((int)param_1 + 8) == puVar4) {
          FUN_0043ce10(param_1,puVar4,puVar3);
        }
        else {
          FUN_0043cd30(extraout_ECX_00,puVar4,puVar3);
          *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
        }
        FUN_0043bfa0((int)local_108);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_1c) {
          pvVar6 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar6 = *(void **)((int)local_30[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
LAB_0049ad7c:
            local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        uVar7 = uVar7 + 1;
        iVar5 = *(int *)(iVar2 + 0x11c);
      } while (uVar7 < (uint)(*(int *)(iVar2 + 0x120) - iVar5 >> 2));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0049ad90(int *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte ******ppppppbVar5;
  Color3B *pCVar6;
  undefined4 *puVar7;
  void *pvVar8;
  uint *puVar9;
  byte ******ppppppbVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  Color3B local_5b [3];
  uint local_58;
  int *local_54;
  int local_50;
  int local_4c;
  void *local_48 [5];
  uint local_34;
  byte *****local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bad50;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = param_1;
  local_50 = *(int *)(DAT_0065b5cc + 0xd8);
  iVar14 = *(int *)(local_50 + 0x11c);
  iVar11 = *(int *)(local_50 + 0x120) - iVar14 >> 2;
  if (((iVar11 != 0) && ((param_1[1] - *param_1) / 0x60 == iVar11)) && (local_58 = 0, iVar11 != 0))
  {
    local_4c = 0;
    do {
      uVar4 = local_58;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (byte *****)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      if (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
        do {
          if (*(int *)*puVar7 == *(int *)(*(int *)(*(int *)(iVar14 + local_58 * 4) + 0x4c) + 0x18))
          break;
          puVar7 = puVar7 + 1;
        } while (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40));
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Name : `7%s\n");
      local_8._0_1_ = 1;
      puVar7 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar7 = (undefined4 *)*puVar3;
      }
      FUN_00403640(local_30,puVar7,puVar3[4]);
      local_8._0_1_ = 0;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 0;
      if (0xf < local_34) {
        pvVar8 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar8 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_0049b10c;
        FUN_005adb3f(pvVar8);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Sect.: `7%s\n");
      local_8._0_1_ = 2;
      puVar7 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar7 = (undefined4 *)*puVar3;
      }
      FUN_00403640(local_30,puVar7,puVar3[4]);
      local_8._0_1_ = 0;
      if (0xf < local_34) {
        pvVar8 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar8 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_0049b10c;
        FUN_005adb3f(pvVar8);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"`%%Value: `$%dc");
      local_8._0_1_ = 3;
      puVar7 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar7 = (undefined4 *)*puVar3;
      }
      FUN_00403640(local_30,puVar7,puVar3[4]);
      local_8._0_1_ = 0;
      if (0xf < local_34) {
        pvVar8 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar8 = *(void **)((int)local_48[0] + -4), uVar1 = (undefined1)local_8,
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_0049b10c;
        FUN_005adb3f(pvVar8);
      }
      puVar13 = (uint *)(local_4c + *local_54);
      uVar12 = local_1c;
      ppppppbVar10 = (byte ******)local_30[0];
      if (*puVar13 != uVar4) {
LAB_0049b0ec:
        if (0xf < uVar12) {
          ppppppbVar5 = ppppppbVar10;
          if ((0xfff < uVar12 + 1) &&
             (ppppppbVar5 = (byte ******)ppppppbVar10[-1], uVar1 = (undefined1)local_8,
             (byte *)0x1f < (byte *)((int)ppppppbVar10 + (-4 - (int)ppppppbVar5)))) {
LAB_0049b10c:
            local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppppbVar5);
        }
        break;
      }
      puVar9 = puVar13 + 1;
      if (0xf < puVar13[6]) {
        puVar9 = (uint *)puVar13[1];
      }
      uVar4 = FUN_004031f0((byte *)puVar9,puVar13[5],(byte *)&PTR_005ce008,0);
      uVar12 = local_1c;
      ppppppbVar10 = (byte ******)local_30[0];
      if (((char)uVar4 == '\0') || (puVar13[7] != 0xffffffff)) goto LAB_0049b0ec;
      puVar9 = puVar13 + 8;
      ppppppbVar5 = local_30;
      if (0xf < local_1c) {
        ppppppbVar5 = (byte ******)local_30[0];
      }
      if (0xf < puVar13[0xd]) {
        puVar9 = (uint *)puVar13[8];
      }
      uVar4 = FUN_004031f0((byte *)puVar9,puVar13[0xc],(byte *)ppppppbVar5,local_20);
      if ((char)uVar4 == '\0') goto LAB_0049b0ec;
      pCVar6 = (Color3B *)cocos2d::Color3B::Color3B(local_5b,'@','@',' ');
      bVar2 = cocos2d::Color3B::operator!=((Color3B *)(puVar13 + 0x16),pCVar6);
      iVar14 = local_4c;
      uVar12 = local_1c;
      ppppppbVar10 = (byte ******)local_30[0];
      if (((bVar2) || (*(int *)(local_4c + 0x50 + *local_54) != -999)) ||
         (*(char *)(local_4c + 0x5e + *local_54) != '\0')) goto LAB_0049b0ec;
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < local_1c) {
        if ((0xfff < local_1c + 1) &&
           (ppppppbVar10 = (byte ******)local_30[0][-1], uVar1 = (undefined1)local_8,
           (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppppbVar10)))) goto LAB_0049b10c;
        FUN_005adb3f(ppppppbVar10);
      }
      local_4c = iVar14 + 0x60;
      local_58 = local_58 + 1;
      iVar14 = *(int *)(local_50 + 0x11c);
    } while (local_58 < (uint)(*(int *)(local_50 + 0x120) - iVar14 >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0049b140(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte *in_stack_ffffff9c;
  char *pcVar5;
  uint uVar6;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba5b1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xe4) == -1) goto LAB_0049b54f;
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x11c) + *(int *)((int)this + 0xe4) * 4)
  ;
  FUN_004024e0(&stack0xffffff9c,(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x24));
  FUN_004a80d0(in_stack_ffffff9c);
  puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      if (*(int *)*puVar3 == *(int *)(*(int *)(iVar1 + 0x4c) + 0x18)) break;
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Target: `@%s\n");
  local_8 = 1;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Ship  : `$%s\n");
  local_8 = 2;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Rego  : `!%s\n");
  local_8 = 3;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Class : `7%s\n");
  local_8 = 4;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Locat.: `7%s\n");
  local_8 = 5;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x1c);
  if (iVar1 == 0) {
    uVar6 = 0x14;
    pcVar5 = "`%Threat: `0Minimal\n";
LAB_0049b473:
    FUN_00403640(param_1,pcVar5,uVar6);
  }
  else {
    if (iVar1 == 1) {
      uVar6 = 0x15;
      pcVar5 = "`%Threat: `$Possible\n";
      goto LAB_0049b473;
    }
    if (iVar1 == 2) {
      uVar6 = 0x16;
      pcVar5 = "`%Threat: `@Dangerous\n";
      goto LAB_0049b473;
    }
  }
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Reward: `$%dc\n");
  local_8 = 6;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  puVar2 = (undefined4 *)
           FUN_00591e00((undefined1 *)local_2c,
                        "\n`7The `%%%s`7 will be the only vessel of its class in the sector.");
  local_8 = 7;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640(param_1,puVar3,puVar2[4]);
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
LAB_0049b54f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __fastcall FUN_0049b570(int param_1)

{
  int *piVar1;
  uint in_EAX;
  undefined4 *puVar2;
  int iVar3;
  size_t _Size;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 local_c [2];
  
  iVar3 = DAT_0065b5cc;
  if ((*(int *)(param_1 + 0xcc) == 5) && (*(int *)(param_1 + 0xe4) != -1)) {
    local_18 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x11c) +
                       *(int *)(param_1 + 0xe4) * 4);
    *(undefined1 *)(*(int *)(local_18 + 0x4c) + 4) = 1;
    *(undefined4 *)(local_18 + 0x50) = **(undefined4 **)(iVar3 + 0xd8);
    piVar1 = *(int **)(iVar3 + 0x134);
    local_10 = param_1;
    if (*(int **)(iVar3 + 0x138) == piVar1) {
      FUN_00414080((void *)(iVar3 + 0x130),piVar1,&local_18);
    }
    else {
      *piVar1 = local_18;
      *(int *)(iVar3 + 0x134) = *(int *)(iVar3 + 0x134) + 4;
    }
    local_14 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0x120);
    puVar2 = FUN_00414000(local_c,&local_18,*(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0x11c),
                          local_14);
    piVar1 = (int *)*puVar2;
    local_18 = *(int *)(DAT_0065b5cc + 0xd8);
    if (piVar1 != local_14) {
      _Size = *(int *)(local_18 + 0x120) - (int)local_14;
      memmove(piVar1,local_14,_Size);
      *(size_t *)(local_18 + 0x120) = _Size + (int)piVar1;
      param_1 = local_10;
    }
    FUN_00591070(&DAT_005cdc70,"Taken bounty for %s in sector %d");
    iVar3 = *(int *)(DAT_0065b5cc + 0xcc);
    if (*(int *)(iVar3 + 0x70) == 2) {
      FUN_004127d0();
      iVar3 = FUN_004b8550();
    }
    *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


void FUN_0049b6c0(void)

{
  if (DAT_0065c2ec == 0) {
    DAT_0065c2ec = FUN_005adb0f(1);
  }
  return;
}


void __fastcall FUN_0049b6f0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((uint *)*param_1 != (uint *)0x0) {
    FUN_0049ba30((uint *)*param_1,(uint *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x44) * 0x44)) &&
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


void __fastcall FUN_0049b770(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  uVar3 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_3 + 0x38) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0xf;
  param_3[0x28] = 0;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  return;
}


int __thiscall FUN_0049b7f0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  uint *puVar11;
  undefined1 *puVar12;
  void *pvVar13;
  uint *puVar14;
  
  iVar4 = ((int)param_1 - *(int *)this) / 0x44;
  iVar5 = (*(int *)((int)this + 4) - *(int *)this) / 0x44;
  if (iVar5 == 0x3c3c3c3) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar5 + 1;
  uVar9 = (*(int *)((int)this + 8) - *(int *)this) / 0x44;
  uVar7 = uVar1;
  if ((uVar9 <= 0x3c3c3c3 - (uVar9 >> 1)) && (uVar7 = (uVar9 >> 1) + uVar9, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar9 = uVar7 * 0x44;
  if (uVar7 < 0x3c3c3c4) {
    if (0xfff < uVar9) goto LAB_0049b88d;
    if (uVar9 == 0) {
      puVar11 = (uint *)0x0;
      uVar10 = 0;
    }
    else {
      puVar11 = (uint *)FUN_005adb0f(uVar9);
      uVar10 = extraout_ECX_00;
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_0049b88d:
    uVar8 = uVar9 + 0x23;
    if (uVar8 <= uVar9) {
      uVar8 = 0xffffffff;
    }
    uVar9 = FUN_005adb0f(uVar8);
    if (uVar9 == 0) goto LAB_0049ba17;
    puVar11 = (uint *)(uVar9 + 0x23 & 0xffffffe0);
    puVar11[-1] = uVar9;
    uVar10 = extraout_ECX;
  }
  FUN_0049b770(uVar10,(undefined1 *)(puVar11 + iVar4 * 0x11),param_2);
  puVar2 = *(undefined1 **)((int)this + 4);
  puVar12 = *(undefined1 **)this;
  puVar14 = puVar11;
  puVar6 = puVar2;
  if (param_1 == puVar2) {
    for (; puVar12 != puVar2; puVar12 = puVar12 + 0x44) {
      FUN_0049b770(puVar6,(undefined1 *)puVar14,puVar12);
      puVar6 = extraout_ECX_01;
      puVar14 = puVar14 + 0x11;
    }
  }
  else {
    for (; puVar12 != param_1; puVar12 = puVar12 + 0x44) {
      FUN_0049b770(puVar2,(undefined1 *)puVar14,puVar12);
      puVar2 = extraout_ECX_02;
      puVar14 = puVar14 + 0x11;
    }
    FUN_0049ba30(puVar14,puVar14);
    puVar14 = puVar11 + iVar4 * 0x11 + 0x11;
    puVar2 = *(undefined1 **)((int)this + 4);
    if (param_1 != puVar2) {
      puVar12 = param_1 + (int)puVar14 + (iVar4 * -0x44 - (int)puVar11) + -0x44;
      do {
        FUN_0049b770(param_1,(undefined1 *)puVar14,puVar12);
        puVar12 = puVar12 + 0x44;
        puVar14 = puVar14 + 0x11;
        param_1 = extraout_ECX_03;
      } while (puVar12 != puVar2);
    }
  }
  FUN_0049ba30(puVar14,puVar14);
  if (*(uint **)this != (uint *)0x0) {
    FUN_0049ba30(*(uint **)this,*(uint **)((int)this + 4));
    pvVar3 = *(void **)this;
    pvVar13 = pvVar3;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar3) / 0x44) * 0x44)) &&
       (pvVar13 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar13)))) {
LAB_0049ba17:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  *(uint **)this = puVar11;
  *(uint **)((int)this + 4) = puVar11 + uVar1 * 0x11;
  *(uint **)((int)this + 8) = puVar11 + uVar7 * 0x11;
  return *(int *)this + iVar4 * 0x44;
}


void __fastcall FUN_0049ba30(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 0xf;
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
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 0x11;
    } while (puVar1 != param_2);
  }
  return;
}


void __thiscall FUN_0049baa0(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (piVar2[4] < *param_2) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (piVar3[4] <= *param_2)) {
      *param_1 = piVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  piVar2 = (int *)FUN_00421370(this,param_2,&param_2);
  FUN_004213a0(this,&param_2,piVar3,piVar2 + 4,piVar2);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


undefined4 * __thiscall FUN_0049bb20(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = DAT_0065b5cc;
  uVar4 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(int *)((int)this + 0x14) = param_1;
  puVar2 = *(undefined4 **)(iVar1 + 0x84);
  uVar3 = *(int *)(iVar1 + 0x88) - (int)puVar2 >> 2;
  if (uVar3 != 0) {
    do {
      piVar5 = (int *)*puVar2;
      if (*piVar5 == param_1) goto LAB_0049bb81;
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  piVar5 = (int *)0x0;
LAB_0049bb81:
  FUN_004024e0((void *)((int)this + 0x18),(undefined4 *)piVar5[7]);
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  return this;
}


void __fastcall FUN_0049bbb0(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_8;
  
  uVar6 = 0;
  puVar8 = (undefined4 *)param_1[0x1c];
  uVar5 = (param_1[0x1d] - (int)puVar8) + 3U >> 2;
  if ((undefined4 *)param_1[0x1d] < puVar8) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      if ((undefined4 *)*puVar8 != (undefined4 *)0x0) {
        FUN_0049c1a0((undefined4 *)*puVar8);
      }
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar6 != uVar5);
  }
  param_1[0x1d] = param_1[0x1c];
  puVar8 = (undefined4 *)param_1[0x20];
  for (puVar7 = (undefined4 *)param_1[0x1f]; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    puVar1 = (undefined4 *)*puVar7;
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_005adb3f((void *)*puVar1);
      }
      if (0xf < (uint)puVar1[0xb]) {
        pvVar2 = (void *)puVar1[6];
        pvVar4 = pvVar2;
        if ((0xfff < puVar1[0xb] + 1) &&
           (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
        goto LAB_0049c18f;
        FUN_005adb3f(pvVar4);
      }
      puVar1[10] = 0;
      puVar1[0xb] = 0xf;
      *(undefined1 *)(puVar1 + 6) = 0;
      FUN_005adb3f(puVar1);
    }
  }
  param_1[0x20] = param_1[0x1f];
  puVar8 = (undefined4 *)param_1[0x23];
  for (puVar7 = (undefined4 *)param_1[0x22]; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    puVar1 = (undefined4 *)*puVar7;
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_005adb3f((void *)*puVar1);
      }
      if (0xf < (uint)puVar1[0xb]) {
        pvVar2 = (void *)puVar1[6];
        pvVar4 = pvVar2;
        if ((0xfff < puVar1[0xb] + 1) &&
           (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
        goto LAB_0049c18f;
        FUN_005adb3f(pvVar4);
      }
      puVar1[10] = 0;
      puVar1[0xb] = 0xf;
      *(undefined1 *)(puVar1 + 6) = 0;
      FUN_005adb3f(puVar1);
    }
  }
  param_1[0x23] = param_1[0x22];
  puVar8 = (undefined4 *)param_1[0x13];
  local_8 = 0;
  uVar5 = (param_1[0x14] - (int)puVar8) + 3U >> 2;
  if ((undefined4 *)param_1[0x14] < puVar8) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      pvVar2 = (void *)*puVar8;
      if (pvVar2 != (void *)0x0) {
        FUN_0049c210((int)pvVar2);
        FUN_005adb3f(pvVar2);
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 1;
    } while (local_8 != uVar5);
  }
  param_1[0x14] = param_1[0x13];
  puVar8 = (undefined4 *)param_1[0x28];
  local_8 = 0;
  uVar5 = (uint)(param_1[0x29] + (3 - (int)puVar8)) >> 2;
  if ((undefined4 *)param_1[0x29] < puVar8) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      piVar3 = (int *)*puVar8;
      if (piVar3 != (int *)0x0) {
        FUN_00484040(piVar3);
        FUN_005adb3f(piVar3);
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 1;
    } while (local_8 != uVar5);
  }
  param_1[0x29] = param_1[0x28];
  pvVar2 = (void *)param_1[0x28];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x2a] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  pvVar2 = (void *)param_1[0x25];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x27] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  pvVar2 = (void *)param_1[0x22];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x24] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  pvVar2 = (void *)param_1[0x1f];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x21] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  pvVar2 = (void *)param_1[0x1c];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x1e] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  pvVar2 = (void *)param_1[0x19];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x1b] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  pvVar2 = (void *)param_1[0x16];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x18] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  pvVar2 = (void *)param_1[0x13];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x15] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  pvVar2 = (void *)param_1[0xf];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0x11] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  pvVar2 = (void *)param_1[0xc];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[0xe] - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  if (0xf < (uint)param_1[0xb]) {
    pvVar2 = (void *)param_1[6];
    pvVar4 = pvVar2;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0049c18f;
    FUN_005adb3f(pvVar4);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar2 = (void *)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_0049c18f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}
