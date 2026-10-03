#include "../ois_server.exe.h"


void __thiscall FUN_005541f0(void *this,byte *param_1)

{
  byte **this_00;
  uint uVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined1 in_stack_0000001e;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_00000018;
  pbVar5 = param_1;
  puStack_c = &LAB_005b3198;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this_00 = (byte **)((int)this + 0xfc);
  ppbVar2 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar2 = (byte **)param_1;
  }
  ppbVar3 = this_00;
  if (0xf < *(uint *)((int)this + 0x110)) {
    ppbVar3 = (byte **)*this_00;
  }
  uVar1 = FUN_004031f0((byte *)ppbVar3,*(uint *)((int)this + 0x10c),(byte *)ppbVar2,
                       in_stack_00000014);
  if ((char)uVar1 == '\0') {
    *(undefined1 *)((int)this + 0x114) = 1;
    if (this_00 != &param_1) {
      ppbVar2 = &param_1;
      if (0xf < uVar4) {
        ppbVar2 = (byte **)pbVar5;
      }
      FUN_00402690(this_00,ppbVar2,in_stack_00000014);
      uVar4 = in_stack_00000018;
      pbVar5 = param_1;
    }
    *(undefined2 *)((int)this + 0xf8) = in_stack_0000001c;
    *(undefined1 *)((int)this + 0xfa) = in_stack_0000001e;
  }
  if (0xf < uVar4) {
    pbVar6 = pbVar5;
    if (0xfff < uVar4 + 1) {
      pbVar6 = *(byte **)(pbVar5 + -4);
      if ((byte *)0x1f < pbVar5 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005542e0(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0xfc);
  pbVar2 = pbVar3;
  if (0xf < *(uint *)(param_1 + 0x110)) {
    pbVar2 = *(byte **)pbVar3;
  }
  uVar1 = FUN_004031f0(pbVar2,*(uint *)(param_1 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    if (0xf < *(uint *)(param_1 + 0x110)) {
      pbVar3 = *(byte **)pbVar3;
    }
    *pbVar3 = 0;
  }
  return;
}


void __fastcall FUN_00554320(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  if (*(Ref **)(param_1 + 0xf0) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x194) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x290))();
        cocos2d::Ref::autorelease(*(Ref **)(*(int *)(param_1 + 400) + uVar4 * 4));
        (**(code **)(**(int **)(*(int *)(param_1 + 400) + uVar4 * 4) + 0x19c))();
        piVar1 = *(int **)(*(int *)(param_1 + 400) + uVar4 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x138))(1);
          *(undefined4 *)(*(int *)(param_1 + 400) + uVar4 * 4) = 0;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 400);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x194) - iVar3 >> 2));
  }
  *(int *)(param_1 + 0x194) = iVar3;
  pvVar2 = *(void **)(param_1 + 0x17c);
  if (pvVar2 != (void *)0x0) {
    FUN_005604e0((int)pvVar2);
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  return;
}


void __thiscall FUN_005543f0(void *this,byte *param_1)

{
  byte **this_00;
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  Sprite *pSVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  void *pvVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c71f9;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (byte **)((int)this + 0xd0);
  local_8 = 0;
  ppbVar5 = this_00;
  if (0xf < *(uint *)((int)this + 0xe4)) {
    ppbVar5 = (byte **)*this_00;
  }
  ppbVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar6 = (byte **)param_1;
  }
  local_14 = uVar1;
  uVar2 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,(byte *)ppbVar5,*(uint *)((int)this + 0xe0)
                      );
  if ((char)uVar2 == '\0') {
    if (*(Ref **)((int)this + 0xe8) != (Ref *)0x0) {
      cocos2d::Ref::autorelease(*(Ref **)((int)this + 0xe8));
      if (*(int **)((int)this + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0xe8) + 0x138))(1,uVar1);
        *(undefined4 *)((int)this + 0xe8) = 0;
      }
    }
    ppbVar5 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar5 = (byte **)param_1;
    }
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,ppbVar5);
    local_8._0_1_ = 1;
    pSVar4 = cocos2d::Sprite::create(pbVar3);
    local_8._0_1_ = 0;
    *(Sprite **)((int)this + 0xe8) = pSVar4;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar7);
    }
    local_34 = 0;
    local_30 = 0x3f800000;
    local_8._0_1_ = 2;
    (**(code **)(**(int **)((int)this + 0xe8) + 0xa0))(&local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)((int)this + 0xe8) + 0x2c))(0xbf800000);
    (**(code **)(**(int **)((int)this + 0xe8) + 0x4c))((int)this + 0x168);
    cocos2d::Ref::retain(*(Ref **)((int)this + 0xe8));
    if (this_00 != &param_1) {
      ppbVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar5 = (byte **)param_1;
      }
      FUN_00402690(this_00,ppbVar5,in_stack_00000014);
    }
  }
  if (0xf < in_stack_00000018) {
    pbVar8 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar8 = *(byte **)(param_1 + -4);
      if ((byte *)0x1f < param_1 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005545c0(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  Sprite *pSVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7231;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(Ref **)((int)this + 0x118) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x118));
    if (*(int **)((int)this + 0x118) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x118) + 0x138))(1,uVar1);
      *(undefined4 *)((int)this + 0x118) = 0;
    }
  }
  uVar1 = in_stack_00000018;
  pbVar5 = param_1;
  ppbVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar4 = (byte **)param_1;
  }
  uVar2 = FUN_004031f0((byte *)ppbVar4,in_stack_00000014,(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    pSVar3 = cocos2d::Sprite::create((basic_string<> *)&param_1);
    *(Sprite **)((int)this + 0x118) = pSVar3;
    local_18 = 0;
    local_14 = 0x3f800000;
    local_8._0_1_ = 1;
    (**(code **)(*(int *)pSVar3 + 0xa0))(&local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)((int)this + 0x118) + 0x2c))(0xbf800000);
    (**(code **)(**(int **)((int)this + 0x118) + 0x4c))((int)this + 0x168);
    cocos2d::Ref::retain(*(Ref **)((int)this + 0x118));
    uVar1 = in_stack_00000018;
    pbVar5 = param_1;
  }
  if (0xf < uVar1) {
    pbVar6 = pbVar5;
    if (0xfff < uVar1 + 1) {
      pbVar6 = *(byte **)(pbVar5 + -4);
      if ((byte *)0x1f < pbVar5 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00554700(void *param_1)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *in_stack_ffffffc4;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar3 = (byte *)((int)param_1 + 0xa0);
  local_8 = 0;
  pbVar4 = pbVar3;
  if (0xf < *(uint *)((int)param_1 + 0xb4)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar2 = FUN_004031f0(pbVar4,*(uint *)((int)param_1 + 0xb0),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 != '\0') {
    iVar7 = *(int *)((int)param_1 + 0x94);
    local_14 = 0;
    iVar5 = *(int *)((int)param_1 + 0x98) - iVar7;
    iVar6 = iVar5 >> 0x1f;
    if (iVar5 / 0x28 + iVar6 != iVar6) {
      iVar6 = 0;
      do {
        bVar1 = cocos2d::Rect::containsPoint((Rect *)(iVar6 + iVar7),(Vec2 *)&stack0x00000004);
        if (bVar1) {
          pbVar3 = (byte *)(*(int *)((int)param_1 + 0x94) + local_14 * 0x28 + 0x10);
          goto LAB_005547cc;
        }
        iVar7 = *(int *)((int)param_1 + 0x94);
        iVar6 = iVar6 + 0x28;
        local_14 = local_14 + 1;
      } while (local_14 < (uint)((*(int *)((int)param_1 + 0x98) - iVar7) / 0x28));
    }
    pbVar3 = (byte *)((int)param_1 + 0xb8);
  }
LAB_005547cc:
  FUN_004024e0(&stack0xffffffc4,(undefined4 *)pbVar3);
  FUN_005543f0(param_1,in_stack_ffffffc4);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00554800(void *this,float param_1,float param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7259;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(float *)((int)this + 0x168) = (float)*(int *)((int)this + 0x68) * param_1;
  *(float *)((int)this + 0x16c) = (float)*(int *)((int)this + 0x6c) * param_2;
  FUN_00554ad0(this,'\0',0);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00554870(void *this,float param_1,float param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(float *)((int)this + 0x168) = (float)*(int *)((int)this + 0x68) * param_1;
  *(float *)((int)this + 0x16c) = (float)*(int *)((int)this + 0x6c) * param_2;
  FUN_00554ad0(this,'\x01',1);
  *(undefined1 *)((int)this + 0x15c) = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005548f0(void *this,float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  byte *in_stack_ffffff9c;
  void *local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c72c2;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar3 = *(int **)((int)this + 0x160);
  *(float *)((int)this + 0x168) = (float)*(int *)((int)this + 0x68) * param_1;
  *(float *)((int)this + 0x16c) = (float)*(int *)((int)this + 0x6c) * param_2;
  if ((piVar3 != (int *)0x0) && (piVar3[0x107] != -1)) {
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x168);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x16c);
    local_8 = 1;
    (**(code **)(*piVar3 + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x160) + 0x5c))();
    iVar2 = (**(code **)(**(int **)((int)this + 0x160) + 0x2dc))();
    *(int *)((int)this + 0x90) = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(*(int *)((int)this + 0x160) + 0x41c);
      piVar3 = (int *)(**(code **)(**(int **)((int)this + 0x160) + 0x2d8))();
      FUN_00413230((undefined4 *)((int)this + 0x74),piVar3);
      if (0xf < local_18) {
        pvVar4 = local_2c;
        if (0xfff < local_18 + 1) {
          pvVar4 = *(void **)((int)local_2c + -4);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar4);
      }
      FUN_004024e0(&stack0xffffff9c,(undefined4 *)((int)this + 0x74));
      FUN_005545c0(this,in_stack_ffffff9c);
    }
    local_8 = local_8 & 0xffffff00;
  }
  FUN_00554ad0(this,'\x01',0);
  *(undefined1 *)((int)this + 0x15c) = 1;
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00554ad0(void *this,char param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  Size *pSVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  uint in_stack_ffffffb4;
  int iVar15;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c72f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = CONCAT31((int3)((uint)ExceptionList >> 8),param_2);
  if ((*(int *)((int)this + 0x17c) != 0) && (*(char *)((int)this + 0x51) != '\0')) {
    piVar6 = *(int **)(*(int *)((int)this + 0x17c) + 0x2c);
    if (piVar6 == (int *)0x0) {
      cocos2d::Size::Size((Size *)&local_24,0.0,0.0);
    }
    else {
      pSVar4 = (Size *)(**(code **)(*piVar6 + 0xb0))();
      cocos2d::Size::Size((Size *)&local_24,pSVar4);
    }
    bVar2 = *(float *)((int)this + 0x16c) <= (float)(int)local_20;
    local_20 = (float)(uint)bVar2;
    *(bool *)(*(int *)((int)this + 0x17c) + 0x84) = bVar2;
    iVar14 = (int)*(float *)((int)this + 0x168);
    iVar10 = *(int *)((int)this + 0x17c);
    if (*(int *)(iVar10 + 0x54) + -0xb < iVar14) {
      iVar14 = -2;
LAB_00554cfd:
      local_1c = *(float *)(iVar10 + 0x68);
      uVar13 = 0;
      iVar11 = *(int *)(iVar10 + 0x6c) - (int)local_1c;
      iVar15 = iVar11 >> 0x1f;
      iVar11 = iVar11 / 0x2c + iVar15;
      if (iVar11 != iVar15) {
        piVar6 = (int *)((int)local_1c + 0x24);
        do {
          if (*piVar6 == iVar14) {
            uVar1 = *(uint *)(iVar10 + 0x80);
            *(uint *)(iVar10 + 0x80) = uVar13;
            if (uVar1 != uVar13) goto LAB_00554c1b;
            goto LAB_00554c26;
          }
          uVar13 = uVar13 + 1;
          piVar6 = piVar6 + 0xb;
        } while (uVar13 < (uint)(iVar11 - iVar15));
      }
      if (*(int *)(iVar10 + 0x80) != -1) goto LAB_00554c1b;
      *(undefined4 *)(iVar10 + 0x80) = 0xffffffff;
    }
    else {
      local_14 = *(float *)(iVar10 + 0x68);
      local_1c = (float)((*(int *)(iVar10 + 0x6c) - (int)local_14) / 0x2c);
      if ((uint)local_1c < 2) {
        iVar14 = -1;
      }
      else {
        fVar12 = 0.0;
        if (local_1c != 0.0) {
          piVar6 = (int *)((int)local_14 + 0x20);
          do {
            if ((piVar6[-1] <= iVar14) && (iVar14 <= *piVar6 + piVar6[-1])) {
              iVar14 = *(int *)((int)fVar12 * 0x2c + 0x24 + (int)local_14);
              goto LAB_00554bf8;
            }
            fVar12 = (float)((int)fVar12 + 1);
            piVar6 = piVar6 + 0xb;
          } while ((uint)fVar12 < (uint)local_1c);
        }
        iVar14 = -1;
LAB_00554bf8:
        if (iVar14 != -1) goto LAB_00554cfd;
      }
      if (*(int *)(iVar10 + 0x80) == -1) goto LAB_00554cfd;
      *(undefined4 *)(iVar10 + 0x80) = 0xffffffff;
LAB_00554c1b:
      FUN_00560de0(*(int *)((int)this + 0x17c));
    }
LAB_00554c26:
    if (((char)local_18 != '\0') && (local_20._0_1_ != '\0')) {
      if (-1 < iVar14) {
        pvVar5 = (void *)FUN_004023e0();
        if (*(int *)((int)pvVar5 + 0x350) == 0) {
          ExceptionList = local_10;
          return;
        }
        if ((*(int *)((int)pvVar5 + 0x34c) != 0) &&
           (*(int *)(*(int *)((int)pvVar5 + 0x34c) + 0x388) == iVar14)) {
          ExceptionList = local_10;
          return;
        }
        pvVar7 = *(void **)(*(int *)(*(int *)((int)pvVar5 + 0x350) + 0xc) + 0x54);
        iVar10 = *(int *)((int)pvVar7 + iVar14 * 4 + 0x624);
        iVar15 = *(int *)((int)pvVar7 + *(int *)((int)pvVar7 + 0x388) * 4 + 0x624);
        *(undefined4 *)(iVar10 + 0x168) = *(undefined4 *)(iVar15 + 0x168);
        *(undefined4 *)(iVar10 + 0x16c) = *(undefined4 *)(iVar15 + 0x16c);
        *(int *)((int)pvVar7 + 0x388) = iVar14;
        FUN_0053b4a0(pvVar7);
        iVar10 = *(int *)((int)pvVar5 + 0x3a0);
        if ((iVar10 == 0) || (*(char *)((int)pvVar5 + 0x39d) == '\0')) {
          FUN_0052e590(pvVar5,*(int *)((int)pvVar5 + 0x348));
        }
        else {
          iVar10 = *(int *)(iVar10 + 0x624 + *(int *)(iVar10 + 0x388) * 4);
          *(int *)((int)pvVar5 + 0x354) = iVar10;
          *(undefined4 *)((int)pvVar5 + 0x350) = *(undefined4 *)(iVar10 + 300);
        }
        iVar15 = -1;
        iVar14 = 8;
        iVar10 = *(int *)(DAT_0065b5cc + 0xd0);
        pvVar5 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar5,iVar10,iVar14,iVar15);
        ExceptionList = local_10;
        return;
      }
      if (iVar14 == -1) {
        iVar10 = *(int *)(*(int *)((int)this + 0x17c) + 0x60);
        if (iVar10 != 0) {
          if ((*(char *)(iVar10 + 0x3a4) == '\0') && (*(char *)(iVar10 + 0x3a5) == '\0')) {
            pvVar5 = (void *)FUN_004023e0();
            if ((((*(int *)((int)pvVar5 + 0x350) != 0) &&
                 (iVar10 = *(int *)((int)pvVar5 + 0x34c), iVar10 != 0)) &&
                (iVar14 = (*(int *)(iVar10 + 0x398) - *(int *)(iVar10 + 0x394)) / 0x50,
                *(char *)(*(int *)(iVar10 + 0x394) + -0x4b + iVar14 * 0x50) != '\0')) &&
               (*(int *)(iVar10 + 0x388) != iVar14 + -2)) {
              *(undefined1 *)(iVar10 + 0x3a4) = 0;
              *(undefined1 *)(*(int *)((int)pvVar5 + 0x34c) + 0x3a5) = 1;
              iVar10 = *(int *)((int)pvVar5 + 0x34c);
              iVar14 = 0;
              if (*(char *)(*(int *)(iVar10 + 0x394) + 5 + *(int *)(iVar10 + 0x388) * 0x50) == '\0')
              {
                iVar14 = *(int *)(iVar10 + 0x388);
              }
              *(int *)(iVar10 + 0x3a0) = iVar14;
              iVar10 = *(int *)((int)pvVar5 + 0x34c);
              *(int *)(iVar10 + 0x388) =
                   (*(int *)(iVar10 + 0x398) - *(int *)(iVar10 + 0x394)) / 0x50 + -2;
              FUN_0053b4a0(*(void **)((int)pvVar5 + 0x34c));
              FUN_0052e590(pvVar5,*(int *)((int)pvVar5 + 0x348));
              iVar10 = 8;
LAB_005550a8:
              iVar15 = -1;
              iVar14 = *(int *)(DAT_0065b5cc + 0xd0);
              pvVar5 = (void *)FUN_00402f60();
              FUN_00557fb0(pvVar5,iVar14,iVar10,iVar15);
            }
          }
          else {
            pvVar5 = (void *)FUN_004023e0();
            if ((*(int *)((int)pvVar5 + 0x350) != 0) &&
               ((iVar10 = *(int *)((int)pvVar5 + 0x34c), iVar10 != 0 &&
                (*(int *)(iVar10 + 0x388) != *(int *)(iVar10 + 0x3a0))))) {
              *(undefined1 *)(iVar10 + 0x3a4) = 0;
              *(undefined1 *)(*(int *)((int)pvVar5 + 0x34c) + 0x3a5) = 0;
              *(undefined4 *)(*(int *)((int)pvVar5 + 0x34c) + 0x388) =
                   *(undefined4 *)(*(int *)((int)pvVar5 + 0x34c) + 0x3a0);
              pvVar7 = *(void **)((int)pvVar5 + 0x34c);
LAB_00555092:
              FUN_0053b4a0(pvVar7);
              FUN_0052e590(pvVar5,*(int *)((int)pvVar5 + 0x348));
              iVar10 = 9;
              goto LAB_005550a8;
            }
          }
        }
      }
      else if ((iVar14 == -2) &&
              (iVar10 = *(int *)(*(int *)((int)this + 0x17c) + 0x60), iVar10 != 0)) {
        if ((*(char *)(iVar10 + 0x3a4) == '\0') && (*(char *)(iVar10 + 0x3a5) == '\0')) {
          pvVar5 = (void *)FUN_004023e0();
          if (*(int *)((int)pvVar5 + 0x350) != 0) {
            pvVar7 = *(void **)((int)pvVar5 + 0x34c);
            if (pvVar7 == (void *)0x0) {
              iVar10 = *(int *)((int)*(void **)((int)pvVar5 + 0x2d4) + 0x38);
              if ((iVar10 == -1) ||
                 (pvVar7 = (void *)FUN_005352e0(*(void **)((int)pvVar5 + 0x2d4),iVar10),
                 pvVar7 == (void *)0x0)) goto LAB_005550bf;
            }
            iVar10 = (*(int *)((int)pvVar7 + 0x398) - *(int *)((int)pvVar7 + 0x394)) / 0x50;
            if ((*(char *)(*(int *)((int)pvVar7 + 0x394) + -0x4b + iVar10 * 0x50) != '\0') &&
               (iVar14 = *(int *)((int)pvVar7 + 0x388), iVar14 != iVar10 + -1)) {
              *(undefined2 *)((int)pvVar7 + 0x3a4) = 1;
              iVar10 = 0;
              if (*(char *)(*(int *)((int)pvVar7 + 0x394) + 5 + iVar14 * 0x50) == '\0') {
                iVar10 = iVar14;
              }
              *(int *)((int)pvVar7 + 0x3a0) = iVar10;
              *(int *)((int)pvVar7 + 0x388) =
                   (*(int *)((int)pvVar7 + 0x398) - *(int *)((int)pvVar7 + 0x394)) / 0x50 + -1;
              FUN_0053b4a0(pvVar7);
              FUN_0052e590(pvVar5,*(int *)((int)pvVar5 + 0x348));
              iVar10 = 8;
              goto LAB_005550a8;
            }
          }
        }
        else {
          pvVar5 = (void *)FUN_004023e0();
          if (*(int *)((int)pvVar5 + 0x350) != 0) {
            pvVar7 = *(void **)((int)pvVar5 + 0x34c);
            if (pvVar7 == (void *)0x0) {
              iVar10 = *(int *)((int)*(void **)((int)pvVar5 + 0x2d4) + 0x38);
              if (iVar10 == -1) goto LAB_005550bf;
              pvVar7 = (void *)FUN_00535330(*(void **)((int)pvVar5 + 0x2d4),iVar10);
            }
            if (*(int *)((int)pvVar7 + 0x388) != *(int *)((int)pvVar7 + 0x3a0)) {
              *(int *)((int)pvVar7 + 0x388) = *(int *)((int)pvVar7 + 0x3a0);
              *(undefined2 *)((int)pvVar7 + 0x3a4) = 0;
              goto LAB_00555092;
            }
          }
        }
      }
    }
  }
LAB_005550bf:
  piVar8 = (int *)FUN_00555550(this,*(undefined4 *)((int)this + 0x168),
                               *(undefined4 *)((int)this + 0x16c));
  piVar6 = *(int **)((int)this + 0x160);
  if (piVar8 == (int *)0x0) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x298))();
      if (*(char *)((int)*(int **)((int)this + 0x160) + 0x286) != '\0') {
        (**(code **)(**(int **)((int)this + 0x160) + 0x2b4))();
        (**(code **)(**(int **)((int)this + 0x160) + 0x2ac))();
      }
    }
    cVar3 = (char)local_18;
    if (cVar3 == '\0') goto LAB_00555517;
    if (*(int *)((int)this + 0x164) != 0) {
      FUN_00591070("DETAIL","De-select an element in this screen.");
      *(undefined1 *)(*(int *)((int)this + 0x164) + 0x418) = 0;
      (**(code **)(**(int **)((int)this + 0x164) + 0x2c0))();
      (**(code **)(**(int **)((int)this + 0x164) + 0x294))();
      *(undefined4 *)((int)this + 0x164) = 0;
      goto LAB_005554c0;
    }
  }
  else {
    if ((piVar8 != piVar6) && (piVar6 != (int *)0x0)) {
      if (*(char *)((int)piVar6 + 0x286) != '\0') {
        (**(code **)(*piVar6 + 0x2b4))();
        (**(code **)(**(int **)((int)this + 0x160) + 0x2ac))();
        piVar6 = *(int **)((int)this + 0x160);
      }
      (**(code **)(*piVar6 + 0x298))();
    }
    if ((*(char *)((int)piVar8 + 0x285) != '\0') &&
       (local_18 = local_18 & 0xff, *(char *)((int)this + 0x15c) != '\0')) {
      local_18 = 1;
    }
    local_24 = *(float *)((int)this + 0x168);
    fVar12 = *(float *)((int)this + 0x16c);
    local_8 = 0;
    local_20 = fVar12;
    local_14 = local_24;
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x5c))();
    local_24 = local_14 - *pfVar9;
    local_14 = local_24;
    iVar10 = (**(code **)(*piVar8 + 0x5c))();
    local_20 = (float)piVar8[0xa9] + (fVar12 - *(float *)(iVar10 + 4));
    local_1c = local_20;
    if (*(char *)((int)this + 0x15c) != '\0') {
      (**(code **)(*piVar8 + 0x2a4))();
    }
    fVar12 = local_14;
    (**(code **)(*piVar8 + 0x2b0))();
    if ((*(int **)((int)this + 0x188) == (int *)0x0) ||
       (cVar3 = (**(code **)(**(int **)((int)this + 0x188) + 0x10))(), cVar3 != '\0')) {
      if ((char)local_18 == '\0') {
        if (param_1 != '\0') {
          if (*(char *)((int)piVar8 + 0x286) != '\0') {
            (**(code **)(*piVar8 + 0x2a4))();
          }
          (**(code **)(*piVar8 + 0x298))();
        }
      }
      else {
        bVar2 = false;
        if ((*(int *)((int)this + 0x8c) == -1) ||
           (FUN_00591010((Vec2 *)((int)this + 0x58),(Vec2 *)((int)this + 0x168)), fVar12 <= 4.0)) {
          if ((*(char *)((int)piVar8 + 0x287) == '\0') || ((char)piVar8[0x9f] == '\0')) {
            if ((*(char *)((int)piVar8 + 0x286) == '\0') || ((char)piVar8[0x9f] == '\0')) {
              (**(code **)(**(int **)((int)this + 300) + 0x2c))();
            }
            else {
              (**(code **)(*piVar8 + 0x2a8))();
            }
          }
          else {
            FUN_00591070("DETAIL","Selected UI element");
            if (*(int *)((int)this + 0x164) != 0) {
              *(undefined1 *)(*(int *)((int)this + 0x164) + 0x418) = 0;
              (**(code **)(**(int **)((int)this + 0x164) + 0x2c0))();
              (**(code **)(**(int **)((int)this + 0x164) + 0x294))();
            }
            *(int **)((int)this + 0x164) = piVar8;
            *(undefined1 *)(piVar8 + 0x106) = 1;
            (**(code **)(**(int **)((int)this + 0x164) + 700))();
            (**(code **)(**(int **)((int)this + 0x164) + 0x294))();
            bVar2 = true;
          }
        }
        else {
          (**(code **)(*piVar8 + 0x2e4))();
        }
        in_stack_ffffffb4 = 0;
        (**(code **)(*piVar8 + 0x298))();
        if ((!bVar2) && (*(int *)((int)this + 0x164) != 0)) {
          FUN_00591070("DETAIL","De-select an element in this screen.");
          *(undefined1 *)(*(int *)((int)this + 0x164) + 0x418) = 0;
          (**(code **)(**(int **)((int)this + 0x164) + 0x2c0))();
          (**(code **)(**(int **)((int)this + 0x164) + 0x294))();
          *(undefined4 *)((int)this + 0x164) = 0;
          local_8 = 0xffffffff;
          goto LAB_005554c0;
        }
      }
    }
    local_8 = 0xffffffff;
LAB_005554c0:
    cVar3 = (char)local_18;
  }
  if (cVar3 != '\0') {
    FUN_00402690((void *)((int)this + 0x74),&PTR_005ce008,0);
    FUN_00402690(&stack0xffffffb4,&PTR_005ce008,0);
    FUN_005545c0(this,(byte *)(in_stack_ffffffb4 & 0xffffff00));
    *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x90) = 0xffffffff;
    *(undefined1 *)((int)this + 0x70) = 1;
  }
LAB_00555517:
  *(int **)((int)this + 0x160) = piVar8;
  FUN_00554700(this);
  ExceptionList = local_10;
  return;
}


undefined4 __thiscall FUN_00555550(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7329;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = *(int *)((int)this + 400);
  if (*(int *)((int)this + 0x194) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar5 * 4);
      if (((((char)piVar1[0xa1] != '\0') || (*(char *)((int)piVar1 + 0x287) != '\0')) &&
          ((char)piVar1[0x9f] != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x2e8))(param_1,param_2,uVar3), cVar2 != '\0')) {
        ExceptionList = local_10;
        return *(undefined4 *)(*(int *)((int)this + 400) + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)((int)this + 400);
    } while (uVar5 < (uint)(*(int *)((int)this + 0x194) - iVar4 >> 2));
  }
  ExceptionList = local_10;
  return 0;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_00555630(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  RenderTexture *this;
  uint uVar5;
  Ref *pRVar6;
  Scale9Sprite *pSVar7;
  Texture2D *pTVar8;
  float *pfVar9;
  int iVar10;
  Node *pNVar11;
  int *piVar12;
  byte *******pppppppbVar13;
  int iVar14;
  byte *******pppppppbVar15;
  void *pvVar16;
  byte *pbVar17;
  byte *******pppppppbVar18;
  byte *pbVar19;
  code *pcVar20;
  float fVar21;
  bool bVar22;
  float in_XMM1_Da;
  byte *in_stack_ffffff34;
  byte *in_stack_ffffff40;
  int *in_stack_ffffff44;
  char *pcVar23;
  Size local_94 [4];
  float *local_90;
  void *local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  char local_75;
  int local_74;
  byte *local_70;
  byte *******local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_5c;
  uint uStack_58;
  byte *******local_54 [4];
  uint local_44;
  uint local_40;
  byte *******local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c7406;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_8c = param_1;
  local_84 = in_XMM1_Da;
  puVar3 = &stack0xfffffffc;
  if (((DAT_0065b5cc == 0) || (puVar3 = &stack0xfffffffc, *(int *)(DAT_0065b5cc + 0xd0) == 0)) ||
     (puVar3 = &stack0xfffffffc, *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) == 0))
  goto LAB_005571ca;
  puVar3 = &stack0xfffffffc;
  if (*(int *)((int)param_1 + 0x17c) != 0) {
    FUN_00560b10(*(int *)((int)param_1 + 0x17c));
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  local_80 = *(int *)((int)param_1 + 0x184);
  if (local_80 != 0) {
    iVar14 = 0;
    iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    piVar12 = *(int **)(iVar10 + 0x3c);
    piVar1 = *(int **)(iVar10 + 0x40);
    local_7c = (float)((uint)((int)piVar1 + (3 - (int)piVar12)) >> 2);
    if (piVar1 < piVar12) {
      local_7c = 0.0;
    }
    if (local_7c != 0.0) {
      fVar21 = 0.0;
      iVar10 = iVar14;
      do {
        iVar2 = *piVar12;
        iVar14 = iVar10;
        if (((*(int *)(*(int *)(*piVar12 + 8) + 4) == local_80) && (iVar14 = iVar2, iVar10 != 0)) &&
           ((iVar14 = iVar10, *(char *)(iVar10 + 99) == '\0' && (*(char *)(iVar2 + 99) != '\0')))) {
          iVar14 = iVar2;
        }
        fVar21 = (float)((int)fVar21 + 1);
        piVar12 = piVar12 + 1;
        iVar10 = iVar14;
        param_1 = local_8c;
      } while (fVar21 != local_7c);
    }
    if ((*(int *)((int)param_1 + 0x188) == 0) || (*(int *)((int)param_1 + 0x188) != iVar14)) {
      *(int *)((int)param_1 + 0x188) = iVar14;
    }
  }
  if (*(int *)((int)param_1 + 0x120) == 0) {
    this = cocos2d::RenderTexture::create
                     (*(int *)((int)param_1 + 0x68),*(int *)((int)param_1 + 0x6c));
    *(RenderTexture **)((int)param_1 + 0x120) = this;
    cocos2d::Ref::retain((Ref *)this);
  }
  piVar12 = *(int **)((int)param_1 + 300);
  if (((char)piVar12[1] != '\0') &&
     ((in_XMM1_Da = *(float *)((int)param_1 + 0x168), in_XMM1_Da != *(float *)((int)param_1 + 0x170)
      || (in_XMM1_Da = *(float *)((int)param_1 + 0x16c),
         in_XMM1_Da != *(float *)((int)param_1 + 0x174))))) {
    *(undefined1 *)((int)param_1 + 0x70) = 1;
  }
  if (piVar12 != (int *)0x0) {
    in_XMM1_Da = local_84;
    (**(code **)(*piVar12 + 8))();
  }
  if (0x9f < *(int *)((int)param_1 + 0x68)) {
    in_XMM1_Da = *(float *)(DAT_0065b444 + 0x124);
    if (in_XMM1_Da == -1.0) {
      if (*(int **)((int)param_1 + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x2c) + 0xb4))();
      }
    }
    else {
      if (*(int **)((int)param_1 + 0x28) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x28) + 0x138))();
        *(undefined4 *)((int)param_1 + 0x28) = 0;
      }
      if (*(Ref **)((int)param_1 + 0x2c) != (Ref *)0x0) {
        cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x2c));
        *(undefined4 *)((int)param_1 + 0x2c) = 0;
      }
      FUN_00591e00(&stack0xffffff44,&DAT_005ce00c);
      pRVar6 = FUN_0055cb00((Node)0x0,in_stack_ffffff44);
      *(Ref **)((int)param_1 + 0x28) = pRVar6;
      (**(code **)(*(int *)pRVar6 + 0x2c))();
      cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x28));
      local_74 = 0x3f800000;
      local_70 = (byte *)0x3f800000;
      local_14 = 0;
      (**(code **)(**(int **)((int)param_1 + 0x28) + 0xa0))();
      local_14 = 0xffffffff;
      (**(code **)(**(int **)((int)param_1 + 0x28) + 0x48))();
      local_2c = (int *)0x0;
      uStack_28 = 0xf;
      local_3c = (byte *******)((uint)local_3c & 0xffffff00);
      FUN_00402690(&local_3c,"TimeCompression.png",0x13);
      local_14 = 1;
      pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
      local_14 = 0xffffffff;
      *(Scale9Sprite **)((int)param_1 + 0x2c) = pSVar7;
      if (0xf < uStack_28) {
        pppppppbVar15 = local_3c;
        if ((0xfff < uStack_28 + 1) &&
           (pppppppbVar15 = (byte *******)local_3c[-1],
           (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppppbVar15);
      }
      cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x2c));
      iVar10 = **(int **)((int)param_1 + 0x2c);
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_80 + 1),0x8f,0xc2,0xff);
      (**(code **)(iVar10 + 0x25c))();
      pTVar8 = (Texture2D *)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x2c) + 0x278) + 0xc))();
      FUN_00591db0(pTVar8);
      iVar10 = **(int **)((int)param_1 + 0x2c);
      iVar14 = (**(code **)(**(int **)((int)param_1 + 0x28) + 0xb0))();
      local_7c = *(float *)(iVar14 + 4);
      pfVar9 = (float *)(**(code **)(**(int **)((int)param_1 + 0x28) + 0xb0))();
      in_stack_ffffff44 = (int *)cocos2d::Size::Size((Size *)&local_74,*pfVar9 + 4.0,local_7c + 4.0)
      ;
      (**(code **)(iVar10 + 0xac))();
      local_74 = 0x3f000000;
      local_70 = (byte *)0x3f000000;
      local_14 = 2;
      in_stack_ffffff40 = (byte *)&local_74;
      (**(code **)(**(int **)((int)param_1 + 0x2c) + 0xa0))();
      local_14 = 0xffffffff;
      local_70 = (byte *)**(undefined4 **)((int)param_1 + 0x2c);
      iVar10 = (**(code **)(**(int **)((int)param_1 + 0x28) + 0xb0))();
      local_7c = *(float *)(iVar10 + 4);
      iVar10 = **(int **)((int)param_1 + 0x28);
      local_80 = iVar10;
      local_90 = (float *)(**(code **)(**(int **)((int)param_1 + 0x28) + 0xb0))();
      (**(code **)(iVar10 + 0x74))();
      local_7c = local_7c * 0.5;
      (**(code **)(iVar10 + 0x6c))();
      param_1 = local_8c;
      in_XMM1_Da = *local_90 * 0.5;
      in_stack_ffffff34 = (byte *)0x555a85;
      local_90 = (float *)in_XMM1_Da;
      (**(code **)(local_70 + 0x48))();
    }
    if (DAT_0065b3d4 != (void *)0x0) {
      local_70 = *(byte **)(*(int *)((int)DAT_0065b3d4 + 0x224) + 0x4c);
      iVar14 = *(int *)(*(int *)((int)DAT_0065b3d4 + 0x224) + 0x50) - (int)local_70;
      iVar10 = iVar14 >> 0x1f;
      iVar14 = iVar14 / 0x18 + iVar10;
      if (iVar14 == iVar10) {
        if (iVar14 == iVar10) {
          pbVar17 = (byte *)((int)param_1 + 4);
          pbVar19 = pbVar17;
          if (0xf < *(uint *)((int)param_1 + 0x18)) {
            pbVar19 = *(byte **)pbVar17;
          }
          uVar5 = FUN_004031f0(pbVar19,*(uint *)((int)param_1 + 0x14),(byte *)&PTR_005ce008,0);
          if ((char)uVar5 == '\0') {
            *(undefined4 *)((int)param_1 + 0x14) = 0;
            if (0xf < *(uint *)((int)param_1 + 0x18)) {
              pbVar17 = *(byte **)pbVar17;
            }
            *pbVar17 = 0;
            if (*(Ref **)((int)param_1 + 0x24) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x24));
              if (*(int **)((int)param_1 + 0x24) != (int *)0x0) {
                (**(code **)(**(int **)((int)param_1 + 0x24) + 0x138))();
                *(undefined4 *)((int)param_1 + 0x24) = 0;
              }
            }
            if (*(Ref **)((int)param_1 + 0x1c) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x1c));
              *(undefined4 *)((int)param_1 + 0x1c) = 0;
            }
            if (*(Ref **)((int)param_1 + 0x20) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x20));
              *(undefined4 *)((int)param_1 + 0x20) = 0;
            }
          }
        }
      }
      else {
        uVar5 = FUN_00413e90((byte *)((int)param_1 + 4),local_70);
        if ((char)uVar5 != '\0') {
          if (*(int **)((int)param_1 + 0x24) != (int *)0x0) {
            (**(code **)(**(int **)((int)param_1 + 0x24) + 0x138))();
            *(undefined4 *)((int)param_1 + 0x24) = 0;
          }
          if (*(Ref **)((int)param_1 + 0x1c) != (Ref *)0x0) {
            cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x1c));
            *(undefined4 *)((int)param_1 + 0x1c) = 0;
          }
          if (*(Ref **)((int)param_1 + 0x20) != (Ref *)0x0) {
            cocos2d::Ref::autorelease(*(Ref **)((int)param_1 + 0x20));
            *(undefined4 *)((int)param_1 + 0x20) = 0;
          }
          std::basic_string<>::operator=
                    ((basic_string<> *)((int)param_1 + 4),
                     *(basic_string<> **)(*(int *)((int)DAT_0065b3d4 + 0x224) + 0x4c));
          FUN_00591e00(&stack0xffffff44,&DAT_006238e0);
          pRVar6 = FUN_0055ca10(0x8c,0xffffffff,(Node)0x0,in_stack_ffffff44);
          *(Ref **)((int)param_1 + 0x24) = pRVar6;
          (**(code **)(*(int *)pRVar6 + 0x2c))();
          cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x24));
          local_74 = 0x3f000000;
          local_70 = (byte *)0x3f000000;
          local_14 = 3;
          (**(code **)(**(int **)((int)param_1 + 0x24) + 0xa0))();
          local_14 = 0xffffffff;
          (**(code **)(**(int **)((int)param_1 + 0x24) + 0x48))();
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (byte *******)((uint)local_3c & 0xffffff00);
          FUN_00402690(&local_3c,"EmergencyBorder.png",0x13);
          local_14 = 4;
          pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
          local_14 = 0xffffffff;
          *(Scale9Sprite **)((int)param_1 + 0x1c) = pSVar7;
          if (0xf < uStack_28) {
            pppppppbVar15 = local_3c;
            if ((0xfff < uStack_28 + 1) &&
               (pppppppbVar15 = (byte *******)local_3c[-1],
               0x1f < (uint)((int)local_3c + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pppppppbVar15);
          }
          cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x1c));
          pTVar8 = (Texture2D *)
                   (**(code **)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0x278) + 0xc))();
          FUN_00591db0(pTVar8);
          iVar10 = **(int **)((int)param_1 + 0x1c);
          iVar14 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0xb0))();
          local_70 = *(byte **)(iVar14 + 4);
          pfVar9 = (float *)(**(code **)(**(int **)((int)param_1 + 0x24) + 0xb0))();
          cocos2d::Size::Size(local_94,*pfVar9 + 12.0,(float)local_70 + 12.0);
          (**(code **)(iVar10 + 0xac))();
          local_74 = 0x3f000000;
          local_70 = (byte *)0x3f000000;
          local_14 = 5;
          in_stack_ffffff44 = &local_74;
          (**(code **)(**(int **)((int)param_1 + 0x1c) + 0xa0))();
          local_14 = 0xffffffff;
          in_stack_ffffff40 = (byte *)(float)(*(int *)((int)param_1 + 0x6c) / 3);
          (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x48))();
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (byte *******)((uint)local_3c & 0xffffff00);
          FUN_00402690(&local_3c,"EmergencyBorder_Dim.png",0x17);
          local_14 = 6;
          pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
          local_14 = 0xffffffff;
          *(Scale9Sprite **)((int)param_1 + 0x20) = pSVar7;
          if (0xf < uStack_28) {
            pppppppbVar15 = local_3c;
            if ((0xfff < uStack_28 + 1) &&
               (pppppppbVar15 = (byte *******)local_3c[-1],
               (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pppppppbVar15);
          }
          cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x20));
          pTVar8 = (Texture2D *)
                   (**(code **)(*(int *)(*(int *)((int)param_1 + 0x20) + 0x278) + 0xc))();
          FUN_00591db0(pTVar8);
          iVar10 = **(int **)((int)param_1 + 0x20);
          iVar14 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0xb0))();
          local_70 = *(byte **)(iVar14 + 4);
          pfVar9 = (float *)(**(code **)(**(int **)((int)param_1 + 0x24) + 0xb0))();
          cocos2d::Size::Size(local_94,*pfVar9 + 12.0,(float)local_70 + 12.0);
          (**(code **)(iVar10 + 0xac))();
          local_74 = 0x3f000000;
          local_70 = (byte *)0x3f000000;
          local_14 = 7;
          in_stack_ffffff34 = (byte *)&local_74;
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0xa0))();
          local_14 = 0xffffffff;
          in_XMM1_Da = (float)(*(int *)((int)param_1 + 0x68) / 2);
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0x48))
                    (in_XMM1_Da,(float)(*(int *)((int)param_1 + 0x6c) / 3));
        }
      }
    }
  }
  iVar10 = FUN_00555550(param_1,*(undefined4 *)((int)param_1 + 0x168),
                        *(undefined4 *)((int)param_1 + 0x16c));
  if (iVar10 == 0) {
LAB_00555fa9:
    FUN_005542e0((int)param_1);
  }
  else {
    local_75 = *(char *)(iVar10 + 0x2dc);
    if (local_75 == '\0') {
      pbVar17 = (byte *)(iVar10 + 0x2c4);
      pbVar19 = pbVar17;
      if (0xf < *(uint *)(iVar10 + 0x2d8)) {
        pbVar19 = *(byte **)pbVar17;
      }
      uVar5 = FUN_004031f0(pbVar19,*(uint *)(iVar10 + 0x2d4),(byte *)&PTR_005ce008,0);
      if ((char)uVar5 == '\0') {
        FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar17);
        FUN_005541f0(param_1,in_stack_ffffff40);
      }
      else if (local_75 == '\0') goto LAB_00555fa9;
    }
  }
  if ((*(char *)((int)param_1 + 0x114) != '\0') && (DAT_0065506b != '\0')) {
    if (*(int *)((int)param_1 + 0xec) == 0) {
      FUN_004024e0(&stack0xffffff44,(undefined4 *)((int)param_1 + 0xfc));
      pRVar6 = FUN_0055cb00((Node)0x0,in_stack_ffffff44);
      pcVar20 = retain_exref;
      *(Ref **)((int)param_1 + 0xec) = pRVar6;
      cocos2d::Ref::retain(pRVar6);
    }
    else {
      FUN_004024e0(&stack0xffffff44,(undefined4 *)((int)param_1 + 0xfc));
      FUN_0055ce90(*(void **)((int)param_1 + 0xec),'\x01','\x01',in_stack_ffffff44);
      pcVar20 = retain_exref;
    }
    piVar12 = *(int **)((int)param_1 + 0xf0);
    if (piVar12 == (int *)0x0) {
      local_3c = (byte *******)((uint)local_3c & 0xffffff00);
      uStack_28 = 0xf;
      local_2c = piVar12;
      FUN_00402690(&local_3c,"ToolTip.png",0xb);
      local_14 = 8;
      pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
      local_14 = 0xffffffff;
      *(Scale9Sprite **)((int)param_1 + 0xf0) = pSVar7;
      if (0xf < uStack_28) {
        pppppppbVar15 = local_3c;
        if ((0xfff < uStack_28 + 1) &&
           (pppppppbVar15 = (byte *******)local_3c[-1],
           (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppppbVar15);
      }
      (*pcVar20)();
      (**(code **)(**(int **)((int)param_1 + 0xf0) + 0x10c))();
      piVar12 = *(int **)((int)param_1 + 0xf0);
    }
    if (*(int *)((int)param_1 + 0xf4) == 0) {
      pNVar11 = cocos2d::Node::create();
      *(Node **)((int)param_1 + 0xf4) = pNVar11;
      (*pcVar20)();
      (**(code **)(**(int **)((int)param_1 + 0xf4) + 0x10c))();
      piVar12 = *(int **)((int)param_1 + 0xf0);
    }
    (**(code **)(*piVar12 + 0x25c))();
    iVar10 = **(int **)((int)param_1 + 0xf0);
    iVar14 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0xb0))();
    local_70 = *(byte **)(iVar14 + 4);
    pfVar9 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0xb0))();
    in_XMM1_Da = *pfVar9 + 4.0;
    cocos2d::Size::Size(local_94,in_XMM1_Da,(float)local_70 + 4.0);
    (**(code **)(iVar10 + 0xac))();
    local_74 = 0;
    local_70 = (byte *)0x0;
    local_14 = 9;
    (**(code **)(**(int **)((int)param_1 + 0xec) + 0xa0))();
    local_14 = 0xffffffff;
    (**(code **)(**(int **)((int)param_1 + 0xec) + 0x48))();
    local_74 = 0x3f000000;
    local_70 = (byte *)0x3f000000;
    local_14 = 10;
    in_stack_ffffff44 = &local_74;
    (**(code **)(**(int **)((int)param_1 + 0xf4) + 0xa0))();
    local_14 = 0xffffffff;
    (**(code **)(**(int **)((int)param_1 + 0xf4) + 0x2c))();
    *(undefined1 *)((int)param_1 + 0x114) = 0;
  }
  pfVar9 = (float *)0x0;
  if (DAT_0065b3d4 == (void *)0x0) {
LAB_00556244:
    piVar12 = *(int **)(DAT_0065b5cc + 0xd0);
    if ((piVar12 == (int *)0x0) ||
       ((((char)piVar12[0x34] != '\0' ||
         (iVar10 = *(int *)(*(int *)((int)param_1 + 300) + 0x10), iVar10 == 0)) ||
        (*(char *)(iVar10 + 0x5d) != '\0')))) {
      if (*(int *)((int)param_1 + 0x184) != 0) {
        if ((piVar12 == (int *)0x0) || (cVar4 = (**(code **)(*piVar12 + 0x20))(), cVar4 != '\0')) {
          pfVar9 = (float *)0x9;
        }
        else if (*(int **)((int)param_1 + 0x188) == (int *)0x0) {
          pfVar9 = (float *)0x4;
        }
        else {
          cVar4 = (**(code **)(**(int **)((int)param_1 + 0x188) + 0x14))();
          if (cVar4 == '\0') {
            iVar10 = *(int *)((int)param_1 + 0x188);
            if (*(char *)(iVar10 + 99) == '\0') {
              pfVar9 = (float *)0x3;
            }
            else if (*(char *)(iVar10 + 0x2c) == '\0') {
              pfVar9 = (float *)0x2;
            }
            else {
              FUN_004ae1b0(iVar10);
              if ((in_XMM1_Da <= 0.0) || (*(char *)(*(int *)((int)param_1 + 0x188) + 0x60) != '\0'))
              {
                cVar4 = (**(code **)(**(int **)((int)param_1 + 0x188) + 0x18))();
                if (cVar4 != '\0') {
                  fVar21 = *(float *)((int)param_1 + 0x48) - local_84;
                  local_90 = (float *)0x1;
                  *(float *)((int)param_1 + 0x48) = fVar21;
                  if (fVar21 <= 0.0) {
                    iVar10 = *(int *)((int)param_1 + 0x4c) + 1;
                    *(int *)((int)param_1 + 0x4c) = iVar10;
                    if (2 < iVar10) {
                      *(undefined4 *)((int)param_1 + 0x4c) = 0;
                    }
                    in_stack_ffffff34 = (byte *)0x556370;
                    FUN_00591e00(&stack0xffffff44,"ScreenDamage_Full_%d.png");
                    piVar12 = (int *)FUN_00591910(in_stack_ffffff44);
                    *(int **)((int)param_1 + 0x154) = piVar12;
                    local_70 = (byte *)(float)*(int *)((int)param_1 + 0x6c);
                    iVar10 = *piVar12;
                    (**(code **)(iVar10 + 0xb0))();
                    (**(code **)(iVar10 + 0x2c))();
                    iVar10 = **(int **)((int)param_1 + 0x154);
                    (**(code **)(iVar10 + 0xb0))();
                    (**(code **)(iVar10 + 0x2c))();
                    param_1 = local_8c;
                    local_74 = 0x3f000000;
                    local_70 = (byte *)0x3f000000;
                    local_14 = 0xb;
                    (**(code **)(**(int **)((int)local_8c + 0x154) + 0xa0))();
                    local_14 = 0xffffffff;
                    iVar10 = **(int **)((int)param_1 + 0x154);
                    iVar14 = (**(code **)(iVar10 + 0xb0))();
                    local_70 = *(byte **)(iVar14 + 4);
                    (**(code **)(**(int **)((int)param_1 + 0x154) + 0xb0))();
                    (**(code **)(iVar10 + 0x48))();
                    cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x154));
                    *(undefined4 *)((int)param_1 + 0x48) = 0x3dcccccd;
                  }
                  pfVar9 = local_90;
                  if (*(char *)((int)param_1 + 0x14c) == '\0') {
                    fVar21 = 40.0;
                  }
                  else {
                    fVar21 = -40.0;
                  }
                  fVar21 = fVar21 * local_84 + *(float *)((int)param_1 + 0x150);
                  *(float *)((int)param_1 + 0x150) = fVar21;
                  if (64.0 <= fVar21) {
                    if (255.0 < fVar21) {
                      *(undefined4 *)((int)param_1 + 0x150) = 0x437f0000;
                      goto LAB_00556509;
                    }
                  }
                  else {
                    *(undefined4 *)((int)param_1 + 0x150) = 0x42800000;
LAB_00556509:
                    *(bool *)((int)param_1 + 0x14c) = *(char *)((int)param_1 + 0x14c) == '\0';
                  }
                  if (*(int **)((int)param_1 + 0x154) != (int *)0x0) {
                    (**(code **)(**(int **)((int)param_1 + 0x154) + 0x244))();
                  }
                  *(undefined1 *)((int)param_1 + 0x70) = 1;
                }
              }
              else {
                pfVar9 = (float *)0x6;
              }
            }
          }
          else {
            pfVar9 = (float *)0x5;
          }
        }
      }
    }
    else {
      pfVar9 = (float *)0x7;
    }
  }
  else {
    bVar22 = false;
    if (*(int *)((int)DAT_0065b3d4 + 0x254) != 0) {
      bVar22 = *(int *)(*(int *)((int)DAT_0065b3d4 + 0x254) + 0x158) == 0;
    }
    if ((!bVar22) || (*(int *)((int)DAT_0065b3d4 + 0x378) != 1)) goto LAB_00556244;
    pfVar9 = (float *)0x8;
  }
  if (pfVar9 != (float *)*(float *)((int)param_1 + 0x124)) {
    *(undefined1 *)((int)param_1 + 0x70) = 1;
    *(float **)((int)param_1 + 0x124) = pfVar9;
    if ((pfVar9 != (float *)0x1) && (*(int **)((int)param_1 + 0x154) != (int *)0x0)) {
      (**(code **)(**(int **)((int)param_1 + 0x154) + 0x138))();
      *(undefined4 *)((int)param_1 + 0x154) = 0;
    }
  }
  local_44 = 0;
  local_40 = 0xf;
  local_54[0] = (byte *******)((uint)local_54[0] & 0xffffff00);
  local_14 = 0xc;
  local_75 = '\x01';
  if (pfVar9 == (float *)0x9) {
    fVar21 = *(float *)((int)param_1 + 0x48) - local_84;
    local_75 = '\0';
    *(float *)((int)param_1 + 0x48) = fVar21;
    if (fVar21 <= 0.0) {
      *(undefined4 *)((int)param_1 + 0x48) = 0x3e4ccccd;
      *(bool *)((int)param_1 + 0x50) = *(char *)((int)param_1 + 0x50) == '\0';
    }
    if (0x3c < *(int *)((int)param_1 + 0x68)) {
      uVar5 = 0x1e;
      if (*(char *)((int)param_1 + 0x50) == '\0') {
        pcVar23 = "`$** EMERGENCY: HULL BREACH **";
      }
      else {
        pcVar23 = "`@** EMERGENCY: HULL BREACH **";
      }
      goto LAB_00556878;
    }
  }
  else if ((pfVar9 != (float *)0x0) && (pfVar9 != (float *)0x1)) {
    iVar10 = *(int *)((int)param_1 + 0x124);
    local_75 = '\0';
    if (iVar10 == 7) {
      if (*(int *)((int)param_1 + 0x68) < 0x3d) goto LAB_0055687d;
      iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
      pbVar19 = (byte *)(iVar10 + 0x60);
      pbVar17 = pbVar19;
      if (0xf < *(uint *)(iVar10 + 0x74)) {
        pbVar17 = *(byte **)pbVar19;
      }
      local_70 = *(byte **)(iVar10 + 0x70);
      uVar5 = FUN_004031f0(pbVar17,(uint)local_70,(byte *)"proxima",7);
      if ((char)uVar5 == '\0') {
        if (0xf < *(uint *)(iVar10 + 0x74)) {
          pbVar19 = *(byte **)pbVar19;
        }
        uVar5 = FUN_004031f0(pbVar19,(uint)local_70,(byte *)"enceladus",9);
        if ((char)uVar5 == '\0') {
          uVar5 = 0x40;
          pcVar23 = "`!V`%entarii `0Ceres OS `2v`01.81\n`$ - authentication required-\n";
        }
        else {
          uVar5 = 0x3d;
          pcVar23 = "`%ENCELADUS `!ShipOS `2v`01.00\n`$ - authentication required-\n";
        }
      }
      else {
        uVar5 = 0x47;
        pcVar23 = "`!HW `%Industries `#Proxima OS `2v`02.01\n`$ - authentication required-\n";
      }
    }
    else if (iVar10 == 2) {
      local_80 = *(int *)((int)param_1 + 0x188);
      if (local_80 != 0) {
        if (*(char *)(local_80 + 0x2c) == '\0') {
          local_5c = (int *)0x0;
          uStack_58 = 0xf;
          local_6c = (byte *******)((uint)local_6c & 0xffffff00);
          local_14 = 0xd;
          iVar10 = *(int *)(local_80 + 8);
          local_7c = 0.0;
          if (*(int *)(iVar10 + 0x118) - *(int *)(iVar10 + 0x114) >> 5 != 0) {
            iVar14 = 0;
            do {
              if ((*(int *)(iVar14 + *(int *)(iVar10 + 0x114)) <= *(int *)(local_80 + 0x28)) &&
                 ((iVar2 = *(int *)(iVar14 + 4 + *(int *)(iVar10 + 0x114)), iVar2 == -1 ||
                  (*(int *)(local_80 + 0x28) <= iVar2)))) {
                pppppppbVar15 = (byte *******)&local_6c;
                if (0xf < uStack_58) {
                  pppppppbVar15 = local_6c;
                }
                uVar5 = FUN_004031f0((byte *)pppppppbVar15,(uint)local_5c,(byte *)&PTR_005ce008,0);
                if ((char)uVar5 == '\0') {
                  FUN_00403640(&local_6c,&DAT_005e75f8,1);
                  iVar10 = *(int *)(local_80 + 8);
                }
                iVar10 = *(int *)(iVar10 + 0x114) + iVar14;
                pvVar16 = (void *)(iVar10 + 8);
                if (0xf < *(uint *)(iVar10 + 0x1c)) {
                  pvVar16 = *(void **)(iVar10 + 8);
                }
                FUN_00403640(&local_6c,pvVar16,*(uint *)(iVar10 + 0x18));
                iVar10 = *(int *)(local_80 + 8);
              }
              iVar14 = iVar14 + 0x20;
              local_7c = (float)((int)local_7c + 1);
              param_1 = local_8c;
            } while ((uint)local_7c <
                     (uint)(*(int *)(iVar10 + 0x118) - *(int *)(iVar10 + 0x114) >> 5));
          }
          local_3c = local_6c;
          local_6c = (byte *******)((uint)local_6c & 0xffffff00);
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          local_2c = local_5c;
          uStack_28 = uStack_58;
          local_5c = (int *)0x0;
          uStack_58 = 0xf;
        }
        else {
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (byte *******)((uint)local_3c & 0xffffff00);
          FUN_00402690(&local_3c,&PTR_005ce008,0);
        }
        local_14._0_1_ = 0xe;
        FUN_00403490(local_54,&local_3c);
        local_14 = CONCAT31(local_14._1_3_,0xc);
        if (0xf < uStack_28) {
          pppppppbVar15 = local_3c;
          if ((0xfff < uStack_28 + 1) &&
             (pppppppbVar15 = (byte *******)local_3c[-1],
             (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppppbVar15);
        }
        goto LAB_0055687d;
      }
      uVar5 = 0x13;
      pcVar23 = "`@Error: `$unknown.";
    }
    else if (iVar10 == 3) {
      uVar5 = 0x24;
      pcVar23 = "`@Error #78: `$module is `7disabled\n";
    }
    else if (iVar10 == 5) {
      uVar5 = 0x3e;
      pcVar23 = "`@Error #98: `$module_sync failed, module is `@non-functional\n";
    }
    else if (iVar10 == 4) {
      uVar5 = 0x23;
      pcVar23 = "`@Error #12: `$**no module found**\n";
    }
    else if (iVar10 == 8) {
      uVar5 = 0x15;
      pcVar23 = "`%-locked by broker-\n";
    }
    else {
      if (iVar10 != 6) goto LAB_0055687d;
      uVar5 = 0x26;
      pcVar23 = "`@Error #6: `$**module out of power**\n";
    }
LAB_00556878:
    FUN_00403640(local_54,pcVar23,uVar5);
  }
LAB_0055687d:
  pppppppbVar15 = (byte *******)((int)param_1 + 0x130);
  pppppppbVar13 = pppppppbVar15;
  if (0xf < *(uint *)((int)param_1 + 0x144)) {
    pppppppbVar13 = (byte *******)*pppppppbVar15;
  }
  pppppppbVar18 = (byte *******)local_54;
  if (0xf < local_40) {
    pppppppbVar18 = local_54[0];
  }
  uVar5 = FUN_004031f0((byte *)pppppppbVar18,local_44,(byte *)pppppppbVar13,
                       *(uint *)((int)param_1 + 0x140));
  if ((char)uVar5 == '\0') {
    *(undefined1 *)((int)param_1 + 0x70) = 1;
LAB_005568be:
    (**(code **)(**(int **)((int)param_1 + 0x120) + 0x2a0))();
    if (local_75 == '\0') {
      pppppppbVar13 = pppppppbVar15;
      if (0xf < *(uint *)((int)param_1 + 0x144)) {
        pppppppbVar13 = (byte *******)*pppppppbVar15;
      }
      pppppppbVar18 = (byte *******)local_54;
      if (0xf < local_40) {
        pppppppbVar18 = local_54[0];
      }
      uVar5 = FUN_004031f0((byte *)pppppppbVar18,local_44,(byte *)pppppppbVar13,
                           *(uint *)((int)param_1 + 0x140));
      if (((char)uVar5 == '\0') ||
         (pNVar11 = *(Node **)((int)param_1 + 0x148), pNVar11 == (Node *)0x0)) {
        if ((byte ********)pppppppbVar15 != local_54) {
          pppppppbVar13 = (byte *******)local_54;
          if (0xf < local_40) {
            pppppppbVar13 = local_54[0];
          }
          FUN_00402690(pppppppbVar15,pppppppbVar13,local_44);
        }
        if (*(int **)((int)param_1 + 0x148) != (int *)0x0) {
          (**(code **)(**(int **)((int)param_1 + 0x148) + 0x138))();
          *(undefined4 *)((int)param_1 + 0x148) = 0;
        }
        pNVar11 = (Node *)0x0;
        if ((0xa0 < *(int *)((int)param_1 + 0x68)) && (0x28 < *(int *)((int)param_1 + 0x6c))) {
          FUN_004024e0(&stack0xffffff34,local_54);
          pRVar6 = FUN_0055ca10(*(int *)((int)param_1 + 0x68) + -4,
                                *(int *)((int)param_1 + 0x6c) + -4,(Node)0x0,in_stack_ffffff34);
          *(Ref **)((int)param_1 + 0x148) = pRVar6;
          iVar10 = *(int *)pRVar6;
          iVar14 = (**(code **)(iVar10 + 0xb0))();
          local_70 = *(byte **)(iVar14 + 4);
          (**(code **)(**(int **)((int)param_1 + 0x148) + 0xb0))();
          (**(code **)(iVar10 + 0x48))();
          (**(code **)(**(int **)((int)param_1 + 0x148) + 0x2c))();
          local_88 = 0x3f000000;
          local_84 = 0.5;
          local_14._0_1_ = 0x14;
          (**(code **)(**(int **)((int)param_1 + 0x148) + 0xa0))();
          local_14 = CONCAT31(local_14._1_3_,0xc);
          cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x148));
          pNVar11 = *(Node **)((int)param_1 + 0x148);
        }
        if (pNVar11 == (Node *)0x0) goto LAB_00557156;
      }
      cocos2d::Node::visit(pNVar11);
    }
    else {
      iVar10 = *(int *)((int)param_1 + 400);
      local_7c = 0.0;
      if (*(int *)((int)param_1 + 0x194) - iVar10 >> 2 != 0) {
        do {
          pNVar11 = *(Node **)(iVar10 + (int)local_7c * 4);
          if (pNVar11[0x419] != (Node)0x0) {
            cocos2d::Node::visit(pNVar11);
          }
          local_7c = (float)((int)local_7c + 1);
          iVar10 = *(int *)((int)param_1 + 400);
        } while ((uint)local_7c < (uint)(*(int *)((int)param_1 + 0x194) - iVar10 >> 2));
      }
      local_7c = 0.0;
      if (*(int *)((int)param_1 + 0x194) - iVar10 >> 2 != 0) {
        do {
          pNVar11 = *(Node **)(iVar10 + (int)local_7c * 4);
          if (pNVar11[0x419] == (Node)0x0) {
            cocos2d::Node::visit(pNVar11);
          }
          local_7c = (float)((int)local_7c + 1);
          iVar10 = *(int *)((int)param_1 + 400);
        } while ((uint)local_7c < (uint)(*(int *)((int)param_1 + 0x194) - iVar10 >> 2));
      }
      iVar10 = *(int *)((int)param_1 + 0x18c);
      if (*(char *)(iVar10 + 0xfe) != '\0') {
        pbVar17 = (byte *)(iVar10 + 0x58);
        if (0xf < *(uint *)(iVar10 + 0x6c)) {
          pbVar17 = *(byte **)(iVar10 + 0x58);
        }
        uVar5 = FUN_004031f0(pbVar17,*(uint *)(iVar10 + 0x68),(byte *)&PTR_005ce008,0);
        if (((char)uVar5 == '\0') && (DAT_0065b3d4 != (void *)0x0)) {
          FUN_004024e0(&stack0xffffff34,(undefined4 *)(*(int *)((int)param_1 + 0x18c) + 0x58));
          local_7c = (float)FUN_005116d0(DAT_0065b3d4,in_stack_ffffff34);
          if (local_7c != 0.0) {
            if (*(int **)((int)param_1 + 0x158) != (int *)0x0) {
              (**(code **)(**(int **)((int)param_1 + 0x158) + 0x138))();
              *(undefined4 *)((int)param_1 + 0x158) = 0;
            }
            FUN_00591e00(&stack0xffffff34,"UI_SmallCrack%d.png");
            piVar12 = (int *)FUN_00591910(in_stack_ffffff34);
            *(int **)((int)param_1 + 0x158) = piVar12;
            (**(code **)(*piVar12 + 0x2c))();
            cocos2d::Ref::retain(*(Ref **)((int)param_1 + 0x158));
            local_74 = 0x3f000000;
            local_70 = (byte *)0x3f000000;
            local_14._0_1_ = 0xf;
            (**(code **)(**(int **)((int)param_1 + 0x158) + 0xa0))();
            local_14 = CONCAT31(local_14._1_3_,0xc);
            (**(code **)(**(int **)((int)param_1 + 0x158) + 0x48))();
          }
        }
      }
      if (*(Node **)((int)param_1 + 0x19c) != (Node *)0x0) {
        cocos2d::Node::visit(*(Node **)((int)param_1 + 0x19c));
      }
      if (0.0 < *(float *)(DAT_0065b444 + 0x124)) {
        if (*(Node **)((int)param_1 + 0x2c) != (Node *)0x0) {
          cocos2d::Node::visit(*(Node **)((int)param_1 + 0x2c));
        }
        if (*(Node **)((int)param_1 + 0x28) != (Node *)0x0) {
          cocos2d::Node::visit(*(Node **)((int)param_1 + 0x28));
        }
      }
      pcVar20 = visit_exref;
      if ((*(char *)(*(int *)((int)param_1 + 300) + 4) != '\0') &&
         (*(char *)(*(int *)((int)param_1 + 300) + 5) == '\0')) {
        (**(code **)(**(int **)((int)param_1 + 0xe8) + 0x48))();
        cocos2d::Node::visit(*(Node **)((int)param_1 + 0xe8));
        if ((*(float *)((int)param_1 + 0x168) == *(float *)((int)param_1 + 0x170)) &&
           (*(float *)((int)param_1 + 0x16c) == *(float *)((int)param_1 + 0x174))) {
          *(float *)((int)param_1 + 0x178) = *(float *)((int)param_1 + 0x178) + local_84;
        }
        else {
          *(undefined4 *)((int)param_1 + 0x178) = 0;
        }
        *(undefined4 *)((int)param_1 + 0x170) = *(undefined4 *)((int)param_1 + 0x168);
        *(undefined4 *)((int)param_1 + 0x174) = *(undefined4 *)((int)param_1 + 0x16c);
        if (*(int **)((int)param_1 + 0x118) != (int *)0x0) {
          iVar10 = **(int **)((int)param_1 + 0x118);
          iVar14 = (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
          local_70 = *(byte **)(iVar14 + 4);
          local_90 = *(float **)((int)param_1 + 0x16c);
          (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
          (**(code **)(iVar10 + 0x48))();
          cocos2d::Node::visit(*(Node **)((int)param_1 + 0x118));
        }
        pbVar17 = (byte *)((int)param_1 + 0xfc);
        if (0xf < *(uint *)((int)param_1 + 0x110)) {
          pbVar17 = *(byte **)((int)param_1 + 0xfc);
        }
        uVar5 = FUN_004031f0(pbVar17,*(uint *)((int)param_1 + 0x10c),(byte *)&PTR_005ce008,0);
        pcVar20 = visit_exref;
        if (((char)uVar5 == '\0') && (DAT_0065506b != '\0')) {
          pfVar9 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0xb0))();
          pcVar20 = *(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0);
          local_84 = (float)*(int *)((int)param_1 + 0x6c);
          if (*(float *)((int)param_1 + 0x168) <
              (float)(*(int *)((int)param_1 + 0x68) - (int)*pfVar9)) {
            iVar10 = (*pcVar20)();
            local_84 = local_84 - *(float *)(iVar10 + 4);
            iVar10 = (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xb0))();
            local_74 = 0;
            if (*(float *)((int)param_1 + 0x16c) < local_84 - *(float *)(iVar10 + 4)) {
              local_70 = (byte *)0x3f800000;
              local_14._0_1_ = 0x13;
              (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              iVar10 = **(int **)((int)param_1 + 0xf4);
              iVar14 = (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
              local_70 = *(byte **)(iVar14 + 4);
              local_90 = *(float **)((int)param_1 + 0x16c);
              (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
            }
            else {
              local_70 = (byte *)0x0;
              local_14._0_1_ = 0x12;
              (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              local_70 = *(byte **)((int)param_1 + 0x16c);
              iVar10 = **(int **)((int)param_1 + 0xf4);
              (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
            }
LAB_00556f36:
            (**(code **)(iVar10 + 0x48))();
          }
          else {
            iVar10 = (*pcVar20)();
            local_84 = local_84 - *(float *)(iVar10 + 4);
            iVar10 = (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xb0))();
            local_74 = 0x3f800000;
            if (*(float *)((int)param_1 + 0x16c) < local_84 - *(float *)(iVar10 + 4)) {
              local_70 = (byte *)0x3f800000;
              local_14._0_1_ = 0x11;
              (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              iVar10 = **(int **)((int)param_1 + 0xf4);
              (**(code **)(**(int **)((int)param_1 + 0xe8) + 0xb0))();
              goto LAB_00556f36;
            }
            local_70 = (byte *)0x0;
            local_14._0_1_ = 0x10;
            (**(code **)(**(int **)((int)param_1 + 0xf0) + 0xa0))();
            local_14 = CONCAT31(local_14._1_3_,0xc);
            (**(code **)(**(int **)((int)param_1 + 0xf4) + 0x48))();
          }
          pcVar20 = visit_exref;
          if (1.2 <= *(float *)((int)param_1 + 0x178)) {
            cocos2d::Node::visit(*(Node **)((int)param_1 + 0xf4));
          }
        }
      }
      pbVar17 = (byte *)((int)param_1 + 4);
      if (0xf < *(uint *)((int)param_1 + 0x18)) {
        pbVar17 = *(byte **)((int)param_1 + 4);
      }
      uVar5 = FUN_004031f0(pbVar17,*(uint *)((int)param_1 + 0x14),(byte *)&PTR_005ce008,0);
      if ((char)uVar5 == '\0') {
        (*pcVar20)();
        (*pcVar20)();
      }
      if (*(int *)((int)param_1 + 0x154) != 0) {
        (*pcVar20)();
      }
      if (*(int *)((int)param_1 + 0x158) != 0) {
        (*pcVar20)();
      }
    }
LAB_00557156:
    (**(code **)(**(int **)((int)param_1 + 0x120) + 0x2a4))();
    pTVar8 = (Texture2D *)
             (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x120) + 0x2ec) + 0x278) + 0xc))
                       ();
    cocos2d::Sprite3D::setTexture(*(Sprite3D **)((int)param_1 + 0x11c),pTVar8);
    *(undefined2 *)((int)param_1 + 0x70) = 0;
  }
  else if (*(char *)((int)param_1 + 0x70) != '\0') goto LAB_005568be;
  puVar3 = puStack_20;
  if (0xf < local_40) {
    pppppppbVar15 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pppppppbVar15 = (byte *******)local_54[0][-1],
       (byte *)0x1f < (byte *)((int)local_54[0] + (-4 - (int)pppppppbVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppbVar15);
    puVar3 = puStack_20;
  }
LAB_005571ca:
  puStack_20 = puVar3;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_005571f0(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  char *this_00;
  char *pcVar5;
  uint in_stack_00000018;
  byte *in_stack_ffffff90;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_40;
  undefined local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7450;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff90,&param_1);
  FUN_00592d70(&local_4c,':',(undefined4 *)in_stack_ffffff90);
  local_8._0_1_ = 1;
  iVar1 = (local_48 - (int)local_4c) / 0x18;
  if (iVar1 == 1) {
    FUN_004024e0(&stack0xffffff90,local_4c);
    iVar1 = FUN_004dba70(in_stack_ffffff90);
    piVar2 = (int *)FUN_004da1b0(local_3c,iVar1);
    local_8._0_1_ = 2;
    FUN_004175d0((void *)((int)this + 0xd0),piVar2);
    local_8._0_1_ = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  else if (iVar1 == 2) {
    FUN_004024e0(&stack0xffffff90,local_4c);
    iVar1 = FUN_004dba70(in_stack_ffffff90);
    piVar2 = (int *)FUN_004da1b0(local_3c,iVar1);
    local_8._0_1_ = 4;
    FUN_004175d0((void *)((int)this + 0xd0),piVar2);
    local_8._0_1_ = 5;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    local_8._0_1_ = 1;
    pcVar3 = (char *)(local_4c + 6);
    if (0xf < (uint)local_4c[0xb]) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar1 = atoi(pcVar3);
    *(int *)((int)this + 0xb4) = iVar1;
    this_00 = (char *)((int)this + 0xb8);
    pcVar3 = (char *)(local_4c + 6);
    if (this_00 != pcVar3) {
      if (0xf < (uint)local_4c[0xb]) {
        pcVar3 = *(char **)pcVar3;
      }
      FUN_00402690(this_00,pcVar3,local_4c[10]);
    }
    pcVar5 = this_00;
    pcVar3 = this_00;
    if (0xf < *(uint *)((int)this + 0xcc)) {
      pcVar3 = *(char **)this_00;
      pcVar5 = *(char **)this_00;
    }
    if (0xf < *(uint *)((int)this + 0xcc)) {
      this_00 = *(char **)this_00;
    }
    FUN_00413ec0(&local_40,tolower_exref,this_00,pcVar5 + *(int *)((int)this + 200),pcVar3);
  }
  FUN_004025a0((int *)&local_4c);
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar4 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005573e0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *in_stack_ffffffac;
  byte *local_2c;
  int local_28;
  int local_20;
  byte *local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if (param_4 < (uint)((param_2 - param_1) / 0x18)) {
    local_18 = param_4 * 0x18;
    do {
      FUN_004024e0(&stack0xffffffac,(undefined4 *)(local_18 + param_1));
      FUN_00592d70(&local_2c,'=',in_stack_ffffffac);
      local_8._0_1_ = 1;
      iVar4 = (local_28 - (int)local_2c) / 0x18;
      if (iVar4 == 2) {
        local_1c = local_2c;
        pbVar7 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          local_1c = *(byte **)local_2c;
          pbVar7 = *(byte **)local_2c;
        }
        pbVar5 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar5 = *(byte **)local_2c;
        }
        iVar4 = (int)(pbVar7 + *(int *)(local_2c + 0x10)) - (int)pbVar5;
        iVar6 = 0;
        if (pbVar7 + *(int *)(local_2c + 0x10) < pbVar5) {
          iVar4 = 0;
        }
        local_20 = iVar4;
        if (iVar4 != 0) {
          do {
            iVar2 = tolower((int)(char)pbVar5[iVar6]);
            local_1c[iVar6] = (byte)iVar2;
            iVar6 = iVar6 + 1;
          } while (iVar6 != iVar4);
        }
        pbVar1 = local_2c;
        pbVar7 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar7 = *(byte **)local_2c;
        }
        uVar3 = FUN_004031f0(pbVar7,*(uint *)(local_2c + 0x10),(byte *)"tooltip",7);
        if ((char)uVar3 == '\0') {
          pbVar7 = pbVar1 + 0x18;
          pbVar5 = FUN_0047d6a0((void *)((int)local_14 + 0x168),pbVar1);
          if (pbVar5 != pbVar7) {
            if (0xf < *(uint *)(pbVar1 + 0x2c)) {
              pbVar7 = *(byte **)pbVar7;
            }
            uVar3 = *(uint *)(pbVar1 + 0x28);
            goto LAB_005575c4;
          }
        }
        else {
          pbVar7 = pbVar1 + 0x18;
          pbVar5 = (byte *)((int)local_14 + 0x34);
          if (pbVar5 != pbVar7) {
            if (0xf < *(uint *)(pbVar1 + 0x2c)) {
              pbVar7 = *(byte **)pbVar7;
            }
            uVar3 = *(uint *)(pbVar1 + 0x28);
LAB_005575c4:
            FUN_00402690(pbVar5,pbVar7,uVar3);
          }
        }
      }
      else if (iVar4 == 1) {
        local_1c = local_2c;
        pbVar7 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          local_1c = *(byte **)local_2c;
          pbVar7 = *(byte **)local_2c;
        }
        pbVar5 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar5 = *(byte **)local_2c;
        }
        iVar4 = (int)(pbVar7 + *(int *)(local_2c + 0x10)) - (int)pbVar5;
        iVar6 = 0;
        if (pbVar7 + *(int *)(local_2c + 0x10) < pbVar5) {
          iVar4 = 0;
        }
        local_20 = iVar4;
        if (iVar4 != 0) {
          do {
            iVar2 = tolower((int)(char)pbVar5[iVar6]);
            local_1c[iVar6] = (byte)iVar2;
            iVar6 = iVar6 + 1;
          } while (iVar6 != iVar4);
        }
        pbVar5 = FUN_0047d6a0((void *)((int)local_14 + 0x168),local_2c);
        uVar3 = 4;
        pbVar7 = &DAT_005e425c;
        goto LAB_005575c4;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004025a0((int *)&local_2c);
      local_18 = local_18 + 0x18;
      param_4 = param_4 + 1;
    } while (param_4 < (uint)((param_2 - param_1) / 0x18));
  }
  FUN_004025a0(&param_1);
  ExceptionList = local_10;
  return;
}


uint __thiscall FUN_00557620(void *this,void *param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar2 = FUN_0047d6a0((void *)((int)this + 0x168),(byte *)&param_1);
  pbVar4 = pbVar2;
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar4 = *(byte **)pbVar2;
  }
  uVar3 = FUN_004031f0(pbVar4,*(uint *)(pbVar2 + 0x10),&DAT_005e425c,4);
  uVar1 = (undefined1)uVar3;
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar5 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uVar3 = FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return CONCAT31((int3)(uVar3 >> 8),uVar1);
}


bool __thiscall FUN_005576d0(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint in_stack_00000018;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00419820((void *)((int)this + 0x168),&local_10,(byte *)&param_1);
  iVar2 = 0;
  local_8 = local_10;
  while (local_8 != local_c) {
    iVar2 = iVar2 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_8);
  }
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  return iVar2 == 1;
}


void * __thiscall FUN_00557760(void *this,void *param_1,void *param_2)

{
  byte *pbVar1;
  void *pvVar2;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c06b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = FUN_0047d6a0((void *)((int)this + 0x168),(byte *)&param_2);
  FUN_004024e0(param_1,(undefined4 *)pbVar1);
  if (0xf < in_stack_0000001c) {
    pvVar2 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar2 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return param_1;
}


int __cdecl FUN_00557800(byte *param_1)

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
    pbVar8 = (&PTR_DAT_005dffb8)[iVar7];
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
    if ((char)uVar5 != '\0') goto LAB_0055784e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x32);
  iVar7 = 0;
LAB_0055784e:
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


undefined1 * __thiscall
FUN_00557890(void *this,undefined4 param_1,char *param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *this_00;
  FMOD_RESULT FVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c74bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)this_00 = 0;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(this_00,param_2,(int)pcVar3 - (int)(param_2 + 1));
  local_8 = 0;
  *(int *)((int)this + 0x24) = DAT_006550a0;
  DAT_006550a0 = DAT_006550a0 + 1;
  *(byte *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if (0xf < *(uint *)((int)this + 0x18)) {
    this_00 = (undefined4 *)*this_00;
  }
  FVar2 = FMOD::System::createSound
                    (param_1_0065b3f0,(uint)this_00,(FMOD_CREATESOUNDEXINFO *)((uint)param_3 * 2),
                     (Sound **)0x0);
  if (FVar2 != 0) {
    FUN_00591070("ERROR","Failed to load sound %s");
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00557990(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  FUN_00591070(&DAT_005cdc70,"Shutting down sound engine");
  FUN_00557e70(param_1);
  if (*(int *)(param_1 + 0x6c) != 0) {
    FMOD::System::release();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  puVar5 = *(undefined4 **)(param_1 + 0x58);
  do {
    if (puVar5 == puVar1) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
      FUN_00557e70(param_1);
      return;
    }
    piVar2 = (int *)*puVar5;
    if (piVar2 != (int *)0x0) {
      if (0xf < (uint)piVar2[0x11]) {
        pvVar3 = (void *)piVar2[0xc];
        pvVar4 = pvVar3;
        if ((0xfff < piVar2[0x11] + 1U) &&
           (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))))
        goto LAB_00557ae3;
        FUN_005adb3f(pvVar4);
      }
      piVar2[0x10] = 0;
      piVar2[0x11] = 0xf;
      *(undefined1 *)(piVar2 + 0xc) = 0;
      if (0xf < (uint)piVar2[0xb]) {
        pvVar3 = (void *)piVar2[6];
        pvVar4 = pvVar3;
        if ((0xfff < piVar2[0xb] + 1U) &&
           (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))))
        goto LAB_00557ae3;
        FUN_005adb3f(pvVar4);
      }
      piVar2[10] = 0;
      piVar2[0xb] = 0xf;
      *(undefined1 *)(piVar2 + 6) = 0;
      if (0xf < (uint)piVar2[5]) {
        pvVar3 = (void *)*piVar2;
        pvVar4 = pvVar3;
        if ((0xfff < piVar2[5] + 1U) &&
           (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))))
        {
LAB_00557ae3:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      piVar2[4] = 0;
      piVar2[5] = 0xf;
      *(undefined1 *)piVar2 = 0;
      FUN_005adb3f(piVar2);
    }
    puVar5 = puVar5 + 1;
  } while( true );
}


void __thiscall
FUN_00557af0(void *this,undefined4 param_1,int param_2,int param_3,byte param_4,char param_5,
            float param_6)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined1 *puVar4;
  FMOD_RESULT FVar5;
  char *pcVar6;
  uint in_stack_ffffff5c;
  undefined4 *puVar7;
  undefined1 uVar8;
  float fVar9;
  undefined1 *local_60;
  void *local_5c [4];
  undefined4 local_4c;
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
  puStack_c = &LAB_005c7549;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = (undefined1 *)0x0;
  pvVar2 = (void *)FUN_005adb0f(0x38);
  if (param_3 == -1) {
    local_8 = 0;
    pcVar3 = (&PTR_PTR_005e0080)[param_2];
    puVar7 = (undefined4 *)(in_stack_ffffff5c & 0xffffff00);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    fVar9 = param_6;
    FUN_00402690(&stack0xffffff5c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    pcVar3 = FUN_0058ec90(local_2c,puVar7);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_60 = (undefined1 *)0x1;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    puVar4 = FUN_00557890(pvVar2,param_1,pcVar3,param_4,fVar9);
    uVar8 = (undefined1)param_1;
    local_8 = 0xffffffff;
    local_60 = puVar4;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  else {
    local_8 = 3;
    fVar9 = param_6;
    pcVar3 = (char *)FUN_00591e00((undefined1 *)local_5c,(&PTR_PTR_005e0080)[param_2]);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_60 = (undefined1 *)0x2;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    puVar7 = (undefined4 *)(in_stack_ffffff5c & 0xffffff00);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00402690(&stack0xffffff5c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    pcVar3 = FUN_0058ec90(local_44,puVar7);
    local_8 = 5;
    local_60 = (undefined1 *)0x6;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    puVar4 = FUN_00557890(pvVar2,param_1,pcVar3,param_4,fVar9);
    uVar8 = (undefined1)param_1;
    local_8 = 6;
    local_60 = puVar4;
    if (0xf < local_30) {
      pvVar2 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar2 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    local_8 = 0xffffffff;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_48) {
      pvVar2 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar2 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  }
  *(float *)(puVar4 + 0x28) = param_6;
  if ((*(int *)((int)this + 0x28) != 0) && (*(int *)(puVar4 + 0x2c) != 0)) {
    *(float *)(puVar4 + 0x28) =
         *(float *)(*(int *)((int)this + 0x28) + *(int *)(puVar4 + 0x2c) * 4) * param_6;
  }
  if (*(ChannelGroup **)(puVar4 + 0x34) != (ChannelGroup *)0x0) {
    if (*(int *)(puVar4 + 0x30) == 0) {
      FVar5 = FMOD::System::playSound
                        ((Sound *)param_1_0065b3f0,*(ChannelGroup **)(puVar4 + 0x34),false,
                         (Channel **)0x1);
      if (FVar5 != 0) {
        FUN_00591070("ERROR","playing sound %s (ID %d)");
        goto LAB_00557e0e;
      }
      FMOD::ChannelControl::setVolume(*(float *)(puVar4 + 0x30));
      uVar8 = SUB41(*(float *)(puVar4 + 0x30),0);
    }
    FMOD::ChannelControl::setPaused((bool)uVar8);
  }
LAB_00557e0e:
  if ((param_5 == '\0') && (*(int *)(puVar4 + 0x34) != 0)) {
    if (*(int *)(puVar4 + 0x30) != 0) {
      FMOD::ChannelControl::setPaused(SUB41(*(int *)(puVar4 + 0x30),0));
    }
    *puVar4 = 1;
  }
  puVar7 = *(undefined4 **)((int)this + 0x30);
  if (*(undefined4 **)((int)this + 0x34) == puVar7) {
    FUN_00414080((void *)((int)this + 0x2c),puVar7,&local_60);
  }
  else {
    *puVar7 = puVar4;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00557e70(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x30) - iVar3 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar1 + 0x34) != 0) && (*(int *)(iVar1 + 0x30) != 0)) {
        FMOD::ChannelControl::stop();
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      pvVar2 = *(void **)(iVar3 + uVar4 * 4);
      if (pvVar2 != (void *)0x0) {
        FUN_00557ed0(pvVar2);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x2c);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x30) - iVar3 >> 2));
  }
  *(int *)(param_1 + 0x30) = iVar3;
  return;
}


void * __fastcall FUN_00557ed0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x34) != 0) {
    FMOD::Sound::release();
  }
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    pvVar1 = *(void **)((int)param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_005adb3f(param_1);
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_00557f80(void *this,int param_1,int param_2)

{
  if (*(char *)this != '\0') {
    FUN_00557af0(this,6,param_1,param_2,0,'\x01',1.0);
  }
  return;
}


void __thiscall FUN_00557fb0(void *this,int param_1,int param_2,int param_3)

{
  undefined1 *this_00;
  byte *in_stack_ffffffd0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b03b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)this != '\0') {
    if ((*(char *)(DAT_0065b444 + 0x71) == '\0') && (*(char *)(DAT_0065b444 + 0x72) == '\0')) {
      FUN_004024e0(&stack0xffffffd0,(undefined4 *)(param_1 + 0x238));
      local_8 = 0;
      this_00 = FUN_00402de0();
      local_8 = 0xffffffff;
      FUN_00423360(this_00,param_2,param_3,in_stack_ffffffd0);
      ExceptionList = local_10;
      return;
    }
    if (param_1 == *(int *)((int)this + 0x24)) {
      FUN_00557af0(this,6,param_2,param_3,0,'\x01',1.0);
    }
  }
  ExceptionList = local_10;
  return;
}
