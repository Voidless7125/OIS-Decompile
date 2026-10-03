#include "../ois_server.exe.h"


void __fastcall FUN_005382e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_8;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x650);
  if (*(int *)(param_1 + 0x654) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x650) + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x650);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x654) - iVar3 >> 2));
  }
  *(int *)(param_1 + 0x654) = iVar3;
  if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3d0) = 0;
  }
  if (*(int **)(param_1 + 0x3d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3d4) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3d4) = 0;
  }
  if (*(int **)(param_1 + 0x3d8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3d8) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  if (*(int **)(param_1 + 0x3e0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3e0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3e0) = 0;
  }
  if (*(int **)(param_1 + 0x3e4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3e4) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  if (*(int **)(param_1 + 0x3dc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3dc) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x3dc) = 0;
  }
  if (*(int **)(param_1 + 1000) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 1000) + 0x138))(1);
    *(undefined4 *)(param_1 + 1000) = 0;
  }
  puVar5 = (undefined4 *)(param_1 + 0x624);
  local_8 = 10;
  do {
    puVar2 = (undefined4 *)*puVar5;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00553d40(puVar2);
      FUN_005adb3f(puVar2);
      *puVar5 = 0;
    }
    puVar5 = puVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x65c);
  if (*(int *)(param_1 + 0x660) - iVar3 >> 2 != 0) {
    do {
      cocos2d::Ref::autorelease(*(Ref **)(*(int *)(*(int *)(param_1 + 0x65c) + uVar4 * 4) + 0x18));
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x65c);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x660) - iVar3 >> 2));
  }
  *(int *)(param_1 + 0x660) = iVar3;
  return;
}


void __fastcall FUN_005384b0(void *param_1)

{
  char cVar1;
  int iVar2;
  byte ***pppbVar3;
  int iVar4;
  uint uVar5;
  byte ****ppppbVar6;
  uint uVar7;
  void *this;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  bool bVar14;
  byte *in_stack_ffffff64;
  byte *in_stack_ffffff7c;
  char *pcVar15;
  byte *in_stack_ffffff94;
  uint local_38;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c505f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)param_1 + 0x3c) != 6) goto LAB_00538922;
  if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    if (DAT_0065b3d4 == 0) {
      puVar13 = (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x174) + 0x80);
    }
    else {
      puVar13 = (undefined4 *)(DAT_0065b3d4 + 0x238);
    }
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)param_1 + 0x58));
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff7c,puVar13);
    local_8 = (uint)local_8._1_3_ << 8;
    iVar4 = FUN_004a7af0(in_stack_ffffff7c);
    local_8 = 0xffffffff;
    if (iVar4 == 0) goto LAB_00538576;
LAB_00538750:
    if ((*(int *)((int)param_1 + 0x100) == 0) ||
       (*(int *)(*(int *)((int)param_1 + 0x100) + 0x1c) != iVar4)) {
      if (*(char *)(iVar4 + 9) == '\0') {
        if (*(char *)(iVar4 + 8) == '\0') {
          if (DAT_0065b3d4 == 0) {
            puVar13 = (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x174) + 0x80);
          }
          else {
            puVar13 = (undefined4 *)(DAT_0065b3d4 + 0x238);
          }
          FUN_004024e0(&stack0xffffff94,(undefined4 *)(iVar4 + 0xf8));
          local_8 = 3;
          FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)param_1 + 0x58));
          local_8._0_1_ = 4;
          FUN_004024e0(&stack0xffffff64,puVar13);
          local_8 = CONCAT31(local_8._1_3_,3);
          iVar4 = FUN_004a7d60(in_stack_ffffff64);
          local_8 = 0xffffffff;
          FUN_0053ca40(param_1,iVar4,in_stack_ffffff94);
        }
        else if ((*(int *)(iVar4 + 0xf0) - *(int *)(iVar4 + 0xec) & 0xfffffffcU) != 0) {
          FUN_004024e0(&stack0xffffff94,(undefined4 *)(iVar4 + 0xf8));
          FUN_0053ca40(param_1,**(int **)(iVar4 + 0xec),in_stack_ffffff94);
        }
      }
      else {
        FUN_0053c9a0((int)param_1);
        this = (void *)FUN_005adb0f(0x7c);
        local_8 = 2;
        FUN_004024e0(&stack0xffffff94,(undefined4 *)(iVar4 + 0xf8));
        puVar8 = FUN_00535e70(this,in_stack_ffffff94);
        local_8 = 0xffffffff;
        puVar13 = (undefined4 *)((int)param_1 + 0x98);
        *(undefined4 **)((int)param_1 + 0x100) = puVar8;
        *(undefined4 *)((int)param_1 + 0xa8) = 0;
        puVar8 = puVar13;
        if (0xf < *(uint *)((int)param_1 + 0xac)) {
          puVar8 = (undefined4 *)*puVar13;
        }
        *(undefined1 *)puVar8 = 0;
        pcVar15 = (&PTR_s_standing_005dfce4)[*(int *)((int)param_1 + 0xe4)];
        pcVar11 = pcVar15;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_00403640(puVar13,pcVar15,(int)pcVar11 - (int)(pcVar15 + 1));
        FUN_00403640(puVar13,&DAT_0061bc80,1);
        pcVar15 = "normal";
        do {
          pcVar11 = pcVar15;
          pcVar15 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        FUN_00403640(puVar13,"normal",(uint)(pcVar11 + -0x619ef4));
        *(undefined4 *)((int)param_1 + 0xe8) = 0;
        *(undefined4 *)((int)param_1 + 0x69c) =
             *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x1c) + 0x40);
      }
    }
  }
  else {
LAB_00538576:
    local_8 = 0xffffffff;
    pbVar10 = (byte *)((int)param_1 + 0x58);
    pbVar12 = pbVar10;
    if (0xf < *(uint *)((int)param_1 + 0x6c)) {
      pbVar12 = *(byte **)pbVar10;
    }
    uVar5 = FUN_004031f0(pbVar12,*(uint *)((int)param_1 + 0x68),(byte *)"playership_spawn_cabin",
                         0x16);
    if (((char)uVar5 != '\0') && (*(int *)(DAT_0065b5cc + 0x128) != 0)) {
      in_stack_ffffff94 = (byte *)((uint)in_stack_ffffff94 & 0xffffff00);
      if (*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 4) == 1) {
        uVar5 = 0xd;
        pcVar15 = "malepassenger";
      }
      else {
        uVar5 = 0xf;
        pcVar15 = "femalepassenger";
      }
      FUN_00402690(&stack0xffffff94,pcVar15,uVar5);
      iVar4 = FUN_004a76c0(in_stack_ffffff94);
      if (iVar4 != 0) goto LAB_00538750;
    }
    if (DAT_0065b3d4 != 0) {
      bVar14 = false;
      if (*(int *)(DAT_0065b3d4 + 0x254) != 0) {
        bVar14 = *(int *)(*(int *)(DAT_0065b3d4 + 0x254) + 0x158) == 1;
      }
      if (bVar14) {
        FUN_004024e0(local_2c,(undefined4 *)pbVar10);
        uVar5 = local_18;
        pppbVar3 = local_2c[0];
        local_38 = 0;
        iVar4 = *(int *)(DAT_0065b3d4 + 0x3ec);
        iVar9 = *(int *)(DAT_0065b3d4 + 0x3f0) - iVar4;
        iVar2 = iVar9 >> 0x1f;
        if (iVar9 / 0x1c + iVar2 != iVar2) {
          pbVar12 = (byte *)(iVar4 + 4);
          do {
            ppppbVar6 = local_2c;
            if (0xf < uVar5) {
              ppppbVar6 = (byte ****)pppbVar3;
            }
            pbVar10 = pbVar12;
            if (0xf < *(uint *)(pbVar12 + 0x14)) {
              pbVar10 = *(byte **)pbVar12;
            }
            uVar7 = FUN_004031f0(pbVar10,*(uint *)(pbVar12 + 0x10),(byte *)ppppbVar6,local_1c);
            if ((char)uVar7 != '\0') {
              iVar4 = *(int *)(iVar4 + local_38 * 0x1c);
              if (0xf < local_18) {
                ppppbVar6 = (byte ****)pppbVar3;
                if ((0xfff < local_18 + 1) &&
                   (ppppbVar6 = (byte ****)pppbVar3[-1],
                   (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(ppppbVar6);
              }
              goto LAB_00538733;
            }
            pbVar12 = pbVar12 + 0x1c;
            local_38 = local_38 + 1;
          } while (local_38 <
                   (uint)((*(int *)(DAT_0065b3d4 + 0x3f0) - *(int *)(DAT_0065b3d4 + 0x3ec)) / 0x1c))
          ;
        }
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)pppbVar3;
          if ((0xfff < local_18 + 1) &&
             (ppppbVar6 = (byte ****)pppbVar3[-1],
             (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar6);
        }
        iVar4 = 0;
LAB_00538733:
        local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
        local_18 = 0xf;
        local_1c = 0;
        if (iVar4 != 0) goto LAB_00538750;
      }
    }
    if (*(int *)((int)param_1 + 0x100) != 0) {
      FUN_0053c9a0((int)param_1);
    }
  }
LAB_00538922:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00538940(int param_1)

{
  undefined8 *puVar1;
  Vec3 *pVVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  Vec3 local_4c [12];
  Vec3 local_40 [12];
  Vec3 local_34 [16];
  Vec3 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c50cf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x3f4) != '\0') {
    iVar5 = *(int *)(param_1 + 0x3f0);
    *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(iVar5 + 0x80);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(iVar5 + 0x88);
    if (((*(float *)(param_1 + 0x428) == 0.0) && (*(float *)(param_1 + 0x42c) == 0.0)) &&
       (*(float *)(param_1 + 0x430) == 0.0)) {
      *(undefined8 *)(param_1 + 0x41c) = *(undefined8 *)(iVar5 + 0x74);
      *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(iVar5 + 0x7c);
    }
    else {
      cocos2d::Vec3::Vec3(local_24);
      local_8 = 0;
      puVar1 = (undefined8 *)
               cocos2d::Vec3::operator-((Vec3 *)(*(int *)(param_1 + 0x3f0) + 0x74),local_34);
      *(undefined8 *)(param_1 + 0x41c) = *puVar1;
      *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(puVar1 + 1);
      cocos2d::Vec3::~Vec3(local_34);
      FUN_00591070("DETAIL","relative object pos = %f, %f, %f");
      local_8 = 0xffffffff;
      cocos2d::Vec3::~Vec3(local_24);
    }
  }
  if (*(int *)(param_1 + 0x3dc) != 0) {
    if (*(char *)(param_1 + 0x34c) == '\0') {
      cocos2d::Vec3::operator+((Vec3 *)(param_1 + 0x2f0),local_34);
      local_8 = 4;
      cocos2d::Vec3::operator*(local_34,(float)local_24);
      cocos2d::Vec3::~Vec3(local_34);
      local_8 = 5;
      (**(code **)(**(int **)(param_1 + 0x3dc) + 0x78))();
      pVVar2 = local_24;
    }
    else {
      iVar5 = param_1 + 0x350;
      pVVar2 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)(param_1 + 0x2f0),local_40);
      local_8 = 1;
      uVar4 = CONCAT44(iVar5,param_1 + 0x41c);
      cocos2d::Vec3::operator+(pVVar2,local_24);
      local_8._0_1_ = 2;
      uVar3 = DAT_006550a4;
      cocos2d::Vec3::operator*(local_24,(float)local_34);
      cocos2d::Vec3::~Vec3(local_24);
      local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(**(int **)(param_1 + 0x3dc) + 0x78))(local_34,uVar3,uVar4);
      cocos2d::Vec3::~Vec3(local_34);
      pVVar2 = local_40;
    }
    local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(pVVar2);
    if (*(char *)(param_1 + 0x318) != '\0') {
      (**(code **)(**(int **)(param_1 + 0x3dc) + 0xcc))();
      ExceptionList = local_10;
      return;
    }
    uVar3 = cocos2d::Vec3::operator+((Vec3 *)(param_1 + 0x2fc),local_4c);
    local_8 = 6;
    (**(code **)(**(int **)(param_1 + 0x3dc) + 0xc4))(uVar3);
    cocos2d::Vec3::~Vec3(local_4c);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00538bd0(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  Color3B *pCVar7;
  DirectionLight *this_00;
  Sprite *pSVar8;
  Vec3 *pVVar9;
  PointLight *pPVar10;
  SpotLight *pSVar11;
  Sprite3D *pSVar12;
  long lVar13;
  Mesh *pMVar14;
  undefined4 ****ppppuVar15;
  uint uVar16;
  char *pcVar17;
  basic_string<> *pbVar18;
  Texture2D *pTVar19;
  basic_string<> *pbVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined4 ***pppuVar24;
  byte *pbVar25;
  void *pvVar26;
  undefined4 ****ppppuVar27;
  Color3B *pCVar28;
  code *pcVar29;
  int iVar30;
  byte *in_stack_fffffeec;
  undefined4 *in_stack_ffffff04;
  undefined4 *in_stack_ffffff08;
  undefined4 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uStack_e0;
  Vec3 local_d0 [16];
  Vec3 local_c0 [8];
  float local_b8;
  int *local_b4;
  undefined4 local_b0;
  char local_aa;
  char local_a9;
  void *local_a8 [5];
  uint local_94;
  void *local_90 [3];
  Vec3 local_84 [4];
  undefined4 local_80;
  uint local_7c;
  void *local_78 [2];
  Vec3 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68;
  uint local_64;
  void *local_60 [2];
  Vec3 local_58 [4];
  undefined4 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 ***local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c5234;
  local_1c = ExceptionList;
  uStack_e0 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  local_20 = (undefined1 *)&uStack_e0;
  ExceptionList = &local_1c;
  local_b4 = param_1;
  local_2c = uStack_e0;
  FUN_005384b0(this);
  if ((*(int *)((int)this + 0x3c) == 6) && (*(int *)((int)this + 0x100) == 0)) {
    FUN_005382e0((int)this);
    FUN_0053a2ae();
    return;
  }
  if (*(int *)((int)this + 0x54) != -1) {
    iVar6 = *(int *)((int)this + 0x70);
    if (iVar6 == 0) {
      iVar6 = FUN_00535330(*(void **)((int)this + 0x3f0),*(int *)((int)this + 0x54));
      *(int *)((int)this + 0x70) = iVar6;
    }
    if (*(char *)((int)this + 0x449) == '\0') {
      *(undefined8 *)((int)this + 0x2f0) = *(undefined8 *)(iVar6 + 0x2f0);
      *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(iVar6 + 0x2f8);
      *(undefined8 *)((int)this + 0x2fc) = *(undefined8 *)(iVar6 + 0x2fc);
      *(undefined4 *)((int)this + 0x304) = *(undefined4 *)(iVar6 + 0x304);
      uVar2 = *(undefined4 *)(iVar6 + 0x30c);
      uVar3 = *(undefined4 *)(iVar6 + 0x310);
      uVar4 = *(undefined4 *)(iVar6 + 0x314);
      *(undefined4 *)((int)this + 0x308) = *(undefined4 *)(iVar6 + 0x308);
      *(undefined4 *)((int)this + 0x30c) = uVar2;
      *(undefined4 *)((int)this + 0x310) = uVar3;
      *(undefined4 *)((int)this + 0x314) = uVar4;
      *(undefined4 *)((int)this + 0x2e4) = *(undefined4 *)(iVar6 + 0x2e4);
      *(undefined4 *)((int)this + 0x2e8) = *(undefined4 *)(iVar6 + 0x2e8);
      *(undefined4 *)((int)this + 0x2ec) = *(undefined4 *)(iVar6 + 0x2ec);
    }
  }
  FUN_00538940((int)this);
  FUN_005382e0((int)this);
  iVar6 = *(int *)((int)this + 0x3c);
  if ((iVar6 == 0) || (iVar6 == 4)) {
    iVar6 = *(int *)((int)this + 0x7c);
    local_a9 = '\0';
    pbVar22 = (byte *)((int)this + iVar6 * 0x18 + 0x104);
    if (0xf < *(uint *)((int)this + iVar6 * 0x18 + 0x118)) {
      pbVar22 = *(byte **)((int)this + iVar6 * 0x18 + 0x104);
    }
    uVar16 = FUN_004031f0(pbVar22,*(uint *)((int)this + iVar6 * 0x18 + 0x114),
                          (byte *)"Ceres_Airlock_Door",0x12);
    if ((char)uVar16 != '\0') {
      cocos2d::log((char *)&param_1_005ea640);
    }
    local_14 = 0;
    puVar31 = (undefined4 *)((int)this + *(int *)((int)this + 0x7c) * 0x18 + 0x104);
    puVar21 = puVar31;
    if (0xf < *(uint *)((int)this + *(int *)((int)this + 0x7c) * 0x18 + 0x118)) {
      puVar21 = (undefined4 *)*puVar31;
    }
    uVar16 = FUN_0042eeb0((int)puVar21,puVar31[4],0,&DAT_00620180,4);
    iVar6 = *(int *)((int)this + 0x78);
    if (uVar16 == 0xffffffff) {
      local_a9 = '\x01';
      local_b0 = (Sprite3D *)(iVar6 * 0x18 + 500 + (int)this);
      local_64 = *(uint *)(local_b0 + 0x14);
      pSVar12 = local_b0;
      if (0xf < local_64) {
        pSVar12 = *(Sprite3D **)local_b0;
      }
      uVar16 = FUN_004031f0((byte *)pSVar12,*(uint *)(local_b0 + 0x10),(byte *)&PTR_005ce008,0);
      if ((char)uVar16 != '\0') {
        FUN_004024e0(&stack0xffffff08,puVar31);
        FUN_0058ed50(local_60,in_stack_ffffff08);
        local_14._0_1_ = 6;
        pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_48,"%s.c3b");
        local_14._0_1_ = 7;
        pSVar12 = cocos2d::Sprite3D::create(pbVar18);
        *(Sprite3D **)((int)this + 0x3dc) = pSVar12;
        local_14._0_1_ = 6;
        goto LAB_0053965e;
      }
      pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_a8,"%s.png");
      local_14._0_1_ = 8;
      FUN_004024e0(&stack0xffffff04,
                   (undefined4 *)(*(int *)((int)this + 0x7c) * 0x18 + 0x104 + (int)this));
      FUN_0058ed50(local_60,in_stack_ffffff04);
      local_14._0_1_ = 9;
      pbVar20 = (basic_string<> *)FUN_00591e00((undefined1 *)local_48,"%s.c3b");
      local_14._0_1_ = 10;
      pSVar12 = cocos2d::Sprite3D::create(pbVar20,pbVar18);
      local_14._0_1_ = 9;
      *(Sprite3D **)((int)this + 0x3dc) = pSVar12;
      if (0xf < local_34) {
        ppppuVar27 = (undefined4 ****)local_48[0];
        if ((0xfff < local_34 + 1) &&
           (ppppuVar27 = (undefined4 ****)local_48[0][-1],
           0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) goto LAB_00539684;
        FUN_005adb3f(ppppuVar27);
      }
      local_14._0_1_ = 8;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
      if (0xf < local_4c) {
        pvVar26 = local_60[0];
        if ((0xfff < local_4c + 1) &&
           (pvVar26 = *(void **)((int)local_60[0] + -4),
           0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar26)))) goto LAB_00539684;
        FUN_005adb3f(pvVar26);
      }
      local_14._0_1_ = 0;
      local_50 = 0;
      local_4c = 0xf;
      local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
      if (0xf < local_94) {
        pvVar26 = local_a8[0];
        if ((0xfff < local_94 + 1) &&
           (pvVar26 = *(void **)((int)local_a8[0] + -4),
           0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar26)))) goto LAB_00539684;
        goto LAB_00539a16;
      }
    }
    else {
      pbVar22 = (byte *)((int)this + iVar6 * 0x18 + 500);
      if (0xf < *(uint *)((int)this + iVar6 * 0x18 + 0x208)) {
        pbVar22 = *(byte **)((int)this + iVar6 * 0x18 + 500);
      }
      uVar16 = FUN_004031f0(pbVar22,*(uint *)((int)this + iVar6 * 0x18 + 0x204),
                            (byte *)&PTR_005ce008,0);
      if ((char)uVar16 == '\0') {
        FUN_004024e0(&stack0xffffff08,puVar31);
        pcVar17 = FUN_0058ed50(local_78,in_stack_ffffff08);
        local_14._0_1_ = 3;
        if (0xf < *(uint *)(pcVar17 + 0x14)) {
          pcVar17 = *(char **)pcVar17;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        pcVar23 = pcVar17;
        do {
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        FUN_00402690(local_48,pcVar17,(int)pcVar23 - (int)(pcVar17 + 1));
        local_14._0_1_ = 4;
        pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_60,"%s.png");
        local_14._0_1_ = 5;
        pSVar12 = cocos2d::Sprite3D::create((basic_string<> *)local_48,pbVar18);
        local_14._0_1_ = 4;
        *(Sprite3D **)((int)this + 0x3dc) = pSVar12;
        if (0xf < local_4c) {
          pvVar26 = local_60[0];
          if ((0xfff < local_4c + 1) &&
             (pvVar26 = *(void **)((int)local_60[0] + -4),
             0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar26)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar26);
        }
        local_14._0_1_ = 3;
        local_50 = 0;
        local_4c = 0xf;
        local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
        if (0xf < local_34) {
          pppuVar24 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pppuVar24 = (undefined4 ***)local_48[0][-1],
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pppuVar24)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppuVar24);
        }
        local_14._0_1_ = 0;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        if (local_64 < 0x10) goto LAB_00539a20;
        pvVar26 = local_78[0];
        if ((0xfff < local_64 + 1) &&
           (pvVar26 = *(void **)((int)local_78[0] + -4),
           0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar26)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        FUN_004024e0(&stack0xffffff08,puVar31);
        pcVar17 = FUN_0058ed50(local_60,in_stack_ffffff08);
        local_14._0_1_ = 1;
        if (0xf < *(uint *)(pcVar17 + 0x14)) {
          pcVar17 = *(char **)pcVar17;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        pcVar23 = pcVar17;
        do {
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        FUN_00402690(local_48,pcVar17,(int)pcVar23 - (int)(pcVar17 + 1));
        local_14._0_1_ = 2;
        pSVar12 = cocos2d::Sprite3D::create((basic_string<> *)local_48);
        *(Sprite3D **)((int)this + 0x3dc) = pSVar12;
        local_14._0_1_ = 1;
LAB_0053965e:
        if (0xf < local_34) {
          ppppuVar27 = (undefined4 ****)local_48[0];
          if ((0xfff < local_34 + 1) &&
             (ppppuVar27 = (undefined4 ****)local_48[0][-1],
             0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) goto LAB_00539684;
          FUN_005adb3f(ppppuVar27);
        }
        local_14._0_1_ = 0;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        if (local_4c < 0x10) goto LAB_00539a20;
        pvVar26 = local_60[0];
        if ((0xfff < local_4c + 1) &&
           (pvVar26 = *(void **)((int)local_60[0] + -4),
           0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar26)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_00539a16:
      local_14._0_1_ = 0;
      FUN_005adb3f(pvVar26);
    }
LAB_00539a20:
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    if (local_a9 == '\0') {
      iVar30 = 0;
      iVar6 = (**(code **)(**(int **)((int)this + 0x3dc) + 0x124))();
      if (0 < iVar6) {
        do {
          local_b0 = (Sprite3D *)(**(code **)(**(int **)((int)this + 0x3dc) + 0x120))();
          if (((iVar30 < 0) || (*(int *)((int)local_b0 + 4) - *(int *)local_b0 >> 2 <= iVar30)) &&
             (bVar5 = cc_assert_script_compatible("index out of range in getObjectAtIndex()"),
             !bVar5)) {
            cocos2d::log("Assert failed: %s");
          }
          local_b0 = *(Sprite3D **)(*(int *)local_b0 + iVar30 * 4);
          lVar13 = cocos2d::Sprite3D::getMeshCount(local_b0);
          if (lVar13 != 0) {
            pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_a8,"%s.png");
            local_14 = 0xc;
            cocos2d::Sprite3D::setTexture(local_b0,pbVar18);
            local_14._0_1_ = 0xff;
            local_14._1_3_ = 0xffffff;
            if (0xf < local_94) {
              pvVar26 = local_a8[0];
              if ((0xfff < local_94 + 1) &&
                 (pvVar26 = *(void **)((int)local_a8[0] + -4),
                 0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar26)))) goto LAB_00539241;
              FUN_005adb3f(pvVar26);
            }
            local_aa = *(char *)((int)this + 0x440);
            pMVar14 = cocos2d::Sprite3D::getMesh(local_b0);
            pTVar19 = cocos2d::Mesh::getTexture(pMVar14);
            local_3c = 0x2600;
            local_40 = 0x2600;
            if (local_aa == '\0') {
              local_38 = 0x812f;
              local_34 = 0x812f;
            }
            else {
              local_38 = 0x2901;
              local_34 = 0x2901;
            }
            cocos2d::Texture2D::setTexParameters(pTVar19,(_TexParams *)&local_40);
          }
          iVar30 = iVar30 + 1;
          iVar6 = (**(code **)(**(int **)((int)this + 0x3dc) + 0x124))();
        } while (iVar30 < iVar6);
      }
    }
    lVar13 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((int)this + 0x3dc));
    if (0 < lVar13) {
      pMVar14 = cocos2d::Sprite3D::getMesh(*(Sprite3D **)((int)this + 0x3dc));
      pTVar19 = cocos2d::Mesh::getTexture(pMVar14);
      if (pTVar19 != (Texture2D *)0x0) {
        local_aa = *(char *)((int)this + 0x440);
        pMVar14 = cocos2d::Sprite3D::getMesh(*(Sprite3D **)((int)this + 0x3dc));
        pTVar19 = cocos2d::Mesh::getTexture(pMVar14);
        local_3c = 0x2600;
        local_40 = 0x2600;
        if (local_aa == '\0') {
          local_38 = 0x812f;
          local_34 = 0x812f;
        }
        else {
          local_38 = 0x2901;
          local_34 = 0x2901;
        }
        cocos2d::Texture2D::setTexParameters(pTVar19,(_TexParams *)&local_40);
      }
    }
    (**(code **)(**(int **)((int)this + 0x3dc) + 0xb4))();
    if (*(char *)((int)this + 0x34c) == '\0') {
      cocos2d::Vec3::operator+((Vec3 *)((int)this + 0x2f0),local_58);
      local_14 = 0x10;
      cocos2d::Vec3::operator*(local_58,(float)local_6c);
      pcVar29 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_58);
      local_14 = 0x11;
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x78))();
    }
    else {
      pVVar9 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((int)this + 0x2f0),(Vec3 *)&local_3c);
      local_14 = 0xd;
      cocos2d::Vec3::operator+(pVVar9,local_70);
      local_14._0_1_ = 0xe;
      cocos2d::Vec3::operator*(local_70,(float)&local_54);
      pcVar29 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_70);
      local_14 = CONCAT31(local_14._1_3_,0xf);
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x78))();
      cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    }
    local_14 = 0xffffffff;
    (*pcVar29)();
    if (*(char *)((int)this + 0x318) == '\0') {
      puVar31 = (undefined4 *)((int)this + 0x428);
      cocos2d::Vec3::operator+((Vec3 *)((int)this + 0x2fc),(Vec3 *)&local_3c);
      local_14 = 0x12;
      (**(code **)(**(int **)((int)this + 0x3dc) + 0xc4))();
      local_14 = 0xffffffff;
      (*pcVar29)();
    }
    else {
      puVar31 = (undefined4 *)((int)this + 0x308);
      (**(code **)(**(int **)((int)this + 0x3dc) + 0xcc))();
    }
    (**(code **)(**(int **)((int)this + 0x3dc) + 200))();
    local_14 = 0x13;
    if (*(char *)((int)this + 0xfe) != '\0') {
      pbVar22 = (byte *)((int)this + 0x58);
      pbVar25 = pbVar22;
      if (0xf < *(uint *)((int)this + 0x6c)) {
        pbVar25 = *(byte **)pbVar22;
      }
      uVar16 = FUN_004031f0(pbVar25,*(uint *)((int)this + 0x68),(byte *)&PTR_005ce008,0);
      if ((char)uVar16 == '\0') {
        FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar22);
        iVar6 = FUN_005116d0(DAT_0065b3d4,in_stack_fffffeec);
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != 0)) {
          local_b8 = (float)*(int *)(iVar6 + 0x24) + local_b8;
          (**(code **)(**(int **)((int)this + 0x3dc) + 0xc4))();
        }
      }
    }
    iVar6 = *(int *)((int)this + 0x3dc);
    if (*(char *)((int)this + 0x37f) == '\0') {
      if (*(char *)((int)this + 0x381) == '\0') {
        *(undefined4 *)(iVar6 + 0x31c) = 2;
      }
      else {
        *(undefined4 *)(iVar6 + 0x31c) = 8;
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 4;
    }
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x24))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x2c))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x34))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x244))();
    (**(code **)(*local_b4 + 0x10c))();
    *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3dc);
    if (*(int *)((int)this + 0x3c) == 4) {
      if (local_a9 == '\0') {
        FUN_004024e0(&stack0xffffff08,
                     (undefined4 *)(*(int *)((int)this + 0x7c) * 0x18 + 0x104 + (int)this));
        FUN_00592d70(&local_54,'.',puVar31);
        local_14._0_1_ = 0x16;
        FUN_004024e0(local_48,local_54);
        local_14._0_1_ = 0x17;
        pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_a8,"%s.png");
        local_14._0_1_ = 0x18;
        pbVar20 = (basic_string<> *)FUN_00591e00((undefined1 *)local_90,"%s_Screen.obj");
        local_14._0_1_ = 0x19;
        pSVar12 = cocos2d::Sprite3D::create(pbVar20,pbVar18);
        local_14._0_1_ = 0x18;
        *(Sprite3D **)((int)this + 0x3e4) = pSVar12;
        if (0xf < local_7c) {
          pvVar26 = local_90[0];
          if ((0xfff < local_7c + 1) &&
             (pvVar26 = *(void **)((int)local_90[0] + -4),
             0x1f < (uint)((int)local_90[0] + (-4 - (int)pvVar26)))) goto LAB_00539684;
          FUN_005adb3f(pvVar26);
        }
        local_14._0_1_ = 0x17;
        local_80 = 0;
        local_7c = 0xf;
        local_90[0] = (void *)((uint)local_90[0] & 0xffffff00);
        if (0xf < local_94) {
          pvVar26 = local_a8[0];
          if ((0xfff < local_94 + 1) &&
             (pvVar26 = *(void **)((int)local_a8[0] + -4),
             0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar26)))) goto LAB_00539684;
          FUN_005adb3f(pvVar26);
        }
        local_14._0_1_ = 0x16;
        if (0xf < local_34) {
          ppppuVar27 = (undefined4 ****)local_48[0];
          if ((0xfff < local_34 + 1) &&
             (ppppuVar27 = (undefined4 ****)local_48[0][-1],
             0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) goto LAB_00539684;
          FUN_005adb3f(ppppuVar27);
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        local_14._0_1_ = 0x13;
        FUN_004025a0((int *)&local_54);
      }
      else {
        pbVar18 = (basic_string<> *)FUN_00591e00((undefined1 *)local_a8,"%s.png");
        local_14._0_1_ = 0x14;
        pbVar20 = (basic_string<> *)FUN_00591e00((undefined1 *)local_48,"%s_Screen.c3b");
        local_14._0_1_ = 0x15;
        pSVar12 = cocos2d::Sprite3D::create(pbVar20,pbVar18);
        local_14._0_1_ = 0x14;
        *(Sprite3D **)((int)this + 0x3e4) = pSVar12;
        if (0xf < local_34) {
          ppppuVar27 = (undefined4 ****)local_48[0];
          if ((0xfff < local_34 + 1) &&
             (ppppuVar27 = (undefined4 ****)local_48[0][-1],
             0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) goto LAB_00539684;
          FUN_005adb3f(ppppuVar27);
        }
        local_14._0_1_ = 0x13;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        if (0xf < local_94) {
          pvVar26 = local_a8[0];
          if ((0xfff < local_94 + 1) &&
             (pvVar26 = *(void **)((int)local_a8[0] + -4),
             0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar26)))) goto LAB_00539684;
          FUN_005adb3f(pvVar26);
        }
      }
      *(undefined4 *)(*(int *)((int)this + 0x3e4) + 0x31c) = 4;
      (**(code **)(**(int **)((int)this + 0x3e4) + 0xb4))();
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x10c))();
    }
    pcVar29 = ~Vec3_exref;
    local_14 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_c0);
  }
  else if (iVar6 == 1) {
    pCVar28 = (Color3B *)((int)this + 0x37c);
    pCVar7 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar5 = cocos2d::Color3B::operator==(pCVar28,pCVar7);
    if (bVar5) {
      pCVar28 = (Color3B *)(*(int *)((int)this + 0x3f0) + 0x8c);
    }
    this_00 = cocos2d::DirectionLight::create((Vec3 *)((int)this + 0x2f0),pCVar28);
    *(DirectionLight **)((int)this + 0x3d0) = this_00;
    cocos2d::BaseLight::setIntensity((BaseLight *)this_00,*(float *)((int)this + 0x3ac));
    if (*(char *)((int)this + 0x381) == '\0') {
      *(undefined4 *)(*(int *)((int)this + 0x3d0) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x3d0) + 0x27c) = 8;
    }
    *(undefined1 *)(*(int *)((int)this + 0x3d0) + 0x280) = *(undefined1 *)((int)this + 0x4c);
    (**(code **)(*local_b4 + 0x10c))();
    *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3d0);
    pcVar29 = ~Vec3_exref;
  }
  else if (iVar6 == 2) {
    pCVar28 = (Color3B *)((int)this + 0x37c);
    pCVar7 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar5 = cocos2d::Color3B::operator==(pCVar28,pCVar7);
    if (bVar5) {
      pCVar28 = (Color3B *)(*(int *)((int)this + 0x3f0) + 0x8c);
    }
    fVar33 = 10000.0;
    cocos2d::Vec3::Vec3((Vec3 *)&stack0xffffff0c,(Vec3 *)((int)this + 0x2f0));
    pVVar9 = (Vec3 *)FUN_0058f560((float)&local_54);
    local_14 = 0x1a;
    pPVar10 = cocos2d::PointLight::create(pVVar9,pCVar28,fVar33);
    pcVar29 = ~Vec3_exref;
    local_14 = 0xffffffff;
    *(PointLight **)((int)this + 0x3d4) = pPVar10;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    cocos2d::BaseLight::setIntensity
              (*(BaseLight **)((int)this + 0x3d4),*(float *)((int)this + 0x3ac));
    if (*(char *)((int)this + 0x318) == '\0') {
      (**(code **)(**(int **)((int)this + 0x3d4) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((int)this + 0x3d4) + 0xcc))();
    }
    if (*(char *)((int)this + 0x381) == '\0') {
      *(undefined4 *)(*(int *)((int)this + 0x3d4) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x3d4) + 0x27c) = 8;
    }
    *(undefined1 *)(*(int *)((int)this + 0x3d4) + 0x280) = *(undefined1 *)((int)this + 0x4c);
    (**(code **)(*local_b4 + 0x10c))();
    *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3d4);
  }
  else if (iVar6 == 3) {
    pCVar28 = (Color3B *)((int)this + 0x37c);
    pCVar7 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar5 = cocos2d::Color3B::operator==(pCVar28,pCVar7);
    if (bVar5) {
      pCVar28 = (Color3B *)(*(int *)((int)this + 0x3f0) + 0x8c);
    }
    fVar33 = *(float *)((int)this + 0x3b4);
    fVar34 = 10000.0;
    fVar32 = *(float *)((int)this + 0x3b0);
    cocos2d::Vec3::Vec3((Vec3 *)&stack0xffffff04,(Vec3 *)((int)this + 0x2f0));
    pVVar9 = (Vec3 *)FUN_0058f560((float)&local_54);
    local_14 = 0x1b;
    pSVar11 = cocos2d::SpotLight::create
                        ((Vec3 *)((int)this + 0x2fc),pVVar9,pCVar28,fVar32,fVar33,fVar34);
    pcVar29 = ~Vec3_exref;
    local_14 = 0xffffffff;
    *(SpotLight **)((int)this + 0x3d8) = pSVar11;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    cocos2d::BaseLight::setIntensity
              (*(BaseLight **)((int)this + 0x3d8),*(float *)((int)this + 0x3ac));
    if (*(char *)((int)this + 0x318) == '\0') {
      (**(code **)(**(int **)((int)this + 0x3d8) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((int)this + 0x3d8) + 0xcc))();
    }
    if (*(char *)((int)this + 0x381) == '\0') {
      *(undefined4 *)(*(int *)((int)this + 0x3d8) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x3d8) + 0x27c) = 8;
    }
    *(undefined1 *)(*(int *)((int)this + 0x3d8) + 0x280) = *(undefined1 *)((int)this + 0x4c);
    (**(code **)(*local_b4 + 0x10c))();
    *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3d8);
  }
  else if ((iVar6 == 5) || (pcVar29 = ~Vec3_exref, iVar6 == 6)) {
    FUN_00591e00((undefined1 *)local_60,&DAT_00620164);
    local_14 = 0x1c;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    FUN_00402690(local_48,"Basic_Human.c3b",0xf);
    local_14._0_1_ = 0x1d;
    pSVar12 = cocos2d::Sprite3D::create((basic_string<> *)local_48);
    local_14._0_1_ = 0x1c;
    *(Sprite3D **)((int)this + 0x3dc) = pSVar12;
    if (0xf < local_34) {
      ppppuVar27 = (undefined4 ****)local_48[0];
      if ((0xfff < local_34 + 1) &&
         (ppppuVar27 = (undefined4 ****)local_48[0][-1],
         0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) {
LAB_00539241:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar27);
    }
    (**(code **)(**(int **)((int)this + 0x3dc) + 0xb4))();
    if (*(char *)((int)this + 0x34c) == '\0') {
      cocos2d::Vec3::operator-((Vec3 *)((int)this + 0x2f0),(Vec3 *)&stack0xffffff10);
      FUN_0058f560((float)local_84);
      local_14._0_1_ = 0x20;
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x78))();
      pcVar29 = ~Vec3_exref;
    }
    else {
      pVVar9 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((int)this + 0x2f0),local_d0);
      local_14._0_1_ = 0x1e;
      cocos2d::Vec3::operator-(pVVar9,(Vec3 *)&stack0xffffff0c);
      FUN_0058f560((float)local_84);
      local_14._0_1_ = 0x1f;
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x78))();
      pcVar29 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_84);
    }
    local_14 = CONCAT31(local_14._1_3_,0x1c);
    (*pcVar29)();
    if (*(char *)((int)this + 0x318) == '\0') {
      (**(code **)(**(int **)((int)this + 0x3dc) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((int)this + 0x3dc) + 0xcc))();
    }
    iVar6 = *(int *)((int)this + 0x3dc);
    if (*(char *)((int)this + 0x37f) == '\0') {
      if (*(char *)((int)this + 0x381) == '\0') {
        *(undefined4 *)(iVar6 + 0x31c) = 2;
      }
      else {
        *(undefined4 *)(iVar6 + 0x31c) = 8;
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 4;
    }
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x24))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x2c))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x34))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x244))();
    (**(code **)(*local_b4 + 0x10c))();
    pSVar12 = *(Sprite3D **)((int)this + 0x3dc);
    *(Sprite3D **)((int)this + 0x3ec) = pSVar12;
    if (*(void **)((int)this + 0x100) != (void *)0x0) {
      FUN_00537140(*(void **)((int)this + 0x100),this);
      pSVar12 = *(Sprite3D **)((int)this + 0x3dc);
    }
    iVar6 = 0;
    lVar13 = cocos2d::Sprite3D::getMeshCount(pSVar12);
    if (0 < lVar13) {
      do {
        bVar5 = false;
        pMVar14 = cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((int)this + 0x3dc),iVar6);
        cocos2d::Mesh::setVisible(pMVar14,bVar5);
        iVar6 = iVar6 + 1;
        lVar13 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((int)this + 0x3dc));
      } while (iVar6 < lVar13);
    }
    if (*(void **)((int)this + 0x100) != (void *)0x0) {
      FUN_00537180(*(void **)((int)this + 0x100),this);
    }
    ppppuVar27 = (undefined4 ****)((int)this + 0x98);
    FUN_004024e0(local_48,ppppuVar27);
    local_14._0_1_ = 0x21;
    if (ppppuVar27 != local_48) {
      ppppuVar15 = local_48;
      if (0xf < local_34) {
        ppppuVar15 = (undefined4 ****)local_48[0];
      }
      FUN_00402690(ppppuVar27,ppppuVar15,local_38);
    }
    FUN_0053a5e0((int)this);
    local_14 = CONCAT31(local_14._1_3_,0x1c);
    if (0xf < local_34) {
      ppppuVar27 = (undefined4 ****)local_48[0];
      if ((0xfff < local_34 + 1) &&
         (ppppuVar27 = (undefined4 ****)local_48[0][-1],
         0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar27);
    }
    local_14 = 0xffffffff;
    pcVar29 = ~Vec3_exref;
    if (0xf < local_4c) {
      pvVar26 = local_60[0];
      if ((0xfff < local_4c + 1) &&
         (pvVar26 = *(void **)((int)local_60[0] + -4),
         0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar26)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar26);
      pcVar29 = ~Vec3_exref;
    }
  }
  if ((*(char *)((int)this + 0x449) != '\0') && (*(int **)((int)this + 0x3dc) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x3dc) + 0xb4))();
  }
  iVar6 = *(int *)((int)this + 0x3c);
  if (((iVar6 == 3) || (iVar6 == 1)) || (iVar6 == 2)) {
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    FUN_00402690(local_48,"white.png",9);
    local_14 = 0x22;
    pSVar8 = cocos2d::Sprite::create((basic_string<> *)local_48);
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    *(Sprite **)((int)this + 1000) = pSVar8;
    if (0xf < local_34) {
      ppppuVar27 = (undefined4 ****)local_48[0];
      if ((0xfff < local_34 + 1) &&
         (ppppuVar27 = (undefined4 ****)local_48[0][-1],
         0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar27)))) {
LAB_00539684:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar27);
    }
    (**(code **)(**(int **)((int)this + 1000) + 0x40))();
    local_68 = 0x3f000000;
    local_64 = 0x3f000000;
    local_14 = 0x23;
    (**(code **)(**(int **)((int)this + 1000) + 0xa0))();
    local_14 = 0xffffffff;
    cocos2d::Vec3::operator-((Vec3 *)((int)this + 0x2f0),local_d0);
    local_14 = 0x24;
    cocos2d::Vec3::operator*(local_d0,(float)local_84);
    (*pcVar29)();
    local_14 = 0x25;
    (**(code **)(**(int **)((int)this + 1000) + 0x78))();
    local_14 = 0xffffffff;
    (*pcVar29)();
    if (*(char *)((int)this + 0x318) == '\0') {
      (**(code **)(**(int **)((int)this + 1000) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((int)this + 1000) + 0xcc))();
    }
    (**(code **)(**(int **)((int)this + 1000) + 0x25c))();
    iVar6 = **(int **)((int)this + 1000);
    FUN_00412a50();
    (**(code **)(iVar6 + 0xb4))();
    (**(code **)(*local_b4 + 0x10c))();
  }
  if ((*(char *)((int)this + 0x448) != '\0') && (*(int **)((int)this + 0x3dc) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x3dc) + 0xb4))();
  }
  FUN_0053af00(this);
  FUN_0053b7e0((int)this);
  FUN_0053a2ae();
  return;
}


void FUN_0053a2ae(void)

{
  uint unaff_EBP;
  undefined4 uStack00000008;
  
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack00000008 = 0x53a2c5;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x1c) ^ unaff_EBP);
  return;
}


void __thiscall FUN_0053a2d0(void *this,bool param_1,Texture2D *param_2,byte *param_3)

{
  bool bVar1;
  long lVar2;
  Mesh *pMVar3;
  uint uVar4;
  Texture2D *this_00;
  Mesh *pMVar5;
  byte *pbVar6;
  byte **ppbVar7;
  int iVar8;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  char *pcVar9;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5268;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(Sprite3D **)((int)this + 0x3dc) == (Sprite3D *)0x0) {
    pcVar9 = "unknown model";
  }
  else {
    iVar8 = 0;
    lVar2 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((int)this + 0x3dc));
    if (0 < lVar2) {
      do {
        pMVar3 = cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((int)this + 0x3dc),iVar8);
        ppbVar7 = &param_3;
        if (0xf < in_stack_00000020) {
          ppbVar7 = (byte **)param_3;
        }
        pMVar5 = pMVar3 + 0x28;
        if (0xf < *(uint *)(pMVar3 + 0x3c)) {
          pMVar5 = *(Mesh **)(pMVar3 + 0x28);
        }
        uVar4 = FUN_004031f0((byte *)pMVar5,*(uint *)(pMVar3 + 0x38),(byte *)ppbVar7,
                             in_stack_0000001c);
        if ((char)uVar4 != '\0') {
          pMVar3 = cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((int)this + 0x3dc),iVar8);
          if (pMVar3 != (Mesh *)0x0) {
            bVar1 = cocos2d::Mesh::isVisible(pMVar3);
            if (bVar1 != param_1) {
              cocos2d::Mesh::setVisible(pMVar3,param_1);
            }
            if (param_1) {
              if (param_2 != (Texture2D *)0x0) {
                cocos2d::Mesh::setTexture(pMVar3,param_2);
              }
              this_00 = cocos2d::Mesh::getTexture(pMVar3);
              local_20 = 0x2600;
              local_24 = 0x2600;
              local_1c = 0x812f;
              local_18 = 0x812f;
              cocos2d::Texture2D::setTexParameters(this_00,(_TexParams *)&local_24);
            }
            goto LAB_0053a386;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        lVar2 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((int)this + 0x3dc));
      } while (iVar8 < lVar2);
    }
    pcVar9 = "unknown mesh";
  }
  FUN_00591070("ERROR",pcVar9);
LAB_0053a386:
  if (0xf < in_stack_00000020) {
    pbVar6 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pbVar6 = *(byte **)(param_3 + -4), (byte *)0x1f < param_3 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0053a450(void *this,bool param_1,void *param_2)

{
  bool bVar1;
  Mesh *this_00;
  uint uVar2;
  Texture2D *this_01;
  byte *pbVar3;
  void *pvVar4;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  byte *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c52a0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(Sprite3D **)((int)this + 0x3dc) == (Sprite3D *)0x0) {
    FUN_00591070("ERROR","unknown model");
  }
  else {
    this_00 = cocos2d::Sprite3D::getMeshByName
                        (*(Sprite3D **)((int)this + 0x3dc),(basic_string<> *)&param_2);
    if (this_00 == (Mesh *)0x0) {
      FUN_00591070("ERROR","unknown mesh");
    }
    else {
      bVar1 = cocos2d::Mesh::isVisible(this_00);
      if (bVar1 != param_1) {
        cocos2d::Mesh::setVisible(this_00,param_1);
      }
      if (param_1) {
        pbVar3 = (byte *)&stack0x00000020;
        if (0xf < in_stack_00000034) {
          pbVar3 = in_stack_00000020;
        }
        uVar2 = FUN_004031f0(pbVar3,in_stack_00000030,(byte *)&PTR_005ce008,0);
        if ((char)uVar2 == '\0') {
          cocos2d::Mesh::setTexture(this_00,(basic_string<> *)&stack0x00000020);
        }
        this_01 = cocos2d::Mesh::getTexture(this_00);
        local_24 = 0x2600;
        local_28 = 0x2600;
        local_20 = 0x812f;
        local_1c = 0x812f;
        cocos2d::Texture2D::setTexParameters(this_01,(_TexParams *)&local_28);
      }
    }
  }
  if (0xf < in_stack_0000001c) {
    pvVar4 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar4 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pbVar3 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pbVar3 = *(byte **)(in_stack_00000020 + -4);
      if ((byte *)0x1f < in_stack_00000020 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053a5e0(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  byte *****pppppbVar3;
  undefined4 *puVar4;
  byte *****pppppbVar5;
  uint uVar6;
  basic_string<> *pbVar7;
  Animation3D *pAVar8;
  byte *pbVar9;
  void *pvVar10;
  uint uVar11;
  void **ppvVar12;
  void *in_stack_ffffff18;
  undefined4 uStack_d0;
  int iVar13;
  char *pcVar14;
  int iVar15;
  float fVar16;
  byte ****local_a8 [4];
  uint local_98;
  uint local_94;
  byte *local_90;
  undefined4 *local_8c;
  Animate3D *local_88;
  undefined **local_84;
  undefined1 *local_80;
  int local_7c;
  undefined ***local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ****local_2c;
  byte ***pppbStack_28;
  byte ***pppbStack_24;
  byte ***pppbStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5321;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cocos2d::Node::stopAllActions(*(Node **)(param_1 + 0x3dc));
  uVar11 = 0;
  if (*(int *)(param_1 + 0x654) - *(int *)(param_1 + 0x650) >> 2 != 0) {
    do {
      cocos2d::Node::stopAllActions(*(Node **)(*(int *)(param_1 + 0x650) + uVar11 * 4));
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)(*(int *)(param_1 + 0x654) - *(int *)(param_1 + 0x650) >> 2));
  }
  local_1c = 0xf00000000;
  local_2c = (byte ****)((uint)local_2c & 0xffffff00);
  FUN_00402690(&local_2c,&PTR_005ce008,0);
  pppppbVar5 = (byte *****)(param_1 + 200);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  pppppbVar3 = pppppbVar5;
  if (0xf < *(uint *)(param_1 + 0xdc)) {
    pppppbVar3 = (byte *****)*pppppbVar5;
  }
  uVar11 = FUN_004031f0((byte *)pppppbVar3,*(uint *)(param_1 + 0xd8),(byte *)&PTR_005ce008,0);
  if ((char)uVar11 == '\0') {
    if (&local_2c != pppppbVar5) {
      pppppbVar3 = pppppbVar5;
      if (0xf < *(uint *)(param_1 + 0xdc)) {
        pppppbVar3 = (byte *****)*pppppbVar5;
      }
      FUN_00402690(&local_2c,pppppbVar3,*(uint *)(param_1 + 0xd8));
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (0xf < *(uint *)(param_1 + 0xdc)) {
      pppppbVar5 = (byte *****)*pppppbVar5;
    }
    *(byte *)pppppbVar5 = 0;
  }
  else {
    local_88 = (Animate3D *)&uStack_d0;
    FUN_004024e0(&uStack_d0,(undefined4 *)(param_1 + 0xb0));
    local_8c = (undefined4 *)&stack0xffffff18;
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff18,(undefined4 *)(param_1 + 0x98));
    ppvVar12 = local_5c;
    local_8._0_1_ = 2;
    puVar4 = FUN_0047d270();
    local_8._0_1_ = 0;
    pppppbVar5 = (byte *****)FUN_0042e540(puVar4,(undefined1 *)ppvVar12,in_stack_ffffff18);
    if (&local_2c != pppppbVar5) {
      FUN_00401b20((int *)&local_2c);
      local_2c = *pppppbVar5;
      pppbStack_28 = (byte ***)pppppbVar5[1];
      pppbStack_24 = (byte ***)pppppbVar5[2];
      pppbStack_20 = (byte ***)pppppbVar5[3];
      local_1c = *(undefined8 *)(pppppbVar5 + 4);
      pppppbVar5[4] = (byte ****)0x0;
      pppppbVar5[5] = (byte ****)0xf;
      *(undefined1 *)pppppbVar5 = 0;
    }
    if (0xf < local_48) {
      pvVar10 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar10 = *(void **)((int)local_5c[0] + -4), uVar1 = (undefined1)local_8,
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
LAB_0053a787:
        local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  pppppbVar5 = &local_2c;
  if (0xf < local_1c._4_4_) {
    pppppbVar5 = (byte *****)local_2c;
  }
  uVar11 = FUN_004031f0((byte *)pppppbVar5,(uint)local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar11 == '\0') {
    FUN_004024e0(local_a8,&local_2c);
    local_8._0_1_ = 3;
    local_8c = FUN_0047d270();
    local_8._0_1_ = 0;
    uVar11 = 0;
    local_88 = (Animate3D *)local_8c[3];
    if (local_8c[4] - (int)local_88 >> 2 != 0) {
      do {
        local_90 = *(byte **)(local_88 + uVar11 * 4);
        pppppbVar5 = local_a8;
        if (0xf < local_94) {
          pppppbVar5 = (byte *****)local_a8[0];
        }
        pbVar9 = local_90;
        if (0xf < *(uint *)(local_90 + 0x14)) {
          pbVar9 = *(byte **)local_90;
        }
        uVar6 = FUN_004031f0(pbVar9,*(uint *)(local_90 + 0x10),(byte *)pppppbVar5,local_98);
        if ((char)uVar6 != '\0') {
          if (0xf < local_94) {
            pppppbVar5 = (byte *****)local_a8[0];
            if ((0xfff < local_94 + 1) &&
               (pppppbVar5 = (byte *****)local_a8[0][-1],
               (byte *)0x1f < (byte *)((int)local_a8[0] + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pppppbVar5);
          }
          pbVar9 = local_90;
          local_98 = 0;
          local_94 = 0xf;
          local_a8[0] = (byte ****)((uint)local_a8[0] & 0xffffff00);
          if (local_90 == (byte *)0x0) goto LAB_0053ac60;
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          FUN_00402690(local_44,&PTR_005ce008,0);
          local_8._0_1_ = 4;
          pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_5c,"%s.c3b");
          local_8._0_1_ = 5;
          fVar16 = 30.0;
          iVar15 = *(int *)(pbVar9 + 0x1c);
          iVar13 = *(int *)(pbVar9 + 0x18);
          uStack_d0 = 0x53a978;
          pAVar8 = cocos2d::Animation3D::create(pbVar7,(basic_string<> *)local_44);
          local_88 = cocos2d::Animate3D::createWithFrames(pAVar8,iVar13,iVar15,fVar16);
          local_8._0_1_ = 4;
          if (0xf < local_48) {
            pvVar10 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar10 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          local_8._0_1_ = 0;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          if (0xf < local_30) {
            pvVar10 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar10 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          *(undefined4 *)_transTime_exref = 0x3f800000;
          local_60 = &local_84;
          local_84 = std::_Func_impl_no_alloc<>::vftable;
          local_80 = &LAB_0053ad00;
          local_8._0_1_ = 6;
          iVar15 = **(int **)(param_1 + 0x3dc);
          local_7c = param_1;
          cocos2d::CallFunc::create((function<> *)&local_84);
          cocos2d::Sequence::create((FiniteTimeAction *)local_88);
          (**(code **)(iVar15 + 0x1d0))();
          local_8c = (undefined4 *)0x0;
          if (*(int *)(param_1 + 0x654) - *(int *)(param_1 + 0x650) >> 2 != 0) goto LAB_0053aaa0;
          goto LAB_0053ac13;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)((int)(local_8c[4] - local_8c[3]) >> 2));
    }
    if (0xf < local_94) {
      pppppbVar5 = (byte *****)local_a8[0];
      if ((0xfff < local_94 + 1) &&
         (pppppbVar5 = (byte *****)local_a8[0][-1],
         (byte *)0x1f < (byte *)((int)local_a8[0] + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppbVar5);
    }
LAB_0053ac60:
    pcVar14 = "Animation error: unable to get animation frames for \'%s\'";
  }
  else {
    pcVar14 = "Animation error: unable to get animation for set \'%s\'";
  }
  FUN_00591070("ERROR",pcVar14);
  bVar2 = cc_assert_script_compatible("ANIMATION ERROR.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s");
  }
LAB_0053aca0:
  if (0xf < local_1c._4_4_) {
    pppppbVar5 = (byte *****)local_2c;
    if ((0xfff < local_1c._4_4_ + 1) &&
       (pppppbVar5 = (byte *****)local_2c[-1],
       (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    local_8._0_1_ = 6;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_30) {
      pvVar10 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar10 = *(void **)((int)local_44[0] + -4), uVar1 = (undefined1)local_8,
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_0053a787;
      FUN_005adb3f(pvVar10);
    }
    local_34 = 0;
    local_30 = 0xf;
    *(undefined4 *)_transTime_exref = 0x3f800000;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    iVar15 = **(int **)(*(int *)(param_1 + 0x650) + (int)puVar4 * 4);
    cocos2d::CallFunc::create((function<> *)&local_84);
    cocos2d::Sequence::create((FiniteTimeAction *)local_88);
    (**(code **)(iVar15 + 0x1d0))();
    local_8c = (undefined4 *)((int)local_8c + 1);
    if ((undefined4 *)(*(int *)(param_1 + 0x654) - *(int *)(param_1 + 0x650) >> 2) <= local_8c)
    break;
LAB_0053aaa0:
    puVar4 = local_8c;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,&PTR_005ce008,0);
    local_8._0_1_ = 7;
    pbVar7 = (basic_string<> *)FUN_00591e00((undefined1 *)local_5c,"%s.c3b");
    local_8._0_1_ = 8;
    fVar16 = 30.0;
    iVar15 = *(int *)(local_90 + 0x1c);
    iVar13 = *(int *)(local_90 + 0x18);
    uStack_d0 = 0x53ab04;
    pAVar8 = cocos2d::Animation3D::create(pbVar7,(basic_string<> *)local_44);
    local_88 = cocos2d::Animate3D::createWithFrames(pAVar8,iVar13,iVar15,fVar16);
    local_8._0_1_ = 7;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 7;
    if (0xf < local_48) {
      pvVar10 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar10 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) goto LAB_0053a787;
      FUN_005adb3f(pvVar10);
    }
  }
LAB_0053ac13:
  if ((byte *****)(param_1 + 0xb0) != &local_2c) {
    pppppbVar5 = &local_2c;
    if (0xf < local_1c._4_4_) {
      pppppbVar5 = (byte *****)local_2c;
    }
    FUN_00402690((byte *****)(param_1 + 0xb0),pppppbVar5,(uint)local_1c);
  }
  local_8._0_1_ = 9;
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[4])();
    local_60 = (undefined ***)0x0;
  }
  goto LAB_0053aca0;
}


void __thiscall FUN_0053ad10(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x388)) {
    *(int *)((int)this + 0x388) = param_1;
    FUN_0053b4a0(this);
    if (*(char *)(*(int *)(*(int *)((int)this + *(int *)((int)this + 0x388) * 4 + 0x624) + 0x180) +
                 0x59) == '\0') {
      if (*(char *)(DAT_0065b444 + 0x73) != '\0') {
        *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
      }
    }
    else if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
      *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
      return;
    }
  }
  return;
}


void __fastcall FUN_0053ad70(int param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  void *in_stack_ffffff74;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [24];
  undefined1 local_3c [36];
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5368;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  puVar1 = *(undefined4 **)(param_1 + 0x398);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  for (puVar3 = *(undefined4 **)(param_1 + 0x394); ExceptionList = ppvVar2, puVar3 != puVar1;
      puVar3 = puVar3 + 0x14) {
    local_64 = *puVar3;
    local_60 = *(undefined1 *)(puVar3 + 1);
    local_5f = *(undefined1 *)((int)puVar3 + 5);
    local_5c = puVar3[2];
    local_58 = puVar3[3];
    FUN_004024e0(local_54,puVar3 + 4);
    local_18 = 0;
    local_8 = 1;
    if ((undefined4 *)puVar3[0x13] != (undefined4 *)0x0) {
      local_18 = (*(code *)**(undefined4 **)puVar3[0x13])();
    }
    local_8 = 2;
    if (local_18 != 0) {
      in_stack_ffffff74 = (void *)((uint)in_stack_ffffff74 & 0xffffff00);
      FUN_00402690(&stack0xffffff74,&PTR_005ce008,0);
      local_60 = FUN_00417780(local_3c,*(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffff74);
    }
    local_8 = 0xffffffff;
    FUN_0047c010((int)&local_64);
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053ae80(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x388);
  uVar3 = uVar1;
  do {
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 0x388) = uVar3;
    iVar2 = *(int *)(param_1 + 0x394);
    if ((uint)((*(int *)(param_1 + 0x398) - iVar2) / 0x50) <= uVar3) {
      *(undefined4 *)(param_1 + 0x388) = 0;
      uVar3 = 0;
    }
  } while (((*(char *)(iVar2 + 4 + uVar3 * 0x50) == '\0') ||
           (*(char *)(iVar2 + 5 + uVar3 * 0x50) != '\0')) && (uVar1 != uVar3));
  FUN_00591070("DETAIL","New screen = %d");
  return;
}


void __fastcall FUN_0053af00(void *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint local_8;
  
  uVar3 = 0;
  iVar2 = *(int *)((int)param_1 + 0x398);
  iVar5 = *(int *)((int)param_1 + 0x394);
  iVar1 = iVar2 - iVar5 >> 0x1f;
  if ((iVar2 - iVar5) / 0x50 + iVar1 != iVar1) {
    do {
      if (*(char *)(iVar5 + 4 + *(int *)((int)param_1 + 0x388) * 0x50) != '\0') {
        FUN_0053b0a0(param_1,uVar3);
      }
      iVar5 = *(int *)((int)param_1 + 0x394);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)((int)param_1 + 0x398) - iVar5) / 0x50));
    iVar2 = *(int *)((int)param_1 + 0x398);
  }
  local_8 = 0;
  iVar1 = iVar2 - iVar5 >> 0x1f;
  if ((iVar2 - iVar5) / 0x50 + iVar1 != iVar1) {
    piVar4 = (int *)((int)param_1 + 0x624);
    do {
      iVar2 = *piVar4;
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x51) != '\0')) {
        this = *(void **)(iVar2 + 0x17c);
        *(void **)((int)this + 0x60) = param_1;
        FUN_005606e0((int)this);
        FUN_00561e50(*(int **)((int)this + 0x68),*(int **)((int)this + 0x6c));
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x68);
        FUN_005607c0(this,local_8);
        if ((DAT_0065b3ce != '\0') ||
           ((((iVar2 = *(int *)((int)this + 0x60), iVar2 != 0 &&
              (iVar2 = *(int *)(iVar2 + 0x624 + *(int *)(iVar2 + 0x388) * 4), iVar2 != 0)) &&
             (iVar2 = *(int *)(iVar2 + 300), iVar2 != 0)) && (*(char *)(iVar2 + 6) != '\0')))) {
          *(undefined4 *)((int)this + 0x78) = 0;
          *(undefined4 *)((int)this + 0x74) = 3;
        }
        FUN_005607c0(*(void **)(*piVar4 + 0x17c),*(uint *)((int)param_1 + 0x388));
        iVar2 = *piVar4;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 300) != 0)) &&
           (*(char *)(*(int *)(iVar2 + 300) + 6) != '\0')) {
          *(undefined1 *)(*(int *)(iVar2 + 0x17c) + 3) = 1;
          iVar2 = *piVar4;
        }
        FUN_00560de0(*(int *)(iVar2 + 0x17c));
      }
      piVar4 = piVar4 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)((int)param_1 + 0x398) - *(int *)((int)param_1 + 0x394)) /
                             0x50));
  }
  return;
}


void __thiscall FUN_0053b0a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c53b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = param_1 * 0x50;
  if (*(int *)(iVar5 + *(int *)((int)this + 0x394)) == 0) {
    FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)((int)this + 0x394) + 0x10 + iVar5));
    iVar2 = FUN_004a8230(in_stack_ffffffc0);
    if (iVar2 == 0) {
      FUN_00591070("ERROR","Unknown screen layout: %s");
    }
    pvVar3 = (void *)FUN_005adb0f(0x1a0);
    local_8 = 0;
    iVar1 = *(int *)((int)this + 0x394);
    puVar4 = FUN_00553520(pvVar3,this,*(undefined4 *)(iVar1 + iVar5),*(undefined1 *)((int)this + 8),
                          *(undefined4 *)((int)this + 0x3e4),
                          *(int *)(iVar1 + 8 + *(int *)((int)this + 0x388) * 0x50),
                          *(int *)(iVar1 + 0xc + iVar5),iVar2);
    *(undefined4 **)((int)this + param_1 * 4 + 0x624) = puVar4;
  }
  else {
    pvVar3 = (void *)FUN_005adb0f(0x1a0);
    local_8 = 1;
    iVar2 = *(int *)((int)this + 0x394);
    puVar4 = FUN_00553520(pvVar3,this,*(undefined4 *)(iVar5 + iVar2),*(undefined1 *)((int)this + 8),
                          *(undefined4 *)((int)this + 0x3e4),*(int *)(iVar5 + 8 + iVar2),
                          *(int *)(iVar5 + 0xc + iVar2),0);
    *(undefined4 **)((int)this + param_1 * 4 + 0x624) = puVar4;
  }
  puVar4[0x15] = this;
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_0053b1e0(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *******pppppppbVar7;
  int iVar8;
  char cVar9;
  byte *in_stack_ffffff88;
  byte *pbVar10;
  byte *******local_44 [4];
  uint local_34;
  uint local_30;
  byte *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c53f9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((*(char *)(param_1 + 0x448) != '\0') || (*(int *)(param_1 + 0x61c) != 0)) ||
      (*(char *)(param_1 + 0x4c) == '\0')) ||
     (((*(int *)(param_1 + 0x3c) != 5 && (*(int *)(param_1 + 0x3c) != 6)) ||
      ((*(int *)(param_1 + 0x100) == 0 || (*(char *)(param_1 + 0xfd) != '\0'))))))
  goto LAB_0053b477;
  if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
    FUN_004024e0(&stack0xffffff88,(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x1c) + 0xf8))
    ;
    cVar9 = '\0';
    iVar8 = -1;
    local_8 = 0;
    puVar5 = FUN_00412870();
    local_8 = 0xffffffff;
    iVar8 = FUN_00438ed0(puVar5,iVar8,cVar9,in_stack_ffffff88);
    if (iVar8 == 0) goto LAB_0053b2b6;
LAB_0053b352:
    bVar4 = false;
    bVar3 = false;
LAB_0053b355:
    bVar2 = false;
  }
  else {
LAB_0053b2b6:
    if (*(int *)(param_1 + 0x100) == 0) goto LAB_0053b352;
    FUN_004024e0(local_44,(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x1c) + 0xf8));
    local_8 = 1;
    bVar4 = true;
    bVar3 = false;
    pppppppbVar7 = (byte *******)local_44;
    if (0xf < local_30) {
      pppppppbVar7 = local_44[0];
    }
    uVar6 = FUN_004031f0((byte *)pppppppbVar7,local_34,(byte *)"femalepassenger",0xf);
    if ((char)uVar6 == '\0') {
      FUN_004024e0(local_2c,(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x1c) + 0xf8));
      bVar4 = true;
      bVar3 = true;
      pppppppbVar7 = (byte *******)local_2c;
      if (0xf < local_18) {
        pppppppbVar7 = local_2c[0];
      }
      uVar6 = FUN_004031f0((byte *)pppppppbVar7,local_1c,(byte *)"malepassenger",0xd);
      if ((char)uVar6 != '\0') {
        bVar2 = true;
        goto LAB_0053b359;
      }
      goto LAB_0053b355;
    }
    bVar2 = true;
  }
LAB_0053b359:
  if ((bVar3) && (0xf < local_18)) {
    pppppppbVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppppbVar7 = (byte *******)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppppbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppbVar7);
  }
  local_8 = 0xffffffff;
  if ((bVar4) && (0xf < local_30)) {
    pppppppbVar7 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pppppppbVar7 = (byte *******)local_44[0][-1],
       (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)pppppppbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppbVar7);
  }
  if ((((bVar2) && (piVar1 = *(int **)(DAT_0065b5cc + 0x128), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) && (((char)piVar1[0x24] == '\0' && (-1 < *(int *)(*piVar1 + 0x5c))))) {
    pbVar10 = (byte *)((uint)in_stack_ffffff88 & 0xffffff00);
    FUN_00402690(&stack0xffffff88,"passenger",9);
    local_8 = 2;
    cVar9 = '\0';
    iVar8 = *(int *)(**(int **)(DAT_0065b5cc + 0x128) + 0x5c);
    puVar5 = FUN_00412870();
    local_8 = 0xffffffff;
    FUN_00438ed0(puVar5,iVar8,cVar9,pbVar10);
  }
LAB_0053b477:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0053b4a0(void *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5429;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)param_1 + 0x3c) == 4) {
    iVar4 = 0;
    pcVar3 = (char *)(*(int *)((int)param_1 + 0x394) + 5);
    while ((pcVar3[-1] == '\0' || (*pcVar3 != '\0'))) {
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x50;
      if (9 < iVar4) {
        return;
      }
    }
    iVar4 = *(int *)((int)param_1 + 0x388);
    if (*(char *)(*(int *)((int)param_1 + 0x394) + 4 + iVar4 * 0x50) != '\0') {
      ExceptionList = &local_10;
      if (*(int *)((int)param_1 + iVar4 * 4 + 0x624) == 0) {
        FUN_0053b0a0(param_1,iVar4);
        iVar4 = *(int *)((int)param_1 + 0x388);
      }
      iVar4 = *(int *)((int)param_1 + iVar4 * 4 + 0x624);
      if (iVar4 == 0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar4 + 0x16c);
        uVar5 = *(undefined4 *)(iVar4 + 0x168);
      }
      local_8 = 0;
      FUN_0053b7e0((int)param_1);
      iVar4 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x388) * 4 + 0x624);
      *(undefined4 *)(iVar4 + 0x168) = uVar5;
      *(undefined4 *)(iVar4 + 0x16c) = uVar6;
      *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x388) * 4 + 0x624) + 0x11c) =
           *(undefined4 *)((int)param_1 + 0x3e4);
      iVar4 = *(int *)((int)param_1 + 0x388);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x394) + 0xc + iVar4 * 0x50);
      uVar6 = *(undefined4 *)(*(int *)((int)param_1 + 0x394) + 8 + iVar4 * 0x50);
      iVar4 = *(int *)((int)param_1 + iVar4 * 4 + 0x624);
      *(undefined4 *)(iVar4 + 0x60) = uVar6;
      *(int *)(iVar4 + 100) = iVar1;
      *(undefined4 *)(iVar4 + 0x68) = uVar6;
      if (*(char *)(iVar4 + 0x51) == '\0') {
        *(int *)(iVar4 + 0x6c) = iVar1;
      }
      else {
        *(int *)(iVar4 + 0x6c) = iVar1 + 0xc;
      }
      iVar4 = *(int *)(iVar4 + 0x17c);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x54) = uVar6;
        *(undefined4 *)(iVar4 + 0x58) = 0xc;
      }
      *(undefined1 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x388) * 4 + 0x624) + 0x70) =
           1;
      (**(code **)(**(int **)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x388) * 4 + 0x624) +
                             300) + 0xc))(uVar2);
      iVar4 = *(int *)((int)param_1 + 0x388);
      iVar1 = *(int *)((int)param_1 + iVar4 * 4 + 0x624);
      if ((float)*(int *)(iVar1 + 0x68) <= *(float *)(iVar1 + 0x168)) {
        *(float *)(iVar1 + 0x168) = (float)(*(int *)(iVar1 + 0x68) + -1);
        iVar4 = *(int *)((int)param_1 + 0x388);
      }
      iVar4 = *(int *)((int)param_1 + iVar4 * 4 + 0x624);
      if ((float)*(int *)(iVar4 + 0x6c) <= *(float *)(iVar4 + 0x16c)) {
        *(float *)(iVar4 + 0x16c) = (float)(*(int *)(iVar4 + 0x6c) + -1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0053b6a0(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  uint local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x394);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x50 + iVar1 != iVar1) {
    piVar3 = (int *)(param_1 + 0x624);
    do {
      iVar1 = *(int *)(*piVar3 + 0x17c);
      if (iVar1 != 0) {
        FUN_005606e0(iVar1);
        FUN_00561e50(*(int **)(iVar1 + 0x68),*(int **)(iVar1 + 0x6c));
        *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar1 + 0x68);
        this = *(void **)(*piVar3 + 0x17c);
        *(int *)((int)this + 0x60) = param_1;
        FUN_005606e0((int)this);
        FUN_00561e50(*(int **)((int)this + 0x68),*(int **)((int)this + 0x6c));
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x68);
        FUN_005607c0(this,local_8);
        if ((DAT_0065b3ce != '\0') ||
           ((((iVar1 = *(int *)((int)this + 0x60), iVar1 != 0 &&
              (iVar1 = *(int *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4), iVar1 != 0)) &&
             (iVar1 = *(int *)(iVar1 + 300), iVar1 != 0)) && (*(char *)(iVar1 + 6) != '\0')))) {
          *(undefined4 *)((int)this + 0x78) = 0;
          *(undefined4 *)((int)this + 0x74) = 3;
        }
        FUN_0053be80(param_1);
        FUN_005607c0(*(void **)(*piVar3 + 0x17c),*(uint *)(param_1 + 0x388));
        FUN_00560de0(*(int *)(*piVar3 + 0x17c));
      }
      piVar3 = piVar3 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x394)) / 0x50));
  }
  return;
}


void __fastcall FUN_0053b7e0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar3 = *(int *)(param_1 + 0x624 + *(int *)(param_1 + 0x388) * 4);
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x51) != '\0')) && (*(int *)(iVar3 + 0x17c) != 0)) {
    FUN_0053be80(param_1);
    iVar3 = *(int *)(*(int *)(param_1 + 0x624 + *(int *)(param_1 + 0x388) * 4) + 0x17c);
    *(undefined4 *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x74) = 2;
    *(undefined4 *)(iVar3 + 0x7c) = 0x3fb33333;
    iVar4 = **(int **)(iVar3 + 0x2c);
    iVar5 = (**(code **)(iVar4 + 0xb0))();
    fVar1 = *(float *)(iVar5 + 4);
    fVar2 = *(float *)(iVar3 + 0x78);
    pfVar6 = (float *)(**(code **)(**(int **)(iVar3 + 0x2c) + 0xb0))();
    (**(code **)(iVar4 + 0x48))(*pfVar6 * 0.5,fVar1 * 0.5 - fVar2);
    FUN_005607c0(*(void **)(*(int *)(param_1 + 0x624 + *(uint *)(param_1 + 0x388) * 4) + 0x17c),
                 *(uint *)(param_1 + 0x388));
    FUN_00560de0(*(int *)(*(int *)(param_1 + 0x624 + *(int *)(param_1 + 0x388) * 4) + 0x17c));
  }
  return;
}


undefined1 * __thiscall FUN_0053b8e0(void *this,undefined1 *param_1)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x449) != '\0') {
    FUN_00591e00(param_1,"COLLIDER for object ID %d");
    return param_1;
  }
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 == 0) {
    FUN_00591e00(param_1,"Model (\'%s\')");
    return param_1;
  }
  if (iVar1 == 1) {
    FUN_00591e00(param_1,"Direction light (intensity \'%f\')");
    return param_1;
  }
  if (iVar1 == 2) {
    FUN_00591e00(param_1,"Point light (intensity \'%f\')");
    return param_1;
  }
  if (iVar1 == 3) {
    FUN_00591e00(param_1,"Spotlight light (intensity \'%f\')");
    return param_1;
  }
  if (iVar1 == 4) {
    FUN_00591e00(param_1,"Screen (\'%s\')");
    return param_1;
  }
  if (iVar1 == 5) {
    FUN_00591e00(param_1,"Character (\'%s\')");
    return param_1;
  }
  if (iVar1 == 6) {
    FUN_00591e00(param_1,"Spawn Point (\'%s\')");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"ERROR",5);
  return param_1;
}


void __fastcall FUN_0053ba90(int param_1)

{
  if ((((*(float *)(param_1 + 0x350) != 0.0) || (*(float *)(param_1 + 0x354) != 0.0)) ||
      (*(float *)(param_1 + 0x358) != 0.0)) && (*(float *)(param_1 + 0x334) <= 0.0)) {
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2f0);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x350);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x358);
    *(undefined4 *)(param_1 + 0x334) = 0;
    FUN_0053bce0(param_1);
    return;
  }
  return;
}


void __fastcall FUN_0053bb20(int param_1)

{
  void *pvVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (((*(float *)(param_1 + 0x350) == 0.0) && (*(float *)(param_1 + 0x354) == 0.0)) &&
     (*(float *)(param_1 + 0x358) == 0.0)) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x334)) {
    return;
  }
  if (*(char *)(param_1 + 0x34c) == '\0') {
    iVar5 = *(int *)(param_1 + 0x32c);
    if (iVar5 != 0) {
      iVar2 = DAT_0065b3d4;
      if (DAT_0065b3d4 == 0) {
        iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
      }
      iVar6 = -1;
      pvVar1 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar1,iVar2,iVar5,iVar6);
    }
    bVar3 = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x330);
    if (iVar5 != 0) {
      iVar2 = DAT_0065b3d4;
      if (DAT_0065b3d4 == 0) {
        iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
      }
      iVar6 = -1;
      pvVar1 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar1,iVar2,iVar5,iVar6);
    }
    bVar3 = 0;
  }
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x350);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x358);
  *(byte *)(param_1 + 0x34c) = bVar3;
  if (*(int *)(param_1 + 0x31c) == 1) {
    *(byte *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x280) = bVar3 ^ 1;
    pcVar4 = "%s inner airlock is %s";
  }
  else {
    if (*(int *)(param_1 + 0x31c) != 2) goto LAB_0053bcbe;
    *(byte *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x281) = bVar3 ^ 1;
    pcVar4 = "%s outer airlock is %s";
  }
  FUN_00591070("DETAIL",pcVar4);
LAB_0053bcbe:
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x338);
  return;
}


void __fastcall FUN_0053bce0(int param_1)

{
  undefined4 uVar1;
  Vec3 *pVVar2;
  undefined4 uVar3;
  int iVar4;
  Vec3 local_70 [12];
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 local_4c [12];
  Vec3 local_40 [12];
  Vec3 local_34 [12];
  Vec3 local_28 [12];
  Vec3 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5498;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x34c) != '\0') {
    uVar1 = cocos2d::Vec3::operator*((Vec3 *)(param_1 + 0x340),(float)local_58);
    iVar4 = param_1 + 0x41c;
    local_8 = 0;
    pVVar2 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)(param_1 + 800),local_4c);
    local_8._0_1_ = 1;
    cocos2d::Vec3::operator+(pVVar2,local_1c);
    local_8._0_1_ = 2;
    uVar3 = DAT_006550a4;
    cocos2d::Vec3::operator*(local_1c,(float)local_28);
    cocos2d::Vec3::~Vec3(local_1c);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(**(int **)(param_1 + 0x3dc) + 0x78))(local_28,uVar3,uVar1,iVar4);
    cocos2d::Vec3::~Vec3(local_28);
    cocos2d::Vec3::~Vec3(local_4c);
    cocos2d::Vec3::~Vec3(local_58);
    ExceptionList = local_10;
    return;
  }
  uVar1 = cocos2d::Vec3::operator*((Vec3 *)(param_1 + 0x340),(float)local_70);
  iVar4 = param_1 + 0x41c;
  local_8 = 4;
  pVVar2 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)(param_1 + 800),local_64);
  local_8._0_1_ = 5;
  cocos2d::Vec3::operator+(pVVar2,local_34);
  local_8._0_1_ = 6;
  uVar3 = DAT_006550a4;
  cocos2d::Vec3::operator*(local_34,(float)local_40);
  cocos2d::Vec3::~Vec3(local_34);
  local_8 = CONCAT31(local_8._1_3_,7);
  (**(code **)(**(int **)(param_1 + 0x3dc) + 0x78))(local_40,uVar3,uVar1,iVar4);
  cocos2d::Vec3::~Vec3(local_40);
  cocos2d::Vec3::~Vec3(local_64);
  cocos2d::Vec3::~Vec3(local_70);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0053be80(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *in_stack_ffffffcc;
  uint local_8;
  
  if (*(int *)(param_1 + 0x3c) == 4) {
    iVar4 = *(int *)(param_1 + 0x394);
    local_8 = 0;
    iVar2 = *(int *)(param_1 + 0x398) - iVar4;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x50 + iVar3 != iVar3) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 0x4c + iVar4) != 0) {
          in_stack_ffffffcc = (void *)((uint)in_stack_ffffffcc & 0xffffff00);
          FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
          cVar1 = FUN_00417780((void *)(*(int *)(param_1 + 0x394) + 0x28 + iVar3),
                               *(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffffcc);
          if (cVar1 != *(char *)(iVar3 + 4 + *(int *)(param_1 + 0x394))) {
            *(char *)(iVar3 + 4 + *(int *)(param_1 + 0x394)) = cVar1;
          }
        }
        iVar4 = *(int *)(param_1 + 0x394);
        iVar3 = iVar3 + 0x50;
        local_8 = local_8 + 1;
      } while (local_8 < (uint)((*(int *)(param_1 + 0x398) - iVar4) / 0x50));
    }
    if (*(char *)(iVar4 + 4 + *(int *)(param_1 + 0x388) * 0x50) == '\0') {
      FUN_0053ae80(param_1);
      FUN_0053b4a0((void *)param_1);
      iVar4 = *(int *)(param_1 + 0x624 + *(int *)(param_1 + 0x388) * 4);
      if (((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x180), iVar4 == 0)) ||
         (*(char *)(iVar4 + 0x59) == '\0')) {
        if (*(char *)(DAT_0065b444 + 0x73) != '\0') {
          *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
        }
      }
      else if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
        *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
      }
      iVar3 = FUN_004023e0();
      iVar4 = *(int *)(iVar3 + 0x34c);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x354) =
             *(undefined4 *)(iVar4 + 0x624 + *(int *)(iVar4 + 0x388) * 4);
      }
    }
  }
  return;
}


void __thiscall FUN_0053bfe0(void *this,float param_1)

{
  float *pfVar1;
  char cVar2;
  uchar uVar3;
  undefined4 *puVar4;
  uint uVar5;
  basic_string<> *pbVar6;
  int iVar7;
  undefined8 *puVar8;
  Vec3 *pVVar9;
  byte *pbVar10;
  void *this_00;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  byte *in_stack_ffffff90;
  byte *pbVar16;
  Vec3 local_48 [12];
  Vec3 local_3c [12];
  Vec3 local_30 [12];
  Vec3 local_24 [12];
  Layer *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5507;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x3c) == 6) {
    if (DAT_0065c25c == (Layer *)0x0) {
      local_14 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 0;
      DAT_0065c25c = FUN_0052b7a0(local_14);
    }
    local_8 = 0xffffffff;
    if (*(int *)(DAT_0065c25c + 0x3b0) != -1) goto LAB_0053c1ea;
    cVar2 = FUN_0053b1e0((int)this);
    if (cVar2 == '\0') goto LAB_0053c26a;
    local_14 = (Layer *)&stack0xffffff90;
    local_18 = (Layer *)&stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,
                 (undefined4 *)(*(int *)(*(int *)((int)this + 0x100) + 0x1c) + 0xf8));
    cVar2 = '\0';
    iVar15 = -1;
    local_8 = 1;
    puVar4 = FUN_00412870();
    local_8 = 0xffffffff;
    iVar15 = FUN_00438ed0(puVar4,iVar15,cVar2,in_stack_ffffff90);
    fVar13 = *(float *)((int)this + 0xf4) - param_1;
    *(float *)((int)this + 0xf4) = fVar13;
    if (fVar13 <= 0.0) {
      if (iVar15 != 0) {
        pbVar16 = (byte *)(iVar15 + 0x44);
        pbVar10 = pbVar16;
        if (0xf < *(uint *)(iVar15 + 0x58)) {
          pbVar10 = *(byte **)pbVar16;
        }
        uVar5 = FUN_004031f0(pbVar10,*(uint *)(iVar15 + 0x54),(byte *)&PTR_005ce008,0);
        if ((char)uVar5 == '\0') {
          puVar4 = FUN_0047d270();
          pbVar6 = (basic_string<> *)FUN_0047d6a0(puVar4 + 6,pbVar16);
          std::basic_string<>::operator=((basic_string<> *)((int)this + 200),pbVar6);
        }
      }
      iVar7 = rand();
      *(float *)((int)this + 0xf4) = (float)(iVar7 % 10 + 7);
    }
    if (iVar15 == 0) goto LAB_0053c26a;
    if (*(char *)((int)this + 0xec) == '\0') {
      fVar13 = *(float *)((int)this + 0xf0) + param_1;
      *(float *)((int)this + 0xf0) = fVar13;
      if (0.6 <= fVar13) {
        *(undefined1 *)((int)this + 0xec) = 1;
        *(undefined4 *)((int)this + 0xf0) = 0x3f19999a;
      }
    }
    else {
      fVar13 = *(float *)((int)this + 0xf0) - param_1;
      *(float *)((int)this + 0xf0) = fVar13;
      if (fVar13 <= 0.0) {
        *(undefined4 *)((int)this + 0xf0) = 0;
        *(undefined1 *)((int)this + 0xec) = 0;
      }
    }
    iVar15 = FUN_004023e0();
    if ((*(int *)(iVar15 + 0x408) != 0) &&
       (iVar15 = FUN_004023e0(), *(void **)(iVar15 + 0x408) == this)) goto LAB_0053c26a;
    iVar15 = **(int **)((int)this + 0x3dc);
    uVar3 = (uchar)(int)((*(float *)((int)this + 0xf0) / 0.6) * 175.0 + 80.0);
  }
  else {
LAB_0053c1ea:
    local_8 = 0xffffffff;
    if (*(int *)((int)this + 0x3dc) == 0) goto LAB_0053c26a;
    if (DAT_0065c25c == (Layer *)0x0) {
      local_18 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 2;
      DAT_0065c25c = FUN_0052b7a0(local_18);
    }
    local_8 = 0xffffffff;
    if (((*(void **)(DAT_0065c25c + 0x408) != (void *)0x0) &&
        (*(void **)(DAT_0065c25c + 0x408) == this)) &&
       (iVar15 = FUN_004023e0(), *(int *)(iVar15 + 0x3b0) == -1)) goto LAB_0053c26a;
    uVar3 = 0xff;
    iVar15 = **(int **)((int)this + 0x3dc);
  }
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),uVar3,0xff,0xff);
  (**(code **)(iVar15 + 0x25c))();
LAB_0053c26a:
  FUN_0053be80((int)this);
  if (*(float *)((int)this + 0x334) <= 0.0) {
    if (*(float *)((int)this + 0x438) != 0.0) {
      pVVar9 = (Vec3 *)((int)this + 0x3f8);
      pfVar1 = (float *)((int)this + 0x404);
      if (((*(float *)((int)this + 0x3f8) == *(float *)((int)this + 0x404)) &&
          (*(float *)((int)this + 0x3fc) == *(float *)((int)this + 0x408))) &&
         (*(float *)((int)this + 0x400) == *(float *)((int)this + 0x40c))) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        fVar13 = *(float *)((int)this + 0x43c);
        fVar14 = *(float *)((int)this + 0x434) + param_1;
        *(float *)((int)this + 0x434) = fVar14;
        if (fVar14 <= fVar13) {
          fVar14 = fVar14 / fVar13;
          *pfVar1 = *(float *)((int)this + 0x410) * fVar14 * param_1 + *pfVar1;
          *(float *)((int)this + 0x408) =
               *(float *)((int)this + 0x414) * fVar14 * param_1 + *(float *)((int)this + 0x408);
          *(float *)((int)this + 0x40c) =
               *(float *)((int)this + 0x418) * fVar14 * param_1 + *(float *)((int)this + 0x40c);
        }
        else {
          *(float *)((int)this + 0x434) = fVar13;
          *(undefined8 *)pfVar1 = *(undefined8 *)pVVar9;
          *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x400);
        }
      }
      else {
        *(undefined4 *)((int)this + 0x434) = 0;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar11 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar11) {
          fVar13 = 0.0 - *(float *)((int)this + 0x438);
        }
        else {
          fVar13 = *(float *)((int)this + 0x438);
        }
        *(float *)pVVar9 = fVar13;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar11 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar11) {
          fVar13 = 0.0 - *(float *)((int)this + 0x438);
        }
        else {
          fVar13 = *(float *)((int)this + 0x438);
        }
        *(float *)((int)this + 0x3fc) = fVar13;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar11 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar11) {
          fVar13 = 0.0 - *(float *)((int)this + 0x438);
        }
        else {
          fVar13 = *(float *)((int)this + 0x438);
        }
        *(float *)((int)this + 0x400) = fVar13;
        puVar8 = (undefined8 *)cocos2d::Vec3::operator-(pVVar9,local_3c);
        *(undefined8 *)((int)this + 0x410) = *puVar8;
        *(undefined4 *)((int)this + 0x418) = *(undefined4 *)(puVar8 + 1);
        cocos2d::Vec3::~Vec3(local_3c);
      }
      pVVar9 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((int)this + 800),local_48);
      local_8 = 4;
      cocos2d::Vec3::operator+(pVVar9,local_24);
      local_8._0_1_ = 5;
      cocos2d::Vec3::operator*(local_24,(float)local_30);
      cocos2d::Vec3::~Vec3(local_24);
      local_8 = CONCAT31(local_8._1_3_,6);
      (**(code **)(**(int **)((int)this + 0x3dc) + 0x78))();
      cocos2d::Vec3::~Vec3(local_30);
      local_8 = 0xffffffff;
      cocos2d::Vec3::~Vec3(local_48);
    }
  }
  else {
    fVar13 = *(float *)((int)this + 0x334) - param_1;
    *(float *)((int)this + 0x334) = fVar13;
    if (fVar13 <= 0.0) {
      *(undefined4 *)((int)this + 0x334) = 0;
    }
    FUN_0053bce0((int)this);
  }
  if (0.0 < *(float *)((int)this + 0x444)) {
    fVar12 = (float10)(**(code **)(**(int **)((int)this + 0x3dc) + 0xc0))();
    local_14 = (Layer *)(float)fVar12;
    (**(code **)(**(int **)((int)this + 0x3dc) + 0xbc))();
  }
  pfVar1 = *(float **)((int)this + 0x100);
  if (pfVar1 != (float *)0x0) {
    if (pfVar1[4] == -1.0) {
      if (*(char *)((int)pfVar1 + 0xd) == '\0') {
        iVar15 = rand();
        *(undefined1 *)((int)pfVar1 + 0xd) = 1;
        fVar13 = ((float)(iVar15 % 100) / 100.0) * 0.4 + 3.8;
      }
      else {
        iVar15 = rand();
        *(undefined1 *)((int)pfVar1 + 0xd) = 0;
        fVar13 = ((float)(iVar15 % 100) / 100.0) * 0.1 + 0.1;
      }
      pfVar1[4] = fVar13;
      if ((undefined1 *)pfVar1[7] != (undefined1 *)0x0) {
        *(undefined1 *)pfVar1[7] = 1;
      }
    }
    fVar13 = pfVar1[4];
    pfVar1[4] = fVar13 - param_1;
    if (fVar13 - param_1 <= 0.0) {
      pfVar1[4] = -1.0;
    }
    if (((undefined1 *)pfVar1[7])[10] == '\0') {
      if (*(char *)((int)pfVar1 + 0xe) != '\0') {
        *(undefined1 *)((int)pfVar1 + 0xe) = 0;
        *(undefined1 *)pfVar1[7] = 1;
      }
    }
    else {
      if (pfVar1[5] == -1.0) {
        if (*(char *)((int)pfVar1 + 0xe) == '\0') {
          iVar15 = rand();
          *(undefined1 *)((int)pfVar1 + 0xe) = 1;
          fVar13 = ((float)(iVar15 % 100) / 100.0) * 0.1 + 0.4;
        }
        else {
          iVar15 = rand();
          *(undefined1 *)((int)pfVar1 + 0xe) = 0;
          fVar13 = ((float)(iVar15 % 100) / 100.0) * 0.1 + 0.1;
        }
        pfVar1[5] = fVar13;
        *(undefined1 *)pfVar1[7] = 1;
      }
      fVar13 = pfVar1[5];
      pfVar1[5] = fVar13 - param_1;
      if (fVar13 - param_1 <= 0.0) {
        pfVar1[5] = -1.0;
      }
    }
    if (pfVar1[1] != -NAN) {
      fVar13 = *pfVar1 + param_1;
      *pfVar1 = fVar13;
      if (0.25 <= fVar13) {
        pfVar1[2] = (float)((int)pfVar1[2] + 1);
        *pfVar1 = fVar13 - 0.25;
        if (1 < (int)pfVar1[2]) {
          pfVar1[2] = 0.0;
        }
        *(undefined1 *)(pfVar1 + 3) = 1;
      }
    }
    this_00 = *(void **)((int)this + 0x100);
    if (**(char **)((int)this_00 + 0x1c) != '\0') {
      FUN_005376f0(this_00,this);
      **(undefined1 **)(*(int *)((int)this + 0x100) + 0x1c) = 0;
      this_00 = *(void **)((int)this + 0x100);
    }
    if (*(char *)((int)this_00 + 0xc) != '\0') {
      FUN_005376f0(this_00,this);
      *(undefined1 *)(*(int *)((int)this + 0x100) + 0xc) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}
