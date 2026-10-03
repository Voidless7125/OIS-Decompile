#include "../ois_server.exe.h"


void __fastcall FUN_0042a2d0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x130);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x138) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x124);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 300) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x118);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x120) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x10c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x114) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0xd8)) {
    pvVar1 = *(void **)(param_1 + 0xc4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xd8) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  if (0xf < *(uint *)(param_1 + 0xc0)) {
    pvVar1 = *(void **)(param_1 + 0xac);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xc0) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xf;
  *(undefined1 *)(param_1 + 0xac) = 0;
  if (0xf < *(uint *)(param_1 + 0xa8)) {
    pvVar1 = *(void **)(param_1 + 0x94);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xa8) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf;
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (0xf < *(uint *)(param_1 + 0x90)) {
    pvVar1 = *(void **)(param_1 + 0x7c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x90) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xf;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  if (0xf < *(uint *)(param_1 + 0x78)) {
    pvVar1 = *(void **)(param_1 + 100);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x78) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0042a613;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xf;
  *(undefined1 *)(param_1 + 100) = 0;
  if (0xf < *(uint *)(param_1 + 0x60)) {
    pvVar1 = *(void **)(param_1 + 0x4c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x60) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0042a613:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}


int * __thiscall
FUN_0042a620(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int **this_00;
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1bd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar5 = (int *)((int)this + 0x3c);
  local_8 = 0;
  uVar3 = 0;
  piVar6 = (int *)*piVar5;
  uVar7 = *(int *)((int)this + 0x40) - (int)piVar6 >> 2;
  local_18 = this;
  local_14 = piVar5;
  if (uVar7 != 0) {
    do {
      if ((*(int *)*piVar6 == param_1) && (((int *)*piVar6)[1] == param_2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if (*(int *)(*piVar5 + uVar3 * 4) != 0) {
          FUN_0042a840(this,param_1,param_2);
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar3 < uVar7);
  }
  local_18 = (int *)FUN_005adb0f(0x70);
  this_00 = (int **)(local_18 + 4);
  *(undefined2 *)(local_18 + 2) = 0xffff;
  *local_18 = DAT_006558d0;
  local_18[1] = DAT_006558d4;
  *(undefined2 *)(local_18 + 2) = DAT_006558d8;
  local_18[8] = 0;
  local_18[9] = 0xf;
  *(undefined1 *)this_00 = 0;
  local_18[0xe] = 0;
  local_18[0xf] = 0xf;
  *(undefined1 *)(local_18 + 10) = 0;
  local_18[0x10] = 0x70000;
  local_18[0x11] = -1;
  local_18[0x16] = 0;
  local_18[0x17] = 0xf;
  *(undefined1 *)(local_18 + 0x12) = 0;
  *(undefined2 *)(local_18 + 0x18) = 0;
  local_18[0x19] = 0;
  local_18[0x1a] = 0;
  *local_18 = param_1;
  local_18[1] = param_2;
  *(undefined2 *)(local_18 + 2) = (undefined2)param_3;
  local_14 = local_18;
  if (this_00 != &param_5) {
    ppiVar4 = &param_5;
    if (0xf < in_stack_00000028) {
      ppiVar4 = (int **)param_5;
    }
    FUN_00402690(this_00,ppiVar4,in_stack_00000024);
  }
  puVar1 = *(undefined4 **)((int)this + 0x40);
  if (*(undefined4 **)((int)this + 0x44) == puVar1) {
    FUN_00414080(piVar5,puVar1,&local_18);
    local_14 = local_18;
  }
  else {
    *puVar1 = local_14;
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 4;
  }
  if (DAT_0065b3d3 != '\0') {
    uVar3 = (uint)DAT_0065c30c;
    DAT_0065c30c = DAT_0065c30c + 1;
    FUN_0059d520(&param_1,(undefined4 *)(&DAT_00660428 + (uVar3 & 7) * 0x40));
    FUN_00591070("NETWORK","Added client with GUID %s, address %s");
  }
  if (0xf < in_stack_00000028) {
    piVar5 = param_5;
    if ((0xfff < in_stack_00000028 + 1) &&
       (piVar5 = (int *)param_5[-1], 0x1f < (uint)((int)param_5 + (-4 - (int)piVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar5);
  }
  ExceptionList = local_10;
  return local_14;
}


void __thiscall FUN_0042a840(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *_Src;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *_Dst;
  size_t _Size;
  
  uVar2 = 0;
  _Dst = *(undefined4 **)((int)this + 0x3c);
  uVar4 = *(int *)((int)this + 0x40) - (int)_Dst >> 2;
  if (uVar4 != 0) {
    while ((piVar1 = (int *)_Dst[uVar2], *piVar1 != param_1 || (piVar1[1] != param_2))) {
      uVar2 = uVar2 + 1;
      if (uVar4 <= uVar2) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      if (DAT_0065b3d3 != '\0') {
        uVar2 = (uint)DAT_0065c30c;
        DAT_0065c30c = DAT_0065c30c + 1;
        FUN_0059d520(&param_1,(undefined4 *)(&DAT_00660428 + (uVar2 & 7) * 0x40));
        FUN_00591070("NETWORK","Removed client with GUID %s, IP %s");
        _Dst = *(undefined4 **)((int)this + 0x3c);
      }
      _Src = *(undefined4 **)((int)this + 0x40);
      if (_Dst != _Src) {
        do {
          if ((int *)*_Dst == piVar1) break;
          _Dst = _Dst + 1;
        } while (_Dst != _Src);
        if (_Dst != _Src) {
          puVar3 = _Dst + 1;
          uVar2 = 0;
          uVar4 = (uint)((int)_Src + (3 - (int)puVar3)) >> 2;
          if (_Src < puVar3) {
            uVar4 = 0;
          }
          if (uVar4 != 0) {
            do {
              if ((int *)*puVar3 != piVar1) {
                *_Dst = (int *)*puVar3;
                _Dst = _Dst + 1;
              }
              uVar2 = uVar2 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar2 != uVar4);
          }
          if (_Dst != _Src) {
            _Size = *(int *)((int)this + 0x40) - (int)_Src;
            memmove(_Dst,_Src,_Size);
            *(size_t *)((int)this + 0x40) = _Size + (int)_Dst;
          }
        }
      }
      FUN_004231d0(piVar1);
    }
  }
  return;
}


void FUN_0042a960(undefined4 *param_1,void *param_2)

{
  byte ***pppbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte ****ppppbVar5;
  byte **ppbVar6;
  undefined4 *puVar7;
  byte ****ppppbVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  uint in_stack_0000001c;
  uint in_stack_ffffff54;
  char *in_stack_ffffff6c;
  uint uVar12;
  undefined4 *local_6c [4];
  byte ***local_5c;
  int local_58;
  byte ***local_50;
  undefined1 *local_4c;
  undefined4 *local_48;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1c58;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_1;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff6c,&param_2);
  FUN_00592b60(local_6c,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  if (local_6c[0][4] == 0) {
                    // WARNING: Subroutine does not return
    FUN_004036c0();
  }
  uVar2 = local_6c[0][4] - 1;
  uVar4 = local_6c[0][10];
  if (uVar2 < (uint)local_6c[0][10]) {
    uVar4 = uVar2;
  }
  puVar7 = local_6c[0];
  if (0xf < (uint)local_6c[0][5]) {
    puVar7 = (undefined4 *)*local_6c[0];
  }
  FUN_00402690(local_2c,(void *)((int)puVar7 + 1),uVar4);
  local_8._0_1_ = 2;
  local_50 = (byte ***)local_2c;
  if (0xf < local_18) {
    local_50 = local_2c[0];
  }
  ppppbVar5 = local_2c;
  if (0xf < local_18) {
    ppppbVar5 = (byte ****)local_2c[0];
  }
  iVar11 = (int)((int)local_50 + local_1c) - (int)ppppbVar5;
  iVar10 = 0;
  if ((byte ****)((int)local_50 + local_1c) < ppppbVar5) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    do {
      iVar3 = tolower((int)(char)*(byte *)((int)ppppbVar5 + iVar10));
      *(byte *)((int)local_50 + iVar10) = (byte)iVar3;
      iVar10 = iVar10 + 1;
      param_1 = local_48;
    } while (iVar10 != iVar11);
  }
  FUN_004024e0(&stack0xffffff6c,local_6c[0] + 6);
  FUN_00592d70(&local_5c,' ',(undefined4 *)in_stack_ffffff6c);
  uVar4 = local_18;
  pppbVar1 = local_2c[0];
  local_8._0_1_ = 3;
  ppppbVar5 = local_2c;
  if (0xf < local_18) {
    ppppbVar5 = (byte ****)local_2c[0];
  }
  uVar2 = FUN_004031f0((byte *)ppppbVar5,local_1c,&DAT_005e7338,2);
  if ((char)uVar2 == '\0') {
    ppppbVar5 = local_2c;
    if (0xf < uVar4) {
      ppppbVar5 = (byte ****)pppbVar1;
    }
    uVar4 = FUN_004031f0((byte *)ppppbVar5,local_1c,&DAT_005e7360,4);
    if ((char)uVar4 != '\0') {
      local_34 = 0;
      local_30 = 0xf;
      uVar4 = (uint)local_44[0] >> 8;
      local_44[0] = (byte ***)(uVar4 << 8);
      local_8._0_1_ = 6;
      iVar10 = local_58 - (int)local_5c >> 0x1f;
      if ((local_58 - (int)local_5c) / 0x18 + iVar10 == iVar10) {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (byte ***)(uVar4 << 8);
      }
      else {
        if (local_44 != (byte ****)local_5c) {
          ppppbVar5 = (byte ****)local_5c;
          if ((byte ***)0xf < local_5c[5]) {
            ppppbVar5 = (byte ****)*local_5c;
          }
          FUN_00402690(local_44,ppppbVar5,(uint)local_5c[4]);
        }
        ppppbVar5 = local_44;
        if (0xf < local_30) {
          ppppbVar5 = (byte ****)local_44[0];
        }
        ppppbVar8 = local_44;
        if (0xf < local_30) {
          ppppbVar8 = (byte ****)local_44[0];
        }
        FUN_00413ec0(&local_48,tolower_exref,(char *)ppppbVar8,(char *)((int)ppppbVar5 + local_34),
                     (undefined1 *)ppppbVar5);
        uVar4 = local_34;
        ppppbVar5 = local_44;
        if (0xf < local_30) {
          ppppbVar5 = (byte ****)local_44[0];
        }
        uVar12 = 0x42abfd;
        uVar2 = FUN_004031f0((byte *)ppppbVar5,local_34,(byte *)"access",6);
        if ((char)uVar2 == '\0') {
          if (*(char *)((int)param_1 + 0x43) != '\0') {
            ppppbVar5 = local_44;
            if (0xf < local_30) {
              ppppbVar5 = (byte ****)local_44[0];
            }
            uVar4 = FUN_004031f0((byte *)ppppbVar5,uVar4,(byte *)"launch",6);
            if ((char)uVar4 != '\0') {
              FUN_0042ae60((int)local_4c);
            }
          }
        }
        else if ((uint)((local_58 - (int)local_5c) / 0x18) < 2) {
          local_4c = &stack0xffffff6c;
          pvVar9 = (void *)(uVar12 & 0xffffff00);
          FUN_00402690(&stack0xffffff6c,"Misssing RCON password.",0x17);
          local_8._0_1_ = 7;
          FUN_004122b0();
          local_8._0_1_ = 6;
          FUN_0041de30(param_1,pvVar9);
        }
        else {
          ppppbVar5 = (byte ****)(local_5c + 6);
          ppbVar6 = &DAT_00655780;
          if (0xf < DAT_00655794) {
            ppbVar6 = (byte **)DAT_00655780;
          }
          if ((byte ***)0xf < local_5c[0xb]) {
            ppppbVar5 = (byte ****)local_5c[6];
          }
          uVar4 = FUN_004031f0((byte *)ppppbVar5,(uint)local_5c[10],(byte *)ppbVar6,DAT_00655790);
          if ((char)uVar4 == '\0') {
            local_4c = &stack0xffffff6c;
            pvVar9 = (void *)(uVar12 & 0xffffff00);
            FUN_00402690(&stack0xffffff6c,"Invalid RCON password.",0x16);
            local_8._0_1_ = 10;
            FUN_004122b0();
            local_8._0_1_ = 6;
            FUN_0041de30(param_1,pvVar9);
          }
          else {
            *(undefined1 *)((int)param_1 + 0x43) = 1;
            local_4c = &stack0xffffff6c;
            FUN_00591e00(&stack0xffffff6c,"%s is now an admin");
            local_48 = (undefined4 *)&stack0xffffff54;
            local_8._0_1_ = 8;
            pvVar9 = (void *)(in_stack_ffffff54 & 0xffffff00);
            FUN_00402690(&stack0xffffff54,"system",6);
            local_8._0_1_ = 9;
            FUN_004122b0();
            local_8._0_1_ = 6;
            FUN_0041dc50(pvVar9);
          }
        }
        if (0xf < local_30) {
          ppppbVar5 = (byte ****)local_44[0];
          if ((0xfff < local_30 + 1) &&
             (ppppbVar5 = (byte ****)local_44[0][-1],
             (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar5);
        }
      }
    }
  }
  else {
    iVar10 = local_58 - (int)local_5c >> 0x1f;
    if ((local_58 - (int)local_5c) / 0x18 + iVar10 != iVar10) {
      local_4c = &stack0xffffff6c;
      FUN_00591e00(&stack0xffffff6c,"`!* %s %s");
      local_48 = (undefined4 *)&stack0xffffff54;
      local_8._0_1_ = 4;
      pvVar9 = (void *)(in_stack_ffffff54 & 0xffffff00);
      FUN_00402690(&stack0xffffff54,&PTR_005ce008,0);
      local_8._0_1_ = 5;
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      local_8._0_1_ = 3;
      FUN_0041dc50(pvVar9);
    }
  }
  FUN_004025a0((int *)&local_5c);
  if (0xf < local_18) {
    ppppbVar5 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar5 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  FUN_004025a0((int *)local_6c);
  if (0xf < in_stack_0000001c) {
    pvVar9 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar9 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042ae60(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint in_stack_ffffffac;
  void *pvVar5;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1c90;
  local_10 = ExceptionList;
  uStack_24 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = 0;
  FUN_00402690(local_3c,"Server forcing session to begin.",0x20);
  local_8 = 0;
  pvVar5 = (void *)(in_stack_ffffffac & 0xffffff00);
  FUN_00402690(&stack0xffffffac,"system",6);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (DAT_0065c2c8 == 0) {
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  local_8 = 0xffffffff;
  FUN_0041dc50(pvVar5);
  piVar2 = *(int **)(param_1 + 0x3c);
  uVar3 = 0;
  uVar4 = (uint)((int)*(int **)(param_1 + 0x40) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(param_1 + 0x40) < piVar2) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar1 + 0x41) = 1;
    } while (uVar3 != uVar4);
  }
  ExceptionList = local_10;
  return;
}


uint * __thiscall FUN_0042af40(void *this,int *param_1)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t _Size;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = param_1[1] - *param_1 >> 2;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_00403b30();
    }
    uVar1 = uVar1 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005adb0f(uVar1);
      }
    }
    else {
      uVar2 = uVar1 + 0x23;
      if (uVar2 <= uVar1) {
        uVar2 = 0xffffffff;
      }
      iVar3 = FUN_005adb0f(uVar2);
      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar2 - 4) = iVar3;
    }
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar1;
    _Dst = *(void **)this;
    _Size = param_1[1] - *param_1;
    memmove(_Dst,(void *)*param_1,_Size);
    *(size_t *)((int)this + 4) = _Size + (int)_Dst;
  }
  return this;
}


int __thiscall FUN_0042b000(void *this,int param_1)

{
  return *(int *)this + param_1 * 0xc;
}


int __fastcall FUN_0042b020(int *param_1)

{
  return (param_1[1] - *param_1) / 0xc;
}


void __thiscall FUN_0042b040(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    *(undefined4 **)((int)this + 4) = puVar1 + 2;
    return;
  }
  FUN_0042b0a0(this,puVar1,param_1);
  return;
}


undefined4 * __fastcall FUN_0042b080(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


int __thiscall FUN_0042b0a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar3 = *(int *)this;
  iVar5 = *(int *)((int)this + 4) - iVar3 >> 3;
  if (iVar5 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar5 + 1;
  uVar8 = *(int *)((int)this + 8) - iVar3 >> 3;
  uVar6 = uVar1;
  if ((uVar8 <= 0x1fffffff - (uVar8 >> 1)) && (uVar6 = (uVar8 >> 1) + uVar8, uVar6 < uVar1)) {
    uVar6 = uVar1;
  }
  uVar8 = uVar6 * 8;
  if (uVar6 < 0x20000000) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_005adb0f(uVar8);
      }
      goto LAB_0042b151;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar7 = uVar8 + 0x23;
  if (uVar7 <= uVar8) {
    uVar7 = 0xffffffff;
  }
  iVar5 = FUN_005adb0f(uVar7);
  if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  uVar8 = iVar5 + 0x23U & 0xffffffe0;
  *(int *)(uVar8 - 4) = iVar5;
LAB_0042b151:
  iVar3 = ((int)param_1 - iVar3 >> 3) * 8;
  puVar2 = (undefined4 *)(iVar3 + uVar8);
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar10 = *(undefined4 **)((int)this + 4);
  puVar9 = *(undefined4 **)this;
  if (param_1 == puVar10) {
    if (puVar9 != puVar10) {
      iVar5 = uVar8 - (int)puVar9;
      do {
        *(undefined4 *)((int)puVar9 + iVar5) = *puVar9;
        *(undefined4 *)((int)puVar9 + iVar5 + 4) = puVar9[1];
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar10);
    }
  }
  else {
    puVar4 = param_1;
    if (puVar9 != param_1) {
      iVar5 = uVar8 - (int)puVar9;
      do {
        *(undefined4 *)((int)puVar9 + iVar5) = *puVar9;
        *(undefined4 *)((int)puVar9 + iVar5 + 4) = puVar9[1];
        puVar9 = puVar9 + 2;
      } while (puVar9 != param_1);
      puVar10 = *(undefined4 **)((int)this + 4);
    }
    for (; puVar4 != puVar10; puVar4 = puVar4 + 2) {
      *(undefined4 *)((int)puVar4 + (int)puVar2 + (8 - (int)param_1)) = *puVar4;
      *(undefined4 *)((int)puVar4 + (int)puVar2 + (0xc - (int)param_1)) = puVar4[1];
    }
  }
  FUN_0042b200(this,uVar8,uVar1,uVar6);
  return *(int *)this + iVar3;
}


void __thiscall FUN_0042b200(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 8;
  *(int *)((int)this + 8) = param_1 + param_3 * 8;
  return;
}


undefined4 * __fastcall FUN_0042b260(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[4] = 0x28;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}


void __fastcall FUN_0042b2c0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_ffffff70;
  void *local_68 [4];
  undefined4 local_58;
  uint local_54;
  int local_50 [3];
  int *local_44;
  int *local_40;
  int *local_3c;
  int **local_38;
  int *local_34;
  int *local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1cd8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x3c) == 0) {
    FUN_00591070("ERROR","TerminalEngine has no callback configured.");
  }
  else if (*(int *)(param_1 + 0xa0) != 0) {
    local_44 = (int *)0x0;
    local_40 = (int *)0x0;
    local_3c = (int *)0x0;
    local_8 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x90);
    FUN_004024e0(&stack0xffffff70,puVar3);
    local_38 = (int **)FUN_00592d70(local_50,' ',in_stack_ffffff70);
    local_30 = (int *)0x0;
    local_34 = (int *)0x0;
    if (&local_44 != local_38) {
      FUN_004025a0((int *)&local_44);
      local_40 = local_38[1];
      local_44 = *local_38;
      local_3c = local_38[2];
      *local_38 = (int *)0x0;
      local_38[1] = (int *)0x0;
      local_38[2] = (int *)0x0;
      local_34 = local_40;
      local_30 = local_44;
    }
    piVar1 = local_30;
    FUN_004025a0(local_50);
    FUN_004024e0(local_2c,local_30);
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((uint)(((int)local_34 - (int)local_30) / 0x18) < 2) {
      FUN_004028b0(local_30,local_34);
      local_40 = piVar1;
    }
    else {
      FUN_00417680(&local_44,&local_38,piVar1);
    }
    FUN_0042b900(local_50,(int *)&local_44);
    local_8._0_1_ = 2;
    FUN_004024e0(local_68,local_2c);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    if (0xf < local_54) {
      pvVar2 = local_68[0];
      if (0xfff < local_54 + 1) {
        pvVar2 = *(void **)((int)local_68[0] + -4);
        if (0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
    local_58 = 0;
    local_54 = 0xf;
    local_68[0] = (void *)((uint)local_68[0] & 0xffffff00);
    FUN_004025a0(local_50);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (0xf < *(uint *)(param_1 + 0xa4)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar2 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
    FUN_004025a0((int *)&local_44);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0042b4d0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  Layer *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1d1a;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2d = '\0';
  local_14 = uVar1;
  if (*(int *)this != 0) {
    if ((((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) || (param_1 == 0x3b)) {
      FUN_0042b700(this);
    }
    goto LAB_0042b6d3;
  }
  if (((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) {
    FUN_0042b2c0((int)this);
    FUN_00402690((void *)((int)this + 0x90),&PTR_005ce008,0);
LAB_0042b5bd:
    local_2d = '\x01';
  }
  else {
    if (((param_1 == 7) || (param_1 == 0x17)) || (param_1 == 0x2e)) {
      puVar6 = (undefined4 *)((int)this + 0x90);
      if (*(int *)((int)this + 0xa0) != 0) {
        puVar3 = puVar6;
        if (0xf < *(uint *)((int)this + 0xa4)) {
          puVar3 = (undefined4 *)*puVar6;
        }
        FUN_0042b9b0(puVar6,(int *)&local_34,(int)puVar3 + *(int *)((int)this + 0xa0) + -1);
      }
      goto LAB_0042b5bd;
    }
    if (*(uint *)((int)this + 0x10) <= *(uint *)((int)this + 0xa0)) {
      FUN_00591070("DETAIL","Command length hit.");
      goto LAB_0042b6d3;
    }
  }
  if (DAT_0065c25c == (Layer *)0x0) {
    local_34 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(local_34);
    local_8 = 0xffffffff;
  }
  uVar2 = FUN_0052f840(DAT_0065c25c,param_1,*(char *)((int)this + 0xc),*(char *)((int)this + 0xd));
  if ((char)uVar2 == '\0') {
    if (local_2d == '\0') goto LAB_0042b6d3;
  }
  else {
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005ce018);
    local_8 = 1;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640((void *)((int)this + 0x90),puVar6,puVar3[4]);
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (*(int *)((int)this + 0x8c) != 0) {
    (**(code **)(**(int **)((int)this + 0x8c) + 8))(uVar1);
  }
  iVar4 = DAT_0065b3d4;
  if (DAT_0065b3d4 == 0) {
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
  }
  pvVar5 = (void *)FUN_00402f60();
  FUN_00558a20(pvVar5,iVar4);
LAB_0042b6d3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0042b700(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffa8;
  uint3 uVar6;
  void *local_30 [5];
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1d48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar5 = (int *)*param_1;
  local_18 = (piVar5[1] - *piVar5) / 0x18;
  if (param_1[2] + -2 < local_18) {
    local_18 = param_1[2] + -2;
  }
  iVar3 = 0;
  if (0 < local_18) {
    iVar4 = 0;
    local_14 = piVar5;
    do {
      FUN_004024e0(local_30,(undefined4 *)(*(int *)*param_1 + iVar4));
      local_8 = 0;
      if ((int *)param_1[0x19] == (int *)0x0) goto LAB_0042b899;
      (**(code **)(*(int *)param_1[0x19] + 8))();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar2 = local_30[0];
        if (0xfff < local_1c + 1) {
          pvVar2 = *(void **)((int)local_30[0] + -4);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < local_18);
    piVar5 = (int *)*param_1;
  }
  piVar1 = (int *)*piVar5;
  local_14 = piVar5;
  if (piVar1 != piVar1 + local_18 * 6) {
    piVar1 = FUN_00414300(piVar1 + local_18 * 6,(int *)piVar5[1],piVar1);
    piVar5 = local_14;
    FUN_004028b0(piVar1,(int *)local_14[1]);
    piVar5[1] = (int)piVar1;
    piVar5 = (int *)*param_1;
    piVar1 = (int *)*piVar5;
  }
  iVar3 = piVar5[1] - (int)piVar1 >> 0x1f;
  uVar6 = (uint3)((uint)in_stack_ffffffa8 >> 8);
  if ((piVar5[1] - (int)piVar1) / 0x18 + iVar3 == iVar3) {
    pvVar2 = (void *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
    FUN_0042bae0(param_1 + 0x10,pvVar2);
    piVar5 = (int *)*param_1;
    if (piVar5 != (int *)0x0) {
      FUN_004025a0(piVar5);
      FUN_005adb3f(piVar5);
    }
  }
  else {
    pvVar2 = (void *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffa8,"`%[`$space`7/`$return`7 to continue`$]",0x26);
    FUN_0042bae0(param_1 + 0x10,pvVar2);
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 8))();
    ExceptionList = local_10;
    return;
  }
LAB_0042b899:
                    // WARNING: Subroutine does not return
  std::_Xbad_function_call();
}


int * __thiscall FUN_0042b8c0(void *this,int *param_1)

{
  if (this != param_1) {
    FUN_004025a0(this);
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = param_1[1];
    *(int *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return this;
}


undefined4 * __thiscall FUN_0042b900(void *this,int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_0042ba20(this,(param_1[1] - *param_1) / 0x18);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    piVar2 = FUN_0042bb70((undefined4 *)*param_1,(undefined4 *)param_1[1],*(int **)this);
    *(int **)((int)this + 4) = piVar2;
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_0042b9b0(void *this,int *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(void **)this;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  uVar4 = param_2 - (int)pvVar2;
  if (uVar4 <= uVar1) {
    pvVar2 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar2 = *(void **)this;
    }
    iVar3 = uVar1 - (uVar1 != uVar4);
    *(int *)((int)this + 0x10) = iVar3;
    memmove((void *)((int)pvVar2 + uVar4),
            (void *)((int)((int)pvVar2 + uVar4) + (uint)(uVar1 != uVar4)),(iVar3 - uVar4) + 1);
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    *param_1 = (int)this + uVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_004036c0();
}


undefined4 __thiscall FUN_0042ba20(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar4 = param_1 * 0x18;
  if (uVar4 < 0x1000) {
    if (uVar4 != 0) {
      uVar3 = FUN_005adb0f(uVar4);
      *(undefined4 *)this = uVar3;
      *(undefined4 *)((int)this + 4) = uVar3;
      *(uint *)((int)this + 8) = *(int *)this + uVar4;
      return CONCAT31((int3)(*(int *)this + uVar4 >> 8),1);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)this;
    return CONCAT31((int3)((uint)*(undefined4 *)this >> 8),1);
  }
  uVar1 = uVar4 + 0x23;
  if (uVar1 <= uVar4) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_005adb0f(uVar1);
  if (iVar2 != 0) {
    uVar1 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar1 - 4) = iVar2;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + uVar4;
    return CONCAT31((int3)(*(int *)this + uVar4 >> 8),1);
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


void __thiscall FUN_0042bae0(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int **)((int)this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)((int)this + 0x24) + 8))(&param_1,DAT_0065500c ^ (uint)&stack0xfffffffc);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


int * FUN_0042bb70(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1dc8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 6) {
    FUN_004024e0(param_3,param_1);
    param_3 = param_3 + 6;
    ppvVar1 = ExceptionList;
  }
  FUN_004028b0(param_3,param_3);
  ExceptionList = local_10;
  return param_3;
}


int __cdecl FUN_0042bbf0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004156e0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


undefined4 * __thiscall
FUN_0042bc30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b1e7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_1;
  *(bool *)((int)this + 4) = param_5 == 0;
  *(int *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 100;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined1 *)((int)this + 0x44) = 0;
  local_8 = 2;
  uStack_7 = 0;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0x5c),'\0','\0','\0');
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0x5f),'\0','\0','\0');
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0xf;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0xf;
  *(undefined1 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  _local_8 = CONCAT31(uStack_7,10);
  if (*(int *)((int)this + 8) == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0xc);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 **)((int)this + 8) = puVar1;
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_0042bdf0(void *this,undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 ****ppppuVar9;
  undefined4 *puVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  int *in_stack_00000058;
  undefined4 *in_stack_ffffff34;
  int local_94;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 ***local_5c [4];
  uint local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b1eee;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  puVar6 = *(undefined4 **)((int)this + 8);
  if ((undefined4 *)((int)this + 0xc) != puVar6) {
    FUN_0042e210((undefined4 *)((int)this + 0xc),(undefined4 *)*puVar6,(undefined4 *)puVar6[1]);
  }
  FUN_0042dfb0((void *)((int)this + 0x70),(int)&stack0x00000034);
  if ((undefined4 **)((int)this + 0x98) != &stack0x0000001c) {
    puVar6 = &stack0x0000001c;
    if (0xf < in_stack_00000030) {
      puVar6 = in_stack_0000001c;
    }
    FUN_00402690((undefined4 *)((int)this + 0x98),puVar6,in_stack_0000002c);
  }
  *(undefined4 *)((int)this + 100) = 1;
  puVar6 = (undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_004028b0((int *)*puVar6,*(int **)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0xb4) = *puVar6;
  bVar2 = false;
  bVar3 = false;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
  local_18 = 0xf;
  iVar12 = 0;
  local_1c = 0;
  local_94 = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  iVar13 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  uVar14 = 0;
  local_8._0_1_ = 5;
  if (in_stack_00000014 != 0) {
    do {
      ppuVar8 = &param_1;
      if (0xf < in_stack_00000018) {
        ppuVar8 = (undefined4 **)param_1;
      }
      if (*(char *)((int)ppuVar8 + uVar14) == '\n') {
LAB_0042c335:
        if (bVar2) {
          local_4c = 0;
          ppppuVar9 = local_5c;
          if (0xf < local_48) {
            ppppuVar9 = (undefined4 ****)local_5c[0];
          }
          bVar2 = false;
          *(undefined1 *)ppppuVar9 = 0;
        }
        bVar4 = false;
        if ((uint)(iVar13 + 1 + local_1c) < *(uint *)((int)this + 0x20)) {
          ppppuVar9 = local_2c;
          if (0xf < local_18) {
            ppppuVar9 = (undefined4 ****)local_2c[0];
          }
          if (*(char *)((int)ppppuVar9 + local_1c + -1) != ' ') {
            FUN_00403640(local_2c,&DAT_005e7468,1);
          }
          ppppuVar9 = local_44;
          if (0xf < local_30) {
            ppppuVar9 = (undefined4 ****)local_44[0];
          }
          FUN_00403640(local_2c,ppppuVar9,local_34);
        }
        else {
          bVar4 = true;
        }
        piVar1 = *(int **)((int)this + 0xb4);
        if (*(int **)((int)this + 0xb8) == piVar1) {
          FUN_00403840(puVar6,piVar1,local_2c);
        }
        else {
          FUN_004024e0(piVar1,local_2c);
          *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 0x18;
        }
        local_1c = 0;
        ppppuVar9 = local_2c;
        if (0xf < local_18) {
          ppppuVar9 = (undefined4 ****)local_2c[0];
        }
        local_94 = 0;
        *(undefined1 *)ppppuVar9 = 0;
        if (local_4c == 2) {
          ppppuVar9 = local_5c;
          if (0xf < local_48) {
            ppppuVar9 = (undefined4 ****)local_5c[0];
          }
          FUN_00403640(local_2c,ppppuVar9,2);
        }
        if (bVar4) {
          ppppuVar9 = local_44;
          if (0xf < local_30) {
            ppppuVar9 = (undefined4 ****)local_44[0];
          }
          FUN_00403640(local_2c,ppppuVar9,local_34);
          local_94 = iVar13;
        }
        local_34 = 0;
        ppppuVar9 = local_44;
        if (0xf < local_30) {
          ppppuVar9 = (undefined4 ****)local_44[0];
        }
        iVar13 = 0;
        *(undefined1 *)ppppuVar9 = 0;
        iVar12 = local_94;
      }
      else {
        ppuVar8 = &param_1;
        if (0xf < in_stack_00000018) {
          ppuVar8 = (undefined4 **)param_1;
        }
        if (*(char *)((int)ppuVar8 + uVar14) == '^') goto LAB_0042c335;
        if (bVar2) {
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,&DAT_005ce018);
          local_8._0_1_ = 6;
          puVar10 = puVar7;
          if (0xf < (uint)puVar7[5]) {
            puVar10 = (undefined4 *)*puVar7;
          }
          FUN_00403640(local_5c,puVar10,puVar7[4]);
          local_8._0_1_ = 5;
          if (0xf < local_78) {
            pvVar11 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar11 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar11)))) goto LAB_0042c4f6;
            FUN_005adb3f(pvVar11);
          }
          ppuVar8 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar8 = (undefined4 **)param_1;
          }
          iVar12 = local_94;
          if ((*(char *)((int)ppuVar8 + uVar14) != 'a') && (local_4c != 0)) {
            FUN_00591070("DETAIL","Macro complete: `%s");
            ppppuVar9 = local_5c;
            if (0xf < local_48) {
              ppppuVar9 = (undefined4 ****)local_5c[0];
            }
            FUN_00403640(local_44,ppppuVar9,local_4c);
            bVar2 = false;
          }
        }
        else {
          ppuVar8 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar8 = (undefined4 **)param_1;
          }
          if (*(char *)((int)ppuVar8 + uVar14) == '`') {
            local_4c = 1;
            ppppuVar9 = local_5c;
            if (0xf < local_48) {
              ppppuVar9 = (undefined4 ****)local_5c[0];
            }
            bVar2 = true;
            *(undefined2 *)ppppuVar9 = 0x60;
          }
          else {
            ppuVar8 = &param_1;
            if (0xf < in_stack_00000018) {
              ppuVar8 = (undefined4 **)param_1;
            }
            if (*(char *)((int)ppuVar8 + uVar14) == '\"') {
              if (bVar3) {
                FUN_00403640(local_44,&DAT_005ce014,1);
                bVar3 = false;
                FUN_00403640(local_44,&DAT_005e7470,2);
                FUN_00402690(local_5c,&DAT_005e7470,2);
              }
              else {
                bVar3 = true;
                FUN_00403640(local_44,&DAT_005e746c,2);
                FUN_00402690(local_5c,&DAT_005e746c,2);
                FUN_00403640(local_44,&DAT_005ce014,1);
              }
LAB_0042c080:
              iVar13 = iVar13 + 1;
              iVar12 = local_94;
            }
            else {
              ppuVar8 = &param_1;
              if (0xf < in_stack_00000018) {
                ppuVar8 = (undefined4 **)param_1;
              }
              if (*(char *)((int)ppuVar8 + uVar14) == ' ') {
                if (*(int *)((int)this + 0x20) <= iVar13 + iVar12) {
                  piVar1 = *(int **)((int)this + 0xb4);
                  if (*(int **)((int)this + 0xb8) == piVar1) {
                    FUN_00403840(puVar6,piVar1,local_2c);
                  }
                  else {
                    FUN_004024e0(piVar1,local_2c);
                    *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 0x18;
                  }
                  local_1c = 0;
                  ppppuVar9 = local_2c;
                  if (0xf < local_18) {
                    ppppuVar9 = (undefined4 ****)local_2c[0];
                  }
                  *(undefined1 *)ppppuVar9 = 0;
                  if (local_4c == 2) {
                    ppppuVar9 = local_5c;
                    if (0xf < local_48) {
                      ppppuVar9 = (undefined4 ****)local_5c[0];
                    }
                    FUN_00403640(local_2c,ppppuVar9,2);
                  }
                  local_94 = 0;
                }
                FUN_004024e0(&stack0xffffff34,local_2c);
                bVar4 = FUN_0042d480(in_stack_ffffff34);
                if (!bVar4) {
                  FUN_004024e0(&stack0xffffff34,local_2c);
                  cVar5 = FUN_0042d3e0(in_stack_ffffff34);
                  if (cVar5 == '\0') {
                    FUN_00403640(local_2c,&DAT_005e7468,1);
                  }
                }
                ppppuVar9 = local_44;
                if (0xf < local_30) {
                  ppppuVar9 = (undefined4 ****)local_44[0];
                }
                FUN_00403640(local_2c,ppppuVar9,local_34);
                local_94 = local_94 + 1 + iVar13;
                iVar13 = 0;
                local_34 = 0;
                ppppuVar9 = local_44;
                if (0xf < local_30) {
                  ppppuVar9 = (undefined4 ****)local_44[0];
                }
                *(undefined1 *)ppppuVar9 = 0;
                iVar12 = local_94;
              }
              else {
                if (iVar12 + 1 + iVar13 < *(int *)((int)this + 0x20)) {
                  puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
                  local_8._0_1_ = 8;
                  puVar10 = puVar7;
                  if (0xf < (uint)puVar7[5]) {
                    puVar10 = (undefined4 *)*puVar7;
                  }
                  FUN_00403640(local_44,puVar10,puVar7[4]);
                  local_8._0_1_ = 5;
                  if (0xf < local_60) {
                    pvVar11 = local_74[0];
                    if ((0xfff < local_60 + 1) &&
                       (pvVar11 = *(void **)((int)local_74[0] + -4),
                       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11)))) goto LAB_0042c4f6;
                    FUN_005adb3f(pvVar11);
                  }
                  local_64 = 0;
                  local_60 = 0xf;
                  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
                  goto LAB_0042c080;
                }
                piVar1 = *(int **)((int)this + 0xb4);
                if (*(int **)((int)this + 0xb8) == piVar1) {
                  FUN_00403840(puVar6,piVar1,local_2c);
                }
                else {
                  FUN_004024e0(piVar1,local_2c);
                  *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 0x18;
                }
                local_1c = 0;
                ppppuVar9 = local_2c;
                if (0xf < local_18) {
                  ppppuVar9 = (undefined4 ****)local_2c[0];
                }
                *(undefined1 *)ppppuVar9 = 0;
                if (local_4c == 2) {
                  ppppuVar9 = local_5c;
                  if (0xf < local_48) {
                    ppppuVar9 = (undefined4 ****)local_5c[0];
                  }
                  FUN_00403640(local_2c,ppppuVar9,2);
                }
                puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,&DAT_005ce018);
                local_8._0_1_ = 7;
                puVar10 = puVar7;
                if (0xf < (uint)puVar7[5]) {
                  puVar10 = (undefined4 *)*puVar7;
                }
                FUN_00403640(local_44,puVar10,puVar7[4]);
                local_8._0_1_ = 5;
                if (0xf < local_78) {
                  pvVar11 = local_8c[0];
                  if ((0xfff < local_78 + 1) &&
                     (pvVar11 = *(void **)((int)local_8c[0] + -4),
                     0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar11)))) goto LAB_0042c4f6;
                  FUN_005adb3f(pvVar11);
                }
                local_94 = 0;
                iVar12 = 0;
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < in_stack_00000014);
    if (local_34 != 0) {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      ppppuVar9 = local_44;
      if (0xf < local_30) {
        ppppuVar9 = (undefined4 ****)local_44[0];
      }
      FUN_00403640(local_2c,ppppuVar9,local_34);
    }
    if (local_1c != 0) {
      piVar1 = *(int **)((int)this + 0xb4);
      if (*(int **)((int)this + 0xb8) == piVar1) {
        FUN_00403840(puVar6,piVar1,local_2c);
      }
      else {
        FUN_004024e0(piVar1,local_2c);
        *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 0x18;
      }
      local_1c = 0;
      ppppuVar9 = local_2c;
      if (0xf < local_18) {
        ppppuVar9 = (undefined4 ****)local_2c[0];
      }
      *(undefined1 *)ppppuVar9 = 0;
    }
  }
  FUN_0042c7a0(this);
  local_8._0_1_ = 4;
  if (0xf < local_30) {
    ppppuVar9 = (undefined4 ****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppuVar9 = (undefined4 ****)local_44[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_44[0] + (-4 - (int)ppppuVar9)))) {
LAB_0042c4f6:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar9);
  }
  local_8._0_1_ = 3;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    ppppuVar9 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar9 = (undefined4 ****)local_2c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_2c[0] + (-4 - (int)ppppuVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar9);
  }
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_48) {
    ppppuVar9 = (undefined4 ****)local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (ppppuVar9 = (undefined4 ****)local_5c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_5c[0] + (-4 - (int)ppppuVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar9);
  }
  local_8._0_1_ = 1;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    puVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar6 = (undefined4 *)param_1[-1], 0x1f < (uint)((int)param_1 + (-4 - (int)puVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar6);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    puVar6 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (puVar6 = (undefined4 *)in_stack_0000001c[-1],
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)puVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar6);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (undefined4 *)((uint)in_stack_0000001c & 0xffffff00);
  local_8 = 9;
  if (in_stack_00000058 != (int *)0x0) {
    (**(code **)(*in_stack_00000058 + 0x10))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
