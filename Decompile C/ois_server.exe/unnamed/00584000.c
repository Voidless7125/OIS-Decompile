#include "../ois_server.exe.h"


void __fastcall FUN_00584150(int param_1)

{
  *(undefined2 *)(param_1 + 0x468) = 0;
  return;
}


int __thiscall FUN_00584160(void *this,float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint3 uVar3;
  bool bVar4;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  uVar2 = FUN_004dd820(*(undefined4 *)((int)this + 0x3f4));
  bVar1 = FUN_004dd980(*(undefined4 *)((int)this + 0x3f4));
  bVar4 = false;
  if (((((char)uVar2 != '\0') && ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
      (param_1 < (float)*(int *)((int)this + 0x2a0))) && (param_2 < 12.0)) {
    bVar4 = 0.0 <= param_2;
  }
  if (((bVar1) && ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
     ((param_1 < (float)*(int *)((int)this + 0x2a0) &&
      (param_2 < (float)*(int *)((int)this + 0x2a4))))) {
    local_18 = (uint)((float)(*(int *)((int)this + 0x2a4) + -0xc) <= param_2);
  }
  uVar3 = (uint3)(local_18 >> 8);
  if ((bVar4 == (bool)*(char *)((int)this + 0x468)) &&
     ((char)local_18 == *(char *)((int)this + 0x469))) {
    ExceptionList = local_10;
    return (uint)uVar3 << 8;
  }
  *(char *)((int)this + 0x469) = (char)local_18;
  *(bool *)((int)this + 0x468) = bVar4;
  ExceptionList = local_10;
  return CONCAT31(uVar3,1);
}


Node * __thiscall FUN_005842b0(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_SensorDisplay::vftable;
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  if (*(int **)((int)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x444) + 0x138))(1);
    *(undefined4 *)((int)this + 0x444) = 0;
  }
  if (*(int **)((int)this + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x460) + 0x138))(1);
    *(undefined4 *)((int)this + 0x460) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x45c)) {
    pvVar1 = *(void **)((int)this + 0x448);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x45c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_00584423;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0xf;
  *(undefined1 *)((int)this + 0x448) = 0;
  if (0xf < *(uint *)((int)this + 0x43c)) {
    pvVar1 = *(void **)((int)this + 0x428);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x43c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_00584423:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0xf;
  *(undefined1 *)((int)this + 0x428) = 0;
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00584430(int param_1)

{
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  if (*(int **)(param_1 + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x460) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  return;
}


void __fastcall FUN_00584490(int *param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  Ref *pRVar4;
  void *pvVar5;
  void *in_stack_ffffff90;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca06a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Border.png");
  local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x111] = (int)pSVar3;
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
  local_34 = 0;
  local_30 = 0;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x111] + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = *(int *)param_1[0x111];
  cocos2d::Size::Size((Size *)&local_34,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  iVar1 = *param_1;
  (**(code **)(*(int *)param_1[0x111] + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  FUN_004024e0(&stack0xffffff90,param_1 + 0x112);
  pRVar4 = FUN_0055ca10(param_1[0xa8] + -4,param_1[0xa9] + -4,(Node)0x0,in_stack_ffffff90);
  param_1[0x118] = (int)pRVar4;
  local_8 = 2;
  (**(code **)(*(int *)pRVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x118] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00584690(int *param_1)

{
  uint uVar1;
  uint uVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af588;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (DAT_0065b3d4 != 0) {
    FUN_00584790((uint *)local_2c);
    ppppbVar5 = (byte ****)local_2c[0];
    ppppbVar6 = (byte ****)(param_1 + 0x112);
    local_8 = 0;
    ppppbVar3 = ppppbVar6;
    if (0xf < (uint)param_1[0x117]) {
      ppppbVar3 = (byte ****)*ppppbVar6;
    }
    ppppbVar4 = local_2c;
    if (0xf < local_18) {
      ppppbVar4 = (byte ****)local_2c[0];
    }
    uVar2 = FUN_004031f0((byte *)ppppbVar4,local_1c,(byte *)ppppbVar3,param_1[0x116]);
    if ((char)uVar2 == '\0') {
      if (ppppbVar6 != local_2c) {
        ppppbVar3 = local_2c;
        if (0xf < local_18) {
          ppppbVar3 = ppppbVar5;
        }
        FUN_00402690(ppppbVar6,ppppbVar3,local_1c);
        ppppbVar5 = (byte ****)local_2c[0];
      }
      (**(code **)(*param_1 + 0x294))(uVar1);
    }
    if (0xf < local_18) {
      ppppbVar6 = ppppbVar5;
      if (0xfff < local_18 + 1) {
        ppppbVar6 = (byte ****)ppppbVar5[-1];
        if ((byte *)0x1f < (byte *)((int)ppppbVar5 + (-4 - (int)ppppbVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppppbVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Type propagation algorithm not settling

void FUN_00584790(uint *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  uint *puVar12;
  double dVar13;
  undefined1 auVar14 [16];
  char *pcVar15;
  undefined **ppuVar16;
  float local_ec;
  float local_e8;
  float local_e4;
  uint *local_e0;
  char local_d9;
  byte *local_d8;
  int local_d4 [6];
  int local_bc [6];
  int local_a4 [4];
  undefined4 local_94;
  undefined4 local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca2c1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0 = param_1;
  pbVar9 = *(byte **)(DAT_0065b5cc + 0xd0);
  local_d8 = pbVar9;
  if (pbVar9 == (byte *)0x0) {
    ppuVar16 = &PTR_005ce008;
    uVar7 = 0;
  }
  else {
    if (((int *)**(int **)(pbVar9 + 0x40) != (int *)0x0) &&
       (cVar3 = (**(code **)(*(int *)**(int **)(pbVar9 + 0x40) + 0x10))(), cVar3 != '\0')) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      local_8 = 0;
      if (*(int *)(*(int *)(**(int **)(pbVar9 + 0x40) + 8) + 0xb0) == 1) {
        uVar7 = 0x19;
        pcVar15 = "`%Ventarii Sensors v1.01\n";
      }
      else {
        uVar7 = 0x1a;
        pcVar15 = "`%Ventarii Sensors v`!2.1\n";
      }
      FUN_00402690(&local_2c,pcVar15,uVar7);
      iVar4 = *(int *)(pbVar9 + 0x1ac);
      if ((iVar4 == 0) && (*(int *)(pbVar9 + 0x194) == 0)) {
        FUN_00403640(&local_2c,"`2Nothing selected.",0x13);
        goto LAB_00585d31;
      }
      pvVar10 = *(void **)(pbVar9 + 0x194);
      if (pvVar10 == (void *)0x0) {
        iVar1 = *(int *)(iVar4 + 0x54);
        if (iVar1 == 0) {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Pla.: `7%s\n");
          local_8._0_1_ = 0x24;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Cat.: `7%s\n");
          local_8._0_1_ = 0x25;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          FUN_00591e00((undefined1 *)local_5c,&DAT_0062e0bc);
          local_8._0_1_ = 0x26;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dia.: `9%skm\n");
          local_8._0_1_ = 0x27;
          FUN_00403490(&local_2c,puVar5);
          FUN_00401b20((int *)local_44);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_5c);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Pop.: `0%0.1fk\n");
          local_8._0_1_ = 0x28;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Type: `#%s\n");
          local_8._0_1_ = 0x29;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          pbVar9 = local_d8;
          FUN_0050b2e0();
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Brg.: `%%%d^\n");
          local_8._0_1_ = 0x2a;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(iVar4 + 0x20),
                              (float)*(double *)(iVar4 + 0x28));
          local_8._0_1_ = 0x2b;
          cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pbVar9 + 0x28),
                              (float)*(double *)(pbVar9 + 0x30));
          local_8._0_1_ = 0x2c;
          cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dist: `$%.2fGm\n");
          local_8 = CONCAT31(local_8._1_3_,0x2d);
LAB_00585d08:
          FUN_00403490(&local_2c,puVar5);
          FUN_00401b20((int *)local_44);
          cocos2d::Vec2::~Vec2((Vec2 *)&local_ec);
          cocos2d::Vec2::~Vec2((Vec2 *)&local_e4);
        }
        else if (iVar1 == 1) {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`$Star `%%%s\n");
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          FUN_00403490(&local_2c,puVar5);
          FUN_00401b20((int *)local_44);
        }
        else if (iVar1 == 2) {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Moon: `7%s\n");
          local_8._0_1_ = 0x2f;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Orbt: `7%s\n");
          local_8._0_1_ = 0x30;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          FUN_00591e00((undefined1 *)local_5c,&DAT_0062e0bc);
          local_8._0_1_ = 0x31;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dia.: `9%skm\n");
          local_8._0_1_ = 0x32;
          FUN_00403490(&local_2c,puVar5);
          FUN_00401b20((int *)local_44);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_5c);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_a4,"`2Pop.: `0%0.1fk\n");
          local_8._0_1_ = 0x33;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20(local_a4);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_bc,"`2Type: `#%s\n");
          local_8._0_1_ = 0x34;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20(local_bc);
          pbVar9 = local_d8;
          FUN_0050b2e0();
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Brg.: `%%%d^\n");
          local_8._0_1_ = 0x35;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0;
          FUN_00401b20((int *)local_44);
          cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(iVar4 + 0x20),
                              (float)*(double *)(iVar4 + 0x28));
          local_8._0_1_ = 0x36;
          cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pbVar9 + 0x28),
                              (float)*(double *)(pbVar9 + 0x30));
          local_8._0_1_ = 0x37;
          cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dist: `$%.2fGm\n");
          local_8 = CONCAT31(local_8._1_3_,0x38);
          goto LAB_00585d08;
        }
      }
      else {
        iVar4 = FUN_00509920((int)pvVar10);
        if ((char)iVar4 == '\0') {
          local_d9 = '\0';
          if ((*(int *)((int)pvVar10 + 0x130) != 0) &&
             ((iVar4 = *(int *)(*(int *)(*(int *)((int)pvVar10 + 0x130) + 0x254) + 0x158),
              iVar4 == 0 || (iVar4 == 4)))) {
            local_d9 = '\x01';
          }
          FUN_004024e0(local_5c,(undefined4 *)((int)pvVar10 + 0x48));
          local_8._0_1_ = 0xe;
          FUN_004024e0(local_bc,(undefined4 *)((int)pvVar10 + 0x60));
          local_8._0_1_ = 0xf;
          FUN_004024e0(local_d4,(undefined4 *)((int)pvVar10 + 0x90));
          local_94 = 0;
          local_90 = 0xf;
          local_a4[0]._0_1_ = 0;
          local_8._0_1_ = 0x11;
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
          FUN_00402690(local_8c,"Unknown",7);
          local_8._0_1_ = 0x12;
          if ((*(int *)((int)pvVar10 + 0x130) == 0) || (*(float *)((int)pvVar10 + 0x38) == -1.0)) {
            if (*(float *)((int)pvVar10 + 0x38) == -1.0) {
              FUN_00402690(local_8c,"Unknown",7);
            }
          }
          else {
            piVar6 = (int *)FUN_00591e00((undefined1 *)local_74,"%.0f^");
            FUN_00413230(local_8c,piVar6);
            if (0xf < local_60) {
              pvVar8 = local_74[0];
              if ((0xfff < local_60 + 1) &&
                 (pvVar8 = *(void **)((int)local_74[0] + -4),
                 0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar8);
            }
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Name: `7%s\n");
          local_8._0_1_ = 0x13;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x12;
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Clss: `7%s\n");
          local_8._0_1_ = 0x14;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x12;
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          iVar4 = *(int *)((int)pvVar10 + 0xd8);
          if (((iVar4 == 1) || (iVar4 == 3)) || (iVar4 == 2)) {
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Aff.: `7%s\n");
            local_8._0_1_ = 0x15;
            FUN_00403490(&local_2c,puVar5);
            local_8._0_1_ = 0x12;
            if (0xf < local_60) {
              pvVar8 = local_74[0];
              if ((0xfff < local_60 + 1) &&
                 (pvVar8 = *(void **)((int)local_74[0] + -4),
                 0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar8);
            }
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Reg.: `9%s\n");
          local_8._0_1_ = 0x16;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x12;
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          FUN_00508e80(pvVar10,(undefined1 *)local_44);
          local_8._0_1_ = 0x17;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2Sol.: %s\n");
          local_8._0_1_ = 0x18;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x17;
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          local_8._0_1_ = 0x12;
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
          if (0xf < local_30) {
            pvVar8 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar8 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          pbVar9 = local_d8;
          auVar14 = ZEXT416((uint)(float)((double)*(float *)((int)pvVar10 + 0x108) +
                                         *(double *)((int)pvVar10 + 0x18)));
          FUN_0050b390(local_d8,(float)((double)*(float *)((int)pvVar10 + 0x104) +
                                       *(double *)((int)pvVar10 + 0x10)));
          dVar13 = auVar14._0_8_ - (double)*(float *)(pbVar9 + 0x120);
          if (dVar13 < 0.0) {
            dVar13 = dVar13 + 360.0;
          }
          local_d8 = (byte *)0x0;
          if ((byte *)(int)dVar13 != (byte *)0x167) {
            local_d8 = (byte *)(int)dVar13;
          }
          local_ec = (float)((double)*(float *)((int)pvVar10 + 0x104) +
                            *(double *)((int)pvVar10 + 0x10));
          local_e8 = (float)((double)*(float *)((int)pvVar10 + 0x108) +
                            *(double *)((int)pvVar10 + 0x18));
          local_e4 = (float)*(double *)(pbVar9 + 0x28);
          puVar12 = (uint *)(float)*(double *)(pbVar9 + 0x30);
          local_8._0_1_ = 0x1a;
          local_e0 = puVar12;
          cocos2d::Vec2::getDistance((Vec2 *)&local_e4,(Vec2 *)&local_ec);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dist: `$%0.2fGm\n");
          local_8._0_1_ = 0x1b;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x1a;
          if (0xf < local_30) {
            pvVar8 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar8 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          local_8._0_1_ = 0x12;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Brg.: `%%%d^\n");
          local_8._0_1_ = 0x1c;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 0x12;
          if (0xf < local_30) {
            pvVar8 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar8 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          if (local_d9 != '\0') {
            if ((*(int *)((int)pvVar10 + 0x130) == 0) ||
               (FUN_00403cb0(*(int *)((int)pvVar10 + 0x130)), (float)puVar12 <= 0.0)) {
              FUN_00403640(&local_2c,"`2Hdg.: `7unknown\n",0x12);
            }
            else {
              puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Hdg.: `!%s\n");
              local_8._0_1_ = 0x1d;
              FUN_00403490(&local_2c,puVar5);
              local_8._0_1_ = 0x12;
              if (0xf < local_30) {
                pvVar8 = local_44[0];
                if ((0xfff < local_30 + 1) &&
                   (pvVar8 = *(void **)((int)local_44[0] + -4),
                   0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pvVar8);
              }
            }
          }
          bVar2 = 1.0 <= *(float *)((int)pvVar10 + 0x40);
          if (bVar2) {
            FUN_00591e00((undefined1 *)local_44,"`7%.0f`2s ago");
            local_8._0_1_ = 0x1e;
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,"`2LDT.: %s");
          local_8 = 0x1f;
          FUN_00403490(&local_2c,puVar5);
          local_8 = CONCAT31(local_8._1_3_,0x1e);
          if (0xf < local_60) {
            pvVar8 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar8 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          local_8 = 0x12;
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
          if ((bVar2) && (0xf < local_30)) {
            pvVar8 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar8 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          if (((local_d9 != '\0') && (*(int *)((int)pvVar10 + 0x130) != 0)) &&
             (*(char *)(*(int *)(*(int *)((int)pvVar10 + 0x130) + 0x40) + 0x34) != '\0')) {
            FUN_00403640(&local_2c,&DAT_005e75f8,1);
            iVar4 = *(int *)(*(int *)((int)pvVar10 + 0x130) + 0x44);
            if (((iVar4 == 0) || (*(int *)(iVar4 + 0x124) == 0)) ||
               (*(char *)(*(int *)(iVar4 + 0x124) + 0x160) == '\0')) {
              puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2From: `%c%s\n");
              local_8._0_1_ = 0x22;
              FUN_00403490(&local_2c,puVar5);
              local_8._0_1_ = 0x12;
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
              puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dest: `%c%s");
              local_8 = CONCAT31(local_8._1_3_,0x23);
            }
            else {
              pbVar9 = (byte *)(iVar4 + 0x7c);
              pbVar11 = pbVar9;
              if (0xf < *(uint *)(iVar4 + 0x90)) {
                pbVar11 = *(byte **)pbVar9;
              }
              local_e0 = *(uint **)(iVar4 + 0x8c);
              uVar7 = FUN_004031f0(pbVar11,(uint)local_e0,(byte *)&PTR_005ce008,0);
              if ((char)uVar7 == '\0') {
                local_d8 = pbVar9;
                if (0xf < *(uint *)(iVar4 + 0x90)) {
                  local_d8 = *(byte **)pbVar9;
                  goto LAB_005855f5;
                }
              }
              else {
                local_d8 = (byte *)0x5e1bc0;
LAB_005855f5:
                if (0xf < *(uint *)(iVar4 + 0x90)) {
                  pbVar9 = *(byte **)pbVar9;
                }
              }
              FUN_004031f0(pbVar9,(uint)local_e0,(byte *)&PTR_005ce008,0);
              puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2From: `%c%s\n");
              local_8._0_1_ = 0x20;
              FUN_00403490(&local_2c,puVar5);
              local_8._0_1_ = 0x12;
              if (0xf < local_30) {
                pvVar8 = local_44[0];
                if ((0xfff < local_30 + 1) &&
                   (pvVar8 = *(void **)((int)local_44[0] + -4),
                   0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pvVar8);
              }
              iVar4 = *(int *)(*(int *)((int)pvVar10 + 0x130) + 0x44);
              pbVar11 = (byte *)(iVar4 + 0xac);
              pbVar9 = pbVar11;
              if (0xf < *(uint *)(iVar4 + 0xc0)) {
                pbVar9 = *(byte **)pbVar11;
              }
              local_e0 = *(uint **)(iVar4 + 0xbc);
              uVar7 = FUN_004031f0(pbVar9,(uint)local_e0,(byte *)&PTR_005ce008,0);
              if ((char)uVar7 == '\0') {
                local_d8 = pbVar11;
                if (0xf < *(uint *)(iVar4 + 0xc0)) {
                  local_d8 = *(byte **)pbVar11;
                  goto LAB_005856d9;
                }
              }
              else {
                local_d8 = (byte *)0x5e1bc0;
LAB_005856d9:
                if (0xf < *(uint *)(iVar4 + 0xc0)) {
                  pbVar11 = *(byte **)pbVar11;
                }
              }
              FUN_004031f0(pbVar11,(uint)local_e0,(byte *)&PTR_005ce008,0);
              puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Dest: `%c%s");
              local_8 = CONCAT31(local_8._1_3_,0x21);
            }
            FUN_00403490(&local_2c,puVar5);
            if (0xf < local_30) {
              pvVar10 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar10 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_00585755;
              FUN_005adb3f(pvVar10);
            }
          }
          if (0xf < local_78) {
            pvVar10 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar10 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10)))) {
LAB_00585755:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
          FUN_00401b20(local_a4);
          FUN_00401b20(local_d4);
          FUN_00401b20(local_bc);
          FUN_00401b20((int *)local_5c);
        }
        else {
          FUN_004024e0(local_74,(undefined4 *)((int)pvVar10 + 0x90));
          pbVar9 = local_d8;
          local_94 = 0;
          local_90 = 0xf;
          local_a4[0]._0_1_ = 0;
          local_8._0_1_ = 2;
          if (*(char *)(*(int *)(local_d8 + 0x194) + 0x45) == '\0') {
LAB_00584990:
            pcVar15 = "`2Type: `$Unknown\n";
            uVar7 = 0x12;
LAB_00584997:
            FUN_00403640(&local_2c,pcVar15,uVar7);
          }
          else {
            iVar4 = *(int *)(*(int *)(local_d8 + 0x194) + 0xe0);
            if (iVar4 == 5) {
              uVar7 = 0x11;
              pcVar15 = "`2Type: `$Beacon\n";
              goto LAB_00584997;
            }
            if (iVar4 == 6) {
              pcVar15 = "`2Type: `!Cargo Pods\n";
              uVar7 = 0x15;
              goto LAB_00584997;
            }
            if (iVar4 == 4) {
              pcVar15 = "`2Type: `^Debris\n";
              uVar7 = 0x11;
              goto LAB_00584997;
            }
            if (iVar4 != 7) goto LAB_00584990;
            FUN_00403640(&local_2c,"`2Type: `^Derelict\n",0x13);
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Name: `!%s\n");
            local_8._0_1_ = 3;
            FUN_00403490(&local_2c,puVar5);
            local_8._0_1_ = 2;
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
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Reg.: `9%s\n");
          local_8._0_1_ = 4;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 2;
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
          FUN_00508e80(pvVar10,(undefined1 *)local_5c);
          local_8._0_1_ = 5;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Sol.: %s\n");
          local_8._0_1_ = 6;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 5;
          if (0xf < local_78) {
            pvVar8 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar8 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar8);
          }
          local_8._0_1_ = 2;
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
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
          auVar14 = ZEXT416((uint)(float)((double)*(float *)((int)pvVar10 + 0x108) +
                                         *(double *)((int)pvVar10 + 0x18)));
          FUN_0050b390(pbVar9,(float)((double)*(float *)((int)pvVar10 + 0x104) +
                                     *(double *)((int)pvVar10 + 0x10)));
          dVar13 = auVar14._0_8_ - (double)*(float *)(pbVar9 + 0x120);
          if (dVar13 < 0.0) {
            dVar13 = dVar13 + 360.0;
          }
          local_d8 = (byte *)0x0;
          if ((byte *)(int)dVar13 != (byte *)0x167) {
            local_d8 = (byte *)(int)dVar13;
          }
          local_e4 = (float)((double)*(float *)((int)pvVar10 + 0x104) +
                            *(double *)((int)pvVar10 + 0x10));
          local_e0 = (uint *)(float)((double)*(float *)((int)pvVar10 + 0x108) +
                                    *(double *)((int)pvVar10 + 0x18));
          local_ec = (float)*(double *)(pbVar9 + 0x28);
          local_e8 = (float)*(double *)(pbVar9 + 0x30);
          local_8._0_1_ = 8;
          cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Dist: `$%0.2fGm\n");
          local_8._0_1_ = 9;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 8;
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
          local_8._0_1_ = 2;
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Brg.: `%%%d^\n");
          local_8._0_1_ = 10;
          FUN_00403490(&local_2c,puVar5);
          local_8._0_1_ = 2;
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
          bVar2 = 1.0 <= *(float *)((int)pvVar10 + 0x40);
          if (bVar2) {
            FUN_00591e00((undefined1 *)local_5c,"`7%.0f`2s ago");
            local_8._0_1_ = 0xb;
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2LDT.: %s\n");
          local_8 = 0xc;
          FUN_00403490(&local_2c,puVar5);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          if (0xf < local_78) {
            pvVar10 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar10 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          local_8 = 2;
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
          if ((bVar2) && (0xf < local_48)) {
            pvVar10 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar10 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          if (*(int *)(*(int *)(pbVar9 + 0x194) + 0xe0) == 6) {
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Crg.: %s\n");
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_00403490(&local_2c,puVar5);
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
          }
          if (0xf < local_60) {
            pvVar10 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar10 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
        }
      }
LAB_00585d31:
      uVar7 = local_2c;
      local_2c = local_2c & 0xffffff00;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = uVar7;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
      local_1c = 0;
      uStack_18 = 0xf;
      FUN_00401b20((int *)&local_2c);
      goto LAB_00585d95;
    }
    uVar7 = 0xb;
    ppuVar16 = (undefined **)"`@**error**";
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,ppuVar16,uVar7);
LAB_00585d95:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_00585dc0(void *this,byte param_1)

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
  *(undefined ***)this = UI_SensorSelect::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  FUN_005868e0((int *)((int)this + 0x434));
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00585e80(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 **this;
  uint *puVar10;
  void *local_98 [4];
  undefined4 local_88;
  uint local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  uint local_70;
  byte *local_6c;
  byte *local_68;
  undefined1 local_62;
  undefined1 local_61;
  void *local_60 [5];
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005ca336;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar8 = (undefined4 *)0x0;
  local_61 = 0;
  local_7c = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_74 = (undefined4 *)0x0;
  local_8 = 0;
  uStack_7 = 0;
  *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  uVar4 = *(uint *)(DAT_0065b5cc + 0xd0);
  local_80 = param_1;
  local_70 = uVar4;
  if (uVar4 == 0) {
    local_61 = 0;
  }
  else {
    uVar9 = 0;
    iVar5 = *(int *)(uVar4 + 0x214);
    if (*(int *)(uVar4 + 0x218) - iVar5 >> 2 != 0) {
      do {
        iVar1 = *(int *)(uVar4 + 0xfc);
        if (iVar1 == 1) {
          iVar1 = *(int *)(*(int *)(iVar5 + uVar9 * 4) + 0xd8);
          if ((iVar1 != 1) && (iVar1 != 2)) goto LAB_00585f60;
        }
        else if (iVar1 == 2) {
          iVar1 = *(int *)(*(int *)(iVar5 + uVar9 * 4) + 0xd8);
          if ((iVar1 != 0) && (iVar1 != 4)) {
LAB_00585f60:
            local_38 = 0;
            local_34 = 0xf;
            local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
            local_8 = 1;
            local_68 = *(byte **)(uVar4 + 0x194);
            local_6c = *(byte **)(iVar5 + uVar9 * 4);
            local_62 = local_68 == local_6c;
            FUN_005095f0(local_6c,(undefined1 *)local_60,'\x01',!(bool)local_62 - 1U & 0x25);
            local_8 = 2;
            FUN_00591e00((undefined1 *)local_98,&DAT_00623b00);
            local_8 = 3;
            local_30[0] = local_62;
            FUN_004024e0(&local_2c,local_98);
            local_8 = 2;
            if (0xf < local_84) {
              pvVar6 = local_98[0];
              if ((0xfff < local_84 + 1) &&
                 (pvVar6 = *(void **)((int)local_98[0] + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar6)))) goto LAB_005861c6;
              FUN_005adb3f(pvVar6);
            }
            local_88 = 0;
            local_84 = 0xf;
            local_98[0] = (void *)((uint)local_98[0] & 0xffffff00);
            local_8 = 4;
            if (local_74 == puVar8) {
              FUN_00586960(&local_7c,puVar8,local_30);
              uVar4 = uStack_18;
            }
            else {
              *(undefined1 *)puVar8 = local_30[0];
              puVar8[5] = 0;
              puVar8[6] = 0;
              puVar8[1] = local_2c;
              puVar8[2] = uStack_28;
              puVar8[3] = uStack_24;
              puVar8[4] = uStack_20;
              local_2c = (void *)((uint)local_2c & 0xffffff00);
              puVar8[5] = local_1c;
              puVar8[6] = uStack_18;
              local_78 = puVar8 + 7;
              uVar4 = 0xf;
            }
            puVar8 = local_78;
            local_8 = 2;
            if (0xf < uVar4) {
              pvVar6 = local_2c;
              if ((0xfff < uVar4 + 1) &&
                 (pvVar6 = *(void **)((int)local_2c + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6)))) goto LAB_005861c6;
              FUN_005adb3f(pvVar6);
            }
            local_8 = 1;
            if (0xf < local_4c) {
              pvVar6 = local_60[0];
              if ((0xfff < local_4c + 1) &&
                 (pvVar6 = *(void **)((int)local_60[0] + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar6)))) goto LAB_005861c6;
              FUN_005adb3f(pvVar6);
            }
            uVar4 = local_70;
            if (local_68 == local_6c) {
              *(int *)(local_80 + 0x430) = ((int)puVar8 - (int)local_7c) / 0x1c + -1;
            }
          }
        }
        else if (iVar1 != 3) goto LAB_00585f60;
        uVar9 = uVar9 + 1;
        iVar5 = *(int *)(uVar4 + 0x214);
      } while (uVar9 < (uint)(*(int *)(uVar4 + 0x218) - iVar5 >> 2));
    }
    local_8 = 0;
    if ((*(int *)(uVar4 + 0xfc) == 3) || (*(int *)(uVar4 + 0xfc) == 0)) {
      iVar5 = *(int *)(uVar4 + 0x24);
      local_68 = (byte *)0x0;
      if (*(int *)(iVar5 + 0x88) - *(int *)(iVar5 + 0x84) >> 2 != 0) {
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x84) + (int)local_68 * 4);
          if ((*(int *)(pbVar7 + 0x30) == 0) &&
             (((iVar1 = *(int *)(pbVar7 + 0x54), iVar1 == 2 || (iVar1 == 0)) || (iVar1 == 1)))) {
            local_6c = *(byte **)(local_70 + 0x1ac);
            local_62 = pbVar7 == local_6c;
            FUN_004024e0(local_48,(undefined4 *)(pbVar7 + 0x5c));
            local_8 = 5;
            FUN_00591e00((undefined1 *)local_98,"`%c%s\n");
            local_8 = 6;
            local_30[0] = local_62;
            FUN_004024e0(&local_2c,local_98);
            local_8 = 5;
            uVar2 = local_8;
            local_8 = 5;
            if (0xf < local_84) {
              pvVar6 = local_98[0];
              if ((0xfff < local_84 + 1) &&
                 (pvVar6 = *(void **)((int)local_98[0] + -4),
                 0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar6)))) {
LAB_005861c6:
                local_8 = uVar2;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar6);
            }
            local_88 = 0;
            local_84 = 0xf;
            local_98[0] = (void *)((uint)local_98[0] & 0xffffff00);
            local_8 = 7;
            if (local_74 == puVar8) {
              FUN_00586960(&local_7c,puVar8,local_30);
              uVar4 = uStack_18;
            }
            else {
              *(undefined1 *)puVar8 = local_30[0];
              puVar8[5] = 0;
              puVar8[6] = 0;
              puVar8[1] = local_2c;
              puVar8[2] = uStack_28;
              puVar8[3] = uStack_24;
              puVar8[4] = uStack_20;
              local_2c = (void *)((uint)local_2c & 0xffffff00);
              puVar8[5] = local_1c;
              puVar8[6] = uStack_18;
              local_78 = puVar8 + 7;
              uVar4 = 0xf;
            }
            puVar8 = local_78;
            local_8 = 5;
            if (0xf < uVar4) {
              pvVar6 = local_2c;
              if ((0xfff < uVar4 + 1) &&
                 (pvVar6 = *(void **)((int)local_2c + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6)))) goto LAB_005861c6;
              FUN_005adb3f(pvVar6);
            }
            if (pbVar7 == local_6c) {
              *(int *)(local_80 + 0x430) = ((int)puVar8 - (int)local_7c) / 0x1c + -1;
            }
            local_8 = 0;
            if (0xf < local_34) {
              pvVar6 = local_48[0];
              if ((0xfff < local_34 + 1) &&
                 (pvVar6 = *(void **)((int)local_48[0] + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) goto LAB_005861c6;
              FUN_005adb3f(pvVar6);
            }
            iVar5 = *(int *)(local_70 + 0x24);
          }
          local_68 = local_68 + 1;
        } while (local_68 < (byte *)(*(int *)(iVar5 + 0x88) - *(int *)(iVar5 + 0x84) >> 2));
      }
    }
    this = (undefined4 **)(local_80 + 0x434);
    local_68 = (byte *)((*(int *)(local_80 + 0x438) - (int)*this) / 0x1c);
    if ((byte *)(((int)puVar8 - (int)local_7c) / 0x1c) == local_68) {
      local_70 = 0;
      if (local_68 != (byte *)0x0) {
        local_6c = (byte *)(local_7c + 1);
        local_68 = (byte *)((int)local_7c - (int)*this);
        puVar10 = *this + 6;
        do {
          if ((byte)puVar10[-6] != local_6c[-4]) {
LAB_0058646b:
            this = (undefined4 **)(local_80 + 0x434);
            local_61 = 1;
            if (this != &local_7c) goto LAB_0058647f;
            break;
          }
          pbVar7 = local_6c;
          if (0xf < *(uint *)((int)local_68 + (int)puVar10)) {
            pbVar7 = *(byte **)local_6c;
          }
          puVar3 = puVar10 + -5;
          if (0xf < *puVar10) {
            puVar3 = (uint *)*puVar3;
          }
          uVar4 = FUN_004031f0((byte *)puVar3,puVar10[-1],pbVar7,*(uint *)(local_6c + 0x10));
          if ((char)uVar4 == '\0') goto LAB_0058646b;
          puVar10 = puVar10 + 7;
          local_70 = local_70 + 1;
          local_6c = local_6c + 0x1c;
        } while (local_70 < (uint)((*(int *)(local_80 + 0x438) - *(int *)(local_80 + 0x434)) / 0x1c)
                );
      }
    }
    else {
      local_61 = 1;
      if (this != &local_7c) {
LAB_0058647f:
        local_61 = 1;
        FUN_00586b50(this,local_7c,puVar8);
      }
    }
  }
  FUN_005868e0((int *)&local_7c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005864c0(int *param_1)

{
  basic_string<> *pbVar1;
  Scale9Sprite *pSVar2;
  undefined4 *puVar3;
  Ref *pRVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  void *in_stack_ffffff7c;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca38a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  pbVar1 = (basic_string<> *)FUN_00591e00((undefined1 *)local_44,"%c_Border.png");
  local_8 = 0;
  pSVar2 = cocos2d::ui::Scale9Sprite::create(pbVar1);
  local_8 = 0xffffffff;
  param_1[0x10a] = (int)pSVar2;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
LAB_00586554:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_5c = 0;
  local_58 = (undefined *)0x0;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x10a] + 0xa0))();
  local_8 = 0xffffffff;
  iVar7 = *(int *)param_1[0x10a];
  cocos2d::Size::Size((Size *)&local_5c,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar7 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 2;
  uVar8 = 1;
  uVar9 = uVar8;
  if (6 < param_1[0xa9] + -8) {
    do {
      uVar8 = uVar9 + 1;
      fVar10 = (float)(int)uVar9;
      uVar9 = uVar8;
    } while ((int)((float)(int)uVar8 * 7.0 + fVar10) <= param_1[0xa9] + -8);
  }
  local_4c = 0;
  uVar9 = (param_1[0x10e] - param_1[0x10d]) / 0x1c;
  local_50 = uVar9 - 1;
  iVar7 = (int)uVar8 / 2;
  if (uVar8 < uVar9) {
    local_50 = param_1[0x10c];
    if (local_50 < iVar7) {
      local_50 = uVar8 - 1;
      local_4c = 0;
    }
    else if ((uint)param_1[0x10c] < uVar9 - iVar7) {
      local_4c = local_50 - iVar7;
      local_50 = iVar7 + local_50;
    }
    else {
      local_50 = uVar9 - 1;
      local_4c = uVar9 - uVar8;
    }
  }
  uVar8 = 0;
  if (uVar9 != 0) {
    local_58 = &DAT_005e7468;
    local_48 = 0;
    do {
      if ((local_4c <= (int)uVar8) && ((int)uVar8 <= local_50)) {
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005e42b8);
        local_8._0_1_ = 3;
        puVar5 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar5 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_2c,puVar5,puVar3[4]);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_30) {
          pvVar6 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar6 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) goto LAB_00586554;
          FUN_005adb3f(pvVar6);
        }
      }
      local_48 = local_48 + 0x1c;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)((param_1[0x10e] - param_1[0x10d]) / 0x1c));
  }
  FUN_004024e0(&stack0xffffff7c,local_2c);
  pRVar4 = FUN_0055ca10(param_1[0xa8] + -4,param_1[0xa9] + -4,(Node)0x0,in_stack_ffffff7c);
  param_1[0x10b] = (int)pRVar4;
  local_54 = 0;
  local_50 = 0;
  local_8._0_1_ = 4;
  (**(code **)(*(int *)pRVar4 + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(*(int *)param_1[0x10b] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  *(undefined1 *)param_1[0xa2] = 1;
  iVar7 = *param_1;
  (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar7 + 0xac))();
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005868a0(int *param_1)

{
  char cVar1;
  
  if (DAT_0065b3d4 != 0) {
    cVar1 = FUN_00585e80((int)param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x294))();
    }
  }
  return;
}


void __fastcall thunk_FUN_005868e0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((uint *)*param_1 != (uint *)0x0) {
    FUN_0051c1b0((uint *)*param_1,(uint *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x1c) * 0x1c)) &&
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


void __fastcall FUN_005868e0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((uint *)*param_1 != (uint *)0x0) {
    FUN_0051c1b0((uint *)*param_1,(uint *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x1c) * 0x1c)) &&
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


int __thiscall FUN_00586960(void *this,undefined4 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  uint *puVar12;
  uint *puVar13;
  
  iVar2 = ((int)param_1 - *(int *)this) / 0x1c;
  iVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  if (iVar3 == 0x9249249) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar10 = iVar3 + 1;
  uVar7 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  uVar5 = uVar10;
  if ((uVar7 <= 0x9249249 - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar10)) {
    uVar5 = uVar10;
  }
  uVar7 = uVar5 * 0x1c;
  if (uVar5 < 0x924924a) {
    if (0xfff < uVar7) goto LAB_00586a04;
    if (uVar7 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = (uint *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_00586a04:
    uVar6 = uVar7 + 0x23;
    if (uVar6 <= uVar7) {
      uVar6 = 0xffffffff;
    }
    uVar7 = FUN_005adb0f(uVar6);
    if (uVar7 == 0) goto LAB_00586b43;
    puVar12 = (uint *)(uVar7 + 0x23 & 0xffffffe0);
    puVar12[-1] = uVar7;
  }
  *(undefined1 *)(puVar12 + iVar2 * 7) = *param_2;
  puVar12[iVar2 * 7 + 5] = 0;
  puVar12[iVar2 * 7 + 6] = 0;
  uVar7 = *(uint *)(param_2 + 8);
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar4 = *(uint *)(param_2 + 0x10);
  puVar13 = puVar12 + iVar2 * 7 + 1;
  *puVar13 = *(uint *)(param_2 + 4);
  puVar13[1] = uVar7;
  puVar13[2] = uVar6;
  puVar13[3] = uVar4;
  *(undefined8 *)(puVar12 + iVar2 * 7 + 5) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  param_2[4] = 0;
  puVar9 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)this;
  puVar13 = puVar12;
  if (param_1 != puVar9) {
    FUN_00586d30(*(undefined4 **)this,param_1,puVar12);
    puVar9 = *(undefined4 **)((int)this + 4);
    puVar13 = puVar12 + iVar2 * 7 + 7;
    puVar8 = param_1;
  }
  FUN_00586d30(puVar8,puVar9,puVar13);
  if (*(uint **)this != (uint *)0x0) {
    FUN_0051c1b0(*(uint **)this,*(uint **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar11 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x1c) * 0x1c)) &&
       (pvVar11 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar11)))) {
LAB_00586b43:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  *(uint **)this = puVar12;
  *(uint **)((int)this + 4) = puVar12 + uVar10 * 7;
  *(uint **)((int)this + 8) = puVar12 + uVar5 * 7;
  return *(int *)this + iVar2 * 0x1c;
}


void __thiscall FUN_00586b50(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar5 = ((int)param_2 - (int)param_1) / 0x1c;
  uVar8 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar5 <= uVar3) {
    puVar2 = *(undefined1 **)this;
    if (uVar5 <= uVar8) {
      FUN_00586e40(param_1,param_2,puVar2);
      FUN_0051c1b0((uint *)(puVar2 + uVar5 * 0x1c),*(uint **)((int)this + 4));
      *(undefined1 **)((int)this + 4) = puVar2 + uVar5 * 0x1c;
      return;
    }
    FUN_00586e40(param_1,param_1 + uVar8 * 7,puVar2);
    puVar7 = FUN_00586db0((undefined1 *)(param_1 + uVar8 * 7),(undefined1 *)param_2,
                          *(uint **)((int)this + 4));
    *(uint **)((int)this + 4) = puVar7;
    return;
  }
  if (0x9249249 < uVar5) {
LAB_00586d22:
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar8 = uVar5;
  if ((uVar3 <= 0x9249249 - (uVar3 >> 1)) && (uVar8 = (uVar3 >> 1) + uVar3, uVar8 < uVar5)) {
    uVar8 = uVar5;
  }
  if (*(uint **)this != (uint *)0x0) {
    FUN_0051c1b0(*(uint **)this,*(uint **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar4 = pvVar1;
    if ((0xfff < uVar3 * 0x1c) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_00586c73;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (uVar8 != 0) {
    if (0x9249249 < uVar8) goto LAB_00586d22;
    uVar8 = uVar8 * 0x1c;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_005adb0f(uVar8);
      }
    }
    else {
      uVar5 = uVar8 + 0x23;
      if (uVar5 <= uVar8) {
        uVar5 = 0xffffffff;
      }
      iVar6 = FUN_005adb0f(uVar5);
      if (iVar6 == 0) {
LAB_00586c73:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = iVar6 + 0x23U & 0xffffffe0;
      *(int *)(uVar5 - 4) = iVar6;
    }
    *(uint *)this = uVar5;
    *(uint *)((int)this + 4) = uVar5;
    *(uint *)((int)this + 8) = *(int *)this + uVar8;
  }
  puVar7 = FUN_00586db0((undefined1 *)param_1,(undefined1 *)param_2,*(uint **)this);
  *(uint **)((int)this + 4) = puVar7;
  return;
}


uint * __fastcall FUN_00586d30(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 6;
    puVar7 = param_3 + 1;
    do {
      *(undefined1 *)puVar6 = *(undefined1 *)(puVar5 + -6);
      puVar7[4] = 0;
      puVar1 = puVar5 + 1;
      *(undefined4 *)((int)param_3 + (-0x1c - (int)param_1) + (int)(puVar5 + 7)) = 0;
      puVar6 = puVar6 + 7;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      *puVar7 = puVar5[-5];
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      puVar5 = puVar5 + 7;
      puVar7 = puVar7 + 7;
    } while (puVar1 != param_2);
  }
  FUN_0051c1b0(puVar6,puVar6);
  return puVar6;
}


uint * FUN_00586db0(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005ca3b8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x1c) {
    *(undefined1 *)param_3 = *param_1;
    FUN_004024e0(param_3 + 1,(undefined4 *)(param_1 + 4));
    param_3 = param_3 + 7;
    ppvVar1 = ExceptionList;
  }
  FUN_0051c1b0(param_3,param_3);
  ExceptionList = local_10;
  return param_3;
}


undefined1 * __fastcall FUN_00586e40(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_3 - (int)param_1;
    puVar4 = param_1 + 1;
    do {
      puVar1 = (undefined4 *)((int)puVar4 + iVar3);
      *param_3 = *(undefined1 *)(puVar4 + -1);
      if (puVar1 != puVar4) {
        puVar2 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar2 = (undefined4 *)*puVar4;
        }
        FUN_00402690(puVar1,puVar2,puVar4[4]);
      }
      param_3 = param_3 + 0x1c;
      puVar1 = puVar4 + 6;
      puVar4 = puVar4 + 7;
    } while (puVar1 != param_2);
  }
  return param_3;
}


void __fastcall FUN_00586ea0(undefined4 *param_1)

{
  FUN_0051c1b0((uint *)*param_1,(uint *)param_1[1]);
  return;
}


Node * __thiscall FUN_00586eb0(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar5 = (int *)((int)this + 0x434);
  *(undefined ***)this = UI_SensorWaveform::vftable;
  iVar4 = 3;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 0x138))(1,uVar2);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = 0;
  iVar4 = *(int *)((int)this + 0x428);
  if (*(int *)((int)this + 0x42c) - iVar4 >> 2 != 0) {
    do {
      piVar5 = *(int **)(iVar4 + uVar2 * 4);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x138))(1);
        *(undefined4 *)(*(int *)((int)this + 0x428) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)((int)this + 0x428);
    } while (uVar2 < (uint)(*(int *)((int)this + 0x42c) - iVar4 >> 2));
  }
  *(int *)((int)this + 0x42c) = iVar4;
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1);
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  pvVar1 = *(void **)((int)this + 0x428);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x430) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
    *(undefined4 *)((int)this + 0x428) = 0;
    *(undefined4 *)((int)this + 0x42c) = 0;
    *(undefined4 *)((int)this + 0x430) = 0;
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


void __fastcall FUN_00587020(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = 3;
  piVar2 = (int *)(param_1 + 0x434);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x138))(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x428);
  if (*(int *)(param_1 + 0x42c) - iVar1 >> 2 != 0) {
    do {
      piVar2 = *(int **)(iVar1 + uVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar1 = *(int *)(param_1 + 0x428);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x42c) - iVar1 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar1;
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  return;
}


void __thiscall FUN_005870d0(void *this,float *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float in_XMM2_Da;
  float fVar8;
  float in_XMM3_Da;
  float fVar9;
  uint in_stack_ffffff90;
  void *pvVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_24;
  float local_20;
  float local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca404;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar8 = (in_XMM2_Da / 1600.0) * (float)*(int *)((int)this + 0x2a0);
  fVar9 = (float)(*(int *)((int)this + 0x2a0) + -1);
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  fVar8 = (float)*(int *)((int)this + 0x2a4);
  fVar7 = (float)(*(int *)((int)this + 0x2a4) + -10) * (in_XMM3_Da / 120.0) + 10.0;
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  local_20 = 10.0;
  if (10.0 <= fVar8) {
    local_20 = fVar8;
  }
  fVar8 = *param_1;
  if (fVar8 < 2.0) {
    *param_1 = 2.0;
    fVar8 = 2.0;
  }
  iVar6 = (int)param_1[1];
  local_1c = 2.0;
  if (2.0 <= fVar9) {
    local_1c = fVar9;
  }
  pvVar10 = (void *)(in_stack_ffffff90 & 0xffffff00);
  local_18 = (int *)(int)local_20;
  iVar4 = (int)local_1c;
  iVar5 = (int)fVar8;
  local_24 = this;
  FUN_00402690(&stack0xffffff90,"white.png",9);
  local_14 = (int *)FUN_00591910(pvVar10);
  local_30 = 0x3f000000;
  local_2c = 0;
  local_8 = 0;
  (**(code **)(*local_14 + 0xa0))();
  local_38 = (float)iVar5;
  local_34 = (float)iVar6;
  local_8 = 1;
  (**(code **)(*local_14 + 0x4c))();
  local_8 = 0xffffffff;
  FUN_00592f80((float)iVar5,(float)iVar6,(float)iVar4);
  (**(code **)(*local_14 + 0xbc))();
  local_40 = (float)iVar4;
  local_3c = (float)(int)local_18;
  local_48 = (float)iVar5;
  local_44 = (float)iVar6;
  local_8 = 3;
  fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_48,(Vec2 *)&local_40);
  piVar3 = local_14;
  local_18 = (int *)(0x5f3759df - ((uint)fVar9 >> 1));
  (**(code **)(*local_14 + 0x2c))();
  local_8 = 0xffffffff;
  *param_1 = local_1c;
  param_1[1] = local_20;
  local_18 = piVar3;
  (**(code **)(*piVar3 + 0x25c))();
  (**(code **)(*piVar3 + 0x244))();
  piVar2 = local_24;
  (**(code **)(*local_24 + 0x108))(piVar3,param_3);
  puVar1 = (undefined4 *)piVar2[0x10b];
  if ((undefined4 *)piVar2[0x10c] != puVar1) {
    *puVar1 = piVar3;
    piVar2[0x10b] = piVar2[0x10b] + 4;
    ExceptionList = local_10;
    return;
  }
  FUN_00414080(piVar2 + 0x10a,puVar1,&local_18);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005873b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  basic_string<> *pbVar4;
  Scale9Sprite *pSVar5;
  Ref *pRVar6;
  void *pvVar7;
  int iVar8;
  void *in_stack_ffffff6c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Size local_34 [4];
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca44c;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  piVar1 = (int *)**(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  if (piVar1 != (int *)0x0) {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 != '\0') {
      pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Border.png");
      local_8 = 0;
      pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
      local_8 = 0xffffffff;
      param_1[0x110] = (int)pSVar5;
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
      (**(code **)(*(int *)param_1[0x110] + 0x48))();
      local_3c = 0;
      local_38 = 0;
      local_8 = 1;
      (**(code **)(*(int *)param_1[0x110] + 0xa0))();
      local_8 = 0xffffffff;
      iVar8 = *(int *)param_1[0x110];
      cocos2d::Size::Size((Size *)&local_44,(float)param_1[0xa8],(float)(param_1[0xa9] + -8));
      (**(code **)(iVar8 + 0xac))();
      (**(code **)(*param_1 + 0x108))();
      if (*(int *)(*(int *)(**(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8) + 0xb0) == 1) {
        FUN_00587ca0();
      }
      else {
        FUN_00587710(param_1);
      }
      local_30 = 0;
      do {
        iVar8 = local_30;
        FUN_00591e00(&stack0xffffff6c,&DAT_0062bc8c);
        pRVar6 = FUN_0055cb00((Node)0x0,in_stack_ffffff6c);
        param_1[iVar8 + 0x10d] = (int)pRVar6;
        if (iVar8 == 0) {
          local_8 = 2;
          (**(code **)(*(int *)pRVar6 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)param_1[0x10d] + 0x48))();
        }
        else if (iVar8 == 2) {
          local_8 = 3;
          (**(code **)(*(int *)pRVar6 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)param_1[0x10f] + 0x48))();
        }
        else {
          local_44 = 0;
          local_40 = 0;
          local_8 = 4;
          (**(code **)(*(int *)pRVar6 + 0xa0))();
          local_8 = 0xffffffff;
          iVar2 = *(int *)param_1[iVar8 + 0x10d];
          (**(code **)(iVar2 + 0xb0))();
          iVar8 = local_30;
          (**(code **)(iVar2 + 0x48))();
        }
        in_stack_ffffff6c = (void *)0x5876a6;
        (**(code **)(*param_1 + 0x108))();
        local_30 = iVar8 + 1;
      } while (local_30 < 3);
      *(undefined1 *)param_1[0xa2] = 1;
      iVar8 = *param_1;
      cocos2d::Size::Size(local_34,(float)param_1[0xa8],(float)param_1[0xa9]);
      (**(code **)(iVar8 + 0xac))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00587710(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  Color3B *this;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uchar uVar12;
  uchar uVar13;
  uint in_stack_fffffdac;
  void *pvVar14;
  uchar uVar15;
  Color3B local_229 [3];
  Color3B local_226 [3];
  Color3B local_223 [3];
  Color3B local_220 [3];
  Color3B local_21d [3];
  Color3B local_21a [3];
  Color3B local_217 [3];
  int local_214;
  undefined4 local_210;
  int *local_20c;
  int local_208;
  int *local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int *local_1ec;
  int local_1e8;
  int local_1e4;
  int aiStack_1e0 [100];
  int local_50 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca48c;
  local_10 = ExceptionList;
  local_50[0xf] = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1f8 = param_1[0xa9] + -10;
  iVar10 = (int)((float)param_1[0xa8] / 3.0);
  if (100 < iVar10) {
    iVar10 = 100;
  }
  uVar7 = 0;
  iVar8 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x194);
  local_214 = iVar8;
  local_208 = iVar10;
  local_204 = param_1;
  if (iVar8 == 0) goto LAB_00587c7b;
  iVar11 = *(int *)(iVar8 + 0xe0);
  if (iVar11 == 1) {
    if (*(float *)(iVar8 + 0x114) == -1.0) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  else if (*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec) >> 3 == 0) {
    uVar7 = 1;
  }
  local_210 = 0;
  local_20c = (int *)0x41200000;
  local_8 = 0;
  local_200 = uVar7;
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1b1) != '\0') {
    local_200 = 1;
  }
  if (iVar11 == 1) {
LAB_00587854:
    piVar6 = (int *)FUN_005adb0f(0xc);
    *piVar6 = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    local_1ec = piVar6;
    FUN_00508ad0(piVar6,*(int *)(iVar8 + 0xe8));
  }
  else {
    if ((((iVar11 == 5) || (iVar11 == 6)) || (iVar11 == 4)) || (iVar11 == 7)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) goto LAB_00587854;
    if ((char)local_200 == '\0') {
      piVar6 = (int *)(iVar8 + 0xec);
      local_1ec = piVar6;
    }
    else {
      piVar6 = (int *)(iVar8 + 0xf8);
      local_1ec = piVar6;
    }
  }
  local_8 = 0xffffffff;
  iVar8 = 0;
  local_1e4 = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 1;
  local_50[0] = 0;
  local_50[1] = 4;
  local_50[2] = 3;
  local_50[3] = 1;
  local_50[4] = 2;
  local_50[5] = 4;
  local_50[6] = 0;
  local_50[7] = 1;
  local_50[8] = 5;
  local_50[9] = 3;
  local_50[10] = 1;
  local_50[0xb] = 2;
  if (0 < iVar10) {
    local_1fc = 1600.0 / (float)iVar10;
    do {
      iVar10 = *piVar6;
      iVar11 = 0;
      uVar9 = piVar6[1] - iVar10 >> 3;
      local_1f4 = (int)((float)iVar8 * local_1fc);
      local_1f0 = (int)((float)iVar8 * local_1fc + local_1fc);
      uVar4 = 0;
      if (uVar9 != 0) {
        do {
          iVar5 = *(int *)(iVar10 + uVar4 * 8);
          if ((local_1f4 <= iVar5) && (iVar5 <= local_1f0)) {
            iVar11 = (int)((float)iVar11 + *(float *)(iVar10 + 4 + uVar4 * 8));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar9);
      }
      iVar10 = local_204[0xa9];
      local_1e8 = local_1e4;
      if ((char)local_200 == '\0') {
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = uVar4 - 3;
      }
      else {
        iVar5 = local_50[local_1e4];
      }
      iVar5 = iVar5 + (int)(((float)iVar11 / 120.0) * (float)(iVar10 + -10));
      aiStack_1e0[iVar8] = iVar5;
      if (iVar5 < 1) {
        aiStack_1e0[iVar8] = 1;
      }
      else if (0x32 < iVar5) {
        aiStack_1e0[iVar8] = 0x32;
      }
      iVar10 = local_1e4 + 1;
      iVar8 = iVar8 + 1;
      local_1e4 = 0;
      if (local_1e8 != 0xe) {
        local_1e4 = iVar10;
      }
      piVar6 = local_1ec;
      iVar10 = local_208;
    } while (iVar8 < local_208);
  }
  local_1e4 = 0;
  if (0 < iVar10) {
    local_1f4 = (int)(local_1f8 + (local_1f8 >> 0x1f & 3U)) >> 2;
    local_1f0 = local_1f4 * 3;
    do {
      pvVar14 = (void *)(in_stack_fffffdac & 0xffffff00);
      FUN_00402690(&stack0xfffffdac,"white.png",9);
      piVar6 = (int *)FUN_00591910(pvVar14);
      iVar10 = *piVar6;
      local_20c = piVar6;
      (**(code **)(iVar10 + 0xb0))();
      (**(code **)(iVar10 + 0x24))();
      iVar10 = *piVar6;
      local_1e8 = aiStack_1e0[local_1e4];
      (**(code **)(iVar10 + 0xb0))();
      (**(code **)(iVar10 + 0x2c))();
      (**(code **)(*piVar6 + 0x48))();
      if ((char)local_200 == '\0') {
        if (local_1e8 < local_1f0) {
          if (local_1e8 < local_1f8 / 2) {
            if (local_1e8 < local_1f4) {
              uVar15 = '%';
              uVar13 = 'x';
              uVar12 = '\x19';
              this = (Color3B *)((int)&local_1fc + 1);
            }
            else {
              uVar15 = '9';
              uVar13 = 0xa2;
              uVar12 = '\x1d';
              this = local_229;
            }
          }
          else {
            uVar15 = 'Z';
            uVar13 = 0xd7;
            uVar12 = '\x1c';
            this = local_226;
          }
        }
        else {
          uVar15 = 0x80;
          uVar13 = 0xff;
          uVar12 = '\0';
          this = local_223;
        }
LAB_00587bf1:
        iVar10 = *piVar6;
      }
      else {
        if (local_1f0 <= local_1e8) {
          uVar15 = 0xff;
          uVar13 = 0xff;
          uVar12 = 0xff;
          this = local_217;
          goto LAB_00587bf1;
        }
        if (local_1f8 / 2 <= local_1e8) {
          uVar15 = 0xc0;
          uVar13 = 0xc0;
          uVar12 = 0xc0;
          this = local_21a;
          goto LAB_00587bf1;
        }
        iVar10 = *piVar6;
        if (local_1e8 < local_1f4) {
          uVar15 = '@';
          uVar13 = '@';
          uVar12 = '@';
          this = local_220;
        }
        else {
          uVar15 = 0x80;
          uVar13 = 0x80;
          uVar12 = 0x80;
          this = local_21d;
        }
      }
      cocos2d::Color3B::Color3B(this,uVar12,uVar13,uVar15);
      (**(code **)(iVar10 + 0x25c))();
      piVar3 = local_204;
      in_stack_fffffdac = 0xffffffff;
      (**(code **)(*local_204 + 0x108))(piVar6);
      puVar1 = (undefined4 *)piVar3[0x10b];
      if ((undefined4 *)piVar3[0x10c] == puVar1) {
        FUN_00414080(piVar3 + 0x10a,puVar1,&local_20c);
      }
      else {
        *puVar1 = piVar6;
        piVar3[0x10b] = piVar3[0x10b] + 4;
      }
      local_1e4 = local_1e4 + 1;
    } while (local_1e4 < local_208);
  }
  piVar6 = local_1ec;
  if ((*(int *)(local_214 + 0xe0) == 1) && (local_1ec != (int *)0x0)) {
    FUN_00413270(local_1ec);
    FUN_005adb3f(piVar6);
  }
LAB_00587c7b:
  ExceptionList = local_10;
  __security_check_cookie(local_50[0xf] ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00587ca0(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined3 *puVar4;
  undefined2 *puVar5;
  undefined1 extraout_var_01;
  undefined2 extraout_var;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined2 extraout_var_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  int local_40;
  int local_3c;
  undefined4 local_38;
  float local_34 [3];
  uint local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005ca4d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x194);
  if (iVar8 != 0) {
    local_34[0] = 0.0;
    local_34[1] = 10.0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8 = 1;
    local_14 = 0;
    iVar6 = *(int *)(iVar8 + 0xe0);
    if ((((iVar6 == 1) || (iVar6 == 5)) || (iVar6 == 6)) || ((iVar6 == 4 || (iVar6 == 7)))) {
      if (*(float *)(iVar8 + 0x114) == -1.0) {
        local_14 = 1;
      }
      else {
        local_14 = 0;
      }
    }
    else if ((uint)(*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec)) < 8) {
      local_14 = 1;
    }
    if (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1b1) != '\0') {
      local_14 = 1;
    }
    iVar6 = 0;
    do {
      uVar2 = rand();
      uVar2 = uVar2 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      iVar3 = 0;
      if ((char)local_14 == '\0') {
        iVar3 = uVar2 - 2;
      }
      FUN_00508ad0(&local_40,iVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    local_1c = 0;
    uVar2 = -(uint)((uint)(*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec)) < 8) & 0xc;
    local_20 = uVar2 + 0xec;
    if (*(int *)(uVar2 + 0xf0 + iVar8) - *(int *)(local_20 + iVar8) >> 3 != 0) {
      do {
        iVar3 = rand();
        rand();
        uVar2 = local_1c;
        iVar6 = 0;
        if ((char)local_14 == '\0') {
          iVar6 = iVar3 % 6 + -2;
        }
        fVar9 = (float)iVar6 + *(float *)(*(int *)(local_20 + iVar8) + 4 + local_1c * 8) + 10.0;
        fVar1 = 10.0;
        if (10.0 <= fVar9) {
          fVar1 = fVar9;
        }
        FUN_00508ad0(&local_40,(int)fVar1);
        local_1c = uVar2 + 1;
      } while (local_1c < (uint)(*(int *)(local_20 + 4 + iVar8) - *(int *)(local_20 + iVar8) >> 3));
    }
    iVar6 = *(int *)(iVar8 + 0xe0);
    if (((iVar6 == 1) || (iVar6 == 5)) || ((iVar6 == 6 || ((iVar6 == 4 || (iVar6 == 7)))))) {
      FUN_00508ad0(&local_40,*(int *)(iVar8 + 0xe8));
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if ((char)local_14 == '\0') {
      local_28 = local_3c - local_40 >> 3;
      if (local_28 != 0) {
        local_20 = local_40;
        local_1c = local_28;
        do {
          iVar8 = 4;
          do {
            rand();
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          rand();
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          iVar8 = local_20;
          FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_02,*puVar4),0xfffffffd);
          local_20 = iVar8 + 8;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        local_1c = 0;
      }
      uVar2 = local_28;
      iVar8 = local_40;
      puVar4 = (undefined3 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_03,*puVar4),0xfffffffd);
      local_24 = 0;
      local_20 = 0x41200000;
      local_34[0] = 0.0;
      local_34[1] = 10.0;
      if (uVar2 != 0) {
        local_20 = iVar8;
        local_1c = uVar2;
        do {
          iVar8 = 3;
          do {
            rand();
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          rand();
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          iVar8 = local_20;
          FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_04,*puVar4),0xfffffffe);
          local_20 = iVar8 + 8;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        local_1c = 0;
        uVar2 = local_28;
      }
      puVar4 = (undefined3 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_05,*puVar4),0xfffffffe);
      local_34[2] = 0.0;
      uVar7 = 0;
      local_28 = 0x41200000;
      local_34[0] = 0.0;
      local_34[1] = 10.0;
      if (uVar2 != 0) {
        do {
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_06,*puVar4),0);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      puVar5 = (undefined2 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      uVar10 = CONCAT22(extraout_var_00,*puVar5);
    }
    else {
      uVar7 = 0;
      uVar2 = local_3c - local_40 >> 3;
      if (uVar2 != 0) {
        do {
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),0xff,0xff,0xff);
          FUN_005870d0(local_18,local_34,CONCAT13(extraout_var_01,*puVar4),0);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      puVar5 = (undefined2 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),0xff,0xff,0xff);
      uVar10 = CONCAT22(extraout_var,*puVar5);
    }
    FUN_005870d0(local_18,local_34,
                 CONCAT13((char)((uint)uVar10 >> 0x18),
                          CONCAT12(*(undefined1 *)(puVar5 + 1),(short)uVar10)),0);
    FUN_00413270(&local_40);
  }
  ExceptionList = local_10;
  return;
}
