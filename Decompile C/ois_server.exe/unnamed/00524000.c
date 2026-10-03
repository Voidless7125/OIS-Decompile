#include "../ois_server.exe.h"


Node * __thiscall FUN_00524010(void *this,byte param_1)

{
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00524040(int param_1)

{
  Director *pDVar1;
  
  *(undefined1 *)(param_1 + 0x285) = 0;
  pDVar1 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::removeEventListener
            (*(EventDispatcher **)(pDVar1 + 0x58),*(EventListener **)(param_1 + 0x294));
  *(undefined4 *)(param_1 + 0x294) = 0;
  FUN_00524430(param_1);
  return;
}


void __fastcall FUN_00524080(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2af9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar4 = (int *)FUN_00520a20(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24));
  iVar8 = DAT_0065b5cc;
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x2b0);
    if (piVar4[1] == *(int *)(iVar1 + 4)) {
      piVar5 = *(int **)(iVar1 + 0x28);
      uVar6 = 0;
      uVar7 = *(int *)(iVar1 + 0x2c) - (int)piVar5 >> 2;
      if (uVar7 != 0) {
        do {
          if (*piVar5 == *piVar4) {
            FUN_0051f040(iVar1);
            FUN_0051f040((int)piVar4);
            pcVar9 = "Unlinked waypoint %s #%d to %s #%d";
            goto LAB_00524209;
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar6 < uVar7);
      }
      piVar5 = *(int **)(iVar1 + 0x2c);
      if (*(int **)(iVar1 + 0x30) == piVar5) {
        FUN_004141e0((void *)(iVar1 + 0x28),piVar5,piVar4);
        iVar8 = DAT_0065b5cc;
      }
      else {
        *piVar5 = *piVar4;
        *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 4;
      }
      puVar2 = (undefined4 *)piVar4[0xb];
      puVar3 = *(undefined4 **)(*(int *)(iVar8 + 0xd0) + 0x2b0);
      if ((undefined4 *)piVar4[0xc] == puVar2) {
        FUN_004141e0(piVar4 + 10,puVar2,puVar3);
      }
      else {
        *puVar2 = *puVar3;
        piVar4[0xb] = piVar4[0xb] + 4;
      }
      pcVar9 = "Linked waypoint %s #%d to %s #%d";
LAB_00524209:
      FUN_00591070("DETAIL",pcVar9);
      *(undefined4 *)(param_1 + 0x27c) = 2;
      FUN_00524430(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


void FUN_00524240(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_74 [16];
  undefined1 *local_64;
  int local_60;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  
  local_44 = DAT_0065500c ^ (uint)auStack_74;
  local_64 = (undefined1 *)FUN_005adb0f(0xd0);
  iVar4 = DAT_0065b5cc;
  iVar7 = -1;
  uVar9 = 0;
  uVar10 = *(int *)(DAT_0065b5cc + 0x34) - *(int *)(DAT_0065b5cc + 0x30) >> 2;
  if (uVar10 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x30) + uVar9 * 4) + 0x38);
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  puVar5 = FUN_00521340(local_64,iVar7 + 1,3);
  *(undefined4 *)(puVar5 + 0x18) = **(undefined4 **)(iVar4 + 0xd8);
  *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(iVar4 + 0xd8);
  local_64 = puVar5;
  piVar6 = (int *)FUN_00591e00((undefined1 *)local_5c,"obstacle%d");
  piVar1 = (int *)(puVar5 + 0x3c);
  if (piVar1 != piVar6) {
    FUN_00401b20(piVar1);
    iVar4 = piVar6[1];
    iVar7 = piVar6[2];
    iVar2 = piVar6[3];
    *piVar1 = *piVar6;
    *(int *)(puVar5 + 0x40) = iVar4;
    *(int *)(puVar5 + 0x44) = iVar7;
    *(int *)(puVar5 + 0x48) = iVar2;
    *(undefined8 *)(puVar5 + 0x4c) = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_48) {
    pvVar8 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar8 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  *(double *)(puVar5 + 0x20) = (double)*(float *)(local_60 + 0x288);
  *(double *)(puVar5 + 0x28) = (double)*(float *)(local_60 + 0x28c);
  *(undefined4 *)(puVar5 + 0xac) = 1;
  *(undefined4 *)(puVar5 + 0xb0) = 0x32;
  FUN_0051f570(*(void **)(puVar5 + 0x1c),(int)puVar5);
  iVar4 = DAT_0065b5cc;
  puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x34);
  if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar3) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar3,&local_64);
    puVar5 = local_64;
  }
  else {
    *puVar3 = puVar5;
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 4;
  }
  FUN_00591070("DETAIL","Added asteroid field \'%s\' (density %d) to system \'%s\' at %f, %f");
  *(undefined1 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = puVar5;
  FUN_00524430(local_60);
  __security_check_cookie(local_44 ^ (uint)auStack_74);
  return;
}


void __fastcall FUN_00524430(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  Ref *pRVar5;
  void *pvVar6;
  char *pcVar7;
  char *in_stack_ffffff8c;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c2e01;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x285) == '\0') {
    if (*(int **)(param_1 + 0x290) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x290) + 0xb4))();
    }
    goto LAB_00524940;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  FUN_00402690(local_44,
               "`7SECTOR EDIT MODE\n`$arrows `8[move map]\n`$left click `8[select object]\n`$space `8[add obstacle]\n`$n `8[add nav point]\n`$r `8[add spawn point]\n`$j `8[add jump point]"
               ,0xa5);
  iVar2 = *(int *)(param_1 + 0x27c);
  if (iVar2 == 2) {
    if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x2b0) + 4) == 0) {
      pcVar7 = 
      "`8Nav Point %s #%d (%s)\n`$wasd `8[move]\n`$l `8[link or unlink to other wp]\n`$t`8 toggle mesh type\n`$v`8 %s"
      ;
      goto LAB_005244fd;
    }
    piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                 "`8Nav Point %s #%d\n`$wasd `8[move]\n`$l `8[link or unlink to other wp]"
                                );
LAB_00524509:
    FUN_00413230(local_44,piVar4);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00524544;
      FUN_005adb3f(pvVar6);
    }
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
      if (*(int *)(iVar2 + 0x1a4) == 0) {
        if ((*(int *)(iVar2 + 0x19c) == 0) || (*(int *)(*(int *)(iVar2 + 0x19c) + 0x130) == 0)) {
          if (*(int *)(iVar2 + 0x2b0) == 0) {
            if (*(int *)(iVar2 + 0x2b4) == 0) goto LAB_00524848;
            piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                         "`8Hit `$DEL`8 again to delete spawn point %d");
          }
          else {
            piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                         "`8Hit `$DEL`8 again to delete nav point %d");
          }
        }
        else {
          piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,"`8Hit `$DEL`8 again to delete \'%s\'"
                                      );
        }
      }
      else {
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,"`8Hit `$DEL`8 again to delete \'%s\'");
      }
      goto LAB_00524509;
    }
    if (iVar2 == 3) {
      FUN_00402690(local_44,"`8Click to toggle link with other nav point",0x2b);
    }
    else {
      iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x19c);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x130) == 0)) {
          if (iVar2 == 4) {
            pcVar7 = 
            "`8Spawn Point #%d\n`$wasd `8[move]\n`8Level: `%%%d`8 [`$+`8/`$-`8]\nRadius: `%%%d`8[`$1`8/`$2`8]\nSpawn Chance: `%%%d`8[`$3`8/`$4`8]"
            ;
          }
          else {
            if (iVar2 != 5) {
              if (iVar2 != 6) goto LAB_00524848;
              piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                           "`8Jump Point #%d\n`$wasd `8[move]\nRadius: `%%%d`8[`$1`8/`$2`8]"
                                          );
              goto LAB_00524509;
            }
            pcVar7 = 
            "`8Zone #%d\n`$wasd `8[move]\n`8ID: %s\n`8Radius: `%%%.0f`8[`$1`8/`$2`8]\n`8Rectangular: [`$O`8/`$K`8/`$L`8/`$;`8]"
            ;
          }
LAB_005244fd:
          in_stack_ffffff8c = (char *)local_2c;
          piVar4 = (int *)FUN_00591e00(in_stack_ffffff8c,pcVar7);
        }
        else {
          in_stack_ffffff8c = "`8\'%s\' x: %.02f y: %.02f\n`$wasd [move object]";
          piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                       "`8\'%s\' x: %.02f y: %.02f\n`$wasd [move object]");
        }
        goto LAB_00524509;
      }
      if (*(int *)(iVar3 + 0x54) == 4) {
        fVar1 = *(float *)(iVar3 + 0xa4);
        pcVar7 = 
        "`8nebula, variant %d, density %d%%\nrot %.0f x: %.02f y: %.02f\n`$wasd `8[move object]\n`$t `8[toggle type]\n`$i/o `8[rotate]"
        ;
LAB_0052468d:
        in_stack_ffffff8c = SUB84((double)fVar1,0);
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,pcVar7);
      }
      else {
        if (*(int *)(iVar3 + 0x54) == 3) {
          fVar1 = *(float *)(iVar3 + 0xa4);
          pcVar7 = 
          "`8asteroid field, variant %d, density %d%%\nrot %.0f x: %.02f y: %.02f\n`$wasd `8[move object]\nt `8[toggle type]\n`$i/o `8[rotate]"
          ;
          goto LAB_0052468d;
        }
        in_stack_ffffff8c = "`8\'%s\' x: %.02f y: %.02f\n`$wasd `8[move object]";
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                     "`8\'%s\' x: %.02f y: %.02f\n`$wasd `8[move object]");
      }
      FUN_00413230(local_44,piVar4);
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00524544;
        FUN_005adb3f(pvVar6);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) + 0x54);
      if ((iVar2 == 3) || (iVar2 == 4)) {
        FUN_00403640(local_44,
                     "`$+/- `8[change density]\n`$v `8[change variant]\n`$1/2\n`8[alter density]\n`$2/3 `8[alter cat.]"
                     ,0x5c);
      }
    }
  }
LAB_00524848:
  if (*(int *)(param_1 + 0x290) == 0) {
    FUN_004024e0(&stack0xffffff8c,local_44);
    pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff8c);
    *(Ref **)(param_1 + 0x290) = pRVar5;
    local_8._0_1_ = 1;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = (uint)local_8._1_3_ << 8;
    iVar2 = **(int **)(param_1 + 0x290);
    (**(code **)(**(int **)(param_1 + 0x278) + 0xb0))();
    (**(code **)(iVar2 + 0x48))();
    (**(code **)(**(int **)(param_1 + 0x278) + 0x10c))();
  }
  FUN_004024e0(&stack0xffffff8c,local_44);
  FUN_0055ce90(*(void **)(param_1 + 0x290),'\x01','\0',(int *)in_stack_ffffff8c);
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
LAB_00524544:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
LAB_00524940:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_00524960(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2e4b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)this = param_1;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004024e0((void *)((int)this + 0x1c),&stack0x00000020);
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar1 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pvVar1 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000020 + -4);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


void * __thiscall FUN_00524a50(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(this,&param_1);
  *(undefined4 *)((int)this + 0x1c) = in_stack_00000020;
  *(undefined4 *)((int)this + 0x20) = in_stack_00000020;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = in_stack_0000001c;
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
  return this;
}


undefined4 * __fastcall FUN_00524b00(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  void *in_stack_ffffff6c;
  void *pvVar3;
  basic_string<> abStack_7c [16];
  undefined4 uStack_6c;
  basic_string<> local_54 [24];
  basic_string<> local_3c [24];
  void *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c3846;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = param_1 + 3;
  *param_1 = 0x7b;
  param_1[1] = 8;
  param_1[2] = 0xffffffff;
  *this = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  this_00 = param_1 + 6;
  *this_00 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_6c = 0x524b81;
  local_18 = param_1;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 2;
  uStack_6c = 0x524b9a;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_54,"key_a");
  local_8._0_1_ = 3;
  uStack_6c = 0x524bab;
  std::basic_string<>::basic_string<>(local_3c,"A");
  local_8._0_1_ = 5;
  *puVar1 = 0x7c;
  uStack_6c = 0x524bc1;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_3c);
  local_8._0_1_ = 6;
  uStack_6c = 0x524bd1;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_54);
  local_8._0_1_ = 7;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 8;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 1;
  uStack_6c = 0x524bfb;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524c02;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 9;
  uStack_6c = 0x524c1b;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_b");
  local_8._0_1_ = 10;
  uStack_6c = 0x524c2c;
  std::basic_string<>::basic_string<>(local_54,"B");
  local_8._0_1_ = 0xc;
  *puVar1 = 0x7d;
  uStack_6c = 0x524c42;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0xd;
  uStack_6c = 0x524c52;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0xe;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0xf;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524c7c;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524c83;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x10;
  uStack_6c = 0x524c9c;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_c");
  local_8._0_1_ = 0x11;
  uStack_6c = 0x524cad;
  std::basic_string<>::basic_string<>(local_54,"C");
  local_8._0_1_ = 0x13;
  *puVar1 = 0x7e;
  uStack_6c = 0x524cc3;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x14;
  uStack_6c = 0x524cd3;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x15;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x16;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524cfd;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524d04;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x17;
  uStack_6c = 0x524d1d;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_d");
  local_8._0_1_ = 0x18;
  uStack_6c = 0x524d2e;
  std::basic_string<>::basic_string<>(local_54,"D");
  local_8._0_1_ = 0x1a;
  *puVar1 = 0x7f;
  uStack_6c = 0x524d44;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x1b;
  uStack_6c = 0x524d54;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x1c;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x1d;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524d7e;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524d85;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x1e;
  uStack_6c = 0x524d9e;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_e");
  local_8._0_1_ = 0x1f;
  uStack_6c = 0x524daf;
  std::basic_string<>::basic_string<>(local_54,"E");
  local_8._0_1_ = 0x21;
  *puVar1 = 0x80;
  uStack_6c = 0x524dc5;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x22;
  uStack_6c = 0x524dd5;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x23;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x24;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524dff;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524e06;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x25;
  uStack_6c = 0x524e1f;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_f");
  local_8._0_1_ = 0x26;
  uStack_6c = 0x524e30;
  std::basic_string<>::basic_string<>(local_54,"F");
  local_8._0_1_ = 0x28;
  *puVar1 = 0x81;
  uStack_6c = 0x524e46;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x29;
  uStack_6c = 0x524e56;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x2a;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x2b;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524e80;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524e87;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x2c;
  uStack_6c = 0x524ea0;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_g");
  local_8._0_1_ = 0x2d;
  uStack_6c = 0x524eb1;
  std::basic_string<>::basic_string<>(local_54,"G");
  local_8._0_1_ = 0x2f;
  *puVar1 = 0x82;
  uStack_6c = 0x524ec7;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x30;
  uStack_6c = 0x524ed7;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x31;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x32;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524f01;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524f08;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x33;
  uStack_6c = 0x524f21;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_h");
  local_8._0_1_ = 0x34;
  uStack_6c = 0x524f32;
  std::basic_string<>::basic_string<>(local_54,"H");
  local_8._0_1_ = 0x36;
  *puVar1 = 0x83;
  uStack_6c = 0x524f48;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x37;
  uStack_6c = 0x524f58;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x38;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x39;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x524f82;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x524f89;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x3a;
  uStack_6c = 0x524fa2;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_i");
  local_8._0_1_ = 0x3b;
  uStack_6c = 0x524fb3;
  std::basic_string<>::basic_string<>(local_54,"I");
  local_8._0_1_ = 0x3d;
  *puVar1 = 0x84;
  uStack_6c = 0x524fc9;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x3e;
  uStack_6c = 0x524fd9;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x3f;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x40;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525003;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52500a;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x41;
  uStack_6c = 0x525023;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_j");
  local_8._0_1_ = 0x42;
  uStack_6c = 0x525034;
  std::basic_string<>::basic_string<>(local_54,"J");
  local_8._0_1_ = 0x44;
  *puVar1 = 0x85;
  uStack_6c = 0x52504a;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x45;
  uStack_6c = 0x52505a;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x46;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x47;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525084;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52508b;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x48;
  uStack_6c = 0x5250a4;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_k");
  local_8._0_1_ = 0x49;
  uStack_6c = 0x5250b5;
  std::basic_string<>::basic_string<>(local_54,"K");
  local_8._0_1_ = 0x4b;
  *puVar1 = 0x86;
  uStack_6c = 0x5250cb;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x4c;
  uStack_6c = 0x5250db;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x4d;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x4e;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525105;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52510c;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x4f;
  uStack_6c = 0x525125;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_l");
  local_8._0_1_ = 0x50;
  uStack_6c = 0x525136;
  std::basic_string<>::basic_string<>(local_54,"L");
  local_8._0_1_ = 0x52;
  *puVar1 = 0x87;
  uStack_6c = 0x52514c;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x53;
  uStack_6c = 0x52515c;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x54;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x55;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525186;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52518d;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x56;
  uStack_6c = 0x5251a6;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_m");
  local_8._0_1_ = 0x57;
  uStack_6c = 0x5251b7;
  std::basic_string<>::basic_string<>(local_54,"M");
  local_8._0_1_ = 0x59;
  *puVar1 = 0x88;
  uStack_6c = 0x5251cd;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x5a;
  uStack_6c = 0x5251dd;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x5b;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x5c;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525207;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52520e;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x5d;
  uStack_6c = 0x525227;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_n");
  local_8._0_1_ = 0x5e;
  uStack_6c = 0x525238;
  std::basic_string<>::basic_string<>(local_54,"N");
  local_8._0_1_ = 0x60;
  *puVar1 = 0x89;
  uStack_6c = 0x52524e;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x61;
  uStack_6c = 0x52525e;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x62;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 99;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525288;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52528f;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 100;
  uStack_6c = 0x5252a8;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_o");
  local_8._0_1_ = 0x65;
  uStack_6c = 0x5252b9;
  std::basic_string<>::basic_string<>(local_54,"O");
  local_8._0_1_ = 0x67;
  *puVar1 = 0x8a;
  uStack_6c = 0x5252cf;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x68;
  uStack_6c = 0x5252df;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x69;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x6a;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525309;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525310;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x6b;
  uStack_6c = 0x525329;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_p");
  local_8._0_1_ = 0x6c;
  uStack_6c = 0x52533a;
  std::basic_string<>::basic_string<>(local_54,"P");
  local_8._0_1_ = 0x6e;
  *puVar1 = 0x8b;
  uStack_6c = 0x525350;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x6f;
  uStack_6c = 0x525360;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x70;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x71;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52538a;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525391;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x72;
  uStack_6c = 0x5253aa;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_q");
  local_8._0_1_ = 0x73;
  uStack_6c = 0x5253bb;
  std::basic_string<>::basic_string<>(local_54,"Q");
  local_8._0_1_ = 0x75;
  *puVar1 = 0x8c;
  uStack_6c = 0x5253d1;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x76;
  uStack_6c = 0x5253e1;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x77;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x78;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52540b;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525412;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x79;
  uStack_6c = 0x52542b;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_r");
  local_8._0_1_ = 0x7a;
  uStack_6c = 0x52543c;
  std::basic_string<>::basic_string<>(local_54,"R");
  local_8._0_1_ = 0x7c;
  *puVar1 = 0x8d;
  uStack_6c = 0x525452;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x7d;
  uStack_6c = 0x525462;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x7e;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x7f;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52548c;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525493;
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  local_8._0_1_ = 0x80;
  uStack_6c = 0x5254ac;
  local_1c = puVar1;
  std::basic_string<>::basic_string<>(local_3c,"key_s");
  local_8._0_1_ = 0x81;
  uStack_6c = 0x5254bd;
  std::basic_string<>::basic_string<>(local_54,"S");
  local_8._0_1_ = 0x83;
  *puVar1 = 0x8e;
  uStack_6c = 0x5254d3;
  FUN_004024e0(puVar1 + 1,(undefined4 *)local_54);
  local_8._0_1_ = 0x84;
  uStack_6c = 0x5254e3;
  FUN_004024e0(puVar1 + 7,(undefined4 *)local_3c);
  local_8._0_1_ = 0x85;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 0x86;
  FUN_00401b20((int *)local_3c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52550d;
  local_14 = puVar1;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525514;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x87;
  local_1c = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_t");
  local_8._0_1_ = 0x88;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"T");
  local_8._0_1_ = 0x87;
  local_14 = FUN_00524960(pvVar2,0x8f,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525564;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52556b;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x89;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_u");
  local_8._0_1_ = 0x8a;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"U");
  local_8._0_1_ = 0x89;
  local_14 = FUN_00524960(pvVar2,0x90,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5255bb;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5255c2;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x8b;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_v");
  local_8._0_1_ = 0x8c;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"V");
  local_8._0_1_ = 0x8b;
  local_14 = FUN_00524960(pvVar2,0x91,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525612;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525619;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x8d;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_w");
  local_8._0_1_ = 0x8e;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"W");
  local_8._0_1_ = 0x8d;
  local_14 = FUN_00524960(pvVar2,0x92,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525669;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525670;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x8f;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_x");
  local_8._0_1_ = 0x90;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"X");
  local_8._0_1_ = 0x8f;
  local_14 = FUN_00524960(pvVar2,0x93,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5256c0;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5256c7;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x91;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_y");
  local_8._0_1_ = 0x92;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"Y");
  local_8._0_1_ = 0x91;
  local_14 = FUN_00524960(pvVar2,0x94,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525717;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52571e;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x93;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_z");
  local_8._0_1_ = 0x94;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"Z");
  local_8._0_1_ = 0x93;
  local_14 = FUN_00524960(pvVar2,0x95,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52576e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525775;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x95;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_1");
  local_8._0_1_ = 0x96;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"1");
  local_8._0_1_ = 0x95;
  local_14 = FUN_00524960(pvVar2,0x4d,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5257c2;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5257c9;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x97;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_2");
  local_8._0_1_ = 0x98;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"2");
  local_8._0_1_ = 0x97;
  local_14 = FUN_00524960(pvVar2,0x4e,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525816;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52581d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x99;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_3");
  local_8._0_1_ = 0x9a;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"3");
  local_8._0_1_ = 0x99;
  local_14 = FUN_00524960(pvVar2,0x4f,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52586a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525871;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x9b;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_4");
  local_8._0_1_ = 0x9c;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"4");
  local_8._0_1_ = 0x9b;
  local_14 = FUN_00524960(pvVar2,0x50,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5258be;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5258c5;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x9d;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_5");
  local_8._0_1_ = 0x9e;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"5");
  local_8._0_1_ = 0x9d;
  local_14 = FUN_00524960(pvVar2,0x51,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525912;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525919;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0x9f;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_6");
  local_8._0_1_ = 0xa0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"6");
  local_8._0_1_ = 0x9f;
  local_14 = FUN_00524960(pvVar2,0x52,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525966;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52596d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xa1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_7");
  local_8._0_1_ = 0xa2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"7");
  local_8._0_1_ = 0xa1;
  local_14 = FUN_00524960(pvVar2,0x53,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5259ba;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5259c1;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xa3;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_8");
  local_8._0_1_ = 0xa4;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"8");
  local_8._0_1_ = 0xa3;
  local_14 = FUN_00524960(pvVar2,0x54,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525a0e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525a15;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xa5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_9");
  local_8._0_1_ = 0xa6;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"9");
  local_8._0_1_ = 0xa5;
  local_14 = FUN_00524960(pvVar2,0x55,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525a62;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525a69;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xa7;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_0");
  local_8._0_1_ = 0xa8;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"0");
  local_8._0_1_ = 0xa7;
  local_14 = FUN_00524960(pvVar2,0x4c,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525ab6;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525abd;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xa9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f1");
  local_8._0_1_ = 0xaa;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F1");
  local_8._0_1_ = 0xa9;
  local_14 = FUN_00524960(pvVar2,0x2f,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525b0a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525b11;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xab;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f2");
  local_8._0_1_ = 0xac;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F2");
  local_8._0_1_ = 0xab;
  local_14 = FUN_00524960(pvVar2,0x30,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525b5e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525b65;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xad;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f3");
  local_8._0_1_ = 0xae;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F3");
  local_8._0_1_ = 0xad;
  local_14 = FUN_00524960(pvVar2,0x31,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525bb2;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525bb9;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xaf;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f4");
  local_8._0_1_ = 0xb0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F4");
  local_8._0_1_ = 0xaf;
  local_14 = FUN_00524960(pvVar2,0x32,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525c06;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525c0d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xb1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f5");
  local_8._0_1_ = 0xb2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F5");
  local_8._0_1_ = 0xb1;
  local_14 = FUN_00524960(pvVar2,0x33,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525c5a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525c61;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xb3;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f6");
  local_8._0_1_ = 0xb4;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F6");
  local_8._0_1_ = 0xb3;
  local_14 = FUN_00524960(pvVar2,0x34,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525cae;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525cb5;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xb5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f7");
  local_8._0_1_ = 0xb6;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F7");
  local_8._0_1_ = 0xb5;
  local_14 = FUN_00524960(pvVar2,0x35,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525d02;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525d09;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xb7;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f8");
  local_8._0_1_ = 0xb8;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F8");
  local_8._0_1_ = 0xb7;
  local_14 = FUN_00524960(pvVar2,0x36,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525d56;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525d5d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xb9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f9");
  local_8._0_1_ = 0xba;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F9");
  local_8._0_1_ = 0xb9;
  local_14 = FUN_00524960(pvVar2,0x37,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525daa;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525db1;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xbb;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f10");
  local_8._0_1_ = 0xbc;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F10");
  local_8._0_1_ = 0xbb;
  local_14 = FUN_00524960(pvVar2,0x38,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525dfe;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525e05;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xbd;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f11");
  local_8._0_1_ = 0xbe;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F12");
  local_8._0_1_ = 0xbd;
  local_14 = FUN_00524960(pvVar2,0x39,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525e52;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525e59;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xbf;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_f12");
  local_8._0_1_ = 0xc0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"F12");
  local_8._0_1_ = 0xbf;
  local_14 = FUN_00524960(pvVar2,0x3a,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525ea6;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525ead;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xc1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_comma");
  local_8._0_1_ = 0xc2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,",");
  local_8._0_1_ = 0xc1;
  local_14 = FUN_00524960(pvVar2,0x48,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525efa;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525f01;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xc3;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_period");
  local_8._0_1_ = 0xc4;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,".");
  local_8._0_1_ = 0xc3;
  local_14 = FUN_00524960(pvVar2,0x4a,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525f4e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525f55;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xc5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_leftarrow");
  local_8._0_1_ = 0xc6;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"`a3");
  local_8._0_1_ = 0xc5;
  local_14 = FUN_00524960(pvVar2,0x1a,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525fa2;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525fa9;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 199;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_rightarrow");
  local_8._0_1_ = 200;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"`a4");
  local_8._0_1_ = 199;
  local_14 = FUN_00524960(pvVar2,0x1b,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x525ff6;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x525ffd;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xc9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_uparrow");
  local_8._0_1_ = 0xca;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"`a1");
  local_8._0_1_ = 0xc9;
  local_14 = FUN_00524960(pvVar2,0x1c,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52604a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526051;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xcb;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_downarrow");
  local_8._0_1_ = 0xcc;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"`a2");
  local_8._0_1_ = 0xcb;
  local_14 = FUN_00524960(pvVar2,0x1d,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52609e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5260a5;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xcd;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_semicolon");
  local_8._0_1_ = 0xce;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,(char *)&_Src_0061e3bc);
  local_8._0_1_ = 0xcd;
  local_14 = FUN_00524960(pvVar2,0x57,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5260f2;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5260f9;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xcf;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_apostrophe");
  local_8._0_1_ = 0xd0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"\'");
  local_8._0_1_ = 0xcf;
  local_14 = FUN_00524960(pvVar2,0x43,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x526146;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52614d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xd1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_leftbracket");
  local_8._0_1_ = 0xd2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"[");
  local_8._0_1_ = 0xd1;
  local_14 = FUN_00524960(pvVar2,0x77,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52619a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5261a1;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xd3;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_rightbracket");
  local_8._0_1_ = 0xd4;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"]");
  local_8._0_1_ = 0xd3;
  local_14 = FUN_00524960(pvVar2,0x79,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5261ee;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5261f5;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xd5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_leftbracket");
  local_8._0_1_ = 0xd6;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"[");
  local_8._0_1_ = 0xd5;
  local_14 = FUN_00524960(pvVar2,0x77,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x526242;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526249;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xd7;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_backslash");
  local_8._0_1_ = 0xd8;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"\\");
  local_8._0_1_ = 0xd7;
  local_14 = FUN_00524960(pvVar2,0x78,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x526296;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x52629d;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xd9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_slash");
  local_8._0_1_ = 0xda;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"/");
  local_8._0_1_ = 0xd9;
  local_14 = FUN_00524960(pvVar2,0x4b,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5262ea;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5262f1;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xdb;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_minus");
  local_8._0_1_ = 0xdc;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"-");
  local_8._0_1_ = 0xdb;
  local_14 = FUN_00524960(pvVar2,0x49,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52633e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526345;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xdd;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_equal");
  local_8._0_1_ = 0xde;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"=");
  local_8._0_1_ = 0xdd;
  local_14 = FUN_00524960(pvVar2,0x59,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x526392;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526399;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xdf;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_grave");
  local_8._0_1_ = 0xe0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"~");
  local_8._0_1_ = 0xdf;
  local_14 = FUN_00524960(pvVar2,0x7b,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x5263e6;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x5263ed;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xe1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_tab");
  local_8._0_1_ = 0xe2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"TAB");
  local_8._0_1_ = 0xe1;
  local_14 = FUN_00524960(pvVar2,8,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52643a;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526441;
  pvVar2 = (void *)FUN_005adb0f(0x34);
  local_20 = abStack_7c;
  local_8._0_1_ = 0xe3;
  pvVar3 = (void *)0x52645c;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>(abStack_7c,"key_backspace");
  local_8._0_1_ = 0xe4;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,"BACK");
  local_8._0_1_ = 0xe3;
  local_14 = FUN_00524960(pvVar2,7,in_stack_ffffff6c);
  local_8._0_1_ = 1;
  uStack_6c = 0x52648e;
  FUN_00412900(this_00,&local_14);
  uStack_6c = 0x526495;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0xc4;
  local_8._0_1_ = 0xe5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`$Move One Room Left");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5264d0;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5264d7;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0xc5;
  local_8._0_1_ = 0xe6;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`$Move One Room Right");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526512;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526519;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0xc6;
  local_8._0_1_ = 0xe7;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`$Show/Hide Tablet");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526554;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x52655b;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 199;
  local_8._0_1_ = 0xe8;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`$Switch Tabs On Current Screen");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526596;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x52659d;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 200;
  local_8._0_1_ = 0xe9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`$Time Compression Slower");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5265d8;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5265df;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0xc9;
  local_8._0_1_ = 0xea;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`$Time Compression Faster");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52661a;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526621;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 4;
  local_8._0_1_ = 0xeb;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Toggle Main Engine");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52665c;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526663;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x13;
  local_8._0_1_ = 0xec;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Stop RCS");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52669e;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5266a5;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x12;
  local_8._0_1_ = 0xed;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%RCS Counter-Clockwise");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5266dd;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5266e4;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x11;
  local_8._0_1_ = 0xee;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%RCS Clockwise");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52671c;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526723;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x23;
  local_8._0_1_ = 0xef;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`!Toggle EMCON");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52675e;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526765;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x17;
  local_8._0_1_ = 0xf0;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`!Manual Dock");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52679d;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5267a4;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x10;
  local_8._0_1_ = 0xf1;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`!Full Stop");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5267dc;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5267e3;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x2d;
  local_8._0_1_ = 0xf2;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Toggle IFF");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52681e;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526825;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x4b;
  local_8._0_1_ = 0xf3;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Toggle Reactor");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52685d;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526864;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x4a;
  local_8._0_1_ = 0xf4;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Turn On Reactor");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52689c;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5268a3;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x49;
  local_8._0_1_ = 0xf5;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`%Turn Off Reactor");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5268db;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5268e2;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x41;
  local_8._0_1_ = 0xf6;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`#Spin Up Jump Drive");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x52691a;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526921;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x44;
  local_8._0_1_ = 0xf7;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`#Discharge Jump Drive");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526959;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526960;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x43;
  local_8._0_1_ = 0xf8;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`#Activate Jump Drive");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526998;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x52699f;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x1b;
  local_8._0_1_ = 0xf9;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Spin Up Weapon");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x5269d7;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x5269de;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x1d;
  local_8._0_1_ = 0xfa;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Launch Weapon");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526a16;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526a1d;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x35;
  local_8._0_1_ = 0xfb;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Select Weapon Tube 1");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526a55;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526a5c;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  local_8._0_1_ = 0xfc;
  uStack_6c = 0x36;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Select Weapon Tube 2");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526a94;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526a9b;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x37;
  local_8._0_1_ = 0xfd;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Select Weapon Tube 3");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526ad3;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526ada;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x38;
  local_8._0_1_ = 0xfe;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Select Weapon Tube 4");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8._0_1_ = 1;
  uStack_6c = 0x526b12;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526b19;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x39;
  local_8._0_1_ = 0xff;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`@Select Weapon Tube 5");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_6c = 0x526b51;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526b58;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x90;
  local_8 = 0x100;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,"`$Launch Countermeasure");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8 = 1;
  uStack_6c = 0x526b99;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526ba0;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x8f;
  local_8 = 0x101;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`$Toggle Point Defence Laser");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8 = 1;
  uStack_6c = 0x526be1;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526be8;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x89;
  local_8 = 0x102;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`7Increase Main Drive Power");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8 = 1;
  uStack_6c = 0x526c29;
  FUN_004130e0(this,&local_14);
  uStack_6c = 0x526c30;
  pvVar2 = (void *)FUN_005adb0f(0x28);
  uStack_6c = 0x8a;
  local_8 = 0x103;
  local_24 = pvVar2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff7c,"`7 Decrease Main Drive Power");
  local_14 = FUN_00524a50(pvVar2,pvVar3);
  local_8 = 1;
  uStack_6c = 0x526c71;
  FUN_004130e0(this,&local_14);
  ExceptionList = local_10;
  return local_18;
}


void __thiscall FUN_00526c90(void *this,int param_1,char *param_2)

{
  int *this_00;
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  void *this_01;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint in_stack_ffffffb4;
  void *pvVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar4 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c387f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)((int)this + 0x10);
  this_00 = (int *)((int)this + 0xc);
  iVar5 = *this_00;
  uVar8 = 0;
  if (iVar7 - iVar5 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar5 + uVar8 * 4);
      if (*(char **)(iVar7 + 0x1c) == param_2) {
        *(undefined4 *)(iVar7 + 0x1c) = 0;
      }
      iVar7 = *(int *)((int)this + 0x10);
      uVar8 = uVar8 + 1;
      iVar5 = *this_00;
    } while (uVar8 < (uint)(iVar7 - iVar5 >> 2));
  }
  uVar8 = 0;
  bVar3 = false;
  if (iVar7 - iVar5 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar5 + uVar8 * 4);
      if (*(int *)(iVar7 + 0x24) == param_1) {
        bVar3 = true;
        *(char **)(iVar7 + 0x1c) = param_2;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *this_00;
    } while (uVar8 < (uint)(*(int *)((int)this + 0x10) - iVar5 >> 2));
    if (bVar3) goto LAB_00526de4;
  }
  this_01 = (void *)FUN_005adb0f(0x28);
  local_8 = 0;
  pcVar6 = (&PTR_DAT_005df8a8)[param_1];
  param_2 = pcVar6 + 1;
  pvVar9 = (void *)(in_stack_ffffffb4 & 0xffffff00);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(&stack0xffffffb4,(&PTR_DAT_005df8a8)[param_1],(int)pcVar6 - (int)param_2);
  param_2 = FUN_00524a50(this_01,pvVar9);
  local_8 = 0xffffffff;
  param_2[0x18] = '\x01';
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if (*(undefined4 **)((int)this + 0x14) == puVar2) {
    FUN_004141e0(this_00,puVar2,&param_2);
  }
  else {
    *puVar2 = param_2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
  }
  FUN_00591070("DETAIL","Set manual command to execute \'%s\'");
LAB_00526de4:
  if (param_1 != 0xc6) {
    if (param_1 == 199) {
      *(char **)this = pcVar4;
    }
    ExceptionList = local_10;
    return;
  }
  *(char **)((int)this + 4) = pcVar4;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00526e30(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *pvVar5;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  void *local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  int local_9c;
  void *local_98 [4];
  int local_88;
  uint local_84;
  uint local_80;
  void *local_7c;
  uint local_78;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [28];
  undefined4 local_24;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c38e1;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = param_1[1];
  iVar7 = *param_1;
  local_7c = this;
  if (iVar7 != iVar3) {
    do {
      FUN_0043bfa0(iVar7);
      iVar7 = iVar7 + 0x60;
    } while (iVar7 != iVar3);
    iVar7 = *param_1;
  }
  param_1[1] = iVar7;
  iVar3 = *(int *)((int)local_7c + 0xc);
  local_80 = 0;
  pcVar9 = Color3B_exref;
  if (*(int *)((int)local_7c + 0x10) - iVar3 >> 2 != 0) {
    do {
      local_9c = local_80 * 4;
      iVar3 = *(int *)(*(int *)(local_9c + iVar3) + 0x1c);
      if (iVar3 == 0) {
        local_84 = 0xf;
        local_98[0] = (void *)((uint)local_98[0]._1_3_ << 8);
        local_88 = iVar3;
        FUN_00402690(local_98,"`8unbound",9);
      }
      else {
        uVar4 = 0;
        piVar2 = *(int **)((int)local_7c + 0x18);
        uVar8 = *(int *)((int)local_7c + 0x1c) - (int)piVar2 >> 2;
        if (uVar8 != 0) {
          do {
            if (*(int *)*piVar2 == iVar3) {
              FUN_004024e0(local_98,(int *)*piVar2 + 1);
              pcVar9 = Color3B_exref;
              goto LAB_00526f42;
            }
            uVar4 = uVar4 + 1;
            piVar2 = piVar2 + 1;
          } while (uVar4 < uVar8);
        }
        local_88 = 0;
        local_84 = 0xf;
        local_98[0] = (void *)((uint)local_98[0]._1_3_ << 8);
        FUN_00402690(local_98,"ERROR",5);
        pcVar9 = Color3B_exref;
      }
LAB_00526f42:
      local_8 = 0;
      FUN_004024e0(local_b8,*(undefined4 **)(*(int *)((int)local_7c + 0xc) + local_9c));
      uVar4 = local_80;
      local_78 = local_80;
      local_64 = 0;
      local_60 = 0xf;
      local_74 = 0;
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      FUN_004024e0(local_58,local_b8);
      local_8._0_1_ = 4;
      FUN_004024e0(local_40,local_98);
      local_8._0_1_ = 5;
      local_24 = 0xbf800000;
      (*pcVar9)();
      (*pcVar9)();
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar6 = extraout_ECX;
      if (0xf < local_a4) {
        pvVar5 = local_b8[0];
        if ((0xfff < local_a4 + 1) &&
           (pvVar5 = *(void **)((int)local_b8[0] + -4),
           0x1f < (uint)((int)local_b8[0] + (-4 - (int)pvVar5)))) goto LAB_005270d7;
        FUN_005adb3f(pvVar5);
        uVar6 = extraout_ECX_00;
      }
      local_8 = 0xffffffff;
      local_a8 = 0;
      local_a4 = 0xf;
      local_b8[0] = (void *)((uint)local_b8[0] & 0xffffff00);
      if (0xf < local_84) {
        pvVar5 = local_98[0];
        if ((0xfff < local_84 + 1) &&
           (pvVar5 = *(void **)((int)local_98[0] + -4),
           0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar5)))) {
LAB_005270d7:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
        uVar6 = extraout_ECX_01;
      }
      local_8 = 6;
      puVar1 = (undefined4 *)param_1[1];
      if ((undefined4 *)param_1[2] == puVar1) {
        FUN_0043ce10(param_1,puVar1,&local_78);
      }
      else {
        FUN_0043cd30(uVar6,puVar1,&local_78);
        param_1[1] = param_1[1] + 0x60;
      }
      local_8 = 0xffffffff;
      FUN_0043bfa0((int)&local_78);
      local_80 = uVar4 + 1;
      iVar3 = *(int *)((int)local_7c + 0xc);
    } while (local_80 < (uint)(*(int *)((int)local_7c + 0x10) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005270e0(int *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  size_t _Size;
  float fVar8;
  float in_XMM1_Da;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_34 [4];
  float local_30;
  int *local_2c [2];
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_34;
  fVar8 = (float)param_1[0x12];
  local_30 = in_XMM1_Da;
  if ((fVar8 == -1.0) &&
     (iVar9 = param_1[0x14] - param_1[0x13] >> 0x1f,
     (param_1[0x14] - param_1[0x13]) / 0x18 + iVar9 != iVar9)) {
    iVar11 = -1;
    iVar10 = 0x2f;
    iVar9 = *param_1;
    param_1[0x12] = 0x40800000;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar9,iVar10,iVar11);
    fVar8 = (float)param_1[0x12];
  }
  if (fVar8 != -1.0) {
    param_1[0x12] = (int)(fVar8 - local_30);
    if (fVar8 - local_30 <= 0.0) {
      FUN_004024e0(local_24,(undefined4 *)param_1[0x13]);
      pbVar1 = (byte *)param_1[0x14];
      puVar3 = (undefined4 *)FUN_00413f20(local_2c,(byte *)local_24,(byte *)param_1[0x13],pbVar1);
      if ((byte *)*puVar3 != pbVar1) {
        piVar4 = FUN_00414300((int *)pbVar1,(int *)param_1[0x14],(int *)*puVar3);
        FUN_004028b0(piVar4,(int *)param_1[0x14]);
        param_1[0x14] = (int)piVar4;
      }
      param_1[0x12] = -0x40800000;
      if (0xf < local_10) {
        pvVar2 = local_24[0];
        if ((0xfff < local_10 + 1) &&
           (pvVar2 = *(void **)((int)local_24[0] + -4),
           0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar2);
      }
    }
    fVar8 = (float)param_1[0x11];
    param_1[0x11] = (int)(fVar8 - local_30);
    if (fVar8 - local_30 < -0.5) {
      param_1[0x11] = 0x3f000000;
    }
  }
  if (param_1[4] == 0) {
    piVar4 = (int *)param_1[1];
    if (param_1[2] - (int)piVar4 >> 2 != 0) {
      iVar9 = *piVar4;
      param_1[4] = iVar9;
      local_2c[0] = (int *)param_1[2];
      if (piVar4 != local_2c[0]) {
        do {
          if (*piVar4 == iVar9) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != local_2c[0]);
        if (piVar4 != local_2c[0]) {
          piVar5 = piVar4 + 1;
          uVar6 = 0;
          uVar7 = (uint)((int)local_2c[0] + (3 - (int)piVar5)) >> 2;
          if (local_2c[0] < piVar5) {
            uVar7 = 0;
          }
          if (uVar7 != 0) {
            do {
              if (*piVar5 != param_1[4]) {
                *piVar4 = *piVar5;
                piVar4 = piVar4 + 1;
              }
              uVar6 = uVar6 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar6 != uVar7);
          }
          if (piVar4 != local_2c[0]) {
            _Size = param_1[2] - (int)local_2c[0];
            memmove(piVar4,local_2c[0],_Size);
            param_1[2] = _Size + (int)piVar4;
          }
        }
      }
      FUN_005273a0((int)param_1);
      param_1[0xc] = 0x40c00000;
    }
    if (param_1[4] == 0) {
      if ((int *)param_1[0xd] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xd] + 0x138))(1);
        param_1[0xd] = 0;
        if ((void *)param_1[4] != (void *)0x0) {
          FUN_00527890((void *)param_1[4]);
          param_1[4] = 0;
        }
      }
      if (param_1[0x16] != 0) {
        *(undefined1 *)(param_1[0x16] + 0x70) = 1;
      }
      if (param_1[0x17] != 0) {
        *(undefined1 *)(param_1[0x17] + 3) = 0;
        __security_check_cookie(local_c ^ (uint)auStack_34);
        return;
      }
      goto LAB_00527382;
    }
  }
  if ((float)param_1[0xc] == -1.0) {
    if (param_1[0x17] != 0) {
      *(undefined1 *)(param_1[0x17] + 3) = 0;
    }
    FUN_005278f0((int)param_1);
  }
  else {
    local_30 = (float)param_1[0xc] - local_30;
    param_1[0xc] = (int)local_30;
    if (local_30 <= 0.0) {
      param_1[0xc] = -0x40800000;
      __security_check_cookie(local_c ^ (uint)auStack_34);
      return;
    }
    if (param_1[0x17] != 0) {
      *(undefined1 *)(param_1[0x17] + 3) = 1;
      __security_check_cookie(local_c ^ (uint)auStack_34);
      return;
    }
  }
LAB_00527382:
  __security_check_cookie(local_c ^ (uint)auStack_34);
  return;
}


void __fastcall FUN_005273a0(int param_1)

{
  int iVar1;
  Ref *pRVar2;
  void *pvVar3;
  void **in_stack_ffffff8c;
  void *in_stack_ffffffa4;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c3921;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x10);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x58) != 0)) && (*(int *)(param_1 + 0x5c) != 0)) {
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x138))();
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (iVar1 != 0) {
      FUN_004024e0(local_2c,(undefined4 *)(iVar1 + 0x18));
      local_8 = 0;
      FUN_004024e0(&stack0xffffff8c,local_2c);
      FUN_00591780((void **)&stack0xffffffa4,*(int *)(*(int *)(param_1 + 0x5c) + 0x10) / 6,
                   in_stack_ffffff8c);
      pRVar2 = FUN_0055cb00((Node)0x0,in_stack_ffffffa4);
      *(Ref **)(param_1 + 0x34) = pRVar2;
      FUN_00591070("RENDER","RENDERING: %s");
      cocos2d::Ref::retain(*(Ref **)(param_1 + 0x34));
      local_8._0_1_ = 1;
      (**(code **)(**(int **)(param_1 + 0x34) + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(**(int **)(param_1 + 0x34) + 0x48))();
      (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 0x2c) + 0x108))();
      *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x70) = 1;
      if (0xf < local_18) {
        pvVar3 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar3 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_00527550(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *this;
  char *pcVar8;
  void *pvVar9;
  void *in_stack_ffffbf70;
  byte *pbVar10;
  undefined4 *local_4060;
  undefined4 *local_405c;
  void *local_4058 [4];
  undefined4 local_4048;
  uint local_4044;
  void *local_4040 [4];
  undefined4 local_4030;
  uint local_402c;
  char local_4028 [16388];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c3983;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_0042bbf0(param_3,&stack0x00000010);
  local_4030 = 0;
  local_402c = 0xf;
  local_4040[0] = (void *)((uint)local_4040[0] & 0xffffff00);
  FUN_00402690(local_4040,&DAT_005e6758,2);
  pcVar8 = local_4028;
  local_14 = 0;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00403640(local_4040,local_4028,(int)pcVar8 - (int)(local_4028 + 1));
  puVar6 = (undefined4 *)FUN_005adb0f(0x34);
  local_14._0_1_ = 1;
  local_4060 = puVar6;
  FUN_004024e0(&stack0xffffbf70,local_4040);
  local_4060 = FUN_0041c410(puVar6,in_stack_ffffbf70);
  local_14._0_1_ = 0;
  local_405c = local_4060;
  if (0 < param_2) {
    puVar6 = (undefined4 *)param_1[2];
    if ((undefined4 *)param_1[3] == puVar6) {
      FUN_00414080(param_1 + 1,puVar6,&local_4060);
      local_405c = local_4060;
    }
    else {
      *puVar6 = local_4060;
      param_1[2] = param_1[2] + 4;
    }
  }
  pbVar10 = (byte *)0x5276b1;
  local_4060 = local_405c;
  piVar7 = (int *)FUN_00591e00((undefined1 *)local_4058,"`%%%02d:%02d `7%s");
  local_14._0_1_ = 2;
  piVar2 = (int *)param_1[0xf];
  if ((int *)param_1[0x10] == piVar2) {
    FUN_004036d0(param_1 + 0xe,piVar2,piVar7);
  }
  else {
    piVar2[4] = 0;
    piVar2[5] = 0;
    iVar3 = piVar7[1];
    iVar4 = piVar7[2];
    iVar5 = piVar7[3];
    *piVar2 = *piVar7;
    piVar2[1] = iVar3;
    piVar2[2] = iVar4;
    piVar2[3] = iVar5;
    *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
    param_1[0xf] = param_1[0xf] + 0x18;
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if (0xf < local_4044) {
    pvVar9 = local_4058[0];
    if (0xfff < local_4044 + 1) {
      pvVar9 = *(void **)((int)local_4058[0] + -4);
      if (0x1f < (uint)((int)local_4058[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  local_4048 = 0;
  local_4044 = 0xf;
  local_4058[0] = (void *)((uint)local_4058[0] & 0xffffff00);
  if (0x3c < (uint)((param_1[0xf] - param_1[0xe]) / 0x18)) {
    FUN_00417680(param_1 + 0xe,&local_4060,(int *)param_1[0xe]);
    FUN_00527930(param_1,param_1[5]);
  }
  if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
    local_4060 = (undefined4 *)&stack0xffffbf74;
    FUN_004024e0(&stack0xffffbf74,(undefined4 *)(*param_1 + 0x238));
    local_14._0_1_ = 3;
    puVar6 = local_405c;
    this = FUN_00402de0();
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_00423540(this,puVar6,pbVar10);
    if (local_405c != (undefined4 *)0x0) {
      FUN_00527890(local_405c);
    }
  }
  if ((param_1[5] == 0) && ((param_1[0xf] - param_1[0xe]) - 0x18U < 0x18)) {
    FUN_00527930(param_1,0);
  }
  if (local_405c[0xc] == 4) {
    piVar2 = (int *)param_1[0x14];
    if ((int *)param_1[0x15] == piVar2) {
      FUN_00403840(param_1 + 0x13,piVar2,local_405c + 6);
    }
    else {
      FUN_004024e0(piVar2,local_405c + 6);
      param_1[0x14] = param_1[0x14] + 0x18;
    }
  }
  if (0xf < local_402c) {
    pvVar9 = local_4040[0];
    if (0xfff < local_402c + 1) {
      pvVar9 = *(void **)((int)local_4040[0] + -4);
      if (0x1f < (uint)((int)local_4040[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void * __fastcall FUN_00527890(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x2c)) {
    pvVar1 = *(void **)((int)param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x2c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0xf;
  *(undefined1 *)((int)param_1 + 0x18) = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


void __fastcall FUN_005278f0(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_00527890(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x70) = 1;
  }
  return;
}


void __thiscall FUN_00527930(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *this_00;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0x3c) - *(int *)((int)this + 0x38);
  iVar2 = iVar5 >> 0x1f;
  if (iVar5 / 0x18 + iVar2 != iVar2) {
    *(uint *)((int)this + 0x14) = param_1;
    if ((int)param_1 < 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      param_1 = 0;
    }
    else {
      uVar3 = (*(int *)((int)this + 0x3c) - *(int *)((int)this + 0x38)) / 0x18;
      if (uVar3 <= param_1) {
        param_1 = uVar3 - 1;
        *(uint *)((int)this + 0x14) = param_1;
      }
    }
    this_00 = (undefined4 *)((int)this + 0x18);
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x38) + param_1 * 0x18);
    if (this_00 != puVar1) {
      puVar4 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar4 = (undefined4 *)*puVar1;
      }
      FUN_00402690(this_00,puVar4,puVar1[4]);
    }
    if ((*(char *)(*(int *)this + 0x234) != '\0') && (this_00 != &DAT_006557e0)) {
      if (0xf < *(uint *)((int)this + 0x2c)) {
        this_00 = (undefined4 *)*this_00;
      }
      FUN_00402690(&DAT_006557e0,this_00,*(uint *)((int)this + 0x28));
    }
  }
  return;
}


undefined1 * __thiscall FUN_005279e0(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c39c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  iVar4 = *(int *)((int)this + 0x38);
  iVar2 = *(int *)((int)this + 0x3c) - iVar4;
  iVar5 = iVar2 >> 0x1f;
  local_14 = 0;
  if (iVar2 / 0x18 + iVar5 != iVar5) {
    local_18 = 0;
    do {
      puVar1 = (undefined4 *)(local_18 + iVar4);
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(param_1,puVar3,puVar1[4]);
      iVar5 = *(int *)((int)this + 0x3c);
      if (local_14 < (iVar5 - *(int *)((int)this + 0x38)) / 0x18 - 1U) {
        FUN_00403640(param_1,&DAT_005e75f8,1);
        iVar5 = *(int *)((int)this + 0x3c);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x18;
      iVar4 = *(int *)((int)this + 0x38);
    } while (local_14 < (uint)((iVar5 - *(int *)((int)this + 0x38)) / 0x18));
  }
  ExceptionList = local_10;
  return param_1;
}


void FUN_00527af0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  Node *pNVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  uint uVar14;
  char *pcVar15;
  undefined ***pppuVar16;
  Node *this;
  uint in_stack_ffffff30;
  uint in_stack_ffffff34;
  basic_string<> local_b4 [12];
  undefined4 uStack_a8;
  basic_string<> local_9c [12];
  undefined4 uStack_90;
  void *local_78;
  int local_70;
  Node *local_64;
  undefined1 *local_60;
  undefined4 *local_5c;
  Node *local_58;
  undefined4 *local_54;
  undefined **local_50;
  code *local_4c;
  void *local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int local_30;
  undefined ***pppuStack_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c3d89;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar6 = (undefined4 *)FUN_005adb0f(0x378);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527b69;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 1;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,&PTR_005ce008,0);
  local_14._0_1_ = 2;
  pvVar13 = (void *)(in_stack_ffffff30 & 0xffffff00);
  FUN_00402690(&stack0xffffff30,&PTR_005ce008,0);
  local_14 = (uint)local_14._1_3_ << 8;
  pNVar7 = FUN_00529ce0(puVar6,0,pvVar13);
  local_14 = 0xffffffff;
  local_30 = 0;
  pppuStack_2c = (undefined ***)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x527bf7;
  local_58 = pNVar7;
  FUN_00402690(&local_40,"menu_main",9);
  pvVar13 = local_40;
  local_14 = 3;
  piVar1 = *(int **)(pNVar7 + 0x314);
  if (*(int **)(pNVar7 + 0x318) == piVar1) {
    uStack_90 = 0x527c36;
    FUN_004036d0(pNVar7 + 0x310,piVar1,(int *)&local_40);
    pppuVar16 = pppuStack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *piVar1 = (int)pvVar13;
    piVar1[1] = uStack_3c;
    piVar1[2] = uStack_38;
    piVar1[3] = uStack_34;
    piVar1[4] = local_30;
    piVar1[5] = (int)pppuStack_2c;
    *(int *)(pNVar7 + 0x314) = *(int *)(pNVar7 + 0x314) + 0x18;
    pppuVar16 = (undefined ***)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < pppuVar16) {
    pvVar13 = local_40;
    if ((0xfff < (int)pppuVar16 + 1U) &&
       (pvVar13 = *(void **)((int)local_40 + -4), 0x1f < (uint)((int)local_40 + (-4 - (int)pvVar13))
       )) {
LAB_00527c63:
      local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_90 = 0x527c70;
    FUN_005adb3f(pvVar13);
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 4;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527cab;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 5;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"selectscenario=objectsinspace,selectsaveslot=0,menu=1",0x35);
  local_14._0_1_ = 6;
  pvVar13 = (void *)(in_stack_ffffff34 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Story",5);
  local_14 = CONCAT31(local_14._1_3_,4);
  local_64 = (Node *)FUN_00529b80(puVar6,0,pvVar13);
  this = pNVar7 + 0x31c;
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x527d35;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 7;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527d6d;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 8;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=2",6);
  local_14._0_1_ = 9;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Scenarios",9);
  local_14 = CONCAT31(local_14._1_3_,7);
  local_64 = (Node *)FUN_00529b80(puVar6,1,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x527def;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 10;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527e27;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0xb;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=3",6);
  local_14._0_1_ = 0xc;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,&DAT_0061e910,3);
  local_14 = CONCAT31(local_14._1_3_,10);
  local_64 = (Node *)FUN_00529b80(puVar6,7,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x527ea9;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0xd;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527ee1;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0xe;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=7",6);
  local_14._0_1_ = 0xf;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,&DAT_0061e91c,4);
  local_14 = CONCAT31(local_14._1_3_,0xd);
  local_64 = (Node *)FUN_00529b80(puVar6,5,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x527f63;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x10;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x527f9b;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x11;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=8",6);
  local_14._0_1_ = 0x12;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Credits",7);
  local_14 = CONCAT31(local_14._1_3_,0x10);
  local_64 = (Node *)FUN_00529b80(puVar6,6,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x52801d;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x13;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x528055;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x14;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=4",6);
  local_14._0_1_ = 0x15;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Options",7);
  local_14 = CONCAT31(local_14._1_3_,0x13);
  local_64 = (Node *)FUN_00529b80(puVar6,2,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x5280d7;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x16;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x52810f;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x17;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=5",6);
  local_14._0_1_ = 0x18;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Input Config",0xc);
  local_14 = CONCAT31(local_14._1_3_,0x16);
  local_64 = (Node *)FUN_00529b80(puVar6,3,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x528191;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x68);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x19;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x5281c9;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x1a;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,"menu=6",6);
  local_14._0_1_ = 0x1b;
  pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"Quit Game",9);
  uVar14 = 0;
  local_14 = CONCAT31(local_14._1_3_,0x19);
  local_64 = (Node *)FUN_00529b80(puVar6,4,pvVar13);
  local_14 = 0xffffffff;
  puVar6 = *(undefined4 **)(pNVar7 + 800);
  if (*(undefined4 **)(pNVar7 + 0x324) == puVar6) {
    uStack_90 = 0x52824b;
    FUN_004141e0(this,puVar6,&local_64);
  }
  else {
    *puVar6 = local_64;
    *(int *)(pNVar7 + 800) = *(int *)(pNVar7 + 800) + 4;
  }
  puVar6 = DAT_0065c300;
  if (DAT_0065c300 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_005adb0f(0x10);
    DAT_0065c300 = puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    local_54 = puVar6;
  }
  puVar2 = (undefined4 *)puVar6[2];
  if ((undefined4 *)puVar6[3] == puVar2) {
    uStack_90 = 0x5282a1;
    FUN_00414080(puVar6 + 1,puVar2,&local_58);
  }
  else {
    *puVar2 = pNVar7;
    puVar6[2] = puVar6[2] + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x378);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x1c;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x5282dc;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x1d;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,&PTR_005ce008,0);
  local_14._0_1_ = 0x1e;
  pvVar12 = (void *)(uVar14 & 0xffffff00);
  FUN_00402690(&stack0xffffff30,"Story",5);
  local_14 = CONCAT31(local_14._1_3_,0x1c);
  pNVar7 = FUN_00529ce0(puVar6,1,pvVar12);
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  pppuStack_2c = &local_50;
  local_4c = FUN_00529380;
  local_58 = pNVar7;
  FUN_0042e080(pppuStack_2c,(int *)(pNVar7 + 0x328));
  local_14 = 0x1f;
  if (pppuStack_2c != (undefined ***)0x0) {
    (*(code *)(*pppuStack_2c)[4])();
  }
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  pppuStack_2c = &local_50;
  local_4c = FUN_00529360;
  FUN_0042e080(pppuStack_2c,(int *)(pNVar7 + 0x350));
  local_14 = 0x20;
  if (pppuStack_2c != (undefined ***)0x0) {
    (*(code *)(*pppuStack_2c)[4])();
  }
  local_14 = 0xffffffff;
  local_30 = 0;
  pppuStack_2c = (undefined ***)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x5283e7;
  FUN_00402690(&local_40,"starting_new_game",0x11);
  pvVar8 = local_40;
  local_14 = 0x21;
  piVar1 = *(int **)(pNVar7 + 0x314);
  if (*(int **)(pNVar7 + 0x318) == piVar1) {
    uStack_90 = 0x528426;
    FUN_004036d0(pNVar7 + 0x310,piVar1,(int *)&local_40);
    pppuVar16 = pppuStack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *piVar1 = (int)pvVar8;
    piVar1[1] = uStack_3c;
    piVar1[2] = uStack_38;
    piVar1[3] = uStack_34;
    piVar1[4] = local_30;
    piVar1[5] = (int)pppuStack_2c;
    *(int *)(pNVar7 + 0x314) = *(int *)(pNVar7 + 0x314) + 0x18;
    pppuVar16 = (undefined ***)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < pppuVar16) {
    pvVar8 = local_40;
    if ((0xfff < (int)pppuVar16 + 1U) &&
       (pvVar8 = *(void **)((int)local_40 + -4), 0x1f < (uint)((int)local_40 + (-4 - (int)pvVar8))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_90 = 0x528460;
    FUN_005adb3f(pvVar8);
  }
  puVar6 = DAT_0065c300;
  if (DAT_0065c300 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_005adb0f(0x10);
    DAT_0065c300 = puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    local_54 = puVar6;
  }
  puVar2 = (undefined4 *)puVar6[2];
  if ((undefined4 *)puVar6[3] == puVar2) {
    uStack_90 = 0x5284b6;
    FUN_00414080(puVar6 + 1,puVar2,&local_58);
  }
  else {
    *puVar2 = pNVar7;
    puVar6[2] = puVar6[2] + 4;
  }
  puVar6 = (undefined4 *)FUN_005adb0f(0x378);
  local_5c = (undefined4 *)local_9c;
  local_14 = 0x22;
  local_9c[0] = (basic_string<>)0x0;
  uStack_a8 = 0x5284f1;
  local_54 = puVar6;
  FUN_00402690(local_9c,&PTR_005ce008,0);
  local_60 = local_b4;
  local_14._0_1_ = 0x23;
  local_b4[0] = (basic_string<>)0x0;
  FUN_00402690(local_b4,&PTR_005ce008,0);
  local_14._0_1_ = 0x24;
  pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
  FUN_00402690(&stack0xffffff30,"Scenarios",9);
  local_14 = CONCAT31(local_14._1_3_,0x22);
  pNVar7 = FUN_00529ce0(puVar6,2,pvVar12);
  local_14 = 0xffffffff;
  local_30 = 0;
  pppuStack_2c = (undefined ***)0xf;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  uStack_90 = 0x52857c;
  local_58 = pNVar7;
  FUN_00402690(&local_40,"submenu_scenarios",0x11);
  pvVar8 = local_40;
  local_14 = 0x25;
  piVar1 = *(int **)(pNVar7 + 0x314);
  if (*(int **)(pNVar7 + 0x318) == piVar1) {
    uStack_90 = 0x5285bb;
    FUN_004036d0(pNVar7 + 0x310,piVar1,(int *)&local_40);
    pppuVar16 = pppuStack_2c;
  }
  else {
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    *piVar1 = (int)pvVar8;
    piVar1[1] = uStack_3c;
    piVar1[2] = uStack_38;
    piVar1[3] = uStack_34;
    piVar1[4] = local_30;
    piVar1[5] = (int)pppuStack_2c;
    *(int *)(pNVar7 + 0x314) = *(int *)(pNVar7 + 0x314) + 0x18;
    pppuVar16 = (undefined ***)0xf;
  }
  local_14 = 0xffffffff;
  if (0xf < pppuVar16) {
    pvVar8 = local_40;
    if ((0xfff < (int)pppuVar16 + 1U) &&
       (pvVar8 = *(void **)((int)local_40 + -4), 0x1f < (uint)((int)local_40 + (-4 - (int)pvVar8))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_90 = 0x5285f5;
    FUN_005adb3f(pvVar8);
  }
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  pppuStack_2c = &local_50;
  local_4c = FUN_00529820;
  FUN_0042e080(pppuStack_2c,(int *)(pNVar7 + 0x328));
  local_14 = 0x26;
  if (pppuStack_2c != (undefined ***)0x0) {
    (*(code *)(*pppuStack_2c)[4])();
    pppuStack_2c = (undefined ***)0x0;
  }
  local_14 = 0xffffffff;
  puVar6 = DAT_0065c300;
  if (DAT_0065c300 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_005adb0f(0x10);
    DAT_0065c300 = puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    local_54 = puVar6;
  }
  puVar2 = (undefined4 *)puVar6[2];
  if ((undefined4 *)puVar6[3] == puVar2) {
    uStack_90 = 0x528698;
    FUN_00414080(puVar6 + 1,puVar2,&local_58);
  }
  else {
    *puVar2 = pNVar7;
    puVar6[2] = puVar6[2] + 4;
  }
  local_70 = 0;
  do {
    if ((local_70 != 7) && (local_70 != 0)) {
      pvVar8 = (void *)FUN_005adb0f(0x378);
      local_14 = 0x27;
      local_54 = (undefined4 *)local_9c;
      pcVar3 = (&PTR_s_Testing_005dfc04)[local_70];
      local_64 = (Node *)(pcVar3 + 1);
      local_9c[0] = (basic_string<>)0x0;
      pcVar15 = pcVar3;
      do {
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      uStack_a8 = 0x528703;
      FUN_00402690(local_9c,pcVar3,(int)pcVar15 - (int)local_64);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x28;
      local_b4[0] = (basic_string<>)0x0;
      FUN_00402690(local_b4,&PTR_005ce008,0);
      local_14._0_1_ = 0x29;
      pcVar3 = (&PTR_s_Testing_005dfc04)[local_70];
      local_64 = (Node *)(pcVar3 + 1);
      pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
      pcVar15 = pcVar3;
      do {
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      FUN_00402690(&stack0xffffff30,pcVar3,(int)pcVar15 - (int)local_64);
      local_14 = CONCAT31(local_14._1_3_,0x27);
      pNVar7 = FUN_00529ce0(pvVar8,local_70 + 0x14,pvVar12);
      local_14 = 0xffffffff;
      local_30 = 0;
      pppuStack_2c = (undefined ***)0xf;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      uStack_90 = 0x5287aa;
      local_64 = pNVar7;
      local_58 = pNVar7;
      FUN_00402690(&local_40,"submenu_scenariolist",0x14);
      pvVar8 = local_40;
      local_14 = 0x2a;
      piVar1 = *(int **)(pNVar7 + 0x314);
      if (*(int **)(pNVar7 + 0x318) == piVar1) {
        uStack_90 = 0x5287e9;
        FUN_004036d0(pNVar7 + 0x310,piVar1,(int *)&local_40);
        pppuVar16 = pppuStack_2c;
      }
      else {
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        *piVar1 = (int)pvVar8;
        piVar1[1] = uStack_3c;
        piVar1[2] = uStack_38;
        piVar1[3] = uStack_34;
        piVar1[4] = local_30;
        piVar1[5] = (int)pppuStack_2c;
        *(int *)(pNVar7 + 0x314) = *(int *)(pNVar7 + 0x314) + 0x18;
        pppuVar16 = (undefined ***)0xf;
      }
      local_14 = 0xffffffff;
      if (0xf < pppuVar16) {
        pvVar8 = local_40;
        if ((0xfff < (int)pppuVar16 + 1U) &&
           (pvVar8 = *(void **)((int)local_40 + -4),
           0x1f < (uint)((int)local_40 + (-4 - (int)pvVar8)))) goto LAB_00527c63;
        uStack_90 = 0x528821;
        FUN_005adb3f(pvVar8);
      }
      local_50 = std::_Func_impl_no_alloc<>::vftable;
      pppuStack_2c = &local_50;
      local_4c = FUN_005299d0;
      FUN_0042e080(pppuStack_2c,(int *)(pNVar7 + 0x350));
      local_14 = 0x2b;
      if (pppuStack_2c != (undefined ***)0x0) {
        (*(code *)(*pppuStack_2c)[4])();
      }
      local_14 = 0xffffffff;
      uStack_90 = 0x52887c;
      FUN_00402690(pNVar7 + 0x280,"selectscenario=",0xf);
      local_78 = (void *)0x0;
      puVar2 = *(undefined4 **)(DAT_0065b5cc + 100);
      puVar10 = DAT_0065c300;
      for (puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x60); DAT_0065c300 = puVar10, puVar6 != puVar2;
          puVar6 = puVar6 + 1) {
        puVar10 = (undefined4 *)*puVar6;
        if (puVar10[0x1a] == local_70) {
          local_60 = (undefined1 *)FUN_005adb0f(0x68);
          local_54 = (undefined4 *)local_9c;
          local_14 = 0x2c;
          local_9c[0] = (basic_string<>)0x0;
          uStack_a8 = 0x5288e1;
          FUN_00402690(local_9c,&PTR_005ce008,0);
          local_14._0_1_ = 0x2d;
          local_5c = (undefined4 *)local_b4;
          FUN_00591e00(local_b4,"selectscenario=%s");
          local_14._0_1_ = 0x2e;
          FUN_004024e0(&stack0xffffff34,puVar10 + 6);
          local_14 = CONCAT31(local_14._1_3_,0x2c);
          pvVar12 = local_78;
          local_5c = FUN_00529b80(local_60,local_78,pvVar13);
          local_78 = (void *)((int)local_78 + 1);
          local_14 = 0xffffffff;
          local_54 = local_5c;
          if (local_5c + 0x13 != puVar10) {
            puVar9 = puVar10;
            if (0xf < (uint)puVar10[5]) {
              puVar9 = (undefined4 *)*puVar10;
            }
            uStack_90 = 0x528950;
            FUN_00402690(local_5c + 0x13,puVar9,puVar10[4]);
          }
          puVar10 = *(undefined4 **)(local_64 + 800);
          if (*(undefined4 **)(local_64 + 0x324) == puVar10) {
            uStack_90 = 0x528976;
            FUN_004141e0(local_64 + 0x31c,puVar10,&local_54);
          }
          else {
            *puVar10 = local_5c;
            *(int *)(local_64 + 800) = *(int *)(local_64 + 800) + 4;
          }
        }
        puVar10 = DAT_0065c300;
      }
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)FUN_005adb0f(0x10);
        DAT_0065c300 = puVar10;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
      }
      puVar6 = (undefined4 *)puVar10[2];
      if ((undefined4 *)puVar10[3] == puVar6) {
        uStack_90 = 0x5289e0;
        FUN_00414080(puVar10 + 1,puVar6,&local_58);
      }
      else {
        *puVar6 = local_64;
        puVar10[2] = puVar10[2] + 4;
      }
    }
    local_70 = local_70 + 1;
    if (7 < local_70) {
      pvVar8 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x2f;
      local_9c[0] = (basic_string<>)0x0;
      uStack_a8 = 0x528a28;
      FUN_00402690(local_9c,&PTR_005ce008,0);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x30;
      local_b4[0] = (basic_string<>)0x0;
      FUN_00402690(local_b4,&PTR_005ce008,0);
      local_14._0_1_ = 0x31;
      pvVar12 = (void *)((uint)pvVar12 & 0xffffff00);
      FUN_00402690(&stack0xffffff30,&DAT_0061e910,3);
      local_14 = CONCAT31(local_14._1_3_,0x2f);
      pNVar7 = FUN_00529ce0(pvVar8,3,pvVar12);
      local_14 = 0xffffffff;
      local_30 = 0;
      pppuStack_2c = (undefined ***)0xf;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      uStack_90 = 0x528ab3;
      local_58 = pNVar7;
      FUN_00402690(&local_40,"submenu_multi",0xd);
      pvVar8 = local_40;
      local_14 = 0x32;
      puVar4 = *(uint **)(pNVar7 + 0x314);
      if (*(uint **)(pNVar7 + 0x318) == puVar4) {
        uStack_90 = 0x528afb;
        FUN_004036d0(pNVar7 + 0x310,(int *)puVar4,(int *)&local_40);
      }
      else {
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        *puVar4 = (uint)pvVar8;
        puVar4[1] = uStack_3c;
        puVar4[2] = uStack_38;
        puVar4[3] = uStack_34;
        *(ulonglong *)(puVar4 + 4) = CONCAT44(pppuStack_2c,local_30);
        *(int *)(pNVar7 + 0x314) = *(int *)(pNVar7 + 0x314) + 0x18;
        local_30 = 0;
        pppuStack_2c = (undefined ***)0xf;
      }
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      FUN_00529a60(pNVar7 + 0x328,0x5295b0);
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar8 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x33;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x34;
      std::basic_string<>::basic_string<>(local_b4,"options");
      local_14._0_1_ = 0x35;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Options");
      local_14 = CONCAT31(local_14._1_3_,0x33);
      pNVar7 = FUN_00529ce0(pvVar8,4,pvVar12);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_options");
      local_14 = 0x36;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar8 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x37;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x38;
      std::basic_string<>::basic_string<>(local_b4,"input");
      local_14._0_1_ = 0x39;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Input Configuration");
      local_14 = CONCAT31(local_14._1_3_,0x37);
      pNVar7 = FUN_00529ce0(pvVar8,5,pvVar12);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_input");
      local_14 = 0x3a;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar8 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x3b;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x3c;
      std::basic_string<>::basic_string<>(local_b4,(char *)&PTR_005ce008);
      local_14._0_1_ = 0x3d;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Quit?");
      local_14 = CONCAT31(local_14._1_3_,0x3b);
      pNVar7 = FUN_00529ce0(pvVar8,6,pvVar12);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      pvVar12 = (void *)FUN_005adb0f(0x68);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x3e;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x3f;
      std::basic_string<>::basic_string<>(local_b4,"quit");
      local_14._0_1_ = 0x40;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff34,"Yes");
      local_14 = CONCAT31(local_14._1_3_,0x3e);
      local_54 = FUN_00529b80(pvVar12,0,pvVar13);
      local_14 = 0xffffffff;
      FUN_004130e0(pNVar7 + 0x31c,&local_54);
      pvVar12 = (void *)FUN_005adb0f(0x68);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x41;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x42;
      std::basic_string<>::basic_string<>(local_b4,"menu=0");
      local_14._0_1_ = 0x43;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff34,"No");
      pvVar8 = (void *)0x1;
      local_14 = CONCAT31(local_14._1_3_,0x41);
      local_54 = FUN_00529b80(pvVar12,1,pvVar13);
      local_14 = 0xffffffff;
      FUN_004130e0(pNVar7 + 0x31c,&local_54);
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x44;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x45;
      std::basic_string<>::basic_string<>(local_b4,"news");
      local_14._0_1_ = 0x46;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"News");
      local_14 = CONCAT31(local_14._1_3_,0x44);
      pNVar7 = FUN_00529ce0(pvVar13,7,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_news");
      local_14 = 0x47;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"continue");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"News");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x48;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x49;
      std::basic_string<>::basic_string<>(local_b4,"credits");
      local_14._0_1_ = 0x4a;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Credits");
      local_14 = CONCAT31(local_14._1_3_,0x48);
      pNVar7 = FUN_00529ce0(pvVar13,8,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_credits");
      local_14 = 0x4b;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"back");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"Credits");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x4c;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x4d;
      std::basic_string<>::basic_string<>(local_b4,"gameover");
      local_14._0_1_ = 0x4e;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Results");
      local_14 = CONCAT31(local_14._1_3_,0x4c);
      pNVar7 = FUN_00529ce0(pvVar13,9,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_gameover");
      local_14 = 0x4f;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"back");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"Results");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x50;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x51;
      std::basic_string<>::basic_string<>(local_b4,"manualip");
      local_14._0_1_ = 0x52;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Manual Connection");
      local_14 = CONCAT31(local_14._1_3_,0x50);
      pNVar7 = FUN_00529ce0(pvVar13,0xb,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_manualconnection");
      local_14 = 0x53;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"back");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"Manual Connection");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x54;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x55;
      std::basic_string<>::basic_string<>(local_b4,"multichat");
      local_14._0_1_ = 0x56;
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff30,"Multiplayer - Chat");
      local_14 = CONCAT31(local_14._1_3_,0x54);
      pNVar7 = FUN_00529ce0(pvVar13,0xc,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_multichat");
      local_14 = 0x57;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"back");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"Multiplayer - Chat");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      pvVar13 = (void *)FUN_005adb0f(0x378);
      local_54 = (undefined4 *)local_9c;
      local_14 = 0x58;
      std::basic_string<>::basic_string<>(local_9c,(char *)&PTR_005ce008);
      local_5c = (undefined4 *)local_b4;
      local_14._0_1_ = 0x59;
      std::basic_string<>::basic_string<>(local_b4,"multioptions");
      local_14._0_1_ = 0x5a;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff30,"Multiplayer - Options");
      local_14 = CONCAT31(local_14._1_3_,0x58);
      pNVar7 = FUN_00529ce0(pvVar13,0xd,pvVar8);
      local_14 = 0xffffffff;
      local_58 = pNVar7;
      std::basic_string<>::basic_string<>((basic_string<> *)&local_40,"submenu_multioptions");
      local_14 = 0x5b;
      FUN_00403330(pNVar7 + 0x310,(int *)&local_40);
      local_14 = 0xffffffff;
      FUN_00401b20((int *)&local_40);
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x298),"back");
      SimpleString::operator=((SimpleString *)(pNVar7 + 0x2c8),"Multiplayer - Options");
      iVar11 = FUN_00529a20();
      FUN_00412900((void *)(iVar11 + 4),&local_58);
      iVar11 = DAT_0065b5cc;
      if (*(int *)(DAT_0065b5cc + 0x154) == -1) {
        cVar5 = FUN_00403260(&DAT_00655738,(byte *)&PTR_005ce008);
        if ((cVar5 != '\0') ||
           (uVar14 = FUN_00403180((byte *)&DAT_00655738,(byte *)"1.0.8"), (char)uVar14 != '\0')) {
          puVar6 = (undefined4 *)FUN_00529a20();
          *puVar6 = 7;
          SimpleString::operator=((SimpleString *)&DAT_00655738,"1.0.8");
          FUN_004b2910();
        }
      }
      else {
        puVar6 = (undefined4 *)FUN_00529a20();
        *puVar6 = *(undefined4 *)(iVar11 + 0x154);
        *(undefined4 *)(DAT_0065b5cc + 0x154) = 0xffffffff;
      }
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}
