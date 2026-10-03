#include "../ois_server.exe.h"


void __thiscall FUN_005681d0(void *this,float param_1,float param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  fVar4 = *(float *)(iVar1 + 4) - param_2;
  iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x254) + 0x13c);
  iVar5 = *(int *)(*(int *)(iVar1 + 0x254) + 0x140);
  if (iVar3 != iVar5) {
    while( true ) {
      if ((((*(float *)(iVar3 + 0x10) <= param_1) &&
           (param_1 <=
            (float)*(int *)(&DAT_005ddc40 + *(int *)(iVar3 + 4) * 4) + *(float *)(iVar3 + 0x10))) &&
          (*(float *)(iVar3 + 0x14) <= fVar4)) &&
         (fVar4 <= (float)*(int *)(&DAT_005ddc20 + *(int *)(iVar3 + 4) * 4) +
                   *(float *)(iVar3 + 0x14))) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == iVar5) {
        ExceptionList = local_10;
        return;
      }
    }
    iVar6 = -1;
    iVar5 = 8;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar1,iVar5,iVar6);
    if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
      iVar1 = DAT_0065b3d4;
      if (DAT_0065b3d4 == 0) {
        iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar1 + 0x1e4) == iVar3) {
        *(undefined4 *)(iVar1 + 0x1e4) = 0xffffffff;
        iVar3 = -1;
      }
      else {
        *(int *)(iVar1 + 0x1e4) = iVar3;
      }
      if (iVar3 == -1) {
        iVar3 = 9;
      }
      else {
        iVar3 = 8;
      }
      iVar5 = -1;
      pvVar2 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar2,iVar1,iVar3,iVar5);
      FUN_00591070("DETAIL","Selected module slot %d");
    }
    else {
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      FUN_0041c620(0x7c,0);
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00568370(void *this,float param_1,float param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  float fVar8;
  char *pcVar9;
  byte *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (**(code **)(*(int *)this + 0xb0))();
  fVar8 = *(float *)(iVar2 + 4) - param_2;
  iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
  iVar6 = *(int *)(iVar2 + 0x13c);
  while( true ) {
    if (iVar6 == *(int *)(iVar2 + 0x140)) {
      iVar2 = *(int *)((int)this + 0x278);
      pbVar7 = (byte *)(iVar2 + 0xfc);
      pbVar5 = pbVar7;
      if (0xf < *(uint *)(iVar2 + 0x110)) {
        pbVar5 = *(byte **)pbVar7;
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar2 + 0x10c),(byte *)&PTR_005ce008,0);
      if ((char)uVar3 == '\0') {
        *(undefined4 *)(iVar2 + 0x10c) = 0;
        if (0xf < *(uint *)(iVar2 + 0x110)) {
          pbVar7 = *(byte **)pbVar7;
        }
        *pbVar7 = 0;
      }
      ExceptionList = local_10;
      return;
    }
    if ((((*(float *)(iVar6 + 0x10) <= param_1) &&
         (param_1 <=
          (float)*(int *)(&DAT_005ddc40 + *(int *)(iVar6 + 4) * 4) + *(float *)(iVar6 + 0x10))) &&
        (*(float *)(iVar6 + 0x14) <= fVar8)) &&
       (fVar8 <= (float)*(int *)(&DAT_005ddc20 + *(int *)(iVar6 + 4) * 4) + *(float *)(iVar6 + 0x14)
       )) break;
    iVar6 = iVar6 + 0x18;
  }
  piVar4 = (int *)FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),*(int *)(iVar6 + 8))
  ;
  if (piVar4 == (int *)0x0) {
    pcVar9 = "%s slot %d";
  }
  else {
    cVar1 = (**(code **)(*piVar4 + 0x14))();
    if (cVar1 == '\0') {
      (**(code **)(*piVar4 + 0x18))();
      FUN_00591e00(&stack0xffffffbc,"%s %s%s");
      FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffbc);
      ExceptionList = local_10;
      return;
    }
    pcVar9 = "%s %s (destroyed)";
  }
  FUN_00591e00(&stack0xffffffbc,pcVar9);
  FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffbc);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005685a0(int *param_1)

{
  if ((DAT_0065b3d4 != 0) && (param_1[0x10a] != *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e4))) {
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


undefined1 * __thiscall FUN_005685d0(void *this,undefined1 *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6f19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) &&
      (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)) {
    iVar1 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    fVar3 = *(float *)(iVar1 + 4) - param_3;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
    for (iVar2 = *(int *)(iVar1 + 0x13c); iVar2 != *(int *)(iVar1 + 0x140); iVar2 = iVar2 + 0x18) {
      if (((*(float *)(iVar2 + 0x10) <= param_2) &&
          (param_2 <=
           (float)*(int *)(&DAT_005ddc40 + *(int *)(iVar2 + 4) * 4) + *(float *)(iVar2 + 0x10))) &&
         ((*(float *)(iVar2 + 0x14) <= fVar3 &&
          (fVar3 <= (float)*(int *)(&DAT_005ddc20 + *(int *)(iVar2 + 4) * 4) +
                    *(float *)(iVar2 + 0x14))))) {
        iVar1 = FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),*(int *)(iVar2 + 8));
        if (iVar1 != 0) {
          FUN_00591e00(param_1,"EngModule_%s.png");
          ExceptionList = local_10;
          return param_1;
        }
        break;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  ExceptionList = local_10;
  return param_1;
}


int __thiscall FUN_00568730(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) &&
      (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)) {
    iVar1 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    fVar3 = *(float *)(iVar1 + 4) - param_2;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
    iVar2 = *(int *)(iVar1 + 0x13c);
    while( true ) {
      if (iVar2 == *(int *)(iVar1 + 0x140)) {
        ExceptionList = local_10;
        return -1;
      }
      if (((*(float *)(iVar2 + 0x10) <= param_1) &&
          (param_1 <=
           (float)*(int *)(&DAT_005ddc40 + *(int *)(iVar2 + 4) * 4) + *(float *)(iVar2 + 0x10))) &&
         ((*(float *)(iVar2 + 0x14) <= fVar3 &&
          (fVar3 <= (float)*(int *)(&DAT_005ddc20 + *(int *)(iVar2 + 4) * 4) +
                    *(float *)(iVar2 + 0x14))))) break;
      iVar2 = iVar2 + 0x18;
    }
    iVar1 = *(int *)(iVar2 + 8);
    iVar2 = FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),iVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return iVar1;
    }
  }
  ExceptionList = local_10;
  return -1;
}


void __thiscall FUN_00568860(void *this,int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  void *this_00;
  int iVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8619;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) || (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1))
  {
    iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
    if ((*(int *)(iVar1 + 0xd4) == 3) && (*(int *)(iVar1 + 0xf8) == 2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (*(int *)(iVar1 + 0x178) != 0)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x178) + 0x254);
      bVar3 = false;
      if (iVar2 != 0) {
        bVar3 = *(int *)(iVar2 + 0x158) == 1;
      }
      if (bVar3) {
        if (param_1 == 200) {
          iVar1 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
          fVar4 = *(float *)(iVar1 + 4) - param_4;
          iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
          for (iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x13c);
              iVar2 != *(int *)(*(int *)(iVar1 + 0x254) + 0x140); iVar2 = iVar2 + 0x18) {
            if ((((*(float *)(iVar2 + 0x10) <= param_3) &&
                 (param_3 <=
                  (float)*(int *)(&DAT_005ddc40 + *(int *)(iVar2 + 4) * 4) +
                  *(float *)(iVar2 + 0x10))) && (*(float *)(iVar2 + 0x14) <= fVar4)) &&
               (fVar4 <= (float)*(int *)(&DAT_005ddc20 + *(int *)(iVar2 + 4) * 4) +
                         *(float *)(iVar2 + 0x14))) {
              if (*(int *)(iVar2 + 8) != -1) {
                if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
                  if (DAT_0065c2c8 == 0) {
                    DAT_0065c2c8 = FUN_005adb0f(1);
                  }
                  FUN_0041c620(0xce,0);
                  (**(code **)(*(int *)this + 0x294))();
                  ExceptionList = local_10;
                  return;
                }
                if (DAT_0065b3d4 != 0) {
                  iVar1 = DAT_0065b3d4;
                }
                FUN_004e6240(iVar1,param_2,*(int *)(iVar2 + 8));
                (**(code **)(*(int *)this + 0x294))();
                ExceptionList = local_10;
                return;
              }
              break;
            }
          }
        }
        iVar5 = -1;
        iVar2 = 10;
        this_00 = (void *)FUN_00402f60();
        FUN_00557fb0(this_00,iVar1,iVar2,iVar5);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


Node * __thiscall FUN_00568a70(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_HelmControl::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0x138))(1);
    *(undefined4 *)((int)this + 0x430) = 0;
  }
  if (*(int **)((int)this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x434) + 0x138))(1);
    *(undefined4 *)((int)this + 0x434) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00568b60(int param_1)

{
  if (*(int **)(param_1 + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x428) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int **)(param_1 + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x434) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  return;
}


void __fastcall FUN_00568be0(int *param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  double dVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8684;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))(local_14);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Helm_Background.png");
  local_8 = 0;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10a] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x10a] + 0xa0))(&local_34);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10a] + 0x48))(0x42200000,0x42200000);
  (**(code **)(*param_1 + 0x10c))(param_1[0x10a]);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Helm_Heading.png");
  local_8 = 2;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10b] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_8 = 3;
  (**(code **)(*(int *)param_1[0x10b] + 0xa0))(&local_34);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10b] + 0x48))(0x42200000,0x42200000);
  (**(code **)(*(int *)param_1[0x10b] + 0xbc))((float)*(double *)(param_1 + 0x110));
  (**(code **)(*param_1 + 0x10c))(param_1[0x10b]);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Helm_MoveAngle.png");
  local_8 = 4;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10c] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_8 = 5;
  (**(code **)(*(int *)param_1[0x10c] + 0xa0))(&local_34);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10c] + 0x48))(0x42200000,0x42200000);
  if (*(double *)(param_1 + 0x10e) == -1.0) {
    (**(code **)(*(int *)param_1[0x10c] + 0xb4))(0);
  }
  else {
    (**(code **)(*(int *)param_1[0x10c] + 0xbc))((float)*(double *)(param_1 + 0x10e));
  }
  (**(code **)(*param_1 + 0x10c))(param_1[0x10c]);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Helm_Selector.png");
  local_8 = 6;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10d] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_3c = 0x3f000000;
  local_38 = 0x3f000000;
  local_8 = 7;
  (**(code **)(*(int *)param_1[0x10d] + 0xa0))(&local_3c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10d] + 0x48))(0x42200000,0x42200000);
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)*(float *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x128);
  }
  if ((*(double *)(param_1 + 0x112) == dVar6) || (*(double *)(param_1 + 0x112) == -1.0)) {
    (**(code **)(*(int *)param_1[0x10d] + 0xb4))(0);
  }
  else {
    (**(code **)(*(int *)param_1[0x10d] + 0xbc))((float)DAT_0065b3e0);
  }
  (**(code **)(*param_1 + 0x10c))(param_1[0x10d]);
  iVar1 = *param_1;
  uVar4 = (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar1 + 0xac))(uVar4);
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00569040(int *param_1)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  
  if (DAT_0065b3d4 != 0) {
    fVar2 = FUN_004ebfc0(*(int *)(DAT_0065b5cc + 0xd0));
    dVar1 = DAT_0065b3e0;
    if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)*(float *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x120);
    }
    if ((((double)fVar2 != *(double *)(param_1 + 0x10e)) || (dVar3 != *(double *)(param_1 + 0x110)))
       || (DAT_0065b3e0 != *(double *)(param_1 + 0x112))) {
      *(double *)(param_1 + 0x110) = dVar3;
      *(double *)(param_1 + 0x10e) = (double)fVar2;
      *(double *)(param_1 + 0x112) = dVar1;
      (**(code **)(*param_1 + 0x294))();
    }
  }
  return;
}


void __thiscall FUN_00569100(void *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar2 = (param_2 - 40.0) * -1.0;
  FUN_00592f80(0.0,0,param_1 - 40.0);
  DAT_0065b3e0 = (double)fVar2;
  FUN_00591070("DETAIL","angle selected = %f");
  (**(code **)(*(int *)this + 0x294))(uVar1);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005691d0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  void *this_00;
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  Size *pSVar8;
  void *pvVar9;
  int iVar10;
  uint in_stack_ffffff78;
  void *pvVar11;
  uint in_stack_ffffff90;
  byte *pbVar12;
  Size local_48 [8];
  void *local_40;
  Node *local_3c;
  undefined4 *local_38;
  void *local_34;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c86f0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_2;
  local_40 = this;
  local_3c = this;
  local_34 = this;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_IconTray::vftable;
  *(undefined4 *)((int)this + 0x428) = 0xffffffff;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined2 *)((int)this + 0x430) = 1;
  *(undefined1 *)((int)this + 0x432) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 1;
  *(undefined4 *)((int)this + 0x440) = 1;
  *(undefined4 *)((int)this + 0x444) = 0x20;
  *(undefined4 *)((int)this + 0x448) = 0x20;
  *(undefined4 *)((int)this + 0x44c) = 0x20;
  *(undefined4 *)((int)this + 0x450) = 0x20;
  *(undefined2 *)((int)this + 0x454) = 0;
  *(undefined1 *)((int)this + 0x456) = 0;
  *(undefined2 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  local_8 = 4;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  *(undefined1 *)((int)this + 0x2dc) = 1;
  pvVar11 = (void *)(in_stack_ffffff90 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"cellwidth",9);
  this_00 = (void *)((int)this + 0x290);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"cellwidth",9);
    pcVar3 = FUN_00557760(this_00,local_30,pvVar11);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x444) = iVar4;
    if (0xf < local_1c) {
      pvVar9 = local_30[0];
      if (0xfff < local_1c + 1) {
        pvVar9 = *(void **)((int)local_30[0] + -4);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar9);
    }
    *(undefined4 *)((int)this + 0x44c) = *(undefined4 *)((int)this + 0x444);
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"cellheight",10);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"cellheight",10);
    pcVar3 = FUN_00557760(this_00,local_30,pvVar11);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x448) = iVar4;
    if (0xf < local_1c) {
      pvVar9 = local_30[0];
      if (0xfff < local_1c + 1) {
        pvVar9 = *(void **)((int)local_30[0] + -4);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar9);
    }
    *(undefined4 *)((int)this + 0x450) = *(undefined4 *)((int)this + 0x448);
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"iconwidth",9);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"iconwidth",9);
    pcVar3 = FUN_00557760(this_00,local_30,pvVar11);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x44c) = iVar4;
    if (0xf < local_1c) {
      pvVar9 = local_30[0];
      if (0xfff < local_1c + 1) {
        pvVar9 = *(void **)((int)local_30[0] + -4);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar9);
    }
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"iconheight",10);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"iconheight",10);
    pcVar3 = FUN_00557760(this_00,local_30,pvVar11);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x450) = iVar4;
    if (0xf < local_1c) {
      pvVar9 = local_30[0];
      if (0xfff < local_1c + 1) {
        pvVar9 = *(void **)((int)local_30[0] + -4);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar9);
    }
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"showtext",8);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"showtext",8);
    uVar5 = FUN_00557620(this_00,pvVar11);
    *(char *)((int)this + 0x454) = (char)uVar5;
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"centreicon",10);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"centreicon",10);
    uVar5 = FUN_00557620(this_00,pvVar11);
    *(char *)((int)this + 0x459) = (char)uVar5;
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"centretext",10);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"centretext",10);
    uVar5 = FUN_00557620(this_00,pvVar11);
    *(char *)((int)this + 0x456) = (char)uVar5;
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"bottomcentretext",0x10);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"bottomcentretext",0x10);
    uVar5 = FUN_00557620(this_00,pvVar11);
    *(char *)((int)this + 0x455) = (char)uVar5;
  }
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"honourshipcolours",0x11);
  bVar2 = FUN_005576d0(this_00,pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"honourshipcolours",0x11);
    uVar5 = FUN_00557620(this_00,pvVar11);
    *(char *)((int)this + 0x458) = (char)uVar5;
  }
  pbVar12 = (byte *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"draghook",8);
  bVar2 = FUN_005576d0(this_00,pbVar12);
  if (bVar2) {
    *(undefined4 *)((int)this + 0x41c) = 300;
    pvVar11 = (void *)(in_stack_ffffff78 & 0xffffff00);
    FUN_00402690(&stack0xffffff78,"draghook",8);
    FUN_00557760(this_00,&stack0xffffff90,pvVar11);
    iVar4 = FUN_004eb4d0(pbVar12);
    *(int *)((int)this + 0x45c) = iVar4;
  }
  pvVar11 = (void *)((uint)pbVar12 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"noscroll",8);
  uVar5 = FUN_00557620(this_00,pvVar11);
  if ((char)uVar5 == '\0') {
    iVar4 = *(int *)((int)this + 0x444);
    *(undefined1 *)((int)this + 0x430) = 1;
    iVar6 = (local_38[4] + -0xd) / iVar4;
    *(int *)((int)this + 0x43c) = iVar6;
    iVar10 = *(int *)((int)this + 0x448);
    iVar7 = (int)local_38[5] / iVar10;
    *(int *)(local_3c + 0x440) = iVar7;
    *(int *)(local_3c + 0x434) = (iVar4 + 1) * iVar6 + 1;
    *(int *)(local_3c + 0x438) = (iVar10 + 1) * iVar7 + 1;
    this = local_3c;
  }
  else {
    *(undefined4 *)((int)this + 0x434) = *(undefined4 *)((int)this + 0x2a0);
    *(undefined4 *)((int)this + 0x438) = *(undefined4 *)((int)this + 0x2a4);
    *(undefined1 *)((int)this + 0x430) = 0;
    *(int *)((int)this + 0x440) = (int)local_38[5] / *(int *)((int)this + 0x444);
    *(int *)((int)this + 0x43c) = (int)local_38[4] / *(int *)((int)this + 0x448);
  }
  piVar1 = *(int **)((int)this + 0x3f0);
  *(int **)((int)this + 0x464) = piVar1;
  iVar4 = *piVar1;
  *(int *)((int)this + 0x460) = iVar4;
  if (iVar4 == *piVar1) {
    bVar2 = FUN_004de400(*(undefined4 *)((int)this + 0x3f4),(int *)((int)this + 0x468));
    if (!bVar2) goto LAB_00569994;
  }
  iVar4 = *(int *)((int)this + 0x46c);
  iVar10 = *(int *)((int)this + 0x468);
  if (iVar10 != iVar4) {
    do {
      FUN_0043bfa0(iVar10);
      iVar10 = iVar10 + 0x60;
    } while (iVar10 != iVar4);
    iVar10 = *(int *)((int)this + 0x468);
  }
  *(int *)((int)this + 0x46c) = iVar10;
  FUN_004de1e0(*(undefined4 *)((int)this + 0x3f4),(int *)((int)this + 0x468));
  (**(code **)(*(int *)this + 0x294))();
LAB_00569994:
  pSVar8 = (Size *)cocos2d::Size::Size(local_48,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar8);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_005699f0(void *this,byte param_1)

{
  FUN_00569a20(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00569a20(Node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c84a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_IconTray::vftable;
  FUN_00569c30((int)param_1);
  pvVar2 = *(void **)(param_1 + 0x48c);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x494) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00569c20;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x480);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x488) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00569c20;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x474);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x47c) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00569c20;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x468);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x46c);
    if (pvVar2 != pvVar1) {
      do {
        FUN_0043bfa0((int)pvVar2);
        pvVar2 = (void *)((int)pvVar2 + 0x60);
      } while (pvVar2 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x468);
    }
    pvVar1 = pvVar2;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x470) - (int)pvVar2) / 0x60) * 0x60)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1)))) {
LAB_00569c20:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00569c30(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x480);
  if (*(int *)(param_1 + 0x484) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x480) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x480);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x484) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x484) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x48c);
  if (*(int *)(param_1 + 0x490) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x48c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x48c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x490) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x490) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x474);
  if (*(int *)(param_1 + 0x478) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x474) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x474);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x478) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x478) = iVar2;
  if (*(int **)(param_1 + 0x498) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x498) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  return;
}


void __fastcall FUN_00569d50(int *param_1)

{
  float fVar1;
  Scale9Sprite *pSVar2;
  int *piVar3;
  int iVar4;
  Scale9Sprite *pSVar5;
  Texture2D *pTVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  basic_string<> *pbVar11;
  Ref *pRVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  void *pvVar18;
  float10 fVar19;
  void *in_stack_fffffeec;
  void *pvVar20;
  void *in_stack_ffffff00;
  uint in_stack_ffffff18;
  Color3B local_c0 [3];
  Color3B local_bd [3];
  Color3B local_ba [3];
  Color3B local_b7 [3];
  Size local_b4 [8];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  Scale9Sprite *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int *local_4c;
  int local_48;
  int local_44;
  float local_40;
  int *local_3c;
  Scale9Sprite *local_38;
  Scale9Sprite *local_34;
  Scale9Sprite *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c87d5;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_1;
  (**(code **)(*param_1 + 0x290))();
  local_4c = param_1 + 0x11a;
  if ((param_1[0x10a] == -1) || (param_1[0x10a] != (param_1[0x11b] - *local_4c) / 0x60)) {
    param_1[0x10b] = 0;
    param_1[0x10a] = (param_1[0x11b] - *local_4c) / 0x60;
  }
  pvVar20 = (void *)(in_stack_ffffff18 & 0xffffff00);
  FUN_00402690(&stack0xffffff18,"white.png",9);
  piVar3 = (int *)FUN_00591910(pvVar20);
  local_64 = 0;
  param_1[0x126] = (int)piVar3;
  local_60 = (Scale9Sprite *)0x0;
  local_8 = 0;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x126] + 0x48))();
  if ((char)param_1[0x116] != '\0') {
    (**(code **)(*(int *)param_1[0x126] + 0x25c))();
  }
  iVar15 = *(int *)param_1[0x126];
  iVar4 = (**(code **)(iVar15 + 0xb0))();
  local_54 = *(undefined4 *)(iVar4 + 4);
  (**(code **)(*(int *)local_3c[0x126] + 0xb0))();
  piVar3 = local_3c;
  (**(code **)(iVar15 + 0x3c))();
  (**(code **)(*piVar3 + 0x10c))();
  iVar15 = piVar3[0x10f];
  iVar4 = piVar3[0x110];
  local_68 = 0;
  local_54 = 0;
  pSVar5 = (Scale9Sprite *)0x0;
  if (0 < iVar15 * iVar4) {
    do {
      local_48 = (piVar3[0x111] + 1) * local_68 + 1;
      local_38 = (Scale9Sprite *)(piVar3[0x10b] * iVar15 + local_54);
      local_44 = (piVar3[0x112] + 1) * (iVar4 - (int)pSVar5) - piVar3[0x112];
      local_34 = pSVar5;
      if (*(char *)((int)piVar3 + 0x457) != '\0') {
        in_stack_ffffff00 = (void *)((uint)in_stack_ffffff00 & 0xffffff00);
        FUN_00402690(&stack0xffffff00,"white.png",9);
        local_30 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
        iVar15 = *(int *)local_30;
        iVar4 = (**(code **)(iVar15 + 0xb0))();
        local_50 = *(int *)(iVar4 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        (**(code **)(iVar15 + 0x3c))();
        pSVar5 = local_30;
        iVar15 = *(int *)local_30;
        cocos2d::Color3B::Color3B(local_b7,' ',' ',' ');
        (**(code **)(iVar15 + 0x25c))();
        (**(code **)(*(int *)pSVar5 + 0x48))();
        piVar3 = local_3c;
        in_stack_ffffff00 = (void *)0x0;
        (**(code **)(*local_3c + 0x108))();
        puVar8 = (undefined4 *)piVar3[0x121];
        if ((undefined4 *)piVar3[0x122] == puVar8) {
          FUN_00414080(piVar3 + 0x120,puVar8,&local_30);
        }
        else {
          *puVar8 = pSVar5;
          piVar3[0x121] = piVar3[0x121] + 4;
        }
      }
      iVar15 = local_68 + 1;
      local_60 = local_34 + 1;
      if (iVar15 < piVar3[0x10f]) {
        local_60 = local_34;
      }
      local_68 = 0;
      if (iVar15 < piVar3[0x10f]) {
        local_68 = iVar15;
      }
      if (local_38 < (Scale9Sprite *)((local_4c[1] - *local_4c) / 0x60)) {
        local_50 = (int)local_38 * 0x60;
        iVar15 = *(int *)(local_50 + *local_4c);
        if ((iVar15 == *(int *)piVar3[0x119]) && (-1 < iVar15)) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"GeneralBorder.png",0x11);
          local_8 = 1;
          pSVar5 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
          local_8 = 0xffffffff;
          local_34 = pSVar5;
          if (0xf < local_18) {
            pvVar20 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar20 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0056b027;
            FUN_005adb3f(pvVar20);
          }
          local_38 = (Scale9Sprite *)(**(code **)(*(int *)(pSVar5 + 0x278) + 0xc))();
          pTVar6 = this_0065b3fc;
          if (this_0065b3fc == (Texture2D *)0x0) {
            pTVar6 = (Texture2D *)FUN_005adb0f(0x10);
            this_0065b3fc = pTVar6;
            *(undefined4 *)(pTVar6 + 4) = 0x2600;
            *(undefined4 *)pTVar6 = 0x2600;
            *(undefined4 *)(pTVar6 + 8) = 0x812f;
            *(undefined4 *)(pTVar6 + 0xc) = 0x812f;
          }
          cocos2d::Texture2D::setTexParameters((Texture2D *)local_38,(_TexParams *)pTVar6);
          iVar15 = *(int *)pSVar5;
          cocos2d::Size::Size(local_b4,(float)piVar3[0x111],(float)piVar3[0x112]);
          (**(code **)(iVar15 + 0xac))();
          pSVar5 = local_34;
          local_74 = 0;
          local_70 = 0;
          local_8 = 2;
          (**(code **)(*(int *)local_34 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)pSVar5 + 0x48))();
          iVar15 = *(int *)pSVar5;
          cocos2d::Color3B::Color3B(local_bd,'\0',0xff,0xbf);
          (**(code **)(iVar15 + 0x25c))();
          pSVar5 = local_34;
          in_stack_ffffff00 = (void *)0x0;
          (**(code **)(*piVar3 + 0x108))();
          puVar8 = (undefined4 *)piVar3[0x124];
          if ((undefined4 *)piVar3[0x125] == puVar8) {
            FUN_00414080(piVar3 + 0x123,puVar8,&local_34);
          }
          else {
            *puVar8 = pSVar5;
            piVar3[0x124] = piVar3[0x124] + 4;
          }
        }
        in_stack_ffffff00 = (void *)((uint)in_stack_ffffff00 & 0xffffff00);
        FUN_00402690(&stack0xffffff00,"white.png",9);
        pSVar5 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
        local_30 = pSVar5;
        (**(code **)(*(int *)pSVar5 + 0x25c))();
        iVar15 = *(int *)pSVar5;
        iVar4 = (**(code **)(iVar15 + 0xb0))();
        local_38 = *(Scale9Sprite **)(iVar4 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        pSVar5 = local_30;
        (**(code **)(iVar15 + 0x3c))();
        local_38 = (Scale9Sprite *)(float)local_48;
        (**(code **)(*(int *)pSVar5 + 0x48))();
        piVar3 = local_3c;
        in_stack_ffffff00 = (void *)0x1;
        (**(code **)(*local_3c + 0x108))();
        puVar8 = (undefined4 *)piVar3[0x121];
        if ((undefined4 *)piVar3[0x122] == puVar8) {
          FUN_00414080(piVar3 + 0x120,puVar8,&local_30);
        }
        else {
          *puVar8 = pSVar5;
          piVar3[0x121] = piVar3[0x121] + 4;
        }
        iVar15 = local_50;
        if ((char)piVar3[0x115] != '\0') {
          iVar9 = *local_4c;
          iVar4 = iVar9 + local_50;
          pbVar16 = (byte *)(iVar4 + 0x20);
          if (0xf < *(uint *)(iVar9 + 0x34 + local_50)) {
            pbVar16 = *(byte **)(iVar4 + 0x20);
          }
          uVar14 = FUN_004031f0(pbVar16,*(uint *)(iVar4 + 0x30),(byte *)&PTR_005ce008,0);
          if ((char)uVar14 == '\0') {
            if (*(char *)((int)piVar3 + 0x455) == '\0') {
              if (*(char *)((int)piVar3 + 0x456) != '\0') {
                FUN_004024e0(&stack0xffffff00,(undefined4 *)(iVar15 + 0x20 + iVar9));
                pRVar12 = FUN_0055cb00((Node)0x0,in_stack_ffffff00);
                local_84 = 0x3f000000;
                local_80 = 0x3f000000;
                local_8 = 4;
                local_34 = (Scale9Sprite *)pRVar12;
                (**(code **)(*(int *)pRVar12 + 0xa0))();
                goto LAB_0056a57d;
              }
              FUN_004024e0(&stack0xffffff00,(undefined4 *)(iVar9 + 0x20 + iVar15));
              pRVar12 = FUN_0055ca10(piVar3[0x111] + -2,piVar3[0x112] + -2,(Node)0x0,
                                     in_stack_ffffff00);
              local_8c = 0;
              local_88 = 0;
              local_8 = 5;
              local_34 = (Scale9Sprite *)pRVar12;
              (**(code **)(*(int *)pRVar12 + 0xa0))();
              local_8 = 0xffffffff;
              (**(code **)(*(int *)pRVar12 + 0x48))();
            }
            else {
              FUN_004024e0(&stack0xffffff00,(undefined4 *)(iVar15 + 0x20 + iVar9));
              pRVar12 = FUN_0055cb00((Node)0x0,in_stack_ffffff00);
              local_7c = 0x3f000000;
              local_78 = 0;
              local_8 = 3;
              local_34 = (Scale9Sprite *)pRVar12;
              (**(code **)(*(int *)pRVar12 + 0xa0))();
LAB_0056a57d:
              local_8 = 0xffffffff;
              (**(code **)(*(int *)pRVar12 + 0x48))();
              iVar15 = local_50;
            }
            if (*(char *)(iVar15 + 0x5e + *local_4c) != '\0') {
              (**(code **)(*(int *)pRVar12 + 0x244))();
            }
            in_stack_ffffff00 = (void *)0x56a670;
            (**(code **)(*piVar3 + 0x108))();
            puVar8 = (undefined4 *)piVar3[0x11e];
            if ((undefined4 *)piVar3[0x11f] == puVar8) {
              FUN_00414080(piVar3 + 0x11d,puVar8,&local_34);
            }
            else {
              *puVar8 = pRVar12;
              piVar3[0x11e] = piVar3[0x11e] + 4;
            }
          }
        }
        iVar9 = *local_4c;
        iVar4 = iVar15 + iVar9;
        pbVar16 = (byte *)(iVar4 + 4);
        if (0xf < *(uint *)(iVar15 + 0x18 + iVar9)) {
          pbVar16 = *(byte **)(iVar4 + 4);
        }
        uVar14 = FUN_004031f0(pbVar16,*(uint *)(iVar4 + 0x14),(byte *)&PTR_005ce008,0);
        if ((char)uVar14 == '\0') {
          FUN_004024e0(&stack0xffffff00,(undefined4 *)(iVar9 + 4 + iVar15));
          pSVar5 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
          local_30 = pSVar5;
          if (*(char *)((int)piVar3 + 0x459) == '\0') {
            pfVar7 = (float *)(**(code **)(*(int *)pSVar5 + 0xb0))();
            if ((*pfVar7 == (float)piVar3[0x113]) &&
               (iVar15 = (**(code **)(*(int *)pSVar5 + 0xb0))(),
               *(float *)(iVar15 + 4) == (float)piVar3[0x114])) {
              pfVar7 = (float *)(**(code **)(*(int *)pSVar5 + 0xb0))();
              iVar15 = (**(code **)(*(int *)pSVar5 + 0xb0))();
              if (*pfVar7 < *(float *)(iVar15 + 4) || *pfVar7 == *(float *)(iVar15 + 4)) {
                iVar15 = *(int *)pSVar5;
                local_38 = (Scale9Sprite *)(float)piVar3[0x114];
                local_34 = (Scale9Sprite *)(float)piVar3[0x114];
                (**(code **)(iVar15 + 0xb0))();
                (**(code **)(*(int *)pSVar5 + 0xb0))();
                (**(code **)(iVar15 + 0x3c))();
                iVar15 = *(int *)pSVar5;
                pfVar7 = (float *)(**(code **)(iVar15 + 0xb0))();
                local_34 = (Scale9Sprite *)(*pfVar7 * 0.5);
                fVar19 = (float10)(**(code **)(*(int *)pSVar5 + 0x44))();
                local_38 = (Scale9Sprite *)(float)fVar19;
LAB_0056aa71:
                (**(code **)(iVar15 + 0x48))();
                piVar3 = local_3c;
              }
              else {
                iVar15 = *(int *)pSVar5;
                puVar8 = (undefined4 *)(**(code **)(iVar15 + 0xb0))();
                local_34 = (Scale9Sprite *)*puVar8;
                (**(code **)(*(int *)local_30 + 0xb0))();
                (**(code **)(iVar15 + 0x3c))();
                pSVar5 = local_30;
                (**(code **)(*(int *)local_30 + 0x48))();
                piVar3 = local_3c;
              }
            }
            else {
              pfVar7 = (float *)(**(code **)(*(int *)pSVar5 + 0xb0))();
              iVar15 = (**(code **)(*(int *)pSVar5 + 0xb0))();
              if (*pfVar7 < *(float *)(iVar15 + 4) || *pfVar7 == *(float *)(iVar15 + 4)) {
                iVar15 = *(int *)pSVar5;
                local_34 = (Scale9Sprite *)(float)piVar3[0x114];
                local_40 = (float)piVar3[0x114];
                (**(code **)(iVar15 + 0xb0))();
                (**(code **)(*(int *)pSVar5 + 0xb0))();
                (**(code **)(iVar15 + 0x3c))();
                iVar15 = *(int *)pSVar5;
                pfVar7 = (float *)(**(code **)(iVar15 + 0xb0))();
                local_34 = (Scale9Sprite *)(*pfVar7 * 0.5);
                fVar19 = (float10)(**(code **)(*(int *)pSVar5 + 0x44))();
                local_40 = (float)fVar19;
                goto LAB_0056aa71;
              }
              iVar15 = *(int *)pSVar5;
              puVar8 = (undefined4 *)(**(code **)(iVar15 + 0xb0))();
              local_34 = (Scale9Sprite *)*puVar8;
              (**(code **)(*(int *)local_30 + 0xb0))();
              (**(code **)(iVar15 + 0x3c))();
              pSVar5 = local_30;
              (**(code **)(*(int *)local_30 + 0x48))();
              piVar3 = local_3c;
            }
          }
          else {
            local_94 = 0x3f000000;
            local_90 = 0x3f000000;
            local_8 = 6;
            (**(code **)(*(int *)pSVar5 + 0xa0))();
            local_8 = 0xffffffff;
            (**(code **)(*(int *)pSVar5 + 0x48))();
          }
          iVar15 = local_50;
          if (*(char *)(local_50 + 0x5e + *local_4c) != '\0') {
            (**(code **)(*(int *)pSVar5 + 0x244))();
          }
          in_stack_ffffff00 = (void *)0x56aaaa;
          (**(code **)(*piVar3 + 0x108))();
          puVar8 = (undefined4 *)piVar3[0x121];
          if ((undefined4 *)piVar3[0x122] == puVar8) {
            piVar17 = piVar3 + 0x120;
            FUN_00414080(piVar17,puVar8,&local_30);
          }
          else {
            *puVar8 = pSVar5;
            piVar17 = piVar3 + 0x120;
            piVar3[0x121] = piVar3[0x121] + 4;
          }
        }
        else {
          piVar17 = piVar3 + 0x120;
        }
        iVar4 = *(int *)(iVar15 + 0x50 + *local_4c);
        if ((iVar4 != -999) && (iVar4 != 0)) {
          FUN_00591e00(&stack0xffffff00,"`$%dc");
          local_34 = (Scale9Sprite *)FUN_0055cb00((Node)0x0,in_stack_ffffff00);
          local_9c = 0x3f800000;
          local_98 = 0x3f800000;
          local_8 = 7;
          (**(code **)(*(int *)local_34 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)local_34 + 0x48))();
          in_stack_ffffff00 = (void *)0x56aba8;
          (**(code **)(*piVar3 + 0x108))();
          puVar8 = (undefined4 *)piVar3[0x11e];
          if ((undefined4 *)piVar3[0x11f] == puVar8) {
            FUN_00414080(piVar3 + 0x11d,puVar8,&local_34);
          }
          else {
            *puVar8 = local_34;
            piVar3[0x11e] = piVar3[0x11e] + 4;
          }
        }
        if (-1 < *(int *)(*local_4c + 0x1c + iVar15)) {
          FUN_00591e00(&stack0xffffff00,"`%%x%d");
          local_34 = (Scale9Sprite *)FUN_0055cb00((Node)0x0,in_stack_ffffff00);
          local_a4 = 0x3f800000;
          local_a0 = 0;
          local_8 = 8;
          (**(code **)(*(int *)local_34 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)local_34 + 0x48))();
          in_stack_ffffff00 = (void *)0x56ac82;
          (**(code **)(*piVar3 + 0x108))();
          puVar8 = (undefined4 *)piVar3[0x11e];
          if ((undefined4 *)piVar3[0x11f] == puVar8) {
            FUN_00414080(piVar3 + 0x11d,puVar8,&local_34);
          }
          else {
            *puVar8 = local_34;
            piVar3[0x11e] = piVar3[0x11e] + 4;
          }
        }
        fVar1 = *(float *)(iVar15 + 0x54 + *local_4c);
        if (fVar1 != -1.0) {
          local_34 = (Scale9Sprite *)(float)(piVar3[0x111] + -4);
          pSVar5 = (Scale9Sprite *)((float)local_34 * fVar1);
          if (1.0 <= (float)pSVar5) {
            local_38 = local_34;
            if ((float)pSVar5 <= (float)local_34) {
              local_38 = pSVar5;
            }
          }
          else {
            local_38 = (Scale9Sprite *)0x0;
          }
          in_stack_ffffff00 = (void *)((uint)in_stack_ffffff00 & 0xffffff00);
          FUN_00402690(&stack0xffffff00,"white.png",9);
          local_30 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
          iVar15 = *(int *)local_30;
          cocos2d::Color3B::Color3B(local_c0,'\0','\0','\0');
          (**(code **)(iVar15 + 0x25c))();
          iVar15 = *(int *)local_30;
          iVar4 = (**(code **)(iVar15 + 0xb0))();
          local_40 = *(float *)(iVar4 + 4);
          (**(code **)(*(int *)local_30 + 0xb0))();
          (**(code **)(iVar15 + 0x3c))();
          local_ac = 0;
          local_a8 = 0x3f800000;
          local_8 = 9;
          (**(code **)(*(int *)local_30 + 0xa0))();
          local_8 = 0xffffffff;
          iVar15 = local_48 + 2;
          in_stack_ffffff00 = (void *)(float)iVar15;
          (**(code **)(*(int *)local_30 + 0x48))();
          (**(code **)(*piVar3 + 0x108))();
          puVar8 = (undefined4 *)piVar17[1];
          if ((undefined4 *)piVar17[2] == puVar8) {
            FUN_00414080(piVar17,puVar8,&local_30);
          }
          else {
            *puVar8 = local_30;
            piVar17[1] = piVar17[1] + 4;
          }
          if (0.0 < (float)local_38) {
            in_stack_ffffff00 = (void *)((uint)in_stack_ffffff00 & 0xffffff00);
            FUN_00402690(&stack0xffffff00,"white.png",9);
            pSVar5 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
            local_30 = pSVar5;
            (**(code **)(*(int *)pSVar5 + 0x25c))();
            iVar4 = *(int *)pSVar5;
            iVar9 = (**(code **)(iVar4 + 0xb0))();
            local_40 = *(float *)(iVar9 + 4);
            (**(code **)(*(int *)local_30 + 0xb0))();
            (**(code **)(iVar4 + 0x3c))();
            pSVar5 = local_30;
            local_5c = 0;
            local_58 = 0x3f800000;
            local_8 = 10;
            (**(code **)(*(int *)local_30 + 0xa0))();
            pSVar2 = local_30;
            piVar3 = local_3c;
            local_8 = 0xffffffff;
            in_stack_ffffff00 = (void *)(float)iVar15;
            (**(code **)(*(int *)pSVar5 + 0x48))();
            (**(code **)(*piVar3 + 0x108))();
            puVar8 = (undefined4 *)piVar17[1];
            if ((undefined4 *)piVar17[2] == puVar8) goto LAB_0056af59;
            *puVar8 = pSVar2;
            piVar17[1] = piVar17[1] + 4;
          }
        }
      }
      else {
        in_stack_ffffff00 = (void *)((uint)in_stack_ffffff00 & 0xffffff00);
        FUN_00402690(&stack0xffffff00,"white.png",9);
        pSVar5 = (Scale9Sprite *)FUN_00591910(in_stack_ffffff00);
        iVar15 = *(int *)pSVar5;
        local_30 = pSVar5;
        cocos2d::Color3B::Color3B(local_ba,'\0','\0','\0');
        (**(code **)(iVar15 + 0x25c))();
        iVar15 = *(int *)pSVar5;
        iVar4 = (**(code **)(iVar15 + 0xb0))();
        local_38 = *(Scale9Sprite **)(iVar4 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        pSVar5 = local_30;
        (**(code **)(iVar15 + 0x3c))();
        (**(code **)(*(int *)pSVar5 + 0x48))();
        piVar3 = local_3c;
        in_stack_ffffff00 = (void *)0x0;
        (**(code **)(*local_3c + 0x108))();
        puVar8 = (undefined4 *)piVar3[0x121];
        piVar17 = piVar3 + 0x120;
        if ((undefined4 *)piVar3[0x122] == puVar8) {
LAB_0056af59:
          FUN_00414080(piVar17,puVar8,&local_30);
        }
        else {
          *puVar8 = pSVar5;
          piVar3[0x121] = piVar3[0x121] + 4;
        }
      }
      iVar15 = piVar3[0x10f];
      iVar4 = piVar3[0x110];
      local_54 = local_54 + 1;
      pSVar5 = local_60;
    } while (local_54 < iVar15 * iVar4);
  }
  piVar17 = local_4c;
  if ((char)piVar3[0x10c] == '\0') goto LAB_0056b51d;
  if (((uint)(iVar15 * iVar4) < (uint)((local_4c[1] - *local_4c) / 0x60)) && (0 < piVar3[0x10b])) {
    pcVar10 = "%c_Button_Depressed.png";
    if (*(char *)((int)piVar3 + 0x431) == '\0') {
      pcVar10 = "%c_Button_Undepressed.png";
    }
    pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar10);
    local_8 = 0xb;
  }
  else {
    pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 0xc;
  }
  pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar11);
  local_8 = 0xffffffff;
  local_30 = pSVar5;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0056b027;
    FUN_005adb3f(pvVar20);
  }
  local_5c = 0;
  local_58 = 0x3f800000;
  local_8 = 0xd;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar5 + 0x48))();
  iVar15 = *(int *)pSVar5;
  cocos2d::Size::Size(local_b4,12.0,12.0);
  (**(code **)(iVar15 + 0xac))();
  pSVar5 = local_30;
  (**(code **)(*piVar3 + 0x10c))();
  puVar8 = (undefined4 *)piVar3[0x121];
  if ((undefined4 *)piVar3[0x122] == puVar8) {
    FUN_00414080(piVar3 + 0x120,puVar8,&local_30);
  }
  else {
    *puVar8 = pSVar5;
    piVar3[0x121] = piVar3[0x121] + 4;
  }
  FUN_00591e00(&stack0xfffffeec,"`%c`a1");
  pRVar12 = FUN_0055cb00((Node)0x0,in_stack_fffffeec);
  local_5c = 0x3f000000;
  local_58 = 0x3f000000;
  local_8 = 0xe;
  local_34 = (Scale9Sprite *)pRVar12;
  (**(code **)(*(int *)pRVar12 + 0xa0))();
  local_8 = 0xffffffff;
  iVar15 = *(int *)pRVar12;
  (**(code **)(*(int *)local_30 + 0x74))();
  (**(code **)(*(int *)local_30 + 0x6c))();
  (**(code **)(iVar15 + 0x48))();
  pSVar5 = local_34;
  pvVar20 = (void *)0x56b1f4;
  (**(code **)(*piVar3 + 0x108))();
  puVar8 = (undefined4 *)piVar3[0x11e];
  if ((undefined4 *)piVar3[0x11f] == puVar8) {
    FUN_00414080(piVar3 + 0x11d,puVar8,&local_34);
  }
  else {
    *puVar8 = pSVar5;
    piVar3[0x11e] = piVar3[0x11e] + 4;
  }
  uVar14 = (piVar17[1] - *piVar17) / 0x60;
  if ((uint)(piVar3[0x10f] * piVar3[0x110]) < uVar14) {
    uVar13 = uVar14 / (uint)piVar3[0x10f];
    if (piVar3[0x10f] * uVar13 < uVar14) {
      uVar13 = uVar13 + 1;
    }
    if ((int)uVar13 <= piVar3[0x10b] + piVar3[0x110]) goto LAB_0056b2e3;
    pcVar10 = "%c_Button_Depressed.png";
    if (*(char *)((int)piVar3 + 0x432) == '\0') {
      pcVar10 = "%c_Button_Undepressed.png";
    }
    pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar10);
    local_8 = 0xf;
    local_30 = cocos2d::ui::Scale9Sprite::create(pbVar11);
    if (0xf < local_18) {
      pvVar18 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar18 = *(void **)((int)local_2c[0] + -4);
        uVar14 = (int)local_2c[0] + (-4 - (int)pvVar18);
        goto joined_r0x0056b33d;
      }
      goto LAB_0056b343;
    }
  }
  else {
LAB_0056b2e3:
    pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8 = 0x10;
    local_30 = cocos2d::ui::Scale9Sprite::create(pbVar11);
    if (0xf < local_18) {
      pvVar18 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar18 = *(void **)((int)local_2c[0] + -4);
        uVar14 = (int)local_2c[0] + (-4 - (int)pvVar18);
joined_r0x0056b33d:
        if (0x1f < uVar14) {
LAB_0056b027:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_0056b343:
      local_8 = 0xffffffff;
      FUN_005adb3f(pvVar18);
    }
  }
  pSVar5 = local_30;
  uVar14 = (piVar17[1] - *piVar17) / 0x60;
  if ((uint)(piVar3[0x10f] * piVar3[0x110]) < uVar14) {
    uVar13 = uVar14 / (uint)piVar3[0x10f];
    if (piVar3[0x10f] * uVar13 < uVar14) {
      uVar13 = uVar13 + 1;
    }
    if ((int)uVar13 <= piVar3[0x10b] + piVar3[0x110]) goto LAB_0056b3b3;
    local_54 = 0x37;
    if (*(char *)((int)piVar3 + 0x432) != '\0') {
      local_54 = 0x25;
    }
  }
  else {
LAB_0056b3b3:
    local_54 = 0x38;
  }
  local_5c = 0;
  local_58 = 0;
  local_8 = 0x11;
  (**(code **)(*(int *)local_30 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar5 + 0x48))();
  iVar15 = *(int *)pSVar5;
  cocos2d::Size::Size(local_b4,12.0,12.0);
  (**(code **)(iVar15 + 0xac))();
  (**(code **)(*piVar3 + 0x10c))();
  puVar8 = (undefined4 *)piVar3[0x121];
  if ((undefined4 *)piVar3[0x122] == puVar8) {
    FUN_00414080(piVar3 + 0x120,puVar8,&local_30);
    pSVar5 = local_30;
  }
  else {
    *puVar8 = pSVar5;
    piVar3[0x121] = piVar3[0x121] + 4;
  }
  FUN_00591e00(&stack0xfffffeec,"`%c`a2");
  pRVar12 = FUN_0055cb00((Node)0x0,pvVar20);
  local_6c = 0x3f000000;
  local_68 = 0x3f000000;
  local_8 = 0x12;
  local_34 = (Scale9Sprite *)pRVar12;
  (**(code **)(*(int *)pRVar12 + 0xa0))();
  local_8 = 0xffffffff;
  iVar15 = *(int *)pRVar12;
  (**(code **)(*(int *)pSVar5 + 0x74))();
  (**(code **)(*(int *)pSVar5 + 0x6c))();
  pSVar5 = local_34;
  (**(code **)(iVar15 + 0x48))();
  (**(code **)(*piVar3 + 0x108))();
  puVar8 = (undefined4 *)piVar3[0x11e];
  if ((undefined4 *)piVar3[0x11f] == puVar8) {
    FUN_00414080(piVar3 + 0x11d,puVar8,&local_34);
  }
  else {
    *puVar8 = pSVar5;
    piVar3[0x11e] = piVar3[0x11e] + 4;
  }
LAB_0056b51d:
  piVar3[0x118] = *(int *)piVar3[0x119];
  *(undefined1 *)piVar3[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0056b550(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1[0x118] == *(int *)param_1[0x119]) &&
     (bVar2 = FUN_004de400(param_1[0xfd],param_1 + 0x11a), !bVar2)) {
    return;
  }
  iVar1 = param_1[0x11b];
  iVar3 = param_1[0x11a];
  if (iVar3 != iVar1) {
    do {
      FUN_0043bfa0(iVar3);
      iVar3 = iVar3 + 0x60;
    } while (iVar3 != iVar1);
    iVar3 = param_1[0x11a];
  }
  param_1[0x11b] = iVar3;
  FUN_004de1e0(param_1[0xfd],param_1 + 0x11a);
  (**(code **)(*param_1 + 0x294))();
  return;
}


void __thiscall FUN_0056b5d0(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)((int)this + 0x454) == '\0') {
    iVar1 = (int)param_1;
    if ((iVar1 < 0) || (*(int *)((int)this + 0x2a0) < iVar1)) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 / (*(int *)((int)this + 0x444) + 1);
    }
    iVar2 = (int)param_2;
    if ((iVar2 < 0) || (*(int *)((int)this + 0x2a4) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / (*(int *)((int)this + 0x448) + 1);
    }
    uVar4 = (*(int *)((int)this + 0x42c) + iVar2) * *(int *)((int)this + 0x43c) + iVar1;
    if (uVar4 < (uint)((*(int *)((int)this + 0x46c) - *(int *)((int)this + 0x468)) / 0x60)) {
      pbVar5 = (byte *)(*(int *)((int)this + 0x468) + 0x20 + uVar4 * 0x60);
      pbVar3 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar3 = *(byte **)pbVar5;
      }
      uVar4 = FUN_004031f0(pbVar3,*(uint *)(pbVar5 + 0x10),(byte *)&PTR_005ce008,0);
      if ((char)uVar4 == '\0') {
        FUN_00591e00(&stack0xffffffc0,"`%c%s");
        FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffc0);
        ExceptionList = local_10;
        return;
      }
    }
    iVar1 = *(int *)((int)this + 0x278);
    pbVar3 = (byte *)(iVar1 + 0xfc);
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      pbVar3 = *(byte **)(iVar1 + 0xfc);
    }
    uVar4 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0x10c),(byte *)&PTR_005ce008,0);
    if ((char)uVar4 == '\0') {
      FUN_005542e0(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056b770(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = *(int *)(param_1 + 0x278);
  pbVar4 = (byte *)(iVar1 + 0xfc);
  pbVar3 = pbVar4;
  if (0xf < *(uint *)(iVar1 + 0x110)) {
    pbVar3 = *(byte **)pbVar4;
  }
  uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      pbVar4 = *(byte **)pbVar4;
    }
    *pbVar4 = 0;
  }
  return;
}


void __thiscall FUN_0056b7c0(void *this,float param_1,float param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar7 = '\0';
  cVar1 = *(char *)((int)this + 0x431);
  cVar2 = *(char *)((int)this + 0x432);
  if ((((((uint)(*(int *)((int)this + 0x440) * *(int *)((int)this + 0x43c)) <
          (uint)((*(int *)((int)this + 0x46c) - *(int *)((int)this + 0x468)) / 0x60)) &&
        (0 < *(int *)((int)this + 0x42c))) &&
       ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
      ((param_1 < (float)*(int *)((int)this + 0x2a0) && (param_2 < 12.0)))) &&
     (cVar7 = '\0', 0.0 <= param_2)) {
    cVar7 = '\x01';
  }
  uVar6 = FUN_0056bb60((int)this);
  bVar3 = false;
  if ((((char)uVar6 != '\0') && ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
     ((param_1 < (float)*(int *)((int)this + 0x2a0) &&
      (param_2 < (float)*(int *)((int)this + 0x2a4))))) {
    bVar3 = (float)(*(int *)((int)this + 0x2a4) + -0xc) <= param_2;
  }
  if ((cVar7 != cVar1) || (cVar8 = cVar1, cVar4 = cVar2, bVar3 != (bool)cVar2)) {
    *(char *)((int)this + 0x431) = cVar7;
    *(bool *)((int)this + 0x432) = bVar3;
    cVar8 = cVar7;
    cVar4 = bVar3;
  }
  if ((cVar1 != cVar8) || (cVar2 != cVar4)) {
    (**(code **)(*(int *)this + 0x294))(uVar5);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0056b930(void *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7329;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(char *)((int)this + 0x430) == '\0') || (param_1 < (float)(*(int *)((int)this + 0x434) + 1))
     ) {
    iVar3 = (int)param_1;
    if ((iVar3 < 0) || (*(int *)((int)this + 0x2a0) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((int)this + 0x444) + 1);
    }
    iVar4 = (int)param_2;
    if ((iVar4 < 0) || (*(int *)((int)this + 0x2a4) < iVar4)) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar4 / (*(int *)((int)this + 0x448) + 1);
    }
    uVar1 = (*(int *)((int)this + 0x42c) + iVar4) * *(int *)((int)this + 0x43c) + iVar3;
    iVar3 = *(int *)((int)this + 0x468);
    if ((uint)((*(int *)((int)this + 0x46c) - iVar3) / 0x60) <= uVar1) {
      FUN_00591070("DETAIL","Invalid option to selected.");
      ExceptionList = local_10;
      return;
    }
    iVar4 = uVar1 * 0x60;
    if (*(char *)(iVar4 + 0x5e + iVar3) == '\0') {
      iVar3 = *(int *)(iVar4 + iVar3);
      if (**(int **)((int)this + 0x464) == iVar3) {
        iVar3 = -1;
      }
      **(int **)((int)this + 0x464) = iVar3;
      FUN_004dd240(*(undefined4 *)((int)this + 0x3f4));
      (**(code **)(*(int *)this + 0x294))();
    }
    ExceptionList = local_10;
    return;
  }
  if (*(char *)((int)this + 0x431) == '\0') {
    if (*(char *)((int)this + 0x432) == '\0') goto LAB_0056b9f5;
    uVar2 = FUN_0056bb60((int)this);
    if ((char)uVar2 == '\0') goto LAB_0056b9f5;
    *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + 1;
  }
  else {
    if (((uint)((*(int *)((int)this + 0x46c) - *(int *)((int)this + 0x468)) / 0x60) <=
         (uint)(*(int *)((int)this + 0x440) * *(int *)((int)this + 0x43c))) ||
       (*(int *)((int)this + 0x42c) < 1)) goto LAB_0056b9f5;
    *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + -1;
  }
  (**(code **)(*(int *)this + 0x294))(uVar1);
LAB_0056b9f5:
  *(undefined2 *)((int)this + 0x431) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056bb00(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = param_1[0x9e];
  pbVar4 = (byte *)(iVar1 + 0xfc);
  pbVar3 = pbVar4;
  if (0xf < *(uint *)(iVar1 + 0x110)) {
    pbVar3 = *(byte **)pbVar4;
  }
  uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      pbVar4 = *(byte **)pbVar4;
    }
    *pbVar4 = 0;
  }
  *(undefined2 *)((int)param_1 + 0x431) = 0;
                    // WARNING: Could not recover jumptable at 0x0056bb51. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


uint __fastcall FUN_0056bb60(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x43c);
  uVar3 = uVar1 * *(int *)(param_1 + 0x440);
  uVar2 = (*(int *)(param_1 + 0x46c) - *(int *)(param_1 + 0x468)) / 0x60;
  if (uVar3 < uVar2) {
    uVar3 = uVar2 / uVar1;
    if (uVar1 * uVar3 < uVar2) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)(param_1 + 0x42c) + *(int *)(param_1 + 0x440) < (int)uVar3) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


undefined1 * __thiscall FUN_0056bbc0(void *this,undefined1 *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1b29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((*(int *)((int)this + 0x45c) != 0) &&
      (iVar1 = *(int *)(DAT_0065b5cc + 0xd0), *(int *)(iVar1 + 0xd4) == 3)) &&
     (*(int *)(iVar1 + 0xf8) == 2)) {
    iVar2 = (int)param_2;
    if ((iVar2 < 0) || (*(int *)((int)this + 0x2a0) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / (*(int *)((int)this + 0x444) + 1);
    }
    iVar3 = (int)param_3;
    if ((iVar3 < 0) || (*(int *)((int)this + 0x2a4) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((int)this + 0x448) + 1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1f8) + 0xc +
                    ((*(int *)((int)this + 0x42c) + iVar3) * *(int *)((int)this + 0x43c) + iVar2) *
                    4);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) &&
       (piVar4 = FUN_004a84a0(*(int *)(iVar1 + 4)), piVar4 != (int *)0x0)) {
      FUN_00591e00(param_1,"%s_Detail.png");
      ExceptionList = local_10;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  ExceptionList = local_10;
  return param_1;
}


int __thiscall FUN_0056bcf0(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)((int)this + 0x45c) == 0) ||
      (iVar1 = *(int *)(DAT_0065b5cc + 0xd0), *(int *)(iVar1 + 0xd4) != 3)) ||
     (*(int *)(iVar1 + 0xf8) != 2)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)param_1;
    if ((iVar2 < 0) || (*(int *)((int)this + 0x2a0) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / (*(int *)((int)this + 0x444) + 1);
    }
    iVar3 = (int)param_2;
    if ((iVar3 < 0) || (*(int *)((int)this + 0x2a4) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((int)this + 0x448) + 1);
    }
    iVar2 = (*(int *)((int)this + 0x42c) + iVar3) * *(int *)((int)this + 0x43c) + iVar2;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1f8) + 0xc + iVar2 * 4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) {
      return -1;
    }
  }
  return iVar2;
}


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_0056bda0(void *this,undefined4 param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 auStack_8c [5];
  undefined4 uStack_78;
  int *piStack_74;
  double *pdStack_70;
  double *pdStack_6c;
  double *pdStack_68;
  uint uStack_64;
  double local_58;
  double local_50 [2];
  int local_40;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8811;
  local_10 = ExceptionList;
  uStack_64 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uStack_64;
  if (((*(int *)((int)this + 0x45c) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3))
     && (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)) {
    local_40 = (int)param_3;
    if ((local_40 < 0) || (*(int *)((int)this + 0x2a0) < local_40)) {
      local_40 = -1;
    }
    else {
      local_40 = local_40 / (*(int *)((int)this + 0x444) + 1);
    }
    iVar1 = (int)param_4;
    if ((iVar1 < 0) || (*(int *)((int)this + 0x2a4) < iVar1)) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 / (*(int *)((int)this + 0x448) + 1);
    }
    iVar1 = (*(int *)((int)this + 0x42c) + iVar1) * *(int *)((int)this + 0x43c) + local_40;
    FUN_004ea270(auStack_8c,*(undefined4 *)((int)this + 0x45c));
    FUN_00417860(local_3c);
    local_8._0_1_ = 1;
    if (local_18 != (int *)0x0) {
      pdStack_68 = local_50 + 1;
      local_58 = (double)param_2;
      pdStack_6c = local_50;
      local_40 = *(int *)(DAT_0065b5cc + 0xd0);
      pdStack_70 = &local_58;
      piStack_74 = &local_40;
      local_50[0] = (double)iVar1;
      local_50[1] = 0.0;
      uStack_78 = 0x56bec7;
      (**(code **)(*local_18 + 8))();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_18 != (int *)0x0) {
      pdStack_68 = (double *)(uint)(local_18 != local_3c);
      pdStack_6c = (double *)0x56bee3;
      (**(code **)(*local_18 + 0x10))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall
FUN_0056bf00(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,void *param_6)

{
  Size *pSVar1;
  void *pvVar2;
  uint in_stack_0000002c;
  Size local_1c [4];
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &this_005c8888;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  FUN_00553370(this,param_1,param_2,param_3);
  local_8._0_1_ = 1;
  *(undefined4 *)((int)this + 0x428) = param_4;
  *(undefined ***)this = UI_Image::vftable;
  *(undefined4 *)((int)this + 0x42c) = param_5;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  FUN_004024e0((void *)((int)this + 0x438),&param_6);
  local_8._0_1_ = 2;
  FUN_004024e0((void *)((int)this + 0x450),&param_6);
  *(undefined1 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0xf;
  *(undefined1 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  pSVar1 = (Size *)cocos2d::Size::Size(local_1c,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar1);
  FUN_0056c860(this,0.0);
  if (0xf < in_stack_0000002c) {
    pvVar2 = param_6;
    if (0xfff < in_stack_0000002c + 1) {
      pvVar2 = *(void **)((int)param_6 + -4);
      if (0x1f < (uint)((int)param_6 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}
