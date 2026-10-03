#include "../ois_server.exe.h"


undefined4 __thiscall FUN_00564490(void *this,int param_1)

{
  int *in_EAX;
  int *this_00;
  char cVar1;
  int local_44 [16];
  
  if (((*(char *)((int)this + 0x430) == '\0') && (*(char *)((int)this + 0x27c) != '\0')) &&
     (*(char *)((int)this + 0x44d) != '\0')) {
    local_44[0] = param_1;
    in_EAX = (int *)FUN_004023e0();
    if (local_44[0] - 0x7cU < 0x1a) {
      cVar1 = (char)local_44[0] + -0x1b;
    }
    else {
      this_00 = in_EAX + 0xbc;
      if ((char)in_EAX[0xbe] == '\0') {
        this_00 = in_EAX + 0xba;
      }
      in_EAX = FUN_00534390(this_00,local_44);
      cVar1 = (char)*in_EAX;
    }
    if (*(char *)((int)this + 0x44d) == cVar1) {
      if ((*(int *)((int)this + 0x3b4) != 0) && (*(char *)((int)this + 0x430) == '\0')) {
        in_EAX = (int *)FUN_00417820((int)this + 0x390);
      }
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


Node * __thiscall FUN_00564560(void *this,byte param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c82b0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Checkbox::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = *(int **)((int)this + 0x45c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)((int)this + 0x438));
    *(undefined4 *)((int)this + 0x45c) = 0;
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


void __fastcall FUN_00564640(int param_1)

{
  if (*(int **)(param_1 + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x428) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  return;
}


void __fastcall FUN_00564690(int *param_1)

{
  int iVar1;
  Ref *pRVar2;
  char *pcVar3;
  void *pvVar4;
  void *in_stack_ffffffb8;
  Size local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c82d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  if ((char)param_1[0x9f] == '\0') {
    pcVar3 = "%c_Checkbox_Greyed.png";
  }
  else {
    pcVar3 = "%c_Checkbox_Filled.png";
    if (*(char *)param_1[0x10d] == '\0') {
      pcVar3 = "%c_Checkbox.png";
    }
  }
  FUN_00591e00(&stack0xffffffb8,pcVar3);
  pvVar4 = (void *)0x56470d;
  iVar1 = FUN_00591910(in_stack_ffffffb8);
  param_1[0x10a] = iVar1;
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffffb4,"`%c%s");
  pRVar2 = FUN_0055cb00((Node)0x0,pvVar4);
  param_1[0x10b] = (int)pRVar2;
  local_18 = 0;
  local_14 = 0x3f000000;
  local_8 = 0;
  (**(code **)(*(int *)pRVar2 + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = *(int *)param_1[0x10b];
  (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  iVar1 = *param_1;
  cocos2d::Size::Size(local_20,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))();
  *(char *)((int)param_1 + 0x431) = (char)param_1[0x9f];
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)param_1[0x10d];
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00564890(int *param_1)

{
  if (((char)param_1[0x9f] != *(char *)((int)param_1 + 0x431)) ||
     ((char)param_1[0x10c] != *(char *)param_1[0x10d])) {
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


void __fastcall FUN_005648c0(int *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(char *)param_1[0x10d] = *(char *)param_1[0x10d] == '\0';
  (**(code **)(*param_1 + 0x294))(uVar1);
  FUN_004dd240(param_1[0xfd]);
  ExceptionList = local_10;
  return;
}


Node * __thiscall FUN_00564920(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0;
  *(undefined ***)this = UI_ComponentStorage::vftable;
  iVar4 = *(int *)((int)this + 0x444);
  if (*(int *)((int)this + 0x448) - iVar4 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x444) + uVar5 * 4) + 0x138))(1,uVar2);
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)((int)this + 0x444);
    } while (uVar5 < (uint)(*(int *)((int)this + 0x448) - iVar4 >> 2));
  }
  *(int *)((int)this + 0x448) = iVar4;
  pvVar1 = *(void **)((int)this + 0x444);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x44c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_00564a93;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)((int)this + 0x444) = 0;
    *(undefined4 *)((int)this + 0x448) = 0;
    *(undefined4 *)((int)this + 0x44c) = 0;
  }
  pvVar1 = *(void **)((int)this + 0x428);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x430) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_00564a93:
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


void __fastcall FUN_00564aa0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x444);
  if (*(int *)(param_1 + 0x448) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x444) + uVar2 * 4) + 0x138))(1);
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x444);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x448) - iVar1 >> 2));
  }
  *(int *)(param_1 + 0x448) = iVar1;
  return;
}


undefined1 * __thiscall FUN_00564b00(void *this,undefined1 *param_1,float param_2,float param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8309;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_00565630(this,param_2,param_3);
  FUN_00591070("DETAIL","ELEMENT: %d");
  if (uVar1 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00591e00(param_1,"%s_Icon.png");
  ExceptionList = local_10;
  return param_1;
}


uint __thiscall FUN_00564bf0(void *this,float param_1,float param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_00565630(this,param_1,param_2);
  FUN_00591070("DETAIL","ELEMENT: %d");
  ExceptionList = local_10;
  return uVar1;
}


void FUN_00564c70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8339;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0x65) && (param_2 != -1)) {
    iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
    iVar2 = *(int *)(iVar1 + 0x1f8);
    if ((uint)(*(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x44) >> 2) < *(uint *)(iVar2 + 4)) {
      if (99 < param_2) {
        if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
          FUN_004122b0();
          FUN_0041c620(0x80,0);
          ExceptionList = local_10;
          return;
        }
        FUN_004e0fa0(iVar1,param_2);
        ExceptionList = local_10;
        return;
      }
      if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
        FUN_004e0fa0(iVar1,param_2);
      }
      else {
        FUN_004122b0();
        FUN_0041c620(0x80,0);
      }
      pcVar4 = "Component dragged.";
      pcVar3 = "DETAIL";
    }
    else {
      pcVar4 = "component hold full.";
      pcVar3 = "ERROR";
    }
    FUN_00591070(pcVar3,pcVar4);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00564db0(int *param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *local_14;
  int local_10;
  undefined8 *local_c;
  int *local_8;
  
  if (DAT_0065b3d4 != 0) {
    local_8 = param_1;
    if (param_1[0x10d] != *(int *)param_1[0x10e]) {
      param_1[0x10d] = *(int *)param_1[0x10e];
      (**(code **)(*param_1 + 0x294))();
    }
    this = param_1 + 0x10a;
    iVar5 = *this;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    local_14 = (undefined8 *)(param_1[0x10b] - iVar5 >> 2);
    local_10 = *(int *)(iVar1 + 0x44);
    local_c = (undefined8 *)(*(int *)(iVar1 + 0x48) - local_10 >> 2);
    if (local_14 == local_c) {
      puVar4 = (undefined8 *)0x0;
      if (local_c == (undefined8 *)0x0) {
        return;
      }
      while ((piVar2 = *(int **)(iVar5 + (int)puVar4 * 4),
             *piVar2 == **(int **)(*(int *)(local_10 + (int)puVar4 * 4) + 4) &&
             ((float)piVar2[1] ==
              **(float **)
                (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0x44) + (int)puVar4 * 4)
             ))) {
        puVar4 = (undefined8 *)((int)puVar4 + 1);
        if (local_c <= puVar4) {
          return;
        }
      }
    }
    uVar6 = 0;
    if (local_14 != (undefined8 *)0x0) {
      do {
        FUN_005adb3f(*(void **)(*this + uVar6 * 4));
        uVar6 = uVar6 + 1;
        iVar5 = *this;
      } while (uVar6 < (uint)(param_1[0x10b] - iVar5 >> 2));
    }
    uVar6 = 0;
    local_8[0x10b] = iVar5;
    iVar5 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    if (*(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2 != 0) {
      do {
        local_14 = (undefined8 *)FUN_005adb0f(8);
        iVar5 = DAT_0065b5cc;
        *local_14 = 0;
        *(undefined4 *)local_14 =
             **(undefined4 **)
               (*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0xd0) + 0x1f8) + 0x44) + uVar6 * 4) + 4)
        ;
        *(undefined4 *)((int)local_14 + 4) =
             **(undefined4 **)
               (*(int *)(*(int *)(*(int *)(iVar5 + 0xd0) + 0x1f8) + 0x44) + uVar6 * 4);
        puVar3 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar3) {
          FUN_00414080(this,puVar3,&local_14);
          iVar5 = DAT_0065b5cc;
        }
        else {
          *puVar3 = local_14;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        uVar6 = uVar6 + 1;
        iVar5 = *(int *)(*(int *)(iVar5 + 0xd0) + 0x1f8);
      } while (uVar6 < (uint)(*(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2));
    }
    (**(code **)(*local_8 + 0x294))();
  }
  return;
}


void __fastcall FUN_00564f70(int *param_1)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *in_stack_ffffff80;
  uint in_stack_ffffff94;
  undefined4 *puVar9;
  uint3 uVar11;
  void *pvVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  Size local_24 [4];
  float *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c837b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  local_1c = 0xffffffff;
  param_1[0x10f] = param_1[0xa8] / 0x28;
  param_1[0x110] = param_1[0xa9] / 0x28;
  puVar9 = (undefined4 *)(in_stack_ffffff94 & 0xffffff00);
  FUN_00402690(&stack0xffffff94,"invmode",7);
  uVar4 = FUN_00557620(param_1 + 0xa4,puVar9);
  uVar7 = *(uint *)param_1[0x10e];
  uVar8 = uVar7;
  if (((char)uVar4 == '\0') && (uVar8 = local_1c, 99 < (int)uVar7)) {
    uVar8 = uVar7 - 100;
  }
  local_1c = uVar8;
  iVar5 = param_1[0x110];
  iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
  uVar7 = *(uint *)(iVar6 + 0x1e0);
  uVar8 = uVar7;
  if ((int)uVar7 < (int)(param_1[0x10f] * iVar5 + uVar7)) {
    do {
      iVar1 = *(int *)(*(int *)(iVar6 + 0x1f8) + 0x44);
      if ((uint)(*(int *)(*(int *)(iVar6 + 0x1f8) + 0x48) - iVar1 >> 2) <= uVar7) break;
      local_20 = *(float **)(iVar1 + uVar7 * 4);
      local_28 = (int)(uVar7 - uVar8) / iVar5;
      local_14 = (uVar7 - uVar8) - iVar5 * local_28;
      uVar11 = (uint3)((uint)puVar9 >> 8);
      if ((float)*(int *)((int)local_20[1] + 0x10) <= *local_20) {
        pvVar10 = (void *)((uint)uVar11 << 8);
        if ((float)*(int *)((int)local_20[1] + 0x14) <= *local_20) {
          FUN_00402690(&stack0xffffff94,"Tray_Undamaged.png",0x12);
          local_18 = (int *)FUN_00591910(pvVar10);
        }
        else {
          FUN_00402690(&stack0xffffff94,"Tray_Damaged.png",0x10);
          local_18 = (int *)FUN_00591910(pvVar10);
        }
      }
      else {
        pvVar10 = (void *)((uint)uVar11 << 8);
        FUN_00402690(&stack0xffffff94,"Tray_Destroyed.png",0x12);
        local_18 = (int *)FUN_00591910(pvVar10);
      }
      piVar3 = local_18;
      local_34 = 0;
      local_30 = 0;
      local_8 = 0;
      (**(code **)(*local_18 + 0xa0))();
      local_8 = 0xffffffff;
      local_28 = local_28 * 0x28;
      (**(code **)(*piVar3 + 0x48))();
      (**(code **)(*param_1 + 0x108))();
      puVar9 = (undefined4 *)param_1[0x112];
      this = param_1 + 0x111;
      local_2c = piVar3;
      if ((undefined4 *)param_1[0x113] == puVar9) {
        FUN_00414080(this,puVar9,&local_2c);
      }
      else {
        *puVar9 = local_18;
        param_1[0x112] = param_1[0x112] + 4;
      }
      if (uVar7 == local_1c) {
        in_stack_ffffff80 = (void *)((uint)in_stack_ffffff80 & 0xffffff00);
        FUN_00402690(&stack0xffffff80,"Tray_Selected.png",0x11);
        local_18 = (int *)FUN_00591910(in_stack_ffffff80);
        local_3c = 0;
        local_38 = 0;
        local_8 = 1;
        (**(code **)(*local_18 + 0xa0))();
        local_8 = 0xffffffff;
        (**(code **)(*local_18 + 0x48))();
        in_stack_ffffff80 = (void *)0x565260;
        (**(code **)(*param_1 + 0x108))();
        puVar9 = (undefined4 *)param_1[0x112];
        local_2c = local_18;
        if ((undefined4 *)param_1[0x113] == puVar9) {
          FUN_00414080(this,puVar9,&local_2c);
        }
        else {
          *puVar9 = local_18;
          param_1[0x112] = param_1[0x112] + 4;
        }
      }
      FUN_00591e00(&stack0xffffff80,"%s_Icon.png");
      local_18 = (int *)FUN_00591910(in_stack_ffffff80);
      local_44 = 0x3f000000;
      local_40 = 0x3f000000;
      local_8 = 2;
      puVar9 = &local_44;
      (**(code **)(*local_18 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*local_18 + 0x48))();
      in_stack_ffffff80 = (void *)0x565328;
      (**(code **)(*param_1 + 0x108))();
      puVar2 = (undefined4 *)param_1[0x112];
      local_2c = local_18;
      if ((undefined4 *)param_1[0x113] == puVar2) {
        FUN_00414080(this,puVar2,&local_2c);
      }
      else {
        *puVar2 = local_18;
        param_1[0x112] = param_1[0x112] + 4;
      }
      uVar7 = uVar7 + 1;
      iVar5 = param_1[0x110];
      iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
      uVar8 = *(uint *)(iVar6 + 0x1e0);
    } while ((int)uVar7 < (int)(param_1[0x10f] * iVar5 + uVar8));
  }
  iVar5 = *param_1;
  cocos2d::Size::Size(local_24,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar5 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005653d0(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_stack_ffffffc4;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c83a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (**(code **)(*(int *)this + 0xb0))();
  iVar1 = *(int *)((int)this + 0x440);
  iVar2 = iVar1 * (int)(param_1 / 40.0) +
          (int)((float)iVar1 - (*(float *)(iVar2 + 4) - param_2) / 40.0);
  if ((iVar2 < 0) || (*(int *)((int)this + 0x43c) * iVar1 <= iVar2)) {
    if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
      ExceptionList = local_10;
      return;
    }
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
  }
  else {
    iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
    if ((uint)(*(int *)(*(int *)(iVar1 + 0x1f8) + 0x48) - *(int *)(*(int *)(iVar1 + 0x1f8) + 0x44)
              >> 2) <= (uint)(*(int *)(iVar1 + 0x1e0) + iVar2)) {
      if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
        FUN_004e17b0(iVar1,0xffffffff);
      }
      else {
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        FUN_0041c620(0x7d,0);
      }
      FUN_00591070("DETAIL","selection error");
      ExceptionList = local_10;
      return;
    }
    pvVar4 = (void *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,"invmode",7);
    uVar3 = FUN_00557620((void *)((int)this + 0x290),pvVar4);
    if ((char)uVar3 != '\0') {
      if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
        FUN_004e1710(*(int *)(DAT_0065b5cc + 0xd0),iVar2);
        ExceptionList = local_10;
        return;
      }
      FUN_004122b0();
      uVar5 = 0x83;
      goto LAB_00565613;
    }
    if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
      FUN_004e17b0(*(int *)(DAT_0065b5cc + 0xd0),iVar2 + 100);
      ExceptionList = local_10;
      return;
    }
    FUN_004122b0();
  }
  uVar5 = 0x7d;
LAB_00565613:
  FUN_0041c620(uVar5,0);
  ExceptionList = local_10;
  return;
}


void FUN_005654ff(void)

{
  uint uVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint in_stack_ffffffe8;
  void *pvVar2;
  undefined4 uVar3;
  
  pvVar2 = (void *)(in_stack_ffffffe8 & 0xffffff00);
  FUN_00402690(&stack0xffffffe8,"invmode",7);
  uVar1 = FUN_00557620((void *)(unaff_EBX + 0x290),pvVar2);
  if ((char)uVar1 == '\0') {
    if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
      FUN_004e17b0(*(int *)(DAT_0065b5cc + 0xd0),unaff_ESI + 100);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    FUN_004122b0();
    uVar3 = 0x7d;
  }
  else {
    if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
      FUN_004e1710(*(int *)(DAT_0065b5cc + 0xd0),unaff_ESI);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    FUN_004122b0();
    uVar3 = 0x83;
  }
  FUN_0041c620(uVar3,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


uint __thiscall FUN_00565630(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  uVar3 = ((int)((float)*(int *)((int)this + 0x440) - (*(float *)(iVar2 + 4) - param_2) / 40.0) -
          (int)(param_1 / -40.0) * *(int *)((int)this + 0x440)) +
          *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e0);
  if ((uint)(*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2) <= uVar3) {
    uVar3 = 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar3;
}


Node * __thiscall FUN_005656f0(void *this,byte param_1)

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
  *(undefined ***)this = UI_Data::vftable;
  if (*(int **)((int)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  if (*(int **)((int)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x444) + 0x138))(1);
    *(undefined4 *)((int)this + 0x444) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x43c)) {
    pvVar1 = *(void **)((int)this + 0x428);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x43c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
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


void __fastcall FUN_00565800(int param_1)

{
  if (*(int **)(param_1 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x440) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  return;
}


void __fastcall FUN_00565850(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 ****ppppuVar3;
  LPCSTR ***ppppCVar4;
  DWORD DVar5;
  int *piVar6;
  int iVar7;
  Ref *pRVar8;
  void *pvVar9;
  void *in_stack_ffffff68;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  LPCSTR **local_60;
  void *local_5c [5];
  uint local_48;
  undefined4 ***local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  uint uStack_30;
  LPCSTR **local_2c;
  LPCSTR *ppCStack_28;
  LPCSTR *ppCStack_24;
  LPCSTR *ppCStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8403;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = (LPCSTR **)0x0;
  if (param_1[0x9e] != 0) {
    (**(code **)(*param_1 + 0x290))();
    if (param_1[0xfb] == 1) {
      piVar6 = param_1 + 0x10a;
      iVar7 = *(int *)(param_1[0x9e] + 0x18c);
      if (iVar7 == 0) {
        FUN_00402690(piVar6,&PTR_005ce008,0);
      }
      else {
        piVar1 = (int *)(iVar7 + 0xc);
        if (piVar6 != piVar1) {
          if (0xf < *(uint *)(iVar7 + 0x20)) {
            piVar1 = (int *)*piVar1;
          }
          FUN_00402690(piVar6,piVar1,*(uint *)(iVar7 + 0x1c));
        }
      }
    }
    else {
      local_60 = (LPCSTR **)param_1[0xfa];
      local_64 = *(uint *)(DAT_0065b5cc + 0xd0);
      if ((int *)param_1[0xf9] == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(*(int *)param_1[0xf9] + 8))();
      ppppuVar3 = (undefined4 ****)(param_1 + 0x10a);
      local_60 = (LPCSTR **)0x1;
      if (ppppuVar3 == &local_44) {
        if (0xf < uStack_30) {
          ppppuVar3 = (undefined4 ****)local_44;
          if ((0xfff < uStack_30 + 1) &&
             (ppppuVar3 = (undefined4 ****)local_44[-1],
             0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppuVar3);
        }
      }
      else {
        FUN_00401b20((int *)ppppuVar3);
        *ppppuVar3 = local_44;
        param_1[0x10b] = iStack_40;
        param_1[0x10c] = iStack_3c;
        param_1[0x10d] = iStack_38;
        *(ulonglong *)(param_1 + 0x10e) = CONCAT44(uStack_30,local_34);
      }
    }
    piVar1 = param_1 + 0x10a;
    piVar6 = piVar1;
    if (0xf < (uint)param_1[0x10f]) {
      piVar6 = (int *)*piVar1;
    }
    uVar2 = FUN_0042eeb0((int)piVar6,param_1[0x10e],0,&DAT_0061fe9c,4);
    if (uVar2 == 0xffffffff) {
      FUN_004024e0(&stack0xffffff68,piVar1);
      pRVar8 = FUN_0055ca10(param_1[0xa8],param_1[0xa9],(Node)0x0,in_stack_ffffff68);
      param_1[0x110] = (int)pRVar8;
      local_8 = 3;
      (**(code **)(*(int *)pRVar8 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)param_1[0x110] + 0x48))();
      (**(code **)(*param_1 + 0x10c))();
      iVar7 = *param_1;
      (**(code **)(*(int *)param_1[0x110] + 0xb0))();
      (**(code **)(iVar7 + 0xac))();
    }
    else {
      FUN_004024e0(&local_44,piVar1);
      local_8 = 1;
      local_64 = (uint)local_60 | 2;
      local_1c = 0xf00000000;
      local_2c = (LPCSTR **)((uint)local_2c & 0xffffff00);
      local_60 = (LPCSTR **)FUN_00591e00((undefined1 *)local_5c,"%s\\assets\\");
      if (&local_2c != (LPCSTR ***)local_60) {
        FUN_00401b20((int *)&local_2c);
        local_2c = (LPCSTR **)*local_60;
        ppCStack_28 = local_60[1];
        ppCStack_24 = local_60[2];
        ppCStack_20 = local_60[3];
        local_1c = *(undefined8 *)(local_60 + 4);
        local_60[4] = (LPCSTR *)0x0;
        local_60[5] = (LPCSTR *)0xf;
        *(undefined1 *)local_60 = 0;
      }
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      ppppuVar3 = &local_44;
      if (0xf < uStack_30) {
        ppppuVar3 = (undefined4 ****)local_44;
      }
      FUN_00403640(&local_2c,ppppuVar3,local_34);
      local_8 = local_8 & 0xffffff00;
      if (0xf < uStack_30) {
        ppppuVar3 = (undefined4 ****)local_44;
        if ((0xfff < uStack_30 + 1) &&
           (ppppuVar3 = (undefined4 ****)local_44[-1],
           0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppuVar3);
      }
      local_34 = 0;
      ppppCVar4 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppCVar4 = (LPCSTR ***)local_2c;
      }
      uStack_30 = 0xf;
      local_44 = (undefined4 ***)((uint)local_44 & 0xffffff00);
      DVar5 = GetFileAttributesA((LPCSTR)ppppCVar4);
      if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) != 0)) {
        FUN_00591070("ERROR","Unable to find file \'%s\'");
      }
      else {
        FUN_004024e0(&stack0xffffff68,piVar1);
        piVar6 = (int *)FUN_00591910(in_stack_ffffff68);
        param_1[0x111] = (int)piVar6;
        local_68 = *piVar6;
        iVar7 = (**(code **)(local_68 + 0xb0))();
        local_60 = *(LPCSTR ***)(iVar7 + 4);
        (**(code **)(*(int *)param_1[0x111] + 0xb0))();
        (**(code **)(local_68 + 0x48))();
        local_6c = 0;
        local_68 = 0;
        local_8._0_1_ = 2;
        (**(code **)(*(int *)param_1[0x111] + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        (**(code **)(*param_1 + 0x10c))();
        iVar7 = *param_1;
        cocos2d::Size::Size((Size *)&local_6c,(float)param_1[0xa8],(float)param_1[0xa9]);
        (**(code **)(iVar7 + 0xac))();
      }
      if (0xf < local_1c._4_4_) {
        ppppCVar4 = (LPCSTR ***)local_2c;
        if ((0xfff < local_1c._4_4_ + 1) &&
           (ppppCVar4 = (LPCSTR ***)local_2c[-1],
           (LPCSTR)0x1f < (LPCSTR)((int)local_2c + (-4 - (int)ppppCVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppCVar4);
      }
    }
    *(undefined1 *)param_1[0xa2] = 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00565d40(int *param_1)

{
  int iVar1;
  byte ****ppppbVar2;
  uint uVar3;
  byte ****ppppbVar4;
  uint uVar5;
  byte ****ppppbVar6;
  int *in_stack_ffffff90;
  byte ***local_44;
  undefined8 local_34;
  byte ***local_2c [4];
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bcbd8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c._4_4_ = 0xf;
  local_1c = 0xf00000000;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  if (param_1[0xfb] == 1) {
    iVar1 = *(int *)(param_1[0x9e] + 0x18c);
    ppppbVar2 = (byte ****)(iVar1 + 0xc);
    if (local_2c == ppppbVar2) goto LAB_00565e12;
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      ppppbVar2 = (byte ****)*ppppbVar2;
    }
    FUN_00402690(local_2c,ppppbVar2,*(uint *)(iVar1 + 0x1c));
  }
  else {
    if ((int *)param_1[0xf9] == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*(int *)param_1[0xf9] + 8))();
    FUN_00401b20((int *)local_2c);
    local_2c[0] = local_44;
    local_1c = local_34;
  }
LAB_00565e12:
  ppppbVar2 = (byte ****)(param_1 + 0x10a);
  ppppbVar4 = ppppbVar2;
  if (0xf < (uint)param_1[0x10f]) {
    ppppbVar4 = (byte ****)*ppppbVar2;
  }
  uVar5 = param_1[0x10e];
  ppppbVar6 = local_2c;
  if (0xf < local_1c._4_4_) {
    ppppbVar6 = (byte ****)local_2c[0];
  }
  uVar3 = FUN_004031f0((byte *)ppppbVar6,(uint)local_1c,(byte *)ppppbVar4,uVar5);
  if ((char)uVar3 == '\0') {
    if (ppppbVar2 == local_2c) {
      uVar3 = param_1[0x10f];
    }
    else {
      ppppbVar4 = local_2c;
      if (0xf < local_1c._4_4_) {
        ppppbVar4 = (byte ****)local_2c[0];
      }
      FUN_00402690(ppppbVar2,ppppbVar4,(uint)local_1c);
      uVar3 = param_1[0x10f];
      uVar5 = param_1[0x10e];
    }
    if (0xf < uVar3) {
      ppppbVar2 = (byte ****)*ppppbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppppbVar2,uVar5,(byte *)&PTR_005ce008,0);
    if (((char)uVar5 == '\0') || ((int *)param_1[0x110] == (int *)0x0)) {
      if (param_1[0x110] == 0) {
        (**(code **)(*param_1 + 0x294))();
      }
      else {
        FUN_004024e0(&stack0xffffff90,local_2c);
        FUN_0055ce90((void *)param_1[0x110],'\x01','\0',in_stack_ffffff90);
        *(undefined1 *)param_1[0xa2] = 1;
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x110] + 0x138))();
      param_1[0x110] = 0;
    }
  }
  if (0xf < local_1c._4_4_) {
    ppppbVar2 = (byte ****)local_2c[0];
    if (0xfff < local_1c._4_4_ + 1) {
      ppppbVar2 = (byte ****)local_2c[0][-1];
      if ((byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppbVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00565f50(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  Size *pSVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  uint in_stack_ffffff98;
  void *pvVar9;
  Size local_40 [8];
  void *local_38;
  void *local_34;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8470;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = this;
  local_34 = this;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_DMenu::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0x80;
  *(undefined4 *)((int)this + 0x444) = 0x18;
  *(undefined4 *)((int)this + 0x448) = 8;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0xffffffff;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  piVar1 = (int *)((int)this + 0x460);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  local_8 = 4;
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  pvVar9 = (void *)(in_stack_ffffff98 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"width",5);
  pvVar7 = (void *)((int)this + 0x290);
  bVar2 = FUN_005576d0(pvVar7,pvVar9);
  if (bVar2) {
    pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
    FUN_00402690(&stack0xffffff98,"width",5);
    pcVar3 = FUN_00557760(pvVar7,local_30,pvVar9);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x440) = iVar4;
    if (0xf < local_1c) {
      pvVar6 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar6 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"height",6);
  bVar2 = FUN_005576d0(pvVar7,pvVar9);
  if (bVar2) {
    pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
    FUN_00402690(&stack0xffffff98,"height",6);
    pcVar3 = FUN_00557760(pvVar7,local_30,pvVar9);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x444) = iVar4;
    if (0xf < local_1c) {
      pvVar6 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar6 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"spacing",7);
  bVar2 = FUN_005576d0(pvVar7,pvVar9);
  if (bVar2) {
    pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
    FUN_00402690(&stack0xffffff98,"spacing",7);
    pcVar3 = FUN_00557760(pvVar7,local_30,pvVar9);
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar4 = atoi(pcVar3);
    *(int *)((int)this + 0x448) = iVar4;
    if (0xf < local_1c) {
      pvVar7 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar7 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  *(undefined4 *)((int)this + 0x44c) = *(undefined4 *)((int)this + 0x3f0);
  bVar2 = FUN_004de400(*(undefined4 *)((int)this + 0x3f4),piVar1);
  if (bVar2) {
    iVar4 = *(int *)((int)this + 0x464);
    iVar8 = *piVar1;
    if (iVar8 != iVar4) {
      do {
        FUN_0043bfa0(iVar8);
        iVar8 = iVar8 + 0x60;
      } while (iVar8 != iVar4);
      iVar8 = *(int *)((int)this + 0x460);
    }
    *(int *)((int)this + 0x464) = iVar8;
    FUN_004de1e0(*(undefined4 *)((int)this + 0x3f4),(int *)((int)this + 0x460));
    (**(code **)(*(int *)this + 0x294))();
  }
  pSVar5 = (Size *)cocos2d::Size::Size(local_40,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar5);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_00566310(void *this,byte param_1)

{
  FUN_00566340(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00566340(Node *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  Rect *this;
  Rect *pRVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c84a0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_DMenu::vftable;
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x434);
  if (*(int *)(param_1 + 0x438) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar2);
        *(undefined4 *)(*(int *)(param_1 + 0x434) + uVar5 * 4) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x434);
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x438) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x438) = iVar4;
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x428);
  if (*(int *)(param_1 + 0x42c) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)(param_1 + 0x428);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x42c) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar4;
  pvVar6 = *(void **)(param_1 + 0x460);
  if (pvVar6 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x464);
    if (pvVar6 != pvVar3) {
      do {
        FUN_0043bfa0((int)pvVar6);
        pvVar6 = (void *)((int)pvVar6 + 0x60);
      } while (pvVar6 != pvVar3);
      pvVar6 = *(void **)(param_1 + 0x460);
    }
    pvVar3 = pvVar6;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x468) - (int)pvVar6) / 0x60) * 0x60)) &&
       (pvVar3 = *(void **)((int)pvVar6 + -4), 0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar3))))
    goto LAB_005665f7;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  this = *(Rect **)(param_1 + 0x454);
  if (this != (Rect *)0x0) {
    pRVar7 = *(Rect **)(param_1 + 0x458);
    if (this != pRVar7) {
      do {
        cocos2d::Rect::~Rect(this);
        this = this + 0x10;
      } while (this != pRVar7);
      this = *(Rect **)(param_1 + 0x454);
    }
    pRVar7 = this;
    if ((0xfff < (*(int *)(param_1 + 0x45c) - (int)this & 0xfffffff0U)) &&
       (pRVar7 = *(Rect **)(this + -4), (Rect *)0x1f < this + (-4 - (int)pRVar7)))
    goto LAB_005665f7;
    FUN_005adb3f(pRVar7);
    *(undefined4 *)(param_1 + 0x454) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x45c) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x434);
  if (pvVar6 != (void *)0x0) {
    pvVar3 = pvVar6;
    if ((0xfff < (*(int *)(param_1 + 0x43c) - (int)pvVar6 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar6 + -4), 0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar3))))
    goto LAB_005665f7;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x428);
  if (pvVar6 != (void *)0x0) {
    pvVar3 = pvVar6;
    if ((0xfff < (*(int *)(param_1 + 0x430) - (int)pvVar6 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar6 + -4), 0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar3)))) {
LAB_005665f7:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00566600(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x434);
  if (*(int *)(param_1 + 0x438) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x434) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x434);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x438) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x438) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x428);
  if (*(int *)(param_1 + 0x42c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x428);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x42c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar2;
  return;
}


void __fastcall FUN_005666b0(int *param_1)

{
  Rect *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  Scale9Sprite *pSVar7;
  Texture2D *pTVar8;
  Ref *pRVar9;
  void *pvVar10;
  Rect *pRVar11;
  int iVar12;
  void *in_stack_ffffff30;
  Rect local_94 [16];
  Size local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  Texture2D *local_6c;
  int local_68;
  uint local_64;
  Scale9Sprite *local_60;
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
  puStack_c = &LAB_005c84f6;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  pRVar1 = (Rect *)param_1[0x116];
  pRVar11 = (Rect *)param_1[0x115];
  if (pRVar11 != pRVar1) {
    do {
      cocos2d::Rect::~Rect(pRVar11);
      pRVar11 = pRVar11 + 0x10;
    } while (pRVar11 != pRVar1);
    pRVar11 = (Rect *)param_1[0x115];
  }
  param_1[0x116] = (int)pRVar11;
  iVar12 = param_1[0x118];
  local_64 = 0;
  iVar2 = param_1[0x119] - iVar12 >> 0x1f;
  if ((param_1[0x119] - iVar12) / 0x60 + iVar2 != iVar2) {
    local_68 = 0;
    do {
      iVar2 = param_1[0x112];
      iVar3 = param_1[0x111];
      iVar6 = (iVar3 + iVar2) * local_64;
      iVar4 = param_1[0xa9];
      if (*(char *)(local_68 + 0x5e + iVar12) == '\0') {
        if (param_1[0x114] == local_64) {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          FUN_00402690(local_44,"DMenuButton_Depressed.png",0x19);
          local_8 = 1;
          pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_44);
          local_8 = 0xffffffff;
          local_60 = pSVar7;
          if (0xf < local_30) {
            pvVar10 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar10 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
LAB_00566bd2:
              local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar10);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        else {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          FUN_00402690(local_5c,"DMenuButton_Undepressed.png",0x1b);
          local_8 = 2;
          pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_5c);
          local_8 = 0xffffffff;
          local_60 = pSVar7;
          if (0xf < local_48) {
            pvVar10 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar10 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) goto LAB_00566bd2;
            FUN_005adb3f(pvVar10);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        }
      }
      else {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"DMenuButton_Greyed.png",0x16);
        local_8 = 0;
        pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
        local_8 = 0xffffffff;
        local_60 = pSVar7;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00566bd2;
          FUN_005adb3f(pvVar10);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      local_6c = (Texture2D *)(**(code **)(*(int *)(pSVar7 + 0x278) + 0xc))();
      pTVar8 = this_0065b3fc;
      if (this_0065b3fc == (Texture2D *)0x0) {
        pTVar8 = (Texture2D *)FUN_005adb0f(0x10);
        this_0065b3fc = pTVar8;
        *(undefined4 *)(pTVar8 + 4) = 0x2600;
        *(undefined4 *)pTVar8 = 0x2600;
        *(undefined4 *)(pTVar8 + 8) = 0x812f;
        *(undefined4 *)(pTVar8 + 0xc) = 0x812f;
      }
      cocos2d::Texture2D::setTexParameters(local_6c,(_TexParams *)pTVar8);
      iVar12 = *(int *)pSVar7;
      cocos2d::Size::Size(local_84,(float)param_1[0x110],(float)param_1[0x111]);
      (**(code **)(iVar12 + 0xac))();
      pSVar7 = local_60;
      local_74 = 0;
      local_70 = 0;
      local_8 = 3;
      (**(code **)(*(int *)local_60 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)pSVar7 + 0x48))();
      (**(code **)(*param_1 + 0x10c))();
      FUN_00591e00(&stack0xffffff30,"`%c%s");
      pRVar9 = FUN_0055cb00((Node)0x0,in_stack_ffffff30);
      local_7c = 0x3f000000;
      local_78 = 0x3f000000;
      local_8 = 4;
      local_60 = (Scale9Sprite *)pRVar9;
      (**(code **)(*(int *)pRVar9 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)pRVar9 + 0x48))();
      pSVar7 = local_60;
      in_stack_ffffff30 = (void *)0x566ac3;
      (**(code **)(*param_1 + 0x108))();
      puVar5 = (undefined4 *)param_1[0x10b];
      if ((undefined4 *)param_1[0x10c] == puVar5) {
        FUN_00414080(param_1 + 0x10a,puVar5,&local_60);
      }
      else {
        *puVar5 = pSVar7;
        param_1[0x10b] = param_1[0x10b] + 4;
      }
      pRVar11 = (Rect *)cocos2d::Rect::Rect(local_94,0.0,
                                            (float)((param_1[0xa9] - param_1[0x111]) -
                                                   (((iVar4 - iVar6) - iVar3) - iVar2)),
                                            (float)param_1[0x110],(float)param_1[0x111]);
      local_8 = 5;
      pRVar1 = (Rect *)param_1[0x116];
      if ((Rect *)param_1[0x117] == pRVar1) {
        FUN_00566fa0(param_1 + 0x115,pRVar1,pRVar11);
      }
      else {
        cocos2d::Rect::Rect(pRVar1,pRVar11);
        param_1[0x116] = param_1[0x116] + 0x10;
      }
      local_8 = 0xffffffff;
      cocos2d::Rect::~Rect(local_94);
      iVar12 = param_1[0x118];
      local_68 = local_68 + 0x60;
      local_64 = local_64 + 1;
    } while (local_64 < (uint)((param_1[0x119] - iVar12) / 0x60));
  }
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __thiscall FUN_00566be0(void *this,float param_1,float param_2)

{
  float *pfVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pfVar1 = *(float **)((int)this + 0x454);
  uVar3 = 0;
  uVar4 = *(int *)((int)this + 0x458) - (int)pfVar1 >> 4;
  uVar5 = 0xffffffff;
  if (uVar4 != 0) {
    pfVar1 = pfVar1 + 1;
    do {
      if ((((pfVar1[-1] <= param_1) && (param_1 <= pfVar1[1] + pfVar1[-1])) && (*pfVar1 <= param_2))
         && (uVar5 = uVar3, param_2 <= pfVar1[2] + *pfVar1)) break;
      uVar3 = uVar3 + 1;
      pfVar1 = pfVar1 + 4;
      uVar5 = 0xffffffff;
    } while (uVar3 < uVar4);
  }
  uVar2 = (uint3)((uint)pfVar1 >> 8);
  if (uVar5 == *(uint *)((int)this + 0x450)) {
    return (uint)uVar2 << 8;
  }
  *(uint *)((int)this + 0x450) = uVar5;
  return CONCAT31(uVar2,1);
}


void __fastcall FUN_00566c70(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = param_1 + 0x118;
  bVar3 = FUN_004de400(param_1[0xfd],piVar1);
  if (bVar3) {
    iVar2 = param_1[0x119];
    iVar4 = *piVar1;
    if (iVar4 != iVar2) {
      do {
        FUN_0043bfa0(iVar4);
        iVar4 = iVar4 + 0x60;
      } while (iVar4 != iVar2);
      iVar4 = *piVar1;
    }
    param_1[0x119] = iVar4;
    FUN_004de1e0(param_1[0xfd],piVar1);
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


void __thiscall FUN_00566ce0(void *this,float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_00566be0(this,param_1,param_2);
  if ((char)iVar2 != '\0') {
    (**(code **)(*extraout_ECX + 0x294))(uVar1,this);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00566d50(void *this,float param_1,float param_2)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00566be0(this,param_1,param_2);
  if (-1 < *(int *)((int)this + 0x450)) {
    FUN_00591070(&DAT_005cdc70,"pressed button %d");
    **(undefined4 **)((int)this + 0x44c) =
         *(undefined4 *)(*(int *)((int)this + 0x450) * 0x60 + *(int *)((int)this + 0x460));
    FUN_004dd240(*(undefined4 *)((int)this + 0x3f4));
    iVar4 = -1;
    iVar3 = 0x2a;
    iVar2 = DAT_0065b3d4;
    this_00 = (void *)FUN_00402f60();
    FUN_00557fb0(this_00,iVar2,iVar3,iVar4);
  }
  *(undefined4 *)((int)this + 0x450) = 0xffffffff;
  (**(code **)(*(int *)this + 0x294))(uVar1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00566e20(int *param_1)

{
  param_1[0x114] = -1;
                    // WARNING: Could not recover jumptable at 0x00566e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


void __fastcall FUN_00566e40(int *param_1)

{
  Rect *this;
  Rect *pRVar1;
  
  this = (Rect *)*param_1;
  if (this != (Rect *)0x0) {
    pRVar1 = (Rect *)param_1[1];
    if (this != pRVar1) {
      do {
        cocos2d::Rect::~Rect(this);
        this = this + 0x10;
      } while (this != pRVar1);
      this = (Rect *)*param_1;
    }
    pRVar1 = this;
    if ((0xfff < (param_1[2] - (int)this & 0xfffffff0U)) &&
       (pRVar1 = *(Rect **)(this + -4), (Rect *)0x1f < this + (-4 - (int)pRVar1))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __fastcall FUN_00566eb0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar1 != pvVar2) {
      do {
        FUN_0043bfa0((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0x60);
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x60) * 0x60)) &&
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


void FUN_00566f30(Rect *param_1,Rect *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    cocos2d::Rect::~Rect(param_1);
  }
  return;
}


void FUN_00566f60(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x10)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


int __thiscall FUN_00566fa0(void *this,Rect *param_1,Rect *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Rect *pRVar5;
  Rect *pRVar6;
  uint uVar7;
  int iVar8;
  Rect *pRVar9;
  Rect *pRVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8538;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = *(int *)this;
  iVar2 = *(int *)((int)this + 4) - iVar8 >> 4;
  if (iVar2 == 0xfffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar2 + 1;
  uVar7 = *(int *)((int)this + 8) - iVar8 >> 4;
  uVar3 = uVar1;
  if ((uVar7 <= 0xfffffff - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 << 4;
  if (uVar3 < 0x10000000) {
    if (0xfff < uVar7) goto LAB_0056703a;
    if (uVar7 == 0) {
      pRVar5 = (Rect *)0x0;
    }
    else {
      pRVar5 = (Rect *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0056703a:
    uVar4 = uVar7 + 0x23;
    if (uVar4 <= uVar7) {
      uVar4 = 0xffffffff;
    }
    iVar2 = FUN_005adb0f(uVar4);
    if (iVar2 == 0) goto LAB_0056705f;
    pRVar5 = (Rect *)(iVar2 + 0x23U & 0xffffffe0);
    *(int *)(pRVar5 + -4) = iVar2;
  }
  iVar8 = ((int)param_1 - iVar8 >> 4) * 0x10;
  pRVar6 = pRVar5 + iVar8;
  local_8 = 0;
  cocos2d::Rect::Rect(pRVar6,param_2);
  pRVar10 = *(Rect **)((int)this + 4);
  if (param_1 == pRVar10) {
    pRVar6 = *(Rect **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pRVar9 = pRVar5;
    for (; pRVar6 != pRVar10; pRVar6 = pRVar6 + 0x10) {
      cocos2d::Rect::Rect(pRVar9,pRVar6);
      pRVar9 = pRVar9 + 0x10;
    }
  }
  else {
    pRVar10 = *(Rect **)this;
    local_8._0_1_ = 2;
    pRVar9 = pRVar5;
    for (; pRVar10 != param_1; pRVar10 = pRVar10 + 0x10) {
      cocos2d::Rect::Rect(pRVar9,pRVar10);
      pRVar9 = pRVar9 + 0x10;
    }
    pRVar10 = *(Rect **)((int)this + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    for (; pRVar6 = pRVar6 + 0x10, param_1 != pRVar10; param_1 = param_1 + 0x10) {
      cocos2d::Rect::Rect(pRVar6,param_1);
    }
  }
  pRVar10 = *(Rect **)this;
  if (pRVar10 != (Rect *)0x0) {
    pRVar6 = *(Rect **)((int)this + 4);
    if (pRVar10 != pRVar6) {
      do {
        cocos2d::Rect::~Rect(pRVar10);
        pRVar10 = pRVar10 + 0x10;
      } while (pRVar10 != pRVar6);
      pRVar10 = *(Rect **)this;
    }
    pRVar6 = pRVar10;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pRVar10 & 0xfffffff0U)) &&
       (pRVar6 = *(Rect **)(pRVar10 + -4), (Rect *)0x1f < pRVar10 + (-4 - (int)pRVar6))) {
LAB_0056705f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar6);
  }
  *(Rect **)this = pRVar5;
  *(Rect **)((int)this + 4) = pRVar5 + uVar1 * 0x10;
  *(Rect **)((int)this + 8) = pRVar5 + uVar3 * 0x10;
  ExceptionList = local_10;
  return *(int *)this + iVar8;
}


void __fastcall FUN_00567200(undefined4 *param_1)

{
  Rect *pRVar1;
  Rect *this;
  
  pRVar1 = (Rect *)param_1[1];
  for (this = (Rect *)*param_1; this != pRVar1; this = this + 0x10) {
    cocos2d::Rect::~Rect(this);
  }
  return;
}


Node * __thiscall FUN_00567230(void *this,byte param_1)

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
  *(undefined ***)this = UI_DockVisualisation::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
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


void __fastcall FUN_005672d0(int *param_1)

{
  int iVar1;
  uint in_stack_ffffffdc;
  void *pvVar2;
  
  (**(code **)(*param_1 + 0x290))();
  pvVar2 = (void *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,"DockingReticule.png",0x13);
  iVar1 = FUN_00591910(pvVar2);
  param_1[0x10a] = iVar1;
  (**(code **)(*param_1 + 0x10c))();
  *(undefined1 *)param_1[0xa2] = 1;
  return;
}


Node * __thiscall FUN_00567330(void *this,byte param_1)

{
  FUN_00567360(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00567360(Node *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_EngPanel::vftable;
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x42c);
  if (*(int *)(param_1 + 0x430) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x42c) + uVar6 * 4) = 0;
      }
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x42c);
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x430) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x430) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x43c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x438);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x43c) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x43c) = iVar5;
  pvVar2 = *(void **)(param_1 + 0x438);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x440) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0056750a;
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x42c);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x434) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_0056750a:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00567520(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x42c);
  if (*(int *)(param_1 + 0x430) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x42c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x430) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x430) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x43c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x438);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x43c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x43c) = iVar2;
  return;
}


undefined1 FUN_005675d0(void)

{
  return 0;
}


void __fastcall FUN_005675f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  Scale9Sprite *pSVar7;
  Texture2D *pTVar8;
  Ref *extraout_ECX;
  void *pvVar9;
  undefined4 ****ppppuVar10;
  uint uVar11;
  int *piVar12;
  Ref *pRVar13;
  Ref *pRVar14;
  int *piVar15;
  bool bVar16;
  uint in_stack_ffffff04;
  Ref *pRVar17;
  void *in_stack_ffffff24;
  char *pcVar18;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  Ref *local_94;
  int *local_90;
  int *local_8c;
  Ref *local_88;
  undefined4 local_84;
  Ref *local_80;
  Ref *local_7c;
  Ref *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c85b8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_1;
  (**(code **)(*param_1 + 0x290))();
  local_84 = *(Ref **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
  local_a0 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  FUN_00591e00((undefined1 *)local_74,"%s_%s.png");
  local_8 = 0;
  pRVar17 = (Ref *)0x567684;
  FUN_004024e0(&stack0xffffff24,local_74);
  local_80 = (Ref *)FUN_00591910(in_stack_ffffff24);
  iVar1 = *param_1;
  (**(code **)(*(int *)local_80 + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  puVar2 = (undefined4 *)param_1[0x10f];
  local_98 = param_1 + 0x10e;
  if ((undefined4 *)param_1[0x110] == puVar2) {
    FUN_00414080(local_98,puVar2,&local_80);
  }
  else {
    *puVar2 = local_80;
    param_1[0x10f] = param_1[0x10f] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  local_78 = (Ref *)0x0;
  do {
    pRVar13 = local_78;
    pRVar14 = (Ref *)0x0;
    local_90 = *(int **)(DAT_0065b5cc + 0xd0);
    piVar12 = *(int **)(local_90[0x95] + 0x118);
    local_7c = (Ref *)((*(int *)(local_90[0x95] + 0x11c) - (int)piVar12) / 0xc);
    piVar15 = local_98;
    if (local_7c != (Ref *)0x0) {
      do {
        if ((Ref *)*piVar12 == local_78) {
          cVar4 = FUN_0050be90(local_90,(int)local_78);
          piVar15 = local_98;
          if (CONCAT31(extraout_var_00,cVar4) != 5) {
            FUN_00591e00((undefined1 *)local_5c,"%s_%s_%s.png");
            local_8 = CONCAT31(local_8._1_3_,1);
            pRVar17 = extraout_ECX;
            FUN_004024e0(&stack0xffffff1c,local_5c);
            local_80 = (Ref *)FUN_00591910(pRVar17);
            piVar15 = local_98;
            puVar2 = (undefined4 *)local_98[1];
            local_7c = local_80;
            if ((undefined4 *)local_98[2] == puVar2) {
              FUN_00414080(local_98,puVar2,&local_80);
            }
            else {
              *puVar2 = local_80;
              local_98[1] = local_98[1] + 4;
            }
            (**(code **)(*local_8c + 0x108))();
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_48) {
              pvVar9 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar9 = *(void **)((int)local_5c[0] + -4),
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_00567f52;
              FUN_005adb3f(pvVar9);
            }
          }
          break;
        }
        pRVar14 = pRVar14 + 1;
        piVar12 = piVar12 + 3;
      } while (pRVar14 < local_7c);
    }
    local_78 = pRVar13 + 1;
  } while ((int)local_78 < 5);
  pRVar13 = *(Ref **)(local_84 + 0x13c);
  local_94 = *(Ref **)(local_84 + 0x140);
  local_84 = pRVar13;
  if (pRVar13 != local_94) {
    do {
      uVar11 = 0;
      local_7c = *(Ref **)(local_a0 + 0x40);
      uVar5 = (int)local_7c - *(int *)(local_a0 + 0x3c) >> 2;
      if (uVar5 != 0) {
        local_80 = *(Ref **)(pRVar13 + 8);
        piVar12 = *(int **)(local_a0 + 0x3c);
        local_7c = local_7c + -*(int *)(local_a0 + 0x3c);
        do {
          piVar15 = local_98;
          if (*(Ref **)(*piVar12 + 0x10) == local_80) {
            piVar12 = *(int **)(*(int *)(local_a0 + 0x3c) + uVar11 * 4);
            goto LAB_005677e4;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar11 < uVar5);
      }
      piVar12 = (int *)0x0;
LAB_005677e4:
      local_84 = pRVar13;
      cVar4 = FUN_0050be90(*(void **)(DAT_0065b5cc + 0xd0),*(int *)(pRVar13 + 0xc));
      if (CONCAT31(extraout_var,cVar4) != 5) {
        local_7c = (Ref *)0x0;
        local_34 = 0xf00000000;
        local_44 = (undefined4 ***)((uint)local_44 & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_80 = (Ref *)FUN_00591e00((undefined1 *)local_5c,"EngModule_%s%%s.png");
        if ((Ref *)&local_44 != local_80) {
          FUN_00401b20((int *)&local_44);
          local_44 = *(undefined4 ****)local_80;
          iStack_40 = *(int *)(local_80 + 4);
          iStack_3c = *(int *)(local_80 + 8);
          iStack_38 = *(int *)(local_80 + 0xc);
          local_34 = *(undefined8 *)(local_80 + 0x10);
          *(int *)(local_80 + 0x10) = 0;
          *(int *)(local_80 + 0x14) = 0xf;
          *local_80 = (Ref)0x0;
        }
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_00567f52;
          FUN_005adb3f(pvVar9);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if ((*(int *)(local_84 + 8) == -1) ||
           (*(int *)(local_84 + 8) != *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e4))) {
          if (piVar12 != (int *)0x0) {
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            local_8 = CONCAT31(local_8._1_3_,3);
            if (*(char *)((int)piVar12 + 99) == '\0') {
              uVar5 = 0xd;
              pcVar18 = "_Disconnected";
LAB_00567a59:
              FUN_00402690(local_2c,pcVar18,uVar5);
            }
            else {
              cVar4 = (**(code **)(*piVar12 + 0x14))();
              if (cVar4 != '\0') {
                uVar5 = 10;
                pcVar18 = "_Destroyed";
                goto LAB_00567a59;
              }
              cVar4 = (**(code **)(*piVar12 + 0x18))();
              if (cVar4 != '\0') {
                uVar5 = 8;
                pcVar18 = "_Damaged";
                goto LAB_00567a59;
              }
            }
            ppppuVar10 = &local_44;
            if (0xf < local_34._4_4_) {
              ppppuVar10 = (undefined4 ****)local_44;
            }
            FUN_00591e00(&stack0xffffff1c,ppppuVar10);
            local_90 = (int *)FUN_00591910(pRVar17);
            local_8 = CONCAT31(local_8._1_3_,2);
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00567f52;
              FUN_005adb3f(pvVar9);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            goto LAB_00567adf;
          }
          ppppuVar10 = &local_44;
          if (0xf < local_34._4_4_) {
            ppppuVar10 = (undefined4 ****)local_44;
          }
          FUN_00591e00(&stack0xffffff1c,ppppuVar10);
          local_90 = (int *)FUN_00591910(pRVar17);
LAB_00567b5f:
          pRVar17 = (Ref *)((uint)pRVar17 & 0xffffff00);
          FUN_00402690(&stack0xffffff1c,"`2empty",7);
        }
        else {
          ppppuVar10 = &local_44;
          if (0xf < local_34._4_4_) {
            ppppuVar10 = (undefined4 ****)local_44;
          }
          FUN_00591e00(&stack0xffffff1c,ppppuVar10);
          local_90 = (int *)FUN_00591910(pRVar17);
LAB_00567adf:
          if (piVar12 == (int *)0x0) goto LAB_00567b5f;
          FUN_00591e00(&stack0xffffff1c,(&PTR_s_Unknown_005e0b28)[*(int *)(piVar12[2] + 4)]);
          local_7c = (Ref *)FUN_00591910(pRVar17);
          FUN_00591e00(&stack0xffffff1c,&DAT_00627800);
        }
        local_78 = FUN_0055cb00((Node)0x0,pRVar17);
        piVar12 = local_90;
        local_8._0_1_ = 4;
        (**(code **)(*local_90 + 0xa0))();
        local_8 = CONCAT31(local_8._1_3_,2);
        local_80 = local_84 + 0x10;
        (**(code **)(*piVar12 + 0x4c))();
        puVar2 = (undefined4 *)piVar15[1];
        local_9c = piVar12;
        if ((undefined4 *)piVar15[2] == puVar2) {
          FUN_00414080(piVar15,puVar2,&local_9c);
        }
        else {
          *puVar2 = piVar12;
          piVar15[1] = piVar15[1] + 4;
        }
        (**(code **)(*local_8c + 0x108))();
        pRVar13 = local_78;
        if (local_78 != (Ref *)0x0) {
          local_8._0_1_ = 5;
          (**(code **)(*(int *)local_78 + 0xa0))();
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar1 = *(int *)pRVar13;
          iVar6 = (**(code **)(*local_90 + 0xb0))();
          local_9c = *(int **)(iVar6 + 4);
          local_88 = *(Ref **)(local_84 + 0x14);
          (**(code **)(*local_90 + 0xb0))();
          (**(code **)(iVar1 + 0x48))();
          piVar3 = local_8c;
          piVar12 = (int *)local_8c[0x10c];
          if ((int *)local_8c[0x10d] == piVar12) {
            FUN_00414080(local_8c + 0x10b,piVar12,&local_78);
          }
          else {
            *piVar12 = (int)local_78;
            local_8c[0x10c] = local_8c[0x10c] + 4;
          }
          pRVar17 = (Ref *)0x567d01;
          (**(code **)(*piVar3 + 0x108))();
        }
        pRVar13 = local_7c;
        if (local_7c != (Ref *)0x0) {
          local_a8 = 0x3f000000;
          local_a4 = 0x3f000000;
          local_8._0_1_ = 6;
          (**(code **)(*(int *)local_7c + 0xa0))();
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar1 = *(int *)pRVar13;
          iVar6 = (**(code **)(*local_90 + 0xb0))();
          local_88 = (Ref *)(*(float *)(iVar6 + 4) / 3.0);
          local_9c = *(int **)(local_84 + 0x14);
          (**(code **)(*local_90 + 0xb0))();
          (**(code **)(iVar1 + 0x48))();
          pRVar17 = local_7c;
          (**(code **)(*(int *)local_7c + 0x40))();
          puVar2 = (undefined4 *)piVar15[1];
          local_88 = pRVar17;
          if ((undefined4 *)piVar15[2] == puVar2) {
            FUN_00414080(piVar15,puVar2,&local_88);
          }
          else {
            *puVar2 = pRVar17;
            piVar15[1] = piVar15[1] + 4;
          }
          (**(code **)(*local_8c + 0x108))();
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_34._4_4_) {
          ppppuVar10 = (undefined4 ****)local_44;
          if ((0xfff < local_34._4_4_ + 1) &&
             (ppppuVar10 = (undefined4 ****)local_44[-1],
             0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar10)))) goto LAB_00567f52;
          FUN_005adb3f(ppppuVar10);
        }
        local_34 = 0xf00000000;
        local_44 = (undefined4 ***)((uint)local_44 & 0xffffff00);
      }
      pRVar13 = local_84 + 0x18;
      local_84 = pRVar13;
    } while (pRVar13 != local_94);
  }
  iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
  if ((*(int *)(iVar1 + 0xd4) == 3) && (*(int *)(iVar1 + 0xf8) == 2)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  piVar12 = local_8c;
  if ((bVar16) && (*(int *)(iVar1 + 0x178) != 0)) {
    iVar6 = *(int *)(*(int *)(iVar1 + 0x178) + 0x254);
    bVar16 = false;
    if (iVar6 != 0) {
      bVar16 = *(int *)(iVar6 + 0x158) == 1;
    }
    if (bVar16) {
      if ((*(float *)(*(int *)(iVar1 + 0x254) + 0x148) == 0.0) &&
         (*(float *)(*(int *)(iVar1 + 0x254) + 0x14c) == 0.0)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (!bVar16) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"ToolTip.png",0xb);
        local_8._0_1_ = 7;
        pSVar7 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
        local_8 = (uint)local_8._1_3_ << 8;
        local_78 = (Ref *)pSVar7;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
LAB_00567f52:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        (**(code **)(*(int *)pSVar7 + 0x4c))();
        local_a8 = 0;
        local_a4 = 0;
        local_8._0_1_ = 8;
        (**(code **)(*(int *)pSVar7 + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        iVar1 = *(int *)pSVar7;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),'\0',0xbf,0xff);
        (**(code **)(iVar1 + 0x25c))();
        pRVar17 = local_78;
        local_94 = (Ref *)(**(code **)(*(int *)(local_78 + 0x278) + 0xc))();
        pTVar8 = this_0065b3fc;
        if (this_0065b3fc == (Texture2D *)0x0) {
          pTVar8 = (Texture2D *)FUN_005adb0f(0x10);
          this_0065b3fc = pTVar8;
          *(undefined4 *)(pTVar8 + 4) = 0x2600;
          *(undefined4 *)pTVar8 = 0x2600;
          *(undefined4 *)(pTVar8 + 8) = 0x812f;
          *(undefined4 *)(pTVar8 + 0xc) = 0x812f;
        }
        cocos2d::Texture2D::setTexParameters((Texture2D *)local_94,(_TexParams *)pTVar8);
        iVar1 = *(int *)pRVar17;
        cocos2d::Size::Size((Size *)&local_a8,160.0,27.0);
        (**(code **)(iVar1 + 0xac))();
        piVar12 = (int *)piVar15[1];
        local_94 = local_78;
        if ((int *)piVar15[2] == piVar12) {
          FUN_00414080(piVar15,piVar12,&local_94);
        }
        else {
          *piVar12 = (int)local_78;
          piVar15[1] = piVar15[1] + 4;
        }
        piVar12 = local_8c;
        (**(code **)(*local_8c + 0x108))();
        pvVar9 = (void *)(in_stack_ffffff04 & 0xffffff00);
        FUN_00402690(&stack0xffffff04,"`%Space Station cranes are available to move modules around."
                     ,0x3c);
        local_7c = FUN_0055ca10(0x9c,0x17,(Node)0x0,pvVar9);
        iVar1 = *(int *)local_7c;
        (**(code **)(*(int *)local_78 + 0x74))();
        (**(code **)(*(int *)local_78 + 0x6c))();
        (**(code **)(iVar1 + 0x48))();
        puVar2 = (undefined4 *)piVar12[0x10c];
        if ((undefined4 *)piVar12[0x10d] == puVar2) {
          FUN_00414080(piVar12 + 0x10b,puVar2,&local_7c);
          (**(code **)(*piVar12 + 0x108))();
        }
        else {
          *puVar2 = local_7c;
          piVar12[0x10c] = piVar12[0x10c] + 4;
          (**(code **)(*piVar12 + 0x108))();
        }
      }
    }
  }
  *(undefined1 *)piVar12[0xa2] = 1;
  piVar12[0x10a] = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e4);
  if (0xf < local_60) {
    pvVar9 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar9 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
