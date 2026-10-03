#include "../ois.exe.h"


// public: void __thiscall RakNet::BPSTracker::Push1(unsigned __int64,unsigned __int64)

void __thiscall RakNet::BPSTracker::Push1(BPSTracker *this,__uint64 param_1,__uint64 param_2)

{
  uint *puVar1;
  BPSTracker *pBVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  __uint64 *p_Var9;
  int iVar10;
  TimeAndValue2 *pTVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_EDI;
  TimeAndValue2 *local_24;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cd26d;
  local_1c = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  if (*(int *)(this + 0x1c) == 0) {
    puVar8 = operator_new__(0x104);
    local_14 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      p_Var9 = (__uint64 *)0x0;
    }
    else {
      *puVar8 = 0x10;
      p_Var9 = (__uint64 *)(puVar8 + 1);
      _eh_vector_constructor_iterator_
                (p_Var9,0x10,0x10,std::move<>,DataStructures::RangeNode<>::~RangeNode<>);
    }
    *(__uint64 **)(this + 0x10) = p_Var9;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 1;
    *p_Var9 = param_2;
    p_Var9[1] = param_1;
    *(undefined4 *)(this + 0x1c) = 0x10;
  }
  else {
    p_Var9 = (__uint64 *)(*(int *)(this + 0x18) * 0x10 + *(int *)(this + 0x10));
    *p_Var9 = param_2;
    p_Var9[1] = param_1;
    iVar10 = *(int *)(this + 0x18) + 1;
    *(int *)(this + 0x18) = iVar10;
    if (iVar10 == *(int *)(this + 0x1c)) {
      *(undefined4 *)(this + 0x18) = 0;
      iVar10 = 0;
    }
    if ((iVar10 == *(int *)(this + 0x14)) &&
       (pTVar11 = OP_NEW_ARRAY<>(*(int *)(this + 0x1c),pcVar7,unaff_EDI),
       pTVar11 != (TimeAndValue2 *)0x0)) {
      uVar13 = 0;
      local_24 = pTVar11;
      if (*(int *)(this + 0x1c) != 0) {
        do {
          uVar12 = *(int *)(this + 0x14) + uVar13;
          uVar13 = uVar13 + 1;
          puVar8 = (undefined4 *)((uVar12 % *(uint *)(this + 0x1c)) * 0x10 + *(int *)(this + 0x10));
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          *(undefined4 *)local_24 = *puVar8;
          *(undefined4 *)(local_24 + 4) = uVar4;
          *(undefined4 *)(local_24 + 8) = uVar5;
          *(undefined4 *)(local_24 + 0xc) = uVar6;
          local_24 = local_24 + 0x10;
        } while (uVar13 < *(uint *)(this + 0x1c));
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x1c);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) * 2;
      pvVar3 = *(void **)(this + 0x10);
      *(undefined4 *)(this + 0x14) = 0;
      if (pvVar3 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar3 + -4);
        local_14 = 1;
        _eh_vector_destructor_iterator_
                  (pvVar3,0x10,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 0x10 + 4);
      }
      *(TimeAndValue2 **)(this + 0x10) = pTVar11;
    }
  }
  uVar13 = *(uint *)this;
  *(uint *)this = *(int *)this + (uint)param_2;
  *(uint *)(this + 4) = *(int *)(this + 4) + param_2._4_4_ + (uint)CARRY4(uVar13,(uint)param_2);
  pBVar2 = this + 8;
  uVar13 = *(uint *)pBVar2;
  *(uint *)pBVar2 = *(uint *)pBVar2 + (uint)param_2;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_2._4_4_ + (uint)CARRY4(uVar13,(uint)param_2);
  ExceptionList = local_1c;
  return;
}


// public: __thiscall RakNet::BPSTracker::BPSTracker(void)

BPSTracker * __thiscall RakNet::BPSTracker::BPSTracker(BPSTracker *this)

{
  char *in_stack_fffffff4;
  uint in_stack_fffffff8;
  
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  Reset(this,in_stack_fffffff4,in_stack_fffffff8);
  return this;
}


// public: __thiscall RakNet::BPSTracker::~BPSTracker(void)

void __thiscall RakNet::BPSTracker::~BPSTracker(BPSTracker *this)

{
  uint *puVar1;
  void *pvVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(this + 0x1c) != 0) && (pvVar2 = *(void **)(this + 0x10), pvVar2 != (void *)0x0)) {
    puVar1 = (uint *)((int)pvVar2 + -4);
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar2,0x10,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
    operator_delete__(puVar1,*puVar1 * 0x10 + 4);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall RakNet::BPSTracker::Reset(char const *,unsigned int)

void __thiscall RakNet::BPSTracker::Reset(BPSTracker *this,char *param_1,uint param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (*(uint *)(this + 0x1c) != 0) {
    if (0x20 < *(uint *)(this + 0x1c)) {
      pvVar2 = *(void **)(this + 0x10);
      if (pvVar2 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar2 + -4);
        local_8 = 0;
        _eh_vector_destructor_iterator_
                  (pvVar2,0x10,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 0x10 + 4);
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  ExceptionList = local_10;
  return;
}
