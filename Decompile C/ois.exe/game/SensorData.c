#include "../ois.exe.h"


// public: __thiscall SensorData::~SensorData(void)

void __thiscall SensorData::~SensorData(SensorData *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  std::vector<>::~vector<>((vector<> *)(this + 0xf8));
  std::vector<>::~vector<>((vector<> *)(this + 0xec));
  uVar1 = *(uint *)(this + 0xd4);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xc0);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040ee4d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0xf;
  this[0xc0] = (SensorData)0x0;
  uVar1 = *(uint *)(this + 0xbc);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xa8);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040ee4d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0xf;
  this[0xa8] = (SensorData)0x0;
  uVar1 = *(uint *)(this + 0xa4);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x90);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040ee4d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  this[0x90] = (SensorData)0x0;
  uVar1 = *(uint *)(this + 0x8c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x78);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040ee4d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0xf;
  this[0x78] = (SensorData)0x0;
  uVar1 = *(uint *)(this + 0x74);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x60);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040ee4d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0xf;
  this[0x60] = (SensorData)0x0;
  uVar1 = *(uint *)(this + 0x5c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x48);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0040ee4d:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (SensorData)0x0;
  return;
}


// public: __thiscall SensorData::SensorData(int,int,float)

SensorData * __thiscall
SensorData::SensorData(SensorData *this,int param_1,int param_2,float param_3)

{
  undefined4 in_XMM3_Da;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c2e36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)this = param_2;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined2 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0xbff0000000000000;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined1 **)(this + 0x38) = &DAT_bf800000;
  *(undefined1 **)(this + 0x3c) = &DAT_bf800000;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  *(basic_string<> *)(this + 0x48) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x48),"Unknown",7);
  local_8 = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0xf;
  *(basic_string<> *)(this + 0x60) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x60),"Unknown",7);
  local_8._0_1_ = 1;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0xf;
  *(basic_string<> *)(this + 0x78) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x78),"Unknown",7);
  local_8._0_1_ = 2;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  *(basic_string<> *)(this + 0x90) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x90),"Unknown",7);
  local_8._0_1_ = 3;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0xf;
  *(basic_string<> *)(this + 0xa8) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0xa8),"Unknown",7);
  local_8._0_1_ = 4;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0xf;
  *(basic_string<> *)(this + 0xc0) = (basic_string<>)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0xc0),"Unknown",7);
  *(undefined4 *)(this + 0xdc) = 3;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined2 *)(this + 0x110) = 0;
  this[0x112] = (SensorData)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = in_XMM3_Da;
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  *(int *)(this + 0x124) = param_1;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0xffffffff;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined2 *)(this + 0x120) = 0;
  this[0x122] = (SensorData)0x0;
  debugPrint("DETAIL","New Sensor Object with ID: %d",param_2);
  ExceptionList = local_10;
  return this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall SensorData::getSolutionString(void)

void __thiscall SensorData::getSolutionString(SensorData *this)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> *in_stack_00000004;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c2e81;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8 = 0;
  fVar1 = *(float *)(this + 0x128);
  local_14 = uVar2;
  if (fVar1 == -1.0) {
    std::basic_string<>::append(in_stack_00000004,"`7n/a",5);
  }
  else if (fVar1 == 0.0) {
    std::basic_string<>::append(in_stack_00000004,"`8nil",5);
  }
  else {
    if (fVar1 <= 80.0) {
      if (fVar1 <= 30.0) {
        pcVar4 = "`@";
      }
      else {
        pcVar4 = "`$";
      }
    }
    else {
      pcVar4 = "`0";
    }
    std::basic_string<>::append(in_stack_00000004,pcVar4,2);
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"%.0f%%",(double)*(float *)(this + 0x128),uVar2);
    local_8 = 1;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class cocos2d::Vec2 __thiscall SensorData::getPresumedLocation(void)

Vec2 * __thiscall SensorData::getPresumedLocation(SensorData *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  Vec2 *in_stack_00000004;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c2ec2;
  local_10 = ExceptionList;
  if (*(float *)(this + 0x128) == 100.0) {
    fVar1 = *(float *)(this + 0x104);
    dVar2 = *(double *)(this + 0x10);
    *(float *)(in_stack_00000004 + 4) =
         (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18));
    *(float *)in_stack_00000004 = (float)((double)fVar1 + dVar2);
    return in_stack_00000004;
  }
  local_24 = (float)((double)*(float *)(this + 0x104) + *(double *)(this + 0x10));
  local_20 = (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18));
  local_14 = (float)((double)(1.0 - *(float *)(this + 0x128) / 100.0) * *(double *)(this + 0x28));
  local_8 = 0;
  dVar3 = (double)(float)*(double *)(this + 0x20) * 0.017453292519943295;
  dVar2 = dVar3;
  ExceptionList = &local_10;
  __libm_sse2_sin_precise(___security_cookie ^ (uint)&stack0xfffffffc);
  local_18 = (float)(dVar2 * (double)local_14);
  __libm_sse2_cos_precise();
  local_1c = local_18;
  local_18 = (float)(dVar3 * (double)local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  cocos2d::Vec2::operator+((Vec2 *)&local_24,in_stack_00000004);
  ExceptionList = local_10;
  return in_stack_00000004;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall SensorData::describeDetail(bool)

void __thiscall SensorData::describeDetail(SensorData *this,bool param_1)

{
  float fVar1;
  int iVar2;
  undefined3 uVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  basic_string<> *pbVar7;
  void *pvVar8;
  undefined4 ******ppppppuVar9;
  nothrow_t *pnVar10;
  uint unaff_EDI;
  undefined3 in_stack_00000005;
  char local_79;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 *****local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c2f22;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_7 = 0;
  uVar3 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  local_14 = pcVar6;
  if (this[0x45] == (SensorData)0x0) {
LAB_005099c5:
    std::basic_string<>::assign((basic_string<> *)local_44,"Possible",8);
    local_79 = 'P';
    std::basic_string<>::assign((basic_string<> *)local_2c,"?",1);
  }
  else {
    iVar2 = *(int *)(this + 0xe0);
    if (iVar2 == 2) {
      std::basic_string<>::assign((basic_string<> *)local_44,"Transient",9);
      local_79 = 'T';
      std::basic_string<>::assign((basic_string<> *)local_2c,"?",1);
      goto LAB_00509c4d;
    }
    if (iVar2 == 1) goto LAB_005099c5;
    if (iVar2 == 0) {
      std::basic_string<>::assign((basic_string<> *)local_44,"Ship",4);
      local_79 = 'S';
      bVar4 = std::_Traits_equal<>("unknown",7,pcVar6,unaff_EDI);
      if (bVar4) {
        std::basic_string<>::assign((basic_string<> *)local_2c,"?",1);
      }
      else {
        std::basic_string<>::operator=((basic_string<> *)local_2c,(basic_string<> *)(this + 0x90));
      }
      iVar2 = *(int *)(this + 0xd8);
      if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && (iVar2 == 4)) {
        std::basic_string<>::operator=((basic_string<> *)local_44,'W');
      }
      if (*(float *)(this + 0x118) != 0.0) goto LAB_005099c5;
    }
    else if (iVar2 == 5) {
      std::basic_string<>::assign((basic_string<> *)local_44,"Beacon",6);
      local_79 = 'B';
      std::basic_string<>::operator=((basic_string<> *)local_2c,(basic_string<> *)(this + 0x90));
    }
    else if (iVar2 == 6) {
      std::basic_string<>::assign((basic_string<> *)local_44,"Cargo",5);
      local_79 = 'C';
      std::basic_string<>::operator=((basic_string<> *)local_2c,(basic_string<> *)(this + 0x90));
    }
    else {
      if (iVar2 == 7) {
        std::basic_string<>::assign((basic_string<> *)local_44,"Derelict",8);
        bVar4 = *(float *)(this + 0x128) <= 63.0;
        if (bVar4) {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)local_5c,"unknown",7);
          pbVar7 = (basic_string<> *)local_5c;
        }
        else {
          pbVar7 = (basic_string<> *)
                   std::basic_string<>::basic_string<>
                             ((basic_string<> *)local_74,(basic_string<> *)(this + 0x90));
          local_8 = 2;
        }
        cVar5 = !bVar4;
        std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar7);
        if ((bVar4) && (0xf < local_48)) {
          pnVar10 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar10 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar10);
        }
      }
      else {
        uStack_7 = uVar3;
        if (iVar2 != 4) {
          if (iVar2 == 3) {
            std::basic_string<>::assign((basic_string<> *)local_44,"Countermeasure",0xe);
            local_79 = 'C';
            std::basic_string<>::assign((basic_string<> *)local_2c,"n/a",3);
          }
          goto LAB_00509c4d;
        }
        std::basic_string<>::assign((basic_string<> *)local_44,"Debris",6);
        fVar1 = *(float *)(this + 0x128);
        if (fVar1 <= 76.0) {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)local_5c,"unknown",7);
          pbVar7 = (basic_string<> *)local_5c;
          cVar5 = '\0';
        }
        else {
          pbVar7 = (basic_string<> *)
                   std::basic_string<>::basic_string<>
                             ((basic_string<> *)local_74,(basic_string<> *)(this + 0x90));
          local_8 = 3;
          cVar5 = '\x04';
        }
        std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar7);
        if ((fVar1 <= 76.0) && (0xf < local_48)) {
          pnVar10 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar10 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar10);
        }
      }
      uStack_7 = 0;
      local_8 = 1;
      local_79 = 'D';
      if ((cVar5 != '\0') && (0xf < local_60)) {
        pnVar10 = (nothrow_t *)(local_60 + 1);
        pvVar8 = local_74[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_74[0] + -4);
          pnVar10 = (nothrow_t *)(local_60 + 0x24);
          if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8))) goto LAB_00509b41;
        }
        operator_delete(pvVar8,pnVar10);
      }
    }
  }
LAB_00509c4d:
  ppppppuVar9 = local_44;
  if (0xf < local_30) {
    ppppppuVar9 = (undefined4 ******)local_44[0];
  }
  strUsingArgs(_param_1,"%s %d (%c%d)",ppppppuVar9,*(undefined4 *)this,(int)local_79,
               *(undefined4 *)this);
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar8 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_00509b41;
    }
    operator_delete(pvVar8,pnVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pnVar10 = (nothrow_t *)(local_30 + 1);
    ppppppuVar9 = (undefined4 ******)local_44[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      ppppppuVar9 = (undefined4 ******)local_44[0][-1];
      pnVar10 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppppuVar9))) {
LAB_00509b41:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppppuVar9,pnVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall SensorData::describe(bool,char)

void __thiscall SensorData::describe(SensorData *this,bool param_1,char param_2)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  bool bVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  char cVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pppuVar2 = local_2c[0];
  puStack_c = &DAT_005c2f60;
  local_10 = ExceptionList;
  local_14 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  pppuVar3 = local_2c[0];
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  local_8 = 1;
  local_2c[0]._2_2_ = SUB42(pppuVar2,2);
  if (this[0x45] == (SensorData)0x0) {
    local_1c = 1;
    local_2c[0] = (undefined4 ***)CONCAT22(local_2c[0]._2_2_,0x50);
    std::basic_string<>::assign((basic_string<> *)local_44,"?",1);
  }
  else {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 2) {
      local_1c = 1;
      local_2c[0] = (undefined4 ***)CONCAT22(local_2c[0]._2_2_,0x54);
      std::basic_string<>::assign((basic_string<> *)local_44,"?",1);
    }
    else if (iVar1 == 1) {
      local_2c[0] = (undefined4 ***)CONCAT22(local_2c[0]._2_2_,0x50);
      local_1c = iVar1;
      std::basic_string<>::assign((basic_string<> *)local_44,"?",1);
    }
    else if (iVar1 == 0) {
      local_1c = 1;
      local_2c[0] = (undefined4 ***)CONCAT22(local_2c[0]._2_2_,0x53);
      bVar4 = std::_Traits_equal<>("unknown",7,local_14,unaff_EDI);
      if (bVar4) {
        std::basic_string<>::assign((basic_string<> *)local_44,"?",1);
      }
      else {
        std::basic_string<>::operator=((basic_string<> *)local_44,(basic_string<> *)(this + 0x90));
      }
      iVar1 = *(int *)(this + 0xd8);
      if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 == 4)) {
        std::basic_string<>::operator=((basic_string<> *)local_2c,'W');
      }
      if (*(float *)(this + 0x118) != 0.0) {
        std::basic_string<>::operator=((basic_string<> *)local_2c,'P');
        std::basic_string<>::assign((basic_string<> *)local_44,"?",1);
      }
    }
    else {
      local_2c[0] = pppuVar3;
      if (iVar1 == 5) {
        cVar7 = 'B';
      }
      else if (iVar1 == 6) {
        cVar7 = 'C';
      }
      else {
        if (iVar1 != 7) goto LAB_00509ebf;
        cVar7 = 'D';
      }
      std::basic_string<>::operator=((basic_string<> *)local_2c,cVar7);
      std::basic_string<>::operator=((basic_string<> *)local_44,(basic_string<> *)(this + 0x90));
    }
  }
LAB_00509ebf:
  iVar1 = *(int *)(this + 0xdc);
  if (iVar1 == 0) {
    cVar7 = '!';
  }
  else if (iVar1 == 2) {
    cVar7 = '@';
  }
  else {
    cVar7 = '$';
    if (iVar1 == 1) {
      cVar7 = '2';
    }
  }
  if (in_stack_0000000c != '\0') {
    cVar7 = in_stack_0000000c;
  }
  if (in_stack_0000000c == -1) {
    ppppuVar5 = local_2c;
    if (0xf < local_18) {
      ppppuVar5 = (undefined4 ****)local_2c[0];
    }
    strUsingArgs(_param_1,"%s%d",ppppuVar5,*(undefined4 *)this);
  }
  else if (param_2 == '\0') {
    ppppuVar5 = local_2c;
    if (0xf < local_18) {
      ppppuVar5 = (undefined4 ****)local_2c[0];
    }
    strUsingArgs(_param_1,"`%c%s%d",(int)cVar7,ppppuVar5,*(undefined4 *)this);
  }
  else {
    ppppuVar5 = local_44;
    if (0xf < local_30) {
      ppppuVar5 = (undefined4 ****)local_44[0];
    }
    ppppuVar6 = local_2c;
    if (0xf < local_18) {
      ppppuVar6 = (undefined4 ****)local_2c[0];
    }
    strUsingArgs(_param_1,"`%c%s%d: %s",(int)cVar7,ppppuVar6,*(undefined4 *)this,ppppuVar5);
  }
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    ppppuVar5 = (undefined4 ****)local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppuVar5 = (undefined4 ****)local_44[0][-1];
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar5,pnVar8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    ppppuVar5 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppuVar5 = (undefined4 ****)local_2c[0][-1];
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar5,pnVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall SensorData::canBeMooredWith(void)

bool __thiscall SensorData::canBeMooredWith(SensorData *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xe0);
  if (((iVar1 != 6) && (iVar1 != 4)) && (iVar1 != 7)) {
    return false;
  }
  return true;
}


// public: bool __thiscall SensorData::isSynthetic(void)

bool __thiscall SensorData::isSynthetic(SensorData *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xe0);
  if ((((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) && (iVar1 != 7)) {
    return false;
  }
  return true;
}


// public: bool __thiscall SensorData::analysed(void)

bool __thiscall SensorData::analysed(SensorData *this)

{
  if (*(float *)(this + 0x118) == 0.0) {
    return true;
  }
  return false;
}
