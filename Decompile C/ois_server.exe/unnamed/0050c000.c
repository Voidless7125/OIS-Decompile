#include "../ois_server.exe.h"


void __thiscall FUN_0050c090(void *this,undefined1 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *this_00;
  float fVar5;
  float fVar6;
  byte *in_stack_ffffffbc;
  void *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = *(char *)((int)this + 0x234);
  if (cVar1 != '\0') {
    if (*(int *)((int)this + 0x24) != 0) {
      FUN_00591e00(&stack0xffffffc0,"visited_sector_%d");
      local_8 = 0;
      if (DAT_0065c294 == (void *)0x0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,1);
        DAT_0065c294 = (void *)FUN_0051e500(puVar2);
      }
      local_8 = 0xffffffff;
      in_stack_ffffffbc = (byte *)0x50c129;
      FUN_0051e6c0(DAT_0065c294,in_stack_ffffffc0);
      FUN_00591e00(&stack0xffffffbc,"in_sector_%d");
      local_8 = 2;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
      cVar1 = *(char *)((int)this + 0x234);
    }
    if (cVar1 != '\0') {
      iVar3 = FUN_00412da0();
      FUN_0042f2b0(iVar3);
    }
  }
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    FUN_0051f8b0(*(void **)((int)this + 0x24),(int)this);
  }
  *(undefined1 **)((int)this + 0x20) = param_1;
  if (param_1 != (undefined1 *)0xffffffff) {
    for (puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar2 = puVar2 + 1) {
      piVar4 = (int *)*puVar2;
      if ((undefined1 *)*piVar4 == param_1) goto LAB_0050c1af;
    }
    piVar4 = (int *)0x0;
LAB_0050c1af:
    *(int **)((int)this + 0x24) = piVar4;
    puVar2 = (undefined4 *)piVar4[0x34];
    if ((undefined4 *)piVar4[0x35] == puVar2) {
      param_1 = this;
      FUN_00414080(piVar4 + 0x33,puVar2,&param_1);
    }
    else {
      *puVar2 = this;
      piVar4[0x34] = piVar4[0x34] + 4;
    }
  }
  if ((*(char *)((int)this + 0x234) != '\0') && (*(int *)((int)this + 0x24) != 0)) {
    param_1 = &stack0xffffffbc;
    FUN_00591e00(&stack0xffffffbc,"visited_sector_%d");
    local_8 = 3;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    param_1 = &stack0xffffffd0;
    fVar6 = (float)*(double *)((int)this + 0x28);
    fVar5 = (float)*(double *)((int)this + 0x30);
    local_8 = 4;
    piVar4 = *(int **)((int)this + 0x24);
    this_00 = (void *)FUN_00412580();
    local_8 = 0xffffffff;
    FUN_004a8fe0(this_00,piVar4,fVar6,fVar5);
    iVar3 = *(int *)((int)this + 0x20);
    if (((iVar3 != 5) &&
        ((((iVar3 != 0x65 && (iVar3 != 0x66)) && (iVar3 != 0x69)) &&
         ((iVar3 != 4 && (iVar3 != 0x6b)))))) &&
       (((iVar3 != 0x71 &&
         (((iVar3 != 0x74 && (iVar3 != 6)) &&
          ((iVar3 != 9 && (((iVar3 != 0x68 && (iVar3 != 0x6a)) && (iVar3 != 0xb)))))))) &&
        (((iVar3 != 0x6e && (iVar3 != 10)) && (iVar3 != 0x76)))))) {
      param_1 = &stack0xffffffbc;
      in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
      FUN_00402690(&stack0xffffffbc,"visited_outer_rim",0x11);
      local_8 = 5;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    }
    param_1 = &stack0xffffffbc;
    FUN_00591e00(&stack0xffffffbc,"in_sector_%d");
    local_8 = 6;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    if (((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
        (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) &&
       (*(int *)(*(int *)((int)this + 0x24) + 0x118) == 2)) {
      *(undefined1 *)(*(int *)((int)this + 0x40) + 0x34) = 0;
      ExceptionList = local_10;
      return;
    }
    *(undefined1 *)(*(int *)((int)this + 0x40) + 0x34) = 1;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050c390(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x40) - *(int *)(*(int *)(param_1 + 0x40) + 0x3c) >> 2 !=
      0) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x3c) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc4);
    } while (uVar2 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x40) -
                            *(int *)(*(int *)(param_1 + 0x40) + 0x3c) >> 2));
  }
  return;
}


void __thiscall FUN_0050c3d0(void *this,void *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint in_stack_00000018;
  byte *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c147a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar7 = *(int *)((int)this + 0x254);
  pbVar6 = (byte *)(iVar7 + 0x60);
  if (0xf < *(uint *)(iVar7 + 0x74)) {
    pbVar6 = *(byte **)(iVar7 + 0x60);
  }
  uVar2 = FUN_004031f0(pbVar6,*(uint *)(iVar7 + 0x70),&DAT_005e93b4,4);
  if ((char)uVar2 == '\0') {
    FUN_004024e0(&stack0xffffffbc,&param_1);
    puVar3 = (undefined4 *)FUN_00519f30(*(void **)((int)this + 0x254),in_stack_ffffffbc);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00591070("ERROR","Invalid ship configuration.");
      bVar1 = cc_assert_script_compatible("Ship configuration invalid.");
      if (!bVar1) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      uVar2 = 0;
      iVar7 = puVar3[0xd];
      if (puVar3[0xe] - iVar7 >> 2 != 0) {
        do {
          iVar7 = *(int *)(*(int *)(iVar7 + uVar2 * 4) + 4);
          pvVar4 = (void *)FUN_005adb0f(0x88);
          local_8._0_1_ = 1;
          puVar5 = FUN_004adec0(pvVar4,iVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00437260((void *)puVar5[3],**(int **)(iVar7 + 0x120));
          if (*(int *)(puVar5[2] + 4) == 5) {
            puVar5[0x1a] = (int)*(float *)(puVar5[2] + 0x104);
          }
          FUN_00521d10(*(void **)((int)this + 0x40),(undefined1 *)puVar5,
                       **(int **)(puVar3[0xd] + uVar2 * 4));
          uVar2 = uVar2 + 1;
          iVar7 = puVar3[0xd];
        } while (uVar2 < (uint)(puVar3[0xe] - iVar7 >> 2));
      }
      FUN_0050c590((int)this);
      if ((undefined4 *)((int)this + 600) != puVar3) {
        puVar5 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar5 = (undefined4 *)*puVar3;
        }
        FUN_00402690((undefined4 *)((int)this + 600),puVar5,puVar3[4]);
      }
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar4 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050c590(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    if ((uVar3 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar1 >> 2)) &&
       (iVar1 = *(int *)(iVar1 + uVar3 * 4), iVar1 != 0)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + 4);
      if (((iVar2 == 2) || (((iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 7)))) ||
         (((iVar2 == 9 || (iVar2 == 0xb)) || (iVar2 == 8)))) {
        *(undefined1 *)(iVar1 + 0x14) = 1;
      }
      else {
        *(undefined1 *)(iVar1 + 0x14) = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x1e);
  return;
}


undefined4 __fastcall FUN_0050c5f0(int param_1)

{
  uint in_EAX;
  int iVar1;
  
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    iVar1 = FUN_005224c0(*(void **)(param_1 + 0x40),1,'\x01');
    in_EAX = 0;
    if (iVar1 != 0) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __fastcall FUN_0050c610(int param_1)

{
  Vec2 *pVVar1;
  int iVar2;
  uint uVar3;
  float in_XMM2_Da;
  float fVar4;
  Vec2 local_20 [8];
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c14b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x214);
  local_18 = in_XMM2_Da;
  if (*(int *)(param_1 + 0x218) - iVar2 >> 2 != 0) {
    do {
      local_8 = 0;
      pVVar1 = FUN_00508ff0(*(void **)(iVar2 + uVar3 * 4),local_20);
      local_8 = 1;
      fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000004,pVVar1);
      local_14 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
      if ((1.5 - fVar4 * 0.5 * local_14 * local_14) * local_14 * fVar4 < local_18) {
        ExceptionList = local_10;
        return *(undefined4 *)(*(int *)(param_1 + 0x214) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x214);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x218) - iVar2 >> 2));
  }
  ExceptionList = local_10;
  return 0;
}


int __thiscall FUN_0050c720(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x214);
  while( true ) {
    if (piVar1 == *(int **)((int)this + 0x218)) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x124) == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}


int __thiscall FUN_0050c760(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x218) - *(int *)((int)this + 0x214) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x214) + uVar2 * 4);
      if (*(int *)(iVar1 + 4) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


int * __thiscall FUN_0050c7a0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != -1) {
    uVar2 = 0;
    uVar3 = *(int *)((int)this + 0x218) - *(int *)((int)this + 0x214) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x214) + uVar2 * 4);
        if (*piVar1 == param_1) {
          return piVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return (int *)0x0;
}


uint __thiscall FUN_0050c7e0(void *this,int param_1)

{
  void *this_00;
  uint in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)((int)this + 0x40);
    if (*(int *)(in_EAX + 0x20) != 0) {
      iVar1 = 0;
      puVar2 = (undefined4 *)(*(int *)(in_EAX + 0x20) + 0x3c);
      do {
        this_00 = (void *)*puVar2;
        if ((((this_00 != (void *)0x0) && (*(char *)((int)this_00 + 0x3c4) != '\0')) &&
            (*(char *)((int)this_00 + 0x3fc) != '\0')) &&
           (in_EAX = *(uint *)((int)this_00 + 0x388), *(int *)(in_EAX + 0x1b4) == 4)) {
          in_EAX = FUN_0050c850(this_00,param_1);
          if ((char)in_EAX != '\0') {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < 8);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __thiscall FUN_0050c850(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x218) - *(int *)((int)this + 0x214) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x214) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x130) == param_1) {
        return CONCAT31((int3)(uVar2 >> 8),*(float *)(iVar1 + 0x40) <= 0.5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar2 & 0xffffff00;
}


void __thiscall FUN_0050c8a0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar3 = 0;
    iVar2 = *(int *)(*(int *)((int)this + 0x24) + 0x9c);
    uVar1 = *(int *)(*(int *)((int)this + 0x24) + 0xa0) - iVar2 >> 2;
    if (uVar1 != 0) {
      do {
        iVar4 = *(int *)(iVar2 + uVar3 * 4);
        if (*(int *)(iVar4 + 0x44) == param_1) goto LAB_0050c8df;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    iVar4 = 0;
LAB_0050c8df:
    iVar2 = *(int *)(*(int *)((int)this + 0x44) + 0xc4);
    if (*(int *)(*(int *)((int)this + 0x44) + 200) - iVar2 >> 2 != 0) {
      uVar1 = 0;
      do {
        (**(code **)(**(int **)(iVar2 + uVar1 * 4) + 0x18))(-(uint)(iVar4 != 0) & iVar4 + 8U);
        uVar1 = uVar1 + 1;
        iVar2 = *(int *)(*(int *)((int)this + 0x44) + 0xc4);
      } while (uVar1 < (uint)(*(int *)(*(int *)((int)this + 0x44) + 200) - iVar2 >> 2));
    }
  }
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x218) - *(int *)((int)this + 0x214) >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x214) + uVar1 * 4);
      if (*(int *)(iVar2 + 4) == param_1) goto LAB_0050c94f;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  iVar2 = 0;
LAB_0050c94f:
  FUN_0050c960(this,iVar2);
  return;
}


void __thiscall FUN_0050c960(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *_Dst;
  int *piVar3;
  undefined4 *puVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  uint uVar7;
  uint uVar8;
  size_t _Size;
  byte *in_stack_ffffff94;
  int local_3c;
  int local_38;
  int *local_34;
  char ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c14f0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_1;
  local_3c = param_1;
  local_34 = this;
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0x44);
    if (iVar1 != 0) {
      puVar4 = *(undefined4 **)(iVar1 + 0xc4);
      uVar8 = 0;
      uVar7 = (uint)((int)*(undefined4 **)(iVar1 + 200) + (3 - (int)puVar4)) >> 2;
      if (*(undefined4 **)(iVar1 + 200) < puVar4) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        do {
          (**(code **)(*(int *)*puVar4 + 0x1c))();
          puVar4 = puVar4 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
    piVar3 = local_34;
    if ((char)local_34[0x8d] != '\0') {
      if (*(int *)(local_38 + 0x130) != 0) {
        FUN_00591e00((undefined1 *)local_30,"can_detect_%s");
        local_8 = 0;
        ppppcVar6 = local_30;
        if (0xf < local_1c) {
          ppppcVar6 = (char ****)local_30[0];
        }
        ppppcVar5 = local_30;
        if (0xf < local_1c) {
          ppppcVar5 = (char ****)local_30[0];
        }
        FUN_00413ec0(&local_34,tolower_exref,(char *)ppppcVar5,(char *)((int)ppppcVar6 + local_20),
                     (undefined1 *)ppppcVar6);
        local_34 = (int *)&stack0xffffff94;
        FUN_004024e0(&stack0xffffff94,local_30);
        local_8._0_1_ = 1;
        puVar4 = FUN_00412df0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004a0ee0(puVar4,in_stack_ffffff94);
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
          ppppcVar6 = (char ****)local_30[0];
          if ((0xfff < local_1c + 1) &&
             (ppppcVar6 = (char ****)local_30[0][-1],
             (char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppcVar6);
        }
      }
      iVar1 = *(int *)(local_38 + 0xe0);
      if ((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 4)) || (iVar1 == 7)) {
        FUN_0051f2d0((void *)piVar3[9],*(int *)(local_38 + 4));
        FUN_00591e00((undefined1 *)local_30,"can_detect_%s");
        local_8 = 2;
        ppppcVar6 = local_30;
        if (0xf < local_1c) {
          ppppcVar6 = (char ****)local_30[0];
        }
        ppppcVar5 = local_30;
        if (0xf < local_1c) {
          ppppcVar5 = (char ****)local_30[0];
        }
        FUN_00413ec0(&local_34,tolower_exref,(char *)ppppcVar5,(char *)((int)ppppcVar6 + local_20),
                     (undefined1 *)ppppcVar6);
        local_34 = (int *)&stack0xffffff94;
        FUN_004024e0(&stack0xffffff94,local_30);
        local_8._0_1_ = 3;
        puVar4 = FUN_00412df0();
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_004a0ee0(puVar4,in_stack_ffffff94);
        if (0xf < local_1c) {
          ppppcVar6 = (char ****)local_30[0];
          if ((0xfff < local_1c + 1) &&
             (ppppcVar6 = (char ****)local_30[0][-1],
             (char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppcVar6);
        }
      }
    }
    piVar2 = (int *)piVar3[0x86];
    local_34 = piVar2;
    puVar4 = FUN_00414000(&local_38,&local_3c,(int *)piVar3[0x85],piVar2);
    _Dst = (int *)*puVar4;
    if (_Dst != piVar2) {
      _Size = piVar3[0x86] - (int)local_34;
      memmove(_Dst,local_34,_Size);
      piVar3[0x86] = _Size + (int)_Dst;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0050cc10(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x234) != '\0') {
    FUN_005179b0(param_1);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x214);
  uVar3 = 0;
  uVar2 = (uint)((int)*(undefined4 **)(param_1 + 0x218) + (3 - (int)puVar4)) >> 2;
  if (*(undefined4 **)(param_1 + 0x218) < puVar4) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_0040e990((int)pvVar1);
        FUN_005adb3f(pvVar1);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x214);
  return;
}


uint __thiscall FUN_0050ccd0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0x254) + 0x158);
  if ((((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 3)) &&
     ((uVar1 != 4 || (uVar1 = *(uint *)((int)this + 0x39c), uVar1 != param_1)))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


void __fastcall FUN_0050cd20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  float in_XMM1_Da;
  double dVar8;
  byte *pbVar9;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined1 *local_5c;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  undefined1 *local_48;
  char ***local_44 [4];
  int local_34;
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1552;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x214);
  local_54 = in_XMM1_Da;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x218) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar5 * 4);
      fVar6 = local_54 + *(float *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x40) = fVar6;
      if (((0.25 <= fVar6) && (*(float *)(iVar2 + 0x38) != -1.0)) &&
         (*(float *)(iVar2 + 0x34) != 0.0)) {
        local_60 = (float)*(double *)(iVar2 + 0x18);
        local_64 = (float)*(double *)(iVar2 + 0x10);
        local_4c = *(float *)(iVar2 + 0x34) * local_54;
        local_8 = 0;
        dVar8 = (double)*(float *)(iVar2 + 0x38) * 0.017453292519943295;
        dVar7 = dVar8;
        libm_sse2_sin_precise();
        local_48 = (undefined1 *)(float)(dVar7 * (double)local_4c);
        libm_sse2_cos_precise();
        local_5c = local_48;
        local_58 = (float)(dVar8 * (double)local_4c);
        local_8 = CONCAT31(local_8._1_3_,1);
        cocos2d::Vec2::operator+((Vec2 *)&local_64,(Vec2 *)&local_6c);
        local_8 = 0xffffffff;
        *(double *)(*(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4) + 0x10) = (double)local_6c;
        *(double *)(*(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4) + 0x18) = (double)local_68;
      }
      if ((*(char *)(param_1 + 0x234) != '\0') &&
         (iVar2 = *(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4), *(int *)(iVar2 + 0x130) != 0)) {
        if (*(float *)(iVar2 + 0x40) <
            *(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) * 0.25) {
          if (*(char *)(iVar2 + 0x44) == '\0') {
            FUN_00591e00((undefined1 *)local_44,"can_detect_%s");
            local_8 = 4;
            ppppcVar4 = local_44;
            if (0xf < local_30) {
              ppppcVar4 = (char ****)local_44[0];
            }
            ppppcVar3 = local_44;
            if (0xf < local_30) {
              ppppcVar3 = (char ****)local_44[0];
            }
            pbVar9 = (byte *)0x50d01c;
            FUN_00413ec0(&local_74,tolower_exref,(char *)ppppcVar3,
                         (char *)((int)ppppcVar4 + local_34),(undefined1 *)ppppcVar4);
            local_48 = &stack0xffffff58;
            FUN_004024e0(&stack0xffffff58,local_44);
            local_8._0_1_ = 5;
            puVar1 = FUN_00412df0();
            local_8 = CONCAT31(local_8._1_3_,4);
            FUN_004a0ee0(puVar1,pbVar9);
            local_8 = 0xffffffff;
            if (0xf < local_30) {
              ppppcVar4 = (char ****)local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (ppppcVar4 = (char ****)local_44[0][-1],
                 (char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar4))))
              goto LAB_0050d0d1;
              FUN_005adb3f(ppppcVar4);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
            param_1 = local_50;
          }
        }
        else if (*(char *)(iVar2 + 0x44) != '\0') {
          FUN_00591e00((undefined1 *)local_2c,"can_detect_%s");
          local_8 = 2;
          ppppcVar4 = local_2c;
          if (0xf < local_18) {
            ppppcVar4 = (char ****)local_2c[0];
          }
          ppppcVar3 = local_2c;
          if (0xf < local_18) {
            ppppcVar3 = (char ****)local_2c[0];
          }
          pbVar9 = (byte *)0x50cf3c;
          FUN_00413ec0(&local_70,tolower_exref,(char *)ppppcVar3,(char *)((int)ppppcVar4 + local_1c)
                       ,(undefined1 *)ppppcVar4);
          local_48 = &stack0xffffff58;
          FUN_004024e0(&stack0xffffff58,local_2c);
          local_8._0_1_ = 3;
          puVar1 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004a0ee0(puVar1,pbVar9);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            ppppcVar4 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar4 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar4)))) {
LAB_0050d0d1:
              local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar4);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
          param_1 = local_50;
        }
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x214) + uVar5 * 4);
      if (0.25 <= *(float *)(iVar2 + 0x40)) {
        *(undefined1 *)(iVar2 + 0x44) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar2 = *(int *)(param_1 + 0x214);
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x218) - iVar2 >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_0050d100(void *this,undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float in_XMM2_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1599;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = *(int *)((int)this + 0x40);
  if (*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2 != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x3c) + uVar5 * 4) + 0x10))(0,uVar3);
      if (cVar2 != '\0') {
        iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x40) + 0x3c) + uVar5 * 4);
        iVar1 = *(int *)(iVar4 + 8);
        if (*(char *)(iVar4 + 0x62) == '\0') {
          iVar4 = *(int *)(iVar1 + 0xd4);
        }
        else {
          iVar4 = *(int *)(iVar1 + 0xcc);
        }
        if (0.0 < (float)iVar4 * in_XMM2_Da) {
          FUN_00508ad0(param_1,(int)((float)iVar4 * in_XMM2_Da));
        }
      }
      iVar4 = *(int *)((int)this + 0x40);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2));
  }
  if (*(char *)(iVar4 + 0x34) != '\0') {
    FUN_00508ad0(param_1,0x5a);
  }
  ExceptionList = local_10;
  return param_1;
}


uint __thiscall FUN_0050d210(void *this,char param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(*(int *)this + 0x20))();
  if ((char)uVar1 == '\0') {
    uVar1 = *(uint *)((int)this + 0x40);
    if (*(int **)(uVar1 + 0x18) != (int *)0x0) {
      uVar1 = (**(code **)(**(int **)(uVar1 + 0x18) + 0x10))(0);
      if (((char)uVar1 != '\0') && (*(void **)((int)this + 0x40) != (void *)0x0)) {
        piVar2 = (int *)FUN_005224c0(*(void **)((int)this + 0x40),1,'\0');
        uVar1 = 0;
        if (piVar2 != (int *)0x0) {
          uVar1 = (**(code **)(*piVar2 + 0x14))();
          if ((char)uVar1 == '\0') {
            uVar1 = *(uint *)((int)this + 0x40);
            if (*(int **)(uVar1 + 0x10) != (int *)0x0) {
              uVar1 = (**(code **)(**(int **)(uVar1 + 0x10) + 0x10))(0);
              if ((char)uVar1 != '\0') {
                uVar1 = *(uint *)((int)this + 0x40);
                if (*(int **)(uVar1 + 0x24) != (int *)0x0) {
                  uVar1 = (**(code **)(**(int **)(uVar1 + 0x24) + 0x10))(0);
                  if ((char)uVar1 != '\0') {
                    uVar1 = *(uint *)((int)this + 0x40);
                    if (*(int **)(uVar1 + 0x28) != (int *)0x0) {
                      uVar1 = (**(code **)(**(int **)(uVar1 + 0x28) + 0x10))(0);
                      if ((char)uVar1 != '\0') {
                        if (param_1 == '\0') {
LAB_0050d2cb:
                          return uVar1 & 0xffffff00;
                        }
                        uVar1 = *(uint *)((int)this + 0x40);
                        if (*(int **)(uVar1 + 0x20) != (int *)0x0) {
                          uVar1 = (**(code **)(**(int **)(uVar1 + 0x20) + 0x10))(0);
                          if ((char)uVar1 != '\0') goto LAB_0050d2cb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


void __fastcall FUN_0050d2e0(undefined1 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  basic_string<> *pbVar11;
  Vec2 *pVVar12;
  Vec2 *pVVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  undefined1 *puVar16;
  char ****ppppcVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  float in_XMM1_Da;
  byte *in_stack_fffffedc;
  char *in_stack_fffffee0;
  int local_f8 [3];
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  float local_a4;
  undefined1 *local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 *local_80;
  uint local_7c;
  undefined1 *local_74;
  void *local_70;
  undefined1 *local_6c;
  float local_68;
  float local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  char local_45;
  undefined1 *local_44;
  undefined1 *local_40;
  float local_3c;
  undefined1 *local_38;
  char local_31;
  undefined4 *local_30;
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c17dc;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (undefined1 *)0x0;
  bVar19 = *(int *)(param_1 + 0xd4) != 3;
  local_38 = (undefined1 *)0x0;
  local_64 = in_XMM1_Da;
  local_60 = param_1;
  if ((param_1[0x2d0] == '\0') &&
     (((int *)**(int **)(param_1 + 0x40) == (int *)0x0 ||
      (cVar3 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x10))(), cVar3 == '\0')))) {
    bVar19 = false;
  }
  puVar16 = (undefined1 *)0x0;
  local_30 = (undefined4 *)0x0;
  auVar25 = ZEXT816(0);
  local_7c = local_7c & 0xffffff00;
  local_68 = 0.0;
  local_54 = (undefined1 *)0x0;
  if ((((int *)**(int **)(param_1 + 0x40) != (int *)0x0) &&
      (cVar3 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x10))(), cVar3 != '\0')) &&
     (bVar19)) {
    iVar6 = *(int *)(param_1 + 0x24);
    local_50 = (undefined1 *)0x0;
    if (*(int *)(iVar6 + 0xd0) - *(int *)(iVar6 + 0xcc) >> 2 != 0) {
      do {
        local_31 = '\0';
        local_45 = '\0';
        puVar14 = *(undefined1 **)(*(int *)(iVar6 + 0xcc) + (int)local_50 * 4);
        local_6c = puVar16;
        local_4c = puVar14;
        local_40 = puVar16;
        if (puVar14 != param_1) {
          local_44 = (undefined1 *)0x5;
          FUN_0050b2e0();
          dVar22 = auVar25._0_8_;
          if (((*(char *)(DAT_0065b444 + 0x140) == '\0') || (param_1[0x234] != '\0')) ||
             (puVar16 = local_54,
             *(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0xcc) + (int)local_50 * 4) +
                      0x234) == '\0')) {
            iVar6 = *(int *)(*(int *)(puVar14 + 0x254) + 0x158);
            if ((((iVar6 == 2) || (iVar6 == 1)) || (iVar6 == 3)) &&
               (*(char *)(*(int *)(puVar14 + 0x40) + 0x34) != '\0')) {
              auVar25._0_12_ = ZEXT812(0x41200000);
              auVar25._12_4_ = 0;
              local_3c = 10.0;
              local_45 = '\x01';
              local_31 = '\x01';
              puVar16 = local_44;
            }
            else if (((iVar6 == 4) && (*(undefined1 **)(puVar14 + 0x39c) == param_1)) &&
                    (puVar14[0x3fc] != '\0')) {
              auVar25._0_12_ = ZEXT812(0x41200000);
              auVar25._12_4_ = 0;
              local_3c = 10.0;
              local_31 = '\x01';
              puVar16 = (undefined1 *)0x64;
            }
            else {
              local_a4 = (float)*(double *)(puVar14 + 0x28);
              local_a0 = (undefined1 *)(float)*(double *)(puVar14 + 0x30);
              local_38 = (undefined1 *)((uint)local_38 | 0xc0);
              local_bc = (float)*(double *)(param_1 + 0x28);
              local_b8 = (float)*(double *)(param_1 + 0x30);
              local_8 = 1;
              local_68 = cocos2d::Vec2::getDistance((Vec2 *)&local_bc,(Vec2 *)&local_a4);
              local_8 = 0xffffffff;
              iVar6 = FUN_00437c60(*(int **)(**(int **)(param_1 + 0x40) + 0xc));
              local_68 = ((float)iVar6 / 100.0) * local_68;
              local_3c = *(float *)(puVar14 + 0xe0);
              iVar6 = FUN_00437c60(*(int **)(**(int **)(param_1 + 0x40) + 0xc));
              local_3c = *(float *)(*(int *)(**(int **)(param_1 + 0x40) + 8) + 0xe4) *
                         ((float)iVar6 / 100.0) * local_3c;
              if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
                 (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
                if (param_1[0x234] == '\0') {
                  if (*(float *)(&DAT_005ce0c4 + *(int *)(DAT_0065b444 + 0xa8) * 4) != 1.0) {
                    local_3c = local_3c *
                               (2.0 - *(float *)(&DAT_005ce0c4 + *(int *)(DAT_0065b444 + 0xa8) * 4))
                    ;
                  }
                }
                else {
                  local_3c = local_3c *
                             *(float *)(&DAT_005ce0c4 + *(int *)(DAT_0065b444 + 0xa8) * 4);
                }
              }
              if (0.0 < local_3c) {
                if ((*(int *)(puVar14 + 0x184) != 0) && (0.0 < *(double *)(puVar14 + 0x140))) {
                  local_3c = local_3c -
                             (float)(((double)*(int *)(*(int *)(puVar14 + 0x184) + 0x40) *
                                     *(double *)(puVar14 + 0x140)) / 100.0) * local_3c;
                }
                if ((*(int *)(param_1 + 0x184) != 0) && (0.0 < *(double *)(param_1 + 0x140))) {
                  local_3c = local_3c -
                             (float)(((double)*(int *)(*(int *)(param_1 + 0x184) + 0x44) *
                                     *(double *)(param_1 + 0x140)) / 100.0) * local_3c;
                }
                if ((*(int *)(puVar14 + 0xd4) == 2) &&
                   (iVar6 = *(int *)(puVar14 + 0xec), iVar6 != 2)) {
                  if (iVar6 == 1) {
                    local_3c = local_3c * 0.08;
                  }
                  else if (iVar6 == 0) {
                    local_3c = local_3c * 0.6;
                  }
                }
              }
              auVar23 = ZEXT812(0);
              if (0.0 <= local_3c - local_68) {
                auVar23._4_8_ = 0;
                auVar23._0_4_ = local_3c - local_68;
              }
              auVar25._12_4_ = 0;
              auVar25._0_12_ = auVar23;
              local_3c = auVar23._0_4_;
              puVar16 = local_44;
              if ((int)dVar22 - 0x82U < 0x65) {
                local_3c = 0.0;
              }
            }
            if ((param_1[0x2d0] != '\0') && (param_1[0x234] != '\0')) {
              auVar25._0_12_ = ZEXT812(0x42480000);
              auVar25._12_4_ = 0;
              local_3c = 50.0;
              local_31 = '\x01';
            }
            local_30 = (undefined4 *)FUN_0050c720(param_1,*(int *)(puVar14 + 0x250));
            if (puVar14[0x168] != '\0') {
              if (local_30 != (undefined4 *)0x0) {
                FUN_00591070("DETAIL","%s: Sensor shadow removed.");
                iVar6 = FUN_0050c720(param_1,*(int *)(puVar14 + 0x250));
                FUN_0050c960(param_1,iVar6);
                iVar6 = *(int *)(param_1 + 0x24);
                break;
              }
              local_3c = 0.0;
            }
            if (*(int *)(puVar14 + 0xd4) == 3) {
              local_3c = 0.0;
            }
            uVar5 = FUN_0050c7e0(param_1,(int)puVar14);
            if ((char)uVar5 == '\0') {
              auVar25 = ZEXT416((uint)local_3c);
              if (0.0 < local_3c) goto LAB_0050d725;
              if (local_30 != (undefined4 *)0x0) {
                fVar20 = (float)local_30[0x4a] - local_64 * 4.0;
                auVar25 = ZEXT416((uint)fVar20);
                local_30[0x4a] = fVar20;
                if ((float)local_30[0x4a] <= 0.0 && (float)local_30[0x4a] != 0.0) {
                  local_30[0x4a] = 0;
                }
                FUN_00420f30(local_30 + 0x3b);
                cVar3 = local_31;
                goto LAB_0050e515;
              }
            }
            else {
              auVar25._0_12_ = ZEXT812(0x42480000);
              auVar25._12_4_ = 0;
              local_3c = 50.0;
LAB_0050d725:
              if (local_30 == (undefined4 *)0x0) {
                iVar6 = FUN_00591370((int *)(*(int *)(**(int **)(param_1 + 0x40) + 8) + 0xf4));
                local_44 = (undefined1 *)(float)iVar6;
                if (*(int *)(*(int *)(puVar14 + 0x254) + 0x158) == 4) {
                  local_44 = (undefined1 *)((float)local_44 * 0.5);
                }
                if (*(char *)(*(int *)(puVar14 + 0x40) + 0x34) != '\0') {
                  local_44 = (undefined1 *)0x3f800000;
                }
                local_70 = (void *)FUN_005adb0f(0x138);
                local_8 = 2;
                iVar6 = *(int *)(param_1 + 0x220);
                *(int *)(param_1 + 0x220) = iVar6 + 1;
                local_30 = FUN_00508c00(local_70,*(undefined4 *)(puVar14 + 0x250),iVar6);
                local_8 = 0xffffffff;
                local_30[0x4b] = *(undefined4 *)(param_1 + 0x20);
                local_30[0x4c] = puVar14;
                local_30[0x36] = *(undefined4 *)(*(int *)(puVar14 + 0x254) + 0x158);
                *(undefined1 *)(local_30 + 2) = 1;
                *(undefined1 *)((int)local_30 + 9) = 1;
                local_30[0x47] = 0;
                local_30[0x4a] = (float)(int)puVar16;
                bVar19 = false;
                iVar6 = *(int *)(puVar14 + 0x254);
                if (iVar6 != 0) {
                  bVar19 = *(int *)(iVar6 + 0x158) == 1;
                }
                if (bVar19) {
                  iVar6 = 0;
                  iVar18 = 2;
                  do {
                    uVar7 = rand();
                    uVar7 = uVar7 & 0x80000001;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                    }
                    iVar6 = iVar6 + 1 + uVar7;
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                  iVar6 = iVar6 + 8;
                }
                else {
                  bVar19 = false;
                  if (iVar6 != 0) {
                    bVar19 = *(int *)(iVar6 + 0x158) == 4;
                  }
                  iVar6 = 0;
                  if (bVar19) {
                    iVar18 = 3;
                    do {
                      iVar10 = rand();
                      iVar6 = iVar6 + iVar10 % 7 + 1;
                      iVar18 = iVar18 + -1;
                    } while (iVar18 != 0);
                  }
                  else {
                    iVar18 = 4;
                    do {
                      iVar10 = rand();
                      iVar6 = iVar6 + iVar10 % 3 + 1;
                      iVar18 = iVar18 + -1;
                    } while (iVar18 != 0);
                  }
                  iVar6 = iVar6 + 10;
                  puVar14 = local_4c;
                }
                param_1 = local_60;
                *(double *)(local_30 + 10) = (double)iVar6;
                iVar6 = rand();
                dVar22 = (double)(iVar6 % 0x168);
                *(double *)(local_30 + 8) = dVar22;
                if ((param_1[0x234] != '\0') && (local_30[0x4c] != 0)) {
                  FUN_00591e00((undefined1 *)local_2c,"can_detect_%s");
                  local_8 = 3;
                  ppppcVar17 = local_2c;
                  if (0xf < local_18) {
                    ppppcVar17 = (char ****)local_2c[0];
                  }
                  puVar8 = (undefined4 *)std::basic_string<>::end((basic_string<> *)local_2c);
                  FUN_00413ec0(&local_b4,tolower_exref,(char *)ppppcVar17,(char *)*puVar8,
                               (undefined1 *)ppppcVar17);
                  local_4c = &stack0xfffffedc;
                  local_58 = &stack0xfffffedc;
                  FUN_00402950((int)&stack0xfffffedc);
                  local_8._0_1_ = 4;
                  FUN_004027c0(&stack0xfffffedc,local_2c);
                  local_8._0_1_ = 5;
                  puVar8 = FUN_00412df0();
                  local_8 = CONCAT31(local_8._1_3_,3);
                  FUN_004a0ee0(puVar8,in_stack_fffffedc);
                  local_8 = 6;
                  FUN_00401b20((int *)local_2c);
                  local_8 = 0xffffffff;
                  param_1 = local_60;
                }
                if (local_45 == '\0') {
                  *(undefined1 *)((int)local_30 + 0x121) = 1;
                }
                else {
                  *(undefined1 *)(local_30 + 0x48) = 1;
                }
                FUN_00412900(param_1 + 0x214,&local_30);
                local_54 = puVar14;
                if (local_6c != (undefined1 *)0x0) {
                  local_54 = local_40;
                }
                FUN_0050b410(param_1,(int)(puVar14 + 8));
                local_30[0xc] = (int)dVar22;
                if ((local_30[0x4c] != 0) &&
                   (*(int *)(*(int *)(local_30[0x4c] + 0x254) + 0x158) == 0)) {
                  in_stack_fffffee0 = "%s: detected vessel %s (%s) at range %f";
                  in_stack_fffffedc = &DAT_005cdc70;
                  FUN_00591070(&DAT_005cdc70,"%s: detected vessel %s (%s) at range %f");
                }
              }
              else {
                if (*(int *)(param_1 + 0x20) != local_30[0x4b]) {
                  FUN_00402690(local_30 + 0x12,"Unknown",7);
                  FUN_00402690(local_30 + 0x30,"Unknown",7);
                  FUN_00402690(local_30 + 0x2a,"Unknown",7);
                  FUN_00402690(local_30 + 0x1e,"Unknown",7);
                  local_30[0xd] = 0;
                }
                FUN_0050b2e0();
                local_30[0xc] = (int)auVar25._0_8_;
                local_30[0x10] = 0;
                if (((param_1[0x234] != '\0') && (local_30[0x4c] != 0)) &&
                   (*(char *)(local_30 + 0x11) == '\0')) {
                  FUN_00591e00((undefined1 *)local_2c,"can_detect_%s");
                  local_8 = 7;
                  ppppcVar17 = local_2c;
                  if (0xf < local_18) {
                    ppppcVar17 = (char ****)local_2c[0];
                  }
                  puVar8 = (undefined4 *)std::basic_string<>::end((basic_string<> *)local_2c);
                  FUN_00413ec0(&local_b0,tolower_exref,(char *)ppppcVar17,(char *)*puVar8,
                               (undefined1 *)ppppcVar17);
                  local_40 = &stack0xfffffedc;
                  local_74 = &stack0xfffffedc;
                  FUN_00402950((int)&stack0xfffffedc);
                  local_8._0_1_ = 8;
                  FUN_004027c0(&stack0xfffffedc,local_2c);
                  local_8._0_1_ = 9;
                  puVar8 = FUN_00412df0();
                  local_8 = CONCAT31(local_8._1_3_,7);
                  FUN_004a0ee0(puVar8,in_stack_fffffedc);
                  local_8 = 10;
                  FUN_00401b20((int *)local_2c);
                  local_8 = 0xffffffff;
                  param_1 = local_60;
                }
              }
              *(undefined1 *)(local_30 + 0x11) = 1;
              *(undefined8 *)(local_30 + 4) = *(undefined8 *)(puVar14 + 0x28);
              uVar5 = *(undefined4 *)(puVar14 + 0x30);
              uVar2 = *(undefined4 *)(puVar14 + 0x34);
              local_30[6] = uVar5;
              local_30[7] = uVar2;
              FUN_005173c0((int)puVar14);
              local_30[0xe] = uVar5;
              puVar16 = (undefined1 *)0x41f00000;
              if ((30.0 < local_68) && (local_68 < 120.0)) {
                puVar16 = (undefined1 *)((1.0 - (local_68 - 30.0) / 90.0) * 0.8 + 0.2);
              }
              piVar9 = FUN_0050d100(puVar14,local_f8);
              FUN_005193d0(local_30 + 0x3b,piVar9);
              local_8 = 0xb;
              FUN_00413270(local_f8);
              local_8 = 0xffffffff;
              if ((uint)(local_30[0x3f] - local_30[0x3e]) < 8) {
LAB_0050dcd3:
                std::vector<>::operator=
                          ((vector<> *)(local_30 + 0x3e),(vector<> *)(local_30 + 0x3b));
              }
              else {
                FUN_00509960(local_30 + 0x3b);
                local_40 = puVar16;
                FUN_00509960(local_30 + 0x3e);
                if ((float)puVar16 < (float)local_40) goto LAB_0050dcd3;
              }
              if (local_30[0x4c] != 0) {
                local_c4 = 0;
                local_c0 = 0;
                local_8 = 0xc;
                local_40 = (undefined1 *)
                           cocos2d::Vec2::getDistance
                                     ((Vec2 *)(local_30[0x4c] + 0x118),(Vec2 *)&local_c4);
                local_8 = 0xffffffff;
                auVar25 = ZEXT416(local_40);
                if (0.1 < (float)local_40) {
                  FUN_0050b410((void *)local_30[0x4c],(int)(param_1 + 8));
                  dVar22 = auVar25._0_8_;
                  FUN_005173c0(local_30[0x4c]);
                  iVar18 = (int)((float)(int)dVar22 - auVar25._0_4_);
                  iVar6 = iVar18 + 0x168;
                  if (-1 < iVar18) {
                    iVar6 = iVar18;
                  }
                  if ((iVar6 < 0x165) && (4 < iVar6)) {
LAB_0050de13:
                    bVar19 = false;
                  }
                  else {
                    local_cc = (float)*(double *)(local_30[0x4c] + 0x28);
                    local_c8 = (float)*(double *)(local_30[0x4c] + 0x30);
                    local_d4 = (float)*(double *)(param_1 + 0x28);
                    fVar20 = (float)*(double *)(param_1 + 0x30);
                    local_8 = 0xe;
                    local_44 = (undefined1 *)((uint)local_38 | 0x603);
                    local_d0 = fVar20;
                    local_38 = local_44;
                    FUN_00591010((Vec2 *)&local_d4,(Vec2 *)&local_cc);
                    if (75.0 < fVar20) goto LAB_0050de13;
                    bVar19 = true;
                  }
                  if (((uint)local_38 & 2) != 0) {
                    local_38 = (undefined1 *)((uint)local_38 & 0xfffffffd);
                  }
                  local_8 = 0xffffffff;
                  if (((uint)local_38 & 1) != 0) {
                    local_38 = (undefined1 *)((uint)local_38 & 0xfffffffe);
                  }
                  local_7c = local_7c & 0xff;
                  if (bVar19) {
                    local_7c = 1;
                  }
                }
              }
              fVar20 = (float)local_30[0x4a];
              if (fVar20 < 100.0) {
                fVar21 = 1.0;
                if (1.0 <= local_3c) {
                  fVar21 = local_3c;
                }
                fVar1 = 12.0;
                if (fVar21 <= 12.0) {
                  fVar1 = fVar21;
                }
                local_30[0x4a] = fVar1 * local_64 + fVar20;
                fVar20 = (float)local_30[0x4a];
              }
              if (100.0 < fVar20) {
                local_30[0x4a] = 0x42c80000;
              }
              *(undefined1 *)(local_30 + 0x43) = *(undefined1 *)(*(int *)(puVar14 + 0x40) + 0x34);
              if (*(void **)(puVar14 + 0x40) == (void *)0x0) {
                bVar19 = false;
              }
              else {
                iVar6 = FUN_005224c0(*(void **)(puVar14 + 0x40),1,'\x01');
                bVar19 = iVar6 != 0;
              }
              *(bool *)((int)local_30 + 0x10f) = bVar19;
              if (((*(int **)(*(int *)(puVar14 + 0x40) + 0x10) == (int *)0x0) ||
                  (cVar3 = (**(code **)(**(int **)(*(int *)(puVar14 + 0x40) + 0x10) + 0x10))(),
                  cVar3 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(puVar14 + 0x40) + 0x10) + 0x62) == '\0')) {
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
              }
              *(undefined1 *)((int)local_30 + 0x10e) = uVar15;
              if (((*(int **)(*(int *)(puVar14 + 0x40) + 0x18) == (int *)0x0) ||
                  (cVar3 = (**(code **)(**(int **)(*(int *)(puVar14 + 0x40) + 0x18) + 0x10))(),
                  cVar3 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(puVar14 + 0x40) + 0x18) + 0x62) == '\0')) {
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
              }
              *(undefined1 *)((int)local_30 + 0x10d) = uVar15;
              if (((*(int **)(*(int *)(puVar14 + 0x40) + 0x14) == (int *)0x0) ||
                  (cVar3 = (**(code **)(**(int **)(*(int *)(puVar14 + 0x40) + 0x14) + 0x10))(),
                  cVar3 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(puVar14 + 0x40) + 0x14) + 0x62) == '\0')) {
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
              }
              *(undefined1 *)(local_30 + 0x44) = uVar15;
              *(undefined1 *)((int)local_30 + 0x111) = 0;
              if (((*(int **)(*(int *)(puVar14 + 0x40) + 0x20) == (int *)0x0) ||
                  (cVar3 = (**(code **)(**(int **)(*(int *)(puVar14 + 0x40) + 0x20) + 0x10))(),
                  cVar3 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(puVar14 + 0x40) + 0x20) + 0x62) == '\0')) {
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
              }
              *(undefined1 *)((int)local_30 + 0x112) = uVar15;
              if (*(char *)(*(int *)(puVar14 + 0x40) + 0x34) == '\0') {
                if ((20.0 < (float)local_30[0x4a]) &&
                   (iVar6 = rand(), 80.0 < ((float)iVar6 / 32767.0) * 100.0)) {
                  std::basic_string<>::operator=
                            ((basic_string<> *)(local_30 + 0x18),
                             *(basic_string<> **)(puVar14 + 0x254));
                }
                if (10.0 < (float)local_30[0x4a]) {
                  local_e4 = 0;
                  local_e0 = 0;
                  local_8 = 0x10;
                  local_40 = (undefined1 *)
                             cocos2d::Vec2::getDistance((Vec2 *)(puVar14 + 0x118),(Vec2 *)&local_e4)
                  ;
                  local_30[0xd] = local_40;
                }
                puVar16 = local_38;
                if ((float)local_30[0x4a] <= 90.0) {
LAB_0050e1a2:
                  if ((local_30[0x38] == 0) &&
                     (*(int *)(*(int *)(local_30[0x4c] + 0x254) + 0x158) == 4)) {
                    local_9c = (float)*(double *)(param_1 + 0x28);
                    local_98 = (float)*(double *)(param_1 + 0x30);
                    local_80 = (undefined1 *)(float)*(double *)(local_30 + 6);
                    fVar20 = (float)*(double *)(local_30 + 4);
                    local_8 = 0x14;
                    local_44 = (undefined1 *)((uint)puVar16 | 0x1030);
                    local_84 = fVar20;
                    local_38 = local_44;
                    FUN_00591010((Vec2 *)&local_84,(Vec2 *)&local_9c);
                    if (fVar20 <= 50.0) goto LAB_0050e234;
                  }
                  bVar19 = false;
                }
                else {
                  local_ec = (float)*(double *)(param_1 + 0x28);
                  local_e8 = (float)*(double *)(param_1 + 0x30);
                  local_90 = (float)*(double *)(local_30 + 6);
                  fVar20 = (float)*(double *)(local_30 + 4);
                  local_8 = 0x12;
                  puVar16 = (undefined1 *)((uint)local_38 | 0x80c);
                  local_94 = fVar20;
                  local_44 = puVar16;
                  local_38 = puVar16;
                  FUN_00591010((Vec2 *)&local_94,(Vec2 *)&local_ec);
                  if (50.0 < fVar20) goto LAB_0050e1a2;
LAB_0050e234:
                  bVar19 = true;
                }
                if (((uint)local_38 & 0x20) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xffffffdf);
                }
                if (((uint)local_38 & 0x10) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xffffffef);
                }
                if (((uint)local_38 & 8) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xfffffff7);
                }
                local_8 = 0xffffffff;
                if (((uint)local_38 & 4) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xfffffffb);
                }
                if (bVar19) {
                  std::basic_string<>::operator=
                            ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar14 + 0x238)
                            );
                }
              }
              else {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x18),*(basic_string<> **)(puVar14 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x12),(basic_string<> *)(puVar14 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar14 + 0x238));
                FUN_00403260((basic_string<> *)(puVar14 + 8),(byte *)&PTR_005ce008);
                local_dc = 0;
                local_d8 = 0;
                local_30[0x4a] = 0x42c80000;
                local_30[0xe] = 0xbf800000;
                local_30[0xf] = 0xbf800000;
                local_8 = 0xf;
                local_40 = (undefined1 *)
                           cocos2d::Vec2::getDistance((Vec2 *)(puVar14 + 0x118),(Vec2 *)&local_dc);
                local_8 = 0xffffffff;
                local_30[0xd] = local_40;
              }
              if (*(char *)(DAT_0065b444 + 0x142) != '\0') {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x18),*(basic_string<> **)(puVar14 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x12),(basic_string<> *)(puVar14 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar14 + 0x238));
              }
              if (5.0 < (float)local_30[0x4a]) {
                local_8c = 0.0;
                local_88 = 0.0;
                local_8 = 0x15;
                puVar16 = (undefined1 *)
                          cocos2d::Vec2::getDistance((Vec2 *)(puVar14 + 0x118),(Vec2 *)&local_8c);
                local_8 = 0xffffffff;
                local_40 = puVar16;
                if (0.0 < (float)puVar16) {
                  FUN_005173c0((int)puVar14);
                  local_30[0xe] = puVar16;
                }
              }
              auVar25 = ZEXT416((uint)local_30[0x4a]);
              if (25.0 < (float)local_30[0x4a]) {
                local_30[0xf] = *(undefined4 *)(puVar14 + 0x120);
              }
              if (local_30[0x38] == 0) {
                iVar6 = local_30[0x4c];
                if ((*(int *)(iVar6 + 100) == *(int *)(param_1 + 100)) ||
                   (((*(int *)(iVar6 + 0x44) != 0 &&
                     (iVar18 = *(int *)(*(int *)(iVar6 + 0x44) + 0x124), iVar18 != 0)) &&
                    (*(int *)(iVar18 + 0x248) != 0)))) {
                  local_30[0x37] = 0;
                }
                else if (*(int *)(*(int *)(iVar6 + 0x254) + 0x158) == 4) {
                  if ((iVar6 == 0) ||
                     (cVar3 = FUN_004143b0((void *)(iVar6 + 0x3a0),param_1 + 0x238), cVar3 == '\0'))
                  {
                    local_30[0x37] = 2;
                  }
                  else {
                    local_30[0x37] = 0;
                  }
                }
                else {
                  auVar25 = ZEXT416((uint)local_30[0x46]);
                  if ((float)local_30[0x46] != 0.0) goto LAB_0050e436;
                  if (*(char *)(*(int *)(iVar6 + 0x40) + 0x34) == '\0') {
                    local_30[0x37] = 2;
                  }
                  else {
                    local_30[0x37] = (*(int *)(iVar6 + 100) != 0) + 1;
                  }
                }
              }
              else {
LAB_0050e436:
                local_30[0x37] = 3;
              }
              if ((*(int *)(puVar14 + 100) == *(int *)(param_1 + 100)) ||
                 (cVar3 = local_31, *(int *)(*(int *)(puVar14 + 0x254) + 0x158) == 4)) {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x18),*(basic_string<> **)(puVar14 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x12),(basic_string<> *)(puVar14 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar14 + 0x238));
                local_30[0x4a] = 0x42c80000;
                auVar25 = ZEXT416((uint)local_30[0x46]);
                cVar3 = '\x01';
                if (1.0 <= (float)local_30[0x46]) {
                  local_30[0x46] = 0x3a83126f;
                }
              }
LAB_0050e515:
              if ((local_30 != (undefined4 *)0x0) &&
                 (((auVar25 = ZEXT416((uint)local_30[0x46]), (float)local_30[0x46] == 0.0 &&
                   (*(char *)((int)local_30 + 0x45) == '\0')) || (cVar3 != '\0')))) {
                *(undefined1 *)((int)local_30 + 0x45) = 1;
              }
            }
            puVar16 = local_54;
            if ((param_1[0x2d0] != '\0') && (local_30 != (undefined4 *)0x0)) {
              local_30[0x4a] = 0x42c80000;
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x18),*(basic_string<> **)(puVar14 + 0x254));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x12),(basic_string<> *)(puVar14 + 8));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar14 + 0x238));
              *(undefined1 *)((int)local_30 + 0x45) = 1;
              puVar16 = local_54;
            }
          }
        }
        iVar6 = *(int *)(param_1 + 0x24);
        local_50 = local_50 + 1;
      } while (local_50 < (undefined1 *)(*(int *)(iVar6 + 0xd0) - *(int *)(iVar6 + 0xcc) >> 2));
    }
    local_3c = 0.0;
    if (*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2 != 0) {
      do {
        fVar20 = local_3c;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x9c) + (int)local_3c * 4);
        if (*(char *)(iVar6 + 0x40) == '\0') {
          local_40 = param_1 + 8;
          local_8c = (float)*(double *)(param_1 + 0x28);
          local_88 = (float)*(double *)(param_1 + 0x30);
          local_38 = (undefined1 *)((uint)local_38 | 0x6000);
          local_84 = (float)*(double *)(iVar6 + 0x28);
          puVar16 = (undefined1 *)(float)*(double *)(iVar6 + 0x30);
          local_8 = 0x17;
          local_80 = puVar16;
          FUN_00591010((Vec2 *)&local_84,(Vec2 *)&local_8c);
          local_8 = 0xffffffff;
          local_4c = *(undefined1 **)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x9c) + (int)fVar20 * 4) + 100);
          if ((float)local_4c == -1.0) {
            local_4c = (undefined1 *)0x43000000;
          }
          local_50 = puVar16;
          iVar6 = FUN_00437c60(*(int **)(**(int **)(param_1 + 0x40) + 0xc));
          auVar24._4_8_ = 0;
          auVar24._0_4_ = ((float)iVar6 / 100.0) * (float)local_4c;
          if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1) {
            auVar24 = ZEXT812(0x44480000);
          }
          auVar25._12_4_ = 0;
          auVar25._0_12_ = auVar24;
          if ((float)local_50 <= auVar24._0_4_) {
            local_30 = (undefined4 *)
                       FUN_0050c760(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) +
                                                                      0x9c) + (int)fVar20 * 4) +
                                                    0x44));
            if (local_30 == (undefined4 *)0x0) {
              FUN_00591070(&DAT_005cdc70,"%s: detected synthetic object \'%s\' for the first time");
              in_stack_fffffee0 = (char *)0x50e773;
              local_74 = (undefined1 *)FUN_005adb0f(0x138);
              local_8 = 0x18;
              iVar6 = *(int *)(param_1 + 0x220);
              *(int *)(param_1 + 0x220) = iVar6 + 1;
              local_30 = FUN_00508c00(local_74,0xffffffff,iVar6);
              local_8 = 0xffffffff;
              if (param_1[0x234] != '\0') {
                FUN_00591e00((undefined1 *)local_2c,"can_detect_%s");
                local_8 = 0x19;
                ppppcVar17 = local_2c;
                if (0xf < local_18) {
                  ppppcVar17 = (char ****)local_2c[0];
                }
                puVar8 = (undefined4 *)std::basic_string<>::end((basic_string<> *)local_2c);
                FUN_00413ec0(&local_ac,tolower_exref,(char *)ppppcVar17,(char *)*puVar8,
                             (undefined1 *)ppppcVar17);
                local_58 = &stack0xfffffedc;
                local_b4 = &stack0xfffffedc;
                FUN_00402950((int)&stack0xfffffedc);
                local_8._0_1_ = 0x1a;
                FUN_004027c0(&stack0xfffffedc,local_2c);
                local_8._0_1_ = 0x1b;
                puVar8 = FUN_00412df0();
                local_8 = CONCAT31(local_8._1_3_,0x19);
                FUN_004a0ee0(puVar8,in_stack_fffffedc);
                local_8 = 0x1c;
                FUN_00401b20((int *)local_2c);
                param_1 = local_60;
              }
              local_8 = 0xffffffff;
              if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
                 (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
                cVar3 = FUN_004143b0((void *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x9c) +
                                                      (int)fVar20 * 4) + 0x68),param_1 + 0x238);
                if (cVar3 == '\0') {
                  local_30[0x4a] = 0;
                }
                else {
                  FUN_00591070(&DAT_005cdc70,"%s: it\'s our own cargo pod");
                  local_30[0x4a] = 0x42c80000;
                }
              }
              else {
                local_30[0x4a] = 0x42c80000;
              }
              iVar18 = 0;
              local_30[0x39] = 0x44;
              iVar6 = 9;
              do {
                iVar10 = rand();
                param_1 = local_60;
                iVar18 = iVar18 + 1 + iVar10 % 6;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              iVar6 = (int)local_3c * 4;
              local_30[0x3a] = iVar18 + 0xf;
              local_30[0x45] = 0xc0000000;
              *(undefined1 *)((int)local_30 + 0x121) = 1;
              *(undefined1 *)(local_30 + 0x43) = 1;
              local_30[1] = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(local_60 + 0x24) + 0x9c) + iVar6) + 0x44);
              local_30[0x4b] = *(undefined4 *)(local_60 + 0x20);
              iVar18 = *(int *)(*(int *)(iVar6 + *(int *)(*(int *)(local_60 + 0x24) + 0x9c)) + 0x60)
              ;
              if (iVar18 == 3) {
                local_30[0x38] = 3;
              }
              else if (iVar18 == 0) {
                local_30[0x38] = 4;
              }
              else if (iVar18 == 2) {
                local_30[0x38] = 5;
              }
              else if (iVar18 == 1) {
                local_30[0x38] = 6;
              }
              else if (iVar18 == 4) {
                local_30[0x38] = 7;
              }
              piVar9 = (int *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e1d38);
              FUN_00413230(local_30 + 0x24,piVar9);
              local_8 = 0x1d;
              FUN_00401b20((int *)local_2c);
              local_8 = 0xffffffff;
              *(undefined1 *)(local_30 + 2) = 1;
              *(undefined1 *)((int)local_30 + 9) = 1;
              local_30[0x47] = 0;
              FUN_00402690(local_30 + 0x30,"`$unknown",9);
              cVar3 = FUN_004143b0((void *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x9c) +
                                                    iVar6) + 0x68),param_1 + 0x238);
              if (cVar3 != '\0') {
                local_30[0x37] = 0;
              }
              FUN_00412900(param_1 + 0x214,&local_30);
            }
            else {
              iVar6 = FUN_0051f2d0(*(void **)(param_1 + 0x24),local_30[1]);
              if (iVar6 == 0) {
                local_30[0x4a] = (float)local_30[0x4a] - local_64 * 4.0;
                if ((float)local_30[0x4a] <= 0.0 && (float)local_30[0x4a] != 0.0) {
                  local_30[0x4a] = 0;
                }
              }
              else {
                if ((*(int *)(iVar6 + 0x60) == 2) && (0.0 <= *(float *)(iVar6 + 0xe0))) {
                  local_9c = (float)*(double *)(param_1 + 0x28);
                  local_98 = (float)*(double *)(param_1 + 0x30);
                  local_38 = (undefined1 *)((uint)local_38 | 0x18000);
                  local_94 = (float)*(double *)(iVar6 + 0x28);
                  fVar20 = (float)*(double *)(iVar6 + 0x30);
                  local_8 = 0x1f;
                  local_90 = fVar20;
                  FUN_00591010((Vec2 *)&local_94,(Vec2 *)&local_9c);
                  local_8 = 0xffffffff;
                  if (fVar20 <= *(float *)(iVar6 + 0xe0)) {
                    FUN_00402920((int)local_2c);
                    local_8 = 0x20;
                    FUN_004027c0(local_2c,(undefined4 *)(iVar6 + 0x98));
                    local_8 = 0x21;
                    cVar3 = FUN_00403260(local_2c,(byte *)&PTR_005ce008);
                    if (cVar3 == '\0') {
                      local_58 = &stack0xfffffee0;
                      local_a8 = &stack0xfffffee0;
                      FUN_00402920((int)&stack0xfffffee0);
                      local_8._0_1_ = 0x22;
                      FUN_004027c0(&stack0xfffffee0,local_2c);
                      local_8._0_1_ = 0x23;
                      puVar8 = FUN_00412df0();
                      local_8._0_1_ = 0x21;
                      in_stack_fffffedc = (byte *)0x50ec09;
                      bVar4 = FUN_004a1150(puVar8,in_stack_fffffee0);
                      if (bVar4 == 0) {
                        local_58 = &stack0xfffffedc;
                        local_6c = &stack0xfffffedc;
                        FUN_00402920((int)&stack0xfffffedc);
                        local_8._0_1_ = 0x24;
                        FUN_004027c0(&stack0xfffffedc,local_2c);
                        local_8._0_1_ = 0x25;
                        puVar8 = FUN_00412df0();
                        local_8 = CONCAT31(local_8._1_3_,0x21);
                        FUN_004a0ee0(puVar8,in_stack_fffffedc);
                        FUN_00591070("DETAIL",
                                     "Set flag as required for this synthetic object as we are close enough and can detect it"
                                    );
                      }
                    }
                    local_8 = 0x26;
                    FUN_00401b20((int *)local_2c);
                    local_8 = 0xffffffff;
                  }
                }
                if ((float)local_30[0x4a] < 100.0) {
                  fVar20 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x9c) +
                                              (int)local_3c * 4) + 100);
                  fVar21 = local_64 * 20.0;
                  if (fVar20 * 0.25 <= (float)local_50) {
                    if (fVar20 * 0.5 <= (float)local_50) {
                      fVar21 = fVar21 * 0.5;
                    }
                  }
                  else {
                    fVar21 = fVar21 + fVar21;
                  }
                  local_30[0x4a] = fVar21 + (float)local_30[0x4a];
                  if (100.0 < (float)local_30[0x4a]) {
                    if (((*(int *)(iVar6 + 0x60) == 2) && (param_1[0x234] != '\0')) &&
                       (*(float *)(iVar6 + 0xe0) == -1.0)) {
                      FUN_00402920((int)local_2c);
                      local_8 = 0x27;
                      FUN_004027c0(local_2c,(undefined4 *)(iVar6 + 0x98));
                      local_8 = 0x28;
                      cVar3 = FUN_00403260(local_2c,(byte *)&PTR_005ce008);
                      if (cVar3 == '\0') {
                        local_58 = &stack0xfffffee0;
                        local_44 = &stack0xfffffee0;
                        FUN_00402920((int)&stack0xfffffee0);
                        local_8._0_1_ = 0x29;
                        FUN_004027c0(&stack0xfffffee0,local_2c);
                        local_8._0_1_ = 0x2a;
                        puVar8 = FUN_00412df0();
                        local_8._0_1_ = 0x28;
                        in_stack_fffffedc = (byte *)0x50ed98;
                        bVar4 = FUN_004a1150(puVar8,in_stack_fffffee0);
                        if (bVar4 == 0) {
                          local_58 = &stack0xfffffedc;
                          local_a0 = &stack0xfffffedc;
                          FUN_00402920((int)&stack0xfffffedc);
                          local_8._0_1_ = 0x2b;
                          FUN_004027c0(&stack0xfffffedc,local_2c);
                          local_8._0_1_ = 0x2c;
                          puVar8 = FUN_00412df0();
                          local_8 = CONCAT31(local_8._1_3_,0x28);
                          FUN_004a0ee0(puVar8,in_stack_fffffedc);
                          FUN_00591070("DETAIL",
                                       "Set flag as required for this synthetic object as the solution is at full"
                                      );
                          in_stack_fffffee0 = (char *)0x50ee04;
                          FUN_00527550(*(int **)(param_1 + 0x224),2,
                                       "Synced with Comms Buoy at dist %fgm");
                        }
                      }
                      local_8 = 0xffffffff;
                      FUN_00401b20((int *)local_2c);
                    }
                    local_30[0x4a] = 0x42c80000;
                  }
                }
                puVar8 = local_30;
                iVar18 = FUN_005913c0(1,0x14,0);
                if ((float)(iVar18 + 0xf) < (float)puVar8[0x4a]) {
                  if (((local_30[0x4c] == 0) ||
                      (iVar18 = *(int *)(local_30[0x4c] + 0x44), iVar18 == 0)) ||
                     ((iVar18 = *(int *)(iVar18 + 0x124), iVar18 == 0 ||
                      (*(char *)(iVar18 + 0x160) == '\0')))) {
                    pbVar11 = FUN_00506c60(*(void **)(iVar6 + 0xe8),(basic_string<> *)local_2c,
                                           '\x01');
                    FUN_00413230(local_30 + 0x30,(int *)pbVar11);
                    FUN_00401b20((int *)local_2c);
                  }
                  else {
                    iVar6 = FUN_00412f10((int *)(DAT_0065b5cc + 0x84));
                    iVar6 = FUN_00591360(iVar6 + -1);
                    piVar9 = (int *)FUN_00412f00((void *)(DAT_0065b5cc + 0x84),iVar6);
                    std::basic_string<>::operator=
                              ((basic_string<> *)(local_30 + 0x30),(basic_string<> *)(*piVar9 + 4));
                  }
                }
              }
            }
            fVar20 = local_3c;
            local_30[0x10] = 0;
            piVar9 = (int *)FUN_00412f00((void *)(*(int *)(param_1 + 0x24) + 0x9c),(int)local_3c);
            *(undefined8 *)(local_30 + 4) = *(undefined8 *)(*piVar9 + 0x28);
            piVar9 = (int *)FUN_00412f00((void *)(*(int *)(param_1 + 0x24) + 0x9c),(int)fVar20);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = (double)*(ulonglong *)(*piVar9 + 0x30);
            *(ulonglong *)(local_30 + 6) = *(ulonglong *)(*piVar9 + 0x30);
          }
          puVar8 = local_30;
          if (local_30 != (undefined4 *)0x0) {
            iVar6 = FUN_005913c0(1,0x14,0);
            auVar25 = ZEXT416((uint)puVar8[0x4a]);
            if (((float)(iVar6 + 0xf) < (float)puVar8[0x4a]) &&
               (*(char *)((int)local_30 + 0x45) == '\0')) {
              *(undefined1 *)((int)local_30 + 0x45) = 1;
            }
          }
        }
        iVar6 = *(int *)(param_1 + 0x24);
        local_3c = (float)((int)local_3c + 1);
      } while ((uint)local_3c < (uint)(*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2));
    }
  }
  if (((*(int **)(*(int *)(param_1 + 0x40) + 4) != (int *)0x0) &&
      (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 4) + 0x10))(), cVar3 != '\0')) &&
     (cVar3 = FUN_004abed0(*(int *)(*(int *)(param_1 + 0x40) + 4)), cVar3 != '\0')) {
    puVar16 = (undefined1 *)0x0;
    local_4c = (undefined1 *)0x0;
    iVar6 = FUN_00412f10((int *)(*(int *)(param_1 + 0x24) + 0xcc));
    if (iVar6 != 0) {
      do {
        puVar16 = (undefined1 *)FUN_0051fb10(*(void **)(param_1 + 0x24),(int)puVar16);
        local_50 = puVar16;
        if (puVar16 != param_1) {
          pVVar12 = (Vec2 *)FUN_00403c40(param_1 + 8,&local_84);
          local_6c = puVar16 + 8;
          local_8 = 0x2d;
          fVar20 = 7.432966e-39;
          pVVar13 = (Vec2 *)FUN_00403c40(local_6c,&local_8c);
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          FUN_00591010(pVVar13,pVVar12);
          local_40 = auVar25._0_4_;
          FUN_004ae680(*(int *)(*(int *)(param_1 + 0x40) + 4));
          bVar19 = (float)local_40 <= auVar25._0_4_;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_8c);
          local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_84);
          if (bVar19) {
            FUN_00403c40(local_6c,(float *)&stack0xfffffef0);
            FUN_0050b290(param_1,fVar20);
            puVar16 = local_50;
            dVar22 = auVar25._0_8_;
            fVar20 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8) + 0x104) * 0.5;
            if (((float)(int)dVar22 <= fVar20) ||
               (fVar20 = 360.0 - fVar20, auVar25 = ZEXT416((uint)fVar20),
               fVar20 <= (float)(int)dVar22)) {
              local_30 = (undefined4 *)FUN_0050c720(param_1,*(int *)(local_50 + 0x250));
              if (local_30 == (undefined4 *)0x0) {
                puVar14 = (undefined1 *)FUN_005adb0f(0x138);
                local_8 = 0x2f;
                local_74 = puVar14;
                uVar5 = FUN_00403d20((int)param_1);
                local_30 = FUN_00508c00(puVar14,*(undefined4 *)(puVar16 + 0x250),uVar5);
                local_8 = 0xffffffff;
                local_30[0x4b] = *(undefined4 *)(param_1 + 0x20);
                local_30[0x4c] = puVar16;
                local_30[0x36] = *(undefined4 *)(*(int *)(puVar16 + 0x254) + 0x158);
                *(undefined1 *)(local_30 + 2) = 1;
                *(undefined1 *)((int)local_30 + 9) = 1;
                local_30[0x47] = 0;
                local_30[0x4a] = 0;
                FUN_00412900(param_1 + 0x214,&local_30);
                if (local_54 == (undefined1 *)0x0) {
                  local_54 = puVar16;
                }
                FUN_0050b410(param_1,(int)(puVar16 + 8));
                local_30[0xc] = (int)auVar25._0_8_;
                iVar6 = local_30[0x4c];
                if ((iVar6 != 0) && (*(int *)(*(int *)(iVar6 + 0x254) + 0x158) == 0)) {
                  auVar25._0_8_ = (double)local_68;
                  auVar25._8_8_ = 0;
                  FUN_00402490((undefined4 *)(iVar6 + 0x238));
                  FUN_00402490((undefined4 *)(local_30[0x4c] + 8));
                  FUN_00402490((undefined4 *)(param_1 + 8));
                  FUN_00591070(&DAT_005cdc70,"%s: detected vessel %s (%s) at range %f, on LADAR");
                }
              }
              else {
                if (((float)local_30[0x4a] < 100.0) &&
                   (local_30[0x4a] = local_64 * 60.0 + (float)local_30[0x4a],
                   100.0 < (float)local_30[0x4a])) {
                  local_30[0x4a] = 0x42c80000;
                }
                *(undefined8 *)(local_30 + 4) = *(undefined8 *)(puVar16 + 0x28);
                auVar25._8_8_ = 0;
                auVar25._0_8_ = (double)*(ulonglong *)(puVar16 + 0x30);
                *(ulonglong *)(local_30 + 6) = *(ulonglong *)(puVar16 + 0x30);
              }
              *(undefined1 *)(local_30 + 0x11) = 1;
              local_30[0x10] = 0;
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x18),*(basic_string<> **)(puVar16 + 0x254));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x24),(basic_string<> *)(puVar16 + 0x238));
              FUN_00403cb0((int)puVar16);
              local_30[0xd] = auVar25._0_4_;
              *(undefined8 *)(local_30 + 4) = *(undefined8 *)(puVar16 + 0x28);
              auVar25._8_8_ = 0;
              auVar25._0_8_ = (double)*(ulonglong *)(puVar16 + 0x30);
              *(ulonglong *)(local_30 + 6) = *(ulonglong *)(puVar16 + 0x30);
              *(undefined1 *)((int)local_30 + 0x122) = 1;
              FUN_00403cb0((int)puVar16);
              if (0.0 < auVar25._0_4_) {
                FUN_005173c0((int)puVar16);
                local_30[0xe] = auVar25._0_4_;
              }
            }
          }
        }
        puVar16 = local_4c + 1;
        local_4c = puVar16;
        puVar14 = (undefined1 *)FUN_00412f10((int *)(*(int *)(param_1 + 0x24) + 0xcc));
      } while (puVar16 < puVar14);
    }
  }
  param_1[0x104] = (char)local_7c;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __fastcall FUN_0050f330(int param_1)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  
  if (*(char *)(param_1 + 0x234) == '\0') {
    in_EAX = *(uint *)(*(int *)(param_1 + 0x40) + 0x20);
    if (in_EAX == 0) goto LAB_0050f36c;
    iVar2 = *(int *)(in_EAX + 0x3c);
  }
  else {
    if (*(int *)(param_1 + 0xd4) == 3) goto LAB_0050f36c;
    in_EAX = *(uint *)(param_1 + 0x40);
    piVar1 = (int *)(in_EAX + 0x20);
    if (*piVar1 == 0) goto LAB_0050f36c;
    in_EAX = *(uint *)(param_1 + 0x1b4);
    iVar2 = *(int *)(*piVar1 + 0x38 + in_EAX * 4);
  }
  if (iVar2 != 0) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_0050f36c:
  return in_EAX & 0xffffff00;
}


void __thiscall FUN_0050f370(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  byte *in_stack_ffffffbc;
  byte *pbVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1820;
  local_10 = ExceptionList;
  uVar7 = 0;
  iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0x3c);
  if (*(int *)(*(int *)((int)this + 0x40) + 0x40) - iVar4 >> 2 == 0) {
    return;
  }
  do {
    iVar4 = *(int *)(iVar4 + uVar7 * 4);
    iVar3 = 0;
    iVar1 = 0x3c;
    do {
      if (*(int *)(iVar1 + iVar4) == param_1) {
        ExceptionList = &local_10;
        *(undefined4 *)(iVar4 + 0x3c + iVar3 * 4) = 0;
        if (*(char *)((int)this + 0x234) == '\0') goto LAB_0050f4ef;
        iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
        if (iVar4 == 0) goto LAB_0050f43e;
        iVar1 = 0;
        piVar5 = (int *)(iVar4 + 0x3c);
        goto LAB_0050f420;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x5c);
    uVar7 = uVar7 + 1;
    iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0x3c);
    if ((uint)(*(int *)(*(int *)((int)this + 0x40) + 0x40) - iVar4 >> 2) <= uVar7) {
      return;
    }
  } while( true );
  while( true ) {
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 1;
    if (7 < iVar1) break;
LAB_0050f420:
    if ((*piVar5 != 0) && (*(int *)(*(int *)(*piVar5 + 0x388) + 0x1b4) == 3)) goto LAB_0050f47f;
  }
LAB_0050f43e:
  in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,"has_torpedo",0xb);
  local_8 = 0;
  puVar2 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar2,in_stack_ffffffbc);
LAB_0050f47f:
  iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
  if (iVar4 != 0) {
    iVar1 = 0;
    piVar5 = (int *)(iVar4 + 0x3c);
    do {
      if ((*piVar5 != 0) && (*(int *)(*(int *)(*piVar5 + 0x388) + 0x1b4) == 4)) goto LAB_0050f4ef;
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 < 8);
  }
  pbVar9 = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,"has_probe",9);
  local_8 = 1;
  puVar2 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar2,pbVar9);
LAB_0050f4ef:
  piVar5 = *(int **)((int)this + 0x194);
  if ((piVar5 != (int *)0x0) && (piVar5[0x4c] == param_1)) {
    if (*piVar5 != -1) {
      uVar7 = 0;
      puVar2 = *(undefined4 **)((int)this + 0x214);
      uVar8 = *(int *)((int)this + 0x218) - (int)puVar2 >> 2;
      if (uVar8 != 0) {
        do {
          piVar6 = (int *)*puVar2;
          if (*piVar6 == *piVar5) goto LAB_0050f532;
          uVar7 = uVar7 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar7 < uVar8);
      }
    }
    piVar6 = (int *)0x0;
LAB_0050f532:
    FUN_0050c960(this,(int)piVar6);
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 400) = 0xffffffff;
  }
  piVar5 = *(int **)((int)this + 0x19c);
  if ((piVar5 != (int *)0x0) && (piVar5[0x4c] == param_1)) {
    if (*piVar5 != -1) {
      uVar7 = 0;
      puVar2 = *(undefined4 **)((int)this + 0x214);
      uVar8 = *(int *)((int)this + 0x218) - (int)puVar2 >> 2;
      if (uVar8 != 0) {
        do {
          piVar6 = (int *)*puVar2;
          if (*piVar6 == *piVar5) goto LAB_0050f591;
          uVar7 = uVar7 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar7 < uVar8);
      }
    }
    piVar6 = (int *)0x0;
LAB_0050f591:
    FUN_0050c960(this,(int)piVar6);
    *(undefined4 *)((int)this + 0x19c) = 0;
    *(undefined4 *)((int)this + 0x198) = 0xffffffff;
  }
  ExceptionList = local_10;
  return;
}


int __fastcall FUN_0050f5d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  return (int)*(float *)(*(int *)(iVar1 + 8) + 0x104);
}


uint __fastcall FUN_0050f5f0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int *)(uVar1 + 0x20) != 0) {
    iVar2 = 0;
    puVar3 = (uint *)(*(int *)(uVar1 + 0x20) + 0x3c);
    do {
      uVar1 = *puVar3;
      if (((uVar1 != 0) && (*(char *)(uVar1 + 0x3c4) == '\0')) && (*(char *)(uVar1 + 0x3bc) != '\0')
         ) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 8);
  }
  return uVar1 & 0xffffff00;
}


undefined1 __thiscall FUN_0050f630(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  undefined1 uVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
  pbVar7 = param_1;
  if (iVar1 != 0) {
    iVar8 = 0;
    piVar6 = (int *)(iVar1 + 0x3c);
    do {
      iVar1 = *piVar6;
      pbVar7 = param_1;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) {
        ppbVar3 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar3 = (byte **)param_1;
        }
        uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,(byte *)&PTR_005ce008,0);
        pbVar7 = param_1;
        if ((char)uVar2 != '\0') {
          uVar5 = 1;
          goto LAB_0050f6ed;
        }
        iVar1 = *(int *)(iVar1 + 0x38c);
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x30) == 1)) && (iVar1 != 8)) {
          pbVar4 = (byte *)(iVar1 + 0x230);
          ppbVar3 = &param_1;
          if (0xf < in_stack_00000018) {
            ppbVar3 = (byte **)param_1;
          }
          if (0xf < *(uint *)(iVar1 + 0x244)) {
            pbVar4 = *(byte **)(iVar1 + 0x230);
          }
          uVar2 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x240),(byte *)ppbVar3,in_stack_00000014);
          if ((char)uVar2 != '\0') {
            uVar5 = 1;
            goto LAB_0050f6ed;
          }
        }
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar8 < 8);
  }
  uVar5 = 0;
LAB_0050f6ed:
  if (0xf < in_stack_00000018) {
    pbVar4 = pbVar7;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar4 = *(byte **)(pbVar7 + -4), (byte *)0x1f < pbVar7 + (-4 - (int)pbVar4))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar4);
  }
  return uVar5;
}


uint __thiscall FUN_0050f740(void *this,int param_1,uint param_2)

{
  float fVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined4 *this_00;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1862;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    FUN_00591070("ERROR","Error: null weapon class being added.");
    ExceptionList = local_10;
    return 0xffffffff;
  }
  iVar6 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  ExceptionList = &local_10;
  cVar2 = FUN_004ae510(iVar6);
  if ((*(float *)(*(int *)(iVar6 + 8) + 0x108) <= (float)CONCAT31(extraout_var,cVar2)) &&
     (param_2 != 0xffffffff)) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  pvVar3 = (void *)FUN_005adb0f(0x428);
  local_8 = 0;
  this_00 = FUN_0051c2a0(pvVar3,(int)this,param_1);
  local_8 = 0xffffffff;
  FUN_0050ad40(this_00,*(undefined4 *)(param_1 + 0x1b4),4,3);
  pvVar3 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,"stock",5);
  uVar7 = 0x50f827;
  FUN_0050c3d0(this_00,pvVar3);
  puVar4 = this_00 + 2;
  if (*(int *)(param_1 + 0x1b4) == 3) {
    FUN_00402690(puVar4,"Torpedo",7);
    if (*(char *)((int)this + 0x234) == '\0') goto LAB_0050f8e7;
    pbVar8 = (byte *)(uVar7 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"has_torpedo",0xb);
    local_8 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x1b4) != 4) {
      FUN_00402690(puVar4,"Unknown",7);
      goto LAB_0050f8e7;
    }
    FUN_00402690(puVar4,"Probe",5);
    if (*(char *)((int)this + 0x234) == '\0') goto LAB_0050f8e7;
    pbVar8 = (byte *)(uVar7 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"has_probe",9);
    local_8 = 2;
  }
  puVar4 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar4,pbVar8);
LAB_0050f8e7:
  if (param_2 != 0xffffffff) {
LAB_0050f93e:
    if (*(int *)(*(int *)(*(int *)((int)this + 0x40) + 0x20) + 0x3c + param_2 * 4) != 0) {
      FUN_00591070("DETAIL","%s: Clearing weapon slot %d");
      iVar6 = *(int *)((int)this + 0x40);
      puVar4 = *(undefined4 **)(*(int *)(iVar6 + 0x20) + 0x3c + param_2 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00494e20(puVar4);
        FUN_005adb3f(puVar4);
        iVar6 = *(int *)((int)this + 0x40);
      }
      *(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x3c + param_2 * 4) = 0;
    }
    *(undefined1 *)(this_00 + 200) = 1;
    this_00[0xf2] = param_2;
    *(undefined4 **)(*(int *)(*(int *)((int)this + 0x40) + 0x20) + 0x3c + param_2 * 4) = this_00;
    FUN_00591070("DETAIL","%s: Weapon added to slot %d%s");
    ExceptionList = local_10;
    return param_2;
  }
  param_2 = 0;
  iVar6 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
  fVar1 = *(float *)(*(int *)(iVar6 + 8) + 0x108);
  if (0.0 < fVar1) {
    piVar5 = (int *)(iVar6 + 0x3c);
    do {
      if ((((int)param_2 < 8) && (param_2 < 9)) && (*piVar5 == 0)) {
        if (param_2 == 0xffffffff) {
          ExceptionList = local_10;
          return 0xffffffff;
        }
        goto LAB_0050f93e;
      }
      param_2 = param_2 + 1;
      piVar5 = piVar5 + 1;
    } while ((float)(int)param_2 < fVar1);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


void __thiscall FUN_0050fa00(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *******pppppppcVar5;
  char *******pppppppcVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  byte *in_stack_ffffff8c;
  undefined8 local_48;
  undefined1 *local_3c;
  undefined1 *local_38;
  int *local_34;
  char ******local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c18a1;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = (undefined1 *)(param_1 * 4 + 0x3c);
  piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x40) + 0x20) + (int)local_3c);
  local_34 = piVar4;
  if (piVar4 == (int *)0x0) {
    FUN_00591070("DETAIL","%s: Tried to fire slot %d, no such slot exists.");
  }
  else {
    if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
        (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
       (*(char *)((int)this + 0x234) != '\0')) {
      local_38 = &stack0xffffff8c;
      in_stack_ffffff8c = (byte *)((uint)in_stack_ffffff8c & 0xffffff00);
      FUN_00402690(&stack0xffffff8c,"fired_torpedo",0xd);
      local_8 = 0;
      puVar3 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar3,in_stack_ffffff8c);
    }
    *(undefined1 *)(piVar4 + 200) = 0;
    FUN_0050c090(piVar4,*(undefined1 **)((int)this + 0x20));
    *(undefined1 *)(piVar4 + 0xf1) = 1;
    *(undefined8 *)(piVar4 + 10) = *(undefined8 *)((int)this + 0x28);
    *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)((int)this + 0x30);
    piVar4[0x19] = *(int *)((int)this + 100);
    fVar11 = (float)*(double *)((int)this + 0x28);
    FUN_00592f80(fVar11,(float)*(double *)((int)this + 0x30),(float)piVar4[0x4b]);
    dVar12 = (double)(int)fVar11 * 0.017453292519943295;
    local_48 = dVar12;
    libm_sse2_cos_precise();
    local_38 = (undefined1 *)(float)(dVar12 * 0.25);
    dVar12 = local_48;
    libm_sse2_sin_precise();
    piVar4[0xe7] = (int)this;
    *(undefined1 *)(piVar4 + 0xff) = 1;
    *(double *)(piVar4 + 10) = (double)(float)(dVar12 * 0.25) + *(double *)(piVar4 + 10);
    *(double *)(piVar4 + 0xc) = (double)(float)local_38 + *(double *)(piVar4 + 0xc);
    if (((*(char *)((int)this + 0x234) != '\0') && (piVar4[0xe3] != 0)) &&
       (*(int *)(piVar4[0xe3] + 0x30) == 1)) {
      FUN_00591e00((undefined1 *)local_30,"has_fired_at_%s");
      local_8 = 1;
      pppppppcVar6 = local_30;
      if (0xf < local_1c) {
        pppppppcVar6 = (char *******)local_30[0];
      }
      pppppppcVar5 = local_30;
      if (0xf < local_1c) {
        pppppppcVar5 = (char *******)local_30[0];
      }
      FUN_00413ec0(&local_38,tolower_exref,(char *)pppppppcVar5,
                   (char *)((int)pppppppcVar6 + local_20),(undefined1 *)pppppppcVar6);
      local_38 = &stack0xffffff8c;
      FUN_004024e0(&stack0xffffff8c,local_30);
      local_8._0_1_ = 2;
      puVar3 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004a0ee0(puVar3,in_stack_ffffff8c);
      local_8 = 0xffffffff;
      piVar4 = local_34;
      if (0xf < local_1c) {
        pppppppcVar6 = (char *******)local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pppppppcVar6 = (char *******)local_30[0][-1],
           (char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)pppppppcVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppppcVar6);
        piVar4 = local_34;
      }
    }
    FUN_00437c60(*(int **)(*(int *)(*(int *)((int)this + 0x40) + 0x20) + 0xc));
    FUN_00522920(piVar4[0x10]);
    FUN_00521950(piVar4[0x10]);
    *(undefined1 *)(piVar4 + 0xef) = 1;
    piVar4[0xf4] = 1;
    local_48 = (double)CONCAT44((float)*(double *)(piVar4 + 0xc),(float)*(double *)(piVar4 + 10));
    local_8 = 3;
    local_3c = (undefined1 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_48,(Vec2 *)(piVar4 + 0x4b))
    ;
    local_34 = (int *)(0x5f3759df - ((uint)local_3c >> 1));
    local_8 = 0xffffffff;
    piVar4[0xf5] = (int)((1.5 - (float)local_3c * 0.5 * (float)local_34 * (float)local_34) *
                         (float)local_34 * (float)local_3c);
    FUN_00591070(&DAT_0060dfc4,"%s: launched from %s");
    FUN_00591070(&DAT_005cdc70,"%s: Weapon launched, (%s class, rego %s).");
    if ((*(int *)(piVar4[0xe2] + 0x1b4) == 3) || (*(int *)(piVar4[0xe2] + 0x1b4) == 5)) {
      local_38 = (undefined1 *)0x0;
      local_34 = *(int **)(*(int *)((int)this + 0x24) + 0xcc);
      piVar4 = *(int **)(*(int *)((int)this + 0x24) + 0xd0);
      local_3c = (undefined1 *)((uint)((int)piVar4 + (3 - (int)local_34)) >> 2);
      if (piVar4 < local_34) {
        local_3c = (undefined1 *)0x0;
      }
      if (local_3c != (undefined1 *)0x0) {
        do {
          iVar1 = *local_34;
          uVar7 = 0;
          piVar4 = *(int **)(iVar1 + 0x214);
          uVar9 = *(int *)(iVar1 + 0x218) - (int)piVar4 >> 2;
          if (uVar9 != 0) {
            do {
              if (*(void **)(*piVar4 + 0x130) == this) {
                if ((*(float *)(*piVar4 + 0x40) <= 0.5) && (*(void **)(iVar1 + 0x44) != (void *)0x0)
                   ) {
                  FUN_00502c50(*(void **)(iVar1 + 0x44),(int)this);
                }
                break;
              }
              uVar7 = uVar7 + 1;
              piVar4 = piVar4 + 1;
            } while (uVar7 < uVar9);
          }
          local_38 = local_38 + 1;
          local_34 = local_34 + 1;
        } while (local_38 != local_3c);
      }
    }
    uVar7 = 0;
    piVar4 = *(int **)(*(int *)((int)this + 0x24) + 0xcc);
    piVar2 = *(int **)(*(int *)((int)this + 0x24) + 0xd0);
    puVar8 = (undefined1 *)((uint)((int)piVar2 + (3 - (int)piVar4)) >> 2);
    if (piVar2 < piVar4) {
      puVar8 = (undefined1 *)0x0;
    }
    local_3c = puVar8;
    if (puVar8 != (undefined1 *)0x0) {
      do {
        bVar10 = false;
        if (*(int *)(*piVar4 + 0x254) != 0) {
          bVar10 = *(int *)(*(int *)(*piVar4 + 0x254) + 0x158) == 0;
        }
        if (bVar10) {
          FUN_00512270((void *)*piVar4,(int)this);
          puVar8 = local_3c;
        }
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 1;
      } while ((undefined1 *)uVar7 != puVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __thiscall FUN_0050ff80(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  local_8 = 0;
  iVar3 = *(int *)((int)this + 0x254);
  if (*(int *)(iVar3 + 0x110) - *(int *)(iVar3 + 0x10c) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar3 + 0x10c) + local_8 * 4);
      if (*piVar1 == param_1) {
        iVar5 = 0;
        uVar4 = 0;
        if (piVar1[2] - piVar1[1] >> 3 == 0) {
LAB_005100d5:
          FUN_00591070("DETAIL","%s: can\'t damage any hull locations left from angle %s");
          return 4;
        }
        do {
          iVar2 = FUN_0050bff0(this,*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4
                                                              ) + 4) + uVar4 * 8));
          iVar3 = *(int *)((int)this + 0x254);
          if (iVar2 < 100) {
            iVar5 = iVar5 + *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4) + 4) +
                                     4 + uVar4 * 8);
          }
          uVar4 = uVar4 + 1;
          iVar2 = *(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4);
        } while (uVar4 < (uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 3));
        if (iVar5 == 0) goto LAB_005100d5;
        iVar3 = rand();
        uVar4 = 0;
        iVar2 = iVar3 % iVar5 + -1;
        iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x254) + 0x10c) + local_8 * 4);
        iVar5 = *(int *)(iVar3 + 4);
        uVar6 = *(int *)(iVar3 + 8) - iVar5 >> 3;
        if (uVar6 != 0) {
          do {
            iVar3 = *(int *)(iVar5 + 4 + uVar4 * 8);
            if (iVar2 < iVar3) {
              return *(undefined4 *)(uVar4 * 8 + iVar5);
            }
            iVar2 = iVar2 - iVar3;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
      }
      iVar3 = *(int *)((int)this + 0x254);
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(iVar3 + 0x110) - *(int *)(iVar3 + 0x10c) >> 2));
  }
  return 1;
}
