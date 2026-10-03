// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall RoomEditor::describeCurrentState(RoomEditor *this)
void RoomEditor::describeCurrentState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  RoomEditor *pRVar1;
  PresentationInterface *pPVar2;
  PresentationInterface *pPVar3;
  PresentationInterface *pPVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  std::string *pbVar8;
  Label *pLVar9;
  undefined4 *puVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  Quaternion local_a8 [16];
  Quaternion local_98 [16];
  Quaternion local_88 [4];
  undefined8 local_84;
  float local_7c;
  int local_78;
  PresentationInterface *local_74;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  RoomEditor *local_60;
  void *local_5c;
  Quaternion local_54 [8];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005c4d08;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_60 = this;
  if (*(int **)((char *)this + 0x284) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x284) + 0x138))();
    *(undefined4 *)((char *)this + 0x284) = 0;
  }
  if (*(int **)((char *)this + 0x288) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x288) + 0x138))();
    *(undefined4 *)((char *)this + 0x288) = 0;
  }
  if (((char *)this)[0x278] != (byte)0x0) {
    pPVar2 = ghidra::any_singleton();
    (**(code **)(*(int *)pPVar2 + 0x7c))();
    // [seh] local_8 = 0;
    cocos2d::Vec3::Vec3((Vec3 *)&local_84,(float)local_70 / OSInterface::renderScale,
                        local_70._4_4_ / OSInterface::renderScale,
                        local_68 / OSInterface::renderScale);
    local_70 = local_84;
    local_68 = local_7c;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_84);
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_44,"Arial",5);
    // [seh] local_8._0_1_ = 1;
    pPVar2 = ghidra::any_singleton();
    pPVar3 = ghidra::any_singleton();
    pPVar4 = ghidra::any_singleton();
    local_74 = ghidra::any_singleton();
    local_78 = (**(code **)(*(int *)pPVar2 + 0xd0))(local_54);
    // [seh] local_8._0_1_ = 2;
    iVar5 = (**(code **)(*(int *)pPVar3 + 0xd0))();
    // [seh] local_8._0_1_ = 3;
    iVar6 = (**(code **)(*(int *)pPVar4 + 0xd0))(local_98);
    // [seh] local_8._0_1_ = 4;
    pfVar7 = (float *)(**(code **)(*(int *)local_74 + 0xd0))(local_88);
    // [seh] local_8._0_1_ = 5;
    pbVar8 = (std::string *)
             strUsingArgs((char *)local_2c,"Camera at %f, %f, %f (rot %f, %f, %f,  %f)",
                          SUB84((double)(float)local_70,0),
                          (int)((ulonglong)(double)(float)local_70 >> 0x20),
                          SUB84((double)local_70._4_4_,0),
                          (int)((ulonglong)(double)local_70._4_4_ >> 0x20),SUB84((double)local_68,0)
                          ,(int)((ulonglong)(double)local_68 >> 0x20),SUB84((double)*pfVar7,0),
                          (int)((ulonglong)(double)*pfVar7 >> 0x20),
                          SUB84((double)*(float *)(iVar6 + 4),0),
                          (int)((ulonglong)(double)*(float *)(iVar6 + 4) >> 0x20),
                          SUB84((double)*(float *)(iVar5 + 8),0),
                          (int)((ulonglong)(double)*(float *)(iVar5 + 8) >> 0x20),
                          SUB84((double)*(float *)(local_78 + 0xc),0),
                          (int)((ulonglong)(double)*(float *)(local_78 + 0xc) >> 0x20));
    // [seh] local_8._0_1_ = 6;
    pLVar9 = cocos2d::Label::createWithSystemFont
                       (pbVar8,(std::string *)local_44,18.0,(Size *)ZERO_exref,0,0);
    pRVar1 = local_60;
    // [seh] local_8._0_1_ = 5;
    *(Label **)(local_60 + 0x288) = pLVar9;
    if (0xf < local_18) {
      pnVar12 = (nothrow_t *)(local_18 + 1);
      pvVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_2c[0] + -4);
        pnVar12 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    cocos2d::Quaternion::~Quaternion(local_88);
    cocos2d::Quaternion::~Quaternion(local_98);
    cocos2d::Quaternion::~Quaternion(local_a8);
    cocos2d::Quaternion::~Quaternion(local_54);
    // [seh] local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    local_64 = 0;
    local_60 = (RoomEditor *)0x0;
    // [seh] local_8._0_1_ = 7;
    (**(code **)(**(int **)(pRVar1 + 0x288) + 0xa0))(&local_64);
    // [seh] local_8._0_1_ = 0;
    (**(code **)(**(int **)(pRVar1 + 0x288) + 0x48))(0x41200000,0x42200000);
    (**(code **)(*(int *)pRVar1 + 0x10c))(*(int *)(pRVar1 + 0x288));
    if (*(int *)(pRVar1 + 0x280) != 0) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_44,"Arial",5);
      // [seh] local_8._0_1_ = 8;
      puVar10 = (undefined4 *)(*(RoomObject **)(pRVar1 + 0x280))->describe();
      // [seh] local_8._0_1_ = 9;
      if (0xf < (uint)puVar10[5]) {
        puVar10 = (undefined4 *)*puVar10;
      }
      iVar5 = *(int *)(pRVar1 + 0x280);
      pbVar8 = (std::string *)
               strUsingArgs((char *)local_2c,
                            "%s at %f, %f, %f, (rot %f, %f, %f )(quat %f, %f, %f, %f)",puVar10,
                            SUB84((double)*(float *)(iVar5 + 0x2f0),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x2f0) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x2f4),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x2f4) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x2f8),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x2f8) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x2fc),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x2fc) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x300),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x300) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x304),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x304) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x308),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x308) >> 0x20),
                            SUB84((double)*(float *)(iVar5 + 0x30c),0),
                            (int)((ulonglong)(double)*(float *)(iVar5 + 0x30c) >> 0x20),
                            (double)*(float *)(iVar5 + 0x310),(double)*(float *)(iVar5 + 0x310));
      // [seh] local_8._0_1_ = 10;
      pLVar9 = cocos2d::Label::createWithSystemFont
                         (pbVar8,(std::string *)local_44,18.0,(Size *)ZERO_exref,0,0);
      // [seh] local_8._0_1_ = 9;
      *(Label **)(pRVar1 + 0x284) = pLVar9;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
      // [seh] local_8._0_1_ = 8;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_48) {
        pnVar12 = (nothrow_t *)(local_48 + 1);
        pvVar11 = local_5c;
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_5c + -4);
          pnVar12 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
      // [seh] local_8._0_1_ = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c = (void *)((uint)local_5c & 0xffffff00);
      if (0xf < local_30) {
        pnVar12 = (nothrow_t *)(local_30 + 1);
        pvVar11 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_44[0] + -4);
          pnVar12 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
      debugPrint("DETAIL","Outer angle: %f",(double)*(float *)(*(int *)(pRVar1 + 0x280) + 0x3b4));
      local_64 = 0;
      local_60 = (RoomEditor *)0x0;
      // [seh] local_8._0_1_ = 0xb;
      puVar10 = &local_64;
      (**(code **)(**(int **)(pRVar1 + 0x284) + 0xa0))();
      // [seh] local_8._0_1_ = 0;
      uVar14 = CONCAT44(puVar10,0x42dc0000);
      uVar13 = 0x41200000;
      (**(code **)(**(int **)(pRVar1 + 0x284) + 0x48))();
      (**(code **)(*(int *)pRVar1 + 0x10c))(*(int *)(pRVar1 + 0x284),uVar13,uVar14);
      (*(RoomObject **)(pRVar1 + 0x280))->describe();
      // [seh] local_8._0_1_ = 0xc;
      debugPrint("DETAIL","selected %s");
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
    }
    cocos2d::Vec3::~Vec3((Vec3 *)&local_70);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomEditor::setLightObjectsVisible(RoomEditor *this,bool param_1)
void RoomEditor::setLightObjectsVisible(bool param_1)

{
  int iVar1;
  PresentationInterface *pPVar2;
  uint uVar3;
  
  uVar3 = 0;
  pPVar2 = ghidra::any_singleton();
  if (*(int *)(*(int *)(pPVar2 + 0x2d4) + 0x94) - *(int *)(*(int *)(pPVar2 + 0x2d4) + 0x90) >> 2 !=
      0) {
    do {
      pPVar2 = ghidra::any_singleton();
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(pPVar2 + 0x2d4) + 0x90) + uVar3 * 4) + 0x3c);
      if (((iVar1 == 3) || (iVar1 == 1)) || (iVar1 == 2)) {
        pPVar2 = ghidra::any_singleton();
        (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(pPVar2 + 0x2d4) + 0x90) + uVar3 * 4) +
                               1000) + 0xb4))(0);
      }
      uVar3 = uVar3 + 1;
      pPVar2 = ghidra::any_singleton();
    } while (uVar3 < (uint)(*(int *)(*(int *)(pPVar2 + 0x2d4) + 0x94) -
                            *(int *)(*(int *)(pPVar2 + 0x2d4) + 0x90) >> 2));
  }
  return;
}
