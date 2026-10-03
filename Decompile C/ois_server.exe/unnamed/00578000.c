#include "../ois_server.exe.h"


void FUN_005789b0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  Ref *pRVar7;
  void *pvVar8;
  int *this;
  float fVar9;
  float in_XMM3_Da;
  void *in_stack_ffffff7c;
  void *in_stack_ffffff8c;
  undefined4 *puVar10;
  undefined4 *local_48;
  float local_44;
  int *local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c93ad;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  if ((*(int *)(param_1[0x95] + 0x158) != 0) && (*(int *)(param_1[0x95] + 0x158) != 4)) {
    local_30 = 1;
  }
  if (param_1 == *(int **)(DAT_0065b5cc + 0xd0)) {
    local_30 = 1;
  }
  local_38 = in_XMM3_Da;
  cVar2 = (**(code **)(*param_1 + 8))();
  if ((cVar2 != '\0') || ((char)local_30 != '\0')) {
    FUN_005772f0((undefined1 *)local_2c,(int)param_1);
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_005adb0f(0x38);
    local_8._0_1_ = 1;
    local_48 = puVar3;
    FUN_004024e0(&stack0xffffff8c,local_2c);
    puVar3 = FUN_00573530(puVar3,param_1 + 2,in_stack_ffffff8c);
    local_8._0_1_ = 0;
    piVar5 = (int *)puVar3[8];
    this = local_40;
    local_48 = puVar3;
    if (piVar5 == (int *)0x0) {
      FUN_004024e0(&stack0xffffff8c,puVar3);
      uVar4 = FUN_00591910(in_stack_ffffff8c);
      this = local_40;
      puVar3[8] = uVar4;
      (**(code **)(*local_40 + 0x108))();
      piVar5 = (int *)puVar3[8];
    }
    (**(code **)(*piVar5 + 0x40))();
    local_34 = 0.5;
    local_30 = 0x3f000000;
    local_8._0_1_ = 2;
    (**(code **)(*(int *)puVar3[8] + 0xa0))();
    local_8._0_1_ = 0;
    fVar9 = (float)*(double *)(puVar3[0xd] + 0x20);
    FUN_00577670(this,&local_34,fVar9,(float)*(double *)(puVar3[0xd] + 0x28));
    local_8._0_1_ = 3;
    (**(code **)(*(int *)puVar3[8] + 0x4c))();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)puVar3[8] + 0xb4))();
    if (*(int *)(param_1[0x95] + 0x158) == 0) {
      FUN_00591e00(&stack0xffffff7c,"%s_Ship_Sensors.png");
      piVar5 = (int *)FUN_00591910(in_stack_ffffff7c);
      iVar1 = DAT_0065b5cc;
      puVar3[10] = piVar5;
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xd0) + 0x40) + 0x28) + 8) + 0xb0) ==
          2) {
        iVar1 = *piVar5;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),200,200,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
      local_34 = 0.5;
      local_30 = 0x3f000000;
      local_8._0_1_ = 4;
      (**(code **)(*(int *)puVar3[10] + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = *(int *)puVar3[10];
      iVar6 = (**(code **)(*(int *)puVar3[8] + 0xb0))();
      local_30 = *(undefined4 *)(iVar6 + 4);
      (**(code **)(*(int *)puVar3[8] + 0xb0))();
      (**(code **)(iVar1 + 0x48))();
      fVar9 = local_38;
      (**(code **)(*(int *)puVar3[10] + 0x40))();
      in_stack_ffffff7c = (void *)puVar3[10];
      (**(code **)(*(int *)puVar3[8] + 0x108))();
      this = local_40;
      if (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x234) != '\0') {
        (**(code **)(*(int *)puVar3[10] + 0x244))();
        fVar9 = (float)param_1[0x48];
        (**(code **)(*(int *)puVar3[10] + 0xbc))();
        this = local_40;
      }
    }
    if (puVar3[9] == 0) {
      in_stack_ffffff7c = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
      FUN_00402690(&stack0xffffff7c,"white.png",9);
      uVar4 = FUN_00591910(in_stack_ffffff7c);
      puVar3[9] = uVar4;
      (**(code **)(*this + 0x108))();
    }
    FUN_00403cb0((int)param_1);
    if (fVar9 == 0.0) {
      puVar10 = (undefined4 *)0x578cfd;
      (**(code **)(*(int *)puVar3[9] + 0xb4))();
    }
    else {
      (**(code **)(*(int *)puVar3[9] + 0xb4))();
      local_3c = 0x3f000000;
      local_38 = 0.0;
      local_8._0_1_ = 5;
      puVar10 = &local_3c;
      (**(code **)(*(int *)puVar3[9] + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = *(int *)puVar3[9];
      (**(code **)(*(int *)puVar3[8] + 0x5c))();
      (**(code **)(iVar1 + 0x4c))();
      FUN_005173c0((int)param_1);
      fVar9 = fVar9 + 180.0;
      if (360.0 <= fVar9) {
        fVar9 = fVar9 - 360.0;
      }
      (**(code **)(*(int *)puVar3[9] + 0xbc))();
      iVar1 = *(int *)puVar3[9];
      FUN_00403cb0((int)param_1);
      local_38 = fVar9 * 8.0;
      (**(code **)(*(int *)puVar3[9] + 0xb0))();
      (**(code **)(iVar1 + 0x2c))();
    }
    if (*(char *)((int)local_40 + 0x45d) != '\0') {
      FUN_00591e00(&stack0xffffff8c,"`%c%s");
      pRVar7 = FUN_0055cb00((Node)0x0,puVar10);
      puVar3[0xc] = pRVar7;
      local_3c = 0x3f000000;
      local_38 = 1.0;
      local_8._0_1_ = 7;
      (**(code **)(*(int *)pRVar7 + 0xa0))();
      local_8._0_1_ = 0;
      FUN_00577670(local_40,&local_44,(float)*(double *)(param_1 + 10),
                   (float)*(double *)(param_1 + 0xc));
      local_8._0_1_ = 8;
      (**(code **)(*(int *)puVar3[0xc] + 0x48))();
      (**(code **)(*local_40 + 0x108))();
      local_8 = (uint)local_8._1_3_ << 8;
    }
    puVar10 = (undefined4 *)local_40[0x10b];
    if ((undefined4 *)local_40[0x10c] == puVar10) {
      FUN_00414080(local_40 + 0x10a,puVar10,&local_48);
    }
    else {
      *puVar10 = puVar3;
      local_40[0x10b] = local_40[0x10b] + 4;
    }
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00578f40(int *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  Node *pNVar3;
  basic_string<> *pbVar4;
  Sprite *pSVar5;
  Texture2D *this;
  float *pfVar6;
  int *piVar7;
  uint uVar8;
  void *pvVar9;
  Ref *pRVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  Vec2 *pVVar18;
  Vec2 *pVVar19;
  int iVar20;
  uint uVar21;
  Color3B *this_00;
  char cVar22;
  int *piVar23;
  code *pcVar24;
  Ref *pRVar25;
  Ref *in_XMM0_Da;
  void *in_stack_fffffe8c;
  void *in_stack_fffffea0;
  void *in_stack_fffffea8;
  float *in_stack_fffffeac;
  char *in_stack_fffffeb0;
  float *in_stack_fffffebc;
  float fVar26;
  float fVar27;
  float fVar28;
  Vec2 VVar29;
  Vec2 VVar30;
  Ref *in_stack_fffffecc;
  uchar uVar31;
  float local_11c [2];
  float local_114 [2];
  float local_10c [2];
  Color3B local_103 [3];
  undefined4 local_100;
  undefined4 local_fc;
  Ref *local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [2];
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98 [2];
  float local_90 [2];
  int *local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  int *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  int *local_70;
  undefined4 local_6c;
  int *local_68;
  Ref *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int local_54 [6];
  int local_3c [6];
  undefined4 local_24;
  undefined4 local_20;
  float local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9744;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_70 = (int *)0x0;
  local_5c = (int *)0x0;
  local_7c = param_1;
  pNVar3 = FUN_00412990();
  if (pNVar3[0x285] != (Node)0x0) {
    pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_54,"%s_PlanetOrbit_512.png");
    local_8 = 0;
    pSVar5 = cocos2d::Sprite::create(pbVar4);
    param_1[0x11f] = (int)pSVar5;
    local_8 = 1;
    FUN_00401b20(local_54);
    local_8 = 0xffffffff;
    this = (Texture2D *)(**(code **)(*(int *)(param_1[0x11f] + 0x278) + 0xc))();
    local_20 = 0x2600;
    local_24 = 0x2600;
    local_1c[0] = 4.63423e-41;
    local_1c[1] = 4.63423e-41;
    cocos2d::Texture2D::setTexParameters(this,(_TexParams *)&local_24);
    (**(code **)(*(int *)param_1[0x11f] + 0x244))();
    iVar13 = *(int *)param_1[0x11f];
    pfVar6 = (float *)(**(code **)(iVar13 + 0xb0))();
    in_XMM0_Da = (Ref *)(1200.0 / *pfVar6);
    in_stack_fffffecc = in_XMM0_Da;
    (**(code **)(iVar13 + 0x40))();
    local_78 = 0x3f000000;
    local_74 = (undefined1 *)0x3f000000;
    local_8 = 2;
    (**(code **)(*(int *)param_1[0x11f] + 0xa0))();
    local_8 = 0xffffffff;
    FUN_00577670(param_1,local_90,0.0,0.0);
    local_8 = 3;
    (**(code **)(*(int *)param_1[0x11f] + 0x4c))();
    local_8 = 0xffffffff;
    iVar13 = *(int *)param_1[0x11f];
    cocos2d::Color3B::Color3B((Color3B *)&local_80,0xff,'\0','\0');
    (**(code **)(iVar13 + 0x25c))();
    in_stack_fffffebc = (float *)0x32;
    (**(code **)(*param_1 + 0x108))();
  }
  if ((*(char *)((int)param_1 + 0x45d) == '\0') || (DAT_0065509c == -1)) {
    piVar7 = *(int **)((int)DAT_0065b5cc + 0xd8);
  }
  else {
    in_stack_fffffecc = (Ref *)0x57911f;
    piVar7 = FUN_004a7280(DAT_0065b5cc,DAT_0065509c);
  }
  iVar13 = piVar7[0x21];
  local_64 = (Ref *)0x0;
  local_88 = piVar7;
  if (piVar7[0x22] - iVar13 >> 2 != 0) {
    do {
      if ((*(char *)(DAT_0065b444 + 0x72) == '\0') ||
         (iVar13 = *(int *)(iVar13 + (int)local_64 * 4), *(int *)(iVar13 + 0x54) == 1)) {
LAB_005791e3:
        piVar14 = (int *)((int)local_64 * 4);
        local_60 = piVar14;
        if (*(int *)(*(int *)(piVar7[0x21] + (int)piVar14) + 0x54) == 5) {
          pvVar9 = (void *)FUN_005adb0f(0x38);
          local_8 = 5;
          local_a0 = pvVar9;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xfffffebc,(char *)&PTR_005ce008);
          local_84 = FUN_00573530(pvVar9,*(undefined4 *)(piVar7[0x21] + (int)local_60),
                                  in_stack_fffffebc);
          local_8 = 0xffffffff;
          in_stack_fffffeac = (float *)&stack0xfffffebc;
          in_stack_fffffeb0 = "`%c%s";
          in_stack_fffffea8 = (void *)0x5792a9;
          FUN_00591e00(&stack0xfffffebc,"`%c%s");
          pRVar10 = FUN_0055cb00((Node)0x0,in_stack_fffffebc);
          local_78 = 0x3f000000;
          local_74 = (undefined1 *)0x3f000000;
          *(Ref **)((int)local_84 + 0x30) = pRVar10;
          local_8 = 6;
          (**(code **)(**(int **)((int)local_84 + 0x30) + 0xa0))();
          local_8 = 0xffffffff;
          in_XMM0_Da = (Ref *)(float)*(double *)(*(int *)((int)local_84 + 0x34) + 0x20);
          FUN_00577670(param_1,local_10c,(float)in_XMM0_Da,
                       (float)*(double *)(*(int *)((int)local_84 + 0x34) + 0x28));
          local_8 = 7;
          (**(code **)(**(int **)((int)local_84 + 0x30) + 0x4c))();
          local_8 = 0xffffffff;
          (**(code **)(*param_1 + 0x108))();
          in_stack_fffffecc = (Ref *)0x579361;
          FUN_00412900(param_1 + 0x10a,&local_84);
        }
        else {
          local_8 = 8;
          FUN_00402920((int)local_54);
          FUN_00402640((undefined1 *)local_54);
          local_8 = 9;
          piVar14 = (int *)FUN_00576b90((undefined1 *)local_3c,*(int *)(piVar7[0x21] + (int)piVar14)
                                       );
          FUN_00413230(local_54,piVar14);
          local_8._0_1_ = 10;
          FUN_00401b20(local_3c);
          local_8._0_1_ = 9;
          pvVar9 = (void *)FUN_005adb0f(0x38);
          local_6c = (int *)&stack0xfffffebc;
          local_8._0_1_ = 0xb;
          in_stack_fffffeb0 = (char *)0x5793dd;
          local_9c = pvVar9;
          FUN_00402950((int)&stack0xfffffebc);
          local_8._0_1_ = 0xc;
          FUN_004027c0(&stack0xfffffebc,local_54);
          piVar14 = local_60;
          local_8._0_1_ = 0xb;
          local_68 = FUN_00573530(pvVar9,*(undefined4 *)(piVar7[0x21] + (int)local_60),
                                  in_stack_fffffebc);
          local_8._0_1_ = 9;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 9;
          param_1 = local_7c;
          local_58 = local_68;
          if (local_68[8] == 0) {
            local_e0 = &stack0xfffffebc;
            in_stack_fffffeb0 = (char *)0x579431;
            FUN_00402950((int)&stack0xfffffebc);
            local_8._0_1_ = 0xd;
            FUN_004027c0(&stack0xfffffebc,local_68);
            local_8._0_1_ = 9;
            iVar13 = FUN_00591910(in_stack_fffffebc);
            param_1 = local_7c;
            local_58[8] = iVar13;
            (**(code **)(*local_7c + 0x108))();
            piVar14 = local_60;
            uVar1 = (undefined1)local_8;
          }
          local_8._0_1_ = uVar1;
          (**(code **)(*(int *)local_58[8] + 0x244))();
          (**(code **)(*(int *)local_58[8] + 0x40))();
          local_100 = 0x3f000000;
          local_fc = 0x3f000000;
          local_8._0_1_ = 0xe;
          (**(code **)(*(int *)local_58[8] + 0xa0))();
          local_8._0_1_ = 9;
          (**(code **)(*(int *)local_58[8] + 0xbc))();
          in_XMM0_Da = (Ref *)(float)*(double *)(local_58[0xd] + 0x20);
          FUN_00577670(param_1,local_114,(float)in_XMM0_Da,(float)*(double *)(local_58[0xd] + 0x28))
          ;
          local_8._0_1_ = 0xf;
          in_stack_fffffebc = (float *)0x579577;
          (**(code **)(*(int *)local_58[8] + 0x4c))();
          local_8._0_1_ = 9;
          pNVar3 = FUN_00412990();
          if ((pNVar3[0x285] != (Node)0x0) &&
             ((iVar13 = *(int *)(*(int *)(piVar7[0x21] + (int)piVar14) + 0x54), iVar13 == 4 ||
              (iVar13 == 3)))) {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorCenterMarker.png");
            iVar13 = FUN_00591910(in_stack_fffffebc);
            local_58[9] = iVar13;
            iVar13 = *(int *)local_58[9];
            (**(code **)(*(int *)local_58[8] + 0x5c))();
            (**(code **)(iVar13 + 0x4c))();
            local_e8 = 0x3f000000;
            local_e4 = 0x3f000000;
            local_8._0_1_ = 0x10;
            (**(code **)(*(int *)local_58[9] + 0xa0))();
            local_8._0_1_ = 9;
            (**(code **)(*param_1 + 0x108))();
            piVar14 = local_60;
          }
          cVar22 = *(char *)((int)param_1 + 0x45d);
          if ((cVar22 != '\0') && (in_XMM0_Da = (Ref *)param_1[0x13f], (float)in_XMM0_Da == 1.0)) {
            local_68 = *(int **)((int)piVar14 + piVar7[0x21]);
            iVar13 = local_68[0x15];
            if ((iVar13 == 1) || ((iVar13 == 0 || (iVar13 == 2)))) {
              in_stack_fffffeac = (float *)&stack0xfffffebc;
              in_stack_fffffeb0 = "`%c%s";
              in_stack_fffffea8 = (void *)0x5796ae;
              FUN_00591e00(&stack0xfffffebc,"`%c%s");
              pRVar10 = FUN_0055cb00((Node)0x0,in_stack_fffffebc);
              local_f0 = 0x3f000000;
              local_ec = 0x3f800000;
              local_58[0xc] = (int)pRVar10;
              local_8._0_1_ = 0x11;
              (**(code **)(*(int *)local_58[0xc] + 0xa0))();
              local_8._0_1_ = 9;
              local_5c = (int *)&stack0xfffffec8;
              local_70 = (int *)((uint)local_70 | 0x200);
              FUN_00577670(param_1,(float *)local_f8,
                           (float)*(double *)(*(int *)(piVar7[0x21] + (int)piVar14) + 0x20),
                           (float)*(double *)(*(int *)(piVar7[0x21] + (int)piVar14) + 0x28));
              local_8._0_1_ = 0x12;
              in_XMM0_Da = local_f8[0];
              (**(code **)(*(int *)local_58[0xc] + 0x48))();
              in_stack_fffffebc = (float *)0x579782;
              (**(code **)(*param_1 + 0x108))();
              local_8._0_1_ = 9;
              cVar22 = *(char *)((int)param_1 + 0x45d);
            }
          }
          if (*(int *)((int)piVar14 + piVar7[0x21]) ==
              *(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1a4)) {
            iVar13 = *(int *)param_1[0x11e];
            (**(code **)(*(int *)local_58[8] + 0x5c))();
            (**(code **)(iVar13 + 0x4c))();
            if (*(char *)((int)param_1 + 0x45d) == '\0') {
              in_XMM0_Da = *(Ref **)(&UNK_005e0c68 + DAT_00655098 * 4);
            }
            else {
              in_XMM0_Da = *(Ref **)(&UNK_005e0c44 + DAT_00655094 * 4);
            }
            (**(code **)(*(int *)param_1[0x11e] + 0x40))();
            iVar13 = *(int *)param_1[0x11e];
            in_stack_fffffebc = (float *)0x579822;
            cocos2d::Color3B::Color3B((Color3B *)&local_80,0xa4,0xf9,0x9e);
            (**(code **)(iVar13 + 0x25c))();
            (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
            cVar22 = *(char *)((int)param_1 + 0x45d);
            piVar14 = local_60;
          }
          iVar13 = *(int *)(*(int *)((int)piVar14 + piVar7[0x21]) + 0x54);
          if (iVar13 == 2) {
            if (local_58[9] == 0) {
              pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_3c,"%s_MoonOrbit_256.png")
              ;
              local_8._0_1_ = 0x13;
              pSVar5 = cocos2d::Sprite::create(pbVar4);
              local_58[9] = (int)pSVar5;
              local_8._0_1_ = 0x14;
              FUN_00401b20(local_3c);
              local_8._0_1_ = 9;
              (**(code **)(*(int *)local_58[9] + 0x244))();
              (**(code **)(*param_1 + 0x108))();
            }
            local_d8 = (float)*(double *)(local_58[0xd] + 0x28);
            local_dc = (float)*(double *)(local_58[0xd] + 0x20);
            iVar13 = *(int *)(*(int *)(piVar7[0x21] + (int)piVar14) + 0x58);
            local_b8 = (float)*(double *)(iVar13 + 0x28);
            local_bc = (float)*(double *)(iVar13 + 0x20);
            local_8._0_1_ = 0x16;
            if (*(char *)((int)param_1 + 0x45d) == '\0') {
              local_68 = *(int **)(&UNK_005e0c68 + DAT_00655098 * 4);
            }
            else {
              local_68 = *(int **)(&UNK_005e0c44 + DAT_00655094 * 4);
            }
            iVar13 = *(int *)local_58[9];
            (**(code **)(*(int *)local_58[9] + 0xb0))();
            FUN_00591010((Vec2 *)&local_bc,(Vec2 *)&local_dc);
            (**(code **)(iVar13 + 0x40))();
            local_c4 = 0x3f000000;
            local_c0 = 0x3f000000;
            local_8._0_1_ = 0x17;
            (**(code **)(*(int *)local_58[9] + 0xa0))();
            param_1 = local_7c;
            local_8._0_1_ = 9;
            iVar13 = *(int *)(*(int *)(piVar7[0x21] + (int)local_60) + 0x58);
            in_XMM0_Da = (Ref *)(float)*(double *)(iVar13 + 0x20);
            in_stack_fffffebc = (float *)0x579a1b;
            FUN_00577670(local_7c,local_11c,(float)in_XMM0_Da,(float)*(double *)(iVar13 + 0x28));
            local_8._0_1_ = 0x18;
LAB_00579c53:
            (**(code **)(*(int *)local_58[9] + 0x4c))();
            local_8._0_1_ = 9;
          }
          else if (iVar13 == 0) {
            if (local_58[9] == 0) {
              local_c8 = (float)*(double *)(local_58[0xd] + 0x28);
              fVar27 = (float)*(double *)(local_58[0xd] + 0x20);
              local_d4[0] = 0.0;
              local_d4[1] = 0.0;
              local_8._0_1_ = 0x1a;
              local_cc = fVar27;
              FUN_00591010((Vec2 *)local_d4,(Vec2 *)&local_cc);
              local_8._0_1_ = 9;
              uVar1 = (undefined1)local_8;
              local_8._0_1_ = 9;
              if (200.0 <= fVar27) {
                local_8._0_1_ = uVar1;
                pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_3c,"%s_PlanetOrbit.png")
                ;
                local_8._0_1_ = 0x1d;
                pSVar5 = cocos2d::Sprite::create(pbVar4);
                local_58[9] = (int)pSVar5;
                local_8._0_1_ = 0x1e;
              }
              else {
                pbVar4 = (basic_string<> *)
                         FUN_00591e00((undefined1 *)local_3c,"%s_PlanetOrbit_512.png");
                local_8._0_1_ = 0x1b;
                pSVar5 = cocos2d::Sprite::create(pbVar4);
                local_58[9] = (int)pSVar5;
                local_8._0_1_ = 0x1c;
              }
              FUN_00401b20(local_3c);
              local_8._0_1_ = 9;
              (**(code **)(*(int *)local_58[9] + 0x244))();
              (**(code **)(*param_1 + 0x108))();
              cVar22 = *(char *)((int)param_1 + 0x45d);
            }
            local_ac = (float)*(double *)(local_58[0xd] + 0x28);
            local_b0 = (float)*(double *)(local_58[0xd] + 0x20);
            local_a8[0] = 0.0;
            local_a8[1] = 0.0;
            local_8._0_1_ = 0x20;
            if (cVar22 == '\0') {
              piVar14 = *(int **)(&UNK_005e0c68 + DAT_00655098 * 4);
            }
            else {
              piVar14 = *(int **)(&UNK_005e0c44 + DAT_00655094 * 4);
            }
            iVar13 = *(int *)local_58[9];
            local_68 = piVar14;
            pfVar6 = (float *)(**(code **)(*(int *)local_58[9] + 0xb0))();
            FUN_00591010((Vec2 *)local_a8,(Vec2 *)&local_b0);
            in_XMM0_Da = (Ref *)(((float)piVar14 / (*pfVar6 * 0.5)) * (float)local_68);
            (**(code **)(iVar13 + 0x40))();
            local_98[0] = 0.5;
            local_98[1] = 0.5;
            local_8._0_1_ = 0x21;
            (**(code **)(*(int *)local_58[9] + 0xa0))();
            param_1 = local_7c;
            local_8._0_1_ = 9;
            in_stack_fffffebc = (float *)0x579c4f;
            FUN_00577670(local_7c,local_1c,0.0,0.0);
            local_8._0_1_ = 0x22;
            goto LAB_00579c53;
          }
          in_stack_fffffecc = (Ref *)0x579c72;
          FUN_00412900(param_1 + 0x10a,&local_58);
          local_8 = 0x23;
          FUN_00401b20(local_54);
          local_8 = 0xffffffff;
        }
      }
      else {
        local_5c = (int *)&stack0xfffffecc;
        local_68 = (int *)&stack0xfffffecc;
        local_70 = (int *)((uint)local_70 | 8);
        in_stack_fffffecc = (Ref *)(float)*(double *)(iVar13 + 0x20);
        in_XMM0_Da = (Ref *)(float)*(double *)(iVar13 + 0x28);
        local_8 = 4;
        pRVar10 = in_XMM0_Da;
        FUN_0049baa0((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),local_90,piVar7);
        local_8 = 0xffffffff;
        uVar8 = FUN_0051eeb0(*(void **)((int)local_90[0] + 0x14),(float)in_stack_fffffecc,
                             (float)pRVar10);
        if ((char)uVar8 == '\0') goto LAB_005791e3;
      }
      iVar13 = piVar7[0x21];
      local_64 = local_64 + 1;
    } while (local_64 < (Ref *)(piVar7[0x22] - iVar13 >> 2));
  }
  pfVar6 = (float *)0x579cad;
  pNVar3 = FUN_00412990();
  pcVar24 = Color3B_exref;
  if (pNVar3[0x285] != (Node)0x0) {
    iVar13 = piVar7[0x2a];
    local_68 = piVar7 + 0x2a;
    local_58 = (int *)0x0;
    local_60 = (int *)0x0;
    if (piVar7[0x2b] - iVar13 >> 2 != 0) {
      do {
        iVar13 = *(int *)(iVar13 + (int)local_60 * 4);
        if (*(int *)(iVar13 + 4) == 0) {
          if (*(char *)(iVar13 + 0x34) == '\0') {
            iVar13 = *(int *)(iVar13 + 0x38);
            if (iVar13 == 0) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Normal.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B(local_103,'\0',0xbf,0xff);
            }
            else if (iVar13 == 1) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_e0 + 1),0xff,'\0',0xff);
            }
            else if (iVar13 == 2) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_6c + 1),0xff,0xff,'\0');
            }
            else if (iVar13 == 3) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_9c + 1),0xff,'\x7f','\0');
            }
            else if (iVar13 == 4) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
            }
            else {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_Stealth.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              iVar13 = *local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,0xff,0xff);
            }
          }
          else {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavMesh_StationLink.png");
            local_58 = (int *)FUN_00591910(in_stack_fffffebc);
            iVar13 = *local_58;
            cocos2d::Color3B::Color3B((Color3B *)&local_80,0xff,0xff,0xff);
          }
        }
        else {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorNavPoint.png");
          local_58 = (int *)FUN_00591910(in_stack_fffffebc);
          iVar13 = *local_58;
          FUN_00412f00(piVar7 + 0x2a,(int)local_60);
        }
        (**(code **)(iVar13 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        local_8 = 0x24;
        (**(code **)(*local_58 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        piVar14 = local_60;
        fVar27 = 8.046732e-39;
        piVar12 = local_60;
        piVar11 = (int *)FUN_00412f00(piVar7 + 0x2a,(int)local_60);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)(*piVar11 + 8));
        FUN_00577670(param_1,local_98,fVar27,(float)piVar12);
        local_8 = 0x25;
        (**(code **)(*local_58 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_98);
        in_stack_fffffebc = (float *)0x579f55;
        (**(code **)(*param_1 + 0x108))();
        FUN_00412900(param_1 + 0x126,&local_58);
        local_64 = (Ref *)0x0;
        in_stack_fffffecc = (Ref *)0x579f77;
        piVar12 = (int *)FUN_00412f00(piVar7 + 0x2a,(int)piVar14);
        iVar13 = FUN_00412f10((int *)(*piVar12 + 0x28));
        if (iVar13 != 0) {
          do {
            piVar14 = (int *)FUN_00412f00(piVar7 + 0x2a,(int)piVar14);
            iVar13 = *(int *)(*piVar14 + 4);
            piVar14 = (int *)FUN_00412f00(piVar7 + 0x2a,(int)local_60);
            piVar14 = (int *)FUN_00412f00((void *)(*piVar14 + 0x28),(int)local_64);
            local_5c = FUN_00520f80(piVar7,*piVar14,iVar13);
            if (local_5c == (int *)0x0) {
              local_5c = (int *)0x0;
              piVar14 = local_60;
            }
            else {
              std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffebc,"white.png");
              local_58 = (int *)FUN_00591910(in_stack_fffffebc);
              piVar7 = local_60;
              iVar13 = *local_58;
              FUN_00412f00(local_68,(int)local_60);
              (**(code **)(iVar13 + 0x25c))();
              (**(code **)(*local_58 + 0x244))();
              fVar27 = 8.047143e-39;
              piVar14 = piVar7;
              piVar12 = (int *)FUN_00412f00(local_68,(int)piVar7);
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)(*piVar12 + 8));
              fVar26 = 8.047186e-39;
              FUN_00577670(param_1,local_a8,fVar27,(float)piVar14);
              local_8 = 0x26;
              (**(code **)(*local_58 + 0x4c))();
              local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)local_a8);
              pVVar18 = (Vec2 *)(local_5c + 2);
              piVar7 = (int *)FUN_00412f00(local_68,(int)piVar7);
              FUN_00591010((Vec2 *)(*piVar7 + 8),pVVar18);
              param_1 = local_7c;
              local_5c = (int *)((float)in_XMM0_Da * (float)local_7c[0x13f]);
              iVar13 = *local_58;
              pfVar6 = (float *)(**(code **)(iVar13 + 0xb0))();
              in_XMM0_Da = (Ref *)((float)local_5c / *pfVar6);
              (**(code **)(iVar13 + 0x2c))();
              local_74 = &stack0xfffffebc;
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffebc,pVVar18);
              piVar14 = local_60;
              local_8 = 0x27;
              fVar27 = 8.047388e-39;
              piVar7 = local_60;
              piVar12 = (int *)FUN_00412f00(local_68,(int)local_60);
              in_stack_fffffeac = (float *)0x57a0e9;
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,(Vec2 *)(*piVar12 + 8));
              local_8 = 0xffffffff;
              FUN_00592f80(fVar27,piVar7,fVar26);
              (**(code **)(*local_58 + 0xbc))();
              in_stack_fffffebc = (float *)cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.0);
              local_8 = 0x28;
              (**(code **)(*local_58 + 0xa0))();
              local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
              in_stack_fffffeb0 = (char *)0x57a15d;
              (**(code **)(*param_1 + 0x108))();
              FUN_00412900(param_1 + 0x126,&local_58);
              piVar7 = local_88;
            }
            local_64 = local_64 + 1;
            in_stack_fffffecc = (Ref *)0x57a186;
            piVar12 = (int *)FUN_00412f00(piVar7 + 0x2a,(int)piVar14);
            pRVar10 = (Ref *)FUN_00412f10((int *)(*piVar12 + 0x28));
          } while (local_64 < pRVar10);
        }
        local_60 = (int *)((int)piVar14 + 1);
        iVar13 = piVar7[0x2a];
      } while (local_60 < (int *)(piVar7[0x2b] - iVar13 >> 2));
    }
    local_5c = piVar7 + 0x4d;
    piVar14 = (int *)0x0;
    local_60 = (int *)0x0;
    iVar13 = FUN_00412f10(local_5c);
    piVar12 = local_5c;
    if (iVar13 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffebc,"NavMap_Zone.png");
        local_58 = (int *)FUN_00591910(in_stack_fffffebc);
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        local_8 = 0x29;
        (**(code **)(*local_58 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        fVar27 = 8.047883e-39;
        piVar7 = piVar14;
        piVar11 = (int *)FUN_00412f00(piVar12,(int)piVar14);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,(Vec2 *)(*piVar11 + 0xe8));
        in_stack_fffffecc = (Ref *)FUN_00577670(param_1,local_98,fVar27,(float)piVar7);
        local_8 = 0x2a;
        (**(code **)(*local_58 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_98);
        (**(code **)(*param_1 + 0x108))();
        FUN_00412900(param_1 + 0x126,&local_58);
        piVar7 = (int *)FUN_00412f00(piVar12,(int)piVar14);
        if (*(float *)(*piVar7 + 0x3c) <= 0.0) {
          FUN_00402490((undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28
                                         ) + 8) + 0x98));
          FUN_00591e00(&stack0xfffffeac,"%s_JumpRange.png");
          local_58 = (int *)FUN_00591910(in_stack_fffffeac);
          iVar13 = *local_58;
          cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
          (**(code **)(iVar13 + 0x25c))();
          fVar27 = 8.04876e-39;
          piVar7 = local_60;
          piVar14 = (int *)FUN_00412f00(piVar12,(int)local_60);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb8,(Vec2 *)(*piVar14 + 0xe8));
          in_stack_fffffebc = FUN_00577670(param_1,local_d4,fVar27,(float)piVar7);
          local_8 = 0x2d;
          (**(code **)(*local_58 + 0x4c))();
          local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)local_d4);
          if (*(char *)((int)param_1 + 0x45d) == '\0') {
            local_68 = (int *)param_1[0x13f];
          }
          else {
            local_68 = (int *)0x3e4ccccd;
          }
          iVar13 = *local_58;
          piVar7 = (int *)FUN_00412f00(piVar12,(int)local_60);
          local_5c = *(int **)(*piVar7 + 0x38);
          (**(code **)(*local_58 + 0xb0))();
          (**(code **)(iVar13 + 0x40))();
          (**(code **)(*local_58 + 0x244))();
          in_stack_fffffeb0 = (char *)cocos2d::Vec2::Vec2((Vec2 *)&local_cc,0.5,0.5);
          local_8 = 0x2e;
          in_stack_fffffeac = (float *)0x57a591;
          (**(code **)(*local_58 + 0xa0))();
          pVVar18 = (Vec2 *)&local_cc;
        }
        else {
          std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffeac,"white.png");
          local_58 = (int *)FUN_00591910(in_stack_fffffeac);
          iVar13 = *local_58;
          cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,'\0','\0');
          (**(code **)(iVar13 + 0x25c))();
          in_stack_fffffebc = (float *)0x60;
          (**(code **)(*local_58 + 0x244))();
          cocos2d::Vec2::Vec2((Vec2 *)local_a8,0.5,0.5);
          local_8 = 0x2b;
          (**(code **)(*local_58 + 0xa0))();
          local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)local_a8);
          if (*(char *)((int)param_1 + 0x45d) == '\0') {
            local_68 = (int *)param_1[0x13f];
          }
          else {
            local_68 = (int *)0x3e4ccccd;
          }
          local_9c = (void *)0x3e4ccccd;
          if (*(char *)((int)param_1 + 0x45d) == '\0') {
            local_9c = (void *)param_1[0x13f];
          }
          iVar13 = *local_58;
          piVar7 = (int *)FUN_00412f00(piVar12,(int)local_60);
          iVar20 = *piVar7;
          iVar15 = (**(code **)(*local_58 + 0xb0))();
          local_5c = *(int **)(iVar20 + 0x40);
          local_6c = *(int **)(iVar15 + 4);
          piVar7 = (int *)FUN_00412f00(piVar12,(int)local_60);
          iVar20 = *piVar7;
          pfVar6 = (float *)(**(code **)(*local_58 + 0xb0))();
          in_stack_fffffeb0 = (char *)((*(float *)(iVar20 + 0x3c) / *pfVar6) * (float)local_9c);
          (**(code **)(iVar13 + 0x3c))();
          fVar27 = 8.048529e-39;
          piVar7 = local_60;
          piVar14 = (int *)FUN_00412f00(piVar12,(int)local_60);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffea8,(Vec2 *)(*piVar14 + 0xe8));
          param_1 = local_7c;
          in_stack_fffffeac = FUN_00577670(local_7c,&local_b0,fVar27,(float)piVar7);
          local_8 = 0x2c;
          (**(code **)(*local_58 + 0x4c))();
          pVVar18 = (Vec2 *)&local_b0;
        }
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(pVVar18);
        in_stack_fffffea8 = (void *)0x9;
        (**(code **)(*param_1 + 0x108))();
        FUN_00412900(param_1 + 0x126,&local_58);
        piVar7 = (int *)FUN_00412f00(piVar12,(int)local_60);
        FUN_00402490((undefined4 *)(*piVar7 + 4));
        FUN_00591e00(&stack0xfffffe8c,&DAT_006166fc);
        in_XMM0_Da = (Ref *)0x3f800000;
        local_64 = FUN_0055cb00((Node)0x0,in_stack_fffffe8c);
        in_stack_fffffea0 = (void *)cocos2d::Vec2::Vec2((Vec2 *)&local_c4,0.5,1.2);
        local_8 = 0x2f;
        (**(code **)(*(int *)local_64 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_c4);
        piVar14 = local_60;
        fVar27 = 8.049343e-39;
        piVar7 = local_60;
        piVar11 = (int *)FUN_00412f00(piVar12,(int)local_60);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffe98,(Vec2 *)(*piVar11 + 0xe8));
        FUN_00577670(param_1,&local_bc,fVar27,(float)piVar7);
        local_8 = 0x30;
        (**(code **)(*(int *)local_64 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_bc);
        FUN_00412900(param_1 + 0x120,&local_64);
        (**(code **)(*param_1 + 0x108))();
        piVar14 = (int *)((int)piVar14 + 1);
        local_60 = piVar14;
        piVar11 = (int *)FUN_00412f10(piVar12);
        piVar7 = local_88;
      } while (piVar14 < piVar11);
    }
    local_5c = piVar7 + 0x30;
    fVar27 = 0.0;
    iVar13 = FUN_00412f10(local_5c);
    piVar14 = local_5c;
    if (iVar13 != 0) {
      do {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorSpawnPoint.png");
        local_58 = (int *)FUN_00591910(in_stack_fffffebc);
        cocos2d::Color3B::Color3B((Color3B *)&local_80);
        piVar7 = (int *)FUN_00412f00(piVar14,(int)fVar27);
        if (*(int *)(*piVar7 + 0xc) == 0) {
          uVar31 = 0xbf;
          VVar30 = (Vec2)0xff;
          VVar29 = (Vec2)0x0;
          this_00 = (Color3B *)((int)&local_84 + 1);
        }
        else {
          piVar7 = (int *)FUN_00412f00(piVar14,(int)fVar27);
          if (*(int *)(*piVar7 + 0xc) == 1) {
            uVar31 = '\0';
            VVar30 = (Vec2)0xff;
            VVar29 = (Vec2)0x0;
            this_00 = (Color3B *)((int)&local_a0 + 1);
          }
          else {
            piVar7 = (int *)FUN_00412f00(piVar14,(int)fVar27);
            uVar31 = '\0';
            if (*(int *)(*piVar7 + 0xc) == 2) {
              VVar30 = (Vec2)0xff;
              puVar17 = &local_9c;
            }
            else {
              VVar30 = (Vec2)0x0;
              puVar17 = &local_6c;
            }
            this_00 = (Color3B *)((int)puVar17 + 1);
            VVar29 = (Vec2)0xff;
          }
        }
        puVar16 = (undefined2 *)
                  cocos2d::Color3B::Color3B(this_00,(uchar)VVar29,(uchar)VVar30,uVar31);
        local_80 = *puVar16;
        local_7e = *(undefined1 *)(puVar16 + 1);
        (**(code **)(*local_58 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        local_8 = 0x31;
        (**(code **)(*local_58 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        fVar28 = 8.049909e-39;
        fVar26 = fVar27;
        puVar17 = (undefined4 *)FUN_00412f00(piVar14,(int)fVar27);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)*puVar17);
        FUN_00577670(param_1,local_98,fVar28,fVar26);
        local_8 = 0x32;
        (**(code **)(*local_58 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_98);
        in_stack_fffffebc = (float *)0x57a82c;
        (**(code **)(*param_1 + 0x108))();
        in_stack_fffffecc = (Ref *)0x57a83b;
        FUN_00412900(param_1 + 0x126,&local_58);
        fVar27 = (float)((int)fVar27 + 1);
        fVar26 = (float)FUN_00412f10(piVar14);
        piVar7 = local_88;
      } while ((uint)fVar27 < (uint)fVar26);
    }
    local_60 = piVar7 + 0x2d;
    local_64 = (Ref *)0x0;
    pfVar6 = (float *)0x57a868;
    iVar13 = FUN_00412f10(local_60);
    pcVar24 = Color3B_exref;
    if (iVar13 != 0) {
      do {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xfffffebc,"NavMap_EditorJumpPoint.png");
        local_58 = (int *)FUN_00591910(in_stack_fffffebc);
        iVar13 = *local_58;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,'\0',0xff);
        (**(code **)(iVar13 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        local_8 = 0x33;
        (**(code **)(*local_58 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        fVar27 = 8.050308e-39;
        pRVar10 = local_64;
        puVar17 = (undefined4 *)FUN_00412f00(local_60,(int)local_64);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)*puVar17);
        FUN_00577670(param_1,local_98,fVar27,(float)pRVar10);
        local_8 = 0x34;
        (**(code **)(*local_58 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_98);
        (**(code **)(*param_1 + 0x108))();
        FUN_00412900(param_1 + 0x126,&local_58);
        FUN_00402490((undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28)
                              + 8) + 0x98));
        FUN_00591e00(&stack0xfffffea8,"%s_JumpRange.png");
        local_58 = (int *)FUN_00591910(in_stack_fffffea8);
        iVar13 = *local_58;
        in_stack_fffffebc =
             (float *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
        (**(code **)(iVar13 + 0x25c))();
        pRVar10 = local_64;
        fVar27 = 8.050582e-39;
        pRVar25 = local_64;
        puVar17 = (undefined4 *)FUN_00412f00(local_60,(int)local_64);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,(Vec2 *)*puVar17);
        FUN_00577670(param_1,local_a8,fVar27,(float)pRVar25);
        local_8 = 0x35;
        (**(code **)(*local_58 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_a8);
        if (*(char *)((int)param_1 + 0x45d) == '\0') {
          local_68 = (int *)param_1[0x13f];
        }
        else {
          local_68 = (int *)0x3e4ccccd;
        }
        iVar13 = *local_58;
        piVar7 = (int *)FUN_00412f00(local_60,(int)pRVar10);
        iVar20 = *(int *)(*piVar7 + 0xc);
        pfVar6 = (float *)(**(code **)(*local_58 + 0xb0))();
        in_XMM0_Da = (Ref *)(((float)(iVar20 * 2) / *pfVar6) * (float)local_68);
        (**(code **)(iVar13 + 0x40))();
        in_stack_fffffeb0 = (char *)0x60;
        (**(code **)(*local_58 + 0x244))();
        cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.5);
        local_8 = 0x36;
        (**(code **)(*local_58 + 0xa0))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
        param_1 = local_7c;
        in_stack_fffffea8 = (void *)0x9;
        in_stack_fffffea0 = (void *)0x57aabd;
        (**(code **)(*local_7c + 0x108))();
        in_stack_fffffecc = (Ref *)0x57aacc;
        FUN_00412900(param_1 + 0x126,&local_58);
        pRVar25 = local_64 + 1;
        pfVar6 = (float *)0x57aadb;
        local_64 = pRVar25;
        pRVar10 = (Ref *)FUN_00412f10(local_60);
      } while (pRVar25 < pRVar10);
    }
  }
  iVar13 = *(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x2b0);
  if (iVar13 != 0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)(iVar13 + 8));
    pfVar6 = FUN_00577670(param_1,local_90,(float)in_stack_fffffecc,(float)pfVar6);
    local_8 = 0x37;
    (**(code **)(*(int *)param_1[0x11e] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar13 = *(int *)param_1[0x11e];
    FUN_00574350((int)param_1);
    in_stack_fffffecc = in_XMM0_Da;
    (**(code **)(iVar13 + 0x40))();
    iVar13 = *(int *)param_1[0x11e];
    in_stack_fffffebc = (float *)(*pcVar24)();
    (**(code **)(iVar13 + 0x25c))();
    (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
  }
  pVVar18 = *(Vec2 **)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x2b8);
  if (pVVar18 != (Vec2 *)0x0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,pVVar18);
    pfVar6 = FUN_00577670(param_1,local_90,(float)in_stack_fffffecc,(float)pfVar6);
    local_8 = 0x38;
    (**(code **)(*(int *)param_1[0x11e] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar13 = *(int *)param_1[0x11e];
    FUN_00574350((int)param_1);
    in_stack_fffffecc = in_XMM0_Da;
    (**(code **)(iVar13 + 0x40))();
    iVar13 = *(int *)param_1[0x11e];
    in_stack_fffffebc = (float *)(*pcVar24)();
    (**(code **)(iVar13 + 0x25c))();
    (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
  }
  iVar13 = *(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 700);
  if (iVar13 != 0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)(iVar13 + 0xe8));
    pfVar6 = FUN_00577670(param_1,local_90,(float)in_stack_fffffecc,(float)pfVar6);
    local_8 = 0x39;
    (**(code **)(*(int *)param_1[0x11e] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar13 = *(int *)param_1[0x11e];
    FUN_00574350((int)param_1);
    in_stack_fffffecc = in_XMM0_Da;
    (**(code **)(iVar13 + 0x40))();
    iVar13 = *(int *)param_1[0x11e];
    in_stack_fffffebc = (float *)(*pcVar24)();
    (**(code **)(iVar13 + 0x25c))();
    (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
  }
  pVVar18 = *(Vec2 **)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x2b4);
  piVar7 = param_1;
  if (pVVar18 != (Vec2 *)0x0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,pVVar18);
    FUN_00577670(param_1,local_90,(float)in_stack_fffffecc,(float)pfVar6);
    local_8 = 0x3a;
    (**(code **)(*(int *)param_1[0x11e] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar13 = *(int *)param_1[0x11e];
    FUN_00574350((int)param_1);
    (**(code **)(iVar13 + 0x40))();
    iVar13 = *(int *)param_1[0x11e];
    in_stack_fffffebc = (float *)(*pcVar24)();
    (**(code **)(iVar13 + 0x25c))();
    fVar27 = 8.052005e-39;
    (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
    FUN_00402490((undefined4 *)
                 (*(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28) + 8)
                 + 0x98));
    FUN_00591e00(&stack0xfffffea0,"%s_RadiusMarker.png");
    iVar13 = FUN_00591910(in_stack_fffffea0);
    param_1[0x11d] = iVar13;
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb0,
                        *(Vec2 **)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x2b4));
    FUN_00577670(param_1,local_90,(float)in_stack_fffffeb0,fVar27);
    local_8 = 0x3b;
    (**(code **)(*(int *)param_1[0x11d] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    piVar7 = local_7c;
    iVar13 = *(int *)param_1[0x11d];
    iVar20 = *(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x2b4) + 0x10);
    FUN_00574350((int)local_7c);
    local_5c = (int *)((float)in_XMM0_Da * (float)iVar20);
    pfVar6 = (float *)(**(code **)(*(int *)piVar7[0x11d] + 0xb0))();
    in_XMM0_Da = (Ref *)((float)local_5c / *pfVar6);
    (**(code **)(iVar13 + 0x40))();
    cocos2d::Vec2::Vec2((Vec2 *)local_98,0.5,0.5);
    local_8 = 0x3c;
    (**(code **)(*(int *)piVar7[0x11d] + 0xa0))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_98);
    iVar13 = *(int *)piVar7[0x11d];
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xa4,0xf9,0x9e);
    (**(code **)(iVar13 + 0x25c))();
    (**(code **)(*(int *)piVar7[0x11d] + 0x244))();
    (**(code **)(*(int *)piVar7[0x11d] + 0xb4))();
    (**(code **)(*piVar7 + 0x108))();
  }
  pRVar10 = (Ref *)0x0;
  local_64 = (Ref *)0x0;
  iVar13 = FUN_00420f10((int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4));
  if (iVar13 != 0) {
    do {
      pVVar18 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)local_90,-9999.0,-9999.0);
      local_8 = 0x3d;
      iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)pRVar10);
      bVar2 = cocos2d::Vec2::operator==((Vec2 *)(iVar13 + 8),pVVar18);
      local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)local_90);
      if (bVar2) break;
      FUN_00402490((undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28) +
                            8) + 0x98));
      pvVar9 = (void *)0x57b003;
      FUN_00591e00(&stack0xfffffebc,"%s_Destination.png");
      local_6c = (int *)FUN_00591910(in_stack_fffffebc);
      fVar27 = 8.052887e-39;
      cocos2d::Vec2::Vec2((Vec2 *)local_98,0.5,0.5);
      local_8 = 0x3e;
      (**(code **)(*local_6c + 0xa0))();
      local_8 = 0xffffffff;
      fVar26 = 8.05294e-39;
      cocos2d::Vec2::~Vec2((Vec2 *)local_98);
      pRVar10 = local_64;
      iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)local_64);
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,(Vec2 *)(iVar13 + 8));
      FUN_00577670(piVar7,local_a8,fVar27,fVar26);
      local_8 = 0x3f;
      (**(code **)(*local_6c + 0x4c))();
      local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)local_a8);
      (**(code **)(*piVar7 + 0x108))();
      FUN_00412900(piVar7 + 0x129,&local_6c);
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xfffffeac,"white.png");
      local_6c = (int *)FUN_00591910(pvVar9);
      fVar27 = 8.053185e-39;
      cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.0);
      local_8 = 0x40;
      (**(code **)(*local_6c + 0xa0))();
      local_8 = 0xffffffff;
      fVar26 = 8.053238e-39;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
      if (pRVar10 == (Ref *)0x0) {
        FUN_00403c40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 8),(float *)&stack0xfffffeb8);
        in_stack_fffffebc = FUN_00577670(piVar7,local_d4,fVar27,fVar26);
        local_8 = 0x41;
        (**(code **)(*local_6c + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_d4);
        pVVar18 = (Vec2 *)FUN_00517720(*(void **)((int)DAT_0065b5cc + 0xd0),&local_c4);
        local_8 = 0x42;
        fVar26 = 8.053435e-39;
        pVVar19 = (Vec2 *)FUN_00403c40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 8),&local_cc);
        local_8 = CONCAT31(local_8._1_3_,0x43);
        FUN_00591010(pVVar19,pVVar18);
        local_68 = (int *)((float)in_XMM0_Da * (float)piVar7[0x13f]);
        cocos2d::Vec2::~Vec2((Vec2 *)&local_cc);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_c4);
        local_74 = &stack0xfffffeb4;
        iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),0);
        pVVar18 = (Vec2 *)(iVar13 + 8);
        fVar27 = 8.053575e-39;
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,pVVar18);
        local_8 = 0x44;
        FUN_00403c40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 8),(float *)&stack0xfffffeac);
        local_8 = 0xffffffff;
        FUN_00592f80(fVar27,pVVar18,fVar26);
        (**(code **)(*local_6c + 0xbc))();
        bVar2 = FUN_00518810(*(int *)((int)DAT_0065b5cc + 0xd0));
        iVar13 = *local_6c;
        if (bVar2) {
          puVar17 = &local_84;
          VVar30 = (Vec2)0x0;
        }
        else {
          VVar30 = (Vec2)0xff;
          puVar17 = &local_a0;
        }
        cocos2d::Color3B::Color3B((Color3B *)((int)puVar17 + 1),(uchar)VVar30,(uchar)VVar30,0xff);
        (**(code **)(iVar13 + 0x25c))();
      }
      else {
        pRVar25 = pRVar10 + -1;
        iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)pRVar25);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb8,(Vec2 *)(iVar13 + 8));
        piVar7 = local_7c;
        in_stack_fffffebc = FUN_00577670(local_7c,&local_bc,fVar27,fVar26);
        local_8 = 0x45;
        (**(code **)(*local_6c + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_bc);
        iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)local_64);
        iVar20 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)pRVar25);
        FUN_00591010((Vec2 *)(iVar20 + 8),(Vec2 *)(iVar13 + 8));
        local_68 = (int *)((float)in_XMM0_Da * (float)piVar7[0x13f]);
        fVar26 = 3.57331e-43;
        iVar13 = *local_6c;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_9c + 1),0xff,0xff,0xff);
        (**(code **)(iVar13 + 0x25c))();
        pRVar10 = local_64;
        local_74 = &stack0xfffffeb0;
        iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)local_64);
        pVVar18 = (Vec2 *)(iVar13 + 8);
        fVar27 = 8.054107e-39;
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb0,pVVar18);
        local_8 = 0x46;
        iVar13 = FUN_00420f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4),(int)pRVar25);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffea8,(Vec2 *)(iVar13 + 8));
        local_8 = 0xffffffff;
        FUN_00592f80(fVar27,pVVar18,fVar26);
        (**(code **)(*local_6c + 0xbc))();
        piVar7 = local_7c;
      }
      iVar13 = *local_6c;
      pfVar6 = (float *)(**(code **)(iVar13 + 0xb0))();
      in_XMM0_Da = (Ref *)((float)local_68 / *pfVar6);
      (**(code **)(iVar13 + 0x2c))();
      (**(code **)(*piVar7 + 0x108))();
      FUN_00412900(piVar7 + 0x129,&local_6c);
      pRVar10 = pRVar10 + 1;
      local_64 = pRVar10;
      pRVar25 = (Ref *)FUN_00420f10((int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1c4));
    } while (pRVar10 < pRVar25);
  }
  FUN_00574350((int)piVar7);
  piVar14 = local_88;
  local_64 = (Ref *)0x3f800000;
  if ((float)in_XMM0_Da <= 1.0) {
    local_64 = in_XMM0_Da;
  }
  if (*(char *)((int)piVar7 + 0x45d) == '\0') {
    uVar8 = 0;
    iVar13 = FUN_00412f10((int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x214));
    piVar14 = local_88;
    if (iVar13 != 0) {
      do {
        puVar17 = (undefined4 *)
                  FUN_00412f00((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x214),uVar8);
        pvVar9 = (void *)*puVar17;
        if ((*(char *)((int)pvVar9 + 9) != '\0') && (*(char *)((int)pvVar9 + 8) != '\0')) {
          FUN_00577e00(piVar7,pvVar9);
        }
        uVar8 = uVar8 + 1;
        uVar21 = FUN_00412f10((int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x214));
        piVar14 = local_88;
      } while (uVar8 < uVar21);
    }
  }
  else {
    uVar8 = 0;
    local_5c = local_88 + 0x33;
    iVar13 = FUN_00412f10(local_5c);
    piVar12 = local_5c;
    if (iVar13 != 0) {
      do {
        piVar14 = (int *)FUN_00412f00(piVar12,uVar8);
        uVar21 = FUN_00403c90(*piVar14);
        if ((char)uVar21 == '\0') {
          piVar14 = (int *)FUN_00412f00(piVar12,uVar8);
          uVar21 = FUN_004cb200(*piVar14);
          if ((char)uVar21 != '\0') goto LAB_0057b4b6;
        }
        else {
LAB_0057b4b6:
          piVar14 = (int *)FUN_00412f00(piVar12,uVar8);
          if (*(char *)(*piVar14 + 0x168) == '\0') {
            puVar17 = (undefined4 *)FUN_00412f00(piVar12,uVar8);
            FUN_005789b0((int *)*puVar17);
          }
        }
        uVar8 = uVar8 + 1;
        uVar21 = FUN_00412f10(piVar12);
        piVar14 = local_88;
      } while (uVar8 < uVar21);
    }
  }
  if (piVar14 == *(int **)((int)DAT_0065b5cc + 0xd8)) {
    FUN_005789b0(*(int **)((int)DAT_0065b5cc + 0xd0));
  }
  pVVar18 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)local_90,-9999.0,-9999.0);
  local_8 = 0x47;
  fVar27 = 8.054889e-39;
  bVar2 = cocos2d::Vec2::operator!=((Vec2 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b8),pVVar18);
  local_8 = 0xffffffff;
  fVar26 = 8.054919e-39;
  cocos2d::Vec2::~Vec2((Vec2 *)local_90);
  if (bVar2) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,
                        (Vec2 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b8));
    FUN_00577670(piVar7,local_98,fVar27,fVar26);
    local_8 = 0x48;
    (**(code **)(*(int *)piVar7[0x11e] + 0x4c))();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_98);
    (**(code **)(*(int *)piVar7[0x11e] + 0x40))();
    iVar13 = *(int *)piVar7[0x11e];
    in_stack_fffffebc = (float *)0x57b664;
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,0xff,0xff);
    (**(code **)(iVar13 + 0x25c))();
    (**(code **)(*(int *)piVar7[0x11e] + 0xb4))();
    piVar14 = local_88;
  }
  if (*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1a4) == 0) {
    pVVar18 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)local_98,-9999.0,-9999.0);
    local_8 = 0x49;
    local_70 = (int *)((uint)local_70 | 1);
    local_5c = local_70;
    bVar2 = cocos2d::Vec2::operator==((Vec2 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1b8),pVVar18);
    if (((((bVar2) && (iVar13 = *(int *)((int)DAT_0065b5cc + 0xd0), *(int *)(iVar13 + 0x19c) == 0))
         && (*(int *)(iVar13 + 0x2b0) == 0)) &&
        ((*(int *)(iVar13 + 0x2b4) == 0 && (*(int *)(iVar13 + 700) == 0)))) &&
       (*(int *)(iVar13 + 0x2b8) == 0)) {
      bVar2 = true;
      goto LAB_0057b72a;
    }
  }
  bVar2 = false;
LAB_0057b72a:
  local_8 = 0xffffffff;
  if (((uint)local_70 & 1) != 0) {
    cocos2d::Vec2::~Vec2((Vec2 *)local_98);
  }
  if (bVar2) {
    (**(code **)(*(int *)piVar7[0x11e] + 0xb4))();
  }
  local_70 = (int *)0x0;
  iVar13 = FUN_0047f890((int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324));
  piVar12 = local_88;
  if (iVar13 != 0) {
    piVar11 = (int *)0.0;
    do {
      fVar27 = 8.055553e-39;
      iVar13 = FUN_0057cef0((void *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324),(int)piVar11);
      if (*(int *)(iVar13 + 0x24) == **(int **)((int)DAT_0065b5cc + 0xd8)) {
        if (*(char *)(DAT_0065b444 + 0x72) != '\0') {
          local_74 = &stack0xfffffecc;
          pVVar18 = (Vec2 *)FUN_0057cef0((void *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324),
                                         (int)local_70);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,pVVar18);
          local_8 = 0x4a;
          piVar14 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),piVar12);
          local_8 = 0xffffffff;
          uVar8 = FUN_0051eeb0((void *)*piVar14,fVar27,(float)piVar11);
          if ((char)uVar8 != '\0') goto LAB_0057b91e;
        }
        iVar13 = FUN_0057cef0((void *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324),(int)local_70);
        FUN_00402490((undefined4 *)(iVar13 + 8));
        FUN_00591e00(&stack0xfffffebc,&DAT_006166fc);
        local_64 = FUN_0055cb00((Node)0x0,in_stack_fffffebc);
        fVar27 = 8.055869e-39;
        cocos2d::Vec2::Vec2((Vec2 *)local_a8,0.5,0.5);
        local_8 = 0x4b;
        (**(code **)((int)*(float *)local_64 + 0xa0))();
        local_8 = 0xffffffff;
        fVar26 = 8.055922e-39;
        cocos2d::Vec2::~Vec2((Vec2 *)local_a8);
        pVVar18 = (Vec2 *)FUN_0057cef0((void *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324),
                                       (int)local_70);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,pVVar18);
        FUN_00577670(piVar7,&local_b0,fVar27,fVar26);
        local_8 = 0x4c;
        (**(code **)((int)*(float *)local_64 + 0x4c))();
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
        FUN_00412900(piVar7 + 0x120,&local_64);
        (**(code **)(*piVar7 + 0x108))();
      }
LAB_0057b91e:
      local_70 = (int *)((int)local_70 + 1);
      fVar27 = (float)FUN_0047f890((int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x324));
      piVar11 = local_70;
      piVar14 = local_88;
    } while (local_70 < (uint)fVar27);
  }
  if (*(char *)(DAT_0065b444 + 0x72) != '\0') {
    FUN_00577530(local_90);
    local_8 = 0x4d;
    local_70 = (int *)FUN_0051ec10();
    local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    FUN_00577530(local_98);
    local_8 = 0x4e;
    piVar11 = (int *)FUN_0051ec10();
    local_8 = 0xffffffff;
    local_68 = piVar11;
    cocos2d::Vec2::~Vec2((Vec2 *)local_98);
    local_58 = (int *)0x0;
    local_5c = (int *)((int)local_70 - 2);
    piVar12 = local_70;
    do {
      local_64 = (Ref *)0x0;
      piVar23 = local_58;
      do {
        if ((((int)local_5c <= (int)local_64) &&
            (iVar13 = (int)piVar12 + 2, piVar12 = local_70, (int)local_64 <= iVar13)) &&
           (((int)piVar11 + -2 <= (int)piVar23 && ((int)piVar23 <= (int)piVar11 + 2)))) {
          fVar27 = 0.0;
          piVar12 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),piVar14);
          local_7c = (int *)((int)(local_64 + (int)local_58 * 8) * 0xc);
          iVar13 = FUN_00412f10((int *)(*piVar12 + (int)local_7c));
          piVar12 = local_70;
          piVar23 = local_58;
          piVar11 = local_68;
          if (iVar13 != 0) {
            do {
              local_60 = (int *)0x0;
              iVar13 = *(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28)
                               + 8);
              if (*(int *)(iVar13 + 0xb0) == 2) {
                piVar14 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),piVar14)
                ;
                FUN_00412f00((void *)(*piVar14 + (int)local_7c),(int)fVar27);
                FUN_00402490((undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40)
                                               + 0x28) + 8) + 0x98));
                FUN_00591e00(&stack0xfffffebc,"%s_FogInstance_%d.png");
                local_60 = (int *)FUN_00591910(in_stack_fffffebc);
                iVar13 = *local_60;
                piVar14 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),local_88
                                      );
                FUN_00412f00((void *)(*piVar14 + (int)local_7c),(int)fVar27);
                (**(code **)(iVar13 + 0xbc))();
                iVar13 = *local_60;
                piVar14 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),local_88
                                      );
                FUN_00412f00((void *)(*piVar14 + (int)local_7c),(int)fVar27);
                (**(code **)(iVar13 + 0x244))();
              }
              else {
                FUN_00402490((undefined4 *)(iVar13 + 0x98));
                FUN_00591e00(&stack0xfffffebc,"%s_FogInstance_0.png");
                local_60 = (int *)FUN_00591910(in_stack_fffffebc);
              }
              piVar14 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),local_88);
              fVar28 = 8.056977e-39;
              fVar26 = fVar27;
              puVar17 = (undefined4 *)FUN_00412f00((void *)(*piVar14 + (int)local_7c),(int)fVar27);
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)*puVar17);
              FUN_00577670(piVar7,local_90,fVar28,fVar26);
              local_8 = 0x4f;
              (**(code **)(*local_60 + 0x4c))();
              local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)local_90);
              cocos2d::Vec2::Vec2((Vec2 *)&local_dc,0.5,0.5);
              local_8 = 0x50;
              (**(code **)(*local_60 + 0xa0))();
              local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)&local_dc);
              iVar13 = *local_60;
              FUN_00574380((int)piVar7);
              (**(code **)(iVar13 + 0x40))();
              in_stack_fffffebc = (float *)0x57bc3c;
              (**(code **)(*piVar7 + 0x108))();
              FUN_00412900(piVar7 + 0x123,&local_60);
              piVar14 = local_88;
              fVar27 = (float)((int)fVar27 + 1);
              piVar12 = FUN_00420f40((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x348),local_88);
              fVar26 = (float)FUN_00412f10((int *)(*piVar12 + (int)local_7c));
              piVar12 = local_70;
              piVar23 = local_58;
              piVar11 = local_68;
            } while ((uint)fVar27 < (uint)fVar26);
          }
        }
        local_64 = local_64 + 1;
      } while ((int)local_64 < 8);
      local_58 = (int *)((int)piVar23 + 1);
    } while ((int)local_58 < 8);
  }
  *(undefined1 *)piVar7[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0057bcd0(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  Ref *pRVar7;
  float *pfVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  int *this;
  int iVar12;
  uint uVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  void *in_stack_ffffff34;
  undefined *puVar19;
  void *in_stack_ffffff4c;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  int *local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c97ef;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0.0;
  local_50 = param_1;
  if (*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2 != 0) {
    do {
      fVar15 = local_48;
      puVar4 = (undefined4 *)FUN_005adb0f(0x10);
      iVar12 = DAT_0065b5cc;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      piVar6 = *(int **)(*(int *)(iVar12 + 0x3c) + (int)fVar15 * 4);
      local_54 = puVar4;
      local_4c = piVar6;
      local_44 = puVar4;
      FUN_00591e00(&stack0xffffff4c,"%s.png");
      uVar5 = FUN_00591910(in_stack_ffffff4c);
      puVar4[1] = uVar5;
      (**(code **)(*param_1 + 0x108))();
      (**(code **)(*(int *)puVar4[1] + 0x40))();
      local_6c = 0x3f000000;
      local_68 = 0x3f000000;
      local_8 = 0;
      (**(code **)(*(int *)puVar4[1] + 0xa0))();
      if (*(char *)((int)param_1 + 0x45d) == '\0') {
        fVar15 = *(float *)(&UNK_005e0c54 + DAT_00655098 * 4);
        fVar16 = *(float *)(&UNK_005e0c54 + DAT_00655098 * 4);
      }
      else {
        fVar15 = *(float *)(&UNK_005e0c98 + DAT_00655094 * 4);
        fVar16 = *(float *)(&UNK_005e0c98 + DAT_00655094 * 4);
      }
      if (*(char *)((int)param_1 + 0x45d) == '\0') {
        fVar17 = (float)param_1[0x13f];
      }
      else {
        fVar17 = 0.2;
      }
      local_74 = (float)(int)((float)(param_1[0xa8] / 2) + (float)piVar6[0x1f] * fVar16 * fVar17);
      local_70 = (float)(int)((float)(param_1[0xa9] / 2) + fVar17 * (float)piVar6[0x20] * fVar15);
      local_8 = 1;
      (**(code **)(*(int *)puVar4[1] + 0x4c))();
      iVar12 = piVar6[0x33];
      local_64 = 0;
      if (piVar6[0x34] - iVar12 >> 2 != 0) {
        do {
          piVar9 = local_50;
          iVar12 = *(int *)(iVar12 + local_64 * 4);
          if ((*(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 2) &&
             (iVar12 = *(int *)(iVar12 + 0x38c), iVar12 != -1)) {
            for (puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
                puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar4 = puVar4 + 1) {
              piVar6 = (int *)*puVar4;
              if (*piVar6 == iVar12) goto LAB_0057bf13;
            }
            piVar6 = (int *)0x0;
LAB_0057bf13:
            fVar15 = (float)piVar6[0x20];
            fVar16 = (float)piVar6[0x1f];
            fVar17 = (float)local_4c[0x20];
            fVar18 = (float)local_4c[0x1f];
            this = local_50 + 0x110;
            local_8 = 3;
            uVar13 = 0;
            pfVar8 = (float *)*this;
            iVar12 = local_50[0x111] - (int)pfVar8 >> 0x1f;
            iVar11 = (local_50[0x111] - (int)pfVar8) / 0x14 + iVar12;
            if (iVar11 != iVar12) {
              do {
                if ((*pfVar8 == fVar18) && (pfVar8[1] == fVar17)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                piVar6 = local_4c;
                if (bVar2) {
                  if ((pfVar8[2] == fVar16) && (pfVar8[3] == fVar15)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) goto LAB_0057c0c6;
                }
                if ((pfVar8[2] == fVar18) && (pfVar8[3] == fVar17)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  if ((*pfVar8 == fVar16) && (pfVar8[1] == fVar15)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) goto LAB_0057c0c6;
                }
                uVar13 = uVar13 + 1;
                pfVar8 = pfVar8 + 5;
              } while (uVar13 < (uint)(iVar11 - iVar12));
            }
            _eh_vector_constructor_iterator_(&local_40,8,2,Vec2_exref,~Vec2_exref);
            local_30 = 0;
            local_8 = CONCAT31(local_8._1_3_,4);
            pvVar10 = (void *)piVar9[0x111];
            local_40 = fVar18;
            local_3c = fVar17;
            local_38 = fVar16;
            local_34 = fVar15;
            if ((void *)piVar9[0x112] == pvVar10) {
              FUN_0057d120(this,pvVar10,&local_40);
            }
            else {
              in_stack_ffffff34 = (void *)0x57c090;
              _eh_vector_copy_constructor_iterator_(pvVar10,&local_40,8,2,Vec2_exref,~Vec2_exref);
              *(undefined4 *)((int)pvVar10 + 0x10) = local_30;
              piVar9[0x111] = piVar9[0x111] + 0x14;
            }
            local_8 = CONCAT31(local_8._1_3_,5);
            _eh_vector_destructor_iterator_(&local_40,8,2,~Vec2_exref);
            piVar6 = local_4c;
          }
LAB_0057c0c6:
          iVar12 = piVar6[0x33];
          local_64 = local_64 + 1;
          puVar4 = local_44;
          param_1 = local_50;
        } while (local_64 < (uint)(piVar6[0x34] - iVar12 >> 2));
      }
      local_8 = 0xffffffff;
      fVar14 = (float10)(**(code **)(*(int *)puVar4[1] + 0x6c))();
      local_44 = (undefined4 *)(float)fVar14;
      if ((float)param_1[0xa8] < (float)local_44) {
LAB_0057c160:
        in_stack_ffffff4c = (void *)0x0;
      }
      else {
        fVar14 = (float10)(**(code **)(*(int *)puVar4[1] + 0x6c))();
        local_44 = (undefined4 *)(float)fVar14;
        if ((float)local_44 < 0.0) goto LAB_0057c160;
        fVar14 = (float10)(**(code **)(*(int *)puVar4[1] + 0x74))();
        local_44 = (undefined4 *)(float)fVar14;
        if ((float)local_44 < 0.0) goto LAB_0057c160;
        fVar14 = (float10)(**(code **)(*(int *)puVar4[1] + 0x74))();
        local_44 = (undefined4 *)(float)fVar14;
        if ((float)param_1[0xa9] < (float)local_44) goto LAB_0057c160;
        in_stack_ffffff4c = (void *)0x1;
      }
      (**(code **)(*(int *)puVar4[1] + 0xb4))();
      if (piVar6 == *(int **)(DAT_0065b5cc + 0xd8)) {
        iVar12 = *(int *)param_1[0x11e];
        (**(code **)(*(int *)puVar4[1] + 0x5c))();
        (**(code **)(iVar12 + 0x4c))();
        iVar12 = *(int *)param_1[0x11e];
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_58 + 1),0xa4,0xf9,0x9e);
        (**(code **)(iVar12 + 0x25c))();
        (**(code **)(*(int *)param_1[0x11e] + 0xb4))();
        piVar6 = local_4c;
      }
      puVar1 = (undefined4 *)param_1[0x10e];
      if ((undefined4 *)param_1[0x10f] == puVar1) {
        FUN_00414080(param_1 + 0x10d,puVar1,&local_54);
        puVar4 = local_54;
      }
      else {
        *puVar1 = puVar4;
        param_1[0x10e] = param_1[0x10e] + 4;
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 6;
      iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d0);
      if ((iVar12 == -1) || (iVar12 != *piVar6)) {
        if (piVar6[0x46] == 0) {
          puVar19 = &DAT_005e6758;
        }
        else if (piVar6[0x46] == 1) {
          puVar19 = &DAT_00618b34;
        }
        else {
          puVar19 = &DAT_005e7dbc;
        }
      }
      else {
        puVar19 = &DAT_005e7e24;
      }
      FUN_00402690(local_2c,puVar19,2);
      piVar9 = piVar6 + 7;
      if (0xf < (uint)piVar6[0xc]) {
        piVar9 = (int *)piVar6[7];
      }
      FUN_00403640(local_2c,piVar9,piVar6[0xb]);
      FUN_004024e0(&stack0xffffff34,local_2c);
      pRVar7 = FUN_0055cb00((Node)0x0,in_stack_ffffff34);
      *puVar4 = pRVar7;
      local_8._0_1_ = 7;
      (**(code **)(*(int *)pRVar7 + 0xa0))();
      local_8._0_1_ = 6;
      piVar6 = (int *)puVar4[1];
      iVar12 = *(int *)*puVar4;
      (**(code **)(*piVar6 + 0x74))();
      (**(code **)(*piVar6 + 0x6c))();
      (**(code **)(iVar12 + 0x48))();
      param_1 = local_50;
      in_stack_ffffff34 = (void *)0x57c2fd;
      (**(code **)(*local_50 + 0x108))();
      iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d0);
      if ((iVar12 != -1) && (iVar12 == *local_4c)) {
        FUN_00591e00(&stack0xffffff4c,"%s_ClusterDestination.png");
        piVar6 = (int *)FUN_00591910(in_stack_ffffff4c);
        puVar4[3] = piVar6;
        local_60 = 0.5;
        local_5c = 0.5;
        local_8._0_1_ = 8;
        (**(code **)(*piVar6 + 0xa0))();
        local_8 = CONCAT31(local_8._1_3_,6);
        (**(code **)(*(int *)puVar4[3] + 0x25c))();
        iVar12 = *(int *)puVar4[3];
        (**(code **)(*(int *)puVar4[1] + 0x5c))();
        (**(code **)(iVar12 + 0x4c))();
        in_stack_ffffff4c = (void *)0x57c3b0;
        (**(code **)(*param_1 + 0x108))();
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
      local_1c = 0;
      local_48 = (float)((int)local_48 + 1);
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    } while ((uint)local_48 <
             (uint)(*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2));
  }
  piVar6 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x14);
  if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 0x10))(), cVar3 != '\0')) {
    FUN_00591e00(&stack0xffffff4c,"%s_JumpRange.png");
    piVar6 = (int *)FUN_00591910(in_stack_ffffff4c);
    iVar12 = DAT_0065b5cc;
    param_1[0x11d] = (int)piVar6;
    iVar12 = *(int *)(*(int *)(iVar12 + 0xd0) + 0x24);
    if (*(char *)((int)param_1 + 0x45d) == '\0') {
      fVar15 = (float)param_1[0x13f];
    }
    else {
      fVar15 = 0.2;
    }
    local_60 = (float)(int)((float)(param_1[0xa8] / 2) + fVar15 * (float)*(int *)(iVar12 + 0x7c));
    local_5c = (float)(int)((float)(param_1[0xa9] / 2) + fVar15 * (float)*(int *)(iVar12 + 0x80));
    local_8 = 9;
    (**(code **)(*piVar6 + 0x4c))();
    local_8 = 0xffffffff;
    iVar12 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x14);
    iVar11 = FUN_00437c60(*(int **)(*(int *)(*(int *)(iVar12 + 4) + 0x14) + 0xc));
    local_44 = (undefined4 *)(*(float *)(*(int *)(iVar12 + 8) + 0x104) * ((float)iVar11 / 100.0));
    if (*(char *)((int)param_1 + 0x45d) == '\0') {
      local_48 = (float)param_1[0x13f];
    }
    else {
      local_48 = 0.2;
    }
    iVar12 = *(int *)param_1[0x11d];
    (**(code **)(iVar12 + 0xb0))();
    (**(code **)(iVar12 + 0x40))();
    iVar12 = *(int *)param_1[0x11d];
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_58 + 1),0xff,'\0',0xff);
    (**(code **)(iVar12 + 0x25c))();
    (**(code **)(*(int *)param_1[0x11d] + 0x244))();
    local_60 = 0.5;
    local_5c = 0.5;
    local_8 = 10;
    (**(code **)(*(int *)param_1[0x11d] + 0xa0))();
    local_8 = 0xffffffff;
    in_stack_ffffff4c = (void *)0x0;
    (**(code **)(*param_1 + 0x108))();
  }
  local_54 = (undefined4 *)0x0;
  iVar12 = param_1[0x111] - param_1[0x110] >> 0x1f;
  if ((param_1[0x111] - param_1[0x110]) / 0x14 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      pvVar10 = (void *)((uint)in_stack_ffffff4c & 0xffffff00);
      FUN_00402690(&stack0xffffff4c,"white.png",9);
      uVar5 = FUN_00591910(pvVar10);
      local_60 = 0.5;
      local_5c = 0.0;
      *(undefined4 *)(iVar12 + 0x10 + param_1[0x110]) = uVar5;
      local_8 = 0xb;
      (**(code **)(**(int **)(iVar12 + 0x10 + param_1[0x110]) + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*param_1 + 0x108))();
      local_8 = 0xc;
      (**(code **)(**(int **)(iVar12 + 0x10 + param_1[0x110]) + 0x4c))();
      if (*(char *)((int)param_1 + 0x45d) == '\0') {
        local_48 = (float)param_1[0x13f];
      }
      else {
        local_48 = 0.2;
      }
      iVar11 = param_1[0x110];
      local_70 = *(float *)(iVar12 + 0xc + iVar11);
      local_74 = *(float *)(iVar12 + 8 + iVar11);
      local_68 = *(undefined4 *)(iVar12 + 4 + iVar11);
      local_6c = *(undefined4 *)(iVar12 + iVar11);
      local_8 = 0xe;
      fVar15 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_6c,(Vec2 *)&local_74);
      local_58 = (float)(0x5f3759df - ((uint)fVar15 >> 1));
      local_8 = 0xffffffff;
      iVar11 = **(int **)(iVar12 + 0x10 + param_1[0x110]);
      local_44 = (undefined4 *)
                 ((1.5 - fVar15 * 0.5 * local_58 * local_58) * local_58 * fVar15 * local_48);
      pfVar8 = (float *)(**(code **)(iVar11 + 0xb0))();
      in_stack_ffffff4c = (void *)((float)local_44 / *pfVar8);
      (**(code **)(iVar11 + 0x2c))();
      iVar11 = local_50[0x110];
      piVar6 = *(int **)(iVar12 + 0x10 + iVar11);
      FUN_00592f80(*(float *)(iVar12 + iVar11),*(undefined4 *)(iVar12 + 4 + iVar11),
                   *(float *)(iVar12 + 8 + iVar11));
      (**(code **)(*piVar6 + 0xbc))();
      iVar11 = **(int **)(iVar12 + 0x10 + local_50[0x110]);
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_4c + 1),'V',0xdc,0xdc);
      (**(code **)(iVar11 + 0x25c))();
      iVar12 = iVar12 + 0x14;
      local_54 = (undefined4 *)((int)local_54 + 1);
      param_1 = local_50;
    } while (local_54 < (undefined4 *)((local_50[0x111] - local_50[0x110]) / 0x14));
  }
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
