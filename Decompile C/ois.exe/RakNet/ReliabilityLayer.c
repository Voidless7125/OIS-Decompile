#include "../ois.exe.h"


// public: __thiscall RakNet::ReliabilityLayer::ReliabilityLayer(void)

ReliabilityLayer * __thiscall RakNet::ReliabilityLayer::ReliabilityLayer(ReliabilityLayer *this)

{
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005cd384;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0x4000;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0x4000;
  *(undefined4 *)(this + 0x87c) = 0;
  *(undefined4 *)(this + 0x874) = 0;
  *(undefined4 *)(this + 0x878) = 0;
  this[0x880] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0x8b0) = 0;
  *(undefined4 *)(this + 0x8a8) = 0;
  *(undefined4 *)(this + 0x8ac) = 0;
  local_8 = 6;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_
            (this + 0xba8,0x10,0x20,DataStructures::Heap<>::Heap<>,DataStructures::Heap<>::~Heap<>);
  *(undefined4 *)(this + 0xe34) = 0;
  *(undefined4 *)(this + 0xe28) = 0;
  *(undefined4 *)(this + 0xe2c) = 0;
  *(undefined4 *)(this + 0xe30) = 0;
  *(undefined4 *)(this + 0xefc) = 0;
  *(undefined4 *)(this + 0xef4) = 0;
  *(undefined4 *)(this + 0xef8) = 0;
  *(undefined4 *)(this + 0xf08) = 0;
  *(undefined4 *)(this + 0xf00) = 0;
  *(undefined4 *)(this + 0xf04) = 0;
  *(undefined4 *)(this + 0xf14) = 0;
  *(undefined4 *)(this + 0xf0c) = 0;
  *(undefined4 *)(this + 0xf10) = 0;
  *(undefined4 *)(this + 0xf20) = 0;
  *(undefined4 *)(this + 0xf18) = 0;
  *(undefined4 *)(this + 0xf1c) = 0;
  *(undefined4 *)(this + 0xf2c) = 0;
  *(undefined4 *)(this + 0xf24) = 0;
  *(undefined4 *)(this + 0xf28) = 0;
  *(undefined4 *)(this + 0xf58) = 0;
  *(undefined4 *)(this + 0xf50) = 0;
  *(undefined4 *)(this + 0xf54) = 0;
  *(undefined4 *)(this + 0xf68) = 0;
  *(undefined4 *)(this + 0xf60) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0xf74) = 0;
  *(undefined4 *)(this + 0xf6c) = 0;
  *(undefined4 *)(this + 0xf70) = 0;
  *(undefined4 *)(this + 0xf84) = 0;
  *(undefined4 *)(this + 0xf88) = 0;
  *(undefined4 *)(this + 0xf8c) = 0x4000;
  _local_8 = CONCAT31(uStack_7,0x11);
  _eh_vector_constructor_iterator_
            (this + 0xf90,0x20,7,BPSTracker::BPSTracker,BPSTracker::~BPSTracker);
  *(undefined4 *)(this + 0x8c0) = 10000;
  InitializeVariables(this);
  *(undefined4 *)(this + 0x40) = 0x400;
  *(undefined4 *)(this + 100) = 0x780;
  *(undefined4 *)(this + 0xf8c) = 0x100;
  ExceptionList = local_10;
  return this;
}


// public: __thiscall RakNet::ReliabilityLayer::~ReliabilityLayer(void)

void __thiscall RakNet::ReliabilityLayer::~ReliabilityLayer(ReliabilityLayer *this)

{
  char *pcVar1;
  code *pcVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FreeThreadSafeMemory(this);
  pcVar2 = BPSTracker::~BPSTracker;
  pcVar1 = (char *)0x7;
  _eh_vector_destructor_iterator_(this + 0xf90,0x20,7,BPSTracker::~BPSTracker);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0xf7c),pcVar1,(uint)pcVar2);
  DataStructures::RangeList<>::Clear((RangeList<> *)(this + 0xf6c));
  DataStructures::OrderedList<>::~OrderedList<>((OrderedList<> *)(this + 0xf6c));
  DataStructures::RangeList<>::Clear((RangeList<> *)(this + 0xf60));
  DataStructures::OrderedList<>::~OrderedList<>((OrderedList<> *)(this + 0xf60));
  DataStructures::RangeList<>::Clear((RangeList<> *)(this + 0xf50));
  DataStructures::OrderedList<>::~OrderedList<>((OrderedList<> *)(this + 0xf50));
  if (*(int *)(this + 0xf2c) != 0) {
    operator_delete__(*(void **)(this + 0xf24));
  }
  if (*(int *)(this + 0xf20) != 0) {
    operator_delete__(*(void **)(this + 0xf18));
  }
  if (*(int *)(this + 0xf14) != 0) {
    operator_delete__(*(void **)(this + 0xf0c));
  }
  if (*(int *)(this + 0xf08) != 0) {
    operator_delete__(*(void **)(this + 0xf00));
  }
  if (*(int *)(this + 0xefc) != 0) {
    operator_delete__(*(void **)(this + 0xef4));
  }
  if (*(int *)(this + 0xe34) != 0) {
    operator_delete__(*(void **)(this + 0xe28));
  }
  pcVar2 = DataStructures::Heap<>::~Heap<>;
  pcVar1 = (char *)0x20;
  _eh_vector_destructor_iterator_(this + 0xba8,0x10,0x20,DataStructures::Heap<>::~Heap<>);
  if (*(int *)(this + 0x8b0) != 0) {
    pcVar2 = *(code **)(this + 0x8a8);
    pcVar1 = (char *)0x5983f4;
    operator_delete__(pcVar2);
    *(undefined4 *)(this + 0x8b0) = 0;
    *(undefined4 *)(this + 0x8a8) = 0;
    *(undefined4 *)(this + 0x8ac) = 0;
  }
  if (*(int *)(this + 0x87c) != 0) {
    pcVar2 = *(code **)(this + 0x874);
    pcVar1 = (char *)0x598429;
    operator_delete__(pcVar2);
  }
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x54),pcVar1,(uint)pcVar2);
  if (*(int *)(this + 0x4c) != 0) {
    pcVar2 = *(code **)(this + 0x44);
    pcVar1 = (char *)0x598445;
    operator_delete__(pcVar2);
  }
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x30),pcVar1,(uint)pcVar2);
  if (*(int *)(this + 0x2c) != 0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)this);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall RakNet::ReliabilityLayer::Reset(bool,int,bool)

void __thiscall
RakNet::ReliabilityLayer::Reset(ReliabilityLayer *this,bool param_1,int param_2,bool param_3)

{
  int iVar1;
  
  FreeThreadSafeMemory(this);
  if (param_1) {
    InitializeVariables(this);
    iVar1 = param_2 + -0x1c;
    GetTimeUS_Windows();
    *(undefined8 *)(this + 0xee0) = 0xbff0000000000000;
    *(undefined8 *)(this + 0xee8) = 0xbff0000000000000;
    *(int *)(this + 0xea0) = iVar1;
    *(undefined8 *)(this + 0xed8) = 0xbff0000000000000;
    *(undefined4 *)(this + 0xeb8) = 0;
    *(undefined4 *)(this + 0xebc) = 0;
    *(double *)(this + 0xea8) =
         (double)iVar1 + *(double *)(&__xmm_41f00000000000000000000000000000 + (iVar1 >> 0x1f) * -8)
    ;
    *(undefined8 *)(this + 0xeb0) = 0;
    *(undefined4 *)(this + 0xec0) = 0;
    this[0xec3] = (ReliabilityLayer)0x0;
    *(undefined4 *)(this + 0xec4) = 0;
    *(undefined2 *)(this + 0xec7) = 0;
    this[0xec9] = (ReliabilityLayer)0x0;
    *(undefined4 *)(this + 0xecc) = 0;
    *(undefined2 *)(this + 0xecf) = 0;
  }
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::InitializeVariables(void)

void __thiscall RakNet::ReliabilityLayer::InitializeVariables(ReliabilityLayer *this)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  ReliabilityLayer *pRVar4;
  __uint64 _Var5;
  undefined8 uVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  memset(this + 0x8c8,0,0x2e0);
  memset(this + 0xda8,0,0x80);
  _Var5 = GetTimeUS_Windows();
  *(__uint64 *)(this + 0x938) = _Var5;
  *(undefined2 *)(this + 0x8be) = 0;
  *(undefined4 *)(this + 0xe90) = 0;
  *(undefined4 *)(this + 0xe94) = 0;
  *(undefined4 *)(this + 0xe80) = 0;
  *(undefined4 *)(this + 0xe84) = 0;
  *(undefined4 *)(this + 0x8b4) = 0;
  this[0x8b7] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0x8b8) = 0;
  this[0x8bb] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0xf48) = 0;
  *(undefined4 *)(this + 0xf4c) = 0;
  *(undefined4 *)(this + 0x86c) = 0;
  _Var5 = GetTimeUS_Windows();
  *(__uint64 *)(this + 0xe40) = _Var5;
  this[0xe78] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0xe68) = 0;
  *(undefined4 *)(this + 0xe6c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x1070) = 0;
  *(undefined4 *)(this + 0x1074) = 0;
  *(undefined4 *)(this + 0xf5c) = 0xf;
  *(undefined4 *)(this + 0xe70) = 0;
  *(undefined4 *)(this + 0xe74) = 0;
  *(undefined2 *)(this + 0x8bc) = 0;
  *(undefined4 *)(this + 0xf40) = 0;
  *(undefined4 *)(this + 0xf44) = 0;
  _Var5 = GetTimeUS_Windows();
  uVar6 = __aulldiv((uint)_Var5,(uint)(_Var5 >> 0x20),1000,0);
  *(int *)(this + 0x870) = (int)uVar6;
  *(undefined4 *)(this + 0x990) = 0;
  *(undefined4 *)(this + 0x998) = 0;
  *(undefined4 *)(this + 0x99c) = 0;
  *(undefined4 *)(this + 0xe38) = 0;
  *(undefined2 *)(this + 0xe3b) = 0x100;
  *(undefined4 *)(this + 0xe50) = *(undefined4 *)(this + 0xe40);
  *(undefined4 *)(this + 0xe88) = 0;
  *(undefined4 *)(this + 0xe48) = 350000;
  *(undefined4 *)(this + 0xe4c) = 0;
  this[0xe60] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0xe58) = 0;
  *(undefined4 *)(this + 0xe5c) = 0;
  *(undefined4 *)(this + 0xe54) = *(undefined4 *)(this + 0xe44);
  *(undefined4 *)(this + 0xef0) = 0;
  *(undefined4 *)(this + 0x868) = 0;
  *(undefined8 *)(this + 0xf38) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x53] = (ReliabilityLayer)0x0;
  *(undefined4 *)(this + 0x888) = 0;
  *(undefined4 *)(this + 0x88c) = 0;
  *(undefined4 *)(this + 0x890) = 3;
  *(undefined4 *)(this + 0x894) = 0;
  *(undefined4 *)(this + 0x898) = 10;
  *(undefined4 *)(this + 0x89c) = 0;
  *(undefined4 *)(this + 0x8a0) = 0x1b;
  *(undefined4 *)(this + 0x8a4) = 0;
  *(undefined4 *)(this + 0x960) = 0;
  *(undefined4 *)(this + 0x970) = 0;
  *(undefined4 *)(this + 0x974) = 0;
  *(undefined4 *)(this + 0x978) = 0;
  *(undefined4 *)(this + 0x97c) = 0;
  *(undefined4 *)(this + 0x964) = 0;
  pRVar4 = this + 0xfac;
  *(undefined4 *)(this + 0x968) = 0;
  iVar3 = 7;
  *(undefined4 *)(this + 0x980) = 0;
  *(undefined4 *)(this + 0x984) = 0;
  *(undefined4 *)(this + 0x988) = 0;
  *(undefined4 *)(this + 0x98c) = 0;
  *(undefined4 *)(this + 0x96c) = 0;
  do {
    *(uint *)(pRVar4 + -0x14) = 0;
    *(uint *)(pRVar4 + -0x10) = 0;
    *(uint *)(pRVar4 + -0x1c) = 0;
    *(uint *)(pRVar4 + -0x18) = 0;
    if (*(uint *)pRVar4 != 0) {
      if (0x20 < *(uint *)pRVar4) {
        pvVar2 = *(void **)(pRVar4 + -0xc);
        if (pvVar2 != (void *)0x0) {
          puVar1 = (uint *)((int)pvVar2 + -4);
          local_8 = 0;
          _eh_vector_destructor_iterator_
                    (pvVar2,0x10,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
          operator_delete__(puVar1,*puVar1 * 0x10 + 4);
        }
        *(uint *)pRVar4 = 0;
      }
      *(uint *)(pRVar4 + -8) = 0;
      *(uint *)(pRVar4 + -4) = 0;
    }
    pRVar4 = pRVar4 + 0x20;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_10;
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::FreeThreadSafeMemory(void)

void __thiscall RakNet::ReliabilityLayer::FreeThreadSafeMemory(ReliabilityLayer *this)

{
  uint *puVar1;
  List<> *this_00;
  List<> *pLVar2;
  void *pvVar3;
  InternalPacket *pIVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ReliabilityLayer *pRVar9;
  char *in_stack_ffffffd0;
  char *pcVar10;
  InternalPacket *pIVar11;
  uint24_t uVar12;
  int local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd3a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pIVar11 = (InternalPacket *)0x5988af;
  ClearPacketsAndDatagrams(this);
  uVar6 = 0;
  if (*(int *)(this + 0x8ac) != 0) {
    do {
      iVar7 = *(int *)(this + 0x8a8);
      uVar8 = 0;
      if (*(int *)(*(int *)(iVar7 + uVar6 * 4) + 0xc) != 0) {
        do {
          FreeInternalPacketData
                    (this,*(InternalPacket **)
                           (*(int *)(*(int *)(*(int *)(this + 0x8a8) + uVar6 * 4) + 8) + uVar8 * 4),
                     in_stack_ffffffd0,(uint)pIVar11);
          pIVar11 = *(InternalPacket **)
                     (*(int *)(*(int *)(*(int *)(this + 0x8a8) + uVar6 * 4) + 8) + uVar8 * 4);
          in_stack_ffffffd0 = (char *)0x5988ff;
          ReleaseToInternalPacketPool(this,pIVar11);
          iVar7 = *(int *)(this + 0x8a8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(*(int *)(iVar7 + uVar6 * 4) + 0xc));
      }
      pcVar10 = *(char **)(iVar7 + uVar6 * 4);
      if (pcVar10 != (char *)0x0) {
        if (*(int *)(pcVar10 + 0x10) != 0) {
          operator_delete__(*(void **)(pcVar10 + 8));
        }
        pIVar11 = (InternalPacket *)0x18;
        operator_delete(pcVar10,(nothrow_t *)0x18);
        in_stack_ffffffd0 = pcVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x8ac));
  }
  if (*(int *)(this + 0x8b0) != 0) {
    pIVar11 = *(InternalPacket **)(this + 0x8a8);
    in_stack_ffffffd0 = (char *)0x59894e;
    operator_delete__(pIVar11);
    *(undefined4 *)(this + 0x8b0) = 0;
    *(undefined4 *)(this + 0x8a8) = 0;
    *(undefined4 *)(this + 0x8ac) = 0;
  }
  while( true ) {
    uVar6 = *(uint *)(this + 4);
    if (*(uint *)(this + 8) < uVar6) {
      iVar7 = *(int *)(this + 0xc) - uVar6;
    }
    else {
      iVar7 = -uVar6;
    }
    if (*(uint *)(this + 8) + iVar7 == 0) break;
    iVar5 = uVar6 + 1;
    *(int *)(this + 4) = iVar5;
    iVar7 = *(int *)(this + 0xc);
    if (iVar5 == iVar7) {
      *(undefined4 *)(this + 4) = 0;
      pIVar4 = *(InternalPacket **)(*(int *)this + -4 + iVar7 * 4);
    }
    else if (iVar5 == 0) {
      pIVar4 = *(InternalPacket **)(*(int *)this + -4 + iVar7 * 4);
    }
    else {
      pIVar4 = *(InternalPacket **)(*(int *)this + -4 + iVar5 * 4);
    }
    FreeInternalPacketData(this,pIVar4,in_stack_ffffffd0,(uint)pIVar11);
    in_stack_ffffffd0 = (char *)0x5989c8;
    ReleaseToInternalPacketPool(this,pIVar4);
    pIVar11 = pIVar4;
  }
  pIVar11 = *(InternalPacket **)this;
  operator_delete__(pIVar11);
  pcVar10 = (char *)0x80;
  pvVar3 = operator_new__(0x80);
  *(void **)this = pvVar3;
  *(undefined4 *)(this + 0xc) = 0x20;
  *(undefined4 *)(this + 4) = 0;
  pRVar9 = this + 0xbb0;
  *(undefined4 *)(this + 8) = 0;
  local_18 = 0x20;
  do {
    local_14 = 0;
    if (*(uint *)(pRVar9 + -4) != 0) {
      iVar7 = 0;
      do {
        FreeInternalPacketData
                  (this,*(InternalPacket **)(*(uint *)(pRVar9 + -8) + 8 + iVar7),pcVar10,
                   (uint)pIVar11);
        pIVar11 = *(InternalPacket **)(*(uint *)(pRVar9 + -8) + 8 + iVar7);
        pcVar10 = (char *)0x598a31;
        ReleaseToInternalPacketPool(this,pIVar11);
        iVar7 = iVar7 + 0x10;
        local_14 = local_14 + 1;
      } while (local_14 < *(uint *)(pRVar9 + -4));
    }
    if (*(uint *)pRVar9 != 0) {
      if (0x200 < *(uint *)pRVar9) {
        pIVar11 = *(InternalPacket **)(pRVar9 + -8);
        pcVar10 = (char *)0x598a58;
        operator_delete__(pIVar11);
        *(uint *)pRVar9 = 0;
        *(uint *)(pRVar9 + -8) = 0;
      }
      *(uint *)(pRVar9 + -4) = 0;
    }
    pRVar9 = pRVar9 + 0x10;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  uVar12.val = 0x800;
  pcVar10 = (char *)0x0;
  memset(this + 0x68,0,0x800);
  *(undefined4 *)(this + 0x990) = 0;
  *(undefined4 *)(this + 0x998) = 0;
  *(undefined4 *)(this + 0x99c) = 0;
  pIVar11 = *(InternalPacket **)(this + 0x868);
  if (*(InternalPacket **)(this + 0x868) != (InternalPacket *)0x0) {
    while( true ) {
      if (*(int *)(pIVar11 + 0x44) != 0) {
        FreeInternalPacketData(this,pIVar11,pcVar10,uVar12.val);
      }
      pIVar4 = *(InternalPacket **)(pIVar11 + 0x60);
      if (pIVar4 == *(InternalPacket **)(this + 0x868)) break;
      pcVar10 = (char *)0x598adb;
      uVar12.val = (uint)pIVar11;
      ReleaseToInternalPacketPool(this,pIVar11);
      pIVar11 = pIVar4;
    }
    pcVar10 = (char *)0x598ae2;
    ReleaseToInternalPacketPool(this,pIVar11);
    *(undefined4 *)(this + 0x868) = 0;
    uVar12.val = (uint)pIVar11;
  }
  uVar6 = 0;
  *(undefined4 *)(this + 0xef0) = 0;
  if (*(int *)(this + 0x878) != 0) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(this + 0x874);
      pIVar11 = *(InternalPacket **)(iVar5 + 8 + iVar7);
      if (*(int *)(pIVar11 + 0x44) != 0) {
        FreeInternalPacketData(this,pIVar11,pcVar10,uVar12.val);
        iVar5 = *(int *)(this + 0x874);
      }
      uVar12.val = *(undefined4 *)(iVar5 + 8 + iVar7);
      pcVar10 = (char *)0x598b2e;
      ReleaseToInternalPacketPool(this,(InternalPacket *)uVar12.val);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while (uVar6 < *(uint *)(this + 0x878));
  }
  if (*(uint *)(this + 0x87c) != 0) {
    if (0x200 < *(uint *)(this + 0x87c)) {
      uVar12.val = *(uint *)(this + 0x874);
      pcVar10 = (char *)0x598b56;
      operator_delete__((void *)uVar12.val);
      *(undefined4 *)(this + 0x87c) = 0;
      *(undefined4 *)(this + 0x874) = 0;
    }
    *(undefined4 *)(this + 0x878) = 0;
  }
  if (*(int *)(this + 0x4c) != 0) {
    uVar12.val = *(uint *)(this + 0x44);
    pcVar10 = (char *)0x598b85;
    operator_delete__((void *)uVar12.val);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  this_00 = (List<> *)(this + 0xef4);
  if (*(int *)(this + 0xefc) != 0) {
    uVar12.val = *(uint *)this_00;
    pcVar10 = (char *)0x598bb3;
    operator_delete__((void *)uVar12.val);
    *(undefined4 *)(this + 0xefc) = 0;
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this + 0xef8) = 0;
  }
  uVar6 = 0x200;
  DataStructures::List<>::Preallocate(this_00,0x200,pcVar10,uVar12.val);
  if (*(int *)(this + 0xf08) != 0) {
    uVar12.val = *(uint *)(this + 0xf00);
    pcVar10 = (char *)0x598bee;
    operator_delete__((void *)uVar12.val);
    *(undefined4 *)(this + 0xf08) = 0;
    *(undefined4 *)(this + 0xf00) = 0;
    *(undefined4 *)(this + 0xf04) = 0;
  }
  pIVar11 = (InternalPacket *)0x10;
  do {
    pIVar11 = (InternalPacket *)((int)pIVar11 * 2);
  } while (pIVar11 < (InternalPacket *)0x200);
  if (*(InternalPacket **)(this + 0xf08) < pIVar11) {
    *(InternalPacket **)(this + 0xf08) = pIVar11;
    if (pIVar11 == (InternalPacket *)0x0) {
      pvVar3 = (void *)0x0;
      pIVar11 = (InternalPacket *)uVar12.val;
    }
    else {
      pcVar10 = (char *)0x598c4b;
      pvVar3 = operator_new__((uint)pIVar11);
    }
    pIVar4 = *(InternalPacket **)(this + 0xf00);
    uVar12.val = (uint)pIVar11;
    if (pIVar4 != (InternalPacket *)0x0) {
      uVar8 = 0;
      if (*(int *)(this + 0xf04) != 0) {
        do {
          *(undefined1 *)(uVar8 + (int)pvVar3) = *(undefined1 *)(uVar8 + *(int *)(this + 0xf00));
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(this + 0xf04));
        pIVar4 = *(InternalPacket **)(this + 0xf00);
      }
      pcVar10 = (char *)0x598c85;
      operator_delete__(pIVar4);
      uVar12.val = (uint)pIVar4;
    }
    *(void **)(this + 0xf00) = pvVar3;
  }
  pLVar2 = (List<> *)(this + 0xf0c);
  if (*(int *)(this + 0xf14) != 0) {
    uVar12.val = *(uint *)pLVar2;
    pcVar10 = (char *)0x598ca4;
    operator_delete__((void *)uVar12.val);
    *(undefined4 *)(this + 0xf14) = 0;
    *(undefined4 *)pLVar2 = 0;
    *(undefined4 *)(this + 0xf10) = 0;
  }
  DataStructures::List<>::Preallocate(pLVar2,uVar6,pcVar10,uVar12.val);
  pLVar2 = (List<> *)(this + 0xf24);
  if (*(int *)(this + 0xf2c) != 0) {
    uVar12.val = *(uint *)pLVar2;
    pcVar10 = (char *)0x598cdb;
    operator_delete__((void *)uVar12.val);
    *(undefined4 *)(this + 0xf2c) = 0;
    *(undefined4 *)pLVar2 = 0;
    *(undefined4 *)(this + 0xf28) = 0;
  }
  DataStructures::List<>::Preallocate(pLVar2,uVar6,pcVar10,uVar12.val);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x54),pcVar10,uVar12.val);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0xf7c),pcVar10,uVar12.val);
  while( true ) {
    uVar6 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x28) < uVar6) {
      iVar7 = *(int *)(this + 0x2c) - uVar6;
    }
    else {
      iVar7 = -uVar6;
    }
    if (*(uint *)(this + 0x28) + iVar7 == 0) break;
    uVar12.val = *(uint *)(this + 0x50);
    pcVar10 = (char *)0x598d3d;
    RemoveFromDatagramHistory(this,uVar12);
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    if (*(int *)(this + 0x24) == *(int *)(this + 0x2c)) {
      *(undefined4 *)(this + 0x24) = 0;
    }
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
    this[0x53] = (ReliabilityLayer)0x0;
  }
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x30),pcVar10,uVar12.val);
  *(undefined4 *)(this + 0x50) = 0;
  this[0x53] = (ReliabilityLayer)0x0;
  if (*(uint *)(this + 0xf68) != 0) {
    if (0x200 < *(uint *)(this + 0xf68)) {
      pvVar3 = *(void **)(this + 0xf60);
      if (pvVar3 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar3 + -4);
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar3,8,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 8 + 4);
      }
      *(undefined4 *)(this + 0xf68) = 0;
      *(undefined4 *)(this + 0xf60) = 0;
    }
    *(undefined4 *)(this + 0xf64) = 0;
  }
  if (*(uint *)(this + 0xf74) != 0) {
    if (0x200 < *(uint *)(this + 0xf74)) {
      pvVar3 = *(void **)(this + 0xf6c);
      if (pvVar3 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar3 + -4);
        local_8 = 1;
        _eh_vector_destructor_iterator_(pvVar3,8,*puVar1,DataStructures::RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 8 + 4);
      }
      *(undefined4 *)(this + 0xf74) = 0;
      *(undefined4 *)(this + 0xf6c) = 0;
    }
    *(undefined4 *)(this + 0xf70) = 0;
  }
  *(undefined4 *)(this + 0x86c) = 0;
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall RakNet::ReliabilityLayer::HandleSocketReceiveFromConnectedPlayer(char
// const *,unsigned int,struct RakNet::SystemAddress &,class DataStructures::List<class
// RakNet::PluginInterface2 *> &,int,class RakNet::RakNetSocket2 *,class RakNet::RakNetRandom
// *,unsigned __int64,class RakNet::BitStream &)

bool __thiscall
RakNet::ReliabilityLayer::HandleSocketReceiveFromConnectedPlayer
          (ReliabilityLayer *this,char *param_1,uint param_2,SystemAddress *param_3,List<> *param_4,
          int param_5,RakNetSocket2 *param_6,RakNetRandom *param_7,__uint64 param_8,
          BitStream *param_9)

{
  RangeList<> *this_00;
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  Queue<> *pQVar14;
  bool bVar15;
  InternalPacket IVar16;
  undefined1 uVar17;
  BitStream *pBVar18;
  uint *puVar19;
  HuffmanEncodingTreeNode *pHVar20;
  HuffmanEncodingTreeNode *pHVar21;
  int iVar22;
  MessageNumberNode *pMVar23;
  void *pvVar24;
  HuffmanEncodingTreeNode **ppHVar25;
  undefined1 *puVar26;
  InternalPacket *pIVar27;
  char *pcVar28;
  HuffmanEncodingTreeNode **ppHVar29;
  Queue<bool> *extraout_ECX;
  Queue<bool> *extraout_ECX_00;
  Queue<bool> *pQVar30;
  Queue<bool> *extraout_ECX_01;
  HuffmanEncodingTreeNode *extraout_ECX_02;
  uint uVar31;
  uint24_t uVar32;
  List<> *pLVar33;
  InternalPacket *pIVar34;
  uint uVar35;
  double in_XMM0_Qa;
  double dVar36;
  __uint64 _Var37;
  undefined8 uVar38;
  HuffmanEncodingTreeNode *in_stack_00000020;
  RakNetRandom *pRVar39;
  undefined1 local_190 [4];
  __uint64 ping;
  __uint64 weight;
  uint *local_17c;
  uint24_t local_174;
  SystemAddress *local_170;
  RakNetRandom *local_16c;
  HuffmanEncodingTreeNode *local_168;
  HuffmanEncodingTreeNode *local_164;
  List<> *local_160;
  uint local_15c;
  InternalPacket *ackReceipt;
  InternalPacket local_151;
  undefined1 local_150 [4];
  InternalPacket *internalPacket;
  uint local_148;
  BitStream socketData;
  undefined1 local_30 [5];
  char cStack_2b;
  undefined4 local_28;
  RangeList<> incomingNAKs;
  
  incomingNAKs._4_4_ = &stack0xfffffffc;
  incomingNAKs._8_4_ = ExceptionList;
  pBVar18 = (BitStream *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &incomingNAKs.field_0x8;
  local_17c = (uint *)param_1;
  local_170 = param_3;
  local_174.val = param_2;
  local_160 = param_4;
  local_168 = in_stack_00000020;
  local_16c = (RakNetRandom *)param_8;
  weight._0_4_ = (Queue<> *)this;
  incomingNAKs._0_4_ = pBVar18;
  BPSTracker::Push1((BPSTracker *)(this + 0x1050),
                    CONCAT44((RakNetRandom *)param_8,in_stack_00000020),(ulonglong)param_2);
  pLVar33 = local_160;
  if ((local_174.val < (HuffmanEncodingTreeNode *)0x3) || (local_17c == (uint *)0x0)) {
    uVar35 = 0;
    if (*(int *)(local_160 + 4) != 0) {
      do {
        uVar12._0_2_ = local_170->debugPort;
        uVar12._2_2_ = local_170->systemIndex;
        (**(code **)(**(int **)(*(int *)local_160 + uVar35 * 4) + 0x34))
                  ("length <= 2 || buffer == 0",(short)(local_174.val * 8),*(undefined4 *)local_170,
                   *(undefined4 *)&local_170->field_0x4,*(undefined4 *)&local_170->field_0x8,
                   *(undefined4 *)&local_170->field_0xc,uVar12,1);
        uVar35 = uVar35 + 1;
      } while (uVar35 < *(uint *)(local_160 + 4));
    }
    goto LAB_0059a1ea;
  }
  _Var37 = GetTimeUS_Windows();
  uVar38 = __aulldiv((uint)_Var37,(uint)(_Var37 >> 0x20),1000,0);
  *(int *)(this + 0x870) = (int)uVar38;
  memset(local_150,0,0x114);
  weight._4_4_ = (InternalPacket *)(local_174.val << 3);
  local_148 = 0;
  socketData.numberOfBitsAllocated._0_1_ = '\0';
  socketData.numberOfBitsUsed = (uint)local_17c;
  local_150 = (undefined1  [4])weight._4_4_;
  internalPacket = weight._4_4_;
  DatagramHeaderFormat::Deserialize
            ((DatagramHeaderFormat *)(socketData.stackData + 0xff),(BitStream *)local_150);
  if (local_28._2_1_ == '\0') {
    uVar35 = 0;
    if (*(int *)(pLVar33 + 4) != 0) {
      do {
        uVar2._0_2_ = local_170->debugPort;
        uVar2._2_2_ = local_170->systemIndex;
        (**(code **)(**(int **)(*(int *)pLVar33 + uVar35 * 4) + 0x34))
                  ("dhf.isValid==false",(short)weight._4_4_,*(undefined4 *)local_170,
                   *(undefined4 *)&local_170->field_0x4,*(undefined4 *)&local_170->field_0x8,
                   *(undefined4 *)&local_170->field_0xc,uVar2,1);
        uVar35 = uVar35 + 1;
        pLVar33 = local_160;
      } while (uVar35 < *(uint *)(local_160 + 4));
    }
    local_151 = (InternalPacket)0x1;
  }
  else if (local_30[4] == '\0') {
    if (cStack_2b == '\0') {
      if (*(int *)(this + 0xeb8) == 0 && *(int *)(this + 0xebc) == 0) {
        *(HuffmanEncodingTreeNode **)(this + 0xeb8) = local_168;
        *(RakNetRandom **)(this + 0xebc) = local_16c;
      }
      if (socketData._272_4_ == *(int *)(this + 0xecc)) {
        *(uint *)(this + 0xecc) = socketData._272_4_ + 1 & 0xffffff;
      }
      else {
        if ((*(int *)(this + 0xecc) - socketData._272_4_ & 0xffffffU) < 0x800000) {
          local_15c = 0;
        }
        else {
          local_15c = socketData._272_4_ - *(int *)(this + 0xecc) & 0xffffff;
          if (1000 < local_15c) {
            if (50000 < local_15c) {
              uVar35 = 0;
              if (*(int *)(pLVar33 + 4) != 0) {
                do {
                  uVar7._0_2_ = local_170->debugPort;
                  uVar7._2_2_ = local_170->systemIndex;
                  (**(code **)(**(int **)(*(int *)pLVar33 + uVar35 * 4) + 0x34))
                            ("congestionManager.OnGotPacket failed",(short)weight._4_4_,
                             *(undefined4 *)local_170,*(undefined4 *)&local_170->field_0x4,
                             *(undefined4 *)&local_170->field_0x8,
                             *(undefined4 *)&local_170->field_0xc,uVar7,1);
                  uVar35 = uVar35 + 1;
                  pLVar33 = local_160;
                } while (uVar35 < *(uint *)(local_160 + 4));
              }
              local_151 = (InternalPacket)0x1;
              goto LAB_00599a34;
            }
            local_15c = 1000;
          }
          *(uint *)(this + 0xecc) = socketData._272_4_ + 1 & 0xffffff;
        }
        if (local_15c != 0) {
          this_00 = (RangeList<> *)(this + 0xf6c);
          uVar35 = local_15c;
          do {
            DataStructures::RangeList<>::Insert
                      (this_00,(uint24_t)(socketData._272_4_ - uVar35 & 0xffffff));
            uVar35 = uVar35 - 1;
            this = (ReliabilityLayer *)(Queue<> *)weight;
          } while (uVar35 != 0);
        }
      }
      *(undefined1 *)&((Queue<> *)((int)this + 0xf70))->tail = local_28._1_1_;
      ((Queue<> *)((int)this + 0xe90))->tail = 0;
      ((Queue<> *)((int)this + 0xe90))->allocation_size = 0;
      DataStructures::RangeList<>::Insert
                ((RangeList<> *)((int)this + 0xf60),(uint24_t)socketData._272_4_);
      pHVar20 = local_168;
      pRVar39 = local_16c;
      ackReceipt = CreateInternalPacketFromBitStream
                             (this,(BitStream *)local_150,CONCAT44(pBVar18,local_16c));
      pLVar33 = local_160;
      if (ackReceipt != (InternalPacket *)0x0) {
        do {
          local_15c = 0;
          if (*(int *)(local_160 + 4) != 0) {
            uVar38 = __aulldiv((uint)local_168,(uint)local_16c,1000,0);
            do {
              local_174.val = (uint)((ulonglong)uVar38 >> 0x20);
              local_164 = (HuffmanEncodingTreeNode *)uVar38;
              pRVar39 = (RakNetRandom *)0x0;
              uVar9._0_2_ = local_170->debugPort;
              uVar9._2_2_ = local_170->systemIndex;
              pHVar20 = local_164;
              (**(code **)(**(int **)(*(int *)local_160 + local_15c * 4) + 0x38))
                        (ackReceipt,((Queue<> *)((int)this + 0xe80))->tail,
                         (short)*(undefined8 *)local_170,
                         (int)((ulonglong)*(undefined8 *)local_170 >> 0x20),
                         (int)*(undefined8 *)&local_170->field_0x8,
                         (int)((ulonglong)*(undefined8 *)&local_170->field_0x8 >> 0x20),uVar9);
              uVar38 = CONCAT44(local_174.val,local_164);
              local_15c = local_15c + 1;
            } while (local_15c < *(uint *)(local_160 + 4));
          }
          pIVar27 = ackReceipt;
          if ((char)((Queue<> *)((int)this + 0xe30))->allocation_size != '\0') {
            operator_delete__((void *)((Queue<> *)((int)this + 0xe20))->tail);
            pRVar39 = (RakNetRandom *)0x200;
            pHVar20 = (HuffmanEncodingTreeNode *)0x599904;
            pvVar24 = operator_new__(0x200);
            ((Queue<> *)((int)this + 0xe20))->tail = (uint)pvVar24;
            ((Queue<> *)((int)this + 0xe30))->head = 0x200;
            ((Queue<> *)((int)this + 0xe20))->allocation_size = 0;
            ((Queue<> *)((int)this + 0xe30))->array = (HuffmanEncodingTreeNode **)0x0;
            ((Queue<> *)((int)this + 0xe30))->tail = 0;
            *(undefined2 *)((int)&((Queue<> *)((int)this + 0xe30))->tail + 3) = 0;
          }
          pIVar34 = ackReceipt;
          iVar22 = *(int *)(pIVar27 + 0x1c);
          if ((((iVar22 == 4) || (iVar22 == 1)) || (iVar22 == 3)) && (0x1f < (byte)pIVar27[0xc])) {
            local_164 = (HuffmanEncodingTreeNode *)0x0;
            if (*(int *)(local_160 + 4) != 0) {
              uVar35 = 0;
              do {
                uVar10._0_2_ = local_170->debugPort;
                uVar10._2_2_ = local_170->systemIndex;
                (**(code **)(**(int **)(*(int *)local_160 + uVar35 * 4) + 0x34))
                          ("internalPacket->orderingChannel >= NUMBER_OF_ORDERED_STREAMS",
                           (short)weight._4_4_,(int)*(undefined8 *)local_170,
                           (int)((ulonglong)*(undefined8 *)local_170 >> 0x20),
                           (int)*(undefined8 *)&local_170->field_0x8,
                           (int)((ulonglong)*(undefined8 *)&local_170->field_0x8 >> 0x20),uVar10,1);
                uVar35 = uVar35 + 1;
                pIVar27 = ackReceipt;
                this = (ReliabilityLayer *)(Queue<> *)weight;
              } while (uVar35 < *(uint *)(local_160 + 4));
            }
LAB_005999c6:
            pRVar39 = (RakNetRandom *)0x0;
            pHVar20 = (HuffmanEncodingTreeNode *)(*(int *)(pIVar27 + 0x18) + 7U >> 3);
            BPSTracker::Push1((BPSTracker *)((int)this + 0x1010),CONCAT44(local_16c,local_168),
                              ZEXT48(pHVar20));
            pIVar34 = pIVar27;
LAB_005999e9:
            FreeInternalPacketData(this,pIVar34,(char *)pHVar20,(uint)pRVar39);
            ReleaseToInternalPacketPool(this,pIVar34);
          }
          else {
            if (((iVar22 == 2) || (iVar22 == 4)) || (iVar22 == 3)) {
              uVar35 = *(int *)pIVar27 - ((Queue<> *)((int)this + 0xe30))->tail & 0xffffff;
              if (uVar35 != 0) {
                if (uVar35 < 0x800000) {
                  ppHVar29 = (HuffmanEncodingTreeNode **)
                             ((Queue<> *)((int)this + 0xe20))->allocation_size;
                  if (((Queue<> *)((int)this + 0xe30))->array < ppHVar29) {
                    iVar22 = ((Queue<> *)((int)this + 0xe30))->head - (int)ppHVar29;
                  }
                  else {
                    iVar22 = -(int)ppHVar29;
                  }
                  pIVar27 = ackReceipt;
                  if (uVar35 < (uint)((int)((Queue<> *)((int)this + 0xe30))->array + iVar22)) {
                    pHVar21 = (HuffmanEncodingTreeNode *)((Queue<> *)((int)this + 0xe30))->head;
                    local_164 = (HuffmanEncodingTreeNode *)((int)ppHVar29 + uVar35);
                    if (local_164 < pHVar21) {
                      local_174.val = ((Queue<> *)((int)this + 0xe20))->tail + (int)ppHVar29;
                      ppHVar25 = (HuffmanEncodingTreeNode **)((int)ppHVar29 - (int)pHVar21);
                    }
                    else {
                      ppHVar25 = (HuffmanEncodingTreeNode **)((int)ppHVar29 - (int)pHVar21);
                      local_174.val = ((Queue<> *)((int)this + 0xe20))->tail + (int)ppHVar25;
                      pHVar21 = (HuffmanEncodingTreeNode *)((Queue<> *)((int)this + 0xe30))->head;
                    }
                    this = (ReliabilityLayer *)(Queue<> *)weight;
                    if (((uchar *)local_174.val)[uVar35] != '\0') {
                      if (local_164 < pHVar21) {
                        ppHVar25 = ppHVar29;
                      }
                      *(undefined1 *)((int)ppHVar25 + uVar35 + ((Queue<> *)weight)[0xe2].tail) = 0;
                      goto LAB_00599cb0;
                    }
                  }
                  else {
                    if (uVar35 < 0xf4241) {
                      while( true ) {
                        ppHVar29 = (HuffmanEncodingTreeNode **)
                                   ((Queue<> *)((int)this + 0xe20))->allocation_size;
                        if (((Queue<> *)((int)this + 0xe30))->array < ppHVar29) {
                          iVar22 = ((Queue<> *)((int)this + 0xe30))->head - (int)ppHVar29;
                        }
                        else {
                          iVar22 = -(int)ppHVar29;
                        }
                        if (uVar35 <= (uint)((int)((Queue<> *)((int)this + 0xe30))->array + iVar22))
                        break;
                        local_151 = (InternalPacket)0x1;
                        DataStructures::Queue<bool>::Push
                                  ((Queue<bool> *)&((Queue<> *)((int)this + 0xe20))->tail,
                                   (bool *)&local_151,(char *)pHVar20,(uint)pRVar39);
                      }
                      local_151 = (InternalPacket)0x0;
                      DataStructures::Queue<bool>::Push
                                ((Queue<bool> *)&((Queue<> *)((int)this + 0xe20))->tail,
                                 (bool *)&local_151,(char *)pHVar20,(uint)pRVar39);
                      goto LAB_00599cb0;
                    }
                    local_164 = (HuffmanEncodingTreeNode *)0x0;
                    if (*(int *)(local_160 + 4) != 0) {
                      uVar35 = 0;
                      do {
                        uVar11._0_2_ = local_170->debugPort;
                        uVar11._2_2_ = local_170->systemIndex;
                        (**(code **)(**(int **)(*(int *)local_160 + uVar35 * 4) + 0x34))
                                  ("holeCount > 1000000",(short)weight._4_4_,
                                   (int)*(undefined8 *)local_170,
                                   (int)((ulonglong)*(undefined8 *)local_170 >> 0x20),
                                   (int)*(undefined8 *)&local_170->field_0x8,
                                   (int)((ulonglong)*(undefined8 *)&local_170->field_0x8 >> 0x20),
                                   uVar11,1);
                        uVar35 = uVar35 + 1;
                        pIVar27 = ackReceipt;
                        this = (ReliabilityLayer *)(Queue<> *)weight;
                      } while (uVar35 < *(uint *)(local_160 + 4));
                    }
                  }
                  goto LAB_005999c6;
                }
                pRVar39 = (RakNetRandom *)0x0;
                pHVar20 = (HuffmanEncodingTreeNode *)(*(int *)(ackReceipt + 0x18) + 7U >> 3);
                BPSTracker::Push1((BPSTracker *)((int)this + 0x1010),CONCAT44(local_16c,local_168),
                                  ZEXT48(pHVar20));
                local_164 = (HuffmanEncodingTreeNode *)0x0;
                if (*(int *)(local_160 + 4) != 0) {
                  uVar35 = 0;
                  do {
                    pRVar39 = (RakNetRandom *)0x0;
                    pHVar20 = *(HuffmanEncodingTreeNode **)&local_170->debugPort;
                    (**(code **)(**(int **)(*(int *)local_160 + uVar35 * 4) + 0x34))
                              ("holeCount > typeRange/(DatagramSequenceNumberType) 2",
                               (short)weight._4_4_,(int)*(undefined8 *)local_170,
                               (int)((ulonglong)*(undefined8 *)local_170 >> 0x20),
                               (int)*(undefined8 *)&local_170->field_0x8,
                               (int)((ulonglong)*(undefined8 *)&local_170->field_0x8 >> 0x20));
                    uVar35 = uVar35 + 1;
                    pIVar34 = ackReceipt;
                    this = (ReliabilityLayer *)(Queue<> *)weight;
                  } while (uVar35 < *(uint *)(local_160 + 4));
                }
                goto LAB_005999e9;
              }
              ppHVar29 = (HuffmanEncodingTreeNode **)
                         ((Queue<> *)((int)this + 0xe20))->allocation_size;
              if (((Queue<> *)((int)this + 0xe30))->array < ppHVar29) {
                iVar22 = ((Queue<> *)((int)this + 0xe30))->head - (int)ppHVar29;
              }
              else {
                iVar22 = -(int)ppHVar29;
              }
              if ((int)((Queue<> *)((int)this + 0xe30))->array + iVar22 == 0) goto LAB_00599cf9;
              do {
                ((Queue<> *)((int)this + 0xe20))->allocation_size = (int)ppHVar29 + 1U;
                if ((int)ppHVar29 + 1U == ((Queue<> *)((int)this + 0xe30))->head) {
                  ((Queue<> *)((int)this + 0xe20))->allocation_size = 0;
                }
LAB_00599cf9:
                ((Queue<> *)((int)this + 0xe30))->tail = ((Queue<> *)((int)this + 0xe30))->tail + 1;
                *(undefined1 *)((int)&((Queue<> *)((int)this + 0xe30))->tail + 3) = 0;
LAB_00599cb0:
                ppHVar29 = (HuffmanEncodingTreeNode **)
                           ((Queue<> *)((int)this + 0xe20))->allocation_size;
                if (((Queue<> *)((int)this + 0xe30))->array < ppHVar29) {
                  iVar22 = ((Queue<> *)((int)this + 0xe30))->head - (int)ppHVar29;
                }
                else {
                  iVar22 = -(int)ppHVar29;
                }
                pIVar27 = ackReceipt;
              } while (((int)((Queue<> *)((int)this + 0xe30))->array + iVar22 != 0) &&
                      (*(char *)((int)ppHVar29 + ((Queue<> *)((int)this + 0xe20))->tail) == '\0'));
            }
            uVar35 = ((Queue<> *)((int)this + 0xe30))->head;
            if (0x200 < uVar35) {
              ppHVar29 = (HuffmanEncodingTreeNode **)
                         ((Queue<> *)((int)this + 0xe20))->allocation_size;
              if (((Queue<> *)((int)this + 0xe30))->array < ppHVar29) {
                iVar22 = uVar35 - (int)ppHVar29;
              }
              else {
                iVar22 = -(int)ppHVar29;
              }
              if ((uint)(((int)((Queue<> *)((int)this + 0xe30))->array + iVar22) * 3) < uVar35) {
                local_17c = &((Queue<> *)((int)this + 0xe30))->head;
                if (((Queue<> *)((int)this + 0xe30))->head != 0) {
                  local_15c = 1;
                  uVar35 = DataStructures::Queue<bool>::Size
                                     ((Queue<bool> *)&((Queue<> *)((int)this + 0xe20))->tail);
                  if (uVar35 == 0) {
                    uVar35 = 1;
LAB_00599d95:
                    local_174.val = (uint)operator_new__(uVar35);
                    pQVar30 = (Queue<bool> *)&((Queue<> *)((int)this + 0xe20))->tail;
                  }
                  else {
                    do {
                      local_15c = local_15c * 2;
                    } while (local_15c <= uVar35);
                    uVar35 = local_15c;
                    if (local_15c != 0) goto LAB_00599d95;
                    local_174.val = 0;
                    pQVar30 = extraout_ECX;
                  }
                  local_164 = (HuffmanEncodingTreeNode *)0x0;
                  uVar35 = DataStructures::Queue<bool>::Size(pQVar30);
                  pQVar30 = extraout_ECX_00;
                  pHVar20 = local_164;
                  if (uVar35 != 0) {
                    do {
                      ((<> *)&pHVar20->value)[local_174.val] =
                           *(<> *)((uint)((<> *)&pHVar20->value + *(int *)(pQVar30 + 4)) %
                                   *local_17c + *(int *)pQVar30);
                      pHVar20 = (HuffmanEncodingTreeNode *)&pHVar20->field_0x1;
                      puVar26 = (undefined1 *)DataStructures::Queue<bool>::Size(pQVar30);
                      pQVar30 = extraout_ECX_01;
                      pIVar27 = ackReceipt;
                      this = (ReliabilityLayer *)(Queue<> *)weight;
                    } while (pHVar20 < puVar26);
                  }
                  if (*(uint *)(pQVar30 + 8) < *(uint *)(pQVar30 + 4)) {
                    iVar22 = *local_17c - *(int *)(pQVar30 + 4);
                  }
                  else {
                    iVar22 = -*(uint *)(pQVar30 + 4);
                  }
                  pRVar39 = *(RakNetRandom **)pQVar30;
                  *(uint *)(pQVar30 + 8) = *(uint *)(pQVar30 + 8) + iVar22;
                  *(undefined4 *)(pQVar30 + 4) = 0;
                  *local_17c = local_15c;
                  pHVar20 = (HuffmanEncodingTreeNode *)0x599e30;
                  operator_delete__(pRVar39);
                  ((Queue<> *)((int)this + 0xe20))->tail = local_174.val;
                }
              }
            }
            if (*(int *)(pIVar27 + 0x14) == 0) {
LAB_00599eaa:
              iVar22 = *(int *)(pIVar27 + 0x1c);
              if (((iVar22 == 4) || (iVar22 == 1)) || (iVar22 == 3)) {
                local_151 = pIVar27[0xc];
                local_15c = (uint)(byte)local_151;
                uVar31 = *(uint *)(pIVar27 + 4);
                uVar35 = (&((Queue<> *)((int)this + 0xaa0))->tail)[local_15c];
                pIVar34 = pIVar27;
                if (uVar31 != uVar35) {
                  if (uVar35 < 0x800000) {
                    if ((uVar35 - 0x800000 & 0xffffff) <= uVar31) goto LAB_005999e9;
joined_r0x0059a0db:
                    if (uVar31 < uVar35) goto LAB_005999e9;
                  }
                  else if ((uVar35 - 0x7ffffe & 0xffffff) <= uVar31) goto joined_r0x0059a0db;
                  IVar16 = local_151;
                  if (((Queue<> *)((int)this + (local_15c + 0xba) * 0x10))->allocation_size == 0) {
                    (&((Queue<> *)((int)this + 0xda0))->tail)[local_15c] = uVar35;
                    uVar31 = *(uint *)(pIVar27 + 4);
                    IVar16 = pIVar27[0xc];
                  }
                  local_174.val = (uint)(byte)IVar16;
                  lVar13 = (ulonglong)
                           (uVar31 - (&((Queue<> *)((int)this + 0xda0))->tail)[local_174.val] &
                           0xffffff) * 0x100000;
                  local_164 = (HuffmanEncodingTreeNode *)lVar13;
                  if ((*(int *)(pIVar27 + 0x1c) == 4) || (*(int *)(pIVar27 + 0x1c) == 1)) {
                    _local_190 = lVar13 + (ulonglong)*(uint *)(pIVar27 + 8);
                  }
                  else {
                    _local_190 = lVar13 + 0xfffff;
                  }
                  DataStructures::Heap<>::Push
                            ((Heap<> *)
                             &((Queue<> *)
                              ((int)this +
                              (undefined1 *)
                              ((int)&((HuffmanEncodingTreeNode *)(local_174.val + 0xb4))->weight + 2
                              ) * 0x10))->tail,(__uint64 *)local_190,&ackReceipt,(char *)pHVar20,
                             (uint)pRVar39);
                  goto LAB_005999fc;
                }
                if ((iVar22 != 4) && (iVar22 != 1)) {
                  uVar35 = 0;
                  pcVar28 = (char *)(*(int *)(pIVar27 + 0x18) + 7U >> 3);
                  BPSTracker::Push1((BPSTracker *)((int)this + 0xff0),CONCAT44(local_16c,local_168),
                                    ZEXT48(pcVar28));
                  DataStructures::Queue<>::Push
                            ((Queue<> *)this,(HuffmanEncodingTreeNode **)&ackReceipt,pcVar28,uVar35)
                  ;
                  IVar16 = pIVar27[0xc];
                  (&((Queue<> *)((int)this + 0xaa0))->tail)[(byte)IVar16] =
                       (&((Queue<> *)((int)this + 0xaa0))->tail)[(byte)IVar16] + 1;
                  *(undefined1 *)
                   ((int)&((Queue<> *)((int)this + 0xaa0))->tail + (uint)(byte)IVar16 * 4 + 3) = 0;
                  (&((Queue<> *)((int)this + 0xb20))->tail)[(byte)pIVar27[0xc]] = 0;
                  IVar16 = pIVar27[0xc];
                  uVar35 = ((Queue<> *)((int)this + ((byte)IVar16 + 0xba) * 0x10))->allocation_size;
                  while ((uVar35 != 0 &&
                         (puVar19 = &((Queue<> *)((int)this + ((byte)IVar16 + 0xba) * 0x10))->tail,
                         *(uint *)(*(int *)(*puVar19 + 8) + 4) ==
                         (&((Queue<> *)((int)this + 0xaa0))->tail)[(byte)IVar16]))) {
                    pIVar27 = DataStructures::Heap<>::Pop((Heap<> *)puVar19,(uint)puVar19);
                    uVar35 = 0;
                    pcVar28 = (char *)(*(int *)(pIVar27 + 0x18) + 7U >> 3);
                    ackReceipt = pIVar27;
                    BPSTracker::Push1((BPSTracker *)((int)this + 0xff0),
                                      CONCAT44(local_16c,local_168),ZEXT48(pcVar28));
                    DataStructures::Queue<>::Push
                              ((Queue<> *)this,(HuffmanEncodingTreeNode **)&ackReceipt,pcVar28,
                               uVar35);
                    if (*(int *)(pIVar27 + 0x1c) == 3) {
                      IVar16 = pIVar27[0xc];
                      (&((Queue<> *)((int)this + 0xaa0))->tail)[(byte)IVar16] =
                           (&((Queue<> *)((int)this + 0xaa0))->tail)[(byte)IVar16] + 1;
                      *(undefined1 *)
                       ((int)&((Queue<> *)((int)this + 0xaa0))->tail + (uint)(byte)IVar16 * 4 + 3) =
                           0;
                    }
                    else {
                      (&((Queue<> *)((int)this + 0xb20))->tail)[(byte)pIVar27[0xc]] =
                           *(uint *)(pIVar27 + 8);
                    }
                    IVar16 = pIVar27[0xc];
                    uVar35 = ((Queue<> *)((int)this + ((byte)IVar16 + 0xba) * 0x10))->
                             allocation_size;
                  }
                  goto LAB_005999fc;
                }
                uVar35 = *(uint *)(pIVar27 + 8);
                uVar31 = (&((Queue<> *)((int)this + 0xb20))->tail)[local_15c];
                if (uVar31 < 0x800000) {
                  if ((uVar31 - 0x800000 & 0xffffff) <= uVar35) goto LAB_005999e9;
joined_r0x0059a052:
                  if (uVar35 < uVar31) goto LAB_005999e9;
                }
                else if ((uVar31 - 0x7ffffe & 0xffffff) <= uVar35) goto joined_r0x0059a052;
                (&((Queue<> *)((int)this + 0xb20))->tail)[local_15c] = uVar35 + 1 & 0xffffff;
              }
              uVar35 = 0;
              pcVar28 = (char *)(*(int *)(pIVar27 + 0x18) + 7U >> 3);
              BPSTracker::Push1((BPSTracker *)((int)this + 0xff0),CONCAT44(local_16c,local_168),
                                ZEXT48(pcVar28));
              DataStructures::Queue<>::Push
                        ((Queue<> *)this,(HuffmanEncodingTreeNode **)&ackReceipt,pcVar28,uVar35);
            }
            else {
              iVar22 = *(int *)(pIVar27 + 0x1c);
              if (((iVar22 != 3) && (iVar22 != 4)) && (iVar22 != 1)) {
                pIVar27[0xc] = (InternalPacket)0xff;
              }
              InsertIntoSplitPacketList(this,pIVar27,CONCAT44(pBVar18,local_16c));
              pHVar20 = extraout_ECX_02;
              pRVar39 = param_8._4_4_;
              pIVar27 = BuildPacketFromSplitPacketList
                                  (this,*(ushort *)(pIVar27 + 0xe),CONCAT44(param_6,local_16c),
                                   (RakNetSocket2 *)local_170,(SystemAddress *)extraout_ECX_02,
                                   param_8._4_4_,pBVar18);
              ackReceipt = pIVar27;
              if (pIVar27 != (InternalPacket *)0x0) goto LAB_00599eaa;
            }
          }
LAB_005999fc:
          pHVar20 = local_168;
          pRVar39 = local_16c;
          ackReceipt = CreateInternalPacketFromBitStream
                                 (this,(BitStream *)local_150,CONCAT44(pBVar18,local_16c));
        } while (ackReceipt != (InternalPacket *)0x0);
        goto LAB_00599a26;
      }
      local_174.val = 0;
      ackReceipt = (InternalPacket *)0x0;
      if (*(int *)(local_160 + 4) != 0) {
        do {
          uVar8._0_2_ = local_170->debugPort;
          uVar8._2_2_ = local_170->systemIndex;
          (**(code **)(**(int **)(*(int *)pLVar33 + local_174.val * 4) + 0x34))
                    ("CreateInternalPacketFromBitStream failed",(short)weight._4_4_,
                     *(undefined4 *)local_170,*(undefined4 *)&local_170->field_0x4,
                     *(undefined4 *)&local_170->field_0x8,*(undefined4 *)&local_170->field_0xc,uVar8
                     ,1);
          local_174.val = local_174.val + 1;
        } while (local_174.val < *(undefined1 **)(pLVar33 + 4));
      }
    }
    else {
      local_28 = 0;
      local_30[0] = (OrderedList<>)0x0;
      stack0xffffffd1 = 0;
      bVar15 = DataStructures::RangeList<>::Deserialize
                         ((RangeList<> *)local_30,(BitStream *)local_150);
      if (!bVar15) {
        uVar35 = 0;
        if (*(int *)(pLVar33 + 4) != 0) {
          do {
            uVar5._0_2_ = local_170->debugPort;
            uVar5._2_2_ = local_170->systemIndex;
            (**(code **)(**(int **)(*(int *)pLVar33 + uVar35 * 4) + 0x34))
                      ("incomingNAKs.Deserialize failed",(short)weight._4_4_,
                       *(undefined4 *)local_170,*(undefined4 *)&local_170->field_0x4,
                       *(undefined4 *)&local_170->field_0x8,*(undefined4 *)&local_170->field_0xc,
                       uVar5,1);
            uVar35 = uVar35 + 1;
            pLVar33 = local_160;
          } while (uVar35 < *(uint *)(local_160 + 4));
        }
LAB_00599640:
        DataStructures::RangeList<>::Clear((RangeList<> *)local_30);
        DataStructures::OrderedList<>::~OrderedList<>((OrderedList<> *)local_30);
        local_151 = (InternalPacket)0x0;
        goto LAB_00599a34;
      }
      local_17c = (uint *)0x0;
      if (stack0xffffffd4 != (uint *)0x0) {
        dVar36 = 0.5;
        iVar22 = local_30._0_4_;
        do {
          pLVar33 = local_160;
          uVar32.val = *(uint *)(iVar22 + (int)local_17c * 8);
          if (*(uint *)(iVar22 + 4 + (int)local_17c * 8) < uVar32.val) {
            local_174.val = 0;
            if (*(int *)(local_160 + 4) != 0) {
              do {
                uVar6._0_2_ = local_170->debugPort;
                uVar6._2_2_ = local_170->systemIndex;
                (**(code **)(**(int **)(*(int *)pLVar33 + local_174.val * 4) + 0x34))
                          ("incomingNAKs minIndex>maxIndex",(short)weight._4_4_,
                           *(undefined4 *)local_170,*(undefined4 *)&local_170->field_0x4,
                           *(undefined4 *)&local_170->field_0x8,*(undefined4 *)&local_170->field_0xc
                           ,uVar6,1);
                local_174.val = local_174.val + 1;
              } while (local_174.val < *(undefined1 **)(pLVar33 + 4));
            }
            goto LAB_00599640;
          }
          do {
            local_174.val = uVar32.val;
            if (*(uint *)(iVar22 + 4 + (int)local_17c * 8) < uVar32.val) break;
            if ((this[0xed0] != (ReliabilityLayer)0x0) && (this[0xec8] == (ReliabilityLayer)0x0)) {
              *(double *)(this + 0xeb0) = *(double *)(this + 0xea8) * dVar36;
            }
            pMVar23 = GetMessageNumberNodeByDatagramIndex(this,uVar32,(__uint64 *)local_190);
            for (; pMVar23 != (MessageNumberNode *)0x0;
                pMVar23 = *(MessageNumberNode **)(pMVar23 + 4)) {
              iVar22 = *(int *)(this + (*(uint *)pMVar23 & 0x1ff) * 4 + 0x68);
              if ((iVar22 != 0) && (*(int *)(iVar22 + 0x30) != 0 || *(int *)(iVar22 + 0x34) != 0)) {
                *(HuffmanEncodingTreeNode **)(iVar22 + 0x30) = local_168;
                *(RakNetRandom **)(iVar22 + 0x34) = local_16c;
              }
              uVar32.val = local_174.val;
            }
            uVar32.val = uVar32.val + 1 & 0xffffff;
            iVar22 = local_30._0_4_;
            local_174.val = uVar32.val;
          } while (*(HuffmanEncodingTreeNode **)(local_30._0_4_ + (int)local_17c * 8) <= uVar32.val)
          ;
          local_17c = (uint *)((int)local_17c + 1);
        } while (local_17c < stack0xffffffd4);
      }
      DataStructures::RangeList<>::Clear((RangeList<> *)local_30);
      DataStructures::OrderedList<>::~OrderedList<>((OrderedList<> *)local_30);
LAB_00599a26:
      ((Queue<> *)((int)this + 0xe80))->tail = ((Queue<> *)((int)this + 0xe80))->tail + 1;
    }
    local_151 = (InternalPacket)0x1;
  }
  else {
    DataStructures::RangeList<>::Clear((RangeList<> *)(this + 0xf50));
    bVar15 = DataStructures::RangeList<>::Deserialize
                       ((RangeList<> *)(this + 0xf50),(BitStream *)local_150);
    if (bVar15) {
      local_17c = (uint *)0x0;
      if (*(int *)(this + 0xf54) != 0) {
        ppHVar29 = *(HuffmanEncodingTreeNode ***)(this + 0xf50);
LAB_005990a0:
        pLVar33 = local_160;
        uVar32.val = (uint)ppHVar29[(int)local_17c * 2];
        if ((uVar32.val <= ppHVar29[(int)local_17c * 2 + 1]) &&
           (ppHVar29[(int)local_17c * 2 + 1] != (HuffmanEncodingTreeNode *)0xffffff))
        goto LAB_005990c0;
        local_174.val = 0;
        if (*(int *)(local_160 + 4) != 0) {
          do {
            uVar4._0_2_ = local_170->debugPort;
            uVar4._2_2_ = local_170->systemIndex;
            (**(code **)(**(int **)(*(int *)pLVar33 + local_174.val * 4) + 0x34))
                      ("incomingAcks minIndex > maxIndex or maxIndex is max value",
                       (short)weight._4_4_,*(undefined4 *)local_170,
                       *(undefined4 *)&local_170->field_0x4,*(undefined4 *)&local_170->field_0x8,
                       *(undefined4 *)&local_170->field_0xc,uVar4,1);
            local_174.val = local_174.val + 1;
          } while (local_174.val < *(undefined1 **)(pLVar33 + 4));
        }
        local_151 = (InternalPacket)0x0;
        goto LAB_00599a34;
      }
      goto LAB_00599a26;
    }
    uVar35 = 0;
    if (*(int *)(pLVar33 + 4) != 0) {
      do {
        uVar3._0_2_ = local_170->debugPort;
        uVar3._2_2_ = local_170->systemIndex;
        (**(code **)(**(int **)(*(int *)pLVar33 + uVar35 * 4) + 0x34))
                  ("incomingAcks.Deserialize failed",(short)weight._4_4_,*(undefined4 *)local_170,
                   *(undefined4 *)&local_170->field_0x4,*(undefined4 *)&local_170->field_0x8,
                   *(undefined4 *)&local_170->field_0xc,uVar3,1);
        uVar35 = uVar35 + 1;
        pLVar33 = local_160;
      } while (uVar35 < *(uint *)(local_160 + 4));
    }
    local_151 = (InternalPacket)0x0;
  }
LAB_00599a34:
  if (((char)socketData.numberOfBitsAllocated != '\0') && ((InternalPacket *)0x800 < internalPacket)
     ) {
    free((void *)socketData.numberOfBitsUsed);
  }
LAB_0059a1ea:
  ExceptionList = (void *)incomingNAKs._8_4_;
  uVar17 = __security_check_cookie(incomingNAKs._0_4_ ^ (uint)&stack0xfffffff0);
  return (bool)uVar17;
LAB_005990c0:
  do {
    local_174.val = uVar32.val;
    if (ppHVar29[(int)local_17c * 2 + 1] < uVar32.val) break;
    if (((Queue<> *)((int)this + 0x40))->tail != 0) {
      pQVar14 = (Queue<> *)((int)this + 0x40);
      local_15c = 0;
      ackReceipt = (InternalPacket *)0x0;
      puVar19 = &pQVar14->head;
      do {
        if (*(uint *)(ackReceipt + *puVar19) == uVar32.val) {
          pHVar20 = (HuffmanEncodingTreeNode *)AllocateFromInternalPacketPool(this);
          uVar35 = 5;
          pHVar20[3].right = (HuffmanEncodingTreeNode *)0x0;
          local_164 = pHVar20;
          pHVar21 = malloc(5);
          this = (ReliabilityLayer *)(Queue<> *)weight;
          pHVar20[3].left = pHVar21;
          pHVar20[1].weight = 0x28;
          pHVar21->value = '\x0e';
          pHVar20 = pHVar20[3].left;
          *(undefined4 *)&pHVar20->field_0x1 = *(undefined4 *)(ackReceipt + pQVar14->head + 4);
          DataStructures::Queue<>::Push((Queue<> *)weight,&local_164,(char *)pHVar20,uVar35);
          DataStructures::List<>::RemoveAtIndex
                    ((List<> *)&((Queue<> *)((int)this + 0x40))->head,local_15c);
        }
        else {
          local_15c = local_15c + 1;
          ackReceipt = ackReceipt + 0x10;
        }
        puVar19 = &((Queue<> *)((int)this + 0x40))->head;
      } while (local_15c < ((Queue<> *)((int)this + 0x40))->tail);
    }
    local_164 = (HuffmanEncodingTreeNode *)
                GetMessageNumberNodeByDatagramIndex(this,uVar32,(__uint64 *)local_190);
    if (local_164 != (HuffmanEncodingTreeNode *)0x0) {
      if ((local_16c < (RakNetRandom *)ping) ||
         ((local_16c == (RakNetRandom *)ping && (local_168 <= (uint)local_190)))) {
        in_XMM0_Qa = 0.0;
      }
      local_151 = *(InternalPacket *)&((Queue<> *)((int)this + 0xe70))->tail;
      __ultod3();
      dVar36 = *(double *)((int)this + 0xee0);
      *(double *)&((Queue<> *)((int)this + 0xed0))->tail = in_XMM0_Qa;
      if (dVar36 == -1.0) {
        *(double *)((int)this + 0xee0) = in_XMM0_Qa;
        *(double *)&((Queue<> *)((int)this + 0xee0))->tail = in_XMM0_Qa;
      }
      else {
        uVar35 = (uint)(in_XMM0_Qa - dVar36);
        dVar1 = *(double *)&((Queue<> *)((int)this + 0xee0))->tail;
        uVar31 = (int)uVar35 >> 0x1f;
        *(double *)((int)this + 0xee0) = (in_XMM0_Qa - dVar36) * 0.05 + dVar36;
        in_XMM0_Qa = ((double)(int)((uVar35 ^ uVar31) - uVar31) - dVar1) * 0.05 + dVar1;
        *(double *)&((Queue<> *)((int)this + 0xee0))->tail = in_XMM0_Qa;
      }
      *(InternalPacket *)&((Queue<> *)((int)this + 0xed0))->array = local_151;
      pHVar20 = local_164;
      if (local_151 != (InternalPacket)0x0) {
        if ((((Queue<> *)((int)this + 0xec0))->head == uVar32.val) ||
           ((((Queue<> *)((int)this + 0xec0))->head - uVar32.val & 0xffffff) < 0x800000)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
          *(undefined2 *)&((Queue<> *)((int)this + 0xec0))->tail = 0;
          ((Queue<> *)((int)this + 0xec0))->head = (uint)((Queue<> *)((int)this + 0xec0))->array;
        }
        dVar36 = *(double *)&((Queue<> *)((int)this + 0xea0))->tail;
        in_XMM0_Qa = 0.0;
        dVar1 = *(double *)((int)this + 0xeb0);
        if ((dVar36 <= dVar1) || (dVar1 == 0.0)) {
          ppHVar29 = ((Queue<> *)((int)this + 0xea0))->array;
          dVar36 = (double)(int)ppHVar29 +
                   *(double *)
                    (&__xmm_41f00000000000000000000000000000 + ((int)ppHVar29 >> 0x1f) * -8) +
                   dVar36;
          *(double *)&((Queue<> *)((int)this + 0xea0))->tail = dVar36;
          if ((dVar1 < dVar36) && (dVar1 != 0.0)) {
            in_XMM0_Qa = ((double)((int)ppHVar29 * (int)ppHVar29) +
                         *(double *)
                          (&__xmm_41f00000000000000000000000000000 +
                          ((int)ppHVar29 * (int)ppHVar29 >> 0x1f) * -8)) / dVar36 + dVar1;
            goto LAB_00599366;
          }
        }
        else if (bVar15) {
          iVar22 = (int)((Queue<> *)((int)this + 0xea0))->array *
                   (int)((Queue<> *)((int)this + 0xea0))->array;
          in_XMM0_Qa = ((double)iVar22 +
                       *(double *)(&__xmm_41f00000000000000000000000000000 + (iVar22 >> 0x1f) * -8))
                       / dVar36 + dVar36;
LAB_00599366:
          *(double *)&((Queue<> *)((int)this + 0xea0))->tail = in_XMM0_Qa;
        }
      }
      do {
        RemovePacketFromResendListAndDeleteOlderReliableSequenced
                  (this,(uint24_t)*(uint *)pHVar20,CONCAT44(local_160,local_16c),(List<> *)local_170
                   ,(SystemAddress *)pBVar18);
        uVar32.val = local_174.val;
        puVar19 = &pHVar20->weight;
        pHVar20 = (HuffmanEncodingTreeNode *)*puVar19;
      } while ((HuffmanEncodingTreeNode *)*puVar19 != (HuffmanEncodingTreeNode *)0x0);
      RemoveFromDatagramHistory(this,local_174);
    }
    ppHVar29 = ((Queue<> *)((int)this + 0xf50))->array;
    uVar32.val = uVar32.val + 1 & 0xffffff;
    local_174.val = uVar32.val;
  } while (ppHVar29[(int)local_17c * 2] <= uVar32.val);
  local_17c = (uint *)((int)local_17c + 1);
  if ((uint *)((Queue<> *)((int)this + 0xf50))->head <= local_17c) goto LAB_00599a26;
  goto LAB_005990a0;
}


// public: bool __thiscall RakNet::ReliabilityLayer::Send(char *,unsigned int,enum
// PacketPriority,enum PacketReliability,unsigned char,bool,int,unsigned __int64,unsigned int)

bool __thiscall
RakNet::ReliabilityLayer::Send
          (ReliabilityLayer *this,char *param_1,uint param_2,PacketPriority param_3,
          PacketReliability param_4,uchar param_5,bool param_6,int param_7,__uint64 param_8,
          uint param_9)

{
  int iVar1;
  uint uVar2;
  InternalPacket *pIVar3;
  InternalPacket *pIVar4;
  uint uVar5;
  InternalPacket IVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_stack_00000020;
  char *pcVar9;
  PacketPriority local_1c;
  __uint64 local_18;
  InternalPacket *local_c;
  InternalPacket *internalPacket;
  
  if ((7 < (int)param_4) || ((int)param_4 < 0)) {
    local_18._0_4_ = RELIABLE;
    param_4 = (PacketReliability)local_18;
  }
  local_18 = CONCAT44(local_18._4_4_,param_4);
  local_1c = param_3;
  if ((4 < (int)param_3) || ((int)param_3 < 0)) {
    local_1c = HIGH_PRIORITY;
  }
  IVar6 = (InternalPacket)(-(param_5 < 0x20) & param_5);
  uVar8 = param_2 + 7 >> 3;
  if (param_2 != 0) {
    pIVar3 = AllocateFromInternalPacketPool(this);
    if (pIVar3 != (InternalPacket *)0x0) {
      local_c = pIVar3;
      BPSTracker::Push1((BPSTracker *)(this + 0xf90),CONCAT44((undefined4)param_8,in_stack_00000020)
                        ,(ulonglong)uVar8);
      *(undefined4 *)(pIVar3 + 0x28) = in_stack_00000020;
      *(undefined4 *)(pIVar3 + 0x2c) = (undefined4)param_8;
      if (param_6) {
        if (uVar8 < 0x81) {
          *(undefined4 *)(pIVar3 + 0x48) = 2;
          pIVar4 = pIVar3 + 0x6c;
        }
        else {
          *(undefined4 *)(pIVar3 + 0x48) = 0;
          pIVar4 = malloc(uVar8);
        }
        *(InternalPacket **)(pIVar3 + 0x44) = pIVar4;
        memcpy(pIVar4,param_1,uVar8);
      }
      else {
        *(undefined4 *)(pIVar3 + 0x48) = 0;
        *(char **)(pIVar3 + 0x44) = param_1;
      }
      *(uint *)(pIVar3 + 0x18) = param_2;
      uVar5 = *(uint *)(this + 0x8b8);
      *(uint *)(this + 0x8b8) = uVar5 + 1;
      this[0x8bb] = (ReliabilityLayer)0x0;
      *(uint *)(pIVar3 + 0x20) = uVar5 & 0xffffff;
      *(PacketPriority *)(pIVar3 + 0x54) = local_1c;
      *(PacketReliability *)(pIVar3 + 0x1c) = (PacketReliability)local_18;
      *(undefined4 *)(pIVar3 + 0x58) = param_8._4_4_;
      uVar5 = *(int *)(this + 0xea0) - 0x20;
      local_18 = CONCAT44(local_18._4_4_,uVar5);
      if (uVar5 < uVar8) {
        iVar1 = *(int *)(pIVar3 + 0x1c);
        if (iVar1 == 0) {
          *(undefined4 *)(pIVar3 + 0x1c) = 2;
        }
        else if (iVar1 == 5) {
          *(undefined4 *)(pIVar3 + 0x1c) = 6;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(pIVar3 + 0x1c) = 4;
        }
      }
      iVar1 = *(int *)(pIVar3 + 0x1c);
      if ((iVar1 == 4) || (iVar1 == 1)) {
        uVar7 = (uint)(byte)IVar6;
        pIVar3[0xc] = IVar6;
        *(undefined4 *)(pIVar3 + 4) = *(undefined4 *)(this + uVar7 * 4 + 0x9a8);
        uVar2 = *(uint *)(this + uVar7 * 4 + 0xa28);
        *(uint *)(this + uVar7 * 4 + 0xa28) = uVar2 + 1;
        this[uVar7 * 4 + 0xa2b] = (ReliabilityLayer)0x0;
        *(uint *)(pIVar3 + 8) = uVar2 & 0xffffff;
      }
      else if ((iVar1 == 3) || (iVar1 == 7)) {
        uVar7 = (uint)(byte)IVar6;
        pIVar3[0xc] = IVar6;
        uVar2 = *(uint *)(this + uVar7 * 4 + 0x9a8);
        *(uint *)(this + uVar7 * 4 + 0x9a8) = uVar2 + 1;
        this[uVar7 * 4 + 0x9ab] = (ReliabilityLayer)0x0;
        *(uint *)(pIVar3 + 4) = uVar2 & 0xffffff;
        *(undefined4 *)(this + uVar7 * 4 + 0xa28) = 0;
      }
      if (uVar5 < uVar8) {
        SplitPacket(this,pIVar3);
        return true;
      }
      iVar1 = *(int *)(pIVar3 + 0x1c);
      if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 5)) {
        if (*(int *)(this + 0x86c) == 0) {
          *(InternalPacket **)(pIVar3 + 0x68) = pIVar3;
          *(InternalPacket **)(pIVar3 + 100) = pIVar3;
          *(InternalPacket **)(this + 0x86c) = pIVar3;
        }
        else {
          *(int *)(pIVar3 + 0x68) = *(int *)(this + 0x86c);
          iVar1 = *(int *)(*(int *)(this + 0x86c) + 100);
          *(int *)(pIVar3 + 100) = iVar1;
          *(InternalPacket **)(iVar1 + 0x68) = pIVar3;
          *(InternalPacket **)(*(int *)(this + 0x86c) + 100) = pIVar3;
        }
      }
      uVar8 = *(uint *)(pIVar3 + 0x54);
      pcVar9 = (char *)0x59a458;
      local_18 = GetNextWeight(this,uVar8);
      DataStructures::Heap<>::Push((Heap<> *)(this + 0x874),&local_18,&local_c,pcVar9,uVar8);
      *(int *)(this + *(int *)(pIVar3 + 0x54) * 4 + 0x960) =
           *(int *)(this + *(int *)(pIVar3 + 0x54) * 4 + 0x960) + 1;
      *(double *)(this + *(int *)(pIVar3 + 0x54) * 8 + 0x970) =
           (double)(*(int *)(pIVar3 + 0x18) + 7U >> 3) + 0.0 +
           *(double *)(this + *(int *)(pIVar3 + 0x54) * 8 + 0x970);
      return true;
    }
  }
  return false;
}


// public: void __thiscall RakNet::ReliabilityLayer::Update(class RakNet::RakNetSocket2 *,struct
// RakNet::SystemAddress &,int,unsigned __int64,unsigned int,class DataStructures::List<class
// RakNet::PluginInterface2 *> &,class RakNet::RakNetRandom *,class RakNet::BitStream &)

void __thiscall
RakNet::ReliabilityLayer::Update
          (ReliabilityLayer *this,RakNetSocket2 *param_1,SystemAddress *param_2,int param_3,
          __uint64 param_4,uint param_5,List<> *param_6,RakNetRandom *param_7,BitStream *param_8)

{
  ReliabilityLayer *pRVar1;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  undefined7 uVar6;
  undefined1 auVar3 [16];
  HuffmanEncodingTreeNode **ppHVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 uVar13;
  ReliabilityLayer RVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  MessageNumberNode *pMVar19;
  bool extraout_CL;
  RakNetRandom *pRVar20;
  RakNetRandom *extraout_ECX;
  ReliabilityLayer *pRVar21;
  code *pcVar22;
  code *pcVar23;
  void *pvVar24;
  uint *puVar25;
  int iVar26;
  RakNetRandom *pRVar27;
  Queue<> *pQVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  longlong lVar32;
  RakNetRandom *in_stack_00000010;
  char *in_stack_ffffff30;
  char *pcVar33;
  uint in_stack_ffffff34;
  RakNetRandom *pRVar34;
  uint24_t uVar35;
  undefined1 auStack_c0 [6];
  bool bStack_ba;
  bool bStack_b9;
  uint local_b8;
  RakNetRandom *local_b4;
  ReliabilityLayer RStack_ad;
  RakNetRandom *local_ac;
  Queue<> *local_a8;
  RakNetRandom *local_a4;
  RakNetRandom *pRStack_a0;
  RakNetRandom *local_9c;
  SystemAddress *local_98;
  HuffmanEncodingTreeNode **ppHStack_94;
  RakNetSocket2 *local_90;
  Queue<> *pQStack_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  RakNetRandom *pRStack_78;
  undefined4 uStack_74;
  RakNetRandom *pRStack_70;
  uint uStack_6c;
  RakNetRandom *local_68;
  InternalPacket *ackReceipt;
  uint uStack_60;
  uint uStack_5c;
  RakNetRandom *pRStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort uStack_48;
  ushort uStack_46;
  undefined4 uStack_44;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  DatagramHeaderFormat dhfNAK;
  undefined8 uVar5;
  undefined7 uVar7;
  
  dhfNAK._12_4_ = ___security_cookie ^ (uint)auStack_c0;
  local_90 = param_1;
  local_98 = param_2;
  local_b8 = (uint)param_4;
  local_a4 = (RakNetRandom *)param_5;
  local_ac = (RakNetRandom *)0x0;
  local_9c = param_7;
  uVar16 = *(uint *)(this + 0xe44);
  pRVar20 = *(RakNetRandom **)(this + 0xe40);
  local_b4 = in_stack_00000010;
  local_a8 = (Queue<> *)this;
  if (((uint)param_4 <= uVar16) && (((uint)param_4 < uVar16 || (in_stack_00000010 <= pRVar20)))) {
    *(RakNetRandom **)(this + 0xe40) = in_stack_00000010;
    *(uint *)(this + 0xe44) = (uint)param_4;
    __security_check_cookie(dhfNAK._12_4_ ^ (uint)auStack_c0);
    return;
  }
  *(RakNetRandom **)(this + 0xe40) = in_stack_00000010;
  uVar15 = (int)in_stack_00000010 - (int)pRVar20;
  *(uint *)(this + 0xe44) = (uint)param_4;
  if (((uint)param_4 - uVar16 != (uint)(in_stack_00000010 < pRVar20)) || (100000 < uVar15)) {
    uVar15 = 100000;
  }
  pRVar20 = (RakNetRandom *)0x0;
  if ((*(int *)(this + 0x1c) != 0) || (*(int *)(this + 0x18) != 0)) {
    uVar16 = *(uint *)(this + 0xf48);
    if ((*(int *)(this + 0xf4c) == 0) && (uVar16 <= uVar15)) {
      pRVar20 = *(RakNetRandom **)(this + 0x86c);
      if (pRVar20 != (RakNetRandom *)0x0) {
        local_68 = (RakNetRandom *)pRVar20->state[0x19];
        uVar16 = pRVar20->state[0xb] + *(int *)(this + 0x1c) +
                 (uint)CARRY4(pRVar20->state[10],*(uint *)(this + 0x18));
        if ((uVar16 <= (uint)param_4) &&
           (((uint)param_4 != uVar16 ||
            ((RakNetRandom *)(pRVar20->state[10] + *(uint *)(this + 0x18)) < in_stack_00000010)))) {
          do {
            FreeInternalPacketData
                      (this,(InternalPacket *)pRVar20,in_stack_ffffff30,in_stack_ffffff34);
            uVar16 = pRVar20->state[7];
            pRVar34 = (RakNetRandom *)pRVar20->state[0x1a];
            pRVar20->state[0x11] = 0;
            if ((uVar16 == 0) || ((uVar16 == 1 || (uVar16 == 5)))) {
              *(RakNetRandom **)(pRVar20->state[0x19] + 0x68) = pRVar34;
              *(uint *)(pRVar20->state[0x1a] + 100) = pRVar20->state[0x19];
              if ((*(RakNetRandom **)(this + 0x86c) == pRVar20) &&
                 (pRVar27 = (RakNetRandom *)pRVar20->state[0x1a],
                 *(RakNetRandom **)(this + 0x86c) = pRVar27, pRVar27 == pRVar20)) {
                *(undefined4 *)(this + 0x86c) = 0;
              }
            }
            if (pRVar20 == local_68) break;
            uVar16 = pRVar34->state[0xb] + *(int *)(this + 0x1c) +
                     (uint)CARRY4(pRVar34->state[10],*(uint *)(this + 0x18));
            pRVar20 = pRVar34;
          } while ((uVar16 < local_b8) ||
                  ((uVar16 <= local_b8 &&
                   ((RakNetRandom *)(pRVar34->state[10] + *(uint *)(this + 0x18)) < local_b4))));
        }
      }
      pRVar20 = (RakNetRandom *)(*(uint *)(this + 0x1c) >> 1);
      *(uint *)(this + 0xf48) = *(uint *)(this + 0x18) >> 1 | *(uint *)(this + 0x1c) << 0x1f;
      *(RakNetRandom **)(this + 0xf4c) = pRVar20;
    }
    else {
      *(uint *)(this + 0xf48) = uVar16 - uVar15;
      *(uint *)(this + 0xf4c) = *(int *)(this + 0xf4c) - (uint)(uVar16 < uVar15);
    }
  }
  if (*(int *)(this + 0x990) != 0) {
    in_stack_ffffff30 = (char *)0x3e8;
    uVar31 = __aulldiv((uint)local_b4,local_b8,1000,0);
    uVar16 = (uint)uVar31;
    pRVar20 = (RakNetRandom *)-(uint)(*(uint *)(this + 0x870) < uVar16);
    local_88 = (double)CONCAT44(pRVar20,(RakNetRandom *)local_88);
    if (((pRVar20 != (RakNetRandom *)0x0) || (10000 < *(uint *)(this + 0x870) - uVar16)) &&
       ((uVar16 < *(uint *)(this + 0x870) ||
        (*(uint *)(this + 0x8c0) < uVar16 - *(uint *)(this + 0x870))))) {
      this[0x8bc] = (ReliabilityLayer)0x1;
      __security_check_cookie(dhfNAK._12_4_ ^ (uint)auStack_c0);
      return;
    }
  }
  local_88 = -1.0;
  if (*(double *)(this + 0xed8) != -1.0) {
    pRVar34 = (RakNetRandom *)0x59a73a;
    lVar32 = __dtoul3();
    pRVar20 = extraout_ECX;
    if (lVar32 != -1) {
      pRVar20 = (RakNetRandom *)(*(uint *)(this + 0xeb8) + 10000);
      uVar16 = *(int *)(this + 0xebc) + (uint)(0xffffd8ef < *(uint *)(this + 0xeb8));
      pRVar27 = local_9c;
      if ((local_b8 < uVar16) || ((local_b8 <= uVar16 && (local_b4 < pRVar20)))) goto LAB_0059a776;
    }
  }
  pRVar27 = local_9c;
  pRVar34 = local_9c;
  SendACKs(this,local_90,local_98,CONCAT44(local_b8,local_b4),pRVar20,(BitStream *)local_9c);
  in_stack_ffffff30 = (char *)pRVar20;
LAB_0059a776:
  if (*(int *)(this + 0xf70) != 0) {
    pRVar27->state[0] = 0;
    pRVar27->state[2] = 0;
    dhfNAK.AS._0_2_ = 0x100;
    dhfNAK.AS._2_1_ = (code)0x0;
    DatagramHeaderFormat::Serialize((DatagramHeaderFormat *)auStack_1c,(BitStream *)pRVar27);
    DataStructures::RangeList<>::Serialize
              ((RangeList<> *)(this + 0xf6c),(BitStream *)pRVar27,*(int *)(this + 0xea0) * 8 - 0x48,
               extraout_CL);
    uVar16 = pRVar27->state[0] + 7 >> 3;
    BPSTracker::Push1((BPSTracker *)(this + 0x1030),CONCAT44(local_b8,local_b4),(ulonglong)uVar16);
    pRVar34 = (RakNetRandom *)0x922;
    pRStack_58 = *(RakNetRandom **)local_98;
    uStack_54 = *(uint *)&local_98->field_0x4;
    uStack_50 = *(undefined4 *)&local_98->field_0x8;
    uStack_4c = *(undefined4 *)&local_98->field_0xc;
    uStack_60 = local_9c->state[3];
    uStack_46 = local_98->systemIndex;
    uStack_48 = local_98->debugPort;
    in_stack_ffffff30 = "f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp";
    uStack_44 = 0;
    uStack_5c = uVar16;
    (**(code **)(*(int *)local_90 + 4))(&uStack_60);
  }
  if ((*(double *)(this + 0xea8) <= *(double *)(this + 0xeb0)) ||
     (dhfNAK.isNAK = false, *(double *)(this + 0xeb0) == 0.0)) {
    dhfNAK.isNAK = true;
  }
  RStack_ad = this[0xe78];
  this[0xe78] = (ReliabilityLayer)(*(int *)(this + 0x878) != 0);
  if ((*(int *)(this + 0x868) != 0) || (bStack_ba = false, *(int *)(this + 0x878) != 0)) {
    bStack_ba = true;
  }
  *(undefined4 *)(this + 0x95c) = 0;
  uStack_80 = param_4._4_4_ + 7U >> 3;
  *(undefined4 *)(this + 0x948) = 0;
  *(undefined4 *)(this + 0x94c) = 0;
  *(uint *)(this + 0x958) = uStack_80;
  uVar16 = *(int *)(this + 0x1074) + (uint)(0xfffe795f < *(uint *)(this + 0x1070));
  if ((uVar16 <= local_b8) &&
     ((uVar16 < local_b8 || ((RakNetRandom *)(*(uint *)(this + 0x1070) + 100000) < local_b4)))) {
    pRVar21 = this + 0xfa4;
    pRStack_a0 = (RakNetRandom *)0x7;
LAB_0059a910:
    do {
      iVar26 = *(int *)pRVar21;
      if (iVar26 == *(int *)(pRVar21 + 4)) {
LAB_0059a978:
        bVar12 = false;
      }
      else {
        local_ac = (RakNetRandom *)((uint)local_ac | 1);
        auVar2 = *(undefined1 (*) [16])(iVar26 * 0x10 + *(int *)(pRVar21 + -4));
        uVar15 = auVar2._8_4_;
        uVar16 = auVar2._12_4_ + (uint)(0xfff0bdbf < uVar15);
        if ((local_b8 < uVar16) ||
           ((local_b8 <= uVar16 && (local_b4 <= (RakNetRandom *)(uVar15 + 1000000)))))
        goto LAB_0059a978;
        bVar12 = true;
      }
      if (((uint)local_ac & 1) != 0) {
        local_ac = (RakNetRandom *)((uint)local_ac & 0xfffffffe);
      }
      if (bVar12) {
        auVar2 = *(undefined1 (*) [16])(iVar26 * 0x10 + *(int *)(pRVar21 + -4));
        uVar15 = auVar2._0_4_;
        pRVar1 = pRVar21 + -0xc;
        uVar16 = *(uint *)pRVar1;
        *(uint *)pRVar1 = *(uint *)pRVar1 - uVar15;
        *(uint *)(pRVar21 + -8) = (*(int *)(pRVar21 + -8) - auVar2._4_4_) - (uint)(uVar16 < uVar15);
        *(int *)pRVar21 = *(int *)pRVar21 + 1;
        if (*(int *)pRVar21 == *(int *)(pRVar21 + 8)) {
          *(int *)pRVar21 = 0;
        }
        goto LAB_0059a910;
      }
      pRVar21 = pRVar21 + 0x20;
      pRStack_a0 = (RakNetRandom *)((int)pRStack_a0 + -1);
    } while (pRStack_a0 != (RakNetRandom *)0x0);
    local_a8[0x107].array = (HuffmanEncodingTreeNode **)local_b4;
    local_a8[0x107].head = local_b8;
    pRStack_a0 = (RakNetRandom *)0x0;
    this = (ReliabilityLayer *)local_a8;
  }
  if (((Queue<> *)((int)this + 0x40))->tail != 0) {
    pRVar20 = (RakNetRandom *)0x0;
    local_a8 = (Queue<> *)malloc_exref;
    pRStack_a0 = (RakNetRandom *)0x0;
    local_ac = (RakNetRandom *)0x0;
    do {
      puVar25 = (uint *)((int)local_ac->state + ((Queue<> *)((int)this + 0x40))->head + 8);
      local_68 = (RakNetRandom *)((int)local_b4 - *puVar25);
      uVar16 = (local_b8 -
               *(int *)((int)local_ac->state + ((Queue<> *)((int)this + 0x40))->head + 0xc)) -
               (uint)(local_b4 < (RakNetRandom *)*puVar25);
      if ((uVar16 < 0x80000000) &&
         ((uVar16 < 0x7fffffff || (local_68 != (RakNetRandom *)0xffffffff)))) {
        pRVar20 = (RakNetRandom *)AllocateFromInternalPacketPool(this);
        uVar16 = 5;
        pRVar20->state[0x12] = 0;
        local_68 = pRVar20;
        puVar17 = (undefined1 *)(*(code *)local_a8)();
        pRVar20->state[0x11] = (uint)puVar17;
        pRVar20->state[6] = 0x28;
        *puVar17 = 0xf;
        pcVar33 = (char *)pRVar20->state[0x11];
        *(undefined4 *)(pcVar33 + 1) =
             *(undefined4 *)((int)local_ac->state + ((Queue<> *)((int)this + 0x40))->head + 4);
        DataStructures::Queue<>::Push
                  ((Queue<> *)this,(HuffmanEncodingTreeNode **)&local_68,pcVar33,uVar16);
        pRVar20 = pRStack_a0;
        in_stack_ffffff30 = (char *)0x59aa89;
        pRVar34 = pRStack_a0;
        DataStructures::List<>::RemoveAtIndex
                  ((List<> *)&((Queue<> *)((int)this + 0x40))->head,(uint)pRStack_a0);
      }
      else {
        pRVar20 = (RakNetRandom *)((int)pRVar20->state + 1);
        local_ac = (RakNetRandom *)(local_ac->state + 4);
        pRStack_a0 = pRVar20;
      }
    } while (pRVar20 < (RakNetRandom *)((Queue<> *)((int)this + 0x40))->tail);
  }
  if (bStack_ba == true) {
    dhfNAK.AS._0_2_ = 0;
    dhfNAK.AS._3_1_ = 0;
    if (((Queue<> *)((int)this + 0xef0))->allocation_size != 0) {
      if (0x200 < ((Queue<> *)((int)this + 0xef0))->allocation_size) {
        pRVar34 = (RakNetRandom *)((Queue<> *)((int)this + 0xef0))->head;
        in_stack_ffffff30 = (char *)0x59aae0;
        operator_delete__(pRVar34);
        ((Queue<> *)((int)this + 0xef0))->allocation_size = 0;
        ((Queue<> *)((int)this + 0xef0))->head = 0;
      }
      ((Queue<> *)((int)this + 0xef0))->tail = 0;
    }
    if (((Queue<> *)((int)this + 0xf00))->tail != 0) {
      if (0x200 < ((Queue<> *)((int)this + 0xf00))->tail) {
        pRVar34 = (RakNetRandom *)((Queue<> *)((int)this + 0xf00))->array;
        in_stack_ffffff30 = (char *)0x59ab1d;
        operator_delete__(pRVar34);
        ((Queue<> *)((int)this + 0xf00))->tail = 0;
        ((Queue<> *)((int)this + 0xf00))->array = (HuffmanEncodingTreeNode **)0x0;
      }
      ((Queue<> *)((int)this + 0xf00))->head = 0;
    }
    if (((Queue<> *)((int)this + 0xf10))->head != 0) {
      if (0x200 < ((Queue<> *)((int)this + 0xf10))->head) {
        pRVar34 = (RakNetRandom *)((Queue<> *)((int)this + 0xf00))->allocation_size;
        in_stack_ffffff30 = (char *)0x59ab5a;
        operator_delete__(pRVar34);
        ((Queue<> *)((int)this + 0xf10))->head = 0;
        ((Queue<> *)((int)this + 0xf00))->allocation_size = 0;
      }
      ((Queue<> *)((int)this + 0xf10))->array = (HuffmanEncodingTreeNode **)0x0;
    }
    if (((Queue<> *)((int)this + 0xf20))->array != (HuffmanEncodingTreeNode **)0x0) {
      if ((HuffmanEncodingTreeNode **)0x200 < ((Queue<> *)((int)this + 0xf20))->array) {
        pRVar34 = (RakNetRandom *)((Queue<> *)((int)this + 0xf10))->tail;
        in_stack_ffffff30 = (char *)0x59ab97;
        operator_delete__(pRVar34);
        ((Queue<> *)((int)this + 0xf20))->array = (HuffmanEncodingTreeNode **)0x0;
        ((Queue<> *)((int)this + 0xf10))->tail = 0;
      }
      ((Queue<> *)((int)this + 0xf10))->allocation_size = 0;
    }
    if (((Queue<> *)((int)this + 0xf20))->allocation_size != 0) {
      if (0x200 < ((Queue<> *)((int)this + 0xf20))->allocation_size) {
        pRVar34 = (RakNetRandom *)((Queue<> *)((int)this + 0xf20))->head;
        in_stack_ffffff30 = (char *)0x59abd4;
        operator_delete__(pRVar34);
        ((Queue<> *)((int)this + 0xf20))->allocation_size = 0;
        ((Queue<> *)((int)this + 0xf20))->head = 0;
      }
      ((Queue<> *)((int)this + 0xf20))->tail = 0;
    }
    ((Queue<> *)((int)this + 0xf30))->array = (HuffmanEncodingTreeNode **)0x0;
    dVar29 = *(double *)&((Queue<> *)((int)this + 0xea0))->tail;
    *(ReliabilityLayer *)&((Queue<> *)((int)this + 0xed0))->array = RStack_ad;
    dVar30 = (double)(int)((Queue<> *)((int)this + 0xef0))->array +
             *(double *)
              (&__xmm_41f00000000000000000000000000000 +
              ((int)((Queue<> *)((int)this + 0xef0))->array >> 0x1f) * -8);
    if (dVar29 < dVar30) {
      pRStack_a0 = (RakNetRandom *)0x0;
    }
    else {
      pRStack_a0 = (RakNetRandom *)(int)(dVar29 - dVar30);
    }
    ppHStack_94 = ((Queue<> *)((int)this + 0xef0))->array;
    if (((int)ppHStack_94 < 1) && ((int)pRStack_a0 < 1)) {
      *(undefined1 *)&((Queue<> *)((int)this + 0x940))->array = 1;
    }
    else {
      *(undefined1 *)&((Queue<> *)((int)this + 0x940))->array = 0;
      ((Queue<> *)((int)this + 0xf30))->head = 0;
      if (0 < (int)ppHStack_94) {
        while( true ) {
          pRVar20 = (RakNetRandom *)((Queue<> *)((int)this + 0x860))->tail;
          bStack_ba = false;
          local_ac = pRVar20;
          if (pRVar20 == (RakNetRandom *)0x0) break;
          do {
            uVar16 = (local_b8 - pRVar20->state[0xd]) -
                     (uint)(local_b4 < (RakNetRandom *)pRVar20->state[0xc]);
            local_ac = pRVar20;
            if ((0x7fffffff < uVar16) ||
               ((0x7ffffffe < uVar16 && ((int)local_b4 - pRVar20->state[0xc] == -1)))) {
              ppHVar8 = ((Queue<> *)((int)this + 0xf30))->array;
joined_r0x0059af55:
              if (ppHVar8 != (HuffmanEncodingTreeNode **)0x0) {
                local_68 = (RakNetRandom *)((Queue<> *)((int)this + 0xef0))->tail;
                DataStructures::List<>::Insert
                          ((List<> *)&((Queue<> *)((int)this + 0xf00))->allocation_size,
                           (uint *)&local_68,in_stack_ffffff30,(uint)pRVar34);
                bStack_b9 = false;
                DataStructures::List<bool>::Push
                          ((List<bool> *)&((Queue<> *)((int)this + 0xf10))->tail,&bStack_b9,
                           in_stack_ffffff30,(uint)pRVar34);
                local_68 = (RakNetRandom *)((int)((Queue<> *)((int)this + 0xf30))->array + 7U >> 3);
                DataStructures::List<>::Insert
                          ((List<> *)&((Queue<> *)((int)this + 0xf20))->head,(uint *)&local_68,
                           in_stack_ffffff30,(uint)pRVar34);
                ((Queue<> *)((int)this + 0xf30))->array = (HuffmanEncodingTreeNode **)0x0;
              }
              if (bStack_ba == false) goto LAB_0059afde;
              break;
            }
            ppHVar8 = ((Queue<> *)((int)this + 0xf30))->array;
            if ((int)((Queue<> *)((int)this + 0xea0))->array * 8 - 0x48U <
                (int)ppHVar8 + pRVar20->state[6] + pRVar20->state[0x10]) goto joined_r0x0059af55;
            *(uint *)(pRVar20->state[0x17] + 0x60) = pRVar20->state[0x18];
            *(uint *)(pRVar20->state[0x18] + 0x5c) = pRVar20->state[0x17];
            if (((RakNetRandom *)((Queue<> *)((int)this + 0x860))->tail == pRVar20) &&
               (pRVar34 = (RakNetRandom *)pRVar20->state[0x18],
               ((Queue<> *)((int)this + 0x860))->tail = (uint)pRVar34, pRVar34 == pRVar20)) {
              ((Queue<> *)((int)this + 0x860))->tail = 0;
            }
            pRVar34 = (RakNetRandom *)0x0;
            in_stack_ffffff30 = (char *)(pRVar20->state[6] + 7 >> 3);
            BPSTracker::Push1((BPSTracker *)((int)this + 0xfd0),CONCAT44(local_b8,local_b4),
                              ZEXT48(in_stack_ffffff30));
            iVar26 = (pRVar20->state[0x10] + 7 & 0xfffffff8) + (pRVar20->state[6] + 7 & 0xfffffff8);
            ((Queue<> *)((int)this + 0xf30))->array =
                 (HuffmanEncodingTreeNode **)((int)((Queue<> *)((int)this + 0xf30))->array + iVar26)
            ;
            ((Queue<> *)((int)this + 0xf30))->head = ((Queue<> *)((int)this + 0xf30))->head + iVar26
            ;
            local_68 = pRVar20;
            DataStructures::List<>::Insert
                      ((List<> *)&((Queue<> *)((int)this + 0xef0))->head,(uint *)&local_68,
                       in_stack_ffffff30,(uint)pRVar34);
            bStack_ba = false;
            DataStructures::List<bool>::Push
                      ((List<bool> *)((int)this + 0xf00),&bStack_ba,in_stack_ffffff30,(uint)pRVar34)
            ;
            *(char *)(pRVar20->state + 0x14) = (char)pRVar20->state[0x14] + '\x01';
            if ((*(char *)&((Queue<> *)((int)this + 0xed0))->array != '\0') &&
               ((char)((Queue<> *)((int)this + 0xec0))->tail == '\0')) {
              ppHVar8 = ((Queue<> *)((int)this + 0xea0))->array;
              if ((double)((int)ppHVar8 * 2) +
                  *(double *)
                   (&__xmm_41f00000000000000000000000000000 + ((int)ppHVar8 * 2 >> 0x1f) * -8) <
                  *(double *)&((Queue<> *)((int)this + 0xea0))->tail) {
                dVar30 = *(double *)&((Queue<> *)((int)this + 0xea0))->tail * 0.5;
                *(double *)((int)this + 0xeb0) = dVar30;
                dVar29 = (double)(int)ppHVar8 +
                         *(double *)
                          (&__xmm_41f00000000000000000000000000000 + ((int)ppHVar8 >> 0x1f) * -8);
                if (dVar30 < dVar29) {
                  *(double *)((int)this + 0xeb0) = dVar29;
                }
                ppHVar8 = ((Queue<> *)((int)this + 0xec0))->array;
                *(double *)&((Queue<> *)((int)this + 0xea0))->tail = dVar29;
                ((Queue<> *)((int)this + 0xec0))->head = (uint)ppHVar8;
                *(undefined1 *)&((Queue<> *)((int)this + 0xec0))->tail = 1;
              }
            }
            if (*(double *)((int)this + 0xee0) == local_88) {
LAB_0059ae5b:
              uVar16 = 2000000;
            }
            else {
              pRVar34 = (RakNetRandom *)0x59ae4a;
              lVar32 = __dtoul3();
              uVar16 = (uint)(lVar32 + 30000);
              if (((int)((ulonglong)(lVar32 + 30000) >> 0x20) != 0) || (2000000 < uVar16))
              goto LAB_0059ae5b;
            }
            pRVar20->state[0xe] = uVar16;
            pRVar20->state[0xf] = 0;
            pRVar20->state[0xd] = local_b8 + CARRY4((uint)local_b4,uVar16);
            pRVar20->state[0xc] = (int)local_b4->state + uVar16;
            bStack_ba = true;
            local_a8 = (Queue<> *)0x0;
            if (local_a4->state[1] != 0) {
              uVar31 = __aulldiv((uint)local_b4,local_b8,1000,0);
              do {
                uStack_74 = (undefined4)((ulonglong)uVar31 >> 0x20);
                local_68 = (RakNetRandom *)uVar31;
                pRVar34 = (RakNetRandom *)&DAT_00000001;
                auVar2[0] = local_98->address;
                uVar4 = *(undefined8 *)&local_98->field_0x1;
                uVar6 = *(undefined7 *)&local_98->field_0x9;
                auVar2._9_7_ = uVar6;
                auVar2._1_8_ = uVar4;
                uVar9._0_2_ = local_98->debugPort;
                uVar9._2_2_ = local_98->systemIndex;
                in_stack_ffffff30 = (char *)local_68;
                (**(code **)(**(int **)(local_a4->state[0] + (int)local_a8 * 4) + 0x38))
                          (local_ac,(int)((Queue<> *)((int)this + 0xec0))->array +
                                    (int)((Queue<> *)((int)this + 0xf10))->array,auVar2._0_4_,
                           (int)((ulonglong)uVar4 >> 0x18),auVar2._8_4_,(int)((uint7)uVar6 >> 0x18),
                           uVar9);
                uVar31 = CONCAT44(uStack_74,local_68);
                local_a8 = (Queue<> *)((int)&local_a8->array + 1);
                pRVar20 = local_ac;
              } while (local_a8 < (Queue<> *)local_a4->state[1]);
            }
            if (((Queue<> *)((int)this + 0x860))->tail == 0) {
              pRVar20->state[0x18] = (uint)pRVar20;
              pRVar20->state[0x17] = (uint)pRVar20;
              ((Queue<> *)((int)this + 0x860))->tail = (uint)pRVar20;
            }
            else {
              pRVar20->state[0x18] = ((Queue<> *)((int)this + 0x860))->tail;
              uVar16 = *(uint *)(((Queue<> *)((int)this + 0x860))->tail + 0x5c);
              pRVar20->state[0x17] = uVar16;
              *(RakNetRandom **)(uVar16 + 0x60) = pRVar20;
              *(RakNetRandom **)(((Queue<> *)((int)this + 0x860))->tail + 0x5c) = pRVar20;
              pRVar20 = (RakNetRandom *)((Queue<> *)((int)this + 0x860))->tail;
            }
            local_ac = pRVar20;
          } while (pRVar20 != (RakNetRandom *)0x0);
          if ((int)ppHStack_94 <= (int)(((Queue<> *)((int)this + 0xf30))->head + 7 >> 3)) break;
        }
      }
    }
LAB_0059afde:
    if (((int)(((Queue<> *)((int)this + 0xf30))->head + 7 >> 3) < (int)pRStack_a0) &&
       (((Queue<> *)((int)this + 0xf30))->head = 0,
       (&((Queue<> *)((int)this + 0x60))->tail)[((Queue<> *)((int)this + 0x8b0))->head & 0x1ff] == 0
       )) {
LAB_0059b020:
      if (((int)(((Queue<> *)((int)this + 0xf30))->head + 7 >> 3) < (int)pRStack_a0) ||
         ((((Queue<> *)((int)this + 0xf50))->allocation_size == 0 &&
          (((Queue<> *)((int)this + 0xf10))->allocation_size == 1)))) {
        if ((param_4._4_4_ == 0) ||
           ((((Queue<> *)((int)this + 0xfb0))->allocation_size == 0 &&
            (((Queue<> *)((int)this + 0xfb0))->tail <= uStack_80)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        uVar16 = ((Queue<> *)((int)this + 0x870))->tail;
        *(undefined1 *)&((Queue<> *)((int)this + 0x950))->array = uVar13;
        do {
          if ((uVar16 == 0) || (*(char *)&((Queue<> *)((int)this + 0x950))->array != '\0'))
          goto LAB_0059b56d;
          pRVar20 = *(RakNetRandom **)(((Queue<> *)((int)this + 0x870))->head + 8);
          local_68 = pRVar20;
          if (pRVar20->state[0x11] == 0) {
            DataStructures::Heap<>::Pop
                      ((Heap<> *)&((Queue<> *)((int)this + 0x870))->head,
                       (uint)&((Queue<> *)((int)this + 0x870))->head);
            (&((Queue<> *)((int)this + 0x960))->array)[pRVar20->state[0x15]] =
                 (HuffmanEncodingTreeNode **)
                 ((int)(&((Queue<> *)((int)this + 0x960))->array)[pRVar20->state[0x15]] + -1);
            *(double *)(&((Queue<> *)((int)this + 0x970))->array + pRVar20->state[0x15] * 2) =
                 *(double *)(&((Queue<> *)((int)this + 0x970))->array + pRVar20->state[0x15] * 2) -
                 ((double)(pRVar20->state[6] + 7 >> 3) + 0.0);
            in_stack_ffffff30 = (char *)0x59b0f5;
            ReleaseToInternalPacketPool(this,(InternalPacket *)pRVar20);
            pRVar34 = pRVar20;
          }
          else {
            uVar16 = pRVar20->state[7];
            uVar15 = 0x18;
            if ((((uVar16 == 2) || (uVar16 == 4)) || (uVar16 == 3)) ||
               ((uVar16 == 6 || (uVar16 == 7)))) {
              uVar15 = 0x30;
            }
            if ((uVar16 == 1) || (uVar16 == 4)) {
              uVar15 = uVar15 + 0x18;
            }
            if ((((uVar16 == 1) || (uVar16 == 4)) || (uVar16 == 3)) || (uVar16 == 7)) {
              uVar15 = uVar15 + 0x20;
            }
            uVar18 = uVar15 + 0x50;
            if (pRVar20->state[5] == 0) {
              uVar18 = uVar15;
            }
            pRVar20->state[0x10] = uVar18;
            uVar15 = (int)((Queue<> *)((int)this + 0xf30))->array + uVar18 + pRVar20->state[6];
            if ((int)((Queue<> *)((int)this + 0xea0))->array * 8 - 0x48U < uVar15)
            goto LAB_0059b56d;
            if (((uVar16 == 2) || (uVar16 == 4)) ||
               ((uVar16 == 3 || ((uVar16 == 6 || (bStack_ba = false, uVar16 == 7)))))) {
              bStack_ba = true;
            }
            DataStructures::Heap<>::Pop((Heap<> *)&((Queue<> *)((int)this + 0x870))->head,uVar15);
            (&((Queue<> *)((int)this + 0x960))->array)[pRVar20->state[0x15]] =
                 (HuffmanEncodingTreeNode **)
                 ((int)(&((Queue<> *)((int)this + 0x960))->array)[pRVar20->state[0x15]] + -1);
            *(double *)(&((Queue<> *)((int)this + 0x970))->array + pRVar20->state[0x15] * 2) =
                 *(double *)(&((Queue<> *)((int)this + 0x970))->array + pRVar20->state[0x15] * 2) -
                 ((double)(pRVar20->state[6] + 7 >> 3) + 0.0);
            if (bStack_ba == false) {
              if (pRVar20->state[7] == 5) {
                if (*(double *)((int)this + 0xee0) == local_88) {
LAB_0059b333:
                  uVar16 = 2000000;
                }
                else {
                  lVar32 = __dtoul3();
                  uVar16 = (uint)(lVar32 + 30000);
                  if (((int)((ulonglong)(lVar32 + 30000) >> 0x20) != 0) || (2000000 < uVar16))
                  goto LAB_0059b333;
                }
                uStack_7c = pRVar20->state[0x16];
                pRStack_78 = (RakNetRandom *)((int)local_b4->state + uVar16);
                local_ac = (RakNetRandom *)
                           ((int)((Queue<> *)((int)this + 0xec0))->array +
                            (int)((Queue<> *)((int)this + 0xf10))->array & 0xffffff);
                ackReceipt = (InternalPacket *)(local_b8 + CARRY4((uint)local_b4,uVar16));
                uVar15 = ((Queue<> *)((int)this + 0x40))->tail;
                uVar16 = ((Queue<> *)((int)this + 0x40))->allocation_size;
                if (uVar15 == uVar16) {
                  if (uVar16 == 0) {
                    ((Queue<> *)((int)this + 0x40))->allocation_size = 0x10;
                    uVar16 = 0x10;
LAB_0059b38c:
                    local_a8 = operator_new__(-(uint)((int)((ulonglong)uVar16 * 0x10 >> 0x20) != 0)
                                              | (uint)((ulonglong)uVar16 * 0x10));
                    uVar15 = ((Queue<> *)((int)this + 0x40))->tail;
                    pQStack_8c = local_a8;
                  }
                  else {
                    uVar16 = uVar16 * 2;
                    ((Queue<> *)((int)this + 0x40))->allocation_size = uVar16;
                    if (uVar16 != 0) goto LAB_0059b38c;
                    local_a8 = (Queue<> *)0x0;
                  }
                  pvVar24 = (void *)((Queue<> *)((int)this + 0x40))->head;
                  if (pvVar24 != (void *)0x0) {
                    ppHStack_94 = (HuffmanEncodingTreeNode **)0x0;
                    if (uVar15 != 0) {
                      uVar16 = 0;
                      puVar25 = &local_a8->tail;
                      pQStack_8c = (Queue<> *)(-8 - (int)local_a8);
                      do {
                        uVar16 = uVar16 + 1;
                        pcVar22 = (code *)((int)&pQStack_8c->array +
                                          ((Queue<> *)((int)this + 0x40))->head);
                        pcVar23 = pcVar22 + (int)puVar25;
                        ((Queue<> *)(puVar25 + -2))->array =
                             *(HuffmanEncodingTreeNode ***)(pcVar22 + (int)puVar25);
                        puVar25[-1] = *(uint *)(pcVar23 + 4);
                        *puVar25 = *(uint *)(pcVar23 + 8);
                        puVar25[1] = *(uint *)(pcVar23 + 0xc);
                        puVar25 = puVar25 + 4;
                      } while (uVar16 < ((Queue<> *)((int)this + 0x40))->tail);
                      pvVar24 = (void *)((Queue<> *)((int)this + 0x40))->head;
                      pRVar20 = local_68;
                    }
                    operator_delete__(pvVar24);
                  }
                  ((Queue<> *)((int)this + 0x40))->head = (uint)local_a8;
                  pQVar28 = local_a8;
                }
                else {
                  pQVar28 = (Queue<> *)((Queue<> *)((int)this + 0x40))->head;
                }
                pQVar28 = pQVar28 + ((Queue<> *)((int)this + 0x40))->tail;
                pQVar28->array = (HuffmanEncodingTreeNode **)local_ac;
                pQVar28->head = uStack_7c;
                pQVar28->tail = (uint)pRStack_78;
                pQVar28->allocation_size = (uint)ackReceipt;
                ((Queue<> *)((int)this + 0x40))->tail = ((Queue<> *)((int)this + 0x40))->tail + 1;
              }
            }
            else {
              *(undefined1 *)(pRVar20->state + 9) = 1;
              ppHStack_94 = (HuffmanEncodingTreeNode **)((Queue<> *)((int)this + 0x8b0))->head;
              pRVar20->state[0] = (uint)ppHStack_94;
              if (*(double *)((int)this + 0xee0) == local_88) {
LAB_0059b239:
                uVar16 = 2000000;
              }
              else {
                lVar32 = __dtoul3();
                uVar16 = (uint)(lVar32 + 30000);
                if (((int)((ulonglong)(lVar32 + 30000) >> 0x20) != 0) || (2000000 < uVar16))
                goto LAB_0059b239;
              }
              pRVar20->state[0xe] = uVar16;
              pRVar20->state[0xf] = 0;
              pRVar20->state[0xd] = local_b8 + CARRY4((uint)local_b4,uVar16);
              pRVar20->state[0xc] = (int)local_b4->state + uVar16;
              (&((Queue<> *)((int)this + 0x60))->tail)[(uint)ppHStack_94 & 0x1ff] = (uint)pRVar20;
              ((Queue<> *)((int)this + 0x990))->array =
                   (HuffmanEncodingTreeNode **)((int)((Queue<> *)((int)this + 0x990))->array + 1);
              uVar15 = pRVar20->state[6] + 7 >> 3;
              puVar25 = &((Queue<> *)((int)this + 0x990))->tail;
              uVar16 = *puVar25;
              *puVar25 = *puVar25 + uVar15;
              ((Queue<> *)((int)this + 0x990))->allocation_size =
                   ((Queue<> *)((int)this + 0x990))->allocation_size + (uint)CARRY4(uVar16,uVar15);
              ((Queue<> *)((int)this + 0xef0))->array =
                   (HuffmanEncodingTreeNode **)
                   ((int)((Queue<> *)((int)this + 0xef0))->array +
                   (pRVar20->state[0x10] + 7 + pRVar20->state[6] >> 3));
              if (((Queue<> *)((int)this + 0x860))->tail == 0) {
                pRVar20->state[0x18] = (uint)pRVar20;
                pRVar20->state[0x17] = (uint)pRVar20;
                ((Queue<> *)((int)this + 0x860))->tail = (uint)pRVar20;
                ((Queue<> *)((int)this + 0x8b0))->head = ((Queue<> *)((int)this + 0x8b0))->head + 1;
                *(undefined1 *)((int)&((Queue<> *)((int)this + 0x8b0))->head + 3) = 0;
              }
              else {
                pRVar20->state[0x18] = ((Queue<> *)((int)this + 0x860))->tail;
                uVar16 = *(uint *)(((Queue<> *)((int)this + 0x860))->tail + 0x5c);
                pRVar20->state[0x17] = uVar16;
                *(RakNetRandom **)(uVar16 + 0x60) = pRVar20;
                *(RakNetRandom **)(((Queue<> *)((int)this + 0x860))->tail + 0x5c) = pRVar20;
                ((Queue<> *)((int)this + 0x8b0))->head = ((Queue<> *)((int)this + 0x8b0))->head + 1;
                *(undefined1 *)((int)&((Queue<> *)((int)this + 0x8b0))->head + 3) = 0;
              }
            }
            pRVar34 = (RakNetRandom *)0x0;
            in_stack_ffffff30 = (char *)(pRVar20->state[6] + 7 >> 3);
            BPSTracker::Push1((BPSTracker *)((int)this + 0xfb0),CONCAT44(local_b8,local_b4),
                              ZEXT48(in_stack_ffffff30));
            iVar26 = (pRVar20->state[6] + 7 & 0xfffffff8) + (pRVar20->state[0x10] + 7 & 0xfffffff8);
            ((Queue<> *)((int)this + 0xf30))->array =
                 (HuffmanEncodingTreeNode **)((int)((Queue<> *)((int)this + 0xf30))->array + iVar26)
            ;
            ((Queue<> *)((int)this + 0xf30))->head = ((Queue<> *)((int)this + 0xf30))->head + iVar26
            ;
            ackReceipt = (InternalPacket *)pRVar20;
            DataStructures::List<>::Insert
                      ((List<> *)&((Queue<> *)((int)this + 0xef0))->head,(uint *)&ackReceipt,
                       in_stack_ffffff30,(uint)pRVar34);
            bStack_b9 = (bool)(bStack_ba ^ 1);
            DataStructures::List<bool>::Push
                      ((List<bool> *)((int)this + 0xf00),&bStack_b9,in_stack_ffffff30,(uint)pRVar34)
            ;
            *(char *)(pRVar20->state + 0x14) = (char)pRVar20->state[0x14] + '\x01';
            pQVar28 = (Queue<> *)0x0;
            local_a8 = (Queue<> *)0x0;
            if (local_a4->state[1] != 0) {
              uVar31 = __aulldiv((uint)local_b4,local_b8,1000,0);
              ackReceipt = (InternalPacket *)uVar31;
              do {
                uStack_74 = (undefined4)((ulonglong)uVar31 >> 0x20);
                in_stack_ffffff30 = (char *)uVar31;
                pRVar34 = (RakNetRandom *)&DAT_00000001;
                auVar3[0] = local_98->address;
                uVar5 = *(undefined8 *)&local_98->field_0x1;
                uVar7 = *(undefined7 *)&local_98->field_0x9;
                auVar3._9_7_ = uVar7;
                auVar3._1_8_ = uVar5;
                uVar10._0_2_ = local_98->debugPort;
                uVar10._2_2_ = local_98->systemIndex;
                (**(code **)(**(int **)(local_a4->state[0] + (int)pQVar28 * 4) + 0x38))
                          (local_68,(int)((Queue<> *)((int)this + 0xec0))->array +
                                    (int)((Queue<> *)((int)this + 0xf10))->array,auVar3._0_4_,
                           (int)((ulonglong)uVar5 >> 0x18),auVar3._8_4_,(int)((uint7)uVar7 >> 0x18),
                           uVar10);
                uVar31 = CONCAT44(uStack_74,ackReceipt);
                pQVar28 = (Queue<> *)((int)&local_a8->array + 1);
                local_a8 = pQVar28;
              } while (pQVar28 < (Queue<> *)local_a4->state[1]);
            }
            if ((&((Queue<> *)((int)this + 0x60))->tail)
                [((Queue<> *)((int)this + 0x8b0))->head & 0x1ff] != 0) goto LAB_0059b56d;
          }
          uVar16 = ((Queue<> *)((int)this + 0x870))->tail;
        } while( true );
      }
    }
LAB_0059b5ff:
    local_a8 = (Queue<> *)0x0;
    RVar14 = RStack_ad;
    if (((Queue<> *)((int)this + 0xf10))->array != (HuffmanEncodingTreeNode **)0x0) {
      do {
        if (local_a8 != (Queue<> *)0x0) {
          RVar14 = (ReliabilityLayer)0x1;
        }
        auStack_1c = (undefined1  [4])((Queue<> *)((int)this + 0xec0))->array;
        pRVar20 = (RakNetRandom *)0x0;
        local_ac = (RakNetRandom *)0x0;
        ((Queue<> *)((int)this + 0xec0))->array = (HuffmanEncodingTreeNode **)((int)auStack_1c + 1);
        *(undefined1 *)((int)&((Queue<> *)((int)this + 0xec0))->array + 3) = 0;
        dhfNAK.AS._2_1_ = *(code *)((int)&local_a8->array + ((Queue<> *)((int)this + 0xf10))->tail);
        if (((dhfNAK.AS._2_1_ == (code)0x0) || (local_a8 == (Queue<> *)0x0)) ||
           (RStack_ad = (ReliabilityLayer)0x1,
           *(ReliabilityLayer *)((((Queue<> *)((int)this + 0xf10))->tail - 1) + (int)local_a8) ==
           (ReliabilityLayer)0x0)) {
          RStack_ad = (ReliabilityLayer)0x0;
        }
        puVar11 = (undefined4 *)((Queue<> *)((int)this + 0xf00))->allocation_size;
        if (local_a8 == (Queue<> *)0x0) {
          pRStack_a0 = (RakNetRandom *)*puVar11;
          local_a4 = (RakNetRandom *)0x0;
        }
        else {
          local_a4 = (RakNetRandom *)puVar11[(int)((int)&local_a8[-1].allocation_size + 3)];
          pRStack_a0 = (RakNetRandom *)puVar11[(int)local_a8];
        }
        local_9c->state[0] = 0;
        local_9c->state[2] = 0;
        pcVar33 = (char *)0x59b6ac;
        uVar35.val = (uint)local_9c;
        dhfNAK.isACK = (bool)RVar14;
        DatagramHeaderFormat::Serialize((DatagramHeaderFormat *)auStack_1c,(BitStream *)local_9c);
        if (local_a4 < pRStack_a0) {
          do {
            puVar25 = *(uint **)(((Queue<> *)((int)this + 0xef0))->head + (int)local_a4 * 4);
            uVar16 = puVar25[7];
            if ((uVar16 != 0) && (uVar16 != 1)) {
              uVar16 = *puVar25;
              if (local_ac == (RakNetRandom *)0x0) {
                uVar15 = ((Queue<> *)((int)this + 0x20))->head;
                if (((Queue<> *)((int)this + 0x20))->tail < uVar15) {
                  iVar26 = ((Queue<> *)((int)this + 0x20))->allocation_size - uVar15;
                }
                else {
                  iVar26 = -uVar15;
                }
                if (0x200 < ((Queue<> *)((int)this + 0x20))->tail + iVar26) {
                  uVar35.val = (uint)((Queue<> *)((int)this + 0x50))->array;
                  pcVar33 = (char *)0x59b71a;
                  RemoveFromDatagramHistory(this,uVar35);
                  ((Queue<> *)((int)this + 0x20))->head = ((Queue<> *)((int)this + 0x20))->head + 1;
                  if (((Queue<> *)((int)this + 0x20))->head ==
                      ((Queue<> *)((int)this + 0x20))->allocation_size) {
                    ((Queue<> *)((int)this + 0x20))->head = 0;
                  }
                  ((Queue<> *)((int)this + 0x50))->array =
                       (HuffmanEncodingTreeNode **)((int)((Queue<> *)((int)this + 0x50))->array + 1)
                  ;
                  *(undefined1 *)((int)&((Queue<> *)((int)this + 0x50))->array + 3) = 0;
                }
                local_ac = (RakNetRandom *)
                           DataStructures::MemoryPool<>::Allocate
                                     ((MemoryPool<> *)((int)this + 0x30),pcVar33,uVar35.val);
                local_ac->state[1] = 0;
                local_ac->state[0] = uVar16;
                pRStack_70 = local_b4;
                uStack_6c = local_b8;
                pRStack_78 = local_ac;
                DataStructures::Queue<>::Push
                          ((Queue<> *)((int)this + 0x20),(DatagramHistoryNode *)&pRStack_78,pcVar33,
                           uVar35.val);
                pRVar20 = local_ac;
              }
              else {
                pMVar19 = DataStructures::MemoryPool<>::Allocate
                                    ((MemoryPool<> *)((int)this + 0x30),pcVar33,uVar35.val);
                local_ac->state[1] = (uint)pMVar19;
                *(uint *)pMVar19 = uVar16;
                *(undefined4 *)(local_ac->state[1] + 4) = 0;
                pRVar20 = (RakNetRandom *)local_ac->state[1];
                local_ac = pRVar20;
              }
            }
            WriteToBitStreamFromInternalPacket
                      ((ReliabilityLayer *)local_a4,(BitStream *)local_9c,
                       *(InternalPacket **)
                        (((Queue<> *)((int)this + 0xef0))->head + (int)local_a4 * 4),
                       CONCAT44(uVar35.val,pcVar33));
            local_a4 = (RakNetRandom *)((int)local_a4->state + 1);
          } while (local_a4 < pRStack_a0);
        }
        if (RStack_ad != (ReliabilityLayer)0x0) {
          uVar16 = *(uint *)((((Queue<> *)((int)this + 0xf20))->head - 4) + (int)local_a8 * 4);
          uVar15 = local_9c->state[0];
          if (uVar15 + 7 >> 3 < uVar16) {
            iVar26 = uVar15 - (uVar15 - 1 & 7);
            local_9c->state[0] = iVar26 + 7;
            local_68 = (RakNetRandom *)(uVar16 - (iVar26 + 0xeU >> 3));
            BitStream::AddBitsAndReallocate((BitStream *)local_9c,(int)local_68 * 8);
            pcVar33 = (char *)0x0;
            uVar35.val = (uint)local_68;
            memset((void *)((local_9c->state[0] + 7 >> 3) + local_9c->state[3]),0,(size_t)local_68);
            local_9c->state[0] = local_9c->state[0] + (int)local_68 * 8;
          }
        }
        if (pRVar20 == (RakNetRandom *)0x0) {
          uVar16 = ((Queue<> *)((int)this + 0x20))->head;
          if (((Queue<> *)((int)this + 0x20))->tail < uVar16) {
            iVar26 = ((Queue<> *)((int)this + 0x20))->allocation_size - uVar16;
          }
          else {
            iVar26 = -uVar16;
          }
          if (0x200 < ((Queue<> *)((int)this + 0x20))->tail + iVar26) {
            uVar35.val = (uint)((Queue<> *)((int)this + 0x50))->array;
            pcVar33 = (char *)0x59b872;
            RemoveFromDatagramHistory(this,uVar35);
            ((Queue<> *)((int)this + 0x20))->head = ((Queue<> *)((int)this + 0x20))->head + 1;
            if (((Queue<> *)((int)this + 0x20))->head ==
                ((Queue<> *)((int)this + 0x20))->allocation_size) {
              ((Queue<> *)((int)this + 0x20))->head = 0;
            }
            ((Queue<> *)((int)this + 0x50))->array =
                 (HuffmanEncodingTreeNode **)((int)((Queue<> *)((int)this + 0x50))->array + 1);
            *(undefined1 *)((int)&((Queue<> *)((int)this + 0x50))->array + 3) = 0;
          }
          pRStack_58 = local_b4;
          uStack_54 = local_b8;
          uStack_60 = 0;
          DataStructures::Queue<>::Push
                    ((Queue<> *)((int)this + 0x20),(DatagramHistoryNode *)&uStack_60,pcVar33,
                     uVar35.val);
        }
        uVar16 = local_9c->state[0] + 7 >> 3;
        BPSTracker::Push1((BPSTracker *)((int)this + 0x1030),CONCAT44(local_b8,local_b4),
                          (ulonglong)uVar16);
        auStack_34[0] = local_98->address;
        auStack_34._1_8_ = *(undefined8 *)&local_98->field_0x1;
        auStack_34._9_7_ = *(undefined7 *)&local_98->field_0x9;
        uStack_3c = local_9c->state[3];
        uStack_22 = local_98->systemIndex;
        uStack_24 = local_98->debugPort;
        uStack_20 = 0;
        uStack_38 = uVar16;
        (**(code **)(*(int *)local_90 + 4))
                  (&uStack_3c,"f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp",0x922);
        *(bool *)&((Queue<> *)((int)this + 0xe70))->tail =
             ((Queue<> *)((int)this + 0x870))->tail != 0;
        pRVar20 = local_b4;
        uVar16 = local_b8;
        if (((Queue<> *)((int)this + 0x870))->tail == 0) {
          local_88 = 0.0;
          local_88._4_4_ = 0;
          local_88._0_4_ = (RakNetRandom *)0x0;
          pRVar20 = (RakNetRandom *)local_88;
          uVar16 = local_88._4_4_;
        }
        ((Queue<> *)((int)this + 0xf40))->array = (HuffmanEncodingTreeNode **)pRVar20;
        local_a8 = (Queue<> *)((int)&local_a8->array + 1);
        ((Queue<> *)((int)this + 0xf40))->head = uVar16;
        RVar14 = (ReliabilityLayer)dhfNAK.isACK;
      } while (local_a8 < (Queue<> *)((Queue<> *)((int)this + 0xf10))->array);
    }
    ClearPacketsAndDatagrams(this);
    *(bool *)&((Queue<> *)((int)this + 0xe70))->tail = ((Queue<> *)((int)this + 0x870))->tail != 0;
  }
  __security_check_cookie(dhfNAK._12_4_ ^ (uint)auStack_c0);
  return;
LAB_0059b56d:
  if (((Queue<> *)((int)this + 0xf30))->array == (HuffmanEncodingTreeNode **)0x0) goto LAB_0059b5ff;
  ackReceipt = (InternalPacket *)((Queue<> *)((int)this + 0xef0))->tail;
  DataStructures::List<>::Insert
            ((List<> *)&((Queue<> *)((int)this + 0xf00))->allocation_size,(uint *)&ackReceipt,
             in_stack_ffffff30,(uint)pRVar34);
  bStack_b9 = false;
  DataStructures::List<bool>::Push
            ((List<bool> *)&((Queue<> *)((int)this + 0xf10))->tail,&bStack_b9,in_stack_ffffff30,
             (uint)pRVar34);
  ackReceipt = (InternalPacket *)((int)((Queue<> *)((int)this + 0xf30))->array + 7U >> 3);
  DataStructures::List<>::Insert
            ((List<> *)&((Queue<> *)((int)this + 0xf20))->head,(uint *)&ackReceipt,in_stack_ffffff30
             ,(uint)pRVar34);
  ((Queue<> *)((int)this + 0xf30))->array = (HuffmanEncodingTreeNode **)0x0;
  if ((&((Queue<> *)((int)this + 0x60))->tail)[((Queue<> *)((int)this + 0x8b0))->head & 0x1ff] != 0)
  goto LAB_0059b5ff;
  goto LAB_0059b020;
}


// private: unsigned int __thiscall
// RakNet::ReliabilityLayer::RemovePacketFromResendListAndDeleteOlderReliableSequenced(struct
// RakNet::uint24_t,unsigned __int64,class DataStructures::List<class RakNet::PluginInterface2 *>
// &,struct RakNet::SystemAddress const &)

uint __thiscall
RakNet::ReliabilityLayer::RemovePacketFromResendListAndDeleteOlderReliableSequenced
          (ReliabilityLayer *this,uint24_t param_1,__uint64 param_2,List<> *param_3,
          SystemAddress *param_4)

{
  InternalPacket *pIVar1;
  bool bVar2;
  ulonglong uVar3;
  InternalPacket *this_00;
  uint uVar4;
  InternalPacket *pIVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint in_stack_00000008;
  char *in_stack_ffffffd0;
  uint in_stack_ffffffd4;
  InternalPacket *ackReceipt;
  
  uVar8 = 0;
  ackReceipt = (InternalPacket *)this;
  if (param_2._4_4_[1] != 0) {
    uVar9 = __aulldiv(in_stack_00000008,(uint)param_2,1000,0);
    uVar3 = uVar9;
    do {
      in_stack_ffffffd4 = (uint)uVar3;
      uVar3 = uVar9 & 0xffffffff;
      in_stack_ffffffd0 = *(char **)(param_3 + 0x10);
      (**(code **)(**(int **)(*param_2._4_4_ + uVar8 * 4) + 0x3c))
                (param_1.val,*(undefined4 *)param_3,*(undefined4 *)(param_3 + 4),
                 *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_2._4_4_[1]);
  }
  this_00 = ackReceipt;
  pIVar1 = *(InternalPacket **)(ackReceipt + (param_1.val & 0x1ff) * 4 + 0x68);
  if ((pIVar1 != (InternalPacket *)0x0) && (*(uint *)pIVar1 == param_1.val)) {
    *(undefined4 *)(ackReceipt + (param_1.val & 0x1ff) * 4 + 0x68) = 0;
    *(int *)(ackReceipt + 0x990) = *(int *)(ackReceipt + 0x990) + -1;
    uVar4 = *(int *)(pIVar1 + 0x18) + 7U >> 3;
    pIVar5 = ackReceipt + 0x998;
    uVar8 = *(uint *)pIVar5;
    *(uint *)pIVar5 = *(uint *)pIVar5 - uVar4;
    *(uint *)(ackReceipt + 0x99c) = *(int *)(ackReceipt + 0x99c) - (uint)(uVar8 < uVar4);
    *(double *)(ackReceipt + 0xf38) =
         (double)((uint)(*(int *)(pIVar1 + 0x40) + *(int *)(pIVar1 + 0x18) + 7) >> 3) + 0.0 +
         *(double *)(ackReceipt + 0xf38);
    iVar7 = *(int *)(pIVar1 + 0x1c);
    if ((5 < iVar7) &&
       ((*(int *)(pIVar1 + 0x14) == 0 || (*(int *)(pIVar1 + 0x10) + 1 == *(int *)(pIVar1 + 0x14)))))
    {
      pIVar5 = AllocateFromInternalPacketPool((ReliabilityLayer *)ackReceipt);
      in_stack_ffffffd4 = 5;
      *(undefined4 *)(pIVar5 + 0x48) = 0;
      ackReceipt = pIVar5;
      puVar6 = malloc(5);
      *(undefined1 **)(pIVar5 + 0x44) = puVar6;
      *(undefined4 *)(pIVar5 + 0x18) = 0x28;
      *puVar6 = 0xe;
      in_stack_ffffffd0 = *(char **)(pIVar5 + 0x44);
      *(undefined4 *)(in_stack_ffffffd0 + 1) = *(undefined4 *)(pIVar1 + 0x58);
      DataStructures::Queue<>::Push
                ((Queue<> *)this_00,(HuffmanEncodingTreeNode **)&ackReceipt,in_stack_ffffffd0,
                 in_stack_ffffffd4);
      iVar7 = *(int *)(pIVar1 + 0x1c);
    }
    if ((((iVar7 == 2) || (iVar7 == 4)) || (iVar7 == 3)) || ((iVar7 == 6 || (iVar7 == 7)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    *(undefined4 *)(*(int *)(pIVar1 + 0x5c) + 0x60) = *(undefined4 *)(pIVar1 + 0x60);
    *(undefined4 *)(*(int *)(pIVar1 + 0x60) + 0x5c) = *(undefined4 *)(pIVar1 + 0x5c);
    if ((*(InternalPacket **)(this_00 + 0x868) == pIVar1) &&
       (pIVar5 = *(InternalPacket **)(pIVar1 + 0x60), *(InternalPacket **)(this_00 + 0x868) = pIVar5
       , pIVar5 == pIVar1)) {
      *(undefined4 *)(this_00 + 0x868) = 0;
    }
    if (bVar2) {
      *(uint *)(this_00 + 0xef0) =
           *(int *)(this_00 + 0xef0) -
           ((uint)(*(int *)(pIVar1 + 0x40) + 7 + *(int *)(pIVar1 + 0x18)) >> 3);
    }
    FreeInternalPacketData((ReliabilityLayer *)this_00,pIVar1,in_stack_ffffffd0,in_stack_ffffffd4);
    ReleaseToInternalPacketPool((ReliabilityLayer *)this_00,pIVar1);
    return 0;
  }
  return 0xffffffff;
}


// private: unsigned int __thiscall
// RakNet::ReliabilityLayer::WriteToBitStreamFromInternalPacket(class RakNet::BitStream *,struct
// RakNet::InternalPacket const * const,unsigned __int64)

uint __thiscall
RakNet::ReliabilityLayer::WriteToBitStreamFromInternalPacket
          (ReliabilityLayer *this,BitStream *param_1,InternalPacket *param_2,__uint64 param_3)

{
  InternalPacket IVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort s;
  uchar tempChar;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  param_1->numberOfBitsUsed = (param_1->numberOfBitsUsed - (param_1->numberOfBitsUsed - 1 & 7)) + 7;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 5) {
    tempChar = '\0';
  }
  else if (iVar2 == 6) {
    tempChar = '\x02';
  }
  else {
    tempChar = SUB41(iVar2,0);
    if (iVar2 == 7) {
      tempChar = '\x03';
    }
  }
  BitStream::WriteBits(param_1,&tempChar,3,SUB41(iVar2,0));
  iVar2 = *(int *)(param_2 + 0x14);
  BitStream::AddBitsAndReallocate(param_1,1);
  uVar3 = param_1->numberOfBitsUsed;
  uVar4 = uVar3 & 7;
  if (iVar2 == 0) {
    if (uVar4 != 0) goto LAB_0059bc43;
    param_1->data[uVar3 >> 3] = '\0';
  }
  else {
    pbVar5 = param_1->data + (uVar3 >> 3);
    if (uVar4 == 0) {
      *pbVar5 = 0x80;
    }
    else {
      *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar4);
    }
  }
  uVar3 = param_1->numberOfBitsUsed;
LAB_0059bc43:
  param_1->numberOfBitsUsed = (uVar3 - (uVar3 & 7)) + 8;
  _s = (uint)*(ushort *)(param_2 + 0x18);
  BitStream::WriteAlignedVar16(param_1,(char *)&s);
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((((iVar2 == 2) || (iVar2 == 4)) || (iVar2 == 3)) || ((iVar2 == 6 || (iVar2 == 7)))) {
    BitStream::Write<>(param_1,(uint24_t *)param_2);
  }
  param_1->numberOfBitsUsed = (param_1->numberOfBitsUsed - (param_1->numberOfBitsUsed - 1 & 7)) + 7;
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((iVar2 == 1) || (iVar2 == 4)) {
    BitStream::Write<>(param_1,(uint24_t *)(param_2 + 8));
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((((iVar2 == 1) || (iVar2 == 4)) || (iVar2 == 3)) || (iVar2 == 7)) {
    BitStream::Write<>(param_1,(uint24_t *)(param_2 + 4));
    IVar1 = param_2[0xc];
    BitStream::AddBitsAndReallocate(param_1,8);
    *(InternalPacket *)(param_1->data + (param_1->numberOfBitsUsed >> 3)) = IVar1;
    param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 8;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    BitStream::WriteAlignedVar32(param_1,(char *)(param_2 + 0x14));
    BitStream::WriteAlignedVar16(param_1,(char *)(param_2 + 0xe));
    BitStream::WriteAlignedVar32(param_1,(char *)(param_2 + 0x10));
  }
  BitStream::WriteAlignedBytes
            (param_1,*(uchar **)(param_2 + 0x44),*(int *)(param_2 + 0x18) + 7U >> 3);
  uVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}


// private: struct RakNet::InternalPacket * __thiscall
// RakNet::ReliabilityLayer::CreateInternalPacketFromBitStream(class RakNet::BitStream *,unsigned
// __int64)

InternalPacket * __thiscall
RakNet::ReliabilityLayer::CreateInternalPacketFromBitStream
          (ReliabilityLayer *this,BitStream *param_1,__uint64 param_2)

{
  InternalPacket *pIVar1;
  uchar uVar2;
  InternalPacket *pIVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_stack_00000008;
  char *pcVar9;
  ushort s;
  char local_a;
  uchar tempChar;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_a = '\0';
  if ((0x1f < param_1->numberOfBitsUsed - param_1->readOffset) &&
     (pIVar3 = AllocateFromInternalPacketPool(this), pIVar3 != (InternalPacket *)0x0)) {
    *(undefined4 *)(pIVar3 + 0x28) = in_stack_00000008;
    *(undefined4 *)(pIVar3 + 0x2c) = (undefined4)param_2;
    uVar6 = (param_1->readOffset - (param_1->readOffset - 1 & 7)) + 7;
    param_1->readOffset = uVar6;
    BitStream::ReadBits(param_1,&tempChar,3,SUB41(uVar6,0));
    *(uint *)(pIVar3 + 0x1c) = (uint)tempChar;
    pvVar5 = (void *)param_1->readOffset;
    _s = (void *)((int)pvVar5 + 1);
    tempChar = _s <= (void *)param_1->numberOfBitsUsed;
    if ((bool)tempChar) {
      local_a = (param_1->data[(uint)pvVar5 >> 3] & (byte)(0x80 >> ((byte)pvVar5 & 7))) != 0;
      pvVar5 = _s;
    }
    param_1->readOffset = (int)pvVar5 + (7 - ((int)pvVar5 - 1U & 7));
    BitStream::ReadAlignedVar16(param_1,(char *)&s);
    *(uint *)(pIVar3 + 0x18) = (uint)_s & 0xffff;
    iVar4 = *(int *)(pIVar3 + 0x1c);
    if (((iVar4 == 2) || (iVar4 == 4)) || (iVar4 == 3)) {
      BitStream::Read<>(param_1,(uint24_t *)pIVar3);
    }
    else {
      *(undefined4 *)pIVar3 = 0xffffff;
    }
    param_1->readOffset = (param_1->readOffset - (param_1->readOffset - 1 & 7)) + 7;
    iVar4 = *(int *)(pIVar3 + 0x1c);
    if ((iVar4 == 1) || (iVar4 == 4)) {
      BitStream::Read<>(param_1,(uint24_t *)(pIVar3 + 8));
      iVar4 = *(int *)(pIVar3 + 0x1c);
    }
    if (((iVar4 == 1) || (iVar4 == 4)) || ((iVar4 == 3 || (iVar4 == 7)))) {
      BitStream::Read<>(param_1,(uint24_t *)(pIVar3 + 4));
      if (param_1->numberOfBitsUsed < param_1->readOffset + 8) {
        uVar2 = '\0';
      }
      else {
        pIVar3[0xc] = *(InternalPacket *)(param_1->data + (param_1->readOffset >> 3));
        uVar2 = '\x01';
        param_1->readOffset = param_1->readOffset + 8;
      }
    }
    else {
      pIVar3[0xc] = (InternalPacket)0x0;
      uVar2 = tempChar;
    }
    pIVar1 = pIVar3 + 0x14;
    if (local_a == '\0') {
      *(uint *)pIVar1 = 0;
    }
    else {
      BitStream::ReadAlignedVar32(param_1,(char *)pIVar1);
      BitStream::ReadAlignedVar16(param_1,(char *)(pIVar3 + 0xe));
      uVar2 = BitStream::ReadAlignedVar32(param_1,(char *)(pIVar3 + 0x10));
    }
    if (((((uVar2 != '\0') && (*(int *)(pIVar3 + 0x18) != 0)) && (*(int *)(pIVar3 + 0x1c) < 8)) &&
        ((byte)pIVar3[0xc] < 0x20)) &&
       ((local_a == '\0' || (*(uint *)(pIVar3 + 0x10) < *(uint *)pIVar1)))) {
      *(undefined4 *)(pIVar3 + 0x48) = 0;
      uVar6 = *(int *)(pIVar3 + 0x18) + 7U >> 3;
      pcVar9 = (char *)0x59bf13;
      pvVar5 = malloc(uVar6);
      *(void **)(pIVar3 + 0x44) = pvVar5;
      if (pvVar5 != (void *)0x0) {
        *(undefined1 *)(((*(int *)(pIVar3 + 0x18) + 7U >> 3) - 1) + (int)pvVar5) = 0;
        _s = *(void **)(pIVar3 + 0x44);
        uVar8 = *(int *)(pIVar3 + 0x18) + 7U >> 3;
        if (uVar8 != 0) {
          uVar7 = (param_1->readOffset - (param_1->readOffset - 1 & 7)) + 7;
          param_1->readOffset = uVar7;
          if (uVar7 + uVar8 * 8 <= param_1->numberOfBitsUsed) {
            memcpy(_s,param_1->data + (uVar7 >> 3),uVar8);
            param_1->readOffset = param_1->readOffset + uVar8 * 8;
            pIVar3 = (InternalPacket *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return pIVar3;
          }
        }
        FreeInternalPacketData(this,pIVar3,pcVar9,uVar6);
      }
    }
    ReleaseToInternalPacketPool(this,pIVar3);
    pIVar3 = (InternalPacket *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return pIVar3;
  }
  pIVar3 = (InternalPacket *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pIVar3;
}


// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// private: void __thiscall RakNet::ReliabilityLayer::SplitPacket(struct RakNet::InternalPacket *)

void __thiscall
RakNet::ReliabilityLayer::SplitPacket(ReliabilityLayer *this,InternalPacket *param_1)

{
  uint uVar1;
  InternalPacket *pIVar2;
  InternalPacket *pIVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  InternalPacket **ppIVar9;
  __uint64 _Var10;
  char *pcVar11;
  undefined8 local_58;
  InternalPacket *local_50;
  uint local_48;
  InternalPacketRefCountedData *local_44;
  InternalPacket *local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  InternalPacketRefCountedData *refCounter;
  uint local_1c;
  InternalPacket **local_18;
  InternalPacket *local_14;
  char local_d;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = 0x18;
  iVar7 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = 1;
  if ((((iVar7 == 2) || (iVar7 == 4)) || (iVar7 == 3)) || ((iVar7 == 6 || (iVar7 == 7)))) {
    iVar5 = 0x30;
  }
  if ((iVar7 == 1) || (iVar7 == 4)) {
    iVar5 = iVar5 + 0x18;
  }
  if ((((iVar7 == 1) || (iVar7 == 4)) || (iVar7 == 3)) || (iVar7 == 7)) {
    iVar5 = iVar5 + 0x20;
  }
  local_1c = *(int *)(param_1 + 0x18) + 7U >> 3;
  local_34 = iVar5 + 0x57U >> 3;
  local_30 = *(int *)(this + 0xea0) - 0x20U;
  local_d = '\0';
  pIVar2 = (InternalPacket *)((local_1c - 1) / (*(int *)(this + 0xea0) - 0x20U) + 1);
  *(InternalPacket **)(param_1 + 0x14) = pIVar2;
  local_14 = pIVar2;
  if ((uint)((int)pIVar2 * 4) < 0x100000) {
    local_18 = (InternalPacket **)&stack0xffffff98;
    local_d = '\x01';
  }
  else {
    local_18 = malloc((int)pIVar2 * 4);
    pIVar2 = *(InternalPacket **)(param_1 + 0x14);
  }
  iVar7 = 0;
  if (0 < (int)pIVar2) {
    do {
      pIVar3 = AllocateFromInternalPacketPool(this);
      local_18[iVar7] = pIVar3;
      *(undefined4 *)pIVar3 = *(undefined4 *)param_1;
      *(undefined4 *)(pIVar3 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(pIVar3 + 8) = *(undefined4 *)(param_1 + 8);
      pIVar3[0xc] = param_1[0xc];
      *(undefined2 *)(pIVar3 + 0xe) = *(undefined2 *)(param_1 + 0xe);
      *(undefined4 *)(pIVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(pIVar3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(pIVar3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(pIVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(pIVar3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      pIVar3[0x24] = param_1[0x24];
      *(undefined4 *)(pIVar3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(pIVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(pIVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(pIVar3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(pIVar3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(pIVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(pIVar3 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(pIVar3 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(pIVar3 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(pIVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      pIVar3[0x50] = param_1[0x50];
      *(undefined4 *)(pIVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(pIVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(pIVar3 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(pIVar3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(pIVar3 + 100) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(pIVar3 + 0x68) = *(undefined4 *)(param_1 + 0x68);
      iVar5 = 0x80;
      pIVar2 = pIVar3 + 0x6c;
      do {
        *pIVar2 = pIVar2[(int)param_1 - (int)pIVar3];
        iVar5 = iVar5 + -1;
        pIVar2 = pIVar2 + 1;
      } while (iVar5 != 0);
      local_18[iVar7][0x24] = (InternalPacket)0x0;
      if (iVar7 != 0) {
        uVar8 = *(uint *)(this + 0x8b8);
        *(uint *)(this + 0x8b8) = uVar8 + 1;
        this[0x8bb] = (ReliabilityLayer)0x0;
        *(uint *)(param_1 + 0x20) = uVar8 & 0xffffff;
      }
      iVar7 = iVar7 + 1;
      local_14 = param_1;
    } while (iVar7 < *(int *)(param_1 + 0x14));
  }
  uVar8 = 0;
  _local_28 = (__uint64)local_28;
  local_14 = (InternalPacket *)0x0;
  do {
    local_2c = local_30;
    if ((int)local_1c <= (int)local_30) {
      local_2c = local_1c;
    }
    AllocInternalPacketData
              (this,local_18[uVar8],&refCounter,*(uchar **)(param_1 + 0x44),
               *(uchar **)(param_1 + 0x44) + (int)local_14);
    if (local_2c == local_30) {
      iVar7 = local_2c << 3;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18) - local_30 * 8 * uVar8;
    }
    *(int *)(local_18[uVar8] + 0x18) = iVar7;
    *(uint *)(local_18[uVar8] + 0x10) = uVar8;
    *(undefined2 *)(local_18[uVar8] + 0xe) = *(undefined2 *)(this + 0x8be);
    ppIVar9 = local_18 + uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(*ppIVar9 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    local_14 = (InternalPacket *)((int)local_14 + local_30);
    local_1c = local_1c - local_30;
  } while (uVar8 < *(uint *)(param_1 + 0x14));
  *(short *)(this + 0x8be) = *(short *)(this + 0x8be) + 1;
  this[0x880] = (ReliabilityLayer)0x0;
  local_1c = 0;
  ppIVar9 = local_18;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      *(uint *)(*ppIVar9 + 0x40) = local_34;
      pIVar2 = *ppIVar9;
      iVar7 = *(int *)(pIVar2 + 0x1c);
      if (((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 5)) {
        if (*(int *)(this + 0x86c) == 0) {
          *(InternalPacket **)(pIVar2 + 0x68) = pIVar2;
          *(InternalPacket **)(pIVar2 + 100) = pIVar2;
          *(InternalPacket **)(this + 0x86c) = pIVar2;
        }
        else {
          *(int *)(pIVar2 + 0x68) = *(int *)(this + 0x86c);
          iVar7 = *(int *)(*(int *)(this + 0x86c) + 100);
          *(int *)(pIVar2 + 100) = iVar7;
          *(InternalPacket **)(iVar7 + 0x68) = pIVar2;
          *(InternalPacket **)(*(int *)(this + 0x86c) + 100) = pIVar2;
        }
      }
      uVar8 = *(uint *)(*ppIVar9 + 0x54);
      pcVar11 = (char *)0x59c2ba;
      _Var10 = GetNextWeight(this,uVar8);
      _local_28 = _Var10;
      if (this[0x880] == (ReliabilityLayer)0x0) {
        uVar1 = *(uint *)(this + 0x878);
        refCounter = (InternalPacketRefCountedData *)(_Var10 >> 0x20);
        if ((uVar1 != 0) && (uVar6 = uVar1 - 1 >> 1, uVar6 < uVar1)) {
          puVar4 = (uint *)(uVar6 * 0x10 + *(int *)(this + 0x874));
          do {
            if ((refCounter < (InternalPacketRefCountedData *)puVar4[1]) ||
               ((refCounter == (InternalPacketRefCountedData *)puVar4[1] && ((uint)_Var10 < *puVar4)
                ))) {
              DataStructures::Heap<>::Push
                        ((Heap<> *)(this + 0x874),(__uint64 *)&stack0xffffffd8,ppIVar9,pcVar11,uVar8
                        );
              goto LAB_0059c367;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 4;
          } while (uVar6 < uVar1);
        }
        local_44 = refCounter;
        local_40 = *ppIVar9;
        local_48 = (uint)_Var10;
        DataStructures::List<>::Insert((List<> *)(this + 0x874),(HeapNode *)&local_48,pcVar11,uVar8)
        ;
        this[0x880] = (ReliabilityLayer)0x1;
      }
      else {
        local_50 = *ppIVar9;
        local_58 = _Var10;
        DataStructures::List<>::Insert((List<> *)(this + 0x874),(HeapNode *)&local_58,pcVar11,uVar8)
        ;
      }
LAB_0059c367:
      *(int *)(this + *(int *)(*ppIVar9 + 0x54) * 4 + 0x960) =
           *(int *)(this + *(int *)(*ppIVar9 + 0x54) * 4 + 0x960) + 1;
      iVar7 = *(int *)(*ppIVar9 + 0x54);
      local_1c = local_1c + 1;
      *(double *)(this + iVar7 * 8 + 0x970) =
           (double)(*(int *)(*ppIVar9 + 0x18) + 7U >> 3) + 0.0 +
           *(double *)(this + iVar7 * 8 + 0x970);
      ppIVar9 = ppIVar9 + 1;
    } while ((int)local_1c < *(int *)(param_1 + 0x14));
  }
  ReleaseToInternalPacketPool(this,param_1);
  if (local_d == '\0') {
    free(local_18);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::InsertIntoSplitPacketList(struct
// RakNet::InternalPacket *,unsigned __int64)

void __thiscall
RakNet::ReliabilityLayer::InsertIntoSplitPacketList
          (ReliabilityLayer *this,InternalPacket *param_1,__uint64 param_2)

{
  OrderedList<> *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  InternalPacket *pIVar5;
  void *pvVar6;
  char *pcVar7;
  size_t _Size;
  undefined4 in_stack_00000008;
  undefined1 uVar8;
  bool *pbVar9;
  ReliabilityLayer *pRVar10;
  size_t sVar11;
  SplitPacketChannel *newChannel;
  uint local_14;
  bool objectExists;
  InternalPacket *progressIndicator;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  pbVar9 = &objectExists;
  pIVar5 = param_1 + 0xe;
  progressIndicator = param_1;
  this_00 = (OrderedList<> *)(this + 0x8a8);
  uVar8 = 0x27;
  pRVar10 = this;
  local_14 = DataStructures::OrderedList<>::GetIndexFromKey
                       (this_00,(ushort *)pIVar5,pbVar9,
                        (_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *)this);
  if (objectExists == false) {
    pRVar10 = (ReliabilityLayer *)0x18;
    pbVar9 = (bool *)0x59c439;
    newChannel = operator_new(0x18);
    *(undefined4 *)(newChannel + 0x10) = 0;
    *(undefined4 *)(newChannel + 8) = 0;
    *(undefined4 *)(newChannel + 0xc) = 0;
    *(undefined4 *)(newChannel + 0x14) = 0;
    local_14 = DataStructures::OrderedList<>::Insert
                         (this_00,(ushort *)(param_1 + 0xe),&newChannel,(bool)uVar8,(char *)pIVar5,
                          (uint)pbVar9,(_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *)pRVar10);
    DataStructures::List<>::Preallocate
              ((List<> *)(newChannel + 8),*(uint *)(param_1 + 0x14),pbVar9,(uint)pRVar10);
  }
  DataStructures::List<>::Insert
            ((List<> *)(*(int *)(*(int *)this_00 + local_14 * 4) + 8),(uint *)&progressIndicator,
             pbVar9,(uint)pRVar10);
  puVar1 = *(undefined4 **)(*(int *)this_00 + local_14 * 4);
  *puVar1 = in_stack_00000008;
  puVar1[1] = (undefined4)param_2;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(InternalPacket **)(*(int *)(*(int *)this_00 + local_14 * 4) + 0x14) = param_1;
  }
  if (*(uint *)(this + 0x10) != 0) {
    iVar2 = *(int *)(*(int *)this_00 + local_14 * 4);
    iVar3 = *(int *)(iVar2 + 0x14);
    if (((iVar3 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != *(uint *)(iVar3 + 0x14))) &&
       (uVar4 % *(uint *)(this + 0x10) == 0)) {
      pIVar5 = AllocateFromInternalPacketPool(this);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)this_00 + local_14 * 4) + 0x14) + 0x18);
      *(undefined4 *)(pIVar5 + 0x48) = 0;
      _Size = (iVar2 + 7U >> 3) + 0xd;
      sVar11 = _Size;
      progressIndicator = pIVar5;
      pvVar6 = malloc(_Size);
      *(void **)(pIVar5 + 0x44) = pvVar6;
      *(size_t *)(pIVar5 + 0x18) = _Size * 8;
      **(undefined1 **)(pIVar5 + 0x44) = 0x1e;
      *(undefined4 *)(*(int *)(pIVar5 + 0x44) + 1) =
           *(undefined4 *)(*(int *)(*(int *)this_00 + local_14 * 4) + 0xc);
      *(undefined4 *)(*(int *)(pIVar5 + 0x44) + 5) = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(*(int *)(pIVar5 + 0x44) + 9) =
           *(int *)(*(int *)(*(int *)(*(int *)this_00 + local_14 * 4) + 0x14) + 0x18) + 7U >> 3;
      iVar2 = *(int *)(*(int *)(*(int *)this_00 + local_14 * 4) + 0x14);
      pcVar7 = (char *)(*(int *)(iVar2 + 0x18) + 7U >> 3);
      memcpy((void *)(*(int *)(pIVar5 + 0x44) + 0xd),*(void **)(iVar2 + 0x44),(size_t)pcVar7);
      DataStructures::Queue<>::Push
                ((Queue<> *)this,(HuffmanEncodingTreeNode **)&progressIndicator,pcVar7,sVar11);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// private: struct RakNet::InternalPacket * __thiscall
// RakNet::ReliabilityLayer::BuildPacketFromSplitPacketList(unsigned short,unsigned __int64,class
// RakNet::RakNetSocket2 *,struct RakNet::SystemAddress &,class RakNet::RakNetRandom *,class
// RakNet::BitStream &)

InternalPacket * __thiscall
RakNet::ReliabilityLayer::BuildPacketFromSplitPacketList
          (ReliabilityLayer *this,ushort param_1,__uint64 param_2,RakNetSocket2 *param_3,
          SystemAddress *param_4,RakNetRandom *param_5,BitStream *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  RakNetRandom *pRVar5;
  ReliabilityLayer *this_00;
  uint uVar6;
  InternalPacket *pIVar7;
  InternalPacket *_Size;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 in_stack_00000008;
  char *pcVar12;
  bool objectExists;
  SystemAddress *local_10;
  ReliabilityLayer *local_c;
  RakNetSocket2 *local_8;
  
  pRVar5 = param_5;
  local_8 = param_2._4_4_;
  local_10 = (SystemAddress *)param_3;
  local_c = this;
  uVar6 = DataStructures::OrderedList<>::GetIndexFromKey
                    ((OrderedList<> *)(this + 0x8a8),&param_1,&objectExists,
                     (_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *)param_3);
  uVar4 = (undefined4)param_2;
  pvVar3 = *(void **)(*(int *)(this + 0x8a8) + uVar6 * 4);
  if (*(uint *)((int)pvVar3 + 0xc) != ((RakNetRandom *)**(undefined4 **)((int)pvVar3 + 8))->state[5]
     ) {
    return (InternalPacket *)0x0;
  }
  SendACKs(local_c,local_8,local_10,CONCAT44((undefined4)param_2,in_stack_00000008),
           (RakNetRandom *)**(undefined4 **)((int)pvVar3 + 8),(BitStream *)pRVar5);
  local_8 = (RakNetSocket2 *)**(undefined4 **)((int)pvVar3 + 8);
  pIVar7 = AllocateFromInternalPacketPool(local_c);
  iVar10 = 0;
  *(undefined4 *)(pIVar7 + 0x2c) = uVar4;
  *(undefined4 *)(pIVar7 + 0x18) = 0;
  *(undefined4 *)(pIVar7 + 0x44) = 0;
  *(undefined4 *)(pIVar7 + 0x28) = in_stack_00000008;
  *(undefined4 *)(pIVar7 + 0x30) = 0;
  *(undefined4 *)(pIVar7 + 0x34) = 0;
  *(undefined4 *)(pIVar7 + 4) = *(undefined4 *)((int)local_8 + 4);
  *(undefined4 *)(pIVar7 + 8) = *(undefined4 *)((int)local_8 + 8);
  pIVar7[0xc] = *(InternalPacket *)((int)local_8 + 0xc);
  *(undefined4 *)pIVar7 = *(undefined4 *)local_8;
  *(undefined4 *)(pIVar7 + 0x54) = *(undefined4 *)((int)local_8 + 0x54);
  uVar9 = 0;
  *(undefined4 *)(pIVar7 + 0x1c) = *(undefined4 *)((int)local_8 + 0x1c);
  *(undefined4 *)(pIVar7 + 0x18) = 0;
  if (*(int *)((int)pvVar3 + 0xc) != 0) {
    do {
      iVar1 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + *(int *)(*(int *)(*(int *)((int)pvVar3 + 8) + iVar1) + 0x18);
      *(int *)(pIVar7 + 0x18) = iVar10;
    } while (uVar9 < *(uint *)((int)pvVar3 + 0xc));
  }
  _Size = (InternalPacket *)(iVar10 + 7U >> 3);
  pcVar12 = (char *)0x59c6a1;
  local_10 = (SystemAddress *)pIVar7;
  pvVar8 = malloc((size_t)_Size);
  *(void **)(pIVar7 + 0x44) = pvVar8;
  *(undefined4 *)(pIVar7 + 0x48) = 0;
  uVar11 = 0;
  local_8 = (RakNetSocket2 *)0x0;
  uVar9 = 0;
  if (*(int *)((int)pvVar3 + 0xc) != 0) {
    do {
      iVar10 = *(int *)(*(int *)((int)pvVar3 + 8) + uVar11 * 4);
      _Size = (InternalPacket *)(*(int *)(iVar10 + 0x18) + 7U >> 3);
      pcVar12 = *(char **)(iVar10 + 0x44);
      memcpy((void *)(((int)local_8 + 7U >> 3) + *(int *)(pIVar7 + 0x44)),pcVar12,(size_t)_Size);
      iVar10 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      local_8 = (RakNetSocket2 *)
                ((int)local_8 + *(int *)(*(int *)(*(int *)((int)pvVar3 + 8) + iVar10) + 0x18));
      uVar9 = *(uint *)((int)pvVar3 + 0xc);
    } while (uVar11 < uVar9);
  }
  this_00 = local_c;
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FreeInternalPacketData
                (this_00,*(InternalPacket **)(*(int *)((int)pvVar3 + 8) + uVar11 * 4),pcVar12,
                 (uint)_Size);
      _Size = *(InternalPacket **)(*(int *)((int)pvVar3 + 8) + uVar11 * 4);
      pcVar12 = (char *)0x59c722;
      ReleaseToInternalPacketPool(this_00,_Size);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)((int)pvVar3 + 0xc));
  }
  if (*(int *)((int)pvVar3 + 0x10) != 0) {
    operator_delete__(*(void **)((int)pvVar3 + 8));
  }
  operator_delete(pvVar3,(nothrow_t *)0x18);
  uVar9 = *(uint *)(local_c + 0x8ac);
  if (uVar6 < uVar9) {
    if (uVar6 < uVar9 - 1) {
      do {
        puVar2 = (undefined4 *)(*(int *)(local_c + 0x8a8) + uVar6 * 4);
        uVar6 = uVar6 + 1;
        *puVar2 = puVar2[1];
        uVar9 = *(uint *)(local_c + 0x8ac);
      } while (uVar6 < uVar9 - 1);
    }
    *(uint *)(local_c + 0x8ac) = uVar9 - 1;
  }
  return (InternalPacket *)local_10;
}


// public: struct RakNet::RakNetStatistics * __thiscall
// RakNet::ReliabilityLayer::GetStatistics(struct RakNet::RakNetStatistics *)

RakNetStatistics * __thiscall
RakNet::ReliabilityLayer::GetStatistics(ReliabilityLayer *this,RakNetStatistics *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ReliabilityLayer *pRVar6;
  RakNetStatistics *pRVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  
  GetTimeUS_Windows();
  *(undefined4 *)(this + 0x8c8) = *(undefined4 *)(this + 0xf98);
  dVar8 = 0.0;
  *(undefined4 *)(this + 0x8cc) = *(undefined4 *)(this + 0xf9c);
  *(undefined4 *)(this + 0x900) = *(undefined4 *)(this + 0xf90);
  *(undefined4 *)(this + 0x904) = *(undefined4 *)(this + 0xf94);
  *(undefined4 *)(this + 0x8d0) = *(undefined4 *)(this + 0xfb8);
  *(undefined4 *)(this + 0x8d4) = *(undefined4 *)(this + 0xfbc);
  *(undefined4 *)(this + 0x908) = *(undefined4 *)(this + 0xfb0);
  *(undefined4 *)(this + 0x90c) = *(undefined4 *)(this + 0xfb4);
  *(undefined4 *)(this + 0x8d8) = *(undefined4 *)(this + 0xfd8);
  *(undefined4 *)(this + 0x8dc) = *(undefined4 *)(this + 0xfdc);
  *(undefined4 *)(this + 0x910) = *(undefined4 *)(this + 0xfd0);
  *(undefined4 *)(this + 0x914) = *(undefined4 *)(this + 0xfd4);
  *(undefined4 *)(this + 0x8e0) = *(undefined4 *)(this + 0xff8);
  *(undefined4 *)(this + 0x8e4) = *(undefined4 *)(this + 0xffc);
  *(undefined4 *)(this + 0x918) = *(undefined4 *)(this + 0xff0);
  *(undefined4 *)(this + 0x91c) = *(undefined4 *)(this + 0xff4);
  *(undefined4 *)(this + 0x8e8) = *(undefined4 *)(this + 0x1018);
  *(undefined4 *)(this + 0x8ec) = *(undefined4 *)(this + 0x101c);
  *(undefined4 *)(this + 0x920) = *(undefined4 *)(this + 0x1010);
  *(undefined4 *)(this + 0x924) = *(undefined4 *)(this + 0x1014);
  *(undefined4 *)(this + 0x8f0) = *(undefined4 *)(this + 0x1038);
  *(undefined4 *)(this + 0x8f4) = *(undefined4 *)(this + 0x103c);
  *(undefined4 *)(this + 0x928) = *(undefined4 *)(this + 0x1030);
  *(undefined4 *)(this + 0x92c) = *(undefined4 *)(this + 0x1034);
  *(undefined4 *)(this + 0x8f8) = *(undefined4 *)(this + 0x1058);
  *(undefined4 *)(this + 0x8fc) = *(undefined4 *)(this + 0x105c);
  *(undefined4 *)(this + 0x930) = *(undefined4 *)(this + 0x1050);
  *(undefined4 *)(this + 0x934) = *(undefined4 *)(this + 0x1054);
  pRVar6 = this + 0x8c8;
  pRVar7 = param_1;
  for (iVar3 = 0x38; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pRVar7->valueOverLastSecond = *(undefined4 *)pRVar6;
    pRVar6 = pRVar6 + 4;
    pRVar7 = (RakNetStatistics *)((int)pRVar7->valueOverLastSecond + 4);
  }
  uVar1 = (uint)param_1->valueOverLastSecond[1];
  uVar2 = (uint)param_1->valueOverLastSecond[2];
  if ((*(int *)((int)param_1->valueOverLastSecond + 0xc) +
       *(int *)((int)param_1->valueOverLastSecond + 0x14) + (uint)CARRY4(uVar1,uVar2) != 0) ||
     (uVar1 + uVar2 != 0)) {
    __ultod3();
    dVar9 = dVar8;
    __ultod3();
    dVar8 = (double)(ulonglong)(uint)(float)(dVar8 / (dVar9 + dVar8));
  }
  param_1->packetlossLastSecond = SUB84(dVar8,0);
  param_1->packetlossTotal = 0.0;
  uVar1 = (uint)param_1->runningTotal[1];
  uVar4 = uVar1 + (uint)param_1->runningTotal[2];
  uVar2 = *(uint *)((int)param_1->runningTotal + 0xc);
  uVar5 = uVar2 + *(int *)((int)param_1->runningTotal + 0x14) +
          (uint)CARRY4(uVar1,(uint)param_1->runningTotal[2]);
  if ((uVar4 != 0 || uVar5 != 0) && (lVar10 = __aulldiv(uVar1,uVar2,uVar4,uVar5), lVar10 != 0)) {
    __ultod3();
    dVar9 = dVar8;
    __ultod3();
    if (dVar9 + dVar8 != 0.0) {
      param_1->packetlossTotal = (float)(dVar8 / (dVar9 + dVar8));
    }
  }
  param_1->isLimitedByCongestionControl = (bool)this[0x940];
  *(undefined4 *)&param_1->BPSLimitByCongestionControl = *(undefined4 *)(this + 0x948);
  *(undefined4 *)((int)&param_1->BPSLimitByCongestionControl + 4) = *(undefined4 *)(this + 0x94c);
  param_1->isLimitedByOutgoingBandwidthLimit = (bool)this[0x950];
  *(undefined4 *)&param_1->BPSLimitByOutgoingBandwidthLimit = *(undefined4 *)(this + 0x958);
  *(undefined4 *)((int)&param_1->BPSLimitByOutgoingBandwidthLimit + 4) =
       *(undefined4 *)(this + 0x95c);
  return param_1;
}


// private: void __thiscall RakNet::ReliabilityLayer::ClearPacketsAndDatagrams(void)

void __thiscall RakNet::ReliabilityLayer::ClearPacketsAndDatagrams(ReliabilityLayer *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *in_stack_fffffff0;
  InternalPacket *in_stack_fffffff4;
  
  uVar3 = 0;
  if (*(int *)(this + 0xf04) != 0) {
    do {
      if (*(char *)(uVar3 + *(int *)(this + 0xf00)) != '\0') {
        iVar1 = *(int *)(*(int *)(this + 0xef4) + uVar3 * 4);
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 5)) {
          *(undefined4 *)(*(int *)(iVar1 + 100) + 0x68) = *(undefined4 *)(iVar1 + 0x68);
          *(undefined4 *)(*(int *)(iVar1 + 0x68) + 100) = *(undefined4 *)(iVar1 + 100);
          if ((*(int *)(this + 0x86c) == iVar1) &&
             (iVar2 = *(int *)(iVar1 + 0x68), *(int *)(this + 0x86c) = iVar2, iVar2 == iVar1)) {
            *(undefined4 *)(this + 0x86c) = 0;
          }
        }
        FreeInternalPacketData
                  (this,*(InternalPacket **)(*(int *)(this + 0xef4) + uVar3 * 4),in_stack_fffffff0,
                   (uint)in_stack_fffffff4);
        in_stack_fffffff4 = *(InternalPacket **)(*(int *)(this + 0xef4) + uVar3 * 4);
        in_stack_fffffff0 = (char *)0x59cabe;
        ReleaseToInternalPacketPool(this,in_stack_fffffff4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0xf04));
  }
  if (*(uint *)(this + 0xf08) != 0) {
    if (0x200 < *(uint *)(this + 0xf08)) {
      operator_delete__(*(void **)(this + 0xf00));
      *(undefined4 *)(this + 0xf08) = 0;
      *(undefined4 *)(this + 0xf00) = 0;
    }
    *(undefined4 *)(this + 0xf04) = 0;
  }
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::SendACKs(class RakNet::RakNetSocket2 *,struct
// RakNet::SystemAddress &,unsigned __int64,class RakNet::RakNetRandom *,class RakNet::BitStream &)

void __thiscall
RakNet::ReliabilityLayer::SendACKs
          (ReliabilityLayer *this,RakNetSocket2 *param_1,SystemAddress *param_2,__uint64 param_3,
          RakNetRandom *param_4,BitStream *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool extraout_CL;
  uint uVar4;
  double AS;
  uchar *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ushort local_20;
  ushort local_1e;
  undefined4 local_1c;
  DatagramHeaderFormat dhf;
  
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = *(int *)(this + 0xea0) * 8 - 0x48;
  iVar2 = *(int *)(this + 0xf64);
  while (iVar2 != 0) {
    param_5->numberOfBitsUsed = 0;
    param_5->readOffset = 0;
    dhf.isACK = true;
    dhf.isNAK = false;
    dhf.isPacketPair = false;
    dhf.hasBAndAS = false;
    if (this[0xf78] != (ReliabilityLayer)0x0) {
      dhf.AS = (float)(double)CONCAT44(uVar1,AS._0_4_);
    }
    DatagramHeaderFormat::Serialize(&dhf,param_5);
    DataStructures::RangeList<>::Serialize((RangeList<> *)(this + 0xf60),param_5,uVar1,extraout_CL);
    uVar4 = param_5->numberOfBitsUsed + 7 >> 3;
    BPSTracker::Push1((BPSTracker *)(this + 0x1030),param_3,(ulonglong)uVar4);
    local_38 = param_5->data;
    local_1e = param_2->systemIndex;
    local_20 = param_2->debugPort;
    local_30 = *(undefined4 *)param_2;
    uStack_2c = *(undefined4 *)&param_2->field_0x4;
    uStack_28 = *(undefined4 *)&param_2->field_0x8;
    uStack_24 = *(undefined4 *)&param_2->field_0xc;
    local_1c = 0;
    local_34 = uVar4;
    (**(code **)(*(int *)param_1 + 4))
              (&local_38,"f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp",0x922);
    *(undefined4 *)(this + 0xeb8) = 0;
    *(undefined4 *)(this + 0xebc) = 0;
    iVar2 = *(int *)(this + 0xf64);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


// private: struct RakNet::InternalPacket * __thiscall
// RakNet::ReliabilityLayer::AllocateFromInternalPacketPool(void)

InternalPacket * __thiscall
RakNet::ReliabilityLayer::AllocateFromInternalPacketPool(ReliabilityLayer *this)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  InternalPacket *pIVar7;
  
  if (*(int *)(this + 0x5c) < 1) {
    puVar2 = malloc(0x14);
    *(undefined4 **)(this + 0x54) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x5c) = 1;
      iVar6 = 0;
      uVar3 = *(uint *)(this + 100) / 0xf8;
      pvVar4 = malloc(*(uint *)(this + 100));
      puVar2[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = malloc(uVar3 << 2);
        pvVar4 = (void *)puVar2[2];
        *puVar2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          if (uVar3 != 0) {
            do {
              *(undefined4 **)((int)pvVar4 + 0xf0) = puVar2;
              *(void **)((int)pvVar5 + iVar6 * 4) = pvVar4;
              iVar6 = iVar6 + 1;
              pvVar4 = (void *)((int)pvVar4 + 0xf8);
            } while (iVar6 < (int)uVar3);
          }
          puVar2[1] = uVar3;
          puVar2[3] = *(undefined4 *)(this + 0x54);
          puVar2[4] = puVar2;
          iVar6 = *(int *)(this + 0x54);
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + -1;
          pIVar7 = *(InternalPacket **)(**(int **)(this + 0x54) + *(int *)(iVar6 + 4) * 4);
          goto LAB_0059cd2a;
        }
        free(pvVar4);
      }
    }
    pIVar7 = (InternalPacket *)0x0;
  }
  else {
    piVar1 = *(int **)(this + 0x54);
    iVar6 = piVar1[1] + -1;
    piVar1[1] = iVar6;
    pIVar7 = *(InternalPacket **)(*piVar1 + iVar6 * 4);
    if (iVar6 == 0) {
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + -1;
      *(int *)(this + 0x54) = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar6 = *(int *)(this + 0x60);
      *(int *)(this + 0x60) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)(this + 0x58) = piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = *(int *)(this + 0x58);
        piVar1[4] = *(int *)(*(int *)(this + 0x58) + 0x10);
        *(int **)(*(int *)(*(int *)(this + 0x58) + 0x10) + 0xc) = piVar1;
        *(int **)(*(int *)(this + 0x58) + 0x10) = piVar1;
      }
    }
  }
LAB_0059cd2a:
  *(undefined4 *)pIVar7 = 0xffffff;
  *(undefined2 *)(pIVar7 + 0xe) = 0;
  *(undefined4 *)(pIVar7 + 0x48) = 0;
  *(undefined4 *)(pIVar7 + 0x44) = 0;
  pIVar7[0x50] = (InternalPacket)0x0;
  pIVar7[0x24] = (InternalPacket)0x0;
  *(undefined4 *)(pIVar7 + 0x30) = 0;
  *(undefined4 *)(pIVar7 + 0x34) = 0;
  *(undefined4 *)(pIVar7 + 0x14) = 0;
  *(undefined4 *)(pIVar7 + 0x10) = 0;
  return pIVar7;
}


// private: void __thiscall RakNet::ReliabilityLayer::ReleaseToInternalPacketPool(struct
// RakNet::InternalPacket *)

void __thiscall
RakNet::ReliabilityLayer::ReleaseToInternalPacketPool
          (ReliabilityLayer *this,InternalPacket *param_1)

{
  int *_Memory;
  int iVar1;
  
  _Memory = *(int **)(param_1 + 0xf0);
  if (_Memory[1] != 0) {
    ((undefined4 *)*_Memory)[_Memory[1]] = param_1;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)(this + 100) / 0xf8) && (3 < *(int *)(this + 0x5c))) {
      if (_Memory == *(int **)(this + 0x54)) {
        *(int *)(this + 0x54) = _Memory[3];
      }
      *(int *)(_Memory[4] + 0xc) = _Memory[3];
      *(int *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
    return;
  }
  *(undefined4 *)*_Memory = param_1;
  _Memory[1] = _Memory[1] + 1;
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + -1;
  *(int *)(_Memory[3] + 0x10) = _Memory[4];
  *(int *)(_Memory[4] + 0xc) = _Memory[3];
  if ((0 < *(int *)(this + 0x60)) && (_Memory == *(int **)(this + 0x58))) {
    *(int *)(this + 0x58) = (*(int **)(this + 0x58))[3];
  }
  iVar1 = *(int *)(this + 0x5c);
  *(int *)(this + 0x5c) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)(this + 0x54) = _Memory;
    _Memory[3] = (int)_Memory;
    _Memory[4] = (int)_Memory;
    return;
  }
  _Memory[3] = *(int *)(this + 0x54);
  _Memory[4] = *(int *)(*(int *)(this + 0x54) + 0x10);
  *(int **)(*(int *)(*(int *)(this + 0x54) + 0x10) + 0xc) = _Memory;
  *(int **)(*(int *)(this + 0x54) + 0x10) = _Memory;
  return;
}


// private: struct RakNet::ReliabilityLayer::MessageNumberNode * __thiscall
// RakNet::ReliabilityLayer::GetMessageNumberNodeByDatagramIndex(struct RakNet::uint24_t,unsigned
// __int64 *)

MessageNumberNode * __thiscall
RakNet::ReliabilityLayer::GetMessageNumberNodeByDatagramIndex
          (ReliabilityLayer *this,uint24_t param_1,__uint64 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  MessageNumberNode *pMVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(this + 0x24);
  uVar6 = *(uint *)(this + 0x28);
  if ((uVar1 != uVar6) &&
     ((uVar3 = *(uint *)(this + 0x50), uVar3 == param_1.val ||
      (0x7ffffe < (uVar3 - param_1.val & 0xffffff))))) {
    uVar3 = param_1.val - uVar3 & 0xffffff;
    if (uVar6 < uVar1) {
      iVar5 = *(int *)(this + 0x2c) - uVar1;
    }
    else {
      iVar5 = -uVar1;
    }
    if (uVar3 < uVar6 + iVar5) {
      uVar6 = uVar1 + uVar3;
      iVar5 = *(int *)(this + 0x20);
      if (*(uint *)(this + 0x2c) <= uVar6) {
        uVar6 = (uVar1 - *(uint *)(this + 0x2c)) + uVar3;
      }
      *(undefined4 *)param_2 = *(undefined4 *)(iVar5 + 8 + uVar6 * 0x10);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar5 + 0xc + uVar6 * 0x10);
      if (*(int *)(this + 0x24) + uVar3 < *(uint *)(this + 0x2c)) {
        pMVar4 = (MessageNumberNode *)__security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
        return pMVar4;
      }
      pMVar4 = (MessageNumberNode *)__security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return pMVar4;
    }
  }
  pMVar4 = (MessageNumberNode *)__security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return pMVar4;
}


// private: void __thiscall RakNet::ReliabilityLayer::RemoveFromDatagramHistory(struct
// RakNet::uint24_t)

void __thiscall
RakNet::ReliabilityLayer::RemoveFromDatagramHistory(ReliabilityLayer *this,uint24_t param_1)

{
  int *_Memory;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(this + 0x24);
  uVar5 = param_1.val - *(int *)(this + 0x50) & 0xffffff;
  uVar4 = *(uint *)(this + 0x2c);
  uVar1 = iVar3 + uVar5;
  if (uVar4 <= uVar1) {
    uVar1 = (iVar3 - uVar4) + uVar5;
  }
  iVar2 = *(int *)(*(int *)(this + 0x20) + uVar1 * 0x10);
  if (iVar2 != 0) {
    do {
      _Memory = *(int **)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 4);
      if (_Memory[1] == 0) {
        *(int *)*_Memory = iVar2;
        _Memory[1] = _Memory[1] + 1;
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + -1;
        *(int *)(_Memory[3] + 0x10) = _Memory[4];
        *(int *)(_Memory[4] + 0xc) = _Memory[3];
        if ((0 < *(int *)(this + 0x3c)) && (_Memory == *(int **)(this + 0x34))) {
          *(int *)(this + 0x34) = (*(int **)(this + 0x34))[3];
        }
        iVar2 = *(int *)(this + 0x38);
        *(int *)(this + 0x38) = iVar2 + 1;
        if (iVar2 == 0) {
          *(int **)(this + 0x30) = _Memory;
          _Memory[3] = (int)_Memory;
          _Memory[4] = (int)_Memory;
        }
        else {
          _Memory[3] = *(int *)(this + 0x30);
          _Memory[4] = *(int *)(*(int *)(this + 0x30) + 0x10);
          *(int **)(*(int *)(*(int *)(this + 0x30) + 0x10) + 0xc) = _Memory;
          *(int **)(*(int *)(this + 0x30) + 0x10) = _Memory;
        }
      }
      else {
        ((int *)*_Memory)[_Memory[1]] = iVar2;
        _Memory[1] = _Memory[1] + 1;
        if ((_Memory[1] == *(uint *)(this + 0x40) / 0xc) && (3 < *(int *)(this + 0x38))) {
          if (_Memory == *(int **)(this + 0x30)) {
            *(int *)(this + 0x30) = _Memory[3];
          }
          *(int *)(_Memory[4] + 0xc) = _Memory[3];
          *(int *)(_Memory[3] + 0x10) = _Memory[4];
          *(int *)(this + 0x38) = *(int *)(this + 0x38) + -1;
          free((void *)*_Memory);
          free((void *)_Memory[2]);
          free(_Memory);
        }
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    iVar3 = *(int *)(this + 0x24);
    uVar4 = *(uint *)(this + 0x2c);
  }
  if (iVar3 + uVar5 < uVar4) {
    *(undefined4 *)(*(int *)(this + 0x20) + (iVar3 + uVar5) * 0x10) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(this + 0x20) + ((iVar3 - uVar4) + uVar5) * 0x10) = 0;
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::AllocInternalPacketData(struct
// RakNet::InternalPacket *,struct RakNet::InternalPacketRefCountedData * *,unsigned char *,unsigned
// char *)

void __thiscall
RakNet::ReliabilityLayer::AllocInternalPacketData
          (ReliabilityLayer *this,InternalPacket *param_1,InternalPacketRefCountedData **param_2,
          uchar *param_3,uchar *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  InternalPacketRefCountedData *pIVar7;
  
  *(uchar **)(param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 0x48) = 1;
  pIVar7 = *param_2;
  if (pIVar7 != (InternalPacketRefCountedData *)0x0) {
    *(int *)(pIVar7 + 4) = *(int *)(pIVar7 + 4) + 1;
    *(InternalPacketRefCountedData **)(param_1 + 0x4c) = pIVar7;
    return;
  }
  if (*(int *)(this + 0xf84) < 1) {
    puVar2 = malloc(0x14);
    pIVar7 = (InternalPacketRefCountedData *)0x0;
    *(undefined4 **)(this + 0xf7c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0xf84) = 1;
      uVar3 = *(uint *)(this + 0xf8c) / 0xc;
      pvVar4 = malloc(*(uint *)(this + 0xf8c));
      puVar2[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = malloc(uVar3 << 2);
        pvVar4 = (void *)puVar2[2];
        *puVar2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          if (uVar3 != 0) {
            do {
              *(undefined4 **)((int)pvVar4 + 8) = puVar2;
              *(void **)((int)pvVar5 + (int)pIVar7 * 4) = pvVar4;
              pIVar7 = pIVar7 + 1;
              pvVar4 = (void *)((int)pvVar4 + 0xc);
            } while ((int)pIVar7 < (int)uVar3);
          }
          puVar2[1] = uVar3;
          puVar2[3] = *(undefined4 *)(this + 0xf7c);
          puVar2[4] = puVar2;
          iVar6 = *(int *)(this + 0xf7c);
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + -1;
          pIVar7 = *(InternalPacketRefCountedData **)
                    (**(int **)(this + 0xf7c) + *(int *)(iVar6 + 4) * 4);
          goto LAB_0059d21d;
        }
        free(pvVar4);
      }
      pIVar7 = (InternalPacketRefCountedData *)0x0;
    }
  }
  else {
    piVar1 = *(int **)(this + 0xf7c);
    iVar6 = piVar1[1] + -1;
    piVar1[1] = iVar6;
    pIVar7 = *(InternalPacketRefCountedData **)(*piVar1 + iVar6 * 4);
    if (iVar6 == 0) {
      *(int *)(this + 0xf84) = *(int *)(this + 0xf84) + -1;
      *(int *)(this + 0xf7c) = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar6 = *(int *)(this + 0xf88);
      *(int *)(this + 0xf88) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)(this + 0xf80) = piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = *(int *)(this + 0xf80);
        piVar1[4] = *(int *)(*(int *)(this + 0xf80) + 0x10);
        *(int **)(*(int *)(*(int *)(this + 0xf80) + 0x10) + 0xc) = piVar1;
        *(int **)(*(int *)(this + 0xf80) + 0x10) = piVar1;
      }
    }
  }
LAB_0059d21d:
  *(undefined4 *)(pIVar7 + 4) = 1;
  *param_2 = pIVar7;
  *(uchar **)pIVar7 = param_3;
  *(InternalPacketRefCountedData **)(param_1 + 0x4c) = pIVar7;
  return;
}


// private: void __thiscall RakNet::ReliabilityLayer::FreeInternalPacketData(struct
// RakNet::InternalPacket *,char const *,unsigned int)

void __thiscall
RakNet::ReliabilityLayer::FreeInternalPacketData
          (ReliabilityLayer *this,InternalPacket *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *_Memory;
  
  if (param_1 != (InternalPacket *)0x0) {
    if (*(int *)(param_1 + 0x48) == 1) {
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar1 = (int *)(*(int *)(param_1 + 0x4c) + 4);
        *piVar1 = *piVar1 + -1;
        if ((*(undefined4 **)(param_1 + 0x4c))[1] == 0) {
          free((void *)**(undefined4 **)(param_1 + 0x4c));
          **(undefined4 **)(param_1 + 0x4c) = 0;
          iVar2 = *(int *)(param_1 + 0x4c);
          _Memory = *(undefined4 **)(iVar2 + 8);
          if (_Memory[1] != 0) {
            ((int *)*_Memory)[_Memory[1]] = iVar2;
            _Memory[1] = _Memory[1] + 1;
            if ((_Memory[1] == *(uint *)(this + 0xf8c) / 0xc) && (3 < *(int *)(this + 0xf84))) {
              if (_Memory == *(undefined4 **)(this + 0xf7c)) {
                *(undefined4 *)(this + 0xf7c) = _Memory[3];
              }
              *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
              *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
              *(int *)(this + 0xf84) = *(int *)(this + 0xf84) + -1;
              free((void *)*_Memory);
              free((void *)_Memory[2]);
              free(_Memory);
            }
            *(undefined4 *)(param_1 + 0x4c) = 0;
            return;
          }
          *(int *)*_Memory = iVar2;
          _Memory[1] = _Memory[1] + 1;
          *(int *)(this + 0xf88) = *(int *)(this + 0xf88) + -1;
          *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
          *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
          if ((0 < *(int *)(this + 0xf88)) && (_Memory == *(undefined4 **)(this + 0xf80))) {
            *(undefined4 *)(this + 0xf80) = (*(undefined4 **)(this + 0xf80))[3];
          }
          iVar2 = *(int *)(this + 0xf84);
          *(int *)(this + 0xf84) = iVar2 + 1;
          if (iVar2 != 0) {
            _Memory[3] = *(undefined4 *)(this + 0xf7c);
            _Memory[4] = *(undefined4 *)(*(int *)(this + 0xf7c) + 0x10);
            *(undefined4 **)(*(int *)(*(int *)(this + 0xf7c) + 0x10) + 0xc) = _Memory;
            *(undefined4 **)(*(int *)(this + 0xf7c) + 0x10) = _Memory;
            *(undefined4 *)(param_1 + 0x4c) = 0;
            return;
          }
          *(undefined4 **)(this + 0xf7c) = _Memory;
          _Memory[3] = _Memory;
          _Memory[4] = _Memory;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          return;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x48) == 0) {
        if (*(void **)(param_1 + 0x44) == (void *)0x0) {
          return;
        }
        free(*(void **)(param_1 + 0x44));
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  return;
}


// private: unsigned __int64 __thiscall RakNet::ReliabilityLayer::GetNextWeight(int)

__uint64 __thiscall RakNet::ReliabilityLayer::GetNextWeight(ReliabilityLayer *this,int param_1)

{
  ReliabilityLayer *pRVar1;
  uint *puVar2;
  __uint64 _Var3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pRVar1 = this + (param_1 + 0x111) * 8;
  uVar7 = *(uint *)pRVar1;
  uVar6 = *(uint *)(pRVar1 + 4);
  _Var3 = *(__uint64 *)pRVar1;
  if (*(int *)(this + 0x878) == 0) {
    *(undefined4 *)(this + 0x888) = 0;
    *(undefined4 *)(this + 0x88c) = 0;
    *(undefined4 *)(this + 0x890) = 3;
    *(undefined4 *)(this + 0x894) = 0;
    *(undefined4 *)(this + 0x898) = 10;
    *(undefined4 *)(this + 0x89c) = 0;
    *(undefined4 *)(this + 0x8a0) = 0x1b;
    *(undefined4 *)(this + 0x8a4) = 0;
    return _Var3;
  }
  puVar2 = *(uint **)(this + 0x874);
  uVar5 = *(uint *)(puVar2[2] + 0x54);
  uVar4 = uVar5 << ((byte)uVar5 & 0x1f);
  uVar8 = (uVar5 - uVar4) + *puVar2;
  uVar5 = ((((int)uVar5 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar5 < uVar4)) + puVar2[1] +
          (uint)CARRY4(uVar5 - uVar4,*puVar2);
  if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (uVar7 < uVar8)))) {
    uVar6 = param_1 << ((byte)param_1 & 0x1f);
    uVar7 = uVar6 + param_1 + uVar8;
    uVar6 = ((int)uVar6 >> 0x1f) + (param_1 >> 0x1f) + (uint)CARRY4(uVar6,param_1) + uVar5 +
            (uint)CARRY4(uVar6 + param_1,uVar8);
  }
  uVar5 = param_1 + 1 << ((byte)param_1 & 0x1f);
  *(uint *)pRVar1 = uVar5 + param_1 + uVar7;
  *(uint *)(pRVar1 + 4) =
       ((int)uVar5 >> 0x1f) + (param_1 >> 0x1f) + (uint)CARRY4(uVar5,param_1) + uVar6 +
       (uint)CARRY4(uVar5 + param_1,uVar7);
  return CONCAT44(uVar6,uVar7);
}
