#include "../ois.exe.h"


// public: __thiscall ShipClass::ShipClass(enum EVesselType::VesselType)

ShipClass * __thiscall ShipClass::ShipClass(ShipClass *this,VesselType param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c412b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (ShipClass)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0xf;
  this[0x60] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0xf;
  this[0x78] = (ShipClass)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  this[0x90] = (ShipClass)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0xf;
  this[0xa8] = (ShipClass)0x0;
  local_8 = 7;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x44c;
  this[0xd0] = (ShipClass)0x43;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0xd1),'\0','c','2');
  *(undefined2 *)(this + 0xd4) = 0x3032;
  *(undefined4 *)(this + 0xd8) = 10000;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0xdc),0xff,'\0','\0');
  *(undefined2 *)(this + 0xdf) = 1;
  *(undefined4 *)(this + 0xe4) = 6;
  *(undefined4 *)(this + 0xe8) = 6;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0xf;
  this[0xec] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f99999a;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0xf;
  this[0x124] = (ShipClass)0x0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(VesselType *)(this + 0x158) = param_1;
  *(undefined4 *)(this + 0x15c) = 8;
  *(undefined4 *)(this + 0x160) = 0xc;
  *(undefined4 *)(this + 0x164) = 100;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  ExceptionList = local_10;
  return this;
}


// public: class ShipConfiguration * __thiscall ShipClass::getShipConfiguration(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipConfiguration * __thiscall ShipClass::getShipConfiguration(ShipClass *this,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  ShipConfiguration *pSVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(this + 0x184);
  uVar6 = *(int *)(this + 0x188) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar8 = *(ShipConfiguration **)(iVar1 + uVar7 * 4);
        goto LAB_0051aa78;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pSVar8 = (ShipConfiguration *)0x0;
LAB_0051aa78:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pSVar8;
}


// public: void __thiscall ShipClass::unpackAndAddConfiguration(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall
ShipClass::unpackAndAddConfiguration
          (ShipClass *this,char *param_2,undefined4 param_3,undefined4 param_4,char *param_5,
          undefined8 param_6)

{
  bool bVar1;
  char *pcVar2;
  basic_string<> *pbVar3;
  char *pcVar4;
  ShipModuleClass *pSVar5;
  int iVar6;
  uint uVar7;
  basic_string<> *pbVar8;
  nothrow_t *pnVar9;
  uint unaff_EDI;
  basic_string<> *pbVar10;
  basic_string<> abStack_84 [8];
  undefined4 uStack_7c;
  basic_string<> *pbStack_78;
  AnimationFrames **ppAVar11;
  basic_string<> *local_5c;
  ShipClass *local_58;
  basic_string<> *local_54;
  int local_50;
  basic_string<> *local_48;
  int local_44;
  basic_string<> *local_3c;
  basic_string<> *local_38;
  basic_string<> *local_34;
  ShipModuleClass *local_30;
  char *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  int local_1c;
  undefined4 uStack_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c4170;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_58 = this;
  local_14 = pcVar2;
  if ((uint)param_6 != 0) {
    pbVar3 = operator_new(0x40);
    local_34 = pbVar3 + 0x18;
    *(undefined4 *)(pbVar3 + 0x10) = 0;
    *(undefined4 *)(pbVar3 + 0x14) = 0xf;
    *pbVar3 = (basic_string<>)0x0;
    *(undefined4 *)(pbVar3 + 0x28) = 0;
    *(undefined4 *)(pbVar3 + 0x2c) = 0xf;
    *local_34 = (basic_string<>)0x0;
    *(undefined2 *)(pbVar3 + 0x30) = 0;
    *(undefined4 *)(pbVar3 + 0x34) = 0;
    *(undefined4 *)(pbVar3 + 0x38) = 0;
    *(undefined4 *)(pbVar3 + 0x3c) = 0;
    pcVar4 = (char *)&param_2;
    if (0xf < param_6._4_4_) {
      pcVar4 = param_2;
    }
    local_5c = pbVar3;
    local_3c = pbVar3;
    if (*pcVar4 == '$') {
      pbVar3[0x30] = (basic_string<>)0x1;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (char *)((uint)local_2c & 0xffffff00);
      if ((uint)param_6 == 0) {
                    // WARNING: Subroutine does not return
        std::_String_val<>::_Xran();
      }
      uVar7 = (uint)param_6;
      if ((uint)param_6 - 1 < (uint)param_6) {
        uVar7 = (uint)param_6 - 1;
      }
      pcVar4 = (char *)&param_2;
      if (0xf < param_6._4_4_) {
        pcVar4 = param_2;
      }
      pbStack_78 = (basic_string<> *)0x51aba5;
      std::basic_string<>::assign((basic_string<> *)&local_2c,pcVar4 + 1,uVar7);
      word::~word((word *)&param_2);
      param_2 = local_2c;
      param_3 = uStack_28;
      param_4 = uStack_24;
      param_5 = pcStack_20;
      param_6 = CONCAT44(uStack_18,local_1c);
    }
    std::basic_string<>::basic_string<>(abStack_84,(basic_string<> *)&param_2);
    splitStringBy();
    local_8._0_1_ = 1;
    std::basic_string<>::basic_string<>(abStack_84,local_54);
    splitStringBy();
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar6 = local_44 - (int)local_48 >> 0x1f;
    if (((local_44 - (int)local_48) / 0x18 + iVar6 != iVar6) && (local_3c != local_48)) {
      pbVar8 = local_48;
      if (0xf < *(uint *)(local_48 + 0x14)) {
        pbVar8 = *(basic_string<> **)local_48;
      }
      pbStack_78 = (basic_string<> *)0x51ac30;
      std::basic_string<>::assign(local_3c,(char *)pbVar8,*(uint *)(local_48 + 0x10));
    }
    pbVar8 = local_48;
    if (1 < (uint)((local_44 - (int)local_48) / 0x18)) {
      pbStack_78 = local_48 + 0x18;
      local_38 = pbStack_78;
      if (0xf < *(uint *)(local_48 + 0x2c)) {
        local_38 = *(basic_string<> **)pbStack_78;
        pbStack_78 = *(basic_string<> **)pbStack_78;
      }
      uStack_7c = 0x51ac86;
      std::transform<>();
      pbVar8 = local_48;
      pbStack_78 = (basic_string<> *)0x51aca7;
      bVar1 = std::_Traits_equal<>("TRUE",4,pcVar2,unaff_EDI);
      if (bVar1) {
        *(AnimationFrames *)(local_3c + 0x31) = (AnimationFrames)0x1;
        pbVar8 = local_48;
      }
    }
    if ((2 < (uint)((local_44 - (int)pbVar8) / 0x18)) &&
       (pbVar10 = pbVar8 + 0x30, local_34 != pbVar10)) {
      if (0xf < *(uint *)(pbVar8 + 0x44)) {
        pbVar10 = *(basic_string<> **)pbVar10;
      }
      pbStack_78 = (basic_string<> *)0x51acf0;
      std::basic_string<>::assign(local_34,(char *)pbVar10,*(uint *)(pbVar8 + 0x40));
    }
    local_38 = (basic_string<> *)&DAT_00000001;
    if (1 < (uint)((local_50 - (int)local_54) / 0x18)) {
      local_34 = (basic_string<> *)0x18;
      do {
        std::basic_string<>::basic_string<>(abStack_84,(basic_string<> *)(local_34 + (int)local_54))
        ;
        splitStringBy();
        local_8 = CONCAT31(local_8._1_3_,3);
        if ((local_1c - (int)pcStack_20) / 0x18 == 1) {
          std::basic_string<>::basic_string<>(abStack_84,local_54 + (int)local_34);
          pSVar5 = GameData::getModuleClassWithIdentifier();
          if (pSVar5 != (ShipModuleClass *)0x0) {
            local_30 = operator_new(8);
            *(undefined4 *)local_30 = 0xffffffff;
            *(ShipModuleClass **)(local_30 + 4) = pSVar5;
            ppAVar11 = *(AnimationFrames ***)(pbVar3 + 0x38);
            if (*(AnimationFrames ***)(pbVar3 + 0x3c) == ppAVar11) {
LAB_0051ae06:
              pbStack_78 = (basic_string<> *)0x51ae0d;
              std::vector<>::_Emplace_reallocate<>
                        ((vector<> *)(pbVar3 + 0x34),ppAVar11,(AnimationFrames **)&local_30);
            }
            else {
              *ppAVar11 = (AnimationFrames *)local_30;
              *(int *)(pbVar3 + 0x38) = *(int *)(pbVar3 + 0x38) + 4;
            }
          }
        }
        else {
          std::basic_string<>::basic_string<>(abStack_84,(basic_string<> *)(pcStack_20 + 0x18));
          local_30 = GameData::getModuleClassWithIdentifier();
          if (local_30 != (ShipModuleClass *)0x0) {
            pSVar5 = operator_new(8);
            pcVar2 = pcStack_20;
            if (0xf < *(uint *)(pcStack_20 + 0x14)) {
              pcVar2 = *(char **)pcStack_20;
            }
            iVar6 = atoi(pcVar2);
            *(int *)pSVar5 = iVar6;
            *(ShipModuleClass **)(pSVar5 + 4) = local_30;
            ppAVar11 = *(AnimationFrames ***)(pbVar3 + 0x38);
            local_30 = pSVar5;
            if (*(AnimationFrames ***)(pbVar3 + 0x3c) == ppAVar11) goto LAB_0051ae06;
            *ppAVar11 = (AnimationFrames *)pSVar5;
            *(int *)(pbVar3 + 0x38) = *(int *)(pbVar3 + 0x38) + 4;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        std::vector<>::_Tidy((vector<> *)&pcStack_20);
        local_38 = local_38 + 1;
        local_34 = local_34 + 0x18;
      } while (local_38 < (basic_string<> *)((local_50 - (int)local_54) / 0x18));
    }
    ppAVar11 = *(AnimationFrames ***)(local_58 + 0x188);
    if (*(AnimationFrames ***)(local_58 + 0x18c) == ppAVar11) {
      pbStack_78 = (basic_string<> *)0x51ae6b;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(local_58 + 0x184),ppAVar11,(AnimationFrames **)&local_5c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)local_3c;
      *(int *)(local_58 + 0x188) = *(int *)(local_58 + 0x188) + 4;
    }
    std::vector<>::_Tidy((vector<> *)&local_48);
    std::vector<>::_Tidy((vector<> *)&local_54);
  }
  if (0xf < param_6._4_4_) {
    pnVar9 = (nothrow_t *)(param_6._4_4_ + 1);
    pcVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar2 = *(char **)(param_2 + -4);
      pnVar9 = (nothrow_t *)(param_6._4_4_ + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    pbStack_78 = (basic_string<> *)0x51aeae;
    operator_delete(pcVar2,pnVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: struct HullStrength __thiscall ShipClass::hullStrengthForSection(enum
// EHullLocation::HullLocation)

void __thiscall ShipClass::hullStrengthForSection(ShipClass *this,HullLocation param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int in_stack_00000008;
  
  piVar1 = *(int **)(this + 0x118);
  uVar5 = 0;
  iVar2 = *(int *)(this + 0x11c) - (int)piVar1 >> 0x1f;
  iVar4 = (*(int *)(this + 0x11c) - (int)piVar1) / 0xc + iVar2;
  piVar3 = piVar1;
  if (iVar4 != iVar2) {
    do {
      if (*piVar3 == in_stack_00000008) {
        iVar2 = piVar1[uVar5 * 3 + 2];
        *(undefined8 *)param_1 = *(undefined8 *)(piVar1 + uVar5 * 3);
        *(int *)(param_1 + 8) = iVar2;
        return;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar5 < (uint)(iVar4 - iVar2));
  }
  iVar2 = piVar1[2];
  *(undefined8 *)param_1 = *(undefined8 *)piVar1;
  *(int *)(param_1 + 8) = iVar2;
  return;
}


// public: bool __thiscall ShipClass::canBeDockedWith(void)

bool __thiscall ShipClass::canBeDockedWith(ShipClass *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x158);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    return false;
  }
  return true;
}
